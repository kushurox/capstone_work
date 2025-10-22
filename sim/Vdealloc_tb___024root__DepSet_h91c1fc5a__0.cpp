// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdealloc_tb.h for the primary calling header

#include "Vdealloc_tb__pch.h"
#include "Vdealloc_tb__Syms.h"
#include "Vdealloc_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__act(Vdealloc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdealloc_tb___024root___eval_triggers__act(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_triggers__act\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h98ba7952__0;
    __Vtrigprevexpr_h98ba7952__0 = 0;
    // Body
    __Vtrigprevexpr_h98ba7952__0 = (1U & (~ (IData)(vlSelfRef.dealloc_tb__DOT__act_bsy)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.dealloc_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.dealloc_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(__Vtrigprevexpr_h98ba7952__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h98ba7952__1)));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.dealloc_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.dealloc_tb__DOT__dealloc_rdy) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__dealloc_rdy__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__clk__0 
        = vlSelfRef.dealloc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__rst_n__0 
        = vlSelfRef.dealloc_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h98ba7952__1 = __Vtrigprevexpr_h98ba7952__0;
    vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__dealloc_rdy__0 
        = vlSelfRef.dealloc_tb__DOT__dealloc_rdy;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdealloc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
