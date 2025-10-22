// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_tb.h for the primary calling header

#include "Vmalloc_tb__pch.h"
#include "Vmalloc_tb___024root.h"

VlCoroutine Vmalloc_tb___024root___eval_initial__TOP__Vtiming__0(Vmalloc_tb___024root* vlSelf);
VlCoroutine Vmalloc_tb___024root___eval_initial__TOP__Vtiming__1(Vmalloc_tb___024root* vlSelf);

void Vmalloc_tb___024root___eval_initial(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_initial\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vmalloc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmalloc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmalloc_tb___024root___eval_initial__TOP__Vtiming__1(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "malloc_tb.sv", 
                                             67);
        vlSelfRef.malloc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.malloc_tb__DOT__clk)));
    }
}

void Vmalloc_tb___024root___eval_act(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_act\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmalloc_tb___024root___nba_sequent__TOP__0(Vmalloc_tb___024root* vlSelf);

void Vmalloc_tb___024root___eval_nba(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_nba\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmalloc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vmalloc_tb___024root___nba_sequent__TOP__0(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___nba_sequent__TOP__0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vdly__malloc_tb__DOT__dut__DOT__left;
    __Vdly__malloc_tb__DOT__dut__DOT__left = 0;
    SData/*10:0*/ __Vdly__malloc_tb__DOT__dut__DOT__right;
    __Vdly__malloc_tb__DOT__dut__DOT__right = 0;
    CData/*2:0*/ __Vdly__malloc_tb__DOT__dut__DOT__current_state;
    __Vdly__malloc_tb__DOT__dut__DOT__current_state = 0;
    CData/*3:0*/ __Vdly__malloc_tb__DOT__dut__DOT__core_id_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__core_id_reg = 0;
    SData/*9:0*/ __Vdly__malloc_tb__DOT__dut__DOT__num_blocks_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__num_blocks_reg = 0;
    SData/*15:0*/ __Vdly__malloc_tb__DOT__dut__DOT__read_mask_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__read_mask_reg = 0;
    SData/*15:0*/ __Vdly__malloc_tb__DOT__dut__DOT__write_mask_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__write_mask_reg = 0;
    CData/*0:0*/ __Vdly__malloc_tb__DOT__bsy;
    __Vdly__malloc_tb__DOT__bsy = 0;
    SData/*10:0*/ __Vdly__malloc_tb__DOT__dut__DOT__reservation_counter;
    __Vdly__malloc_tb__DOT__dut__DOT__reservation_counter = 0;
    VlWide<15>/*479:0*/ __Vdly__malloc_tb__DOT____Vcellout__dut__act;
    VL_ZERO_W(480, __Vdly__malloc_tb__DOT____Vcellout__dut__act);
    QData/*47:0*/ __Vdly__malloc_tb__DOT__dut__DOT__e;
    __Vdly__malloc_tb__DOT__dut__DOT__e = 0;
    // Body
    __Vdly__malloc_tb__DOT__dut__DOT__left = vlSelfRef.malloc_tb__DOT__dut__DOT__left;
    __Vdly__malloc_tb__DOT__dut__DOT__right = vlSelfRef.malloc_tb__DOT__dut__DOT__right;
    __Vdly__malloc_tb__DOT__dut__DOT__current_state 
        = vlSelfRef.malloc_tb__DOT__dut__DOT__current_state;
    __Vdly__malloc_tb__DOT__dut__DOT__core_id_reg = vlSelfRef.malloc_tb__DOT__dut__DOT__core_id_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__num_blocks_reg 
        = vlSelfRef.malloc_tb__DOT__dut__DOT__num_blocks_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__read_mask_reg 
        = vlSelfRef.malloc_tb__DOT__dut__DOT__read_mask_reg;
    __Vdly__malloc_tb__DOT__dut__DOT__write_mask_reg 
        = vlSelfRef.malloc_tb__DOT__dut__DOT__write_mask_reg;
    __Vdly__malloc_tb__DOT__bsy = vlSelfRef.malloc_tb__DOT__bsy;
    __Vdly__malloc_tb__DOT__dut__DOT__reservation_counter 
        = vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter;
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[0U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[1U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[2U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[3U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[4U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[5U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[6U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[7U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[8U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[9U] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xaU] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xbU] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xcU] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xdU] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU];
    __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xeU] 
        = vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU];
    __Vdly__malloc_tb__DOT__dut__DOT__e = vlSelfRef.malloc_tb__DOT__dut__DOT__e;
    if (vlSelfRef.malloc_tb__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state) 
                          >> 1U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state)))))) {
                    VL_WRITEF_NX("MALLOC_RESULT: rdy=%0b, bsy=%0b, err=%0#, base_addr=0x%0x\n",0,
                                 1,vlSelfRef.malloc_tb__DOT__rdy,
                                 1,(IData)(vlSelfRef.malloc_tb__DOT__bsy),
                                 2,vlSelfRef.malloc_tb__DOT__err,
                                 32,vlSelfRef.malloc_tb__DOT__base_addr);
                    __Vdly__malloc_tb__DOT__dut__DOT__left = 0U;
                    __Vdly__malloc_tb__DOT__dut__DOT__right = 0U;
                    __Vdly__malloc_tb__DOT__dut__DOT__current_state = 0U;
                    __Vdly__malloc_tb__DOT__dut__DOT__core_id_reg = 0U;
                    __Vdly__malloc_tb__DOT__dut__DOT__num_blocks_reg = 0U;
                    __Vdly__malloc_tb__DOT__dut__DOT__read_mask_reg = 0U;
                    __Vdly__malloc_tb__DOT__dut__DOT__write_mask_reg = 0U;
                    __Vdly__malloc_tb__DOT__bsy = 0U;
                    vlSelfRef.malloc_tb__DOT__rdy = 0U;
                    vlSelfRef.malloc_tb__DOT__err = 0U;
                    vlSelfRef.malloc_tb__DOT__base_addr = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state))) {
                if (VL_LIKELY((((IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left) 
                                > (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))) {
                    __Vdly__malloc_tb__DOT__dut__DOT__reservation_counter 
                        = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter)));
                    vlSelfRef.malloc_tb__DOT__rdy = 1U;
                    __Vdly__malloc_tb__DOT__bsy = 1U;
                    vlSelfRef.malloc_tb__DOT__err = 0U;
                    vlSelfRef.malloc_tb__DOT__base_addr 
                        = VL_SHIFTL_III(32,32,32, (
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)) 
                                                   - (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__num_blocks_reg)), 0xaU);
                    __Vdly__malloc_tb__DOT__dut__DOT__current_state = 4U;
                } else {
                    VL_WRITEF_NX("Allocating block %0# to core_id=%0# with reservation_id=%0#\n",0,
                                 10,(0x3ffU & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)),
                                 4,(IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__core_id_reg),
                                 11,vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter);
                    vlSelfRef.malloc_tb__DOT__dut__DOT____Vlvbound_h0225cb74__0 
                        = (((QData)((IData)((0x10000U 
                                             | (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__write_mask_reg)))) 
                            << 0x1fU) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__read_mask_reg) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__core_id_reg) 
                                                             << 0xbU) 
                                                            | (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter))))));
                    if (VL_LIKELY(((0x1dfU >= (0x1ffU 
                                               & ((IData)(0x30U) 
                                                  * 
                                                  (0x3ffU 
                                                   & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))) {
                        VL_ASSIGNSEL_WQ(480,48,(0x1ffU 
                                                & ((IData)(0x30U) 
                                                   * 
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))), __Vdly__malloc_tb__DOT____Vcellout__dut__act, vlSelfRef.malloc_tb__DOT__dut__DOT____Vlvbound_h0225cb74__0);
                    }
                    __Vdly__malloc_tb__DOT__dut__DOT__left 
                        = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)));
                    __Vdly__malloc_tb__DOT__dut__DOT__e 
                        = ((0x1dfU >= (0x1ffU & ((IData)(0x30U) 
                                                 * 
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3ffU 
                                                   & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))
                            ? (0xffffffffffffULL & 
                               (((QData)((IData)(vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                 (((IData)(0x2fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(0x30U) 
                                                * ((IData)(1U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x30U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x3ffU 
                                                       & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(0x30U) 
                                             * ((IData)(1U) 
                                                + (0x3ffU 
                                                   & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x30U) 
                                                                     * 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                      (0xfU 
                                                       & (((IData)(0x30U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))) 
                                                          >> 5U))])) 
                                      >> (0x1fU & ((IData)(0x30U) 
                                                   * 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))))
                            : 0ULL);
                }
            } else if ((1U & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                      >> 0x2fU)))) {
                __Vdly__malloc_tb__DOT__dut__DOT__left 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)));
                __Vdly__malloc_tb__DOT__dut__DOT__current_state = 1U;
                __Vdly__malloc_tb__DOT__dut__DOT__e 
                    = ((0x1dfU >= (0x1ffU & ((IData)(0x30U) 
                                             * ((IData)(1U) 
                                                + (0x3ffU 
                                                   & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))))
                        ? (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                 (((IData)(0x2fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x30U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x30U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x30U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                      (0xfU 
                                                                       & (((IData)(0x30U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))))))
                        : 0ULL);
            } else if ((((IData)(1U) + ((IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right) 
                                        - (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))) 
                        >= (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__num_blocks_reg))) {
                __Vdly__malloc_tb__DOT__dut__DOT__current_state = 3U;
            } else if ((0x400U <= (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))) {
                vlSelfRef.malloc_tb__DOT__rdy = 1U;
                __Vdly__malloc_tb__DOT__bsy = 1U;
                vlSelfRef.malloc_tb__DOT__err = 1U;
                __Vdly__malloc_tb__DOT__dut__DOT__current_state = 4U;
            } else {
                __Vdly__malloc_tb__DOT__dut__DOT__right 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)));
                __Vdly__malloc_tb__DOT__dut__DOT__e 
                    = ((0x1dfU >= (0x1ffU & ((IData)(0x30U) 
                                             * ((IData)(1U) 
                                                + (0x3ffU 
                                                   & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))))
                        ? (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                 (((IData)(0x2fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x30U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x30U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x30U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                      (0xfU 
                                                                       & (((IData)(0x30U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__right)))))))))
                        : 0ULL);
            }
        } else if ((1U & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state))) {
            if ((1U & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                               >> 0x2fU)))) {
                __Vdly__malloc_tb__DOT__dut__DOT__left 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)));
                __Vdly__malloc_tb__DOT__dut__DOT__e 
                    = ((0x1dfU >= (0x1ffU & ((IData)(0x30U) 
                                             * ((IData)(1U) 
                                                + (0x3ffU 
                                                   & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))
                        ? (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                 (((IData)(0x2fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x30U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3ffU 
                                                         & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x30U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x30U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                      (0xfU 
                                                                       & (((IData)(0x30U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))))))
                        : 0ULL);
            } else {
                __Vdly__malloc_tb__DOT__dut__DOT__right 
                    = vlSelfRef.malloc_tb__DOT__dut__DOT__left;
                __Vdly__malloc_tb__DOT__dut__DOT__current_state = 2U;
                __Vdly__malloc_tb__DOT__dut__DOT__e 
                    = ((0x1dfU >= (0x1ffU & ((IData)(0x30U) 
                                             * (0x3ffU 
                                                & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))
                        ? (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                 (((IData)(0x2fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x30U) 
                                                                       * 
                                                                       (0x3ffU 
                                                                        & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       (0x3ffU 
                                                        & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x30U) 
                                                       * 
                                                       (0x3ffU 
                                                        & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x30U) 
                                                         * 
                                                         (0x3ffU 
                                                          & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left)))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x30U) 
                                                                           * 
                                                                           (0x3ffU 
                                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          (0x3ffU 
                                                           & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[
                                                                      (0xfU 
                                                                       & (((IData)(0x30U) 
                                                                           * 
                                                                           (0x3ffU 
                                                                            & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x30U) 
                                                          * 
                                                          (0x3ffU 
                                                           & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__left))))))))
                        : 0ULL);
            }
        } else if (VL_UNLIKELY((((IData)(vlSelfRef.malloc_tb__DOT__cs) 
                                 & (~ (IData)(vlSelfRef.malloc_tb__DOT__bsy)))))) {
            VL_WRITEF_NX("MALLOC_IDLE: cs=%0b, bsy=%0b, core_id=%0#\n",0,
                         1,vlSelfRef.malloc_tb__DOT__cs,
                         1,(IData)(vlSelfRef.malloc_tb__DOT__bsy),
                         4,vlSelfRef.malloc_tb__DOT__core_id);
            vlSelfRef.malloc_tb__DOT__rdy = 0U;
            vlSelfRef.malloc_tb__DOT__err = 0U;
            __Vdly__malloc_tb__DOT__dut__DOT__current_state = 1U;
            __Vdly__malloc_tb__DOT__dut__DOT__core_id_reg 
                = vlSelfRef.malloc_tb__DOT__core_id;
            __Vdly__malloc_tb__DOT__dut__DOT__num_blocks_reg 
                = vlSelfRef.malloc_tb__DOT__num_blocks;
            __Vdly__malloc_tb__DOT__dut__DOT__read_mask_reg 
                = vlSelfRef.malloc_tb__DOT__read_mask;
            __Vdly__malloc_tb__DOT__dut__DOT__write_mask_reg 
                = vlSelfRef.malloc_tb__DOT__write_mask;
            __Vdly__malloc_tb__DOT__dut__DOT__left = 0U;
            __Vdly__malloc_tb__DOT__dut__DOT__right = 0U;
            __Vdly__malloc_tb__DOT__dut__DOT__e = (0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U]))));
            __Vdly__malloc_tb__DOT__bsy = 1U;
        }
    } else {
        __Vdly__malloc_tb__DOT__dut__DOT__reservation_counter = 0U;
        __Vdly__malloc_tb__DOT__dut__DOT__current_state = 0U;
        vlSelfRef.malloc_tb__DOT__rdy = 0U;
        __Vdly__malloc_tb__DOT__bsy = 0U;
        vlSelfRef.malloc_tb__DOT__err = 0U;
        vlSelfRef.malloc_tb__DOT__base_addr = 0U;
        __Vdly__malloc_tb__DOT__dut__DOT__left = 0U;
        __Vdly__malloc_tb__DOT__dut__DOT__right = 0U;
    }
    vlSelfRef.malloc_tb__DOT__dut__DOT__left = __Vdly__malloc_tb__DOT__dut__DOT__left;
    vlSelfRef.malloc_tb__DOT__dut__DOT__right = __Vdly__malloc_tb__DOT__dut__DOT__right;
    vlSelfRef.malloc_tb__DOT__dut__DOT__current_state 
        = __Vdly__malloc_tb__DOT__dut__DOT__current_state;
    vlSelfRef.malloc_tb__DOT__dut__DOT__core_id_reg 
        = __Vdly__malloc_tb__DOT__dut__DOT__core_id_reg;
    vlSelfRef.malloc_tb__DOT__dut__DOT__num_blocks_reg 
        = __Vdly__malloc_tb__DOT__dut__DOT__num_blocks_reg;
    vlSelfRef.malloc_tb__DOT__dut__DOT__read_mask_reg 
        = __Vdly__malloc_tb__DOT__dut__DOT__read_mask_reg;
    vlSelfRef.malloc_tb__DOT__dut__DOT__write_mask_reg 
        = __Vdly__malloc_tb__DOT__dut__DOT__write_mask_reg;
    vlSelfRef.malloc_tb__DOT__bsy = __Vdly__malloc_tb__DOT__bsy;
    vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter 
        = __Vdly__malloc_tb__DOT__dut__DOT__reservation_counter;
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[0U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[1U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[2U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[3U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[4U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[5U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[6U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[7U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[8U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[9U];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xaU];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xbU];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xcU];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xdU];
    vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
        = __Vdly__malloc_tb__DOT____Vcellout__dut__act[0xeU];
    vlSelfRef.malloc_tb__DOT__dut__DOT__e = __Vdly__malloc_tb__DOT__dut__DOT__e;
}

void Vmalloc_tb___024root___timing_resume(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___timing_resume\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0f16816a__0.resume(
                                                   "@(posedge malloc_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf3646918__0.resume(
                                                   "@(negedge malloc_tb.rdy)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmalloc_tb___024root___timing_commit(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___timing_commit\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0f16816a__0.commit(
                                                   "@(posedge malloc_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf3646918__0.commit(
                                                   "@(negedge malloc_tb.rdy)");
    }
}

void Vmalloc_tb___024root___eval_triggers__act(Vmalloc_tb___024root* vlSelf);

bool Vmalloc_tb___024root___eval_phase__act(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_phase__act\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmalloc_tb___024root___eval_triggers__act(vlSelf);
    Vmalloc_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmalloc_tb___024root___timing_resume(vlSelf);
        Vmalloc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmalloc_tb___024root___eval_phase__nba(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_phase__nba\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmalloc_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_tb___024root___dump_triggers__nba(Vmalloc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_tb___024root___dump_triggers__act(Vmalloc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmalloc_tb___024root___eval(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmalloc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("malloc_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmalloc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("malloc_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmalloc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmalloc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmalloc_tb___024root___eval_debug_assertions(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_debug_assertions\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
