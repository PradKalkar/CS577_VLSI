// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _load64_1_HH_
#define _load64_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct load64_1 : public sc_module {
    // Port declarations 11
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > x_address0;
    sc_out< sc_logic > x_ce0;
    sc_in< sc_lv<8> > x_q0;
    sc_in< sc_lv<64> > x_offset;
    sc_out< sc_lv<64> > ap_return;


    // Module declarations
    load64_1(sc_module_name name);
    SC_HAS_PROCESS(load64_1);

    ~load64_1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<14> > trunc_ln31_fu_65_p1;
    sc_signal< sc_lv<14> > trunc_ln31_reg_127;
    sc_signal< sc_lv<4> > i_fu_75_p2;
    sc_signal< sc_lv<4> > i_reg_135;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln30_fu_69_p2;
    sc_signal< sc_lv<64> > r_fu_121_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > i_0_reg_41;
    sc_signal< sc_lv<64> > r_0_reg_53;
    sc_signal< sc_lv<64> > zext_ln31_18_fu_90_p1;
    sc_signal< sc_lv<14> > zext_ln31_fu_81_p1;
    sc_signal< sc_lv<14> > add_ln31_fu_85_p2;
    sc_signal< sc_lv<3> > trunc_ln31_1_fu_99_p1;
    sc_signal< sc_lv<6> > shl_ln_fu_103_p3;
    sc_signal< sc_lv<64> > zext_ln31_1_fu_95_p1;
    sc_signal< sc_lv<64> > zext_ln31_2_fu_111_p1;
    sc_signal< sc_lv<64> > shl_ln31_fu_115_p2;
    sc_signal< sc_lv<64> > ap_return_preg;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln31_fu_85_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_i_fu_75_p2();
    void thread_icmp_ln30_fu_69_p2();
    void thread_r_fu_121_p2();
    void thread_shl_ln31_fu_115_p2();
    void thread_shl_ln_fu_103_p3();
    void thread_trunc_ln31_1_fu_99_p1();
    void thread_trunc_ln31_fu_65_p1();
    void thread_x_address0();
    void thread_x_ce0();
    void thread_zext_ln31_18_fu_90_p1();
    void thread_zext_ln31_1_fu_95_p1();
    void thread_zext_ln31_2_fu_111_p1();
    void thread_zext_ln31_fu_81_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
