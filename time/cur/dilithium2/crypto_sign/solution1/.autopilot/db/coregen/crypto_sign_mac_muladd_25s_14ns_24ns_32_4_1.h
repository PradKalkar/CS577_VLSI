// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Tool Version Limit: 2019.12
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1__HH__
#define __crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1__HH__
#include "crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1.h"

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1 crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U;

    SC_CTOR(crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1):  crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U ("crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U") {
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.clk(clk);
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.rst(reset);
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.ce(ce);
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.in0(din0);
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.in1(din1);
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.in2(din2);
        crypto_sign_mac_muladd_25s_14ns_24ns_32_4_1_DSP48_1_U.dout(dout);

    }

};

#endif //
