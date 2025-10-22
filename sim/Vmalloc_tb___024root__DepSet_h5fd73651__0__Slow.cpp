// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_tb.h for the primary calling header

#include "Vmalloc_tb__pch.h"
#include "Vmalloc_tb___024root.h"

VL_ATTR_COLD void Vmalloc_tb___024root___eval_static(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_static\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__clk__0 
        = vlSelfRef.malloc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__rst_n__0 
        = vlSelfRef.malloc_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__rdy__0 
        = vlSelfRef.malloc_tb__DOT__rdy;
}

VL_ATTR_COLD void Vmalloc_tb___024root___eval_final(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_final\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmalloc_tb___024root___eval_settle(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_settle\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_tb___024root___dump_triggers__act(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___dump_triggers__act\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge malloc_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge malloc_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge malloc_tb.rdy)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_tb___024root___dump_triggers__nba(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___dump_triggers__nba\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge malloc_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge malloc_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge malloc_tb.rdy)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmalloc_tb___024root___ctor_var_reset(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___ctor_var_reset\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->malloc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->malloc_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->malloc_tb__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->malloc_tb__DOT__core_id = VL_RAND_RESET_I(4);
    vlSelf->malloc_tb__DOT__num_blocks = VL_RAND_RESET_I(10);
    vlSelf->malloc_tb__DOT__read_mask = VL_RAND_RESET_I(16);
    vlSelf->malloc_tb__DOT__write_mask = VL_RAND_RESET_I(16);
    vlSelf->malloc_tb__DOT__base_addr = VL_RAND_RESET_I(32);
    vlSelf->malloc_tb__DOT__rdy = VL_RAND_RESET_I(1);
    vlSelf->malloc_tb__DOT__bsy = VL_RAND_RESET_I(1);
    vlSelf->malloc_tb__DOT__err = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(480, vlSelf->malloc_tb__DOT____Vcellout__dut__act);
    vlSelf->malloc_tb__DOT__dut__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->malloc_tb__DOT__dut__DOT__e = VL_RAND_RESET_Q(48);
    vlSelf->malloc_tb__DOT__dut__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->malloc_tb__DOT__dut__DOT__num_blocks_reg = VL_RAND_RESET_I(10);
    vlSelf->malloc_tb__DOT__dut__DOT__read_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->malloc_tb__DOT__dut__DOT__write_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->malloc_tb__DOT__dut__DOT__left = VL_RAND_RESET_I(11);
    vlSelf->malloc_tb__DOT__dut__DOT__right = VL_RAND_RESET_I(11);
    vlSelf->malloc_tb__DOT__dut__DOT__reservation_counter = VL_RAND_RESET_I(11);
    vlSelf->malloc_tb__DOT__dut__DOT____Vlvbound_h0225cb74__0 = VL_RAND_RESET_Q(48);
    vlSelf->__Vtrigprevexpr___TOP__malloc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__malloc_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__malloc_tb__DOT__rdy__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
