// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vreservation_counter_tb__Syms.h"


void Vreservation_counter_tb___024root__trace_chg_0_sub_0(Vreservation_counter_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vreservation_counter_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root__trace_chg_0\n"); );
    // Init
    Vreservation_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreservation_counter_tb___024root*>(voidSelf);
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vreservation_counter_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vreservation_counter_tb___024root__trace_chg_0_sub_0(Vreservation_counter_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root__trace_chg_0_sub_0\n"); );
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.reservation_counter_tb__DOT__new_reservation_id),10);
        bufp->chgBit(oldp+1,((0x400U == (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length))));
        bufp->chgBit(oldp+2,((0U == (IData)(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length))));
        bufp->chgBit(oldp+3,(vlSelfRef.reservation_counter_tb__DOT__rdy));
        bufp->chgSData(oldp+4,(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__queue_length),11);
        bufp->chgSData(oldp+5,(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__left),10);
        bufp->chgSData(oldp+6,(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__right),10);
        bufp->chgSData(oldp+7,(vlSelfRef.reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i),11);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.reservation_counter_tb__DOT__clk));
    bufp->chgBit(oldp+9,(vlSelfRef.reservation_counter_tb__DOT__rst_n));
    bufp->chgBit(oldp+10,(vlSelfRef.reservation_counter_tb__DOT__enqueue));
    bufp->chgBit(oldp+11,(vlSelfRef.reservation_counter_tb__DOT__dequeue));
    bufp->chgSData(oldp+12,(vlSelfRef.reservation_counter_tb__DOT__freed_reservation_id),10);
}

void Vreservation_counter_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreservation_counter_tb___024root__trace_cleanup\n"); );
    // Init
    Vreservation_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreservation_counter_tb___024root*>(voidSelf);
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
