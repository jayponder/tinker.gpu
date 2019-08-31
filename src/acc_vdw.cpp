#include "acc_add.h"
#include "acc_image.h"
#include "acc_mathfunc.h"
#include "acc_switch.h"
#include "e_vdw.h"
#include "md.h"
#include "nblist.h"

// MAYBE_UNUSED static const int GRID_DIM = 32;
// MAYBE_UNUSED static const int GRID_DIM = 64;
MAYBE_UNUSED static const int GRID_DIM = 128;
// MAYBE_UNUSED static const int GRID_DIM = 256;
// MAYBE_UNUSED static const int BLOCK_DIM = 32;
MAYBE_UNUSED static const int BLOCK_DIM = 64;
// MAYBE_UNUSED static const int BLOCK_DIM = 128;

// TODO: test lj, buck, mm3hb, gauss, and mutant
// TODO: add vdw correction

TINKER_NAMESPACE_BEGIN
void evdw_reduce_xyz() {
  const auto* ired = ired_vec.data();
  const auto* kred = kred_vec.data();
  auto* xred = xred_vec.data();
  auto* yred = yred_vec.data();
  auto* zred = zred_vec.data();

  #pragma acc parallel deviceptr(x,y,z,ired,kred,xred,yred,zred)
  #pragma acc loop independent
  for (int i = 0; i < n; ++i) {
    int iv = ired[i];
    real rdn = kred[i];
    xred[i] = rdn * (x[i] - x[iv]) + x[iv];
    yred[i] = rdn * (y[i] - y[iv]) + y[iv];
    zred[i] = rdn * (z[i] - z[iv]) + z[iv];
  }
}

#pragma acc routine seq
template <int DO_G>
inline void ehal_pair(real rik,                                             //
                      real rv, real eps, real ghal, real dhal,              //
                      real vscalek, real vlambda, real scexp, real scalpha, //
                      real& __restrict__ e, real& __restrict__ de) {
  eps *= vscalek;
  real rho = rik * REAL_RECIP(rv);
  real rho6 = REAL_POW(rho, 6);
  real rho7 = rho6 * rho;
  eps *= REAL_POW(vlambda, scexp);
  real scal = scalpha * REAL_POW(1 - vlambda, 2);
  real s1 = REAL_RECIP(scal + REAL_POW(rho + dhal, 7));
  real s2 = REAL_RECIP(scal + rho7 + ghal);
  real t1 = REAL_POW(1 + dhal, 7) * s1;
  real t2 = (1 + ghal) * s2;
  e = eps * t1 * (t2 - 2);
  if_constexpr(DO_G) {
    real dt1drho = -7 * REAL_POW(rho + dhal, 6) * t1 * s1;
    real dt2drho = -7 * rho6 * t2 * s2;
    de = eps * (dt1drho * (t2 - 2) + t1 * dt2drho) * REAL_RECIP(rv);
  }
}

