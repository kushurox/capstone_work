// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ARB_TL_V1.h for the primary calling header

#ifndef VERILATED_VTB_ARB_TL_V1___024UNIT_H_
#define VERILATED_VTB_ARB_TL_V1___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ARB_TL_V1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ARB_TL_V1___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_ARB_TL_V1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ARB_TL_V1___024unit(Vtb_ARB_TL_V1__Syms* symsp, const char* v__name);
    ~Vtb_ARB_TL_V1___024unit();
    VL_UNCOPYABLE(Vtb_ARB_TL_V1___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
