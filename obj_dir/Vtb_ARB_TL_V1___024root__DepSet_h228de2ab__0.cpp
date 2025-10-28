// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ARB_TL_V1.h for the primary calling header

#include "Vtb_ARB_TL_V1__pch.h"
#include "Vtb_ARB_TL_V1__Syms.h"
#include "Vtb_ARB_TL_V1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__act(Vtb_ARB_TL_V1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ARB_TL_V1___024root___eval_triggers__act(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_triggers__act\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((1U & ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack) 
                                                 >> 1U)) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h603e4c74__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__d_valid) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__d_valid__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__clk__0 
        = vlSelfRef.tb_ARB_TL_V1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__rst_n__0 
        = vlSelfRef.tb_ARB_TL_V1__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h603e4c74__0 = (1U & 
                                              ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack) 
                                               >> 1U));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__d_valid__0 
        = vlSelfRef.tb_ARB_TL_V1__DOT__d_valid;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ARB_TL_V1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
