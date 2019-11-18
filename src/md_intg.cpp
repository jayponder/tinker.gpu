#include "io_fort_str.h"
#include "md.h"
#include "nblist.h"
#include "spatial.h"
#include <cassert>
#include <tinker/detail/bath.hh>
#include <tinker/detail/inform.hh>
#include <tinker/detail/mdstuf.hh>

TINKER_NAMESPACE_BEGIN
void md_data(rc_op op)
{
   if ((calc::md & rc_flag) == 0)
      return;

   rc_man intg42_{integrate_data, op};
   rc_man save42_{mdsave_data, op};
}

static void (*integrator_)(int, real);

void integrate_data(rc_op op)
{
   if (op & rc_init) {
      if (bath::isothermal) {
         fstr_view th = bath::thermostat;
         if (th == "BERENDSEN")
            thermostat = thermo_berendsen;
         else if (th == "BUSSI")
            thermostat = thermo_bussi;
         else if (th == "ANDERSEN")
            thermostat = thermo_andersen;
         else if (th == "NOSE-HOOVER")
            thermostat = thermo_nose_hoover_chain;
         else
            assert(false);
      } else {
         thermostat = thermo_null;
      }

      if (bath::isobaric) {
         fstr_view br = bath::barostat;
         if (br == "BERENDSEN")
            barostat = baro_berendsen;
         else if (br == "BUSSI")
            barostat = baro_bussi;
         else if (br == "NOSE-HOOVER")
            barostat = baro_nose_hoover_chain;
         else if (br == "MONTECARLO")
            barostat = baro_montecarlo;
         else
            assert(false);
      } else {
         barostat = baro_null;
      }

      fstr_view itg = mdstuf::integrate;
      integrator_ = nullptr;
      if (itg == "VERLET") {
         integrator_ = velocity_verlet;
      } else if (itg == "STOCHASTIC") {
      } else if (itg == "BAOAB") {
      } else if (itg == "BUSSI") {
      } else if (itg == "NOSE-HOOVER") {
      } else if (itg == "GHMC") {
      } else if (itg == "RIGIDBODY") {
      } else if (itg == "RESPA") {
      } else {
         // beeman
      }
   }
}

extern void kinetic_acc_impl_(real& temp);
void kinetic(real& temp)
{
   kinetic_acc_impl_(temp);
}

extern void thermo_bussi_acc_impl_(real dt, real temp);
void temper(real dt, real& temp)
{
   kinetic(temp);
   if (thermostat == thermo_null)
      return;

   if (thermostat == thermo_bussi)
      thermo_bussi_acc_impl_(dt, temp);
   else
      assert(false);

   kinetic(temp);
}

extern void mdrest_acc_impl_(int istep);
void mdrest(int istep)
{
   mdrest_acc_impl_(istep);
}

extern void propagate_xyz_acc(real dt);
void propagate_xyz(real dt)
{
   propagate_xyz_acc(dt);
   nblist_data(rc_evolve);
}

extern void propagate_velocity_acc(real dt);
void propagate_velocity(real dt)
{
   propagate_velocity_acc(dt);
}

void propagate(int nsteps, real dt_ps, void (*itg)(int, real))
{
   if (itg == nullptr)
      itg = integrator_;

   for (int istep = 1; istep <= nsteps; ++istep) {
      itg(istep, dt_ps);

      // mdstat
      if (istep % inform::iwrite == 0)
         mdsave_async(istep, dt_ps);
      mdrest(istep);
   }
   mdsave_synchronize();
}
TINKER_NAMESPACE_END
