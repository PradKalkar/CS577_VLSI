// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _shake256_absorb_2_HH_
#define _shake256_absorb_2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "shake256_absorb_4_t.h"

namespace ap_rtl {

struct shake256_absorb_2 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > state_s_address0;
    sc_out< sc_logic > state_s_ce0;
    sc_out< sc_logic > state_s_we0;
    sc_out< sc_lv<64> > state_s_d0;
    sc_in< sc_lv<64> > state_s_q0;
    sc_in< sc_lv<8> > in_0_read;
    sc_in< sc_lv<8> > in_1_read;


    // Module declarations
    shake256_absorb_2(sc_module_name name);
    SC_HAS_PROCESS(shake256_absorb_2);

    ~shake256_absorb_2();

    sc_trace_file* mVcdFile;

    shake256_absorb_4_t* t_U;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > add_ln388_fu_167_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > i_fu_190_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<2> > i_15_fu_212_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > i_16_fu_235_p2;
    sc_signal< sc_lv<4> > i_16_reg_322;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > icmp_ln30_fu_229_p2;
    sc_signal< sc_lv<5> > state_s_addr_reg_332;
    sc_signal< sc_lv<64> > r_fu_272_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<3> > t_address0;
    sc_signal< sc_logic > t_ce0;
    sc_signal< sc_logic > t_we0;
    sc_signal< sc_lv<8> > t_d0;
    sc_signal< sc_lv<8> > t_q0;
    sc_signal< sc_lv<3> > phi_ln388_reg_110;
    sc_signal< sc_lv<1> > icmp_ln388_fu_178_p2;
    sc_signal< sc_lv<4> > i_4_i_reg_121;
    sc_signal< sc_lv<1> > icmp_ln424_fu_184_p2;
    sc_signal< sc_lv<2> > i_5_i_reg_132;
    sc_signal< sc_lv<1> > icmp_ln426_fu_206_p2;
    sc_signal< sc_lv<4> > i_0_i2_reg_143;
    sc_signal< sc_lv<64> > r_0_i3_reg_155;
    sc_signal< sc_lv<64> > zext_ln388_fu_173_p1;
    sc_signal< sc_lv<64> > zext_ln425_fu_196_p1;
    sc_signal< sc_lv<64> > zext_ln426_fu_201_p1;
    sc_signal< sc_lv<64> > zext_ln31_fu_241_p1;
    sc_signal< sc_lv<8> > select_ln427_fu_222_p3;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > trunc_ln427_fu_218_p1;
    sc_signal< sc_lv<3> > trunc_ln31_fu_250_p1;
    sc_signal< sc_lv<6> > shl_ln_fu_254_p3;
    sc_signal< sc_lv<64> > zext_ln31_6_fu_246_p1;
    sc_signal< sc_lv<64> > zext_ln31_7_fu_262_p1;
    sc_signal< sc_lv<64> > shl_ln31_fu_266_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln388_fu_167_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_15_fu_212_p2();
    void thread_i_16_fu_235_p2();
    void thread_i_fu_190_p2();
    void thread_icmp_ln30_fu_229_p2();
    void thread_icmp_ln388_fu_178_p2();
    void thread_icmp_ln424_fu_184_p2();
    void thread_icmp_ln426_fu_206_p2();
    void thread_r_fu_272_p2();
    void thread_select_ln427_fu_222_p3();
    void thread_shl_ln31_fu_266_p2();
    void thread_shl_ln_fu_254_p3();
    void thread_state_s_addr_reg_332();
    void thread_state_s_address0();
    void thread_state_s_ce0();
    void thread_state_s_d0();
    void thread_state_s_we0();
    void thread_t_address0();
    void thread_t_ce0();
    void thread_t_d0();
    void thread_t_we0();
    void thread_trunc_ln31_fu_250_p1();
    void thread_trunc_ln427_fu_218_p1();
    void thread_zext_ln31_6_fu_246_p1();
    void thread_zext_ln31_7_fu_262_p1();
    void thread_zext_ln31_fu_241_p1();
    void thread_zext_ln388_fu_173_p1();
    void thread_zext_ln425_fu_196_p1();
    void thread_zext_ln426_fu_201_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
