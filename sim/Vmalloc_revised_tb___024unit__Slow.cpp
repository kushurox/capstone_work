// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_revised_tb.h for the primary calling header

#include "Vmalloc_revised_tb__pch.h"
#include "Vmalloc_revised_tb__Syms.h"
#include "Vmalloc_revised_tb___024unit.h"

void Vmalloc_revised_tb___024unit___ctor_var_reset(Vmalloc_revised_tb___024unit* vlSelf);

Vmalloc_revised_tb___024unit::Vmalloc_revised_tb___024unit(Vmalloc_revised_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmalloc_revised_tb___024unit___ctor_var_reset(this);
}

void Vmalloc_revised_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmalloc_revised_tb___024unit::~Vmalloc_revised_tb___024unit() {
}
