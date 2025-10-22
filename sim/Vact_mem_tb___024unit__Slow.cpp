// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vact_mem_tb.h for the primary calling header

#include "Vact_mem_tb__pch.h"
#include "Vact_mem_tb__Syms.h"
#include "Vact_mem_tb___024unit.h"

void Vact_mem_tb___024unit___ctor_var_reset(Vact_mem_tb___024unit* vlSelf);

Vact_mem_tb___024unit::Vact_mem_tb___024unit(Vact_mem_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vact_mem_tb___024unit___ctor_var_reset(this);
}

void Vact_mem_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vact_mem_tb___024unit::~Vact_mem_tb___024unit() {
}
