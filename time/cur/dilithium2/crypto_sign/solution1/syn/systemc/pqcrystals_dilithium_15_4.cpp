#include "pqcrystals_dilithium_15.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_15::thread_mul_ln184_61_fu_11250_p00() {
    mul_ln184_61_fu_11250_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_61_fu_11250_p1() {
    mul_ln184_61_fu_11250_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_61_fu_11250_p2() {
    mul_ln184_61_fu_11250_p2 = (!mul_ln184_61_fu_11250_p0.read().is_01() || !mul_ln184_61_fu_11250_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_61_fu_11250_p0.read()) * sc_bigint<32>(mul_ln184_61_fu_11250_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_62_fu_11333_p0() {
    mul_ln184_62_fu_11333_p0 =  (sc_lv<23>) (mul_ln184_62_fu_11333_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_62_fu_11333_p00() {
    mul_ln184_62_fu_11333_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_62_fu_11333_p1() {
    mul_ln184_62_fu_11333_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_62_fu_11333_p2() {
    mul_ln184_62_fu_11333_p2 = (!mul_ln184_62_fu_11333_p0.read().is_01() || !mul_ln184_62_fu_11333_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_62_fu_11333_p0.read()) * sc_bigint<32>(mul_ln184_62_fu_11333_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_63_fu_11352_p0() {
    mul_ln184_63_fu_11352_p0 =  (sc_lv<23>) (mul_ln184_63_fu_11352_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_63_fu_11352_p00() {
    mul_ln184_63_fu_11352_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_63_fu_11352_p1() {
    mul_ln184_63_fu_11352_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_63_fu_11352_p2() {
    mul_ln184_63_fu_11352_p2 = (!mul_ln184_63_fu_11352_p0.read().is_01() || !mul_ln184_63_fu_11352_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_63_fu_11352_p0.read()) * sc_bigint<32>(mul_ln184_63_fu_11352_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_64_fu_11435_p0() {
    mul_ln184_64_fu_11435_p0 =  (sc_lv<23>) (mul_ln184_64_fu_11435_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_64_fu_11435_p00() {
    mul_ln184_64_fu_11435_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_64_fu_11435_p1() {
    mul_ln184_64_fu_11435_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_64_fu_11435_p2() {
    mul_ln184_64_fu_11435_p2 = (!mul_ln184_64_fu_11435_p0.read().is_01() || !mul_ln184_64_fu_11435_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_64_fu_11435_p0.read()) * sc_bigint<32>(mul_ln184_64_fu_11435_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_65_fu_11454_p0() {
    mul_ln184_65_fu_11454_p0 =  (sc_lv<23>) (mul_ln184_65_fu_11454_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_65_fu_11454_p00() {
    mul_ln184_65_fu_11454_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_65_fu_11454_p1() {
    mul_ln184_65_fu_11454_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_65_fu_11454_p2() {
    mul_ln184_65_fu_11454_p2 = (!mul_ln184_65_fu_11454_p0.read().is_01() || !mul_ln184_65_fu_11454_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_65_fu_11454_p0.read()) * sc_bigint<32>(mul_ln184_65_fu_11454_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_66_fu_11537_p0() {
    mul_ln184_66_fu_11537_p0 =  (sc_lv<23>) (mul_ln184_66_fu_11537_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_66_fu_11537_p00() {
    mul_ln184_66_fu_11537_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_66_fu_11537_p1() {
    mul_ln184_66_fu_11537_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_66_fu_11537_p2() {
    mul_ln184_66_fu_11537_p2 = (!mul_ln184_66_fu_11537_p0.read().is_01() || !mul_ln184_66_fu_11537_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_66_fu_11537_p0.read()) * sc_bigint<32>(mul_ln184_66_fu_11537_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_67_fu_11556_p0() {
    mul_ln184_67_fu_11556_p0 =  (sc_lv<23>) (mul_ln184_67_fu_11556_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_67_fu_11556_p00() {
    mul_ln184_67_fu_11556_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_67_fu_11556_p1() {
    mul_ln184_67_fu_11556_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_67_fu_11556_p2() {
    mul_ln184_67_fu_11556_p2 = (!mul_ln184_67_fu_11556_p0.read().is_01() || !mul_ln184_67_fu_11556_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_67_fu_11556_p0.read()) * sc_bigint<32>(mul_ln184_67_fu_11556_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_68_fu_11639_p0() {
    mul_ln184_68_fu_11639_p0 =  (sc_lv<23>) (mul_ln184_68_fu_11639_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_68_fu_11639_p00() {
    mul_ln184_68_fu_11639_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_68_fu_11639_p1() {
    mul_ln184_68_fu_11639_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_68_fu_11639_p2() {
    mul_ln184_68_fu_11639_p2 = (!mul_ln184_68_fu_11639_p0.read().is_01() || !mul_ln184_68_fu_11639_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_68_fu_11639_p0.read()) * sc_bigint<32>(mul_ln184_68_fu_11639_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_69_fu_11658_p0() {
    mul_ln184_69_fu_11658_p0 =  (sc_lv<23>) (mul_ln184_69_fu_11658_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_69_fu_11658_p00() {
    mul_ln184_69_fu_11658_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_69_fu_11658_p1() {
    mul_ln184_69_fu_11658_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_69_fu_11658_p2() {
    mul_ln184_69_fu_11658_p2 = (!mul_ln184_69_fu_11658_p0.read().is_01() || !mul_ln184_69_fu_11658_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_69_fu_11658_p0.read()) * sc_bigint<32>(mul_ln184_69_fu_11658_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_6_fu_8477_p0() {
    mul_ln184_6_fu_8477_p0 =  (sc_lv<23>) (mul_ln184_6_fu_8477_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_6_fu_8477_p00() {
    mul_ln184_6_fu_8477_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_6_fu_8477_p1() {
    mul_ln184_6_fu_8477_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_6_fu_8477_p2() {
    mul_ln184_6_fu_8477_p2 = (!mul_ln184_6_fu_8477_p0.read().is_01() || !mul_ln184_6_fu_8477_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_6_fu_8477_p0.read()) * sc_bigint<32>(mul_ln184_6_fu_8477_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_70_fu_11741_p0() {
    mul_ln184_70_fu_11741_p0 =  (sc_lv<23>) (mul_ln184_70_fu_11741_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_70_fu_11741_p00() {
    mul_ln184_70_fu_11741_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_70_fu_11741_p1() {
    mul_ln184_70_fu_11741_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_70_fu_11741_p2() {
    mul_ln184_70_fu_11741_p2 = (!mul_ln184_70_fu_11741_p0.read().is_01() || !mul_ln184_70_fu_11741_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_70_fu_11741_p0.read()) * sc_bigint<32>(mul_ln184_70_fu_11741_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_71_fu_11760_p0() {
    mul_ln184_71_fu_11760_p0 =  (sc_lv<23>) (mul_ln184_71_fu_11760_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_71_fu_11760_p00() {
    mul_ln184_71_fu_11760_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_71_fu_11760_p1() {
    mul_ln184_71_fu_11760_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_71_fu_11760_p2() {
    mul_ln184_71_fu_11760_p2 = (!mul_ln184_71_fu_11760_p0.read().is_01() || !mul_ln184_71_fu_11760_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_71_fu_11760_p0.read()) * sc_bigint<32>(mul_ln184_71_fu_11760_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_72_fu_11843_p0() {
    mul_ln184_72_fu_11843_p0 =  (sc_lv<23>) (mul_ln184_72_fu_11843_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_72_fu_11843_p00() {
    mul_ln184_72_fu_11843_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_72_fu_11843_p1() {
    mul_ln184_72_fu_11843_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_72_fu_11843_p2() {
    mul_ln184_72_fu_11843_p2 = (!mul_ln184_72_fu_11843_p0.read().is_01() || !mul_ln184_72_fu_11843_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_72_fu_11843_p0.read()) * sc_bigint<32>(mul_ln184_72_fu_11843_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_73_fu_11862_p0() {
    mul_ln184_73_fu_11862_p0 =  (sc_lv<23>) (mul_ln184_73_fu_11862_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_73_fu_11862_p00() {
    mul_ln184_73_fu_11862_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_73_fu_11862_p1() {
    mul_ln184_73_fu_11862_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_73_fu_11862_p2() {
    mul_ln184_73_fu_11862_p2 = (!mul_ln184_73_fu_11862_p0.read().is_01() || !mul_ln184_73_fu_11862_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_73_fu_11862_p0.read()) * sc_bigint<32>(mul_ln184_73_fu_11862_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_74_fu_11945_p0() {
    mul_ln184_74_fu_11945_p0 =  (sc_lv<23>) (mul_ln184_74_fu_11945_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_74_fu_11945_p00() {
    mul_ln184_74_fu_11945_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_74_fu_11945_p1() {
    mul_ln184_74_fu_11945_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_74_fu_11945_p2() {
    mul_ln184_74_fu_11945_p2 = (!mul_ln184_74_fu_11945_p0.read().is_01() || !mul_ln184_74_fu_11945_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_74_fu_11945_p0.read()) * sc_bigint<32>(mul_ln184_74_fu_11945_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_75_fu_11964_p0() {
    mul_ln184_75_fu_11964_p0 =  (sc_lv<23>) (mul_ln184_75_fu_11964_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_75_fu_11964_p00() {
    mul_ln184_75_fu_11964_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_75_fu_11964_p1() {
    mul_ln184_75_fu_11964_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_75_fu_11964_p2() {
    mul_ln184_75_fu_11964_p2 = (!mul_ln184_75_fu_11964_p0.read().is_01() || !mul_ln184_75_fu_11964_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_75_fu_11964_p0.read()) * sc_bigint<32>(mul_ln184_75_fu_11964_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_76_fu_12047_p0() {
    mul_ln184_76_fu_12047_p0 =  (sc_lv<23>) (mul_ln184_76_fu_12047_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_76_fu_12047_p00() {
    mul_ln184_76_fu_12047_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_76_fu_12047_p1() {
    mul_ln184_76_fu_12047_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_76_fu_12047_p2() {
    mul_ln184_76_fu_12047_p2 = (!mul_ln184_76_fu_12047_p0.read().is_01() || !mul_ln184_76_fu_12047_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_76_fu_12047_p0.read()) * sc_bigint<32>(mul_ln184_76_fu_12047_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_77_fu_12066_p0() {
    mul_ln184_77_fu_12066_p0 =  (sc_lv<23>) (mul_ln184_77_fu_12066_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_77_fu_12066_p00() {
    mul_ln184_77_fu_12066_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_77_fu_12066_p1() {
    mul_ln184_77_fu_12066_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_77_fu_12066_p2() {
    mul_ln184_77_fu_12066_p2 = (!mul_ln184_77_fu_12066_p0.read().is_01() || !mul_ln184_77_fu_12066_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_77_fu_12066_p0.read()) * sc_bigint<32>(mul_ln184_77_fu_12066_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_78_fu_12149_p0() {
    mul_ln184_78_fu_12149_p0 =  (sc_lv<23>) (mul_ln184_78_fu_12149_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_78_fu_12149_p00() {
    mul_ln184_78_fu_12149_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_78_fu_12149_p1() {
    mul_ln184_78_fu_12149_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_78_fu_12149_p2() {
    mul_ln184_78_fu_12149_p2 = (!mul_ln184_78_fu_12149_p0.read().is_01() || !mul_ln184_78_fu_12149_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_78_fu_12149_p0.read()) * sc_bigint<32>(mul_ln184_78_fu_12149_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_79_fu_12168_p0() {
    mul_ln184_79_fu_12168_p0 =  (sc_lv<23>) (mul_ln184_79_fu_12168_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_79_fu_12168_p00() {
    mul_ln184_79_fu_12168_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_79_fu_12168_p1() {
    mul_ln184_79_fu_12168_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_79_fu_12168_p2() {
    mul_ln184_79_fu_12168_p2 = (!mul_ln184_79_fu_12168_p0.read().is_01() || !mul_ln184_79_fu_12168_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_79_fu_12168_p0.read()) * sc_bigint<32>(mul_ln184_79_fu_12168_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_7_fu_8496_p0() {
    mul_ln184_7_fu_8496_p0 =  (sc_lv<23>) (mul_ln184_7_fu_8496_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_7_fu_8496_p00() {
    mul_ln184_7_fu_8496_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_7_fu_8496_p1() {
    mul_ln184_7_fu_8496_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_7_fu_8496_p2() {
    mul_ln184_7_fu_8496_p2 = (!mul_ln184_7_fu_8496_p0.read().is_01() || !mul_ln184_7_fu_8496_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_7_fu_8496_p0.read()) * sc_bigint<32>(mul_ln184_7_fu_8496_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_80_fu_12251_p0() {
    mul_ln184_80_fu_12251_p0 =  (sc_lv<23>) (mul_ln184_80_fu_12251_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_80_fu_12251_p00() {
    mul_ln184_80_fu_12251_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_80_fu_12251_p1() {
    mul_ln184_80_fu_12251_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_80_fu_12251_p2() {
    mul_ln184_80_fu_12251_p2 = (!mul_ln184_80_fu_12251_p0.read().is_01() || !mul_ln184_80_fu_12251_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_80_fu_12251_p0.read()) * sc_bigint<32>(mul_ln184_80_fu_12251_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_81_fu_12270_p0() {
    mul_ln184_81_fu_12270_p0 =  (sc_lv<23>) (mul_ln184_81_fu_12270_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_81_fu_12270_p00() {
    mul_ln184_81_fu_12270_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_81_fu_12270_p1() {
    mul_ln184_81_fu_12270_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_81_fu_12270_p2() {
    mul_ln184_81_fu_12270_p2 = (!mul_ln184_81_fu_12270_p0.read().is_01() || !mul_ln184_81_fu_12270_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_81_fu_12270_p0.read()) * sc_bigint<32>(mul_ln184_81_fu_12270_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_82_fu_12353_p0() {
    mul_ln184_82_fu_12353_p0 =  (sc_lv<23>) (mul_ln184_82_fu_12353_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_82_fu_12353_p00() {
    mul_ln184_82_fu_12353_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_82_fu_12353_p1() {
    mul_ln184_82_fu_12353_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_82_fu_12353_p2() {
    mul_ln184_82_fu_12353_p2 = (!mul_ln184_82_fu_12353_p0.read().is_01() || !mul_ln184_82_fu_12353_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_82_fu_12353_p0.read()) * sc_bigint<32>(mul_ln184_82_fu_12353_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_83_fu_12372_p0() {
    mul_ln184_83_fu_12372_p0 =  (sc_lv<23>) (mul_ln184_83_fu_12372_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_83_fu_12372_p00() {
    mul_ln184_83_fu_12372_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_83_fu_12372_p1() {
    mul_ln184_83_fu_12372_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_83_fu_12372_p2() {
    mul_ln184_83_fu_12372_p2 = (!mul_ln184_83_fu_12372_p0.read().is_01() || !mul_ln184_83_fu_12372_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_83_fu_12372_p0.read()) * sc_bigint<32>(mul_ln184_83_fu_12372_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_84_fu_12455_p0() {
    mul_ln184_84_fu_12455_p0 =  (sc_lv<23>) (mul_ln184_84_fu_12455_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_84_fu_12455_p00() {
    mul_ln184_84_fu_12455_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_84_fu_12455_p1() {
    mul_ln184_84_fu_12455_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_84_fu_12455_p2() {
    mul_ln184_84_fu_12455_p2 = (!mul_ln184_84_fu_12455_p0.read().is_01() || !mul_ln184_84_fu_12455_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_84_fu_12455_p0.read()) * sc_bigint<32>(mul_ln184_84_fu_12455_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_85_fu_12474_p0() {
    mul_ln184_85_fu_12474_p0 =  (sc_lv<23>) (mul_ln184_85_fu_12474_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_85_fu_12474_p00() {
    mul_ln184_85_fu_12474_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_85_fu_12474_p1() {
    mul_ln184_85_fu_12474_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_85_fu_12474_p2() {
    mul_ln184_85_fu_12474_p2 = (!mul_ln184_85_fu_12474_p0.read().is_01() || !mul_ln184_85_fu_12474_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_85_fu_12474_p0.read()) * sc_bigint<32>(mul_ln184_85_fu_12474_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_86_fu_12557_p0() {
    mul_ln184_86_fu_12557_p0 =  (sc_lv<23>) (mul_ln184_86_fu_12557_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_86_fu_12557_p00() {
    mul_ln184_86_fu_12557_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_86_fu_12557_p1() {
    mul_ln184_86_fu_12557_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_86_fu_12557_p2() {
    mul_ln184_86_fu_12557_p2 = (!mul_ln184_86_fu_12557_p0.read().is_01() || !mul_ln184_86_fu_12557_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_86_fu_12557_p0.read()) * sc_bigint<32>(mul_ln184_86_fu_12557_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_87_fu_12576_p0() {
    mul_ln184_87_fu_12576_p0 =  (sc_lv<23>) (mul_ln184_87_fu_12576_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_87_fu_12576_p00() {
    mul_ln184_87_fu_12576_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_87_fu_12576_p1() {
    mul_ln184_87_fu_12576_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_87_fu_12576_p2() {
    mul_ln184_87_fu_12576_p2 = (!mul_ln184_87_fu_12576_p0.read().is_01() || !mul_ln184_87_fu_12576_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_87_fu_12576_p0.read()) * sc_bigint<32>(mul_ln184_87_fu_12576_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_88_fu_12659_p0() {
    mul_ln184_88_fu_12659_p0 =  (sc_lv<23>) (mul_ln184_88_fu_12659_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_88_fu_12659_p00() {
    mul_ln184_88_fu_12659_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_88_fu_12659_p1() {
    mul_ln184_88_fu_12659_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_88_fu_12659_p2() {
    mul_ln184_88_fu_12659_p2 = (!mul_ln184_88_fu_12659_p0.read().is_01() || !mul_ln184_88_fu_12659_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_88_fu_12659_p0.read()) * sc_bigint<32>(mul_ln184_88_fu_12659_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_89_fu_12678_p0() {
    mul_ln184_89_fu_12678_p0 =  (sc_lv<23>) (mul_ln184_89_fu_12678_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_89_fu_12678_p00() {
    mul_ln184_89_fu_12678_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_89_fu_12678_p1() {
    mul_ln184_89_fu_12678_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_89_fu_12678_p2() {
    mul_ln184_89_fu_12678_p2 = (!mul_ln184_89_fu_12678_p0.read().is_01() || !mul_ln184_89_fu_12678_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_89_fu_12678_p0.read()) * sc_bigint<32>(mul_ln184_89_fu_12678_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_8_fu_8579_p0() {
    mul_ln184_8_fu_8579_p0 =  (sc_lv<23>) (mul_ln184_8_fu_8579_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_8_fu_8579_p00() {
    mul_ln184_8_fu_8579_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_8_fu_8579_p1() {
    mul_ln184_8_fu_8579_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_8_fu_8579_p2() {
    mul_ln184_8_fu_8579_p2 = (!mul_ln184_8_fu_8579_p0.read().is_01() || !mul_ln184_8_fu_8579_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_8_fu_8579_p0.read()) * sc_bigint<32>(mul_ln184_8_fu_8579_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_90_fu_12761_p0() {
    mul_ln184_90_fu_12761_p0 =  (sc_lv<23>) (mul_ln184_90_fu_12761_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_90_fu_12761_p00() {
    mul_ln184_90_fu_12761_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_90_fu_12761_p1() {
    mul_ln184_90_fu_12761_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_90_fu_12761_p2() {
    mul_ln184_90_fu_12761_p2 = (!mul_ln184_90_fu_12761_p0.read().is_01() || !mul_ln184_90_fu_12761_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_90_fu_12761_p0.read()) * sc_bigint<32>(mul_ln184_90_fu_12761_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_91_fu_12780_p0() {
    mul_ln184_91_fu_12780_p0 =  (sc_lv<23>) (mul_ln184_91_fu_12780_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_91_fu_12780_p00() {
    mul_ln184_91_fu_12780_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_91_fu_12780_p1() {
    mul_ln184_91_fu_12780_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_91_fu_12780_p2() {
    mul_ln184_91_fu_12780_p2 = (!mul_ln184_91_fu_12780_p0.read().is_01() || !mul_ln184_91_fu_12780_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_91_fu_12780_p0.read()) * sc_bigint<32>(mul_ln184_91_fu_12780_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_92_fu_12863_p0() {
    mul_ln184_92_fu_12863_p0 =  (sc_lv<23>) (mul_ln184_92_fu_12863_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_92_fu_12863_p00() {
    mul_ln184_92_fu_12863_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_92_fu_12863_p1() {
    mul_ln184_92_fu_12863_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_92_fu_12863_p2() {
    mul_ln184_92_fu_12863_p2 = (!mul_ln184_92_fu_12863_p0.read().is_01() || !mul_ln184_92_fu_12863_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_92_fu_12863_p0.read()) * sc_bigint<32>(mul_ln184_92_fu_12863_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_93_fu_12882_p0() {
    mul_ln184_93_fu_12882_p0 =  (sc_lv<23>) (mul_ln184_93_fu_12882_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_93_fu_12882_p00() {
    mul_ln184_93_fu_12882_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_93_fu_12882_p1() {
    mul_ln184_93_fu_12882_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_93_fu_12882_p2() {
    mul_ln184_93_fu_12882_p2 = (!mul_ln184_93_fu_12882_p0.read().is_01() || !mul_ln184_93_fu_12882_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_93_fu_12882_p0.read()) * sc_bigint<32>(mul_ln184_93_fu_12882_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_94_fu_12965_p0() {
    mul_ln184_94_fu_12965_p0 =  (sc_lv<23>) (mul_ln184_94_fu_12965_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_94_fu_12965_p00() {
    mul_ln184_94_fu_12965_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_94_fu_12965_p1() {
    mul_ln184_94_fu_12965_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_94_fu_12965_p2() {
    mul_ln184_94_fu_12965_p2 = (!mul_ln184_94_fu_12965_p0.read().is_01() || !mul_ln184_94_fu_12965_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_94_fu_12965_p0.read()) * sc_bigint<32>(mul_ln184_94_fu_12965_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_95_fu_12984_p0() {
    mul_ln184_95_fu_12984_p0 =  (sc_lv<23>) (mul_ln184_95_fu_12984_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_95_fu_12984_p00() {
    mul_ln184_95_fu_12984_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_95_fu_12984_p1() {
    mul_ln184_95_fu_12984_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_95_fu_12984_p2() {
    mul_ln184_95_fu_12984_p2 = (!mul_ln184_95_fu_12984_p0.read().is_01() || !mul_ln184_95_fu_12984_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_95_fu_12984_p0.read()) * sc_bigint<32>(mul_ln184_95_fu_12984_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_96_fu_13067_p0() {
    mul_ln184_96_fu_13067_p0 =  (sc_lv<23>) (mul_ln184_96_fu_13067_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_96_fu_13067_p00() {
    mul_ln184_96_fu_13067_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_96_fu_13067_p1() {
    mul_ln184_96_fu_13067_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_96_fu_13067_p2() {
    mul_ln184_96_fu_13067_p2 = (!mul_ln184_96_fu_13067_p0.read().is_01() || !mul_ln184_96_fu_13067_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_96_fu_13067_p0.read()) * sc_bigint<32>(mul_ln184_96_fu_13067_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_97_fu_13086_p0() {
    mul_ln184_97_fu_13086_p0 =  (sc_lv<23>) (mul_ln184_97_fu_13086_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_97_fu_13086_p00() {
    mul_ln184_97_fu_13086_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_97_fu_13086_p1() {
    mul_ln184_97_fu_13086_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_97_fu_13086_p2() {
    mul_ln184_97_fu_13086_p2 = (!mul_ln184_97_fu_13086_p0.read().is_01() || !mul_ln184_97_fu_13086_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_97_fu_13086_p0.read()) * sc_bigint<32>(mul_ln184_97_fu_13086_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_98_fu_13169_p0() {
    mul_ln184_98_fu_13169_p0 =  (sc_lv<23>) (mul_ln184_98_fu_13169_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_98_fu_13169_p00() {
    mul_ln184_98_fu_13169_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_98_fu_13169_p1() {
    mul_ln184_98_fu_13169_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_98_fu_13169_p2() {
    mul_ln184_98_fu_13169_p2 = (!mul_ln184_98_fu_13169_p0.read().is_01() || !mul_ln184_98_fu_13169_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_98_fu_13169_p0.read()) * sc_bigint<32>(mul_ln184_98_fu_13169_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_99_fu_13188_p0() {
    mul_ln184_99_fu_13188_p0 =  (sc_lv<23>) (mul_ln184_99_fu_13188_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_99_fu_13188_p00() {
    mul_ln184_99_fu_13188_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_99_fu_13188_p1() {
    mul_ln184_99_fu_13188_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_99_fu_13188_p2() {
    mul_ln184_99_fu_13188_p2 = (!mul_ln184_99_fu_13188_p0.read().is_01() || !mul_ln184_99_fu_13188_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_99_fu_13188_p0.read()) * sc_bigint<32>(mul_ln184_99_fu_13188_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_9_fu_8598_p0() {
    mul_ln184_9_fu_8598_p0 =  (sc_lv<23>) (mul_ln184_9_fu_8598_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_9_fu_8598_p00() {
    mul_ln184_9_fu_8598_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_9_fu_8598_p1() {
    mul_ln184_9_fu_8598_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_9_fu_8598_p2() {
    mul_ln184_9_fu_8598_p2 = (!mul_ln184_9_fu_8598_p0.read().is_01() || !mul_ln184_9_fu_8598_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_9_fu_8598_p0.read()) * sc_bigint<32>(mul_ln184_9_fu_8598_p1.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_fu_8171_p0() {
    mul_ln184_fu_8171_p0 =  (sc_lv<23>) (mul_ln184_fu_8171_p00.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_fu_8171_p00() {
    mul_ln184_fu_8171_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_15::thread_mul_ln184_fu_8171_p1() {
    mul_ln184_fu_8171_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_15::thread_mul_ln184_fu_8171_p2() {
    mul_ln184_fu_8171_p2 = (!mul_ln184_fu_8171_p0.read().is_01() || !mul_ln184_fu_8171_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln184_fu_8171_p0.read()) * sc_bigint<32>(mul_ln184_fu_8171_p1.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_100_fu_13111_p2() {
    or_ln184_100_fu_13111_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_65);
}

void pqcrystals_dilithium_15::thread_or_ln184_101_fu_13199_p2() {
    or_ln184_101_fu_13199_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_66);
}

void pqcrystals_dilithium_15::thread_or_ln184_102_fu_13213_p2() {
    or_ln184_102_fu_13213_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_67);
}

void pqcrystals_dilithium_15::thread_or_ln184_103_fu_13301_p2() {
    or_ln184_103_fu_13301_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_68);
}

void pqcrystals_dilithium_15::thread_or_ln184_104_fu_13315_p2() {
    or_ln184_104_fu_13315_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_69);
}

void pqcrystals_dilithium_15::thread_or_ln184_105_fu_13403_p2() {
    or_ln184_105_fu_13403_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6A);
}

void pqcrystals_dilithium_15::thread_or_ln184_106_fu_13417_p2() {
    or_ln184_106_fu_13417_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6B);
}

void pqcrystals_dilithium_15::thread_or_ln184_107_fu_13505_p2() {
    or_ln184_107_fu_13505_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6C);
}

void pqcrystals_dilithium_15::thread_or_ln184_108_fu_13519_p2() {
    or_ln184_108_fu_13519_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6D);
}

void pqcrystals_dilithium_15::thread_or_ln184_109_fu_13607_p2() {
    or_ln184_109_fu_13607_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6E);
}

void pqcrystals_dilithium_15::thread_or_ln184_10_fu_8521_p2() {
    or_ln184_10_fu_8521_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B);
}

void pqcrystals_dilithium_15::thread_or_ln184_110_fu_13621_p2() {
    or_ln184_110_fu_13621_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6F);
}

void pqcrystals_dilithium_15::thread_or_ln184_111_fu_13709_p2() {
    or_ln184_111_fu_13709_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_70);
}

void pqcrystals_dilithium_15::thread_or_ln184_112_fu_13723_p2() {
    or_ln184_112_fu_13723_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_71);
}

void pqcrystals_dilithium_15::thread_or_ln184_113_fu_13811_p2() {
    or_ln184_113_fu_13811_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_72);
}

void pqcrystals_dilithium_15::thread_or_ln184_114_fu_13825_p2() {
    or_ln184_114_fu_13825_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_73);
}

void pqcrystals_dilithium_15::thread_or_ln184_115_fu_13913_p2() {
    or_ln184_115_fu_13913_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_74);
}

void pqcrystals_dilithium_15::thread_or_ln184_116_fu_13927_p2() {
    or_ln184_116_fu_13927_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_75);
}

void pqcrystals_dilithium_15::thread_or_ln184_117_fu_14015_p2() {
    or_ln184_117_fu_14015_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_76);
}

void pqcrystals_dilithium_15::thread_or_ln184_118_fu_14029_p2() {
    or_ln184_118_fu_14029_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_77);
}

void pqcrystals_dilithium_15::thread_or_ln184_119_fu_14117_p2() {
    or_ln184_119_fu_14117_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_78);
}

void pqcrystals_dilithium_15::thread_or_ln184_11_fu_8609_p2() {
    or_ln184_11_fu_8609_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C);
}

void pqcrystals_dilithium_15::thread_or_ln184_120_fu_14131_p2() {
    or_ln184_120_fu_14131_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_79);
}

void pqcrystals_dilithium_15::thread_or_ln184_121_fu_14219_p2() {
    or_ln184_121_fu_14219_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7A);
}

void pqcrystals_dilithium_15::thread_or_ln184_122_fu_14233_p2() {
    or_ln184_122_fu_14233_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7B);
}

void pqcrystals_dilithium_15::thread_or_ln184_123_fu_14321_p2() {
    or_ln184_123_fu_14321_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7C);
}

void pqcrystals_dilithium_15::thread_or_ln184_124_fu_14335_p2() {
    or_ln184_124_fu_14335_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7D);
}

void pqcrystals_dilithium_15::thread_or_ln184_125_fu_14423_p2() {
    or_ln184_125_fu_14423_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7E);
}

void pqcrystals_dilithium_15::thread_or_ln184_126_fu_14437_p2() {
    or_ln184_126_fu_14437_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7F);
}

void pqcrystals_dilithium_15::thread_or_ln184_127_fu_14525_p2() {
    or_ln184_127_fu_14525_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_80);
}

void pqcrystals_dilithium_15::thread_or_ln184_128_fu_14539_p2() {
    or_ln184_128_fu_14539_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_81);
}

void pqcrystals_dilithium_15::thread_or_ln184_129_fu_14627_p2() {
    or_ln184_129_fu_14627_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_82);
}

void pqcrystals_dilithium_15::thread_or_ln184_12_fu_8623_p2() {
    or_ln184_12_fu_8623_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D);
}

void pqcrystals_dilithium_15::thread_or_ln184_130_fu_14641_p2() {
    or_ln184_130_fu_14641_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_83);
}

void pqcrystals_dilithium_15::thread_or_ln184_131_fu_14729_p2() {
    or_ln184_131_fu_14729_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_84);
}

void pqcrystals_dilithium_15::thread_or_ln184_132_fu_14743_p2() {
    or_ln184_132_fu_14743_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_85);
}

void pqcrystals_dilithium_15::thread_or_ln184_133_fu_14831_p2() {
    or_ln184_133_fu_14831_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_86);
}

void pqcrystals_dilithium_15::thread_or_ln184_134_fu_14845_p2() {
    or_ln184_134_fu_14845_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_87);
}

void pqcrystals_dilithium_15::thread_or_ln184_135_fu_14933_p2() {
    or_ln184_135_fu_14933_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_88);
}

void pqcrystals_dilithium_15::thread_or_ln184_136_fu_14947_p2() {
    or_ln184_136_fu_14947_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_89);
}

void pqcrystals_dilithium_15::thread_or_ln184_137_fu_15035_p2() {
    or_ln184_137_fu_15035_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8A);
}

void pqcrystals_dilithium_15::thread_or_ln184_138_fu_15049_p2() {
    or_ln184_138_fu_15049_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8B);
}

void pqcrystals_dilithium_15::thread_or_ln184_139_fu_15137_p2() {
    or_ln184_139_fu_15137_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8C);
}

void pqcrystals_dilithium_15::thread_or_ln184_13_fu_8711_p2() {
    or_ln184_13_fu_8711_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E);
}

void pqcrystals_dilithium_15::thread_or_ln184_140_fu_15151_p2() {
    or_ln184_140_fu_15151_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8D);
}

void pqcrystals_dilithium_15::thread_or_ln184_141_fu_15239_p2() {
    or_ln184_141_fu_15239_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8E);
}

void pqcrystals_dilithium_15::thread_or_ln184_142_fu_15253_p2() {
    or_ln184_142_fu_15253_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8F);
}

void pqcrystals_dilithium_15::thread_or_ln184_143_fu_15341_p2() {
    or_ln184_143_fu_15341_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_90);
}

void pqcrystals_dilithium_15::thread_or_ln184_144_fu_15355_p2() {
    or_ln184_144_fu_15355_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_91);
}

void pqcrystals_dilithium_15::thread_or_ln184_145_fu_15443_p2() {
    or_ln184_145_fu_15443_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_92);
}

void pqcrystals_dilithium_15::thread_or_ln184_146_fu_15457_p2() {
    or_ln184_146_fu_15457_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_93);
}

void pqcrystals_dilithium_15::thread_or_ln184_147_fu_15545_p2() {
    or_ln184_147_fu_15545_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_94);
}

void pqcrystals_dilithium_15::thread_or_ln184_148_fu_15559_p2() {
    or_ln184_148_fu_15559_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_95);
}

void pqcrystals_dilithium_15::thread_or_ln184_149_fu_15647_p2() {
    or_ln184_149_fu_15647_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_96);
}

void pqcrystals_dilithium_15::thread_or_ln184_14_fu_8725_p2() {
    or_ln184_14_fu_8725_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F);
}

void pqcrystals_dilithium_15::thread_or_ln184_150_fu_15661_p2() {
    or_ln184_150_fu_15661_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_97);
}

void pqcrystals_dilithium_15::thread_or_ln184_151_fu_15749_p2() {
    or_ln184_151_fu_15749_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_98);
}

void pqcrystals_dilithium_15::thread_or_ln184_152_fu_15763_p2() {
    or_ln184_152_fu_15763_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_99);
}

void pqcrystals_dilithium_15::thread_or_ln184_153_fu_15851_p2() {
    or_ln184_153_fu_15851_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9A);
}

void pqcrystals_dilithium_15::thread_or_ln184_154_fu_15865_p2() {
    or_ln184_154_fu_15865_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9B);
}

void pqcrystals_dilithium_15::thread_or_ln184_155_fu_15953_p2() {
    or_ln184_155_fu_15953_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9C);
}

void pqcrystals_dilithium_15::thread_or_ln184_156_fu_15967_p2() {
    or_ln184_156_fu_15967_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9D);
}

void pqcrystals_dilithium_15::thread_or_ln184_157_fu_16055_p2() {
    or_ln184_157_fu_16055_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9E);
}

void pqcrystals_dilithium_15::thread_or_ln184_158_fu_16069_p2() {
    or_ln184_158_fu_16069_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9F);
}

void pqcrystals_dilithium_15::thread_or_ln184_159_fu_16157_p2() {
    or_ln184_159_fu_16157_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A0);
}

void pqcrystals_dilithium_15::thread_or_ln184_15_fu_8813_p2() {
    or_ln184_15_fu_8813_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_10);
}

void pqcrystals_dilithium_15::thread_or_ln184_160_fu_16171_p2() {
    or_ln184_160_fu_16171_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A1);
}

void pqcrystals_dilithium_15::thread_or_ln184_161_fu_16259_p2() {
    or_ln184_161_fu_16259_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A2);
}

void pqcrystals_dilithium_15::thread_or_ln184_162_fu_16273_p2() {
    or_ln184_162_fu_16273_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A3);
}

void pqcrystals_dilithium_15::thread_or_ln184_163_fu_16361_p2() {
    or_ln184_163_fu_16361_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A4);
}

void pqcrystals_dilithium_15::thread_or_ln184_164_fu_16375_p2() {
    or_ln184_164_fu_16375_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A5);
}

void pqcrystals_dilithium_15::thread_or_ln184_165_fu_16463_p2() {
    or_ln184_165_fu_16463_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A6);
}

void pqcrystals_dilithium_15::thread_or_ln184_166_fu_16477_p2() {
    or_ln184_166_fu_16477_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A7);
}

void pqcrystals_dilithium_15::thread_or_ln184_167_fu_16565_p2() {
    or_ln184_167_fu_16565_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A8);
}

void pqcrystals_dilithium_15::thread_or_ln184_168_fu_16579_p2() {
    or_ln184_168_fu_16579_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A9);
}

void pqcrystals_dilithium_15::thread_or_ln184_169_fu_16667_p2() {
    or_ln184_169_fu_16667_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_AA);
}

void pqcrystals_dilithium_15::thread_or_ln184_16_fu_8827_p2() {
    or_ln184_16_fu_8827_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_11);
}

void pqcrystals_dilithium_15::thread_or_ln184_170_fu_16681_p2() {
    or_ln184_170_fu_16681_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_AB);
}

void pqcrystals_dilithium_15::thread_or_ln184_171_fu_16769_p2() {
    or_ln184_171_fu_16769_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_AC);
}

void pqcrystals_dilithium_15::thread_or_ln184_172_fu_16783_p2() {
    or_ln184_172_fu_16783_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_AD);
}

void pqcrystals_dilithium_15::thread_or_ln184_173_fu_16871_p2() {
    or_ln184_173_fu_16871_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_AE);
}

void pqcrystals_dilithium_15::thread_or_ln184_174_fu_16885_p2() {
    or_ln184_174_fu_16885_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_AF);
}

void pqcrystals_dilithium_15::thread_or_ln184_175_fu_16973_p2() {
    or_ln184_175_fu_16973_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B0);
}

void pqcrystals_dilithium_15::thread_or_ln184_176_fu_16987_p2() {
    or_ln184_176_fu_16987_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B1);
}

void pqcrystals_dilithium_15::thread_or_ln184_177_fu_17075_p2() {
    or_ln184_177_fu_17075_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B2);
}

void pqcrystals_dilithium_15::thread_or_ln184_178_fu_17089_p2() {
    or_ln184_178_fu_17089_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B3);
}

void pqcrystals_dilithium_15::thread_or_ln184_179_fu_17177_p2() {
    or_ln184_179_fu_17177_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B4);
}

void pqcrystals_dilithium_15::thread_or_ln184_17_fu_8915_p2() {
    or_ln184_17_fu_8915_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_12);
}

void pqcrystals_dilithium_15::thread_or_ln184_180_fu_17191_p2() {
    or_ln184_180_fu_17191_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B5);
}

void pqcrystals_dilithium_15::thread_or_ln184_181_fu_17279_p2() {
    or_ln184_181_fu_17279_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B6);
}

void pqcrystals_dilithium_15::thread_or_ln184_182_fu_17293_p2() {
    or_ln184_182_fu_17293_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B7);
}

void pqcrystals_dilithium_15::thread_or_ln184_183_fu_17381_p2() {
    or_ln184_183_fu_17381_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B8);
}

void pqcrystals_dilithium_15::thread_or_ln184_184_fu_17395_p2() {
    or_ln184_184_fu_17395_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_B9);
}

void pqcrystals_dilithium_15::thread_or_ln184_185_fu_17483_p2() {
    or_ln184_185_fu_17483_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_BA);
}

void pqcrystals_dilithium_15::thread_or_ln184_186_fu_17497_p2() {
    or_ln184_186_fu_17497_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_BB);
}

void pqcrystals_dilithium_15::thread_or_ln184_187_fu_17585_p2() {
    or_ln184_187_fu_17585_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_BC);
}

void pqcrystals_dilithium_15::thread_or_ln184_188_fu_17599_p2() {
    or_ln184_188_fu_17599_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_BD);
}

void pqcrystals_dilithium_15::thread_or_ln184_189_fu_17687_p2() {
    or_ln184_189_fu_17687_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_BE);
}

void pqcrystals_dilithium_15::thread_or_ln184_18_fu_8929_p2() {
    or_ln184_18_fu_8929_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_13);
}

void pqcrystals_dilithium_15::thread_or_ln184_190_fu_17701_p2() {
    or_ln184_190_fu_17701_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_BF);
}

void pqcrystals_dilithium_15::thread_or_ln184_191_fu_17789_p2() {
    or_ln184_191_fu_17789_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C0);
}

void pqcrystals_dilithium_15::thread_or_ln184_192_fu_17803_p2() {
    or_ln184_192_fu_17803_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C1);
}

void pqcrystals_dilithium_15::thread_or_ln184_193_fu_17891_p2() {
    or_ln184_193_fu_17891_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C2);
}

void pqcrystals_dilithium_15::thread_or_ln184_194_fu_17905_p2() {
    or_ln184_194_fu_17905_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C3);
}

void pqcrystals_dilithium_15::thread_or_ln184_195_fu_17993_p2() {
    or_ln184_195_fu_17993_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C4);
}

void pqcrystals_dilithium_15::thread_or_ln184_196_fu_18007_p2() {
    or_ln184_196_fu_18007_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C5);
}

void pqcrystals_dilithium_15::thread_or_ln184_197_fu_18095_p2() {
    or_ln184_197_fu_18095_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C6);
}

void pqcrystals_dilithium_15::thread_or_ln184_198_fu_18109_p2() {
    or_ln184_198_fu_18109_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C7);
}

void pqcrystals_dilithium_15::thread_or_ln184_199_fu_18197_p2() {
    or_ln184_199_fu_18197_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C8);
}

void pqcrystals_dilithium_15::thread_or_ln184_19_fu_9017_p2() {
    or_ln184_19_fu_9017_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_14);
}

void pqcrystals_dilithium_15::thread_or_ln184_1_fu_8099_p2() {
    or_ln184_1_fu_8099_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2);
}

void pqcrystals_dilithium_15::thread_or_ln184_200_fu_18211_p2() {
    or_ln184_200_fu_18211_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_C9);
}

void pqcrystals_dilithium_15::thread_or_ln184_201_fu_18299_p2() {
    or_ln184_201_fu_18299_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_CA);
}

void pqcrystals_dilithium_15::thread_or_ln184_202_fu_18313_p2() {
    or_ln184_202_fu_18313_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_CB);
}

void pqcrystals_dilithium_15::thread_or_ln184_203_fu_18401_p2() {
    or_ln184_203_fu_18401_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_CC);
}

void pqcrystals_dilithium_15::thread_or_ln184_204_fu_18415_p2() {
    or_ln184_204_fu_18415_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_CD);
}

void pqcrystals_dilithium_15::thread_or_ln184_205_fu_18503_p2() {
    or_ln184_205_fu_18503_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_CE);
}

void pqcrystals_dilithium_15::thread_or_ln184_206_fu_18517_p2() {
    or_ln184_206_fu_18517_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_CF);
}

void pqcrystals_dilithium_15::thread_or_ln184_207_fu_18605_p2() {
    or_ln184_207_fu_18605_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D0);
}

void pqcrystals_dilithium_15::thread_or_ln184_208_fu_18619_p2() {
    or_ln184_208_fu_18619_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D1);
}

void pqcrystals_dilithium_15::thread_or_ln184_209_fu_18707_p2() {
    or_ln184_209_fu_18707_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D2);
}

void pqcrystals_dilithium_15::thread_or_ln184_20_fu_9031_p2() {
    or_ln184_20_fu_9031_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_15);
}

void pqcrystals_dilithium_15::thread_or_ln184_210_fu_18721_p2() {
    or_ln184_210_fu_18721_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D3);
}

void pqcrystals_dilithium_15::thread_or_ln184_211_fu_18809_p2() {
    or_ln184_211_fu_18809_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D4);
}

void pqcrystals_dilithium_15::thread_or_ln184_212_fu_18823_p2() {
    or_ln184_212_fu_18823_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D5);
}

void pqcrystals_dilithium_15::thread_or_ln184_213_fu_18911_p2() {
    or_ln184_213_fu_18911_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D6);
}

void pqcrystals_dilithium_15::thread_or_ln184_214_fu_18925_p2() {
    or_ln184_214_fu_18925_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D7);
}

void pqcrystals_dilithium_15::thread_or_ln184_215_fu_19013_p2() {
    or_ln184_215_fu_19013_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D8);
}

void pqcrystals_dilithium_15::thread_or_ln184_216_fu_19027_p2() {
    or_ln184_216_fu_19027_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_D9);
}

void pqcrystals_dilithium_15::thread_or_ln184_217_fu_19115_p2() {
    or_ln184_217_fu_19115_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_DA);
}

void pqcrystals_dilithium_15::thread_or_ln184_218_fu_19129_p2() {
    or_ln184_218_fu_19129_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_DB);
}

void pqcrystals_dilithium_15::thread_or_ln184_219_fu_19217_p2() {
    or_ln184_219_fu_19217_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_DC);
}

void pqcrystals_dilithium_15::thread_or_ln184_21_fu_9119_p2() {
    or_ln184_21_fu_9119_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_16);
}

void pqcrystals_dilithium_15::thread_or_ln184_220_fu_19231_p2() {
    or_ln184_220_fu_19231_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_DD);
}

void pqcrystals_dilithium_15::thread_or_ln184_221_fu_19319_p2() {
    or_ln184_221_fu_19319_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_DE);
}

void pqcrystals_dilithium_15::thread_or_ln184_222_fu_19333_p2() {
    or_ln184_222_fu_19333_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_DF);
}

void pqcrystals_dilithium_15::thread_or_ln184_223_fu_19421_p2() {
    or_ln184_223_fu_19421_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E0);
}

void pqcrystals_dilithium_15::thread_or_ln184_224_fu_19435_p2() {
    or_ln184_224_fu_19435_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E1);
}

void pqcrystals_dilithium_15::thread_or_ln184_225_fu_19523_p2() {
    or_ln184_225_fu_19523_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E2);
}

void pqcrystals_dilithium_15::thread_or_ln184_226_fu_19537_p2() {
    or_ln184_226_fu_19537_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E3);
}

void pqcrystals_dilithium_15::thread_or_ln184_227_fu_19625_p2() {
    or_ln184_227_fu_19625_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E4);
}

void pqcrystals_dilithium_15::thread_or_ln184_228_fu_19639_p2() {
    or_ln184_228_fu_19639_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E5);
}

void pqcrystals_dilithium_15::thread_or_ln184_229_fu_19727_p2() {
    or_ln184_229_fu_19727_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E6);
}

void pqcrystals_dilithium_15::thread_or_ln184_22_fu_9133_p2() {
    or_ln184_22_fu_9133_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_17);
}

void pqcrystals_dilithium_15::thread_or_ln184_230_fu_19741_p2() {
    or_ln184_230_fu_19741_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E7);
}

void pqcrystals_dilithium_15::thread_or_ln184_231_fu_19829_p2() {
    or_ln184_231_fu_19829_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E8);
}

void pqcrystals_dilithium_15::thread_or_ln184_232_fu_19843_p2() {
    or_ln184_232_fu_19843_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_E9);
}

void pqcrystals_dilithium_15::thread_or_ln184_233_fu_19931_p2() {
    or_ln184_233_fu_19931_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_EA);
}

void pqcrystals_dilithium_15::thread_or_ln184_234_fu_19945_p2() {
    or_ln184_234_fu_19945_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_EB);
}

void pqcrystals_dilithium_15::thread_or_ln184_235_fu_20033_p2() {
    or_ln184_235_fu_20033_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_EC);
}

void pqcrystals_dilithium_15::thread_or_ln184_236_fu_20047_p2() {
    or_ln184_236_fu_20047_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_ED);
}

void pqcrystals_dilithium_15::thread_or_ln184_237_fu_20135_p2() {
    or_ln184_237_fu_20135_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_EE);
}

void pqcrystals_dilithium_15::thread_or_ln184_238_fu_20149_p2() {
    or_ln184_238_fu_20149_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_EF);
}

void pqcrystals_dilithium_15::thread_or_ln184_239_fu_20237_p2() {
    or_ln184_239_fu_20237_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F0);
}

void pqcrystals_dilithium_15::thread_or_ln184_23_fu_9221_p2() {
    or_ln184_23_fu_9221_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_18);
}

void pqcrystals_dilithium_15::thread_or_ln184_240_fu_20251_p2() {
    or_ln184_240_fu_20251_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F1);
}

void pqcrystals_dilithium_15::thread_or_ln184_241_fu_20339_p2() {
    or_ln184_241_fu_20339_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F2);
}

void pqcrystals_dilithium_15::thread_or_ln184_242_fu_20353_p2() {
    or_ln184_242_fu_20353_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F3);
}

void pqcrystals_dilithium_15::thread_or_ln184_243_fu_20441_p2() {
    or_ln184_243_fu_20441_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F4);
}

void pqcrystals_dilithium_15::thread_or_ln184_244_fu_20455_p2() {
    or_ln184_244_fu_20455_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F5);
}

void pqcrystals_dilithium_15::thread_or_ln184_245_fu_20543_p2() {
    or_ln184_245_fu_20543_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F6);
}

void pqcrystals_dilithium_15::thread_or_ln184_246_fu_20557_p2() {
    or_ln184_246_fu_20557_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F7);
}

void pqcrystals_dilithium_15::thread_or_ln184_247_fu_20645_p2() {
    or_ln184_247_fu_20645_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F8);
}

void pqcrystals_dilithium_15::thread_or_ln184_248_fu_20659_p2() {
    or_ln184_248_fu_20659_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_F9);
}

void pqcrystals_dilithium_15::thread_or_ln184_249_fu_20747_p2() {
    or_ln184_249_fu_20747_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_FA);
}

void pqcrystals_dilithium_15::thread_or_ln184_24_fu_9235_p2() {
    or_ln184_24_fu_9235_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_19);
}

void pqcrystals_dilithium_15::thread_or_ln184_250_fu_20761_p2() {
    or_ln184_250_fu_20761_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_FB);
}

void pqcrystals_dilithium_15::thread_or_ln184_251_fu_20849_p2() {
    or_ln184_251_fu_20849_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_FC);
}

void pqcrystals_dilithium_15::thread_or_ln184_252_fu_20863_p2() {
    or_ln184_252_fu_20863_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_FD);
}

void pqcrystals_dilithium_15::thread_or_ln184_253_fu_20951_p2() {
    or_ln184_253_fu_20951_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_FE);
}

void pqcrystals_dilithium_15::thread_or_ln184_254_fu_20965_p2() {
    or_ln184_254_fu_20965_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_FF);
}

void pqcrystals_dilithium_15::thread_or_ln184_255_fu_8132_p3() {
    or_ln184_255_fu_8132_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_511_fu_8127_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_256_fu_8150_p3() {
    or_ln184_256_fu_8150_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_512_fu_8145_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_257_fu_8234_p3() {
    or_ln184_257_fu_8234_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_513_fu_8229_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_258_fu_8252_p3() {
    or_ln184_258_fu_8252_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_514_fu_8247_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_259_fu_8336_p3() {
    or_ln184_259_fu_8336_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_515_fu_8331_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_25_fu_9323_p2() {
    or_ln184_25_fu_9323_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_1A);
}

void pqcrystals_dilithium_15::thread_or_ln184_260_fu_8354_p3() {
    or_ln184_260_fu_8354_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_516_fu_8349_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_261_fu_8438_p3() {
    or_ln184_261_fu_8438_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_517_fu_8433_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_262_fu_8456_p3() {
    or_ln184_262_fu_8456_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_518_fu_8451_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_263_fu_8540_p3() {
    or_ln184_263_fu_8540_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_519_fu_8535_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_264_fu_8558_p3() {
    or_ln184_264_fu_8558_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_520_fu_8553_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_265_fu_8642_p3() {
    or_ln184_265_fu_8642_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_521_fu_8637_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_266_fu_8660_p3() {
    or_ln184_266_fu_8660_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_522_fu_8655_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_267_fu_8744_p3() {
    or_ln184_267_fu_8744_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_523_fu_8739_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_268_fu_8762_p3() {
    or_ln184_268_fu_8762_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_524_fu_8757_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_269_fu_8846_p3() {
    or_ln184_269_fu_8846_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_525_fu_8841_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_26_fu_9337_p2() {
    or_ln184_26_fu_9337_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_1B);
}

void pqcrystals_dilithium_15::thread_or_ln184_270_fu_8864_p3() {
    or_ln184_270_fu_8864_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_526_fu_8859_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_271_fu_8948_p3() {
    or_ln184_271_fu_8948_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_527_fu_8943_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_272_fu_8966_p3() {
    or_ln184_272_fu_8966_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_528_fu_8961_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_273_fu_9050_p3() {
    or_ln184_273_fu_9050_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_529_fu_9045_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_274_fu_9068_p3() {
    or_ln184_274_fu_9068_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_530_fu_9063_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_275_fu_9152_p3() {
    or_ln184_275_fu_9152_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_531_fu_9147_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_276_fu_9170_p3() {
    or_ln184_276_fu_9170_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_532_fu_9165_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_277_fu_9254_p3() {
    or_ln184_277_fu_9254_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_533_fu_9249_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_278_fu_9272_p3() {
    or_ln184_278_fu_9272_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_534_fu_9267_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_279_fu_9356_p3() {
    or_ln184_279_fu_9356_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_535_fu_9351_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_27_fu_9425_p2() {
    or_ln184_27_fu_9425_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_1C);
}

void pqcrystals_dilithium_15::thread_or_ln184_280_fu_9374_p3() {
    or_ln184_280_fu_9374_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_536_fu_9369_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_281_fu_9458_p3() {
    or_ln184_281_fu_9458_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_537_fu_9453_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_282_fu_9476_p3() {
    or_ln184_282_fu_9476_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_538_fu_9471_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_283_fu_9560_p3() {
    or_ln184_283_fu_9560_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_539_fu_9555_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_284_fu_9578_p3() {
    or_ln184_284_fu_9578_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_540_fu_9573_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_285_fu_9662_p3() {
    or_ln184_285_fu_9662_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_541_fu_9657_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_286_fu_9680_p3() {
    or_ln184_286_fu_9680_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_542_fu_9675_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_287_fu_9764_p3() {
    or_ln184_287_fu_9764_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_543_fu_9759_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_288_fu_9782_p3() {
    or_ln184_288_fu_9782_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_544_fu_9777_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_289_fu_9866_p3() {
    or_ln184_289_fu_9866_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_545_fu_9861_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_28_fu_9439_p2() {
    or_ln184_28_fu_9439_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_1D);
}

void pqcrystals_dilithium_15::thread_or_ln184_290_fu_9884_p3() {
    or_ln184_290_fu_9884_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_546_fu_9879_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_291_fu_9968_p3() {
    or_ln184_291_fu_9968_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_547_fu_9963_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_292_fu_9986_p3() {
    or_ln184_292_fu_9986_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_548_fu_9981_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_293_fu_10070_p3() {
    or_ln184_293_fu_10070_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_549_fu_10065_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_294_fu_10088_p3() {
    or_ln184_294_fu_10088_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_550_fu_10083_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_295_fu_10172_p3() {
    or_ln184_295_fu_10172_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_551_fu_10167_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_296_fu_10190_p3() {
    or_ln184_296_fu_10190_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_552_fu_10185_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_297_fu_10274_p3() {
    or_ln184_297_fu_10274_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_553_fu_10269_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_298_fu_10292_p3() {
    or_ln184_298_fu_10292_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_554_fu_10287_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_299_fu_10376_p3() {
    or_ln184_299_fu_10376_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_555_fu_10371_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_29_fu_9527_p2() {
    or_ln184_29_fu_9527_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_1E);
}

void pqcrystals_dilithium_15::thread_or_ln184_2_fu_8113_p2() {
    or_ln184_2_fu_8113_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3);
}

void pqcrystals_dilithium_15::thread_or_ln184_300_fu_10394_p3() {
    or_ln184_300_fu_10394_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_556_fu_10389_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_301_fu_10478_p3() {
    or_ln184_301_fu_10478_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_557_fu_10473_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_302_fu_10496_p3() {
    or_ln184_302_fu_10496_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_558_fu_10491_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_303_fu_10580_p3() {
    or_ln184_303_fu_10580_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_559_fu_10575_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_304_fu_10598_p3() {
    or_ln184_304_fu_10598_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_560_fu_10593_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_305_fu_10682_p3() {
    or_ln184_305_fu_10682_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_561_fu_10677_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_306_fu_10700_p3() {
    or_ln184_306_fu_10700_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_562_fu_10695_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_307_fu_10784_p3() {
    or_ln184_307_fu_10784_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_563_fu_10779_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_308_fu_10802_p3() {
    or_ln184_308_fu_10802_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_564_fu_10797_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_309_fu_10886_p3() {
    or_ln184_309_fu_10886_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_565_fu_10881_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_30_fu_9541_p2() {
    or_ln184_30_fu_9541_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_1F);
}

void pqcrystals_dilithium_15::thread_or_ln184_310_fu_10904_p3() {
    or_ln184_310_fu_10904_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_566_fu_10899_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_311_fu_10988_p3() {
    or_ln184_311_fu_10988_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_567_fu_10983_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_312_fu_11006_p3() {
    or_ln184_312_fu_11006_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_568_fu_11001_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_313_fu_11090_p3() {
    or_ln184_313_fu_11090_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_569_fu_11085_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_314_fu_11108_p3() {
    or_ln184_314_fu_11108_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_570_fu_11103_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_315_fu_11192_p3() {
    or_ln184_315_fu_11192_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_571_fu_11187_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_316_fu_11210_p3() {
    or_ln184_316_fu_11210_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_572_fu_11205_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_317_fu_11294_p3() {
    or_ln184_317_fu_11294_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_573_fu_11289_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_318_fu_11312_p3() {
    or_ln184_318_fu_11312_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_574_fu_11307_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_319_fu_11396_p3() {
    or_ln184_319_fu_11396_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_575_fu_11391_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_31_fu_9629_p2() {
    or_ln184_31_fu_9629_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_20);
}

void pqcrystals_dilithium_15::thread_or_ln184_320_fu_11414_p3() {
    or_ln184_320_fu_11414_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_576_fu_11409_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_321_fu_11498_p3() {
    or_ln184_321_fu_11498_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_577_fu_11493_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_322_fu_11516_p3() {
    or_ln184_322_fu_11516_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_578_fu_11511_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_323_fu_11600_p3() {
    or_ln184_323_fu_11600_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_579_fu_11595_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_324_fu_11618_p3() {
    or_ln184_324_fu_11618_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_580_fu_11613_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_325_fu_11702_p3() {
    or_ln184_325_fu_11702_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_581_fu_11697_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_326_fu_11720_p3() {
    or_ln184_326_fu_11720_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_582_fu_11715_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_327_fu_11804_p3() {
    or_ln184_327_fu_11804_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_583_fu_11799_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_328_fu_11822_p3() {
    or_ln184_328_fu_11822_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_584_fu_11817_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_329_fu_11906_p3() {
    or_ln184_329_fu_11906_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_585_fu_11901_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_32_fu_9643_p2() {
    or_ln184_32_fu_9643_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_21);
}

void pqcrystals_dilithium_15::thread_or_ln184_330_fu_11924_p3() {
    or_ln184_330_fu_11924_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_586_fu_11919_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_331_fu_12008_p3() {
    or_ln184_331_fu_12008_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_587_fu_12003_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_332_fu_12026_p3() {
    or_ln184_332_fu_12026_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_588_fu_12021_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_333_fu_12110_p3() {
    or_ln184_333_fu_12110_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_589_fu_12105_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_334_fu_12128_p3() {
    or_ln184_334_fu_12128_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_590_fu_12123_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_335_fu_12212_p3() {
    or_ln184_335_fu_12212_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_591_fu_12207_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_336_fu_12230_p3() {
    or_ln184_336_fu_12230_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_592_fu_12225_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_337_fu_12314_p3() {
    or_ln184_337_fu_12314_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_593_fu_12309_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_338_fu_12332_p3() {
    or_ln184_338_fu_12332_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_594_fu_12327_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_339_fu_12416_p3() {
    or_ln184_339_fu_12416_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_595_fu_12411_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_33_fu_9731_p2() {
    or_ln184_33_fu_9731_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_22);
}

void pqcrystals_dilithium_15::thread_or_ln184_340_fu_12434_p3() {
    or_ln184_340_fu_12434_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_596_fu_12429_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_341_fu_12518_p3() {
    or_ln184_341_fu_12518_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_597_fu_12513_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_342_fu_12536_p3() {
    or_ln184_342_fu_12536_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_598_fu_12531_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_343_fu_12620_p3() {
    or_ln184_343_fu_12620_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_599_fu_12615_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_344_fu_12638_p3() {
    or_ln184_344_fu_12638_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_600_fu_12633_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_345_fu_12722_p3() {
    or_ln184_345_fu_12722_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_601_fu_12717_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_346_fu_12740_p3() {
    or_ln184_346_fu_12740_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_602_fu_12735_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_347_fu_12824_p3() {
    or_ln184_347_fu_12824_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_603_fu_12819_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_348_fu_12842_p3() {
    or_ln184_348_fu_12842_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_604_fu_12837_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_349_fu_12926_p3() {
    or_ln184_349_fu_12926_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_605_fu_12921_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_34_fu_9745_p2() {
    or_ln184_34_fu_9745_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_23);
}

void pqcrystals_dilithium_15::thread_or_ln184_350_fu_12944_p3() {
    or_ln184_350_fu_12944_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_606_fu_12939_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_351_fu_13028_p3() {
    or_ln184_351_fu_13028_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_607_fu_13023_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_352_fu_13046_p3() {
    or_ln184_352_fu_13046_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_608_fu_13041_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_353_fu_13130_p3() {
    or_ln184_353_fu_13130_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_609_fu_13125_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_354_fu_13148_p3() {
    or_ln184_354_fu_13148_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_610_fu_13143_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_355_fu_13232_p3() {
    or_ln184_355_fu_13232_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_611_fu_13227_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_356_fu_13250_p3() {
    or_ln184_356_fu_13250_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_612_fu_13245_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_357_fu_13334_p3() {
    or_ln184_357_fu_13334_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_613_fu_13329_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_358_fu_13352_p3() {
    or_ln184_358_fu_13352_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_614_fu_13347_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_359_fu_13436_p3() {
    or_ln184_359_fu_13436_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_615_fu_13431_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_35_fu_9833_p2() {
    or_ln184_35_fu_9833_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_24);
}

void pqcrystals_dilithium_15::thread_or_ln184_360_fu_13454_p3() {
    or_ln184_360_fu_13454_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_616_fu_13449_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_361_fu_13538_p3() {
    or_ln184_361_fu_13538_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_617_fu_13533_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_362_fu_13556_p3() {
    or_ln184_362_fu_13556_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_618_fu_13551_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_363_fu_13640_p3() {
    or_ln184_363_fu_13640_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_619_fu_13635_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_364_fu_13658_p3() {
    or_ln184_364_fu_13658_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_620_fu_13653_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_365_fu_13742_p3() {
    or_ln184_365_fu_13742_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_621_fu_13737_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_366_fu_13760_p3() {
    or_ln184_366_fu_13760_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_622_fu_13755_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_367_fu_13844_p3() {
    or_ln184_367_fu_13844_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_623_fu_13839_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_368_fu_13862_p3() {
    or_ln184_368_fu_13862_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_624_fu_13857_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_369_fu_13946_p3() {
    or_ln184_369_fu_13946_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_625_fu_13941_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_36_fu_9847_p2() {
    or_ln184_36_fu_9847_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_25);
}

void pqcrystals_dilithium_15::thread_or_ln184_370_fu_13964_p3() {
    or_ln184_370_fu_13964_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_626_fu_13959_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_371_fu_14048_p3() {
    or_ln184_371_fu_14048_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_627_fu_14043_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_372_fu_14066_p3() {
    or_ln184_372_fu_14066_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_628_fu_14061_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_373_fu_14150_p3() {
    or_ln184_373_fu_14150_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_629_fu_14145_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_374_fu_14168_p3() {
    or_ln184_374_fu_14168_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_630_fu_14163_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_375_fu_14252_p3() {
    or_ln184_375_fu_14252_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_631_fu_14247_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_376_fu_14270_p3() {
    or_ln184_376_fu_14270_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_632_fu_14265_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_377_fu_14354_p3() {
    or_ln184_377_fu_14354_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_633_fu_14349_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_378_fu_14372_p3() {
    or_ln184_378_fu_14372_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_634_fu_14367_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_379_fu_14456_p3() {
    or_ln184_379_fu_14456_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_635_fu_14451_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_37_fu_9935_p2() {
    or_ln184_37_fu_9935_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_26);
}

void pqcrystals_dilithium_15::thread_or_ln184_380_fu_14474_p3() {
    or_ln184_380_fu_14474_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_636_fu_14469_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_381_fu_14558_p3() {
    or_ln184_381_fu_14558_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_637_fu_14553_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_382_fu_14576_p3() {
    or_ln184_382_fu_14576_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_638_fu_14571_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_383_fu_14660_p3() {
    or_ln184_383_fu_14660_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_639_fu_14655_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_384_fu_14678_p3() {
    or_ln184_384_fu_14678_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_640_fu_14673_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_385_fu_14762_p3() {
    or_ln184_385_fu_14762_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_641_fu_14757_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_386_fu_14780_p3() {
    or_ln184_386_fu_14780_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_642_fu_14775_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_387_fu_14864_p3() {
    or_ln184_387_fu_14864_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_643_fu_14859_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_388_fu_14882_p3() {
    or_ln184_388_fu_14882_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_644_fu_14877_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_389_fu_14966_p3() {
    or_ln184_389_fu_14966_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_645_fu_14961_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_38_fu_9949_p2() {
    or_ln184_38_fu_9949_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_27);
}

void pqcrystals_dilithium_15::thread_or_ln184_390_fu_14984_p3() {
    or_ln184_390_fu_14984_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_646_fu_14979_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_391_fu_15068_p3() {
    or_ln184_391_fu_15068_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_647_fu_15063_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_392_fu_15086_p3() {
    or_ln184_392_fu_15086_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_648_fu_15081_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_393_fu_15170_p3() {
    or_ln184_393_fu_15170_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_649_fu_15165_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_394_fu_15188_p3() {
    or_ln184_394_fu_15188_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_650_fu_15183_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_395_fu_15272_p3() {
    or_ln184_395_fu_15272_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_651_fu_15267_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_396_fu_15290_p3() {
    or_ln184_396_fu_15290_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_652_fu_15285_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_397_fu_15374_p3() {
    or_ln184_397_fu_15374_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_653_fu_15369_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_398_fu_15392_p3() {
    or_ln184_398_fu_15392_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_654_fu_15387_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_399_fu_15476_p3() {
    or_ln184_399_fu_15476_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_655_fu_15471_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_39_fu_10037_p2() {
    or_ln184_39_fu_10037_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_28);
}

void pqcrystals_dilithium_15::thread_or_ln184_3_fu_8201_p2() {
    or_ln184_3_fu_8201_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4);
}

void pqcrystals_dilithium_15::thread_or_ln184_400_fu_15494_p3() {
    or_ln184_400_fu_15494_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_656_fu_15489_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_401_fu_15578_p3() {
    or_ln184_401_fu_15578_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_657_fu_15573_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_402_fu_15596_p3() {
    or_ln184_402_fu_15596_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_658_fu_15591_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_403_fu_15680_p3() {
    or_ln184_403_fu_15680_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_659_fu_15675_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_404_fu_15698_p3() {
    or_ln184_404_fu_15698_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_660_fu_15693_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_405_fu_15782_p3() {
    or_ln184_405_fu_15782_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_661_fu_15777_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_406_fu_15800_p3() {
    or_ln184_406_fu_15800_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_662_fu_15795_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_407_fu_15884_p3() {
    or_ln184_407_fu_15884_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_663_fu_15879_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_408_fu_15902_p3() {
    or_ln184_408_fu_15902_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_664_fu_15897_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_409_fu_15986_p3() {
    or_ln184_409_fu_15986_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_665_fu_15981_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_40_fu_10051_p2() {
    or_ln184_40_fu_10051_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_29);
}

void pqcrystals_dilithium_15::thread_or_ln184_410_fu_16004_p3() {
    or_ln184_410_fu_16004_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_666_fu_15999_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_411_fu_16088_p3() {
    or_ln184_411_fu_16088_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_667_fu_16083_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_412_fu_16106_p3() {
    or_ln184_412_fu_16106_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_668_fu_16101_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_413_fu_16190_p3() {
    or_ln184_413_fu_16190_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_669_fu_16185_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_414_fu_16208_p3() {
    or_ln184_414_fu_16208_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_670_fu_16203_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_415_fu_16292_p3() {
    or_ln184_415_fu_16292_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_671_fu_16287_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_416_fu_16310_p3() {
    or_ln184_416_fu_16310_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_672_fu_16305_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_417_fu_16394_p3() {
    or_ln184_417_fu_16394_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_673_fu_16389_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_418_fu_16412_p3() {
    or_ln184_418_fu_16412_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_674_fu_16407_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_419_fu_16496_p3() {
    or_ln184_419_fu_16496_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_675_fu_16491_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_41_fu_10139_p2() {
    or_ln184_41_fu_10139_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2A);
}

void pqcrystals_dilithium_15::thread_or_ln184_420_fu_16514_p3() {
    or_ln184_420_fu_16514_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_676_fu_16509_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_421_fu_16598_p3() {
    or_ln184_421_fu_16598_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_677_fu_16593_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_422_fu_16616_p3() {
    or_ln184_422_fu_16616_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_678_fu_16611_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_423_fu_16700_p3() {
    or_ln184_423_fu_16700_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_679_fu_16695_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_424_fu_16718_p3() {
    or_ln184_424_fu_16718_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_680_fu_16713_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_425_fu_16802_p3() {
    or_ln184_425_fu_16802_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_681_fu_16797_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_426_fu_16820_p3() {
    or_ln184_426_fu_16820_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_682_fu_16815_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_427_fu_16904_p3() {
    or_ln184_427_fu_16904_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_683_fu_16899_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_428_fu_16922_p3() {
    or_ln184_428_fu_16922_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_684_fu_16917_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_429_fu_17006_p3() {
    or_ln184_429_fu_17006_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_685_fu_17001_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_42_fu_10153_p2() {
    or_ln184_42_fu_10153_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2B);
}

void pqcrystals_dilithium_15::thread_or_ln184_430_fu_17024_p3() {
    or_ln184_430_fu_17024_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_686_fu_17019_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_431_fu_17108_p3() {
    or_ln184_431_fu_17108_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_687_fu_17103_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_432_fu_17126_p3() {
    or_ln184_432_fu_17126_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_688_fu_17121_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_433_fu_17210_p3() {
    or_ln184_433_fu_17210_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_689_fu_17205_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_434_fu_17228_p3() {
    or_ln184_434_fu_17228_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_690_fu_17223_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_435_fu_17312_p3() {
    or_ln184_435_fu_17312_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_691_fu_17307_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_436_fu_17330_p3() {
    or_ln184_436_fu_17330_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_692_fu_17325_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_437_fu_17414_p3() {
    or_ln184_437_fu_17414_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_693_fu_17409_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_438_fu_17432_p3() {
    or_ln184_438_fu_17432_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_694_fu_17427_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_439_fu_17516_p3() {
    or_ln184_439_fu_17516_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_695_fu_17511_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_43_fu_10241_p2() {
    or_ln184_43_fu_10241_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2C);
}

void pqcrystals_dilithium_15::thread_or_ln184_440_fu_17534_p3() {
    or_ln184_440_fu_17534_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_696_fu_17529_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_441_fu_17618_p3() {
    or_ln184_441_fu_17618_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_697_fu_17613_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_442_fu_17636_p3() {
    or_ln184_442_fu_17636_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_698_fu_17631_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_443_fu_17720_p3() {
    or_ln184_443_fu_17720_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_699_fu_17715_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_444_fu_17738_p3() {
    or_ln184_444_fu_17738_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_700_fu_17733_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_445_fu_17822_p3() {
    or_ln184_445_fu_17822_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_701_fu_17817_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_446_fu_17840_p3() {
    or_ln184_446_fu_17840_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_702_fu_17835_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_447_fu_17924_p3() {
    or_ln184_447_fu_17924_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_703_fu_17919_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_448_fu_17942_p3() {
    or_ln184_448_fu_17942_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_704_fu_17937_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_449_fu_18026_p3() {
    or_ln184_449_fu_18026_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_705_fu_18021_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_44_fu_10255_p2() {
    or_ln184_44_fu_10255_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2D);
}

void pqcrystals_dilithium_15::thread_or_ln184_450_fu_18044_p3() {
    or_ln184_450_fu_18044_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_706_fu_18039_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_451_fu_18128_p3() {
    or_ln184_451_fu_18128_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_707_fu_18123_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_452_fu_18146_p3() {
    or_ln184_452_fu_18146_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_708_fu_18141_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_453_fu_18230_p3() {
    or_ln184_453_fu_18230_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_709_fu_18225_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_454_fu_18248_p3() {
    or_ln184_454_fu_18248_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_710_fu_18243_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_455_fu_18332_p3() {
    or_ln184_455_fu_18332_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_711_fu_18327_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_456_fu_18350_p3() {
    or_ln184_456_fu_18350_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_712_fu_18345_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_457_fu_18434_p3() {
    or_ln184_457_fu_18434_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_713_fu_18429_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_458_fu_18452_p3() {
    or_ln184_458_fu_18452_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_714_fu_18447_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_459_fu_18536_p3() {
    or_ln184_459_fu_18536_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_715_fu_18531_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_45_fu_10343_p2() {
    or_ln184_45_fu_10343_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2E);
}

void pqcrystals_dilithium_15::thread_or_ln184_460_fu_18554_p3() {
    or_ln184_460_fu_18554_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_716_fu_18549_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_461_fu_18638_p3() {
    or_ln184_461_fu_18638_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_717_fu_18633_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_462_fu_18656_p3() {
    or_ln184_462_fu_18656_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_718_fu_18651_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_463_fu_18740_p3() {
    or_ln184_463_fu_18740_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_719_fu_18735_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_464_fu_18758_p3() {
    or_ln184_464_fu_18758_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_720_fu_18753_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_465_fu_18842_p3() {
    or_ln184_465_fu_18842_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_721_fu_18837_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_466_fu_18860_p3() {
    or_ln184_466_fu_18860_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_722_fu_18855_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_467_fu_18944_p3() {
    or_ln184_467_fu_18944_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_723_fu_18939_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_468_fu_18962_p3() {
    or_ln184_468_fu_18962_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_724_fu_18957_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_469_fu_19046_p3() {
    or_ln184_469_fu_19046_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_725_fu_19041_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_46_fu_10357_p2() {
    or_ln184_46_fu_10357_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_2F);
}

void pqcrystals_dilithium_15::thread_or_ln184_470_fu_19064_p3() {
    or_ln184_470_fu_19064_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_726_fu_19059_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_471_fu_19148_p3() {
    or_ln184_471_fu_19148_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_727_fu_19143_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_472_fu_19166_p3() {
    or_ln184_472_fu_19166_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_728_fu_19161_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_473_fu_19250_p3() {
    or_ln184_473_fu_19250_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_729_fu_19245_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_474_fu_19268_p3() {
    or_ln184_474_fu_19268_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_730_fu_19263_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_475_fu_19352_p3() {
    or_ln184_475_fu_19352_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_731_fu_19347_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_476_fu_19370_p3() {
    or_ln184_476_fu_19370_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_732_fu_19365_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_477_fu_19454_p3() {
    or_ln184_477_fu_19454_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_733_fu_19449_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_478_fu_19472_p3() {
    or_ln184_478_fu_19472_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_734_fu_19467_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_479_fu_19556_p3() {
    or_ln184_479_fu_19556_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_735_fu_19551_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_47_fu_10445_p2() {
    or_ln184_47_fu_10445_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_30);
}

void pqcrystals_dilithium_15::thread_or_ln184_480_fu_19574_p3() {
    or_ln184_480_fu_19574_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_736_fu_19569_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_481_fu_19658_p3() {
    or_ln184_481_fu_19658_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_737_fu_19653_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_482_fu_19676_p3() {
    or_ln184_482_fu_19676_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_738_fu_19671_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_483_fu_19760_p3() {
    or_ln184_483_fu_19760_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_739_fu_19755_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_484_fu_19778_p3() {
    or_ln184_484_fu_19778_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_740_fu_19773_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_485_fu_19862_p3() {
    or_ln184_485_fu_19862_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_741_fu_19857_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_486_fu_19880_p3() {
    or_ln184_486_fu_19880_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_742_fu_19875_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_487_fu_19964_p3() {
    or_ln184_487_fu_19964_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_743_fu_19959_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_488_fu_19982_p3() {
    or_ln184_488_fu_19982_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_744_fu_19977_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_489_fu_20066_p3() {
    or_ln184_489_fu_20066_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_745_fu_20061_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_48_fu_10459_p2() {
    or_ln184_48_fu_10459_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_31);
}

void pqcrystals_dilithium_15::thread_or_ln184_490_fu_20084_p3() {
    or_ln184_490_fu_20084_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_746_fu_20079_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_491_fu_20168_p3() {
    or_ln184_491_fu_20168_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_747_fu_20163_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_492_fu_20186_p3() {
    or_ln184_492_fu_20186_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_748_fu_20181_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_493_fu_20270_p3() {
    or_ln184_493_fu_20270_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_749_fu_20265_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_494_fu_20288_p3() {
    or_ln184_494_fu_20288_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_750_fu_20283_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_495_fu_20372_p3() {
    or_ln184_495_fu_20372_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_751_fu_20367_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_496_fu_20390_p3() {
    or_ln184_496_fu_20390_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_752_fu_20385_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_497_fu_20474_p3() {
    or_ln184_497_fu_20474_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_753_fu_20469_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_498_fu_20492_p3() {
    or_ln184_498_fu_20492_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_754_fu_20487_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_499_fu_20576_p3() {
    or_ln184_499_fu_20576_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_755_fu_20571_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_49_fu_10547_p2() {
    or_ln184_49_fu_10547_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_32);
}

void pqcrystals_dilithium_15::thread_or_ln184_4_fu_8215_p2() {
    or_ln184_4_fu_8215_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5);
}

void pqcrystals_dilithium_15::thread_or_ln184_500_fu_20594_p3() {
    or_ln184_500_fu_20594_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_756_fu_20589_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_501_fu_20678_p3() {
    or_ln184_501_fu_20678_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_757_fu_20673_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_502_fu_20696_p3() {
    or_ln184_502_fu_20696_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_758_fu_20691_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_503_fu_20780_p3() {
    or_ln184_503_fu_20780_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_759_fu_20775_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_504_fu_20798_p3() {
    or_ln184_504_fu_20798_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_760_fu_20793_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_505_fu_20882_p3() {
    or_ln184_505_fu_20882_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_761_fu_20877_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_506_fu_20900_p3() {
    or_ln184_506_fu_20900_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_762_fu_20895_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_507_fu_20984_p3() {
    or_ln184_507_fu_20984_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_763_fu_20979_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_508_fu_21002_p3() {
    or_ln184_508_fu_21002_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_764_fu_20997_p2.read());
}

void pqcrystals_dilithium_15::thread_or_ln184_50_fu_10561_p2() {
    or_ln184_50_fu_10561_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_33);
}

void pqcrystals_dilithium_15::thread_or_ln184_510_fu_8080_p2() {
    or_ln184_510_fu_8080_p2 = (tmp_492_fu_8067_p3.read() | ap_const_lv13_1);
}

void pqcrystals_dilithium_15::thread_or_ln184_511_fu_8127_p2() {
    or_ln184_511_fu_8127_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2);
}

void pqcrystals_dilithium_15::thread_or_ln184_512_fu_8145_p2() {
    or_ln184_512_fu_8145_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3);
}

void pqcrystals_dilithium_15::thread_or_ln184_513_fu_8229_p2() {
    or_ln184_513_fu_8229_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4);
}

void pqcrystals_dilithium_15::thread_or_ln184_514_fu_8247_p2() {
    or_ln184_514_fu_8247_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5);
}

void pqcrystals_dilithium_15::thread_or_ln184_515_fu_8331_p2() {
    or_ln184_515_fu_8331_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6);
}

void pqcrystals_dilithium_15::thread_or_ln184_516_fu_8349_p2() {
    or_ln184_516_fu_8349_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7);
}

void pqcrystals_dilithium_15::thread_or_ln184_517_fu_8433_p2() {
    or_ln184_517_fu_8433_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8);
}

void pqcrystals_dilithium_15::thread_or_ln184_518_fu_8451_p2() {
    or_ln184_518_fu_8451_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9);
}

void pqcrystals_dilithium_15::thread_or_ln184_519_fu_8535_p2() {
    or_ln184_519_fu_8535_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A);
}

void pqcrystals_dilithium_15::thread_or_ln184_51_fu_10649_p2() {
    or_ln184_51_fu_10649_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_34);
}

void pqcrystals_dilithium_15::thread_or_ln184_520_fu_8553_p2() {
    or_ln184_520_fu_8553_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B);
}

void pqcrystals_dilithium_15::thread_or_ln184_521_fu_8637_p2() {
    or_ln184_521_fu_8637_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C);
}

void pqcrystals_dilithium_15::thread_or_ln184_522_fu_8655_p2() {
    or_ln184_522_fu_8655_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D);
}

void pqcrystals_dilithium_15::thread_or_ln184_523_fu_8739_p2() {
    or_ln184_523_fu_8739_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E);
}

void pqcrystals_dilithium_15::thread_or_ln184_524_fu_8757_p2() {
    or_ln184_524_fu_8757_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F);
}

void pqcrystals_dilithium_15::thread_or_ln184_525_fu_8841_p2() {
    or_ln184_525_fu_8841_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_10);
}

void pqcrystals_dilithium_15::thread_or_ln184_526_fu_8859_p2() {
    or_ln184_526_fu_8859_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_11);
}

void pqcrystals_dilithium_15::thread_or_ln184_527_fu_8943_p2() {
    or_ln184_527_fu_8943_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_12);
}

void pqcrystals_dilithium_15::thread_or_ln184_528_fu_8961_p2() {
    or_ln184_528_fu_8961_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_13);
}

void pqcrystals_dilithium_15::thread_or_ln184_529_fu_9045_p2() {
    or_ln184_529_fu_9045_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_14);
}

void pqcrystals_dilithium_15::thread_or_ln184_52_fu_10663_p2() {
    or_ln184_52_fu_10663_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_35);
}

void pqcrystals_dilithium_15::thread_or_ln184_530_fu_9063_p2() {
    or_ln184_530_fu_9063_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_15);
}

void pqcrystals_dilithium_15::thread_or_ln184_531_fu_9147_p2() {
    or_ln184_531_fu_9147_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_16);
}

void pqcrystals_dilithium_15::thread_or_ln184_532_fu_9165_p2() {
    or_ln184_532_fu_9165_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_17);
}

void pqcrystals_dilithium_15::thread_or_ln184_533_fu_9249_p2() {
    or_ln184_533_fu_9249_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_18);
}

void pqcrystals_dilithium_15::thread_or_ln184_534_fu_9267_p2() {
    or_ln184_534_fu_9267_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_19);
}

void pqcrystals_dilithium_15::thread_or_ln184_535_fu_9351_p2() {
    or_ln184_535_fu_9351_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_1A);
}

void pqcrystals_dilithium_15::thread_or_ln184_536_fu_9369_p2() {
    or_ln184_536_fu_9369_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_1B);
}

void pqcrystals_dilithium_15::thread_or_ln184_537_fu_9453_p2() {
    or_ln184_537_fu_9453_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_1C);
}

void pqcrystals_dilithium_15::thread_or_ln184_538_fu_9471_p2() {
    or_ln184_538_fu_9471_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_1D);
}

void pqcrystals_dilithium_15::thread_or_ln184_539_fu_9555_p2() {
    or_ln184_539_fu_9555_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_1E);
}

void pqcrystals_dilithium_15::thread_or_ln184_53_fu_10751_p2() {
    or_ln184_53_fu_10751_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_36);
}

void pqcrystals_dilithium_15::thread_or_ln184_540_fu_9573_p2() {
    or_ln184_540_fu_9573_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_1F);
}

void pqcrystals_dilithium_15::thread_or_ln184_541_fu_9657_p2() {
    or_ln184_541_fu_9657_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_20);
}

void pqcrystals_dilithium_15::thread_or_ln184_542_fu_9675_p2() {
    or_ln184_542_fu_9675_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_21);
}

void pqcrystals_dilithium_15::thread_or_ln184_543_fu_9759_p2() {
    or_ln184_543_fu_9759_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_22);
}

void pqcrystals_dilithium_15::thread_or_ln184_544_fu_9777_p2() {
    or_ln184_544_fu_9777_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_23);
}

void pqcrystals_dilithium_15::thread_or_ln184_545_fu_9861_p2() {
    or_ln184_545_fu_9861_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_24);
}

void pqcrystals_dilithium_15::thread_or_ln184_546_fu_9879_p2() {
    or_ln184_546_fu_9879_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_25);
}

void pqcrystals_dilithium_15::thread_or_ln184_547_fu_9963_p2() {
    or_ln184_547_fu_9963_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_26);
}

void pqcrystals_dilithium_15::thread_or_ln184_548_fu_9981_p2() {
    or_ln184_548_fu_9981_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_27);
}

void pqcrystals_dilithium_15::thread_or_ln184_549_fu_10065_p2() {
    or_ln184_549_fu_10065_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_28);
}

void pqcrystals_dilithium_15::thread_or_ln184_54_fu_10765_p2() {
    or_ln184_54_fu_10765_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_37);
}

void pqcrystals_dilithium_15::thread_or_ln184_550_fu_10083_p2() {
    or_ln184_550_fu_10083_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_29);
}

void pqcrystals_dilithium_15::thread_or_ln184_551_fu_10167_p2() {
    or_ln184_551_fu_10167_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2A);
}

void pqcrystals_dilithium_15::thread_or_ln184_552_fu_10185_p2() {
    or_ln184_552_fu_10185_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2B);
}

void pqcrystals_dilithium_15::thread_or_ln184_553_fu_10269_p2() {
    or_ln184_553_fu_10269_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2C);
}

void pqcrystals_dilithium_15::thread_or_ln184_554_fu_10287_p2() {
    or_ln184_554_fu_10287_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2D);
}

void pqcrystals_dilithium_15::thread_or_ln184_555_fu_10371_p2() {
    or_ln184_555_fu_10371_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2E);
}

void pqcrystals_dilithium_15::thread_or_ln184_556_fu_10389_p2() {
    or_ln184_556_fu_10389_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_2F);
}

void pqcrystals_dilithium_15::thread_or_ln184_557_fu_10473_p2() {
    or_ln184_557_fu_10473_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_30);
}

void pqcrystals_dilithium_15::thread_or_ln184_558_fu_10491_p2() {
    or_ln184_558_fu_10491_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_31);
}

void pqcrystals_dilithium_15::thread_or_ln184_559_fu_10575_p2() {
    or_ln184_559_fu_10575_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_32);
}

void pqcrystals_dilithium_15::thread_or_ln184_55_fu_10853_p2() {
    or_ln184_55_fu_10853_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_38);
}

void pqcrystals_dilithium_15::thread_or_ln184_560_fu_10593_p2() {
    or_ln184_560_fu_10593_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_33);
}

void pqcrystals_dilithium_15::thread_or_ln184_561_fu_10677_p2() {
    or_ln184_561_fu_10677_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_34);
}

void pqcrystals_dilithium_15::thread_or_ln184_562_fu_10695_p2() {
    or_ln184_562_fu_10695_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_35);
}

void pqcrystals_dilithium_15::thread_or_ln184_563_fu_10779_p2() {
    or_ln184_563_fu_10779_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_36);
}

void pqcrystals_dilithium_15::thread_or_ln184_564_fu_10797_p2() {
    or_ln184_564_fu_10797_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_37);
}

void pqcrystals_dilithium_15::thread_or_ln184_565_fu_10881_p2() {
    or_ln184_565_fu_10881_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_38);
}

void pqcrystals_dilithium_15::thread_or_ln184_566_fu_10899_p2() {
    or_ln184_566_fu_10899_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_39);
}

void pqcrystals_dilithium_15::thread_or_ln184_567_fu_10983_p2() {
    or_ln184_567_fu_10983_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3A);
}

void pqcrystals_dilithium_15::thread_or_ln184_568_fu_11001_p2() {
    or_ln184_568_fu_11001_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3B);
}

void pqcrystals_dilithium_15::thread_or_ln184_569_fu_11085_p2() {
    or_ln184_569_fu_11085_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3C);
}

void pqcrystals_dilithium_15::thread_or_ln184_56_fu_10867_p2() {
    or_ln184_56_fu_10867_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_39);
}

void pqcrystals_dilithium_15::thread_or_ln184_570_fu_11103_p2() {
    or_ln184_570_fu_11103_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3D);
}

void pqcrystals_dilithium_15::thread_or_ln184_571_fu_11187_p2() {
    or_ln184_571_fu_11187_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3E);
}

void pqcrystals_dilithium_15::thread_or_ln184_572_fu_11205_p2() {
    or_ln184_572_fu_11205_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_3F);
}

void pqcrystals_dilithium_15::thread_or_ln184_573_fu_11289_p2() {
    or_ln184_573_fu_11289_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_40);
}

void pqcrystals_dilithium_15::thread_or_ln184_574_fu_11307_p2() {
    or_ln184_574_fu_11307_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_41);
}

void pqcrystals_dilithium_15::thread_or_ln184_575_fu_11391_p2() {
    or_ln184_575_fu_11391_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_42);
}

void pqcrystals_dilithium_15::thread_or_ln184_576_fu_11409_p2() {
    or_ln184_576_fu_11409_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_43);
}

void pqcrystals_dilithium_15::thread_or_ln184_577_fu_11493_p2() {
    or_ln184_577_fu_11493_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_44);
}

void pqcrystals_dilithium_15::thread_or_ln184_578_fu_11511_p2() {
    or_ln184_578_fu_11511_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_45);
}

void pqcrystals_dilithium_15::thread_or_ln184_579_fu_11595_p2() {
    or_ln184_579_fu_11595_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_46);
}

void pqcrystals_dilithium_15::thread_or_ln184_57_fu_10955_p2() {
    or_ln184_57_fu_10955_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3A);
}

void pqcrystals_dilithium_15::thread_or_ln184_580_fu_11613_p2() {
    or_ln184_580_fu_11613_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_47);
}

void pqcrystals_dilithium_15::thread_or_ln184_581_fu_11697_p2() {
    or_ln184_581_fu_11697_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_48);
}

void pqcrystals_dilithium_15::thread_or_ln184_582_fu_11715_p2() {
    or_ln184_582_fu_11715_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_49);
}

void pqcrystals_dilithium_15::thread_or_ln184_583_fu_11799_p2() {
    or_ln184_583_fu_11799_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4A);
}

void pqcrystals_dilithium_15::thread_or_ln184_584_fu_11817_p2() {
    or_ln184_584_fu_11817_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4B);
}

void pqcrystals_dilithium_15::thread_or_ln184_585_fu_11901_p2() {
    or_ln184_585_fu_11901_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4C);
}

void pqcrystals_dilithium_15::thread_or_ln184_586_fu_11919_p2() {
    or_ln184_586_fu_11919_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4D);
}

void pqcrystals_dilithium_15::thread_or_ln184_587_fu_12003_p2() {
    or_ln184_587_fu_12003_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4E);
}

void pqcrystals_dilithium_15::thread_or_ln184_588_fu_12021_p2() {
    or_ln184_588_fu_12021_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_4F);
}

void pqcrystals_dilithium_15::thread_or_ln184_589_fu_12105_p2() {
    or_ln184_589_fu_12105_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_50);
}

void pqcrystals_dilithium_15::thread_or_ln184_58_fu_10969_p2() {
    or_ln184_58_fu_10969_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3B);
}

void pqcrystals_dilithium_15::thread_or_ln184_590_fu_12123_p2() {
    or_ln184_590_fu_12123_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_51);
}

void pqcrystals_dilithium_15::thread_or_ln184_591_fu_12207_p2() {
    or_ln184_591_fu_12207_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_52);
}

void pqcrystals_dilithium_15::thread_or_ln184_592_fu_12225_p2() {
    or_ln184_592_fu_12225_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_53);
}

void pqcrystals_dilithium_15::thread_or_ln184_593_fu_12309_p2() {
    or_ln184_593_fu_12309_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_54);
}

void pqcrystals_dilithium_15::thread_or_ln184_594_fu_12327_p2() {
    or_ln184_594_fu_12327_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_55);
}

void pqcrystals_dilithium_15::thread_or_ln184_595_fu_12411_p2() {
    or_ln184_595_fu_12411_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_56);
}

void pqcrystals_dilithium_15::thread_or_ln184_596_fu_12429_p2() {
    or_ln184_596_fu_12429_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_57);
}

void pqcrystals_dilithium_15::thread_or_ln184_597_fu_12513_p2() {
    or_ln184_597_fu_12513_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_58);
}

void pqcrystals_dilithium_15::thread_or_ln184_598_fu_12531_p2() {
    or_ln184_598_fu_12531_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_59);
}

void pqcrystals_dilithium_15::thread_or_ln184_599_fu_12615_p2() {
    or_ln184_599_fu_12615_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5A);
}

void pqcrystals_dilithium_15::thread_or_ln184_59_fu_11057_p2() {
    or_ln184_59_fu_11057_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3C);
}

void pqcrystals_dilithium_15::thread_or_ln184_5_fu_8303_p2() {
    or_ln184_5_fu_8303_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_6);
}

void pqcrystals_dilithium_15::thread_or_ln184_600_fu_12633_p2() {
    or_ln184_600_fu_12633_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5B);
}

void pqcrystals_dilithium_15::thread_or_ln184_601_fu_12717_p2() {
    or_ln184_601_fu_12717_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5C);
}

void pqcrystals_dilithium_15::thread_or_ln184_602_fu_12735_p2() {
    or_ln184_602_fu_12735_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5D);
}

void pqcrystals_dilithium_15::thread_or_ln184_603_fu_12819_p2() {
    or_ln184_603_fu_12819_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5E);
}

void pqcrystals_dilithium_15::thread_or_ln184_604_fu_12837_p2() {
    or_ln184_604_fu_12837_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_5F);
}

void pqcrystals_dilithium_15::thread_or_ln184_605_fu_12921_p2() {
    or_ln184_605_fu_12921_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_60);
}

void pqcrystals_dilithium_15::thread_or_ln184_606_fu_12939_p2() {
    or_ln184_606_fu_12939_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_61);
}

void pqcrystals_dilithium_15::thread_or_ln184_607_fu_13023_p2() {
    or_ln184_607_fu_13023_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_62);
}

void pqcrystals_dilithium_15::thread_or_ln184_608_fu_13041_p2() {
    or_ln184_608_fu_13041_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_63);
}

void pqcrystals_dilithium_15::thread_or_ln184_609_fu_13125_p2() {
    or_ln184_609_fu_13125_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_64);
}

void pqcrystals_dilithium_15::thread_or_ln184_60_fu_11071_p2() {
    or_ln184_60_fu_11071_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3D);
}

void pqcrystals_dilithium_15::thread_or_ln184_610_fu_13143_p2() {
    or_ln184_610_fu_13143_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_65);
}

void pqcrystals_dilithium_15::thread_or_ln184_611_fu_13227_p2() {
    or_ln184_611_fu_13227_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_66);
}

void pqcrystals_dilithium_15::thread_or_ln184_612_fu_13245_p2() {
    or_ln184_612_fu_13245_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_67);
}

void pqcrystals_dilithium_15::thread_or_ln184_613_fu_13329_p2() {
    or_ln184_613_fu_13329_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_68);
}

void pqcrystals_dilithium_15::thread_or_ln184_614_fu_13347_p2() {
    or_ln184_614_fu_13347_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_69);
}

void pqcrystals_dilithium_15::thread_or_ln184_615_fu_13431_p2() {
    or_ln184_615_fu_13431_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6A);
}

void pqcrystals_dilithium_15::thread_or_ln184_616_fu_13449_p2() {
    or_ln184_616_fu_13449_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6B);
}

void pqcrystals_dilithium_15::thread_or_ln184_617_fu_13533_p2() {
    or_ln184_617_fu_13533_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6C);
}

void pqcrystals_dilithium_15::thread_or_ln184_618_fu_13551_p2() {
    or_ln184_618_fu_13551_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6D);
}

void pqcrystals_dilithium_15::thread_or_ln184_619_fu_13635_p2() {
    or_ln184_619_fu_13635_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6E);
}

void pqcrystals_dilithium_15::thread_or_ln184_61_fu_11159_p2() {
    or_ln184_61_fu_11159_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3E);
}

void pqcrystals_dilithium_15::thread_or_ln184_620_fu_13653_p2() {
    or_ln184_620_fu_13653_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_6F);
}

void pqcrystals_dilithium_15::thread_or_ln184_621_fu_13737_p2() {
    or_ln184_621_fu_13737_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_70);
}

void pqcrystals_dilithium_15::thread_or_ln184_622_fu_13755_p2() {
    or_ln184_622_fu_13755_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_71);
}

void pqcrystals_dilithium_15::thread_or_ln184_623_fu_13839_p2() {
    or_ln184_623_fu_13839_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_72);
}

void pqcrystals_dilithium_15::thread_or_ln184_624_fu_13857_p2() {
    or_ln184_624_fu_13857_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_73);
}

void pqcrystals_dilithium_15::thread_or_ln184_625_fu_13941_p2() {
    or_ln184_625_fu_13941_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_74);
}

void pqcrystals_dilithium_15::thread_or_ln184_626_fu_13959_p2() {
    or_ln184_626_fu_13959_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_75);
}

void pqcrystals_dilithium_15::thread_or_ln184_627_fu_14043_p2() {
    or_ln184_627_fu_14043_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_76);
}

void pqcrystals_dilithium_15::thread_or_ln184_628_fu_14061_p2() {
    or_ln184_628_fu_14061_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_77);
}

void pqcrystals_dilithium_15::thread_or_ln184_629_fu_14145_p2() {
    or_ln184_629_fu_14145_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_78);
}

void pqcrystals_dilithium_15::thread_or_ln184_62_fu_11173_p2() {
    or_ln184_62_fu_11173_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_3F);
}

void pqcrystals_dilithium_15::thread_or_ln184_630_fu_14163_p2() {
    or_ln184_630_fu_14163_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_79);
}

void pqcrystals_dilithium_15::thread_or_ln184_631_fu_14247_p2() {
    or_ln184_631_fu_14247_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7A);
}

void pqcrystals_dilithium_15::thread_or_ln184_632_fu_14265_p2() {
    or_ln184_632_fu_14265_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7B);
}

void pqcrystals_dilithium_15::thread_or_ln184_633_fu_14349_p2() {
    or_ln184_633_fu_14349_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7C);
}

void pqcrystals_dilithium_15::thread_or_ln184_634_fu_14367_p2() {
    or_ln184_634_fu_14367_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7D);
}

void pqcrystals_dilithium_15::thread_or_ln184_635_fu_14451_p2() {
    or_ln184_635_fu_14451_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7E);
}

void pqcrystals_dilithium_15::thread_or_ln184_636_fu_14469_p2() {
    or_ln184_636_fu_14469_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_7F);
}

void pqcrystals_dilithium_15::thread_or_ln184_637_fu_14553_p2() {
    or_ln184_637_fu_14553_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_80);
}

void pqcrystals_dilithium_15::thread_or_ln184_638_fu_14571_p2() {
    or_ln184_638_fu_14571_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_81);
}

void pqcrystals_dilithium_15::thread_or_ln184_639_fu_14655_p2() {
    or_ln184_639_fu_14655_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_82);
}

void pqcrystals_dilithium_15::thread_or_ln184_63_fu_11261_p2() {
    or_ln184_63_fu_11261_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_40);
}

void pqcrystals_dilithium_15::thread_or_ln184_640_fu_14673_p2() {
    or_ln184_640_fu_14673_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_83);
}

void pqcrystals_dilithium_15::thread_or_ln184_641_fu_14757_p2() {
    or_ln184_641_fu_14757_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_84);
}

void pqcrystals_dilithium_15::thread_or_ln184_642_fu_14775_p2() {
    or_ln184_642_fu_14775_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_85);
}

void pqcrystals_dilithium_15::thread_or_ln184_643_fu_14859_p2() {
    or_ln184_643_fu_14859_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_86);
}

void pqcrystals_dilithium_15::thread_or_ln184_644_fu_14877_p2() {
    or_ln184_644_fu_14877_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_87);
}

void pqcrystals_dilithium_15::thread_or_ln184_645_fu_14961_p2() {
    or_ln184_645_fu_14961_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_88);
}

void pqcrystals_dilithium_15::thread_or_ln184_646_fu_14979_p2() {
    or_ln184_646_fu_14979_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_89);
}

void pqcrystals_dilithium_15::thread_or_ln184_647_fu_15063_p2() {
    or_ln184_647_fu_15063_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8A);
}

void pqcrystals_dilithium_15::thread_or_ln184_648_fu_15081_p2() {
    or_ln184_648_fu_15081_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8B);
}

void pqcrystals_dilithium_15::thread_or_ln184_649_fu_15165_p2() {
    or_ln184_649_fu_15165_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8C);
}

void pqcrystals_dilithium_15::thread_or_ln184_64_fu_11275_p2() {
    or_ln184_64_fu_11275_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_41);
}

void pqcrystals_dilithium_15::thread_or_ln184_650_fu_15183_p2() {
    or_ln184_650_fu_15183_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8D);
}

void pqcrystals_dilithium_15::thread_or_ln184_651_fu_15267_p2() {
    or_ln184_651_fu_15267_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8E);
}

void pqcrystals_dilithium_15::thread_or_ln184_652_fu_15285_p2() {
    or_ln184_652_fu_15285_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_8F);
}

void pqcrystals_dilithium_15::thread_or_ln184_653_fu_15369_p2() {
    or_ln184_653_fu_15369_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_90);
}

void pqcrystals_dilithium_15::thread_or_ln184_654_fu_15387_p2() {
    or_ln184_654_fu_15387_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_91);
}

void pqcrystals_dilithium_15::thread_or_ln184_655_fu_15471_p2() {
    or_ln184_655_fu_15471_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_92);
}

void pqcrystals_dilithium_15::thread_or_ln184_656_fu_15489_p2() {
    or_ln184_656_fu_15489_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_93);
}

void pqcrystals_dilithium_15::thread_or_ln184_657_fu_15573_p2() {
    or_ln184_657_fu_15573_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_94);
}

void pqcrystals_dilithium_15::thread_or_ln184_658_fu_15591_p2() {
    or_ln184_658_fu_15591_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_95);
}

void pqcrystals_dilithium_15::thread_or_ln184_659_fu_15675_p2() {
    or_ln184_659_fu_15675_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_96);
}

void pqcrystals_dilithium_15::thread_or_ln184_65_fu_11363_p2() {
    or_ln184_65_fu_11363_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_42);
}

void pqcrystals_dilithium_15::thread_or_ln184_660_fu_15693_p2() {
    or_ln184_660_fu_15693_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_97);
}

void pqcrystals_dilithium_15::thread_or_ln184_661_fu_15777_p2() {
    or_ln184_661_fu_15777_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_98);
}

void pqcrystals_dilithium_15::thread_or_ln184_662_fu_15795_p2() {
    or_ln184_662_fu_15795_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_99);
}

void pqcrystals_dilithium_15::thread_or_ln184_663_fu_15879_p2() {
    or_ln184_663_fu_15879_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9A);
}

void pqcrystals_dilithium_15::thread_or_ln184_664_fu_15897_p2() {
    or_ln184_664_fu_15897_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9B);
}

void pqcrystals_dilithium_15::thread_or_ln184_665_fu_15981_p2() {
    or_ln184_665_fu_15981_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9C);
}

void pqcrystals_dilithium_15::thread_or_ln184_666_fu_15999_p2() {
    or_ln184_666_fu_15999_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9D);
}

void pqcrystals_dilithium_15::thread_or_ln184_667_fu_16083_p2() {
    or_ln184_667_fu_16083_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9E);
}

void pqcrystals_dilithium_15::thread_or_ln184_668_fu_16101_p2() {
    or_ln184_668_fu_16101_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_9F);
}

void pqcrystals_dilithium_15::thread_or_ln184_669_fu_16185_p2() {
    or_ln184_669_fu_16185_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A0);
}

void pqcrystals_dilithium_15::thread_or_ln184_66_fu_11377_p2() {
    or_ln184_66_fu_11377_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_43);
}

void pqcrystals_dilithium_15::thread_or_ln184_670_fu_16203_p2() {
    or_ln184_670_fu_16203_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A1);
}

void pqcrystals_dilithium_15::thread_or_ln184_671_fu_16287_p2() {
    or_ln184_671_fu_16287_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A2);
}

void pqcrystals_dilithium_15::thread_or_ln184_672_fu_16305_p2() {
    or_ln184_672_fu_16305_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A3);
}

void pqcrystals_dilithium_15::thread_or_ln184_673_fu_16389_p2() {
    or_ln184_673_fu_16389_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A4);
}

void pqcrystals_dilithium_15::thread_or_ln184_674_fu_16407_p2() {
    or_ln184_674_fu_16407_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A5);
}

void pqcrystals_dilithium_15::thread_or_ln184_675_fu_16491_p2() {
    or_ln184_675_fu_16491_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A6);
}

void pqcrystals_dilithium_15::thread_or_ln184_676_fu_16509_p2() {
    or_ln184_676_fu_16509_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A7);
}

void pqcrystals_dilithium_15::thread_or_ln184_677_fu_16593_p2() {
    or_ln184_677_fu_16593_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A8);
}

void pqcrystals_dilithium_15::thread_or_ln184_678_fu_16611_p2() {
    or_ln184_678_fu_16611_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_A9);
}

void pqcrystals_dilithium_15::thread_or_ln184_679_fu_16695_p2() {
    or_ln184_679_fu_16695_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_AA);
}

void pqcrystals_dilithium_15::thread_or_ln184_67_fu_11465_p2() {
    or_ln184_67_fu_11465_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_44);
}

void pqcrystals_dilithium_15::thread_or_ln184_680_fu_16713_p2() {
    or_ln184_680_fu_16713_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_AB);
}

void pqcrystals_dilithium_15::thread_or_ln184_681_fu_16797_p2() {
    or_ln184_681_fu_16797_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_AC);
}

void pqcrystals_dilithium_15::thread_or_ln184_682_fu_16815_p2() {
    or_ln184_682_fu_16815_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_AD);
}

void pqcrystals_dilithium_15::thread_or_ln184_683_fu_16899_p2() {
    or_ln184_683_fu_16899_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_AE);
}

void pqcrystals_dilithium_15::thread_or_ln184_684_fu_16917_p2() {
    or_ln184_684_fu_16917_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_AF);
}

void pqcrystals_dilithium_15::thread_or_ln184_685_fu_17001_p2() {
    or_ln184_685_fu_17001_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B0);
}

void pqcrystals_dilithium_15::thread_or_ln184_686_fu_17019_p2() {
    or_ln184_686_fu_17019_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B1);
}

void pqcrystals_dilithium_15::thread_or_ln184_687_fu_17103_p2() {
    or_ln184_687_fu_17103_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B2);
}

void pqcrystals_dilithium_15::thread_or_ln184_688_fu_17121_p2() {
    or_ln184_688_fu_17121_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B3);
}

void pqcrystals_dilithium_15::thread_or_ln184_689_fu_17205_p2() {
    or_ln184_689_fu_17205_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B4);
}

void pqcrystals_dilithium_15::thread_or_ln184_68_fu_11479_p2() {
    or_ln184_68_fu_11479_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_45);
}

void pqcrystals_dilithium_15::thread_or_ln184_690_fu_17223_p2() {
    or_ln184_690_fu_17223_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B5);
}

void pqcrystals_dilithium_15::thread_or_ln184_691_fu_17307_p2() {
    or_ln184_691_fu_17307_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B6);
}

void pqcrystals_dilithium_15::thread_or_ln184_692_fu_17325_p2() {
    or_ln184_692_fu_17325_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B7);
}

void pqcrystals_dilithium_15::thread_or_ln184_693_fu_17409_p2() {
    or_ln184_693_fu_17409_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B8);
}

void pqcrystals_dilithium_15::thread_or_ln184_694_fu_17427_p2() {
    or_ln184_694_fu_17427_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_B9);
}

void pqcrystals_dilithium_15::thread_or_ln184_695_fu_17511_p2() {
    or_ln184_695_fu_17511_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_BA);
}

void pqcrystals_dilithium_15::thread_or_ln184_696_fu_17529_p2() {
    or_ln184_696_fu_17529_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_BB);
}

void pqcrystals_dilithium_15::thread_or_ln184_697_fu_17613_p2() {
    or_ln184_697_fu_17613_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_BC);
}

void pqcrystals_dilithium_15::thread_or_ln184_698_fu_17631_p2() {
    or_ln184_698_fu_17631_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_BD);
}

void pqcrystals_dilithium_15::thread_or_ln184_699_fu_17715_p2() {
    or_ln184_699_fu_17715_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_BE);
}

void pqcrystals_dilithium_15::thread_or_ln184_69_fu_11567_p2() {
    or_ln184_69_fu_11567_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_46);
}

void pqcrystals_dilithium_15::thread_or_ln184_6_fu_8317_p2() {
    or_ln184_6_fu_8317_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_7);
}

void pqcrystals_dilithium_15::thread_or_ln184_700_fu_17733_p2() {
    or_ln184_700_fu_17733_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_BF);
}

void pqcrystals_dilithium_15::thread_or_ln184_701_fu_17817_p2() {
    or_ln184_701_fu_17817_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C0);
}

void pqcrystals_dilithium_15::thread_or_ln184_702_fu_17835_p2() {
    or_ln184_702_fu_17835_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C1);
}

void pqcrystals_dilithium_15::thread_or_ln184_703_fu_17919_p2() {
    or_ln184_703_fu_17919_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C2);
}

void pqcrystals_dilithium_15::thread_or_ln184_704_fu_17937_p2() {
    or_ln184_704_fu_17937_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C3);
}

void pqcrystals_dilithium_15::thread_or_ln184_705_fu_18021_p2() {
    or_ln184_705_fu_18021_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C4);
}

void pqcrystals_dilithium_15::thread_or_ln184_706_fu_18039_p2() {
    or_ln184_706_fu_18039_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C5);
}

void pqcrystals_dilithium_15::thread_or_ln184_707_fu_18123_p2() {
    or_ln184_707_fu_18123_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C6);
}

void pqcrystals_dilithium_15::thread_or_ln184_708_fu_18141_p2() {
    or_ln184_708_fu_18141_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C7);
}

void pqcrystals_dilithium_15::thread_or_ln184_709_fu_18225_p2() {
    or_ln184_709_fu_18225_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C8);
}

void pqcrystals_dilithium_15::thread_or_ln184_70_fu_11581_p2() {
    or_ln184_70_fu_11581_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_47);
}

void pqcrystals_dilithium_15::thread_or_ln184_710_fu_18243_p2() {
    or_ln184_710_fu_18243_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_C9);
}

void pqcrystals_dilithium_15::thread_or_ln184_711_fu_18327_p2() {
    or_ln184_711_fu_18327_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_CA);
}

void pqcrystals_dilithium_15::thread_or_ln184_712_fu_18345_p2() {
    or_ln184_712_fu_18345_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_CB);
}

void pqcrystals_dilithium_15::thread_or_ln184_713_fu_18429_p2() {
    or_ln184_713_fu_18429_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_CC);
}

void pqcrystals_dilithium_15::thread_or_ln184_714_fu_18447_p2() {
    or_ln184_714_fu_18447_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_CD);
}

void pqcrystals_dilithium_15::thread_or_ln184_715_fu_18531_p2() {
    or_ln184_715_fu_18531_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_CE);
}

void pqcrystals_dilithium_15::thread_or_ln184_716_fu_18549_p2() {
    or_ln184_716_fu_18549_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_CF);
}

void pqcrystals_dilithium_15::thread_or_ln184_717_fu_18633_p2() {
    or_ln184_717_fu_18633_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D0);
}

void pqcrystals_dilithium_15::thread_or_ln184_718_fu_18651_p2() {
    or_ln184_718_fu_18651_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D1);
}

void pqcrystals_dilithium_15::thread_or_ln184_719_fu_18735_p2() {
    or_ln184_719_fu_18735_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D2);
}

void pqcrystals_dilithium_15::thread_or_ln184_71_fu_11669_p2() {
    or_ln184_71_fu_11669_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_48);
}

void pqcrystals_dilithium_15::thread_or_ln184_720_fu_18753_p2() {
    or_ln184_720_fu_18753_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D3);
}

void pqcrystals_dilithium_15::thread_or_ln184_721_fu_18837_p2() {
    or_ln184_721_fu_18837_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D4);
}

void pqcrystals_dilithium_15::thread_or_ln184_722_fu_18855_p2() {
    or_ln184_722_fu_18855_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D5);
}

void pqcrystals_dilithium_15::thread_or_ln184_723_fu_18939_p2() {
    or_ln184_723_fu_18939_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D6);
}

void pqcrystals_dilithium_15::thread_or_ln184_724_fu_18957_p2() {
    or_ln184_724_fu_18957_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D7);
}

void pqcrystals_dilithium_15::thread_or_ln184_725_fu_19041_p2() {
    or_ln184_725_fu_19041_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D8);
}

void pqcrystals_dilithium_15::thread_or_ln184_726_fu_19059_p2() {
    or_ln184_726_fu_19059_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_D9);
}

void pqcrystals_dilithium_15::thread_or_ln184_727_fu_19143_p2() {
    or_ln184_727_fu_19143_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_DA);
}

void pqcrystals_dilithium_15::thread_or_ln184_728_fu_19161_p2() {
    or_ln184_728_fu_19161_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_DB);
}

void pqcrystals_dilithium_15::thread_or_ln184_729_fu_19245_p2() {
    or_ln184_729_fu_19245_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_DC);
}

void pqcrystals_dilithium_15::thread_or_ln184_72_fu_11683_p2() {
    or_ln184_72_fu_11683_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_49);
}

void pqcrystals_dilithium_15::thread_or_ln184_730_fu_19263_p2() {
    or_ln184_730_fu_19263_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_DD);
}

void pqcrystals_dilithium_15::thread_or_ln184_731_fu_19347_p2() {
    or_ln184_731_fu_19347_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_DE);
}

void pqcrystals_dilithium_15::thread_or_ln184_732_fu_19365_p2() {
    or_ln184_732_fu_19365_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_DF);
}

void pqcrystals_dilithium_15::thread_or_ln184_733_fu_19449_p2() {
    or_ln184_733_fu_19449_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E0);
}

void pqcrystals_dilithium_15::thread_or_ln184_734_fu_19467_p2() {
    or_ln184_734_fu_19467_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E1);
}

void pqcrystals_dilithium_15::thread_or_ln184_735_fu_19551_p2() {
    or_ln184_735_fu_19551_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E2);
}

void pqcrystals_dilithium_15::thread_or_ln184_736_fu_19569_p2() {
    or_ln184_736_fu_19569_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E3);
}

void pqcrystals_dilithium_15::thread_or_ln184_737_fu_19653_p2() {
    or_ln184_737_fu_19653_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E4);
}

void pqcrystals_dilithium_15::thread_or_ln184_738_fu_19671_p2() {
    or_ln184_738_fu_19671_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E5);
}

void pqcrystals_dilithium_15::thread_or_ln184_739_fu_19755_p2() {
    or_ln184_739_fu_19755_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E6);
}

void pqcrystals_dilithium_15::thread_or_ln184_73_fu_11771_p2() {
    or_ln184_73_fu_11771_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4A);
}

void pqcrystals_dilithium_15::thread_or_ln184_740_fu_19773_p2() {
    or_ln184_740_fu_19773_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E7);
}

void pqcrystals_dilithium_15::thread_or_ln184_741_fu_19857_p2() {
    or_ln184_741_fu_19857_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E8);
}

void pqcrystals_dilithium_15::thread_or_ln184_742_fu_19875_p2() {
    or_ln184_742_fu_19875_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_E9);
}

void pqcrystals_dilithium_15::thread_or_ln184_743_fu_19959_p2() {
    or_ln184_743_fu_19959_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_EA);
}

void pqcrystals_dilithium_15::thread_or_ln184_744_fu_19977_p2() {
    or_ln184_744_fu_19977_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_EB);
}

void pqcrystals_dilithium_15::thread_or_ln184_745_fu_20061_p2() {
    or_ln184_745_fu_20061_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_EC);
}

void pqcrystals_dilithium_15::thread_or_ln184_746_fu_20079_p2() {
    or_ln184_746_fu_20079_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_ED);
}

void pqcrystals_dilithium_15::thread_or_ln184_747_fu_20163_p2() {
    or_ln184_747_fu_20163_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_EE);
}

void pqcrystals_dilithium_15::thread_or_ln184_748_fu_20181_p2() {
    or_ln184_748_fu_20181_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_EF);
}

void pqcrystals_dilithium_15::thread_or_ln184_749_fu_20265_p2() {
    or_ln184_749_fu_20265_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F0);
}

void pqcrystals_dilithium_15::thread_or_ln184_74_fu_11785_p2() {
    or_ln184_74_fu_11785_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4B);
}

void pqcrystals_dilithium_15::thread_or_ln184_750_fu_20283_p2() {
    or_ln184_750_fu_20283_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F1);
}

void pqcrystals_dilithium_15::thread_or_ln184_751_fu_20367_p2() {
    or_ln184_751_fu_20367_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F2);
}

void pqcrystals_dilithium_15::thread_or_ln184_752_fu_20385_p2() {
    or_ln184_752_fu_20385_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F3);
}

void pqcrystals_dilithium_15::thread_or_ln184_753_fu_20469_p2() {
    or_ln184_753_fu_20469_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F4);
}

void pqcrystals_dilithium_15::thread_or_ln184_754_fu_20487_p2() {
    or_ln184_754_fu_20487_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F5);
}

void pqcrystals_dilithium_15::thread_or_ln184_755_fu_20571_p2() {
    or_ln184_755_fu_20571_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F6);
}

void pqcrystals_dilithium_15::thread_or_ln184_756_fu_20589_p2() {
    or_ln184_756_fu_20589_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F7);
}

void pqcrystals_dilithium_15::thread_or_ln184_757_fu_20673_p2() {
    or_ln184_757_fu_20673_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F8);
}

void pqcrystals_dilithium_15::thread_or_ln184_758_fu_20691_p2() {
    or_ln184_758_fu_20691_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_F9);
}

void pqcrystals_dilithium_15::thread_or_ln184_759_fu_20775_p2() {
    or_ln184_759_fu_20775_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_FA);
}

void pqcrystals_dilithium_15::thread_or_ln184_75_fu_11873_p2() {
    or_ln184_75_fu_11873_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4C);
}

void pqcrystals_dilithium_15::thread_or_ln184_760_fu_20793_p2() {
    or_ln184_760_fu_20793_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_FB);
}

void pqcrystals_dilithium_15::thread_or_ln184_761_fu_20877_p2() {
    or_ln184_761_fu_20877_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_FC);
}

void pqcrystals_dilithium_15::thread_or_ln184_762_fu_20895_p2() {
    or_ln184_762_fu_20895_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_FD);
}

void pqcrystals_dilithium_15::thread_or_ln184_763_fu_20979_p2() {
    or_ln184_763_fu_20979_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_FE);
}

void pqcrystals_dilithium_15::thread_or_ln184_764_fu_20997_p2() {
    or_ln184_764_fu_20997_p2 = (tmp_492_reg_21359.read() | ap_const_lv13_FF);
}

void pqcrystals_dilithium_15::thread_or_ln184_76_fu_11887_p2() {
    or_ln184_76_fu_11887_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4D);
}

void pqcrystals_dilithium_15::thread_or_ln184_77_fu_11975_p2() {
    or_ln184_77_fu_11975_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4E);
}

void pqcrystals_dilithium_15::thread_or_ln184_78_fu_11989_p2() {
    or_ln184_78_fu_11989_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_4F);
}

void pqcrystals_dilithium_15::thread_or_ln184_79_fu_12077_p2() {
    or_ln184_79_fu_12077_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_50);
}

void pqcrystals_dilithium_15::thread_or_ln184_7_fu_8405_p2() {
    or_ln184_7_fu_8405_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_8);
}

void pqcrystals_dilithium_15::thread_or_ln184_80_fu_12091_p2() {
    or_ln184_80_fu_12091_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_51);
}

void pqcrystals_dilithium_15::thread_or_ln184_81_fu_12179_p2() {
    or_ln184_81_fu_12179_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_52);
}

void pqcrystals_dilithium_15::thread_or_ln184_82_fu_12193_p2() {
    or_ln184_82_fu_12193_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_53);
}

void pqcrystals_dilithium_15::thread_or_ln184_83_fu_12281_p2() {
    or_ln184_83_fu_12281_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_54);
}

void pqcrystals_dilithium_15::thread_or_ln184_84_fu_12295_p2() {
    or_ln184_84_fu_12295_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_55);
}

void pqcrystals_dilithium_15::thread_or_ln184_85_fu_12383_p2() {
    or_ln184_85_fu_12383_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_56);
}

void pqcrystals_dilithium_15::thread_or_ln184_86_fu_12397_p2() {
    or_ln184_86_fu_12397_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_57);
}

void pqcrystals_dilithium_15::thread_or_ln184_87_fu_12485_p2() {
    or_ln184_87_fu_12485_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_58);
}

void pqcrystals_dilithium_15::thread_or_ln184_88_fu_12499_p2() {
    or_ln184_88_fu_12499_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_59);
}

void pqcrystals_dilithium_15::thread_or_ln184_89_fu_12587_p2() {
    or_ln184_89_fu_12587_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5A);
}

void pqcrystals_dilithium_15::thread_or_ln184_8_fu_8419_p2() {
    or_ln184_8_fu_8419_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_9);
}

void pqcrystals_dilithium_15::thread_or_ln184_90_fu_12601_p2() {
    or_ln184_90_fu_12601_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5B);
}

void pqcrystals_dilithium_15::thread_or_ln184_91_fu_12689_p2() {
    or_ln184_91_fu_12689_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5C);
}

void pqcrystals_dilithium_15::thread_or_ln184_92_fu_12703_p2() {
    or_ln184_92_fu_12703_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5D);
}

void pqcrystals_dilithium_15::thread_or_ln184_93_fu_12791_p2() {
    or_ln184_93_fu_12791_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5E);
}

void pqcrystals_dilithium_15::thread_or_ln184_94_fu_12805_p2() {
    or_ln184_94_fu_12805_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_5F);
}

void pqcrystals_dilithium_15::thread_or_ln184_95_fu_12893_p2() {
    or_ln184_95_fu_12893_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_60);
}

void pqcrystals_dilithium_15::thread_or_ln184_96_fu_12907_p2() {
    or_ln184_96_fu_12907_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_61);
}

void pqcrystals_dilithium_15::thread_or_ln184_97_fu_12995_p2() {
    or_ln184_97_fu_12995_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_62);
}

void pqcrystals_dilithium_15::thread_or_ln184_98_fu_13009_p2() {
    or_ln184_98_fu_13009_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_63);
}

void pqcrystals_dilithium_15::thread_or_ln184_99_fu_13097_p2() {
    or_ln184_99_fu_13097_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_64);
}

void pqcrystals_dilithium_15::thread_or_ln184_9_fu_8507_p2() {
    or_ln184_9_fu_8507_p2 = (tmp_1721_reg_21091.read() | ap_const_lv11_A);
}

void pqcrystals_dilithium_15::thread_or_ln184_fu_8034_p2() {
    or_ln184_fu_8034_p2 = (tmp_1721_fu_8021_p3.read() | ap_const_lv11_1);
}

void pqcrystals_dilithium_15::thread_or_ln184_s_fu_8086_p3() {
    or_ln184_s_fu_8086_p3 = esl_concat<1,13>(ap_const_lv1_0, or_ln184_510_fu_8080_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_101_fu_10727_p1() {
    sext_ln184_101_fu_10727_p1 = esl_sext<64,55>(mul_ln184_50_fu_10721_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_103_fu_10746_p1() {
    sext_ln184_103_fu_10746_p1 = esl_sext<64,55>(mul_ln184_51_fu_10740_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_105_fu_10829_p1() {
    sext_ln184_105_fu_10829_p1 = esl_sext<64,55>(mul_ln184_52_fu_10823_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_107_fu_10848_p1() {
    sext_ln184_107_fu_10848_p1 = esl_sext<64,55>(mul_ln184_53_fu_10842_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_109_fu_10931_p1() {
    sext_ln184_109_fu_10931_p1 = esl_sext<64,55>(mul_ln184_54_fu_10925_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_111_fu_10950_p1() {
    sext_ln184_111_fu_10950_p1 = esl_sext<64,55>(mul_ln184_55_fu_10944_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_113_fu_11033_p1() {
    sext_ln184_113_fu_11033_p1 = esl_sext<64,55>(mul_ln184_56_fu_11027_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_115_fu_11052_p1() {
    sext_ln184_115_fu_11052_p1 = esl_sext<64,55>(mul_ln184_57_fu_11046_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_117_fu_11135_p1() {
    sext_ln184_117_fu_11135_p1 = esl_sext<64,55>(mul_ln184_58_fu_11129_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_119_fu_11154_p1() {
    sext_ln184_119_fu_11154_p1 = esl_sext<64,55>(mul_ln184_59_fu_11148_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_11_fu_8400_p1() {
    sext_ln184_11_fu_8400_p1 = esl_sext<64,55>(mul_ln184_5_fu_8394_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_121_fu_11237_p1() {
    sext_ln184_121_fu_11237_p1 = esl_sext<64,55>(mul_ln184_60_fu_11231_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_123_fu_11256_p1() {
    sext_ln184_123_fu_11256_p1 = esl_sext<64,55>(mul_ln184_61_fu_11250_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_125_fu_11339_p1() {
    sext_ln184_125_fu_11339_p1 = esl_sext<64,55>(mul_ln184_62_fu_11333_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_127_fu_11358_p1() {
    sext_ln184_127_fu_11358_p1 = esl_sext<64,55>(mul_ln184_63_fu_11352_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_129_fu_11441_p1() {
    sext_ln184_129_fu_11441_p1 = esl_sext<64,55>(mul_ln184_64_fu_11435_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_131_fu_11460_p1() {
    sext_ln184_131_fu_11460_p1 = esl_sext<64,55>(mul_ln184_65_fu_11454_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_133_fu_11543_p1() {
    sext_ln184_133_fu_11543_p1 = esl_sext<64,55>(mul_ln184_66_fu_11537_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_135_fu_11562_p1() {
    sext_ln184_135_fu_11562_p1 = esl_sext<64,55>(mul_ln184_67_fu_11556_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_137_fu_11645_p1() {
    sext_ln184_137_fu_11645_p1 = esl_sext<64,55>(mul_ln184_68_fu_11639_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_139_fu_11664_p1() {
    sext_ln184_139_fu_11664_p1 = esl_sext<64,55>(mul_ln184_69_fu_11658_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_13_fu_8483_p1() {
    sext_ln184_13_fu_8483_p1 = esl_sext<64,55>(mul_ln184_6_fu_8477_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_141_fu_11747_p1() {
    sext_ln184_141_fu_11747_p1 = esl_sext<64,55>(mul_ln184_70_fu_11741_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_143_fu_11766_p1() {
    sext_ln184_143_fu_11766_p1 = esl_sext<64,55>(mul_ln184_71_fu_11760_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_145_fu_11849_p1() {
    sext_ln184_145_fu_11849_p1 = esl_sext<64,55>(mul_ln184_72_fu_11843_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_147_fu_11868_p1() {
    sext_ln184_147_fu_11868_p1 = esl_sext<64,55>(mul_ln184_73_fu_11862_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_149_fu_11951_p1() {
    sext_ln184_149_fu_11951_p1 = esl_sext<64,55>(mul_ln184_74_fu_11945_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_151_fu_11970_p1() {
    sext_ln184_151_fu_11970_p1 = esl_sext<64,55>(mul_ln184_75_fu_11964_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_153_fu_12053_p1() {
    sext_ln184_153_fu_12053_p1 = esl_sext<64,55>(mul_ln184_76_fu_12047_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_155_fu_12072_p1() {
    sext_ln184_155_fu_12072_p1 = esl_sext<64,55>(mul_ln184_77_fu_12066_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_157_fu_12155_p1() {
    sext_ln184_157_fu_12155_p1 = esl_sext<64,55>(mul_ln184_78_fu_12149_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_159_fu_12174_p1() {
    sext_ln184_159_fu_12174_p1 = esl_sext<64,55>(mul_ln184_79_fu_12168_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_15_fu_8502_p1() {
    sext_ln184_15_fu_8502_p1 = esl_sext<64,55>(mul_ln184_7_fu_8496_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_161_fu_12257_p1() {
    sext_ln184_161_fu_12257_p1 = esl_sext<64,55>(mul_ln184_80_fu_12251_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_163_fu_12276_p1() {
    sext_ln184_163_fu_12276_p1 = esl_sext<64,55>(mul_ln184_81_fu_12270_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_165_fu_12359_p1() {
    sext_ln184_165_fu_12359_p1 = esl_sext<64,55>(mul_ln184_82_fu_12353_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_167_fu_12378_p1() {
    sext_ln184_167_fu_12378_p1 = esl_sext<64,55>(mul_ln184_83_fu_12372_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_169_fu_12461_p1() {
    sext_ln184_169_fu_12461_p1 = esl_sext<64,55>(mul_ln184_84_fu_12455_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_171_fu_12480_p1() {
    sext_ln184_171_fu_12480_p1 = esl_sext<64,55>(mul_ln184_85_fu_12474_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_173_fu_12563_p1() {
    sext_ln184_173_fu_12563_p1 = esl_sext<64,55>(mul_ln184_86_fu_12557_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_175_fu_12582_p1() {
    sext_ln184_175_fu_12582_p1 = esl_sext<64,55>(mul_ln184_87_fu_12576_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_177_fu_12665_p1() {
    sext_ln184_177_fu_12665_p1 = esl_sext<64,55>(mul_ln184_88_fu_12659_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_179_fu_12684_p1() {
    sext_ln184_179_fu_12684_p1 = esl_sext<64,55>(mul_ln184_89_fu_12678_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_17_fu_8585_p1() {
    sext_ln184_17_fu_8585_p1 = esl_sext<64,55>(mul_ln184_8_fu_8579_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_181_fu_12767_p1() {
    sext_ln184_181_fu_12767_p1 = esl_sext<64,55>(mul_ln184_90_fu_12761_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_183_fu_12786_p1() {
    sext_ln184_183_fu_12786_p1 = esl_sext<64,55>(mul_ln184_91_fu_12780_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_185_fu_12869_p1() {
    sext_ln184_185_fu_12869_p1 = esl_sext<64,55>(mul_ln184_92_fu_12863_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_187_fu_12888_p1() {
    sext_ln184_187_fu_12888_p1 = esl_sext<64,55>(mul_ln184_93_fu_12882_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_189_fu_12971_p1() {
    sext_ln184_189_fu_12971_p1 = esl_sext<64,55>(mul_ln184_94_fu_12965_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_191_fu_12990_p1() {
    sext_ln184_191_fu_12990_p1 = esl_sext<64,55>(mul_ln184_95_fu_12984_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_193_fu_13073_p1() {
    sext_ln184_193_fu_13073_p1 = esl_sext<64,55>(mul_ln184_96_fu_13067_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_195_fu_13092_p1() {
    sext_ln184_195_fu_13092_p1 = esl_sext<64,55>(mul_ln184_97_fu_13086_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_197_fu_13175_p1() {
    sext_ln184_197_fu_13175_p1 = esl_sext<64,55>(mul_ln184_98_fu_13169_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_199_fu_13194_p1() {
    sext_ln184_199_fu_13194_p1 = esl_sext<64,55>(mul_ln184_99_fu_13188_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_19_fu_8604_p1() {
    sext_ln184_19_fu_8604_p1 = esl_sext<64,55>(mul_ln184_9_fu_8598_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_1_fu_8177_p1() {
    sext_ln184_1_fu_8177_p1 = esl_sext<64,55>(mul_ln184_fu_8171_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_201_fu_13277_p1() {
    sext_ln184_201_fu_13277_p1 = esl_sext<64,55>(mul_ln184_100_fu_13271_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_203_fu_13296_p1() {
    sext_ln184_203_fu_13296_p1 = esl_sext<64,55>(mul_ln184_101_fu_13290_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_205_fu_13379_p1() {
    sext_ln184_205_fu_13379_p1 = esl_sext<64,55>(mul_ln184_102_fu_13373_p2.read());
}

void pqcrystals_dilithium_15::thread_sext_ln184_207_fu_13398_p1() {
    sext_ln184_207_fu_13398_p1 = esl_sext<64,55>(mul_ln184_103_fu_13392_p2.read());
}

}

