#include "pqcrystals_dilithium_14.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_14::thread_mul_ln186_61_fu_10944_p1() {
    mul_ln186_61_fu_10944_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_61_fu_10944_p2() {
    mul_ln186_61_fu_10944_p2 = (!mul_ln186_61_fu_10944_p0.read().is_01() || !mul_ln186_61_fu_10944_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_61_fu_10944_p0.read()) * sc_bigint<32>(mul_ln186_61_fu_10944_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_62_fu_11019_p0() {
    mul_ln186_62_fu_11019_p0 =  (sc_lv<23>) (mul_ln186_62_fu_11019_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_62_fu_11019_p00() {
    mul_ln186_62_fu_11019_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_62_fu_11019_p1() {
    mul_ln186_62_fu_11019_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_62_fu_11019_p2() {
    mul_ln186_62_fu_11019_p2 = (!mul_ln186_62_fu_11019_p0.read().is_01() || !mul_ln186_62_fu_11019_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_62_fu_11019_p0.read()) * sc_bigint<32>(mul_ln186_62_fu_11019_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_63_fu_11038_p0() {
    mul_ln186_63_fu_11038_p0 =  (sc_lv<23>) (mul_ln186_63_fu_11038_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_63_fu_11038_p00() {
    mul_ln186_63_fu_11038_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_63_fu_11038_p1() {
    mul_ln186_63_fu_11038_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_63_fu_11038_p2() {
    mul_ln186_63_fu_11038_p2 = (!mul_ln186_63_fu_11038_p0.read().is_01() || !mul_ln186_63_fu_11038_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_63_fu_11038_p0.read()) * sc_bigint<32>(mul_ln186_63_fu_11038_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_64_fu_11113_p0() {
    mul_ln186_64_fu_11113_p0 =  (sc_lv<23>) (mul_ln186_64_fu_11113_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_64_fu_11113_p00() {
    mul_ln186_64_fu_11113_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_64_fu_11113_p1() {
    mul_ln186_64_fu_11113_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_64_fu_11113_p2() {
    mul_ln186_64_fu_11113_p2 = (!mul_ln186_64_fu_11113_p0.read().is_01() || !mul_ln186_64_fu_11113_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_64_fu_11113_p0.read()) * sc_bigint<32>(mul_ln186_64_fu_11113_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_65_fu_11132_p0() {
    mul_ln186_65_fu_11132_p0 =  (sc_lv<23>) (mul_ln186_65_fu_11132_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_65_fu_11132_p00() {
    mul_ln186_65_fu_11132_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_65_fu_11132_p1() {
    mul_ln186_65_fu_11132_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_65_fu_11132_p2() {
    mul_ln186_65_fu_11132_p2 = (!mul_ln186_65_fu_11132_p0.read().is_01() || !mul_ln186_65_fu_11132_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_65_fu_11132_p0.read()) * sc_bigint<32>(mul_ln186_65_fu_11132_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_66_fu_11207_p0() {
    mul_ln186_66_fu_11207_p0 =  (sc_lv<23>) (mul_ln186_66_fu_11207_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_66_fu_11207_p00() {
    mul_ln186_66_fu_11207_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_66_fu_11207_p1() {
    mul_ln186_66_fu_11207_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_66_fu_11207_p2() {
    mul_ln186_66_fu_11207_p2 = (!mul_ln186_66_fu_11207_p0.read().is_01() || !mul_ln186_66_fu_11207_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_66_fu_11207_p0.read()) * sc_bigint<32>(mul_ln186_66_fu_11207_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_67_fu_11226_p0() {
    mul_ln186_67_fu_11226_p0 =  (sc_lv<23>) (mul_ln186_67_fu_11226_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_67_fu_11226_p00() {
    mul_ln186_67_fu_11226_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_67_fu_11226_p1() {
    mul_ln186_67_fu_11226_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_67_fu_11226_p2() {
    mul_ln186_67_fu_11226_p2 = (!mul_ln186_67_fu_11226_p0.read().is_01() || !mul_ln186_67_fu_11226_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_67_fu_11226_p0.read()) * sc_bigint<32>(mul_ln186_67_fu_11226_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_68_fu_11301_p0() {
    mul_ln186_68_fu_11301_p0 =  (sc_lv<23>) (mul_ln186_68_fu_11301_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_68_fu_11301_p00() {
    mul_ln186_68_fu_11301_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_68_fu_11301_p1() {
    mul_ln186_68_fu_11301_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_68_fu_11301_p2() {
    mul_ln186_68_fu_11301_p2 = (!mul_ln186_68_fu_11301_p0.read().is_01() || !mul_ln186_68_fu_11301_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_68_fu_11301_p0.read()) * sc_bigint<32>(mul_ln186_68_fu_11301_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_69_fu_11320_p0() {
    mul_ln186_69_fu_11320_p0 =  (sc_lv<23>) (mul_ln186_69_fu_11320_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_69_fu_11320_p00() {
    mul_ln186_69_fu_11320_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_69_fu_11320_p1() {
    mul_ln186_69_fu_11320_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_69_fu_11320_p2() {
    mul_ln186_69_fu_11320_p2 = (!mul_ln186_69_fu_11320_p0.read().is_01() || !mul_ln186_69_fu_11320_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_69_fu_11320_p0.read()) * sc_bigint<32>(mul_ln186_69_fu_11320_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_6_fu_8387_p0() {
    mul_ln186_6_fu_8387_p0 =  (sc_lv<23>) (mul_ln186_6_fu_8387_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_6_fu_8387_p00() {
    mul_ln186_6_fu_8387_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_6_fu_8387_p1() {
    mul_ln186_6_fu_8387_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_6_fu_8387_p2() {
    mul_ln186_6_fu_8387_p2 = (!mul_ln186_6_fu_8387_p0.read().is_01() || !mul_ln186_6_fu_8387_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_6_fu_8387_p0.read()) * sc_bigint<32>(mul_ln186_6_fu_8387_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_70_fu_11395_p0() {
    mul_ln186_70_fu_11395_p0 =  (sc_lv<23>) (mul_ln186_70_fu_11395_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_70_fu_11395_p00() {
    mul_ln186_70_fu_11395_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_70_fu_11395_p1() {
    mul_ln186_70_fu_11395_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_70_fu_11395_p2() {
    mul_ln186_70_fu_11395_p2 = (!mul_ln186_70_fu_11395_p0.read().is_01() || !mul_ln186_70_fu_11395_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_70_fu_11395_p0.read()) * sc_bigint<32>(mul_ln186_70_fu_11395_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_71_fu_11414_p0() {
    mul_ln186_71_fu_11414_p0 =  (sc_lv<23>) (mul_ln186_71_fu_11414_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_71_fu_11414_p00() {
    mul_ln186_71_fu_11414_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_71_fu_11414_p1() {
    mul_ln186_71_fu_11414_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_71_fu_11414_p2() {
    mul_ln186_71_fu_11414_p2 = (!mul_ln186_71_fu_11414_p0.read().is_01() || !mul_ln186_71_fu_11414_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_71_fu_11414_p0.read()) * sc_bigint<32>(mul_ln186_71_fu_11414_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_72_fu_11489_p0() {
    mul_ln186_72_fu_11489_p0 =  (sc_lv<23>) (mul_ln186_72_fu_11489_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_72_fu_11489_p00() {
    mul_ln186_72_fu_11489_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_72_fu_11489_p1() {
    mul_ln186_72_fu_11489_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_72_fu_11489_p2() {
    mul_ln186_72_fu_11489_p2 = (!mul_ln186_72_fu_11489_p0.read().is_01() || !mul_ln186_72_fu_11489_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_72_fu_11489_p0.read()) * sc_bigint<32>(mul_ln186_72_fu_11489_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_73_fu_11508_p0() {
    mul_ln186_73_fu_11508_p0 =  (sc_lv<23>) (mul_ln186_73_fu_11508_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_73_fu_11508_p00() {
    mul_ln186_73_fu_11508_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_73_fu_11508_p1() {
    mul_ln186_73_fu_11508_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_73_fu_11508_p2() {
    mul_ln186_73_fu_11508_p2 = (!mul_ln186_73_fu_11508_p0.read().is_01() || !mul_ln186_73_fu_11508_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_73_fu_11508_p0.read()) * sc_bigint<32>(mul_ln186_73_fu_11508_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_74_fu_11583_p0() {
    mul_ln186_74_fu_11583_p0 =  (sc_lv<23>) (mul_ln186_74_fu_11583_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_74_fu_11583_p00() {
    mul_ln186_74_fu_11583_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_74_fu_11583_p1() {
    mul_ln186_74_fu_11583_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_74_fu_11583_p2() {
    mul_ln186_74_fu_11583_p2 = (!mul_ln186_74_fu_11583_p0.read().is_01() || !mul_ln186_74_fu_11583_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_74_fu_11583_p0.read()) * sc_bigint<32>(mul_ln186_74_fu_11583_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_75_fu_11602_p0() {
    mul_ln186_75_fu_11602_p0 =  (sc_lv<23>) (mul_ln186_75_fu_11602_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_75_fu_11602_p00() {
    mul_ln186_75_fu_11602_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_75_fu_11602_p1() {
    mul_ln186_75_fu_11602_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_75_fu_11602_p2() {
    mul_ln186_75_fu_11602_p2 = (!mul_ln186_75_fu_11602_p0.read().is_01() || !mul_ln186_75_fu_11602_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_75_fu_11602_p0.read()) * sc_bigint<32>(mul_ln186_75_fu_11602_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_76_fu_11677_p0() {
    mul_ln186_76_fu_11677_p0 =  (sc_lv<23>) (mul_ln186_76_fu_11677_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_76_fu_11677_p00() {
    mul_ln186_76_fu_11677_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_76_fu_11677_p1() {
    mul_ln186_76_fu_11677_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_76_fu_11677_p2() {
    mul_ln186_76_fu_11677_p2 = (!mul_ln186_76_fu_11677_p0.read().is_01() || !mul_ln186_76_fu_11677_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_76_fu_11677_p0.read()) * sc_bigint<32>(mul_ln186_76_fu_11677_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_77_fu_11696_p0() {
    mul_ln186_77_fu_11696_p0 =  (sc_lv<23>) (mul_ln186_77_fu_11696_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_77_fu_11696_p00() {
    mul_ln186_77_fu_11696_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_77_fu_11696_p1() {
    mul_ln186_77_fu_11696_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_77_fu_11696_p2() {
    mul_ln186_77_fu_11696_p2 = (!mul_ln186_77_fu_11696_p0.read().is_01() || !mul_ln186_77_fu_11696_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_77_fu_11696_p0.read()) * sc_bigint<32>(mul_ln186_77_fu_11696_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_78_fu_11771_p0() {
    mul_ln186_78_fu_11771_p0 =  (sc_lv<23>) (mul_ln186_78_fu_11771_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_78_fu_11771_p00() {
    mul_ln186_78_fu_11771_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_78_fu_11771_p1() {
    mul_ln186_78_fu_11771_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_78_fu_11771_p2() {
    mul_ln186_78_fu_11771_p2 = (!mul_ln186_78_fu_11771_p0.read().is_01() || !mul_ln186_78_fu_11771_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_78_fu_11771_p0.read()) * sc_bigint<32>(mul_ln186_78_fu_11771_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_79_fu_11790_p0() {
    mul_ln186_79_fu_11790_p0 =  (sc_lv<23>) (mul_ln186_79_fu_11790_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_79_fu_11790_p00() {
    mul_ln186_79_fu_11790_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_79_fu_11790_p1() {
    mul_ln186_79_fu_11790_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_79_fu_11790_p2() {
    mul_ln186_79_fu_11790_p2 = (!mul_ln186_79_fu_11790_p0.read().is_01() || !mul_ln186_79_fu_11790_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_79_fu_11790_p0.read()) * sc_bigint<32>(mul_ln186_79_fu_11790_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_7_fu_8406_p0() {
    mul_ln186_7_fu_8406_p0 =  (sc_lv<23>) (mul_ln186_7_fu_8406_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_7_fu_8406_p00() {
    mul_ln186_7_fu_8406_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_7_fu_8406_p1() {
    mul_ln186_7_fu_8406_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_7_fu_8406_p2() {
    mul_ln186_7_fu_8406_p2 = (!mul_ln186_7_fu_8406_p0.read().is_01() || !mul_ln186_7_fu_8406_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_7_fu_8406_p0.read()) * sc_bigint<32>(mul_ln186_7_fu_8406_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_80_fu_11865_p0() {
    mul_ln186_80_fu_11865_p0 =  (sc_lv<23>) (mul_ln186_80_fu_11865_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_80_fu_11865_p00() {
    mul_ln186_80_fu_11865_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_80_fu_11865_p1() {
    mul_ln186_80_fu_11865_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_80_fu_11865_p2() {
    mul_ln186_80_fu_11865_p2 = (!mul_ln186_80_fu_11865_p0.read().is_01() || !mul_ln186_80_fu_11865_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_80_fu_11865_p0.read()) * sc_bigint<32>(mul_ln186_80_fu_11865_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_81_fu_11884_p0() {
    mul_ln186_81_fu_11884_p0 =  (sc_lv<23>) (mul_ln186_81_fu_11884_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_81_fu_11884_p00() {
    mul_ln186_81_fu_11884_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_81_fu_11884_p1() {
    mul_ln186_81_fu_11884_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_81_fu_11884_p2() {
    mul_ln186_81_fu_11884_p2 = (!mul_ln186_81_fu_11884_p0.read().is_01() || !mul_ln186_81_fu_11884_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_81_fu_11884_p0.read()) * sc_bigint<32>(mul_ln186_81_fu_11884_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_82_fu_11959_p0() {
    mul_ln186_82_fu_11959_p0 =  (sc_lv<23>) (mul_ln186_82_fu_11959_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_82_fu_11959_p00() {
    mul_ln186_82_fu_11959_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_82_fu_11959_p1() {
    mul_ln186_82_fu_11959_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_82_fu_11959_p2() {
    mul_ln186_82_fu_11959_p2 = (!mul_ln186_82_fu_11959_p0.read().is_01() || !mul_ln186_82_fu_11959_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_82_fu_11959_p0.read()) * sc_bigint<32>(mul_ln186_82_fu_11959_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_83_fu_11978_p0() {
    mul_ln186_83_fu_11978_p0 =  (sc_lv<23>) (mul_ln186_83_fu_11978_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_83_fu_11978_p00() {
    mul_ln186_83_fu_11978_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_83_fu_11978_p1() {
    mul_ln186_83_fu_11978_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_83_fu_11978_p2() {
    mul_ln186_83_fu_11978_p2 = (!mul_ln186_83_fu_11978_p0.read().is_01() || !mul_ln186_83_fu_11978_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_83_fu_11978_p0.read()) * sc_bigint<32>(mul_ln186_83_fu_11978_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_84_fu_12053_p0() {
    mul_ln186_84_fu_12053_p0 =  (sc_lv<23>) (mul_ln186_84_fu_12053_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_84_fu_12053_p00() {
    mul_ln186_84_fu_12053_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_84_fu_12053_p1() {
    mul_ln186_84_fu_12053_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_84_fu_12053_p2() {
    mul_ln186_84_fu_12053_p2 = (!mul_ln186_84_fu_12053_p0.read().is_01() || !mul_ln186_84_fu_12053_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_84_fu_12053_p0.read()) * sc_bigint<32>(mul_ln186_84_fu_12053_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_85_fu_12072_p0() {
    mul_ln186_85_fu_12072_p0 =  (sc_lv<23>) (mul_ln186_85_fu_12072_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_85_fu_12072_p00() {
    mul_ln186_85_fu_12072_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_85_fu_12072_p1() {
    mul_ln186_85_fu_12072_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_85_fu_12072_p2() {
    mul_ln186_85_fu_12072_p2 = (!mul_ln186_85_fu_12072_p0.read().is_01() || !mul_ln186_85_fu_12072_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_85_fu_12072_p0.read()) * sc_bigint<32>(mul_ln186_85_fu_12072_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_86_fu_12147_p0() {
    mul_ln186_86_fu_12147_p0 =  (sc_lv<23>) (mul_ln186_86_fu_12147_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_86_fu_12147_p00() {
    mul_ln186_86_fu_12147_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_86_fu_12147_p1() {
    mul_ln186_86_fu_12147_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_86_fu_12147_p2() {
    mul_ln186_86_fu_12147_p2 = (!mul_ln186_86_fu_12147_p0.read().is_01() || !mul_ln186_86_fu_12147_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_86_fu_12147_p0.read()) * sc_bigint<32>(mul_ln186_86_fu_12147_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_87_fu_12166_p0() {
    mul_ln186_87_fu_12166_p0 =  (sc_lv<23>) (mul_ln186_87_fu_12166_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_87_fu_12166_p00() {
    mul_ln186_87_fu_12166_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_87_fu_12166_p1() {
    mul_ln186_87_fu_12166_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_87_fu_12166_p2() {
    mul_ln186_87_fu_12166_p2 = (!mul_ln186_87_fu_12166_p0.read().is_01() || !mul_ln186_87_fu_12166_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_87_fu_12166_p0.read()) * sc_bigint<32>(mul_ln186_87_fu_12166_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_88_fu_12241_p0() {
    mul_ln186_88_fu_12241_p0 =  (sc_lv<23>) (mul_ln186_88_fu_12241_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_88_fu_12241_p00() {
    mul_ln186_88_fu_12241_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_88_fu_12241_p1() {
    mul_ln186_88_fu_12241_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_88_fu_12241_p2() {
    mul_ln186_88_fu_12241_p2 = (!mul_ln186_88_fu_12241_p0.read().is_01() || !mul_ln186_88_fu_12241_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_88_fu_12241_p0.read()) * sc_bigint<32>(mul_ln186_88_fu_12241_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_89_fu_12260_p0() {
    mul_ln186_89_fu_12260_p0 =  (sc_lv<23>) (mul_ln186_89_fu_12260_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_89_fu_12260_p00() {
    mul_ln186_89_fu_12260_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_89_fu_12260_p1() {
    mul_ln186_89_fu_12260_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_89_fu_12260_p2() {
    mul_ln186_89_fu_12260_p2 = (!mul_ln186_89_fu_12260_p0.read().is_01() || !mul_ln186_89_fu_12260_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_89_fu_12260_p0.read()) * sc_bigint<32>(mul_ln186_89_fu_12260_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_8_fu_8481_p0() {
    mul_ln186_8_fu_8481_p0 =  (sc_lv<23>) (mul_ln186_8_fu_8481_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_8_fu_8481_p00() {
    mul_ln186_8_fu_8481_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_8_fu_8481_p1() {
    mul_ln186_8_fu_8481_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_8_fu_8481_p2() {
    mul_ln186_8_fu_8481_p2 = (!mul_ln186_8_fu_8481_p0.read().is_01() || !mul_ln186_8_fu_8481_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_8_fu_8481_p0.read()) * sc_bigint<32>(mul_ln186_8_fu_8481_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_90_fu_12335_p0() {
    mul_ln186_90_fu_12335_p0 =  (sc_lv<23>) (mul_ln186_90_fu_12335_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_90_fu_12335_p00() {
    mul_ln186_90_fu_12335_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_90_fu_12335_p1() {
    mul_ln186_90_fu_12335_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_90_fu_12335_p2() {
    mul_ln186_90_fu_12335_p2 = (!mul_ln186_90_fu_12335_p0.read().is_01() || !mul_ln186_90_fu_12335_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_90_fu_12335_p0.read()) * sc_bigint<32>(mul_ln186_90_fu_12335_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_91_fu_12354_p0() {
    mul_ln186_91_fu_12354_p0 =  (sc_lv<23>) (mul_ln186_91_fu_12354_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_91_fu_12354_p00() {
    mul_ln186_91_fu_12354_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_91_fu_12354_p1() {
    mul_ln186_91_fu_12354_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_91_fu_12354_p2() {
    mul_ln186_91_fu_12354_p2 = (!mul_ln186_91_fu_12354_p0.read().is_01() || !mul_ln186_91_fu_12354_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_91_fu_12354_p0.read()) * sc_bigint<32>(mul_ln186_91_fu_12354_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_92_fu_12429_p0() {
    mul_ln186_92_fu_12429_p0 =  (sc_lv<23>) (mul_ln186_92_fu_12429_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_92_fu_12429_p00() {
    mul_ln186_92_fu_12429_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_92_fu_12429_p1() {
    mul_ln186_92_fu_12429_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_92_fu_12429_p2() {
    mul_ln186_92_fu_12429_p2 = (!mul_ln186_92_fu_12429_p0.read().is_01() || !mul_ln186_92_fu_12429_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_92_fu_12429_p0.read()) * sc_bigint<32>(mul_ln186_92_fu_12429_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_93_fu_12448_p0() {
    mul_ln186_93_fu_12448_p0 =  (sc_lv<23>) (mul_ln186_93_fu_12448_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_93_fu_12448_p00() {
    mul_ln186_93_fu_12448_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_93_fu_12448_p1() {
    mul_ln186_93_fu_12448_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_93_fu_12448_p2() {
    mul_ln186_93_fu_12448_p2 = (!mul_ln186_93_fu_12448_p0.read().is_01() || !mul_ln186_93_fu_12448_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_93_fu_12448_p0.read()) * sc_bigint<32>(mul_ln186_93_fu_12448_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_94_fu_12523_p0() {
    mul_ln186_94_fu_12523_p0 =  (sc_lv<23>) (mul_ln186_94_fu_12523_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_94_fu_12523_p00() {
    mul_ln186_94_fu_12523_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_94_fu_12523_p1() {
    mul_ln186_94_fu_12523_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_94_fu_12523_p2() {
    mul_ln186_94_fu_12523_p2 = (!mul_ln186_94_fu_12523_p0.read().is_01() || !mul_ln186_94_fu_12523_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_94_fu_12523_p0.read()) * sc_bigint<32>(mul_ln186_94_fu_12523_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_95_fu_12542_p0() {
    mul_ln186_95_fu_12542_p0 =  (sc_lv<23>) (mul_ln186_95_fu_12542_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_95_fu_12542_p00() {
    mul_ln186_95_fu_12542_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_95_fu_12542_p1() {
    mul_ln186_95_fu_12542_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_95_fu_12542_p2() {
    mul_ln186_95_fu_12542_p2 = (!mul_ln186_95_fu_12542_p0.read().is_01() || !mul_ln186_95_fu_12542_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_95_fu_12542_p0.read()) * sc_bigint<32>(mul_ln186_95_fu_12542_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_96_fu_12617_p0() {
    mul_ln186_96_fu_12617_p0 =  (sc_lv<23>) (mul_ln186_96_fu_12617_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_96_fu_12617_p00() {
    mul_ln186_96_fu_12617_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_96_fu_12617_p1() {
    mul_ln186_96_fu_12617_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_96_fu_12617_p2() {
    mul_ln186_96_fu_12617_p2 = (!mul_ln186_96_fu_12617_p0.read().is_01() || !mul_ln186_96_fu_12617_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_96_fu_12617_p0.read()) * sc_bigint<32>(mul_ln186_96_fu_12617_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_97_fu_12636_p0() {
    mul_ln186_97_fu_12636_p0 =  (sc_lv<23>) (mul_ln186_97_fu_12636_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_97_fu_12636_p00() {
    mul_ln186_97_fu_12636_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_97_fu_12636_p1() {
    mul_ln186_97_fu_12636_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_97_fu_12636_p2() {
    mul_ln186_97_fu_12636_p2 = (!mul_ln186_97_fu_12636_p0.read().is_01() || !mul_ln186_97_fu_12636_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_97_fu_12636_p0.read()) * sc_bigint<32>(mul_ln186_97_fu_12636_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_98_fu_12711_p0() {
    mul_ln186_98_fu_12711_p0 =  (sc_lv<23>) (mul_ln186_98_fu_12711_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_98_fu_12711_p00() {
    mul_ln186_98_fu_12711_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_98_fu_12711_p1() {
    mul_ln186_98_fu_12711_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_98_fu_12711_p2() {
    mul_ln186_98_fu_12711_p2 = (!mul_ln186_98_fu_12711_p0.read().is_01() || !mul_ln186_98_fu_12711_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_98_fu_12711_p0.read()) * sc_bigint<32>(mul_ln186_98_fu_12711_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_99_fu_12730_p0() {
    mul_ln186_99_fu_12730_p0 =  (sc_lv<23>) (mul_ln186_99_fu_12730_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_99_fu_12730_p00() {
    mul_ln186_99_fu_12730_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_99_fu_12730_p1() {
    mul_ln186_99_fu_12730_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_99_fu_12730_p2() {
    mul_ln186_99_fu_12730_p2 = (!mul_ln186_99_fu_12730_p0.read().is_01() || !mul_ln186_99_fu_12730_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_99_fu_12730_p0.read()) * sc_bigint<32>(mul_ln186_99_fu_12730_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_9_fu_8500_p0() {
    mul_ln186_9_fu_8500_p0 =  (sc_lv<23>) (mul_ln186_9_fu_8500_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_9_fu_8500_p00() {
    mul_ln186_9_fu_8500_p00 = esl_zext<55,23>(a_coeffs_q1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_9_fu_8500_p1() {
    mul_ln186_9_fu_8500_p1 = b_coeffs_q1.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_9_fu_8500_p2() {
    mul_ln186_9_fu_8500_p2 = (!mul_ln186_9_fu_8500_p0.read().is_01() || !mul_ln186_9_fu_8500_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_9_fu_8500_p0.read()) * sc_bigint<32>(mul_ln186_9_fu_8500_p1.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_fu_8105_p0() {
    mul_ln186_fu_8105_p0 =  (sc_lv<23>) (mul_ln186_fu_8105_p00.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_fu_8105_p00() {
    mul_ln186_fu_8105_p00 = esl_zext<55,23>(a_coeffs_q0.read());
}

void pqcrystals_dilithium_14::thread_mul_ln186_fu_8105_p1() {
    mul_ln186_fu_8105_p1 = b_coeffs_q0.read();
}

void pqcrystals_dilithium_14::thread_mul_ln186_fu_8105_p2() {
    mul_ln186_fu_8105_p2 = (!mul_ln186_fu_8105_p0.read().is_01() || !mul_ln186_fu_8105_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(mul_ln186_fu_8105_p0.read()) * sc_bigint<32>(mul_ln186_fu_8105_p1.read());
}

void pqcrystals_dilithium_14::thread_or_ln186_1000_fu_19175_p2() {
    or_ln186_1000_fu_19175_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_ED);
}

void pqcrystals_dilithium_14::thread_or_ln186_1001_fu_19255_p2() {
    or_ln186_1001_fu_19255_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_EE);
}

void pqcrystals_dilithium_14::thread_or_ln186_1002_fu_19269_p2() {
    or_ln186_1002_fu_19269_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_EF);
}

void pqcrystals_dilithium_14::thread_or_ln186_1003_fu_19349_p2() {
    or_ln186_1003_fu_19349_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F0);
}

void pqcrystals_dilithium_14::thread_or_ln186_1004_fu_19363_p2() {
    or_ln186_1004_fu_19363_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F1);
}

void pqcrystals_dilithium_14::thread_or_ln186_1005_fu_19443_p2() {
    or_ln186_1005_fu_19443_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F2);
}

void pqcrystals_dilithium_14::thread_or_ln186_1006_fu_19457_p2() {
    or_ln186_1006_fu_19457_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F3);
}

void pqcrystals_dilithium_14::thread_or_ln186_1007_fu_19537_p2() {
    or_ln186_1007_fu_19537_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F4);
}

void pqcrystals_dilithium_14::thread_or_ln186_1008_fu_19551_p2() {
    or_ln186_1008_fu_19551_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F5);
}

void pqcrystals_dilithium_14::thread_or_ln186_1009_fu_19631_p2() {
    or_ln186_1009_fu_19631_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F6);
}

void pqcrystals_dilithium_14::thread_or_ln186_1010_fu_19645_p2() {
    or_ln186_1010_fu_19645_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F7);
}

void pqcrystals_dilithium_14::thread_or_ln186_1011_fu_19725_p2() {
    or_ln186_1011_fu_19725_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F8);
}

void pqcrystals_dilithium_14::thread_or_ln186_1012_fu_19739_p2() {
    or_ln186_1012_fu_19739_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F9);
}

void pqcrystals_dilithium_14::thread_or_ln186_1013_fu_19819_p2() {
    or_ln186_1013_fu_19819_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_FA);
}

void pqcrystals_dilithium_14::thread_or_ln186_1014_fu_19833_p2() {
    or_ln186_1014_fu_19833_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_FB);
}

void pqcrystals_dilithium_14::thread_or_ln186_1015_fu_19913_p2() {
    or_ln186_1015_fu_19913_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_FC);
}

void pqcrystals_dilithium_14::thread_or_ln186_1016_fu_19927_p2() {
    or_ln186_1016_fu_19927_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_FD);
}

void pqcrystals_dilithium_14::thread_or_ln186_1017_fu_19979_p2() {
    or_ln186_1017_fu_19979_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_FE);
}

void pqcrystals_dilithium_14::thread_or_ln186_1018_fu_19993_p2() {
    or_ln186_1018_fu_19993_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_FF);
}

void pqcrystals_dilithium_14::thread_or_ln186_510_fu_8041_p2() {
    or_ln186_510_fu_8041_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2);
}

void pqcrystals_dilithium_14::thread_or_ln186_511_fu_8055_p2() {
    or_ln186_511_fu_8055_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3);
}

void pqcrystals_dilithium_14::thread_or_ln186_512_fu_8135_p2() {
    or_ln186_512_fu_8135_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4);
}

void pqcrystals_dilithium_14::thread_or_ln186_513_fu_8149_p2() {
    or_ln186_513_fu_8149_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5);
}

void pqcrystals_dilithium_14::thread_or_ln186_514_fu_8229_p2() {
    or_ln186_514_fu_8229_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6);
}

void pqcrystals_dilithium_14::thread_or_ln186_515_fu_8243_p2() {
    or_ln186_515_fu_8243_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7);
}

void pqcrystals_dilithium_14::thread_or_ln186_516_fu_8323_p2() {
    or_ln186_516_fu_8323_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8);
}

void pqcrystals_dilithium_14::thread_or_ln186_517_fu_8337_p2() {
    or_ln186_517_fu_8337_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9);
}

void pqcrystals_dilithium_14::thread_or_ln186_518_fu_8417_p2() {
    or_ln186_518_fu_8417_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A);
}

void pqcrystals_dilithium_14::thread_or_ln186_519_fu_8431_p2() {
    or_ln186_519_fu_8431_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B);
}

void pqcrystals_dilithium_14::thread_or_ln186_520_fu_8511_p2() {
    or_ln186_520_fu_8511_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C);
}

void pqcrystals_dilithium_14::thread_or_ln186_521_fu_8525_p2() {
    or_ln186_521_fu_8525_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D);
}

void pqcrystals_dilithium_14::thread_or_ln186_522_fu_8605_p2() {
    or_ln186_522_fu_8605_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E);
}

void pqcrystals_dilithium_14::thread_or_ln186_523_fu_8619_p2() {
    or_ln186_523_fu_8619_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F);
}

void pqcrystals_dilithium_14::thread_or_ln186_524_fu_8699_p2() {
    or_ln186_524_fu_8699_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_10);
}

void pqcrystals_dilithium_14::thread_or_ln186_525_fu_8713_p2() {
    or_ln186_525_fu_8713_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_11);
}

void pqcrystals_dilithium_14::thread_or_ln186_526_fu_8793_p2() {
    or_ln186_526_fu_8793_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_12);
}

void pqcrystals_dilithium_14::thread_or_ln186_527_fu_8807_p2() {
    or_ln186_527_fu_8807_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_13);
}

void pqcrystals_dilithium_14::thread_or_ln186_528_fu_8887_p2() {
    or_ln186_528_fu_8887_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_14);
}

void pqcrystals_dilithium_14::thread_or_ln186_529_fu_8901_p2() {
    or_ln186_529_fu_8901_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_15);
}

void pqcrystals_dilithium_14::thread_or_ln186_530_fu_8981_p2() {
    or_ln186_530_fu_8981_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_16);
}

void pqcrystals_dilithium_14::thread_or_ln186_531_fu_8995_p2() {
    or_ln186_531_fu_8995_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_17);
}

void pqcrystals_dilithium_14::thread_or_ln186_532_fu_9075_p2() {
    or_ln186_532_fu_9075_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_18);
}

void pqcrystals_dilithium_14::thread_or_ln186_533_fu_9089_p2() {
    or_ln186_533_fu_9089_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_19);
}

void pqcrystals_dilithium_14::thread_or_ln186_534_fu_9169_p2() {
    or_ln186_534_fu_9169_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_1A);
}

void pqcrystals_dilithium_14::thread_or_ln186_535_fu_9183_p2() {
    or_ln186_535_fu_9183_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_1B);
}

void pqcrystals_dilithium_14::thread_or_ln186_536_fu_9263_p2() {
    or_ln186_536_fu_9263_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_1C);
}

void pqcrystals_dilithium_14::thread_or_ln186_537_fu_9277_p2() {
    or_ln186_537_fu_9277_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_1D);
}

void pqcrystals_dilithium_14::thread_or_ln186_538_fu_9357_p2() {
    or_ln186_538_fu_9357_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_1E);
}

void pqcrystals_dilithium_14::thread_or_ln186_539_fu_9371_p2() {
    or_ln186_539_fu_9371_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_1F);
}

void pqcrystals_dilithium_14::thread_or_ln186_540_fu_9451_p2() {
    or_ln186_540_fu_9451_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_20);
}

void pqcrystals_dilithium_14::thread_or_ln186_541_fu_9465_p2() {
    or_ln186_541_fu_9465_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_21);
}

void pqcrystals_dilithium_14::thread_or_ln186_542_fu_9545_p2() {
    or_ln186_542_fu_9545_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_22);
}

void pqcrystals_dilithium_14::thread_or_ln186_543_fu_9559_p2() {
    or_ln186_543_fu_9559_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_23);
}

void pqcrystals_dilithium_14::thread_or_ln186_544_fu_9639_p2() {
    or_ln186_544_fu_9639_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_24);
}

void pqcrystals_dilithium_14::thread_or_ln186_545_fu_9653_p2() {
    or_ln186_545_fu_9653_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_25);
}

void pqcrystals_dilithium_14::thread_or_ln186_546_fu_9733_p2() {
    or_ln186_546_fu_9733_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_26);
}

void pqcrystals_dilithium_14::thread_or_ln186_547_fu_9747_p2() {
    or_ln186_547_fu_9747_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_27);
}

void pqcrystals_dilithium_14::thread_or_ln186_548_fu_9827_p2() {
    or_ln186_548_fu_9827_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_28);
}

void pqcrystals_dilithium_14::thread_or_ln186_549_fu_9841_p2() {
    or_ln186_549_fu_9841_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_29);
}

void pqcrystals_dilithium_14::thread_or_ln186_550_fu_9921_p2() {
    or_ln186_550_fu_9921_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2A);
}

void pqcrystals_dilithium_14::thread_or_ln186_551_fu_9935_p2() {
    or_ln186_551_fu_9935_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2B);
}

void pqcrystals_dilithium_14::thread_or_ln186_552_fu_10015_p2() {
    or_ln186_552_fu_10015_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2C);
}

void pqcrystals_dilithium_14::thread_or_ln186_553_fu_10029_p2() {
    or_ln186_553_fu_10029_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2D);
}

void pqcrystals_dilithium_14::thread_or_ln186_554_fu_10109_p2() {
    or_ln186_554_fu_10109_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2E);
}

void pqcrystals_dilithium_14::thread_or_ln186_555_fu_10123_p2() {
    or_ln186_555_fu_10123_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_2F);
}

void pqcrystals_dilithium_14::thread_or_ln186_556_fu_10203_p2() {
    or_ln186_556_fu_10203_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_30);
}

void pqcrystals_dilithium_14::thread_or_ln186_557_fu_10217_p2() {
    or_ln186_557_fu_10217_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_31);
}

void pqcrystals_dilithium_14::thread_or_ln186_558_fu_10297_p2() {
    or_ln186_558_fu_10297_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_32);
}

void pqcrystals_dilithium_14::thread_or_ln186_559_fu_10311_p2() {
    or_ln186_559_fu_10311_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_33);
}

void pqcrystals_dilithium_14::thread_or_ln186_560_fu_10391_p2() {
    or_ln186_560_fu_10391_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_34);
}

void pqcrystals_dilithium_14::thread_or_ln186_561_fu_10405_p2() {
    or_ln186_561_fu_10405_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_35);
}

void pqcrystals_dilithium_14::thread_or_ln186_562_fu_10485_p2() {
    or_ln186_562_fu_10485_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_36);
}

void pqcrystals_dilithium_14::thread_or_ln186_563_fu_10499_p2() {
    or_ln186_563_fu_10499_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_37);
}

void pqcrystals_dilithium_14::thread_or_ln186_564_fu_10579_p2() {
    or_ln186_564_fu_10579_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_38);
}

void pqcrystals_dilithium_14::thread_or_ln186_565_fu_10593_p2() {
    or_ln186_565_fu_10593_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_39);
}

void pqcrystals_dilithium_14::thread_or_ln186_566_fu_10673_p2() {
    or_ln186_566_fu_10673_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3A);
}

void pqcrystals_dilithium_14::thread_or_ln186_567_fu_10687_p2() {
    or_ln186_567_fu_10687_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3B);
}

void pqcrystals_dilithium_14::thread_or_ln186_568_fu_10767_p2() {
    or_ln186_568_fu_10767_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3C);
}

void pqcrystals_dilithium_14::thread_or_ln186_569_fu_10781_p2() {
    or_ln186_569_fu_10781_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3D);
}

void pqcrystals_dilithium_14::thread_or_ln186_570_fu_10861_p2() {
    or_ln186_570_fu_10861_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3E);
}

void pqcrystals_dilithium_14::thread_or_ln186_571_fu_10875_p2() {
    or_ln186_571_fu_10875_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_3F);
}

void pqcrystals_dilithium_14::thread_or_ln186_572_fu_10955_p2() {
    or_ln186_572_fu_10955_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_40);
}

void pqcrystals_dilithium_14::thread_or_ln186_573_fu_10969_p2() {
    or_ln186_573_fu_10969_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_41);
}

void pqcrystals_dilithium_14::thread_or_ln186_574_fu_11049_p2() {
    or_ln186_574_fu_11049_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_42);
}

void pqcrystals_dilithium_14::thread_or_ln186_575_fu_11063_p2() {
    or_ln186_575_fu_11063_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_43);
}

void pqcrystals_dilithium_14::thread_or_ln186_576_fu_11143_p2() {
    or_ln186_576_fu_11143_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_44);
}

void pqcrystals_dilithium_14::thread_or_ln186_577_fu_11157_p2() {
    or_ln186_577_fu_11157_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_45);
}

void pqcrystals_dilithium_14::thread_or_ln186_578_fu_11237_p2() {
    or_ln186_578_fu_11237_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_46);
}

void pqcrystals_dilithium_14::thread_or_ln186_579_fu_11251_p2() {
    or_ln186_579_fu_11251_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_47);
}

void pqcrystals_dilithium_14::thread_or_ln186_580_fu_11331_p2() {
    or_ln186_580_fu_11331_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_48);
}

void pqcrystals_dilithium_14::thread_or_ln186_581_fu_11345_p2() {
    or_ln186_581_fu_11345_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_49);
}

void pqcrystals_dilithium_14::thread_or_ln186_582_fu_11425_p2() {
    or_ln186_582_fu_11425_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4A);
}

void pqcrystals_dilithium_14::thread_or_ln186_583_fu_11439_p2() {
    or_ln186_583_fu_11439_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4B);
}

void pqcrystals_dilithium_14::thread_or_ln186_584_fu_11519_p2() {
    or_ln186_584_fu_11519_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4C);
}

void pqcrystals_dilithium_14::thread_or_ln186_585_fu_11533_p2() {
    or_ln186_585_fu_11533_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4D);
}

void pqcrystals_dilithium_14::thread_or_ln186_586_fu_11613_p2() {
    or_ln186_586_fu_11613_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4E);
}

void pqcrystals_dilithium_14::thread_or_ln186_587_fu_11627_p2() {
    or_ln186_587_fu_11627_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_4F);
}

void pqcrystals_dilithium_14::thread_or_ln186_588_fu_11707_p2() {
    or_ln186_588_fu_11707_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_50);
}

void pqcrystals_dilithium_14::thread_or_ln186_589_fu_11721_p2() {
    or_ln186_589_fu_11721_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_51);
}

void pqcrystals_dilithium_14::thread_or_ln186_590_fu_11801_p2() {
    or_ln186_590_fu_11801_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_52);
}

void pqcrystals_dilithium_14::thread_or_ln186_591_fu_11815_p2() {
    or_ln186_591_fu_11815_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_53);
}

void pqcrystals_dilithium_14::thread_or_ln186_592_fu_11895_p2() {
    or_ln186_592_fu_11895_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_54);
}

void pqcrystals_dilithium_14::thread_or_ln186_593_fu_11909_p2() {
    or_ln186_593_fu_11909_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_55);
}

void pqcrystals_dilithium_14::thread_or_ln186_594_fu_11989_p2() {
    or_ln186_594_fu_11989_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_56);
}

void pqcrystals_dilithium_14::thread_or_ln186_595_fu_12003_p2() {
    or_ln186_595_fu_12003_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_57);
}

void pqcrystals_dilithium_14::thread_or_ln186_596_fu_12083_p2() {
    or_ln186_596_fu_12083_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_58);
}

void pqcrystals_dilithium_14::thread_or_ln186_597_fu_12097_p2() {
    or_ln186_597_fu_12097_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_59);
}

void pqcrystals_dilithium_14::thread_or_ln186_598_fu_12177_p2() {
    or_ln186_598_fu_12177_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5A);
}

void pqcrystals_dilithium_14::thread_or_ln186_599_fu_12191_p2() {
    or_ln186_599_fu_12191_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5B);
}

void pqcrystals_dilithium_14::thread_or_ln186_600_fu_12271_p2() {
    or_ln186_600_fu_12271_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5C);
}

void pqcrystals_dilithium_14::thread_or_ln186_601_fu_12285_p2() {
    or_ln186_601_fu_12285_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5D);
}

void pqcrystals_dilithium_14::thread_or_ln186_602_fu_12365_p2() {
    or_ln186_602_fu_12365_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5E);
}

void pqcrystals_dilithium_14::thread_or_ln186_603_fu_12379_p2() {
    or_ln186_603_fu_12379_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_5F);
}

void pqcrystals_dilithium_14::thread_or_ln186_604_fu_12459_p2() {
    or_ln186_604_fu_12459_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_60);
}

void pqcrystals_dilithium_14::thread_or_ln186_605_fu_12473_p2() {
    or_ln186_605_fu_12473_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_61);
}

void pqcrystals_dilithium_14::thread_or_ln186_606_fu_12553_p2() {
    or_ln186_606_fu_12553_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_62);
}

void pqcrystals_dilithium_14::thread_or_ln186_607_fu_12567_p2() {
    or_ln186_607_fu_12567_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_63);
}

void pqcrystals_dilithium_14::thread_or_ln186_608_fu_12647_p2() {
    or_ln186_608_fu_12647_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_64);
}

void pqcrystals_dilithium_14::thread_or_ln186_609_fu_12661_p2() {
    or_ln186_609_fu_12661_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_65);
}

void pqcrystals_dilithium_14::thread_or_ln186_610_fu_12741_p2() {
    or_ln186_610_fu_12741_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_66);
}

void pqcrystals_dilithium_14::thread_or_ln186_611_fu_12755_p2() {
    or_ln186_611_fu_12755_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_67);
}

void pqcrystals_dilithium_14::thread_or_ln186_612_fu_12835_p2() {
    or_ln186_612_fu_12835_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_68);
}

void pqcrystals_dilithium_14::thread_or_ln186_613_fu_12849_p2() {
    or_ln186_613_fu_12849_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_69);
}

void pqcrystals_dilithium_14::thread_or_ln186_614_fu_12929_p2() {
    or_ln186_614_fu_12929_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6A);
}

void pqcrystals_dilithium_14::thread_or_ln186_615_fu_12943_p2() {
    or_ln186_615_fu_12943_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6B);
}

void pqcrystals_dilithium_14::thread_or_ln186_616_fu_13023_p2() {
    or_ln186_616_fu_13023_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6C);
}

void pqcrystals_dilithium_14::thread_or_ln186_617_fu_13037_p2() {
    or_ln186_617_fu_13037_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6D);
}

void pqcrystals_dilithium_14::thread_or_ln186_618_fu_13117_p2() {
    or_ln186_618_fu_13117_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6E);
}

void pqcrystals_dilithium_14::thread_or_ln186_619_fu_13131_p2() {
    or_ln186_619_fu_13131_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_6F);
}

void pqcrystals_dilithium_14::thread_or_ln186_620_fu_13211_p2() {
    or_ln186_620_fu_13211_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_70);
}

void pqcrystals_dilithium_14::thread_or_ln186_621_fu_13225_p2() {
    or_ln186_621_fu_13225_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_71);
}

void pqcrystals_dilithium_14::thread_or_ln186_622_fu_13305_p2() {
    or_ln186_622_fu_13305_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_72);
}

void pqcrystals_dilithium_14::thread_or_ln186_623_fu_13319_p2() {
    or_ln186_623_fu_13319_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_73);
}

void pqcrystals_dilithium_14::thread_or_ln186_624_fu_13399_p2() {
    or_ln186_624_fu_13399_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_74);
}

void pqcrystals_dilithium_14::thread_or_ln186_625_fu_13413_p2() {
    or_ln186_625_fu_13413_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_75);
}

void pqcrystals_dilithium_14::thread_or_ln186_626_fu_13493_p2() {
    or_ln186_626_fu_13493_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_76);
}

void pqcrystals_dilithium_14::thread_or_ln186_627_fu_13507_p2() {
    or_ln186_627_fu_13507_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_77);
}

void pqcrystals_dilithium_14::thread_or_ln186_628_fu_13587_p2() {
    or_ln186_628_fu_13587_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_78);
}

void pqcrystals_dilithium_14::thread_or_ln186_629_fu_13601_p2() {
    or_ln186_629_fu_13601_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_79);
}

void pqcrystals_dilithium_14::thread_or_ln186_630_fu_13681_p2() {
    or_ln186_630_fu_13681_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7A);
}

void pqcrystals_dilithium_14::thread_or_ln186_631_fu_13695_p2() {
    or_ln186_631_fu_13695_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7B);
}

void pqcrystals_dilithium_14::thread_or_ln186_632_fu_13775_p2() {
    or_ln186_632_fu_13775_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7C);
}

void pqcrystals_dilithium_14::thread_or_ln186_633_fu_13789_p2() {
    or_ln186_633_fu_13789_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7D);
}

void pqcrystals_dilithium_14::thread_or_ln186_634_fu_13869_p2() {
    or_ln186_634_fu_13869_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7E);
}

void pqcrystals_dilithium_14::thread_or_ln186_635_fu_13883_p2() {
    or_ln186_635_fu_13883_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_7F);
}

void pqcrystals_dilithium_14::thread_or_ln186_636_fu_13963_p2() {
    or_ln186_636_fu_13963_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_80);
}

void pqcrystals_dilithium_14::thread_or_ln186_637_fu_13977_p2() {
    or_ln186_637_fu_13977_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_81);
}

void pqcrystals_dilithium_14::thread_or_ln186_638_fu_14057_p2() {
    or_ln186_638_fu_14057_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_82);
}

void pqcrystals_dilithium_14::thread_or_ln186_639_fu_14071_p2() {
    or_ln186_639_fu_14071_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_83);
}

void pqcrystals_dilithium_14::thread_or_ln186_640_fu_14151_p2() {
    or_ln186_640_fu_14151_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_84);
}

void pqcrystals_dilithium_14::thread_or_ln186_641_fu_14165_p2() {
    or_ln186_641_fu_14165_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_85);
}

void pqcrystals_dilithium_14::thread_or_ln186_642_fu_14245_p2() {
    or_ln186_642_fu_14245_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_86);
}

void pqcrystals_dilithium_14::thread_or_ln186_643_fu_14259_p2() {
    or_ln186_643_fu_14259_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_87);
}

void pqcrystals_dilithium_14::thread_or_ln186_644_fu_14339_p2() {
    or_ln186_644_fu_14339_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_88);
}

void pqcrystals_dilithium_14::thread_or_ln186_645_fu_14353_p2() {
    or_ln186_645_fu_14353_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_89);
}

void pqcrystals_dilithium_14::thread_or_ln186_646_fu_14433_p2() {
    or_ln186_646_fu_14433_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8A);
}

void pqcrystals_dilithium_14::thread_or_ln186_647_fu_14447_p2() {
    or_ln186_647_fu_14447_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8B);
}

void pqcrystals_dilithium_14::thread_or_ln186_648_fu_14527_p2() {
    or_ln186_648_fu_14527_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8C);
}

void pqcrystals_dilithium_14::thread_or_ln186_649_fu_14541_p2() {
    or_ln186_649_fu_14541_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8D);
}

void pqcrystals_dilithium_14::thread_or_ln186_650_fu_14621_p2() {
    or_ln186_650_fu_14621_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8E);
}

void pqcrystals_dilithium_14::thread_or_ln186_651_fu_14635_p2() {
    or_ln186_651_fu_14635_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_8F);
}

void pqcrystals_dilithium_14::thread_or_ln186_652_fu_14715_p2() {
    or_ln186_652_fu_14715_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_90);
}

void pqcrystals_dilithium_14::thread_or_ln186_653_fu_14729_p2() {
    or_ln186_653_fu_14729_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_91);
}

void pqcrystals_dilithium_14::thread_or_ln186_654_fu_14809_p2() {
    or_ln186_654_fu_14809_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_92);
}

void pqcrystals_dilithium_14::thread_or_ln186_655_fu_14823_p2() {
    or_ln186_655_fu_14823_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_93);
}

void pqcrystals_dilithium_14::thread_or_ln186_656_fu_14903_p2() {
    or_ln186_656_fu_14903_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_94);
}

void pqcrystals_dilithium_14::thread_or_ln186_657_fu_14917_p2() {
    or_ln186_657_fu_14917_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_95);
}

void pqcrystals_dilithium_14::thread_or_ln186_658_fu_14997_p2() {
    or_ln186_658_fu_14997_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_96);
}

void pqcrystals_dilithium_14::thread_or_ln186_659_fu_15011_p2() {
    or_ln186_659_fu_15011_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_97);
}

void pqcrystals_dilithium_14::thread_or_ln186_660_fu_15091_p2() {
    or_ln186_660_fu_15091_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_98);
}

void pqcrystals_dilithium_14::thread_or_ln186_661_fu_15105_p2() {
    or_ln186_661_fu_15105_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_99);
}

void pqcrystals_dilithium_14::thread_or_ln186_662_fu_15185_p2() {
    or_ln186_662_fu_15185_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9A);
}

void pqcrystals_dilithium_14::thread_or_ln186_663_fu_15199_p2() {
    or_ln186_663_fu_15199_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9B);
}

void pqcrystals_dilithium_14::thread_or_ln186_664_fu_15279_p2() {
    or_ln186_664_fu_15279_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9C);
}

void pqcrystals_dilithium_14::thread_or_ln186_665_fu_15293_p2() {
    or_ln186_665_fu_15293_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9D);
}

void pqcrystals_dilithium_14::thread_or_ln186_666_fu_15373_p2() {
    or_ln186_666_fu_15373_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9E);
}

void pqcrystals_dilithium_14::thread_or_ln186_667_fu_15387_p2() {
    or_ln186_667_fu_15387_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_9F);
}

void pqcrystals_dilithium_14::thread_or_ln186_668_fu_15467_p2() {
    or_ln186_668_fu_15467_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A0);
}

void pqcrystals_dilithium_14::thread_or_ln186_669_fu_15481_p2() {
    or_ln186_669_fu_15481_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A1);
}

void pqcrystals_dilithium_14::thread_or_ln186_670_fu_15561_p2() {
    or_ln186_670_fu_15561_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A2);
}

void pqcrystals_dilithium_14::thread_or_ln186_671_fu_15575_p2() {
    or_ln186_671_fu_15575_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A3);
}

void pqcrystals_dilithium_14::thread_or_ln186_672_fu_15655_p2() {
    or_ln186_672_fu_15655_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A4);
}

void pqcrystals_dilithium_14::thread_or_ln186_673_fu_15669_p2() {
    or_ln186_673_fu_15669_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A5);
}

void pqcrystals_dilithium_14::thread_or_ln186_674_fu_15749_p2() {
    or_ln186_674_fu_15749_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A6);
}

void pqcrystals_dilithium_14::thread_or_ln186_675_fu_15763_p2() {
    or_ln186_675_fu_15763_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A7);
}

void pqcrystals_dilithium_14::thread_or_ln186_676_fu_15843_p2() {
    or_ln186_676_fu_15843_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A8);
}

void pqcrystals_dilithium_14::thread_or_ln186_677_fu_15857_p2() {
    or_ln186_677_fu_15857_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_A9);
}

void pqcrystals_dilithium_14::thread_or_ln186_678_fu_15937_p2() {
    or_ln186_678_fu_15937_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_AA);
}

void pqcrystals_dilithium_14::thread_or_ln186_679_fu_15951_p2() {
    or_ln186_679_fu_15951_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_AB);
}

void pqcrystals_dilithium_14::thread_or_ln186_680_fu_16031_p2() {
    or_ln186_680_fu_16031_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_AC);
}

void pqcrystals_dilithium_14::thread_or_ln186_681_fu_16045_p2() {
    or_ln186_681_fu_16045_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_AD);
}

void pqcrystals_dilithium_14::thread_or_ln186_682_fu_16125_p2() {
    or_ln186_682_fu_16125_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_AE);
}

void pqcrystals_dilithium_14::thread_or_ln186_683_fu_16139_p2() {
    or_ln186_683_fu_16139_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_AF);
}

void pqcrystals_dilithium_14::thread_or_ln186_684_fu_16219_p2() {
    or_ln186_684_fu_16219_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B0);
}

void pqcrystals_dilithium_14::thread_or_ln186_685_fu_16233_p2() {
    or_ln186_685_fu_16233_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B1);
}

void pqcrystals_dilithium_14::thread_or_ln186_686_fu_16313_p2() {
    or_ln186_686_fu_16313_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B2);
}

void pqcrystals_dilithium_14::thread_or_ln186_687_fu_16327_p2() {
    or_ln186_687_fu_16327_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B3);
}

void pqcrystals_dilithium_14::thread_or_ln186_688_fu_16407_p2() {
    or_ln186_688_fu_16407_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B4);
}

void pqcrystals_dilithium_14::thread_or_ln186_689_fu_16421_p2() {
    or_ln186_689_fu_16421_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B5);
}

void pqcrystals_dilithium_14::thread_or_ln186_690_fu_16501_p2() {
    or_ln186_690_fu_16501_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B6);
}

void pqcrystals_dilithium_14::thread_or_ln186_691_fu_16515_p2() {
    or_ln186_691_fu_16515_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B7);
}

void pqcrystals_dilithium_14::thread_or_ln186_692_fu_16595_p2() {
    or_ln186_692_fu_16595_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B8);
}

void pqcrystals_dilithium_14::thread_or_ln186_693_fu_16609_p2() {
    or_ln186_693_fu_16609_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_B9);
}

void pqcrystals_dilithium_14::thread_or_ln186_694_fu_16689_p2() {
    or_ln186_694_fu_16689_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_BA);
}

void pqcrystals_dilithium_14::thread_or_ln186_695_fu_16703_p2() {
    or_ln186_695_fu_16703_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_BB);
}

void pqcrystals_dilithium_14::thread_or_ln186_696_fu_16783_p2() {
    or_ln186_696_fu_16783_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_BC);
}

void pqcrystals_dilithium_14::thread_or_ln186_697_fu_16797_p2() {
    or_ln186_697_fu_16797_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_BD);
}

void pqcrystals_dilithium_14::thread_or_ln186_698_fu_16877_p2() {
    or_ln186_698_fu_16877_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_BE);
}

void pqcrystals_dilithium_14::thread_or_ln186_699_fu_16891_p2() {
    or_ln186_699_fu_16891_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_BF);
}

void pqcrystals_dilithium_14::thread_or_ln186_700_fu_16971_p2() {
    or_ln186_700_fu_16971_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C0);
}

void pqcrystals_dilithium_14::thread_or_ln186_701_fu_16985_p2() {
    or_ln186_701_fu_16985_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C1);
}

void pqcrystals_dilithium_14::thread_or_ln186_702_fu_17065_p2() {
    or_ln186_702_fu_17065_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C2);
}

void pqcrystals_dilithium_14::thread_or_ln186_703_fu_17079_p2() {
    or_ln186_703_fu_17079_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C3);
}

void pqcrystals_dilithium_14::thread_or_ln186_704_fu_17159_p2() {
    or_ln186_704_fu_17159_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C4);
}

void pqcrystals_dilithium_14::thread_or_ln186_705_fu_17173_p2() {
    or_ln186_705_fu_17173_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C5);
}

void pqcrystals_dilithium_14::thread_or_ln186_706_fu_17253_p2() {
    or_ln186_706_fu_17253_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C6);
}

void pqcrystals_dilithium_14::thread_or_ln186_707_fu_17267_p2() {
    or_ln186_707_fu_17267_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C7);
}

void pqcrystals_dilithium_14::thread_or_ln186_708_fu_17347_p2() {
    or_ln186_708_fu_17347_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C8);
}

void pqcrystals_dilithium_14::thread_or_ln186_709_fu_17361_p2() {
    or_ln186_709_fu_17361_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_C9);
}

void pqcrystals_dilithium_14::thread_or_ln186_710_fu_17441_p2() {
    or_ln186_710_fu_17441_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_CA);
}

void pqcrystals_dilithium_14::thread_or_ln186_711_fu_17455_p2() {
    or_ln186_711_fu_17455_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_CB);
}

void pqcrystals_dilithium_14::thread_or_ln186_712_fu_17535_p2() {
    or_ln186_712_fu_17535_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_CC);
}

void pqcrystals_dilithium_14::thread_or_ln186_713_fu_17549_p2() {
    or_ln186_713_fu_17549_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_CD);
}

void pqcrystals_dilithium_14::thread_or_ln186_714_fu_17629_p2() {
    or_ln186_714_fu_17629_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_CE);
}

void pqcrystals_dilithium_14::thread_or_ln186_715_fu_17643_p2() {
    or_ln186_715_fu_17643_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_CF);
}

void pqcrystals_dilithium_14::thread_or_ln186_716_fu_17723_p2() {
    or_ln186_716_fu_17723_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D0);
}

void pqcrystals_dilithium_14::thread_or_ln186_717_fu_17737_p2() {
    or_ln186_717_fu_17737_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D1);
}

void pqcrystals_dilithium_14::thread_or_ln186_718_fu_17817_p2() {
    or_ln186_718_fu_17817_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D2);
}

void pqcrystals_dilithium_14::thread_or_ln186_719_fu_17831_p2() {
    or_ln186_719_fu_17831_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D3);
}

void pqcrystals_dilithium_14::thread_or_ln186_720_fu_17911_p2() {
    or_ln186_720_fu_17911_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D4);
}

void pqcrystals_dilithium_14::thread_or_ln186_721_fu_17925_p2() {
    or_ln186_721_fu_17925_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D5);
}

void pqcrystals_dilithium_14::thread_or_ln186_722_fu_18005_p2() {
    or_ln186_722_fu_18005_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D6);
}

void pqcrystals_dilithium_14::thread_or_ln186_723_fu_18019_p2() {
    or_ln186_723_fu_18019_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D7);
}

void pqcrystals_dilithium_14::thread_or_ln186_724_fu_18099_p2() {
    or_ln186_724_fu_18099_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D8);
}

void pqcrystals_dilithium_14::thread_or_ln186_725_fu_18113_p2() {
    or_ln186_725_fu_18113_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_D9);
}

void pqcrystals_dilithium_14::thread_or_ln186_726_fu_18193_p2() {
    or_ln186_726_fu_18193_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_DA);
}

void pqcrystals_dilithium_14::thread_or_ln186_727_fu_18207_p2() {
    or_ln186_727_fu_18207_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_DB);
}

void pqcrystals_dilithium_14::thread_or_ln186_728_fu_18287_p2() {
    or_ln186_728_fu_18287_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_DC);
}

void pqcrystals_dilithium_14::thread_or_ln186_729_fu_18301_p2() {
    or_ln186_729_fu_18301_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_DD);
}

void pqcrystals_dilithium_14::thread_or_ln186_730_fu_18381_p2() {
    or_ln186_730_fu_18381_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_DE);
}

void pqcrystals_dilithium_14::thread_or_ln186_731_fu_18395_p2() {
    or_ln186_731_fu_18395_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_DF);
}

void pqcrystals_dilithium_14::thread_or_ln186_732_fu_18475_p2() {
    or_ln186_732_fu_18475_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E0);
}

void pqcrystals_dilithium_14::thread_or_ln186_733_fu_18489_p2() {
    or_ln186_733_fu_18489_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E1);
}

void pqcrystals_dilithium_14::thread_or_ln186_734_fu_18569_p2() {
    or_ln186_734_fu_18569_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E2);
}

void pqcrystals_dilithium_14::thread_or_ln186_735_fu_18583_p2() {
    or_ln186_735_fu_18583_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E3);
}

void pqcrystals_dilithium_14::thread_or_ln186_736_fu_18663_p2() {
    or_ln186_736_fu_18663_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E4);
}

void pqcrystals_dilithium_14::thread_or_ln186_737_fu_18677_p2() {
    or_ln186_737_fu_18677_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E5);
}

void pqcrystals_dilithium_14::thread_or_ln186_738_fu_18757_p2() {
    or_ln186_738_fu_18757_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E6);
}

void pqcrystals_dilithium_14::thread_or_ln186_739_fu_18771_p2() {
    or_ln186_739_fu_18771_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E7);
}

void pqcrystals_dilithium_14::thread_or_ln186_740_fu_18851_p2() {
    or_ln186_740_fu_18851_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E8);
}

void pqcrystals_dilithium_14::thread_or_ln186_741_fu_18865_p2() {
    or_ln186_741_fu_18865_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_E9);
}

void pqcrystals_dilithium_14::thread_or_ln186_742_fu_18945_p2() {
    or_ln186_742_fu_18945_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_EA);
}

void pqcrystals_dilithium_14::thread_or_ln186_743_fu_18959_p2() {
    or_ln186_743_fu_18959_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_EB);
}

void pqcrystals_dilithium_14::thread_or_ln186_744_fu_19039_p2() {
    or_ln186_744_fu_19039_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_EC);
}

void pqcrystals_dilithium_14::thread_or_ln186_745_fu_19053_p2() {
    or_ln186_745_fu_19053_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_ED);
}

void pqcrystals_dilithium_14::thread_or_ln186_746_fu_19133_p2() {
    or_ln186_746_fu_19133_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_EE);
}

void pqcrystals_dilithium_14::thread_or_ln186_747_fu_19147_p2() {
    or_ln186_747_fu_19147_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_EF);
}

void pqcrystals_dilithium_14::thread_or_ln186_748_fu_19227_p2() {
    or_ln186_748_fu_19227_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F0);
}

