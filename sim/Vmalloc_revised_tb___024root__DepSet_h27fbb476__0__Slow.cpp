// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_revised_tb.h for the primary calling header

#include "Vmalloc_revised_tb__pch.h"
#include "Vmalloc_revised_tb___024root.h"

VL_ATTR_COLD void Vmalloc_revised_tb___024root___eval_static__TOP(Vmalloc_revised_tb___024root* vlSelf);

VL_ATTR_COLD void Vmalloc_revised_tb___024root___eval_static(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_static\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmalloc_revised_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__clk__0 
        = vlSelfRef.malloc_revised_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rst_n__0 
        = vlSelfRef.malloc_revised_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_hdfdbb016__1 = (1U & 
                                              (~ (IData)(vlSelfRef.malloc_revised_tb__DOT__mem_bsy)));
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rdy__0 
        = vlSelfRef.malloc_revised_tb__DOT__rdy;
}

VL_ATTR_COLD void Vmalloc_revised_tb___024root___eval_static__TOP(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_static__TOP\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.malloc_revised_tb__DOT__cycle_count = 0ULL;
}

VL_ATTR_COLD void Vmalloc_revised_tb___024root___eval_final(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_final\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmalloc_revised_tb___024root___eval_settle(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_settle\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_revised_tb___024root___dump_triggers__act(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___dump_triggers__act\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge malloc_revised_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge malloc_revised_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( (~ malloc_revised_tb.mem_bsy))\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge malloc_revised_tb.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( malloc_revised_tb.rdy)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_revised_tb___024root___dump_triggers__nba(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___dump_triggers__nba\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge malloc_revised_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge malloc_revised_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( (~ malloc_revised_tb.mem_bsy))\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge malloc_revised_tb.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( malloc_revised_tb.rdy)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmalloc_revised_tb___024root___ctor_var_reset(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___ctor_var_reset\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->malloc_revised_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__cycle_count = 0;
    vlSelf->malloc_revised_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__act_mem_cs = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__malloc_we = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__malloc_wdata = VL_RAND_RESET_Q(47);
    vlSelf->malloc_revised_tb__DOT__malloc_addr = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__malloc_rdata = VL_RAND_RESET_Q(47);
    vlSelf->malloc_revised_tb__DOT__mem_bsy = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__malloc_cs = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__core_id = VL_RAND_RESET_I(4);
    vlSelf->malloc_revised_tb__DOT__num_blocks = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__read_mask = VL_RAND_RESET_I(16);
    vlSelf->malloc_revised_tb__DOT__write_mask = VL_RAND_RESET_I(16);
    vlSelf->malloc_revised_tb__DOT__base_addr = VL_RAND_RESET_I(32);
    vlSelf->malloc_revised_tb__DOT__rdy = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__malloc_bsy = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__malloc_dequeue = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__reservation_id = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__queue_rdy = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__act_mem_inst__DOT__dealloc_rdata = VL_RAND_RESET_Q(47);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->malloc_revised_tb__DOT__act_mem_inst__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->malloc_revised_tb__DOT__act_mem_inst__DOT__index = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length = VL_RAND_RESET_I(11);
    vlSelf->malloc_revised_tb__DOT__reservation_counter_inst__DOT__left = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__reservation_counter_inst__DOT__right = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(11);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__num_blocks_reg = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__read_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__write_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__reservation_id_reg = VL_RAND_RESET_I(10);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__left = VL_RAND_RESET_I(11);
    vlSelf->malloc_revised_tb__DOT__dut__DOT__right = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hdfdbb016__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rdy__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
