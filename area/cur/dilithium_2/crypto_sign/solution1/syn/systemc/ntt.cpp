// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "ntt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic ntt::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic ntt::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> ntt::ap_ST_fsm_state1 = "1";
const sc_lv<8> ntt::ap_ST_fsm_state2 = "10";
const sc_lv<8> ntt::ap_ST_fsm_state3 = "100";
const sc_lv<8> ntt::ap_ST_fsm_state4 = "1000";
const sc_lv<8> ntt::ap_ST_fsm_state5 = "10000";
const sc_lv<8> ntt::ap_ST_fsm_state6 = "100000";
const sc_lv<8> ntt::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> ntt::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> ntt::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_1 = "1";
const sc_lv<32> ntt::ap_const_lv32_2 = "10";
const sc_lv<1> ntt::ap_const_lv1_1 = "1";
const sc_lv<1> ntt::ap_const_lv1_0 = "0";
const sc_lv<32> ntt::ap_const_lv32_3 = "11";
const sc_lv<32> ntt::ap_const_lv32_4 = "100";
const sc_lv<32> ntt::ap_const_lv32_5 = "101";
const sc_lv<29> ntt::ap_const_lv29_80 = "10000000";
const sc_lv<31> ntt::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_7 = "111";
const sc_lv<32> ntt::ap_const_lv32_6 = "110";
const sc_lv<8> ntt::ap_const_lv8_0 = "00000000";
const sc_lv<29> ntt::ap_const_lv29_0 = "00000000000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_8 = "1000";
const sc_lv<32> ntt::ap_const_lv32_1E = "11110";
const sc_lv<23> ntt::ap_const_lv23_0 = "00000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_1C = "11100";
const sc_lv<32> ntt::ap_const_lv32_3802001 = "11100000000010000000000001";
const sc_lv<55> ntt::ap_const_lv55_7FFFFFFF801FFF = "1111111111111111111111111111111100000000001111111111111";
const sc_lv<32> ntt::ap_const_lv32_20 = "100000";
const sc_lv<32> ntt::ap_const_lv32_37 = "110111";
const bool ntt::ap_const_boolean_1 = true;

