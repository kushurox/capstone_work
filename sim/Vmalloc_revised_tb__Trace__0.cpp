// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmalloc_revised_tb__Syms.h"


void Vmalloc_revised_tb___024root__trace_chg_0_sub_0(Vmalloc_revised_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vmalloc_revised_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root__trace_chg_0\n"); );
    // Init
    Vmalloc_revised_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_revised_tb___024root*>(voidSelf);
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmalloc_revised_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmalloc_revised_tb___024root__trace_chg_0_sub_0(Vmalloc_revised_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root__trace_chg_0_sub_0\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.malloc_revised_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.malloc_revised_tb__DOT__malloc_cs));
        bufp->chgCData(oldp+2,(vlSelfRef.malloc_revised_tb__DOT__core_id),4);
        bufp->chgSData(oldp+3,(vlSelfRef.malloc_revised_tb__DOT__num_blocks),10);
        bufp->chgSData(oldp+4,(vlSelfRef.malloc_revised_tb__DOT__read_mask),16);
        bufp->chgSData(oldp+5,(vlSelfRef.malloc_revised_tb__DOT__write_mask),16);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+6,(vlSelfRef.malloc_revised_tb__DOT__act_mem_cs));
        bufp->chgBit(oldp+7,(vlSelfRef.malloc_revised_tb__DOT__malloc_we));
        bufp->chgBit(oldp+8,((1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                            >> 0x2eU)))));
        bufp->chgSData(oldp+9,((0xffffU & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                   >> 0x1eU)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                    >> 0xeU)))),16);
        bufp->chgCData(oldp+11,((0xfU & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                 >> 0xaU)))),4);
        bufp->chgSData(oldp+12,((0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__malloc_wdata))),10);
        bufp->chgSData(oldp+13,(vlSelfRef.malloc_revised_tb__DOT__malloc_addr),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+14,((1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                             >> 0x2eU)))));
        bufp->chgSData(oldp+15,((0xffffU & (IData)(
                                                   (vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                                    >> 0x1eU)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   (vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                                    >> 0xeU)))),16);
        bufp->chgCData(oldp+17,((0xfU & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                                 >> 0xaU)))),4);
        bufp->chgSData(oldp+18,((0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__malloc_rdata))),10);
        bufp->chgBit(oldp+19,(vlSelfRef.malloc_revised_tb__DOT__mem_bsy));
        bufp->chgIData(oldp+20,(vlSelfRef.malloc_revised_tb__DOT__base_addr),32);
        bufp->chgBit(oldp+21,(vlSelfRef.malloc_revised_tb__DOT__rdy));
        bufp->chgBit(oldp+22,(vlSelfRef.malloc_revised_tb__DOT__malloc_bsy));
        bufp->chgBit(oldp+23,(vlSelfRef.malloc_revised_tb__DOT__err));
        bufp->chgBit(oldp+24,(vlSelfRef.malloc_revised_tb__DOT__malloc_dequeue));
        bufp->chgSData(oldp+25,(vlSelfRef.malloc_revised_tb__DOT__reservation_id),10);
        bufp->chgBit(oldp+26,(vlSelfRef.malloc_revised_tb__DOT__queue_rdy));
        bufp->chgBit(oldp+27,((0x400U == (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length))));
        bufp->chgBit(oldp+28,((0U == (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length))));
        bufp->chgBit(oldp+29,(vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__current_state));
        bufp->chgSData(oldp+30,(vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__index),11);
        bufp->chgCData(oldp+31,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state),3);
        bufp->chgCData(oldp+32,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__core_id_reg),4);
        bufp->chgSData(oldp+33,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__num_blocks_reg),10);
        bufp->chgSData(oldp+34,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__read_mask_reg),16);
        bufp->chgSData(oldp+35,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__write_mask_reg),16);
        bufp->chgSData(oldp+36,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__reservation_id_reg),10);
        bufp->chgSData(oldp+37,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left),11);
        bufp->chgSData(oldp+38,(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right),11);
        bufp->chgSData(oldp+39,(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length),11);
        bufp->chgSData(oldp+40,(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left),10);
        bufp->chgSData(oldp+41,(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__right),10);
        bufp->chgSData(oldp+42,(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i),11);
    }
    bufp->chgBit(oldp+43,(vlSelfRef.malloc_revised_tb__DOT__clk));
    bufp->chgQData(oldp+44,(vlSelfRef.malloc_revised_tb__DOT__cycle_count),64);
}

void Vmalloc_revised_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root__trace_cleanup\n"); );
    // Init
    Vmalloc_revised_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_revised_tb___024root*>(voidSelf);
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
