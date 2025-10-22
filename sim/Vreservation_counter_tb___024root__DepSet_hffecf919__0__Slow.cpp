// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreservation_counter_tb.h for the primary calling header

#include "Vreservation_counter_tb__pch.h"
#include "Vreservation_counter_tb___024root.h"

VL_ATTR_COLD void Vreservation_counter_tb___024root___eval_static(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_static\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__reservation_counter_tb__DOT__clk__0 
        = vlSelfRef.reservation_counter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reservation_counter_tb__DOT__rst_n__0 
        = vlSelfRef.reservation_counter_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vreservation_counter_tb___024root___eval_final(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_final\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreservation_counter_tb___024root___dump_triggers__stl(Vreservation_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreservation_counter_tb___024root___eval_phase__stl(Vreservation_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vreservation_counter_tb___024root___eval_settle(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_settle\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vreservation_counter_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("reservation_counter_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vreservation_counter_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreservation_counter_tb___024root___dump_triggers__stl(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___dump_triggers__stl\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vreservation_counter_tb___024root___stl_sequent__TOP__0(Vreservation_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vreservation_counter_tb___024root___eval_stl(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_stl\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vreservation_counter_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vreservation_counter_tb___024root___stl_sequent__TOP__0(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___stl_sequent__TOP__0\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reservation_counter_tb__DOT__full = (0x400U 
                                                   == (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length));
}

VL_ATTR_COLD void Vreservation_counter_tb___024root___eval_triggers__stl(Vreservation_counter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vreservation_counter_tb___024root___eval_phase__stl(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_phase__stl\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreservation_counter_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vreservation_counter_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreservation_counter_tb___024root___dump_triggers__act(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___dump_triggers__act\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge reservation_counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge reservation_counter_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreservation_counter_tb___024root___dump_triggers__nba(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___dump_triggers__nba\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge reservation_counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge reservation_counter_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreservation_counter_tb___024root___ctor_var_reset(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___ctor_var_reset\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reservation_counter_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reservation_counter_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reservation_counter_tb__DOT__enqueue = VL_RAND_RESET_I(1);
    vlSelf->reservation_counter_tb__DOT__dequeue = VL_RAND_RESET_I(1);
    vlSelf->reservation_counter_tb__DOT__freed_reservation_id = VL_RAND_RESET_I(10);
    vlSelf->reservation_counter_tb__DOT__new_reservation_id = VL_RAND_RESET_I(10);
    vlSelf->reservation_counter_tb__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->reservation_counter_tb__DOT__rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->reservation_counter_tb__DOT__dut__DOT__reservation_ids[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->reservation_counter_tb__DOT__dut__DOT__queue_length = VL_RAND_RESET_I(11);
    vlSelf->reservation_counter_tb__DOT__dut__DOT__left = VL_RAND_RESET_I(10);
    vlSelf->reservation_counter_tb__DOT__dut__DOT__right = VL_RAND_RESET_I(10);
    vlSelf->reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__reservation_counter_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reservation_counter_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
