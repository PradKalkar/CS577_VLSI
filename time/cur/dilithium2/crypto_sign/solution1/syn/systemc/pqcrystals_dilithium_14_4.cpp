#include "pqcrystals_dilithium_14.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_14::thread_mul_ln190_61_fu_10944_p1() {
    mul_ln190_61_fu_10944_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_61_fu_10944_p2() {
    mul_ln190_61_fu_10944_p2 = (!mul_ln190_61_fu_10944_p0.read().is_01() || !mul_ln190_61_fu_10944_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_61_fu_10944_p0.read()) * sc_bigint<32>(mul_ln190_61_fu_10944_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_62_fu_11019_p0() {
    mul_ln190_62_fu_11019_p0 =  (sc_lv<23>) (mul_ln190_62_fu_11019_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_62_fu_11019_p00() {
    mul_ln190_62_fu_11019_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_62_fu_11019_p1() {
    mul_ln190_62_fu_11019_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_62_fu_11019_p2() {
    mul_ln190_62_fu_11019_p2 = (!mul_ln190_62_fu_11019_p0.read().is_01() || !mul_ln190_62_fu_11019_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_62_fu_11019_p0.read()) * sc_bigint<32>(mul_ln190_62_fu_11019_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_63_fu_11038_p0() {
    mul_ln190_63_fu_11038_p0 =  (sc_lv<23>) (mul_ln190_63_fu_11038_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_63_fu_11038_p00() {
    mul_ln190_63_fu_11038_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_63_fu_11038_p1() {
    mul_ln190_63_fu_11038_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_63_fu_11038_p2() {
    mul_ln190_63_fu_11038_p2 = (!mul_ln190_63_fu_11038_p0.read().is_01() || !mul_ln190_63_fu_11038_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_63_fu_11038_p0.read()) * sc_bigint<32>(mul_ln190_63_fu_11038_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_64_fu_11113_p0() {
    mul_ln190_64_fu_11113_p0 =  (sc_lv<23>) (mul_ln190_64_fu_11113_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_64_fu_11113_p00() {
    mul_ln190_64_fu_11113_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_64_fu_11113_p1() {
    mul_ln190_64_fu_11113_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_64_fu_11113_p2() {
    mul_ln190_64_fu_11113_p2 = (!mul_ln190_64_fu_11113_p0.read().is_01() || !mul_ln190_64_fu_11113_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_64_fu_11113_p0.read()) * sc_bigint<32>(mul_ln190_64_fu_11113_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_65_fu_11132_p0() {
    mul_ln190_65_fu_11132_p0 =  (sc_lv<23>) (mul_ln190_65_fu_11132_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_65_fu_11132_p00() {
    mul_ln190_65_fu_11132_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_65_fu_11132_p1() {
    mul_ln190_65_fu_11132_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_65_fu_11132_p2() {
    mul_ln190_65_fu_11132_p2 = (!mul_ln190_65_fu_11132_p0.read().is_01() || !mul_ln190_65_fu_11132_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_65_fu_11132_p0.read()) * sc_bigint<32>(mul_ln190_65_fu_11132_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_66_fu_11207_p0() {
    mul_ln190_66_fu_11207_p0 =  (sc_lv<23>) (mul_ln190_66_fu_11207_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_66_fu_11207_p00() {
    mul_ln190_66_fu_11207_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_66_fu_11207_p1() {
    mul_ln190_66_fu_11207_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_66_fu_11207_p2() {
    mul_ln190_66_fu_11207_p2 = (!mul_ln190_66_fu_11207_p0.read().is_01() || !mul_ln190_66_fu_11207_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_66_fu_11207_p0.read()) * sc_bigint<32>(mul_ln190_66_fu_11207_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_67_fu_11226_p0() {
    mul_ln190_67_fu_11226_p0 =  (sc_lv<23>) (mul_ln190_67_fu_11226_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_67_fu_11226_p00() {
    mul_ln190_67_fu_11226_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_67_fu_11226_p1() {
    mul_ln190_67_fu_11226_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_67_fu_11226_p2() {
    mul_ln190_67_fu_11226_p2 = (!mul_ln190_67_fu_11226_p0.read().is_01() || !mul_ln190_67_fu_11226_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_67_fu_11226_p0.read()) * sc_bigint<32>(mul_ln190_67_fu_11226_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_68_fu_11301_p0() {
    mul_ln190_68_fu_11301_p0 =  (sc_lv<23>) (mul_ln190_68_fu_11301_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_68_fu_11301_p00() {
    mul_ln190_68_fu_11301_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_68_fu_11301_p1() {
    mul_ln190_68_fu_11301_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_68_fu_11301_p2() {
    mul_ln190_68_fu_11301_p2 = (!mul_ln190_68_fu_11301_p0.read().is_01() || !mul_ln190_68_fu_11301_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_68_fu_11301_p0.read()) * sc_bigint<32>(mul_ln190_68_fu_11301_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_69_fu_11320_p0() {
    mul_ln190_69_fu_11320_p0 =  (sc_lv<23>) (mul_ln190_69_fu_11320_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_69_fu_11320_p00() {
    mul_ln190_69_fu_11320_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_69_fu_11320_p1() {
    mul_ln190_69_fu_11320_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_69_fu_11320_p2() {
    mul_ln190_69_fu_11320_p2 = (!mul_ln190_69_fu_11320_p0.read().is_01() || !mul_ln190_69_fu_11320_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_69_fu_11320_p0.read()) * sc_bigint<32>(mul_ln190_69_fu_11320_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_6_fu_8387_p0() {
    mul_ln190_6_fu_8387_p0 =  (sc_lv<23>) (mul_ln190_6_fu_8387_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_6_fu_8387_p00() {
    mul_ln190_6_fu_8387_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_6_fu_8387_p1() {
    mul_ln190_6_fu_8387_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_6_fu_8387_p2() {
    mul_ln190_6_fu_8387_p2 = (!mul_ln190_6_fu_8387_p0.read().is_01() || !mul_ln190_6_fu_8387_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_6_fu_8387_p0.read()) * sc_bigint<32>(mul_ln190_6_fu_8387_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_70_fu_11395_p0() {
    mul_ln190_70_fu_11395_p0 =  (sc_lv<23>) (mul_ln190_70_fu_11395_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_70_fu_11395_p00() {
    mul_ln190_70_fu_11395_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_70_fu_11395_p1() {
    mul_ln190_70_fu_11395_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_70_fu_11395_p2() {
    mul_ln190_70_fu_11395_p2 = (!mul_ln190_70_fu_11395_p0.read().is_01() || !mul_ln190_70_fu_11395_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_70_fu_11395_p0.read()) * sc_bigint<32>(mul_ln190_70_fu_11395_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_71_fu_11414_p0() {
    mul_ln190_71_fu_11414_p0 =  (sc_lv<23>) (mul_ln190_71_fu_11414_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_71_fu_11414_p00() {
    mul_ln190_71_fu_11414_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_71_fu_11414_p1() {
    mul_ln190_71_fu_11414_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_71_fu_11414_p2() {
    mul_ln190_71_fu_11414_p2 = (!mul_ln190_71_fu_11414_p0.read().is_01() || !mul_ln190_71_fu_11414_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_71_fu_11414_p0.read()) * sc_bigint<32>(mul_ln190_71_fu_11414_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_72_fu_11489_p0() {
    mul_ln190_72_fu_11489_p0 =  (sc_lv<23>) (mul_ln190_72_fu_11489_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_72_fu_11489_p00() {
    mul_ln190_72_fu_11489_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_72_fu_11489_p1() {
    mul_ln190_72_fu_11489_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_72_fu_11489_p2() {
    mul_ln190_72_fu_11489_p2 = (!mul_ln190_72_fu_11489_p0.read().is_01() || !mul_ln190_72_fu_11489_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_72_fu_11489_p0.read()) * sc_bigint<32>(mul_ln190_72_fu_11489_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_73_fu_11508_p0() {
    mul_ln190_73_fu_11508_p0 =  (sc_lv<23>) (mul_ln190_73_fu_11508_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_73_fu_11508_p00() {
    mul_ln190_73_fu_11508_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_73_fu_11508_p1() {
    mul_ln190_73_fu_11508_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_73_fu_11508_p2() {
    mul_ln190_73_fu_11508_p2 = (!mul_ln190_73_fu_11508_p0.read().is_01() || !mul_ln190_73_fu_11508_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_73_fu_11508_p0.read()) * sc_bigint<32>(mul_ln190_73_fu_11508_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_74_fu_11583_p0() {
    mul_ln190_74_fu_11583_p0 =  (sc_lv<23>) (mul_ln190_74_fu_11583_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_74_fu_11583_p00() {
    mul_ln190_74_fu_11583_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_74_fu_11583_p1() {
    mul_ln190_74_fu_11583_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_74_fu_11583_p2() {
    mul_ln190_74_fu_11583_p2 = (!mul_ln190_74_fu_11583_p0.read().is_01() || !mul_ln190_74_fu_11583_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_74_fu_11583_p0.read()) * sc_bigint<32>(mul_ln190_74_fu_11583_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_75_fu_11602_p0() {
    mul_ln190_75_fu_11602_p0 =  (sc_lv<23>) (mul_ln190_75_fu_11602_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_75_fu_11602_p00() {
    mul_ln190_75_fu_11602_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_75_fu_11602_p1() {
    mul_ln190_75_fu_11602_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_75_fu_11602_p2() {
    mul_ln190_75_fu_11602_p2 = (!mul_ln190_75_fu_11602_p0.read().is_01() || !mul_ln190_75_fu_11602_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_75_fu_11602_p0.read()) * sc_bigint<32>(mul_ln190_75_fu_11602_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_76_fu_11677_p0() {
    mul_ln190_76_fu_11677_p0 =  (sc_lv<23>) (mul_ln190_76_fu_11677_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_76_fu_11677_p00() {
    mul_ln190_76_fu_11677_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_76_fu_11677_p1() {
    mul_ln190_76_fu_11677_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_76_fu_11677_p2() {
    mul_ln190_76_fu_11677_p2 = (!mul_ln190_76_fu_11677_p0.read().is_01() || !mul_ln190_76_fu_11677_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_76_fu_11677_p0.read()) * sc_bigint<32>(mul_ln190_76_fu_11677_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_77_fu_11696_p0() {
    mul_ln190_77_fu_11696_p0 =  (sc_lv<23>) (mul_ln190_77_fu_11696_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_77_fu_11696_p00() {
    mul_ln190_77_fu_11696_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_77_fu_11696_p1() {
    mul_ln190_77_fu_11696_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_77_fu_11696_p2() {
    mul_ln190_77_fu_11696_p2 = (!mul_ln190_77_fu_11696_p0.read().is_01() || !mul_ln190_77_fu_11696_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_77_fu_11696_p0.read()) * sc_bigint<32>(mul_ln190_77_fu_11696_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_78_fu_11771_p0() {
    mul_ln190_78_fu_11771_p0 =  (sc_lv<23>) (mul_ln190_78_fu_11771_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_78_fu_11771_p00() {
    mul_ln190_78_fu_11771_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_78_fu_11771_p1() {
    mul_ln190_78_fu_11771_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_78_fu_11771_p2() {
    mul_ln190_78_fu_11771_p2 = (!mul_ln190_78_fu_11771_p0.read().is_01() || !mul_ln190_78_fu_11771_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_78_fu_11771_p0.read()) * sc_bigint<32>(mul_ln190_78_fu_11771_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_79_fu_11790_p0() {
    mul_ln190_79_fu_11790_p0 =  (sc_lv<23>) (mul_ln190_79_fu_11790_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_79_fu_11790_p00() {
    mul_ln190_79_fu_11790_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_79_fu_11790_p1() {
    mul_ln190_79_fu_11790_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_79_fu_11790_p2() {
    mul_ln190_79_fu_11790_p2 = (!mul_ln190_79_fu_11790_p0.read().is_01() || !mul_ln190_79_fu_11790_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_79_fu_11790_p0.read()) * sc_bigint<32>(mul_ln190_79_fu_11790_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_7_fu_8406_p0() {
    mul_ln190_7_fu_8406_p0 =  (sc_lv<23>) (mul_ln190_7_fu_8406_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_7_fu_8406_p00() {
    mul_ln190_7_fu_8406_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_7_fu_8406_p1() {
    mul_ln190_7_fu_8406_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_7_fu_8406_p2() {
    mul_ln190_7_fu_8406_p2 = (!mul_ln190_7_fu_8406_p0.read().is_01() || !mul_ln190_7_fu_8406_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_7_fu_8406_p0.read()) * sc_bigint<32>(mul_ln190_7_fu_8406_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_80_fu_11865_p0() {
    mul_ln190_80_fu_11865_p0 =  (sc_lv<23>) (mul_ln190_80_fu_11865_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_80_fu_11865_p00() {
    mul_ln190_80_fu_11865_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_80_fu_11865_p1() {
    mul_ln190_80_fu_11865_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_80_fu_11865_p2() {
    mul_ln190_80_fu_11865_p2 = (!mul_ln190_80_fu_11865_p0.read().is_01() || !mul_ln190_80_fu_11865_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_80_fu_11865_p0.read()) * sc_bigint<32>(mul_ln190_80_fu_11865_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_81_fu_11884_p0() {
    mul_ln190_81_fu_11884_p0 =  (sc_lv<23>) (mul_ln190_81_fu_11884_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_81_fu_11884_p00() {
    mul_ln190_81_fu_11884_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_81_fu_11884_p1() {
    mul_ln190_81_fu_11884_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_81_fu_11884_p2() {
    mul_ln190_81_fu_11884_p2 = (!mul_ln190_81_fu_11884_p0.read().is_01() || !mul_ln190_81_fu_11884_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_81_fu_11884_p0.read()) * sc_bigint<32>(mul_ln190_81_fu_11884_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_82_fu_11959_p0() {
    mul_ln190_82_fu_11959_p0 =  (sc_lv<23>) (mul_ln190_82_fu_11959_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_82_fu_11959_p00() {
    mul_ln190_82_fu_11959_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_82_fu_11959_p1() {
    mul_ln190_82_fu_11959_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_82_fu_11959_p2() {
    mul_ln190_82_fu_11959_p2 = (!mul_ln190_82_fu_11959_p0.read().is_01() || !mul_ln190_82_fu_11959_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_82_fu_11959_p0.read()) * sc_bigint<32>(mul_ln190_82_fu_11959_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_83_fu_11978_p0() {
    mul_ln190_83_fu_11978_p0 =  (sc_lv<23>) (mul_ln190_83_fu_11978_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_83_fu_11978_p00() {
    mul_ln190_83_fu_11978_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_83_fu_11978_p1() {
    mul_ln190_83_fu_11978_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_83_fu_11978_p2() {
    mul_ln190_83_fu_11978_p2 = (!mul_ln190_83_fu_11978_p0.read().is_01() || !mul_ln190_83_fu_11978_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_83_fu_11978_p0.read()) * sc_bigint<32>(mul_ln190_83_fu_11978_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_84_fu_12053_p0() {
    mul_ln190_84_fu_12053_p0 =  (sc_lv<23>) (mul_ln190_84_fu_12053_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_84_fu_12053_p00() {
    mul_ln190_84_fu_12053_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_84_fu_12053_p1() {
    mul_ln190_84_fu_12053_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_84_fu_12053_p2() {
    mul_ln190_84_fu_12053_p2 = (!mul_ln190_84_fu_12053_p0.read().is_01() || !mul_ln190_84_fu_12053_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_84_fu_12053_p0.read()) * sc_bigint<32>(mul_ln190_84_fu_12053_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_85_fu_12072_p0() {
    mul_ln190_85_fu_12072_p0 =  (sc_lv<23>) (mul_ln190_85_fu_12072_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_85_fu_12072_p00() {
    mul_ln190_85_fu_12072_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_85_fu_12072_p1() {
    mul_ln190_85_fu_12072_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_85_fu_12072_p2() {
    mul_ln190_85_fu_12072_p2 = (!mul_ln190_85_fu_12072_p0.read().is_01() || !mul_ln190_85_fu_12072_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_85_fu_12072_p0.read()) * sc_bigint<32>(mul_ln190_85_fu_12072_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_86_fu_12147_p0() {
    mul_ln190_86_fu_12147_p0 =  (sc_lv<23>) (mul_ln190_86_fu_12147_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_86_fu_12147_p00() {
    mul_ln190_86_fu_12147_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_86_fu_12147_p1() {
    mul_ln190_86_fu_12147_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_86_fu_12147_p2() {
    mul_ln190_86_fu_12147_p2 = (!mul_ln190_86_fu_12147_p0.read().is_01() || !mul_ln190_86_fu_12147_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_86_fu_12147_p0.read()) * sc_bigint<32>(mul_ln190_86_fu_12147_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_87_fu_12166_p0() {
    mul_ln190_87_fu_12166_p0 =  (sc_lv<23>) (mul_ln190_87_fu_12166_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_87_fu_12166_p00() {
    mul_ln190_87_fu_12166_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_87_fu_12166_p1() {
    mul_ln190_87_fu_12166_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_87_fu_12166_p2() {
    mul_ln190_87_fu_12166_p2 = (!mul_ln190_87_fu_12166_p0.read().is_01() || !mul_ln190_87_fu_12166_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_87_fu_12166_p0.read()) * sc_bigint<32>(mul_ln190_87_fu_12166_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_88_fu_12241_p0() {
    mul_ln190_88_fu_12241_p0 =  (sc_lv<23>) (mul_ln190_88_fu_12241_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_88_fu_12241_p00() {
    mul_ln190_88_fu_12241_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_88_fu_12241_p1() {
    mul_ln190_88_fu_12241_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_88_fu_12241_p2() {
    mul_ln190_88_fu_12241_p2 = (!mul_ln190_88_fu_12241_p0.read().is_01() || !mul_ln190_88_fu_12241_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_88_fu_12241_p0.read()) * sc_bigint<32>(mul_ln190_88_fu_12241_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_89_fu_12260_p0() {
    mul_ln190_89_fu_12260_p0 =  (sc_lv<23>) (mul_ln190_89_fu_12260_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_89_fu_12260_p00() {
    mul_ln190_89_fu_12260_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_89_fu_12260_p1() {
    mul_ln190_89_fu_12260_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_89_fu_12260_p2() {
    mul_ln190_89_fu_12260_p2 = (!mul_ln190_89_fu_12260_p0.read().is_01() || !mul_ln190_89_fu_12260_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_89_fu_12260_p0.read()) * sc_bigint<32>(mul_ln190_89_fu_12260_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_8_fu_8481_p0() {
    mul_ln190_8_fu_8481_p0 =  (sc_lv<23>) (mul_ln190_8_fu_8481_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_8_fu_8481_p00() {
    mul_ln190_8_fu_8481_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_8_fu_8481_p1() {
    mul_ln190_8_fu_8481_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_8_fu_8481_p2() {
    mul_ln190_8_fu_8481_p2 = (!mul_ln190_8_fu_8481_p0.read().is_01() || !mul_ln190_8_fu_8481_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_8_fu_8481_p0.read()) * sc_bigint<32>(mul_ln190_8_fu_8481_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_90_fu_12335_p0() {
    mul_ln190_90_fu_12335_p0 =  (sc_lv<23>) (mul_ln190_90_fu_12335_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_90_fu_12335_p00() {
    mul_ln190_90_fu_12335_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_90_fu_12335_p1() {
    mul_ln190_90_fu_12335_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_90_fu_12335_p2() {
    mul_ln190_90_fu_12335_p2 = (!mul_ln190_90_fu_12335_p0.read().is_01() || !mul_ln190_90_fu_12335_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_90_fu_12335_p0.read()) * sc_bigint<32>(mul_ln190_90_fu_12335_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_91_fu_12354_p0() {
    mul_ln190_91_fu_12354_p0 =  (sc_lv<23>) (mul_ln190_91_fu_12354_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_91_fu_12354_p00() {
    mul_ln190_91_fu_12354_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_91_fu_12354_p1() {
    mul_ln190_91_fu_12354_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_91_fu_12354_p2() {
    mul_ln190_91_fu_12354_p2 = (!mul_ln190_91_fu_12354_p0.read().is_01() || !mul_ln190_91_fu_12354_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_91_fu_12354_p0.read()) * sc_bigint<32>(mul_ln190_91_fu_12354_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_92_fu_12429_p0() {
    mul_ln190_92_fu_12429_p0 =  (sc_lv<23>) (mul_ln190_92_fu_12429_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_92_fu_12429_p00() {
    mul_ln190_92_fu_12429_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_92_fu_12429_p1() {
    mul_ln190_92_fu_12429_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_92_fu_12429_p2() {
    mul_ln190_92_fu_12429_p2 = (!mul_ln190_92_fu_12429_p0.read().is_01() || !mul_ln190_92_fu_12429_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_92_fu_12429_p0.read()) * sc_bigint<32>(mul_ln190_92_fu_12429_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_93_fu_12448_p0() {
    mul_ln190_93_fu_12448_p0 =  (sc_lv<23>) (mul_ln190_93_fu_12448_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_93_fu_12448_p00() {
    mul_ln190_93_fu_12448_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_93_fu_12448_p1() {
    mul_ln190_93_fu_12448_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_93_fu_12448_p2() {
    mul_ln190_93_fu_12448_p2 = (!mul_ln190_93_fu_12448_p0.read().is_01() || !mul_ln190_93_fu_12448_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_93_fu_12448_p0.read()) * sc_bigint<32>(mul_ln190_93_fu_12448_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_94_fu_12523_p0() {
    mul_ln190_94_fu_12523_p0 =  (sc_lv<23>) (mul_ln190_94_fu_12523_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_94_fu_12523_p00() {
    mul_ln190_94_fu_12523_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_94_fu_12523_p1() {
    mul_ln190_94_fu_12523_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_94_fu_12523_p2() {
    mul_ln190_94_fu_12523_p2 = (!mul_ln190_94_fu_12523_p0.read().is_01() || !mul_ln190_94_fu_12523_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_94_fu_12523_p0.read()) * sc_bigint<32>(mul_ln190_94_fu_12523_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_95_fu_12542_p0() {
    mul_ln190_95_fu_12542_p0 =  (sc_lv<23>) (mul_ln190_95_fu_12542_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_95_fu_12542_p00() {
    mul_ln190_95_fu_12542_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_95_fu_12542_p1() {
    mul_ln190_95_fu_12542_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_95_fu_12542_p2() {
    mul_ln190_95_fu_12542_p2 = (!mul_ln190_95_fu_12542_p0.read().is_01() || !mul_ln190_95_fu_12542_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_95_fu_12542_p0.read()) * sc_bigint<32>(mul_ln190_95_fu_12542_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_96_fu_12617_p0() {
    mul_ln190_96_fu_12617_p0 =  (sc_lv<23>) (mul_ln190_96_fu_12617_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_96_fu_12617_p00() {
    mul_ln190_96_fu_12617_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_96_fu_12617_p1() {
    mul_ln190_96_fu_12617_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_96_fu_12617_p2() {
    mul_ln190_96_fu_12617_p2 = (!mul_ln190_96_fu_12617_p0.read().is_01() || !mul_ln190_96_fu_12617_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_96_fu_12617_p0.read()) * sc_bigint<32>(mul_ln190_96_fu_12617_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_97_fu_12636_p0() {
    mul_ln190_97_fu_12636_p0 =  (sc_lv<23>) (mul_ln190_97_fu_12636_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_97_fu_12636_p00() {
    mul_ln190_97_fu_12636_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_97_fu_12636_p1() {
    mul_ln190_97_fu_12636_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_97_fu_12636_p2() {
    mul_ln190_97_fu_12636_p2 = (!mul_ln190_97_fu_12636_p0.read().is_01() || !mul_ln190_97_fu_12636_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_97_fu_12636_p0.read()) * sc_bigint<32>(mul_ln190_97_fu_12636_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_98_fu_12711_p0() {
    mul_ln190_98_fu_12711_p0 =  (sc_lv<23>) (mul_ln190_98_fu_12711_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_98_fu_12711_p00() {
    mul_ln190_98_fu_12711_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_98_fu_12711_p1() {
    mul_ln190_98_fu_12711_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_98_fu_12711_p2() {
    mul_ln190_98_fu_12711_p2 = (!mul_ln190_98_fu_12711_p0.read().is_01() || !mul_ln190_98_fu_12711_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_98_fu_12711_p0.read()) * sc_bigint<32>(mul_ln190_98_fu_12711_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_99_fu_12730_p0() {
    mul_ln190_99_fu_12730_p0 =  (sc_lv<23>) (mul_ln190_99_fu_12730_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_99_fu_12730_p00() {
    mul_ln190_99_fu_12730_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_99_fu_12730_p1() {
    mul_ln190_99_fu_12730_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_99_fu_12730_p2() {
    mul_ln190_99_fu_12730_p2 = (!mul_ln190_99_fu_12730_p0.read().is_01() || !mul_ln190_99_fu_12730_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_99_fu_12730_p0.read()) * sc_bigint<32>(mul_ln190_99_fu_12730_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_9_fu_8500_p0() {
    mul_ln190_9_fu_8500_p0 =  (sc_lv<23>) (mul_ln190_9_fu_8500_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_9_fu_8500_p00() {
    mul_ln190_9_fu_8500_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_9_fu_8500_p1() {
    mul_ln190_9_fu_8500_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_9_fu_8500_p2() {
    mul_ln190_9_fu_8500_p2 = (!mul_ln190_9_fu_8500_p0.read().is_01() || !mul_ln190_9_fu_8500_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_9_fu_8500_p0.read()) * sc_bigint<32>(mul_ln190_9_fu_8500_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_fu_8105_p0() {
    mul_ln190_fu_8105_p0 =  (sc_lv<23>) (mul_ln190_fu_8105_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_fu_8105_p00() {
    mul_ln190_fu_8105_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln190_fu_8105_p1() {
    mul_ln190_fu_8105_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln190_fu_8105_p2() {
    mul_ln190_fu_8105_p2 = (!mul_ln190_fu_8105_p0.read().is_01() || !mul_ln190_fu_8105_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln190_fu_8105_p0.read()) * sc_bigint<32>(mul_ln190_fu_8105_p1.read());
}

void pqcrystals_dilithium_14::thread_or_ln190_1000_fu_19175_p2() {
    or_ln190_1000_fu_19175_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_ED);
}

void pqcrystals_dilithium_14::thread_or_ln190_1001_fu_19255_p2() {
    or_ln190_1001_fu_19255_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_EE);
}

void pqcrystals_dilithium_14::thread_or_ln190_1002_fu_19269_p2() {
    or_ln190_1002_fu_19269_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_EF);
}

void pqcrystals_dilithium_14::thread_or_ln190_1003_fu_19349_p2() {
    or_ln190_1003_fu_19349_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F0);
}

void pqcrystals_dilithium_14::thread_or_ln190_1004_fu_19363_p2() {
    or_ln190_1004_fu_19363_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F1);
}

void pqcrystals_dilithium_14::thread_or_ln190_1005_fu_19443_p2() {
    or_ln190_1005_fu_19443_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F2);
}

void pqcrystals_dilithium_14::thread_or_ln190_1006_fu_19457_p2() {
    or_ln190_1006_fu_19457_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F3);
}

void pqcrystals_dilithium_14::thread_or_ln190_1007_fu_19537_p2() {
    or_ln190_1007_fu_19537_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F4);
}

void pqcrystals_dilithium_14::thread_or_ln190_1008_fu_19551_p2() {
    or_ln190_1008_fu_19551_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F5);
}

void pqcrystals_dilithium_14::thread_or_ln190_1009_fu_19631_p2() {
    or_ln190_1009_fu_19631_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F6);
}

void pqcrystals_dilithium_14::thread_or_ln190_1010_fu_19645_p2() {
    or_ln190_1010_fu_19645_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F7);
}

void pqcrystals_dilithium_14::thread_or_ln190_1011_fu_19725_p2() {
    or_ln190_1011_fu_19725_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F8);
}

void pqcrystals_dilithium_14::thread_or_ln190_1012_fu_19739_p2() {
    or_ln190_1012_fu_19739_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F9);
}

void pqcrystals_dilithium_14::thread_or_ln190_1013_fu_19819_p2() {
    or_ln190_1013_fu_19819_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_FA);
}

void pqcrystals_dilithium_14::thread_or_ln190_1014_fu_19833_p2() {
    or_ln190_1014_fu_19833_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_FB);
}

void pqcrystals_dilithium_14::thread_or_ln190_1015_fu_19913_p2() {
    or_ln190_1015_fu_19913_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_FC);
}

void pqcrystals_dilithium_14::thread_or_ln190_1016_fu_19927_p2() {
    or_ln190_1016_fu_19927_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_FD);
}

void pqcrystals_dilithium_14::thread_or_ln190_1017_fu_19979_p2() {
    or_ln190_1017_fu_19979_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_FE);
}

void pqcrystals_dilithium_14::thread_or_ln190_1018_fu_19993_p2() {
    or_ln190_1018_fu_19993_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_FF);
}

void pqcrystals_dilithium_14::thread_or_ln190_510_fu_8041_p2() {
    or_ln190_510_fu_8041_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2);
}

void pqcrystals_dilithium_14::thread_or_ln190_511_fu_8055_p2() {
    or_ln190_511_fu_8055_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3);
}

void pqcrystals_dilithium_14::thread_or_ln190_512_fu_8135_p2() {
    or_ln190_512_fu_8135_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4);
}

void pqcrystals_dilithium_14::thread_or_ln190_513_fu_8149_p2() {
    or_ln190_513_fu_8149_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5);
}

void pqcrystals_dilithium_14::thread_or_ln190_514_fu_8229_p2() {
    or_ln190_514_fu_8229_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6);
}

void pqcrystals_dilithium_14::thread_or_ln190_515_fu_8243_p2() {
    or_ln190_515_fu_8243_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7);
}

void pqcrystals_dilithium_14::thread_or_ln190_516_fu_8323_p2() {
    or_ln190_516_fu_8323_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8);
}

void pqcrystals_dilithium_14::thread_or_ln190_517_fu_8337_p2() {
    or_ln190_517_fu_8337_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9);
}

void pqcrystals_dilithium_14::thread_or_ln190_518_fu_8417_p2() {
    or_ln190_518_fu_8417_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A);
}

void pqcrystals_dilithium_14::thread_or_ln190_519_fu_8431_p2() {
    or_ln190_519_fu_8431_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B);
}

void pqcrystals_dilithium_14::thread_or_ln190_520_fu_8511_p2() {
    or_ln190_520_fu_8511_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C);
}

void pqcrystals_dilithium_14::thread_or_ln190_521_fu_8525_p2() {
    or_ln190_521_fu_8525_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D);
}

void pqcrystals_dilithium_14::thread_or_ln190_522_fu_8605_p2() {
    or_ln190_522_fu_8605_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E);
}

void pqcrystals_dilithium_14::thread_or_ln190_523_fu_8619_p2() {
    or_ln190_523_fu_8619_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F);
}

void pqcrystals_dilithium_14::thread_or_ln190_524_fu_8699_p2() {
    or_ln190_524_fu_8699_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_10);
}

void pqcrystals_dilithium_14::thread_or_ln190_525_fu_8713_p2() {
    or_ln190_525_fu_8713_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_11);
}

void pqcrystals_dilithium_14::thread_or_ln190_526_fu_8793_p2() {
    or_ln190_526_fu_8793_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_12);
}

void pqcrystals_dilithium_14::thread_or_ln190_527_fu_8807_p2() {
    or_ln190_527_fu_8807_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_13);
}

void pqcrystals_dilithium_14::thread_or_ln190_528_fu_8887_p2() {
    or_ln190_528_fu_8887_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_14);
}

void pqcrystals_dilithium_14::thread_or_ln190_529_fu_8901_p2() {
    or_ln190_529_fu_8901_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_15);
}

void pqcrystals_dilithium_14::thread_or_ln190_530_fu_8981_p2() {
    or_ln190_530_fu_8981_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_16);
}

void pqcrystals_dilithium_14::thread_or_ln190_531_fu_8995_p2() {
    or_ln190_531_fu_8995_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_17);
}

void pqcrystals_dilithium_14::thread_or_ln190_532_fu_9075_p2() {
    or_ln190_532_fu_9075_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_18);
}

void pqcrystals_dilithium_14::thread_or_ln190_533_fu_9089_p2() {
    or_ln190_533_fu_9089_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_19);
}

void pqcrystals_dilithium_14::thread_or_ln190_534_fu_9169_p2() {
    or_ln190_534_fu_9169_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_1A);
}

void pqcrystals_dilithium_14::thread_or_ln190_535_fu_9183_p2() {
    or_ln190_535_fu_9183_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_1B);
}

void pqcrystals_dilithium_14::thread_or_ln190_536_fu_9263_p2() {
    or_ln190_536_fu_9263_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_1C);
}

void pqcrystals_dilithium_14::thread_or_ln190_537_fu_9277_p2() {
    or_ln190_537_fu_9277_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_1D);
}

void pqcrystals_dilithium_14::thread_or_ln190_538_fu_9357_p2() {
    or_ln190_538_fu_9357_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_1E);
}

void pqcrystals_dilithium_14::thread_or_ln190_539_fu_9371_p2() {
    or_ln190_539_fu_9371_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_1F);
}

void pqcrystals_dilithium_14::thread_or_ln190_540_fu_9451_p2() {
    or_ln190_540_fu_9451_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_20);
}

void pqcrystals_dilithium_14::thread_or_ln190_541_fu_9465_p2() {
    or_ln190_541_fu_9465_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_21);
}

void pqcrystals_dilithium_14::thread_or_ln190_542_fu_9545_p2() {
    or_ln190_542_fu_9545_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_22);
}

void pqcrystals_dilithium_14::thread_or_ln190_543_fu_9559_p2() {
    or_ln190_543_fu_9559_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_23);
}

void pqcrystals_dilithium_14::thread_or_ln190_544_fu_9639_p2() {
    or_ln190_544_fu_9639_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_24);
}

void pqcrystals_dilithium_14::thread_or_ln190_545_fu_9653_p2() {
    or_ln190_545_fu_9653_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_25);
}

void pqcrystals_dilithium_14::thread_or_ln190_546_fu_9733_p2() {
    or_ln190_546_fu_9733_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_26);
}

void pqcrystals_dilithium_14::thread_or_ln190_547_fu_9747_p2() {
    or_ln190_547_fu_9747_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_27);
}

void pqcrystals_dilithium_14::thread_or_ln190_548_fu_9827_p2() {
    or_ln190_548_fu_9827_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_28);
}

void pqcrystals_dilithium_14::thread_or_ln190_549_fu_9841_p2() {
    or_ln190_549_fu_9841_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_29);
}

void pqcrystals_dilithium_14::thread_or_ln190_550_fu_9921_p2() {
    or_ln190_550_fu_9921_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2A);
}

void pqcrystals_dilithium_14::thread_or_ln190_551_fu_9935_p2() {
    or_ln190_551_fu_9935_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2B);
}

void pqcrystals_dilithium_14::thread_or_ln190_552_fu_10015_p2() {
    or_ln190_552_fu_10015_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2C);
}

void pqcrystals_dilithium_14::thread_or_ln190_553_fu_10029_p2() {
    or_ln190_553_fu_10029_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2D);
}

void pqcrystals_dilithium_14::thread_or_ln190_554_fu_10109_p2() {
    or_ln190_554_fu_10109_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2E);
}

void pqcrystals_dilithium_14::thread_or_ln190_555_fu_10123_p2() {
    or_ln190_555_fu_10123_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_2F);
}

void pqcrystals_dilithium_14::thread_or_ln190_556_fu_10203_p2() {
    or_ln190_556_fu_10203_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_30);
}

void pqcrystals_dilithium_14::thread_or_ln190_557_fu_10217_p2() {
    or_ln190_557_fu_10217_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_31);
}

void pqcrystals_dilithium_14::thread_or_ln190_558_fu_10297_p2() {
    or_ln190_558_fu_10297_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_32);
}

void pqcrystals_dilithium_14::thread_or_ln190_559_fu_10311_p2() {
    or_ln190_559_fu_10311_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_33);
}

void pqcrystals_dilithium_14::thread_or_ln190_560_fu_10391_p2() {
    or_ln190_560_fu_10391_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_34);
}

void pqcrystals_dilithium_14::thread_or_ln190_561_fu_10405_p2() {
    or_ln190_561_fu_10405_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_35);
}

void pqcrystals_dilithium_14::thread_or_ln190_562_fu_10485_p2() {
    or_ln190_562_fu_10485_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_36);
}

void pqcrystals_dilithium_14::thread_or_ln190_563_fu_10499_p2() {
    or_ln190_563_fu_10499_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_37);
}

void pqcrystals_dilithium_14::thread_or_ln190_564_fu_10579_p2() {
    or_ln190_564_fu_10579_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_38);
}

void pqcrystals_dilithium_14::thread_or_ln190_565_fu_10593_p2() {
    or_ln190_565_fu_10593_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_39);
}

void pqcrystals_dilithium_14::thread_or_ln190_566_fu_10673_p2() {
    or_ln190_566_fu_10673_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3A);
}

void pqcrystals_dilithium_14::thread_or_ln190_567_fu_10687_p2() {
    or_ln190_567_fu_10687_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3B);
}

void pqcrystals_dilithium_14::thread_or_ln190_568_fu_10767_p2() {
    or_ln190_568_fu_10767_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3C);
}

void pqcrystals_dilithium_14::thread_or_ln190_569_fu_10781_p2() {
    or_ln190_569_fu_10781_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3D);
}

void pqcrystals_dilithium_14::thread_or_ln190_570_fu_10861_p2() {
    or_ln190_570_fu_10861_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3E);
}

void pqcrystals_dilithium_14::thread_or_ln190_571_fu_10875_p2() {
    or_ln190_571_fu_10875_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_3F);
}

void pqcrystals_dilithium_14::thread_or_ln190_572_fu_10955_p2() {
    or_ln190_572_fu_10955_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_40);
}

void pqcrystals_dilithium_14::thread_or_ln190_573_fu_10969_p2() {
    or_ln190_573_fu_10969_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_41);
}

void pqcrystals_dilithium_14::thread_or_ln190_574_fu_11049_p2() {
    or_ln190_574_fu_11049_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_42);
}

void pqcrystals_dilithium_14::thread_or_ln190_575_fu_11063_p2() {
    or_ln190_575_fu_11063_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_43);
}

void pqcrystals_dilithium_14::thread_or_ln190_576_fu_11143_p2() {
    or_ln190_576_fu_11143_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_44);
}

void pqcrystals_dilithium_14::thread_or_ln190_577_fu_11157_p2() {
    or_ln190_577_fu_11157_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_45);
}

void pqcrystals_dilithium_14::thread_or_ln190_578_fu_11237_p2() {
    or_ln190_578_fu_11237_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_46);
}

void pqcrystals_dilithium_14::thread_or_ln190_579_fu_11251_p2() {
    or_ln190_579_fu_11251_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_47);
}

void pqcrystals_dilithium_14::thread_or_ln190_580_fu_11331_p2() {
    or_ln190_580_fu_11331_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_48);
}

void pqcrystals_dilithium_14::thread_or_ln190_581_fu_11345_p2() {
    or_ln190_581_fu_11345_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_49);
}

void pqcrystals_dilithium_14::thread_or_ln190_582_fu_11425_p2() {
    or_ln190_582_fu_11425_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4A);
}

void pqcrystals_dilithium_14::thread_or_ln190_583_fu_11439_p2() {
    or_ln190_583_fu_11439_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4B);
}

void pqcrystals_dilithium_14::thread_or_ln190_584_fu_11519_p2() {
    or_ln190_584_fu_11519_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4C);
}

void pqcrystals_dilithium_14::thread_or_ln190_585_fu_11533_p2() {
    or_ln190_585_fu_11533_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4D);
}

void pqcrystals_dilithium_14::thread_or_ln190_586_fu_11613_p2() {
    or_ln190_586_fu_11613_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4E);
}

void pqcrystals_dilithium_14::thread_or_ln190_587_fu_11627_p2() {
    or_ln190_587_fu_11627_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_4F);
}

void pqcrystals_dilithium_14::thread_or_ln190_588_fu_11707_p2() {
    or_ln190_588_fu_11707_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_50);
}

void pqcrystals_dilithium_14::thread_or_ln190_589_fu_11721_p2() {
    or_ln190_589_fu_11721_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_51);
}

void pqcrystals_dilithium_14::thread_or_ln190_590_fu_11801_p2() {
    or_ln190_590_fu_11801_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_52);
}

void pqcrystals_dilithium_14::thread_or_ln190_591_fu_11815_p2() {
    or_ln190_591_fu_11815_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_53);
}

void pqcrystals_dilithium_14::thread_or_ln190_592_fu_11895_p2() {
    or_ln190_592_fu_11895_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_54);
}

void pqcrystals_dilithium_14::thread_or_ln190_593_fu_11909_p2() {
    or_ln190_593_fu_11909_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_55);
}

void pqcrystals_dilithium_14::thread_or_ln190_594_fu_11989_p2() {
    or_ln190_594_fu_11989_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_56);
}

void pqcrystals_dilithium_14::thread_or_ln190_595_fu_12003_p2() {
    or_ln190_595_fu_12003_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_57);
}

void pqcrystals_dilithium_14::thread_or_ln190_596_fu_12083_p2() {
    or_ln190_596_fu_12083_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_58);
}

void pqcrystals_dilithium_14::thread_or_ln190_597_fu_12097_p2() {
    or_ln190_597_fu_12097_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_59);
}

void pqcrystals_dilithium_14::thread_or_ln190_598_fu_12177_p2() {
    or_ln190_598_fu_12177_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5A);
}

void pqcrystals_dilithium_14::thread_or_ln190_599_fu_12191_p2() {
    or_ln190_599_fu_12191_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5B);
}

void pqcrystals_dilithium_14::thread_or_ln190_600_fu_12271_p2() {
    or_ln190_600_fu_12271_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5C);
}

void pqcrystals_dilithium_14::thread_or_ln190_601_fu_12285_p2() {
    or_ln190_601_fu_12285_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5D);
}

void pqcrystals_dilithium_14::thread_or_ln190_602_fu_12365_p2() {
    or_ln190_602_fu_12365_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5E);
}

void pqcrystals_dilithium_14::thread_or_ln190_603_fu_12379_p2() {
    or_ln190_603_fu_12379_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_5F);
}

void pqcrystals_dilithium_14::thread_or_ln190_604_fu_12459_p2() {
    or_ln190_604_fu_12459_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_60);
}

void pqcrystals_dilithium_14::thread_or_ln190_605_fu_12473_p2() {
    or_ln190_605_fu_12473_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_61);
}

void pqcrystals_dilithium_14::thread_or_ln190_606_fu_12553_p2() {
    or_ln190_606_fu_12553_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_62);
}

void pqcrystals_dilithium_14::thread_or_ln190_607_fu_12567_p2() {
    or_ln190_607_fu_12567_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_63);
}

void pqcrystals_dilithium_14::thread_or_ln190_608_fu_12647_p2() {
    or_ln190_608_fu_12647_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_64);
}

void pqcrystals_dilithium_14::thread_or_ln190_609_fu_12661_p2() {
    or_ln190_609_fu_12661_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_65);
}

void pqcrystals_dilithium_14::thread_or_ln190_610_fu_12741_p2() {
    or_ln190_610_fu_12741_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_66);
}

void pqcrystals_dilithium_14::thread_or_ln190_611_fu_12755_p2() {
    or_ln190_611_fu_12755_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_67);
}

void pqcrystals_dilithium_14::thread_or_ln190_612_fu_12835_p2() {
    or_ln190_612_fu_12835_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_68);
}

void pqcrystals_dilithium_14::thread_or_ln190_613_fu_12849_p2() {
    or_ln190_613_fu_12849_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_69);
}

void pqcrystals_dilithium_14::thread_or_ln190_614_fu_12929_p2() {
    or_ln190_614_fu_12929_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6A);
}

void pqcrystals_dilithium_14::thread_or_ln190_615_fu_12943_p2() {
    or_ln190_615_fu_12943_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6B);
}

void pqcrystals_dilithium_14::thread_or_ln190_616_fu_13023_p2() {
    or_ln190_616_fu_13023_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6C);
}

void pqcrystals_dilithium_14::thread_or_ln190_617_fu_13037_p2() {
    or_ln190_617_fu_13037_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6D);
}

void pqcrystals_dilithium_14::thread_or_ln190_618_fu_13117_p2() {
    or_ln190_618_fu_13117_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6E);
}

void pqcrystals_dilithium_14::thread_or_ln190_619_fu_13131_p2() {
    or_ln190_619_fu_13131_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_6F);
}

void pqcrystals_dilithium_14::thread_or_ln190_620_fu_13211_p2() {
    or_ln190_620_fu_13211_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_70);
}

void pqcrystals_dilithium_14::thread_or_ln190_621_fu_13225_p2() {
    or_ln190_621_fu_13225_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_71);
}

void pqcrystals_dilithium_14::thread_or_ln190_622_fu_13305_p2() {
    or_ln190_622_fu_13305_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_72);
}

void pqcrystals_dilithium_14::thread_or_ln190_623_fu_13319_p2() {
    or_ln190_623_fu_13319_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_73);
}

void pqcrystals_dilithium_14::thread_or_ln190_624_fu_13399_p2() {
    or_ln190_624_fu_13399_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_74);
}

void pqcrystals_dilithium_14::thread_or_ln190_625_fu_13413_p2() {
    or_ln190_625_fu_13413_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_75);
}

void pqcrystals_dilithium_14::thread_or_ln190_626_fu_13493_p2() {
    or_ln190_626_fu_13493_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_76);
}

void pqcrystals_dilithium_14::thread_or_ln190_627_fu_13507_p2() {
    or_ln190_627_fu_13507_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_77);
}

void pqcrystals_dilithium_14::thread_or_ln190_628_fu_13587_p2() {
    or_ln190_628_fu_13587_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_78);
}

void pqcrystals_dilithium_14::thread_or_ln190_629_fu_13601_p2() {
    or_ln190_629_fu_13601_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_79);
}

void pqcrystals_dilithium_14::thread_or_ln190_630_fu_13681_p2() {
    or_ln190_630_fu_13681_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7A);
}

void pqcrystals_dilithium_14::thread_or_ln190_631_fu_13695_p2() {
    or_ln190_631_fu_13695_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7B);
}

void pqcrystals_dilithium_14::thread_or_ln190_632_fu_13775_p2() {
    or_ln190_632_fu_13775_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7C);
}

void pqcrystals_dilithium_14::thread_or_ln190_633_fu_13789_p2() {
    or_ln190_633_fu_13789_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7D);
}

void pqcrystals_dilithium_14::thread_or_ln190_634_fu_13869_p2() {
    or_ln190_634_fu_13869_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7E);
}

void pqcrystals_dilithium_14::thread_or_ln190_635_fu_13883_p2() {
    or_ln190_635_fu_13883_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_7F);
}

void pqcrystals_dilithium_14::thread_or_ln190_636_fu_13963_p2() {
    or_ln190_636_fu_13963_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_80);
}

void pqcrystals_dilithium_14::thread_or_ln190_637_fu_13977_p2() {
    or_ln190_637_fu_13977_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_81);
}

void pqcrystals_dilithium_14::thread_or_ln190_638_fu_14057_p2() {
    or_ln190_638_fu_14057_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_82);
}

void pqcrystals_dilithium_14::thread_or_ln190_639_fu_14071_p2() {
    or_ln190_639_fu_14071_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_83);
}

void pqcrystals_dilithium_14::thread_or_ln190_640_fu_14151_p2() {
    or_ln190_640_fu_14151_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_84);
}

void pqcrystals_dilithium_14::thread_or_ln190_641_fu_14165_p2() {
    or_ln190_641_fu_14165_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_85);
}

void pqcrystals_dilithium_14::thread_or_ln190_642_fu_14245_p2() {
    or_ln190_642_fu_14245_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_86);
}

void pqcrystals_dilithium_14::thread_or_ln190_643_fu_14259_p2() {
    or_ln190_643_fu_14259_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_87);
}

void pqcrystals_dilithium_14::thread_or_ln190_644_fu_14339_p2() {
    or_ln190_644_fu_14339_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_88);
}

void pqcrystals_dilithium_14::thread_or_ln190_645_fu_14353_p2() {
    or_ln190_645_fu_14353_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_89);
}

void pqcrystals_dilithium_14::thread_or_ln190_646_fu_14433_p2() {
    or_ln190_646_fu_14433_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8A);
}

void pqcrystals_dilithium_14::thread_or_ln190_647_fu_14447_p2() {
    or_ln190_647_fu_14447_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8B);
}

void pqcrystals_dilithium_14::thread_or_ln190_648_fu_14527_p2() {
    or_ln190_648_fu_14527_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8C);
}

void pqcrystals_dilithium_14::thread_or_ln190_649_fu_14541_p2() {
    or_ln190_649_fu_14541_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8D);
}

void pqcrystals_dilithium_14::thread_or_ln190_650_fu_14621_p2() {
    or_ln190_650_fu_14621_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8E);
}

void pqcrystals_dilithium_14::thread_or_ln190_651_fu_14635_p2() {
    or_ln190_651_fu_14635_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_8F);
}

void pqcrystals_dilithium_14::thread_or_ln190_652_fu_14715_p2() {
    or_ln190_652_fu_14715_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_90);
}

void pqcrystals_dilithium_14::thread_or_ln190_653_fu_14729_p2() {
    or_ln190_653_fu_14729_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_91);
}

void pqcrystals_dilithium_14::thread_or_ln190_654_fu_14809_p2() {
    or_ln190_654_fu_14809_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_92);
}

void pqcrystals_dilithium_14::thread_or_ln190_655_fu_14823_p2() {
    or_ln190_655_fu_14823_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_93);
}

void pqcrystals_dilithium_14::thread_or_ln190_656_fu_14903_p2() {
    or_ln190_656_fu_14903_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_94);
}

void pqcrystals_dilithium_14::thread_or_ln190_657_fu_14917_p2() {
    or_ln190_657_fu_14917_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_95);
}

void pqcrystals_dilithium_14::thread_or_ln190_658_fu_14997_p2() {
    or_ln190_658_fu_14997_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_96);
}

void pqcrystals_dilithium_14::thread_or_ln190_659_fu_15011_p2() {
    or_ln190_659_fu_15011_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_97);
}

void pqcrystals_dilithium_14::thread_or_ln190_660_fu_15091_p2() {
    or_ln190_660_fu_15091_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_98);
}

void pqcrystals_dilithium_14::thread_or_ln190_661_fu_15105_p2() {
    or_ln190_661_fu_15105_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_99);
}

void pqcrystals_dilithium_14::thread_or_ln190_662_fu_15185_p2() {
    or_ln190_662_fu_15185_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9A);
}

void pqcrystals_dilithium_14::thread_or_ln190_663_fu_15199_p2() {
    or_ln190_663_fu_15199_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9B);
}

void pqcrystals_dilithium_14::thread_or_ln190_664_fu_15279_p2() {
    or_ln190_664_fu_15279_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9C);
}

void pqcrystals_dilithium_14::thread_or_ln190_665_fu_15293_p2() {
    or_ln190_665_fu_15293_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9D);
}

void pqcrystals_dilithium_14::thread_or_ln190_666_fu_15373_p2() {
    or_ln190_666_fu_15373_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9E);
}

void pqcrystals_dilithium_14::thread_or_ln190_667_fu_15387_p2() {
    or_ln190_667_fu_15387_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_9F);
}

void pqcrystals_dilithium_14::thread_or_ln190_668_fu_15467_p2() {
    or_ln190_668_fu_15467_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A0);
}

void pqcrystals_dilithium_14::thread_or_ln190_669_fu_15481_p2() {
    or_ln190_669_fu_15481_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A1);
}

void pqcrystals_dilithium_14::thread_or_ln190_670_fu_15561_p2() {
    or_ln190_670_fu_15561_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A2);
}

void pqcrystals_dilithium_14::thread_or_ln190_671_fu_15575_p2() {
    or_ln190_671_fu_15575_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A3);
}

void pqcrystals_dilithium_14::thread_or_ln190_672_fu_15655_p2() {
    or_ln190_672_fu_15655_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A4);
}

void pqcrystals_dilithium_14::thread_or_ln190_673_fu_15669_p2() {
    or_ln190_673_fu_15669_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A5);
}

void pqcrystals_dilithium_14::thread_or_ln190_674_fu_15749_p2() {
    or_ln190_674_fu_15749_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A6);
}

void pqcrystals_dilithium_14::thread_or_ln190_675_fu_15763_p2() {
    or_ln190_675_fu_15763_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A7);
}

void pqcrystals_dilithium_14::thread_or_ln190_676_fu_15843_p2() {
    or_ln190_676_fu_15843_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A8);
}

void pqcrystals_dilithium_14::thread_or_ln190_677_fu_15857_p2() {
    or_ln190_677_fu_15857_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_A9);
}

void pqcrystals_dilithium_14::thread_or_ln190_678_fu_15937_p2() {
    or_ln190_678_fu_15937_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_AA);
}

void pqcrystals_dilithium_14::thread_or_ln190_679_fu_15951_p2() {
    or_ln190_679_fu_15951_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_AB);
}

void pqcrystals_dilithium_14::thread_or_ln190_680_fu_16031_p2() {
    or_ln190_680_fu_16031_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_AC);
}

void pqcrystals_dilithium_14::thread_or_ln190_681_fu_16045_p2() {
    or_ln190_681_fu_16045_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_AD);
}

void pqcrystals_dilithium_14::thread_or_ln190_682_fu_16125_p2() {
    or_ln190_682_fu_16125_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_AE);
}

void pqcrystals_dilithium_14::thread_or_ln190_683_fu_16139_p2() {
    or_ln190_683_fu_16139_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_AF);
}

void pqcrystals_dilithium_14::thread_or_ln190_684_fu_16219_p2() {
    or_ln190_684_fu_16219_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B0);
}

void pqcrystals_dilithium_14::thread_or_ln190_685_fu_16233_p2() {
    or_ln190_685_fu_16233_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B1);
}

void pqcrystals_dilithium_14::thread_or_ln190_686_fu_16313_p2() {
    or_ln190_686_fu_16313_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B2);
}

void pqcrystals_dilithium_14::thread_or_ln190_687_fu_16327_p2() {
    or_ln190_687_fu_16327_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B3);
}

void pqcrystals_dilithium_14::thread_or_ln190_688_fu_16407_p2() {
    or_ln190_688_fu_16407_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B4);
}

void pqcrystals_dilithium_14::thread_or_ln190_689_fu_16421_p2() {
    or_ln190_689_fu_16421_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B5);
}

void pqcrystals_dilithium_14::thread_or_ln190_690_fu_16501_p2() {
    or_ln190_690_fu_16501_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B6);
}

void pqcrystals_dilithium_14::thread_or_ln190_691_fu_16515_p2() {
    or_ln190_691_fu_16515_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B7);
}

void pqcrystals_dilithium_14::thread_or_ln190_692_fu_16595_p2() {
    or_ln190_692_fu_16595_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B8);
}

void pqcrystals_dilithium_14::thread_or_ln190_693_fu_16609_p2() {
    or_ln190_693_fu_16609_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_B9);
}

void pqcrystals_dilithium_14::thread_or_ln190_694_fu_16689_p2() {
    or_ln190_694_fu_16689_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_BA);
}

void pqcrystals_dilithium_14::thread_or_ln190_695_fu_16703_p2() {
    or_ln190_695_fu_16703_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_BB);
}

void pqcrystals_dilithium_14::thread_or_ln190_696_fu_16783_p2() {
    or_ln190_696_fu_16783_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_BC);
}

void pqcrystals_dilithium_14::thread_or_ln190_697_fu_16797_p2() {
    or_ln190_697_fu_16797_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_BD);
}

void pqcrystals_dilithium_14::thread_or_ln190_698_fu_16877_p2() {
    or_ln190_698_fu_16877_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_BE);
}

void pqcrystals_dilithium_14::thread_or_ln190_699_fu_16891_p2() {
    or_ln190_699_fu_16891_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_BF);
}

void pqcrystals_dilithium_14::thread_or_ln190_700_fu_16971_p2() {
    or_ln190_700_fu_16971_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C0);
}

void pqcrystals_dilithium_14::thread_or_ln190_701_fu_16985_p2() {
    or_ln190_701_fu_16985_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C1);
}

void pqcrystals_dilithium_14::thread_or_ln190_702_fu_17065_p2() {
    or_ln190_702_fu_17065_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C2);
}

void pqcrystals_dilithium_14::thread_or_ln190_703_fu_17079_p2() {
    or_ln190_703_fu_17079_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C3);
}

void pqcrystals_dilithium_14::thread_or_ln190_704_fu_17159_p2() {
    or_ln190_704_fu_17159_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C4);
}

void pqcrystals_dilithium_14::thread_or_ln190_705_fu_17173_p2() {
    or_ln190_705_fu_17173_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C5);
}

void pqcrystals_dilithium_14::thread_or_ln190_706_fu_17253_p2() {
    or_ln190_706_fu_17253_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C6);
}

void pqcrystals_dilithium_14::thread_or_ln190_707_fu_17267_p2() {
    or_ln190_707_fu_17267_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C7);
}

void pqcrystals_dilithium_14::thread_or_ln190_708_fu_17347_p2() {
    or_ln190_708_fu_17347_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C8);
}

void pqcrystals_dilithium_14::thread_or_ln190_709_fu_17361_p2() {
    or_ln190_709_fu_17361_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_C9);
}

void pqcrystals_dilithium_14::thread_or_ln190_710_fu_17441_p2() {
    or_ln190_710_fu_17441_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_CA);
}

void pqcrystals_dilithium_14::thread_or_ln190_711_fu_17455_p2() {
    or_ln190_711_fu_17455_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_CB);
}

void pqcrystals_dilithium_14::thread_or_ln190_712_fu_17535_p2() {
    or_ln190_712_fu_17535_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_CC);
}

void pqcrystals_dilithium_14::thread_or_ln190_713_fu_17549_p2() {
    or_ln190_713_fu_17549_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_CD);
}

void pqcrystals_dilithium_14::thread_or_ln190_714_fu_17629_p2() {
    or_ln190_714_fu_17629_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_CE);
}

void pqcrystals_dilithium_14::thread_or_ln190_715_fu_17643_p2() {
    or_ln190_715_fu_17643_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_CF);
}

void pqcrystals_dilithium_14::thread_or_ln190_716_fu_17723_p2() {
    or_ln190_716_fu_17723_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D0);
}

void pqcrystals_dilithium_14::thread_or_ln190_717_fu_17737_p2() {
    or_ln190_717_fu_17737_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D1);
}

void pqcrystals_dilithium_14::thread_or_ln190_718_fu_17817_p2() {
    or_ln190_718_fu_17817_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D2);
}

void pqcrystals_dilithium_14::thread_or_ln190_719_fu_17831_p2() {
    or_ln190_719_fu_17831_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D3);
}

void pqcrystals_dilithium_14::thread_or_ln190_720_fu_17911_p2() {
    or_ln190_720_fu_17911_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D4);
}

void pqcrystals_dilithium_14::thread_or_ln190_721_fu_17925_p2() {
    or_ln190_721_fu_17925_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D5);
}

void pqcrystals_dilithium_14::thread_or_ln190_722_fu_18005_p2() {
    or_ln190_722_fu_18005_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D6);
}

void pqcrystals_dilithium_14::thread_or_ln190_723_fu_18019_p2() {
    or_ln190_723_fu_18019_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D7);
}

void pqcrystals_dilithium_14::thread_or_ln190_724_fu_18099_p2() {
    or_ln190_724_fu_18099_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D8);
}

void pqcrystals_dilithium_14::thread_or_ln190_725_fu_18113_p2() {
    or_ln190_725_fu_18113_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_D9);
}

void pqcrystals_dilithium_14::thread_or_ln190_726_fu_18193_p2() {
    or_ln190_726_fu_18193_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_DA);
}

void pqcrystals_dilithium_14::thread_or_ln190_727_fu_18207_p2() {
    or_ln190_727_fu_18207_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_DB);
}

void pqcrystals_dilithium_14::thread_or_ln190_728_fu_18287_p2() {
    or_ln190_728_fu_18287_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_DC);
}

void pqcrystals_dilithium_14::thread_or_ln190_729_fu_18301_p2() {
    or_ln190_729_fu_18301_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_DD);
}

void pqcrystals_dilithium_14::thread_or_ln190_730_fu_18381_p2() {
    or_ln190_730_fu_18381_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_DE);
}

void pqcrystals_dilithium_14::thread_or_ln190_731_fu_18395_p2() {
    or_ln190_731_fu_18395_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_DF);
}

void pqcrystals_dilithium_14::thread_or_ln190_732_fu_18475_p2() {
    or_ln190_732_fu_18475_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E0);
}

void pqcrystals_dilithium_14::thread_or_ln190_733_fu_18489_p2() {
    or_ln190_733_fu_18489_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E1);
}

void pqcrystals_dilithium_14::thread_or_ln190_734_fu_18569_p2() {
    or_ln190_734_fu_18569_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E2);
}

void pqcrystals_dilithium_14::thread_or_ln190_735_fu_18583_p2() {
    or_ln190_735_fu_18583_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E3);
}

void pqcrystals_dilithium_14::thread_or_ln190_736_fu_18663_p2() {
    or_ln190_736_fu_18663_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E4);
}

void pqcrystals_dilithium_14::thread_or_ln190_737_fu_18677_p2() {
    or_ln190_737_fu_18677_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E5);
}

void pqcrystals_dilithium_14::thread_or_ln190_738_fu_18757_p2() {
    or_ln190_738_fu_18757_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E6);
}

void pqcrystals_dilithium_14::thread_or_ln190_739_fu_18771_p2() {
    or_ln190_739_fu_18771_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E7);
}

void pqcrystals_dilithium_14::thread_or_ln190_740_fu_18851_p2() {
    or_ln190_740_fu_18851_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E8);
}

void pqcrystals_dilithium_14::thread_or_ln190_741_fu_18865_p2() {
    or_ln190_741_fu_18865_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_E9);
}

void pqcrystals_dilithium_14::thread_or_ln190_742_fu_18945_p2() {
    or_ln190_742_fu_18945_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_EA);
}

void pqcrystals_dilithium_14::thread_or_ln190_743_fu_18959_p2() {
    or_ln190_743_fu_18959_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_EB);
}

void pqcrystals_dilithium_14::thread_or_ln190_744_fu_19039_p2() {
    or_ln190_744_fu_19039_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_EC);
}

void pqcrystals_dilithium_14::thread_or_ln190_745_fu_19053_p2() {
    or_ln190_745_fu_19053_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_ED);
}

void pqcrystals_dilithium_14::thread_or_ln190_746_fu_19133_p2() {
    or_ln190_746_fu_19133_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_EE);
}

void pqcrystals_dilithium_14::thread_or_ln190_747_fu_19147_p2() {
    or_ln190_747_fu_19147_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_EF);
}

void pqcrystals_dilithium_14::thread_or_ln190_748_fu_19227_p2() {
    or_ln190_748_fu_19227_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F0);
}

