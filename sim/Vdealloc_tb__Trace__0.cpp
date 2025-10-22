// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vdealloc_tb__Syms.h"


void Vdealloc_tb___024root__trace_chg_0_sub_0(Vdealloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vdealloc_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_chg_0\n"); );
    // Init
    Vdealloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdealloc_tb___024root*>(voidSelf);
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdealloc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdealloc_tb___024root__trace_chg_0_sub_0(Vdealloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_chg_0_sub_0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.dealloc_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.dealloc_tb__DOT__dealloc_cs));
        bufp->chgIData(oldp+2,(vlSelfRef.dealloc_tb__DOT__dealloc_addr),32);
        bufp->chgCData(oldp+3,(vlSelfRef.dealloc_tb__DOT__dealloc_core_id),4);
        bufp->chgSData(oldp+4,(vlSelfRef.dealloc_tb__DOT__dummy_reservation_id),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                            >> 0x2eU)))));
        bufp->chgSData(oldp+6,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                                   >> 0x1eU)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                                   >> 0xeU)))),16);
        bufp->chgCData(oldp+8,((0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                                >> 0xaU)))),4);
        bufp->chgSData(oldp+9,((0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata))),10);
        bufp->chgBit(oldp+10,(vlSelfRef.dealloc_tb__DOT__dealloc_act_cs));
        bufp->chgBit(oldp+11,(vlSelfRef.dealloc_tb__DOT__dealloc_act_we));
        bufp->chgBit(oldp+12,((1U & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                             >> 0x2eU)))));
        bufp->chgSData(oldp+13,((0xffffU & (IData)(
                                                   (vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                                    >> 0x1eU)))),16);
        bufp->chgSData(oldp+14,((0xffffU & (IData)(
                                                   (vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                                    >> 0xeU)))),16);
        bufp->chgCData(oldp+15,((0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                                 >> 0xaU)))),4);
        bufp->chgSData(oldp+16,((0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata))),10);
        bufp->chgSData(oldp+17,(vlSelfRef.dealloc_tb__DOT__dealloc_act_addr),10);
        bufp->chgBit(oldp+18,(vlSelfRef.dealloc_tb__DOT__dealloc_bsy));
        bufp->chgBit(oldp+19,(vlSelfRef.dealloc_tb__DOT__dealloc_rdy));
        bufp->chgBit(oldp+20,(vlSelfRef.dealloc_tb__DOT__dealloc_err));
        bufp->chgSData(oldp+21,(vlSelfRef.dealloc_tb__DOT__reservation_id_out),10);
        bufp->chgBit(oldp+22,(vlSelfRef.dealloc_tb__DOT__reservation_enqueue));
        bufp->chgBit(oldp+23,(vlSelfRef.dealloc_tb__DOT__act_bsy));
        bufp->chgBit(oldp+24,(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__current_state));
        bufp->chgSData(oldp+25,(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index),11);
        bufp->chgCData(oldp+26,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state),3);
        bufp->chgSData(oldp+27,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index),10);
        bufp->chgSData(oldp+28,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__reservation_id),10);
        bufp->chgCData(oldp+29,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg),4);
        bufp->chgBit(oldp+30,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__from));
        bufp->chgSData(oldp+31,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__new_reservation_id),10);
        bufp->chgBit(oldp+32,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__rdy));
        bufp->chgSData(oldp+33,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right),10);
        bufp->chgSData(oldp+34,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i),11);
    }
    bufp->chgBit(oldp+35,(vlSelfRef.dealloc_tb__DOT__clk));
    bufp->chgBit(oldp+36,((0x400U == (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))));
    bufp->chgBit(oldp+37,((0U == (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))));
    bufp->chgSData(oldp+38,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length),11);
    bufp->chgSData(oldp+39,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left),10);
}

void Vdealloc_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_cleanup\n"); );
    // Init
    Vdealloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdealloc_tb___024root*>(voidSelf);
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
