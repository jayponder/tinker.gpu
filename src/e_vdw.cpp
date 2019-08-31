#include "e_vdw.h"
#include "array.h"
#include "ext/tinker/detail/couple.hh"
#include "ext/tinker/detail/mutant.hh"
#include "ext/tinker/detail/sizes.hh"
#include "ext/tinker/detail/vdw.hh"
#include "ext/tinker/detail/vdwpot.hh"
#include "io_fort_str.h"
#include "md.h"
#include "potent.h"
#include "switch.h"
#include <map>

TINKER_NAMESPACE_BEGIN
void evdw_data(rc_op op) {
  if (!use_potent(vdw_term))
    return;

  typedef int new_type;
  typedef int old_type;
  static std::map<old_type, new_type> jmap;
  static std::vector<new_type> jvec;
  static std::vector<new_type> jvdwbuf;
  static int jcount;

  if (op & rc_dealloc) {
    // local static members
    jmap.clear();
    jvec.clear();
    jvdwbuf.clear();
    jcount = 0;

    nvdw_excluded_ = 0;

    ev_handle.dealloc();
  }

  if (op & rc_alloc) {
    ired_vec.reserve(n);
    kred_vec.reserve(n);
    xred_vec.reserve(n);
    yred_vec.reserve(n);
    zred_vec.reserve(n);

    jvdw_vec.reserve(n);
    njvdw_vec.reserve(1);

    jvdwbuf.resize(n);
    assert(jmap.size() == 0);
    assert(jvec.size() == 0);
    jcount = 0;
    for (int i = 0; i < n; ++i) {
      int jt = vdw::jvdw[i] - 1;
      auto iter = jmap.find(jt);
      if (iter == jmap.end()) {
        jvdwbuf[i] = jcount;
        jvec.push_back(jt);
        jmap[jt] = jcount;
        ++jcount;
      } else {
        jvdwbuf[i] = iter->second;
      }
    }

    radmin_vec.reserve(jcount * jcount);
    epsilon_vec.reserve(jcount * jcount);

    vlam_vec.reserve(n);

    v2scale = vdwpot::v2scale;
    v3scale = vdwpot::v3scale;
    v4scale = vdwpot::v4scale;
    v5scale = vdwpot::v5scale;

    nvdw_excluded_ = 0;
    std::vector<int> exclik;
    std::vector<real> exclvs;
    // see also attach.f
    const int maxn13 = 3 * sizes::maxval;
    const int maxn14 = 9 * sizes::maxval;
    const int maxn15 = 27 * sizes::maxval;
    for (int i = 0; i < n; ++i) {
      int nn;
      int bask;

      if (v2scale != 1) {
        nn = couple::n12[i];
        for (int j = 0; j < nn; ++j) {
          int k = couple::i12[i][j];
          k -= 1;
          if (k > i) {
            exclik.push_back(i);
            exclik.push_back(k);
            exclvs.push_back(v2scale - 1);
          }
        }
      }

      if (v3scale != 1) {
        nn = couple::n13[i];
        bask = i * maxn13;
        for (int j = 0; j < nn; ++j) {
          int k = couple::i13[bask + j];
          k -= 1;
          if (k > i) {
            exclik.push_back(i);
            exclik.push_back(k);
            exclvs.push_back(v3scale - 1);
          }
        }
      }

      if (v4scale != 1) {
        nn = couple::n14[i];
        bask = i * maxn14;
        for (int j = 0; j < nn; ++j) {
          int k = couple::i14[bask + j];
          k -= 1;
          if (k > i) {
            exclik.push_back(i);
            exclik.push_back(k);
            exclvs.push_back(v4scale - 1);
          }
        }
      }

      if (v5scale != 1) {
        nn = couple::n15[i];
        bask = i * maxn15;
        for (int j = 0; j < nn; ++j) {
          int k = couple::i15[bask + j];
          k -= 1;
          if (k > i) {
            exclik.push_back(i);
            exclik.push_back(k);
            exclvs.push_back(v5scale - 1);
          }
        }
      }
    }
    nvdw_excluded_ = exclvs.size();
    vdw_excluded_vec_.reserve(2 * nvdw_excluded_);
    vdw_excluded_scale_vec_.reserve(nvdw_excluded_);
    vdw_excluded_vec_.copyin(exclik.data(), 2 * nvdw_excluded_);
    vdw_excluded_scale_vec_.copyin(exclvs.data(), nvdw_excluded_);

    ev_handle.alloc(n);
  }

  if (op & rc_init) {
    fstr_view str = vdwpot::vdwtyp;
    if (str == "LENNARD-JONES")
      vdwtyp = evdw_t::lj;
    else if (str == "BUCKINGHAM")
      vdwtyp = evdw_t::buck;
    else if (str == "MM3-HBOND")
      vdwtyp = evdw_t::mm3hb;
    else if (str == "BUFFERED-14-7")
      vdwtyp = evdw_t::hal;
    else if (str == "GAUSSIAN")
      vdwtyp = evdw_t::gauss;
    else
      assert(false);

    switch_cut_off(switch_vdw, vdw_switch_cut, vdw_switch_off);

    ghal = vdwpot::ghal;
    dhal = vdwpot::dhal;
    scexp = mutant::scexp;
    scalpha = mutant::scalpha;
    vcouple = mutant::vcouple;

    std::vector<int> iredbuf(n);
    std::vector<double> kredbuf(n);
    for (int i = 0; i < n; ++i) {
      int jt = vdw::ired[i] - 1;
      iredbuf[i] = jt;
      kredbuf[i] = vdw::kred[i];
    }
    ired_vec.copyin(iredbuf.data(), n);
    kred_vec.copyin(kredbuf.data(), n);

    jvdw_vec.copyin(jvdwbuf.data(), n);
    njvdw_vec.copyin(&jcount, 1);

    // see also kvdw.f
    std::vector<double> radvec, epsvec;
    for (int it_new = 0; it_new < jcount; ++it_new) {
      int it_old = jvec[it_new];
      int base = it_old * sizes::maxclass;
      for (int jt_new = 0; jt_new < jcount; ++jt_new) {
        int jt_old = jvec[jt_new];
        int offset = base + jt_old;
        radvec.push_back(vdw::radmin[offset]);
        epsvec.push_back(vdw::epsilon[offset]);
      }
    }
    radmin_vec.copyin(radvec.data(), jcount * jcount);
    epsilon_vec.copyin(epsvec.data(), jcount * jcount);

    std::vector<double> vlamvec(n);
    for (int i = 0; i < n; ++i) {
      if (mutant::mut[i]) {
        vlamvec[i] = mutant::vlambda;
      } else {
        vlamvec[i] = 1;
      }
    }
    vlam_vec.copyin(vlamvec.data(), n);
  }
}

extern void evdw_lj_acc_impl_(int vers);
void evdw_lj(int vers) { evdw_lj_acc_impl_(vers); }

extern void evdw_buck_acc_impl_(int vers);
void evdw_buck(int vers) { evdw_buck_acc_impl_(vers); }

extern void evdw_mm3hb_acc_impl_(int vers);
void evdw_mm3hb(int vers) { evdw_mm3hb_acc_impl_(vers); }

extern void evdw_hal_acc_impl_(int vers);
void evdw_hal(int vers) { evdw_hal_acc_impl_(vers); }

extern void evdw_gauss_acc_impl_(int vers);
void evdw_gauss(int vers) { evdw_gauss_acc_impl_(vers); }

void evdw(int vers) {
  if (vdwtyp == evdw_t::lj)
    evdw_lj(vers);
  else if (vdwtyp == evdw_t::buck)
    evdw_buck(vers);
  else if (vdwtyp == evdw_t::mm3hb)
    evdw_mm3hb(vers);
  else if (vdwtyp == evdw_t::hal)
    evdw_hal(vers);
  else if (vdwtyp == evdw_t::gauss)
    evdw_gauss(vers);
  else
    assert(false);
}
TINKER_NAMESPACE_END
