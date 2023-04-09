#include "crypto_sign.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void crypto_sign::thread_a1_1_fu_3894_p2() {
    a1_1_fu_3894_p2 = (select_ln48_fu_3886_p3.read() & trunc_ln12_fu_3853_p4.read());
}

void crypto_sign::thread_add_ln109_fu_5057_p2() {
    add_ln109_fu_5057_p2 = (!zext_ln104_reg_6409.read().is_01() || !zext_ln109_fu_5053_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln104_reg_6409.read()) + sc_biguint<12>(zext_ln109_fu_5053_p1.read()));
}

void crypto_sign::thread_add_ln125_1_fu_3681_p2() {
    add_ln125_1_fu_3681_p2 = (!phi_ln125_1_reg_1569.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln125_1_reg_1569.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void crypto_sign::thread_add_ln125_2_fu_3707_p2() {
    add_ln125_2_fu_3707_p2 = (!phi_ln125_2_reg_1580.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln125_2_reg_1580.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void crypto_sign::thread_add_ln125_3_fu_3733_p2() {
    add_ln125_3_fu_3733_p2 = (!phi_ln125_3_reg_1591.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln125_3_reg_1591.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void crypto_sign::thread_add_ln125_fu_3659_p2() {
    add_ln125_fu_3659_p2 = (!phi_ln125_reg_1558.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln125_reg_1558.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void crypto_sign::thread_add_ln182_fu_4718_p2() {
    add_ln182_fu_4718_p2 = (!zext_ln182_16_fu_4714_p1.read().is_01() || !zext_ln177_reg_6278.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln182_16_fu_4714_p1.read()) + sc_biguint<12>(zext_ln177_reg_6278.read()));
}

void crypto_sign::thread_add_ln19_fu_4766_p2() {
    add_ln19_fu_4766_p2 = (!sext_ln19_14_fu_4762_p1.read().is_01() || !mul_ln182_fu_4736_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(sext_ln19_14_fu_4762_p1.read()) + sc_biguint<64>(mul_ln182_fu_4736_p2.read()));
}

void crypto_sign::thread_add_ln208_1_fu_2280_p2() {
    add_ln208_1_fu_2280_p2 = (!ap_const_lv14_973.is_01() || !trunc_ln208_1_fu_2276_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(ap_const_lv14_973) + sc_biguint<14>(trunc_ln208_1_fu_2276_p1.read()));
}

void crypto_sign::thread_add_ln208_fu_2270_p2() {
    add_ln208_fu_2270_p2 = (!ap_const_lv13_1FFF.is_01() || !trunc_ln208_fu_2266_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1FFF) + sc_biguint<13>(trunc_ln208_fu_2266_p1.read()));
}

void crypto_sign::thread_add_ln227_fu_3823_p2() {
    add_ln227_fu_3823_p2 = (!zext_ln222_reg_5969.read().is_01() || !zext_ln227_fu_3819_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln222_reg_5969.read()) + sc_biguint<12>(zext_ln227_fu_3819_p1.read()));
}

void crypto_sign::thread_add_ln250_fu_5185_p2() {
    add_ln250_fu_5185_p2 = (!zext_ln245_reg_6479.read().is_01() || !zext_ln250_fu_5181_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln245_reg_6479.read()) + sc_biguint<12>(zext_ln250_fu_5181_p1.read()));
}

void crypto_sign::thread_add_ln301_fu_4967_p2() {
    add_ln301_fu_4967_p2 = (!zext_ln288_reg_6380.read().is_01() || !zext_ln301_fu_4963_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln288_reg_6380.read()) + sc_biguint<12>(zext_ln301_fu_4963_p1.read()));
}

void crypto_sign::thread_add_ln33_fu_4897_p2() {
    add_ln33_fu_4897_p2 = (!zext_ln28_reg_6353.read().is_01() || !zext_ln33_fu_4893_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln28_reg_6353.read()) + sc_biguint<12>(zext_ln33_fu_4893_p1.read()));
}

void crypto_sign::thread_add_ln36_fu_4907_p2() {
    add_ln36_fu_4907_p2 = (!z_vec_coeffs_q0.read().is_01() || !ap_const_lv32_400000.is_01())? sc_lv<32>(): (sc_biguint<32>(z_vec_coeffs_q0.read()) + sc_biguint<32>(ap_const_lv32_400000));
}

void crypto_sign::thread_add_ln381_fu_3539_p2() {
    add_ln381_fu_3539_p2 = (!sub_ln381_reg_5766.read().is_01() || !zext_ln380_fu_3524_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln381_reg_5766.read()) + sc_biguint<11>(zext_ln380_fu_3524_p1.read()));
}

void crypto_sign::thread_add_ln388_fu_2381_p2() {
    add_ln388_fu_2381_p2 = (!phi_ln388_reg_1237.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln388_reg_1237.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln402_1_fu_2442_p2() {
    add_ln402_1_fu_2442_p2 = (!zext_ln401_fu_2403_p1.read().is_01() || !ap_const_lv5_6.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln401_fu_2403_p1.read()) + sc_biguint<5>(ap_const_lv5_6));
}

void crypto_sign::thread_add_ln402_2_fu_4018_p2() {
    add_ln402_2_fu_4018_p2 = (!zext_ln401_1_fu_3989_p1.read().is_01() || !ap_const_lv5_6.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln401_1_fu_3989_p1.read()) + sc_biguint<5>(ap_const_lv5_6));
}

void crypto_sign::thread_add_ln402_fu_2431_p2() {
    add_ln402_fu_2431_p2 = (!zext_ln402_fu_2427_p1.read().is_01() || !ap_const_lv12_974.is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln402_fu_2427_p1.read()) + sc_bigint<12>(ap_const_lv12_974));
}

void crypto_sign::thread_add_ln404_fu_2453_p2() {
    add_ln404_fu_2453_p2 = (!mlen.read().is_01() || !ap_const_lv64_FFFFFFFFFFFFFFA8.is_01())? sc_lv<64>(): (sc_biguint<64>(mlen.read()) + sc_bigint<64>(ap_const_lv64_FFFFFFFFFFFFFFA8));
}

void crypto_sign::thread_add_ln411_1_fu_2537_p2() {
    add_ln411_1_fu_2537_p2 = (!zext_ln411_fu_2533_p1.read().is_01() || !p_38_rec_i_i72_i_reg_1305.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln411_fu_2533_p1.read()) + sc_biguint<64>(p_38_rec_i_i72_i_reg_1305.read()));
}

void crypto_sign::thread_add_ln411_2_fu_4055_p2() {
    add_ln411_2_fu_4055_p2 = (!shl_ln411_1_fu_4047_p3.read().is_01() || !ap_const_lv8_58.is_01())? sc_lv<8>(): (sc_biguint<8>(shl_ln411_1_fu_4047_p3.read()) + sc_biguint<8>(ap_const_lv8_58));
}

void crypto_sign::thread_add_ln411_3_fu_4065_p2() {
    add_ln411_3_fu_4065_p2 = (!p_38_rec_i_i_i_reg_1693.read().is_01() || !zext_ln411_2_fu_4061_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_38_rec_i_i_i_reg_1693.read()) + sc_biguint<10>(zext_ln411_2_fu_4061_p1.read()));
}

void crypto_sign::thread_add_ln411_fu_2543_p2() {
    add_ln411_fu_2543_p2 = (!zext_ln409_1_reg_5395.read().is_01() || !add_ln411_1_fu_2537_p2.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln409_1_reg_5395.read()) + sc_biguint<64>(add_ln411_1_fu_2537_p2.read()));
}

void crypto_sign::thread_add_ln412_1_fu_4081_p2() {
    add_ln412_1_fu_4081_p2 = (!p_38_rec_i_i_i_reg_1693.read().is_01() || !ap_const_lv10_88.is_01())? sc_lv<10>(): (sc_biguint<10>(p_38_rec_i_i_i_reg_1693.read()) + sc_biguint<10>(ap_const_lv10_88));
}

void crypto_sign::thread_add_ln412_fu_2554_p2() {
    add_ln412_fu_2554_p2 = (!p_38_rec_i_i72_i_reg_1305.read().is_01() || !ap_const_lv64_88.is_01())? sc_lv<64>(): (sc_biguint<64>(p_38_rec_i_i72_i_reg_1305.read()) + sc_biguint<64>(ap_const_lv64_88));
}

void crypto_sign::thread_add_ln415_1_fu_2560_p2() {
    add_ln415_1_fu_2560_p2 = (!indvars_iv_i_i71_i_reg_1294.read().is_01() || !ap_const_lv64_FFFFFFFFFFFFFF78.is_01())? sc_lv<64>(): (sc_biguint<64>(indvars_iv_i_i71_i_reg_1294.read()) + sc_bigint<64>(ap_const_lv64_FFFFFFFFFFFFFF78));
}

void crypto_sign::thread_add_ln415_fu_4087_p2() {
    add_ln415_fu_4087_p2 = (!indvars_iv_i_i_i_reg_1681.read().is_01() || !ap_const_lv10_378.is_01())? sc_lv<10>(): (sc_biguint<10>(indvars_iv_i_i_i_reg_1681.read()) + sc_bigint<10>(ap_const_lv10_378));
}

void crypto_sign::thread_add_ln417_1_fu_2571_p2() {
    add_ln417_1_fu_2571_p2 = (!i_3_i_i78_i_reg_1328.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_3_i_i78_i_reg_1328.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_add_ln417_2_fu_3135_p2() {
    add_ln417_2_fu_3135_p2 = (!i_3_i_i_i_i_reg_1418.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_3_i_i_i_i_reg_1418.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_add_ln417_3_fu_3964_p2() {
    add_ln417_3_fu_3964_p2 = (!i_3_i_i37_i_reg_1659.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_i_i37_i_reg_1659.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln417_4_fu_4322_p2() {
    add_ln417_4_fu_4322_p2 = (!i_3_i_i_i166_i_reg_1738.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_i_i_i166_i_reg_1738.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln417_fu_2352_p2() {
    add_ln417_fu_2352_p2 = (!i_3_i_i119_i_reg_1226.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_i_i119_i_reg_1226.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln418_1_fu_2593_p2() {
    add_ln418_1_fu_2593_p2 = (!zext_ln418_3_fu_2589_p1.read().is_01() || !p_38_rec_i_i72_i_reg_1305.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln418_3_fu_2589_p1.read()) + sc_biguint<64>(p_38_rec_i_i72_i_reg_1305.read()));
}

void crypto_sign::thread_add_ln418_2_fu_2599_p2() {
    add_ln418_2_fu_2599_p2 = (!zext_ln409_1_reg_5395.read().is_01() || !add_ln418_1_fu_2593_p2.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln409_1_reg_5395.read()) + sc_biguint<64>(add_ln418_1_fu_2593_p2.read()));
}

void crypto_sign::thread_add_ln418_3_fu_2605_p2() {
    add_ln418_3_fu_2605_p2 = (!zext_ln418_2_reg_5414.read().is_01() || !i_3_i_i78_i_reg_1328.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln418_2_reg_5414.read()) + sc_biguint<5>(i_3_i_i78_i_reg_1328.read()));
}

void crypto_sign::thread_add_ln418_4_fu_3153_p2() {
    add_ln418_4_fu_3153_p2 = (!zext_ln418_5_fu_3149_p1.read().is_01() || !ap_const_lv8_50.is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln418_5_fu_3149_p1.read()) + sc_biguint<8>(ap_const_lv8_50));
}

void crypto_sign::thread_add_ln418_5_fu_3982_p2() {
    add_ln418_5_fu_3982_p2 = (!zext_ln418_6_fu_3978_p1.read().is_01() || !ap_const_lv8_70.is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln418_6_fu_3978_p1.read()) + sc_biguint<8>(ap_const_lv8_70));
}

void crypto_sign::thread_add_ln418_fu_2370_p2() {
    add_ln418_fu_2370_p2 = (!zext_ln418_fu_2366_p1.read().is_01() || !ap_const_lv7_20.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln418_fu_2366_p1.read()) + sc_biguint<7>(ap_const_lv7_20));
}

void crypto_sign::thread_add_ln421_fu_2644_p2() {
    add_ln421_fu_2644_p2 = (!zext_ln409_2_reg_5401.read().is_01() || !zext_ln419_2_fu_2622_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln409_2_reg_5401.read()) + sc_biguint<9>(zext_ln419_2_fu_2622_p1.read()));
}

void crypto_sign::thread_add_ln427_1_fu_2703_p2() {
    add_ln427_1_fu_2703_p2 = (!zext_ln420_reg_5471.read().is_01() || !trunc_ln426_fu_2684_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln420_reg_5471.read()) + sc_biguint<14>(trunc_ln426_fu_2684_p1.read()));
}

void crypto_sign::thread_add_ln427_2_fu_2708_p2() {
    add_ln427_2_fu_2708_p2 = (!add_ln427_1_fu_2703_p2.read().is_01() || !add_ln427_reg_5509.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln427_1_fu_2703_p2.read()) + sc_biguint<14>(add_ln427_reg_5509.read()));
}

void crypto_sign::thread_add_ln427_fu_2676_p2() {
    add_ln427_fu_2676_p2 = (!zext_ln409_reg_5390.read().is_01() || !trunc_ln409_reg_5409.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln409_reg_5390.read()) + sc_biguint<14>(trunc_ln409_reg_5409.read()));
}

void crypto_sign::thread_add_ln429_fu_2791_p2() {
    add_ln429_fu_2791_p2 = (!trunc_ln429_reg_5550.read().is_01() || !zext_ln421_reg_5491.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln429_reg_5550.read()) + sc_biguint<10>(zext_ln421_reg_5491.read()));
}

void crypto_sign::thread_add_ln42_fu_3833_p2() {
    add_ln42_fu_3833_p2 = (!ap_const_lv32_7F.is_01() || !w1_vec_coeffs_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_7F) + sc_biguint<32>(w1_vec_coeffs_q0.read()));
}

void crypto_sign::thread_add_ln477_1_fu_4528_p2() {
    add_ln477_1_fu_4528_p2 = (!i_0_i_i10_i_i_0_reg_1853.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_i_i10_i_i_0_reg_1853.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_add_ln477_fu_4372_p2() {
    add_ln477_fu_4372_p2 = (!i_0_i_i14_i_i_0_reg_1749.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_i_i14_i_i_0_reg_1749.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_add_ln47_fu_3653_p2() {
    add_ln47_fu_3653_p2 = (!zext_ln47_fu_3649_p1.read().is_01() || !shl_ln47_reg_5851.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln47_fu_3649_p1.read()) + sc_biguint<16>(shl_ln47_reg_5851.read()));
}

void crypto_sign::thread_add_ln48_1_fu_4590_p2() {
    add_ln48_1_fu_4590_p2 = (!shl_ln478_1_reg_6223.read().is_01() || !zext_ln48_9_fu_4586_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(shl_ln478_1_reg_6223.read()) + sc_biguint<8>(zext_ln48_9_fu_4586_p1.read()));
}

void crypto_sign::thread_add_ln48_fu_4434_p2() {
    add_ln48_fu_4434_p2 = (!shl_ln19_reg_6165.read().is_01() || !zext_ln48_7_fu_4430_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(shl_ln19_reg_6165.read()) + sc_biguint<8>(zext_ln48_7_fu_4430_p1.read()));
}

void crypto_sign::thread_add_ln542_1_fu_3192_p2() {
    add_ln542_1_fu_3192_p2 = (!i_3_i_i1_reg_1429.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_i_i1_reg_1429.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln542_2_fu_4125_p2() {
    add_ln542_2_fu_4125_p2 = (!i_3_i_i45_reg_1716.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_i_i45_reg_1716.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln542_fu_2861_p2() {
    add_ln542_fu_2861_p2 = (!i_3_i_i_reg_1395.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_i_i_reg_1395.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_add_ln543_1_fu_3215_p2() {
    add_ln543_1_fu_3215_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln543_2_fu_3211_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln543_2_fu_3211_p1.read()));
}

void crypto_sign::thread_add_ln543_fu_2884_p2() {
    add_ln543_fu_2884_p2 = (!ap_const_lv8_70.is_01() || !zext_ln543_fu_2880_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln543_fu_2880_p1.read()));
}

void crypto_sign::thread_add_ln544_1_fu_3247_p2() {
    add_ln544_1_fu_3247_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln544_2_fu_3243_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln544_2_fu_3243_p1.read()));
}

void crypto_sign::thread_add_ln544_fu_2916_p2() {
    add_ln544_fu_2916_p2 = (!ap_const_lv8_70.is_01() || !zext_ln544_fu_2912_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln544_fu_2912_p1.read()));
}

void crypto_sign::thread_add_ln545_1_fu_3327_p2() {
    add_ln545_1_fu_3327_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln545_2_fu_3323_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln545_2_fu_3323_p1.read()));
}

void crypto_sign::thread_add_ln545_fu_2996_p2() {
    add_ln545_fu_2996_p2 = (!ap_const_lv8_70.is_01() || !zext_ln545_fu_2992_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln545_fu_2992_p1.read()));
}

void crypto_sign::thread_add_ln546_1_fu_3347_p2() {
    add_ln546_1_fu_3347_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln546_2_fu_3343_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln546_2_fu_3343_p1.read()));
}

void crypto_sign::thread_add_ln546_fu_3016_p2() {
    add_ln546_fu_3016_p2 = (!ap_const_lv8_70.is_01() || !zext_ln546_fu_3012_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln546_fu_3012_p1.read()));
}

void crypto_sign::thread_add_ln547_1_fu_3367_p2() {
    add_ln547_1_fu_3367_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln547_2_fu_3363_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln547_2_fu_3363_p1.read()));
}

void crypto_sign::thread_add_ln547_fu_3036_p2() {
    add_ln547_fu_3036_p2 = (!ap_const_lv8_70.is_01() || !zext_ln547_fu_3032_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln547_fu_3032_p1.read()));
}

void crypto_sign::thread_add_ln548_1_fu_3387_p2() {
    add_ln548_1_fu_3387_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln548_2_fu_3383_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln548_2_fu_3383_p1.read()));
}

void crypto_sign::thread_add_ln548_fu_3056_p2() {
    add_ln548_fu_3056_p2 = (!ap_const_lv8_70.is_01() || !zext_ln548_fu_3052_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln548_fu_3052_p1.read()));
}

void crypto_sign::thread_add_ln549_1_fu_3407_p2() {
    add_ln549_1_fu_3407_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln549_2_fu_3403_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln549_2_fu_3403_p1.read()));
}

void crypto_sign::thread_add_ln549_fu_3076_p2() {
    add_ln549_fu_3076_p2 = (!ap_const_lv8_70.is_01() || !zext_ln549_fu_3072_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln549_fu_3072_p1.read()));
}

void crypto_sign::thread_add_ln550_1_fu_3427_p2() {
    add_ln550_1_fu_3427_p2 = (!ap_const_lv8_A0.is_01() || !zext_ln550_2_fu_3423_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A0) + sc_biguint<8>(zext_ln550_2_fu_3423_p1.read()));
}

void crypto_sign::thread_add_ln550_fu_3096_p2() {
    add_ln550_fu_3096_p2 = (!ap_const_lv8_70.is_01() || !zext_ln550_fu_3092_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(zext_ln550_fu_3092_p1.read()));
}

void crypto_sign::thread_add_ln88_2_fu_5126_p2() {
    add_ln88_2_fu_5126_p2 = (!w0_vec_coeffs_q0.read().is_01() || !h_vec_coeffs_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(w0_vec_coeffs_q0.read()) + sc_biguint<32>(h_vec_coeffs_q0.read()));
}

void crypto_sign::thread_add_ln88_3_fu_4835_p2() {
    add_ln88_3_fu_4835_p2 = (!zext_ln83_reg_6322.read().is_01() || !zext_ln88_fu_4831_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln83_reg_6322.read()) + sc_biguint<12>(zext_ln88_fu_4831_p1.read()));
}

void crypto_sign::thread_add_ln88_4_fu_5115_p2() {
    add_ln88_4_fu_5115_p2 = (!zext_ln83_1_reg_6448.read().is_01() || !zext_ln88_5_fu_5111_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln83_1_reg_6448.read()) + sc_biguint<12>(zext_ln88_5_fu_5111_p1.read()));
}