ntt::ntt(sc_module_name name) : sc_module(name), mVcdFile(0) {
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
    sensitive << ( a_addr11_reg_435 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( a_addr_reg_440 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( zext_ln58_fu_269_p1 );

    SC_METHOD(thread_a_address1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( a_addr_reg_440 );
    sensitive << ( zext_ln59_fu_283_p1 );
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
    sensitive << ( sub_ln59_fu_359_p2 );
    sensitive << ( add_ln60_fu_366_p2 );

    SC_METHOD(thread_a_we0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_add_ln19_fu_339_p2);
    sensitive << ( sext_ln58_2_fu_311_p1 );
    sensitive << ( sext_ln19_7_fu_335_p1 );

    SC_METHOD(thread_add_ln55_fu_294_p2);
    sensitive << ( zext_ln54_reg_385 );
    sensitive << ( zext_ln55_2_reg_422 );

    SC_METHOD(thread_add_ln57_fu_206_p2);
    sensitive << ( zext_ln54_reg_385 );
    sensitive << ( j_reg_110 );

    SC_METHOD(thread_add_ln58_1_fu_264_p2);
    sensitive << ( zext_ln49_reg_379 );
    sensitive << ( add_ln58_fu_258_p2 );

    SC_METHOD(thread_add_ln58_fu_258_p2);
    sensitive << ( trunc_ln58_1_fu_254_p1 );
    sensitive << ( trunc_ln58_fu_250_p1 );

    SC_METHOD(thread_add_ln59_fu_278_p2);
    sensitive << ( zext_ln49_reg_379 );
    sensitive << ( trunc_ln59_fu_274_p1 );

    SC_METHOD(thread_add_ln60_fu_366_p2);
    sensitive << ( a_q1 );
    sensitive << ( t_8_reg_456 );

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
    sensitive << ( icmp_ln54_fu_152_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln54_fu_152_p2 );

    SC_METHOD(thread_empty_51_fu_215_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( j_reg_110 );
    sensitive << ( add_ln57_fu_206_p2 );

    SC_METHOD(thread_icmp_ln54_fu_152_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( len_0_reg_98 );

    SC_METHOD(thread_icmp_ln55_fu_172_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_7_fu_162_p4 );

    SC_METHOD(thread_icmp_ln57_fu_245_p2);
    sensitive << ( zext_ln57_reg_417 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j_0_reg_122 );

    SC_METHOD(thread_j_2_fu_288_p2);
    sensitive << ( j_0_reg_122 );

    SC_METHOD(thread_k_fu_181_p2);
    sensitive << ( k_3_fu_50 );

    SC_METHOD(thread_mul_ln19_fu_329_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( t_fu_319_p2 );

    SC_METHOD(thread_mul_ln19_fu_329_p2);
    sensitive << ( mul_ln19_fu_329_p1 );

    SC_METHOD(thread_mul_ln58_fu_306_p0);
    sensitive << ( sext_ln57_reg_427 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_mul_ln58_fu_306_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sext_ln58_fu_302_p0 );

    SC_METHOD(thread_mul_ln58_fu_306_p2);
    sensitive << ( mul_ln58_fu_306_p0 );
    sensitive << ( mul_ln58_fu_306_p1 );

    SC_METHOD(thread_sext_ln19_7_fu_335_p1);
    sensitive << ( mul_ln19_fu_329_p2 );

    SC_METHOD(thread_sext_ln57_fu_241_p1);
    sensitive << ( zetas_q0 );

    SC_METHOD(thread_sext_ln58_2_fu_311_p1);
    sensitive << ( mul_ln58_fu_306_p2 );

    SC_METHOD(thread_sext_ln58_fu_302_p0);
    sensitive << ( a_q0 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_start_fu_229_p3);
    sensitive << ( empty_51_fu_215_p2 );
    sensitive << ( trunc_ln55_fu_221_p1 );
    sensitive << ( trunc_ln55_2_fu_225_p1 );

    SC_METHOD(thread_sub_ln59_fu_359_p2);
    sensitive << ( a_q1 );
    sensitive << ( t_8_fu_355_p1 );

    SC_METHOD(thread_t_8_fu_355_p1);
    sensitive << ( trunc_ln_fu_345_p4 );

    SC_METHOD(thread_t_fu_319_p2);
    sensitive << ( trunc_ln18_fu_315_p1 );

    SC_METHOD(thread_tmp_7_fu_162_p4);
    sensitive << ( j_reg_110 );

    SC_METHOD(thread_tmp_8_fu_192_p4);
    sensitive << ( len_0_reg_98 );

    SC_METHOD(thread_tmp_fu_131_p3);
    sensitive << ( a_offset );

    SC_METHOD(thread_trunc_ln18_fu_315_p1);
    sensitive << ( mul_ln58_fu_306_p2 );

    SC_METHOD(thread_trunc_ln55_2_fu_225_p1);
    sensitive << ( add_ln57_fu_206_p2 );

    SC_METHOD(thread_trunc_ln55_fu_221_p1);
    sensitive << ( j_reg_110 );

    SC_METHOD(thread_trunc_ln58_1_fu_254_p1);
    sensitive << ( len_0_reg_98 );

    SC_METHOD(thread_trunc_ln58_fu_250_p1);
    sensitive << ( j_0_reg_122 );

    SC_METHOD(thread_trunc_ln59_fu_274_p1);
    sensitive << ( j_0_reg_122 );

    SC_METHOD(thread_trunc_ln_fu_345_p4);
    sensitive << ( add_ln19_fu_339_p2 );

    SC_METHOD(thread_zetas_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln56_fu_187_p1 );

    SC_METHOD(thread_zetas_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_zext_ln49_fu_139_p1);
    sensitive << ( tmp_fu_131_p3 );

    SC_METHOD(thread_zext_ln54_3_fu_202_p1);
    sensitive << ( tmp_8_fu_192_p4 );

    SC_METHOD(thread_zext_ln54_fu_148_p1);
    sensitive << ( len_0_reg_98 );

    SC_METHOD(thread_zext_ln55_2_fu_237_p1);
    sensitive << ( start_fu_229_p3 );

    SC_METHOD(thread_zext_ln55_fu_158_p1);
    sensitive << ( j_reg_110 );

    SC_METHOD(thread_zext_ln56_fu_187_p1);
    sensitive << ( k_fu_181_p2 );

    SC_METHOD(thread_zext_ln57_fu_211_p1);
    sensitive << ( add_ln57_fu_206_p2 );

    SC_METHOD(thread_zext_ln58_fu_269_p1);
    sensitive << ( add_ln58_1_fu_264_p2 );

    SC_METHOD(thread_zext_ln59_fu_283_p1);
    sensitive << ( add_ln59_fu_278_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln55_fu_172_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln57_fu_245_p2 );
    sensitive << ( icmp_ln54_fu_152_p2 );

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "ntt_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, a_offset, "(port)a_offset");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, zetas_address0, "zetas_address0");
    sc_trace(mVcdFile, zetas_ce0, "zetas_ce0");
    sc_trace(mVcdFile, zetas_q0, "zetas_q0");
    sc_trace(mVcdFile, zext_ln49_fu_139_p1, "zext_ln49_fu_139_p1");
    sc_trace(mVcdFile, zext_ln49_reg_379, "zext_ln49_reg_379");
    sc_trace(mVcdFile, zext_ln54_fu_148_p1, "zext_ln54_fu_148_p1");
    sc_trace(mVcdFile, zext_ln54_reg_385, "zext_ln54_reg_385");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln55_fu_158_p1, "zext_ln55_fu_158_p1");
    sc_trace(mVcdFile, zext_ln55_reg_394, "zext_ln55_reg_394");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, k_fu_181_p2, "k_fu_181_p2");
    sc_trace(mVcdFile, k_reg_402, "k_reg_402");
    sc_trace(mVcdFile, icmp_ln55_fu_172_p2, "icmp_ln55_fu_172_p2");
    sc_trace(mVcdFile, zext_ln54_3_fu_202_p1, "zext_ln54_3_fu_202_p1");
    sc_trace(mVcdFile, zext_ln57_fu_211_p1, "zext_ln57_fu_211_p1");
    sc_trace(mVcdFile, zext_ln57_reg_417, "zext_ln57_reg_417");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln55_2_fu_237_p1, "zext_ln55_2_fu_237_p1");
    sc_trace(mVcdFile, zext_ln55_2_reg_422, "zext_ln55_2_reg_422");
    sc_trace(mVcdFile, sext_ln57_fu_241_p1, "sext_ln57_fu_241_p1");
    sc_trace(mVcdFile, sext_ln57_reg_427, "sext_ln57_reg_427");
    sc_trace(mVcdFile, a_addr11_reg_435, "a_addr11_reg_435");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, icmp_ln57_fu_245_p2, "icmp_ln57_fu_245_p2");
    sc_trace(mVcdFile, a_addr_reg_440, "a_addr_reg_440");
    sc_trace(mVcdFile, j_2_fu_288_p2, "j_2_fu_288_p2");
    sc_trace(mVcdFile, j_2_reg_446, "j_2_reg_446");
    sc_trace(mVcdFile, add_ln55_fu_294_p2, "add_ln55_fu_294_p2");
    sc_trace(mVcdFile, t_8_fu_355_p1, "t_8_fu_355_p1");
    sc_trace(mVcdFile, t_8_reg_456, "t_8_reg_456");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, len_0_reg_98, "len_0_reg_98");
    sc_trace(mVcdFile, j_reg_110, "j_reg_110");
    sc_trace(mVcdFile, icmp_ln54_fu_152_p2, "icmp_ln54_fu_152_p2");
    sc_trace(mVcdFile, j_0_reg_122, "j_0_reg_122");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, zext_ln56_fu_187_p1, "zext_ln56_fu_187_p1");
    sc_trace(mVcdFile, zext_ln58_fu_269_p1, "zext_ln58_fu_269_p1");
    sc_trace(mVcdFile, zext_ln59_fu_283_p1, "zext_ln59_fu_283_p1");
    sc_trace(mVcdFile, k_3_fu_50, "k_3_fu_50");
    sc_trace(mVcdFile, sub_ln59_fu_359_p2, "sub_ln59_fu_359_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, add_ln60_fu_366_p2, "add_ln60_fu_366_p2");
    sc_trace(mVcdFile, tmp_fu_131_p3, "tmp_fu_131_p3");
    sc_trace(mVcdFile, tmp_7_fu_162_p4, "tmp_7_fu_162_p4");
    sc_trace(mVcdFile, tmp_8_fu_192_p4, "tmp_8_fu_192_p4");
    sc_trace(mVcdFile, add_ln57_fu_206_p2, "add_ln57_fu_206_p2");
    sc_trace(mVcdFile, empty_51_fu_215_p2, "empty_51_fu_215_p2");
    sc_trace(mVcdFile, trunc_ln55_fu_221_p1, "trunc_ln55_fu_221_p1");
    sc_trace(mVcdFile, trunc_ln55_2_fu_225_p1, "trunc_ln55_2_fu_225_p1");
    sc_trace(mVcdFile, start_fu_229_p3, "start_fu_229_p3");
    sc_trace(mVcdFile, trunc_ln58_1_fu_254_p1, "trunc_ln58_1_fu_254_p1");
    sc_trace(mVcdFile, trunc_ln58_fu_250_p1, "trunc_ln58_fu_250_p1");
    sc_trace(mVcdFile, add_ln58_fu_258_p2, "add_ln58_fu_258_p2");
    sc_trace(mVcdFile, add_ln58_1_fu_264_p2, "add_ln58_1_fu_264_p2");
    sc_trace(mVcdFile, trunc_ln59_fu_274_p1, "trunc_ln59_fu_274_p1");
    sc_trace(mVcdFile, add_ln59_fu_278_p2, "add_ln59_fu_278_p2");
    sc_trace(mVcdFile, sext_ln58_fu_302_p0, "sext_ln58_fu_302_p0");
    sc_trace(mVcdFile, mul_ln58_fu_306_p0, "mul_ln58_fu_306_p0");
    sc_trace(mVcdFile, mul_ln58_fu_306_p1, "mul_ln58_fu_306_p1");
    sc_trace(mVcdFile, mul_ln58_fu_306_p2, "mul_ln58_fu_306_p2");
    sc_trace(mVcdFile, trunc_ln18_fu_315_p1, "trunc_ln18_fu_315_p1");
    sc_trace(mVcdFile, t_fu_319_p2, "t_fu_319_p2");
    sc_trace(mVcdFile, mul_ln19_fu_329_p1, "mul_ln19_fu_329_p1");
    sc_trace(mVcdFile, mul_ln19_fu_329_p2, "mul_ln19_fu_329_p2");
    sc_trace(mVcdFile, sext_ln58_2_fu_311_p1, "sext_ln58_2_fu_311_p1");
    sc_trace(mVcdFile, sext_ln19_7_fu_335_p1, "sext_ln19_7_fu_335_p1");
    sc_trace(mVcdFile, add_ln19_fu_339_p2, "add_ln19_fu_339_p2");
    sc_trace(mVcdFile, trunc_ln_fu_345_p4, "trunc_ln_fu_345_p4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

ntt::~ntt() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete zetas_U;
}

void ntt::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        j_0_reg_122 = j_2_reg_446.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_0_reg_122 = zext_ln55_reg_394.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_152_p2.read()))) {
        j_reg_110 = ap_const_lv31_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_fu_245_p2.read()))) {
        j_reg_110 = add_ln55_fu_294_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_fu_245_p2.read()))) {
        k_3_fu_50 = k_reg_402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        k_3_fu_50 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln55_fu_172_p2.read(), ap_const_lv1_0))) {
        len_0_reg_98 = zext_ln54_3_fu_202_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        len_0_reg_98 = ap_const_lv29_80;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_fu_245_p2.read()))) {
        a_addr11_reg_435 =  (sc_lv<10>) (zext_ln58_fu_269_p1.read());
        a_addr_reg_440 =  (sc_lv<10>) (zext_ln59_fu_283_p1.read());
        j_2_reg_446 = j_2_fu_288_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln55_fu_172_p2.read(), ap_const_lv1_1))) {
        k_reg_402 = k_fu_181_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        sext_ln57_reg_427 = sext_ln57_fu_241_p1.read();
        zext_ln55_2_reg_422 = zext_ln55_2_fu_237_p1.read();
        zext_ln57_reg_417 = zext_ln57_fu_211_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        t_8_reg_456 = t_8_fu_355_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        zext_ln49_reg_379 = zext_ln49_fu_139_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        zext_ln54_reg_385 = zext_ln54_fu_148_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        zext_ln55_reg_394 = zext_ln55_fu_158_p1.read();
    }
}

