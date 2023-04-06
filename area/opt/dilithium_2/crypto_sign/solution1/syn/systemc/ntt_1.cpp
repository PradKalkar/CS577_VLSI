// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "ntt_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic ntt_1::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic ntt_1::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> ntt_1::ap_ST_fsm_state1 = "1";
const sc_lv<8> ntt_1::ap_ST_fsm_state2 = "10";
const sc_lv<8> ntt_1::ap_ST_fsm_state3 = "100";
const sc_lv<8> ntt_1::ap_ST_fsm_state4 = "1000";
const sc_lv<8> ntt_1::ap_ST_fsm_state5 = "10000";
const sc_lv<8> ntt_1::ap_ST_fsm_state6 = "100000";
const sc_lv<8> ntt_1::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> ntt_1::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> ntt_1::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> ntt_1::ap_const_lv32_1 = "1";
const sc_lv<32> ntt_1::ap_const_lv32_2 = "10";
const sc_lv<1> ntt_1::ap_const_lv1_1 = "1";
const sc_lv<1> ntt_1::ap_const_lv1_0 = "0";
const sc_lv<32> ntt_1::ap_const_lv32_3 = "11";
const sc_lv<32> ntt_1::ap_const_lv32_4 = "100";
const sc_lv<32> ntt_1::ap_const_lv32_5 = "101";
const sc_lv<29> ntt_1::ap_const_lv29_80 = "10000000";
const sc_lv<31> ntt_1::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<32> ntt_1::ap_const_lv32_7 = "111";
const sc_lv<32> ntt_1::ap_const_lv32_6 = "110";
const sc_lv<29> ntt_1::ap_const_lv29_0 = "00000000000000000000000000000";
const sc_lv<32> ntt_1::ap_const_lv32_8 = "1000";
const sc_lv<32> ntt_1::ap_const_lv32_1E = "11110";
const sc_lv<23> ntt_1::ap_const_lv23_0 = "00000000000000000000000";
const sc_lv<32> ntt_1::ap_const_lv32_1C = "11100";
const sc_lv<32> ntt_1::ap_const_lv32_3802001 = "11100000000010000000000001";
const sc_lv<55> ntt_1::ap_const_lv55_7FFFFFFF801FFF = "1111111111111111111111111111111100000000001111111111111";
const sc_lv<32> ntt_1::ap_const_lv32_20 = "100000";
const sc_lv<32> ntt_1::ap_const_lv32_37 = "110111";
const bool ntt_1::ap_const_boolean_1 = true;