void pqcrystals_dilithium_14::thread_or_ln190_749_fu_19241_p2() {
    or_ln190_749_fu_19241_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F1);
}

void pqcrystals_dilithium_14::thread_or_ln190_750_fu_19321_p2() {
    or_ln190_750_fu_19321_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F2);
}

void pqcrystals_dilithium_14::thread_or_ln190_751_fu_19335_p2() {
    or_ln190_751_fu_19335_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F3);
}

void pqcrystals_dilithium_14::thread_or_ln190_752_fu_19415_p2() {
    or_ln190_752_fu_19415_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F4);
}

void pqcrystals_dilithium_14::thread_or_ln190_753_fu_19429_p2() {
    or_ln190_753_fu_19429_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F5);
}

void pqcrystals_dilithium_14::thread_or_ln190_754_fu_19509_p2() {
    or_ln190_754_fu_19509_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F6);
}

void pqcrystals_dilithium_14::thread_or_ln190_755_fu_19523_p2() {
    or_ln190_755_fu_19523_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F7);
}

void pqcrystals_dilithium_14::thread_or_ln190_756_fu_19603_p2() {
    or_ln190_756_fu_19603_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F8);
}

void pqcrystals_dilithium_14::thread_or_ln190_757_fu_19617_p2() {
    or_ln190_757_fu_19617_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_F9);
}

