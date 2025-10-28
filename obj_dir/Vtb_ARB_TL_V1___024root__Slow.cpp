// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ARB_TL_V1.h for the primary calling header

#include "Vtb_ARB_TL_V1__pch.h"
#include "Vtb_ARB_TL_V1__Syms.h"
#include "Vtb_ARB_TL_V1___024root.h"

void Vtb_ARB_TL_V1___024root___ctor_var_reset(Vtb_ARB_TL_V1___024root* vlSelf);

Vtb_ARB_TL_V1___024root::Vtb_ARB_TL_V1___024root(Vtb_ARB_TL_V1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ARB_TL_V1___024root___ctor_var_reset(this);
}

void Vtb_ARB_TL_V1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ARB_TL_V1___024root::~Vtb_ARB_TL_V1___024root() {
}