void ntt::thread_a_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        a_address0 = a_addr_reg_440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_address0 = a_addr11_reg_435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_address0 =  (sc_lv<10>) (zext_ln58_fu_269_p1.read());
    } else {
        a_address0 = "XXXXXXXXXX";
    }
}

void ntt::thread_a_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        a_address1 = a_addr_reg_440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_address1 =  (sc_lv<10>) (zext_ln59_fu_283_p1.read());
    } else {
        a_address1 = "XXXXXXXXXX";
    }
}

void ntt::thread_a_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_a_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        a_ce1 = ap_const_logic_1;
    } else {
        a_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_a_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        a_d0 = add_ln60_fu_366_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_d0 = sub_ln59_fu_359_p2.read();
    } else {
        a_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_a_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        a_we0 = ap_const_logic_1;
    } else {
        a_we0 = ap_const_logic_0;
    }
}

void ntt::thread_add_ln19_fu_339_p2() {
    add_ln19_fu_339_p2 = (!sext_ln58_2_fu_311_p1.read().is_01() || !sext_ln19_7_fu_335_p1.read().is_01())? sc_lv<56>(): (sc_bigint<56>(sext_ln58_2_fu_311_p1.read()) + sc_bigint<56>(sext_ln19_7_fu_335_p1.read()));
}

