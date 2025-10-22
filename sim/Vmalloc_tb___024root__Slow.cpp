// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_tb.h for the primary calling header

#include "Vmalloc_tb__pch.h"
#include "Vmalloc_tb__Syms.h"
#include "Vmalloc_tb___024root.h"

void Vmalloc_tb___024root___ctor_var_reset(Vmalloc_tb___024root* vlSelf);

Vmalloc_tb___024root::Vmalloc_tb___024root(Vmalloc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmalloc_tb___024root___ctor_var_reset(this);
}

void Vmalloc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmalloc_tb___024root::~Vmalloc_tb___024root() {
}
