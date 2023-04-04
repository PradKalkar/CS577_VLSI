// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _unpack_sk_HH_
#define _unpack_sk_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "polyt0_unpack.h"
#include "polyeta_unpack.h"

namespace ap_rtl {

struct unpack_sk : public sc_module {
    // Port declarations 40
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > rho_address0;
    sc_out< sc_logic > rho_ce0;
    sc_out< sc_logic > rho_we0;
    sc_out< sc_lv<8> > rho_d0;
    sc_out< sc_lv<10> > t0_vec_coeffs_address0;
    sc_out< sc_logic > t0_vec_coeffs_ce0;
    sc_out< sc_logic > t0_vec_coeffs_we0;
    sc_out< sc_lv<32> > t0_vec_coeffs_d0;
    sc_out< sc_lv<10> > t0_vec_coeffs_address1;
    sc_out< sc_logic > t0_vec_coeffs_ce1;
    sc_out< sc_logic > t0_vec_coeffs_we1;
    sc_out< sc_lv<32> > t0_vec_coeffs_d1;
    sc_out< sc_lv<10> > s1_vec_coeffs_address0;
    sc_out< sc_logic > s1_vec_coeffs_ce0;
    sc_out< sc_logic > s1_vec_coeffs_we0;
    sc_out< sc_lv<32> > s1_vec_coeffs_d0;
    sc_out< sc_lv<10> > s1_vec_coeffs_address1;
    sc_out< sc_logic > s1_vec_coeffs_ce1;
    sc_out< sc_logic > s1_vec_coeffs_we1;
    sc_out< sc_lv<32> > s1_vec_coeffs_d1;
    sc_out< sc_lv<10> > s2_vec_coeffs_address0;
    sc_out< sc_logic > s2_vec_coeffs_ce0;
    sc_out< sc_logic > s2_vec_coeffs_we0;
    sc_out< sc_lv<32> > s2_vec_coeffs_d0;
    sc_out< sc_lv<10> > s2_vec_coeffs_address1;
    sc_out< sc_logic > s2_vec_coeffs_ce1;
    sc_out< sc_logic > s2_vec_coeffs_we1;
    sc_out< sc_lv<32> > s2_vec_coeffs_d1;
    sc_out< sc_lv<12> > sk_address0;
    sc_out< sc_logic > sk_ce0;
    sc_in< sc_lv<8> > sk_q0;
    sc_out< sc_lv<12> > sk_address1;
    sc_out< sc_logic > sk_ce1;
    sc_in< sc_lv<8> > sk_q1;


    // Module declarations
    unpack_sk(sc_module_name name);
    SC_HAS_PROCESS(unpack_sk);

    ~unpack_sk();

    sc_trace_file* mVcdFile;

