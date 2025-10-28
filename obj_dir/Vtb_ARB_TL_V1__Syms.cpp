// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_ARB_TL_V1__pch.h"
#include "Vtb_ARB_TL_V1.h"
#include "Vtb_ARB_TL_V1___024root.h"
#include "Vtb_ARB_TL_V1___024unit.h"

// FUNCTIONS
Vtb_ARB_TL_V1__Syms::~Vtb_ARB_TL_V1__Syms()
{
}

Vtb_ARB_TL_V1__Syms::Vtb_ARB_TL_V1__Syms(VerilatedContext* contextp, const char* namep, Vtb_ARB_TL_V1* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(307);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