void pqcrystals_dilithium_14::thread_or_ln186_749_fu_19241_p2() {
    or_ln186_749_fu_19241_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F1);
}

void pqcrystals_dilithium_14::thread_or_ln186_750_fu_19321_p2() {
    or_ln186_750_fu_19321_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F2);
}

void pqcrystals_dilithium_14::thread_or_ln186_751_fu_19335_p2() {
    or_ln186_751_fu_19335_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F3);
}

void pqcrystals_dilithium_14::thread_or_ln186_752_fu_19415_p2() {
    or_ln186_752_fu_19415_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F4);
}

void pqcrystals_dilithium_14::thread_or_ln186_753_fu_19429_p2() {
    or_ln186_753_fu_19429_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F5);
}

void pqcrystals_dilithium_14::thread_or_ln186_754_fu_19509_p2() {
    or_ln186_754_fu_19509_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F6);
}

void pqcrystals_dilithium_14::thread_or_ln186_755_fu_19523_p2() {
    or_ln186_755_fu_19523_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F7);
}

void pqcrystals_dilithium_14::thread_or_ln186_756_fu_19603_p2() {
    or_ln186_756_fu_19603_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F8);
}

void pqcrystals_dilithium_14::thread_or_ln186_757_fu_19617_p2() {
    or_ln186_757_fu_19617_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_F9);
}