ntt_1::ntt_1(sc_module_name name) : sc_module(name), mVcdFile(0) {
    zetas_U = new ntt_zetas("zetas_U");
    zetas_U->clk(ap_clk);
    zetas_U->reset(ap_rst);
    zetas_U->address0(zetas_address0);
    zetas_U->ce0(zetas_ce0);
    zetas_U->q0(zetas_q0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( a_addr_reg_389 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( a_addr_14_reg_394 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( zext_ln58_fu_233_p1 );

    SC_METHOD(thread_a_address1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( a_addr_14_reg_394 );
    sensitive << ( zext_ln59_fu_238_p1 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_a_ce1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_a_d0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( sub_ln59_fu_314_p2 );
    sensitive << ( add_ln60_fu_321_p2 );

    SC_METHOD(thread_a_we0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_add_ln19_fu_294_p2);
    sensitive << ( sext_ln58_1_fu_266_p1 );
    sensitive << ( sext_ln19_5_fu_290_p1 );

    SC_METHOD(thread_add_ln55_fu_249_p2);
    sensitive << ( zext_ln54_1_reg_339 );
    sensitive << ( zext_ln55_1_reg_376 );

    SC_METHOD(thread_add_ln57_fu_184_p2);
    sensitive << ( zext_ln54_1_reg_339 );
    sensitive << ( j_reg_96 );

    SC_METHOD(thread_add_ln58_fu_228_p2);
    sensitive << ( zext_ln54_reg_334 );
    sensitive << ( j_0_reg_108 );

    SC_METHOD(thread_add_ln60_fu_321_p2);
    sensitive << ( a_q1 );
    sensitive << ( t_7_reg_410 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln54_fu_130_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln54_fu_130_p2 );

    SC_METHOD(thread_empty_63_fu_193_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( j_reg_96 );
    sensitive << ( add_ln57_fu_184_p2 );

    SC_METHOD(thread_icmp_ln54_fu_130_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( len_0_reg_84 );

    SC_METHOD(thread_icmp_ln55_fu_150_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_140_p4 );

    SC_METHOD(thread_icmp_ln57_fu_223_p2);
    sensitive << ( zext_ln57_reg_371 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j_0_reg_108 );

    SC_METHOD(thread_j_1_fu_243_p2);
    sensitive << ( j_0_reg_108 );

    SC_METHOD(thread_k_fu_159_p2);
    sensitive << ( k_2_fu_42 );

    SC_METHOD(thread_mul_ln19_fu_284_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( t_fu_274_p2 );

    SC_METHOD(thread_mul_ln19_fu_284_p2);
    sensitive << ( mul_ln19_fu_284_p1 );

    SC_METHOD(thread_mul_ln58_fu_261_p0);
    sensitive << ( sext_ln57_reg_381 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_mul_ln58_fu_261_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sext_ln58_fu_257_p0 );

    SC_METHOD(thread_mul_ln58_fu_261_p2);
    sensitive << ( mul_ln58_fu_261_p0 );
    sensitive << ( mul_ln58_fu_261_p1 );

    SC_METHOD(thread_sext_ln19_5_fu_290_p1);
    sensitive << ( mul_ln19_fu_284_p2 );

    SC_METHOD(thread_sext_ln57_fu_219_p1);
    sensitive << ( zetas_q0 );

    SC_METHOD(thread_sext_ln58_1_fu_266_p1);
    sensitive << ( mul_ln58_fu_261_p2 );

    SC_METHOD(thread_sext_ln58_fu_257_p0);
    sensitive << ( a_q0 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_start_fu_207_p3);
    sensitive << ( empty_63_fu_193_p2 );
    sensitive << ( trunc_ln55_fu_199_p1 );
    sensitive << ( trunc_ln55_1_fu_203_p1 );

    SC_METHOD(thread_sub_ln59_fu_314_p2);
    sensitive << ( a_q1 );
    sensitive << ( t_7_fu_310_p1 );

    SC_METHOD(thread_t_7_fu_310_p1);
    sensitive << ( trunc_ln_fu_300_p4 );

    SC_METHOD(thread_t_fu_274_p2);
    sensitive << ( trunc_ln18_fu_270_p1 );

    SC_METHOD(thread_tmp_27_fu_170_p4);
    sensitive << ( len_0_reg_84 );

    SC_METHOD(thread_tmp_fu_140_p4);
    sensitive << ( j_reg_96 );

    SC_METHOD(thread_trunc_ln18_fu_270_p1);
    sensitive << ( mul_ln58_fu_261_p2 );

    SC_METHOD(thread_trunc_ln55_1_fu_203_p1);
    sensitive << ( add_ln57_fu_184_p2 );

    SC_METHOD(thread_trunc_ln55_fu_199_p1);
    sensitive << ( j_reg_96 );

    SC_METHOD(thread_trunc_ln_fu_300_p4);
    sensitive << ( add_ln19_fu_294_p2 );

    SC_METHOD(thread_zetas_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln56_fu_165_p1 );

    SC_METHOD(thread_zetas_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_zext_ln54_1_fu_126_p1);
    sensitive << ( len_0_reg_84 );

    SC_METHOD(thread_zext_ln54_2_fu_180_p1);
    sensitive << ( tmp_27_fu_170_p4 );

    SC_METHOD(thread_zext_ln54_fu_122_p1);
    sensitive << ( len_0_reg_84 );

    SC_METHOD(thread_zext_ln55_1_fu_215_p1);
    sensitive << ( start_fu_207_p3 );

    SC_METHOD(thread_zext_ln55_fu_136_p1);
    sensitive << ( j_reg_96 );

    SC_METHOD(thread_zext_ln56_fu_165_p1);
    sensitive << ( k_fu_159_p2 );

    SC_METHOD(thread_zext_ln57_fu_189_p1);
    sensitive << ( add_ln57_fu_184_p2 );

    SC_METHOD(thread_zext_ln58_fu_233_p1);
    sensitive << ( add_ln58_fu_228_p2 );

    SC_METHOD(thread_zext_ln59_fu_238_p1);
    sensitive << ( j_0_reg_108 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln55_fu_150_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln57_fu_223_p2 );
    sensitive << ( icmp_ln54_fu_130_p2 );

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "ntt_1_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_we0, "(port)a_we0");
    sc_trace(mVcdFile, a_d0, "(port)a_d0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, a_address1, "(port)a_address1");
    sc_trace(mVcdFile, a_ce1, "(port)a_ce1");
    sc_trace(mVcdFile, a_q1, "(port)a_q1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, zetas_address0, "zetas_address0");
    sc_trace(mVcdFile, zetas_ce0, "zetas_ce0");
    sc_trace(mVcdFile, zetas_q0, "zetas_q0");
    sc_trace(mVcdFile, zext_ln54_fu_122_p1, "zext_ln54_fu_122_p1");
    sc_trace(mVcdFile, zext_ln54_reg_334, "zext_ln54_reg_334");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln54_1_fu_126_p1, "zext_ln54_1_fu_126_p1");
    sc_trace(mVcdFile, zext_ln54_1_reg_339, "zext_ln54_1_reg_339");
    sc_trace(mVcdFile, zext_ln55_fu_136_p1, "zext_ln55_fu_136_p1");
    sc_trace(mVcdFile, zext_ln55_reg_348, "zext_ln55_reg_348");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, k_fu_159_p2, "k_fu_159_p2");
    sc_trace(mVcdFile, k_reg_356, "k_reg_356");
    sc_trace(mVcdFile, icmp_ln55_fu_150_p2, "icmp_ln55_fu_150_p2");
    sc_trace(mVcdFile, zext_ln54_2_fu_180_p1, "zext_ln54_2_fu_180_p1");
    sc_trace(mVcdFile, zext_ln57_fu_189_p1, "zext_ln57_fu_189_p1");
    sc_trace(mVcdFile, zext_ln57_reg_371, "zext_ln57_reg_371");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln55_1_fu_215_p1, "zext_ln55_1_fu_215_p1");
    sc_trace(mVcdFile, zext_ln55_1_reg_376, "zext_ln55_1_reg_376");
    sc_trace(mVcdFile, sext_ln57_fu_219_p1, "sext_ln57_fu_219_p1");
    sc_trace(mVcdFile, sext_ln57_reg_381, "sext_ln57_reg_381");
    sc_trace(mVcdFile, a_addr_reg_389, "a_addr_reg_389");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, icmp_ln57_fu_223_p2, "icmp_ln57_fu_223_p2");
    sc_trace(mVcdFile, a_addr_14_reg_394, "a_addr_14_reg_394");
    sc_trace(mVcdFile, j_1_fu_243_p2, "j_1_fu_243_p2");
    sc_trace(mVcdFile, j_1_reg_400, "j_1_reg_400");
    sc_trace(mVcdFile, add_ln55_fu_249_p2, "add_ln55_fu_249_p2");
    sc_trace(mVcdFile, t_7_fu_310_p1, "t_7_fu_310_p1");
    sc_trace(mVcdFile, t_7_reg_410, "t_7_reg_410");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, len_0_reg_84, "len_0_reg_84");
    sc_trace(mVcdFile, j_reg_96, "j_reg_96");
    sc_trace(mVcdFile, icmp_ln54_fu_130_p2, "icmp_ln54_fu_130_p2");
    sc_trace(mVcdFile, j_0_reg_108, "j_0_reg_108");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, zext_ln56_fu_165_p1, "zext_ln56_fu_165_p1");
    sc_trace(mVcdFile, zext_ln58_fu_233_p1, "zext_ln58_fu_233_p1");
    sc_trace(mVcdFile, zext_ln59_fu_238_p1, "zext_ln59_fu_238_p1");
    sc_trace(mVcdFile, k_2_fu_42, "k_2_fu_42");
    sc_trace(mVcdFile, sub_ln59_fu_314_p2, "sub_ln59_fu_314_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, add_ln60_fu_321_p2, "add_ln60_fu_321_p2");
    sc_trace(mVcdFile, tmp_fu_140_p4, "tmp_fu_140_p4");
    sc_trace(mVcdFile, tmp_27_fu_170_p4, "tmp_27_fu_170_p4");
    sc_trace(mVcdFile, add_ln57_fu_184_p2, "add_ln57_fu_184_p2");
    sc_trace(mVcdFile, empty_63_fu_193_p2, "empty_63_fu_193_p2");
    sc_trace(mVcdFile, trunc_ln55_fu_199_p1, "trunc_ln55_fu_199_p1");
    sc_trace(mVcdFile, trunc_ln55_1_fu_203_p1, "trunc_ln55_1_fu_203_p1");
    sc_trace(mVcdFile, start_fu_207_p3, "start_fu_207_p3");
    sc_trace(mVcdFile, add_ln58_fu_228_p2, "add_ln58_fu_228_p2");
    sc_trace(mVcdFile, sext_ln58_fu_257_p0, "sext_ln58_fu_257_p0");
    sc_trace(mVcdFile, mul_ln58_fu_261_p0, "mul_ln58_fu_261_p0");
    sc_trace(mVcdFile, mul_ln58_fu_261_p1, "mul_ln58_fu_261_p1");
    sc_trace(mVcdFile, mul_ln58_fu_261_p2, "mul_ln58_fu_261_p2");
    sc_trace(mVcdFile, trunc_ln18_fu_270_p1, "trunc_ln18_fu_270_p1");
    sc_trace(mVcdFile, t_fu_274_p2, "t_fu_274_p2");
    sc_trace(mVcdFile, mul_ln19_fu_284_p1, "mul_ln19_fu_284_p1");
    sc_trace(mVcdFile, mul_ln19_fu_284_p2, "mul_ln19_fu_284_p2");
    sc_trace(mVcdFile, sext_ln58_1_fu_266_p1, "sext_ln58_1_fu_266_p1");
    sc_trace(mVcdFile, sext_ln19_5_fu_290_p1, "sext_ln19_5_fu_290_p1");
    sc_trace(mVcdFile, add_ln19_fu_294_p2, "add_ln19_fu_294_p2");
    sc_trace(mVcdFile, trunc_ln_fu_300_p4, "trunc_ln_fu_300_p4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

ntt_1::~ntt_1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete zetas_U;
}

void ntt_1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        j_0_reg_108 = j_1_reg_400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_0_reg_108 = zext_ln55_reg_348.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_130_p2.read()))) {
        j_reg_96 = ap_const_lv31_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_fu_223_p2.read()))) {
        j_reg_96 = add_ln55_fu_249_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_fu_223_p2.read()))) {
        k_2_fu_42 = k_reg_356.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        k_2_fu_42 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln55_fu_150_p2.read(), ap_const_lv1_0))) {
        len_0_reg_84 = zext_ln54_2_fu_180_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        len_0_reg_84 = ap_const_lv29_80;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_fu_223_p2.read()))) {
        a_addr_14_reg_394 =  (sc_lv<8>) (zext_ln59_fu_238_p1.read());
        a_addr_reg_389 =  (sc_lv<8>) (zext_ln58_fu_233_p1.read());
        j_1_reg_400 = j_1_fu_243_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln55_fu_150_p2.read(), ap_const_lv1_1))) {
        k_reg_356 = k_fu_159_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        sext_ln57_reg_381 = sext_ln57_fu_219_p1.read();
        zext_ln55_1_reg_376 = zext_ln55_1_fu_215_p1.read();
        zext_ln57_reg_371 = zext_ln57_fu_189_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        t_7_reg_410 = t_7_fu_310_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        zext_ln54_1_reg_339 = zext_ln54_1_fu_126_p1.read();
        zext_ln54_reg_334 = zext_ln54_fu_122_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        zext_ln55_reg_348 = zext_ln55_fu_136_p1.read();
    }
}

