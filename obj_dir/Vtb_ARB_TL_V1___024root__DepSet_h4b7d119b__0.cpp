// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ARB_TL_V1.h for the primary calling header

#include "Vtb_ARB_TL_V1__pch.h"
#include "Vtb_ARB_TL_V1___024root.h"

VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___eval_initial__TOP(Vtb_ARB_TL_V1___024root* vlSelf);
VlCoroutine Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__0(Vtb_ARB_TL_V1___024root* vlSelf);
VlCoroutine Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__1(Vtb_ARB_TL_V1___024root* vlSelf);

void Vtb_ARB_TL_V1___024root___eval_initial(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_initial\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ARB_TL_V1___024root___eval_initial__TOP(vlSelf);
    Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlWide<10>/*319:0*/ Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0;

VL_INLINE_OPT VlCoroutine Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__0(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i;
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.tb_ARB_TL_V1__DOT__rst_n = 0U;
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[0U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[1U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[1U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[2U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[3U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[3U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[4U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[5U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[5U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[6U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[6U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[7U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[7U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[8U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[8U];
    vlSelfRef.tb_ARB_TL_V1__DOT__req[9U] = Vtb_ARB_TL_V1__ConstPool__CONST_hbbcd61c7_0[9U];
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_arb_tl_v1.sv", 
                                         124);
    vlSelfRef.tb_ARB_TL_V1__DOT__rst_n = 1U;
    vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool = (0x80800000U 
                                              | (0x1fffffU 
                                                 & vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (3U | vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]);
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0xa00U 
                                            | (0xfffff1ffU 
                                               & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = ((0x3fU 
                                             & vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]) 
                                            | ((IData)(
                                                       (0xffffffffULL 
                                                        | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                           << 0x20U))) 
                                               << 6U));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[1U] = (((IData)(
                                                     (0xffffffffULL 
                                                      | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                         << 0x20U))) 
                                             >> 0x1aU) 
                                            | ((IData)(
                                                       ((0xffffffffULL 
                                                         | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                            << 0x20U)) 
                                                        >> 0x20U)) 
                                               << 6U));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = ((0xffffffc0U 
                                             & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]) 
                                            | ((IData)(
                                                       ((0xffffffffULL 
                                                         | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                            << 0x20U)) 
                                                        >> 0x20U)) 
                                               >> 0x1aU));
    vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool = (0x80c00000U 
                                              | (0x1fffffU 
                                                 & vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0x3000U 
                                            | vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]);
    vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] = (0xa00000U 
                                            | (0xff1fffffU 
                                               & vlSelfRef.tb_ARB_TL_V1__DOT__req[4U]));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = ((0x3ffffU 
                                             & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]) 
                                            | ((IData)(
                                                       (0xffffffffULL 
                                                        | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                           << 0x20U))) 
                                               << 0x12U));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[3U] = (((IData)(
                                                     (0xffffffffULL 
                                                      | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                         << 0x20U))) 
                                             >> 0xeU) 
                                            | ((IData)(
                                                       ((0xffffffffULL 
                                                         | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                            << 0x20U)) 
                                                        >> 0x20U)) 
                                               << 0x12U));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] = ((0xfffc0000U 
                                             & vlSelfRef.tb_ARB_TL_V1__DOT__req[4U]) 
                                            | ((IData)(
                                                       ((0xffffffffULL 
                                                         | ((QData)((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__addr_cool)) 
                                                            << 0x20U)) 
                                                        >> 0x20U)) 
                                               >> 0xeU));
    while ((1U & (~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack)))) {
        co_await vlSelfRef.__VtrigSched_hc8006972__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_ARB_TL_V1.ack[0])", 
                                                             "tb_arb_tl_v1.sv", 
                                                             139);
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (0xfffffffdU 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]);
    VL_WRITEF_NX("win_req = %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__win_req.data());
    while ((1U & (~ ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack) 
                     >> 1U)))) {
        co_await vlSelfRef.__VtrigSched_hc809928c__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_ARB_TL_V1.ack[1])", 
                                                             "tb_arb_tl_v1.sv", 
                                                             142);
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0xffffdfffU 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]);
    VL_WRITEF_NX("win_req = %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__win_req.data());
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (3U | vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]);
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0x400U 
                                            | (0xfffff1ffU 
                                               & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (0x3fffc0U 
                                            | (0x3fU 
                                               & vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[1U] = 0U;
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0xffffffc0U 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]);
    while ((1U & (~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack)))) {
        co_await vlSelfRef.__VtrigSched_hc8006972__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_ARB_TL_V1.ack[0])", 
                                                             "tb_arb_tl_v1.sv", 
                                                             149);
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (0xfffffffdU 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]);
    co_await vlSelfRef.__VtrigSched_h7f6617e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ARB_TL_V1.clk)", 
                                                         "tb_arb_tl_v1.sv", 
                                                         151);
    co_await vlSelfRef.__VtrigSched_h7f6617e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ARB_TL_V1.clk)", 
                                                         "tb_arb_tl_v1.sv", 
                                                         152);
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (3U | vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]);
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0xfffff1ffU 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]);
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (0x3fffc0U 
                                            | (0x3fU 
                                               & vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]));
    vlSelfRef.tb_ARB_TL_V1__DOT__req[1U] = 0U;
    vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] = (0xffffffc0U 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]);
    while ((1U & (~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack)))) {
        co_await vlSelfRef.__VtrigSched_hc8006972__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_ARB_TL_V1.ack[0])", 
                                                             "tb_arb_tl_v1.sv", 
                                                             156);
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__req[0U] = (0xfffffffdU 
                                            & vlSelfRef.tb_ARB_TL_V1__DOT__req[0U]);
    VL_WRITEF_NX("All requests issued\n",0);
    co_await vlSelfRef.__VtrigSched_h7f6617e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ARB_TL_V1.clk)", 
                                                         "tb_arb_tl_v1.sv", 
                                                         162);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_arb_tl_v1.sv", 
                                         172);
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 0;
    VL_WRITEF_NX("FIFO Contents:\nIndex 0: %0#\n",0,
                 76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                 [0U].data());
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 1U;
    VL_WRITEF_NX("Index 1: %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                 [1U].data());
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 2U;
    VL_WRITEF_NX("Index 2: %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                 [2U].data());
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 3U;
    VL_WRITEF_NX("Index 3: %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                 [3U].data());
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 4U;
    VL_WRITEF_NX("Index 4: %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                 [4U].data());
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 5U;
    VL_WRITEF_NX("Index 5: %0#\n",0,76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                 [5U].data());
    __Vtask_tb_ARB_TL_V1__DOT__dut2__DOT__print_fifo_contents__0__unnamedblk2__DOT__i = 6U;
}

VL_INLINE_OPT VlCoroutine Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__1(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_arb_tl_v1.sv", 
                                             56);
        vlSelfRef.tb_ARB_TL_V1__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__clk)));
    }
}