void pqcrystals_dilithium_14::thread_or_ln186_758_fu_19697_p2() {
    or_ln186_758_fu_19697_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_FA);
}

void pqcrystals_dilithium_14::thread_or_ln186_759_fu_19711_p2() {
    or_ln186_759_fu_19711_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_FB);
}

void pqcrystals_dilithium_14::thread_or_ln186_760_fu_19791_p2() {
    or_ln186_760_fu_19791_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_FC);
}

void pqcrystals_dilithium_14::thread_or_ln186_761_fu_19805_p2() {
    or_ln186_761_fu_19805_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_FD);
}

void pqcrystals_dilithium_14::thread_or_ln186_762_fu_19885_p2() {
    or_ln186_762_fu_19885_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_FE);
}

void pqcrystals_dilithium_14::thread_or_ln186_763_fu_19899_p2() {
    or_ln186_763_fu_19899_p2 = (tmp_1978_reg_20055.read() | ap_const_lv12_FF);
}

void pqcrystals_dilithium_14::thread_or_ln186_764_fu_8082_p2() {
    or_ln186_764_fu_8082_p2 = (tmp_2234_fu_8069_p3.read() | ap_const_lv10_1);
}

void pqcrystals_dilithium_14::thread_or_ln186_765_fu_8163_p2() {
    or_ln186_765_fu_8163_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2);
}