    polyt0_unpack* grp_polyt0_unpack_fu_205;
    polyeta_unpack* grp_polyeta_unpack_fu_216;
    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > i_fu_235_p2;
    sc_signal< sc_lv<6> > i_reg_478;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > zext_ln127_fu_241_p1;
    sc_signal< sc_lv<64> > zext_ln127_reg_483;
    sc_signal< sc_lv<1> > icmp_ln126_fu_229_p2;
    sc_signal< sc_lv<6> > i_6_fu_252_p2;
    sc_signal< sc_lv<6> > i_6_reg_496;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln130_fu_246_p2;
    sc_signal< sc_lv<6> > i_7_fu_290_p2;
    sc_signal< sc_lv<6> > i_7_reg_509;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > icmp_ln134_fu_284_p2;
    sc_signal< sc_lv<3> > i_8_fu_330_p2;
    sc_signal< sc_lv<3> > i_8_reg_522;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<33> > add_ln139_fu_378_p2;
    sc_signal< sc_lv<33> > add_ln139_reg_527;
    sc_signal< sc_lv<1> > icmp_ln138_fu_324_p2;
    sc_signal< sc_lv<3> > i_9_fu_391_p2;
    sc_signal< sc_lv<3> > i_9_reg_535;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<33> > add_ln143_fu_439_p2;
    sc_signal< sc_lv<33> > add_ln143_reg_540;
    sc_signal< sc_lv<1> > icmp_ln142_fu_385_p2;
    sc_signal< sc_lv<3> > i_10_fu_456_p2;
    sc_signal< sc_lv<3> > i_10_reg_548;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<11> > add_ln147_1_fu_462_p2;
    sc_signal< sc_lv<11> > add_ln147_1_reg_553;
    sc_signal< sc_lv<1> > icmp_ln146_fu_450_p2;
    sc_signal< sc_lv<12> > add_ln147_fu_468_p2;
    sc_signal< sc_lv<12> > add_ln147_reg_558;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_ap_start;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_ap_done;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_ap_idle;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_ap_ready;
    sc_signal< sc_lv<10> > grp_polyt0_unpack_fu_205_r_coeffs_address0;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_r_coeffs_ce0;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_r_coeffs_we0;
    sc_signal< sc_lv<32> > grp_polyt0_unpack_fu_205_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_polyt0_unpack_fu_205_r_coeffs_address1;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_r_coeffs_ce1;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_r_coeffs_we1;
    sc_signal< sc_lv<32> > grp_polyt0_unpack_fu_205_r_coeffs_d1;
    sc_signal< sc_lv<12> > grp_polyt0_unpack_fu_205_a_address0;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_a_ce0;
    sc_signal< sc_lv<12> > grp_polyt0_unpack_fu_205_a_address1;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_a_ce1;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_ap_start;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_ap_done;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_ap_idle;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_ap_ready;
    sc_signal< sc_lv<10> > grp_polyeta_unpack_fu_216_r_coeffs_address0;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_r_coeffs_ce0;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_r_coeffs_we0;
    sc_signal< sc_lv<32> > grp_polyeta_unpack_fu_216_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_polyeta_unpack_fu_216_r_coeffs_address1;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_r_coeffs_ce1;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_r_coeffs_we1;
    sc_signal< sc_lv<32> > grp_polyeta_unpack_fu_216_r_coeffs_d1;
    sc_signal< sc_lv<3> > grp_polyeta_unpack_fu_216_r_coeffs_offset;
    sc_signal< sc_lv<12> > grp_polyeta_unpack_fu_216_a_address0;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_a_ce0;
    sc_signal< sc_lv<12> > grp_polyeta_unpack_fu_216_a_address1;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_a_ce1;
    sc_signal< sc_lv<33> > grp_polyeta_unpack_fu_216_a_offset;
    sc_signal< sc_lv<6> > i_0_reg_123;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<6> > i_1_reg_134;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<6> > i_2_reg_146;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<3> > i_3_reg_158;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<3> > i_4_reg_170;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<3> > i_5_reg_182;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<11> > phi_mul_reg_194;
    sc_signal< sc_logic > grp_polyt0_unpack_fu_205_ap_start_reg;
    sc_signal< sc_logic > grp_polyeta_unpack_fu_216_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln131_1_fu_264_p1;
    sc_signal< sc_lv<64> > zext_ln131_2_fu_279_p1;
    sc_signal< sc_lv<64> > zext_ln135_1_fu_304_p1;
    sc_signal< sc_lv<64> > zext_ln135_2_fu_319_p1;
    sc_signal< sc_lv<6> > xor_ln131_fu_258_p2;
    sc_signal< sc_lv<7> > zext_ln131_fu_269_p1;
    sc_signal< sc_lv<7> > add_ln131_fu_273_p2;
    sc_signal< sc_lv<7> > or_ln_fu_296_p3;
    sc_signal< sc_lv<7> > zext_ln135_fu_309_p1;
    sc_signal< sc_lv<7> > add_ln135_fu_313_p2;
    sc_signal< sc_lv<2> > trunc_ln139_fu_336_p1;
    sc_signal< sc_lv<9> > shl_ln_fu_340_p3;
    sc_signal< sc_lv<7> > shl_ln139_1_fu_352_p3;
    sc_signal< sc_lv<10> > zext_ln139_fu_348_p1;
    sc_signal< sc_lv<10> > zext_ln139_1_fu_360_p1;
    sc_signal< sc_lv<10> > sub_ln139_fu_364_p2;
    sc_signal< sc_lv<32> > sext_ln139_fu_370_p1;
    sc_signal< sc_lv<33> > zext_ln139_2_fu_374_p1;
    sc_signal< sc_lv<2> > trunc_ln143_fu_397_p1;
    sc_signal< sc_lv<9> > shl_ln1_fu_401_p3;
    sc_signal< sc_lv<7> > shl_ln143_1_fu_413_p3;
    sc_signal< sc_lv<10> > zext_ln143_fu_409_p1;
    sc_signal< sc_lv<10> > zext_ln143_1_fu_421_p1;
    sc_signal< sc_lv<10> > sub_ln143_fu_425_p2;
    sc_signal< sc_lv<32> > sext_ln143_fu_431_p1;
    sc_signal< sc_lv<33> > zext_ln143_2_fu_435_p1;
    sc_signal< sc_lv<12> > zext_ln146_fu_446_p1;
    sc_signal< sc_lv<13> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<13> ap_ST_fsm_state1;
    static const sc_lv<13> ap_ST_fsm_state2;
    static const sc_lv<13> ap_ST_fsm_state3;
    static const sc_lv<13> ap_ST_fsm_state4;
    static const sc_lv<13> ap_ST_fsm_state5;
    static const sc_lv<13> ap_ST_fsm_state6;
    static const sc_lv<13> ap_ST_fsm_state7;
    static const sc_lv<13> ap_ST_fsm_state8;
    static const sc_lv<13> ap_ST_fsm_state9;
    static const sc_lv<13> ap_ST_fsm_state10;
    static const sc_lv<13> ap_ST_fsm_state11;
    static const sc_lv<13> ap_ST_fsm_state12;
    static const sc_lv<13> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<7> ap_const_lv7_50;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<7> ap_const_lv7_20;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<33> ap_const_lv33_70;
    static const sc_lv<33> ap_const_lv33_1F0;
    static const sc_lv<11> ap_const_lv11_1A0;
    static const sc_lv<12> ap_const_lv12_370;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln131_fu_273_p2();
    void thread_add_ln135_fu_313_p2();
    void thread_add_ln139_fu_378_p2();
    void thread_add_ln143_fu_439_p2();
    void thread_add_ln147_1_fu_462_p2();
    void thread_add_ln147_fu_468_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_polyeta_unpack_fu_216_a_offset();
    void thread_grp_polyeta_unpack_fu_216_ap_start();
    void thread_grp_polyeta_unpack_fu_216_r_coeffs_offset();
    void thread_grp_polyt0_unpack_fu_205_ap_start();
    void thread_i_10_fu_456_p2();
    void thread_i_6_fu_252_p2();
    void thread_i_7_fu_290_p2();
    void thread_i_8_fu_330_p2();
    void thread_i_9_fu_391_p2();
    void thread_i_fu_235_p2();
    void thread_icmp_ln126_fu_229_p2();
    void thread_icmp_ln130_fu_246_p2();
    void thread_icmp_ln134_fu_284_p2();
    void thread_icmp_ln138_fu_324_p2();
    void thread_icmp_ln142_fu_385_p2();
    void thread_icmp_ln146_fu_450_p2();
    void thread_or_ln_fu_296_p3();
    void thread_rho_address0();
    void thread_rho_ce0();
    void thread_rho_d0();
    void thread_rho_we0();
    void thread_s1_vec_coeffs_address0();
    void thread_s1_vec_coeffs_address1();
    void thread_s1_vec_coeffs_ce0();
    void thread_s1_vec_coeffs_ce1();
    void thread_s1_vec_coeffs_d0();
    void thread_s1_vec_coeffs_d1();
    void thread_s1_vec_coeffs_we0();
    void thread_s1_vec_coeffs_we1();
    void thread_s2_vec_coeffs_address0();
    void thread_s2_vec_coeffs_address1();
    void thread_s2_vec_coeffs_ce0();
    void thread_s2_vec_coeffs_ce1();
    void thread_s2_vec_coeffs_d0();
    void thread_s2_vec_coeffs_d1();
    void thread_s2_vec_coeffs_we0();
    void thread_s2_vec_coeffs_we1();
    void thread_sext_ln139_fu_370_p1();
    void thread_sext_ln143_fu_431_p1();
    void thread_shl_ln139_1_fu_352_p3();
    void thread_shl_ln143_1_fu_413_p3();
    void thread_shl_ln1_fu_401_p3();
    void thread_shl_ln_fu_340_p3();
    void thread_sk_address0();
    void thread_sk_address1();
    void thread_sk_ce0();
    void thread_sk_ce1();
    void thread_sub_ln139_fu_364_p2();
    void thread_sub_ln143_fu_425_p2();
    void thread_t0_vec_coeffs_address0();
    void thread_t0_vec_coeffs_address1();
    void thread_t0_vec_coeffs_ce0();
    void thread_t0_vec_coeffs_ce1();
    void thread_t0_vec_coeffs_d0();
    void thread_t0_vec_coeffs_d1();
    void thread_t0_vec_coeffs_we0();
    void thread_t0_vec_coeffs_we1();
    void thread_trunc_ln139_fu_336_p1();
    void thread_trunc_ln143_fu_397_p1();
    void thread_xor_ln131_fu_258_p2();
    void thread_zext_ln127_fu_241_p1();
    void thread_zext_ln131_1_fu_264_p1();
    void thread_zext_ln131_2_fu_279_p1();
    void thread_zext_ln131_fu_269_p1();
    void thread_zext_ln135_1_fu_304_p1();
    void thread_zext_ln135_2_fu_319_p1();
    void thread_zext_ln135_fu_309_p1();
    void thread_zext_ln139_1_fu_360_p1();
    void thread_zext_ln139_2_fu_374_p1();
    void thread_zext_ln139_fu_348_p1();
    void thread_zext_ln143_1_fu_421_p1();
    void thread_zext_ln143_2_fu_435_p1();
    void thread_zext_ln143_fu_409_p1();
    void thread_zext_ln146_fu_446_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