void Vtb_ARB_TL_V1___024root___act_comb__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf);

void Vtb_ARB_TL_V1___024root___eval_act(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_act\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1dULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___act_comb__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___act_comb__TOP__0\n"); );
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

void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf);
void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__1(Vtb_ARB_TL_V1___024root* vlSelf);
void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__2(Vtb_ARB_TL_V1___024root* vlSelf);
void Vtb_ARB_TL_V1___024root___nba_comb__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf);
void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__3(Vtb_ARB_TL_V1___024root* vlSelf);
void Vtb_ARB_TL_V1___024root___nba_comb__TOP__1(Vtb_ARB_TL_V1___024root* vlSelf);
void Vtb_ARB_TL_V1___024root___nba_comb__TOP__2(Vtb_ARB_TL_V1___024root* vlSelf);

void Vtb_ARB_TL_V1___024root___eval_nba(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_nba\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_ARB_TL_V1___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ARB_TL_V1___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_sequent__TOP__0\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg;
    vlSelfRef.__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 = 0U;
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__1(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_sequent__TOP__1\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*75:0*/ __Vdly__tb_ARB_TL_V1__DOT__win_req;
    VL_ZERO_W(76, __Vdly__tb_ARB_TL_V1__DOT__win_req);
    QData/*46:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata = 0;
    QData/*46:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata = 0;
    CData/*1:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = 0;
    CData/*2:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 0;
    SData/*9:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index = 0;
    SData/*9:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id = 0;
    CData/*0:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from = 0;
    SData/*10:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v0;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1;
    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v2;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3;
    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v4;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5;
    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v6;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7;
    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v8;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v9;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v9 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0;
    VL_ZERO_W(76, __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0);
    CData/*2:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0;
    __VdlyDim0__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0;
    __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v1;
    __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v1 = 0;
    QData/*46:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    QData/*46:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2;
    __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2;
    __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2 = 0;
    SData/*9:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0;
    __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0;
    __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1;
    __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1;
    __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1 = 0;
    // Body
    __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[0U];
    __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[1U];
    __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[2U];
    __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v1 = 0U;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length 
        = vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v0 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v2 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v4 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v6 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v8 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v9 = 0U;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata;
    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata;
    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy 
        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy;
    __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 = 0U;
    __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2 = 0U;
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if (((0U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs)) 
             & (1U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ns)))) {
            if ((0U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id)) {
                __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__req[0U];
                __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__req[1U];
                __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] 
                    = (0xfffU & vlSelfRef.tb_ARB_TL_V1__DOT__req[2U]);
            } else if ((1U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id)) {
                __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] 
                    = ((vlSelfRef.tb_ARB_TL_V1__DOT__req[3U] 
                        << 0x14U) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[2U] 
                                     >> 0xcU));
                __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] 
                    = ((vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] 
                        << 0x14U) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[3U] 
                                     >> 0xcU));
                __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] 
                    = (0xfffU & ((vlSelfRef.tb_ARB_TL_V1__DOT__req[5U] 
                                  << 0x14U) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] 
                                               >> 0xcU)));
            } else if ((2U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id)) {
                __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] 
                    = ((vlSelfRef.tb_ARB_TL_V1__DOT__req[5U] 
                        << 8U) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[4U] 
                                  >> 0x18U));
                __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] 
                    = ((vlSelfRef.tb_ARB_TL_V1__DOT__req[6U] 
                        << 8U) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[5U] 
                                  >> 0x18U));
                __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] 
                    = (0xfffU & ((vlSelfRef.tb_ARB_TL_V1__DOT__req[7U] 
                                  << 8U) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[6U] 
                                            >> 0x18U)));
            } else if ((3U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id)) {
                __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] 
                    = ((vlSelfRef.tb_ARB_TL_V1__DOT__req[8U] 
                        << 0x1cU) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[7U] 
                                     >> 4U));
                __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] 
                    = ((vlSelfRef.tb_ARB_TL_V1__DOT__req[9U] 
                        << 0x1cU) | (vlSelfRef.tb_ARB_TL_V1__DOT__req[8U] 
                                     >> 4U));
                __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] 
                    = (0xfffU & (vlSelfRef.tb_ARB_TL_V1__DOT__req[9U] 
                                 >> 4U));
            } else {
                __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] 
                    = (0xfffU & 0U);
            }
        } else if ((1U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs))) {
            __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] 
                = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[0U];
            __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] 
                = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[1U];
            __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] 
                = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[2U];
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                             >> (3U & vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id))))) {
            __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] = 0U;
            __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] = 0U;
            __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] = 0U;
        }
    } else {
        __Vdly__tb_ARB_TL_V1__DOT__win_req[0U] = 0U;
        __Vdly__tb_ARB_TL_V1__DOT__win_req[1U] = 0U;
        __Vdly__tb_ARB_TL_V1__DOT__win_req[2U] = 0U;
    }
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__dut2__enqueue) 
                           & (6U > (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length))) 
                          & (vlSelfRef.tb_ARB_TL_V1__DOT__win_req[0U] 
                             >> 1U))))) {
            vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0[0U] 
                = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[0U];
            vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0[1U] 
                = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[1U];
            vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0[2U] 
                = vlSelfRef.tb_ARB_TL_V1__DOT__win_req[2U];
            VL_WRITEF_NX("ENQUEUE req, time=%0t: %0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         76,vlSelfRef.tb_ARB_TL_V1__DOT__win_req.data());
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)));
            if (VL_LIKELY(((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__head))))) {
                __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0[0U] 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0[0U];
                __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0[1U] 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0[1U];
                __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0[2U] 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0[2U];
                __VdlyDim0__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__head;
                __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0 = 1U;
            }
            vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__head 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__head)));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__dut2__dequeue) 
                          & (0U < (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)))))) {
            VL_WRITEF_NX("DEQUEUE req, time=%0t: %0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         76,vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage
                         [((5U >= (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail))
                            ? (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)
                            : 0U)].data());
            vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail)));
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length 
                = (0xfU & ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length) 
                           - (IData)(1U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__head = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__tail = 0U;
        __VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v1 = 1U;
    }
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue) 
                           & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_rdy)) 
                          & (~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_full)))))) {
            VL_WRITEF_NX("RESERVATION_COUNTER: Enqueue reservation id %0#\n",0,
                         10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter);
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length)));
            __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0 
                = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter;
            __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0 
                = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__right;
            vlSelfRef.__VdlyCommitQueuetb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids.enqueue(__VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0, (IData)(__VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v0));
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__right 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__right)));
        } else if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue) 
                                  & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_rdy)) 
                                 & (0U < (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length)))))) {
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length 
                = (0x7ffU & ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length) 
                             - (IData)(1U)));
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter 
                = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids
                [vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left];
            VL_WRITEF_NX("RESERVATION_COUNTER: Dequeue reservation id %0#\nNew Reservation head index: %0#\n",0,
                         10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids
                         [vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left],
                         10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids
                         [(0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left)))]);
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left)));
        }
    } else {
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__right = 0U;
        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length = 0x400U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_rdy = 1U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter = 0U;
        while ((0x400U > (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i))) {
            __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1 
                = (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i));
            __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1 
                = (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i));
            vlSelfRef.__VdlyCommitQueuetb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids.enqueue(__VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1, (IData)(__VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids__v1));
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i)));
        }
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__win_req[0U] = __Vdly__tb_ARB_TL_V1__DOT__win_req[0U];
    vlSelfRef.tb_ARB_TL_V1__DOT__win_req[1U] = __Vdly__tb_ARB_TL_V1__DOT__win_req[1U];
    vlSelfRef.tb_ARB_TL_V1__DOT__win_req[2U] = __Vdly__tb_ARB_TL_V1__DOT__win_req[2U];
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[__VdlyDim0__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0][0U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0[0U];
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[__VdlyDim0__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0][1U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0[1U];
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[__VdlyDim0__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0][2U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v0[2U];
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage__v1) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[0U][0U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[0U][1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[0U][2U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[1U][0U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[1U][1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[1U][2U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[2U][0U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[2U][1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[2U][2U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[3U][0U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[3U][1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[3U][2U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[4U][0U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[4U][1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[4U][2U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[5U][0U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[5U][1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage[5U][2U] = 0U;
    }
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__current_state) {
            if (((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs) 
                 | ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_cs) 
                    | (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs)))) {
                if ((0U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_sender))) {
                    if (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we) {
                        __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 
                            = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_wdata;
                        __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 
                            = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr;
                        __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0 = 1U;
                    } else {
                        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
                            = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem
                            [vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr];
                    }
                } else if ((1U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_sender))) {
                    if (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we) {
                        __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 
                            = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_wdata;
                        __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 
                            = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr;
                        __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1 = 1U;
                    } else {
                        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata 
                            = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem
                            [vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr];
                    }
                } else {
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
                        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem
                        [vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_addr];
                }
            }
        } else {
            if ((0x400U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__current_state = 1U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy = 0U;
            }
            __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2 
                = (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index));
            __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2 = 1U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index)));
        }
        vlSelfRef.tb_ARB_TL_V1__DOT__ack = 0U;
        if ((1U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs))) {
            if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs))) {
                if ((0U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id)) {
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v0 = 1U;
                } else if ((0xffU != vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [0U])) {
                    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1 
                        = (0xffU & ((IData)(1U) + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                                    [0U]));
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1 = 1U;
                }
            }
            if ((((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs) 
                  >> (3U & vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id)) 
                 & (6U > (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__ack = 
                    ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__ack) 
                     | (0xfU & ((IData)(1U) << (3U 
                                                & vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id))));
                vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr 
                    = (3U & ((IData)(1U) + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id));
            }
            if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs))) {
                if ((1U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id)) {
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v2 = 1U;
                } else if ((0xffU != vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [1U])) {
                    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3 
                        = (0xffU & ((IData)(1U) + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                                    [1U]));
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3 = 1U;
                }
            }
            if ((4U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs))) {
                if ((2U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id)) {
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v4 = 1U;
                } else if ((0xffU != vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [2U])) {
                    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5 
                        = (0xffU & ((IData)(1U) + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                                    [2U]));
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5 = 1U;
                }
            }
            if ((8U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs))) {
                if ((3U == vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id)) {
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v6 = 1U;
                } else if ((0xffU != vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                            [3U])) {
                    __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7 
                        = (0xffU & ((IData)(1U) + vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages
                                    [3U]));
                    __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7 = 1U;
                }
            }
        }
    } else {
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy = 1U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__current_state = 0U;
        __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v8 = 1U;
        vlSelfRef.tb_ARB_TL_V1__DOT__ack = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr = 0U;
        __VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v9 = 1U;
    }
    vlSelfRef.__VdlyCommitQueuetb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids.commit(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids);
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length;
    if (__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0) {
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v0;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1) {
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v1;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2) {
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem__v2] = 0ULL;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v0) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[0U] = 0U;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[0U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v1;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v2) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[1U] = 0U;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[1U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v3;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v4) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[2U] = 0U;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[2U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v5;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v6) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[3U] = 0U;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[3U] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__dut__DOT__ages__v7;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v8) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[0U] = 0U;
    }
    if (__VdlySet__tb_ARB_TL_V1__DOT__dut__DOT__ages__v9) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[1U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[2U] = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ages[3U] = 0U;
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_full 
        = (0x400U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length));
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state))) {
            if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state))))) {
                VL_WRITEF_NX("ACCESS_CHECK_RESULT: core_id=%0#, addr=%0x, we=%0b, result=%0b, time=%0t\n",0,
                             4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg,
                             32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg,
                             1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg),
                             1,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = 0U;
            } else {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_cs = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = 1U;
            }
        } else if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state))))) {
            VL_WRITEF_NX("ACCESS_CHECK_READ: core_id=%0#, addr=%0x, we=%0b, act_rdata=%0#\nACCESS_CHECK_READ: act_rdata.valid=%0b, act_rdata.read_mask=0x%0x, act_rdata.write_mask=0x%0x\n",0,
                         4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg,
                         32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg,
                         1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg),
                         47,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata,
                         1,(1U & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
                                          >> 0x2eU))),
                         16,(0xffffU & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
                                                >> 0xeU))),
                         16,(0xffffU & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
                                                >> 0x1eU))));
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result 
                = ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg)
                    ? ((0x2eU >= ((IData)(0x1eU) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg))) 
                       && (1U & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
                                         >> ((IData)(0x1eU) 
                                             + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg))))))
                    : ((0x2eU >= ((IData)(0xeU) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg))) 
                       && (1U & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
                                         >> ((IData)(0xeU) 
                                             + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg)))))));
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy = 1U;
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = 3U;
        } else if (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_cs) {
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_cs = 1U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_addr 
                = (0x3ffU & (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg 
                             >> 0xaU));
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = 2U;
        }
    } else {
        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_cs = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_addr = 0U;
    }
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))) {
                if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))) {
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 0U;
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = 0U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 0U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index = 0U;
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id = 0U;
                } else if ((1U & (((0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata)) 
                                   != (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id)) 
                                  | (~ (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata 
                                                >> 0x2eU)))))) {
                    VL_WRITEF_NX("DEALLOC: Reservation id mismatch. Deallocation complete.\n",0);
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = 1U;
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 3U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 0U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter 
                        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue = 1U;
                } else {
                    VL_WRITEF_NX("DEALLOC: Deallocated block at index %0#\n",0,
                                 10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index);
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 1U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 1U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr 
                        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_wdata = 0ULL;
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 5U;
                    __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index)));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from = 1U;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 1U;
            } else if (((0xfU & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata 
                                         >> 0xaU))) 
                        != (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__core_id_reg))) {
                VL_WRITEF_NX("DEALLOC: Owner core id mismatch. Deallocation complete.\n",0);
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 3U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = 1U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
            } else {
                VL_WRITEF_NX("DEALLOC: Deallocating block at index %0#\n",0,
                             10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index);
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id 
                    = (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata));
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 5U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 1U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 1U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_wdata = 0ULL;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index)));
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))) {
            if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))))) {
                VL_WRITEF_NX("DEALLOC: Deallocation operation complete at cycle %0#\n",0,
                             64,VL_TIME_UNITED_Q(1));
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue = 0U;
            } else {
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 0U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index = 0U;
                __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state))) {
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 0U;
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state 
                = ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from)
                    ? 6U : 4U);
        } else if (VL_UNLIKELY((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_cs))) {
            VL_WRITEF_NX("DEALLOC: Deallocation started for core id %0# at address %0x\n",0,
                         4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg,
                         32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg);
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr 
                = (0x3ffU & (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
                             >> 0xaU));
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index 
                = (0x3ffU & (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
                             >> 0xaU));
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 1U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__core_id_reg 
                = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg;
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 1U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter = 0U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue = 0U;
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id = 0U;
            __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from = 0U;
        }
    } else {
        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_wdata = 0ULL;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr = 0U;
        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index = 0U;
        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__core_id_reg = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy = 0U;
        __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from = 0U;
    }
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ns;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id 
            = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id;
    } else {
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id = 0U;
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from 
        = __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from;
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__2(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_sequent__TOP__2\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0;
    __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 = 0;
    IData/*17:0*/ __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0;
    __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 = 0;
    // Body
    if (vlSelfRef.tb_ARB_TL_V1__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state))) {
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy = 0U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 0U;
            } else {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_cs = 0U;
                if (VL_UNLIKELY((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy))) {
                    VL_WRITEF_NX("MPU_ACCESS_CHECK: access check for core_id=%0#, addr=%0x, we=%0b, time=%0t\n",0,
                                 4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg,
                                 32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg,
                                 1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    if (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result) {
                        VL_WRITEF_NX("MPU_ACCESS_CHECK: access granted for core_id=%0#, addr=%0x, we=%0b\n",0,
                                     4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg,
                                     32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg,
                                     1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg));
                        if (VL_LIKELY((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg))) {
                            __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 
                                = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg;
                            __VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 
                                = (0x3ffffU & vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg);
                            vlSelfRef.__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0 = 1U;
                        } else {
                            VL_WRITEF_NX("MPU_ACCESS_CHECK: read data=0x%0x from addr=%0x\n",0,
                                         32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory
                                         [(0x3ffffU 
                                           & vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg)],
                                         32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg);
                        }
                    } else {
                        VL_WRITEF_NX("MPU_ACCESS_CHECK: access denied for core_id=%0#, addr=%0x, we=%0b\n",0,
                                     4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg,
                                     32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg,
                                     1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg));
                    }
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 5U;
                } else {
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 4U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_cs = 0U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state 
                    = ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy)
                        ? 5U : 3U);
            } else {
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs = 0U;
                if (VL_UNLIKELY((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy))) {
                    VL_WRITEF_NX("MPU_MALLOC: malloc_base_addr=%0x, malloc_err=%0b\n",0,
                                 32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr,
                                 1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err));
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 5U;
                } else {
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 2U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state))) {
            if (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy) {
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 1U;
            } else {
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy = 0U;
            }
        } else if (VL_UNLIKELY(((0U < (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length))))) {
            VL_WRITEF_NX("MPU: Received new request: core_id=%0#, addr=%0x, wdata=%0x, free_reserve=%0b. cfg=%0b, we=%0b\n",0,
                         4,vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id,
                         32,vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr,
                         32,vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__wdata,
                         1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__free_reserve),
                         1,vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__cfg,
                         1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we));
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy = 1U;
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg 
                = vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id;
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg 
                = vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr;
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
                = vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__wdata;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg 
                = vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we;
            if (VL_LIKELY((vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__cfg))) {
                if ((vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr 
                     >> 0x1fU)) {
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs = 1U;
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 2U;
                } else {
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_cs = 1U;
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 3U;
                }
            } else {
                VL_WRITEF_NX("MPU: Starting access check for core_id=%0#, addr=%0x, we=%0b\n",0,
                             4,vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id,
                             32,vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr,
                             1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we));
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_cs = 1U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 4U;
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state = 1U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy = 1U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_cs = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_cs = 0U;
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state;
    if (vlSelfRef.__VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0) {
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory[__VdlyDim0__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0] 
            = __VdlyVal__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0;
    }
    if (VL_LIKELY((vlSelfRef.tb_ARB_TL_V1__DOT__rst_n))) {
        if ((4U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))) {
                if (VL_LIKELY(((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))))) {
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 1U;
                } else {
                    VL_WRITEF_NX("MALLOC_RESERVATION_ID: obtained reservation_id=%0#\n",0,
                                 10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter);
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg 
                        = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter;
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 3U;
                }
            } else if (VL_LIKELY(((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))))) {
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue = 0U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 6U;
            } else {
                VL_WRITEF_NX("MALLOC_RESULT: base_addr=%0x, err=%0b\n",0,
                             32,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr,
                             1,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err));
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err = 0U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))) {
                if (((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left) 
                     > (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right))) {
                    VL_WRITEF_NX("MALLOC_FOUND: allocation done from %0# to %0# with reservation_id=%0#\n",0,
                                 32,((IData)(1U) + 
                                     ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left) 
                                      - (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__num_blocks_reg))),
                                 11,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right),
                                 10,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg);
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 4U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we = 0U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs = 0U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr 
                        = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                                   + 
                                                   ((0x3ffU 
                                                     & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)) 
                                                    - (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__num_blocks_reg))), 0xaU);
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy = 1U;
                } else {
                    VL_WRITEF_NX("MALLOC_FOUND: writing allocation entry at %0#, act_addr=%0#\n",0,
                                 11,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left,
                                 10,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr));
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we = 1U;
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_wdata 
                        = (((QData)((IData)((0x10000U 
                                             | (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__write_mask_reg)))) 
                            << 0x1eU) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__read_mask_reg) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__core_id_reg) 
                                                             << 0xaU) 
                                                            | (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg))))));
                    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr 
                        = (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left));
                    vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left 
                        = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left)));
                }
            } else if (VL_UNLIKELY(((0x400U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_RIGHT: right == BLOCK_COUNT\n",0);
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err = 1U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy = 1U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 4U;
            } else if (VL_UNLIKELY(((((IData)(1U) + 
                                      ((0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)) 
                                       - (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left)))) 
                                     == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__num_blocks_reg))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_RIGHT: found enough contiguous blocks from %0# to %0#\n",0,
                             11,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left,
                             11,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right));
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 5U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue = 1U;
            } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
                                                   >> 0x2eU)))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_RIGHT: couldn't find enough contiguous blocks, restarting search from %0#\n",0,
                             32,((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)));
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)));
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)));
            } else {
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)));
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state))) {
            if (VL_UNLIKELY(((0x400U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_LEFT: left == BLOCK_COUNT\n",0);
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err = 1U;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy = 1U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 4U;
            } else if (VL_LIKELY(((1U & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
                                                 >> 0x2eU)))))) {
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left)));
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left)));
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 7U;
            } else {
                VL_WRITEF_NX("req_core_id=%0#, owner: %0# valid=%0b\nMALLOC_SEARCH_LEFT: found free block at %0#\n",0,
                             4,vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__core_id_reg,
                             4,(0xfU & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
                                                >> 0xaU))),
                             1,(1U & (IData)((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
                                              >> 0x2eU))),
                             11,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left));
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 2U;
                vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right 
                    = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left;
                vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr 
                    = (0x3ffU & (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left));
            }
        } else if (VL_UNLIKELY((vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs))) {
            VL_WRITEF_NX("Malloc request received at cycle %0#\ncore_id: %0#, num_blocks: %0#, read_mask: %0b, write_mask: %0b\n",0,
                         64,VL_TIME_UNITED_Q(1),4,(IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg),
                         10,(0x3ffU & (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg 
                                       >> 0x15U)),16,
                         (0xffffU & vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg),
                         16,(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
                             >> 0x10U));
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__core_id_reg 
                = vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__num_blocks_reg 
                = (0x3ffU & (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg 
                             >> 0x15U));
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__read_mask_reg 
                = (0xffffU & vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg);
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__write_mask_reg 
                = (vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
                   >> 0x10U);
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left = 0U;
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right = 0U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err = 0U;
            vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 7U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs = 1U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we = 0U;
            vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr = 0U;
        }
    } else {
        VL_WRITEF_NX("MALLOC_RESET\n",0);
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left = 0U;
        vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs = 0U;
        vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue = 0U;
    }
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg;
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_comb__TOP__0(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_comb__TOP__0\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_sequent__TOP__3(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_sequent__TOP__3\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result;
    vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter;
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata 
        = vlSelfRef.__Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata;
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
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_comb__TOP__1(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_comb__TOP__1\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_sender 
        = ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs)
            ? 0U : ((IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs)
                     ? 1U : 2U));
    vlSelfRef.tb_ARB_TL_V1__DOT____Vcellinp__dut2__dequeue 
        = ((~ (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__mpu_bsy)) 
           & (0U < (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut2__DOT__queue_length)));
}