void ntt::thread_add_ln55_fu_294_p2() {
    add_ln55_fu_294_p2 = (!zext_ln54_reg_385.read().is_01() || !zext_ln55_2_reg_422.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln54_reg_385.read()) + sc_biguint<31>(zext_ln55_2_reg_422.read()));
}

void ntt::thread_add_ln57_fu_206_p2() {
    add_ln57_fu_206_p2 = (!zext_ln54_reg_385.read().is_01() || !j_reg_110.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln54_reg_385.read()) + sc_biguint<31>(j_reg_110.read()));
}

void ntt::thread_add_ln58_1_fu_264_p2() {
    add_ln58_1_fu_264_p2 = (!zext_ln49_reg_379.read().is_01() || !add_ln58_fu_258_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln49_reg_379.read()) + sc_biguint<12>(add_ln58_fu_258_p2.read()));
}

void ntt::thread_add_ln58_fu_258_p2() {
    add_ln58_fu_258_p2 = (!trunc_ln58_1_fu_254_p1.read().is_01() || !trunc_ln58_fu_250_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(trunc_ln58_1_fu_254_p1.read()) + sc_biguint<12>(trunc_ln58_fu_250_p1.read()));
}

void ntt::thread_add_ln59_fu_278_p2() {
    add_ln59_fu_278_p2 = (!zext_ln49_reg_379.read().is_01() || !trunc_ln59_fu_274_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln49_reg_379.read()) + sc_biguint<12>(trunc_ln59_fu_274_p1.read()));
}