template <int USE, evdw_t VDWTYP>
void evdw_tmpl() {
  constexpr int do_e = USE & calc::energy;
  constexpr int do_a = USE & calc::analyz;
  constexpr int do_g = USE & calc::grad;
  constexpr int do_v = USE & calc::virial;
  static_assert(do_v ? do_g : true, "");
  static_assert(do_a ? do_e : true, "");

  const real cut = vdw_switch_cut;
  const real off = vdw_switch_off;
  const real cut2 = cut * cut;
  const real off2 = off * off;
  const int maxnlst = vlist_unit->maxnlst;
  const auto* vlst = vlist_unit.deviceptr();

  auto* nev = ev_handle.ne()->buffer();
  auto* ev = ev_handle.e()->buffer();
  auto* vir_ev = ev_handle.vir()->buffer();
  auto bufsize = ev_handle.buffer_size();

  const auto* ired = ired_vec.data();
  const auto* kred = kred_vec.data();
  const auto* xred = xred_vec.data();
  const auto* yred = yred_vec.data();
  const auto* zred = zred_vec.data();
  const auto* jvdw = jvdw_vec.data();
  const auto* njvdw = njvdw_vec.data();
  const auto* radmin = radmin_vec.data();
  const auto* epsilon = epsilon_vec.data();
  const auto* vlam = vlam_vec.data();

#define DEVICE_PTRS_                                                           \
  x, y, z, gx, gy, gz, box, ired, kred, xred, yred, zred, jvdw, njvdw, radmin, \
      epsilon, vlam, nev, ev, vir_ev

  #pragma acc parallel num_gangs(GRID_DIM) vector_length(BLOCK_DIM)\
              deviceptr(DEVICE_PTRS_,\
              vlst)
  #pragma acc loop gang independent
  for (int i = 0; i < n; ++i) {
    int iv = ired[i];
    real redi = kred[i];
    real rediv = 1 - redi;
    int it = jvdw[i];
    real xi, yi, zi;
    xi = xred[i];
    yi = yred[i];
    zi = zred[i];
    real lam1 = vlam[i];

    int base_it = it * (*njvdw);
    int nvlsti = vlst->nlst[i];
    int base = i * maxnlst;
    #pragma acc loop vector independent
    for (int kk = 0; kk < nvlsti; ++kk) {
      int offset = kk & (bufsize - 1);
      int k = vlst->lst[base + kk];
      int kv = ired[k];
      int kt = jvdw[k];
      real xr, yr, zr;
      xr = xi - xred[k];
      yr = yi - yred[k];
      zr = zi - zred[k];
      real vlambda = vlam[k];

      if (vcouple == vcouple_decouple) {
        vlambda = (lam1 == vlambda ? 1 : (lam1 < vlambda ? lam1 : vlambda));
      } else if (vcouple == vcouple_annihilate) {
        vlambda = (lam1 < vlambda ? lam1 : vlambda);
      }

      image(xr, yr, zr, box);
      real rik2 = xr * xr + yr * yr + zr * zr;
      if (rik2 <= off2) {
        real rik = REAL_SQRT(rik2);
        real rv = radmin[base_it + kt];
        real eps = epsilon[base_it + kt];

        real e;
        real de;
        if_constexpr(VDWTYP == evdw_t::hal) {
          ehal_pair<do_g>(rik,                        //
                          rv, eps, ghal, dhal,        //
                          1, vlambda, scexp, scalpha, //
                          e, de);
        }

        if (rik2 > cut2) {
          real taper, dtaper;
          switch_taper5<do_g>(rik, cut, off, taper, dtaper);
          if_constexpr(do_g) de = e * dtaper + de * taper;
          if_constexpr(do_e) e = e * taper;
        }

        // Increment the energy, gradient, and virial.

        if_constexpr(do_e) {
          atomic_add_value(e, ev, offset);

          if_constexpr(do_a) {
            if (e != 0) {
              atomic_add_value(1, nev, offset);
            }
          }
        }

        if_constexpr(do_g) {
          de *= REAL_RECIP(rik);
          real dedx = de * xr;
          real dedy = de * yr;
          real dedz = de * zr;

          #pragma acc atomic update
          gx[i] += dedx * redi;
          #pragma acc atomic update
          gy[i] += dedy * redi;
          #pragma acc atomic update
          gz[i] += dedz * redi;
          #pragma acc atomic update
          gx[iv] += dedx * rediv;
          #pragma acc atomic update
          gy[iv] += dedy * rediv;
          #pragma acc atomic update
          gz[iv] += dedz * rediv;

          real redk = kred[k];
          real redkv = 1 - redk;
          #pragma acc atomic update
          gx[k] -= dedx * redk;
          #pragma acc atomic update
          gy[k] -= dedy * redk;
          #pragma acc atomic update
          gz[k] -= dedz * redk;
          #pragma acc atomic update
          gx[kv] -= dedx * redkv;
          #pragma acc atomic update
          gy[kv] -= dedy * redkv;
          #pragma acc atomic update
          gz[kv] -= dedz * redkv;

          if_constexpr(do_v) {
            real vxx = xr * dedx;
            real vyx = yr * dedx;
            real vzx = zr * dedx;
            real vyy = yr * dedy;
            real vzy = zr * dedy;
            real vzz = zr * dedz;

            int offv = offset * 16;
            atomic_add_value(vxx, vir_ev, offv + 0);
            atomic_add_value(vyx, vir_ev, offv + 1);
            atomic_add_value(vzx, vir_ev, offv + 2);
            atomic_add_value(vyx, vir_ev, offv + 3);
            atomic_add_value(vyy, vir_ev, offv + 4);
            atomic_add_value(vzy, vir_ev, offv + 5);
            atomic_add_value(vzx, vir_ev, offv + 6);
            atomic_add_value(vzy, vir_ev, offv + 7);
            atomic_add_value(vzz, vir_ev, offv + 8);
          } // end if (do_v)
        }   // end if (do_g)
      }
    } // end for (int kk)
  }   // end for (int i)

  const auto* vdw_excluded_ = vdw_excluded_vec_.data();
  const auto* vdw_excluded_scale_ = vdw_excluded_scale_vec_.data();

  #pragma acc parallel\
              deviceptr(DEVICE_PTRS_,\
              vdw_excluded_,vdw_excluded_scale_)
  #pragma acc loop independent
  for (int ii = 0; ii < nvdw_excluded_; ++ii) {
    int offset = ii & (bufsize - 1);

    int i = vdw_excluded_[ii][0];
    int k = vdw_excluded_[ii][1];
    real vscale = vdw_excluded_scale_[ii];

    int iv = ired[i];
    real redi = kred[i];
    real rediv = 1 - redi;
    int it = jvdw[i];
    real xi, yi, zi;
    xi = xred[i];
    yi = yred[i];
    zi = zred[i];
    real lam1 = vlam[i];

    int base_it = it * (*njvdw);
    int kv = ired[k];
    int kt = jvdw[k];
    real xr, yr, zr;
    xr = xi - xred[k];
    yr = yi - yred[k];
    zr = zi - zred[k];
    real vlambda = vlam[k];

    if (vcouple == vcouple_decouple) {
      vlambda = (lam1 == vlambda ? 1 : (lam1 < vlambda ? lam1 : vlambda));
    } else if (vcouple == vcouple_annihilate) {
      vlambda = (lam1 < vlambda ? lam1 : vlambda);
    }

    image(xr, yr, zr, box);
    real rik2 = xr * xr + yr * yr + zr * zr;
    if (rik2 <= off2) {
      real rik = REAL_SQRT(rik2);
      real rv = radmin[base_it + kt];
      real eps = epsilon[base_it + kt];

      real e;
      real de;
      if_constexpr(VDWTYP == evdw_t::hal) {
        ehal_pair<do_g>(rik,                             //
                        rv, eps, ghal, dhal,             //
                        vscale, vlambda, scexp, scalpha, //
                        e, de);
      }

      if (rik2 > cut2) {
        real taper, dtaper;
        switch_taper5<do_g>(rik, cut, off, taper, dtaper);
        if_constexpr(do_g) de = e * dtaper + de * taper;
        if_constexpr(do_e) e = e * taper;
      }
      if_constexpr(do_e) {
        atomic_add_value(e, ev, offset);

        if_constexpr(do_a) {
          if (e != 0) {
            atomic_add_value(-1, nev, offset);
          }
        }
      }

      if_constexpr(do_g) {
        de *= REAL_RECIP(rik);
        real dedx = de * xr;
        real dedy = de * yr;
        real dedz = de * zr;

        #pragma acc atomic update
        gx[i] += dedx * redi;
        #pragma acc atomic update
        gy[i] += dedy * redi;
        #pragma acc atomic update
        gz[i] += dedz * redi;
        #pragma acc atomic update
        gx[iv] += dedx * rediv;
        #pragma acc atomic update
        gy[iv] += dedy * rediv;
        #pragma acc atomic update
        gz[iv] += dedz * rediv;

        real redk = kred[k];
        real redkv = 1 - redk;
        #pragma acc atomic update
        gx[k] -= dedx * redk;
        #pragma acc atomic update
        gy[k] -= dedy * redk;
        #pragma acc atomic update
        gz[k] -= dedz * redk;
        #pragma acc atomic update
        gx[kv] -= dedx * redkv;
        #pragma acc atomic update
        gy[kv] -= dedy * redkv;
        #pragma acc atomic update
        gz[kv] -= dedz * redkv;

        if_constexpr(do_v) {
          real vxx = xr * dedx;
          real vyx = yr * dedx;
          real vzx = zr * dedx;
          real vyy = yr * dedy;
          real vzy = zr * dedy;
          real vzz = zr * dedz;

          int offv = offset * 16;
          atomic_add_value(vxx, vir_ev, offv + 0);
          atomic_add_value(vyx, vir_ev, offv + 1);
          atomic_add_value(vzx, vir_ev, offv + 2);
          atomic_add_value(vyx, vir_ev, offv + 3);
          atomic_add_value(vyy, vir_ev, offv + 4);
          atomic_add_value(vzy, vir_ev, offv + 5);
          atomic_add_value(vzx, vir_ev, offv + 6);
          atomic_add_value(vzy, vir_ev, offv + 7);
          atomic_add_value(vzz, vir_ev, offv + 8);
        } // end if (do_v)
      }   // end if (do_g)
    }
  } // end for (int ii)
}

