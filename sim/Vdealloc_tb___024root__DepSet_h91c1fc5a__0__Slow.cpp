// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdealloc_tb.h for the primary calling header

#include "Vdealloc_tb__pch.h"
#include "Vdealloc_tb__Syms.h"
#include "Vdealloc_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__stl(Vdealloc_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdealloc_tb___024root___eval_triggers__stl(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_triggers__stl\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdealloc_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