void pqcrystals_dilithium_14::thread_or_ln190_758_fu_19697_p2() {
    or_ln190_758_fu_19697_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_FA);
}

void pqcrystals_dilithium_14::thread_or_ln190_759_fu_19711_p2() {
    or_ln190_759_fu_19711_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_FB);
}

void pqcrystals_dilithium_14::thread_or_ln190_760_fu_19791_p2() {
    or_ln190_760_fu_19791_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_FC);
}

void pqcrystals_dilithium_14::thread_or_ln190_761_fu_19805_p2() {
    or_ln190_761_fu_19805_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_FD);
}

void pqcrystals_dilithium_14::thread_or_ln190_762_fu_19885_p2() {
    or_ln190_762_fu_19885_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_FE);
}

void pqcrystals_dilithium_14::thread_or_ln190_763_fu_19899_p2() {
    or_ln190_763_fu_19899_p2 = (tmp_4690_reg_20055.read() | ap_const_lv14_FF);
}

void pqcrystals_dilithium_14::thread_or_ln190_764_fu_8082_p2() {
    or_ln190_764_fu_8082_p2 = (tmp_4946_fu_8069_p3.read() | ap_const_lv12_1);
}

void pqcrystals_dilithium_14::thread_or_ln190_765_fu_8163_p2() {
    or_ln190_765_fu_8163_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2);
}

