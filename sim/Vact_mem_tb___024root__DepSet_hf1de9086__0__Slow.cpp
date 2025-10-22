// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vact_mem_tb.h for the primary calling header

#include "Vact_mem_tb__pch.h"
#include "Vact_mem_tb___024root.h"

VL_ATTR_COLD void Vact_mem_tb___024root___eval_static(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_static\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__clk__0 
        = vlSelfRef.act_mem_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__rst_n__0 
        = vlSelfRef.act_mem_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__bsy__0 
        = vlSelfRef.act_mem_tb__DOT__bsy;
}

VL_ATTR_COLD void Vact_mem_tb___024root___eval_final(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_final\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vact_mem_tb___024root___eval_settle(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_settle\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vact_mem_tb___024root___dump_triggers__act(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___dump_triggers__act\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge act_mem_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge act_mem_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge act_mem_tb.bsy)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge act_mem_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vact_mem_tb___024root___dump_triggers__nba(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___dump_triggers__nba\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge act_mem_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge act_mem_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge act_mem_tb.bsy)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge act_mem_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vact_mem_tb___024root___ctor_var_reset(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___ctor_var_reset\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->act_mem_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__malloc_dealloc = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__malloc_we = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__malloc_wdata = VL_RAND_RESET_Q(47);
    vlSelf->act_mem_tb__DOT__malloc_addr = VL_RAND_RESET_I(10);
    vlSelf->act_mem_tb__DOT__dealloc_we = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__dealloc_wdata = VL_RAND_RESET_Q(47);
    vlSelf->act_mem_tb__DOT__dealloc_addr = VL_RAND_RESET_I(10);
    vlSelf->act_mem_tb__DOT__malloc_rdata = VL_RAND_RESET_Q(47);
    vlSelf->act_mem_tb__DOT__dealloc_rdata = VL_RAND_RESET_Q(47);
    vlSelf->act_mem_tb__DOT__bsy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->act_mem_tb__DOT__dut__DOT__act_mem[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->act_mem_tb__DOT__dut__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->act_mem_tb__DOT__dut__DOT__index = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__act_mem_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__act_mem_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__act_mem_tb__DOT__bsy__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
