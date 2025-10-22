// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreservation_counter_tb.h for the primary calling header

#ifndef VERILATED_VRESERVATION_COUNTER_TB___024UNIT_H_
#define VERILATED_VRESERVATION_COUNTER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vreservation_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreservation_counter_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vreservation_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreservation_counter_tb___024unit(Vreservation_counter_tb__Syms* symsp, const char* v__name);
    ~Vreservation_counter_tb___024unit();
    VL_UNCOPYABLE(Vreservation_counter_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