void pqcrystals_dilithium_14::thread_or_ln190_766_fu_8177_p2() {
    or_ln190_766_fu_8177_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3);
}

void pqcrystals_dilithium_14::thread_or_ln190_767_fu_8257_p2() {
    or_ln190_767_fu_8257_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4);
}

void pqcrystals_dilithium_14::thread_or_ln190_768_fu_8271_p2() {
    or_ln190_768_fu_8271_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5);
}

void pqcrystals_dilithium_14::thread_or_ln190_769_fu_8351_p2() {
    or_ln190_769_fu_8351_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6);
}

void pqcrystals_dilithium_14::thread_or_ln190_770_fu_8365_p2() {
    or_ln190_770_fu_8365_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7);
}

void pqcrystals_dilithium_14::thread_or_ln190_771_fu_8445_p2() {
    or_ln190_771_fu_8445_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8);
}

void pqcrystals_dilithium_14::thread_or_ln190_772_fu_8459_p2() {
    or_ln190_772_fu_8459_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9);
}

void pqcrystals_dilithium_14::thread_or_ln190_773_fu_8539_p2() {
    or_ln190_773_fu_8539_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A);
}

void pqcrystals_dilithium_14::thread_or_ln190_774_fu_8553_p2() {
    or_ln190_774_fu_8553_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B);
}

void pqcrystals_dilithium_14::thread_or_ln190_775_fu_8633_p2() {
    or_ln190_775_fu_8633_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C);
}

void pqcrystals_dilithium_14::thread_or_ln190_776_fu_8647_p2() {
    or_ln190_776_fu_8647_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D);
}

void pqcrystals_dilithium_14::thread_or_ln190_777_fu_8727_p2() {
    or_ln190_777_fu_8727_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E);
}

void pqcrystals_dilithium_14::thread_or_ln190_778_fu_8741_p2() {
    or_ln190_778_fu_8741_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_F);
}

void pqcrystals_dilithium_14::thread_or_ln190_779_fu_8821_p2() {
    or_ln190_779_fu_8821_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_10);
}

void pqcrystals_dilithium_14::thread_or_ln190_780_fu_8835_p2() {
    or_ln190_780_fu_8835_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_11);
}

void pqcrystals_dilithium_14::thread_or_ln190_781_fu_8915_p2() {
    or_ln190_781_fu_8915_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_12);
}

void pqcrystals_dilithium_14::thread_or_ln190_782_fu_8929_p2() {
    or_ln190_782_fu_8929_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_13);
}

void pqcrystals_dilithium_14::thread_or_ln190_783_fu_9009_p2() {
    or_ln190_783_fu_9009_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_14);
}

void pqcrystals_dilithium_14::thread_or_ln190_784_fu_9023_p2() {
    or_ln190_784_fu_9023_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_15);
}

void pqcrystals_dilithium_14::thread_or_ln190_785_fu_9103_p2() {
    or_ln190_785_fu_9103_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_16);
}

void pqcrystals_dilithium_14::thread_or_ln190_786_fu_9117_p2() {
    or_ln190_786_fu_9117_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_17);
}

void pqcrystals_dilithium_14::thread_or_ln190_787_fu_9197_p2() {
    or_ln190_787_fu_9197_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_18);
}

void pqcrystals_dilithium_14::thread_or_ln190_788_fu_9211_p2() {
    or_ln190_788_fu_9211_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_19);
}

void pqcrystals_dilithium_14::thread_or_ln190_789_fu_9291_p2() {
    or_ln190_789_fu_9291_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_1A);
}

void pqcrystals_dilithium_14::thread_or_ln190_790_fu_9305_p2() {
    or_ln190_790_fu_9305_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_1B);
}

void pqcrystals_dilithium_14::thread_or_ln190_791_fu_9385_p2() {
    or_ln190_791_fu_9385_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_1C);
}

void pqcrystals_dilithium_14::thread_or_ln190_792_fu_9399_p2() {
    or_ln190_792_fu_9399_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_1D);
}

void pqcrystals_dilithium_14::thread_or_ln190_793_fu_9479_p2() {
    or_ln190_793_fu_9479_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_1E);
}

void pqcrystals_dilithium_14::thread_or_ln190_794_fu_9493_p2() {
    or_ln190_794_fu_9493_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_1F);
}

void pqcrystals_dilithium_14::thread_or_ln190_795_fu_9573_p2() {
    or_ln190_795_fu_9573_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_20);
}

void pqcrystals_dilithium_14::thread_or_ln190_796_fu_9587_p2() {
    or_ln190_796_fu_9587_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_21);
}

void pqcrystals_dilithium_14::thread_or_ln190_797_fu_9667_p2() {
    or_ln190_797_fu_9667_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_22);
}

void pqcrystals_dilithium_14::thread_or_ln190_798_fu_9681_p2() {
    or_ln190_798_fu_9681_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_23);
}

void pqcrystals_dilithium_14::thread_or_ln190_799_fu_9761_p2() {
    or_ln190_799_fu_9761_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_24);
}

void pqcrystals_dilithium_14::thread_or_ln190_800_fu_9775_p2() {
    or_ln190_800_fu_9775_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_25);
}

void pqcrystals_dilithium_14::thread_or_ln190_801_fu_9855_p2() {
    or_ln190_801_fu_9855_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_26);
}

void pqcrystals_dilithium_14::thread_or_ln190_802_fu_9869_p2() {
    or_ln190_802_fu_9869_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_27);
}

void pqcrystals_dilithium_14::thread_or_ln190_803_fu_9949_p2() {
    or_ln190_803_fu_9949_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_28);
}

void pqcrystals_dilithium_14::thread_or_ln190_804_fu_9963_p2() {
    or_ln190_804_fu_9963_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_29);
}

void pqcrystals_dilithium_14::thread_or_ln190_805_fu_10043_p2() {
    or_ln190_805_fu_10043_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2A);
}

void pqcrystals_dilithium_14::thread_or_ln190_806_fu_10057_p2() {
    or_ln190_806_fu_10057_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2B);
}

void pqcrystals_dilithium_14::thread_or_ln190_807_fu_10137_p2() {
    or_ln190_807_fu_10137_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2C);
}