void ntt::thread_add_ln60_fu_366_p2() {
    add_ln60_fu_366_p2 = (!t_8_reg_456.read().is_01() || !a_q1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(t_8_reg_456.read()) + sc_biguint<32>(a_q1.read()));
}

void ntt::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ntt::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ntt::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void ntt::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void ntt::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void ntt::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void ntt::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void ntt::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void ntt::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_fu_152_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ntt::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ntt::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_fu_152_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ntt::thread_empty_51_fu_215_p2() {
    empty_51_fu_215_p2 = (!j_reg_110.read().is_01() || !add_ln57_fu_206_p2.read().is_01())? sc_lv<1>(): (sc_biguint<31>(j_reg_110.read()) > sc_biguint<31>(add_ln57_fu_206_p2.read()));
}

void ntt::thread_icmp_ln54_fu_152_p2() {
    icmp_ln54_fu_152_p2 = (!len_0_reg_98.read().is_01() || !ap_const_lv29_0.is_01())? sc_lv<1>(): sc_lv<1>(len_0_reg_98.read() == ap_const_lv29_0);
}

void ntt::thread_icmp_ln55_fu_172_p2() {
    icmp_ln55_fu_172_p2 = (!tmp_7_fu_162_p4.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7_fu_162_p4.read() == ap_const_lv23_0);
}

