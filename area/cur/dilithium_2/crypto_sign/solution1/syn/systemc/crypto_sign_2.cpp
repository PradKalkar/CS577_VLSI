#include "crypto_sign.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void crypto_sign::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(grp_rej_uniform_fu_2121_ap_done.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
            buflen_0_i_reg_1449 = zext_ln384_reg_5559.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
            buflen_0_i_reg_1449 = ap_const_lv9_148;
        }
    }
    if (esl_seteq<1,1,1>(grp_rej_uniform_fu_2121_ap_done.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
            ctr_0_i_reg_1439 = ctr_2_fu_3514_p2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
            ctr_0_i_reg_1439 = grp_rej_uniform_fu_2121_ap_return.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_KeccakF1600_StatePer_1_fu_2038_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln410_fu_2444_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln410_1_fu_3966_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln401_fu_2338_p2.read())) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln401_1_fu_3924_p2.read())) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()))) {
            grp_KeccakF1600_StatePer_1_fu_2038_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_KeccakF1600_StatePer_1_fu_2038_ap_ready.read())) {
            grp_KeccakF1600_StatePer_1_fu_2038_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_KeccakF1600_StatePer_fu_2045_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
            grp_KeccakF1600_StatePer_fu_2045_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_KeccakF1600_StatePer_fu_2045_ap_ready.read())) {
            grp_KeccakF1600_StatePer_fu_2045_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dilithium_shake128_s_fu_2062_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_fu_3381_p2.read()))) {
            grp_dilithium_shake128_s_fu_2062_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dilithium_shake128_s_fu_2062_ap_ready.read())) {
            grp_dilithium_shake128_s_fu_2062_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_invntt_tomont_fu_2076_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln107_fu_4558_p2.read()))) {
            grp_invntt_tomont_fu_2076_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_invntt_tomont_fu_2076_ap_ready.read())) {
            grp_invntt_tomont_fu_2076_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_load64_2_fu_2159_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_fu_2277_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_2_fu_3060_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_3_fu_3889_p2.read())))) {
            grp_load64_2_fu_2159_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_load64_2_fu_2159_ap_ready.read())) {
            grp_load64_2_fu_2159_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_load64_3_fu_2152_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_fu_2338_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_fu_2444_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_1_fu_2497_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_1_fu_3924_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_1_fu_3966_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_4_fu_4247_p2.read())))) {
            grp_load64_3_fu_2152_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_load64_3_fu_2152_ap_ready.read())) {
            grp_load64_3_fu_2152_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_ntt_1_fu_2100_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln100_fu_3520_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln282_fu_3532_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln282_1_fu_3544_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln100_1_fu_3690_p2.read())))) {
            grp_ntt_1_fu_2100_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_ntt_1_fu_2100_ap_ready.read())) {
            grp_ntt_1_fu_2100_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_ntt_fu_2093_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln531_fu_4363_p2.read()))) {
            grp_ntt_fu_2093_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_ntt_fu_2093_ap_ready.read())) {
            grp_ntt_fu_2093_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_pack_sig_fu_2085_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6095.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6156.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6160.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln392_fu_4908_p2.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln173_fu_4932_p2.read()))) {
            grp_pack_sig_fu_2085_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_pack_sig_fu_2085_ap_ready.read())) {
            grp_pack_sig_fu_2085_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_poly_uniform_gamma1_fu_2006_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_3568_p2.read()))) {
            grp_poly_uniform_gamma1_fu_2006_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_poly_uniform_gamma1_fu_2006_ap_ready.read())) {
            grp_poly_uniform_gamma1_fu_2006_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyveck_caddq_fu_2173_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln234_fu_4850_p2.read())))) {
            grp_polyveck_caddq_fu_2173_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyveck_caddq_fu_2173_ap_ready.read())) {
            grp_polyveck_caddq_fu_2173_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyveck_chknorm_fu_2165_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()))) {
            grp_polyveck_chknorm_fu_2165_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyveck_chknorm_fu_2165_ap_ready.read())) {
            grp_polyveck_chknorm_fu_2165_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyveck_invntt_tomo_fu_2069_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()))) {
            grp_polyveck_invntt_tomo_fu_2069_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyveck_invntt_tomo_fu_2069_ap_ready.read())) {
            grp_polyveck_invntt_tomo_fu_2069_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyveck_pack_w1_fu_2138_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln371_fu_3714_p2.read()))) {
            grp_polyveck_pack_w1_fu_2138_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyveck_pack_w1_fu_2138_ap_ready.read())) {
            grp_polyveck_pack_w1_fu_2138_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyveck_pointwise_p_fu_2145_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_fu_4702_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && 
              esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, grp_polyveck_chknorm_fu_2165_ap_return.read())))) {
            grp_polyveck_pointwise_p_fu_2145_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyveck_pointwise_p_fu_2145_ap_ready.read())) {
            grp_polyveck_pointwise_p_fu_2145_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyveck_reduce_fu_2178_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln28_fu_3702_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln252_fu_4792_p2.read())) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()))) {
            grp_polyveck_reduce_fu_2178_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyveck_reduce_fu_2178_ap_ready.read())) {
            grp_polyveck_reduce_fu_2178_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_polyvecl_pointwise_a_fu_2112_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_fu_3702_p2.read()))) {
            grp_polyvecl_pointwise_a_fu_2112_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_polyvecl_pointwise_a_fu_2112_ap_ready.read())) {
            grp_polyvecl_pointwise_a_fu_2112_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_rej_uniform_fu_2121_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
            grp_rej_uniform_fu_2121_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_rej_uniform_fu_2121_ap_ready.read())) {
            grp_rej_uniform_fu_2121_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_shake128_squeezebloc_fu_2017_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln380_fu_3459_p2.read())))) {
            grp_shake128_squeezebloc_fu_2017_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_shake128_squeezebloc_fu_2017_ap_ready.read())) {
            grp_shake128_squeezebloc_fu_2017_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_shake256_squeezebloc_1_fu_2030_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln533_fu_4369_p2.read())))) {
            grp_shake256_squeezebloc_1_fu_2030_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_shake256_squeezebloc_1_fu_2030_ap_ready.read())) {
            grp_shake256_squeezebloc_1_fu_2030_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_unpack_sk_fu_2052_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
             esl_seteq<1,1,1>(icmp_ln207_fu_2225_p2.read(), ap_const_lv1_1))) {
            grp_unpack_sk_fu_2052_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_unpack_sk_fu_2052_ap_ready.read())) {
            grp_unpack_sk_fu_2052_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln108_fu_4816_p2.read()))) {
        i_0_i102_reg_1916 = i_96_reg_6128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) && 
                esl_seteq<1,1,1>(grp_polyveck_invntt_tomo_fu_2069_ap_done.read(), ap_const_logic_1))) {
        i_0_i102_reg_1916 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, grp_polyveck_chknorm_fu_2165_ap_return.read()))) {
        i_0_i110_reg_1938 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln87_1_fu_4874_p2.read()))) {
        i_0_i110_reg_1938 = i_99_reg_6167.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        i_0_i177_i_reg_1723 = i_85_reg_5930.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) && 
                esl_seteq<1,1,1>(grp_shake256_squeezebloc_1_fu_2030_ap_done.read(), ap_const_logic_1))) {
        i_0_i177_i_reg_1723 = ap_const_lv4_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        i_0_i56_reg_1461 = i_75_reg_5549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        i_0_i56_reg_1461 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_fu_3369_p2.read()))) {
        i_0_i58_reg_1473 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
                esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1))) {
        i_0_i58_reg_1473 = i_72_reg_5582.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln100_fu_3520_p2.read()))) {
        i_0_i60_reg_1485 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()))) {
        i_0_i60_reg_1485 = i_73_reg_5590.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln282_fu_3532_p2.read()))) {
        i_0_i62_reg_1497 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()))) {
        i_0_i62_reg_1497 = i_74_reg_5598.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) && 
         esl_seteq<1,1,1>(grp_poly_uniform_gamma1_fu_2006_ap_done.read(), ap_const_logic_1))) {
        i_0_i67_reg_1520 = i_76_reg_5634.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        i_0_i67_reg_1520 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_3_reg_5716.read()))) {
        i_0_i69_reg_1576 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()))) {
        i_0_i69_reg_1576 = i_77_reg_5723.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln100_1_fu_3690_p2.read()))) {
        i_0_i74_reg_1588 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) && 
                esl_seteq<1,1,1>(grp_polyvecl_pointwise_a_fu_2112_ap_done.read(), ap_const_logic_1))) {
        i_0_i74_reg_1588 = i_78_reg_5731.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln226_fu_3738_p2.read()))) {
        i_0_i76_reg_1600 = i_79_reg_5739.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) && 
                esl_seteq<1,1,1>(grp_polyveck_caddq_fu_2173_ap_done.read(), ap_const_logic_1))) {
        i_0_i76_reg_1600 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln181_fu_4472_p2.read()))) {
        i_0_i79_reg_1816 = i_87_reg_5997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) && 
                esl_seteq<1,1,1>(grp_ntt_fu_2093_ap_done.read(), ap_const_logic_1))) {
        i_0_i79_reg_1816 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_fu_4632_p2.read()))) {
        i_0_i83_reg_1894 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln299_fu_4726_p2.read()))) {
        i_0_i83_reg_1894 = i_94_reg_6099.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln114_fu_4448_p2.read()))) {
        i_0_i85_reg_1838 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) && 
                esl_seteq<1,1,1>(grp_invntt_tomont_fu_2076_ap_done.read(), ap_const_logic_1))) {
        i_0_i85_reg_1838 = i_89_reg_6033.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln249_fu_4944_p2.read()))) {
        i_0_i86_reg_1960 = i_101_reg_6198.read();
    } else if ((esl_seteq<1,1,1>(grp_polyveck_caddq_fu_2173_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()))) {
        i_0_i86_reg_1960 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln107_fu_4558_p2.read()))) {
        i_0_i87_reg_1850 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln87_fu_4594_p2.read()))) {
        i_0_i87_reg_1850 = i_91_reg_6041.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln85_fu_4570_p2.read()))) {
        i_0_i95_reg_1872 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_fu_4656_p2.read()))) {
        i_0_i95_reg_1872 = i_92_reg_6072.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        i_0_i_i103_reg_1927 = i_98_reg_6141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_fu_4792_p2.read()))) {
        i_0_i_i103_reg_1927 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read())) {
        i_0_i_i111_reg_1949 = i_100_reg_6180.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln234_fu_4850_p2.read()))) {
        i_0_i_i111_reg_1949 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_fu_2255_p2.read()))) {
        i_0_i_i4_i_reg_1189 = i_33_fu_2261_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(grp_unpack_sk_fu_2052_ap_done.read(), ap_const_logic_1))) {
        i_0_i_i4_i_reg_1189 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        i_0_i_i77_reg_1611 = i_81_reg_5752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_fu_3714_p2.read()))) {
        i_0_i_i77_reg_1611 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        i_0_i_i80_reg_1827 = i_90_reg_6010.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln114_fu_4448_p2.read()))) {
        i_0_i_i80_reg_1827 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln304_fu_4786_p2.read()))) {
        i_0_i_i84_reg_1905 = i_97_reg_6112.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln158_fu_4702_p2.read()))) {
        i_0_i_i84_reg_1905 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        i_0_i_i87_reg_1983 = i_102_reg_6214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6095.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6156.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6160.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln392_fu_4908_p2.read()))) {
        i_0_i_i87_reg_1983 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        i_0_i_i88_reg_1861 = i_93_reg_6054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln85_fu_4570_p2.read()))) {
        i_0_i_i88_reg_1861 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        i_0_i_i96_reg_1883 = i_95_reg_6085.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_4632_p2.read()))) {
        i_0_i_i96_reg_1883 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln542_2_fu_4050_p2.read()))) {
        i_0_i_i_i136_i_reg_1701 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_3_fu_4225_p2.read()))) {
        i_0_i_i_i136_i_reg_1701 = i_84_fu_4231_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln542_fu_2786_p2.read()))) {
        i_0_i_i_i_i_reg_1381 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_1_fu_3038_p2.read()))) {
        i_0_i_i_i_i_reg_1381 = i_39_fu_3044_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_2_fu_3867_p2.read()))) {
        i_0_i_i_i_reg_1622 = i_80_fu_3873_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) && 
                esl_seteq<1,1,1>(grp_polyveck_pack_w1_fu_2138_ap_done.read(), ap_const_logic_1))) {
        i_0_i_i_i_reg_1622 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln542_1_fu_3117_p2.read()))) {
        i_0_i_i_reg_1415 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln21_fu_3381_p2.read()))) {
        i_0_i_i_reg_1415 = i_41_reg_5499.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln426_fu_2623_p2.read()))) {
        i_0_i_reg_1335 = ap_const_lv4_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        i_0_i_reg_1335 = i_38_reg_5310.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_0_reg_1178 = i_reg_5094.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_1178 = ap_const_lv64_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_fu_2329_p2.read()))) {
        i_1_i_i65_i_reg_1222 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
                esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1))) {
        i_1_i_i65_i_reg_1222 = i_34_reg_5150.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_3_fu_3889_p2.read()))) {
        i_1_i_i_i_reg_1644 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()))) {
        i_1_i_i_i_reg_1644 = i_82_reg_5796.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln525_fu_4297_p2.read()))) {
        i_1_i_i_reg_1747 = ap_const_lv9_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln529_fu_4346_p2.read()))) {
        i_1_i_i_reg_1747 = i_86_fu_4352_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln409_fu_2406_p2.read()))) {
        i_2_i_i73_i_reg_1291 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        i_2_i_i73_i_reg_1291 = i_35_reg_5203.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln409_1_fu_3960_p2.read()))) {
        i_2_i_i_i_reg_1679 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()))) {
        i_2_i_i_i_reg_1679 = i_83_reg_5817.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln529_fu_4346_p2.read()))) {
        i_2_i_i_reg_1758 = ap_const_lv9_D9;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        i_2_i_i_reg_1758 = i_88_reg_5989.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_fu_2255_p2.read()))) {
        i_3_i_i119_i_reg_1200 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(grp_load64_2_fu_2159_ap_done.read(), ap_const_logic_1))) {
        i_3_i_i119_i_reg_1200 = add_ln417_reg_5120.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        i_3_i_i1_reg_1403 = add_ln542_1_reg_5446.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
                esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_fu_2045_ap_done.read(), ap_const_logic_1))) {
        i_3_i_i1_reg_1403 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_2_fu_3867_p2.read()))) {
        i_3_i_i37_i_reg_1633 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(grp_load64_2_fu_2159_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        i_3_i_i37_i_reg_1633 = add_ln417_3_reg_5778.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        i_3_i_i45_reg_1690 = add_ln542_2_reg_5845.read();
    } else if ((esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        i_3_i_i45_reg_1690 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        i_3_i_i78_i_reg_1302 = add_ln417_1_reg_5231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln409_fu_2406_p2.read()))) {
        i_3_i_i78_i_reg_1302 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_3_fu_4225_p2.read()))) {
        i_3_i_i_i166_i_reg_1712 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        i_3_i_i_i166_i_reg_1712 = add_ln417_4_reg_5911.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_1_fu_3038_p2.read()))) {
        i_3_i_i_i_i_reg_1392 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(grp_load64_2_fu_2159_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        i_3_i_i_i_i_reg_1392 = add_ln417_2_reg_5415.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        i_3_i_i_reg_1369 = add_ln542_reg_5354.read();
    } else if ((esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        i_3_i_i_reg_1369 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_1_fu_2497_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln423_fu_2584_p2.read()))) {
        i_4_i_i80_i_reg_1313 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln424_fu_2590_p2.read()))) {
        i_4_i_i80_i_reg_1313 = i_36_fu_2596_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln424_fu_2590_p2.read()))) {
        i_5_i_i84_i_reg_1324 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        i_5_i_i84_i_reg_1324 = i_37_reg_5297.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
        indvars_iv_i_i71_i_reg_1268 = ap_phi_mux_p_2_i_i69_i_phi_fu_1261_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1))) {
        indvars_iv_i_i71_i_reg_1268 = add_ln415_1_reg_5223.read();
    }
    if (esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
            indvars_iv_i_i_i_reg_1655 = ap_const_lv10_2A8;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
            indvars_iv_i_i_i_reg_1655 = add_ln415_reg_5837.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_fu_3369_p2.read()))) {
        j_0_i_i_reg_1427 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln378_fu_3426_p2.read()))) {
        j_0_i_i_reg_1427 = j_reg_5507.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln249_fu_4944_p2.read()))) {
        n_reg_1971 = s_fu_4975_p2.read();
    } else if ((esl_seteq<1,1,1>(grp_polyveck_caddq_fu_2173_ap_done.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()))) {
        n_reg_1971 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln282_1_fu_3544_p2.read()))) {
        nonce_assign_1_reg_1509 = ap_const_lv16_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && 
                ((((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln392_fu_4908_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln173_fu_4932_p2.read())) || 
                   esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_reg_6160.read())) || 
                  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_6156.read())) || 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln158_reg_6095.read())))) {
        nonce_assign_1_reg_1509 = nonce_reg_5621.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln400_fu_2329_p2.read(), ap_const_lv1_1))) {
        p_23_i_i68_i_reg_1245 = ap_const_lv5_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5143.read()) && 
                esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
        p_23_i_i68_i_reg_1245 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln400_fu_2329_p2.read(), ap_const_lv1_1))) {
        p_2_i_i69_i_reg_1258 = mlen.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5143.read()) && 
                esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
        p_2_i_i69_i_reg_1258 = add_ln404_fu_2384_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
        p_38_rec_i_i72_i_reg_1279 = ap_const_lv64_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1))) {
        p_38_rec_i_i72_i_reg_1279 = add_ln412_reg_5218.read();
    }
    if (esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
            p_38_rec_i_i_i_reg_1667 = ap_const_lv10_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
            p_38_rec_i_i_i_reg_1667 = add_ln412_1_reg_5832.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_reg_5659.read()))) {
        phi_ln125_1_reg_1543 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln125_1_reg_5678.read()))) {
        phi_ln125_1_reg_1543 = add_ln125_1_reg_5663.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_1_reg_5678.read()))) {
        phi_ln125_2_reg_1554 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln125_2_reg_5697.read()))) {
        phi_ln125_2_reg_1554 = add_ln125_2_reg_5682.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_2_reg_5697.read()))) {
        phi_ln125_3_reg_1565 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln125_3_reg_5716.read()))) {
        phi_ln125_3_reg_1565 = add_ln125_3_reg_5701.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln46_fu_3568_p2.read()))) {
        phi_ln125_reg_1532 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln125_reg_5659.read()))) {
        phi_ln125_reg_1532 = add_ln125_reg_5644.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(icmp_ln417_fu_2277_p2.read(), ap_const_lv1_1))) {
        phi_ln388_reg_1211 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln388_fu_2323_p2.read()))) {
        phi_ln388_reg_1211 = add_ln388_fu_2312_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln400_fu_2329_p2.read(), ap_const_lv1_1))) {
        phi_ln403_reg_1233 = ap_const_lv12_974;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5143.read()) && 
                esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
        phi_ln403_reg_1233 = ap_const_lv12_9CC;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln529_fu_4346_p2.read()))) {
        pos_0_i_i_reg_1770 = ap_const_lv32_8;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        pos_0_i_i_reg_1770 = pos_reg_5960.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln531_fu_4363_p2.read()))) {
        pos_1_i_i_reg_1793 = pos_0_i_i_reg_1770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln539_fu_4390_p2.read()))) {
        pos_1_i_i_reg_1793 = pos_reg_5960.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln533_fu_4369_p2.read()))) {
        pos_2_i_i_reg_1804 = pos_1_i_i_reg_1793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln533_reg_5956.read()) && 
                esl_seteq<1,1,1>(ap_block_state130_on_subcall_done.read(), ap_const_boolean_0))) {
        pos_2_i_i_reg_1804 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln426_fu_2623_p2.read()))) {
        r_0_i_reg_1347 = ap_const_lv64_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        r_0_i_reg_1347 = r_fu_2709_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        s_0_i_i_reg_1994 = s_1_fu_5038_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6095.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6156.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6160.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln392_fu_4908_p2.read()))) {
        s_0_i_i_reg_1994 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        signs_0_i_i_reg_1735 = signs_fu_4340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) && 
                esl_seteq<1,1,1>(grp_shake256_squeezebloc_1_fu_2030_ap_done.read(), ap_const_logic_1))) {
        signs_0_i_i_reg_1735 = ap_const_lv64_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln529_fu_4346_p2.read()))) {
        signs_1_i_i_reg_1782 = signs_0_i_i_reg_1735.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        signs_1_i_i_reg_1782 = signs_2_reg_5984.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_1_fu_2497_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln423_fu_2584_p2.read()))) {
        state_pos_reg_1359 = zext_ln421_fu_2580_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln423_reg_5272.read()))) {
        state_pos_reg_1359 = add_ln429_fu_2722_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        add_ln125_1_reg_5663 = add_ln125_1_fu_3612_p2.read();
        icmp_ln125_1_reg_5678 = icmp_ln125_1_fu_3627_p2.read();
        tmp_31_reg_5668 = tmp_31_fu_3618_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        add_ln125_2_reg_5682 = add_ln125_2_fu_3638_p2.read();
        icmp_ln125_2_reg_5697 = icmp_ln125_2_fu_3653_p2.read();
        tmp_32_reg_5687 = tmp_32_fu_3644_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        add_ln125_3_reg_5701 = add_ln125_3_fu_3664_p2.read();
        icmp_ln125_3_reg_5716 = icmp_ln125_3_fu_3679_p2.read();
        tmp_33_reg_5706 = tmp_33_fu_3670_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        add_ln125_reg_5644 = add_ln125_fu_3590_p2.read();
        icmp_ln125_reg_5659 = icmp_ln125_fu_3601_p2.read();
        zext_ln125_reg_5649 = zext_ln125_fu_3596_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln208_1_reg_5086 = add_ln208_1_fu_2211_p2.read();
        add_ln208_reg_5081 = add_ln208_fu_2201_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_fu_2444_p2.read()))) {
        add_ln411_reg_5208 = add_ln411_fu_2474_p2.read();
        state_s_2_addr_4_reg_5213 =  (sc_lv<5>) (zext_ln411_1_fu_2480_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln410_1_fu_3966_p2.read()))) {
        add_ln412_1_reg_5832 = add_ln412_1_fu_4012_p2.read();
        add_ln415_reg_5837 = add_ln415_fu_4018_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln410_fu_2444_p2.read()))) {
        add_ln412_reg_5218 = add_ln412_fu_2485_p2.read();
        add_ln415_1_reg_5223 = add_ln415_1_fu_2491_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        add_ln417_1_reg_5231 = add_ln417_1_fu_2502_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        add_ln417_2_reg_5415 = add_ln417_2_fu_3066_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        add_ln417_3_reg_5778 = add_ln417_3_fu_3895_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        add_ln417_4_reg_5911 = add_ln417_4_fu_4253_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        add_ln417_reg_5120 = add_ln417_fu_2283_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_1_fu_2497_p2.read()))) {
        add_ln418_2_reg_5236 = add_ln418_2_fu_2530_p2.read();
        state_s_2_addr_3_reg_5241 =  (sc_lv<5>) (zext_ln418_4_fu_2541_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_2_fu_3060_p2.read()))) {
        add_ln418_4_reg_5420 = add_ln418_4_fu_3084_p2.read();
        state_0_s_addr_3_reg_5425 =  (sc_lv<5>) (zext_ln417_1_fu_3055_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_3_fu_3889_p2.read()))) {
        add_ln418_5_reg_5783 = add_ln418_5_fu_3913_p2.read();
        state_s_2_addr_11_reg_5788 =  (sc_lv<5>) (zext_ln417_2_fu_3884_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_1_fu_2497_p2.read()))) {
        add_ln421_reg_5261 = add_ln421_fu_2575_p2.read();
        icmp_ln423_reg_5272 = icmp_ln423_fu_2584_p2.read();
        sub_ln420_reg_5251 = sub_ln420_fu_2565_p2.read();
        trunc_ln420_reg_5256 = trunc_ln420_fu_2571_p1.read();
        zext_ln420_reg_5246 = zext_ln420_fu_2561_p1.read();
        zext_ln421_reg_5266 = zext_ln421_fu_2580_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln424_fu_2590_p2.read()))) {
        add_ln427_reg_5284 = add_ln427_fu_2607_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_3568_p2.read()))) {
        add_ln47_reg_5639 = add_ln47_fu_3584_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        add_ln542_1_reg_5446 = add_ln542_1_fu_3123_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        add_ln542_2_reg_5845 = add_ln542_2_fu_4056_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        add_ln542_reg_5354 = add_ln542_fu_2792_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln539_fu_4390_p2.read()))) {
        cp_coeffs_addr_1_reg_5974 =  (sc_lv<8>) (zext_ln541_fu_4396_p1.read());
        signs_2_reg_5984 = signs_2_fu_4415_p1.read();
        trunc_ln542_reg_5979 = trunc_ln542_fu_4401_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        i_100_reg_6180 = i_100_fu_4880_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6095.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6156.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6160.read()))) {
        i_101_reg_6198 = i_101_fu_4914_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        i_102_reg_6214 = i_102_fu_4950_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        i_34_reg_5150 = i_34_fu_2344_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        i_35_reg_5203 = i_35_fu_2450_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        i_37_reg_5297 = i_37_fu_2628_p2.read();
        zext_ln426_reg_5289 = zext_ln426_fu_2611_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        i_38_reg_5310 = i_38_fu_2655_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        i_41_reg_5499 = i_41_fu_3375_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        i_72_reg_5582 = i_72_fu_3526_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        i_73_reg_5590 = i_73_fu_3538_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        i_74_reg_5598 = i_74_fu_3550_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        i_75_reg_5549 = i_75_fu_3464_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        i_76_reg_5634 = i_76_fu_3574_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        i_77_reg_5723 = i_77_fu_3696_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        i_78_reg_5731 = i_78_fu_3708_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        i_79_reg_5739 = i_79_fu_3720_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        i_81_reg_5752 = i_81_fu_3744_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        i_82_reg_5796 = i_82_fu_3930_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        i_83_reg_5817 = i_83_fu_3972_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        i_85_reg_5930 = i_85_fu_4303_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        i_87_reg_5997 = i_87_fu_4454_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        i_88_reg_5989 = i_88_fu_4424_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        i_89_reg_6033 = i_89_fu_4564_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        i_90_reg_6010 = i_90_fu_4478_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        i_91_reg_6041 = i_91_fu_4576_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        i_92_reg_6072 = i_92_fu_4638_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        i_93_reg_6054 = i_93_fu_4600_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        i_94_reg_6099 = i_94_fu_4708_p2.read();
        icmp_ln158_reg_6095 = icmp_ln158_fu_4702_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read())) {
        i_95_reg_6085 = i_95_fu_4662_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        i_96_reg_6128 = i_96_fu_4798_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        i_97_reg_6112 = i_97_fu_4732_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        i_98_reg_6141 = i_98_fu_4822_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        i_99_reg_6167 = i_99_fu_4856_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_5094 = i_fu_2230_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1))) {
        icmp_ln400_reg_5143 = icmp_ln400_fu_2329_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        icmp_ln533_reg_5956 = icmp_ln533_fu_4369_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        j_reg_5507 = j_fu_3387_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_fu_3381_p2.read()))) {
        nonce_assign_reg_5512 = nonce_assign_fu_3397_p4.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        nonce_reg_5621 = nonce_fu_3556_p2.read();
        shl_ln47_reg_5626 = shl_ln47_fu_3562_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        pos_reg_5960 = pos_fu_4375_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        shl_ln18_reg_5364 = shl_ln18_fu_2803_p3.read();
        trunc_ln10_reg_5399 = state_s_2_q0.read().range(63, 56);
        trunc_ln5_reg_5374 = state_s_2_q0.read().range(23, 16);
        trunc_ln6_reg_5379 = state_s_2_q0.read().range(31, 24);
        trunc_ln7_reg_5384 = state_s_2_q0.read().range(39, 32);
        trunc_ln8_reg_5389 = state_s_2_q0.read().range(47, 40);
        trunc_ln9_reg_5394 = state_s_2_q0.read().range(55, 48);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        shl_ln543_1_reg_5456 = shl_ln543_1_fu_3134_p3.read();
        trunc_ln545_1_reg_5466 = state_0_s_q1.read().range(23, 16);
        trunc_ln546_1_reg_5471 = state_0_s_q1.read().range(31, 24);
        trunc_ln547_1_reg_5476 = state_0_s_q1.read().range(39, 32);
        trunc_ln548_1_reg_5481 = state_0_s_q1.read().range(47, 40);
        trunc_ln549_1_reg_5486 = state_0_s_q1.read().range(55, 48);
        trunc_ln550_1_reg_5491 = state_0_s_q1.read().range(63, 56);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        shl_ln543_2_reg_5860 = shl_ln543_2_fu_4071_p3.read();
        trunc_ln545_2_reg_5870 = state_s_2_q1.read().range(23, 16);
        trunc_ln546_2_reg_5875 = state_s_2_q1.read().range(31, 24);
        trunc_ln547_2_reg_5880 = state_s_2_q1.read().range(39, 32);
        trunc_ln548_2_reg_5885 = state_s_2_q1.read().range(47, 40);
        trunc_ln549_2_reg_5890 = state_s_2_q1.read().range(55, 48);
        trunc_ln550_2_reg_5895 = state_s_2_q1.read().range(63, 56);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_4_fu_4247_p2.read()))) {
        state_s_1_addr_3_reg_5921 =  (sc_lv<5>) (zext_ln417_3_fu_4242_p1.read());
        zext_ln418_7_reg_5916 = zext_ln418_7_fu_4271_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_1_fu_3924_p2.read()))) {
        state_s_2_addr_12_reg_5806 =  (sc_lv<5>) (zext_ln402_4_fu_3955_p1.read());
        zext_ln402_3_reg_5801 = zext_ln402_3_fu_3944_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_1_fu_3966_p2.read()))) {
        state_s_2_addr_14_reg_5827 =  (sc_lv<5>) (zext_ln411_4_fu_4007_p1.read());
        zext_ln411_3_reg_5822 = zext_ln411_3_fu_4002_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_fu_2277_p2.read()))) {
        state_s_2_addr_1_reg_5130 =  (sc_lv<5>) (zext_ln417_fu_2272_p1.read());
        zext_ln418_1_reg_5125 = zext_ln418_1_fu_2307_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_fu_2338_p2.read()))) {
        state_s_2_addr_2_reg_5160 =  (sc_lv<5>) (zext_ln402_2_fu_2379_p1.read());
        zext_ln402_1_reg_5155 = zext_ln402_1_fu_2368_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln30_fu_2649_p2.read()))) {
        state_s_2_addr_5_reg_5320 =  (sc_lv<5>) (zext_ln428_fu_2675_p1.read());
        trunc_ln429_reg_5325 = trunc_ln429_fu_2680_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        state_s_2_addr_6_reg_5340 =  (sc_lv<5>) (zext_ln451_1_fu_2740_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln207_fu_2225_p2.read(), ap_const_lv1_0))) {
        sub_ln208_1_reg_5104 = sub_ln208_1_fu_2246_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        sub_ln381_reg_5541 = sub_ln381_fu_3450_p2.read();
        trunc_ln379_1_reg_5535 = trunc_ln379_1_fu_3442_p1.read();
        trunc_ln379_reg_5530 = trunc_ln379_fu_3438_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        sub_ln385_reg_5564 = sub_ln385_fu_3502_p2.read();
        zext_ln384_reg_5559 = zext_ln384_fu_3494_p1.read();
        zext_ln385_reg_5569 = zext_ln385_fu_3509_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1))) {
        tmp_11_reg_6156 = grp_polyveck_chknorm_fu_2165_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        tmp_12_reg_6160 = grp_polyveck_chknorm_fu_2165_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln409_fu_2406_p2.read()))) {
        tmp_30_reg_5194 = indvars_iv_i_i71_i_reg_1268.read().range(7, 3);
        trunc_ln409_reg_5184 = trunc_ln409_fu_2412_p1.read();
        zext_ln418_2_reg_5189 = zext_ln418_2_fu_2430_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln542_2_fu_4050_p2.read()))) {
        trunc_ln543_3_reg_5855 = trunc_ln543_3_fu_4062_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_fu_4816_p2.read()))) {
        w0_vec_coeffs_addr_1_reg_6146 =  (sc_lv<10>) (zext_ln109_1_fu_4837_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln87_1_fu_4874_p2.read()))) {
        w0_vec_coeffs_addr_2_reg_6185 =  (sc_lv<10>) (zext_ln88_6_fu_4895_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln226_fu_3738_p2.read()))) {
        w1_vec_coeffs_addr_reg_5762 =  (sc_lv<10>) (zext_ln227_1_fu_3759_p1.read());
        zext_ln227_1_reg_5757 = zext_ln227_1_fu_3759_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln87_fu_4594_p2.read()))) {
        z_vec_coeffs_addr_5_reg_6064 =  (sc_lv<10>) (zext_ln88_4_fu_4615_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_4656_p2.read()))) {
        z_vec_coeffs_addr_6_reg_6090 =  (sc_lv<10>) (zext_ln33_2_fu_4677_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_fu_4792_p2.read()))) {
        zext_ln104_reg_6133 = zext_ln104_fu_4812_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln114_fu_4448_p2.read()))) {
        zext_ln177_reg_6002 = zext_ln177_fu_4468_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln181_fu_4472_p2.read()))) {
        zext_ln182_17_reg_6015 = zext_ln182_17_fu_4498_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_fu_3714_p2.read()))) {
        zext_ln222_reg_5744 = zext_ln222_fu_3734_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6095.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6156.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6160.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln392_fu_4908_p2.read()))) {
        zext_ln245_reg_6203 = zext_ln245_fu_4928_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln249_fu_4944_p2.read()))) {
        zext_ln250_1_reg_6219 = zext_ln250_1_fu_4965_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln158_fu_4702_p2.read()))) {
        zext_ln288_reg_6104 = zext_ln288_fu_4722_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_4632_p2.read()))) {
        zext_ln28_reg_6077 = zext_ln28_fu_4652_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        zext_ln378_reg_5522 = zext_ln378_fu_3412_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
        zext_ln409_1_reg_5170 = zext_ln409_1_fu_2398_p1.read();
        zext_ln409_2_reg_5176 = zext_ln409_2_fu_2402_p1.read();
        zext_ln409_reg_5165 = zext_ln409_fu_2394_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln234_fu_4850_p2.read()))) {
        zext_ln83_1_reg_6172 = zext_ln83_1_fu_4870_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln85_fu_4570_p2.read()))) {
        zext_ln83_reg_6046 = zext_ln83_fu_4590_p1.read();
    }
}

