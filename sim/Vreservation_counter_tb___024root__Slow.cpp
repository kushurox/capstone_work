// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreservation_counter_tb.h for the primary calling header

#include "Vreservation_counter_tb__pch.h"
#include "Vreservation_counter_tb__Syms.h"
#include "Vreservation_counter_tb___024root.h"

void Vreservation_counter_tb___024root___ctor_var_reset(Vreservation_counter_tb___024root* vlSelf);

Vreservation_counter_tb___024root::Vreservation_counter_tb___024root(Vreservation_counter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vreservation_counter_tb___024root___ctor_var_reset(this);
}

void Vreservation_counter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vreservation_counter_tb___024root::~Vreservation_counter_tb___024root() {
}