void crypto_sign::thread_add_ln88_fu_4850_p2() {
    add_ln88_fu_4850_p2 = (!z_vec_coeffs_q0.read().is_01() || !sext_ln88_fu_4846_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(z_vec_coeffs_q0.read()) + sc_bigint<32>(sext_ln88_fu_4846_p1.read()));
}

void crypto_sign::thread_and_ln302_fu_4999_p2() {
    and_ln302_fu_4999_p2 = (shl_ln302_fu_4993_p2.read() & t_17_fu_4985_p3.read());
}

void crypto_sign::thread_and_ln69_fu_5230_p2() {
    and_ln69_fu_5230_p2 = (icmp_ln69_2_fu_5218_p2.read() & icmp_ln69_3_fu_5224_p2.read());
}

void crypto_sign::thread_and_ln_fu_2615_p3() {
    and_ln_fu_2615_p3 = esl_concat<5,3>(tmp_30_reg_5419.read(), ap_const_lv3_0);
}

void crypto_sign::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void crypto_sign::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void crypto_sign::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void crypto_sign::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void crypto_sign::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void crypto_sign::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void crypto_sign::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void crypto_sign::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void crypto_sign::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
}

void crypto_sign::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void crypto_sign::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void crypto_sign::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[108];
}

void crypto_sign::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void crypto_sign::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void crypto_sign::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
}

void crypto_sign::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[111];
}

void crypto_sign::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[112];
}

void crypto_sign::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void crypto_sign::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void crypto_sign::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void crypto_sign::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void crypto_sign::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void crypto_sign::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[118];
}

void crypto_sign::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void crypto_sign::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[119];
}

void crypto_sign::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[120];
}

void crypto_sign::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[121];
}

void crypto_sign::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[122];
}

void crypto_sign::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[123];
}

void crypto_sign::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void crypto_sign::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void crypto_sign::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void crypto_sign::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void crypto_sign::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void crypto_sign::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void crypto_sign::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[129];
}

void crypto_sign::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[130];
}

void crypto_sign::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[131];
}

void crypto_sign::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[132];
}

void crypto_sign::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[133];
}

void crypto_sign::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[134];
}

void crypto_sign::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[135];
}

void crypto_sign::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void crypto_sign::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[137];
}

void crypto_sign::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
}

void crypto_sign::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void crypto_sign::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[139];
}

void crypto_sign::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[140];
}

void crypto_sign::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[141];
}

void crypto_sign::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[142];
}

void crypto_sign::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[143];
}

void crypto_sign::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void crypto_sign::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
}

void crypto_sign::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
}

void crypto_sign::thread_ap_CS_fsm_state148() {
    ap_CS_fsm_state148 = ap_CS_fsm.read()[147];
}

void crypto_sign::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[148];
}

void crypto_sign::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void crypto_sign::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[149];
}

void crypto_sign::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void crypto_sign::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void crypto_sign::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[152];
}

void crypto_sign::thread_ap_CS_fsm_state154() {
    ap_CS_fsm_state154 = ap_CS_fsm.read()[153];
}

void crypto_sign::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void crypto_sign::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void crypto_sign::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[156];
}

void crypto_sign::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[157];
}

void crypto_sign::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[158];
}

void crypto_sign::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void crypto_sign::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[159];
}

void crypto_sign::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[160];
}

void crypto_sign::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[161];
}

void crypto_sign::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
}

void crypto_sign::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void crypto_sign::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void crypto_sign::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[165];
}

void crypto_sign::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[166];
}

void crypto_sign::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[167];
}

void crypto_sign::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[168];
}

void crypto_sign::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void crypto_sign::thread_ap_CS_fsm_state170() {
    ap_CS_fsm_state170 = ap_CS_fsm.read()[169];
}

void crypto_sign::thread_ap_CS_fsm_state171() {
    ap_CS_fsm_state171 = ap_CS_fsm.read()[170];
}

void crypto_sign::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
}

void crypto_sign::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[172];
}

void crypto_sign::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[173];
}

void crypto_sign::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[174];
}

void crypto_sign::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[175];
}

void crypto_sign::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void crypto_sign::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
}

void crypto_sign::thread_ap_CS_fsm_state179() {
    ap_CS_fsm_state179 = ap_CS_fsm.read()[178];
}

void crypto_sign::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void crypto_sign::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void crypto_sign::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void crypto_sign::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void crypto_sign::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void crypto_sign::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void crypto_sign::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void crypto_sign::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void crypto_sign::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void crypto_sign::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void crypto_sign::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void crypto_sign::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void crypto_sign::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void crypto_sign::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void crypto_sign::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void crypto_sign::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void crypto_sign::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void crypto_sign::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void crypto_sign::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void crypto_sign::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void crypto_sign::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void crypto_sign::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void crypto_sign::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void crypto_sign::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void crypto_sign::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void crypto_sign::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void crypto_sign::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void crypto_sign::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void crypto_sign::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void crypto_sign::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void crypto_sign::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void crypto_sign::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void crypto_sign::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void crypto_sign::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void crypto_sign::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void crypto_sign::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void crypto_sign::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void crypto_sign::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void crypto_sign::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void crypto_sign::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void crypto_sign::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void crypto_sign::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void crypto_sign::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
}

void crypto_sign::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void crypto_sign::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void crypto_sign::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void crypto_sign::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void crypto_sign::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void crypto_sign::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void crypto_sign::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void crypto_sign::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void crypto_sign::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void crypto_sign::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void crypto_sign::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[75];
}

void crypto_sign::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[76];
}

void crypto_sign::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[77];
}

void crypto_sign::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[78];
}

void crypto_sign::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void crypto_sign::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[79];
}

void crypto_sign::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[80];
}

void crypto_sign::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[81];
}

void crypto_sign::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[82];
}

void crypto_sign::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[83];
}

void crypto_sign::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[84];
}

void crypto_sign::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[85];
}

void crypto_sign::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[86];
}

void crypto_sign::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[87];
}

void crypto_sign::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[88];
}

void crypto_sign::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void crypto_sign::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[89];
}

void crypto_sign::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[90];
}

void crypto_sign::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[91];
}

void crypto_sign::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[92];
}

void crypto_sign::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[93];
}

void crypto_sign::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[94];
}

void crypto_sign::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[95];
}

void crypto_sign::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[96];
}

void crypto_sign::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[97];
}

void crypto_sign::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[98];
}

void crypto_sign::thread_ap_block_state11_on_subcall_done() {
    ap_block_state11_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_KeccakF1600_StatePer_1_fu_2102_ap_done.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read()));
}

void crypto_sign::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()) && 
         esl_seteq<1,1,1>(grp_pack_sig_fu_2149_ap_done.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void crypto_sign::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void crypto_sign::thread_ap_phi_mux_p_23_i_i68_i_phi_fu_1275_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read()))) {
        ap_phi_mux_p_23_i_i68_i_phi_fu_1275_p4 = ap_const_lv5_0;
    } else {
        ap_phi_mux_p_23_i_i68_i_phi_fu_1275_p4 = p_23_i_i68_i_reg_1271.read();
    }
}

void crypto_sign::thread_ap_phi_mux_p_2_i_i69_i_phi_fu_1287_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read()))) {
        ap_phi_mux_p_2_i_i69_i_phi_fu_1287_p4 = add_ln404_fu_2453_p2.read();
    } else {
        ap_phi_mux_p_2_i_i69_i_phi_fu_1287_p4 = p_2_i_i69_i_reg_1284.read();
    }
}

void crypto_sign::thread_ap_phi_mux_phi_ln403_phi_fu_1263_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read()))) {
        ap_phi_mux_phi_ln403_phi_fu_1263_p4 = ap_const_lv12_9CC;
    } else {
        ap_phi_mux_phi_ln403_phi_fu_1263_p4 = phi_ln403_reg_1259.read();
    }
}

void crypto_sign::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()) && 
         esl_seteq<1,1,1>(grp_pack_sig_fu_2149_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void crypto_sign::thread_ap_return() {
    ap_return = ap_const_lv32_0;
}

void crypto_sign::thread_buf_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        buf_1_address0 =  (sc_lv<10>) (zext_ln381_1_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln380_fu_3528_p2.read()))) {
        buf_1_address0 =  (sc_lv<10>) (zext_ln381_fu_3548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        buf_1_address0 = grp_rej_uniform_fu_2185_buf_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        buf_1_address0 = grp_shake128_squeezebloc_fu_2089_out_r_address0.read();
    } else {
        buf_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_buf_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln380_fu_3528_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()))) {
        buf_1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        buf_1_ce0 = grp_rej_uniform_fu_2185_buf_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        buf_1_ce0 = grp_shake128_squeezebloc_fu_2089_out_r_ce0.read();
    } else {
        buf_1_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_buf_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        buf_1_ce1 = grp_rej_uniform_fu_2185_buf_r_ce1.read();
    } else {
        buf_1_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_buf_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        buf_1_d0 = buf_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        buf_1_d0 = grp_shake128_squeezebloc_fu_2089_out_r_d0.read();
    } else {
        buf_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_buf_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        buf_1_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        buf_1_we0 = grp_shake128_squeezebloc_fu_2089_out_r_we0.read();
    } else {
        buf_1_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_buf_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        buf_address0 =  (sc_lv<8>) (zext_ln538_fu_4606_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        buf_address0 =  (sc_lv<8>) (zext_ln48_10_fu_4595_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        buf_address0 =  (sc_lv<8>) (zext_ln526_fu_4456_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        buf_address0 =  (sc_lv<8>) (zext_ln48_8_fu_4439_p1.read());
    } else {
        buf_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_buf_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()))) {
        buf_ce0 = ap_const_logic_1;
    } else {
        buf_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_buf_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        buf_d0 = trunc_ln48_5_fu_4581_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        buf_d0 = trunc_ln48_3_fu_4425_p1.read();
    } else {
        buf_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_buf_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_fu_4391_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_1_fu_4547_p2.read())))) {
        buf_we0 = ap_const_logic_1;
    } else {
        buf_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_buflen_fu_3558_p2() {
    buflen_fu_3558_p2 = (trunc_ln379_reg_5755.read() | ap_const_lv8_A8);
}

void crypto_sign::thread_cp_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        cp_coeffs_address0 =  (sc_lv<8>) (zext_ln182_fu_4709_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        cp_coeffs_address0 = cp_coeffs_addr_2_reg_6250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        cp_coeffs_address0 =  (sc_lv<8>) (zext_ln541_1_fu_4644_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        cp_coeffs_address0 =  (sc_lv<8>) (zext_ln541_fu_4621_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read())) {
        cp_coeffs_address0 =  (sc_lv<8>) (zext_ln530_fu_4505_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        cp_coeffs_address0 = grp_polyveck_pointwise_p_fu_2209_a_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        cp_coeffs_address0 = grp_ntt_fu_2157_a_address0.read();
    } else {
        cp_coeffs_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_cp_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()))) {
        cp_coeffs_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        cp_coeffs_ce0 = grp_polyveck_pointwise_p_fu_2209_a_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        cp_coeffs_ce0 = grp_ntt_fu_2157_a_ce0.read();
    } else {
        cp_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_cp_coeffs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        cp_coeffs_ce1 = grp_ntt_fu_2157_a_ce1.read();
    } else {
        cp_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_cp_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        cp_coeffs_d0 = sext_ln542_fu_4668_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        cp_coeffs_d0 = cp_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read())) {
        cp_coeffs_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        cp_coeffs_d0 = grp_ntt_fu_2157_a_d0.read();
    } else {
        cp_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_cp_coeffs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln529_fu_4493_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()))) {
        cp_coeffs_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        cp_coeffs_we0 = grp_ntt_fu_2157_a_we0.read();
    } else {
        cp_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_ctr_2_fu_3583_p2() {
    ctr_2_fu_3583_p2 = (!grp_rej_uniform_fu_2185_ap_return.read().is_01() || !ctr_0_i_reg_1465.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_rej_uniform_fu_2185_ap_return.read()) + sc_biguint<32>(ctr_0_i_reg_1465.read()));
}

void crypto_sign::thread_grp_KeccakF1600_StatePer_1_fu_2102_ap_start() {
    grp_KeccakF1600_StatePer_1_fu_2102_ap_start = grp_KeccakF1600_StatePer_1_fu_2102_ap_start_reg.read();
}

void crypto_sign::thread_grp_KeccakF1600_StatePer_1_fu_2102_state_q0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        grp_KeccakF1600_StatePer_1_fu_2102_state_q0 = state_s_1_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        grp_KeccakF1600_StatePer_1_fu_2102_state_q0 = state_s_2_q0.read();
    } else {
        grp_KeccakF1600_StatePer_1_fu_2102_state_q0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_KeccakF1600_StatePer_1_fu_2102_state_q1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        grp_KeccakF1600_StatePer_1_fu_2102_state_q1 = state_s_1_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        grp_KeccakF1600_StatePer_1_fu_2102_state_q1 = state_s_2_q1.read();
    } else {
        grp_KeccakF1600_StatePer_1_fu_2102_state_q1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_KeccakF1600_StatePer_fu_2109_ap_start() {
    grp_KeccakF1600_StatePer_fu_2109_ap_start = grp_KeccakF1600_StatePer_fu_2109_ap_start_reg.read();
}

void crypto_sign::thread_grp_dilithium_shake128_s_fu_2126_ap_start() {
    grp_dilithium_shake128_s_fu_2126_ap_start = grp_dilithium_shake128_s_fu_2126_ap_start_reg.read();
}

void crypto_sign::thread_grp_fu_2247_p2() {
    grp_fu_2247_p2 = (state_s_2_q0.read() ^ grp_load64_2_fu_2223_ap_return.read());
}

void crypto_sign::thread_grp_fu_2254_p2() {
    grp_fu_2254_p2 = (state_s_2_q0.read() ^ grp_load64_3_fu_2216_ap_return.read());
}

void crypto_sign::thread_grp_fu_3501_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln378_fu_3495_p2.read()))) {
        grp_fu_3501_ap_start = ap_const_logic_1;
    } else {
        grp_fu_3501_ap_start = ap_const_logic_0;
    }
}

void crypto_sign::thread_grp_fu_3501_p1() {
    grp_fu_3501_p1 =  (sc_lv<3>) (ap_const_lv9_3);
}

void crypto_sign::thread_grp_fu_5269_p0() {
    grp_fu_5269_p0 =  (sc_lv<15>) (ap_const_lv32_2C0B);
}

void crypto_sign::thread_grp_fu_5269_p2() {
    grp_fu_5269_p2 =  (sc_lv<25>) (ap_const_lv32_800000);
}

void crypto_sign::thread_grp_fu_5278_p0() {
    grp_fu_5278_p0 =  (sc_lv<19>) (ap_const_lv27_7FD1800);
}

void crypto_sign::thread_grp_fu_5288_p1() {
    grp_fu_5288_p1 =  (sc_lv<24>) (ap_const_lv32_FF801FFF);
}

void crypto_sign::thread_grp_invntt_tomont_fu_2140_ap_start() {
    grp_invntt_tomont_fu_2140_ap_start = grp_invntt_tomont_fu_2140_ap_start_reg.read();
}

void crypto_sign::thread_grp_load64_2_fu_2223_ap_start() {
    grp_load64_2_fu_2223_ap_start = grp_load64_2_fu_2223_ap_start_reg.read();
}

void crypto_sign::thread_grp_load64_2_fu_2223_x_offset() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_load64_2_fu_2223_x_offset = add_ln418_5_reg_6008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_load64_2_fu_2223_x_offset = add_ln418_4_reg_5645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        grp_load64_2_fu_2223_x_offset = zext_ln418_1_reg_5350.read();
    } else {
        grp_load64_2_fu_2223_x_offset =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_grp_load64_3_fu_2216_ap_start() {
    grp_load64_3_fu_2216_ap_start = grp_load64_3_fu_2216_ap_start_reg.read();
}

void crypto_sign::thread_grp_load64_3_fu_2216_x_offset() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_load64_3_fu_2216_x_offset = zext_ln418_7_reg_6141.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_load64_3_fu_2216_x_offset = zext_ln411_3_reg_6047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_load64_3_fu_2216_x_offset = zext_ln402_3_reg_6026.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        grp_load64_3_fu_2216_x_offset = add_ln418_2_reg_5461.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_load64_3_fu_2216_x_offset = add_ln411_reg_5433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_load64_3_fu_2216_x_offset = zext_ln402_1_reg_5380.read();
    } else {
        grp_load64_3_fu_2216_x_offset =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_ntt_1_fu_2164_a_offset() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        grp_ntt_1_fu_2164_a_offset = i_0_i76_reg_1602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        grp_ntt_1_fu_2164_a_offset = i_0_i69_reg_1523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_ntt_1_fu_2164_a_offset = i_0_i67_reg_1511.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_ntt_1_fu_2164_a_offset = i_0_i65_reg_1499.read();
    } else {
        grp_ntt_1_fu_2164_a_offset =  (sc_lv<3>) ("XXX");
    }
}