void crypto_sign::thread_ap_NS_fsm() {
    if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state1))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state2;
        } else {
            ap_NS_fsm = ap_ST_fsm_state1;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state2))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln207_fu_2225_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state4;
        } else {
            ap_NS_fsm = ap_ST_fsm_state3;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state3))
    {
        ap_NS_fsm = ap_ST_fsm_state2;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state4))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(grp_unpack_sk_fu_2052_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state5;
        } else {
            ap_NS_fsm = ap_ST_fsm_state4;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state5))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_fu_2255_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state6;
        } else {
            ap_NS_fsm = ap_ST_fsm_state5;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state6))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(icmp_ln417_fu_2277_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state8;
        } else {
            ap_NS_fsm = ap_ST_fsm_state7;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state7))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(grp_load64_2_fu_2159_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state6;
        } else {
            ap_NS_fsm = ap_ST_fsm_state7;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state8))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_fu_2329_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state9;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(icmp_ln388_fu_2323_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(icmp_ln400_fu_2329_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state11;
        } else {
            ap_NS_fsm = ap_ST_fsm_state8;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state9))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln401_fu_2338_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state11;
        } else {
            ap_NS_fsm = ap_ST_fsm_state10;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state10))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state9;
        } else {
            ap_NS_fsm = ap_ST_fsm_state10;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state11))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_NS_fsm = ap_ST_fsm_state12;
        } else {
            ap_NS_fsm = ap_ST_fsm_state11;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state12))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln409_fu_2406_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state16;
        } else {
            ap_NS_fsm = ap_ST_fsm_state13;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state13))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln410_fu_2444_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state15;
        } else {
            ap_NS_fsm = ap_ST_fsm_state14;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state14))
    {
        if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
            ap_NS_fsm = ap_ST_fsm_state13;
        } else {
            ap_NS_fsm = ap_ST_fsm_state14;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state15))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state12;
        } else {
            ap_NS_fsm = ap_ST_fsm_state15;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state16))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_1_fu_2497_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln423_fu_2584_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state18;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_1_fu_2497_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln423_fu_2584_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state23;
        } else {
            ap_NS_fsm = ap_ST_fsm_state17;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state17))
    {
        if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
            ap_NS_fsm = ap_ST_fsm_state16;
        } else {
            ap_NS_fsm = ap_ST_fsm_state17;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state18))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln424_fu_2590_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state19;
        } else {
            ap_NS_fsm = ap_ST_fsm_state18;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state19))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln426_fu_2623_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state21;
        } else {
            ap_NS_fsm = ap_ST_fsm_state20;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state20))
    {
        ap_NS_fsm = ap_ST_fsm_state19;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state21))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln30_fu_2649_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state23;
        } else {
            ap_NS_fsm = ap_ST_fsm_state22;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state22))
    {
        ap_NS_fsm = ap_ST_fsm_state21;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state23))
    {
        ap_NS_fsm = ap_ST_fsm_state24;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state24))
    {
        ap_NS_fsm = ap_ST_fsm_state25;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state25))
    {
        ap_NS_fsm = ap_ST_fsm_state26;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state26))
    {
        ap_NS_fsm = ap_ST_fsm_state27;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state27))
    {
        ap_NS_fsm = ap_ST_fsm_state28;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state28))
    {
        ap_NS_fsm = ap_ST_fsm_state29;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state29))
    {
        if ((esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
            ap_NS_fsm = ap_ST_fsm_state30;
        } else {
            ap_NS_fsm = ap_ST_fsm_state29;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state30))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln542_fu_2786_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state35;
        } else {
            ap_NS_fsm = ap_ST_fsm_state31;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state31))
    {
        ap_NS_fsm = ap_ST_fsm_state32;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state32))
    {
        ap_NS_fsm = ap_ST_fsm_state33;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state33))
    {
        ap_NS_fsm = ap_ST_fsm_state34;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state34))
    {
        ap_NS_fsm = ap_ST_fsm_state30;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state35))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_1_fu_3038_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state36;
        } else {
            ap_NS_fsm = ap_ST_fsm_state35;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state36))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_2_fu_3060_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state38;
        } else {
            ap_NS_fsm = ap_ST_fsm_state37;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state37))
    {
        if ((esl_seteq<1,1,1>(grp_load64_2_fu_2159_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
            ap_NS_fsm = ap_ST_fsm_state36;
        } else {
            ap_NS_fsm = ap_ST_fsm_state37;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state38))
    {
        ap_NS_fsm = ap_ST_fsm_state39;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state39))
    {
        ap_NS_fsm = ap_ST_fsm_state40;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state40))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_fu_2045_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state41;
        } else {
            ap_NS_fsm = ap_ST_fsm_state40;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state41))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln542_1_fu_3117_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state46;
        } else {
            ap_NS_fsm = ap_ST_fsm_state42;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state42))
    {
        ap_NS_fsm = ap_ST_fsm_state43;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state43))
    {
        ap_NS_fsm = ap_ST_fsm_state44;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state44))
    {
        ap_NS_fsm = ap_ST_fsm_state45;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state45))
    {
        ap_NS_fsm = ap_ST_fsm_state41;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state46))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_fu_3369_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state71;
        } else {
            ap_NS_fsm = ap_ST_fsm_state47;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state47))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln21_fu_3381_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state46;
        } else {
            ap_NS_fsm = ap_ST_fsm_state48;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state48))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) && esl_seteq<1,1,1>(grp_dilithium_shake128_s_fu_2062_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state49;
        } else {
            ap_NS_fsm = ap_ST_fsm_state48;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state49))
    {
        ap_NS_fsm = ap_ST_fsm_state50;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state50))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && esl_seteq<1,1,1>(grp_shake128_squeezebloc_fu_2017_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state51;
        } else {
            ap_NS_fsm = ap_ST_fsm_state50;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state51))
    {
        ap_NS_fsm = ap_ST_fsm_state52;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state52))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) && esl_seteq<1,1,1>(grp_rej_uniform_fu_2121_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state53;
        } else {
            ap_NS_fsm = ap_ST_fsm_state52;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state53))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln378_fu_3426_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state47;
        } else {
            ap_NS_fsm = ap_ST_fsm_state54;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state54))
    {
        ap_NS_fsm = ap_ST_fsm_state55;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state55))
    {
        ap_NS_fsm = ap_ST_fsm_state56;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state56))
    {
        ap_NS_fsm = ap_ST_fsm_state57;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state57))
    {
        ap_NS_fsm = ap_ST_fsm_state58;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state58))
    {
        ap_NS_fsm = ap_ST_fsm_state59;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state59))
    {
        ap_NS_fsm = ap_ST_fsm_state60;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state60))
    {
        ap_NS_fsm = ap_ST_fsm_state61;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state61))
    {
        ap_NS_fsm = ap_ST_fsm_state62;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state62))
    {
        ap_NS_fsm = ap_ST_fsm_state63;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state63))
    {
        ap_NS_fsm = ap_ST_fsm_state64;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state64))
    {
        ap_NS_fsm = ap_ST_fsm_state65;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state65))
    {
        ap_NS_fsm = ap_ST_fsm_state66;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state66))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln380_fu_3459_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state68;
        } else {
            ap_NS_fsm = ap_ST_fsm_state67;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state67))
    {
        ap_NS_fsm = ap_ST_fsm_state66;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state68))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) && esl_seteq<1,1,1>(grp_shake128_squeezebloc_fu_2017_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state69;
        } else {
            ap_NS_fsm = ap_ST_fsm_state68;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state69))
    {
        ap_NS_fsm = ap_ST_fsm_state70;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state70))
    {
        if ((esl_seteq<1,1,1>(grp_rej_uniform_fu_2121_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
            ap_NS_fsm = ap_ST_fsm_state53;
        } else {
            ap_NS_fsm = ap_ST_fsm_state70;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state71))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln100_fu_3520_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state73;
        } else {
            ap_NS_fsm = ap_ST_fsm_state72;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state72))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state71;
        } else {
            ap_NS_fsm = ap_ST_fsm_state72;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state73))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln282_fu_3532_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state75;
        } else {
            ap_NS_fsm = ap_ST_fsm_state74;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state74))
    {
        if ((esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()))) {
            ap_NS_fsm = ap_ST_fsm_state73;
        } else {
            ap_NS_fsm = ap_ST_fsm_state74;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state75))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln282_1_fu_3544_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state77;
        } else {
            ap_NS_fsm = ap_ST_fsm_state76;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state76))
    {
        if ((esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()))) {
            ap_NS_fsm = ap_ST_fsm_state75;
        } else {
            ap_NS_fsm = ap_ST_fsm_state76;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state77))
    {
        ap_NS_fsm = ap_ST_fsm_state78;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state78))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln46_fu_3568_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state80;
        } else {
            ap_NS_fsm = ap_ST_fsm_state79;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state79))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) && esl_seteq<1,1,1>(grp_poly_uniform_gamma1_fu_2006_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state78;
        } else {
            ap_NS_fsm = ap_ST_fsm_state79;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state80))
    {
        ap_NS_fsm = ap_ST_fsm_state81;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state81))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_reg_5659.read()))) {
            ap_NS_fsm = ap_ST_fsm_state82;
        } else {
            ap_NS_fsm = ap_ST_fsm_state80;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state82))
    {
        ap_NS_fsm = ap_ST_fsm_state83;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state83))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_1_reg_5678.read()))) {
            ap_NS_fsm = ap_ST_fsm_state84;
        } else {
            ap_NS_fsm = ap_ST_fsm_state82;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state84))
    {
        ap_NS_fsm = ap_ST_fsm_state85;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state85))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_2_reg_5697.read()))) {
            ap_NS_fsm = ap_ST_fsm_state86;
        } else {
            ap_NS_fsm = ap_ST_fsm_state84;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state86))
    {
        ap_NS_fsm = ap_ST_fsm_state87;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state87))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln125_3_reg_5716.read()))) {
            ap_NS_fsm = ap_ST_fsm_state88;
        } else {
            ap_NS_fsm = ap_ST_fsm_state86;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state88))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln100_1_fu_3690_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state90;
        } else {
            ap_NS_fsm = ap_ST_fsm_state89;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state89))
    {
        if ((esl_seteq<1,1,1>(grp_ntt_1_fu_2100_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()))) {
            ap_NS_fsm = ap_ST_fsm_state88;
        } else {
            ap_NS_fsm = ap_ST_fsm_state89;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state90))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln28_fu_3702_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state92;
        } else {
            ap_NS_fsm = ap_ST_fsm_state91;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state91))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) && esl_seteq<1,1,1>(grp_polyvecl_pointwise_a_fu_2112_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state90;
        } else {
            ap_NS_fsm = ap_ST_fsm_state91;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state92))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && esl_seteq<1,1,1>(grp_polyveck_reduce_fu_2178_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state93;
        } else {
            ap_NS_fsm = ap_ST_fsm_state92;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state93))
    {
        ap_NS_fsm = ap_ST_fsm_state94;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state94))
    {
        if ((esl_seteq<1,1,1>(grp_polyveck_invntt_tomo_fu_2069_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()))) {
            ap_NS_fsm = ap_ST_fsm_state95;
        } else {
            ap_NS_fsm = ap_ST_fsm_state94;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state95))
    {
        ap_NS_fsm = ap_ST_fsm_state96;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state96))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) && esl_seteq<1,1,1>(grp_polyveck_caddq_fu_2173_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state97;
        } else {
            ap_NS_fsm = ap_ST_fsm_state96;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state97))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_fu_3714_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state98;
        } else {
            ap_NS_fsm = ap_ST_fsm_state100;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state98))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln226_fu_3738_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state97;
        } else {
            ap_NS_fsm = ap_ST_fsm_state99;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state99))
    {
        ap_NS_fsm = ap_ST_fsm_state98;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state100))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) && esl_seteq<1,1,1>(grp_polyveck_pack_w1_fu_2138_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state101;
        } else {
            ap_NS_fsm = ap_ST_fsm_state100;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state101))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_2_fu_3867_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state102;
        } else {
            ap_NS_fsm = ap_ST_fsm_state101;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state102))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_3_fu_3889_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state104;
        } else {
            ap_NS_fsm = ap_ST_fsm_state103;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state103))
    {
        if ((esl_seteq<1,1,1>(grp_load64_2_fu_2159_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
            ap_NS_fsm = ap_ST_fsm_state102;
        } else {
            ap_NS_fsm = ap_ST_fsm_state103;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state104))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln401_1_fu_3924_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state106;
        } else {
            ap_NS_fsm = ap_ST_fsm_state105;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state105))
    {
        if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()))) {
            ap_NS_fsm = ap_ST_fsm_state104;
        } else {
            ap_NS_fsm = ap_ST_fsm_state105;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state106))
    {
        if ((esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()))) {
            ap_NS_fsm = ap_ST_fsm_state107;
        } else {
            ap_NS_fsm = ap_ST_fsm_state106;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state107))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln409_1_fu_3960_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state108;
        } else {
            ap_NS_fsm = ap_ST_fsm_state111;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state108))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln410_1_fu_3966_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state110;
        } else {
            ap_NS_fsm = ap_ST_fsm_state109;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state109))
    {
        if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()))) {
            ap_NS_fsm = ap_ST_fsm_state108;
        } else {
            ap_NS_fsm = ap_ST_fsm_state109;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state110))
    {
        if ((esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()))) {
            ap_NS_fsm = ap_ST_fsm_state107;
        } else {
            ap_NS_fsm = ap_ST_fsm_state110;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state111))
    {
        ap_NS_fsm = ap_ST_fsm_state112;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state112))
    {
        ap_NS_fsm = ap_ST_fsm_state113;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state113))
    {
        if ((esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_1_fu_2038_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
            ap_NS_fsm = ap_ST_fsm_state114;
        } else {
            ap_NS_fsm = ap_ST_fsm_state113;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state114))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln542_2_fu_4050_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state119;
        } else {
            ap_NS_fsm = ap_ST_fsm_state115;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state115))
    {
        ap_NS_fsm = ap_ST_fsm_state116;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state116))
    {
        ap_NS_fsm = ap_ST_fsm_state117;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state117))
    {
        ap_NS_fsm = ap_ST_fsm_state118;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state118))
    {
        ap_NS_fsm = ap_ST_fsm_state114;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state119))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln362_3_fu_4225_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state120;
        } else {
            ap_NS_fsm = ap_ST_fsm_state119;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state120))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_4_fu_4247_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state122;
        } else {
            ap_NS_fsm = ap_ST_fsm_state121;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state121))
    {
        if ((esl_seteq<1,1,1>(grp_load64_3_fu_2152_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
            ap_NS_fsm = ap_ST_fsm_state120;
        } else {
            ap_NS_fsm = ap_ST_fsm_state121;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state122))
    {
        ap_NS_fsm = ap_ST_fsm_state123;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state123))
    {
        ap_NS_fsm = ap_ST_fsm_state124;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state124))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) && esl_seteq<1,1,1>(grp_shake256_squeezebloc_1_fu_2030_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state125;
        } else {
            ap_NS_fsm = ap_ST_fsm_state124;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state125))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln525_fu_4297_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state127;
        } else {
            ap_NS_fsm = ap_ST_fsm_state126;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state126))
    {
        ap_NS_fsm = ap_ST_fsm_state125;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state127))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln529_fu_4346_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state128;
        } else {
            ap_NS_fsm = ap_ST_fsm_state127;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state128))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln531_fu_4363_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state129;
        } else {
            ap_NS_fsm = ap_ST_fsm_state135;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state129))
    {
        ap_NS_fsm = ap_ST_fsm_state130;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state130))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) && esl_seteq<1,1,1>(ap_block_state130_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_NS_fsm = ap_ST_fsm_state131;
        } else {
            ap_NS_fsm = ap_ST_fsm_state130;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state131))
    {
        ap_NS_fsm = ap_ST_fsm_state132;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state132))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln539_fu_4390_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state133;
        } else {
            ap_NS_fsm = ap_ST_fsm_state129;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state133))
    {
        ap_NS_fsm = ap_ST_fsm_state134;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state134))
    {
        ap_NS_fsm = ap_ST_fsm_state128;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state135))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) && esl_seteq<1,1,1>(grp_ntt_fu_2093_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state136;
        } else {
            ap_NS_fsm = ap_ST_fsm_state135;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state136))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln114_fu_4448_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state139;
        } else {
            ap_NS_fsm = ap_ST_fsm_state137;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state137))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln181_fu_4472_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state136;
        } else {
            ap_NS_fsm = ap_ST_fsm_state138;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state138))
    {
        ap_NS_fsm = ap_ST_fsm_state137;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state139))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln107_fu_4558_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state141;
        } else {
            ap_NS_fsm = ap_ST_fsm_state140;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state140))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) && esl_seteq<1,1,1>(grp_invntt_tomont_fu_2076_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state139;
        } else {
            ap_NS_fsm = ap_ST_fsm_state140;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state141))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln85_fu_4570_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state144;
        } else {
            ap_NS_fsm = ap_ST_fsm_state142;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state142))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln87_fu_4594_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state141;
        } else {
            ap_NS_fsm = ap_ST_fsm_state143;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state143))
    {
        ap_NS_fsm = ap_ST_fsm_state142;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state144))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_fu_4632_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state147;
        } else {
            ap_NS_fsm = ap_ST_fsm_state145;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state145))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_fu_4656_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state144;
        } else {
            ap_NS_fsm = ap_ST_fsm_state146;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state146))
    {
        ap_NS_fsm = ap_ST_fsm_state145;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state147))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln158_fu_4702_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state148;
        } else {
            ap_NS_fsm = ap_ST_fsm_state150;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state148))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln299_fu_4726_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state147;
        } else {
            ap_NS_fsm = ap_ST_fsm_state149;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state149))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln304_fu_4786_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state170;
        } else {
            ap_NS_fsm = ap_ST_fsm_state148;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state150))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && esl_seteq<1,1,1>(grp_polyveck_pointwise_p_fu_2145_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state151;
        } else {
            ap_NS_fsm = ap_ST_fsm_state150;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state151))
    {
        ap_NS_fsm = ap_ST_fsm_state152;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state152))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) && esl_seteq<1,1,1>(grp_polyveck_invntt_tomo_fu_2069_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state153;
        } else {
            ap_NS_fsm = ap_ST_fsm_state152;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state153))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_fu_4792_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state154;
        } else {
            ap_NS_fsm = ap_ST_fsm_state156;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state154))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln108_fu_4816_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state153;
        } else {
            ap_NS_fsm = ap_ST_fsm_state155;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state155))
    {
        ap_NS_fsm = ap_ST_fsm_state154;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state156))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) && esl_seteq<1,1,1>(grp_polyveck_reduce_fu_2178_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state157;
        } else {
            ap_NS_fsm = ap_ST_fsm_state156;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state157))
    {
        ap_NS_fsm = ap_ST_fsm_state158;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state158))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_1, grp_polyveck_chknorm_fu_2165_ap_return.read()))) {
            ap_NS_fsm = ap_ST_fsm_state170;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, grp_polyveck_chknorm_fu_2165_ap_return.read()))) {
            ap_NS_fsm = ap_ST_fsm_state159;
        } else {
            ap_NS_fsm = ap_ST_fsm_state158;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state159))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) && esl_seteq<1,1,1>(grp_polyveck_pointwise_p_fu_2145_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state160;
        } else {
            ap_NS_fsm = ap_ST_fsm_state159;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state160))
    {
        ap_NS_fsm = ap_ST_fsm_state161;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state161))
    {
        if ((esl_seteq<1,1,1>(grp_polyveck_invntt_tomo_fu_2069_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()))) {
            ap_NS_fsm = ap_ST_fsm_state162;
        } else {
            ap_NS_fsm = ap_ST_fsm_state161;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state162))
    {
        ap_NS_fsm = ap_ST_fsm_state163;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state163))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) && esl_seteq<1,1,1>(grp_polyveck_reduce_fu_2178_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state164;
        } else {
            ap_NS_fsm = ap_ST_fsm_state163;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state164))
    {
        ap_NS_fsm = ap_ST_fsm_state165;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state165))
    {
        if ((esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, grp_polyveck_chknorm_fu_2165_ap_return.read()))) {
            ap_NS_fsm = ap_ST_fsm_state166;
        } else if ((esl_seteq<1,1,1>(grp_polyveck_chknorm_fu_2165_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, grp_polyveck_chknorm_fu_2165_ap_return.read()))) {
            ap_NS_fsm = ap_ST_fsm_state170;
        } else {
            ap_NS_fsm = ap_ST_fsm_state165;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state166))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln234_fu_4850_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state167;
        } else {
            ap_NS_fsm = ap_ST_fsm_state169;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state167))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln87_1_fu_4874_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state166;
        } else {
            ap_NS_fsm = ap_ST_fsm_state168;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state168))
    {
        ap_NS_fsm = ap_ST_fsm_state167;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state169))
    {
        if ((esl_seteq<1,1,1>(grp_polyveck_caddq_fu_2173_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()))) {
            ap_NS_fsm = ap_ST_fsm_state170;
        } else {
            ap_NS_fsm = ap_ST_fsm_state169;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state170))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && ((((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln392_fu_4908_p2.read()) && 
     esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln173_fu_4932_p2.read())) || 
    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_reg_6160.read())) || 
   esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_6156.read())) || 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln158_reg_6095.read())))) {
            ap_NS_fsm = ap_ST_fsm_state77;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6095.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6156.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6160.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln392_fu_4908_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln173_fu_4932_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state173;
        } else {
            ap_NS_fsm = ap_ST_fsm_state171;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state171))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln249_fu_4944_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state170;
        } else {
            ap_NS_fsm = ap_ST_fsm_state172;
        }
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state172))
    {
        ap_NS_fsm = ap_ST_fsm_state171;
    }
    else if (esl_seteq<1,173,173>(ap_CS_fsm.read(), ap_ST_fsm_state173))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && esl_seteq<1,1,1>(grp_pack_sig_fu_2085_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state1;
        } else {
            ap_NS_fsm = ap_ST_fsm_state173;
        }
    }
    else
    {
        ap_NS_fsm =  (sc_lv<173>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}
}

