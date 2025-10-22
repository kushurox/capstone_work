// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreservation_counter_tb.h for the primary calling header

#include "Vreservation_counter_tb__pch.h"
#include "Vreservation_counter_tb___024root.h"

VlCoroutine Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vreservation_counter_tb___024root* vlSelf);
VlCoroutine Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vreservation_counter_tb___024root* vlSelf);

void Vreservation_counter_tb___024root___eval_initial(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_initial\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reservation_counter_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "reservation_counter_tb.sv", 
                                             27);
        vlSelfRef.reservation_counter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.reservation_counter_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtask_reservation_counter_tb__DOT__enqueue_task__2__reservation_id_in;
    __Vtask_reservation_counter_tb__DOT__enqueue_task__2__reservation_id_in = 0;
    IData/*31:0*/ __Vtask_reservation_counter_tb__DOT__print_first__3__n;
    __Vtask_reservation_counter_tb__DOT__print_first__3__n = 0;
    SData/*9:0*/ __Vtask_reservation_counter_tb__DOT__print_first__3__temp_left;
    __Vtask_reservation_counter_tb__DOT__print_first__3__temp_left = 0;
    SData/*9:0*/ __Vtask_reservation_counter_tb__DOT__print_first__3__temp_right;
    __Vtask_reservation_counter_tb__DOT__print_first__3__temp_right = 0;
    // Body
    vlSelfRef.reservation_counter_tb__DOT__rst_n = 1U;
    vlSelfRef.reservation_counter_tb__DOT__enqueue = 0U;
    vlSelfRef.reservation_counter_tb__DOT__dequeue = 0U;
    vlSelfRef.reservation_counter_tb__DOT__freed_reservation_id = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "reservation_counter_tb.sv", 
                                         35);
    vlSelfRef.reservation_counter_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "reservation_counter_tb.sv", 
                                         37);
    vlSelfRef.reservation_counter_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "reservation_counter_tb.sv", 
                                         39);
    while ((0U != (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length))) {
        co_await vlSelfRef.__VtrigSched_h13c28b1e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge reservation_counter_tb.clk)", 
                                                             "reservation_counter_tb.sv", 
                                                             48);
        vlSelfRef.reservation_counter_tb__DOT__dequeue = 1U;
        co_await vlSelfRef.__VtrigSched_h13c28b1e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge reservation_counter_tb.clk)", 
                                                             "reservation_counter_tb.sv", 
                                                             50);
        vlSelfRef.reservation_counter_tb__DOT__dequeue = 0U;
        VL_WRITEF_NX("Dequeued reservation id: %0#\n",0,
                     10,vlSelfRef.reservation_counter_tb__DOT__new_reservation_id);
    }
    __Vtask_reservation_counter_tb__DOT__enqueue_task__2__reservation_id_in = 0x45U;
    co_await vlSelfRef.__VtrigSched_h13c28b1e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reservation_counter_tb.clk)", 
                                                         "reservation_counter_tb.sv", 
                                                         56);
    vlSelfRef.reservation_counter_tb__DOT__freed_reservation_id 
        = __Vtask_reservation_counter_tb__DOT__enqueue_task__2__reservation_id_in;
    vlSelfRef.reservation_counter_tb__DOT__enqueue = 1U;
    co_await vlSelfRef.__VtrigSched_h13c28b1e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reservation_counter_tb.clk)", 
                                                         "reservation_counter_tb.sv", 
                                                         59);
    vlSelfRef.reservation_counter_tb__DOT__enqueue = 0U;
    VL_WRITEF_NX("Enqueued reservation id: %0#\n",0,
                 10,__Vtask_reservation_counter_tb__DOT__enqueue_task__2__reservation_id_in);
    __Vtask_reservation_counter_tb__DOT__print_first__3__n = 5U;
    __Vtask_reservation_counter_tb__DOT__print_first__3__temp_left = 0;
    __Vtask_reservation_counter_tb__DOT__print_first__3__temp_right = 0;
    {
        __Vtask_reservation_counter_tb__DOT__print_first__3__temp_left 
            = vlSelfRef.reservation_counter_tb__DOT__dut__DOT__left;
        __Vtask_reservation_counter_tb__DOT__print_first__3__temp_right 
            = vlSelfRef.reservation_counter_tb__DOT__dut__DOT__right;
        if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length))))) {
            VL_WRITEF_NX("Reservation counter is empty.\n",0);
            goto __Vlabel1;
        }
        while ((((IData)(__Vtask_reservation_counter_tb__DOT__print_first__3__temp_left) 
                 != (IData)(__Vtask_reservation_counter_tb__DOT__print_first__3__temp_right)) 
                & VL_LTS_III(32, 0U, __Vtask_reservation_counter_tb__DOT__print_first__3__n))) {
            VL_WRITEF_NX("Reservation id at position %0#: %0#\n",0,
                         10,__Vtask_reservation_counter_tb__DOT__print_first__3__temp_left,
                         10,vlSelfRef.reservation_counter_tb__DOT__dut__DOT__reservation_ids
                         [__Vtask_reservation_counter_tb__DOT__print_first__3__temp_left]);
            __Vtask_reservation_counter_tb__DOT__print_first__3__temp_left 
                = (0x3ffU & ((IData)(1U) + (IData)(__Vtask_reservation_counter_tb__DOT__print_first__3__temp_left)));
            __Vtask_reservation_counter_tb__DOT__print_first__3__n 
                = (__Vtask_reservation_counter_tb__DOT__print_first__3__n 
                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    VL_FINISH_MT("reservation_counter_tb.sv", 43, "");
}

void Vreservation_counter_tb___024root___eval_act(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_act\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vreservation_counter_tb___024root___nba_sequent__TOP__0(Vreservation_counter_tb___024root* vlSelf);

void Vreservation_counter_tb___024root___eval_nba(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_nba\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vreservation_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vreservation_counter_tb___024root___nba_sequent__TOP__0(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length;
    __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length = 0;
    SData/*9:0*/ __VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0;
    __VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0;
    __VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1;
    __VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1 = 0;
    SData/*9:0*/ __VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1;
    __VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1 = 0;
    // Body
    __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length 
        = vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length;
    if (vlSelfRef.reservation_counter_tb__DOT__rst_n) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.reservation_counter_tb__DOT__enqueue) 
                           & (IData)(vlSelfRef.reservation_counter_tb__DOT__rdy)) 
                          & (~ (IData)(vlSelfRef.reservation_counter_tb__DOT__full)))))) {
            VL_WRITEF_NX("RESERVATION_COUNTER: Enqueue reservation id %0#\n",0,
                         10,vlSelfRef.reservation_counter_tb__DOT__freed_reservation_id);
            __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length)));
            __VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0 
                = vlSelfRef.reservation_counter_tb__DOT__freed_reservation_id;
            __VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0 
                = vlSelfRef.reservation_counter_tb__DOT__dut__DOT__right;
            vlSelfRef.__VdlyCommitQueuereservation_counter_tb__DOT__dut__DOT__reservation_ids.enqueue(__VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0, (IData)(__VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v0));
            vlSelfRef.reservation_counter_tb__DOT__dut__DOT__right 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__right)));
        } else if (VL_UNLIKELY(((((IData)(vlSelfRef.reservation_counter_tb__DOT__dequeue) 
                                  & (IData)(vlSelfRef.reservation_counter_tb__DOT__rdy)) 
                                 & (0U < (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length)))))) {
            VL_WRITEF_NX("RESERVATION_COUNTER: Dequeue reservation id %0#\n",0,
                         10,vlSelfRef.reservation_counter_tb__DOT__new_reservation_id);
            __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length 
                = (0x7ffU & ((IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length) 
                             - (IData)(1U)));
            vlSelfRef.reservation_counter_tb__DOT__new_reservation_id 
                = vlSelfRef.reservation_counter_tb__DOT__dut__DOT__reservation_ids
                [vlSelfRef.reservation_counter_tb__DOT__dut__DOT__left];
            vlSelfRef.reservation_counter_tb__DOT__dut__DOT__left 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__left)));
        }
    } else {
        vlSelfRef.reservation_counter_tb__DOT__dut__DOT__left = 0U;
        vlSelfRef.reservation_counter_tb__DOT__dut__DOT__right = 0U;
        __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length = 0x400U;
        vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
        vlSelfRef.reservation_counter_tb__DOT__rdy = 1U;
        vlSelfRef.reservation_counter_tb__DOT__new_reservation_id = 0U;
        while ((0x400U > (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i))) {
            __VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1 
                = (0x3ffU & (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i));
            __VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1 
                = (0x3ffU & (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i));
            vlSelfRef.__VdlyCommitQueuereservation_counter_tb__DOT__dut__DOT__reservation_ids.enqueue(__VdlyVal__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1, (IData)(__VdlyDim0__reservation_counter_tb__DOT__dut__DOT__reservation_ids__v1));
            vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i)));
        }
    }
    vlSelfRef.__VdlyCommitQueuereservation_counter_tb__DOT__dut__DOT__reservation_ids.commit(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__reservation_ids);
    vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length 
        = __Vdly__reservation_counter_tb__DOT__dut__DOT__queue_length;
    vlSelfRef.reservation_counter_tb__DOT__full = (0x400U 
                                                   == (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length));
}

void Vreservation_counter_tb___024root___timing_resume(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___timing_resume\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h13c28b1e__0.resume(
                                                   "@(posedge reservation_counter_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vreservation_counter_tb___024root___timing_commit(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___timing_commit\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h13c28b1e__0.commit(
                                                   "@(posedge reservation_counter_tb.clk)");
    }
}

void Vreservation_counter_tb___024root___eval_triggers__act(Vreservation_counter_tb___024root* vlSelf);

bool Vreservation_counter_tb___024root___eval_phase__act(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_phase__act\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vreservation_counter_tb___024root___eval_triggers__act(vlSelf);
    Vreservation_counter_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vreservation_counter_tb___024root___timing_resume(vlSelf);
        Vreservation_counter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreservation_counter_tb___024root___eval_phase__nba(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_phase__nba\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vreservation_counter_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreservation_counter_tb___024root___dump_triggers__nba(Vreservation_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreservation_counter_tb___024root___dump_triggers__act(Vreservation_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vreservation_counter_tb___024root___eval(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vreservation_counter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("reservation_counter_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vreservation_counter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("reservation_counter_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vreservation_counter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vreservation_counter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vreservation_counter_tb___024root___eval_debug_assertions(Vreservation_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root___eval_debug_assertions\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