void pqcrystals_dilithium_14::thread_or_ln190_808_fu_10151_p2() {
    or_ln190_808_fu_10151_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2D);
}

void pqcrystals_dilithium_14::thread_or_ln190_809_fu_10231_p2() {
    or_ln190_809_fu_10231_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2E);
}

void pqcrystals_dilithium_14::thread_or_ln190_810_fu_10245_p2() {
    or_ln190_810_fu_10245_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_2F);
}

void pqcrystals_dilithium_14::thread_or_ln190_811_fu_10325_p2() {
    or_ln190_811_fu_10325_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_30);
}

void pqcrystals_dilithium_14::thread_or_ln190_812_fu_10339_p2() {
    or_ln190_812_fu_10339_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_31);
}

void pqcrystals_dilithium_14::thread_or_ln190_813_fu_10419_p2() {
    or_ln190_813_fu_10419_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_32);
}

void pqcrystals_dilithium_14::thread_or_ln190_814_fu_10433_p2() {
    or_ln190_814_fu_10433_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_33);
}

void pqcrystals_dilithium_14::thread_or_ln190_815_fu_10513_p2() {
    or_ln190_815_fu_10513_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_34);
}

void pqcrystals_dilithium_14::thread_or_ln190_816_fu_10527_p2() {
    or_ln190_816_fu_10527_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_35);
}

void pqcrystals_dilithium_14::thread_or_ln190_817_fu_10607_p2() {
    or_ln190_817_fu_10607_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_36);
}

void pqcrystals_dilithium_14::thread_or_ln190_818_fu_10621_p2() {
    or_ln190_818_fu_10621_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_37);
}

void pqcrystals_dilithium_14::thread_or_ln190_819_fu_10701_p2() {
    or_ln190_819_fu_10701_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_38);
}

void pqcrystals_dilithium_14::thread_or_ln190_820_fu_10715_p2() {
    or_ln190_820_fu_10715_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_39);
}

void pqcrystals_dilithium_14::thread_or_ln190_821_fu_10795_p2() {
    or_ln190_821_fu_10795_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3A);
}

void pqcrystals_dilithium_14::thread_or_ln190_822_fu_10809_p2() {
    or_ln190_822_fu_10809_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3B);
}

void pqcrystals_dilithium_14::thread_or_ln190_823_fu_10889_p2() {
    or_ln190_823_fu_10889_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3C);
}

void pqcrystals_dilithium_14::thread_or_ln190_824_fu_10903_p2() {
    or_ln190_824_fu_10903_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3D);
}

void pqcrystals_dilithium_14::thread_or_ln190_825_fu_10983_p2() {
    or_ln190_825_fu_10983_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3E);
}

void pqcrystals_dilithium_14::thread_or_ln190_826_fu_10997_p2() {
    or_ln190_826_fu_10997_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_3F);
}

void pqcrystals_dilithium_14::thread_or_ln190_827_fu_11077_p2() {
    or_ln190_827_fu_11077_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_40);
}

void pqcrystals_dilithium_14::thread_or_ln190_828_fu_11091_p2() {
    or_ln190_828_fu_11091_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_41);
}

void pqcrystals_dilithium_14::thread_or_ln190_829_fu_11171_p2() {
    or_ln190_829_fu_11171_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_42);
}

void pqcrystals_dilithium_14::thread_or_ln190_830_fu_11185_p2() {
    or_ln190_830_fu_11185_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_43);
}

void pqcrystals_dilithium_14::thread_or_ln190_831_fu_11265_p2() {
    or_ln190_831_fu_11265_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_44);
}

void pqcrystals_dilithium_14::thread_or_ln190_832_fu_11279_p2() {
    or_ln190_832_fu_11279_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_45);
}

void pqcrystals_dilithium_14::thread_or_ln190_833_fu_11359_p2() {
    or_ln190_833_fu_11359_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_46);
}

void pqcrystals_dilithium_14::thread_or_ln190_834_fu_11373_p2() {
    or_ln190_834_fu_11373_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_47);
}

void pqcrystals_dilithium_14::thread_or_ln190_835_fu_11453_p2() {
    or_ln190_835_fu_11453_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_48);
}

void pqcrystals_dilithium_14::thread_or_ln190_836_fu_11467_p2() {
    or_ln190_836_fu_11467_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_49);
}

void pqcrystals_dilithium_14::thread_or_ln190_837_fu_11547_p2() {
    or_ln190_837_fu_11547_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4A);
}

void pqcrystals_dilithium_14::thread_or_ln190_838_fu_11561_p2() {
    or_ln190_838_fu_11561_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4B);
}

void pqcrystals_dilithium_14::thread_or_ln190_839_fu_11641_p2() {
    or_ln190_839_fu_11641_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4C);
}

void pqcrystals_dilithium_14::thread_or_ln190_840_fu_11655_p2() {
    or_ln190_840_fu_11655_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4D);
}

void pqcrystals_dilithium_14::thread_or_ln190_841_fu_11735_p2() {
    or_ln190_841_fu_11735_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4E);
}

void pqcrystals_dilithium_14::thread_or_ln190_842_fu_11749_p2() {
    or_ln190_842_fu_11749_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_4F);
}

void pqcrystals_dilithium_14::thread_or_ln190_843_fu_11829_p2() {
    or_ln190_843_fu_11829_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_50);
}

void pqcrystals_dilithium_14::thread_or_ln190_844_fu_11843_p2() {
    or_ln190_844_fu_11843_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_51);
}

void pqcrystals_dilithium_14::thread_or_ln190_845_fu_11923_p2() {
    or_ln190_845_fu_11923_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_52);
}

void pqcrystals_dilithium_14::thread_or_ln190_846_fu_11937_p2() {
    or_ln190_846_fu_11937_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_53);
}

void pqcrystals_dilithium_14::thread_or_ln190_847_fu_12017_p2() {
    or_ln190_847_fu_12017_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_54);
}

void pqcrystals_dilithium_14::thread_or_ln190_848_fu_12031_p2() {
    or_ln190_848_fu_12031_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_55);
}

void pqcrystals_dilithium_14::thread_or_ln190_849_fu_12111_p2() {
    or_ln190_849_fu_12111_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_56);
}

void pqcrystals_dilithium_14::thread_or_ln190_850_fu_12125_p2() {
    or_ln190_850_fu_12125_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_57);
}

void pqcrystals_dilithium_14::thread_or_ln190_851_fu_12205_p2() {
    or_ln190_851_fu_12205_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_58);
}

void pqcrystals_dilithium_14::thread_or_ln190_852_fu_12219_p2() {
    or_ln190_852_fu_12219_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_59);
}

void pqcrystals_dilithium_14::thread_or_ln190_853_fu_12299_p2() {
    or_ln190_853_fu_12299_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5A);
}

void pqcrystals_dilithium_14::thread_or_ln190_854_fu_12313_p2() {
    or_ln190_854_fu_12313_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5B);
}

void pqcrystals_dilithium_14::thread_or_ln190_855_fu_12393_p2() {
    or_ln190_855_fu_12393_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5C);
}

void pqcrystals_dilithium_14::thread_or_ln190_856_fu_12407_p2() {
    or_ln190_856_fu_12407_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5D);
}

void pqcrystals_dilithium_14::thread_or_ln190_857_fu_12487_p2() {
    or_ln190_857_fu_12487_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5E);
}

void pqcrystals_dilithium_14::thread_or_ln190_858_fu_12501_p2() {
    or_ln190_858_fu_12501_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_5F);
}

void pqcrystals_dilithium_14::thread_or_ln190_859_fu_12581_p2() {
    or_ln190_859_fu_12581_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_60);
}

void pqcrystals_dilithium_14::thread_or_ln190_860_fu_12595_p2() {
    or_ln190_860_fu_12595_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_61);
}

void pqcrystals_dilithium_14::thread_or_ln190_861_fu_12675_p2() {
    or_ln190_861_fu_12675_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_62);
}

void pqcrystals_dilithium_14::thread_or_ln190_862_fu_12689_p2() {
    or_ln190_862_fu_12689_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_63);
}

void pqcrystals_dilithium_14::thread_or_ln190_863_fu_12769_p2() {
    or_ln190_863_fu_12769_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_64);
}

void pqcrystals_dilithium_14::thread_or_ln190_864_fu_12783_p2() {
    or_ln190_864_fu_12783_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_65);
}

void pqcrystals_dilithium_14::thread_or_ln190_865_fu_12863_p2() {
    or_ln190_865_fu_12863_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_66);
}

void pqcrystals_dilithium_14::thread_or_ln190_866_fu_12877_p2() {
    or_ln190_866_fu_12877_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_67);
}

void pqcrystals_dilithium_14::thread_or_ln190_867_fu_12957_p2() {
    or_ln190_867_fu_12957_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_68);
}

void pqcrystals_dilithium_14::thread_or_ln190_868_fu_12971_p2() {
    or_ln190_868_fu_12971_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_69);
}

void pqcrystals_dilithium_14::thread_or_ln190_869_fu_13051_p2() {
    or_ln190_869_fu_13051_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6A);
}

void pqcrystals_dilithium_14::thread_or_ln190_870_fu_13065_p2() {
    or_ln190_870_fu_13065_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6B);
}

void pqcrystals_dilithium_14::thread_or_ln190_871_fu_13145_p2() {
    or_ln190_871_fu_13145_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6C);
}

void pqcrystals_dilithium_14::thread_or_ln190_872_fu_13159_p2() {
    or_ln190_872_fu_13159_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6D);
}

void pqcrystals_dilithium_14::thread_or_ln190_873_fu_13239_p2() {
    or_ln190_873_fu_13239_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6E);
}

void pqcrystals_dilithium_14::thread_or_ln190_874_fu_13253_p2() {
    or_ln190_874_fu_13253_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_6F);
}

void pqcrystals_dilithium_14::thread_or_ln190_875_fu_13333_p2() {
    or_ln190_875_fu_13333_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_70);
}

void pqcrystals_dilithium_14::thread_or_ln190_876_fu_13347_p2() {
    or_ln190_876_fu_13347_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_71);
}

void pqcrystals_dilithium_14::thread_or_ln190_877_fu_13427_p2() {
    or_ln190_877_fu_13427_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_72);
}

void pqcrystals_dilithium_14::thread_or_ln190_878_fu_13441_p2() {
    or_ln190_878_fu_13441_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_73);
}

void pqcrystals_dilithium_14::thread_or_ln190_879_fu_13521_p2() {
    or_ln190_879_fu_13521_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_74);
}

void pqcrystals_dilithium_14::thread_or_ln190_880_fu_13535_p2() {
    or_ln190_880_fu_13535_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_75);
}

void pqcrystals_dilithium_14::thread_or_ln190_881_fu_13615_p2() {
    or_ln190_881_fu_13615_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_76);
}

void pqcrystals_dilithium_14::thread_or_ln190_882_fu_13629_p2() {
    or_ln190_882_fu_13629_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_77);
}

void pqcrystals_dilithium_14::thread_or_ln190_883_fu_13709_p2() {
    or_ln190_883_fu_13709_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_78);
}

void pqcrystals_dilithium_14::thread_or_ln190_884_fu_13723_p2() {
    or_ln190_884_fu_13723_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_79);
}

void pqcrystals_dilithium_14::thread_or_ln190_885_fu_13803_p2() {
    or_ln190_885_fu_13803_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7A);
}

void pqcrystals_dilithium_14::thread_or_ln190_886_fu_13817_p2() {
    or_ln190_886_fu_13817_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7B);
}

void pqcrystals_dilithium_14::thread_or_ln190_887_fu_13897_p2() {
    or_ln190_887_fu_13897_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7C);
}

void pqcrystals_dilithium_14::thread_or_ln190_888_fu_13911_p2() {
    or_ln190_888_fu_13911_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7D);
}

void pqcrystals_dilithium_14::thread_or_ln190_889_fu_13991_p2() {
    or_ln190_889_fu_13991_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7E);
}

void pqcrystals_dilithium_14::thread_or_ln190_890_fu_14005_p2() {
    or_ln190_890_fu_14005_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_7F);
}

void pqcrystals_dilithium_14::thread_or_ln190_891_fu_14085_p2() {
    or_ln190_891_fu_14085_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_80);
}

void pqcrystals_dilithium_14::thread_or_ln190_892_fu_14099_p2() {
    or_ln190_892_fu_14099_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_81);
}

void pqcrystals_dilithium_14::thread_or_ln190_893_fu_14179_p2() {
    or_ln190_893_fu_14179_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_82);
}

void pqcrystals_dilithium_14::thread_or_ln190_894_fu_14193_p2() {
    or_ln190_894_fu_14193_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_83);
}

void pqcrystals_dilithium_14::thread_or_ln190_895_fu_14273_p2() {
    or_ln190_895_fu_14273_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_84);
}

void pqcrystals_dilithium_14::thread_or_ln190_896_fu_14287_p2() {
    or_ln190_896_fu_14287_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_85);
}

void pqcrystals_dilithium_14::thread_or_ln190_897_fu_14367_p2() {
    or_ln190_897_fu_14367_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_86);
}

void pqcrystals_dilithium_14::thread_or_ln190_898_fu_14381_p2() {
    or_ln190_898_fu_14381_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_87);
}

void pqcrystals_dilithium_14::thread_or_ln190_899_fu_14461_p2() {
    or_ln190_899_fu_14461_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_88);
}

void pqcrystals_dilithium_14::thread_or_ln190_900_fu_14475_p2() {
    or_ln190_900_fu_14475_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_89);
}

void pqcrystals_dilithium_14::thread_or_ln190_901_fu_14555_p2() {
    or_ln190_901_fu_14555_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8A);
}

void pqcrystals_dilithium_14::thread_or_ln190_902_fu_14569_p2() {
    or_ln190_902_fu_14569_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8B);
}

void pqcrystals_dilithium_14::thread_or_ln190_903_fu_14649_p2() {
    or_ln190_903_fu_14649_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8C);
}

void pqcrystals_dilithium_14::thread_or_ln190_904_fu_14663_p2() {
    or_ln190_904_fu_14663_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8D);
}

void pqcrystals_dilithium_14::thread_or_ln190_905_fu_14743_p2() {
    or_ln190_905_fu_14743_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8E);
}

void pqcrystals_dilithium_14::thread_or_ln190_906_fu_14757_p2() {
    or_ln190_906_fu_14757_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_8F);
}

void pqcrystals_dilithium_14::thread_or_ln190_907_fu_14837_p2() {
    or_ln190_907_fu_14837_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_90);
}

void pqcrystals_dilithium_14::thread_or_ln190_908_fu_14851_p2() {
    or_ln190_908_fu_14851_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_91);
}

void pqcrystals_dilithium_14::thread_or_ln190_909_fu_14931_p2() {
    or_ln190_909_fu_14931_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_92);
}

void pqcrystals_dilithium_14::thread_or_ln190_910_fu_14945_p2() {
    or_ln190_910_fu_14945_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_93);
}

void pqcrystals_dilithium_14::thread_or_ln190_911_fu_15025_p2() {
    or_ln190_911_fu_15025_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_94);
}

void pqcrystals_dilithium_14::thread_or_ln190_912_fu_15039_p2() {
    or_ln190_912_fu_15039_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_95);
}

void pqcrystals_dilithium_14::thread_or_ln190_913_fu_15119_p2() {
    or_ln190_913_fu_15119_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_96);
}

void pqcrystals_dilithium_14::thread_or_ln190_914_fu_15133_p2() {
    or_ln190_914_fu_15133_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_97);
}

void pqcrystals_dilithium_14::thread_or_ln190_915_fu_15213_p2() {
    or_ln190_915_fu_15213_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_98);
}

void pqcrystals_dilithium_14::thread_or_ln190_916_fu_15227_p2() {
    or_ln190_916_fu_15227_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_99);
}

void pqcrystals_dilithium_14::thread_or_ln190_917_fu_15307_p2() {
    or_ln190_917_fu_15307_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9A);
}

void pqcrystals_dilithium_14::thread_or_ln190_918_fu_15321_p2() {
    or_ln190_918_fu_15321_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9B);
}

void pqcrystals_dilithium_14::thread_or_ln190_919_fu_15401_p2() {
    or_ln190_919_fu_15401_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9C);
}

void pqcrystals_dilithium_14::thread_or_ln190_920_fu_15415_p2() {
    or_ln190_920_fu_15415_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9D);
}

void pqcrystals_dilithium_14::thread_or_ln190_921_fu_15495_p2() {
    or_ln190_921_fu_15495_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9E);
}

void pqcrystals_dilithium_14::thread_or_ln190_922_fu_15509_p2() {
    or_ln190_922_fu_15509_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_9F);
}

void pqcrystals_dilithium_14::thread_or_ln190_923_fu_15589_p2() {
    or_ln190_923_fu_15589_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A0);
}

void pqcrystals_dilithium_14::thread_or_ln190_924_fu_15603_p2() {
    or_ln190_924_fu_15603_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A1);
}

void pqcrystals_dilithium_14::thread_or_ln190_925_fu_15683_p2() {
    or_ln190_925_fu_15683_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A2);
}

void pqcrystals_dilithium_14::thread_or_ln190_926_fu_15697_p2() {
    or_ln190_926_fu_15697_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A3);
}

void pqcrystals_dilithium_14::thread_or_ln190_927_fu_15777_p2() {
    or_ln190_927_fu_15777_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A4);
}

void pqcrystals_dilithium_14::thread_or_ln190_928_fu_15791_p2() {
    or_ln190_928_fu_15791_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A5);
}

void pqcrystals_dilithium_14::thread_or_ln190_929_fu_15871_p2() {
    or_ln190_929_fu_15871_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A6);
}

void pqcrystals_dilithium_14::thread_or_ln190_930_fu_15885_p2() {
    or_ln190_930_fu_15885_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A7);
}

void pqcrystals_dilithium_14::thread_or_ln190_931_fu_15965_p2() {
    or_ln190_931_fu_15965_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A8);
}

void pqcrystals_dilithium_14::thread_or_ln190_932_fu_15979_p2() {
    or_ln190_932_fu_15979_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_A9);
}

