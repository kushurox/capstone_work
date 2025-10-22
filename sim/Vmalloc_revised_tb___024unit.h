// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmalloc_revised_tb.h for the primary calling header

#ifndef VERILATED_VMALLOC_REVISED_TB___024UNIT_H_
#define VERILATED_VMALLOC_REVISED_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmalloc_revised_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmalloc_revised_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vmalloc_revised_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmalloc_revised_tb___024unit(Vmalloc_revised_tb__Syms* symsp, const char* v__name);
    ~Vmalloc_revised_tb___024unit();
    VL_UNCOPYABLE(Vmalloc_revised_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
