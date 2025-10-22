// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vact_mem_tb.h for the primary calling header

#include "Vact_mem_tb__pch.h"
#include "Vact_mem_tb__Syms.h"
#include "Vact_mem_tb___024root.h"

void Vact_mem_tb___024root___ctor_var_reset(Vact_mem_tb___024root* vlSelf);

Vact_mem_tb___024root::Vact_mem_tb___024root(Vact_mem_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vact_mem_tb___024root___ctor_var_reset(this);
}

void Vact_mem_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vact_mem_tb___024root::~Vact_mem_tb___024root() {
}
