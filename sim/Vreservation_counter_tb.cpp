// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreservation_counter_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vreservation_counter_tb::Vreservation_counter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreservation_counter_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vreservation_counter_tb::Vreservation_counter_tb(const char* _vcname__)
    : Vreservation_counter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreservation_counter_tb::~Vreservation_counter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreservation_counter_tb___024root___eval_debug_assertions(Vreservation_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vreservation_counter_tb___024root___eval_static(Vreservation_counter_tb___024root* vlSelf);
void Vreservation_counter_tb___024root___eval_initial(Vreservation_counter_tb___024root* vlSelf);
void Vreservation_counter_tb___024root___eval_settle(Vreservation_counter_tb___024root* vlSelf);
void Vreservation_counter_tb___024root___eval(Vreservation_counter_tb___024root* vlSelf);

void Vreservation_counter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreservation_counter_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreservation_counter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreservation_counter_tb___024root___eval_static(&(vlSymsp->TOP));
        Vreservation_counter_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vreservation_counter_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreservation_counter_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreservation_counter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vreservation_counter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vreservation_counter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreservation_counter_tb___024root___eval_final(Vreservation_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vreservation_counter_tb::final() {
    Vreservation_counter_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreservation_counter_tb::hierName() const { return vlSymsp->name(); }
const char* Vreservation_counter_tb::modelName() const { return "Vreservation_counter_tb"; }
unsigned Vreservation_counter_tb::threads() const { return 1; }
void Vreservation_counter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vreservation_counter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vreservation_counter_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreservation_counter_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vreservation_counter_tb___024root__trace_init_top(Vreservation_counter_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreservation_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreservation_counter_tb___024root*>(voidSelf);
    Vreservation_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vreservation_counter_tb___024root__trace_decl_types(tracep);
    Vreservation_counter_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vreservation_counter_tb___024root__trace_register(Vreservation_counter_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vreservation_counter_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vreservation_counter_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreservation_counter_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