VL_INLINE_OPT void Vtb_ARB_TL_V1___024root___nba_comb__TOP__2(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___nba_comb__TOP__2\n"); );
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
    vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id 
        = vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__winner_id;
    tb_ARB_TL_V1__DOT__dut__DOT__best_age = 0U;
    tb_ARB_TL_V1__DOT__dut__DOT__candidates = 0U;
    tb_ARB_TL_V1__DOT__dut__DOT__idx = 0U;
    tb_ARB_TL_V1__DOT__dut__DOT__found = 0U;
    if ((0U == (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__cs))) {
        if ((0U != (IData)(vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__reqs))) {
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
            vlSelfRef.tb_ARB_TL_V1__DOT__dut__DOT__ns = 1U;
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

void Vtb_ARB_TL_V1___024root___timing_resume(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___timing_resume\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc8006972__0.resume(
                                                   "@( tb_ARB_TL_V1.ack[0])");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc809928c__0.resume(
                                                   "@( tb_ARB_TL_V1.ack[1])");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7f6617e2__0.resume(
                                                   "@(posedge tb_ARB_TL_V1.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ARB_TL_V1___024root___timing_commit(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___timing_commit\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc8006972__0.commit(
                                                   "@( tb_ARB_TL_V1.ack[0])");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc809928c__0.commit(
                                                   "@( tb_ARB_TL_V1.ack[1])");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7f6617e2__0.commit(
                                                   "@(posedge tb_ARB_TL_V1.clk)");
    }
}

void Vtb_ARB_TL_V1___024root___eval_triggers__act(Vtb_ARB_TL_V1___024root* vlSelf);

bool Vtb_ARB_TL_V1___024root___eval_phase__act(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_phase__act\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ARB_TL_V1___024root___eval_triggers__act(vlSelf);
    Vtb_ARB_TL_V1___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ARB_TL_V1___024root___timing_resume(vlSelf);
        Vtb_ARB_TL_V1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ARB_TL_V1___024root___eval_phase__nba(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_phase__nba\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ARB_TL_V1___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__nba(Vtb_ARB_TL_V1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ARB_TL_V1___024root___dump_triggers__act(Vtb_ARB_TL_V1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ARB_TL_V1___024root___eval(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ARB_TL_V1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_arb_tl_v1.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ARB_TL_V1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_arb_tl_v1.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ARB_TL_V1___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ARB_TL_V1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ARB_TL_V1___024root___eval_debug_assertions(Vtb_ARB_TL_V1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ARB_TL_V1___024root___eval_debug_assertions\n"); );
    Vtb_ARB_TL_V1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