void pqcrystals_dilithium_14::thread_or_ln190_933_fu_16059_p2() {
    or_ln190_933_fu_16059_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_AA);
}

void pqcrystals_dilithium_14::thread_or_ln190_934_fu_16073_p2() {
    or_ln190_934_fu_16073_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_AB);
}

void pqcrystals_dilithium_14::thread_or_ln190_935_fu_16153_p2() {
    or_ln190_935_fu_16153_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_AC);
}

void pqcrystals_dilithium_14::thread_or_ln190_936_fu_16167_p2() {
    or_ln190_936_fu_16167_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_AD);
}

void pqcrystals_dilithium_14::thread_or_ln190_937_fu_16247_p2() {
    or_ln190_937_fu_16247_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_AE);
}

void pqcrystals_dilithium_14::thread_or_ln190_938_fu_16261_p2() {
    or_ln190_938_fu_16261_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_AF);
}

void pqcrystals_dilithium_14::thread_or_ln190_939_fu_16341_p2() {
    or_ln190_939_fu_16341_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B0);
}

void pqcrystals_dilithium_14::thread_or_ln190_940_fu_16355_p2() {
    or_ln190_940_fu_16355_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B1);
}

void pqcrystals_dilithium_14::thread_or_ln190_941_fu_16435_p2() {
    or_ln190_941_fu_16435_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B2);
}

void pqcrystals_dilithium_14::thread_or_ln190_942_fu_16449_p2() {
    or_ln190_942_fu_16449_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B3);
}

void pqcrystals_dilithium_14::thread_or_ln190_943_fu_16529_p2() {
    or_ln190_943_fu_16529_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B4);
}

void pqcrystals_dilithium_14::thread_or_ln190_944_fu_16543_p2() {
    or_ln190_944_fu_16543_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B5);
}

void pqcrystals_dilithium_14::thread_or_ln190_945_fu_16623_p2() {
    or_ln190_945_fu_16623_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B6);
}

void pqcrystals_dilithium_14::thread_or_ln190_946_fu_16637_p2() {
    or_ln190_946_fu_16637_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B7);
}

void pqcrystals_dilithium_14::thread_or_ln190_947_fu_16717_p2() {
    or_ln190_947_fu_16717_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B8);
}

void pqcrystals_dilithium_14::thread_or_ln190_948_fu_16731_p2() {
    or_ln190_948_fu_16731_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_B9);
}

void pqcrystals_dilithium_14::thread_or_ln190_949_fu_16811_p2() {
    or_ln190_949_fu_16811_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_BA);
}

void pqcrystals_dilithium_14::thread_or_ln190_950_fu_16825_p2() {
    or_ln190_950_fu_16825_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_BB);
}

void pqcrystals_dilithium_14::thread_or_ln190_951_fu_16905_p2() {
    or_ln190_951_fu_16905_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_BC);
}

void pqcrystals_dilithium_14::thread_or_ln190_952_fu_16919_p2() {
    or_ln190_952_fu_16919_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_BD);
}

void pqcrystals_dilithium_14::thread_or_ln190_953_fu_16999_p2() {
    or_ln190_953_fu_16999_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_BE);
}

void pqcrystals_dilithium_14::thread_or_ln190_954_fu_17013_p2() {
    or_ln190_954_fu_17013_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_BF);
}

void pqcrystals_dilithium_14::thread_or_ln190_955_fu_17093_p2() {
    or_ln190_955_fu_17093_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C0);
}

void pqcrystals_dilithium_14::thread_or_ln190_956_fu_17107_p2() {
    or_ln190_956_fu_17107_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C1);
}

void pqcrystals_dilithium_14::thread_or_ln190_957_fu_17187_p2() {
    or_ln190_957_fu_17187_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C2);
}

void pqcrystals_dilithium_14::thread_or_ln190_958_fu_17201_p2() {
    or_ln190_958_fu_17201_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C3);
}

void pqcrystals_dilithium_14::thread_or_ln190_959_fu_17281_p2() {
    or_ln190_959_fu_17281_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C4);
}

void pqcrystals_dilithium_14::thread_or_ln190_960_fu_17295_p2() {
    or_ln190_960_fu_17295_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C5);
}

void pqcrystals_dilithium_14::thread_or_ln190_961_fu_17375_p2() {
    or_ln190_961_fu_17375_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C6);
}

void pqcrystals_dilithium_14::thread_or_ln190_962_fu_17389_p2() {
    or_ln190_962_fu_17389_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C7);
}

void pqcrystals_dilithium_14::thread_or_ln190_963_fu_17469_p2() {
    or_ln190_963_fu_17469_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C8);
}

void pqcrystals_dilithium_14::thread_or_ln190_964_fu_17483_p2() {
    or_ln190_964_fu_17483_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_C9);
}

void pqcrystals_dilithium_14::thread_or_ln190_965_fu_17563_p2() {
    or_ln190_965_fu_17563_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_CA);
}

void pqcrystals_dilithium_14::thread_or_ln190_966_fu_17577_p2() {
    or_ln190_966_fu_17577_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_CB);
}

void pqcrystals_dilithium_14::thread_or_ln190_967_fu_17657_p2() {
    or_ln190_967_fu_17657_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_CC);
}

void pqcrystals_dilithium_14::thread_or_ln190_968_fu_17671_p2() {
    or_ln190_968_fu_17671_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_CD);
}

void pqcrystals_dilithium_14::thread_or_ln190_969_fu_17751_p2() {
    or_ln190_969_fu_17751_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_CE);
}

void pqcrystals_dilithium_14::thread_or_ln190_970_fu_17765_p2() {
    or_ln190_970_fu_17765_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_CF);
}

void pqcrystals_dilithium_14::thread_or_ln190_971_fu_17845_p2() {
    or_ln190_971_fu_17845_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D0);
}

void pqcrystals_dilithium_14::thread_or_ln190_972_fu_17859_p2() {
    or_ln190_972_fu_17859_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D1);
}

void pqcrystals_dilithium_14::thread_or_ln190_973_fu_17939_p2() {
    or_ln190_973_fu_17939_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D2);
}

void pqcrystals_dilithium_14::thread_or_ln190_974_fu_17953_p2() {
    or_ln190_974_fu_17953_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D3);
}

void pqcrystals_dilithium_14::thread_or_ln190_975_fu_18033_p2() {
    or_ln190_975_fu_18033_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D4);
}

void pqcrystals_dilithium_14::thread_or_ln190_976_fu_18047_p2() {
    or_ln190_976_fu_18047_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D5);
}

void pqcrystals_dilithium_14::thread_or_ln190_977_fu_18127_p2() {
    or_ln190_977_fu_18127_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D6);
}

void pqcrystals_dilithium_14::thread_or_ln190_978_fu_18141_p2() {
    or_ln190_978_fu_18141_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D7);
}

void pqcrystals_dilithium_14::thread_or_ln190_979_fu_18221_p2() {
    or_ln190_979_fu_18221_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D8);
}

void pqcrystals_dilithium_14::thread_or_ln190_980_fu_18235_p2() {
    or_ln190_980_fu_18235_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_D9);
}

void pqcrystals_dilithium_14::thread_or_ln190_981_fu_18315_p2() {
    or_ln190_981_fu_18315_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_DA);
}

void pqcrystals_dilithium_14::thread_or_ln190_982_fu_18329_p2() {
    or_ln190_982_fu_18329_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_DB);
}

void pqcrystals_dilithium_14::thread_or_ln190_983_fu_18409_p2() {
    or_ln190_983_fu_18409_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_DC);
}

void pqcrystals_dilithium_14::thread_or_ln190_984_fu_18423_p2() {
    or_ln190_984_fu_18423_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_DD);
}

void pqcrystals_dilithium_14::thread_or_ln190_985_fu_18503_p2() {
    or_ln190_985_fu_18503_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_DE);
}

void pqcrystals_dilithium_14::thread_or_ln190_986_fu_18517_p2() {
    or_ln190_986_fu_18517_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_DF);
}

void pqcrystals_dilithium_14::thread_or_ln190_987_fu_18597_p2() {
    or_ln190_987_fu_18597_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E0);
}

void pqcrystals_dilithium_14::thread_or_ln190_988_fu_18611_p2() {
    or_ln190_988_fu_18611_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E1);
}

void pqcrystals_dilithium_14::thread_or_ln190_989_fu_18691_p2() {
    or_ln190_989_fu_18691_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E2);
}

void pqcrystals_dilithium_14::thread_or_ln190_990_fu_18705_p2() {
    or_ln190_990_fu_18705_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E3);
}

void pqcrystals_dilithium_14::thread_or_ln190_991_fu_18785_p2() {
    or_ln190_991_fu_18785_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E4);
}

void pqcrystals_dilithium_14::thread_or_ln190_992_fu_18799_p2() {
    or_ln190_992_fu_18799_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E5);
}

void pqcrystals_dilithium_14::thread_or_ln190_993_fu_18879_p2() {
    or_ln190_993_fu_18879_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E6);
}

void pqcrystals_dilithium_14::thread_or_ln190_994_fu_18893_p2() {
    or_ln190_994_fu_18893_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E7);
}

void pqcrystals_dilithium_14::thread_or_ln190_995_fu_18973_p2() {
    or_ln190_995_fu_18973_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E8);
}

void pqcrystals_dilithium_14::thread_or_ln190_996_fu_18987_p2() {
    or_ln190_996_fu_18987_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_E9);
}

void pqcrystals_dilithium_14::thread_or_ln190_997_fu_19067_p2() {
    or_ln190_997_fu_19067_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_EA);
}

void pqcrystals_dilithium_14::thread_or_ln190_998_fu_19081_p2() {
    or_ln190_998_fu_19081_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_EB);
}

void pqcrystals_dilithium_14::thread_or_ln190_999_fu_19161_p2() {
    or_ln190_999_fu_19161_p2 = (tmp_4946_reg_20343.read() | ap_const_lv12_EC);
}

void pqcrystals_dilithium_14::thread_or_ln190_fu_8026_p2() {
    or_ln190_fu_8026_p2 = (tmp_4690_fu_8013_p3.read() | ap_const_lv14_1);
}