#define TINKER_EVDW_IMPL_(typ)                                                 \
  void evdw_##typ##_acc_impl_(int vers) {                                      \
    evdw_reduce_xyz();                                                         \
    if (vers == calc::v0)                                                      \
      evdw_tmpl<calc::v0, evdw_t ::typ>();                                     \
    else if (vers == calc::v1)                                                 \
      evdw_tmpl<calc::v1, evdw_t ::typ>();                                     \
    else if (vers == calc::v3)                                                 \
      evdw_tmpl<calc::v3, evdw_t ::typ>();                                     \
    else if (vers == calc::v4)                                                 \
      evdw_tmpl<calc::v4, evdw_t ::typ>();                                     \
    else if (vers == calc::v5)                                                 \
      evdw_tmpl<calc::v5, evdw_t ::typ>();                                     \
    else if (vers == calc::v6)                                                 \
      evdw_tmpl<calc::v6, evdw_t ::typ>();                                     \
  }
TINKER_EVDW_IMPL_(lj);
TINKER_EVDW_IMPL_(buck);
TINKER_EVDW_IMPL_(mm3hb);
TINKER_EVDW_IMPL_(hal);
TINKER_EVDW_IMPL_(gauss);
#undef TINKER_EVDW_IMPL_
#undef TINKER_EVDW_T_PASTE_

#undef DEVICE_PTRS_

TINKER_NAMESPACE_END
