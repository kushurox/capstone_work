// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdealloc_tb.h for the primary calling header

#include "Vdealloc_tb__pch.h"
#include "Vdealloc_tb___024root.h"

VL_ATTR_COLD void Vdealloc_tb___024root___eval_static(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_static\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__clk__0 
        = vlSelfRef.dealloc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__rst_n__0 
        = vlSelfRef.dealloc_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h98ba7952__1 = (1U & 
                                              (~ (IData)(vlSelfRef.dealloc_tb__DOT__act_bsy)));
    vlSelfRef.__Vtrigprevexpr___TOP__dealloc_tb__DOT__dealloc_rdy__0 
        = vlSelfRef.dealloc_tb__DOT__dealloc_rdy;
}

VL_ATTR_COLD void Vdealloc_tb___024root___eval_final(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_final\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__stl(Vdealloc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdealloc_tb___024root___eval_phase__stl(Vdealloc_tb___024root* vlSelf);

VL_ATTR_COLD void Vdealloc_tb___024root___eval_settle(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_settle\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdealloc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dealloc_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdealloc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__stl(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___dump_triggers__stl\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdealloc_tb___024root___act_comb__TOP__0(Vdealloc_tb___024root* vlSelf);

VL_ATTR_COLD void Vdealloc_tb___024root___eval_stl(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_stl\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdealloc_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdealloc_tb___024root___eval_triggers__stl(Vdealloc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdealloc_tb___024root___eval_phase__stl(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_phase__stl\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdealloc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdealloc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__act(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___dump_triggers__act\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge dealloc_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge dealloc_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( (~ dealloc_tb.act_bsy))\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge dealloc_tb.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( dealloc_tb.dealloc_rdy)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__nba(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___dump_triggers__nba\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge dealloc_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge dealloc_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( (~ dealloc_tb.act_bsy))\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge dealloc_tb.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( dealloc_tb.dealloc_rdy)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdealloc_tb___024root___ctor_var_reset(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___ctor_var_reset\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->dealloc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dealloc_cs = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dealloc_addr = VL_RAND_RESET_I(32);
    vlSelf->dealloc_tb__DOT__dealloc_core_id = VL_RAND_RESET_I(4);
    vlSelf->dealloc_tb__DOT__dealloc_act_rdata = VL_RAND_RESET_Q(47);
    vlSelf->dealloc_tb__DOT__dealloc_act_cs = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dealloc_act_we = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dealloc_act_wdata = VL_RAND_RESET_Q(47);
    vlSelf->dealloc_tb__DOT__dealloc_act_addr = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__dealloc_bsy = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dealloc_rdy = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dealloc_err = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__reservation_id_out = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__reservation_enqueue = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__dummy_reservation_id = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__act_bsy = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata = VL_RAND_RESET_Q(47);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->dealloc_tb__DOT__act_mem_inst__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__act_mem_inst__DOT__index = VL_RAND_RESET_I(11);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__new_reservation_id = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length = VL_RAND_RESET_I(11);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__left = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__right = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(11);
    vlSelf->dealloc_tb__DOT__dealloc_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->dealloc_tb__DOT__dealloc_inst__DOT__block_index = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__dealloc_inst__DOT__reservation_id = VL_RAND_RESET_I(10);
    vlSelf->dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->dealloc_tb__DOT__dealloc_inst__DOT__from = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dealloc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dealloc_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h98ba7952__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dealloc_tb__DOT__dealloc_rdy__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
