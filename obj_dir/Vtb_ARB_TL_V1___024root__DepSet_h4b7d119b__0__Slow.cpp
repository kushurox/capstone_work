// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ARB_TL_V1.h for the primary calling header

#include "Vtb_ARB_TL_V1__pch.h"
#include "Vtb_ARB_TL_V1___024root.h"

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_static(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_static\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__clk__0 
        = vlSelfRef.tb_ARB_TL_V1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__rst_n__0 
        = vlSelfRef.tb_ARB_TL_V1__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h60381e42__0 = (1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack));
    vlSelfRef.__Vtrigprevexpr_h603e4c74__0 = (1U & 
                                              ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack) 
                                               >> 1U));
}

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_initial__TOP(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_initial__TOP\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ARB_TL_V1__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_final(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_final\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__stl(Vtb_ARB_TL_V1___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ARB_TL_V1___024root___eval_phase__stl(Vtb_ARB_TL_V1___024root* vlSelf);

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_settle(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_settle\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ARB_TL_V1___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_arb_tl_v1.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ARB_TL_V1___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__stl(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___dump_triggers__stl\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___stl_sequent__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf);

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_stl(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_stl\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___stl_sequent__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___stl_sequent__TOP__0\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ tb_ARB_TL_V1__DOT__dut__DOT__best_age;
    tb_ARB_TL_V1__DOT__dut__DOT__best_age = 0;
    CData/*3:0*/ tb_ARB_TL_V1__DOT__dut__DOT__candidates;
    tb_ARB_TL_V1__DOT__dut__DOT__candidates = 0;
    IData/*31:0*/ tb_ARB_TL_V1__DOT__dut__DOT__idx;
    tb_ARB_TL_V1__DOT__dut__DOT__idx = 0;
    CData/*0:0*/ tb_ARB_TL_V1__DOT__dut__DOT__found;
    tb_ARB_TL_V1__DOT__dut__DOT__found = 0;
    // Body
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_full 
        = (0x400U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length));
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_sender 
        = ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs)
            ? 0U : ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs)
                     ? 1U : 2U));
    vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__dut2__dequeue 
        = ((~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy)) 
           & (0U < (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)));
    vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__dut2__enqueue 
        = ((vlSelfRef.tb_ARB_TL_V1__DOT__win_req[0U] 
            >> 1U) & ((6U > (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)) 
                      & (0U != (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack))));
    if ((0U < (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length))) {
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__cfg 
            = (1U & (vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                     [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                        ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                        : 0U)][2U] >> 9U));
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we 
            = (1U & (vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                     [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                        ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id 
            = (0xfU & (vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                       [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                          ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                          : 0U)][0U] >> 2U));
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr 
            = ((vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                   ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                   : 0U)][2U] << 0x1aU) | (vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                                           [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                                              ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                                              : 0U)][1U] 
                                           >> 6U));
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__wdata 
            = ((vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                   ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                   : 0U)][1U] << 0x1aU) | (vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                                           [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                                              ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                                              : 0U)][0U] 
                                           >> 6U));
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__free_reserve 
            = (1U & (vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                     [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                        ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                        : 0U)][2U] >> 0xbU));
    } else {
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__cfg = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__wdata = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__free_reserve = 0U;
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs)) 
                                                   | ((4U 
                                                       & (vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] 
                                                          >> 0x17U)) 
                                                      | ((2U 
                                                          & (vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] 
                                                             >> 0xcU)) 
                                                         | (1U 
                                                            & (vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] 
                                                               >> 1U)))));
    vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs)) 
                                                   | (8U 
                                                      & (vlSelfRef.tb_ARB_TL_V1__DOT__req[7U] 
                                                         >> 2U)));
    vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id 
        = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id;
    tb_ARB_TL_V1__DOT__dut__DOT__best_age = 0U;
    tb_ARB_TL_V1__DOT__dut__DOT__candidates = 0U;
    tb_ARB_TL_V1__DOT__dut__DOT__idx = 0U;
    tb_ARB_TL_V1__DOT__dut__DOT__found = 0U;
    if ((0U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs))) {
        if ((0U != (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs))) {
            vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ns = 1U;
            tb_ARB_TL_V1__DOT__dut__DOT__best_age = 0U;
            tb_ARB_TL_V1__DOT__dut__DOT__candidates = 0U;
            if (((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                 & (0U < vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                    [0U]))) {
                tb_ARB_TL_V1__DOT__dut__DOT__best_age 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                    [0U];
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> 1U) & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [1U] > (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__best_age 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                    [1U];
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> 2U) & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [2U] > (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__best_age 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                    [2U];
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> 3U) & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [3U] > (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__best_age 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                    [3U];
            }
            if (((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                 & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                    [0U] == (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__candidates 
                    = (1U | (IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates));
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> 1U) & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [1U] == (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__candidates 
                    = (2U | (IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates));
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> 2U) & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [2U] == (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__candidates 
                    = (4U | (IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates));
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> 3U) & (vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [3U] == (IData)(tb_ARB_TL_V1__DOT__dut__DOT__best_age)))) {
                tb_ARB_TL_V1__DOT__dut__DOT__candidates 
                    = (8U | (IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates));
            }
            vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id = 0U;
            tb_ARB_TL_V1__DOT__dut__DOT__found = 0U;
            tb_ARB_TL_V1__DOT__dut__DOT__idx = (3U 
                                                & vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr);
            if ((1U & ((IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates) 
                       >> (3U & tb_ARB_TL_V1__DOT__dut__DOT__idx)))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id 
                    = tb_ARB_TL_V1__DOT__dut__DOT__idx;
                tb_ARB_TL_V1__DOT__dut__DOT__found = 1U;
            }
            tb_ARB_TL_V1__DOT__dut__DOT__idx = (3U 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr));
            if ((1U & ((~ (IData)(tb_ARB_TL_V1__DOT__dut__DOT__found)) 
                       & ((IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates) 
                          >> (3U & tb_ARB_TL_V1__DOT__dut__DOT__idx))))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id 
                    = tb_ARB_TL_V1__DOT__dut__DOT__idx;
                tb_ARB_TL_V1__DOT__dut__DOT__found = 1U;
            }
            tb_ARB_TL_V1__DOT__dut__DOT__idx = (3U 
                                                & ((IData)(2U) 
                                                   + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr));
            if ((1U & ((~ (IData)(tb_ARB_TL_V1__DOT__dut__DOT__found)) 
                       & ((IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates) 
                          >> (3U & tb_ARB_TL_V1__DOT__dut__DOT__idx))))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id 
                    = tb_ARB_TL_V1__DOT__dut__DOT__idx;
                tb_ARB_TL_V1__DOT__dut__DOT__found = 1U;
            }
            tb_ARB_TL_V1__DOT__dut__DOT__idx = (3U 
                                                & ((IData)(3U) 
                                                   + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr));
            if ((1U & ((~ (IData)(tb_ARB_TL_V1__DOT__dut__DOT__found)) 
                       & ((IData)(tb_ARB_TL_V1__DOT__dut__DOT__candidates) 
                          >> (3U & tb_ARB_TL_V1__DOT__dut__DOT__idx))))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id 
                    = tb_ARB_TL_V1__DOT__dut__DOT__idx;
                tb_ARB_TL_V1__DOT__dut__DOT__found = 1U;
            }
        } else {
            vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ns = 0U;
        }
    } else {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ns = 
            ((1U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs))
              ? ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                   >> (3U & vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id)) 
                  & (6U > (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)))
                  ? 0U : 1U) : 0U);
    }
}

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_triggers__stl(Vtb_ARB_TL_V1___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ARB_TL_V1___024root___eval_phase__stl(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_phase__stl\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ARB_TL_V1___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ARB_TL_V1___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__act(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___dump_triggers__act\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ARB_TL_V1.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_ARB_TL_V1.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_ARB_TL_V1.ack[0])\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tb_ARB_TL_V1.ack[1])\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__nba(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___dump_triggers__nba\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ARB_TL_V1.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_ARB_TL_V1.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_ARB_TL_V1.ack[0])\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tb_ARB_TL_V1.ack[1])\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___ctor_var_reset(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___ctor_var_reset\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ARB_TL_V1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(304, vlSelf->tb_ARB_TL_V1__DOT__req);
    VL_RAND_RESET_W(76, vlSelf->tb_ARB_TL_V1__DOT__win_req);
    vlSelf->tb_ARB_TL_V1__DOT__ack = VL_RAND_RESET_I(4);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__dut2__dequeue = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__dut2__enqueue = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_bsy = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__free_reserve = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id = VL_RAND_RESET_I(4);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__cfg = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__addr_cool = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__ages[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__winner_id = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__cs = VL_RAND_RESET_I(2);
    vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__ns = VL_RAND_RESET_I(2);
    vlSelf->tb_ARB_TL_V1__DOT__dut__DOT__reqs = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[__Vi0]);
    }
    vlSelf->tb_ARB_TL_V1__DOT__dut2__DOT__queue_length = VL_RAND_RESET_I(4);
    vlSelf->tb_ARB_TL_V1__DOT__dut2__DOT__head = VL_RAND_RESET_I(3);
    vlSelf->tb_ARB_TL_V1__DOT__dut2__DOT__tail = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(76, vlSelf->tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_sender = VL_RAND_RESET_I(2);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata = VL_RAND_RESET_Q(47);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata = VL_RAND_RESET_Q(47);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata = VL_RAND_RESET_Q(47);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_full = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_rdy = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_wdata = VL_RAND_RESET_Q(47);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_wdata = VL_RAND_RESET_Q(47);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_addr = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index = VL_RAND_RESET_I(11);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__num_blocks_reg = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__read_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__write_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left = VL_RAND_RESET_I(11);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right = VL_RAND_RESET_I(11);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length = VL_RAND_RESET_I(11);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__right = VL_RAND_RESET_I(10);
    vlSelf->tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata = VL_RAND_RESET_Q(47);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right = VL_RAND_RESET_I(11);
    vlSelf->__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h60381e42__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h603e4c74__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