void ntt::thread_icmp_ln57_fu_245_p2() {
    icmp_ln57_fu_245_p2 = (!j_0_reg_122.read().is_01() || !zext_ln57_reg_417.read().is_01())? sc_lv<1>(): (sc_biguint<32>(j_0_reg_122.read()) < sc_biguint<32>(zext_ln57_reg_417.read()));
}

void ntt::thread_j_2_fu_288_p2() {
    j_2_fu_288_p2 = (!ap_const_lv32_1.is_01() || !j_0_reg_122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j_0_reg_122.read()));
}

void ntt::thread_k_fu_181_p2() {
    k_fu_181_p2 = (!ap_const_lv32_1.is_01() || !k_3_fu_50.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(k_3_fu_50.read()));
}

void ntt::thread_mul_ln19_fu_329_p1() {
    mul_ln19_fu_329_p1 = t_fu_319_p2.read();
}

void ntt::thread_mul_ln19_fu_329_p2() {
    mul_ln19_fu_329_p2 = (!ap_const_lv55_7FFFFFFF801FFF.is_01() || !mul_ln19_fu_329_p1.read().is_01())? sc_lv<55>(): sc_bigint<55>(ap_const_lv55_7FFFFFFF801FFF) * sc_bigint<32>(mul_ln19_fu_329_p1.read());
}

void ntt::thread_mul_ln58_fu_306_p0() {
    mul_ln58_fu_306_p0 =  (sc_lv<23>) (sext_ln57_reg_427.read());
}

void ntt::thread_mul_ln58_fu_306_p1() {
    mul_ln58_fu_306_p1 = sext_ln58_fu_302_p0.read();
}

void ntt::thread_mul_ln58_fu_306_p2() {
    mul_ln58_fu_306_p2 = (!mul_ln58_fu_306_p0.read().is_01() || !mul_ln58_fu_306_p1.read().is_01())? sc_lv<54>(): sc_bigint<23>(mul_ln58_fu_306_p0.read()) * sc_bigint<32>(mul_ln58_fu_306_p1.read());
}

void ntt::thread_sext_ln19_7_fu_335_p1() {
    sext_ln19_7_fu_335_p1 = esl_sext<56,55>(mul_ln19_fu_329_p2.read());
}

void ntt::thread_sext_ln57_fu_241_p1() {
    sext_ln57_fu_241_p1 = esl_sext<54,23>(zetas_q0.read());
}

void ntt::thread_sext_ln58_2_fu_311_p1() {
    sext_ln58_2_fu_311_p1 = esl_sext<56,54>(mul_ln58_fu_306_p2.read());
}

void ntt::thread_sext_ln58_fu_302_p0() {
    sext_ln58_fu_302_p0 = a_q0.read();
}

void ntt::thread_start_fu_229_p3() {
    start_fu_229_p3 = (!empty_51_fu_215_p2.read()[0].is_01())? sc_lv<30>(): ((empty_51_fu_215_p2.read()[0].to_bool())? trunc_ln55_fu_221_p1.read(): trunc_ln55_2_fu_225_p1.read());
}

void ntt::thread_sub_ln59_fu_359_p2() {
    sub_ln59_fu_359_p2 = (!a_q1.read().is_01() || !t_8_fu_355_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(a_q1.read()) - sc_bigint<32>(t_8_fu_355_p1.read()));
}

