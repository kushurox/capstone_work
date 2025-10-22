// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vdealloc_tb__Syms.h"


VL_ATTR_COLD void Vdealloc_tb___024root__trace_init_sub__TOP____024unit__0(Vdealloc_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vdealloc_tb___024root__trace_init_sub__TOP__0(Vdealloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_init_sub__TOP__0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vdealloc_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dealloc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dealloc_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"dealloc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"dealloc_core_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dealloc_act_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+6,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+11,0,"dealloc_act_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"dealloc_act_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dealloc_act_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+18,0,"dealloc_act_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+19,0,"dealloc_bsy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"dealloc_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"dealloc_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reservation_id_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+23,0,"reservation_enqueue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"dummy_reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+24,0,"act_bsy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("act_mem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"malloc_dealloc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"malloc_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("malloc_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+42,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"read_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"owner",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"reservation_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+45,0,"malloc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+12,0,"dealloc_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dealloc_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"read_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"owner",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"reservation_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+18,0,"dealloc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("malloc_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+46,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("dealloc_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+6,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+24,0,"bsy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"current_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("dealloc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"core_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("act_rdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+6,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"read_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"owner",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"reservation_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+11,0,"act_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"act_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("act_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBus(c+18,0,"act_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+22,0,"reservation_id_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+23,0,"reservation_enqueue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"bsy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"err",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"current_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"block_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+29,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+30,0,"core_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"from",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reservation_counter_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"enqueue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"dequeue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"freed_reservation_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+32,0,"new_reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+37,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"queue_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+40,0,"left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+34,0,"right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_init_sub__TOP____024unit__0(Vdealloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+51,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"CORE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"SHARED_MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"CORE_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"BLOCK_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"BLOCK_COUNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"REGION_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_init_top(Vdealloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_init_top\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdealloc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vdealloc_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vdealloc_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vdealloc_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vdealloc_tb___024root__trace_register(Vdealloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_register\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdealloc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdealloc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdealloc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdealloc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_const_0_sub_0(Vdealloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vdealloc_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_const_0\n"); );
    // Init
    Vdealloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdealloc_tb___024root*>(voidSelf);
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdealloc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_const_0_sub_0(Vdealloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_const_0_sub_0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+41,(1U));
    bufp->fullBit(oldp+42,(0U));
    bufp->fullSData(oldp+43,(0U),16);
    bufp->fullCData(oldp+44,(0U),4);
    bufp->fullSData(oldp+45,(0U),10);
    bufp->fullBit(oldp+46,((1U & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata 
                                          >> 0x2eU)))));
    bufp->fullSData(oldp+47,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata 
                                                 >> 0x1eU)))),16);
    bufp->fullSData(oldp+48,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata 
                                                 >> 0xeU)))),16);
    bufp->fullCData(oldp+49,((0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata 
                                              >> 0xaU)))),4);
    bufp->fullSData(oldp+50,((0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata))),10);
    bufp->fullIData(oldp+51,(0x20U),32);
    bufp->fullIData(oldp+52,(0x10U),32);
    bufp->fullIData(oldp+53,(0x100000U),32);
    bufp->fullIData(oldp+54,(0x400U),32);
    bufp->fullIData(oldp+55,(4U),32);
    bufp->fullIData(oldp+56,(0xaU),32);
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_full_0_sub_0(Vdealloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vdealloc_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_full_0\n"); );
    // Init
    Vdealloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdealloc_tb___024root*>(voidSelf);
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdealloc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdealloc_tb___024root__trace_full_0_sub_0(Vdealloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root__trace_full_0_sub_0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.dealloc_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.dealloc_tb__DOT__dealloc_cs));
    bufp->fullIData(oldp+3,(vlSelfRef.dealloc_tb__DOT__dealloc_addr),32);
    bufp->fullCData(oldp+4,(vlSelfRef.dealloc_tb__DOT__dealloc_core_id),4);
    bufp->fullSData(oldp+5,(vlSelfRef.dealloc_tb__DOT__dummy_reservation_id),10);
    bufp->fullBit(oldp+6,((1U & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                         >> 0x2eU)))));
    bufp->fullSData(oldp+7,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                                >> 0x1eU)))),16);
    bufp->fullSData(oldp+8,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                                >> 0xeU)))),16);
    bufp->fullCData(oldp+9,((0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                             >> 0xaU)))),4);
    bufp->fullSData(oldp+10,((0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata))),10);
    bufp->fullBit(oldp+11,(vlSelfRef.dealloc_tb__DOT__dealloc_act_cs));
    bufp->fullBit(oldp+12,(vlSelfRef.dealloc_tb__DOT__dealloc_act_we));
    bufp->fullBit(oldp+13,((1U & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                          >> 0x2eU)))));
    bufp->fullSData(oldp+14,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                                 >> 0x1eU)))),16);
    bufp->fullSData(oldp+15,((0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                                 >> 0xeU)))),16);
    bufp->fullCData(oldp+16,((0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata 
                                              >> 0xaU)))),4);
    bufp->fullSData(oldp+17,((0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata))),10);
    bufp->fullSData(oldp+18,(vlSelfRef.dealloc_tb__DOT__dealloc_act_addr),10);
    bufp->fullBit(oldp+19,(vlSelfRef.dealloc_tb__DOT__dealloc_bsy));
    bufp->fullBit(oldp+20,(vlSelfRef.dealloc_tb__DOT__dealloc_rdy));
    bufp->fullBit(oldp+21,(vlSelfRef.dealloc_tb__DOT__dealloc_err));
    bufp->fullSData(oldp+22,(vlSelfRef.dealloc_tb__DOT__reservation_id_out),10);
    bufp->fullBit(oldp+23,(vlSelfRef.dealloc_tb__DOT__reservation_enqueue));
    bufp->fullBit(oldp+24,(vlSelfRef.dealloc_tb__DOT__act_bsy));
    bufp->fullBit(oldp+25,(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__current_state));
    bufp->fullSData(oldp+26,(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index),11);
    bufp->fullCData(oldp+27,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state),3);
    bufp->fullSData(oldp+28,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index),10);
    bufp->fullSData(oldp+29,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__reservation_id),10);
    bufp->fullCData(oldp+30,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg),4);
    bufp->fullBit(oldp+31,(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__from));
    bufp->fullSData(oldp+32,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__new_reservation_id),10);
    bufp->fullBit(oldp+33,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__rdy));
    bufp->fullSData(oldp+34,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right),10);
    bufp->fullSData(oldp+35,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i),11);
    bufp->fullBit(oldp+36,(vlSelfRef.dealloc_tb__DOT__clk));
    bufp->fullBit(oldp+37,((0x400U == (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))));
    bufp->fullBit(oldp+38,((0U == (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))));
    bufp->fullSData(oldp+39,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length),11);
    bufp->fullSData(oldp+40,(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left),10);
}