void ntt_1::thread_a_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        a_address0 = a_addr_14_reg_394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_address0 = a_addr_reg_389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_address0 =  (sc_lv<8>) (zext_ln58_fu_233_p1.read());
    } else {
        a_address0 = "XXXXXXXX";
    }
}

void ntt_1::thread_a_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        a_address1 = a_addr_14_reg_394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_address1 =  (sc_lv<8>) (zext_ln59_fu_238_p1.read());
    } else {
        a_address1 = "XXXXXXXX";
    }
}

void ntt_1::thread_a_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void ntt_1::thread_a_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        a_ce1 = ap_const_logic_1;
    } else {
        a_ce1 = ap_const_logic_0;
    }
}

void ntt_1::thread_a_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        a_d0 = add_ln60_fu_321_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_d0 = sub_ln59_fu_314_p2.read();
    } else {
        a_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt_1::thread_a_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        a_we0 = ap_const_logic_1;
    } else {
        a_we0 = ap_const_logic_0;
    }
}

void ntt_1::thread_add_ln19_fu_294_p2() {
    add_ln19_fu_294_p2 = (!sext_ln58_1_fu_266_p1.read().is_01() || !sext_ln19_5_fu_290_p1.read().is_01())? sc_lv<56>(): (sc_bigint<56>(sext_ln58_1_fu_266_p1.read()) + sc_bigint<56>(sext_ln19_5_fu_290_p1.read()));
}