void ntt::thread_t_8_fu_355_p1() {
    t_8_fu_355_p1 = esl_sext<32,24>(trunc_ln_fu_345_p4.read());
}

void ntt::thread_t_fu_319_p2() {
    t_fu_319_p2 = (!ap_const_lv32_3802001.is_01() || !trunc_ln18_fu_315_p1.read().is_01())? sc_lv<32>(): sc_biguint<32>(ap_const_lv32_3802001) * sc_bigint<32>(trunc_ln18_fu_315_p1.read());
}

void ntt::thread_tmp_7_fu_162_p4() {
    tmp_7_fu_162_p4 = j_reg_110.read().range(30, 8);
}

void ntt::thread_tmp_8_fu_192_p4() {
    tmp_8_fu_192_p4 = len_0_reg_98.read().range(28, 1);
}

void ntt::thread_tmp_fu_131_p3() {
    tmp_fu_131_p3 = esl_concat<3,8>(a_offset.read(), ap_const_lv8_0);
}

void ntt::thread_trunc_ln18_fu_315_p1() {
    trunc_ln18_fu_315_p1 = mul_ln58_fu_306_p2.read().range(32-1, 0);
}

void ntt::thread_trunc_ln55_2_fu_225_p1() {
    trunc_ln55_2_fu_225_p1 = add_ln57_fu_206_p2.read().range(30-1, 0);
}

void ntt::thread_trunc_ln55_fu_221_p1() {
    trunc_ln55_fu_221_p1 = j_reg_110.read().range(30-1, 0);
}

void ntt::thread_trunc_ln58_1_fu_254_p1() {
    trunc_ln58_1_fu_254_p1 = len_0_reg_98.read().range(12-1, 0);
}

void ntt::thread_trunc_ln58_fu_250_p1() {
    trunc_ln58_fu_250_p1 = j_0_reg_122.read().range(12-1, 0);
}

void ntt::thread_trunc_ln59_fu_274_p1() {
    trunc_ln59_fu_274_p1 = j_0_reg_122.read().range(12-1, 0);
}

void ntt::thread_trunc_ln_fu_345_p4() {
    trunc_ln_fu_345_p4 = add_ln19_fu_339_p2.read().range(55, 32);
}

void ntt::thread_zetas_address0() {
    zetas_address0 =  (sc_lv<8>) (zext_ln56_fu_187_p1.read());
}

void ntt::thread_zetas_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_zext_ln49_fu_139_p1() {
    zext_ln49_fu_139_p1 = esl_zext<12,11>(tmp_fu_131_p3.read());
}

void ntt::thread_zext_ln54_3_fu_202_p1() {
    zext_ln54_3_fu_202_p1 = esl_zext<29,28>(tmp_8_fu_192_p4.read());
}

void ntt::thread_zext_ln54_fu_148_p1() {
    zext_ln54_fu_148_p1 = esl_zext<31,29>(len_0_reg_98.read());
}

void ntt::thread_zext_ln55_2_fu_237_p1() {
    zext_ln55_2_fu_237_p1 = esl_zext<31,30>(start_fu_229_p3.read());
}

void ntt::thread_zext_ln55_fu_158_p1() {
    zext_ln55_fu_158_p1 = esl_zext<32,31>(j_reg_110.read());
}

void ntt::thread_zext_ln56_fu_187_p1() {
    zext_ln56_fu_187_p1 = esl_zext<64,32>(k_fu_181_p2.read());
}

void ntt::thread_zext_ln57_fu_211_p1() {
    zext_ln57_fu_211_p1 = esl_zext<32,31>(add_ln57_fu_206_p2.read());
}

void ntt::thread_zext_ln58_fu_269_p1() {
    zext_ln58_fu_269_p1 = esl_zext<64,12>(add_ln58_1_fu_264_p2.read());
}

void ntt::thread_zext_ln59_fu_283_p1() {
    zext_ln59_fu_283_p1 = esl_zext<64,12>(add_ln59_fu_278_p2.read());
}

void ntt::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_fu_152_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln55_fu_172_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_fu_245_p2.read()))) {
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
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

