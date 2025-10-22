// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdealloc_tb.h for the primary calling header

#ifndef VERILATED_VDEALLOC_TB___024UNIT_H_
#define VERILATED_VDEALLOC_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdealloc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdealloc_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdealloc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdealloc_tb___024unit(Vdealloc_tb__Syms* symsp, const char* v__name);
    ~Vdealloc_tb___024unit();
    VL_UNCOPYABLE(Vdealloc_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