void pqcrystals_dilithium_14::thread_or_ln186_766_fu_8177_p2() {
    or_ln186_766_fu_8177_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3);
}

void pqcrystals_dilithium_14::thread_or_ln186_767_fu_8257_p2() {
    or_ln186_767_fu_8257_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4);
}

void pqcrystals_dilithium_14::thread_or_ln186_768_fu_8271_p2() {
    or_ln186_768_fu_8271_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5);
}

void pqcrystals_dilithium_14::thread_or_ln186_769_fu_8351_p2() {
    or_ln186_769_fu_8351_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6);
}

void pqcrystals_dilithium_14::thread_or_ln186_770_fu_8365_p2() {
    or_ln186_770_fu_8365_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7);
}

void pqcrystals_dilithium_14::thread_or_ln186_771_fu_8445_p2() {
    or_ln186_771_fu_8445_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8);
}

void pqcrystals_dilithium_14::thread_or_ln186_772_fu_8459_p2() {
    or_ln186_772_fu_8459_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9);
}

void pqcrystals_dilithium_14::thread_or_ln186_773_fu_8539_p2() {
    or_ln186_773_fu_8539_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A);
}

void pqcrystals_dilithium_14::thread_or_ln186_774_fu_8553_p2() {
    or_ln186_774_fu_8553_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B);
}

void pqcrystals_dilithium_14::thread_or_ln186_775_fu_8633_p2() {
    or_ln186_775_fu_8633_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C);
}

void pqcrystals_dilithium_14::thread_or_ln186_776_fu_8647_p2() {
    or_ln186_776_fu_8647_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D);
}

void pqcrystals_dilithium_14::thread_or_ln186_777_fu_8727_p2() {
    or_ln186_777_fu_8727_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E);
}

void pqcrystals_dilithium_14::thread_or_ln186_778_fu_8741_p2() {
    or_ln186_778_fu_8741_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_F);
}

void pqcrystals_dilithium_14::thread_or_ln186_779_fu_8821_p2() {
    or_ln186_779_fu_8821_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_10);
}

void pqcrystals_dilithium_14::thread_or_ln186_780_fu_8835_p2() {
    or_ln186_780_fu_8835_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_11);
}

void pqcrystals_dilithium_14::thread_or_ln186_781_fu_8915_p2() {
    or_ln186_781_fu_8915_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_12);
}

void pqcrystals_dilithium_14::thread_or_ln186_782_fu_8929_p2() {
    or_ln186_782_fu_8929_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_13);
}

void pqcrystals_dilithium_14::thread_or_ln186_783_fu_9009_p2() {
    or_ln186_783_fu_9009_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_14);
}

void pqcrystals_dilithium_14::thread_or_ln186_784_fu_9023_p2() {
    or_ln186_784_fu_9023_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_15);
}

void pqcrystals_dilithium_14::thread_or_ln186_785_fu_9103_p2() {
    or_ln186_785_fu_9103_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_16);
}

void pqcrystals_dilithium_14::thread_or_ln186_786_fu_9117_p2() {
    or_ln186_786_fu_9117_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_17);
}

void pqcrystals_dilithium_14::thread_or_ln186_787_fu_9197_p2() {
    or_ln186_787_fu_9197_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_18);
}

void pqcrystals_dilithium_14::thread_or_ln186_788_fu_9211_p2() {
    or_ln186_788_fu_9211_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_19);
}

void pqcrystals_dilithium_14::thread_or_ln186_789_fu_9291_p2() {
    or_ln186_789_fu_9291_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_1A);
}

void pqcrystals_dilithium_14::thread_or_ln186_790_fu_9305_p2() {
    or_ln186_790_fu_9305_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_1B);
}

void pqcrystals_dilithium_14::thread_or_ln186_791_fu_9385_p2() {
    or_ln186_791_fu_9385_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_1C);
}

void pqcrystals_dilithium_14::thread_or_ln186_792_fu_9399_p2() {
    or_ln186_792_fu_9399_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_1D);
}

void pqcrystals_dilithium_14::thread_or_ln186_793_fu_9479_p2() {
    or_ln186_793_fu_9479_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_1E);
}

void pqcrystals_dilithium_14::thread_or_ln186_794_fu_9493_p2() {
    or_ln186_794_fu_9493_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_1F);
}

void pqcrystals_dilithium_14::thread_or_ln186_795_fu_9573_p2() {
    or_ln186_795_fu_9573_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_20);
}

void pqcrystals_dilithium_14::thread_or_ln186_796_fu_9587_p2() {
    or_ln186_796_fu_9587_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_21);
}

void pqcrystals_dilithium_14::thread_or_ln186_797_fu_9667_p2() {
    or_ln186_797_fu_9667_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_22);
}

void pqcrystals_dilithium_14::thread_or_ln186_798_fu_9681_p2() {
    or_ln186_798_fu_9681_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_23);
}

void pqcrystals_dilithium_14::thread_or_ln186_799_fu_9761_p2() {
    or_ln186_799_fu_9761_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_24);
}

void pqcrystals_dilithium_14::thread_or_ln186_800_fu_9775_p2() {
    or_ln186_800_fu_9775_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_25);
}

void pqcrystals_dilithium_14::thread_or_ln186_801_fu_9855_p2() {
    or_ln186_801_fu_9855_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_26);
}

void pqcrystals_dilithium_14::thread_or_ln186_802_fu_9869_p2() {
    or_ln186_802_fu_9869_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_27);
}

void pqcrystals_dilithium_14::thread_or_ln186_803_fu_9949_p2() {
    or_ln186_803_fu_9949_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_28);
}

void pqcrystals_dilithium_14::thread_or_ln186_804_fu_9963_p2() {
    or_ln186_804_fu_9963_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_29);
}

void pqcrystals_dilithium_14::thread_or_ln186_805_fu_10043_p2() {
    or_ln186_805_fu_10043_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2A);
}

void pqcrystals_dilithium_14::thread_or_ln186_806_fu_10057_p2() {
    or_ln186_806_fu_10057_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2B);
}

void pqcrystals_dilithium_14::thread_or_ln186_807_fu_10137_p2() {
    or_ln186_807_fu_10137_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2C);
}

