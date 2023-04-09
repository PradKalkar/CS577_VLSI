// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ntt_HH_
#define _ntt_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ntt_1_zetas.h"

namespace ap_rtl {

struct ntt : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_out< sc_logic > a_we0;
    sc_out< sc_lv<32> > a_d0;
    sc_in< sc_lv<32> > a_q0;
    sc_out< sc_lv<8> > a_address1;
    sc_out< sc_logic > a_ce1;
    sc_in< sc_lv<32> > a_q1;


    // Module declarations
    ntt(sc_module_name name);
    SC_HAS_PROCESS(ntt);

    ~ntt();

    sc_trace_file* mVcdFile;

    ntt_1_zetas* zetas_U;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > zetas_address0;
    sc_signal< sc_logic > zetas_ce0;
    sc_signal< sc_lv<23> > zetas_q0;
    sc_signal< sc_lv<32> > zext_ln54_fu_122_p1;
    sc_signal< sc_lv<32> > zext_ln54_reg_334;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<31> > zext_ln54_2_fu_126_p1;
    sc_signal< sc_lv<31> > zext_ln54_2_reg_339;
    sc_signal< sc_lv<32> > zext_ln55_fu_136_p1;
    sc_signal< sc_lv<32> > zext_ln55_reg_348;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > k_fu_159_p2;
    sc_signal< sc_lv<32> > k_reg_356;
    sc_signal< sc_lv<1> > icmp_ln55_fu_150_p2;
    sc_signal< sc_lv<29> > zext_ln54_3_fu_180_p1;
    sc_signal< sc_lv<32> > zext_ln57_fu_189_p1;
    sc_signal< sc_lv<32> > zext_ln57_reg_371;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<31> > zext_ln55_2_fu_215_p1;
    sc_signal< sc_lv<31> > zext_ln55_2_reg_376;
    sc_signal< sc_lv<54> > sext_ln57_fu_219_p1;
    sc_signal< sc_lv<54> > sext_ln57_reg_381;
    sc_signal< sc_lv<8> > a_addr_reg_389;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > icmp_ln57_fu_223_p2;
    sc_signal< sc_lv<8> > a_addr_15_reg_394;
    sc_signal< sc_lv<32> > j_2_fu_243_p2;
    sc_signal< sc_lv<32> > j_2_reg_400;
    sc_signal< sc_lv<31> > add_ln55_fu_249_p2;
    sc_signal< sc_lv<32> > t_8_fu_310_p1;
    sc_signal< sc_lv<32> > t_8_reg_410;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<29> > len_0_reg_84;
    sc_signal< sc_lv<31> > j_reg_96;
    sc_signal< sc_lv<1> > icmp_ln54_fu_130_p2;
    sc_signal< sc_lv<32> > j_0_reg_108;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > zext_ln56_fu_165_p1;
    sc_signal< sc_lv<64> > zext_ln58_fu_233_p1;
    sc_signal< sc_lv<64> > zext_ln59_fu_238_p1;
    sc_signal< sc_lv<32> > k_3_fu_42;
    sc_signal< sc_lv<32> > sub_ln59_fu_314_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > add_ln60_fu_321_p2;
    sc_signal< sc_lv<23> > tmp_fu_140_p4;
    sc_signal< sc_lv<28> > tmp_9_fu_170_p4;
    sc_signal< sc_lv<31> > add_ln57_fu_184_p2;
    sc_signal< sc_lv<1> > empty_53_fu_193_p2;
    sc_signal< sc_lv<30> > trunc_ln55_fu_199_p1;
    sc_signal< sc_lv<30> > trunc_ln55_2_fu_203_p1;
    sc_signal< sc_lv<30> > start_fu_207_p3;
    sc_signal< sc_lv<32> > add_ln58_fu_228_p2;
    sc_signal< sc_lv<32> > sext_ln58_fu_257_p0;
    sc_signal< sc_lv<23> > mul_ln58_fu_261_p0;
    sc_signal< sc_lv<32> > mul_ln58_fu_261_p1;
    sc_signal< sc_lv<54> > mul_ln58_fu_261_p2;
    sc_signal< sc_lv<32> > trunc_ln18_2_fu_270_p1;
    sc_signal< sc_lv<32> > t_fu_274_p2;
    sc_signal< sc_lv<32> > mul_ln19_fu_284_p1;
    sc_signal< sc_lv<55> > mul_ln19_fu_284_p2;
    sc_signal< sc_lv<56> > sext_ln58_2_fu_266_p1;
    sc_signal< sc_lv<56> > sext_ln19_7_fu_290_p1;
    sc_signal< sc_lv<56> > add_ln19_fu_294_p2;
    sc_signal< sc_lv<24> > trunc_ln_fu_300_p4;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<29> ap_const_lv29_80;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<29> ap_const_lv29_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_3802001;
    static const sc_lv<55> ap_const_lv55_7FFFFFFF801FFF;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_37;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_address1();
    void thread_a_ce0();
    void thread_a_ce1();
    void thread_a_d0();
    void thread_a_we0();
    void thread_add_ln19_fu_294_p2();
    void thread_add_ln55_fu_249_p2();
    void thread_add_ln57_fu_184_p2();
    void thread_add_ln58_fu_228_p2();
    void thread_add_ln60_fu_321_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_empty_53_fu_193_p2();
    void thread_icmp_ln54_fu_130_p2();
    void thread_icmp_ln55_fu_150_p2();
    void thread_icmp_ln57_fu_223_p2();
    void thread_j_2_fu_243_p2();
    void thread_k_fu_159_p2();
    void thread_mul_ln19_fu_284_p1();
    void thread_mul_ln19_fu_284_p2();
    void thread_mul_ln58_fu_261_p0();
    void thread_mul_ln58_fu_261_p1();
    void thread_mul_ln58_fu_261_p2();
    void thread_sext_ln19_7_fu_290_p1();
    void thread_sext_ln57_fu_219_p1();
    void thread_sext_ln58_2_fu_266_p1();
    void thread_sext_ln58_fu_257_p0();
    void thread_start_fu_207_p3();
    void thread_sub_ln59_fu_314_p2();
    void thread_t_8_fu_310_p1();
    void thread_t_fu_274_p2();
    void thread_tmp_9_fu_170_p4();
    void thread_tmp_fu_140_p4();
    void thread_trunc_ln18_2_fu_270_p1();
    void thread_trunc_ln55_2_fu_203_p1();
    void thread_trunc_ln55_fu_199_p1();
    void thread_trunc_ln_fu_300_p4();
    void thread_zetas_address0();
    void thread_zetas_ce0();
    void thread_zext_ln54_2_fu_126_p1();
    void thread_zext_ln54_3_fu_180_p1();
    void thread_zext_ln54_fu_122_p1();
    void thread_zext_ln55_2_fu_215_p1();
    void thread_zext_ln55_fu_136_p1();
    void thread_zext_ln56_fu_165_p1();
    void thread_zext_ln57_fu_189_p1();
    void thread_zext_ln58_fu_233_p1();
    void thread_zext_ln59_fu_238_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
