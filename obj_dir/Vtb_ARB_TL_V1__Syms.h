// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ARB_TL_V1__SYMS_H_
#define VERILATED_VTB_ARB_TL_V1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ARB_TL_V1.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ARB_TL_V1___024root.h"
#include "Vtb_ARB_TL_V1___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_ARB_TL_V1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ARB_TL_V1* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_ARB_TL_V1___024root        TOP;

    // CONSTRUCTORS
    Vtb_ARB_TL_V1__Syms(VerilatedContext* contextp, const char* namep, Vtb_ARB_TL_V1* modelp);
    ~Vtb_ARB_TL_V1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
