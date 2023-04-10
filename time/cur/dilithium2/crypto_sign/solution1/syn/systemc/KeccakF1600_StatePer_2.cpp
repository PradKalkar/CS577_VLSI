#include "KeccakF1600_StatePer.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void KeccakF1600_StatePer::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        Aba_reg_33566 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Abe_reg_33582 = state_0_q0.read();
        Abi_reg_33588 = state_0_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        Abo_reg_33606 = state_0_q1.read();
        Abu_reg_33612 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        Aga_reg_33630 = state_0_q1.read();
        Age_reg_33636 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        Agi_reg_33654 = state_0_q1.read();
        Ago_reg_33660 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Agu_reg_33678 = state_0_q1.read();
        Aka_reg_33684 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        Ake_reg_33702 = state_0_q1.read();
        Aki_reg_33708 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        Ako_reg_33726 = state_0_q1.read();
        Aku_reg_33732 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        Ama_reg_33750 = state_0_q1.read();
        Ame_reg_33756 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        Ami_reg_33774 = state_0_q1.read();
        Amo_reg_33780 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        Amu_reg_33798 = state_0_q1.read();
        Asa_reg_33804 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        Ase_reg_33822 = state_0_q1.read();
        Asi_reg_33828 = state_0_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        lshr_ln263_s_reg_33866 = xor_ln262_11_fu_32680_p2.read().range(63, 36);
        lshr_ln265_s_reg_33876 = xor_ln264_11_fu_32700_p2.read().range(63, 44);
        lshr_ln267_s_reg_33886 = xor_ln266_11_fu_32720_p2.read().range(63, 61);
        lshr_ln269_s_reg_33896 = xor_ln268_11_fu_32740_p2.read().range(63, 19);
        lshr_ln281_s_reg_33923 = xor_ln280_11_fu_32806_p2.read().range(63, 58);
        lshr_ln283_s_reg_33933 = xor_ln282_11_fu_32826_p2.read().range(63, 39);
        lshr_ln285_s_reg_33943 = xor_ln284_11_fu_32846_p2.read().range(63, 56);
        lshr_ln295_s_reg_33960 = xor_ln294_11_fu_32894_p2.read().range(63, 37);
        lshr_ln297_s_reg_33970 = xor_ln296_11_fu_32914_p2.read().range(63, 28);
        lshr_ln299_s_reg_33980 = xor_ln298_11_fu_32934_p2.read().range(63, 54);
        lshr_ln301_s_reg_33990 = xor_ln300_11_fu_32954_p2.read().range(63, 49);
        lshr_ln311_s_reg_34007 = xor_ln310_11_fu_33002_p2.read().range(63, 2);
        lshr_ln315_s_reg_34024 = xor_ln314_11_fu_33050_p2.read().range(63, 25);
        lshr_ln317_s_reg_34034 = xor_ln316_11_fu_33070_p2.read().range(63, 23);
        lshr_ln319_s_reg_34044 = xor_ln318_11_fu_33090_p2.read().range(63, 62);
        or_ln271_s_reg_33901 = or_ln271_s_fu_32780_p3.read();
        or_ln287_s_reg_33948 = or_ln287_s_fu_32886_p3.read();
        or_ln303_s_reg_33995 = or_ln303_s_fu_32994_p3.read();
        or_ln313_s_reg_34012 = or_ln313_s_fu_33042_p3.read();
        tmp_1226_reg_33913 = xor_ln278_11_fu_32788_p2.read().range(63, 63);
        trunc_ln263_22_reg_33861 = trunc_ln263_22_fu_32686_p1.read();
        trunc_ln265_22_reg_33871 = trunc_ln265_22_fu_32706_p1.read();
        trunc_ln267_22_reg_33881 = trunc_ln267_22_fu_32726_p1.read();
        trunc_ln269_22_reg_33891 = trunc_ln269_22_fu_32746_p1.read();
        trunc_ln279_22_reg_33908 = trunc_ln279_22_fu_32794_p1.read();
        trunc_ln281_22_reg_33918 = trunc_ln281_22_fu_32812_p1.read();
        trunc_ln283_22_reg_33928 = trunc_ln283_22_fu_32832_p1.read();
        trunc_ln285_22_reg_33938 = trunc_ln285_22_fu_32852_p1.read();
        trunc_ln295_22_reg_33955 = trunc_ln295_22_fu_32900_p1.read();
        trunc_ln297_22_reg_33965 = trunc_ln297_22_fu_32920_p1.read();
        trunc_ln299_22_reg_33975 = trunc_ln299_22_fu_32940_p1.read();
        trunc_ln301_22_reg_33985 = trunc_ln301_22_fu_32960_p1.read();
        trunc_ln311_22_reg_34002 = trunc_ln311_22_fu_33008_p1.read();
        trunc_ln315_22_reg_34019 = trunc_ln315_22_fu_33056_p1.read();
        trunc_ln317_22_reg_34029 = trunc_ln317_22_fu_33076_p1.read();
        trunc_ln319_22_reg_34039 = trunc_ln319_22_fu_33096_p1.read();
        xor_ln258_23_reg_33846 = xor_ln258_23_fu_32638_p2.read();
        xor_ln259_23_reg_33851 = xor_ln259_23_fu_32656_p2.read();
        xor_ln260_23_reg_33856 = xor_ln260_23_fu_32674_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        xor_ln273_23_reg_34049 = xor_ln273_23_fu_33165_p2.read();
        xor_ln274_23_reg_34054 = xor_ln274_23_fu_33182_p2.read();
        xor_ln275_23_reg_34059 = xor_ln275_23_fu_33199_p2.read();
        xor_ln276_23_reg_34064 = xor_ln276_23_fu_33217_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        xor_ln290_23_reg_34069 = xor_ln290_23_fu_33295_p2.read();
        xor_ln291_23_reg_34074 = xor_ln291_23_fu_33312_p2.read();
        xor_ln292_23_reg_34079 = xor_ln292_23_fu_33330_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        xor_ln305_23_reg_34084 = xor_ln305_23_fu_33390_p2.read();
        xor_ln306_23_reg_34089 = xor_ln306_23_fu_33407_p2.read();
        xor_ln307_23_reg_34094 = xor_ln307_23_fu_33424_p2.read();
        xor_ln308_23_reg_34099 = xor_ln308_23_fu_33442_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        xor_ln322_23_reg_34104 = xor_ln322_23_fu_33519_p2.read();
        xor_ln323_23_reg_34109 = xor_ln323_23_fu_33537_p2.read();
        xor_ln324_23_reg_34114 = xor_ln324_23_fu_33554_p2.read();
    }
}

void KeccakF1600_StatePer::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<26>) ("XXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