void pqcrystals_dilithium_14::thread_or_ln186_808_fu_10151_p2() {
    or_ln186_808_fu_10151_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2D);
}

void pqcrystals_dilithium_14::thread_or_ln186_809_fu_10231_p2() {
    or_ln186_809_fu_10231_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2E);
}

void pqcrystals_dilithium_14::thread_or_ln186_810_fu_10245_p2() {
    or_ln186_810_fu_10245_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_2F);
}

void pqcrystals_dilithium_14::thread_or_ln186_811_fu_10325_p2() {
    or_ln186_811_fu_10325_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_30);
}

void pqcrystals_dilithium_14::thread_or_ln186_812_fu_10339_p2() {
    or_ln186_812_fu_10339_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_31);
}

void pqcrystals_dilithium_14::thread_or_ln186_813_fu_10419_p2() {
    or_ln186_813_fu_10419_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_32);
}

void pqcrystals_dilithium_14::thread_or_ln186_814_fu_10433_p2() {
    or_ln186_814_fu_10433_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_33);
}

void pqcrystals_dilithium_14::thread_or_ln186_815_fu_10513_p2() {
    or_ln186_815_fu_10513_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_34);
}

void pqcrystals_dilithium_14::thread_or_ln186_816_fu_10527_p2() {
    or_ln186_816_fu_10527_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_35);
}

void pqcrystals_dilithium_14::thread_or_ln186_817_fu_10607_p2() {
    or_ln186_817_fu_10607_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_36);
}

void pqcrystals_dilithium_14::thread_or_ln186_818_fu_10621_p2() {
    or_ln186_818_fu_10621_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_37);
}

void pqcrystals_dilithium_14::thread_or_ln186_819_fu_10701_p2() {
    or_ln186_819_fu_10701_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_38);
}

void pqcrystals_dilithium_14::thread_or_ln186_820_fu_10715_p2() {
    or_ln186_820_fu_10715_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_39);
}

void pqcrystals_dilithium_14::thread_or_ln186_821_fu_10795_p2() {
    or_ln186_821_fu_10795_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3A);
}

void pqcrystals_dilithium_14::thread_or_ln186_822_fu_10809_p2() {
    or_ln186_822_fu_10809_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3B);
}

void pqcrystals_dilithium_14::thread_or_ln186_823_fu_10889_p2() {
    or_ln186_823_fu_10889_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3C);
}

void pqcrystals_dilithium_14::thread_or_ln186_824_fu_10903_p2() {
    or_ln186_824_fu_10903_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3D);
}

void pqcrystals_dilithium_14::thread_or_ln186_825_fu_10983_p2() {
    or_ln186_825_fu_10983_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3E);
}

void pqcrystals_dilithium_14::thread_or_ln186_826_fu_10997_p2() {
    or_ln186_826_fu_10997_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_3F);
}

void pqcrystals_dilithium_14::thread_or_ln186_827_fu_11077_p2() {
    or_ln186_827_fu_11077_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_40);
}

void pqcrystals_dilithium_14::thread_or_ln186_828_fu_11091_p2() {
    or_ln186_828_fu_11091_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_41);
}

void pqcrystals_dilithium_14::thread_or_ln186_829_fu_11171_p2() {
    or_ln186_829_fu_11171_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_42);
}

void pqcrystals_dilithium_14::thread_or_ln186_830_fu_11185_p2() {
    or_ln186_830_fu_11185_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_43);
}

void pqcrystals_dilithium_14::thread_or_ln186_831_fu_11265_p2() {
    or_ln186_831_fu_11265_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_44);
}

void pqcrystals_dilithium_14::thread_or_ln186_832_fu_11279_p2() {
    or_ln186_832_fu_11279_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_45);
}

void pqcrystals_dilithium_14::thread_or_ln186_833_fu_11359_p2() {
    or_ln186_833_fu_11359_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_46);
}

void pqcrystals_dilithium_14::thread_or_ln186_834_fu_11373_p2() {
    or_ln186_834_fu_11373_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_47);
}

void pqcrystals_dilithium_14::thread_or_ln186_835_fu_11453_p2() {
    or_ln186_835_fu_11453_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_48);
}

void pqcrystals_dilithium_14::thread_or_ln186_836_fu_11467_p2() {
    or_ln186_836_fu_11467_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_49);
}

void pqcrystals_dilithium_14::thread_or_ln186_837_fu_11547_p2() {
    or_ln186_837_fu_11547_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4A);
}

void pqcrystals_dilithium_14::thread_or_ln186_838_fu_11561_p2() {
    or_ln186_838_fu_11561_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4B);
}

void pqcrystals_dilithium_14::thread_or_ln186_839_fu_11641_p2() {
    or_ln186_839_fu_11641_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4C);
}

void pqcrystals_dilithium_14::thread_or_ln186_840_fu_11655_p2() {
    or_ln186_840_fu_11655_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4D);
}

void pqcrystals_dilithium_14::thread_or_ln186_841_fu_11735_p2() {
    or_ln186_841_fu_11735_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4E);
}

void pqcrystals_dilithium_14::thread_or_ln186_842_fu_11749_p2() {
    or_ln186_842_fu_11749_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_4F);
}

void pqcrystals_dilithium_14::thread_or_ln186_843_fu_11829_p2() {
    or_ln186_843_fu_11829_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_50);
}

void pqcrystals_dilithium_14::thread_or_ln186_844_fu_11843_p2() {
    or_ln186_844_fu_11843_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_51);
}

void pqcrystals_dilithium_14::thread_or_ln186_845_fu_11923_p2() {
    or_ln186_845_fu_11923_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_52);
}

void pqcrystals_dilithium_14::thread_or_ln186_846_fu_11937_p2() {
    or_ln186_846_fu_11937_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_53);
}

void pqcrystals_dilithium_14::thread_or_ln186_847_fu_12017_p2() {
    or_ln186_847_fu_12017_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_54);
}

void pqcrystals_dilithium_14::thread_or_ln186_848_fu_12031_p2() {
    or_ln186_848_fu_12031_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_55);
}

void pqcrystals_dilithium_14::thread_or_ln186_849_fu_12111_p2() {
    or_ln186_849_fu_12111_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_56);
}

void pqcrystals_dilithium_14::thread_or_ln186_850_fu_12125_p2() {
    or_ln186_850_fu_12125_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_57);
}

void pqcrystals_dilithium_14::thread_or_ln186_851_fu_12205_p2() {
    or_ln186_851_fu_12205_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_58);
}

void pqcrystals_dilithium_14::thread_or_ln186_852_fu_12219_p2() {
    or_ln186_852_fu_12219_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_59);
}

void pqcrystals_dilithium_14::thread_or_ln186_853_fu_12299_p2() {
    or_ln186_853_fu_12299_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5A);
}

void pqcrystals_dilithium_14::thread_or_ln186_854_fu_12313_p2() {
    or_ln186_854_fu_12313_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5B);
}

void pqcrystals_dilithium_14::thread_or_ln186_855_fu_12393_p2() {
    or_ln186_855_fu_12393_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5C);
}

void pqcrystals_dilithium_14::thread_or_ln186_856_fu_12407_p2() {
    or_ln186_856_fu_12407_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5D);
}

void pqcrystals_dilithium_14::thread_or_ln186_857_fu_12487_p2() {
    or_ln186_857_fu_12487_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5E);
}

void pqcrystals_dilithium_14::thread_or_ln186_858_fu_12501_p2() {
    or_ln186_858_fu_12501_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_5F);
}

void pqcrystals_dilithium_14::thread_or_ln186_859_fu_12581_p2() {
    or_ln186_859_fu_12581_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_60);
}

void pqcrystals_dilithium_14::thread_or_ln186_860_fu_12595_p2() {
    or_ln186_860_fu_12595_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_61);
}

void pqcrystals_dilithium_14::thread_or_ln186_861_fu_12675_p2() {
    or_ln186_861_fu_12675_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_62);
}

void pqcrystals_dilithium_14::thread_or_ln186_862_fu_12689_p2() {
    or_ln186_862_fu_12689_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_63);
}

void pqcrystals_dilithium_14::thread_or_ln186_863_fu_12769_p2() {
    or_ln186_863_fu_12769_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_64);
}

void pqcrystals_dilithium_14::thread_or_ln186_864_fu_12783_p2() {
    or_ln186_864_fu_12783_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_65);
}

void pqcrystals_dilithium_14::thread_or_ln186_865_fu_12863_p2() {
    or_ln186_865_fu_12863_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_66);
}

void pqcrystals_dilithium_14::thread_or_ln186_866_fu_12877_p2() {
    or_ln186_866_fu_12877_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_67);
}

void pqcrystals_dilithium_14::thread_or_ln186_867_fu_12957_p2() {
    or_ln186_867_fu_12957_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_68);
}

void pqcrystals_dilithium_14::thread_or_ln186_868_fu_12971_p2() {
    or_ln186_868_fu_12971_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_69);
}

void pqcrystals_dilithium_14::thread_or_ln186_869_fu_13051_p2() {
    or_ln186_869_fu_13051_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6A);
}

void pqcrystals_dilithium_14::thread_or_ln186_870_fu_13065_p2() {
    or_ln186_870_fu_13065_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6B);
}

void pqcrystals_dilithium_14::thread_or_ln186_871_fu_13145_p2() {
    or_ln186_871_fu_13145_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6C);
}

void pqcrystals_dilithium_14::thread_or_ln186_872_fu_13159_p2() {
    or_ln186_872_fu_13159_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6D);
}

void pqcrystals_dilithium_14::thread_or_ln186_873_fu_13239_p2() {
    or_ln186_873_fu_13239_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6E);
}

void pqcrystals_dilithium_14::thread_or_ln186_874_fu_13253_p2() {
    or_ln186_874_fu_13253_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_6F);
}

void pqcrystals_dilithium_14::thread_or_ln186_875_fu_13333_p2() {
    or_ln186_875_fu_13333_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_70);
}

void pqcrystals_dilithium_14::thread_or_ln186_876_fu_13347_p2() {
    or_ln186_876_fu_13347_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_71);
}

void pqcrystals_dilithium_14::thread_or_ln186_877_fu_13427_p2() {
    or_ln186_877_fu_13427_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_72);
}

void pqcrystals_dilithium_14::thread_or_ln186_878_fu_13441_p2() {
    or_ln186_878_fu_13441_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_73);
}

void pqcrystals_dilithium_14::thread_or_ln186_879_fu_13521_p2() {
    or_ln186_879_fu_13521_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_74);
}

void pqcrystals_dilithium_14::thread_or_ln186_880_fu_13535_p2() {
    or_ln186_880_fu_13535_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_75);
}

void pqcrystals_dilithium_14::thread_or_ln186_881_fu_13615_p2() {
    or_ln186_881_fu_13615_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_76);
}

void pqcrystals_dilithium_14::thread_or_ln186_882_fu_13629_p2() {
    or_ln186_882_fu_13629_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_77);
}

void pqcrystals_dilithium_14::thread_or_ln186_883_fu_13709_p2() {
    or_ln186_883_fu_13709_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_78);
}

void pqcrystals_dilithium_14::thread_or_ln186_884_fu_13723_p2() {
    or_ln186_884_fu_13723_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_79);
}

void pqcrystals_dilithium_14::thread_or_ln186_885_fu_13803_p2() {
    or_ln186_885_fu_13803_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7A);
}

void pqcrystals_dilithium_14::thread_or_ln186_886_fu_13817_p2() {
    or_ln186_886_fu_13817_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7B);
}

void pqcrystals_dilithium_14::thread_or_ln186_887_fu_13897_p2() {
    or_ln186_887_fu_13897_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7C);
}

void pqcrystals_dilithium_14::thread_or_ln186_888_fu_13911_p2() {
    or_ln186_888_fu_13911_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7D);
}

void pqcrystals_dilithium_14::thread_or_ln186_889_fu_13991_p2() {
    or_ln186_889_fu_13991_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7E);
}

void pqcrystals_dilithium_14::thread_or_ln186_890_fu_14005_p2() {
    or_ln186_890_fu_14005_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_7F);
}

void pqcrystals_dilithium_14::thread_or_ln186_891_fu_14085_p2() {
    or_ln186_891_fu_14085_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_80);
}

void pqcrystals_dilithium_14::thread_or_ln186_892_fu_14099_p2() {
    or_ln186_892_fu_14099_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_81);
}

void pqcrystals_dilithium_14::thread_or_ln186_893_fu_14179_p2() {
    or_ln186_893_fu_14179_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_82);
}

void pqcrystals_dilithium_14::thread_or_ln186_894_fu_14193_p2() {
    or_ln186_894_fu_14193_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_83);
}

void pqcrystals_dilithium_14::thread_or_ln186_895_fu_14273_p2() {
    or_ln186_895_fu_14273_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_84);
}

void pqcrystals_dilithium_14::thread_or_ln186_896_fu_14287_p2() {
    or_ln186_896_fu_14287_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_85);
}

void pqcrystals_dilithium_14::thread_or_ln186_897_fu_14367_p2() {
    or_ln186_897_fu_14367_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_86);
}

void pqcrystals_dilithium_14::thread_or_ln186_898_fu_14381_p2() {
    or_ln186_898_fu_14381_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_87);
}

void pqcrystals_dilithium_14::thread_or_ln186_899_fu_14461_p2() {
    or_ln186_899_fu_14461_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_88);
}

void pqcrystals_dilithium_14::thread_or_ln186_900_fu_14475_p2() {
    or_ln186_900_fu_14475_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_89);
}

void pqcrystals_dilithium_14::thread_or_ln186_901_fu_14555_p2() {
    or_ln186_901_fu_14555_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8A);
}

void pqcrystals_dilithium_14::thread_or_ln186_902_fu_14569_p2() {
    or_ln186_902_fu_14569_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8B);
}

void pqcrystals_dilithium_14::thread_or_ln186_903_fu_14649_p2() {
    or_ln186_903_fu_14649_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8C);
}

void pqcrystals_dilithium_14::thread_or_ln186_904_fu_14663_p2() {
    or_ln186_904_fu_14663_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8D);
}

void pqcrystals_dilithium_14::thread_or_ln186_905_fu_14743_p2() {
    or_ln186_905_fu_14743_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8E);
}

void pqcrystals_dilithium_14::thread_or_ln186_906_fu_14757_p2() {
    or_ln186_906_fu_14757_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_8F);
}

void pqcrystals_dilithium_14::thread_or_ln186_907_fu_14837_p2() {
    or_ln186_907_fu_14837_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_90);
}

void pqcrystals_dilithium_14::thread_or_ln186_908_fu_14851_p2() {
    or_ln186_908_fu_14851_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_91);
}

void pqcrystals_dilithium_14::thread_or_ln186_909_fu_14931_p2() {
    or_ln186_909_fu_14931_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_92);
}

void pqcrystals_dilithium_14::thread_or_ln186_910_fu_14945_p2() {
    or_ln186_910_fu_14945_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_93);
}

void pqcrystals_dilithium_14::thread_or_ln186_911_fu_15025_p2() {
    or_ln186_911_fu_15025_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_94);
}

void pqcrystals_dilithium_14::thread_or_ln186_912_fu_15039_p2() {
    or_ln186_912_fu_15039_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_95);
}

void pqcrystals_dilithium_14::thread_or_ln186_913_fu_15119_p2() {
    or_ln186_913_fu_15119_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_96);
}

void pqcrystals_dilithium_14::thread_or_ln186_914_fu_15133_p2() {
    or_ln186_914_fu_15133_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_97);
}

void pqcrystals_dilithium_14::thread_or_ln186_915_fu_15213_p2() {
    or_ln186_915_fu_15213_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_98);
}

void pqcrystals_dilithium_14::thread_or_ln186_916_fu_15227_p2() {
    or_ln186_916_fu_15227_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_99);
}

void pqcrystals_dilithium_14::thread_or_ln186_917_fu_15307_p2() {
    or_ln186_917_fu_15307_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9A);
}

void pqcrystals_dilithium_14::thread_or_ln186_918_fu_15321_p2() {
    or_ln186_918_fu_15321_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9B);
}

void pqcrystals_dilithium_14::thread_or_ln186_919_fu_15401_p2() {
    or_ln186_919_fu_15401_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9C);
}

void pqcrystals_dilithium_14::thread_or_ln186_920_fu_15415_p2() {
    or_ln186_920_fu_15415_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9D);
}

void pqcrystals_dilithium_14::thread_or_ln186_921_fu_15495_p2() {
    or_ln186_921_fu_15495_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9E);
}

void pqcrystals_dilithium_14::thread_or_ln186_922_fu_15509_p2() {
    or_ln186_922_fu_15509_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_9F);
}

void pqcrystals_dilithium_14::thread_or_ln186_923_fu_15589_p2() {
    or_ln186_923_fu_15589_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A0);
}

void pqcrystals_dilithium_14::thread_or_ln186_924_fu_15603_p2() {
    or_ln186_924_fu_15603_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A1);
}

void pqcrystals_dilithium_14::thread_or_ln186_925_fu_15683_p2() {
    or_ln186_925_fu_15683_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A2);
}

void pqcrystals_dilithium_14::thread_or_ln186_926_fu_15697_p2() {
    or_ln186_926_fu_15697_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A3);
}

void pqcrystals_dilithium_14::thread_or_ln186_927_fu_15777_p2() {
    or_ln186_927_fu_15777_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A4);
}

void pqcrystals_dilithium_14::thread_or_ln186_928_fu_15791_p2() {
    or_ln186_928_fu_15791_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A5);
}

void pqcrystals_dilithium_14::thread_or_ln186_929_fu_15871_p2() {
    or_ln186_929_fu_15871_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A6);
}

void pqcrystals_dilithium_14::thread_or_ln186_930_fu_15885_p2() {
    or_ln186_930_fu_15885_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A7);
}

void pqcrystals_dilithium_14::thread_or_ln186_931_fu_15965_p2() {
    or_ln186_931_fu_15965_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A8);
}

void pqcrystals_dilithium_14::thread_or_ln186_932_fu_15979_p2() {
    or_ln186_932_fu_15979_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_A9);
}

