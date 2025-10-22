// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vact_mem_tb.h for the primary calling header

#include "Vact_mem_tb__pch.h"
#include "Vact_mem_tb___024root.h"

VlCoroutine Vact_mem_tb___024root___eval_initial__TOP__Vtiming__0(Vact_mem_tb___024root* vlSelf);
VlCoroutine Vact_mem_tb___024root___eval_initial__TOP__Vtiming__1(Vact_mem_tb___024root* vlSelf);

void Vact_mem_tb___024root___eval_initial(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_initial\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vact_mem_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vact_mem_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vact_mem_tb___024root___eval_initial__TOP__Vtiming__0(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.act_mem_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "act_mem_tb.sv", 
                                             39);
        vlSelfRef.act_mem_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.act_mem_tb__DOT__clk)));
    }
}

void Vact_mem_tb___024root___eval_act(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_act\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vact_mem_tb___024root___nba_sequent__TOP__0(Vact_mem_tb___024root* vlSelf);

void Vact_mem_tb___024root___eval_nba(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_nba\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vact_mem_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vact_mem_tb___024root___nba_sequent__TOP__0(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___nba_sequent__TOP__0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*46:0*/ __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v0;
    __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v0;
    __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v0;
    __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v0 = 0;
    QData/*46:0*/ __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v1;
    __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v1;
    __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v1;
    __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v2;
    __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v2;
    __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v2 = 0;
    // Body
    __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v0 = 0U;
    __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v1 = 0U;
    __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v2 = 0U;
    if (vlSelfRef.act_mem_tb__DOT__rst_n) {
        if (vlSelfRef.act_mem_tb__DOT__dut__DOT__current_state) {
            if (vlSelfRef.act_mem_tb__DOT__cs) {
                if (vlSelfRef.act_mem_tb__DOT__malloc_dealloc) {
                    VL_WRITEF_NX("ACT_MEM: dealloc access at addr %0#\n",0,
                                 10,vlSelfRef.act_mem_tb__DOT__dealloc_addr);
                    if (vlSelfRef.act_mem_tb__DOT__dealloc_we) {
                        __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v0 
                            = vlSelfRef.act_mem_tb__DOT__dealloc_wdata;
                        __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v0 
                            = vlSelfRef.act_mem_tb__DOT__dealloc_addr;
                        __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v0 = 1U;
                    } else {
                        vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                            = vlSelfRef.act_mem_tb__DOT__dut__DOT__act_mem
                            [vlSelfRef.act_mem_tb__DOT__dealloc_addr];
                    }
                } else {
                    VL_WRITEF_NX("ACT_MEM: malloc access at addr %0#\n",0,
                                 10,vlSelfRef.act_mem_tb__DOT__malloc_addr);
                    if (vlSelfRef.act_mem_tb__DOT__malloc_we) {
                        __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v1 
                            = vlSelfRef.act_mem_tb__DOT__malloc_wdata;
                        __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v1 
                            = vlSelfRef.act_mem_tb__DOT__malloc_addr;
                        __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v1 = 1U;
                    } else {
                        vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                            = vlSelfRef.act_mem_tb__DOT__dut__DOT__act_mem
                            [vlSelfRef.act_mem_tb__DOT__malloc_addr];
                    }
                }
            }
        } else {
            if ((0x400U == (IData)(vlSelfRef.act_mem_tb__DOT__dut__DOT__index))) {
                vlSelfRef.act_mem_tb__DOT__dut__DOT__current_state = 1U;
                vlSelfRef.act_mem_tb__DOT__bsy = 0U;
            }
            __VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v2 
                = (0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dut__DOT__index));
            __VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v2 = 1U;
            vlSelfRef.act_mem_tb__DOT__dut__DOT__index 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.act_mem_tb__DOT__dut__DOT__index)));
        }
    } else {
        vlSelfRef.act_mem_tb__DOT__dut__DOT__index = 0U;
        vlSelfRef.act_mem_tb__DOT__bsy = 1U;
        vlSelfRef.act_mem_tb__DOT__dut__DOT__current_state = 0U;
    }
    if (__VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v0) {
        vlSelfRef.act_mem_tb__DOT__dut__DOT__act_mem[__VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v0] 
            = __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v0;
    }
    if (__VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v1) {
        vlSelfRef.act_mem_tb__DOT__dut__DOT__act_mem[__VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v1] 
            = __VdlyVal__act_mem_tb__DOT__dut__DOT__act_mem__v1;
    }
    if (__VdlySet__act_mem_tb__DOT__dut__DOT__act_mem__v2) {
        vlSelfRef.act_mem_tb__DOT__dut__DOT__act_mem[__VdlyDim0__act_mem_tb__DOT__dut__DOT__act_mem__v2] = 0ULL;
    }
}

void Vact_mem_tb___024root___timing_resume(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___timing_resume\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h990cb9ed__0.resume(
                                                   "@(posedge act_mem_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc39cdf13__0.resume(
                                                   "@(negedge act_mem_tb.bsy)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h990cb9ac__0.resume(
                                                   "@(negedge act_mem_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vact_mem_tb___024root___timing_commit(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___timing_commit\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h990cb9ed__0.commit(
                                                   "@(posedge act_mem_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc39cdf13__0.commit(
                                                   "@(negedge act_mem_tb.bsy)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h990cb9ac__0.commit(
                                                   "@(negedge act_mem_tb.clk)");
    }
}

void Vact_mem_tb___024root___eval_triggers__act(Vact_mem_tb___024root* vlSelf);

bool Vact_mem_tb___024root___eval_phase__act(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_phase__act\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vact_mem_tb___024root___eval_triggers__act(vlSelf);
    Vact_mem_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vact_mem_tb___024root___timing_resume(vlSelf);
        Vact_mem_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vact_mem_tb___024root___eval_phase__nba(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_phase__nba\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vact_mem_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vact_mem_tb___024root___dump_triggers__nba(Vact_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vact_mem_tb___024root___dump_triggers__act(Vact_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vact_mem_tb___024root___eval(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vact_mem_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("act_mem_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vact_mem_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("act_mem_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vact_mem_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vact_mem_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vact_mem_tb___024root___eval_debug_assertions(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_debug_assertions\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