void crypto_sign::thread_grp_ntt_1_fu_2164_a_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        grp_ntt_1_fu_2164_a_q0 = z_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        grp_ntt_1_fu_2164_a_q0 = t0_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_ntt_1_fu_2164_a_q0 = s2_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_ntt_1_fu_2164_a_q0 = s1_vec_coeffs_q0.read();
    } else {
        grp_ntt_1_fu_2164_a_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_ntt_1_fu_2164_a_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        grp_ntt_1_fu_2164_a_q1 = z_vec_coeffs_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        grp_ntt_1_fu_2164_a_q1 = t0_vec_coeffs_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_ntt_1_fu_2164_a_q1 = s2_vec_coeffs_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_ntt_1_fu_2164_a_q1 = s1_vec_coeffs_q1.read();
    } else {
        grp_ntt_1_fu_2164_a_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_ntt_1_fu_2164_ap_start() {
    grp_ntt_1_fu_2164_ap_start = grp_ntt_1_fu_2164_ap_start_reg.read();
}

void crypto_sign::thread_grp_ntt_fu_2157_ap_start() {
    grp_ntt_fu_2157_ap_start = grp_ntt_fu_2157_ap_start_reg.read();
}

void crypto_sign::thread_grp_pack_sig_fu_2149_ap_start() {
    grp_pack_sig_fu_2149_ap_start = grp_pack_sig_fu_2149_ap_start_reg.read();
}

void crypto_sign::thread_grp_poly_uniform_gamma1_fu_2078_ap_start() {
    grp_poly_uniform_gamma1_fu_2078_ap_start = grp_poly_uniform_gamma1_fu_2078_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_caddq_fu_2237_ap_start() {
    grp_polyveck_caddq_fu_2237_ap_start = grp_polyveck_caddq_fu_2237_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_caddq_fu_2237_v_vec_coeffs_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        grp_polyveck_caddq_fu_2237_v_vec_coeffs_q0 = w0_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        grp_polyveck_caddq_fu_2237_v_vec_coeffs_q0 = w1_vec_coeffs_q0.read();
    } else {
        grp_polyveck_caddq_fu_2237_v_vec_coeffs_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyveck_chknorm_fu_2229_ap_start() {
    grp_polyveck_chknorm_fu_2229_ap_start = grp_polyveck_chknorm_fu_2229_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_chknorm_fu_2229_bound() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        grp_polyveck_chknorm_fu_2229_bound = ap_const_lv18_17400;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_polyveck_chknorm_fu_2229_bound = ap_const_lv18_173B2;
    } else {
        grp_polyveck_chknorm_fu_2229_bound =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyveck_chknorm_fu_2229_v_vec_coeffs_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        grp_polyveck_chknorm_fu_2229_v_vec_coeffs_q0 = h_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_polyveck_chknorm_fu_2229_v_vec_coeffs_q0 = w0_vec_coeffs_q0.read();
    } else {
        grp_polyveck_chknorm_fu_2229_v_vec_coeffs_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyveck_invntt_tomo_fu_2133_ap_start() {
    grp_polyveck_invntt_tomo_fu_2133_ap_start = grp_polyveck_invntt_tomo_fu_2133_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q0 = h_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q0 = w1_vec_coeffs_q0.read();
    } else {
        grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q1 = h_vec_coeffs_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q1 = w1_vec_coeffs_q1.read();
    } else {
        grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyveck_pack_w1_fu_2202_ap_start() {
    grp_polyveck_pack_w1_fu_2202_ap_start = grp_polyveck_pack_w1_fu_2202_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_pointwise_p_fu_2209_ap_start() {
    grp_polyveck_pointwise_p_fu_2209_ap_start = grp_polyveck_pointwise_p_fu_2209_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_q0 = t0_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_q0 = s2_vec_coeffs_q0.read();
    } else {
        grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyveck_reduce_fu_2242_ap_start() {
    grp_polyveck_reduce_fu_2242_ap_start = grp_polyveck_reduce_fu_2242_ap_start_reg.read();
}

void crypto_sign::thread_grp_polyveck_reduce_fu_2242_v_vec_coeffs_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        grp_polyveck_reduce_fu_2242_v_vec_coeffs_q0 = h_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        grp_polyveck_reduce_fu_2242_v_vec_coeffs_q0 = w0_vec_coeffs_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_polyveck_reduce_fu_2242_v_vec_coeffs_q0 = w1_vec_coeffs_q0.read();
    } else {
        grp_polyveck_reduce_fu_2242_v_vec_coeffs_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_polyvecl_pointwise_a_fu_2176_ap_start() {
    grp_polyvecl_pointwise_a_fu_2176_ap_start = grp_polyvecl_pointwise_a_fu_2176_ap_start_reg.read();
}

void crypto_sign::thread_grp_rej_uniform_fu_2185_a_offset2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        grp_rej_uniform_fu_2185_a_offset2 = ctr_0_i_reg_1465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        grp_rej_uniform_fu_2185_a_offset2 = ap_const_lv32_0;
    } else {
        grp_rej_uniform_fu_2185_a_offset2 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_rej_uniform_fu_2185_ap_start() {
    grp_rej_uniform_fu_2185_ap_start = grp_rej_uniform_fu_2185_ap_start_reg.read();
}

void crypto_sign::thread_grp_rej_uniform_fu_2185_buflen() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        grp_rej_uniform_fu_2185_buflen = zext_ln385_reg_5794.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        grp_rej_uniform_fu_2185_buflen = ap_const_lv11_348;
    } else {
        grp_rej_uniform_fu_2185_buflen =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_rej_uniform_fu_2185_len() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        grp_rej_uniform_fu_2185_len = sub_ln385_reg_5789.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        grp_rej_uniform_fu_2185_len = ap_const_lv10_100;
    } else {
        grp_rej_uniform_fu_2185_len =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_grp_shake128_squeezebloc_fu_2089_ap_start() {
    grp_shake128_squeezebloc_fu_2089_ap_start = grp_shake128_squeezebloc_fu_2089_ap_start_reg.read();
}

void crypto_sign::thread_grp_shake128_squeezebloc_fu_2089_nblocks() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        grp_shake128_squeezebloc_fu_2089_nblocks = ap_const_lv4_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        grp_shake128_squeezebloc_fu_2089_nblocks = ap_const_lv4_5;
    } else {
        grp_shake128_squeezebloc_fu_2089_nblocks =  (sc_lv<4>) ("XXXX");
    }
}

void crypto_sign::thread_grp_shake128_squeezebloc_fu_2089_out_offset() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        grp_shake128_squeezebloc_fu_2089_out_offset = trunc_ln379_1_reg_5760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        grp_shake128_squeezebloc_fu_2089_out_offset = ap_const_lv2_0;
    } else {
        grp_shake128_squeezebloc_fu_2089_out_offset =  (sc_lv<2>) ("XX");
    }
}

void crypto_sign::thread_grp_unpack_sk_fu_2116_ap_start() {
    grp_unpack_sk_fu_2116_ap_start = grp_unpack_sk_fu_2116_ap_start_reg.read();
}

void crypto_sign::thread_h_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
        h_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln250_1_reg_6495.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        h_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln88_6_fu_5120_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read())) {
        h_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln109_1_fu_5062_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        h_vec_coeffs_address0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        h_vec_coeffs_address0 = grp_polyveck_chknorm_fu_2229_v_vec_coeffs_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        h_vec_coeffs_address0 = grp_polyveck_pointwise_p_fu_2209_r_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        h_vec_coeffs_address0 = grp_pack_sig_fu_2149_h_vec_coeffs_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        h_vec_coeffs_address0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_address0.read();
    } else {
        h_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_h_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        h_vec_coeffs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        h_vec_coeffs_ce0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        h_vec_coeffs_ce0 = grp_polyveck_chknorm_fu_2229_v_vec_coeffs_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        h_vec_coeffs_ce0 = grp_polyveck_pointwise_p_fu_2209_r_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        h_vec_coeffs_ce0 = grp_pack_sig_fu_2149_h_vec_coeffs_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        h_vec_coeffs_ce0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_ce0.read();
    } else {
        h_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_h_vec_coeffs_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        h_vec_coeffs_ce1 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_ce1.read();
    } else {
        h_vec_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_h_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
        h_vec_coeffs_d0 = zext_ln69_1_fu_5258_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        h_vec_coeffs_d0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        h_vec_coeffs_d0 = grp_polyveck_pointwise_p_fu_2209_r_vec_coeffs_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        h_vec_coeffs_d0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_d0.read();
    } else {
        h_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_h_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
        h_vec_coeffs_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        h_vec_coeffs_we0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        h_vec_coeffs_we0 = grp_polyveck_pointwise_p_fu_2209_r_vec_coeffs_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        h_vec_coeffs_we0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_we0.read();
    } else {
        h_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_i_100_fu_5023_p2() {
    i_100_fu_5023_p2 = (!i_0_i123_reg_1988.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i123_reg_1988.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_101_fu_4957_p2() {
    i_101_fu_4957_p2 = (!i_0_i_i85_reg_1977.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i85_reg_1977.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_102_fu_5047_p2() {
    i_102_fu_5047_p2 = (!i_0_i_i124_reg_1999.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i124_reg_1999.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_103_fu_5081_p2() {
    i_103_fu_5081_p2 = (!i_0_i131_reg_2010.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i131_reg_2010.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_104_fu_5105_p2() {
    i_104_fu_5105_p2 = (!i_0_i_i132_reg_2021.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i132_reg_2021.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_105_fu_5139_p2() {
    i_105_fu_5139_p2 = (!i_0_i87_reg_2032.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i87_reg_2032.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_106_fu_5175_p2() {
    i_106_fu_5175_p2 = (!i_0_i_i88_reg_2055.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i88_reg_2055.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_33_fu_2330_p2() {
    i_33_fu_2330_p2 = (!i_0_i_i4_i_reg_1215.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_i_i4_i_reg_1215.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_i_34_fu_2413_p2() {
    i_34_fu_2413_p2 = (!i_1_i_i65_i_reg_1248.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_1_i_i65_i_reg_1248.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_35_fu_2519_p2() {
    i_35_fu_2519_p2 = (!i_2_i_i73_i_reg_1317.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_2_i_i73_i_reg_1317.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_i_36_fu_2665_p2() {
    i_36_fu_2665_p2 = (!i_4_i_i80_i_reg_1339.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_4_i_i80_i_reg_1339.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_37_fu_2697_p2() {
    i_37_fu_2697_p2 = (!ap_const_lv32_1.is_01() || !i_5_i_i84_i_reg_1350.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(i_5_i_i84_i_reg_1350.read()));
}

void crypto_sign::thread_i_38_fu_2724_p2() {
    i_38_fu_2724_p2 = (!i_0_i_reg_1361.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i_reg_1361.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_39_fu_3113_p2() {
    i_39_fu_3113_p2 = (!i_0_i_i_i_i_reg_1407.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_i_i_i_i_reg_1407.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_i_41_fu_3444_p2() {
    i_41_fu_3444_p2 = (!i_0_i_i_reg_1441.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i_i_reg_1441.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_74_fu_3595_p2() {
    i_74_fu_3595_p2 = (!i_0_i65_reg_1499.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i65_reg_1499.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_75_fu_3607_p2() {
    i_75_fu_3607_p2 = (!i_0_i67_reg_1511.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i67_reg_1511.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_76_fu_3619_p2() {
    i_76_fu_3619_p2 = (!i_0_i69_reg_1523.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i69_reg_1523.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_77_fu_3533_p2() {
    i_77_fu_3533_p2 = (!i_0_i63_reg_1487.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_0_i63_reg_1487.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void crypto_sign::thread_i_78_fu_3643_p2() {
    i_78_fu_3643_p2 = (!i_0_i74_reg_1546.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i74_reg_1546.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_79_fu_3765_p2() {
    i_79_fu_3765_p2 = (!i_0_i76_reg_1602.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i76_reg_1602.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_80_fu_3777_p2() {
    i_80_fu_3777_p2 = (!i_0_i81_reg_1614.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i81_reg_1614.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_81_fu_3789_p2() {
    i_81_fu_3789_p2 = (!i_0_i83_reg_1626.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i83_reg_1626.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_82_fu_3942_p2() {
    i_82_fu_3942_p2 = (!i_0_i_i_i_reg_1648.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_i_i_i_reg_1648.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_i_83_fu_3813_p2() {
    i_83_fu_3813_p2 = (!i_0_i_i84_reg_1637.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i84_reg_1637.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_84_fu_3999_p2() {
    i_84_fu_3999_p2 = (!i_1_i_i_i_reg_1670.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_1_i_i_i_reg_1670.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_85_fu_4041_p2() {
    i_85_fu_4041_p2 = (!i_2_i_i_i_reg_1705.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_2_i_i_i_reg_1705.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_i_86_fu_4300_p2() {
    i_86_fu_4300_p2 = (!i_0_i_i_i136_i_reg_1727.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_i_i_i136_i_reg_1727.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void crypto_sign::thread_i_87_fu_4450_p2() {
    i_87_fu_4450_p2 = (!i_0_i177_i_reg_1772.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i177_i_reg_1772.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_88_fu_4397_p2() {
    i_88_fu_4397_p2 = (!i_0_i86_reg_1761.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i86_reg_1761.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_89_fu_4499_p2() {
    i_89_fu_4499_p2 = (!i_1_i_i_reg_1796.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_1_i_i_reg_1796.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_90_fu_4679_p2() {
    i_90_fu_4679_p2 = (!i_0_i100_reg_1888.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i100_reg_1888.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_91_fu_4789_p2() {
    i_91_fu_4789_p2 = (!i_0_i106_reg_1910.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i106_reg_1910.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_92_fu_4703_p2() {
    i_92_fu_4703_p2 = (!i_0_i_i101_reg_1899.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i101_reg_1899.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_93_fu_4801_p2() {
    i_93_fu_4801_p2 = (!i_0_i108_reg_1922.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i108_reg_1922.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_94_fu_4649_p2() {
    i_94_fu_4649_p2 = (!ap_const_lv9_1.is_01() || !i_2_i_i_reg_1807.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_1) + sc_biguint<9>(i_2_i_i_reg_1807.read()));
}

void crypto_sign::thread_i_95_fu_4553_p2() {
    i_95_fu_4553_p2 = (!i_0_i89_reg_1865.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i89_reg_1865.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void crypto_sign::thread_i_96_fu_4863_p2() {
    i_96_fu_4863_p2 = (!i_0_i116_reg_1944.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i116_reg_1944.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_97_fu_4825_p2() {
    i_97_fu_4825_p2 = (!i_0_i_i109_reg_1933.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i109_reg_1933.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_98_fu_4933_p2() {
    i_98_fu_4933_p2 = (!i_0_i84_reg_1966.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i84_reg_1966.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_i_99_fu_4887_p2() {
    i_99_fu_4887_p2 = (!i_0_i_i117_reg_1955.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i117_reg_1955.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void crypto_sign::thread_i_fu_2299_p2() {
    i_fu_2299_p2 = (!ap_const_lv64_1.is_01() || !i_0_reg_1204.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_1) + sc_biguint<64>(i_0_reg_1204.read()));
}

void crypto_sign::thread_icmp_ln100_1_fu_3759_p2() {
    icmp_ln100_1_fu_3759_p2 = (!i_0_i76_reg_1602.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i76_reg_1602.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln100_fu_3589_p2() {
    icmp_ln100_fu_3589_p2 = (!i_0_i65_reg_1499.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i65_reg_1499.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln107_fu_4783_p2() {
    icmp_ln107_fu_4783_p2 = (!i_0_i106_reg_1910.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i106_reg_1910.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln108_fu_5041_p2() {
    icmp_ln108_fu_5041_p2 = (!i_0_i_i124_reg_1999.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i124_reg_1999.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln114_fu_4673_p2() {
    icmp_ln114_fu_4673_p2 = (!i_0_i100_reg_1888.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i100_reg_1888.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln125_1_fu_3696_p2() {
    icmp_ln125_1_fu_3696_p2 = (!phi_ln125_1_reg_1569.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln125_1_reg_1569.read() == ap_const_lv8_FF);
}

void crypto_sign::thread_icmp_ln125_2_fu_3722_p2() {
    icmp_ln125_2_fu_3722_p2 = (!phi_ln125_2_reg_1580.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln125_2_reg_1580.read() == ap_const_lv8_FF);
}

void crypto_sign::thread_icmp_ln125_3_fu_3748_p2() {
    icmp_ln125_3_fu_3748_p2 = (!phi_ln125_3_reg_1591.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln125_3_reg_1591.read() == ap_const_lv8_FF);
}

void crypto_sign::thread_icmp_ln125_fu_3670_p2() {
    icmp_ln125_fu_3670_p2 = (!phi_ln125_reg_1558.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln125_reg_1558.read() == ap_const_lv8_FF);
}

void crypto_sign::thread_icmp_ln158_fu_4927_p2() {
    icmp_ln158_fu_4927_p2 = (!i_0_i84_reg_1966.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i84_reg_1966.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln173_fu_5157_p2() {
    icmp_ln173_fu_5157_p2 = (!n_reg_2043.read().is_01() || !ap_const_lv11_50.is_01())? sc_lv<1>(): (sc_biguint<11>(n_reg_2043.read()) > sc_biguint<11>(ap_const_lv11_50));
}

void crypto_sign::thread_icmp_ln181_fu_4697_p2() {
    icmp_ln181_fu_4697_p2 = (!i_0_i_i101_reg_1899.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i101_reg_1899.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln207_fu_2294_p2() {
    icmp_ln207_fu_2294_p2 = (!i_0_reg_1204.read().is_01() || !mlen.read().is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_1204.read() == mlen.read());
}

void crypto_sign::thread_icmp_ln20_fu_3438_p2() {
    icmp_ln20_fu_3438_p2 = (!i_0_i_i_reg_1441.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_reg_1441.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln21_fu_3450_p2() {
    icmp_ln21_fu_3450_p2 = (!j_0_i_i_reg_1453.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i_i_reg_1453.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln226_fu_3807_p2() {
    icmp_ln226_fu_3807_p2 = (!i_0_i_i84_reg_1637.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i84_reg_1637.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln234_fu_5075_p2() {
    icmp_ln234_fu_5075_p2 = (!i_0_i131_reg_2010.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i131_reg_2010.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln249_fu_5169_p2() {
    icmp_ln249_fu_5169_p2 = (!i_0_i_i88_reg_2055.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i88_reg_2055.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln252_fu_5017_p2() {
    icmp_ln252_fu_5017_p2 = (!i_0_i123_reg_1988.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i123_reg_1988.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln282_1_fu_3613_p2() {
    icmp_ln282_1_fu_3613_p2 = (!i_0_i69_reg_1523.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i69_reg_1523.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln282_fu_3601_p2() {
    icmp_ln282_fu_3601_p2 = (!i_0_i67_reg_1511.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i67_reg_1511.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln28_fu_3771_p2() {
    icmp_ln28_fu_3771_p2 = (!i_0_i81_reg_1614.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i81_reg_1614.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln299_fu_4951_p2() {
    icmp_ln299_fu_4951_p2 = (!i_0_i_i85_reg_1977.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i85_reg_1977.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln304_fu_5011_p2() {
    icmp_ln304_fu_5011_p2 = (!t_18_fu_5005_p2.read().is_01() || !ap_const_lv32_1FFB2.is_01())? sc_lv<1>(): (sc_bigint<32>(t_18_fu_5005_p2.read()) < sc_bigint<32>(ap_const_lv32_1FFB2));
}

void crypto_sign::thread_icmp_ln30_fu_2718_p2() {
    icmp_ln30_fu_2718_p2 = (!i_0_i_reg_1361.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_reg_1361.read() == ap_const_lv4_8);
}

void crypto_sign::thread_icmp_ln32_fu_4881_p2() {
    icmp_ln32_fu_4881_p2 = (!i_0_i_i117_reg_1955.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i117_reg_1955.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln362_1_fu_3107_p2() {
    icmp_ln362_1_fu_3107_p2 = (!i_0_i_i_i_i_reg_1407.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i_i_reg_1407.read() == ap_const_lv5_19);
}

void crypto_sign::thread_icmp_ln362_2_fu_3936_p2() {
    icmp_ln362_2_fu_3936_p2 = (!i_0_i_i_i_reg_1648.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i_reg_1648.read() == ap_const_lv5_19);
}

void crypto_sign::thread_icmp_ln362_3_fu_4294_p2() {
    icmp_ln362_3_fu_4294_p2 = (!i_0_i_i_i136_i_reg_1727.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i136_i_reg_1727.read() == ap_const_lv5_19);
}

void crypto_sign::thread_icmp_ln362_fu_2324_p2() {
    icmp_ln362_fu_2324_p2 = (!i_0_i_i4_i_reg_1215.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i4_i_reg_1215.read() == ap_const_lv5_19);
}

void crypto_sign::thread_icmp_ln371_fu_3783_p2() {
    icmp_ln371_fu_3783_p2 = (!i_0_i83_reg_1626.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i83_reg_1626.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln378_fu_3495_p2() {
    icmp_ln378_fu_3495_p2 = (!tmp_13_fu_3485_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_fu_3485_p4.read() == ap_const_lv24_0);
}

void crypto_sign::thread_icmp_ln380_fu_3528_p2() {
    icmp_ln380_fu_3528_p2 = (!i_0_i63_reg_1487.read().is_01() || !trunc_ln379_1_reg_5760.read().is_01())? sc_lv<1>(): sc_lv<1>(i_0_i63_reg_1487.read() == trunc_ln379_1_reg_5760.read());
}

void crypto_sign::thread_icmp_ln388_fu_2392_p2() {
    icmp_ln388_fu_2392_p2 = (!phi_ln388_reg_1237.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln388_reg_1237.read() == ap_const_lv3_7);
}

void crypto_sign::thread_icmp_ln392_fu_5133_p2() {
    icmp_ln392_fu_5133_p2 = (!i_0_i87_reg_2032.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i87_reg_2032.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln400_fu_2398_p2() {
    icmp_ln400_fu_2398_p2 = (!mlen.read().is_01() || !ap_const_lv64_58.is_01())? sc_lv<1>(): (sc_biguint<64>(mlen.read()) < sc_biguint<64>(ap_const_lv64_58));
}

void crypto_sign::thread_icmp_ln401_1_fu_3993_p2() {
    icmp_ln401_1_fu_3993_p2 = (!i_1_i_i_i_reg_1670.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(i_1_i_i_i_reg_1670.read() == ap_const_lv4_B);
}

void crypto_sign::thread_icmp_ln401_fu_2407_p2() {
    icmp_ln401_fu_2407_p2 = (!i_1_i_i65_i_reg_1248.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(i_1_i_i65_i_reg_1248.read() == ap_const_lv4_B);
}

void crypto_sign::thread_icmp_ln409_1_fu_4029_p2() {
    icmp_ln409_1_fu_4029_p2 = (!indvars_iv_i_i_i_reg_1681.read().is_01() || !ap_const_lv10_88.is_01())? sc_lv<1>(): (sc_biguint<10>(indvars_iv_i_i_i_reg_1681.read()) < sc_biguint<10>(ap_const_lv10_88));
}

void crypto_sign::thread_icmp_ln409_fu_2475_p2() {
    icmp_ln409_fu_2475_p2 = (!indvars_iv_i_i71_i_reg_1294.read().is_01() || !ap_const_lv64_88.is_01())? sc_lv<1>(): (sc_biguint<64>(indvars_iv_i_i71_i_reg_1294.read()) < sc_biguint<64>(ap_const_lv64_88));
}

void crypto_sign::thread_icmp_ln410_1_fu_4035_p2() {
    icmp_ln410_1_fu_4035_p2 = (!i_2_i_i_i_reg_1705.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i_2_i_i_i_reg_1705.read() == ap_const_lv5_11);
}

void crypto_sign::thread_icmp_ln410_fu_2513_p2() {
    icmp_ln410_fu_2513_p2 = (!i_2_i_i73_i_reg_1317.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i_2_i_i73_i_reg_1317.read() == ap_const_lv5_11);
}

void crypto_sign::thread_icmp_ln417_1_fu_2566_p2() {
    icmp_ln417_1_fu_2566_p2 = (!i_3_i_i78_i_reg_1328.read().is_01() || !tmp_30_reg_5419.read().is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i78_i_reg_1328.read() == tmp_30_reg_5419.read());
}

void crypto_sign::thread_icmp_ln417_2_fu_3129_p2() {
    icmp_ln417_2_fu_3129_p2 = (!i_3_i_i_i_i_reg_1418.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i_i_i_reg_1418.read() == ap_const_lv4_A);
}

void crypto_sign::thread_icmp_ln417_3_fu_3958_p2() {
    icmp_ln417_3_fu_3958_p2 = (!i_3_i_i37_i_reg_1659.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i37_i_reg_1659.read() == ap_const_lv3_6);
}

void crypto_sign::thread_icmp_ln417_4_fu_4316_p2() {
    icmp_ln417_4_fu_4316_p2 = (!i_3_i_i_i166_i_reg_1738.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i_i166_i_reg_1738.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln417_fu_2346_p2() {
    icmp_ln417_fu_2346_p2 = (!i_3_i_i119_i_reg_1226.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i119_i_reg_1226.read() == ap_const_lv3_6);
}

void crypto_sign::thread_icmp_ln423_fu_2653_p2() {
    icmp_ln423_fu_2653_p2 = (!indvars_iv_i_i71_i_reg_1294.read().is_01() || !zext_ln419_fu_2626_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(indvars_iv_i_i71_i_reg_1294.read() == zext_ln419_fu_2626_p1.read());
}

void crypto_sign::thread_icmp_ln424_fu_2659_p2() {
    icmp_ln424_fu_2659_p2 = (!i_4_i_i80_i_reg_1339.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_4_i_i80_i_reg_1339.read() == ap_const_lv4_8);
}

void crypto_sign::thread_icmp_ln426_fu_2692_p2() {
    icmp_ln426_fu_2692_p2 = (!zext_ln426_1_fu_2688_p1.read().is_01() || !trunc_ln420_reg_5481.read().is_01())? sc_lv<1>(): (sc_biguint<33>(zext_ln426_1_fu_2688_p1.read()) < sc_biguint<33>(trunc_ln420_reg_5481.read()));
}

void crypto_sign::thread_icmp_ln46_fu_3637_p2() {
    icmp_ln46_fu_3637_p2 = (!i_0_i74_reg_1546.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i74_reg_1546.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln477_1_fu_4522_p2() {
    icmp_ln477_1_fu_4522_p2 = (!i_0_i_i10_i_i_0_reg_1853.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i10_i_i_0_reg_1853.read() == ap_const_lv5_11);
}

void crypto_sign::thread_icmp_ln477_fu_4366_p2() {
    icmp_ln477_fu_4366_p2 = (!i_0_i_i14_i_i_0_reg_1749.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i14_i_i_0_reg_1749.read() == ap_const_lv5_11);
}

void crypto_sign::thread_icmp_ln47_1_fu_4547_p2() {
    icmp_ln47_1_fu_4547_p2 = (!i_0_i89_reg_1865.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i89_reg_1865.read() == ap_const_lv4_8);
}

void crypto_sign::thread_icmp_ln47_fu_4391_p2() {
    icmp_ln47_fu_4391_p2 = (!i_0_i86_reg_1761.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i86_reg_1761.read() == ap_const_lv4_8);
}

void crypto_sign::thread_icmp_ln525_fu_4444_p2() {
    icmp_ln525_fu_4444_p2 = (!i_0_i177_i_reg_1772.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i177_i_reg_1772.read() == ap_const_lv4_8);
}

void crypto_sign::thread_icmp_ln529_fu_4493_p2() {
    icmp_ln529_fu_4493_p2 = (!i_1_i_i_reg_1796.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_1_i_i_reg_1796.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln531_fu_4510_p2() {
    icmp_ln531_fu_4510_p2 = (!i_2_i_i_reg_1807.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_2_i_i_reg_1807.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln533_fu_4516_p2() {
    icmp_ln533_fu_4516_p2 = (!pos_1_i_i_reg_1842.read().is_01() || !ap_const_lv32_87.is_01())? sc_lv<1>(): (sc_biguint<32>(pos_1_i_i_reg_1842.read()) > sc_biguint<32>(ap_const_lv32_87));
}

void crypto_sign::thread_icmp_ln539_fu_4615_p2() {
    icmp_ln539_fu_4615_p2 = (!zext_ln538_1_fu_4611_p1.read().is_01() || !i_2_i_i_reg_1807.read().is_01())? sc_lv<1>(): (sc_biguint<9>(zext_ln538_1_fu_4611_p1.read()) > sc_biguint<9>(i_2_i_i_reg_1807.read()));
}

void crypto_sign::thread_icmp_ln53_fu_4857_p2() {
    icmp_ln53_fu_4857_p2 = (!i_0_i116_reg_1944.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i116_reg_1944.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln542_1_fu_3186_p2() {
    icmp_ln542_1_fu_3186_p2 = (!i_3_i_i1_reg_1429.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i1_reg_1429.read() == ap_const_lv3_6);
}

void crypto_sign::thread_icmp_ln542_2_fu_4119_p2() {
    icmp_ln542_2_fu_4119_p2 = (!i_3_i_i45_reg_1716.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i45_reg_1716.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln542_fu_2855_p2() {
    icmp_ln542_fu_2855_p2 = (!i_3_i_i_reg_1395.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(i_3_i_i_reg_1395.read() == ap_const_lv3_6);
}

void crypto_sign::thread_icmp_ln69_1_fu_5212_p2() {
    icmp_ln69_1_fu_5212_p2 = (!w0_vec_coeffs_q0.read().is_01() || !ap_const_lv32_7E6C01.is_01())? sc_lv<1>(): (sc_bigint<32>(w0_vec_coeffs_q0.read()) > sc_bigint<32>(ap_const_lv32_7E6C01));
}

void crypto_sign::thread_icmp_ln69_2_fu_5218_p2() {
    icmp_ln69_2_fu_5218_p2 = (!w0_vec_coeffs_q0.read().is_01() || !ap_const_lv32_7E6C01.is_01())? sc_lv<1>(): sc_lv<1>(w0_vec_coeffs_q0.read() == ap_const_lv32_7E6C01);
}

void crypto_sign::thread_icmp_ln69_3_fu_5224_p2() {
    icmp_ln69_3_fu_5224_p2 = (!w1_vec_coeffs_q0.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(w1_vec_coeffs_q0.read() == ap_const_lv32_0);
}

void crypto_sign::thread_icmp_ln69_fu_5206_p2() {
    icmp_ln69_fu_5206_p2 = (!w0_vec_coeffs_q0.read().is_01() || !ap_const_lv32_17401.is_01())? sc_lv<1>(): (sc_bigint<32>(w0_vec_coeffs_q0.read()) < sc_bigint<32>(ap_const_lv32_17401));
}

void crypto_sign::thread_icmp_ln85_fu_4795_p2() {
    icmp_ln85_fu_4795_p2 = (!i_0_i108_reg_1922.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i108_reg_1922.read() == ap_const_lv3_4);
}

void crypto_sign::thread_icmp_ln87_1_fu_5099_p2() {
    icmp_ln87_1_fu_5099_p2 = (!i_0_i_i132_reg_2021.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i132_reg_2021.read() == ap_const_lv9_100);
}

void crypto_sign::thread_icmp_ln87_fu_4819_p2() {
    icmp_ln87_fu_4819_p2 = (!i_0_i_i109_reg_1933.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i109_reg_1933.read() == ap_const_lv9_100);
}

void crypto_sign::thread_j_fu_3456_p2() {
    j_fu_3456_p2 = (!j_0_i_i_reg_1453.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_i_i_reg_1453.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void crypto_sign::thread_lshr_ln48_1_fu_4575_p2() {
    lshr_ln48_1_fu_4575_p2 = (!zext_ln48_4_fu_4571_p1.read().is_01())? sc_lv<64>(): reg_2261.read() >> (unsigned short)zext_ln48_4_fu_4571_p1.read().to_uint();
}

void crypto_sign::thread_lshr_ln48_fu_4419_p2() {
    lshr_ln48_fu_4419_p2 = (!zext_ln48_fu_4415_p1.read().is_01())? sc_lv<64>(): reg_2261.read() >> (unsigned short)zext_ln48_fu_4415_p1.read().to_uint();
}

void crypto_sign::thread_lshr_ln_fu_2735_p4() {
    lshr_ln_fu_2735_p4 = add_ln421_reg_5486.read().range(8, 3);
}

void crypto_sign::thread_m_address0() {
    m_address0 =  (sc_lv<12>) (zext_ln208_fu_2310_p1.read());
}

void crypto_sign::thread_m_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_ce0 = ap_const_logic_1;
    } else {
        m_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_mat_vec_coeffs_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        mat_vec_coeffs_address0 = grp_rej_uniform_fu_2185_a_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        mat_vec_coeffs_address0 = grp_polyvecl_pointwise_a_fu_2176_u_vec_coeffs_address0.read();
    } else {
        mat_vec_coeffs_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void crypto_sign::thread_mat_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        mat_vec_coeffs_ce0 = grp_rej_uniform_fu_2185_a_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        mat_vec_coeffs_ce0 = grp_polyvecl_pointwise_a_fu_2176_u_vec_coeffs_ce0.read();
    } else {
        mat_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_mat_vec_coeffs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        mat_vec_coeffs_we0 = grp_rej_uniform_fu_2185_a_we0.read();
    } else {
        mat_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_mul_ln182_fu_4736_p0() {
    mul_ln182_fu_4736_p0 = s1_vec_coeffs_q0.read();
}

void crypto_sign::thread_mul_ln182_fu_4736_p1() {
    mul_ln182_fu_4736_p1 = cp_coeffs_q0.read();
}

void crypto_sign::thread_mul_ln182_fu_4736_p2() {
    mul_ln182_fu_4736_p2 = (!mul_ln182_fu_4736_p0.read().is_01() || !mul_ln182_fu_4736_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln182_fu_4736_p0.read()) * sc_bigint<32>(mul_ln182_fu_4736_p1.read());
}

void crypto_sign::thread_mul_ln19_fu_4756_p1() {
    mul_ln19_fu_4756_p1 = t_13_fu_4746_p2.read();
}

void crypto_sign::thread_mul_ln19_fu_4756_p2() {
    mul_ln19_fu_4756_p2 = (!ap_const_lv55_7FFFFFFF801FFF.is_01() || !mul_ln19_fu_4756_p1.read().is_01())? sc_lv<55>(): sc_bigint<55>(ap_const_lv55_7FFFFFFF801FFF) * sc_bigint<32>(mul_ln19_fu_4756_p1.read());
}

void crypto_sign::thread_nonce_assign_fu_3466_p4() {
    nonce_assign_fu_3466_p4 = esl_concat<7,3>(esl_concat<2,5>(trunc_ln22_fu_3462_p1.read(), ap_const_lv5_0), j_0_i_i_reg_1453.read());
}

void crypto_sign::thread_nonce_fu_3625_p2() {
    nonce_fu_3625_p2 = (!ap_const_lv16_1.is_01() || !nonce_assign_1_reg_1535.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_1) + sc_biguint<16>(nonce_assign_1_reg_1535.read()));
}

void crypto_sign::thread_or_ln544_1_fu_3237_p2() {
    or_ln544_1_fu_3237_p2 = (shl_ln543_1_fu_3203_p3.read() | ap_const_lv6_1);
}

void crypto_sign::thread_or_ln544_2_fu_4163_p2() {
    or_ln544_2_fu_4163_p2 = (shl_ln543_2_fu_4140_p3.read() | ap_const_lv5_1);
}

void crypto_sign::thread_or_ln544_fu_2906_p2() {
    or_ln544_fu_2906_p2 = (shl_ln18_fu_2872_p3.read() | ap_const_lv6_1);
}

void crypto_sign::thread_or_ln545_1_fu_3318_p2() {
    or_ln545_1_fu_3318_p2 = (shl_ln543_1_reg_5681.read() | ap_const_lv6_2);
}

void crypto_sign::thread_or_ln545_2_fu_4234_p2() {
    or_ln545_2_fu_4234_p2 = (shl_ln543_2_reg_6085.read() | ap_const_lv5_2);
}

void crypto_sign::thread_or_ln545_fu_2987_p2() {
    or_ln545_fu_2987_p2 = (shl_ln18_reg_5589.read() | ap_const_lv6_2);
}

void crypto_sign::thread_or_ln546_1_fu_3338_p2() {
    or_ln546_1_fu_3338_p2 = (shl_ln543_1_reg_5681.read() | ap_const_lv6_3);
}

void crypto_sign::thread_or_ln546_2_fu_4244_p2() {
    or_ln546_2_fu_4244_p2 = (shl_ln543_2_reg_6085.read() | ap_const_lv5_3);
}

void crypto_sign::thread_or_ln546_fu_3007_p2() {
    or_ln546_fu_3007_p2 = (shl_ln18_reg_5589.read() | ap_const_lv6_3);
}

void crypto_sign::thread_or_ln547_1_fu_3358_p2() {
    or_ln547_1_fu_3358_p2 = (shl_ln543_1_reg_5681.read() | ap_const_lv6_4);
}

void crypto_sign::thread_or_ln547_2_fu_4254_p2() {
    or_ln547_2_fu_4254_p2 = (shl_ln543_2_reg_6085.read() | ap_const_lv5_4);
}

void crypto_sign::thread_or_ln547_fu_3027_p2() {
    or_ln547_fu_3027_p2 = (shl_ln18_reg_5589.read() | ap_const_lv6_4);
}

void crypto_sign::thread_or_ln548_1_fu_3378_p2() {
    or_ln548_1_fu_3378_p2 = (shl_ln543_1_reg_5681.read() | ap_const_lv6_5);
}

void crypto_sign::thread_or_ln548_2_fu_4264_p2() {
    or_ln548_2_fu_4264_p2 = (shl_ln543_2_reg_6085.read() | ap_const_lv5_5);
}

void crypto_sign::thread_or_ln548_fu_3047_p2() {
    or_ln548_fu_3047_p2 = (shl_ln18_reg_5589.read() | ap_const_lv6_5);
}

void crypto_sign::thread_or_ln549_1_fu_3398_p2() {
    or_ln549_1_fu_3398_p2 = (shl_ln543_1_reg_5681.read() | ap_const_lv6_6);
}

void crypto_sign::thread_or_ln549_2_fu_4274_p2() {
    or_ln549_2_fu_4274_p2 = (shl_ln543_2_reg_6085.read() | ap_const_lv5_6);
}

void crypto_sign::thread_or_ln549_fu_3067_p2() {
    or_ln549_fu_3067_p2 = (shl_ln18_reg_5589.read() | ap_const_lv6_6);
}

void crypto_sign::thread_or_ln550_1_fu_3418_p2() {
    or_ln550_1_fu_3418_p2 = (shl_ln543_1_reg_5681.read() | ap_const_lv6_7);
}

void crypto_sign::thread_or_ln550_2_fu_4284_p2() {
    or_ln550_2_fu_4284_p2 = (shl_ln543_2_reg_6085.read() | ap_const_lv5_7);
}

void crypto_sign::thread_or_ln550_fu_3087_p2() {
    or_ln550_fu_3087_p2 = (shl_ln18_reg_5589.read() | ap_const_lv6_7);
}

void crypto_sign::thread_or_ln69_1_fu_5242_p2() {
    or_ln69_1_fu_5242_p2 = (or_ln69_fu_5236_p2.read() | icmp_ln69_fu_5206_p2.read());
}

void crypto_sign::thread_or_ln69_fu_5236_p2() {
    or_ln69_fu_5236_p2 = (icmp_ln69_1_fu_5212_p2.read() | and_ln69_fu_5230_p2.read());
}

void crypto_sign::thread_pos_fu_4600_p2() {
    pos_fu_4600_p2 = (!pos_2_i_i_reg_1876.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pos_2_i_i_reg_1876.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void crypto_sign::thread_r_fu_2778_p2() {
    r_fu_2778_p2 = (shl_ln31_fu_2772_p2.read() | r_0_i_reg_1373.read());
}

void crypto_sign::thread_s1_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        s1_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln182_17_fu_4723_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        s1_vec_coeffs_address0 = grp_ntt_1_fu_2164_a_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_address0 = grp_unpack_sk_fu_2116_s1_vec_coeffs_address0.read();
    } else {
        s1_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_s1_vec_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        s1_vec_coeffs_address1 = grp_ntt_1_fu_2164_a_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_address1 = grp_unpack_sk_fu_2116_s1_vec_coeffs_address1.read();
    } else {
        s1_vec_coeffs_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_s1_vec_coeffs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        s1_vec_coeffs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        s1_vec_coeffs_ce0 = grp_ntt_1_fu_2164_a_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_ce0 = grp_unpack_sk_fu_2116_s1_vec_coeffs_ce0.read();
    } else {
        s1_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s1_vec_coeffs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        s1_vec_coeffs_ce1 = grp_ntt_1_fu_2164_a_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_ce1 = grp_unpack_sk_fu_2116_s1_vec_coeffs_ce1.read();
    } else {
        s1_vec_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s1_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        s1_vec_coeffs_d0 = grp_ntt_1_fu_2164_a_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_d0 = grp_unpack_sk_fu_2116_s1_vec_coeffs_d0.read();
    } else {
        s1_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_s1_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        s1_vec_coeffs_we0 = grp_ntt_1_fu_2164_a_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_we0 = grp_unpack_sk_fu_2116_s1_vec_coeffs_we0.read();
    } else {
        s1_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s1_vec_coeffs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s1_vec_coeffs_we1 = grp_unpack_sk_fu_2116_s1_vec_coeffs_we1.read();
    } else {
        s1_vec_coeffs_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s2_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        s2_vec_coeffs_address0 = grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        s2_vec_coeffs_address0 = grp_ntt_1_fu_2164_a_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_address0 = grp_unpack_sk_fu_2116_s2_vec_coeffs_address0.read();
    } else {
        s2_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_s2_vec_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        s2_vec_coeffs_address1 = grp_ntt_1_fu_2164_a_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_address1 = grp_unpack_sk_fu_2116_s2_vec_coeffs_address1.read();
    } else {
        s2_vec_coeffs_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_s2_vec_coeffs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        s2_vec_coeffs_ce0 = grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        s2_vec_coeffs_ce0 = grp_ntt_1_fu_2164_a_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_ce0 = grp_unpack_sk_fu_2116_s2_vec_coeffs_ce0.read();
    } else {
        s2_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s2_vec_coeffs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        s2_vec_coeffs_ce1 = grp_ntt_1_fu_2164_a_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_ce1 = grp_unpack_sk_fu_2116_s2_vec_coeffs_ce1.read();
    } else {
        s2_vec_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s2_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        s2_vec_coeffs_d0 = grp_ntt_1_fu_2164_a_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_d0 = grp_unpack_sk_fu_2116_s2_vec_coeffs_d0.read();
    } else {
        s2_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_s2_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        s2_vec_coeffs_we0 = grp_ntt_1_fu_2164_a_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_we0 = grp_unpack_sk_fu_2116_s2_vec_coeffs_we0.read();
    } else {
        s2_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s2_vec_coeffs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s2_vec_coeffs_we1 = grp_unpack_sk_fu_2116_s2_vec_coeffs_we1.read();
    } else {
        s2_vec_coeffs_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_s_1_fu_5263_p2() {
    s_1_fu_5263_p2 = (!s_0_i_i_reg_2066.read().is_01() || !zext_ln69_fu_5254_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(s_0_i_i_reg_2066.read()) + sc_biguint<9>(zext_ln69_fu_5254_p1.read()));
}

void crypto_sign::thread_s_fu_5200_p2() {
    s_fu_5200_p2 = (!zext_ln249_fu_5196_p1.read().is_01() || !n_reg_2043.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln249_fu_5196_p1.read()) + sc_biguint<11>(n_reg_2043.read()));
}

void crypto_sign::thread_seedbuf_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln549_3_fu_3413_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln547_3_fu_3373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln545_3_fu_3333_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln543_3_fu_3221_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln549_1_fu_3082_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln547_1_fu_3042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln545_1_fu_3002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        seedbuf_address0 =  (sc_lv<8>) (zext_ln543_1_fu_2890_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        seedbuf_address0 = grp_load64_2_fu_2223_x_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        seedbuf_address0 = grp_dilithium_shake128_s_fu_2126_seed_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        seedbuf_address0 = grp_unpack_sk_fu_2116_rho_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        seedbuf_address0 = grp_poly_uniform_gamma1_fu_2078_seed_address0.read();
    } else {
        seedbuf_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_seedbuf_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln550_3_fu_3433_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln548_3_fu_3393_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln546_3_fu_3353_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln544_3_fu_3253_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln550_1_fu_3102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln548_1_fu_3062_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln546_1_fu_3022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        seedbuf_address1 =  (sc_lv<8>) (zext_ln544_1_fu_2922_p1.read());
    } else {
        seedbuf_address1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_seedbuf_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        seedbuf_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        seedbuf_ce0 = grp_load64_2_fu_2223_x_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        seedbuf_ce0 = grp_dilithium_shake128_s_fu_2126_seed_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        seedbuf_ce0 = grp_unpack_sk_fu_2116_rho_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        seedbuf_ce0 = grp_poly_uniform_gamma1_fu_2078_seed_ce0.read();
    } else {
        seedbuf_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_seedbuf_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        seedbuf_ce1 = ap_const_logic_1;
    } else {
        seedbuf_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_seedbuf_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        seedbuf_d0 = trunc_ln549_1_reg_5711.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        seedbuf_d0 = trunc_ln547_1_reg_5701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        seedbuf_d0 = trunc_ln545_1_reg_5691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        seedbuf_d0 = trunc_ln543_1_fu_3198_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        seedbuf_d0 = trunc_ln9_reg_5619.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        seedbuf_d0 = trunc_ln7_reg_5609.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        seedbuf_d0 = trunc_ln5_reg_5599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        seedbuf_d0 = trunc_ln543_fu_2867_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        seedbuf_d0 = grp_unpack_sk_fu_2116_rho_d0.read();
    } else {
        seedbuf_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_seedbuf_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        seedbuf_d1 = trunc_ln550_1_reg_5716.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        seedbuf_d1 = trunc_ln548_1_reg_5706.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        seedbuf_d1 = trunc_ln546_1_reg_5696.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        seedbuf_d1 = state_0_s_q1.read().range(15, 8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        seedbuf_d1 = trunc_ln10_reg_5624.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        seedbuf_d1 = trunc_ln8_reg_5614.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        seedbuf_d1 = trunc_ln6_reg_5604.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        seedbuf_d1 = state_s_2_q0.read().range(15, 8);
    } else {
        seedbuf_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_seedbuf_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        seedbuf_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        seedbuf_we0 = grp_unpack_sk_fu_2116_rho_we0.read();
    } else {
        seedbuf_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_seedbuf_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        seedbuf_we1 = ap_const_logic_1;
    } else {
        seedbuf_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_select_ln48_fu_3886_p3() {
    select_ln48_fu_3886_p3 = (!xor_ln48_fu_3880_p2.read()[0].is_01())? sc_lv<8>(): ((xor_ln48_fu_3880_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void crypto_sign::thread_select_ln52_fu_3922_p3() {
    select_ln52_fu_3922_p3 = (!tmp_15_fu_3914_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_15_fu_3914_p3.read()[0].to_bool())? ap_const_lv32_7FE001: ap_const_lv32_0);
}

void crypto_sign::thread_sext_ln125_1_fu_3702_p1() {
    sext_ln125_1_fu_3702_p1 = esl_sext<32,19>(y_vec_coeffs_q0.read());
}

void crypto_sign::thread_sext_ln125_2_fu_3728_p1() {
    sext_ln125_2_fu_3728_p1 = esl_sext<32,19>(y_vec_coeffs_q0.read());
}

void crypto_sign::thread_sext_ln125_3_fu_3754_p1() {
    sext_ln125_3_fu_3754_p1 = esl_sext<32,19>(y_vec_coeffs_q0.read());
}

void crypto_sign::thread_sext_ln125_fu_3676_p1() {
    sext_ln125_fu_3676_p1 = esl_sext<32,19>(y_vec_coeffs_q0.read());
}

void crypto_sign::thread_sext_ln19_14_fu_4762_p1() {
    sext_ln19_14_fu_4762_p1 = esl_sext<64,55>(mul_ln19_fu_4756_p2.read());
}

void crypto_sign::thread_sext_ln378_fu_3477_p1() {
    sext_ln378_fu_3477_p1 = esl_sext<10,9>(buflen_0_i_reg_1475.read());
}

void crypto_sign::thread_sext_ln381_fu_3544_p1() {
    sext_ln381_fu_3544_p1 = esl_sext<32,11>(add_ln381_fu_3539_p2.read());
}

void crypto_sign::thread_sext_ln409_fu_2459_p1() {
    sext_ln409_fu_2459_p1 = esl_sext<6,5>(ap_phi_mux_p_23_i_i68_i_phi_fu_1275_p4.read());
}

void crypto_sign::thread_sext_ln418_fu_2495_p1() {
    sext_ln418_fu_2495_p1 = esl_sext<3,2>(trunc_ln418_1_fu_2485_p4.read());
}

void crypto_sign::thread_sext_ln449_fu_2805_p1() {
    sext_ln449_fu_2805_p1 = esl_sext<29,7>(trunc_ln_fu_2795_p4.read());
}

void crypto_sign::thread_sext_ln47_fu_3862_p1() {
    sext_ln47_fu_3862_p1 = esl_sext<9,8>(trunc_ln12_fu_3853_p4.read());
}

void crypto_sign::thread_sext_ln48_1_fu_3904_p1() {
    sext_ln48_1_fu_3904_p1 = esl_sext<32,8>(a1_1_fu_3894_p2.read());
}

void crypto_sign::thread_sext_ln542_fu_4668_p1() {
    sext_ln542_fu_4668_p1 = esl_sext<32,2>(sub_ln542_fu_4662_p2.read());
}

void crypto_sign::thread_sext_ln88_fu_4846_p1() {
    sext_ln88_fu_4846_p1 = esl_sext<32,19>(y_vec_coeffs_q0.read());
}

void crypto_sign::thread_shl_ln14_fu_2419_p3() {
    shl_ln14_fu_2419_p3 = esl_concat<4,3>(i_1_i_i65_i_reg_1248.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln15_fu_2525_p3() {
    shl_ln15_fu_2525_p3 = esl_concat<5,3>(i_2_i_i73_i_reg_1317.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln16_fu_2760_p3() {
    shl_ln16_fu_2760_p3 = esl_concat<3,3>(trunc_ln31_4_fu_2756_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln17_fu_2818_p3() {
    shl_ln17_fu_2818_p3 = esl_concat<3,3>(trunc_ln451_fu_2814_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln18_fu_2872_p3() {
    shl_ln18_fu_2872_p3 = esl_concat<3,3>(i_3_i_i_reg_1395.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln19_fu_4383_p3() {
    shl_ln19_fu_4383_p3 = esl_concat<5,3>(i_0_i_i14_i_i_0_reg_1749.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln20_fu_4469_p3() {
    shl_ln20_fu_4469_p3 = esl_concat<3,3>(trunc_ln526_fu_4465_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln21_fu_4407_p3() {
    shl_ln21_fu_4407_p3 = esl_concat<3,3>(trunc_ln48_fu_4403_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln22_fu_4655_p3() {
    shl_ln22_fu_4655_p3 = esl_concat<1,1>(trunc_ln542_reg_6255.read(), ap_const_lv1_0);
}

void crypto_sign::thread_shl_ln302_fu_4993_p2() {
    shl_ln302_fu_4993_p2 = (!ap_const_lv32_1.is_01())? sc_lv<32>(): z_vec_coeffs_q0.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void crypto_sign::thread_shl_ln31_fu_2772_p2() {
    shl_ln31_fu_2772_p2 = (!zext_ln31_7_fu_2768_p1.read().is_01())? sc_lv<64>(): zext_ln31_6_fu_2752_p1.read() << (unsigned short)zext_ln31_7_fu_2768_p1.read().to_uint();
}

void crypto_sign::thread_shl_ln402_1_fu_4005_p3() {
    shl_ln402_1_fu_4005_p3 = esl_concat<4,3>(i_1_i_i_i_reg_1670.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln411_1_fu_4047_p3() {
    shl_ln411_1_fu_4047_p3 = esl_concat<5,3>(i_2_i_i_i_reg_1705.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln418_1_fu_2581_p3() {
    shl_ln418_1_fu_2581_p3 = esl_concat<4,3>(trunc_ln418_fu_2577_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln418_2_fu_3141_p3() {
    shl_ln418_2_fu_3141_p3 = esl_concat<4,3>(i_3_i_i_i_i_reg_1418.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln418_3_fu_3970_p3() {
    shl_ln418_3_fu_3970_p3 = esl_concat<3,3>(i_3_i_i37_i_reg_1659.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln418_4_fu_4332_p3() {
    shl_ln418_4_fu_4332_p3 = esl_concat<2,3>(trunc_ln418_2_fu_4328_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln451_fu_2830_p2() {
    shl_ln451_fu_2830_p2 = (!zext_ln451_fu_2826_p1.read().is_01())? sc_lv<64>(): ap_const_lv64_1F << (unsigned short)zext_ln451_fu_2826_p1.read().to_uint();
}

void crypto_sign::thread_shl_ln478_1_fu_4539_p3() {
    shl_ln478_1_fu_4539_p3 = esl_concat<5,3>(i_0_i_i10_i_i_0_reg_1853.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln47_fu_3631_p2() {
    shl_ln47_fu_3631_p2 = (!ap_const_lv16_2.is_01())? sc_lv<16>(): nonce_assign_1_reg_1535.read() << (unsigned short)ap_const_lv16_2.to_uint();
}

void crypto_sign::thread_shl_ln48_1_fu_4563_p3() {
    shl_ln48_1_fu_4563_p3 = esl_concat<3,3>(trunc_ln48_4_fu_4559_p1.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln526_fu_4481_p2() {
    shl_ln526_fu_4481_p2 = (!zext_ln526_2_fu_4477_p1.read().is_01())? sc_lv<64>(): zext_ln526_1_fu_4461_p1.read() << (unsigned short)zext_ln526_2_fu_4477_p1.read().to_uint();
}

void crypto_sign::thread_shl_ln543_1_fu_3203_p3() {
    shl_ln543_1_fu_3203_p3 = esl_concat<3,3>(i_3_i_i1_reg_1429.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln543_2_fu_4140_p3() {
    shl_ln543_2_fu_4140_p3 = esl_concat<2,3>(trunc_ln543_3_reg_6080.read(), ap_const_lv3_0);
}

void crypto_sign::thread_shl_ln_fu_2358_p3() {
    shl_ln_fu_2358_p3 = esl_concat<3,3>(i_3_i_i119_i_reg_1226.read(), ap_const_lv3_0);
}

void crypto_sign::thread_signs_1_fu_4630_p4() {
    signs_1_fu_4630_p4 = signs_1_i_i_reg_1831.read().range(63, 1);
}

void crypto_sign::thread_signs_2_fu_4640_p1() {
    signs_2_fu_4640_p1 = esl_zext<64,63>(signs_1_fu_4630_p4.read());
}

void crypto_sign::thread_signs_fu_4487_p2() {
    signs_fu_4487_p2 = (shl_ln526_fu_4481_p2.read() | signs_0_i_i_reg_1784.read());
}

void crypto_sign::thread_sk_address0() {
    sk_address0 = grp_unpack_sk_fu_2116_sk_address0.read();
}

void crypto_sign::thread_sk_address1() {
    sk_address1 = grp_unpack_sk_fu_2116_sk_address1.read();
}

void crypto_sign::thread_sk_ce0() {
    sk_ce0 = grp_unpack_sk_fu_2116_sk_ce0.read();
}

void crypto_sign::thread_sk_ce1() {
    sk_ce1 = grp_unpack_sk_fu_2116_sk_ce1.read();
}

void crypto_sign::thread_sm_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        sm_address0 =  (sc_lv<13>) (zext_ln550_4_fu_4289_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        sm_address0 =  (sc_lv<13>) (zext_ln548_4_fu_4269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        sm_address0 =  (sc_lv<13>) (zext_ln546_4_fu_4249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        sm_address0 =  (sc_lv<13>) (zext_ln543_4_fu_4147_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        sm_address0 =  (sc_lv<13>) (zext_ln427_fu_2713_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        sm_address0 =  (sc_lv<13>) (zext_ln208_1_fu_2320_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        sm_address0 = grp_load64_3_fu_2216_x_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_address0 = grp_polyveck_pack_w1_fu_2202_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        sm_address0 = grp_pack_sig_fu_2149_sig_address0.read();
    } else {
        sm_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_sm_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        sm_address1 =  (sc_lv<13>) (zext_ln549_4_fu_4279_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        sm_address1 =  (sc_lv<13>) (zext_ln547_4_fu_4259_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        sm_address1 =  (sc_lv<13>) (zext_ln545_4_fu_4239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        sm_address1 =  (sc_lv<13>) (zext_ln544_4_fu_4169_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_address1 = grp_polyveck_pack_w1_fu_2202_r_address1.read();
    } else {
        sm_address1 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_sm_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        sm_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        sm_ce0 = grp_load64_3_fu_2216_x_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_ce0 = grp_polyveck_pack_w1_fu_2202_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        sm_ce0 = grp_pack_sig_fu_2149_sig_ce0.read();
    } else {
        sm_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_sm_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        sm_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_ce1 = grp_polyveck_pack_w1_fu_2202_r_ce1.read();
    } else {
        sm_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_sm_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        sm_d0 = trunc_ln550_2_reg_6120.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        sm_d0 = trunc_ln548_2_reg_6110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        sm_d0 = trunc_ln546_2_reg_6100.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        sm_d0 = trunc_ln543_2_fu_4135_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        sm_d0 = m_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_d0 = grp_polyveck_pack_w1_fu_2202_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        sm_d0 = grp_pack_sig_fu_2149_sig_d0.read();
    } else {
        sm_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_sm_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        sm_d1 = trunc_ln549_2_reg_6115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        sm_d1 = trunc_ln547_2_reg_6105.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        sm_d1 = trunc_ln545_2_reg_6095.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        sm_d1 = state_s_2_q1.read().range(15, 8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_d1 = grp_polyveck_pack_w1_fu_2202_r_d1.read();
    } else {
        sm_d1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_sm_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        sm_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_we0 = grp_polyveck_pack_w1_fu_2202_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        sm_we0 = grp_pack_sig_fu_2149_sig_we0.read();
    } else {
        sm_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_sm_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        sm_we1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        sm_we1 = grp_polyveck_pack_w1_fu_2202_r_we1.read();
    } else {
        sm_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_smlen() {
    smlen = (!mlen.read().is_01() || !ap_const_lv64_974.is_01())? sc_lv<64>(): (sc_biguint<64>(mlen.read()) + sc_biguint<64>(ap_const_lv64_974));
}

void crypto_sign::thread_smlen_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln158_reg_6371.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_reg_6432.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_6436.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln392_fu_5133_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln173_fu_5157_p2.read()))) {
        smlen_ap_vld = ap_const_logic_1;
    } else {
        smlen_ap_vld = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_0_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        state_0_s_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_2_fu_3129_p2.read()))) {
        state_0_s_address0 =  (sc_lv<5>) (ap_const_lv64_A);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_2_fu_3129_p2.read()))) {
        state_0_s_address0 =  (sc_lv<5>) (zext_ln417_1_fu_3124_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        state_0_s_address0 =  (sc_lv<5>) (zext_ln363_1_fu_3119_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_address0 = grp_KeccakF1600_StatePer_fu_2109_state_0_address0.read();
    } else {
        state_0_s_address0 = "XXXXX";
    }
}

void crypto_sign::thread_state_0_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        state_0_s_address1 =  (sc_lv<5>) (zext_ln542_1_fu_3181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        state_0_s_address1 =  (sc_lv<5>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        state_0_s_address1 = state_0_s_addr_3_reg_5650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        state_0_s_address1 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_address1 = grp_KeccakF1600_StatePer_fu_2109_state_0_address1.read();
    } else {
        state_0_s_address1 = "XXXXX";
    }
}

void crypto_sign::thread_state_0_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_2_fu_3129_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_2_fu_3129_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()))) {
        state_0_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_ce0 = grp_KeccakF1600_StatePer_fu_2109_state_0_ce0.read();
    } else {
        state_0_s_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_0_s_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(grp_load64_2_fu_2223_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()))) {
        state_0_s_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_ce1 = grp_KeccakF1600_StatePer_fu_2109_state_0_ce1.read();
    } else {
        state_0_s_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_0_s_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        state_0_s_d0 = xor_ln452_1_fu_3174_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        state_0_s_d0 = ap_const_lv64_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_d0 = grp_KeccakF1600_StatePer_fu_2109_state_0_d0.read();
    } else {
        state_0_s_d0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_0_s_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        state_0_s_d1 = xor_ln451_1_fu_3167_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        state_0_s_d1 = xor_ln418_2_fu_3160_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_d1 = grp_KeccakF1600_StatePer_fu_2109_state_0_d1.read();
    } else {
        state_0_s_d1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_0_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_1_fu_3107_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()))) {
        state_0_s_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_we0 = grp_KeccakF1600_StatePer_fu_2109_state_0_we0.read();
    } else {
        state_0_s_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_0_s_we1() {
    if (((esl_seteq<1,1,1>(grp_load64_2_fu_2223_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()))) {
        state_0_s_we1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_s_we1 = grp_KeccakF1600_StatePer_fu_2109_state_0_we1.read();
    } else {
        state_0_s_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        state_s_1_address0 =  (sc_lv<5>) (zext_ln478_1_fu_4534_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        state_s_1_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_4_fu_4316_p2.read()))) {
        state_s_1_address0 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_4_fu_4316_p2.read()))) {
        state_s_1_address0 =  (sc_lv<5>) (zext_ln417_3_fu_4311_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        state_s_1_address0 =  (sc_lv<5>) (zext_ln363_3_fu_4306_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_address0 = grp_KeccakF1600_StatePer_1_fu_2102_state_address0.read();
    } else {
        state_s_1_address0 = "XXXXX";
    }
}

void crypto_sign::thread_state_s_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        state_s_1_address1 =  (sc_lv<5>) (zext_ln478_fu_4378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        state_s_1_address1 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        state_s_1_address1 = state_s_1_addr_3_reg_6146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        state_s_1_address1 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_address1 = grp_KeccakF1600_StatePer_1_fu_2102_state_address1.read();
    } else {
        state_s_1_address1 = "XXXXX";
    }
}

void crypto_sign::thread_state_s_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln417_4_fu_4316_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_4_fu_4316_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()))) {
        state_s_1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_ce0 = grp_KeccakF1600_StatePer_1_fu_2102_state_ce0.read();
    } else {
        state_s_1_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()))) {
        state_s_1_ce1 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_ce1 = grp_KeccakF1600_StatePer_1_fu_2102_state_ce1.read();
    } else {
        state_s_1_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        state_s_1_d0 = xor_ln452_3_fu_4359_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        state_s_1_d0 = ap_const_lv64_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_d0 = grp_KeccakF1600_StatePer_1_fu_2102_state_d0.read();
    } else {
        state_s_1_d0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_s_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        state_s_1_d1 = xor_ln451_3_fu_4352_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        state_s_1_d1 = xor_ln418_4_fu_4345_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_d1 = grp_KeccakF1600_StatePer_1_fu_2102_state_d1.read();
    } else {
        state_s_1_d1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_s_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_3_fu_4294_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()))) {
        state_s_1_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_we0 = grp_KeccakF1600_StatePer_1_fu_2102_state_we0.read();
    } else {
        state_s_1_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_1_we1() {
    if (((esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()))) {
        state_s_1_we1 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        state_s_1_we1 = grp_KeccakF1600_StatePer_1_fu_2102_state_we1.read();
    } else {
        state_s_1_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_2_addr_7_reg_5570() {
    state_s_2_addr_7_reg_5570 =  (sc_lv<5>) (ap_const_lv64_10);
}

void crypto_sign::thread_state_s_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        state_s_2_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        state_s_2_address0 = state_s_2_addr_12_reg_6031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_1_fu_3993_p2.read()))) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln402_4_fu_4024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        state_s_2_address0 = state_s_2_addr_11_reg_6013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln417_2_fu_3953_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln363_2_fu_3948_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln542_fu_2850_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()))) {
        state_s_2_address0 = state_s_2_addr_7_reg_5570.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        state_s_2_address0 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        state_s_2_address0 = state_s_2_addr_6_reg_5565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln451_1_fu_2809_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        state_s_2_address0 = state_s_2_addr_5_reg_5545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln428_fu_2744_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        state_s_2_address0 = state_s_2_addr_3_reg_5466.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln418_4_fu_2610_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        state_s_2_address0 = state_s_2_addr_4_reg_5438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_fu_2513_p2.read()))) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln411_1_fu_2549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        state_s_2_address0 = state_s_2_addr_2_reg_5385.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_fu_2407_p2.read()))) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln402_2_fu_2448_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        state_s_2_address0 = state_s_2_addr_1_reg_5355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln417_fu_2341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        state_s_2_address0 =  (sc_lv<5>) (zext_ln363_fu_2336_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_address0 = grp_KeccakF1600_StatePer_1_fu_2102_state_address0.read();
    } else {
        state_s_2_address0 = "XXXXX";
    }
}

void crypto_sign::thread_state_s_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        state_s_2_address1 =  (sc_lv<5>) (zext_ln542_2_fu_4114_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        state_s_2_address1 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        state_s_2_address1 = state_s_2_addr_14_reg_6052.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_1_fu_4035_p2.read()))) {
        state_s_2_address1 =  (sc_lv<5>) (zext_ln411_4_fu_4076_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        state_s_2_address1 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_address1 = grp_KeccakF1600_StatePer_1_fu_2102_state_address1.read();
    } else {
        state_s_2_address1 = "XXXXX";
    }
}

void crypto_sign::thread_state_s_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_fu_2407_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_fu_2513_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln401_1_fu_3993_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(grp_load64_2_fu_2223_ap_done.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) || 
         (esl_seteq<1,1,1>(grp_load64_2_fu_2223_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()))) {
        state_s_2_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_ce0 = grp_KeccakF1600_StatePer_1_fu_2102_state_ce0.read();
    } else {
        state_s_2_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln410_1_fu_4035_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()))) {
        state_s_2_ce1 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_ce1 = grp_KeccakF1600_StatePer_1_fu_2102_state_ce1.read();
    } else {
        state_s_2_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        state_s_2_d0 = xor_ln452_2_fu_4107_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        state_s_2_d0 = xor_ln452_fu_2843_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        state_s_2_d0 = xor_ln451_fu_2836_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        state_s_2_d0 = xor_ln428_fu_2784_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()))) {
        state_s_2_d0 = grp_fu_2254_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        state_s_2_d0 = grp_fu_2247_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()))) {
        state_s_2_d0 = ap_const_lv64_0;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_d0 = grp_KeccakF1600_StatePer_1_fu_2102_state_d0.read();
    } else {
        state_s_2_d0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_s_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        state_s_2_d1 = xor_ln451_2_fu_4100_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        state_s_2_d1 = xor_ln411_1_fu_4093_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_d1 = grp_KeccakF1600_StatePer_1_fu_2102_state_d1.read();
    } else {
        state_s_2_d1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_s_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln423_reg_5497.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_fu_2324_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(grp_load64_2_fu_2223_ap_done.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_2_fu_3936_p2.read())) || 
         (esl_seteq<1,1,1>(grp_load64_2_fu_2223_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) || 
         (esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()))) {
        state_s_2_we0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_we0 = grp_KeccakF1600_StatePer_1_fu_2102_state_we0.read();
    } else {
        state_s_2_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_2_we1() {
    if (((esl_seteq<1,1,1>(grp_load64_3_fu_2216_ap_done.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()))) {
        state_s_2_we1 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln400_reg_5368.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()))) {
        state_s_2_we1 = grp_KeccakF1600_StatePer_1_fu_2102_state_we1.read();
    } else {
        state_s_2_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_address0 = grp_dilithium_shake128_s_fu_2126_state_s_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_address0 = grp_shake128_squeezebloc_fu_2089_state_s_address0.read();
    } else {
        state_s_address0 = "XXXXX";
    }
}

void crypto_sign::thread_state_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_address1 = grp_dilithium_shake128_s_fu_2126_state_s_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_address1 = grp_shake128_squeezebloc_fu_2089_state_s_address1.read();
    } else {
        state_s_address1 = "XXXXX";
    }
}

void crypto_sign::thread_state_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_ce0 = grp_dilithium_shake128_s_fu_2126_state_s_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_ce0 = grp_shake128_squeezebloc_fu_2089_state_s_ce0.read();
    } else {
        state_s_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_ce1 = grp_dilithium_shake128_s_fu_2126_state_s_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_ce1 = grp_shake128_squeezebloc_fu_2089_state_s_ce1.read();
    } else {
        state_s_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_d0 = grp_dilithium_shake128_s_fu_2126_state_s_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_d0 = grp_shake128_squeezebloc_fu_2089_state_s_d0.read();
    } else {
        state_s_d0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_s_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_d1 = grp_dilithium_shake128_s_fu_2126_state_s_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_d1 = grp_shake128_squeezebloc_fu_2089_state_s_d1.read();
    } else {
        state_s_d1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_state_s_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_we0 = grp_dilithium_shake128_s_fu_2126_state_s_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_we0 = grp_shake128_squeezebloc_fu_2089_state_s_we0.read();
    } else {
        state_s_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_state_s_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        state_s_we1 = grp_dilithium_shake128_s_fu_2126_state_s_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        state_s_we1 = grp_shake128_squeezebloc_fu_2089_state_s_we1.read();
    } else {
        state_s_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_sub_ln109_fu_5068_p2() {
    sub_ln109_fu_5068_p2 = (!w0_vec_coeffs_q0.read().is_01() || !h_vec_coeffs_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(w0_vec_coeffs_q0.read()) - sc_biguint<32>(h_vec_coeffs_q0.read()));
}

void crypto_sign::thread_sub_ln208_1_fu_2315_p2() {
    sub_ln208_1_fu_2315_p2 = (!add_ln208_1_reg_5311.read().is_01() || !trunc_ln207_fu_2286_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln208_1_reg_5311.read()) - sc_biguint<14>(trunc_ln207_fu_2286_p1.read()));
}

void crypto_sign::thread_sub_ln208_fu_2305_p2() {
    sub_ln208_fu_2305_p2 = (!add_ln208_reg_5306.read().is_01() || !trunc_ln207_1_fu_2290_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln208_reg_5306.read()) - sc_biguint<13>(trunc_ln207_1_fu_2290_p1.read()));
}

void crypto_sign::thread_sub_ln381_fu_3519_p2() {
    sub_ln381_fu_3519_p2 = (!zext_ln378_reg_5747.read().is_01() || !zext_ln379_fu_3515_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln378_reg_5747.read()) - sc_biguint<11>(zext_ln379_fu_3515_p1.read()));
}

void crypto_sign::thread_sub_ln385_fu_3571_p2() {
    sub_ln385_fu_3571_p2 = (!ap_const_lv10_100.is_01() || !trunc_ln385_fu_3567_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_100) - sc_biguint<10>(trunc_ln385_fu_3567_p1.read()));
}

void crypto_sign::thread_sub_ln420_fu_2634_p2() {
    sub_ln420_fu_2634_p2 = (!indvars_iv_i_i71_i_reg_1294.read().is_01() || !zext_ln419_fu_2626_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(indvars_iv_i_i71_i_reg_1294.read()) - sc_biguint<64>(zext_ln419_fu_2626_p1.read()));
}

void crypto_sign::thread_sub_ln48_fu_3866_p2() {
    sub_ln48_fu_3866_p2 = (!ap_const_lv9_2B.is_01() || !sext_ln47_fu_3862_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_2B) - sc_bigint<9>(sext_ln47_fu_3862_p1.read()));
}

void crypto_sign::thread_sub_ln52_1_fu_3930_p2() {
    sub_ln52_1_fu_3930_p2 = (!grp_fu_5278_p3.read().is_01() || !select_ln52_fu_3922_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(grp_fu_5278_p3.read()) - sc_biguint<32>(select_ln52_fu_3922_p3.read()));
}

void crypto_sign::thread_sub_ln52_fu_3909_p2() {
    sub_ln52_fu_3909_p2 = (!ap_const_lv32_3FF000.is_01() || !grp_fu_5278_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_3FF000) - sc_bigint<32>(grp_fu_5278_p3.read()));
}

void crypto_sign::thread_sub_ln542_fu_4662_p2() {
    sub_ln542_fu_4662_p2 = (!ap_const_lv2_1.is_01() || !shl_ln22_fu_4655_p3.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) - sc_biguint<2>(shl_ln22_fu_4655_p3.read()));
}

void crypto_sign::thread_t0_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        t0_vec_coeffs_address0 = grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        t0_vec_coeffs_address0 = grp_ntt_1_fu_2164_a_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_address0 = grp_unpack_sk_fu_2116_t0_vec_coeffs_address0.read();
    } else {
        t0_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_t0_vec_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        t0_vec_coeffs_address1 = grp_ntt_1_fu_2164_a_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_address1 = grp_unpack_sk_fu_2116_t0_vec_coeffs_address1.read();
    } else {
        t0_vec_coeffs_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_t0_vec_coeffs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        t0_vec_coeffs_ce0 = grp_polyveck_pointwise_p_fu_2209_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        t0_vec_coeffs_ce0 = grp_ntt_1_fu_2164_a_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_ce0 = grp_unpack_sk_fu_2116_t0_vec_coeffs_ce0.read();
    } else {
        t0_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_t0_vec_coeffs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        t0_vec_coeffs_ce1 = grp_ntt_1_fu_2164_a_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_ce1 = grp_unpack_sk_fu_2116_t0_vec_coeffs_ce1.read();
    } else {
        t0_vec_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_t0_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        t0_vec_coeffs_d0 = grp_ntt_1_fu_2164_a_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_d0 = grp_unpack_sk_fu_2116_t0_vec_coeffs_d0.read();
    } else {
        t0_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_t0_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        t0_vec_coeffs_we0 = grp_ntt_1_fu_2164_a_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_we0 = grp_unpack_sk_fu_2116_t0_vec_coeffs_we0.read();
    } else {
        t0_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_t0_vec_coeffs_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t0_vec_coeffs_we1 = grp_unpack_sk_fu_2116_t0_vec_coeffs_we1.read();
    } else {
        t0_vec_coeffs_we1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_t_13_fu_4746_p2() {
    t_13_fu_4746_p2 = (!ap_const_lv32_3802001.is_01() || !trunc_ln18_fu_4742_p1.read().is_01())? sc_lv<32>(): sc_biguint<32>(ap_const_lv32_3802001) * sc_bigint<32>(trunc_ln18_fu_4742_p1.read());
}

void crypto_sign::thread_t_17_fu_4985_p3() {
    t_17_fu_4985_p3 = (!tmp_16_fu_4977_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_16_fu_4977_p3.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void crypto_sign::thread_t_18_fu_5005_p2() {
    t_18_fu_5005_p2 = (!z_vec_coeffs_q0.read().is_01() || !and_ln302_fu_4999_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(z_vec_coeffs_q0.read()) - sc_biguint<32>(and_ln302_fu_4999_p2.read()));
}

void crypto_sign::thread_t_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        t_address0 =  (sc_lv<3>) (zext_ln31_fu_2730_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        t_address0 =  (sc_lv<3>) (zext_ln426_reg_5514.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        t_address0 =  (sc_lv<3>) (zext_ln425_fu_2671_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        t_address0 =  (sc_lv<3>) (zext_ln388_fu_2387_p1.read());
    } else {
        t_address0 =  (sc_lv<3>) ("XXX");
    }
}

void crypto_sign::thread_t_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        t_ce0 = ap_const_logic_1;
    } else {
        t_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_t_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        t_d0 = sm_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        t_d0 = ap_const_lv8_0;
    } else {
        t_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void crypto_sign::thread_t_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln424_fu_2659_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        t_we0 = ap_const_logic_1;
    } else {
        t_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_tmp_13_fu_3485_p4() {
    tmp_13_fu_3485_p4 = ctr_0_i_reg_1465.read().range(31, 8);
}

void crypto_sign::thread_tmp_14_fu_3872_p3() {
    tmp_14_fu_3872_p3 = sub_ln48_fu_3866_p2.read().range(8, 8);
}

void crypto_sign::thread_tmp_15_fu_3914_p3() {
    tmp_15_fu_3914_p3 = sub_ln52_fu_3909_p2.read().range(31, 31);
}

void crypto_sign::thread_tmp_16_fu_4977_p3() {
    tmp_16_fu_4977_p3 = z_vec_coeffs_q0.read().range(31, 31);
}

void crypto_sign::thread_tmp_31_fu_3687_p3() {
    tmp_31_fu_3687_p3 = esl_concat<56,8>(ap_const_lv56_1, phi_ln125_1_reg_1569.read());
}

void crypto_sign::thread_tmp_32_fu_3713_p3() {
    tmp_32_fu_3713_p3 = esl_concat<56,8>(ap_const_lv56_2, phi_ln125_2_reg_1580.read());
}

void crypto_sign::thread_tmp_33_fu_3739_p3() {
    tmp_33_fu_3739_p3 = esl_concat<56,8>(ap_const_lv56_3, phi_ln125_3_reg_1591.read());
}

void crypto_sign::thread_tmp_34_fu_3795_p3() {
    tmp_34_fu_3795_p3 = esl_concat<3,8>(i_0_i83_reg_1626.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_35_fu_4685_p3() {
    tmp_35_fu_4685_p3 = esl_concat<3,8>(i_0_i100_reg_1888.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_36_fu_4807_p3() {
    tmp_36_fu_4807_p3 = esl_concat<3,8>(i_0_i108_reg_1922.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_37_fu_4869_p3() {
    tmp_37_fu_4869_p3 = esl_concat<3,8>(i_0_i116_reg_1944.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_38_fu_4939_p3() {
    tmp_38_fu_4939_p3 = esl_concat<3,8>(i_0_i84_reg_1966.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_39_fu_5029_p3() {
    tmp_39_fu_5029_p3 = esl_concat<3,8>(i_0_i123_reg_1988.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_40_fu_5087_p3() {
    tmp_40_fu_5087_p3 = esl_concat<3,8>(i_0_i131_reg_2010.read(), ap_const_lv8_0);
}

void crypto_sign::thread_tmp_41_fu_5145_p3() {
    tmp_41_fu_5145_p3 = esl_concat<3,8>(i_0_i87_reg_2032.read(), ap_const_lv8_0);
}

void crypto_sign::thread_trunc_ln11_fu_3839_p4() {
    trunc_ln11_fu_3839_p4 = add_ln42_fu_3833_p2.read().range(31, 7);
}

void crypto_sign::thread_trunc_ln12_fu_3853_p4() {
    trunc_ln12_fu_3853_p4 = grp_fu_5269_p3.read().range(31, 24);
}

void crypto_sign::thread_trunc_ln13_fu_4913_p4() {
    trunc_ln13_fu_4913_p4 = add_ln36_fu_4907_p2.read().range(31, 23);
}

void crypto_sign::thread_trunc_ln18_fu_4742_p1() {
    trunc_ln18_fu_4742_p1 = mul_ln182_fu_4736_p2.read().range(32-1, 0);
}

void crypto_sign::thread_trunc_ln207_1_fu_2290_p1() {
    trunc_ln207_1_fu_2290_p1 = i_0_reg_1204.read().range(13-1, 0);
}

void crypto_sign::thread_trunc_ln207_fu_2286_p1() {
    trunc_ln207_fu_2286_p1 = i_0_reg_1204.read().range(14-1, 0);
}

void crypto_sign::thread_trunc_ln208_1_fu_2276_p1() {
    trunc_ln208_1_fu_2276_p1 = mlen.read().range(14-1, 0);
}

void crypto_sign::thread_trunc_ln208_fu_2266_p1() {
    trunc_ln208_fu_2266_p1 = mlen.read().range(13-1, 0);
}

void crypto_sign::thread_trunc_ln22_fu_3462_p1() {
    trunc_ln22_fu_3462_p1 = i_0_i_i_reg_1441.read().range(2-1, 0);
}

void crypto_sign::thread_trunc_ln31_4_fu_2756_p1() {
    trunc_ln31_4_fu_2756_p1 = i_0_i_reg_1361.read().range(3-1, 0);
}

void crypto_sign::thread_trunc_ln379_1_fu_3511_p1() {
    trunc_ln379_1_fu_3511_p1 = grp_fu_3501_p2.read().range(2-1, 0);
}

void crypto_sign::thread_trunc_ln379_fu_3507_p1() {
    trunc_ln379_fu_3507_p1 = grp_fu_3501_p2.read().range(8-1, 0);
}

void crypto_sign::thread_trunc_ln385_fu_3567_p1() {
    trunc_ln385_fu_3567_p1 = ctr_0_i_reg_1465.read().range(10-1, 0);
}

void crypto_sign::thread_trunc_ln409_fu_2481_p1() {
    trunc_ln409_fu_2481_p1 = p_38_rec_i_i72_i_reg_1305.read().range(14-1, 0);
}

void crypto_sign::thread_trunc_ln418_1_fu_2485_p4() {
    trunc_ln418_1_fu_2485_p4 = p_23_i_i68_i_reg_1271.read().range(4, 3);
}

void crypto_sign::thread_trunc_ln418_2_fu_4328_p1() {
    trunc_ln418_2_fu_4328_p1 = i_3_i_i_i166_i_reg_1738.read().range(2-1, 0);
}

void crypto_sign::thread_trunc_ln418_fu_2577_p1() {
    trunc_ln418_fu_2577_p1 = i_3_i_i78_i_reg_1328.read().range(4-1, 0);
}

void crypto_sign::thread_trunc_ln420_fu_2640_p1() {
    trunc_ln420_fu_2640_p1 = sub_ln420_fu_2634_p2.read().range(33-1, 0);
}

void crypto_sign::thread_trunc_ln426_fu_2684_p1() {
    trunc_ln426_fu_2684_p1 = i_5_i_i84_i_reg_1350.read().range(14-1, 0);
}

void crypto_sign::thread_trunc_ln429_fu_2749_p1() {
    trunc_ln429_fu_2749_p1 = sub_ln420_reg_5476.read().range(10-1, 0);
}

void crypto_sign::thread_trunc_ln451_fu_2814_p1() {
    trunc_ln451_fu_2814_p1 = state_pos_reg_1385.read().range(3-1, 0);
}

void crypto_sign::thread_trunc_ln48_3_fu_4425_p1() {
    trunc_ln48_3_fu_4425_p1 = lshr_ln48_fu_4419_p2.read().range(8-1, 0);
}

void crypto_sign::thread_trunc_ln48_4_fu_4559_p1() {
    trunc_ln48_4_fu_4559_p1 = i_0_i89_reg_1865.read().range(3-1, 0);
}

void crypto_sign::thread_trunc_ln48_5_fu_4581_p1() {
    trunc_ln48_5_fu_4581_p1 = lshr_ln48_1_fu_4575_p2.read().range(8-1, 0);
}

void crypto_sign::thread_trunc_ln48_fu_4403_p1() {
    trunc_ln48_fu_4403_p1 = i_0_i86_reg_1761.read().range(3-1, 0);
}

void crypto_sign::thread_trunc_ln526_fu_4465_p1() {
    trunc_ln526_fu_4465_p1 = i_0_i177_i_reg_1772.read().range(3-1, 0);
}

void crypto_sign::thread_trunc_ln542_fu_4626_p1() {
    trunc_ln542_fu_4626_p1 = signs_1_i_i_reg_1831.read().range(1-1, 0);
}

void crypto_sign::thread_trunc_ln543_1_fu_3198_p1() {
    trunc_ln543_1_fu_3198_p1 = state_0_s_q1.read().range(8-1, 0);
}

void crypto_sign::thread_trunc_ln543_2_fu_4135_p1() {
    trunc_ln543_2_fu_4135_p1 = state_s_2_q1.read().range(8-1, 0);
}

void crypto_sign::thread_trunc_ln543_3_fu_4131_p1() {
    trunc_ln543_3_fu_4131_p1 = i_3_i_i45_reg_1716.read().range(2-1, 0);
}

void crypto_sign::thread_trunc_ln543_fu_2867_p1() {
    trunc_ln543_fu_2867_p1 = state_s_2_q0.read().range(8-1, 0);
}

void crypto_sign::thread_trunc_ln_fu_2795_p4() {
    trunc_ln_fu_2795_p4 = state_pos_reg_1385.read().range(9, 3);
}

void crypto_sign::thread_w0_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        w0_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln250_1_fu_5190_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read())) {
        w0_vec_coeffs_address0 = w0_vec_coeffs_addr_2_reg_6461.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        w0_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln88_6_fu_5120_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        w0_vec_coeffs_address0 = w0_vec_coeffs_addr_1_reg_6422.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read())) {
        w0_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln109_1_fu_5062_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        w0_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln227_1_reg_5982.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        w0_vec_coeffs_address0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        w0_vec_coeffs_address0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        w0_vec_coeffs_address0 = grp_polyveck_chknorm_fu_2229_v_vec_coeffs_address0.read();
    } else {
        w0_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_w0_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        w0_vec_coeffs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        w0_vec_coeffs_ce0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        w0_vec_coeffs_ce0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        w0_vec_coeffs_ce0 = grp_polyveck_chknorm_fu_2229_v_vec_coeffs_ce0.read();
    } else {
        w0_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_w0_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read())) {
        w0_vec_coeffs_d0 = add_ln88_2_fu_5126_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        w0_vec_coeffs_d0 = sub_ln109_fu_5068_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        w0_vec_coeffs_d0 = sub_ln52_1_fu_3930_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        w0_vec_coeffs_d0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        w0_vec_coeffs_d0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_d0.read();
    } else {
        w0_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_w0_vec_coeffs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        w0_vec_coeffs_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        w0_vec_coeffs_we0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        w0_vec_coeffs_we0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_we0.read();
    } else {
        w0_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_w1_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        w1_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln250_1_fu_5190_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        w1_vec_coeffs_address0 = w1_vec_coeffs_addr_reg_5987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        w1_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln227_1_fu_3828_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        w1_vec_coeffs_address0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        w1_vec_coeffs_address0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        w1_vec_coeffs_address0 = grp_polyveck_pack_w1_fu_2202_w1_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        w1_vec_coeffs_address0 = grp_polyvecl_pointwise_a_fu_2176_w_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        w1_vec_coeffs_address0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_address0.read();
    } else {
        w1_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_w1_vec_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        w1_vec_coeffs_address1 = grp_polyveck_pack_w1_fu_2202_w1_vec_coeffs_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        w1_vec_coeffs_address1 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_address1.read();
    } else {
        w1_vec_coeffs_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_w1_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        w1_vec_coeffs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        w1_vec_coeffs_ce0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        w1_vec_coeffs_ce0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        w1_vec_coeffs_ce0 = grp_polyveck_pack_w1_fu_2202_w1_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        w1_vec_coeffs_ce0 = grp_polyvecl_pointwise_a_fu_2176_w_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        w1_vec_coeffs_ce0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_ce0.read();
    } else {
        w1_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_w1_vec_coeffs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        w1_vec_coeffs_ce1 = grp_polyveck_pack_w1_fu_2202_w1_vec_coeffs_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        w1_vec_coeffs_ce1 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_ce1.read();
    } else {
        w1_vec_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_w1_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        w1_vec_coeffs_d0 = sext_ln48_1_fu_3904_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        w1_vec_coeffs_d0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        w1_vec_coeffs_d0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        w1_vec_coeffs_d0 = grp_polyvecl_pointwise_a_fu_2176_w_coeffs_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        w1_vec_coeffs_d0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_d0.read();
    } else {
        w1_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_w1_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        w1_vec_coeffs_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        w1_vec_coeffs_we0 = grp_polyveck_reduce_fu_2242_v_vec_coeffs_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        w1_vec_coeffs_we0 = grp_polyveck_caddq_fu_2237_v_vec_coeffs_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        w1_vec_coeffs_we0 = grp_polyvecl_pointwise_a_fu_2176_w_coeffs_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        w1_vec_coeffs_we0 = grp_polyveck_invntt_tomo_fu_2133_v_vec_coeffs_we0.read();
    } else {
        w1_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_xor_ln411_1_fu_4093_p2() {
    xor_ln411_1_fu_4093_p2 = (state_s_2_q1.read() ^ grp_load64_3_fu_2216_ap_return.read());
}

void crypto_sign::thread_xor_ln418_2_fu_3160_p2() {
    xor_ln418_2_fu_3160_p2 = (state_0_s_q0.read() ^ grp_load64_2_fu_2223_ap_return.read());
}

void crypto_sign::thread_xor_ln418_4_fu_4345_p2() {
    xor_ln418_4_fu_4345_p2 = (state_s_1_q0.read() ^ grp_load64_3_fu_2216_ap_return.read());
}

void crypto_sign::thread_xor_ln428_fu_2784_p2() {
    xor_ln428_fu_2784_p2 = (state_s_2_q0.read() ^ r_0_i_reg_1373.read());
}

void crypto_sign::thread_xor_ln451_1_fu_3167_p2() {
    xor_ln451_1_fu_3167_p2 = (state_0_s_q0.read() ^ ap_const_lv64_1F);
}

void crypto_sign::thread_xor_ln451_2_fu_4100_p2() {
    xor_ln451_2_fu_4100_p2 = (state_s_2_q0.read() ^ ap_const_lv64_1F);
}

void crypto_sign::thread_xor_ln451_3_fu_4352_p2() {
    xor_ln451_3_fu_4352_p2 = (state_s_1_q0.read() ^ ap_const_lv64_1F);
}

void crypto_sign::thread_xor_ln451_fu_2836_p2() {
    xor_ln451_fu_2836_p2 = (state_s_2_q0.read() ^ shl_ln451_fu_2830_p2.read());
}

void crypto_sign::thread_xor_ln452_1_fu_3174_p2() {
    xor_ln452_1_fu_3174_p2 = (state_0_s_q1.read() ^ ap_const_lv64_8000000000000000);
}

void crypto_sign::thread_xor_ln452_2_fu_4107_p2() {
    xor_ln452_2_fu_4107_p2 = (state_s_2_q1.read() ^ ap_const_lv64_8000000000000000);
}

void crypto_sign::thread_xor_ln452_3_fu_4359_p2() {
    xor_ln452_3_fu_4359_p2 = (state_s_1_q1.read() ^ ap_const_lv64_8000000000000000);
}

void crypto_sign::thread_xor_ln452_fu_2843_p2() {
    xor_ln452_fu_2843_p2 = (state_s_2_q0.read() ^ ap_const_lv64_8000000000000000);
}

void crypto_sign::thread_xor_ln48_fu_3880_p2() {
    xor_ln48_fu_3880_p2 = (tmp_14_fu_3872_p3.read() ^ ap_const_lv1_1);
}

void crypto_sign::thread_xor_ln69_fu_5248_p2() {
    xor_ln69_fu_5248_p2 = (or_ln69_1_fu_5242_p2.read() ^ ap_const_lv1_1);
}

void crypto_sign::thread_y_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        y_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln88_4_fu_4840_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        y_vec_coeffs_address0 =  (sc_lv<10>) (tmp_33_fu_3739_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        y_vec_coeffs_address0 =  (sc_lv<10>) (tmp_32_fu_3713_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        y_vec_coeffs_address0 =  (sc_lv<10>) (tmp_31_fu_3687_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        y_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln125_fu_3665_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        y_vec_coeffs_address0 = grp_poly_uniform_gamma1_fu_2078_a_coeffs_address0.read();
    } else {
        y_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_y_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        y_vec_coeffs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        y_vec_coeffs_ce0 = grp_poly_uniform_gamma1_fu_2078_a_coeffs_ce0.read();
    } else {
        y_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_y_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        y_vec_coeffs_we0 = grp_poly_uniform_gamma1_fu_2078_a_coeffs_we0.read();
    } else {
        y_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_z_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln301_2_fu_4972_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        z_vec_coeffs_address0 = z_vec_coeffs_addr_6_reg_6366.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln33_2_fu_4902_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        z_vec_coeffs_address0 = z_vec_coeffs_addr_5_reg_6340.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln88_4_fu_4840_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln182_17_reg_6291.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (tmp_33_reg_5931.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (tmp_32_reg_5912.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (tmp_31_reg_5893.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        z_vec_coeffs_address0 =  (sc_lv<10>) (zext_ln125_reg_5874.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        z_vec_coeffs_address0 = grp_polyvecl_pointwise_a_fu_2176_v_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        z_vec_coeffs_address0 = grp_ntt_1_fu_2164_a_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        z_vec_coeffs_address0 = grp_pack_sig_fu_2149_z_vec_coeffs_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        z_vec_coeffs_address0 = grp_invntt_tomont_fu_2140_a_address0.read();
    } else {
        z_vec_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_z_vec_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        z_vec_coeffs_address1 = grp_ntt_1_fu_2164_a_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        z_vec_coeffs_address1 = grp_invntt_tomont_fu_2140_a_address1.read();
    } else {
        z_vec_coeffs_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void crypto_sign::thread_z_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()))) {
        z_vec_coeffs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        z_vec_coeffs_ce0 = grp_polyvecl_pointwise_a_fu_2176_v_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        z_vec_coeffs_ce0 = grp_ntt_1_fu_2164_a_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        z_vec_coeffs_ce0 = grp_pack_sig_fu_2149_z_vec_coeffs_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        z_vec_coeffs_ce0 = grp_invntt_tomont_fu_2140_a_ce0.read();
    } else {
        z_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_z_vec_coeffs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        z_vec_coeffs_ce1 = grp_ntt_1_fu_2164_a_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        z_vec_coeffs_ce1 = grp_invntt_tomont_fu_2140_a_ce1.read();
    } else {
        z_vec_coeffs_ce1 = ap_const_logic_0;
    }
}

void crypto_sign::thread_z_vec_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        z_vec_coeffs_d0 = grp_fu_5288_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        z_vec_coeffs_d0 = add_ln88_fu_4850_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        z_vec_coeffs_d0 = add_ln19_fu_4766_p2.read().range(63, 32);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        z_vec_coeffs_d0 = sext_ln125_3_fu_3754_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        z_vec_coeffs_d0 = sext_ln125_2_fu_3728_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        z_vec_coeffs_d0 = sext_ln125_1_fu_3702_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        z_vec_coeffs_d0 = sext_ln125_fu_3676_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        z_vec_coeffs_d0 = grp_ntt_1_fu_2164_a_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        z_vec_coeffs_d0 = grp_invntt_tomont_fu_2140_a_d0.read();
    } else {
        z_vec_coeffs_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void crypto_sign::thread_z_vec_coeffs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()))) {
        z_vec_coeffs_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        z_vec_coeffs_we0 = grp_ntt_1_fu_2164_a_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        z_vec_coeffs_we0 = grp_invntt_tomont_fu_2140_a_we0.read();
    } else {
        z_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void crypto_sign::thread_zext_ln104_fu_5037_p1() {
    zext_ln104_fu_5037_p1 = esl_zext<12,11>(tmp_39_fu_5029_p3.read());
}

void crypto_sign::thread_zext_ln109_1_fu_5062_p1() {
    zext_ln109_1_fu_5062_p1 = esl_zext<64,12>(add_ln109_fu_5057_p2.read());
}

void crypto_sign::thread_zext_ln109_fu_5053_p1() {
    zext_ln109_fu_5053_p1 = esl_zext<12,9>(i_0_i_i124_reg_1999.read());
}

void crypto_sign::thread_zext_ln125_fu_3665_p1() {
    zext_ln125_fu_3665_p1 = esl_zext<64,8>(phi_ln125_reg_1558.read());
}

void crypto_sign::thread_zext_ln177_fu_4693_p1() {
    zext_ln177_fu_4693_p1 = esl_zext<12,11>(tmp_35_fu_4685_p3.read());
}

void crypto_sign::thread_zext_ln182_16_fu_4714_p1() {
    zext_ln182_16_fu_4714_p1 = esl_zext<12,9>(i_0_i_i101_reg_1899.read());
}

void crypto_sign::thread_zext_ln182_17_fu_4723_p1() {
    zext_ln182_17_fu_4723_p1 = esl_zext<64,12>(add_ln182_fu_4718_p2.read());
}

void crypto_sign::thread_zext_ln182_fu_4709_p1() {
    zext_ln182_fu_4709_p1 = esl_zext<64,9>(i_0_i_i101_reg_1899.read());
}

void crypto_sign::thread_zext_ln208_1_fu_2320_p1() {
    zext_ln208_1_fu_2320_p1 = esl_zext<64,14>(sub_ln208_1_reg_5329.read());
}

void crypto_sign::thread_zext_ln208_fu_2310_p1() {
    zext_ln208_fu_2310_p1 = esl_zext<64,13>(sub_ln208_fu_2305_p2.read());
}

void crypto_sign::thread_zext_ln222_fu_3803_p1() {
    zext_ln222_fu_3803_p1 = esl_zext<12,11>(tmp_34_fu_3795_p3.read());
}

void crypto_sign::thread_zext_ln227_1_fu_3828_p1() {
    zext_ln227_1_fu_3828_p1 = esl_zext<64,12>(add_ln227_fu_3823_p2.read());
}

void crypto_sign::thread_zext_ln227_fu_3819_p1() {
    zext_ln227_fu_3819_p1 = esl_zext<12,9>(i_0_i_i84_reg_1637.read());
}

void crypto_sign::thread_zext_ln245_fu_5153_p1() {
    zext_ln245_fu_5153_p1 = esl_zext<12,11>(tmp_41_fu_5145_p3.read());
}

void crypto_sign::thread_zext_ln249_fu_5196_p1() {
    zext_ln249_fu_5196_p1 = esl_zext<11,9>(s_0_i_i_reg_2066.read());
}

void crypto_sign::thread_zext_ln250_1_fu_5190_p1() {
    zext_ln250_1_fu_5190_p1 = esl_zext<64,12>(add_ln250_fu_5185_p2.read());
}

void crypto_sign::thread_zext_ln250_fu_5181_p1() {
    zext_ln250_fu_5181_p1 = esl_zext<12,9>(i_0_i_i88_reg_2055.read());
}

void crypto_sign::thread_zext_ln288_fu_4947_p1() {
    zext_ln288_fu_4947_p1 = esl_zext<12,11>(tmp_38_fu_4939_p3.read());
}

void crypto_sign::thread_zext_ln28_fu_4877_p1() {
    zext_ln28_fu_4877_p1 = esl_zext<12,11>(tmp_37_fu_4869_p3.read());
}

void crypto_sign::thread_zext_ln301_2_fu_4972_p1() {
    zext_ln301_2_fu_4972_p1 = esl_zext<64,12>(add_ln301_fu_4967_p2.read());
}

void crypto_sign::thread_zext_ln301_fu_4963_p1() {
    zext_ln301_fu_4963_p1 = esl_zext<12,9>(i_0_i_i85_reg_1977.read());
}

void crypto_sign::thread_zext_ln31_6_fu_2752_p1() {
    zext_ln31_6_fu_2752_p1 = esl_zext<64,8>(t_q0.read());
}

void crypto_sign::thread_zext_ln31_7_fu_2768_p1() {
    zext_ln31_7_fu_2768_p1 = esl_zext<64,6>(shl_ln16_fu_2760_p3.read());
}

void crypto_sign::thread_zext_ln31_fu_2730_p1() {
    zext_ln31_fu_2730_p1 = esl_zext<64,4>(i_0_i_reg_1361.read());
}

void crypto_sign::thread_zext_ln33_2_fu_4902_p1() {
    zext_ln33_2_fu_4902_p1 = esl_zext<64,12>(add_ln33_fu_4897_p2.read());
}

void crypto_sign::thread_zext_ln33_fu_4893_p1() {
    zext_ln33_fu_4893_p1 = esl_zext<12,9>(i_0_i_i117_reg_1955.read());
}

void crypto_sign::thread_zext_ln363_1_fu_3119_p1() {
    zext_ln363_1_fu_3119_p1 = esl_zext<64,5>(i_0_i_i_i_i_reg_1407.read());
}

void crypto_sign::thread_zext_ln363_2_fu_3948_p1() {
    zext_ln363_2_fu_3948_p1 = esl_zext<64,5>(i_0_i_i_i_reg_1648.read());
}

void crypto_sign::thread_zext_ln363_3_fu_4306_p1() {
    zext_ln363_3_fu_4306_p1 = esl_zext<64,5>(i_0_i_i_i136_i_reg_1727.read());
}

void crypto_sign::thread_zext_ln363_fu_2336_p1() {
    zext_ln363_fu_2336_p1 = esl_zext<64,5>(i_0_i_i4_i_reg_1215.read());
}

void crypto_sign::thread_zext_ln378_fu_3481_p1() {
    zext_ln378_fu_3481_p1 = esl_zext<11,10>(sext_ln378_fu_3477_p1.read());
}

void crypto_sign::thread_zext_ln379_fu_3515_p1() {
    zext_ln379_fu_3515_p1 = esl_zext<11,9>(grp_fu_3501_p2.read());
}

void crypto_sign::thread_zext_ln380_fu_3524_p1() {
    zext_ln380_fu_3524_p1 = esl_zext<11,2>(i_0_i63_reg_1487.read());
}

void crypto_sign::thread_zext_ln381_1_fu_3553_p1() {
    zext_ln381_1_fu_3553_p1 = esl_zext<64,2>(i_0_i63_reg_1487.read());
}

void crypto_sign::thread_zext_ln381_fu_3548_p1() {
    zext_ln381_fu_3548_p1 = esl_zext<64,32>(sext_ln381_fu_3544_p1.read());
}

void crypto_sign::thread_zext_ln384_fu_3563_p1() {
    zext_ln384_fu_3563_p1 = esl_zext<9,8>(buflen_fu_3558_p2.read());
}

void crypto_sign::thread_zext_ln385_fu_3578_p1() {
    zext_ln385_fu_3578_p1 = esl_zext<11,8>(buflen_fu_3558_p2.read());
}

void crypto_sign::thread_zext_ln388_fu_2387_p1() {
    zext_ln388_fu_2387_p1 = esl_zext<64,3>(phi_ln388_reg_1237.read());
}

void crypto_sign::thread_zext_ln401_1_fu_3989_p1() {
    zext_ln401_1_fu_3989_p1 = esl_zext<5,4>(i_1_i_i_i_reg_1670.read());
}

void crypto_sign::thread_zext_ln401_fu_2403_p1() {
    zext_ln401_fu_2403_p1 = esl_zext<5,4>(i_1_i_i65_i_reg_1248.read());
}

void crypto_sign::thread_zext_ln402_1_fu_2437_p1() {
    zext_ln402_1_fu_2437_p1 = esl_zext<64,12>(add_ln402_fu_2431_p2.read());
}

void crypto_sign::thread_zext_ln402_2_fu_2448_p1() {
    zext_ln402_2_fu_2448_p1 = esl_zext<64,5>(add_ln402_1_fu_2442_p2.read());
}

void crypto_sign::thread_zext_ln402_3_fu_4013_p1() {
    zext_ln402_3_fu_4013_p1 = esl_zext<64,7>(shl_ln402_1_fu_4005_p3.read());
}

void crypto_sign::thread_zext_ln402_4_fu_4024_p1() {
    zext_ln402_4_fu_4024_p1 = esl_zext<64,5>(add_ln402_2_fu_4018_p2.read());
}

void crypto_sign::thread_zext_ln402_fu_2427_p1() {
    zext_ln402_fu_2427_p1 = esl_zext<12,7>(shl_ln14_fu_2419_p3.read());
}

void crypto_sign::thread_zext_ln409_1_fu_2467_p1() {
    zext_ln409_1_fu_2467_p1 = esl_zext<64,12>(ap_phi_mux_phi_ln403_phi_fu_1263_p4.read());
}

void crypto_sign::thread_zext_ln409_2_fu_2471_p1() {
    zext_ln409_2_fu_2471_p1 = esl_zext<9,6>(sext_ln409_fu_2459_p1.read());
}

void crypto_sign::thread_zext_ln409_fu_2463_p1() {
    zext_ln409_fu_2463_p1 = esl_zext<14,12>(ap_phi_mux_phi_ln403_phi_fu_1263_p4.read());
}

void crypto_sign::thread_zext_ln411_1_fu_2549_p1() {
    zext_ln411_1_fu_2549_p1 = esl_zext<64,5>(i_2_i_i73_i_reg_1317.read());
}

void crypto_sign::thread_zext_ln411_2_fu_4061_p1() {
    zext_ln411_2_fu_4061_p1 = esl_zext<10,8>(add_ln411_2_fu_4055_p2.read());
}

void crypto_sign::thread_zext_ln411_3_fu_4071_p1() {
    zext_ln411_3_fu_4071_p1 = esl_zext<64,10>(add_ln411_3_fu_4065_p2.read());
}

void crypto_sign::thread_zext_ln411_4_fu_4076_p1() {
    zext_ln411_4_fu_4076_p1 = esl_zext<64,5>(i_2_i_i_i_reg_1705.read());
}

void crypto_sign::thread_zext_ln411_fu_2533_p1() {
    zext_ln411_fu_2533_p1 = esl_zext<64,8>(shl_ln15_fu_2525_p3.read());
}

void crypto_sign::thread_zext_ln417_1_fu_3124_p1() {
    zext_ln417_1_fu_3124_p1 = esl_zext<64,4>(i_3_i_i_i_i_reg_1418.read());
}

void crypto_sign::thread_zext_ln417_2_fu_3953_p1() {
    zext_ln417_2_fu_3953_p1 = esl_zext<64,3>(i_3_i_i37_i_reg_1659.read());
}

void crypto_sign::thread_zext_ln417_3_fu_4311_p1() {
    zext_ln417_3_fu_4311_p1 = esl_zext<64,3>(i_3_i_i_i166_i_reg_1738.read());
}

void crypto_sign::thread_zext_ln417_fu_2341_p1() {
    zext_ln417_fu_2341_p1 = esl_zext<64,3>(i_3_i_i119_i_reg_1226.read());
}

void crypto_sign::thread_zext_ln418_1_fu_2376_p1() {
    zext_ln418_1_fu_2376_p1 = esl_zext<8,7>(add_ln418_fu_2370_p2.read());
}

void crypto_sign::thread_zext_ln418_2_fu_2499_p1() {
    zext_ln418_2_fu_2499_p1 = esl_zext<5,3>(sext_ln418_fu_2495_p1.read());
}

void crypto_sign::thread_zext_ln418_3_fu_2589_p1() {
    zext_ln418_3_fu_2589_p1 = esl_zext<64,7>(shl_ln418_1_fu_2581_p3.read());
}

void crypto_sign::thread_zext_ln418_4_fu_2610_p1() {
    zext_ln418_4_fu_2610_p1 = esl_zext<64,5>(add_ln418_3_fu_2605_p2.read());
}

void crypto_sign::thread_zext_ln418_5_fu_3149_p1() {
    zext_ln418_5_fu_3149_p1 = esl_zext<8,7>(shl_ln418_2_fu_3141_p3.read());
}

void crypto_sign::thread_zext_ln418_6_fu_3978_p1() {
    zext_ln418_6_fu_3978_p1 = esl_zext<8,6>(shl_ln418_3_fu_3970_p3.read());
}

void crypto_sign::thread_zext_ln418_7_fu_4340_p1() {
    zext_ln418_7_fu_4340_p1 = esl_zext<64,5>(shl_ln418_4_fu_4332_p3.read());
}

void crypto_sign::thread_zext_ln418_fu_2366_p1() {
    zext_ln418_fu_2366_p1 = esl_zext<7,6>(shl_ln_fu_2358_p3.read());
}

void crypto_sign::thread_zext_ln419_2_fu_2622_p1() {
    zext_ln419_2_fu_2622_p1 = esl_zext<9,8>(and_ln_fu_2615_p3.read());
}

void crypto_sign::thread_zext_ln419_fu_2626_p1() {
    zext_ln419_fu_2626_p1 = esl_zext<64,8>(and_ln_fu_2615_p3.read());
}

void crypto_sign::thread_zext_ln420_fu_2630_p1() {
    zext_ln420_fu_2630_p1 = esl_zext<14,8>(and_ln_fu_2615_p3.read());
}

void crypto_sign::thread_zext_ln421_fu_2649_p1() {
    zext_ln421_fu_2649_p1 = esl_zext<10,9>(add_ln421_fu_2644_p2.read());
}

void crypto_sign::thread_zext_ln425_fu_2671_p1() {
    zext_ln425_fu_2671_p1 = esl_zext<64,4>(i_4_i_i80_i_reg_1339.read());
}

void crypto_sign::thread_zext_ln426_1_fu_2688_p1() {
    zext_ln426_1_fu_2688_p1 = esl_zext<33,32>(i_5_i_i84_i_reg_1350.read());
}

void crypto_sign::thread_zext_ln426_fu_2680_p1() {
    zext_ln426_fu_2680_p1 = esl_zext<64,32>(i_5_i_i84_i_reg_1350.read());
}

void crypto_sign::thread_zext_ln427_fu_2713_p1() {
    zext_ln427_fu_2713_p1 = esl_zext<64,14>(add_ln427_2_fu_2708_p2.read());
}

void crypto_sign::thread_zext_ln428_fu_2744_p1() {
    zext_ln428_fu_2744_p1 = esl_zext<64,6>(lshr_ln_fu_2735_p4.read());
}

void crypto_sign::thread_zext_ln451_1_fu_2809_p1() {
    zext_ln451_1_fu_2809_p1 = esl_zext<64,29>(sext_ln449_fu_2805_p1.read());
}

void crypto_sign::thread_zext_ln451_fu_2826_p1() {
    zext_ln451_fu_2826_p1 = esl_zext<64,6>(shl_ln17_fu_2818_p3.read());
}

void crypto_sign::thread_zext_ln478_1_fu_4534_p1() {
    zext_ln478_1_fu_4534_p1 = esl_zext<64,5>(i_0_i_i10_i_i_0_reg_1853.read());
}

void crypto_sign::thread_zext_ln478_fu_4378_p1() {
    zext_ln478_fu_4378_p1 = esl_zext<64,5>(i_0_i_i14_i_i_0_reg_1749.read());
}

void crypto_sign::thread_zext_ln47_fu_3649_p1() {
    zext_ln47_fu_3649_p1 = esl_zext<16,3>(i_0_i74_reg_1546.read());
}

void crypto_sign::thread_zext_ln48_10_fu_4595_p1() {
    zext_ln48_10_fu_4595_p1 = esl_zext<64,8>(add_ln48_1_fu_4590_p2.read());
}

void crypto_sign::thread_zext_ln48_4_fu_4571_p1() {
    zext_ln48_4_fu_4571_p1 = esl_zext<64,6>(shl_ln48_1_fu_4563_p3.read());
}

void crypto_sign::thread_zext_ln48_7_fu_4430_p1() {
    zext_ln48_7_fu_4430_p1 = esl_zext<8,4>(i_0_i86_reg_1761.read());
}

void crypto_sign::thread_zext_ln48_8_fu_4439_p1() {
    zext_ln48_8_fu_4439_p1 = esl_zext<64,8>(add_ln48_fu_4434_p2.read());
}

void crypto_sign::thread_zext_ln48_9_fu_4586_p1() {
    zext_ln48_9_fu_4586_p1 = esl_zext<8,4>(i_0_i89_reg_1865.read());
}

void crypto_sign::thread_zext_ln48_fu_4415_p1() {
    zext_ln48_fu_4415_p1 = esl_zext<64,6>(shl_ln21_fu_4407_p3.read());
}

void crypto_sign::thread_zext_ln526_1_fu_4461_p1() {
    zext_ln526_1_fu_4461_p1 = esl_zext<64,8>(buf_q0.read());
}

void crypto_sign::thread_zext_ln526_2_fu_4477_p1() {
    zext_ln526_2_fu_4477_p1 = esl_zext<64,6>(shl_ln20_fu_4469_p3.read());
}

void crypto_sign::thread_zext_ln526_fu_4456_p1() {
    zext_ln526_fu_4456_p1 = esl_zext<64,4>(i_0_i177_i_reg_1772.read());
}

void crypto_sign::thread_zext_ln530_fu_4505_p1() {
    zext_ln530_fu_4505_p1 = esl_zext<64,9>(i_1_i_i_reg_1796.read());
}

void crypto_sign::thread_zext_ln538_1_fu_4611_p1() {
    zext_ln538_1_fu_4611_p1 = esl_zext<9,8>(buf_q0.read());
}

void crypto_sign::thread_zext_ln538_fu_4606_p1() {
    zext_ln538_fu_4606_p1 = esl_zext<64,32>(pos_2_i_i_reg_1876.read());
}

void crypto_sign::thread_zext_ln541_1_fu_4644_p1() {
    zext_ln541_1_fu_4644_p1 = esl_zext<64,9>(i_2_i_i_reg_1807.read());
}

void crypto_sign::thread_zext_ln541_fu_4621_p1() {
    zext_ln541_fu_4621_p1 = esl_zext<64,8>(buf_q0.read());
}

void crypto_sign::thread_zext_ln542_1_fu_3181_p1() {
    zext_ln542_1_fu_3181_p1 = esl_zext<64,3>(i_3_i_i1_reg_1429.read());
}

void crypto_sign::thread_zext_ln542_2_fu_4114_p1() {
    zext_ln542_2_fu_4114_p1 = esl_zext<64,3>(i_3_i_i45_reg_1716.read());
}

void crypto_sign::thread_zext_ln542_fu_2850_p1() {
    zext_ln542_fu_2850_p1 = esl_zext<64,3>(i_3_i_i_reg_1395.read());
}

void crypto_sign::thread_zext_ln543_1_fu_2890_p1() {
    zext_ln543_1_fu_2890_p1 = esl_zext<64,8>(add_ln543_fu_2884_p2.read());
}

void crypto_sign::thread_zext_ln543_2_fu_3211_p1() {
    zext_ln543_2_fu_3211_p1 = esl_zext<8,6>(shl_ln543_1_fu_3203_p3.read());
}

void crypto_sign::thread_zext_ln543_3_fu_3221_p1() {
    zext_ln543_3_fu_3221_p1 = esl_zext<64,8>(add_ln543_1_fu_3215_p2.read());
}

void crypto_sign::thread_zext_ln543_4_fu_4147_p1() {
    zext_ln543_4_fu_4147_p1 = esl_zext<64,5>(shl_ln543_2_fu_4140_p3.read());
}

void crypto_sign::thread_zext_ln543_fu_2880_p1() {
    zext_ln543_fu_2880_p1 = esl_zext<8,6>(shl_ln18_fu_2872_p3.read());
}

void crypto_sign::thread_zext_ln544_1_fu_2922_p1() {
    zext_ln544_1_fu_2922_p1 = esl_zext<64,8>(add_ln544_fu_2916_p2.read());
}

void crypto_sign::thread_zext_ln544_2_fu_3243_p1() {
    zext_ln544_2_fu_3243_p1 = esl_zext<8,6>(or_ln544_1_fu_3237_p2.read());
}

void crypto_sign::thread_zext_ln544_3_fu_3253_p1() {
    zext_ln544_3_fu_3253_p1 = esl_zext<64,8>(add_ln544_1_fu_3247_p2.read());
}

void crypto_sign::thread_zext_ln544_4_fu_4169_p1() {
    zext_ln544_4_fu_4169_p1 = esl_zext<64,5>(or_ln544_2_fu_4163_p2.read());
}

void crypto_sign::thread_zext_ln544_fu_2912_p1() {
    zext_ln544_fu_2912_p1 = esl_zext<8,6>(or_ln544_fu_2906_p2.read());
}

void crypto_sign::thread_zext_ln545_1_fu_3002_p1() {
    zext_ln545_1_fu_3002_p1 = esl_zext<64,8>(add_ln545_fu_2996_p2.read());
}

void crypto_sign::thread_zext_ln545_2_fu_3323_p1() {
    zext_ln545_2_fu_3323_p1 = esl_zext<8,6>(or_ln545_1_fu_3318_p2.read());
}

void crypto_sign::thread_zext_ln545_3_fu_3333_p1() {
    zext_ln545_3_fu_3333_p1 = esl_zext<64,8>(add_ln545_1_fu_3327_p2.read());
}

void crypto_sign::thread_zext_ln545_4_fu_4239_p1() {
    zext_ln545_4_fu_4239_p1 = esl_zext<64,5>(or_ln545_2_fu_4234_p2.read());
}

void crypto_sign::thread_zext_ln545_fu_2992_p1() {
    zext_ln545_fu_2992_p1 = esl_zext<8,6>(or_ln545_fu_2987_p2.read());
}

void crypto_sign::thread_zext_ln546_1_fu_3022_p1() {
    zext_ln546_1_fu_3022_p1 = esl_zext<64,8>(add_ln546_fu_3016_p2.read());
}

void crypto_sign::thread_zext_ln546_2_fu_3343_p1() {
    zext_ln546_2_fu_3343_p1 = esl_zext<8,6>(or_ln546_1_fu_3338_p2.read());
}

void crypto_sign::thread_zext_ln546_3_fu_3353_p1() {
    zext_ln546_3_fu_3353_p1 = esl_zext<64,8>(add_ln546_1_fu_3347_p2.read());
}

void crypto_sign::thread_zext_ln546_4_fu_4249_p1() {
    zext_ln546_4_fu_4249_p1 = esl_zext<64,5>(or_ln546_2_fu_4244_p2.read());
}

void crypto_sign::thread_zext_ln546_fu_3012_p1() {
    zext_ln546_fu_3012_p1 = esl_zext<8,6>(or_ln546_fu_3007_p2.read());
}

void crypto_sign::thread_zext_ln547_1_fu_3042_p1() {
    zext_ln547_1_fu_3042_p1 = esl_zext<64,8>(add_ln547_fu_3036_p2.read());
}

void crypto_sign::thread_zext_ln547_2_fu_3363_p1() {
    zext_ln547_2_fu_3363_p1 = esl_zext<8,6>(or_ln547_1_fu_3358_p2.read());
}

void crypto_sign::thread_zext_ln547_3_fu_3373_p1() {
    zext_ln547_3_fu_3373_p1 = esl_zext<64,8>(add_ln547_1_fu_3367_p2.read());
}

void crypto_sign::thread_zext_ln547_4_fu_4259_p1() {
    zext_ln547_4_fu_4259_p1 = esl_zext<64,5>(or_ln547_2_fu_4254_p2.read());
}

void crypto_sign::thread_zext_ln547_fu_3032_p1() {
    zext_ln547_fu_3032_p1 = esl_zext<8,6>(or_ln547_fu_3027_p2.read());
}

void crypto_sign::thread_zext_ln548_1_fu_3062_p1() {
    zext_ln548_1_fu_3062_p1 = esl_zext<64,8>(add_ln548_fu_3056_p2.read());
}

void crypto_sign::thread_zext_ln548_2_fu_3383_p1() {
    zext_ln548_2_fu_3383_p1 = esl_zext<8,6>(or_ln548_1_fu_3378_p2.read());
}

void crypto_sign::thread_zext_ln548_3_fu_3393_p1() {
    zext_ln548_3_fu_3393_p1 = esl_zext<64,8>(add_ln548_1_fu_3387_p2.read());
}

void crypto_sign::thread_zext_ln548_4_fu_4269_p1() {
    zext_ln548_4_fu_4269_p1 = esl_zext<64,5>(or_ln548_2_fu_4264_p2.read());
}

void crypto_sign::thread_zext_ln548_fu_3052_p1() {
    zext_ln548_fu_3052_p1 = esl_zext<8,6>(or_ln548_fu_3047_p2.read());
}

void crypto_sign::thread_zext_ln549_1_fu_3082_p1() {
    zext_ln549_1_fu_3082_p1 = esl_zext<64,8>(add_ln549_fu_3076_p2.read());
}

void crypto_sign::thread_zext_ln549_2_fu_3403_p1() {
    zext_ln549_2_fu_3403_p1 = esl_zext<8,6>(or_ln549_1_fu_3398_p2.read());
}

void crypto_sign::thread_zext_ln549_3_fu_3413_p1() {
    zext_ln549_3_fu_3413_p1 = esl_zext<64,8>(add_ln549_1_fu_3407_p2.read());
}

void crypto_sign::thread_zext_ln549_4_fu_4279_p1() {
    zext_ln549_4_fu_4279_p1 = esl_zext<64,5>(or_ln549_2_fu_4274_p2.read());
}

void crypto_sign::thread_zext_ln549_fu_3072_p1() {
    zext_ln549_fu_3072_p1 = esl_zext<8,6>(or_ln549_fu_3067_p2.read());
}

void crypto_sign::thread_zext_ln550_1_fu_3102_p1() {
    zext_ln550_1_fu_3102_p1 = esl_zext<64,8>(add_ln550_fu_3096_p2.read());
}

void crypto_sign::thread_zext_ln550_2_fu_3423_p1() {
    zext_ln550_2_fu_3423_p1 = esl_zext<8,6>(or_ln550_1_fu_3418_p2.read());
}

void crypto_sign::thread_zext_ln550_3_fu_3433_p1() {
    zext_ln550_3_fu_3433_p1 = esl_zext<64,8>(add_ln550_1_fu_3427_p2.read());
}

void crypto_sign::thread_zext_ln550_4_fu_4289_p1() {
    zext_ln550_4_fu_4289_p1 = esl_zext<64,5>(or_ln550_2_fu_4284_p2.read());
}

void crypto_sign::thread_zext_ln550_fu_3092_p1() {
    zext_ln550_fu_3092_p1 = esl_zext<8,6>(or_ln550_fu_3087_p2.read());
}

void crypto_sign::thread_zext_ln69_1_fu_5258_p1() {
    zext_ln69_1_fu_5258_p1 = esl_zext<32,1>(xor_ln69_fu_5248_p2.read());
}

void crypto_sign::thread_zext_ln69_fu_5254_p1() {
    zext_ln69_fu_5254_p1 = esl_zext<9,1>(xor_ln69_fu_5248_p2.read());
}

void crypto_sign::thread_zext_ln83_1_fu_5095_p1() {
    zext_ln83_1_fu_5095_p1 = esl_zext<12,11>(tmp_40_fu_5087_p3.read());
}

void crypto_sign::thread_zext_ln83_fu_4815_p1() {
    zext_ln83_fu_4815_p1 = esl_zext<12,11>(tmp_36_fu_4807_p3.read());
}

void crypto_sign::thread_zext_ln88_4_fu_4840_p1() {
    zext_ln88_4_fu_4840_p1 = esl_zext<64,12>(add_ln88_3_fu_4835_p2.read());
}

void crypto_sign::thread_zext_ln88_5_fu_5111_p1() {
    zext_ln88_5_fu_5111_p1 = esl_zext<12,9>(i_0_i_i132_reg_2021.read());
}

void crypto_sign::thread_zext_ln88_6_fu_5120_p1() {
    zext_ln88_6_fu_5120_p1 = esl_zext<64,12>(add_ln88_4_fu_5115_p2.read());
}

void crypto_sign::thread_zext_ln88_fu_4831_p1() {
    zext_ln88_fu_4831_p1 = esl_zext<12,9>(i_0_i_i109_reg_1933.read());
}

}