void pqcrystals_dilithium_14::thread_or_ln186_933_fu_16059_p2() {
    or_ln186_933_fu_16059_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_AA);
}

void pqcrystals_dilithium_14::thread_or_ln186_934_fu_16073_p2() {
    or_ln186_934_fu_16073_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_AB);
}

void pqcrystals_dilithium_14::thread_or_ln186_935_fu_16153_p2() {
    or_ln186_935_fu_16153_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_AC);
}

void pqcrystals_dilithium_14::thread_or_ln186_936_fu_16167_p2() {
    or_ln186_936_fu_16167_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_AD);
}

void pqcrystals_dilithium_14::thread_or_ln186_937_fu_16247_p2() {
    or_ln186_937_fu_16247_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_AE);
}

void pqcrystals_dilithium_14::thread_or_ln186_938_fu_16261_p2() {
    or_ln186_938_fu_16261_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_AF);
}

void pqcrystals_dilithium_14::thread_or_ln186_939_fu_16341_p2() {
    or_ln186_939_fu_16341_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B0);
}

void pqcrystals_dilithium_14::thread_or_ln186_940_fu_16355_p2() {
    or_ln186_940_fu_16355_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B1);
}

void pqcrystals_dilithium_14::thread_or_ln186_941_fu_16435_p2() {
    or_ln186_941_fu_16435_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B2);
}

void pqcrystals_dilithium_14::thread_or_ln186_942_fu_16449_p2() {
    or_ln186_942_fu_16449_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B3);
}

void pqcrystals_dilithium_14::thread_or_ln186_943_fu_16529_p2() {
    or_ln186_943_fu_16529_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B4);
}

void pqcrystals_dilithium_14::thread_or_ln186_944_fu_16543_p2() {
    or_ln186_944_fu_16543_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B5);
}

void pqcrystals_dilithium_14::thread_or_ln186_945_fu_16623_p2() {
    or_ln186_945_fu_16623_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B6);
}

void pqcrystals_dilithium_14::thread_or_ln186_946_fu_16637_p2() {
    or_ln186_946_fu_16637_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B7);
}

void pqcrystals_dilithium_14::thread_or_ln186_947_fu_16717_p2() {
    or_ln186_947_fu_16717_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B8);
}

void pqcrystals_dilithium_14::thread_or_ln186_948_fu_16731_p2() {
    or_ln186_948_fu_16731_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_B9);
}

void pqcrystals_dilithium_14::thread_or_ln186_949_fu_16811_p2() {
    or_ln186_949_fu_16811_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_BA);
}

void pqcrystals_dilithium_14::thread_or_ln186_950_fu_16825_p2() {
    or_ln186_950_fu_16825_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_BB);
}

void pqcrystals_dilithium_14::thread_or_ln186_951_fu_16905_p2() {
    or_ln186_951_fu_16905_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_BC);
}

void pqcrystals_dilithium_14::thread_or_ln186_952_fu_16919_p2() {
    or_ln186_952_fu_16919_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_BD);
}

void pqcrystals_dilithium_14::thread_or_ln186_953_fu_16999_p2() {
    or_ln186_953_fu_16999_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_BE);
}

void pqcrystals_dilithium_14::thread_or_ln186_954_fu_17013_p2() {
    or_ln186_954_fu_17013_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_BF);
}

void pqcrystals_dilithium_14::thread_or_ln186_955_fu_17093_p2() {
    or_ln186_955_fu_17093_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C0);
}

void pqcrystals_dilithium_14::thread_or_ln186_956_fu_17107_p2() {
    or_ln186_956_fu_17107_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C1);
}

void pqcrystals_dilithium_14::thread_or_ln186_957_fu_17187_p2() {
    or_ln186_957_fu_17187_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C2);
}

void pqcrystals_dilithium_14::thread_or_ln186_958_fu_17201_p2() {
    or_ln186_958_fu_17201_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C3);
}

void pqcrystals_dilithium_14::thread_or_ln186_959_fu_17281_p2() {
    or_ln186_959_fu_17281_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C4);
}

void pqcrystals_dilithium_14::thread_or_ln186_960_fu_17295_p2() {
    or_ln186_960_fu_17295_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C5);
}

void pqcrystals_dilithium_14::thread_or_ln186_961_fu_17375_p2() {
    or_ln186_961_fu_17375_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C6);
}

void pqcrystals_dilithium_14::thread_or_ln186_962_fu_17389_p2() {
    or_ln186_962_fu_17389_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C7);
}

void pqcrystals_dilithium_14::thread_or_ln186_963_fu_17469_p2() {
    or_ln186_963_fu_17469_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C8);
}

void pqcrystals_dilithium_14::thread_or_ln186_964_fu_17483_p2() {
    or_ln186_964_fu_17483_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_C9);
}

void pqcrystals_dilithium_14::thread_or_ln186_965_fu_17563_p2() {
    or_ln186_965_fu_17563_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_CA);
}

void pqcrystals_dilithium_14::thread_or_ln186_966_fu_17577_p2() {
    or_ln186_966_fu_17577_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_CB);
}

void pqcrystals_dilithium_14::thread_or_ln186_967_fu_17657_p2() {
    or_ln186_967_fu_17657_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_CC);
}

void pqcrystals_dilithium_14::thread_or_ln186_968_fu_17671_p2() {
    or_ln186_968_fu_17671_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_CD);
}

void pqcrystals_dilithium_14::thread_or_ln186_969_fu_17751_p2() {
    or_ln186_969_fu_17751_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_CE);
}

void pqcrystals_dilithium_14::thread_or_ln186_970_fu_17765_p2() {
    or_ln186_970_fu_17765_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_CF);
}

void pqcrystals_dilithium_14::thread_or_ln186_971_fu_17845_p2() {
    or_ln186_971_fu_17845_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D0);
}

void pqcrystals_dilithium_14::thread_or_ln186_972_fu_17859_p2() {
    or_ln186_972_fu_17859_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D1);
}

void pqcrystals_dilithium_14::thread_or_ln186_973_fu_17939_p2() {
    or_ln186_973_fu_17939_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D2);
}

void pqcrystals_dilithium_14::thread_or_ln186_974_fu_17953_p2() {
    or_ln186_974_fu_17953_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D3);
}

void pqcrystals_dilithium_14::thread_or_ln186_975_fu_18033_p2() {
    or_ln186_975_fu_18033_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D4);
}

void pqcrystals_dilithium_14::thread_or_ln186_976_fu_18047_p2() {
    or_ln186_976_fu_18047_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D5);
}

void pqcrystals_dilithium_14::thread_or_ln186_977_fu_18127_p2() {
    or_ln186_977_fu_18127_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D6);
}

void pqcrystals_dilithium_14::thread_or_ln186_978_fu_18141_p2() {
    or_ln186_978_fu_18141_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D7);
}

void pqcrystals_dilithium_14::thread_or_ln186_979_fu_18221_p2() {
    or_ln186_979_fu_18221_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D8);
}

void pqcrystals_dilithium_14::thread_or_ln186_980_fu_18235_p2() {
    or_ln186_980_fu_18235_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_D9);
}

void pqcrystals_dilithium_14::thread_or_ln186_981_fu_18315_p2() {
    or_ln186_981_fu_18315_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_DA);
}

void pqcrystals_dilithium_14::thread_or_ln186_982_fu_18329_p2() {
    or_ln186_982_fu_18329_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_DB);
}

void pqcrystals_dilithium_14::thread_or_ln186_983_fu_18409_p2() {
    or_ln186_983_fu_18409_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_DC);
}

void pqcrystals_dilithium_14::thread_or_ln186_984_fu_18423_p2() {
    or_ln186_984_fu_18423_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_DD);
}

void pqcrystals_dilithium_14::thread_or_ln186_985_fu_18503_p2() {
    or_ln186_985_fu_18503_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_DE);
}

void pqcrystals_dilithium_14::thread_or_ln186_986_fu_18517_p2() {
    or_ln186_986_fu_18517_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_DF);
}

void pqcrystals_dilithium_14::thread_or_ln186_987_fu_18597_p2() {
    or_ln186_987_fu_18597_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E0);
}

void pqcrystals_dilithium_14::thread_or_ln186_988_fu_18611_p2() {
    or_ln186_988_fu_18611_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E1);
}

void pqcrystals_dilithium_14::thread_or_ln186_989_fu_18691_p2() {
    or_ln186_989_fu_18691_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E2);
}

void pqcrystals_dilithium_14::thread_or_ln186_990_fu_18705_p2() {
    or_ln186_990_fu_18705_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E3);
}

void pqcrystals_dilithium_14::thread_or_ln186_991_fu_18785_p2() {
    or_ln186_991_fu_18785_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E4);
}

void pqcrystals_dilithium_14::thread_or_ln186_992_fu_18799_p2() {
    or_ln186_992_fu_18799_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E5);
}

void pqcrystals_dilithium_14::thread_or_ln186_993_fu_18879_p2() {
    or_ln186_993_fu_18879_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E6);
}

void pqcrystals_dilithium_14::thread_or_ln186_994_fu_18893_p2() {
    or_ln186_994_fu_18893_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E7);
}

void pqcrystals_dilithium_14::thread_or_ln186_995_fu_18973_p2() {
    or_ln186_995_fu_18973_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E8);
}

void pqcrystals_dilithium_14::thread_or_ln186_996_fu_18987_p2() {
    or_ln186_996_fu_18987_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_E9);
}

void pqcrystals_dilithium_14::thread_or_ln186_997_fu_19067_p2() {
    or_ln186_997_fu_19067_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_EA);
}

void pqcrystals_dilithium_14::thread_or_ln186_998_fu_19081_p2() {
    or_ln186_998_fu_19081_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_EB);
}

void pqcrystals_dilithium_14::thread_or_ln186_999_fu_19161_p2() {
    or_ln186_999_fu_19161_p2 = (tmp_2234_reg_20343.read() | ap_const_lv10_EC);
}

void pqcrystals_dilithium_14::thread_or_ln186_fu_8026_p2() {
    or_ln186_fu_8026_p2 = (tmp_1978_fu_8013_p3.read() | ap_const_lv12_1);
}