void ntt_1::thread_add_ln55_fu_249_p2() {
    add_ln55_fu_249_p2 = (!zext_ln54_1_reg_339.read().is_01() || !zext_ln55_1_reg_376.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln54_1_reg_339.read()) + sc_biguint<31>(zext_ln55_1_reg_376.read()));
}

void ntt_1::thread_add_ln57_fu_184_p2() {
    add_ln57_fu_184_p2 = (!zext_ln54_1_reg_339.read().is_01() || !j_reg_96.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln54_1_reg_339.read()) + sc_biguint<31>(j_reg_96.read()));
}

void ntt_1::thread_add_ln58_fu_228_p2() {
    add_ln58_fu_228_p2 = (!zext_ln54_reg_334.read().is_01() || !j_0_reg_108.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln54_reg_334.read()) + sc_biguint<32>(j_0_reg_108.read()));
}

void ntt_1::thread_add_ln60_fu_321_p2() {
    add_ln60_fu_321_p2 = (!t_7_reg_410.read().is_01() || !a_q1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(t_7_reg_410.read()) + sc_biguint<32>(a_q1.read()));
}

void ntt_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ntt_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ntt_1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void ntt_1::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void ntt_1::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void ntt_1::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void ntt_1::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void ntt_1::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void ntt_1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_fu_130_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ntt_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ntt_1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_fu_130_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ntt_1::thread_empty_63_fu_193_p2() {
    empty_63_fu_193_p2 = (!j_reg_96.read().is_01() || !add_ln57_fu_184_p2.read().is_01())? sc_lv<1>(): (sc_biguint<31>(j_reg_96.read()) > sc_biguint<31>(add_ln57_fu_184_p2.read()));
}

