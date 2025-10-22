// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vact_mem_tb__Syms.h"


VL_ATTR_COLD void Vact_mem_tb___024root__trace_init_sub__TOP____024unit__0(Vact_mem_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vact_mem_tb___024root__trace_init_sub__TOP__0(Vact_mem_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_init_sub__TOP__0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vact_mem_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("act_mem_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"malloc_dealloc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"malloc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("malloc_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+5,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+10,0,"malloc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+11,0,"dealloc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dealloc_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+12,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+17,0,"dealloc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("malloc_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+18,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("dealloc_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+23,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+28,0,"bsy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"malloc_dealloc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"malloc_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("malloc_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+5,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"read_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"owner",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"reservation_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+10,0,"malloc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+11,0,"dealloc_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dealloc_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+12,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"read_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"owner",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"reservation_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+17,0,"dealloc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("malloc_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+18,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("dealloc_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+23,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+28,0,"bsy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"current_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_init_sub__TOP____024unit__0(Vact_mem_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+32,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"CORE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"SHARED_MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"CORE_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"BLOCK_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"BLOCK_COUNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"REGION_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_init_top(Vact_mem_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_init_top\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vact_mem_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vact_mem_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vact_mem_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vact_mem_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vact_mem_tb___024root__trace_register(Vact_mem_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_register\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vact_mem_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vact_mem_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vact_mem_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vact_mem_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_const_0_sub_0(Vact_mem_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vact_mem_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_const_0\n"); );
    // Init
    Vact_mem_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vact_mem_tb___024root*>(voidSelf);
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vact_mem_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_const_0_sub_0(Vact_mem_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_const_0_sub_0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+32,(0x20U),32);
    bufp->fullIData(oldp+33,(0x10U),32);
    bufp->fullIData(oldp+34,(0x100000U),32);
    bufp->fullIData(oldp+35,(0x400U),32);
    bufp->fullIData(oldp+36,(4U),32);
    bufp->fullIData(oldp+37,(0xaU),32);
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_full_0_sub_0(Vact_mem_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vact_mem_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_full_0\n"); );
    // Init
    Vact_mem_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vact_mem_tb___024root*>(voidSelf);
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vact_mem_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vact_mem_tb___024root__trace_full_0_sub_0(Vact_mem_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_full_0_sub_0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.act_mem_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.act_mem_tb__DOT__cs));
    bufp->fullBit(oldp+3,(vlSelfRef.act_mem_tb__DOT__malloc_dealloc));
    bufp->fullBit(oldp+4,(vlSelfRef.act_mem_tb__DOT__malloc_we));
    bufp->fullBit(oldp+5,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                         >> 0x2eU)))));
    bufp->fullSData(oldp+6,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                                >> 0x1eU)))),16);
    bufp->fullSData(oldp+7,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                                >> 0xeU)))),16);
    bufp->fullCData(oldp+8,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                             >> 0xaU)))),4);
    bufp->fullSData(oldp+9,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__malloc_wdata))),10);
    bufp->fullSData(oldp+10,(vlSelfRef.act_mem_tb__DOT__malloc_addr),10);
    bufp->fullBit(oldp+11,(vlSelfRef.act_mem_tb__DOT__dealloc_we));
    bufp->fullBit(oldp+12,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                          >> 0x2eU)))));
    bufp->fullSData(oldp+13,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                                 >> 0x1eU)))),16);
    bufp->fullSData(oldp+14,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                                 >> 0xeU)))),16);
    bufp->fullCData(oldp+15,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                              >> 0xaU)))),4);
    bufp->fullSData(oldp+16,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dealloc_wdata))),10);
    bufp->fullSData(oldp+17,(vlSelfRef.act_mem_tb__DOT__dealloc_addr),10);
    bufp->fullBit(oldp+18,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                          >> 0x2eU)))));
    bufp->fullSData(oldp+19,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                                 >> 0x1eU)))),16);
    bufp->fullSData(oldp+20,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                                 >> 0xeU)))),16);
    bufp->fullCData(oldp+21,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                              >> 0xaU)))),4);
    bufp->fullSData(oldp+22,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__malloc_rdata))),10);
    bufp->fullBit(oldp+23,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                          >> 0x2eU)))));
    bufp->fullSData(oldp+24,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                                 >> 0x1eU)))),16);
    bufp->fullSData(oldp+25,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                                 >> 0xeU)))),16);
    bufp->fullCData(oldp+26,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                              >> 0xaU)))),4);
    bufp->fullSData(oldp+27,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dealloc_rdata))),10);
    bufp->fullBit(oldp+28,(vlSelfRef.act_mem_tb__DOT__bsy));
    bufp->fullBit(oldp+29,(vlSelfRef.act_mem_tb__DOT__dut__DOT__current_state));
    bufp->fullSData(oldp+30,(vlSelfRef.act_mem_tb__DOT__dut__DOT__index),11);
    bufp->fullBit(oldp+31,(vlSelfRef.act_mem_tb__DOT__clk));
}