void pqcrystals_dilithium_14::thread_sext_ln186_1000_fu_19579_p1() {
    sext_ln186_1000_fu_19579_p1 = esl_sext<64,55>(mul_ln186_244_fu_19573_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1002_fu_19598_p1() {
    sext_ln186_1002_fu_19598_p1 = esl_sext<64,55>(mul_ln186_245_fu_19592_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1004_fu_19673_p1() {
    sext_ln186_1004_fu_19673_p1 = esl_sext<64,55>(mul_ln186_246_fu_19667_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1006_fu_19692_p1() {
    sext_ln186_1006_fu_19692_p1 = esl_sext<64,55>(mul_ln186_247_fu_19686_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1008_fu_19767_p1() {
    sext_ln186_1008_fu_19767_p1 = esl_sext<64,55>(mul_ln186_248_fu_19761_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1010_fu_19786_p1() {
    sext_ln186_1010_fu_19786_p1 = esl_sext<64,55>(mul_ln186_249_fu_19780_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1012_fu_19861_p1() {
    sext_ln186_1012_fu_19861_p1 = esl_sext<64,55>(mul_ln186_250_fu_19855_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1014_fu_19880_p1() {
    sext_ln186_1014_fu_19880_p1 = esl_sext<64,55>(mul_ln186_251_fu_19874_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1016_fu_19955_p1() {
    sext_ln186_1016_fu_19955_p1 = esl_sext<64,55>(mul_ln186_252_fu_19949_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1018_fu_19974_p1() {
    sext_ln186_1018_fu_19974_p1 = esl_sext<64,55>(mul_ln186_253_fu_19968_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1020_fu_20021_p1() {
    sext_ln186_1020_fu_20021_p1 = esl_sext<64,55>(mul_ln186_254_fu_20015_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_1022_fu_20040_p1() {
    sext_ln186_1022_fu_20040_p1 = esl_sext<64,55>(mul_ln186_255_fu_20034_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_512_fu_8111_p1() {
    sext_ln186_512_fu_8111_p1 = esl_sext<64,55>(mul_ln186_fu_8105_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_514_fu_8130_p1() {
    sext_ln186_514_fu_8130_p1 = esl_sext<64,55>(mul_ln186_1_fu_8124_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_516_fu_8205_p1() {
    sext_ln186_516_fu_8205_p1 = esl_sext<64,55>(mul_ln186_2_fu_8199_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_518_fu_8224_p1() {
    sext_ln186_518_fu_8224_p1 = esl_sext<64,55>(mul_ln186_3_fu_8218_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_520_fu_8299_p1() {
    sext_ln186_520_fu_8299_p1 = esl_sext<64,55>(mul_ln186_4_fu_8293_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_522_fu_8318_p1() {
    sext_ln186_522_fu_8318_p1 = esl_sext<64,55>(mul_ln186_5_fu_8312_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_524_fu_8393_p1() {
    sext_ln186_524_fu_8393_p1 = esl_sext<64,55>(mul_ln186_6_fu_8387_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_526_fu_8412_p1() {
    sext_ln186_526_fu_8412_p1 = esl_sext<64,55>(mul_ln186_7_fu_8406_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_528_fu_8487_p1() {
    sext_ln186_528_fu_8487_p1 = esl_sext<64,55>(mul_ln186_8_fu_8481_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_530_fu_8506_p1() {
    sext_ln186_530_fu_8506_p1 = esl_sext<64,55>(mul_ln186_9_fu_8500_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_532_fu_8581_p1() {
    sext_ln186_532_fu_8581_p1 = esl_sext<64,55>(mul_ln186_10_fu_8575_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_534_fu_8600_p1() {
    sext_ln186_534_fu_8600_p1 = esl_sext<64,55>(mul_ln186_11_fu_8594_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_536_fu_8675_p1() {
    sext_ln186_536_fu_8675_p1 = esl_sext<64,55>(mul_ln186_12_fu_8669_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_538_fu_8694_p1() {
    sext_ln186_538_fu_8694_p1 = esl_sext<64,55>(mul_ln186_13_fu_8688_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_540_fu_8769_p1() {
    sext_ln186_540_fu_8769_p1 = esl_sext<64,55>(mul_ln186_14_fu_8763_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_542_fu_8788_p1() {
    sext_ln186_542_fu_8788_p1 = esl_sext<64,55>(mul_ln186_15_fu_8782_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_544_fu_8863_p1() {
    sext_ln186_544_fu_8863_p1 = esl_sext<64,55>(mul_ln186_16_fu_8857_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_546_fu_8882_p1() {
    sext_ln186_546_fu_8882_p1 = esl_sext<64,55>(mul_ln186_17_fu_8876_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_548_fu_8957_p1() {
    sext_ln186_548_fu_8957_p1 = esl_sext<64,55>(mul_ln186_18_fu_8951_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_550_fu_8976_p1() {
    sext_ln186_550_fu_8976_p1 = esl_sext<64,55>(mul_ln186_19_fu_8970_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_552_fu_9051_p1() {
    sext_ln186_552_fu_9051_p1 = esl_sext<64,55>(mul_ln186_20_fu_9045_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_554_fu_9070_p1() {
    sext_ln186_554_fu_9070_p1 = esl_sext<64,55>(mul_ln186_21_fu_9064_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_556_fu_9145_p1() {
    sext_ln186_556_fu_9145_p1 = esl_sext<64,55>(mul_ln186_22_fu_9139_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_558_fu_9164_p1() {
    sext_ln186_558_fu_9164_p1 = esl_sext<64,55>(mul_ln186_23_fu_9158_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_560_fu_9239_p1() {
    sext_ln186_560_fu_9239_p1 = esl_sext<64,55>(mul_ln186_24_fu_9233_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_562_fu_9258_p1() {
    sext_ln186_562_fu_9258_p1 = esl_sext<64,55>(mul_ln186_25_fu_9252_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_564_fu_9333_p1() {
    sext_ln186_564_fu_9333_p1 = esl_sext<64,55>(mul_ln186_26_fu_9327_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_566_fu_9352_p1() {
    sext_ln186_566_fu_9352_p1 = esl_sext<64,55>(mul_ln186_27_fu_9346_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_568_fu_9427_p1() {
    sext_ln186_568_fu_9427_p1 = esl_sext<64,55>(mul_ln186_28_fu_9421_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_570_fu_9446_p1() {
    sext_ln186_570_fu_9446_p1 = esl_sext<64,55>(mul_ln186_29_fu_9440_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_572_fu_9521_p1() {
    sext_ln186_572_fu_9521_p1 = esl_sext<64,55>(mul_ln186_30_fu_9515_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_574_fu_9540_p1() {
    sext_ln186_574_fu_9540_p1 = esl_sext<64,55>(mul_ln186_31_fu_9534_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_576_fu_9615_p1() {
    sext_ln186_576_fu_9615_p1 = esl_sext<64,55>(mul_ln186_32_fu_9609_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_578_fu_9634_p1() {
    sext_ln186_578_fu_9634_p1 = esl_sext<64,55>(mul_ln186_33_fu_9628_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_580_fu_9709_p1() {
    sext_ln186_580_fu_9709_p1 = esl_sext<64,55>(mul_ln186_34_fu_9703_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_582_fu_9728_p1() {
    sext_ln186_582_fu_9728_p1 = esl_sext<64,55>(mul_ln186_35_fu_9722_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_584_fu_9803_p1() {
    sext_ln186_584_fu_9803_p1 = esl_sext<64,55>(mul_ln186_36_fu_9797_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_586_fu_9822_p1() {
    sext_ln186_586_fu_9822_p1 = esl_sext<64,55>(mul_ln186_37_fu_9816_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_588_fu_9897_p1() {
    sext_ln186_588_fu_9897_p1 = esl_sext<64,55>(mul_ln186_38_fu_9891_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_590_fu_9916_p1() {
    sext_ln186_590_fu_9916_p1 = esl_sext<64,55>(mul_ln186_39_fu_9910_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_592_fu_9991_p1() {
    sext_ln186_592_fu_9991_p1 = esl_sext<64,55>(mul_ln186_40_fu_9985_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_594_fu_10010_p1() {
    sext_ln186_594_fu_10010_p1 = esl_sext<64,55>(mul_ln186_41_fu_10004_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_596_fu_10085_p1() {
    sext_ln186_596_fu_10085_p1 = esl_sext<64,55>(mul_ln186_42_fu_10079_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_598_fu_10104_p1() {
    sext_ln186_598_fu_10104_p1 = esl_sext<64,55>(mul_ln186_43_fu_10098_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_600_fu_10179_p1() {
    sext_ln186_600_fu_10179_p1 = esl_sext<64,55>(mul_ln186_44_fu_10173_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_602_fu_10198_p1() {
    sext_ln186_602_fu_10198_p1 = esl_sext<64,55>(mul_ln186_45_fu_10192_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_604_fu_10273_p1() {
    sext_ln186_604_fu_10273_p1 = esl_sext<64,55>(mul_ln186_46_fu_10267_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_606_fu_10292_p1() {
    sext_ln186_606_fu_10292_p1 = esl_sext<64,55>(mul_ln186_47_fu_10286_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_608_fu_10367_p1() {
    sext_ln186_608_fu_10367_p1 = esl_sext<64,55>(mul_ln186_48_fu_10361_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_610_fu_10386_p1() {
    sext_ln186_610_fu_10386_p1 = esl_sext<64,55>(mul_ln186_49_fu_10380_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_612_fu_10461_p1() {
    sext_ln186_612_fu_10461_p1 = esl_sext<64,55>(mul_ln186_50_fu_10455_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_614_fu_10480_p1() {
    sext_ln186_614_fu_10480_p1 = esl_sext<64,55>(mul_ln186_51_fu_10474_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_616_fu_10555_p1() {
    sext_ln186_616_fu_10555_p1 = esl_sext<64,55>(mul_ln186_52_fu_10549_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_618_fu_10574_p1() {
    sext_ln186_618_fu_10574_p1 = esl_sext<64,55>(mul_ln186_53_fu_10568_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_620_fu_10649_p1() {
    sext_ln186_620_fu_10649_p1 = esl_sext<64,55>(mul_ln186_54_fu_10643_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_622_fu_10668_p1() {
    sext_ln186_622_fu_10668_p1 = esl_sext<64,55>(mul_ln186_55_fu_10662_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_624_fu_10743_p1() {
    sext_ln186_624_fu_10743_p1 = esl_sext<64,55>(mul_ln186_56_fu_10737_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_626_fu_10762_p1() {
    sext_ln186_626_fu_10762_p1 = esl_sext<64,55>(mul_ln186_57_fu_10756_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_628_fu_10837_p1() {
    sext_ln186_628_fu_10837_p1 = esl_sext<64,55>(mul_ln186_58_fu_10831_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_630_fu_10856_p1() {
    sext_ln186_630_fu_10856_p1 = esl_sext<64,55>(mul_ln186_59_fu_10850_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_632_fu_10931_p1() {
    sext_ln186_632_fu_10931_p1 = esl_sext<64,55>(mul_ln186_60_fu_10925_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_634_fu_10950_p1() {
    sext_ln186_634_fu_10950_p1 = esl_sext<64,55>(mul_ln186_61_fu_10944_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_636_fu_11025_p1() {
    sext_ln186_636_fu_11025_p1 = esl_sext<64,55>(mul_ln186_62_fu_11019_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_638_fu_11044_p1() {
    sext_ln186_638_fu_11044_p1 = esl_sext<64,55>(mul_ln186_63_fu_11038_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_640_fu_11119_p1() {
    sext_ln186_640_fu_11119_p1 = esl_sext<64,55>(mul_ln186_64_fu_11113_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_642_fu_11138_p1() {
    sext_ln186_642_fu_11138_p1 = esl_sext<64,55>(mul_ln186_65_fu_11132_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_644_fu_11213_p1() {
    sext_ln186_644_fu_11213_p1 = esl_sext<64,55>(mul_ln186_66_fu_11207_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_646_fu_11232_p1() {
    sext_ln186_646_fu_11232_p1 = esl_sext<64,55>(mul_ln186_67_fu_11226_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_648_fu_11307_p1() {
    sext_ln186_648_fu_11307_p1 = esl_sext<64,55>(mul_ln186_68_fu_11301_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_650_fu_11326_p1() {
    sext_ln186_650_fu_11326_p1 = esl_sext<64,55>(mul_ln186_69_fu_11320_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_652_fu_11401_p1() {
    sext_ln186_652_fu_11401_p1 = esl_sext<64,55>(mul_ln186_70_fu_11395_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_654_fu_11420_p1() {
    sext_ln186_654_fu_11420_p1 = esl_sext<64,55>(mul_ln186_71_fu_11414_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_656_fu_11495_p1() {
    sext_ln186_656_fu_11495_p1 = esl_sext<64,55>(mul_ln186_72_fu_11489_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_658_fu_11514_p1() {
    sext_ln186_658_fu_11514_p1 = esl_sext<64,55>(mul_ln186_73_fu_11508_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_660_fu_11589_p1() {
    sext_ln186_660_fu_11589_p1 = esl_sext<64,55>(mul_ln186_74_fu_11583_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_662_fu_11608_p1() {
    sext_ln186_662_fu_11608_p1 = esl_sext<64,55>(mul_ln186_75_fu_11602_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_664_fu_11683_p1() {
    sext_ln186_664_fu_11683_p1 = esl_sext<64,55>(mul_ln186_76_fu_11677_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_666_fu_11702_p1() {
    sext_ln186_666_fu_11702_p1 = esl_sext<64,55>(mul_ln186_77_fu_11696_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_668_fu_11777_p1() {
    sext_ln186_668_fu_11777_p1 = esl_sext<64,55>(mul_ln186_78_fu_11771_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_670_fu_11796_p1() {
    sext_ln186_670_fu_11796_p1 = esl_sext<64,55>(mul_ln186_79_fu_11790_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_672_fu_11871_p1() {
    sext_ln186_672_fu_11871_p1 = esl_sext<64,55>(mul_ln186_80_fu_11865_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_674_fu_11890_p1() {
    sext_ln186_674_fu_11890_p1 = esl_sext<64,55>(mul_ln186_81_fu_11884_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_676_fu_11965_p1() {
    sext_ln186_676_fu_11965_p1 = esl_sext<64,55>(mul_ln186_82_fu_11959_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_678_fu_11984_p1() {
    sext_ln186_678_fu_11984_p1 = esl_sext<64,55>(mul_ln186_83_fu_11978_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_680_fu_12059_p1() {
    sext_ln186_680_fu_12059_p1 = esl_sext<64,55>(mul_ln186_84_fu_12053_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_682_fu_12078_p1() {
    sext_ln186_682_fu_12078_p1 = esl_sext<64,55>(mul_ln186_85_fu_12072_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_684_fu_12153_p1() {
    sext_ln186_684_fu_12153_p1 = esl_sext<64,55>(mul_ln186_86_fu_12147_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_686_fu_12172_p1() {
    sext_ln186_686_fu_12172_p1 = esl_sext<64,55>(mul_ln186_87_fu_12166_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_688_fu_12247_p1() {
    sext_ln186_688_fu_12247_p1 = esl_sext<64,55>(mul_ln186_88_fu_12241_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_690_fu_12266_p1() {
    sext_ln186_690_fu_12266_p1 = esl_sext<64,55>(mul_ln186_89_fu_12260_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_692_fu_12341_p1() {
    sext_ln186_692_fu_12341_p1 = esl_sext<64,55>(mul_ln186_90_fu_12335_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_694_fu_12360_p1() {
    sext_ln186_694_fu_12360_p1 = esl_sext<64,55>(mul_ln186_91_fu_12354_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_696_fu_12435_p1() {
    sext_ln186_696_fu_12435_p1 = esl_sext<64,55>(mul_ln186_92_fu_12429_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_698_fu_12454_p1() {
    sext_ln186_698_fu_12454_p1 = esl_sext<64,55>(mul_ln186_93_fu_12448_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_700_fu_12529_p1() {
    sext_ln186_700_fu_12529_p1 = esl_sext<64,55>(mul_ln186_94_fu_12523_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_702_fu_12548_p1() {
    sext_ln186_702_fu_12548_p1 = esl_sext<64,55>(mul_ln186_95_fu_12542_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_704_fu_12623_p1() {
    sext_ln186_704_fu_12623_p1 = esl_sext<64,55>(mul_ln186_96_fu_12617_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_706_fu_12642_p1() {
    sext_ln186_706_fu_12642_p1 = esl_sext<64,55>(mul_ln186_97_fu_12636_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_708_fu_12717_p1() {
    sext_ln186_708_fu_12717_p1 = esl_sext<64,55>(mul_ln186_98_fu_12711_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_710_fu_12736_p1() {
    sext_ln186_710_fu_12736_p1 = esl_sext<64,55>(mul_ln186_99_fu_12730_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_712_fu_12811_p1() {
    sext_ln186_712_fu_12811_p1 = esl_sext<64,55>(mul_ln186_100_fu_12805_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_714_fu_12830_p1() {
    sext_ln186_714_fu_12830_p1 = esl_sext<64,55>(mul_ln186_101_fu_12824_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_716_fu_12905_p1() {
    sext_ln186_716_fu_12905_p1 = esl_sext<64,55>(mul_ln186_102_fu_12899_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_718_fu_12924_p1() {
    sext_ln186_718_fu_12924_p1 = esl_sext<64,55>(mul_ln186_103_fu_12918_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_720_fu_12999_p1() {
    sext_ln186_720_fu_12999_p1 = esl_sext<64,55>(mul_ln186_104_fu_12993_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_722_fu_13018_p1() {
    sext_ln186_722_fu_13018_p1 = esl_sext<64,55>(mul_ln186_105_fu_13012_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_724_fu_13093_p1() {
    sext_ln186_724_fu_13093_p1 = esl_sext<64,55>(mul_ln186_106_fu_13087_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_726_fu_13112_p1() {
    sext_ln186_726_fu_13112_p1 = esl_sext<64,55>(mul_ln186_107_fu_13106_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_728_fu_13187_p1() {
    sext_ln186_728_fu_13187_p1 = esl_sext<64,55>(mul_ln186_108_fu_13181_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_730_fu_13206_p1() {
    sext_ln186_730_fu_13206_p1 = esl_sext<64,55>(mul_ln186_109_fu_13200_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_732_fu_13281_p1() {
    sext_ln186_732_fu_13281_p1 = esl_sext<64,55>(mul_ln186_110_fu_13275_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_734_fu_13300_p1() {
    sext_ln186_734_fu_13300_p1 = esl_sext<64,55>(mul_ln186_111_fu_13294_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_736_fu_13375_p1() {
    sext_ln186_736_fu_13375_p1 = esl_sext<64,55>(mul_ln186_112_fu_13369_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_738_fu_13394_p1() {
    sext_ln186_738_fu_13394_p1 = esl_sext<64,55>(mul_ln186_113_fu_13388_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_740_fu_13469_p1() {
    sext_ln186_740_fu_13469_p1 = esl_sext<64,55>(mul_ln186_114_fu_13463_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_742_fu_13488_p1() {
    sext_ln186_742_fu_13488_p1 = esl_sext<64,55>(mul_ln186_115_fu_13482_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_744_fu_13563_p1() {
    sext_ln186_744_fu_13563_p1 = esl_sext<64,55>(mul_ln186_116_fu_13557_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_746_fu_13582_p1() {
    sext_ln186_746_fu_13582_p1 = esl_sext<64,55>(mul_ln186_117_fu_13576_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_748_fu_13657_p1() {
    sext_ln186_748_fu_13657_p1 = esl_sext<64,55>(mul_ln186_118_fu_13651_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_750_fu_13676_p1() {
    sext_ln186_750_fu_13676_p1 = esl_sext<64,55>(mul_ln186_119_fu_13670_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_752_fu_13751_p1() {
    sext_ln186_752_fu_13751_p1 = esl_sext<64,55>(mul_ln186_120_fu_13745_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_754_fu_13770_p1() {
    sext_ln186_754_fu_13770_p1 = esl_sext<64,55>(mul_ln186_121_fu_13764_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_756_fu_13845_p1() {
    sext_ln186_756_fu_13845_p1 = esl_sext<64,55>(mul_ln186_122_fu_13839_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_758_fu_13864_p1() {
    sext_ln186_758_fu_13864_p1 = esl_sext<64,55>(mul_ln186_123_fu_13858_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_760_fu_13939_p1() {
    sext_ln186_760_fu_13939_p1 = esl_sext<64,55>(mul_ln186_124_fu_13933_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_762_fu_13958_p1() {
    sext_ln186_762_fu_13958_p1 = esl_sext<64,55>(mul_ln186_125_fu_13952_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_764_fu_14033_p1() {
    sext_ln186_764_fu_14033_p1 = esl_sext<64,55>(mul_ln186_126_fu_14027_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_766_fu_14052_p1() {
    sext_ln186_766_fu_14052_p1 = esl_sext<64,55>(mul_ln186_127_fu_14046_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_768_fu_14127_p1() {
    sext_ln186_768_fu_14127_p1 = esl_sext<64,55>(mul_ln186_128_fu_14121_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_770_fu_14146_p1() {
    sext_ln186_770_fu_14146_p1 = esl_sext<64,55>(mul_ln186_129_fu_14140_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_772_fu_14221_p1() {
    sext_ln186_772_fu_14221_p1 = esl_sext<64,55>(mul_ln186_130_fu_14215_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_774_fu_14240_p1() {
    sext_ln186_774_fu_14240_p1 = esl_sext<64,55>(mul_ln186_131_fu_14234_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_776_fu_14315_p1() {
    sext_ln186_776_fu_14315_p1 = esl_sext<64,55>(mul_ln186_132_fu_14309_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_778_fu_14334_p1() {
    sext_ln186_778_fu_14334_p1 = esl_sext<64,55>(mul_ln186_133_fu_14328_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_780_fu_14409_p1() {
    sext_ln186_780_fu_14409_p1 = esl_sext<64,55>(mul_ln186_134_fu_14403_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_782_fu_14428_p1() {
    sext_ln186_782_fu_14428_p1 = esl_sext<64,55>(mul_ln186_135_fu_14422_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_784_fu_14503_p1() {
    sext_ln186_784_fu_14503_p1 = esl_sext<64,55>(mul_ln186_136_fu_14497_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_786_fu_14522_p1() {
    sext_ln186_786_fu_14522_p1 = esl_sext<64,55>(mul_ln186_137_fu_14516_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_788_fu_14597_p1() {
    sext_ln186_788_fu_14597_p1 = esl_sext<64,55>(mul_ln186_138_fu_14591_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_790_fu_14616_p1() {
    sext_ln186_790_fu_14616_p1 = esl_sext<64,55>(mul_ln186_139_fu_14610_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_792_fu_14691_p1() {
    sext_ln186_792_fu_14691_p1 = esl_sext<64,55>(mul_ln186_140_fu_14685_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_794_fu_14710_p1() {
    sext_ln186_794_fu_14710_p1 = esl_sext<64,55>(mul_ln186_141_fu_14704_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_796_fu_14785_p1() {
    sext_ln186_796_fu_14785_p1 = esl_sext<64,55>(mul_ln186_142_fu_14779_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_798_fu_14804_p1() {
    sext_ln186_798_fu_14804_p1 = esl_sext<64,55>(mul_ln186_143_fu_14798_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_800_fu_14879_p1() {
    sext_ln186_800_fu_14879_p1 = esl_sext<64,55>(mul_ln186_144_fu_14873_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_802_fu_14898_p1() {
    sext_ln186_802_fu_14898_p1 = esl_sext<64,55>(mul_ln186_145_fu_14892_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_804_fu_14973_p1() {
    sext_ln186_804_fu_14973_p1 = esl_sext<64,55>(mul_ln186_146_fu_14967_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_806_fu_14992_p1() {
    sext_ln186_806_fu_14992_p1 = esl_sext<64,55>(mul_ln186_147_fu_14986_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_808_fu_15067_p1() {
    sext_ln186_808_fu_15067_p1 = esl_sext<64,55>(mul_ln186_148_fu_15061_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_810_fu_15086_p1() {
    sext_ln186_810_fu_15086_p1 = esl_sext<64,55>(mul_ln186_149_fu_15080_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_812_fu_15161_p1() {
    sext_ln186_812_fu_15161_p1 = esl_sext<64,55>(mul_ln186_150_fu_15155_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_814_fu_15180_p1() {
    sext_ln186_814_fu_15180_p1 = esl_sext<64,55>(mul_ln186_151_fu_15174_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_816_fu_15255_p1() {
    sext_ln186_816_fu_15255_p1 = esl_sext<64,55>(mul_ln186_152_fu_15249_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_818_fu_15274_p1() {
    sext_ln186_818_fu_15274_p1 = esl_sext<64,55>(mul_ln186_153_fu_15268_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_820_fu_15349_p1() {
    sext_ln186_820_fu_15349_p1 = esl_sext<64,55>(mul_ln186_154_fu_15343_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_822_fu_15368_p1() {
    sext_ln186_822_fu_15368_p1 = esl_sext<64,55>(mul_ln186_155_fu_15362_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_824_fu_15443_p1() {
    sext_ln186_824_fu_15443_p1 = esl_sext<64,55>(mul_ln186_156_fu_15437_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_826_fu_15462_p1() {
    sext_ln186_826_fu_15462_p1 = esl_sext<64,55>(mul_ln186_157_fu_15456_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_828_fu_15537_p1() {
    sext_ln186_828_fu_15537_p1 = esl_sext<64,55>(mul_ln186_158_fu_15531_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_830_fu_15556_p1() {
    sext_ln186_830_fu_15556_p1 = esl_sext<64,55>(mul_ln186_159_fu_15550_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_832_fu_15631_p1() {
    sext_ln186_832_fu_15631_p1 = esl_sext<64,55>(mul_ln186_160_fu_15625_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_834_fu_15650_p1() {
    sext_ln186_834_fu_15650_p1 = esl_sext<64,55>(mul_ln186_161_fu_15644_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_836_fu_15725_p1() {
    sext_ln186_836_fu_15725_p1 = esl_sext<64,55>(mul_ln186_162_fu_15719_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_838_fu_15744_p1() {
    sext_ln186_838_fu_15744_p1 = esl_sext<64,55>(mul_ln186_163_fu_15738_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_840_fu_15819_p1() {
    sext_ln186_840_fu_15819_p1 = esl_sext<64,55>(mul_ln186_164_fu_15813_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_842_fu_15838_p1() {
    sext_ln186_842_fu_15838_p1 = esl_sext<64,55>(mul_ln186_165_fu_15832_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_844_fu_15913_p1() {
    sext_ln186_844_fu_15913_p1 = esl_sext<64,55>(mul_ln186_166_fu_15907_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_846_fu_15932_p1() {
    sext_ln186_846_fu_15932_p1 = esl_sext<64,55>(mul_ln186_167_fu_15926_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_848_fu_16007_p1() {
    sext_ln186_848_fu_16007_p1 = esl_sext<64,55>(mul_ln186_168_fu_16001_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_850_fu_16026_p1() {
    sext_ln186_850_fu_16026_p1 = esl_sext<64,55>(mul_ln186_169_fu_16020_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_852_fu_16101_p1() {
    sext_ln186_852_fu_16101_p1 = esl_sext<64,55>(mul_ln186_170_fu_16095_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_854_fu_16120_p1() {
    sext_ln186_854_fu_16120_p1 = esl_sext<64,55>(mul_ln186_171_fu_16114_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_856_fu_16195_p1() {
    sext_ln186_856_fu_16195_p1 = esl_sext<64,55>(mul_ln186_172_fu_16189_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_858_fu_16214_p1() {
    sext_ln186_858_fu_16214_p1 = esl_sext<64,55>(mul_ln186_173_fu_16208_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_860_fu_16289_p1() {
    sext_ln186_860_fu_16289_p1 = esl_sext<64,55>(mul_ln186_174_fu_16283_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_862_fu_16308_p1() {
    sext_ln186_862_fu_16308_p1 = esl_sext<64,55>(mul_ln186_175_fu_16302_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_864_fu_16383_p1() {
    sext_ln186_864_fu_16383_p1 = esl_sext<64,55>(mul_ln186_176_fu_16377_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_866_fu_16402_p1() {
    sext_ln186_866_fu_16402_p1 = esl_sext<64,55>(mul_ln186_177_fu_16396_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_868_fu_16477_p1() {
    sext_ln186_868_fu_16477_p1 = esl_sext<64,55>(mul_ln186_178_fu_16471_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_870_fu_16496_p1() {
    sext_ln186_870_fu_16496_p1 = esl_sext<64,55>(mul_ln186_179_fu_16490_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_872_fu_16571_p1() {
    sext_ln186_872_fu_16571_p1 = esl_sext<64,55>(mul_ln186_180_fu_16565_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_874_fu_16590_p1() {
    sext_ln186_874_fu_16590_p1 = esl_sext<64,55>(mul_ln186_181_fu_16584_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_876_fu_16665_p1() {
    sext_ln186_876_fu_16665_p1 = esl_sext<64,55>(mul_ln186_182_fu_16659_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_878_fu_16684_p1() {
    sext_ln186_878_fu_16684_p1 = esl_sext<64,55>(mul_ln186_183_fu_16678_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_880_fu_16759_p1() {
    sext_ln186_880_fu_16759_p1 = esl_sext<64,55>(mul_ln186_184_fu_16753_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_882_fu_16778_p1() {
    sext_ln186_882_fu_16778_p1 = esl_sext<64,55>(mul_ln186_185_fu_16772_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_884_fu_16853_p1() {
    sext_ln186_884_fu_16853_p1 = esl_sext<64,55>(mul_ln186_186_fu_16847_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_886_fu_16872_p1() {
    sext_ln186_886_fu_16872_p1 = esl_sext<64,55>(mul_ln186_187_fu_16866_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_888_fu_16947_p1() {
    sext_ln186_888_fu_16947_p1 = esl_sext<64,55>(mul_ln186_188_fu_16941_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_890_fu_16966_p1() {
    sext_ln186_890_fu_16966_p1 = esl_sext<64,55>(mul_ln186_189_fu_16960_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_892_fu_17041_p1() {
    sext_ln186_892_fu_17041_p1 = esl_sext<64,55>(mul_ln186_190_fu_17035_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_894_fu_17060_p1() {
    sext_ln186_894_fu_17060_p1 = esl_sext<64,55>(mul_ln186_191_fu_17054_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_896_fu_17135_p1() {
    sext_ln186_896_fu_17135_p1 = esl_sext<64,55>(mul_ln186_192_fu_17129_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_898_fu_17154_p1() {
    sext_ln186_898_fu_17154_p1 = esl_sext<64,55>(mul_ln186_193_fu_17148_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_900_fu_17229_p1() {
    sext_ln186_900_fu_17229_p1 = esl_sext<64,55>(mul_ln186_194_fu_17223_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_902_fu_17248_p1() {
    sext_ln186_902_fu_17248_p1 = esl_sext<64,55>(mul_ln186_195_fu_17242_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_904_fu_17323_p1() {
    sext_ln186_904_fu_17323_p1 = esl_sext<64,55>(mul_ln186_196_fu_17317_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_906_fu_17342_p1() {
    sext_ln186_906_fu_17342_p1 = esl_sext<64,55>(mul_ln186_197_fu_17336_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_908_fu_17417_p1() {
    sext_ln186_908_fu_17417_p1 = esl_sext<64,55>(mul_ln186_198_fu_17411_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_910_fu_17436_p1() {
    sext_ln186_910_fu_17436_p1 = esl_sext<64,55>(mul_ln186_199_fu_17430_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_912_fu_17511_p1() {
    sext_ln186_912_fu_17511_p1 = esl_sext<64,55>(mul_ln186_200_fu_17505_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_914_fu_17530_p1() {
    sext_ln186_914_fu_17530_p1 = esl_sext<64,55>(mul_ln186_201_fu_17524_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_916_fu_17605_p1() {
    sext_ln186_916_fu_17605_p1 = esl_sext<64,55>(mul_ln186_202_fu_17599_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_918_fu_17624_p1() {
    sext_ln186_918_fu_17624_p1 = esl_sext<64,55>(mul_ln186_203_fu_17618_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_920_fu_17699_p1() {
    sext_ln186_920_fu_17699_p1 = esl_sext<64,55>(mul_ln186_204_fu_17693_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_922_fu_17718_p1() {
    sext_ln186_922_fu_17718_p1 = esl_sext<64,55>(mul_ln186_205_fu_17712_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_924_fu_17793_p1() {
    sext_ln186_924_fu_17793_p1 = esl_sext<64,55>(mul_ln186_206_fu_17787_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_926_fu_17812_p1() {
    sext_ln186_926_fu_17812_p1 = esl_sext<64,55>(mul_ln186_207_fu_17806_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_928_fu_17887_p1() {
    sext_ln186_928_fu_17887_p1 = esl_sext<64,55>(mul_ln186_208_fu_17881_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_930_fu_17906_p1() {
    sext_ln186_930_fu_17906_p1 = esl_sext<64,55>(mul_ln186_209_fu_17900_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_932_fu_17981_p1() {
    sext_ln186_932_fu_17981_p1 = esl_sext<64,55>(mul_ln186_210_fu_17975_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_934_fu_18000_p1() {
    sext_ln186_934_fu_18000_p1 = esl_sext<64,55>(mul_ln186_211_fu_17994_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_936_fu_18075_p1() {
    sext_ln186_936_fu_18075_p1 = esl_sext<64,55>(mul_ln186_212_fu_18069_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_938_fu_18094_p1() {
    sext_ln186_938_fu_18094_p1 = esl_sext<64,55>(mul_ln186_213_fu_18088_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_940_fu_18169_p1() {
    sext_ln186_940_fu_18169_p1 = esl_sext<64,55>(mul_ln186_214_fu_18163_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_942_fu_18188_p1() {
    sext_ln186_942_fu_18188_p1 = esl_sext<64,55>(mul_ln186_215_fu_18182_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_944_fu_18263_p1() {
    sext_ln186_944_fu_18263_p1 = esl_sext<64,55>(mul_ln186_216_fu_18257_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_946_fu_18282_p1() {
    sext_ln186_946_fu_18282_p1 = esl_sext<64,55>(mul_ln186_217_fu_18276_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_948_fu_18357_p1() {
    sext_ln186_948_fu_18357_p1 = esl_sext<64,55>(mul_ln186_218_fu_18351_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_950_fu_18376_p1() {
    sext_ln186_950_fu_18376_p1 = esl_sext<64,55>(mul_ln186_219_fu_18370_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_952_fu_18451_p1() {
    sext_ln186_952_fu_18451_p1 = esl_sext<64,55>(mul_ln186_220_fu_18445_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_954_fu_18470_p1() {
    sext_ln186_954_fu_18470_p1 = esl_sext<64,55>(mul_ln186_221_fu_18464_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_956_fu_18545_p1() {
    sext_ln186_956_fu_18545_p1 = esl_sext<64,55>(mul_ln186_222_fu_18539_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_958_fu_18564_p1() {
    sext_ln186_958_fu_18564_p1 = esl_sext<64,55>(mul_ln186_223_fu_18558_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_960_fu_18639_p1() {
    sext_ln186_960_fu_18639_p1 = esl_sext<64,55>(mul_ln186_224_fu_18633_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_962_fu_18658_p1() {
    sext_ln186_962_fu_18658_p1 = esl_sext<64,55>(mul_ln186_225_fu_18652_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_964_fu_18733_p1() {
    sext_ln186_964_fu_18733_p1 = esl_sext<64,55>(mul_ln186_226_fu_18727_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_966_fu_18752_p1() {
    sext_ln186_966_fu_18752_p1 = esl_sext<64,55>(mul_ln186_227_fu_18746_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_968_fu_18827_p1() {
    sext_ln186_968_fu_18827_p1 = esl_sext<64,55>(mul_ln186_228_fu_18821_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_970_fu_18846_p1() {
    sext_ln186_970_fu_18846_p1 = esl_sext<64,55>(mul_ln186_229_fu_18840_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_972_fu_18921_p1() {
    sext_ln186_972_fu_18921_p1 = esl_sext<64,55>(mul_ln186_230_fu_18915_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_974_fu_18940_p1() {
    sext_ln186_974_fu_18940_p1 = esl_sext<64,55>(mul_ln186_231_fu_18934_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_976_fu_19015_p1() {
    sext_ln186_976_fu_19015_p1 = esl_sext<64,55>(mul_ln186_232_fu_19009_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_978_fu_19034_p1() {
    sext_ln186_978_fu_19034_p1 = esl_sext<64,55>(mul_ln186_233_fu_19028_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_980_fu_19109_p1() {
    sext_ln186_980_fu_19109_p1 = esl_sext<64,55>(mul_ln186_234_fu_19103_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_982_fu_19128_p1() {
    sext_ln186_982_fu_19128_p1 = esl_sext<64,55>(mul_ln186_235_fu_19122_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_984_fu_19203_p1() {
    sext_ln186_984_fu_19203_p1 = esl_sext<64,55>(mul_ln186_236_fu_19197_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_986_fu_19222_p1() {
    sext_ln186_986_fu_19222_p1 = esl_sext<64,55>(mul_ln186_237_fu_19216_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_988_fu_19297_p1() {
    sext_ln186_988_fu_19297_p1 = esl_sext<64,55>(mul_ln186_238_fu_19291_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_990_fu_19316_p1() {
    sext_ln186_990_fu_19316_p1 = esl_sext<64,55>(mul_ln186_239_fu_19310_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_992_fu_19391_p1() {
    sext_ln186_992_fu_19391_p1 = esl_sext<64,55>(mul_ln186_240_fu_19385_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_994_fu_19410_p1() {
    sext_ln186_994_fu_19410_p1 = esl_sext<64,55>(mul_ln186_241_fu_19404_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_996_fu_19485_p1() {
    sext_ln186_996_fu_19485_p1 = esl_sext<64,55>(mul_ln186_242_fu_19479_p2.read());
}

void pqcrystals_dilithium_14::thread_sext_ln186_998_fu_19504_p1() {
    sext_ln186_998_fu_19504_p1 = esl_sext<64,55>(mul_ln186_243_fu_19498_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1978_fu_8013_p3() {
    tmp_1978_fu_8013_p3 = esl_concat<2,10>(a_coeffs_offset.read(), ap_const_lv10_0);
}

void pqcrystals_dilithium_14::thread_tmp_1979_fu_8032_p3() {
    tmp_1979_fu_8032_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_fu_8026_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1980_fu_8046_p3() {
    tmp_1980_fu_8046_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_510_fu_8041_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1981_fu_8060_p3() {
    tmp_1981_fu_8060_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_511_fu_8055_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1982_fu_8140_p3() {
    tmp_1982_fu_8140_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_512_fu_8135_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1983_fu_8154_p3() {
    tmp_1983_fu_8154_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_513_fu_8149_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1984_fu_8234_p3() {
    tmp_1984_fu_8234_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_514_fu_8229_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1985_fu_8248_p3() {
    tmp_1985_fu_8248_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_515_fu_8243_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1986_fu_8328_p3() {
    tmp_1986_fu_8328_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_516_fu_8323_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1987_fu_8342_p3() {
    tmp_1987_fu_8342_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_517_fu_8337_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1988_fu_8422_p3() {
    tmp_1988_fu_8422_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_518_fu_8417_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1989_fu_8436_p3() {
    tmp_1989_fu_8436_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_519_fu_8431_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1990_fu_8516_p3() {
    tmp_1990_fu_8516_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_520_fu_8511_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1991_fu_8530_p3() {
    tmp_1991_fu_8530_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_521_fu_8525_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1992_fu_8610_p3() {
    tmp_1992_fu_8610_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_522_fu_8605_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1993_fu_8624_p3() {
    tmp_1993_fu_8624_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_523_fu_8619_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1994_fu_8704_p3() {
    tmp_1994_fu_8704_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_524_fu_8699_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1995_fu_8718_p3() {
    tmp_1995_fu_8718_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_525_fu_8713_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1996_fu_8798_p3() {
    tmp_1996_fu_8798_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_526_fu_8793_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1997_fu_8812_p3() {
    tmp_1997_fu_8812_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_527_fu_8807_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1998_fu_8892_p3() {
    tmp_1998_fu_8892_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_528_fu_8887_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_1999_fu_8906_p3() {
    tmp_1999_fu_8906_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_529_fu_8901_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2000_fu_8986_p3() {
    tmp_2000_fu_8986_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_530_fu_8981_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2001_fu_9000_p3() {
    tmp_2001_fu_9000_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_531_fu_8995_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2002_fu_9080_p3() {
    tmp_2002_fu_9080_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_532_fu_9075_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2003_fu_9094_p3() {
    tmp_2003_fu_9094_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_533_fu_9089_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2004_fu_9174_p3() {
    tmp_2004_fu_9174_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_534_fu_9169_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2005_fu_9188_p3() {
    tmp_2005_fu_9188_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_535_fu_9183_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2006_fu_9268_p3() {
    tmp_2006_fu_9268_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_536_fu_9263_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2007_fu_9282_p3() {
    tmp_2007_fu_9282_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_537_fu_9277_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2008_fu_9362_p3() {
    tmp_2008_fu_9362_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_538_fu_9357_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2009_fu_9376_p3() {
    tmp_2009_fu_9376_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_539_fu_9371_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2010_fu_9456_p3() {
    tmp_2010_fu_9456_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_540_fu_9451_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2011_fu_9470_p3() {
    tmp_2011_fu_9470_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_541_fu_9465_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2012_fu_9550_p3() {
    tmp_2012_fu_9550_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_542_fu_9545_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2013_fu_9564_p3() {
    tmp_2013_fu_9564_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_543_fu_9559_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2014_fu_9644_p3() {
    tmp_2014_fu_9644_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_544_fu_9639_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2015_fu_9658_p3() {
    tmp_2015_fu_9658_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_545_fu_9653_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2016_fu_9738_p3() {
    tmp_2016_fu_9738_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_546_fu_9733_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2017_fu_9752_p3() {
    tmp_2017_fu_9752_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_547_fu_9747_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2018_fu_9832_p3() {
    tmp_2018_fu_9832_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_548_fu_9827_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2019_fu_9846_p3() {
    tmp_2019_fu_9846_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_549_fu_9841_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2020_fu_9926_p3() {
    tmp_2020_fu_9926_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_550_fu_9921_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2021_fu_9940_p3() {
    tmp_2021_fu_9940_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_551_fu_9935_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2022_fu_10020_p3() {
    tmp_2022_fu_10020_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_552_fu_10015_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2023_fu_10034_p3() {
    tmp_2023_fu_10034_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_553_fu_10029_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2024_fu_10114_p3() {
    tmp_2024_fu_10114_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_554_fu_10109_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2025_fu_10128_p3() {
    tmp_2025_fu_10128_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_555_fu_10123_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2026_fu_10208_p3() {
    tmp_2026_fu_10208_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_556_fu_10203_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2027_fu_10222_p3() {
    tmp_2027_fu_10222_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_557_fu_10217_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2028_fu_10302_p3() {
    tmp_2028_fu_10302_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_558_fu_10297_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2029_fu_10316_p3() {
    tmp_2029_fu_10316_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_559_fu_10311_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2030_fu_10396_p3() {
    tmp_2030_fu_10396_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_560_fu_10391_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2031_fu_10410_p3() {
    tmp_2031_fu_10410_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_561_fu_10405_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2032_fu_10490_p3() {
    tmp_2032_fu_10490_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_562_fu_10485_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2033_fu_10504_p3() {
    tmp_2033_fu_10504_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_563_fu_10499_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2034_fu_10584_p3() {
    tmp_2034_fu_10584_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_564_fu_10579_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2035_fu_10598_p3() {
    tmp_2035_fu_10598_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_565_fu_10593_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2036_fu_10678_p3() {
    tmp_2036_fu_10678_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_566_fu_10673_p2.read());
}

void pqcrystals_dilithium_14::thread_tmp_2037_fu_10692_p3() {
    tmp_2037_fu_10692_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln186_567_fu_10687_p2.read());
}

}

