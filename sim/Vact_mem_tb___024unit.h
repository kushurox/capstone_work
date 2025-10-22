// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vact_mem_tb.h for the primary calling header

#ifndef VERILATED_VACT_MEM_TB___024UNIT_H_
#define VERILATED_VACT_MEM_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vact_mem_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vact_mem_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vact_mem_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vact_mem_tb___024unit(Vact_mem_tb__Syms* symsp, const char* v__name);
    ~Vact_mem_tb___024unit();
    VL_UNCOPYABLE(Vact_mem_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
