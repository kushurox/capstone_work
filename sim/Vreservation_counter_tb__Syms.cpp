// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vreservation_counter_tb__pch.h"
#include "Vreservation_counter_tb.h"
#include "Vreservation_counter_tb___024root.h"
#include "Vreservation_counter_tb___024unit.h"

// FUNCTIONS
Vreservation_counter_tb__Syms::~Vreservation_counter_tb__Syms()
{
}

Vreservation_counter_tb__Syms::Vreservation_counter_tb__Syms(VerilatedContext* contextp, const char* namep, Vreservation_counter_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(48);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