void pqcrystals_dilithium_14::thread_sext_ln190_1000_fu_19579_p1() {
    sext_ln190_1000_fu_19579_p1 = esl_sext<64,55>(mul_ln190_244_fu_19573_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1002_fu_19598_p1() {
    sext_ln190_1002_fu_19598_p1 = esl_sext<64,55>(mul_ln190_245_fu_19592_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1004_fu_19673_p1() {
    sext_ln190_1004_fu_19673_p1 = esl_sext<64,55>(mul_ln190_246_fu_19667_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1006_fu_19692_p1() {
    sext_ln190_1006_fu_19692_p1 = esl_sext<64,55>(mul_ln190_247_fu_19686_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1008_fu_19767_p1() {
    sext_ln190_1008_fu_19767_p1 = esl_sext<64,55>(mul_ln190_248_fu_19761_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1010_fu_19786_p1() {
    sext_ln190_1010_fu_19786_p1 = esl_sext<64,55>(mul_ln190_249_fu_19780_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1012_fu_19861_p1() {
    sext_ln190_1012_fu_19861_p1 = esl_sext<64,55>(mul_ln190_250_fu_19855_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1014_fu_19880_p1() {
    sext_ln190_1014_fu_19880_p1 = esl_sext<64,55>(mul_ln190_251_fu_19874_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1016_fu_19955_p1() {
    sext_ln190_1016_fu_19955_p1 = esl_sext<64,55>(mul_ln190_252_fu_19949_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1018_fu_19974_p1() {
    sext_ln190_1018_fu_19974_p1 = esl_sext<64,55>(mul_ln190_253_fu_19968_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1020_fu_20021_p1() {
    sext_ln190_1020_fu_20021_p1 = esl_sext<64,55>(mul_ln190_254_fu_20015_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_1022_fu_20040_p1() {
    sext_ln190_1022_fu_20040_p1 = esl_sext<64,55>(mul_ln190_255_fu_20034_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_512_fu_8111_p1() {
    sext_ln190_512_fu_8111_p1 = esl_sext<64,55>(mul_ln190_fu_8105_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_514_fu_8130_p1() {
    sext_ln190_514_fu_8130_p1 = esl_sext<64,55>(mul_ln190_1_fu_8124_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_516_fu_8205_p1() {
    sext_ln190_516_fu_8205_p1 = esl_sext<64,55>(mul_ln190_2_fu_8199_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_518_fu_8224_p1() {
    sext_ln190_518_fu_8224_p1 = esl_sext<64,55>(mul_ln190_3_fu_8218_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_520_fu_8299_p1() {
    sext_ln190_520_fu_8299_p1 = esl_sext<64,55>(mul_ln190_4_fu_8293_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_522_fu_8318_p1() {
    sext_ln190_522_fu_8318_p1 = esl_sext<64,55>(mul_ln190_5_fu_8312_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_524_fu_8393_p1() {
    sext_ln190_524_fu_8393_p1 = esl_sext<64,55>(mul_ln190_6_fu_8387_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_526_fu_8412_p1() {
    sext_ln190_526_fu_8412_p1 = esl_sext<64,55>(mul_ln190_7_fu_8406_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_528_fu_8487_p1() {
    sext_ln190_528_fu_8487_p1 = esl_sext<64,55>(mul_ln190_8_fu_8481_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_530_fu_8506_p1() {
    sext_ln190_530_fu_8506_p1 = esl_sext<64,55>(mul_ln190_9_fu_8500_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_532_fu_8581_p1() {
    sext_ln190_532_fu_8581_p1 = esl_sext<64,55>(mul_ln190_10_fu_8575_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_534_fu_8600_p1() {
    sext_ln190_534_fu_8600_p1 = esl_sext<64,55>(mul_ln190_11_fu_8594_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_536_fu_8675_p1() {
    sext_ln190_536_fu_8675_p1 = esl_sext<64,55>(mul_ln190_12_fu_8669_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_538_fu_8694_p1() {
    sext_ln190_538_fu_8694_p1 = esl_sext<64,55>(mul_ln190_13_fu_8688_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_540_fu_8769_p1() {
    sext_ln190_540_fu_8769_p1 = esl_sext<64,55>(mul_ln190_14_fu_8763_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_542_fu_8788_p1() {
    sext_ln190_542_fu_8788_p1 = esl_sext<64,55>(mul_ln190_15_fu_8782_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_544_fu_8863_p1() {
    sext_ln190_544_fu_8863_p1 = esl_sext<64,55>(mul_ln190_16_fu_8857_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_546_fu_8882_p1() {
    sext_ln190_546_fu_8882_p1 = esl_sext<64,55>(mul_ln190_17_fu_8876_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_548_fu_8957_p1() {
    sext_ln190_548_fu_8957_p1 = esl_sext<64,55>(mul_ln190_18_fu_8951_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_550_fu_8976_p1() {
    sext_ln190_550_fu_8976_p1 = esl_sext<64,55>(mul_ln190_19_fu_8970_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_552_fu_9051_p1() {
    sext_ln190_552_fu_9051_p1 = esl_sext<64,55>(mul_ln190_20_fu_9045_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_554_fu_9070_p1() {
    sext_ln190_554_fu_9070_p1 = esl_sext<64,55>(mul_ln190_21_fu_9064_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_556_fu_9145_p1() {
    sext_ln190_556_fu_9145_p1 = esl_sext<64,55>(mul_ln190_22_fu_9139_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_558_fu_9164_p1() {
    sext_ln190_558_fu_9164_p1 = esl_sext<64,55>(mul_ln190_23_fu_9158_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_560_fu_9239_p1() {
    sext_ln190_560_fu_9239_p1 = esl_sext<64,55>(mul_ln190_24_fu_9233_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_562_fu_9258_p1() {
    sext_ln190_562_fu_9258_p1 = esl_sext<64,55>(mul_ln190_25_fu_9252_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_564_fu_9333_p1() {
    sext_ln190_564_fu_9333_p1 = esl_sext<64,55>(mul_ln190_26_fu_9327_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_566_fu_9352_p1() {
    sext_ln190_566_fu_9352_p1 = esl_sext<64,55>(mul_ln190_27_fu_9346_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_568_fu_9427_p1() {
    sext_ln190_568_fu_9427_p1 = esl_sext<64,55>(mul_ln190_28_fu_9421_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_570_fu_9446_p1() {
    sext_ln190_570_fu_9446_p1 = esl_sext<64,55>(mul_ln190_29_fu_9440_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_572_fu_9521_p1() {
    sext_ln190_572_fu_9521_p1 = esl_sext<64,55>(mul_ln190_30_fu_9515_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_574_fu_9540_p1() {
    sext_ln190_574_fu_9540_p1 = esl_sext<64,55>(mul_ln190_31_fu_9534_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_576_fu_9615_p1() {
    sext_ln190_576_fu_9615_p1 = esl_sext<64,55>(mul_ln190_32_fu_9609_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_578_fu_9634_p1() {
    sext_ln190_578_fu_9634_p1 = esl_sext<64,55>(mul_ln190_33_fu_9628_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_580_fu_9709_p1() {
    sext_ln190_580_fu_9709_p1 = esl_sext<64,55>(mul_ln190_34_fu_9703_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_582_fu_9728_p1() {
    sext_ln190_582_fu_9728_p1 = esl_sext<64,55>(mul_ln190_35_fu_9722_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_584_fu_9803_p1() {
    sext_ln190_584_fu_9803_p1 = esl_sext<64,55>(mul_ln190_36_fu_9797_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_586_fu_9822_p1() {
    sext_ln190_586_fu_9822_p1 = esl_sext<64,55>(mul_ln190_37_fu_9816_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_588_fu_9897_p1() {
    sext_ln190_588_fu_9897_p1 = esl_sext<64,55>(mul_ln190_38_fu_9891_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_590_fu_9916_p1() {
    sext_ln190_590_fu_9916_p1 = esl_sext<64,55>(mul_ln190_39_fu_9910_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_592_fu_9991_p1() {
    sext_ln190_592_fu_9991_p1 = esl_sext<64,55>(mul_ln190_40_fu_9985_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_594_fu_10010_p1() {
    sext_ln190_594_fu_10010_p1 = esl_sext<64,55>(mul_ln190_41_fu_10004_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_596_fu_10085_p1() {
    sext_ln190_596_fu_10085_p1 = esl_sext<64,55>(mul_ln190_42_fu_10079_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_598_fu_10104_p1() {
    sext_ln190_598_fu_10104_p1 = esl_sext<64,55>(mul_ln190_43_fu_10098_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_600_fu_10179_p1() {
    sext_ln190_600_fu_10179_p1 = esl_sext<64,55>(mul_ln190_44_fu_10173_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_602_fu_10198_p1() {
    sext_ln190_602_fu_10198_p1 = esl_sext<64,55>(mul_ln190_45_fu_10192_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_604_fu_10273_p1() {
    sext_ln190_604_fu_10273_p1 = esl_sext<64,55>(mul_ln190_46_fu_10267_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_606_fu_10292_p1() {
    sext_ln190_606_fu_10292_p1 = esl_sext<64,55>(mul_ln190_47_fu_10286_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_608_fu_10367_p1() {
    sext_ln190_608_fu_10367_p1 = esl_sext<64,55>(mul_ln190_48_fu_10361_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_610_fu_10386_p1() {
    sext_ln190_610_fu_10386_p1 = esl_sext<64,55>(mul_ln190_49_fu_10380_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_612_fu_10461_p1() {
    sext_ln190_612_fu_10461_p1 = esl_sext<64,55>(mul_ln190_50_fu_10455_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_614_fu_10480_p1() {
    sext_ln190_614_fu_10480_p1 = esl_sext<64,55>(mul_ln190_51_fu_10474_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_616_fu_10555_p1() {
    sext_ln190_616_fu_10555_p1 = esl_sext<64,55>(mul_ln190_52_fu_10549_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_618_fu_10574_p1() {
    sext_ln190_618_fu_10574_p1 = esl_sext<64,55>(mul_ln190_53_fu_10568_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_620_fu_10649_p1() {
    sext_ln190_620_fu_10649_p1 = esl_sext<64,55>(mul_ln190_54_fu_10643_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_622_fu_10668_p1() {
    sext_ln190_622_fu_10668_p1 = esl_sext<64,55>(mul_ln190_55_fu_10662_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_624_fu_10743_p1() {
    sext_ln190_624_fu_10743_p1 = esl_sext<64,55>(mul_ln190_56_fu_10737_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_626_fu_10762_p1() {
    sext_ln190_626_fu_10762_p1 = esl_sext<64,55>(mul_ln190_57_fu_10756_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_628_fu_10837_p1() {
    sext_ln190_628_fu_10837_p1 = esl_sext<64,55>(mul_ln190_58_fu_10831_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_630_fu_10856_p1() {
    sext_ln190_630_fu_10856_p1 = esl_sext<64,55>(mul_ln190_59_fu_10850_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_632_fu_10931_p1() {
    sext_ln190_632_fu_10931_p1 = esl_sext<64,55>(mul_ln190_60_fu_10925_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_634_fu_10950_p1() {
    sext_ln190_634_fu_10950_p1 = esl_sext<64,55>(mul_ln190_61_fu_10944_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_636_fu_11025_p1() {
    sext_ln190_636_fu_11025_p1 = esl_sext<64,55>(mul_ln190_62_fu_11019_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_638_fu_11044_p1() {
    sext_ln190_638_fu_11044_p1 = esl_sext<64,55>(mul_ln190_63_fu_11038_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_640_fu_11119_p1() {
    sext_ln190_640_fu_11119_p1 = esl_sext<64,55>(mul_ln190_64_fu_11113_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_642_fu_11138_p1() {
    sext_ln190_642_fu_11138_p1 = esl_sext<64,55>(mul_ln190_65_fu_11132_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_644_fu_11213_p1() {
    sext_ln190_644_fu_11213_p1 = esl_sext<64,55>(mul_ln190_66_fu_11207_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_646_fu_11232_p1() {
    sext_ln190_646_fu_11232_p1 = esl_sext<64,55>(mul_ln190_67_fu_11226_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_648_fu_11307_p1() {
    sext_ln190_648_fu_11307_p1 = esl_sext<64,55>(mul_ln190_68_fu_11301_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_650_fu_11326_p1() {
    sext_ln190_650_fu_11326_p1 = esl_sext<64,55>(mul_ln190_69_fu_11320_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_652_fu_11401_p1() {
    sext_ln190_652_fu_11401_p1 = esl_sext<64,55>(mul_ln190_70_fu_11395_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_654_fu_11420_p1() {
    sext_ln190_654_fu_11420_p1 = esl_sext<64,55>(mul_ln190_71_fu_11414_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_656_fu_11495_p1() {
    sext_ln190_656_fu_11495_p1 = esl_sext<64,55>(mul_ln190_72_fu_11489_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_658_fu_11514_p1() {
    sext_ln190_658_fu_11514_p1 = esl_sext<64,55>(mul_ln190_73_fu_11508_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_660_fu_11589_p1() {
    sext_ln190_660_fu_11589_p1 = esl_sext<64,55>(mul_ln190_74_fu_11583_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_662_fu_11608_p1() {
    sext_ln190_662_fu_11608_p1 = esl_sext<64,55>(mul_ln190_75_fu_11602_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_664_fu_11683_p1() {
    sext_ln190_664_fu_11683_p1 = esl_sext<64,55>(mul_ln190_76_fu_11677_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_666_fu_11702_p1() {
    sext_ln190_666_fu_11702_p1 = esl_sext<64,55>(mul_ln190_77_fu_11696_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_668_fu_11777_p1() {
    sext_ln190_668_fu_11777_p1 = esl_sext<64,55>(mul_ln190_78_fu_11771_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_670_fu_11796_p1() {
    sext_ln190_670_fu_11796_p1 = esl_sext<64,55>(mul_ln190_79_fu_11790_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_672_fu_11871_p1() {
    sext_ln190_672_fu_11871_p1 = esl_sext<64,55>(mul_ln190_80_fu_11865_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_674_fu_11890_p1() {
    sext_ln190_674_fu_11890_p1 = esl_sext<64,55>(mul_ln190_81_fu_11884_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_676_fu_11965_p1() {
    sext_ln190_676_fu_11965_p1 = esl_sext<64,55>(mul_ln190_82_fu_11959_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_678_fu_11984_p1() {
    sext_ln190_678_fu_11984_p1 = esl_sext<64,55>(mul_ln190_83_fu_11978_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_680_fu_12059_p1() {
    sext_ln190_680_fu_12059_p1 = esl_sext<64,55>(mul_ln190_84_fu_12053_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_682_fu_12078_p1() {
    sext_ln190_682_fu_12078_p1 = esl_sext<64,55>(mul_ln190_85_fu_12072_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_684_fu_12153_p1() {
    sext_ln190_684_fu_12153_p1 = esl_sext<64,55>(mul_ln190_86_fu_12147_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_686_fu_12172_p1() {
    sext_ln190_686_fu_12172_p1 = esl_sext<64,55>(mul_ln190_87_fu_12166_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_688_fu_12247_p1() {
    sext_ln190_688_fu_12247_p1 = esl_sext<64,55>(mul_ln190_88_fu_12241_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_690_fu_12266_p1() {
    sext_ln190_690_fu_12266_p1 = esl_sext<64,55>(mul_ln190_89_fu_12260_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_692_fu_12341_p1() {
    sext_ln190_692_fu_12341_p1 = esl_sext<64,55>(mul_ln190_90_fu_12335_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_694_fu_12360_p1() {
    sext_ln190_694_fu_12360_p1 = esl_sext<64,55>(mul_ln190_91_fu_12354_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_696_fu_12435_p1() {
    sext_ln190_696_fu_12435_p1 = esl_sext<64,55>(mul_ln190_92_fu_12429_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_698_fu_12454_p1() {
    sext_ln190_698_fu_12454_p1 = esl_sext<64,55>(mul_ln190_93_fu_12448_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_700_fu_12529_p1() {
    sext_ln190_700_fu_12529_p1 = esl_sext<64,55>(mul_ln190_94_fu_12523_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_702_fu_12548_p1() {
    sext_ln190_702_fu_12548_p1 = esl_sext<64,55>(mul_ln190_95_fu_12542_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_704_fu_12623_p1() {
    sext_ln190_704_fu_12623_p1 = esl_sext<64,55>(mul_ln190_96_fu_12617_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_706_fu_12642_p1() {
    sext_ln190_706_fu_12642_p1 = esl_sext<64,55>(mul_ln190_97_fu_12636_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_708_fu_12717_p1() {
    sext_ln190_708_fu_12717_p1 = esl_sext<64,55>(mul_ln190_98_fu_12711_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_710_fu_12736_p1() {
    sext_ln190_710_fu_12736_p1 = esl_sext<64,55>(mul_ln190_99_fu_12730_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_712_fu_12811_p1() {
    sext_ln190_712_fu_12811_p1 = esl_sext<64,55>(mul_ln190_100_fu_12805_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_714_fu_12830_p1() {
    sext_ln190_714_fu_12830_p1 = esl_sext<64,55>(mul_ln190_101_fu_12824_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_716_fu_12905_p1() {
    sext_ln190_716_fu_12905_p1 = esl_sext<64,55>(mul_ln190_102_fu_12899_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_718_fu_12924_p1() {
    sext_ln190_718_fu_12924_p1 = esl_sext<64,55>(mul_ln190_103_fu_12918_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_720_fu_12999_p1() {
    sext_ln190_720_fu_12999_p1 = esl_sext<64,55>(mul_ln190_104_fu_12993_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_722_fu_13018_p1() {
    sext_ln190_722_fu_13018_p1 = esl_sext<64,55>(mul_ln190_105_fu_13012_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_724_fu_13093_p1() {
    sext_ln190_724_fu_13093_p1 = esl_sext<64,55>(mul_ln190_106_fu_13087_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_726_fu_13112_p1() {
    sext_ln190_726_fu_13112_p1 = esl_sext<64,55>(mul_ln190_107_fu_13106_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_728_fu_13187_p1() {
    sext_ln190_728_fu_13187_p1 = esl_sext<64,55>(mul_ln190_108_fu_13181_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_730_fu_13206_p1() {
    sext_ln190_730_fu_13206_p1 = esl_sext<64,55>(mul_ln190_109_fu_13200_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_732_fu_13281_p1() {
    sext_ln190_732_fu_13281_p1 = esl_sext<64,55>(mul_ln190_110_fu_13275_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_734_fu_13300_p1() {
    sext_ln190_734_fu_13300_p1 = esl_sext<64,55>(mul_ln190_111_fu_13294_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_736_fu_13375_p1() {
    sext_ln190_736_fu_13375_p1 = esl_sext<64,55>(mul_ln190_112_fu_13369_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_738_fu_13394_p1() {
    sext_ln190_738_fu_13394_p1 = esl_sext<64,55>(mul_ln190_113_fu_13388_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_740_fu_13469_p1() {
    sext_ln190_740_fu_13469_p1 = esl_sext<64,55>(mul_ln190_114_fu_13463_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_742_fu_13488_p1() {
    sext_ln190_742_fu_13488_p1 = esl_sext<64,55>(mul_ln190_115_fu_13482_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_744_fu_13563_p1() {
    sext_ln190_744_fu_13563_p1 = esl_sext<64,55>(mul_ln190_116_fu_13557_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_746_fu_13582_p1() {
    sext_ln190_746_fu_13582_p1 = esl_sext<64,55>(mul_ln190_117_fu_13576_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_748_fu_13657_p1() {
    sext_ln190_748_fu_13657_p1 = esl_sext<64,55>(mul_ln190_118_fu_13651_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_750_fu_13676_p1() {
    sext_ln190_750_fu_13676_p1 = esl_sext<64,55>(mul_ln190_119_fu_13670_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_752_fu_13751_p1() {
    sext_ln190_752_fu_13751_p1 = esl_sext<64,55>(mul_ln190_120_fu_13745_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_754_fu_13770_p1() {
    sext_ln190_754_fu_13770_p1 = esl_sext<64,55>(mul_ln190_121_fu_13764_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_756_fu_13845_p1() {
    sext_ln190_756_fu_13845_p1 = esl_sext<64,55>(mul_ln190_122_fu_13839_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_758_fu_13864_p1() {
    sext_ln190_758_fu_13864_p1 = esl_sext<64,55>(mul_ln190_123_fu_13858_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_760_fu_13939_p1() {
    sext_ln190_760_fu_13939_p1 = esl_sext<64,55>(mul_ln190_124_fu_13933_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_762_fu_13958_p1() {
    sext_ln190_762_fu_13958_p1 = esl_sext<64,55>(mul_ln190_125_fu_13952_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_764_fu_14033_p1() {
    sext_ln190_764_fu_14033_p1 = esl_sext<64,55>(mul_ln190_126_fu_14027_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_766_fu_14052_p1() {
    sext_ln190_766_fu_14052_p1 = esl_sext<64,55>(mul_ln190_127_fu_14046_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_768_fu_14127_p1() {
    sext_ln190_768_fu_14127_p1 = esl_sext<64,55>(mul_ln190_128_fu_14121_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_770_fu_14146_p1() {
    sext_ln190_770_fu_14146_p1 = esl_sext<64,55>(mul_ln190_129_fu_14140_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_772_fu_14221_p1() {
    sext_ln190_772_fu_14221_p1 = esl_sext<64,55>(mul_ln190_130_fu_14215_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_774_fu_14240_p1() {
    sext_ln190_774_fu_14240_p1 = esl_sext<64,55>(mul_ln190_131_fu_14234_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_776_fu_14315_p1() {
    sext_ln190_776_fu_14315_p1 = esl_sext<64,55>(mul_ln190_132_fu_14309_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_778_fu_14334_p1() {
    sext_ln190_778_fu_14334_p1 = esl_sext<64,55>(mul_ln190_133_fu_14328_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_780_fu_14409_p1() {
    sext_ln190_780_fu_14409_p1 = esl_sext<64,55>(mul_ln190_134_fu_14403_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_782_fu_14428_p1() {
    sext_ln190_782_fu_14428_p1 = esl_sext<64,55>(mul_ln190_135_fu_14422_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_784_fu_14503_p1() {
    sext_ln190_784_fu_14503_p1 = esl_sext<64,55>(mul_ln190_136_fu_14497_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_786_fu_14522_p1() {
    sext_ln190_786_fu_14522_p1 = esl_sext<64,55>(mul_ln190_137_fu_14516_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_788_fu_14597_p1() {
    sext_ln190_788_fu_14597_p1 = esl_sext<64,55>(mul_ln190_138_fu_14591_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_790_fu_14616_p1() {
    sext_ln190_790_fu_14616_p1 = esl_sext<64,55>(mul_ln190_139_fu_14610_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_792_fu_14691_p1() {
    sext_ln190_792_fu_14691_p1 = esl_sext<64,55>(mul_ln190_140_fu_14685_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_794_fu_14710_p1() {
    sext_ln190_794_fu_14710_p1 = esl_sext<64,55>(mul_ln190_141_fu_14704_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_796_fu_14785_p1() {
    sext_ln190_796_fu_14785_p1 = esl_sext<64,55>(mul_ln190_142_fu_14779_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_798_fu_14804_p1() {
    sext_ln190_798_fu_14804_p1 = esl_sext<64,55>(mul_ln190_143_fu_14798_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_800_fu_14879_p1() {
    sext_ln190_800_fu_14879_p1 = esl_sext<64,55>(mul_ln190_144_fu_14873_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_802_fu_14898_p1() {
    sext_ln190_802_fu_14898_p1 = esl_sext<64,55>(mul_ln190_145_fu_14892_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_804_fu_14973_p1() {
    sext_ln190_804_fu_14973_p1 = esl_sext<64,55>(mul_ln190_146_fu_14967_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_806_fu_14992_p1() {
    sext_ln190_806_fu_14992_p1 = esl_sext<64,55>(mul_ln190_147_fu_14986_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_808_fu_15067_p1() {
    sext_ln190_808_fu_15067_p1 = esl_sext<64,55>(mul_ln190_148_fu_15061_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_810_fu_15086_p1() {
    sext_ln190_810_fu_15086_p1 = esl_sext<64,55>(mul_ln190_149_fu_15080_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_812_fu_15161_p1() {
    sext_ln190_812_fu_15161_p1 = esl_sext<64,55>(mul_ln190_150_fu_15155_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_814_fu_15180_p1() {
    sext_ln190_814_fu_15180_p1 = esl_sext<64,55>(mul_ln190_151_fu_15174_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_816_fu_15255_p1() {
    sext_ln190_816_fu_15255_p1 = esl_sext<64,55>(mul_ln190_152_fu_15249_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_818_fu_15274_p1() {
    sext_ln190_818_fu_15274_p1 = esl_sext<64,55>(mul_ln190_153_fu_15268_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_820_fu_15349_p1() {
    sext_ln190_820_fu_15349_p1 = esl_sext<64,55>(mul_ln190_154_fu_15343_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_822_fu_15368_p1() {
    sext_ln190_822_fu_15368_p1 = esl_sext<64,55>(mul_ln190_155_fu_15362_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_824_fu_15443_p1() {
    sext_ln190_824_fu_15443_p1 = esl_sext<64,55>(mul_ln190_156_fu_15437_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_826_fu_15462_p1() {
    sext_ln190_826_fu_15462_p1 = esl_sext<64,55>(mul_ln190_157_fu_15456_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_828_fu_15537_p1() {
    sext_ln190_828_fu_15537_p1 = esl_sext<64,55>(mul_ln190_158_fu_15531_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_830_fu_15556_p1() {
    sext_ln190_830_fu_15556_p1 = esl_sext<64,55>(mul_ln190_159_fu_15550_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_832_fu_15631_p1() {
    sext_ln190_832_fu_15631_p1 = esl_sext<64,55>(mul_ln190_160_fu_15625_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_834_fu_15650_p1() {
    sext_ln190_834_fu_15650_p1 = esl_sext<64,55>(mul_ln190_161_fu_15644_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_836_fu_15725_p1() {
    sext_ln190_836_fu_15725_p1 = esl_sext<64,55>(mul_ln190_162_fu_15719_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_838_fu_15744_p1() {
    sext_ln190_838_fu_15744_p1 = esl_sext<64,55>(mul_ln190_163_fu_15738_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_840_fu_15819_p1() {
    sext_ln190_840_fu_15819_p1 = esl_sext<64,55>(mul_ln190_164_fu_15813_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_842_fu_15838_p1() {
    sext_ln190_842_fu_15838_p1 = esl_sext<64,55>(mul_ln190_165_fu_15832_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_844_fu_15913_p1() {
    sext_ln190_844_fu_15913_p1 = esl_sext<64,55>(mul_ln190_166_fu_15907_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_846_fu_15932_p1() {
    sext_ln190_846_fu_15932_p1 = esl_sext<64,55>(mul_ln190_167_fu_15926_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_848_fu_16007_p1() {
    sext_ln190_848_fu_16007_p1 = esl_sext<64,55>(mul_ln190_168_fu_16001_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_850_fu_16026_p1() {
    sext_ln190_850_fu_16026_p1 = esl_sext<64,55>(mul_ln190_169_fu_16020_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_852_fu_16101_p1() {
    sext_ln190_852_fu_16101_p1 = esl_sext<64,55>(mul_ln190_170_fu_16095_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_854_fu_16120_p1() {
    sext_ln190_854_fu_16120_p1 = esl_sext<64,55>(mul_ln190_171_fu_16114_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_856_fu_16195_p1() {
    sext_ln190_856_fu_16195_p1 = esl_sext<64,55>(mul_ln190_172_fu_16189_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_858_fu_16214_p1() {
    sext_ln190_858_fu_16214_p1 = esl_sext<64,55>(mul_ln190_173_fu_16208_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_860_fu_16289_p1() {
    sext_ln190_860_fu_16289_p1 = esl_sext<64,55>(mul_ln190_174_fu_16283_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_862_fu_16308_p1() {
    sext_ln190_862_fu_16308_p1 = esl_sext<64,55>(mul_ln190_175_fu_16302_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_864_fu_16383_p1() {
    sext_ln190_864_fu_16383_p1 = esl_sext<64,55>(mul_ln190_176_fu_16377_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_866_fu_16402_p1() {
    sext_ln190_866_fu_16402_p1 = esl_sext<64,55>(mul_ln190_177_fu_16396_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_868_fu_16477_p1() {
    sext_ln190_868_fu_16477_p1 = esl_sext<64,55>(mul_ln190_178_fu_16471_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_870_fu_16496_p1() {
    sext_ln190_870_fu_16496_p1 = esl_sext<64,55>(mul_ln190_179_fu_16490_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_872_fu_16571_p1() {
    sext_ln190_872_fu_16571_p1 = esl_sext<64,55>(mul_ln190_180_fu_16565_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_874_fu_16590_p1() {
    sext_ln190_874_fu_16590_p1 = esl_sext<64,55>(mul_ln190_181_fu_16584_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_876_fu_16665_p1() {
    sext_ln190_876_fu_16665_p1 = esl_sext<64,55>(mul_ln190_182_fu_16659_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_878_fu_16684_p1() {
    sext_ln190_878_fu_16684_p1 = esl_sext<64,55>(mul_ln190_183_fu_16678_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_880_fu_16759_p1() {
    sext_ln190_880_fu_16759_p1 = esl_sext<64,55>(mul_ln190_184_fu_16753_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_882_fu_16778_p1() {
    sext_ln190_882_fu_16778_p1 = esl_sext<64,55>(mul_ln190_185_fu_16772_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_884_fu_16853_p1() {
    sext_ln190_884_fu_16853_p1 = esl_sext<64,55>(mul_ln190_186_fu_16847_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_886_fu_16872_p1() {
    sext_ln190_886_fu_16872_p1 = esl_sext<64,55>(mul_ln190_187_fu_16866_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_888_fu_16947_p1() {
    sext_ln190_888_fu_16947_p1 = esl_sext<64,55>(mul_ln190_188_fu_16941_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_890_fu_16966_p1() {
    sext_ln190_890_fu_16966_p1 = esl_sext<64,55>(mul_ln190_189_fu_16960_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_892_fu_17041_p1() {
    sext_ln190_892_fu_17041_p1 = esl_sext<64,55>(mul_ln190_190_fu_17035_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_894_fu_17060_p1() {
    sext_ln190_894_fu_17060_p1 = esl_sext<64,55>(mul_ln190_191_fu_17054_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_896_fu_17135_p1() {
    sext_ln190_896_fu_17135_p1 = esl_sext<64,55>(mul_ln190_192_fu_17129_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_898_fu_17154_p1() {
    sext_ln190_898_fu_17154_p1 = esl_sext<64,55>(mul_ln190_193_fu_17148_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_900_fu_17229_p1() {
    sext_ln190_900_fu_17229_p1 = esl_sext<64,55>(mul_ln190_194_fu_17223_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_902_fu_17248_p1() {
    sext_ln190_902_fu_17248_p1 = esl_sext<64,55>(mul_ln190_195_fu_17242_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_904_fu_17323_p1() {
    sext_ln190_904_fu_17323_p1 = esl_sext<64,55>(mul_ln190_196_fu_17317_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_906_fu_17342_p1() {
    sext_ln190_906_fu_17342_p1 = esl_sext<64,55>(mul_ln190_197_fu_17336_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_908_fu_17417_p1() {
    sext_ln190_908_fu_17417_p1 = esl_sext<64,55>(mul_ln190_198_fu_17411_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_910_fu_17436_p1() {
    sext_ln190_910_fu_17436_p1 = esl_sext<64,55>(mul_ln190_199_fu_17430_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_912_fu_17511_p1() {
    sext_ln190_912_fu_17511_p1 = esl_sext<64,55>(mul_ln190_200_fu_17505_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_914_fu_17530_p1() {
    sext_ln190_914_fu_17530_p1 = esl_sext<64,55>(mul_ln190_201_fu_17524_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_916_fu_17605_p1() {
    sext_ln190_916_fu_17605_p1 = esl_sext<64,55>(mul_ln190_202_fu_17599_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_918_fu_17624_p1() {
    sext_ln190_918_fu_17624_p1 = esl_sext<64,55>(mul_ln190_203_fu_17618_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_920_fu_17699_p1() {
    sext_ln190_920_fu_17699_p1 = esl_sext<64,55>(mul_ln190_204_fu_17693_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_922_fu_17718_p1() {
    sext_ln190_922_fu_17718_p1 = esl_sext<64,55>(mul_ln190_205_fu_17712_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_924_fu_17793_p1() {
    sext_ln190_924_fu_17793_p1 = esl_sext<64,55>(mul_ln190_206_fu_17787_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_926_fu_17812_p1() {
    sext_ln190_926_fu_17812_p1 = esl_sext<64,55>(mul_ln190_207_fu_17806_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_928_fu_17887_p1() {
    sext_ln190_928_fu_17887_p1 = esl_sext<64,55>(mul_ln190_208_fu_17881_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_930_fu_17906_p1() {
    sext_ln190_930_fu_17906_p1 = esl_sext<64,55>(mul_ln190_209_fu_17900_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_932_fu_17981_p1() {
    sext_ln190_932_fu_17981_p1 = esl_sext<64,55>(mul_ln190_210_fu_17975_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_934_fu_18000_p1() {
    sext_ln190_934_fu_18000_p1 = esl_sext<64,55>(mul_ln190_211_fu_17994_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_936_fu_18075_p1() {
    sext_ln190_936_fu_18075_p1 = esl_sext<64,55>(mul_ln190_212_fu_18069_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_938_fu_18094_p1() {
    sext_ln190_938_fu_18094_p1 = esl_sext<64,55>(mul_ln190_213_fu_18088_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_940_fu_18169_p1() {
    sext_ln190_940_fu_18169_p1 = esl_sext<64,55>(mul_ln190_214_fu_18163_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_942_fu_18188_p1() {
    sext_ln190_942_fu_18188_p1 = esl_sext<64,55>(mul_ln190_215_fu_18182_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_944_fu_18263_p1() {
    sext_ln190_944_fu_18263_p1 = esl_sext<64,55>(mul_ln190_216_fu_18257_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_946_fu_18282_p1() {
    sext_ln190_946_fu_18282_p1 = esl_sext<64,55>(mul_ln190_217_fu_18276_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_948_fu_18357_p1() {
    sext_ln190_948_fu_18357_p1 = esl_sext<64,55>(mul_ln190_218_fu_18351_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_950_fu_18376_p1() {
    sext_ln190_950_fu_18376_p1 = esl_sext<64,55>(mul_ln190_219_fu_18370_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_952_fu_18451_p1() {
    sext_ln190_952_fu_18451_p1 = esl_sext<64,55>(mul_ln190_220_fu_18445_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_954_fu_18470_p1() {
    sext_ln190_954_fu_18470_p1 = esl_sext<64,55>(mul_ln190_221_fu_18464_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_956_fu_18545_p1() {
    sext_ln190_956_fu_18545_p1 = esl_sext<64,55>(mul_ln190_222_fu_18539_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_958_fu_18564_p1() {
    sext_ln190_958_fu_18564_p1 = esl_sext<64,55>(mul_ln190_223_fu_18558_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_960_fu_18639_p1() {
    sext_ln190_960_fu_18639_p1 = esl_sext<64,55>(mul_ln190_224_fu_18633_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_962_fu_18658_p1() {
    sext_ln190_962_fu_18658_p1 = esl_sext<64,55>(mul_ln190_225_fu_18652_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_964_fu_18733_p1() {
    sext_ln190_964_fu_18733_p1 = esl_sext<64,55>(mul_ln190_226_fu_18727_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_966_fu_18752_p1() {
    sext_ln190_966_fu_18752_p1 = esl_sext<64,55>(mul_ln190_227_fu_18746_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_968_fu_18827_p1() {
    sext_ln190_968_fu_18827_p1 = esl_sext<64,55>(mul_ln190_228_fu_18821_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_970_fu_18846_p1() {
    sext_ln190_970_fu_18846_p1 = esl_sext<64,55>(mul_ln190_229_fu_18840_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_972_fu_18921_p1() {
    sext_ln190_972_fu_18921_p1 = esl_sext<64,55>(mul_ln190_230_fu_18915_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_974_fu_18940_p1() {
    sext_ln190_974_fu_18940_p1 = esl_sext<64,55>(mul_ln190_231_fu_18934_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_976_fu_19015_p1() {
    sext_ln190_976_fu_19015_p1 = esl_sext<64,55>(mul_ln190_232_fu_19009_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_978_fu_19034_p1() {
    sext_ln190_978_fu_19034_p1 = esl_sext<64,55>(mul_ln190_233_fu_19028_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_980_fu_19109_p1() {
    sext_ln190_980_fu_19109_p1 = esl_sext<64,55>(mul_ln190_234_fu_19103_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_982_fu_19128_p1() {
    sext_ln190_982_fu_19128_p1 = esl_sext<64,55>(mul_ln190_235_fu_19122_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_984_fu_19203_p1() {
    sext_ln190_984_fu_19203_p1 = esl_sext<64,55>(mul_ln190_236_fu_19197_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_986_fu_19222_p1() {
    sext_ln190_986_fu_19222_p1 = esl_sext<64,55>(mul_ln190_237_fu_19216_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_988_fu_19297_p1() {
    sext_ln190_988_fu_19297_p1 = esl_sext<64,55>(mul_ln190_238_fu_19291_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_990_fu_19316_p1() {
    sext_ln190_990_fu_19316_p1 = esl_sext<64,55>(mul_ln190_239_fu_19310_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_992_fu_19391_p1() {
    sext_ln190_992_fu_19391_p1 = esl_sext<64,55>(mul_ln190_240_fu_19385_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_994_fu_19410_p1() {
    sext_ln190_994_fu_19410_p1 = esl_sext<64,55>(mul_ln190_241_fu_19404_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_996_fu_19485_p1() {
    sext_ln190_996_fu_19485_p1 = esl_sext<64,55>(mul_ln190_242_fu_19479_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln190_998_fu_19504_p1() {
    sext_ln190_998_fu_19504_p1 = esl_sext<64,55>(mul_ln190_243_fu_19498_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4690_fu_8013_p3() {
    tmp_4690_fu_8013_p3 = esl_concat<4,10>(a_coeffs_offset.read(), ap_const_lv10_0);
}

void pqcrystals_dilithium_14::thread_tmp_4691_fu_8032_p3() {
    tmp_4691_fu_8032_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_fu_8026_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4692_fu_8046_p3() {
    tmp_4692_fu_8046_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_510_fu_8041_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4693_fu_8060_p3() {
    tmp_4693_fu_8060_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_511_fu_8055_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4694_fu_8140_p3() {
    tmp_4694_fu_8140_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_512_fu_8135_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4695_fu_8154_p3() {
    tmp_4695_fu_8154_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_513_fu_8149_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4696_fu_8234_p3() {
    tmp_4696_fu_8234_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_514_fu_8229_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4697_fu_8248_p3() {
    tmp_4697_fu_8248_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_515_fu_8243_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4698_fu_8328_p3() {
    tmp_4698_fu_8328_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_516_fu_8323_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4699_fu_8342_p3() {
    tmp_4699_fu_8342_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_517_fu_8337_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4700_fu_8422_p3() {
    tmp_4700_fu_8422_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_518_fu_8417_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4701_fu_8436_p3() {
    tmp_4701_fu_8436_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_519_fu_8431_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4702_fu_8516_p3() {
    tmp_4702_fu_8516_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_520_fu_8511_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4703_fu_8530_p3() {
    tmp_4703_fu_8530_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_521_fu_8525_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4704_fu_8610_p3() {
    tmp_4704_fu_8610_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_522_fu_8605_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4705_fu_8624_p3() {
    tmp_4705_fu_8624_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_523_fu_8619_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4706_fu_8704_p3() {
    tmp_4706_fu_8704_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_524_fu_8699_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4707_fu_8718_p3() {
    tmp_4707_fu_8718_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_525_fu_8713_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4708_fu_8798_p3() {
    tmp_4708_fu_8798_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_526_fu_8793_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4709_fu_8812_p3() {
    tmp_4709_fu_8812_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_527_fu_8807_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4710_fu_8892_p3() {
    tmp_4710_fu_8892_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_528_fu_8887_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4711_fu_8906_p3() {
    tmp_4711_fu_8906_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_529_fu_8901_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4712_fu_8986_p3() {
    tmp_4712_fu_8986_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_530_fu_8981_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4713_fu_9000_p3() {
    tmp_4713_fu_9000_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_531_fu_8995_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4714_fu_9080_p3() {
    tmp_4714_fu_9080_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_532_fu_9075_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4715_fu_9094_p3() {
    tmp_4715_fu_9094_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_533_fu_9089_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4716_fu_9174_p3() {
    tmp_4716_fu_9174_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_534_fu_9169_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4717_fu_9188_p3() {
    tmp_4717_fu_9188_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_535_fu_9183_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4718_fu_9268_p3() {
    tmp_4718_fu_9268_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_536_fu_9263_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4719_fu_9282_p3() {
    tmp_4719_fu_9282_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_537_fu_9277_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4720_fu_9362_p3() {
    tmp_4720_fu_9362_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_538_fu_9357_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4721_fu_9376_p3() {
    tmp_4721_fu_9376_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_539_fu_9371_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4722_fu_9456_p3() {
    tmp_4722_fu_9456_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_540_fu_9451_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4723_fu_9470_p3() {
    tmp_4723_fu_9470_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_541_fu_9465_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4724_fu_9550_p3() {
    tmp_4724_fu_9550_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_542_fu_9545_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4725_fu_9564_p3() {
    tmp_4725_fu_9564_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_543_fu_9559_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4726_fu_9644_p3() {
    tmp_4726_fu_9644_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_544_fu_9639_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4727_fu_9658_p3() {
    tmp_4727_fu_9658_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_545_fu_9653_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4728_fu_9738_p3() {
    tmp_4728_fu_9738_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_546_fu_9733_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4729_fu_9752_p3() {
    tmp_4729_fu_9752_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_547_fu_9747_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4730_fu_9832_p3() {
    tmp_4730_fu_9832_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_548_fu_9827_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4731_fu_9846_p3() {
    tmp_4731_fu_9846_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_549_fu_9841_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4732_fu_9926_p3() {
    tmp_4732_fu_9926_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_550_fu_9921_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4733_fu_9940_p3() {
    tmp_4733_fu_9940_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_551_fu_9935_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4734_fu_10020_p3() {
    tmp_4734_fu_10020_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_552_fu_10015_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4735_fu_10034_p3() {
    tmp_4735_fu_10034_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_553_fu_10029_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4736_fu_10114_p3() {
    tmp_4736_fu_10114_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_554_fu_10109_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4737_fu_10128_p3() {
    tmp_4737_fu_10128_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_555_fu_10123_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4738_fu_10208_p3() {
    tmp_4738_fu_10208_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_556_fu_10203_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4739_fu_10222_p3() {
    tmp_4739_fu_10222_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_557_fu_10217_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4740_fu_10302_p3() {
    tmp_4740_fu_10302_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_558_fu_10297_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4741_fu_10316_p3() {
    tmp_4741_fu_10316_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_559_fu_10311_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4742_fu_10396_p3() {
    tmp_4742_fu_10396_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_560_fu_10391_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4743_fu_10410_p3() {
    tmp_4743_fu_10410_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_561_fu_10405_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4744_fu_10490_p3() {
    tmp_4744_fu_10490_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_562_fu_10485_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4745_fu_10504_p3() {
    tmp_4745_fu_10504_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_563_fu_10499_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4746_fu_10584_p3() {
    tmp_4746_fu_10584_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_564_fu_10579_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4747_fu_10598_p3() {
    tmp_4747_fu_10598_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_565_fu_10593_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4748_fu_10678_p3() {
    tmp_4748_fu_10678_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_566_fu_10673_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_4749_fu_10692_p3() {
    tmp_4749_fu_10692_p3 = esl_concat<50,14>(ap_const_lv50_0, or_ln190_567_fu_10687_p2.read());
}

}

