#pragma once
#include "compare_types.h"
#include "md_calc.h"


extern "C"
{
   // PME grids.
   struct PCHG
   {};
   struct MPOLE
   {};
   struct UIND
   {};
   struct UIND2
   {};
   struct DISP
   {};


   // Energy versions.
   struct Eng
      : public TINKER_NAMESPACE::EnergyVersion<TINKER_NAMESPACE::calc::v0>
   {};
   typedef Eng EnergyVersion0;
   struct EngGradVir
      : public TINKER_NAMESPACE::EnergyVersion<TINKER_NAMESPACE::calc::v1>
   {};
   typedef Eng EnergyVersion1;
   struct EngAlyz
      : public TINKER_NAMESPACE::EnergyVersion<TINKER_NAMESPACE::calc::v3>
   {};
   typedef Eng EnergyVersion3;
   struct EngGrad
      : public TINKER_NAMESPACE::EnergyVersion<TINKER_NAMESPACE::calc::v4>
   {};
   typedef EngGrad EnergyVersion4;
   struct Grad
      : public TINKER_NAMESPACE::EnergyVersion<TINKER_NAMESPACE::calc::v5>
   {};
   typedef Eng EnergyVersion5;
   struct GradVir
      : public TINKER_NAMESPACE::EnergyVersion<TINKER_NAMESPACE::calc::v6>
   {};
   typedef Eng EnergyVersion6;


   // Bond terms.
   struct HARMONIC
   {};
   struct MORSE
   {};
}