void ntt_1::thread_icmp_ln54_fu_130_p2() {
    icmp_ln54_fu_130_p2 = (!len_0_reg_84.read().is_01() || !ap_const_lv29_0.is_01())? sc_lv<1>(): sc_lv<1>(len_0_reg_84.read() == ap_const_lv29_0);
}

void ntt_1::thread_icmp_ln55_fu_150_p2() {
    icmp_ln55_fu_150_p2 = (!tmp_fu_140_p4.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_140_p4.read() == ap_const_lv23_0);
}

void ntt_1::thread_icmp_ln57_fu_223_p2() {
    icmp_ln57_fu_223_p2 = (!j_0_reg_108.read().is_01() || !zext_ln57_reg_371.read().is_01())? sc_lv<1>(): (sc_biguint<32>(j_0_reg_108.read()) < sc_biguint<32>(zext_ln57_reg_371.read()));
}

void ntt_1::thread_j_1_fu_243_p2() {
    j_1_fu_243_p2 = (!ap_const_lv32_1.is_01() || !j_0_reg_108.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j_0_reg_108.read()));
}

void ntt_1::thread_k_fu_159_p2() {
    k_fu_159_p2 = (!ap_const_lv32_1.is_01() || !k_2_fu_42.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(k_2_fu_42.read()));
}

void ntt_1::thread_mul_ln19_fu_284_p1() {
    mul_ln19_fu_284_p1 = t_fu_274_p2.read();
}

void ntt_1::thread_mul_ln19_fu_284_p2() {
    mul_ln19_fu_284_p2 = (!ap_const_lv55_7FFFFFFF801FFF.is_01() || !mul_ln19_fu_284_p1.read().is_01())? sc_lv<55>(): sc_bigint<55>(ap_const_lv55_7FFFFFFF801FFF) * sc_bigint<32>(mul_ln19_fu_284_p1.read());
}

void ntt_1::thread_mul_ln58_fu_261_p0() {
    mul_ln58_fu_261_p0 =  (sc_lv<23>) (sext_ln57_reg_381.read());
}

void ntt_1::thread_mul_ln58_fu_261_p1() {
    mul_ln58_fu_261_p1 = sext_ln58_fu_257_p0.read();
}

void ntt_1::thread_mul_ln58_fu_261_p2() {
    mul_ln58_fu_261_p2 = (!mul_ln58_fu_261_p0.read().is_01() || !mul_ln58_fu_261_p1.read().is_01())? sc_lv<54>(): sc_bigint<23>(mul_ln58_fu_261_p0.read()) * sc_bigint<32>(mul_ln58_fu_261_p1.read());
}

void ntt_1::thread_sext_ln19_5_fu_290_p1() {
    sext_ln19_5_fu_290_p1 = esl_sext<56,55>(mul_ln19_fu_284_p2.read());
}

void ntt_1::thread_sext_ln57_fu_219_p1() {
    sext_ln57_fu_219_p1 = esl_sext<54,23>(zetas_q0.read());
}

void ntt_1::thread_sext_ln58_1_fu_266_p1() {
    sext_ln58_1_fu_266_p1 = esl_sext<56,54>(mul_ln58_fu_261_p2.read());
}

void ntt_1::thread_sext_ln58_fu_257_p0() {
    sext_ln58_fu_257_p0 = a_q0.read();
}

void ntt_1::thread_start_fu_207_p3() {
    start_fu_207_p3 = (!empty_63_fu_193_p2.read()[0].is_01())? sc_lv<30>(): ((empty_63_fu_193_p2.read()[0].to_bool())? trunc_ln55_fu_199_p1.read(): trunc_ln55_1_fu_203_p1.read());
}

void ntt_1::thread_sub_ln59_fu_314_p2() {
    sub_ln59_fu_314_p2 = (!a_q1.read().is_01() || !t_7_fu_310_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(a_q1.read()) - sc_bigint<32>(t_7_fu_310_p1.read()));
}

void ntt_1::thread_t_7_fu_310_p1() {
    t_7_fu_310_p1 = esl_sext<32,24>(trunc_ln_fu_300_p4.read());
}

void ntt_1::thread_t_fu_274_p2() {
    t_fu_274_p2 = (!ap_const_lv32_3802001.is_01() || !trunc_ln18_fu_270_p1.read().is_01())? sc_lv<32>(): sc_biguint<32>(ap_const_lv32_3802001) * sc_bigint<32>(trunc_ln18_fu_270_p1.read());
}

void ntt_1::thread_tmp_27_fu_170_p4() {
    tmp_27_fu_170_p4 = len_0_reg_84.read().range(28, 1);
}

void ntt_1::thread_tmp_fu_140_p4() {
    tmp_fu_140_p4 = j_reg_96.read().range(30, 8);
}

void ntt_1::thread_trunc_ln18_fu_270_p1() {
    trunc_ln18_fu_270_p1 = mul_ln58_fu_261_p2.read().range(32-1, 0);
}

void ntt_1::thread_trunc_ln55_1_fu_203_p1() {
    trunc_ln55_1_fu_203_p1 = add_ln57_fu_184_p2.read().range(30-1, 0);
}

void ntt_1::thread_trunc_ln55_fu_199_p1() {
    trunc_ln55_fu_199_p1 = j_reg_96.read().range(30-1, 0);
}

void ntt_1::thread_trunc_ln_fu_300_p4() {
    trunc_ln_fu_300_p4 = add_ln19_fu_294_p2.read().range(55, 32);
}

void ntt_1::thread_zetas_address0() {
    zetas_address0 =  (sc_lv<8>) (zext_ln56_fu_165_p1.read());
}

void ntt_1::thread_zetas_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void ntt_1::thread_zext_ln54_1_fu_126_p1() {
    zext_ln54_1_fu_126_p1 = esl_zext<31,29>(len_0_reg_84.read());
}

void ntt_1::thread_zext_ln54_2_fu_180_p1() {
    zext_ln54_2_fu_180_p1 = esl_zext<29,28>(tmp_27_fu_170_p4.read());
}

void ntt_1::thread_zext_ln54_fu_122_p1() {
    zext_ln54_fu_122_p1 = esl_zext<32,29>(len_0_reg_84.read());
}

void ntt_1::thread_zext_ln55_1_fu_215_p1() {
    zext_ln55_1_fu_215_p1 = esl_zext<31,30>(start_fu_207_p3.read());
}

void ntt_1::thread_zext_ln55_fu_136_p1() {
    zext_ln55_fu_136_p1 = esl_zext<32,31>(j_reg_96.read());
}

void ntt_1::thread_zext_ln56_fu_165_p1() {
    zext_ln56_fu_165_p1 = esl_zext<64,32>(k_fu_159_p2.read());
}

void ntt_1::thread_zext_ln57_fu_189_p1() {
    zext_ln57_fu_189_p1 = esl_zext<32,31>(add_ln57_fu_184_p2.read());
}

void ntt_1::thread_zext_ln58_fu_233_p1() {
    zext_ln58_fu_233_p1 = esl_zext<64,32>(add_ln58_fu_228_p2.read());
}

void ntt_1::thread_zext_ln59_fu_238_p1() {
    zext_ln59_fu_238_p1 = esl_zext<64,32>(j_0_reg_108.read());
}

void ntt_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_fu_130_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln55_fu_150_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_fu_223_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXX";
            break;
    }
}

}

