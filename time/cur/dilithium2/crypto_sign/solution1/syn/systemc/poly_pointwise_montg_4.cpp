#include "poly_pointwise_montg.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly_pointwise_montg::thread_mul_ln186_1_fu_7602_p2() {
    mul_ln186_1_fu_7602_p2 = (!mul_ln186_1_fu_7602_p0.read().is_01() || !mul_ln186_1_fu_7602_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_1_fu_7602_p0.read()) * sc_bigint<32>(mul_ln186_1_fu_7602_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_200_fu_16187_p0() {
    mul_ln186_200_fu_16187_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_200_fu_16187_p1() {
    mul_ln186_200_fu_16187_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_200_fu_16187_p2() {
    mul_ln186_200_fu_16187_p2 = (!mul_ln186_200_fu_16187_p0.read().is_01() || !mul_ln186_200_fu_16187_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_200_fu_16187_p0.read()) * sc_bigint<32>(mul_ln186_200_fu_16187_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_201_fu_16202_p0() {
    mul_ln186_201_fu_16202_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_201_fu_16202_p1() {
    mul_ln186_201_fu_16202_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_201_fu_16202_p2() {
    mul_ln186_201_fu_16202_p2 = (!mul_ln186_201_fu_16202_p0.read().is_01() || !mul_ln186_201_fu_16202_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_201_fu_16202_p0.read()) * sc_bigint<32>(mul_ln186_201_fu_16202_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_202_fu_16273_p0() {
    mul_ln186_202_fu_16273_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_202_fu_16273_p1() {
    mul_ln186_202_fu_16273_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_202_fu_16273_p2() {
    mul_ln186_202_fu_16273_p2 = (!mul_ln186_202_fu_16273_p0.read().is_01() || !mul_ln186_202_fu_16273_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_202_fu_16273_p0.read()) * sc_bigint<32>(mul_ln186_202_fu_16273_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_203_fu_16288_p0() {
    mul_ln186_203_fu_16288_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_203_fu_16288_p1() {
    mul_ln186_203_fu_16288_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_203_fu_16288_p2() {
    mul_ln186_203_fu_16288_p2 = (!mul_ln186_203_fu_16288_p0.read().is_01() || !mul_ln186_203_fu_16288_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_203_fu_16288_p0.read()) * sc_bigint<32>(mul_ln186_203_fu_16288_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_204_fu_16359_p0() {
    mul_ln186_204_fu_16359_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_204_fu_16359_p1() {
    mul_ln186_204_fu_16359_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_204_fu_16359_p2() {
    mul_ln186_204_fu_16359_p2 = (!mul_ln186_204_fu_16359_p0.read().is_01() || !mul_ln186_204_fu_16359_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_204_fu_16359_p0.read()) * sc_bigint<32>(mul_ln186_204_fu_16359_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_205_fu_16374_p0() {
    mul_ln186_205_fu_16374_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_205_fu_16374_p1() {
    mul_ln186_205_fu_16374_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_205_fu_16374_p2() {
    mul_ln186_205_fu_16374_p2 = (!mul_ln186_205_fu_16374_p0.read().is_01() || !mul_ln186_205_fu_16374_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_205_fu_16374_p0.read()) * sc_bigint<32>(mul_ln186_205_fu_16374_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_206_fu_16445_p0() {
    mul_ln186_206_fu_16445_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_206_fu_16445_p1() {
    mul_ln186_206_fu_16445_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_206_fu_16445_p2() {
    mul_ln186_206_fu_16445_p2 = (!mul_ln186_206_fu_16445_p0.read().is_01() || !mul_ln186_206_fu_16445_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_206_fu_16445_p0.read()) * sc_bigint<32>(mul_ln186_206_fu_16445_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_207_fu_16460_p0() {
    mul_ln186_207_fu_16460_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_207_fu_16460_p1() {
    mul_ln186_207_fu_16460_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_207_fu_16460_p2() {
    mul_ln186_207_fu_16460_p2 = (!mul_ln186_207_fu_16460_p0.read().is_01() || !mul_ln186_207_fu_16460_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_207_fu_16460_p0.read()) * sc_bigint<32>(mul_ln186_207_fu_16460_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_208_fu_16531_p0() {
    mul_ln186_208_fu_16531_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_208_fu_16531_p1() {
    mul_ln186_208_fu_16531_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_208_fu_16531_p2() {
    mul_ln186_208_fu_16531_p2 = (!mul_ln186_208_fu_16531_p0.read().is_01() || !mul_ln186_208_fu_16531_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_208_fu_16531_p0.read()) * sc_bigint<32>(mul_ln186_208_fu_16531_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_209_fu_16546_p0() {
    mul_ln186_209_fu_16546_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_209_fu_16546_p1() {
    mul_ln186_209_fu_16546_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_209_fu_16546_p2() {
    mul_ln186_209_fu_16546_p2 = (!mul_ln186_209_fu_16546_p0.read().is_01() || !mul_ln186_209_fu_16546_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_209_fu_16546_p0.read()) * sc_bigint<32>(mul_ln186_209_fu_16546_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_20_fu_8447_p0() {
    mul_ln186_20_fu_8447_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_20_fu_8447_p1() {
    mul_ln186_20_fu_8447_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_20_fu_8447_p2() {
    mul_ln186_20_fu_8447_p2 = (!mul_ln186_20_fu_8447_p0.read().is_01() || !mul_ln186_20_fu_8447_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_20_fu_8447_p0.read()) * sc_bigint<32>(mul_ln186_20_fu_8447_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_210_fu_16617_p0() {
    mul_ln186_210_fu_16617_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_210_fu_16617_p1() {
    mul_ln186_210_fu_16617_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_210_fu_16617_p2() {
    mul_ln186_210_fu_16617_p2 = (!mul_ln186_210_fu_16617_p0.read().is_01() || !mul_ln186_210_fu_16617_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_210_fu_16617_p0.read()) * sc_bigint<32>(mul_ln186_210_fu_16617_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_211_fu_16632_p0() {
    mul_ln186_211_fu_16632_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_211_fu_16632_p1() {
    mul_ln186_211_fu_16632_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_211_fu_16632_p2() {
    mul_ln186_211_fu_16632_p2 = (!mul_ln186_211_fu_16632_p0.read().is_01() || !mul_ln186_211_fu_16632_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_211_fu_16632_p0.read()) * sc_bigint<32>(mul_ln186_211_fu_16632_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_212_fu_16703_p0() {
    mul_ln186_212_fu_16703_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_212_fu_16703_p1() {
    mul_ln186_212_fu_16703_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_212_fu_16703_p2() {
    mul_ln186_212_fu_16703_p2 = (!mul_ln186_212_fu_16703_p0.read().is_01() || !mul_ln186_212_fu_16703_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_212_fu_16703_p0.read()) * sc_bigint<32>(mul_ln186_212_fu_16703_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_213_fu_16718_p0() {
    mul_ln186_213_fu_16718_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_213_fu_16718_p1() {
    mul_ln186_213_fu_16718_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_213_fu_16718_p2() {
    mul_ln186_213_fu_16718_p2 = (!mul_ln186_213_fu_16718_p0.read().is_01() || !mul_ln186_213_fu_16718_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_213_fu_16718_p0.read()) * sc_bigint<32>(mul_ln186_213_fu_16718_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_214_fu_16789_p0() {
    mul_ln186_214_fu_16789_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_214_fu_16789_p1() {
    mul_ln186_214_fu_16789_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_214_fu_16789_p2() {
    mul_ln186_214_fu_16789_p2 = (!mul_ln186_214_fu_16789_p0.read().is_01() || !mul_ln186_214_fu_16789_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_214_fu_16789_p0.read()) * sc_bigint<32>(mul_ln186_214_fu_16789_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_215_fu_16804_p0() {
    mul_ln186_215_fu_16804_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_215_fu_16804_p1() {
    mul_ln186_215_fu_16804_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_215_fu_16804_p2() {
    mul_ln186_215_fu_16804_p2 = (!mul_ln186_215_fu_16804_p0.read().is_01() || !mul_ln186_215_fu_16804_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_215_fu_16804_p0.read()) * sc_bigint<32>(mul_ln186_215_fu_16804_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_216_fu_16875_p0() {
    mul_ln186_216_fu_16875_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_216_fu_16875_p1() {
    mul_ln186_216_fu_16875_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_216_fu_16875_p2() {
    mul_ln186_216_fu_16875_p2 = (!mul_ln186_216_fu_16875_p0.read().is_01() || !mul_ln186_216_fu_16875_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_216_fu_16875_p0.read()) * sc_bigint<32>(mul_ln186_216_fu_16875_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_217_fu_16890_p0() {
    mul_ln186_217_fu_16890_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_217_fu_16890_p1() {
    mul_ln186_217_fu_16890_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_217_fu_16890_p2() {
    mul_ln186_217_fu_16890_p2 = (!mul_ln186_217_fu_16890_p0.read().is_01() || !mul_ln186_217_fu_16890_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_217_fu_16890_p0.read()) * sc_bigint<32>(mul_ln186_217_fu_16890_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_218_fu_16961_p0() {
    mul_ln186_218_fu_16961_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_218_fu_16961_p1() {
    mul_ln186_218_fu_16961_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_218_fu_16961_p2() {
    mul_ln186_218_fu_16961_p2 = (!mul_ln186_218_fu_16961_p0.read().is_01() || !mul_ln186_218_fu_16961_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_218_fu_16961_p0.read()) * sc_bigint<32>(mul_ln186_218_fu_16961_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_219_fu_16976_p0() {
    mul_ln186_219_fu_16976_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_219_fu_16976_p1() {
    mul_ln186_219_fu_16976_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_219_fu_16976_p2() {
    mul_ln186_219_fu_16976_p2 = (!mul_ln186_219_fu_16976_p0.read().is_01() || !mul_ln186_219_fu_16976_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_219_fu_16976_p0.read()) * sc_bigint<32>(mul_ln186_219_fu_16976_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_21_fu_8462_p0() {
    mul_ln186_21_fu_8462_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_21_fu_8462_p1() {
    mul_ln186_21_fu_8462_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_21_fu_8462_p2() {
    mul_ln186_21_fu_8462_p2 = (!mul_ln186_21_fu_8462_p0.read().is_01() || !mul_ln186_21_fu_8462_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_21_fu_8462_p0.read()) * sc_bigint<32>(mul_ln186_21_fu_8462_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_220_fu_17047_p0() {
    mul_ln186_220_fu_17047_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_220_fu_17047_p1() {
    mul_ln186_220_fu_17047_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_220_fu_17047_p2() {
    mul_ln186_220_fu_17047_p2 = (!mul_ln186_220_fu_17047_p0.read().is_01() || !mul_ln186_220_fu_17047_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_220_fu_17047_p0.read()) * sc_bigint<32>(mul_ln186_220_fu_17047_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_221_fu_17062_p0() {
    mul_ln186_221_fu_17062_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_221_fu_17062_p1() {
    mul_ln186_221_fu_17062_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_221_fu_17062_p2() {
    mul_ln186_221_fu_17062_p2 = (!mul_ln186_221_fu_17062_p0.read().is_01() || !mul_ln186_221_fu_17062_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_221_fu_17062_p0.read()) * sc_bigint<32>(mul_ln186_221_fu_17062_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_222_fu_17133_p0() {
    mul_ln186_222_fu_17133_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_222_fu_17133_p1() {
    mul_ln186_222_fu_17133_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_222_fu_17133_p2() {
    mul_ln186_222_fu_17133_p2 = (!mul_ln186_222_fu_17133_p0.read().is_01() || !mul_ln186_222_fu_17133_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_222_fu_17133_p0.read()) * sc_bigint<32>(mul_ln186_222_fu_17133_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_223_fu_17148_p0() {
    mul_ln186_223_fu_17148_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_223_fu_17148_p1() {
    mul_ln186_223_fu_17148_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_223_fu_17148_p2() {
    mul_ln186_223_fu_17148_p2 = (!mul_ln186_223_fu_17148_p0.read().is_01() || !mul_ln186_223_fu_17148_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_223_fu_17148_p0.read()) * sc_bigint<32>(mul_ln186_223_fu_17148_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_224_fu_17219_p0() {
    mul_ln186_224_fu_17219_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_224_fu_17219_p1() {
    mul_ln186_224_fu_17219_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_224_fu_17219_p2() {
    mul_ln186_224_fu_17219_p2 = (!mul_ln186_224_fu_17219_p0.read().is_01() || !mul_ln186_224_fu_17219_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_224_fu_17219_p0.read()) * sc_bigint<32>(mul_ln186_224_fu_17219_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_225_fu_17234_p0() {
    mul_ln186_225_fu_17234_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_225_fu_17234_p1() {
    mul_ln186_225_fu_17234_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_225_fu_17234_p2() {
    mul_ln186_225_fu_17234_p2 = (!mul_ln186_225_fu_17234_p0.read().is_01() || !mul_ln186_225_fu_17234_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_225_fu_17234_p0.read()) * sc_bigint<32>(mul_ln186_225_fu_17234_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_226_fu_17305_p0() {
    mul_ln186_226_fu_17305_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_226_fu_17305_p1() {
    mul_ln186_226_fu_17305_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_226_fu_17305_p2() {
    mul_ln186_226_fu_17305_p2 = (!mul_ln186_226_fu_17305_p0.read().is_01() || !mul_ln186_226_fu_17305_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_226_fu_17305_p0.read()) * sc_bigint<32>(mul_ln186_226_fu_17305_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_227_fu_17320_p0() {
    mul_ln186_227_fu_17320_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_227_fu_17320_p1() {
    mul_ln186_227_fu_17320_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_227_fu_17320_p2() {
    mul_ln186_227_fu_17320_p2 = (!mul_ln186_227_fu_17320_p0.read().is_01() || !mul_ln186_227_fu_17320_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_227_fu_17320_p0.read()) * sc_bigint<32>(mul_ln186_227_fu_17320_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_228_fu_17391_p0() {
    mul_ln186_228_fu_17391_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_228_fu_17391_p1() {
    mul_ln186_228_fu_17391_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_228_fu_17391_p2() {
    mul_ln186_228_fu_17391_p2 = (!mul_ln186_228_fu_17391_p0.read().is_01() || !mul_ln186_228_fu_17391_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_228_fu_17391_p0.read()) * sc_bigint<32>(mul_ln186_228_fu_17391_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_229_fu_17406_p0() {
    mul_ln186_229_fu_17406_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_229_fu_17406_p1() {
    mul_ln186_229_fu_17406_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_229_fu_17406_p2() {
    mul_ln186_229_fu_17406_p2 = (!mul_ln186_229_fu_17406_p0.read().is_01() || !mul_ln186_229_fu_17406_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_229_fu_17406_p0.read()) * sc_bigint<32>(mul_ln186_229_fu_17406_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_22_fu_8533_p0() {
    mul_ln186_22_fu_8533_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_22_fu_8533_p1() {
    mul_ln186_22_fu_8533_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_22_fu_8533_p2() {
    mul_ln186_22_fu_8533_p2 = (!mul_ln186_22_fu_8533_p0.read().is_01() || !mul_ln186_22_fu_8533_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_22_fu_8533_p0.read()) * sc_bigint<32>(mul_ln186_22_fu_8533_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_230_fu_17477_p0() {
    mul_ln186_230_fu_17477_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_230_fu_17477_p1() {
    mul_ln186_230_fu_17477_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_230_fu_17477_p2() {
    mul_ln186_230_fu_17477_p2 = (!mul_ln186_230_fu_17477_p0.read().is_01() || !mul_ln186_230_fu_17477_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_230_fu_17477_p0.read()) * sc_bigint<32>(mul_ln186_230_fu_17477_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_231_fu_17492_p0() {
    mul_ln186_231_fu_17492_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_231_fu_17492_p1() {
    mul_ln186_231_fu_17492_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_231_fu_17492_p2() {
    mul_ln186_231_fu_17492_p2 = (!mul_ln186_231_fu_17492_p0.read().is_01() || !mul_ln186_231_fu_17492_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_231_fu_17492_p0.read()) * sc_bigint<32>(mul_ln186_231_fu_17492_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_232_fu_17563_p0() {
    mul_ln186_232_fu_17563_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_232_fu_17563_p1() {
    mul_ln186_232_fu_17563_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_232_fu_17563_p2() {
    mul_ln186_232_fu_17563_p2 = (!mul_ln186_232_fu_17563_p0.read().is_01() || !mul_ln186_232_fu_17563_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_232_fu_17563_p0.read()) * sc_bigint<32>(mul_ln186_232_fu_17563_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_233_fu_17578_p0() {
    mul_ln186_233_fu_17578_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_233_fu_17578_p1() {
    mul_ln186_233_fu_17578_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_233_fu_17578_p2() {
    mul_ln186_233_fu_17578_p2 = (!mul_ln186_233_fu_17578_p0.read().is_01() || !mul_ln186_233_fu_17578_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_233_fu_17578_p0.read()) * sc_bigint<32>(mul_ln186_233_fu_17578_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_234_fu_17649_p0() {
    mul_ln186_234_fu_17649_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_234_fu_17649_p1() {
    mul_ln186_234_fu_17649_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_234_fu_17649_p2() {
    mul_ln186_234_fu_17649_p2 = (!mul_ln186_234_fu_17649_p0.read().is_01() || !mul_ln186_234_fu_17649_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_234_fu_17649_p0.read()) * sc_bigint<32>(mul_ln186_234_fu_17649_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_235_fu_17664_p0() {
    mul_ln186_235_fu_17664_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_235_fu_17664_p1() {
    mul_ln186_235_fu_17664_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_235_fu_17664_p2() {
    mul_ln186_235_fu_17664_p2 = (!mul_ln186_235_fu_17664_p0.read().is_01() || !mul_ln186_235_fu_17664_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_235_fu_17664_p0.read()) * sc_bigint<32>(mul_ln186_235_fu_17664_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_236_fu_17735_p0() {
    mul_ln186_236_fu_17735_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_236_fu_17735_p1() {
    mul_ln186_236_fu_17735_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_236_fu_17735_p2() {
    mul_ln186_236_fu_17735_p2 = (!mul_ln186_236_fu_17735_p0.read().is_01() || !mul_ln186_236_fu_17735_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_236_fu_17735_p0.read()) * sc_bigint<32>(mul_ln186_236_fu_17735_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_237_fu_17750_p0() {
    mul_ln186_237_fu_17750_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_237_fu_17750_p1() {
    mul_ln186_237_fu_17750_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_237_fu_17750_p2() {
    mul_ln186_237_fu_17750_p2 = (!mul_ln186_237_fu_17750_p0.read().is_01() || !mul_ln186_237_fu_17750_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_237_fu_17750_p0.read()) * sc_bigint<32>(mul_ln186_237_fu_17750_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_238_fu_17821_p0() {
    mul_ln186_238_fu_17821_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_238_fu_17821_p1() {
    mul_ln186_238_fu_17821_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_238_fu_17821_p2() {
    mul_ln186_238_fu_17821_p2 = (!mul_ln186_238_fu_17821_p0.read().is_01() || !mul_ln186_238_fu_17821_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_238_fu_17821_p0.read()) * sc_bigint<32>(mul_ln186_238_fu_17821_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_239_fu_17836_p0() {
    mul_ln186_239_fu_17836_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_239_fu_17836_p1() {
    mul_ln186_239_fu_17836_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_239_fu_17836_p2() {
    mul_ln186_239_fu_17836_p2 = (!mul_ln186_239_fu_17836_p0.read().is_01() || !mul_ln186_239_fu_17836_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_239_fu_17836_p0.read()) * sc_bigint<32>(mul_ln186_239_fu_17836_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_23_fu_8548_p0() {
    mul_ln186_23_fu_8548_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_23_fu_8548_p1() {
    mul_ln186_23_fu_8548_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_23_fu_8548_p2() {
    mul_ln186_23_fu_8548_p2 = (!mul_ln186_23_fu_8548_p0.read().is_01() || !mul_ln186_23_fu_8548_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_23_fu_8548_p0.read()) * sc_bigint<32>(mul_ln186_23_fu_8548_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_240_fu_17907_p0() {
    mul_ln186_240_fu_17907_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_240_fu_17907_p1() {
    mul_ln186_240_fu_17907_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_240_fu_17907_p2() {
    mul_ln186_240_fu_17907_p2 = (!mul_ln186_240_fu_17907_p0.read().is_01() || !mul_ln186_240_fu_17907_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_240_fu_17907_p0.read()) * sc_bigint<32>(mul_ln186_240_fu_17907_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_241_fu_17922_p0() {
    mul_ln186_241_fu_17922_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_241_fu_17922_p1() {
    mul_ln186_241_fu_17922_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_241_fu_17922_p2() {
    mul_ln186_241_fu_17922_p2 = (!mul_ln186_241_fu_17922_p0.read().is_01() || !mul_ln186_241_fu_17922_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_241_fu_17922_p0.read()) * sc_bigint<32>(mul_ln186_241_fu_17922_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_242_fu_17993_p0() {
    mul_ln186_242_fu_17993_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_242_fu_17993_p1() {
    mul_ln186_242_fu_17993_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_242_fu_17993_p2() {
    mul_ln186_242_fu_17993_p2 = (!mul_ln186_242_fu_17993_p0.read().is_01() || !mul_ln186_242_fu_17993_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_242_fu_17993_p0.read()) * sc_bigint<32>(mul_ln186_242_fu_17993_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_243_fu_18008_p0() {
    mul_ln186_243_fu_18008_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_243_fu_18008_p1() {
    mul_ln186_243_fu_18008_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_243_fu_18008_p2() {
    mul_ln186_243_fu_18008_p2 = (!mul_ln186_243_fu_18008_p0.read().is_01() || !mul_ln186_243_fu_18008_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_243_fu_18008_p0.read()) * sc_bigint<32>(mul_ln186_243_fu_18008_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_244_fu_18079_p0() {
    mul_ln186_244_fu_18079_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_244_fu_18079_p1() {
    mul_ln186_244_fu_18079_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_244_fu_18079_p2() {
    mul_ln186_244_fu_18079_p2 = (!mul_ln186_244_fu_18079_p0.read().is_01() || !mul_ln186_244_fu_18079_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_244_fu_18079_p0.read()) * sc_bigint<32>(mul_ln186_244_fu_18079_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_245_fu_18094_p0() {
    mul_ln186_245_fu_18094_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_245_fu_18094_p1() {
    mul_ln186_245_fu_18094_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_245_fu_18094_p2() {
    mul_ln186_245_fu_18094_p2 = (!mul_ln186_245_fu_18094_p0.read().is_01() || !mul_ln186_245_fu_18094_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_245_fu_18094_p0.read()) * sc_bigint<32>(mul_ln186_245_fu_18094_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_246_fu_18165_p0() {
    mul_ln186_246_fu_18165_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_246_fu_18165_p1() {
    mul_ln186_246_fu_18165_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_246_fu_18165_p2() {
    mul_ln186_246_fu_18165_p2 = (!mul_ln186_246_fu_18165_p0.read().is_01() || !mul_ln186_246_fu_18165_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_246_fu_18165_p0.read()) * sc_bigint<32>(mul_ln186_246_fu_18165_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_247_fu_18180_p0() {
    mul_ln186_247_fu_18180_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_247_fu_18180_p1() {
    mul_ln186_247_fu_18180_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_247_fu_18180_p2() {
    mul_ln186_247_fu_18180_p2 = (!mul_ln186_247_fu_18180_p0.read().is_01() || !mul_ln186_247_fu_18180_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_247_fu_18180_p0.read()) * sc_bigint<32>(mul_ln186_247_fu_18180_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_248_fu_18251_p0() {
    mul_ln186_248_fu_18251_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_248_fu_18251_p1() {
    mul_ln186_248_fu_18251_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_248_fu_18251_p2() {
    mul_ln186_248_fu_18251_p2 = (!mul_ln186_248_fu_18251_p0.read().is_01() || !mul_ln186_248_fu_18251_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_248_fu_18251_p0.read()) * sc_bigint<32>(mul_ln186_248_fu_18251_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_249_fu_18266_p0() {
    mul_ln186_249_fu_18266_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_249_fu_18266_p1() {
    mul_ln186_249_fu_18266_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_249_fu_18266_p2() {
    mul_ln186_249_fu_18266_p2 = (!mul_ln186_249_fu_18266_p0.read().is_01() || !mul_ln186_249_fu_18266_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_249_fu_18266_p0.read()) * sc_bigint<32>(mul_ln186_249_fu_18266_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_24_fu_8619_p0() {
    mul_ln186_24_fu_8619_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_24_fu_8619_p1() {
    mul_ln186_24_fu_8619_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_24_fu_8619_p2() {
    mul_ln186_24_fu_8619_p2 = (!mul_ln186_24_fu_8619_p0.read().is_01() || !mul_ln186_24_fu_8619_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_24_fu_8619_p0.read()) * sc_bigint<32>(mul_ln186_24_fu_8619_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_250_fu_18337_p0() {
    mul_ln186_250_fu_18337_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_250_fu_18337_p1() {
    mul_ln186_250_fu_18337_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_250_fu_18337_p2() {
    mul_ln186_250_fu_18337_p2 = (!mul_ln186_250_fu_18337_p0.read().is_01() || !mul_ln186_250_fu_18337_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_250_fu_18337_p0.read()) * sc_bigint<32>(mul_ln186_250_fu_18337_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_251_fu_18352_p0() {
    mul_ln186_251_fu_18352_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_251_fu_18352_p1() {
    mul_ln186_251_fu_18352_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_251_fu_18352_p2() {
    mul_ln186_251_fu_18352_p2 = (!mul_ln186_251_fu_18352_p0.read().is_01() || !mul_ln186_251_fu_18352_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_251_fu_18352_p0.read()) * sc_bigint<32>(mul_ln186_251_fu_18352_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_252_fu_18423_p0() {
    mul_ln186_252_fu_18423_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_252_fu_18423_p1() {
    mul_ln186_252_fu_18423_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_252_fu_18423_p2() {
    mul_ln186_252_fu_18423_p2 = (!mul_ln186_252_fu_18423_p0.read().is_01() || !mul_ln186_252_fu_18423_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_252_fu_18423_p0.read()) * sc_bigint<32>(mul_ln186_252_fu_18423_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_253_fu_18438_p0() {
    mul_ln186_253_fu_18438_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_253_fu_18438_p1() {
    mul_ln186_253_fu_18438_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_253_fu_18438_p2() {
    mul_ln186_253_fu_18438_p2 = (!mul_ln186_253_fu_18438_p0.read().is_01() || !mul_ln186_253_fu_18438_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_253_fu_18438_p0.read()) * sc_bigint<32>(mul_ln186_253_fu_18438_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_254_fu_18481_p0() {
    mul_ln186_254_fu_18481_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_254_fu_18481_p1() {
    mul_ln186_254_fu_18481_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_254_fu_18481_p2() {
    mul_ln186_254_fu_18481_p2 = (!mul_ln186_254_fu_18481_p0.read().is_01() || !mul_ln186_254_fu_18481_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_254_fu_18481_p0.read()) * sc_bigint<32>(mul_ln186_254_fu_18481_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_255_fu_18496_p0() {
    mul_ln186_255_fu_18496_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_255_fu_18496_p1() {
    mul_ln186_255_fu_18496_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_255_fu_18496_p2() {
    mul_ln186_255_fu_18496_p2 = (!mul_ln186_255_fu_18496_p0.read().is_01() || !mul_ln186_255_fu_18496_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_255_fu_18496_p0.read()) * sc_bigint<32>(mul_ln186_255_fu_18496_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_25_fu_8634_p0() {
    mul_ln186_25_fu_8634_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_25_fu_8634_p1() {
    mul_ln186_25_fu_8634_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_25_fu_8634_p2() {
    mul_ln186_25_fu_8634_p2 = (!mul_ln186_25_fu_8634_p0.read().is_01() || !mul_ln186_25_fu_8634_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_25_fu_8634_p0.read()) * sc_bigint<32>(mul_ln186_25_fu_8634_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_26_fu_8705_p0() {
    mul_ln186_26_fu_8705_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_26_fu_8705_p1() {
    mul_ln186_26_fu_8705_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_26_fu_8705_p2() {
    mul_ln186_26_fu_8705_p2 = (!mul_ln186_26_fu_8705_p0.read().is_01() || !mul_ln186_26_fu_8705_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_26_fu_8705_p0.read()) * sc_bigint<32>(mul_ln186_26_fu_8705_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_27_fu_8720_p0() {
    mul_ln186_27_fu_8720_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_27_fu_8720_p1() {
    mul_ln186_27_fu_8720_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_27_fu_8720_p2() {
    mul_ln186_27_fu_8720_p2 = (!mul_ln186_27_fu_8720_p0.read().is_01() || !mul_ln186_27_fu_8720_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_27_fu_8720_p0.read()) * sc_bigint<32>(mul_ln186_27_fu_8720_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_28_fu_8791_p0() {
    mul_ln186_28_fu_8791_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_28_fu_8791_p1() {
    mul_ln186_28_fu_8791_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_28_fu_8791_p2() {
    mul_ln186_28_fu_8791_p2 = (!mul_ln186_28_fu_8791_p0.read().is_01() || !mul_ln186_28_fu_8791_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_28_fu_8791_p0.read()) * sc_bigint<32>(mul_ln186_28_fu_8791_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_29_fu_8806_p0() {
    mul_ln186_29_fu_8806_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_29_fu_8806_p1() {
    mul_ln186_29_fu_8806_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_29_fu_8806_p2() {
    mul_ln186_29_fu_8806_p2 = (!mul_ln186_29_fu_8806_p0.read().is_01() || !mul_ln186_29_fu_8806_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_29_fu_8806_p0.read()) * sc_bigint<32>(mul_ln186_29_fu_8806_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_2_fu_7673_p0() {
    mul_ln186_2_fu_7673_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_2_fu_7673_p1() {
    mul_ln186_2_fu_7673_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_2_fu_7673_p2() {
    mul_ln186_2_fu_7673_p2 = (!mul_ln186_2_fu_7673_p0.read().is_01() || !mul_ln186_2_fu_7673_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_2_fu_7673_p0.read()) * sc_bigint<32>(mul_ln186_2_fu_7673_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_30_fu_8877_p0() {
    mul_ln186_30_fu_8877_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_30_fu_8877_p1() {
    mul_ln186_30_fu_8877_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_30_fu_8877_p2() {
    mul_ln186_30_fu_8877_p2 = (!mul_ln186_30_fu_8877_p0.read().is_01() || !mul_ln186_30_fu_8877_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_30_fu_8877_p0.read()) * sc_bigint<32>(mul_ln186_30_fu_8877_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_31_fu_8892_p0() {
    mul_ln186_31_fu_8892_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_31_fu_8892_p1() {
    mul_ln186_31_fu_8892_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_31_fu_8892_p2() {
    mul_ln186_31_fu_8892_p2 = (!mul_ln186_31_fu_8892_p0.read().is_01() || !mul_ln186_31_fu_8892_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_31_fu_8892_p0.read()) * sc_bigint<32>(mul_ln186_31_fu_8892_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_32_fu_8963_p0() {
    mul_ln186_32_fu_8963_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_32_fu_8963_p1() {
    mul_ln186_32_fu_8963_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_32_fu_8963_p2() {
    mul_ln186_32_fu_8963_p2 = (!mul_ln186_32_fu_8963_p0.read().is_01() || !mul_ln186_32_fu_8963_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_32_fu_8963_p0.read()) * sc_bigint<32>(mul_ln186_32_fu_8963_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_33_fu_8978_p0() {
    mul_ln186_33_fu_8978_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_33_fu_8978_p1() {
    mul_ln186_33_fu_8978_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_33_fu_8978_p2() {
    mul_ln186_33_fu_8978_p2 = (!mul_ln186_33_fu_8978_p0.read().is_01() || !mul_ln186_33_fu_8978_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_33_fu_8978_p0.read()) * sc_bigint<32>(mul_ln186_33_fu_8978_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_34_fu_9049_p0() {
    mul_ln186_34_fu_9049_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_34_fu_9049_p1() {
    mul_ln186_34_fu_9049_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_34_fu_9049_p2() {
    mul_ln186_34_fu_9049_p2 = (!mul_ln186_34_fu_9049_p0.read().is_01() || !mul_ln186_34_fu_9049_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_34_fu_9049_p0.read()) * sc_bigint<32>(mul_ln186_34_fu_9049_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_35_fu_9064_p0() {
    mul_ln186_35_fu_9064_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_35_fu_9064_p1() {
    mul_ln186_35_fu_9064_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_35_fu_9064_p2() {
    mul_ln186_35_fu_9064_p2 = (!mul_ln186_35_fu_9064_p0.read().is_01() || !mul_ln186_35_fu_9064_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_35_fu_9064_p0.read()) * sc_bigint<32>(mul_ln186_35_fu_9064_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_36_fu_9135_p0() {
    mul_ln186_36_fu_9135_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_36_fu_9135_p1() {
    mul_ln186_36_fu_9135_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_36_fu_9135_p2() {
    mul_ln186_36_fu_9135_p2 = (!mul_ln186_36_fu_9135_p0.read().is_01() || !mul_ln186_36_fu_9135_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_36_fu_9135_p0.read()) * sc_bigint<32>(mul_ln186_36_fu_9135_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_37_fu_9150_p0() {
    mul_ln186_37_fu_9150_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_37_fu_9150_p1() {
    mul_ln186_37_fu_9150_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_37_fu_9150_p2() {
    mul_ln186_37_fu_9150_p2 = (!mul_ln186_37_fu_9150_p0.read().is_01() || !mul_ln186_37_fu_9150_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_37_fu_9150_p0.read()) * sc_bigint<32>(mul_ln186_37_fu_9150_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_38_fu_9221_p0() {
    mul_ln186_38_fu_9221_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_38_fu_9221_p1() {
    mul_ln186_38_fu_9221_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_38_fu_9221_p2() {
    mul_ln186_38_fu_9221_p2 = (!mul_ln186_38_fu_9221_p0.read().is_01() || !mul_ln186_38_fu_9221_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_38_fu_9221_p0.read()) * sc_bigint<32>(mul_ln186_38_fu_9221_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_39_fu_9236_p0() {
    mul_ln186_39_fu_9236_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_39_fu_9236_p1() {
    mul_ln186_39_fu_9236_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_39_fu_9236_p2() {
    mul_ln186_39_fu_9236_p2 = (!mul_ln186_39_fu_9236_p0.read().is_01() || !mul_ln186_39_fu_9236_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_39_fu_9236_p0.read()) * sc_bigint<32>(mul_ln186_39_fu_9236_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_3_fu_7688_p0() {
    mul_ln186_3_fu_7688_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_3_fu_7688_p1() {
    mul_ln186_3_fu_7688_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_3_fu_7688_p2() {
    mul_ln186_3_fu_7688_p2 = (!mul_ln186_3_fu_7688_p0.read().is_01() || !mul_ln186_3_fu_7688_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_3_fu_7688_p0.read()) * sc_bigint<32>(mul_ln186_3_fu_7688_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_40_fu_9307_p0() {
    mul_ln186_40_fu_9307_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_40_fu_9307_p1() {
    mul_ln186_40_fu_9307_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_40_fu_9307_p2() {
    mul_ln186_40_fu_9307_p2 = (!mul_ln186_40_fu_9307_p0.read().is_01() || !mul_ln186_40_fu_9307_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_40_fu_9307_p0.read()) * sc_bigint<32>(mul_ln186_40_fu_9307_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_41_fu_9322_p0() {
    mul_ln186_41_fu_9322_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_41_fu_9322_p1() {
    mul_ln186_41_fu_9322_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_41_fu_9322_p2() {
    mul_ln186_41_fu_9322_p2 = (!mul_ln186_41_fu_9322_p0.read().is_01() || !mul_ln186_41_fu_9322_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_41_fu_9322_p0.read()) * sc_bigint<32>(mul_ln186_41_fu_9322_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_42_fu_9393_p0() {
    mul_ln186_42_fu_9393_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_42_fu_9393_p1() {
    mul_ln186_42_fu_9393_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_42_fu_9393_p2() {
    mul_ln186_42_fu_9393_p2 = (!mul_ln186_42_fu_9393_p0.read().is_01() || !mul_ln186_42_fu_9393_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_42_fu_9393_p0.read()) * sc_bigint<32>(mul_ln186_42_fu_9393_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_43_fu_9408_p0() {
    mul_ln186_43_fu_9408_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_43_fu_9408_p1() {
    mul_ln186_43_fu_9408_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_43_fu_9408_p2() {
    mul_ln186_43_fu_9408_p2 = (!mul_ln186_43_fu_9408_p0.read().is_01() || !mul_ln186_43_fu_9408_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_43_fu_9408_p0.read()) * sc_bigint<32>(mul_ln186_43_fu_9408_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_44_fu_9479_p0() {
    mul_ln186_44_fu_9479_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_44_fu_9479_p1() {
    mul_ln186_44_fu_9479_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_44_fu_9479_p2() {
    mul_ln186_44_fu_9479_p2 = (!mul_ln186_44_fu_9479_p0.read().is_01() || !mul_ln186_44_fu_9479_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_44_fu_9479_p0.read()) * sc_bigint<32>(mul_ln186_44_fu_9479_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_45_fu_9494_p0() {
    mul_ln186_45_fu_9494_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_45_fu_9494_p1() {
    mul_ln186_45_fu_9494_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_45_fu_9494_p2() {
    mul_ln186_45_fu_9494_p2 = (!mul_ln186_45_fu_9494_p0.read().is_01() || !mul_ln186_45_fu_9494_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_45_fu_9494_p0.read()) * sc_bigint<32>(mul_ln186_45_fu_9494_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_46_fu_9565_p0() {
    mul_ln186_46_fu_9565_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_46_fu_9565_p1() {
    mul_ln186_46_fu_9565_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_46_fu_9565_p2() {
    mul_ln186_46_fu_9565_p2 = (!mul_ln186_46_fu_9565_p0.read().is_01() || !mul_ln186_46_fu_9565_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_46_fu_9565_p0.read()) * sc_bigint<32>(mul_ln186_46_fu_9565_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_47_fu_9580_p0() {
    mul_ln186_47_fu_9580_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_47_fu_9580_p1() {
    mul_ln186_47_fu_9580_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_47_fu_9580_p2() {
    mul_ln186_47_fu_9580_p2 = (!mul_ln186_47_fu_9580_p0.read().is_01() || !mul_ln186_47_fu_9580_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_47_fu_9580_p0.read()) * sc_bigint<32>(mul_ln186_47_fu_9580_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_48_fu_9651_p0() {
    mul_ln186_48_fu_9651_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_48_fu_9651_p1() {
    mul_ln186_48_fu_9651_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_48_fu_9651_p2() {
    mul_ln186_48_fu_9651_p2 = (!mul_ln186_48_fu_9651_p0.read().is_01() || !mul_ln186_48_fu_9651_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_48_fu_9651_p0.read()) * sc_bigint<32>(mul_ln186_48_fu_9651_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_49_fu_9666_p0() {
    mul_ln186_49_fu_9666_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_49_fu_9666_p1() {
    mul_ln186_49_fu_9666_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_49_fu_9666_p2() {
    mul_ln186_49_fu_9666_p2 = (!mul_ln186_49_fu_9666_p0.read().is_01() || !mul_ln186_49_fu_9666_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_49_fu_9666_p0.read()) * sc_bigint<32>(mul_ln186_49_fu_9666_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_4_fu_7759_p0() {
    mul_ln186_4_fu_7759_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_4_fu_7759_p1() {
    mul_ln186_4_fu_7759_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_4_fu_7759_p2() {
    mul_ln186_4_fu_7759_p2 = (!mul_ln186_4_fu_7759_p0.read().is_01() || !mul_ln186_4_fu_7759_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_4_fu_7759_p0.read()) * sc_bigint<32>(mul_ln186_4_fu_7759_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_50_fu_9737_p0() {
    mul_ln186_50_fu_9737_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_50_fu_9737_p1() {
    mul_ln186_50_fu_9737_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_50_fu_9737_p2() {
    mul_ln186_50_fu_9737_p2 = (!mul_ln186_50_fu_9737_p0.read().is_01() || !mul_ln186_50_fu_9737_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_50_fu_9737_p0.read()) * sc_bigint<32>(mul_ln186_50_fu_9737_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_51_fu_9752_p0() {
    mul_ln186_51_fu_9752_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_51_fu_9752_p1() {
    mul_ln186_51_fu_9752_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_51_fu_9752_p2() {
    mul_ln186_51_fu_9752_p2 = (!mul_ln186_51_fu_9752_p0.read().is_01() || !mul_ln186_51_fu_9752_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_51_fu_9752_p0.read()) * sc_bigint<32>(mul_ln186_51_fu_9752_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_52_fu_9823_p0() {
    mul_ln186_52_fu_9823_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_52_fu_9823_p1() {
    mul_ln186_52_fu_9823_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_52_fu_9823_p2() {
    mul_ln186_52_fu_9823_p2 = (!mul_ln186_52_fu_9823_p0.read().is_01() || !mul_ln186_52_fu_9823_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_52_fu_9823_p0.read()) * sc_bigint<32>(mul_ln186_52_fu_9823_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_53_fu_9838_p0() {
    mul_ln186_53_fu_9838_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_53_fu_9838_p1() {
    mul_ln186_53_fu_9838_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_53_fu_9838_p2() {
    mul_ln186_53_fu_9838_p2 = (!mul_ln186_53_fu_9838_p0.read().is_01() || !mul_ln186_53_fu_9838_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_53_fu_9838_p0.read()) * sc_bigint<32>(mul_ln186_53_fu_9838_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_54_fu_9909_p0() {
    mul_ln186_54_fu_9909_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_54_fu_9909_p1() {
    mul_ln186_54_fu_9909_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_54_fu_9909_p2() {
    mul_ln186_54_fu_9909_p2 = (!mul_ln186_54_fu_9909_p0.read().is_01() || !mul_ln186_54_fu_9909_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_54_fu_9909_p0.read()) * sc_bigint<32>(mul_ln186_54_fu_9909_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_55_fu_9924_p0() {
    mul_ln186_55_fu_9924_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_55_fu_9924_p1() {
    mul_ln186_55_fu_9924_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_55_fu_9924_p2() {
    mul_ln186_55_fu_9924_p2 = (!mul_ln186_55_fu_9924_p0.read().is_01() || !mul_ln186_55_fu_9924_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_55_fu_9924_p0.read()) * sc_bigint<32>(mul_ln186_55_fu_9924_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_56_fu_9995_p0() {
    mul_ln186_56_fu_9995_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_56_fu_9995_p1() {
    mul_ln186_56_fu_9995_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_56_fu_9995_p2() {
    mul_ln186_56_fu_9995_p2 = (!mul_ln186_56_fu_9995_p0.read().is_01() || !mul_ln186_56_fu_9995_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_56_fu_9995_p0.read()) * sc_bigint<32>(mul_ln186_56_fu_9995_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_57_fu_10010_p0() {
    mul_ln186_57_fu_10010_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_57_fu_10010_p1() {
    mul_ln186_57_fu_10010_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_57_fu_10010_p2() {
    mul_ln186_57_fu_10010_p2 = (!mul_ln186_57_fu_10010_p0.read().is_01() || !mul_ln186_57_fu_10010_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_57_fu_10010_p0.read()) * sc_bigint<32>(mul_ln186_57_fu_10010_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_58_fu_10081_p0() {
    mul_ln186_58_fu_10081_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_58_fu_10081_p1() {
    mul_ln186_58_fu_10081_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_58_fu_10081_p2() {
    mul_ln186_58_fu_10081_p2 = (!mul_ln186_58_fu_10081_p0.read().is_01() || !mul_ln186_58_fu_10081_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_58_fu_10081_p0.read()) * sc_bigint<32>(mul_ln186_58_fu_10081_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_59_fu_10096_p0() {
    mul_ln186_59_fu_10096_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_59_fu_10096_p1() {
    mul_ln186_59_fu_10096_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_59_fu_10096_p2() {
    mul_ln186_59_fu_10096_p2 = (!mul_ln186_59_fu_10096_p0.read().is_01() || !mul_ln186_59_fu_10096_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_59_fu_10096_p0.read()) * sc_bigint<32>(mul_ln186_59_fu_10096_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_5_fu_7774_p0() {
    mul_ln186_5_fu_7774_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_5_fu_7774_p1() {
    mul_ln186_5_fu_7774_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_5_fu_7774_p2() {
    mul_ln186_5_fu_7774_p2 = (!mul_ln186_5_fu_7774_p0.read().is_01() || !mul_ln186_5_fu_7774_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_5_fu_7774_p0.read()) * sc_bigint<32>(mul_ln186_5_fu_7774_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_60_fu_10167_p0() {
    mul_ln186_60_fu_10167_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_60_fu_10167_p1() {
    mul_ln186_60_fu_10167_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_60_fu_10167_p2() {
    mul_ln186_60_fu_10167_p2 = (!mul_ln186_60_fu_10167_p0.read().is_01() || !mul_ln186_60_fu_10167_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_60_fu_10167_p0.read()) * sc_bigint<32>(mul_ln186_60_fu_10167_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_61_fu_10182_p0() {
    mul_ln186_61_fu_10182_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_61_fu_10182_p1() {
    mul_ln186_61_fu_10182_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_61_fu_10182_p2() {
    mul_ln186_61_fu_10182_p2 = (!mul_ln186_61_fu_10182_p0.read().is_01() || !mul_ln186_61_fu_10182_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_61_fu_10182_p0.read()) * sc_bigint<32>(mul_ln186_61_fu_10182_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_62_fu_10253_p0() {
    mul_ln186_62_fu_10253_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_62_fu_10253_p1() {
    mul_ln186_62_fu_10253_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_62_fu_10253_p2() {
    mul_ln186_62_fu_10253_p2 = (!mul_ln186_62_fu_10253_p0.read().is_01() || !mul_ln186_62_fu_10253_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_62_fu_10253_p0.read()) * sc_bigint<32>(mul_ln186_62_fu_10253_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_63_fu_10268_p0() {
    mul_ln186_63_fu_10268_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_63_fu_10268_p1() {
    mul_ln186_63_fu_10268_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_63_fu_10268_p2() {
    mul_ln186_63_fu_10268_p2 = (!mul_ln186_63_fu_10268_p0.read().is_01() || !mul_ln186_63_fu_10268_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_63_fu_10268_p0.read()) * sc_bigint<32>(mul_ln186_63_fu_10268_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_64_fu_10339_p0() {
    mul_ln186_64_fu_10339_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_64_fu_10339_p1() {
    mul_ln186_64_fu_10339_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_64_fu_10339_p2() {
    mul_ln186_64_fu_10339_p2 = (!mul_ln186_64_fu_10339_p0.read().is_01() || !mul_ln186_64_fu_10339_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_64_fu_10339_p0.read()) * sc_bigint<32>(mul_ln186_64_fu_10339_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_65_fu_10354_p0() {
    mul_ln186_65_fu_10354_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_65_fu_10354_p1() {
    mul_ln186_65_fu_10354_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_65_fu_10354_p2() {
    mul_ln186_65_fu_10354_p2 = (!mul_ln186_65_fu_10354_p0.read().is_01() || !mul_ln186_65_fu_10354_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_65_fu_10354_p0.read()) * sc_bigint<32>(mul_ln186_65_fu_10354_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_66_fu_10425_p0() {
    mul_ln186_66_fu_10425_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_66_fu_10425_p1() {
    mul_ln186_66_fu_10425_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_66_fu_10425_p2() {
    mul_ln186_66_fu_10425_p2 = (!mul_ln186_66_fu_10425_p0.read().is_01() || !mul_ln186_66_fu_10425_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_66_fu_10425_p0.read()) * sc_bigint<32>(mul_ln186_66_fu_10425_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_67_fu_10440_p0() {
    mul_ln186_67_fu_10440_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_67_fu_10440_p1() {
    mul_ln186_67_fu_10440_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_67_fu_10440_p2() {
    mul_ln186_67_fu_10440_p2 = (!mul_ln186_67_fu_10440_p0.read().is_01() || !mul_ln186_67_fu_10440_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_67_fu_10440_p0.read()) * sc_bigint<32>(mul_ln186_67_fu_10440_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_68_fu_10511_p0() {
    mul_ln186_68_fu_10511_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_68_fu_10511_p1() {
    mul_ln186_68_fu_10511_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_68_fu_10511_p2() {
    mul_ln186_68_fu_10511_p2 = (!mul_ln186_68_fu_10511_p0.read().is_01() || !mul_ln186_68_fu_10511_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_68_fu_10511_p0.read()) * sc_bigint<32>(mul_ln186_68_fu_10511_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_69_fu_10526_p0() {
    mul_ln186_69_fu_10526_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_69_fu_10526_p1() {
    mul_ln186_69_fu_10526_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_69_fu_10526_p2() {
    mul_ln186_69_fu_10526_p2 = (!mul_ln186_69_fu_10526_p0.read().is_01() || !mul_ln186_69_fu_10526_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_69_fu_10526_p0.read()) * sc_bigint<32>(mul_ln186_69_fu_10526_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_6_fu_7845_p0() {
    mul_ln186_6_fu_7845_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_6_fu_7845_p1() {
    mul_ln186_6_fu_7845_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_6_fu_7845_p2() {
    mul_ln186_6_fu_7845_p2 = (!mul_ln186_6_fu_7845_p0.read().is_01() || !mul_ln186_6_fu_7845_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_6_fu_7845_p0.read()) * sc_bigint<32>(mul_ln186_6_fu_7845_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_70_fu_10597_p0() {
    mul_ln186_70_fu_10597_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_70_fu_10597_p1() {
    mul_ln186_70_fu_10597_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_70_fu_10597_p2() {
    mul_ln186_70_fu_10597_p2 = (!mul_ln186_70_fu_10597_p0.read().is_01() || !mul_ln186_70_fu_10597_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_70_fu_10597_p0.read()) * sc_bigint<32>(mul_ln186_70_fu_10597_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_71_fu_10612_p0() {
    mul_ln186_71_fu_10612_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_71_fu_10612_p1() {
    mul_ln186_71_fu_10612_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_71_fu_10612_p2() {
    mul_ln186_71_fu_10612_p2 = (!mul_ln186_71_fu_10612_p0.read().is_01() || !mul_ln186_71_fu_10612_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_71_fu_10612_p0.read()) * sc_bigint<32>(mul_ln186_71_fu_10612_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_72_fu_10683_p0() {
    mul_ln186_72_fu_10683_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_72_fu_10683_p1() {
    mul_ln186_72_fu_10683_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_72_fu_10683_p2() {
    mul_ln186_72_fu_10683_p2 = (!mul_ln186_72_fu_10683_p0.read().is_01() || !mul_ln186_72_fu_10683_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_72_fu_10683_p0.read()) * sc_bigint<32>(mul_ln186_72_fu_10683_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_73_fu_10698_p0() {
    mul_ln186_73_fu_10698_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_73_fu_10698_p1() {
    mul_ln186_73_fu_10698_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_73_fu_10698_p2() {
    mul_ln186_73_fu_10698_p2 = (!mul_ln186_73_fu_10698_p0.read().is_01() || !mul_ln186_73_fu_10698_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_73_fu_10698_p0.read()) * sc_bigint<32>(mul_ln186_73_fu_10698_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_74_fu_10769_p0() {
    mul_ln186_74_fu_10769_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_74_fu_10769_p1() {
    mul_ln186_74_fu_10769_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_74_fu_10769_p2() {
    mul_ln186_74_fu_10769_p2 = (!mul_ln186_74_fu_10769_p0.read().is_01() || !mul_ln186_74_fu_10769_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_74_fu_10769_p0.read()) * sc_bigint<32>(mul_ln186_74_fu_10769_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_75_fu_10784_p0() {
    mul_ln186_75_fu_10784_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_75_fu_10784_p1() {
    mul_ln186_75_fu_10784_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_75_fu_10784_p2() {
    mul_ln186_75_fu_10784_p2 = (!mul_ln186_75_fu_10784_p0.read().is_01() || !mul_ln186_75_fu_10784_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_75_fu_10784_p0.read()) * sc_bigint<32>(mul_ln186_75_fu_10784_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_76_fu_10855_p0() {
    mul_ln186_76_fu_10855_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_76_fu_10855_p1() {
    mul_ln186_76_fu_10855_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_76_fu_10855_p2() {
    mul_ln186_76_fu_10855_p2 = (!mul_ln186_76_fu_10855_p0.read().is_01() || !mul_ln186_76_fu_10855_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_76_fu_10855_p0.read()) * sc_bigint<32>(mul_ln186_76_fu_10855_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_77_fu_10870_p0() {
    mul_ln186_77_fu_10870_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_77_fu_10870_p1() {
    mul_ln186_77_fu_10870_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_77_fu_10870_p2() {
    mul_ln186_77_fu_10870_p2 = (!mul_ln186_77_fu_10870_p0.read().is_01() || !mul_ln186_77_fu_10870_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_77_fu_10870_p0.read()) * sc_bigint<32>(mul_ln186_77_fu_10870_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_78_fu_10941_p0() {
    mul_ln186_78_fu_10941_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_78_fu_10941_p1() {
    mul_ln186_78_fu_10941_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_78_fu_10941_p2() {
    mul_ln186_78_fu_10941_p2 = (!mul_ln186_78_fu_10941_p0.read().is_01() || !mul_ln186_78_fu_10941_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_78_fu_10941_p0.read()) * sc_bigint<32>(mul_ln186_78_fu_10941_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_79_fu_10956_p0() {
    mul_ln186_79_fu_10956_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_79_fu_10956_p1() {
    mul_ln186_79_fu_10956_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_79_fu_10956_p2() {
    mul_ln186_79_fu_10956_p2 = (!mul_ln186_79_fu_10956_p0.read().is_01() || !mul_ln186_79_fu_10956_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_79_fu_10956_p0.read()) * sc_bigint<32>(mul_ln186_79_fu_10956_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_7_fu_7860_p0() {
    mul_ln186_7_fu_7860_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_7_fu_7860_p1() {
    mul_ln186_7_fu_7860_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_7_fu_7860_p2() {
    mul_ln186_7_fu_7860_p2 = (!mul_ln186_7_fu_7860_p0.read().is_01() || !mul_ln186_7_fu_7860_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_7_fu_7860_p0.read()) * sc_bigint<32>(mul_ln186_7_fu_7860_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_80_fu_11027_p0() {
    mul_ln186_80_fu_11027_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_80_fu_11027_p1() {
    mul_ln186_80_fu_11027_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_80_fu_11027_p2() {
    mul_ln186_80_fu_11027_p2 = (!mul_ln186_80_fu_11027_p0.read().is_01() || !mul_ln186_80_fu_11027_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_80_fu_11027_p0.read()) * sc_bigint<32>(mul_ln186_80_fu_11027_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_81_fu_11042_p0() {
    mul_ln186_81_fu_11042_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_81_fu_11042_p1() {
    mul_ln186_81_fu_11042_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_81_fu_11042_p2() {
    mul_ln186_81_fu_11042_p2 = (!mul_ln186_81_fu_11042_p0.read().is_01() || !mul_ln186_81_fu_11042_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_81_fu_11042_p0.read()) * sc_bigint<32>(mul_ln186_81_fu_11042_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_82_fu_11113_p0() {
    mul_ln186_82_fu_11113_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_82_fu_11113_p1() {
    mul_ln186_82_fu_11113_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_82_fu_11113_p2() {
    mul_ln186_82_fu_11113_p2 = (!mul_ln186_82_fu_11113_p0.read().is_01() || !mul_ln186_82_fu_11113_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_82_fu_11113_p0.read()) * sc_bigint<32>(mul_ln186_82_fu_11113_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_83_fu_11128_p0() {
    mul_ln186_83_fu_11128_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_83_fu_11128_p1() {
    mul_ln186_83_fu_11128_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_83_fu_11128_p2() {
    mul_ln186_83_fu_11128_p2 = (!mul_ln186_83_fu_11128_p0.read().is_01() || !mul_ln186_83_fu_11128_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_83_fu_11128_p0.read()) * sc_bigint<32>(mul_ln186_83_fu_11128_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_84_fu_11199_p0() {
    mul_ln186_84_fu_11199_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_84_fu_11199_p1() {
    mul_ln186_84_fu_11199_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_84_fu_11199_p2() {
    mul_ln186_84_fu_11199_p2 = (!mul_ln186_84_fu_11199_p0.read().is_01() || !mul_ln186_84_fu_11199_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_84_fu_11199_p0.read()) * sc_bigint<32>(mul_ln186_84_fu_11199_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_85_fu_11214_p0() {
    mul_ln186_85_fu_11214_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_85_fu_11214_p1() {
    mul_ln186_85_fu_11214_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_85_fu_11214_p2() {
    mul_ln186_85_fu_11214_p2 = (!mul_ln186_85_fu_11214_p0.read().is_01() || !mul_ln186_85_fu_11214_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_85_fu_11214_p0.read()) * sc_bigint<32>(mul_ln186_85_fu_11214_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_86_fu_11285_p0() {
    mul_ln186_86_fu_11285_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_86_fu_11285_p1() {
    mul_ln186_86_fu_11285_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_86_fu_11285_p2() {
    mul_ln186_86_fu_11285_p2 = (!mul_ln186_86_fu_11285_p0.read().is_01() || !mul_ln186_86_fu_11285_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_86_fu_11285_p0.read()) * sc_bigint<32>(mul_ln186_86_fu_11285_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_87_fu_11300_p0() {
    mul_ln186_87_fu_11300_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_87_fu_11300_p1() {
    mul_ln186_87_fu_11300_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_87_fu_11300_p2() {
    mul_ln186_87_fu_11300_p2 = (!mul_ln186_87_fu_11300_p0.read().is_01() || !mul_ln186_87_fu_11300_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_87_fu_11300_p0.read()) * sc_bigint<32>(mul_ln186_87_fu_11300_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_88_fu_11371_p0() {
    mul_ln186_88_fu_11371_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_88_fu_11371_p1() {
    mul_ln186_88_fu_11371_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_88_fu_11371_p2() {
    mul_ln186_88_fu_11371_p2 = (!mul_ln186_88_fu_11371_p0.read().is_01() || !mul_ln186_88_fu_11371_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_88_fu_11371_p0.read()) * sc_bigint<32>(mul_ln186_88_fu_11371_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_89_fu_11386_p0() {
    mul_ln186_89_fu_11386_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_89_fu_11386_p1() {
    mul_ln186_89_fu_11386_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_89_fu_11386_p2() {
    mul_ln186_89_fu_11386_p2 = (!mul_ln186_89_fu_11386_p0.read().is_01() || !mul_ln186_89_fu_11386_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_89_fu_11386_p0.read()) * sc_bigint<32>(mul_ln186_89_fu_11386_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_8_fu_7931_p0() {
    mul_ln186_8_fu_7931_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_8_fu_7931_p1() {
    mul_ln186_8_fu_7931_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_8_fu_7931_p2() {
    mul_ln186_8_fu_7931_p2 = (!mul_ln186_8_fu_7931_p0.read().is_01() || !mul_ln186_8_fu_7931_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_8_fu_7931_p0.read()) * sc_bigint<32>(mul_ln186_8_fu_7931_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_90_fu_11457_p0() {
    mul_ln186_90_fu_11457_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_90_fu_11457_p1() {
    mul_ln186_90_fu_11457_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_90_fu_11457_p2() {
    mul_ln186_90_fu_11457_p2 = (!mul_ln186_90_fu_11457_p0.read().is_01() || !mul_ln186_90_fu_11457_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_90_fu_11457_p0.read()) * sc_bigint<32>(mul_ln186_90_fu_11457_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_91_fu_11472_p0() {
    mul_ln186_91_fu_11472_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_91_fu_11472_p1() {
    mul_ln186_91_fu_11472_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_91_fu_11472_p2() {
    mul_ln186_91_fu_11472_p2 = (!mul_ln186_91_fu_11472_p0.read().is_01() || !mul_ln186_91_fu_11472_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_91_fu_11472_p0.read()) * sc_bigint<32>(mul_ln186_91_fu_11472_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_92_fu_11543_p0() {
    mul_ln186_92_fu_11543_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_92_fu_11543_p1() {
    mul_ln186_92_fu_11543_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_92_fu_11543_p2() {
    mul_ln186_92_fu_11543_p2 = (!mul_ln186_92_fu_11543_p0.read().is_01() || !mul_ln186_92_fu_11543_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_92_fu_11543_p0.read()) * sc_bigint<32>(mul_ln186_92_fu_11543_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_93_fu_11558_p0() {
    mul_ln186_93_fu_11558_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_93_fu_11558_p1() {
    mul_ln186_93_fu_11558_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_93_fu_11558_p2() {
    mul_ln186_93_fu_11558_p2 = (!mul_ln186_93_fu_11558_p0.read().is_01() || !mul_ln186_93_fu_11558_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_93_fu_11558_p0.read()) * sc_bigint<32>(mul_ln186_93_fu_11558_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_94_fu_11629_p0() {
    mul_ln186_94_fu_11629_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_94_fu_11629_p1() {
    mul_ln186_94_fu_11629_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_94_fu_11629_p2() {
    mul_ln186_94_fu_11629_p2 = (!mul_ln186_94_fu_11629_p0.read().is_01() || !mul_ln186_94_fu_11629_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_94_fu_11629_p0.read()) * sc_bigint<32>(mul_ln186_94_fu_11629_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_95_fu_11644_p0() {
    mul_ln186_95_fu_11644_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_95_fu_11644_p1() {
    mul_ln186_95_fu_11644_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_95_fu_11644_p2() {
    mul_ln186_95_fu_11644_p2 = (!mul_ln186_95_fu_11644_p0.read().is_01() || !mul_ln186_95_fu_11644_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_95_fu_11644_p0.read()) * sc_bigint<32>(mul_ln186_95_fu_11644_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_96_fu_11715_p0() {
    mul_ln186_96_fu_11715_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_96_fu_11715_p1() {
    mul_ln186_96_fu_11715_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_96_fu_11715_p2() {
    mul_ln186_96_fu_11715_p2 = (!mul_ln186_96_fu_11715_p0.read().is_01() || !mul_ln186_96_fu_11715_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_96_fu_11715_p0.read()) * sc_bigint<32>(mul_ln186_96_fu_11715_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_97_fu_11730_p0() {
    mul_ln186_97_fu_11730_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_97_fu_11730_p1() {
    mul_ln186_97_fu_11730_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_97_fu_11730_p2() {
    mul_ln186_97_fu_11730_p2 = (!mul_ln186_97_fu_11730_p0.read().is_01() || !mul_ln186_97_fu_11730_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_97_fu_11730_p0.read()) * sc_bigint<32>(mul_ln186_97_fu_11730_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_98_fu_11801_p0() {
    mul_ln186_98_fu_11801_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_98_fu_11801_p1() {
    mul_ln186_98_fu_11801_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_98_fu_11801_p2() {
    mul_ln186_98_fu_11801_p2 = (!mul_ln186_98_fu_11801_p0.read().is_01() || !mul_ln186_98_fu_11801_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_98_fu_11801_p0.read()) * sc_bigint<32>(mul_ln186_98_fu_11801_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_99_fu_11816_p0() {
    mul_ln186_99_fu_11816_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_99_fu_11816_p1() {
    mul_ln186_99_fu_11816_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_99_fu_11816_p2() {
    mul_ln186_99_fu_11816_p2 = (!mul_ln186_99_fu_11816_p0.read().is_01() || !mul_ln186_99_fu_11816_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_99_fu_11816_p0.read()) * sc_bigint<32>(mul_ln186_99_fu_11816_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_9_fu_7946_p0() {
    mul_ln186_9_fu_7946_p0 = a_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_9_fu_7946_p1() {
    mul_ln186_9_fu_7946_p1 = b_coeffs_q1.read();
}

void poly_pointwise_montg::thread_mul_ln186_9_fu_7946_p2() {
    mul_ln186_9_fu_7946_p2 = (!mul_ln186_9_fu_7946_p0.read().is_01() || !mul_ln186_9_fu_7946_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_9_fu_7946_p0.read()) * sc_bigint<32>(mul_ln186_9_fu_7946_p1.read());
}

void poly_pointwise_montg::thread_mul_ln186_fu_7587_p0() {
    mul_ln186_fu_7587_p0 = a_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_fu_7587_p1() {
    mul_ln186_fu_7587_p1 = b_coeffs_q0.read();
}

void poly_pointwise_montg::thread_mul_ln186_fu_7587_p2() {
    mul_ln186_fu_7587_p2 = (!mul_ln186_fu_7587_p0.read().is_01() || !mul_ln186_fu_7587_p1.read().is_01())? sc_lv<64>(): sc_bigint<32>(mul_ln186_fu_7587_p0.read()) * sc_bigint<32>(mul_ln186_fu_7587_p1.read());
}

void poly_pointwise_montg::thread_or_ln186_100_fu_11751_p2() {
    or_ln186_100_fu_11751_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_65);
}

void poly_pointwise_montg::thread_or_ln186_101_fu_11823_p2() {
    or_ln186_101_fu_11823_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_66);
}

void poly_pointwise_montg::thread_or_ln186_102_fu_11837_p2() {
    or_ln186_102_fu_11837_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_67);
}

void poly_pointwise_montg::thread_or_ln186_103_fu_11909_p2() {
    or_ln186_103_fu_11909_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_68);
}

void poly_pointwise_montg::thread_or_ln186_104_fu_11923_p2() {
    or_ln186_104_fu_11923_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_69);
}

void poly_pointwise_montg::thread_or_ln186_105_fu_11995_p2() {
    or_ln186_105_fu_11995_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6A);
}

void poly_pointwise_montg::thread_or_ln186_106_fu_12009_p2() {
    or_ln186_106_fu_12009_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6B);
}

void poly_pointwise_montg::thread_or_ln186_107_fu_12081_p2() {
    or_ln186_107_fu_12081_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6C);
}

void poly_pointwise_montg::thread_or_ln186_108_fu_12095_p2() {
    or_ln186_108_fu_12095_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6D);
}

void poly_pointwise_montg::thread_or_ln186_109_fu_12167_p2() {
    or_ln186_109_fu_12167_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6E);
}

void poly_pointwise_montg::thread_or_ln186_10_fu_7881_p2() {
    or_ln186_10_fu_7881_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B);
}

void poly_pointwise_montg::thread_or_ln186_110_fu_12181_p2() {
    or_ln186_110_fu_12181_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6F);
}

void poly_pointwise_montg::thread_or_ln186_111_fu_12253_p2() {
    or_ln186_111_fu_12253_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_70);
}

void poly_pointwise_montg::thread_or_ln186_112_fu_12267_p2() {
    or_ln186_112_fu_12267_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_71);
}

void poly_pointwise_montg::thread_or_ln186_113_fu_12339_p2() {
    or_ln186_113_fu_12339_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_72);
}

void poly_pointwise_montg::thread_or_ln186_114_fu_12353_p2() {
    or_ln186_114_fu_12353_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_73);
}

void poly_pointwise_montg::thread_or_ln186_115_fu_12425_p2() {
    or_ln186_115_fu_12425_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_74);
}

void poly_pointwise_montg::thread_or_ln186_116_fu_12439_p2() {
    or_ln186_116_fu_12439_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_75);
}

void poly_pointwise_montg::thread_or_ln186_117_fu_12511_p2() {
    or_ln186_117_fu_12511_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_76);
}

void poly_pointwise_montg::thread_or_ln186_118_fu_12525_p2() {
    or_ln186_118_fu_12525_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_77);
}

void poly_pointwise_montg::thread_or_ln186_119_fu_12597_p2() {
    or_ln186_119_fu_12597_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_78);
}

void poly_pointwise_montg::thread_or_ln186_11_fu_7953_p2() {
    or_ln186_11_fu_7953_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C);
}

void poly_pointwise_montg::thread_or_ln186_120_fu_12611_p2() {
    or_ln186_120_fu_12611_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_79);
}

void poly_pointwise_montg::thread_or_ln186_121_fu_12683_p2() {
    or_ln186_121_fu_12683_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7A);
}

void poly_pointwise_montg::thread_or_ln186_122_fu_12697_p2() {
    or_ln186_122_fu_12697_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7B);
}

void poly_pointwise_montg::thread_or_ln186_123_fu_12769_p2() {
    or_ln186_123_fu_12769_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7C);
}

void poly_pointwise_montg::thread_or_ln186_124_fu_12783_p2() {
    or_ln186_124_fu_12783_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7D);
}

void poly_pointwise_montg::thread_or_ln186_125_fu_12855_p2() {
    or_ln186_125_fu_12855_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7E);
}

void poly_pointwise_montg::thread_or_ln186_126_fu_12869_p2() {
    or_ln186_126_fu_12869_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7F);
}

void poly_pointwise_montg::thread_or_ln186_127_fu_12941_p2() {
    or_ln186_127_fu_12941_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_80);
}

void poly_pointwise_montg::thread_or_ln186_128_fu_12955_p2() {
    or_ln186_128_fu_12955_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_81);
}

void poly_pointwise_montg::thread_or_ln186_129_fu_13027_p2() {
    or_ln186_129_fu_13027_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_82);
}

void poly_pointwise_montg::thread_or_ln186_12_fu_7967_p2() {
    or_ln186_12_fu_7967_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D);
}

void poly_pointwise_montg::thread_or_ln186_130_fu_13041_p2() {
    or_ln186_130_fu_13041_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_83);
}

void poly_pointwise_montg::thread_or_ln186_131_fu_13113_p2() {
    or_ln186_131_fu_13113_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_84);
}

void poly_pointwise_montg::thread_or_ln186_132_fu_13127_p2() {
    or_ln186_132_fu_13127_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_85);
}

void poly_pointwise_montg::thread_or_ln186_133_fu_13199_p2() {
    or_ln186_133_fu_13199_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_86);
}

void poly_pointwise_montg::thread_or_ln186_134_fu_13213_p2() {
    or_ln186_134_fu_13213_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_87);
}

void poly_pointwise_montg::thread_or_ln186_135_fu_13285_p2() {
    or_ln186_135_fu_13285_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_88);
}

void poly_pointwise_montg::thread_or_ln186_136_fu_13299_p2() {
    or_ln186_136_fu_13299_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_89);
}

void poly_pointwise_montg::thread_or_ln186_137_fu_13371_p2() {
    or_ln186_137_fu_13371_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8A);
}

void poly_pointwise_montg::thread_or_ln186_138_fu_13385_p2() {
    or_ln186_138_fu_13385_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8B);
}

void poly_pointwise_montg::thread_or_ln186_139_fu_13457_p2() {
    or_ln186_139_fu_13457_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8C);
}

void poly_pointwise_montg::thread_or_ln186_13_fu_8039_p2() {
    or_ln186_13_fu_8039_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E);
}

void poly_pointwise_montg::thread_or_ln186_140_fu_13471_p2() {
    or_ln186_140_fu_13471_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8D);
}

void poly_pointwise_montg::thread_or_ln186_141_fu_13543_p2() {
    or_ln186_141_fu_13543_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8E);
}

void poly_pointwise_montg::thread_or_ln186_142_fu_13557_p2() {
    or_ln186_142_fu_13557_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8F);
}

void poly_pointwise_montg::thread_or_ln186_143_fu_13629_p2() {
    or_ln186_143_fu_13629_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_90);
}

void poly_pointwise_montg::thread_or_ln186_144_fu_13643_p2() {
    or_ln186_144_fu_13643_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_91);
}

void poly_pointwise_montg::thread_or_ln186_145_fu_13715_p2() {
    or_ln186_145_fu_13715_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_92);
}

void poly_pointwise_montg::thread_or_ln186_146_fu_13729_p2() {
    or_ln186_146_fu_13729_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_93);
}

void poly_pointwise_montg::thread_or_ln186_147_fu_13801_p2() {
    or_ln186_147_fu_13801_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_94);
}

void poly_pointwise_montg::thread_or_ln186_148_fu_13815_p2() {
    or_ln186_148_fu_13815_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_95);
}

void poly_pointwise_montg::thread_or_ln186_149_fu_13887_p2() {
    or_ln186_149_fu_13887_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_96);
}

void poly_pointwise_montg::thread_or_ln186_14_fu_8053_p2() {
    or_ln186_14_fu_8053_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F);
}

void poly_pointwise_montg::thread_or_ln186_150_fu_13901_p2() {
    or_ln186_150_fu_13901_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_97);
}

void poly_pointwise_montg::thread_or_ln186_151_fu_13973_p2() {
    or_ln186_151_fu_13973_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_98);
}

void poly_pointwise_montg::thread_or_ln186_152_fu_13987_p2() {
    or_ln186_152_fu_13987_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_99);
}

void poly_pointwise_montg::thread_or_ln186_153_fu_14059_p2() {
    or_ln186_153_fu_14059_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9A);
}

void poly_pointwise_montg::thread_or_ln186_154_fu_14073_p2() {
    or_ln186_154_fu_14073_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9B);
}

void poly_pointwise_montg::thread_or_ln186_155_fu_14145_p2() {
    or_ln186_155_fu_14145_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9C);
}

void poly_pointwise_montg::thread_or_ln186_156_fu_14159_p2() {
    or_ln186_156_fu_14159_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9D);
}

void poly_pointwise_montg::thread_or_ln186_157_fu_14231_p2() {
    or_ln186_157_fu_14231_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9E);
}

void poly_pointwise_montg::thread_or_ln186_158_fu_14245_p2() {
    or_ln186_158_fu_14245_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9F);
}

void poly_pointwise_montg::thread_or_ln186_159_fu_14317_p2() {
    or_ln186_159_fu_14317_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A0);
}

void poly_pointwise_montg::thread_or_ln186_15_fu_8125_p2() {
    or_ln186_15_fu_8125_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_10);
}

void poly_pointwise_montg::thread_or_ln186_160_fu_14331_p2() {
    or_ln186_160_fu_14331_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A1);
}

void poly_pointwise_montg::thread_or_ln186_161_fu_14403_p2() {
    or_ln186_161_fu_14403_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A2);
}

void poly_pointwise_montg::thread_or_ln186_162_fu_14417_p2() {
    or_ln186_162_fu_14417_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A3);
}

void poly_pointwise_montg::thread_or_ln186_163_fu_14489_p2() {
    or_ln186_163_fu_14489_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A4);
}

void poly_pointwise_montg::thread_or_ln186_164_fu_14503_p2() {
    or_ln186_164_fu_14503_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A5);
}

void poly_pointwise_montg::thread_or_ln186_165_fu_14575_p2() {
    or_ln186_165_fu_14575_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A6);
}

void poly_pointwise_montg::thread_or_ln186_166_fu_14589_p2() {
    or_ln186_166_fu_14589_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A7);
}

void poly_pointwise_montg::thread_or_ln186_167_fu_14661_p2() {
    or_ln186_167_fu_14661_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A8);
}

void poly_pointwise_montg::thread_or_ln186_168_fu_14675_p2() {
    or_ln186_168_fu_14675_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A9);
}

void poly_pointwise_montg::thread_or_ln186_169_fu_14747_p2() {
    or_ln186_169_fu_14747_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_AA);
}

void poly_pointwise_montg::thread_or_ln186_16_fu_8139_p2() {
    or_ln186_16_fu_8139_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_11);
}

void poly_pointwise_montg::thread_or_ln186_170_fu_14761_p2() {
    or_ln186_170_fu_14761_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_AB);
}

void poly_pointwise_montg::thread_or_ln186_171_fu_14833_p2() {
    or_ln186_171_fu_14833_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_AC);
}

void poly_pointwise_montg::thread_or_ln186_172_fu_14847_p2() {
    or_ln186_172_fu_14847_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_AD);
}

void poly_pointwise_montg::thread_or_ln186_173_fu_14919_p2() {
    or_ln186_173_fu_14919_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_AE);
}

void poly_pointwise_montg::thread_or_ln186_174_fu_14933_p2() {
    or_ln186_174_fu_14933_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_AF);
}

void poly_pointwise_montg::thread_or_ln186_175_fu_15005_p2() {
    or_ln186_175_fu_15005_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B0);
}

void poly_pointwise_montg::thread_or_ln186_176_fu_15019_p2() {
    or_ln186_176_fu_15019_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B1);
}

void poly_pointwise_montg::thread_or_ln186_177_fu_15091_p2() {
    or_ln186_177_fu_15091_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B2);
}

void poly_pointwise_montg::thread_or_ln186_178_fu_15105_p2() {
    or_ln186_178_fu_15105_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B3);
}

void poly_pointwise_montg::thread_or_ln186_179_fu_15177_p2() {
    or_ln186_179_fu_15177_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B4);
}

void poly_pointwise_montg::thread_or_ln186_17_fu_8211_p2() {
    or_ln186_17_fu_8211_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_12);
}

void poly_pointwise_montg::thread_or_ln186_180_fu_15191_p2() {
    or_ln186_180_fu_15191_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B5);
}

void poly_pointwise_montg::thread_or_ln186_181_fu_15263_p2() {
    or_ln186_181_fu_15263_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B6);
}

void poly_pointwise_montg::thread_or_ln186_182_fu_15277_p2() {
    or_ln186_182_fu_15277_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B7);
}

void poly_pointwise_montg::thread_or_ln186_183_fu_15349_p2() {
    or_ln186_183_fu_15349_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B8);
}

void poly_pointwise_montg::thread_or_ln186_184_fu_15363_p2() {
    or_ln186_184_fu_15363_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_B9);
}

void poly_pointwise_montg::thread_or_ln186_185_fu_15435_p2() {
    or_ln186_185_fu_15435_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_BA);
}

void poly_pointwise_montg::thread_or_ln186_186_fu_15449_p2() {
    or_ln186_186_fu_15449_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_BB);
}

void poly_pointwise_montg::thread_or_ln186_187_fu_15521_p2() {
    or_ln186_187_fu_15521_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_BC);
}

void poly_pointwise_montg::thread_or_ln186_188_fu_15535_p2() {
    or_ln186_188_fu_15535_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_BD);
}

void poly_pointwise_montg::thread_or_ln186_189_fu_15607_p2() {
    or_ln186_189_fu_15607_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_BE);
}

void poly_pointwise_montg::thread_or_ln186_18_fu_8225_p2() {
    or_ln186_18_fu_8225_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_13);
}

void poly_pointwise_montg::thread_or_ln186_190_fu_15621_p2() {
    or_ln186_190_fu_15621_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_BF);
}

void poly_pointwise_montg::thread_or_ln186_191_fu_15693_p2() {
    or_ln186_191_fu_15693_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C0);
}

void poly_pointwise_montg::thread_or_ln186_192_fu_15707_p2() {
    or_ln186_192_fu_15707_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C1);
}

void poly_pointwise_montg::thread_or_ln186_193_fu_15779_p2() {
    or_ln186_193_fu_15779_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C2);
}

void poly_pointwise_montg::thread_or_ln186_194_fu_15793_p2() {
    or_ln186_194_fu_15793_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C3);
}

void poly_pointwise_montg::thread_or_ln186_195_fu_15865_p2() {
    or_ln186_195_fu_15865_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C4);
}

void poly_pointwise_montg::thread_or_ln186_196_fu_15879_p2() {
    or_ln186_196_fu_15879_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C5);
}

void poly_pointwise_montg::thread_or_ln186_197_fu_15951_p2() {
    or_ln186_197_fu_15951_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C6);
}

void poly_pointwise_montg::thread_or_ln186_198_fu_15965_p2() {
    or_ln186_198_fu_15965_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C7);
}

void poly_pointwise_montg::thread_or_ln186_199_fu_16037_p2() {
    or_ln186_199_fu_16037_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C8);
}

void poly_pointwise_montg::thread_or_ln186_19_fu_8297_p2() {
    or_ln186_19_fu_8297_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_14);
}

void poly_pointwise_montg::thread_or_ln186_1_fu_7523_p2() {
    or_ln186_1_fu_7523_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2);
}

void poly_pointwise_montg::thread_or_ln186_200_fu_16051_p2() {
    or_ln186_200_fu_16051_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_C9);
}

void poly_pointwise_montg::thread_or_ln186_201_fu_16123_p2() {
    or_ln186_201_fu_16123_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_CA);
}

void poly_pointwise_montg::thread_or_ln186_202_fu_16137_p2() {
    or_ln186_202_fu_16137_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_CB);
}

void poly_pointwise_montg::thread_or_ln186_203_fu_16209_p2() {
    or_ln186_203_fu_16209_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_CC);
}

void poly_pointwise_montg::thread_or_ln186_204_fu_16223_p2() {
    or_ln186_204_fu_16223_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_CD);
}

void poly_pointwise_montg::thread_or_ln186_205_fu_16295_p2() {
    or_ln186_205_fu_16295_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_CE);
}

void poly_pointwise_montg::thread_or_ln186_206_fu_16309_p2() {
    or_ln186_206_fu_16309_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_CF);
}

void poly_pointwise_montg::thread_or_ln186_207_fu_16381_p2() {
    or_ln186_207_fu_16381_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D0);
}

void poly_pointwise_montg::thread_or_ln186_208_fu_16395_p2() {
    or_ln186_208_fu_16395_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D1);
}

void poly_pointwise_montg::thread_or_ln186_209_fu_16467_p2() {
    or_ln186_209_fu_16467_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D2);
}

void poly_pointwise_montg::thread_or_ln186_20_fu_8311_p2() {
    or_ln186_20_fu_8311_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_15);
}

void poly_pointwise_montg::thread_or_ln186_210_fu_16481_p2() {
    or_ln186_210_fu_16481_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D3);
}

void poly_pointwise_montg::thread_or_ln186_211_fu_16553_p2() {
    or_ln186_211_fu_16553_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D4);
}

void poly_pointwise_montg::thread_or_ln186_212_fu_16567_p2() {
    or_ln186_212_fu_16567_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D5);
}

void poly_pointwise_montg::thread_or_ln186_213_fu_16639_p2() {
    or_ln186_213_fu_16639_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D6);
}

void poly_pointwise_montg::thread_or_ln186_214_fu_16653_p2() {
    or_ln186_214_fu_16653_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D7);
}

void poly_pointwise_montg::thread_or_ln186_215_fu_16725_p2() {
    or_ln186_215_fu_16725_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D8);
}

void poly_pointwise_montg::thread_or_ln186_216_fu_16739_p2() {
    or_ln186_216_fu_16739_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_D9);
}

void poly_pointwise_montg::thread_or_ln186_217_fu_16811_p2() {
    or_ln186_217_fu_16811_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_DA);
}

void poly_pointwise_montg::thread_or_ln186_218_fu_16825_p2() {
    or_ln186_218_fu_16825_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_DB);
}

void poly_pointwise_montg::thread_or_ln186_219_fu_16897_p2() {
    or_ln186_219_fu_16897_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_DC);
}

void poly_pointwise_montg::thread_or_ln186_21_fu_8383_p2() {
    or_ln186_21_fu_8383_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_16);
}

void poly_pointwise_montg::thread_or_ln186_220_fu_16911_p2() {
    or_ln186_220_fu_16911_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_DD);
}

void poly_pointwise_montg::thread_or_ln186_221_fu_16983_p2() {
    or_ln186_221_fu_16983_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_DE);
}

void poly_pointwise_montg::thread_or_ln186_222_fu_16997_p2() {
    or_ln186_222_fu_16997_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_DF);
}

void poly_pointwise_montg::thread_or_ln186_223_fu_17069_p2() {
    or_ln186_223_fu_17069_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E0);
}

void poly_pointwise_montg::thread_or_ln186_224_fu_17083_p2() {
    or_ln186_224_fu_17083_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E1);
}

void poly_pointwise_montg::thread_or_ln186_225_fu_17155_p2() {
    or_ln186_225_fu_17155_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E2);
}

void poly_pointwise_montg::thread_or_ln186_226_fu_17169_p2() {
    or_ln186_226_fu_17169_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E3);
}

void poly_pointwise_montg::thread_or_ln186_227_fu_17241_p2() {
    or_ln186_227_fu_17241_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E4);
}

void poly_pointwise_montg::thread_or_ln186_228_fu_17255_p2() {
    or_ln186_228_fu_17255_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E5);
}

void poly_pointwise_montg::thread_or_ln186_229_fu_17327_p2() {
    or_ln186_229_fu_17327_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E6);
}

void poly_pointwise_montg::thread_or_ln186_22_fu_8397_p2() {
    or_ln186_22_fu_8397_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_17);
}

void poly_pointwise_montg::thread_or_ln186_230_fu_17341_p2() {
    or_ln186_230_fu_17341_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E7);
}

void poly_pointwise_montg::thread_or_ln186_231_fu_17413_p2() {
    or_ln186_231_fu_17413_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E8);
}

void poly_pointwise_montg::thread_or_ln186_232_fu_17427_p2() {
    or_ln186_232_fu_17427_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_E9);
}

void poly_pointwise_montg::thread_or_ln186_233_fu_17499_p2() {
    or_ln186_233_fu_17499_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_EA);
}

void poly_pointwise_montg::thread_or_ln186_234_fu_17513_p2() {
    or_ln186_234_fu_17513_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_EB);
}

void poly_pointwise_montg::thread_or_ln186_235_fu_17585_p2() {
    or_ln186_235_fu_17585_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_EC);
}

void poly_pointwise_montg::thread_or_ln186_236_fu_17599_p2() {
    or_ln186_236_fu_17599_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_ED);
}

void poly_pointwise_montg::thread_or_ln186_237_fu_17671_p2() {
    or_ln186_237_fu_17671_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_EE);
}

void poly_pointwise_montg::thread_or_ln186_238_fu_17685_p2() {
    or_ln186_238_fu_17685_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_EF);
}

void poly_pointwise_montg::thread_or_ln186_239_fu_17757_p2() {
    or_ln186_239_fu_17757_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F0);
}

void poly_pointwise_montg::thread_or_ln186_23_fu_8469_p2() {
    or_ln186_23_fu_8469_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_18);
}

void poly_pointwise_montg::thread_or_ln186_240_fu_17771_p2() {
    or_ln186_240_fu_17771_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F1);
}

void poly_pointwise_montg::thread_or_ln186_241_fu_17843_p2() {
    or_ln186_241_fu_17843_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F2);
}

void poly_pointwise_montg::thread_or_ln186_242_fu_17857_p2() {
    or_ln186_242_fu_17857_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F3);
}

void poly_pointwise_montg::thread_or_ln186_243_fu_17929_p2() {
    or_ln186_243_fu_17929_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F4);
}

void poly_pointwise_montg::thread_or_ln186_244_fu_17943_p2() {
    or_ln186_244_fu_17943_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F5);
}

void poly_pointwise_montg::thread_or_ln186_245_fu_18015_p2() {
    or_ln186_245_fu_18015_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F6);
}

void poly_pointwise_montg::thread_or_ln186_246_fu_18029_p2() {
    or_ln186_246_fu_18029_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F7);
}

void poly_pointwise_montg::thread_or_ln186_247_fu_18101_p2() {
    or_ln186_247_fu_18101_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F8);
}

void poly_pointwise_montg::thread_or_ln186_248_fu_18115_p2() {
    or_ln186_248_fu_18115_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_F9);
}

void poly_pointwise_montg::thread_or_ln186_249_fu_18187_p2() {
    or_ln186_249_fu_18187_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_FA);
}

void poly_pointwise_montg::thread_or_ln186_24_fu_8483_p2() {
    or_ln186_24_fu_8483_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_19);
}

void poly_pointwise_montg::thread_or_ln186_250_fu_18201_p2() {
    or_ln186_250_fu_18201_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_FB);
}

void poly_pointwise_montg::thread_or_ln186_251_fu_18273_p2() {
    or_ln186_251_fu_18273_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_FC);
}

void poly_pointwise_montg::thread_or_ln186_252_fu_18287_p2() {
    or_ln186_252_fu_18287_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_FD);
}

void poly_pointwise_montg::thread_or_ln186_253_fu_18359_p2() {
    or_ln186_253_fu_18359_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_FE);
}

void poly_pointwise_montg::thread_or_ln186_254_fu_18373_p2() {
    or_ln186_254_fu_18373_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_FF);
}

void poly_pointwise_montg::thread_or_ln186_255_fu_7564_p2() {
    or_ln186_255_fu_7564_p2 = (tmp_1599_fu_7551_p3.read() | ap_const_lv11_1);
}

void poly_pointwise_montg::thread_or_ln186_256_fu_7637_p2() {
    or_ln186_256_fu_7637_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2);
}

void poly_pointwise_montg::thread_or_ln186_257_fu_7651_p2() {
    or_ln186_257_fu_7651_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3);
}

void poly_pointwise_montg::thread_or_ln186_258_fu_7723_p2() {
    or_ln186_258_fu_7723_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4);
}

void poly_pointwise_montg::thread_or_ln186_259_fu_7737_p2() {
    or_ln186_259_fu_7737_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5);
}

void poly_pointwise_montg::thread_or_ln186_25_fu_8555_p2() {
    or_ln186_25_fu_8555_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_1A);
}

void poly_pointwise_montg::thread_or_ln186_260_fu_7809_p2() {
    or_ln186_260_fu_7809_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6);
}

void poly_pointwise_montg::thread_or_ln186_261_fu_7823_p2() {
    or_ln186_261_fu_7823_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7);
}

void poly_pointwise_montg::thread_or_ln186_262_fu_7895_p2() {
    or_ln186_262_fu_7895_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8);
}

void poly_pointwise_montg::thread_or_ln186_263_fu_7909_p2() {
    or_ln186_263_fu_7909_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9);
}

void poly_pointwise_montg::thread_or_ln186_264_fu_7981_p2() {
    or_ln186_264_fu_7981_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A);
}

void poly_pointwise_montg::thread_or_ln186_265_fu_7995_p2() {
    or_ln186_265_fu_7995_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B);
}

void poly_pointwise_montg::thread_or_ln186_266_fu_8067_p2() {
    or_ln186_266_fu_8067_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C);
}

void poly_pointwise_montg::thread_or_ln186_267_fu_8081_p2() {
    or_ln186_267_fu_8081_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D);
}

void poly_pointwise_montg::thread_or_ln186_268_fu_8153_p2() {
    or_ln186_268_fu_8153_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E);
}

void poly_pointwise_montg::thread_or_ln186_269_fu_8167_p2() {
    or_ln186_269_fu_8167_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F);
}

void poly_pointwise_montg::thread_or_ln186_26_fu_8569_p2() {
    or_ln186_26_fu_8569_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_1B);
}

void poly_pointwise_montg::thread_or_ln186_270_fu_8239_p2() {
    or_ln186_270_fu_8239_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_10);
}

void poly_pointwise_montg::thread_or_ln186_271_fu_8253_p2() {
    or_ln186_271_fu_8253_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_11);
}

void poly_pointwise_montg::thread_or_ln186_272_fu_8325_p2() {
    or_ln186_272_fu_8325_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_12);
}

void poly_pointwise_montg::thread_or_ln186_273_fu_8339_p2() {
    or_ln186_273_fu_8339_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_13);
}

void poly_pointwise_montg::thread_or_ln186_274_fu_8411_p2() {
    or_ln186_274_fu_8411_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_14);
}

void poly_pointwise_montg::thread_or_ln186_275_fu_8425_p2() {
    or_ln186_275_fu_8425_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_15);
}

void poly_pointwise_montg::thread_or_ln186_276_fu_8497_p2() {
    or_ln186_276_fu_8497_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_16);
}

void poly_pointwise_montg::thread_or_ln186_277_fu_8511_p2() {
    or_ln186_277_fu_8511_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_17);
}

void poly_pointwise_montg::thread_or_ln186_278_fu_8583_p2() {
    or_ln186_278_fu_8583_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_18);
}

void poly_pointwise_montg::thread_or_ln186_279_fu_8597_p2() {
    or_ln186_279_fu_8597_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_19);
}

void poly_pointwise_montg::thread_or_ln186_27_fu_8641_p2() {
    or_ln186_27_fu_8641_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_1C);
}

void poly_pointwise_montg::thread_or_ln186_280_fu_8669_p2() {
    or_ln186_280_fu_8669_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_1A);
}

void poly_pointwise_montg::thread_or_ln186_281_fu_8683_p2() {
    or_ln186_281_fu_8683_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_1B);
}

void poly_pointwise_montg::thread_or_ln186_282_fu_8755_p2() {
    or_ln186_282_fu_8755_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_1C);
}

void poly_pointwise_montg::thread_or_ln186_283_fu_8769_p2() {
    or_ln186_283_fu_8769_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_1D);
}

void poly_pointwise_montg::thread_or_ln186_284_fu_8841_p2() {
    or_ln186_284_fu_8841_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_1E);
}

void poly_pointwise_montg::thread_or_ln186_285_fu_8855_p2() {
    or_ln186_285_fu_8855_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_1F);
}

void poly_pointwise_montg::thread_or_ln186_286_fu_8927_p2() {
    or_ln186_286_fu_8927_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_20);
}

void poly_pointwise_montg::thread_or_ln186_287_fu_8941_p2() {
    or_ln186_287_fu_8941_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_21);
}

void poly_pointwise_montg::thread_or_ln186_288_fu_9013_p2() {
    or_ln186_288_fu_9013_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_22);
}

void poly_pointwise_montg::thread_or_ln186_289_fu_9027_p2() {
    or_ln186_289_fu_9027_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_23);
}

void poly_pointwise_montg::thread_or_ln186_28_fu_8655_p2() {
    or_ln186_28_fu_8655_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_1D);
}

void poly_pointwise_montg::thread_or_ln186_290_fu_9099_p2() {
    or_ln186_290_fu_9099_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_24);
}

void poly_pointwise_montg::thread_or_ln186_291_fu_9113_p2() {
    or_ln186_291_fu_9113_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_25);
}

void poly_pointwise_montg::thread_or_ln186_292_fu_9185_p2() {
    or_ln186_292_fu_9185_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_26);
}

void poly_pointwise_montg::thread_or_ln186_293_fu_9199_p2() {
    or_ln186_293_fu_9199_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_27);
}

void poly_pointwise_montg::thread_or_ln186_294_fu_9271_p2() {
    or_ln186_294_fu_9271_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_28);
}

void poly_pointwise_montg::thread_or_ln186_295_fu_9285_p2() {
    or_ln186_295_fu_9285_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_29);
}

void poly_pointwise_montg::thread_or_ln186_296_fu_9357_p2() {
    or_ln186_296_fu_9357_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2A);
}

void poly_pointwise_montg::thread_or_ln186_297_fu_9371_p2() {
    or_ln186_297_fu_9371_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2B);
}

void poly_pointwise_montg::thread_or_ln186_298_fu_9443_p2() {
    or_ln186_298_fu_9443_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2C);
}

void poly_pointwise_montg::thread_or_ln186_299_fu_9457_p2() {
    or_ln186_299_fu_9457_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2D);
}

void poly_pointwise_montg::thread_or_ln186_29_fu_8727_p2() {
    or_ln186_29_fu_8727_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_1E);
}

void poly_pointwise_montg::thread_or_ln186_2_fu_7537_p2() {
    or_ln186_2_fu_7537_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3);
}

void poly_pointwise_montg::thread_or_ln186_300_fu_9529_p2() {
    or_ln186_300_fu_9529_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2E);
}

void poly_pointwise_montg::thread_or_ln186_301_fu_9543_p2() {
    or_ln186_301_fu_9543_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_2F);
}

void poly_pointwise_montg::thread_or_ln186_302_fu_9615_p2() {
    or_ln186_302_fu_9615_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_30);
}

void poly_pointwise_montg::thread_or_ln186_303_fu_9629_p2() {
    or_ln186_303_fu_9629_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_31);
}

void poly_pointwise_montg::thread_or_ln186_304_fu_9701_p2() {
    or_ln186_304_fu_9701_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_32);
}

void poly_pointwise_montg::thread_or_ln186_305_fu_9715_p2() {
    or_ln186_305_fu_9715_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_33);
}

void poly_pointwise_montg::thread_or_ln186_306_fu_9787_p2() {
    or_ln186_306_fu_9787_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_34);
}

void poly_pointwise_montg::thread_or_ln186_307_fu_9801_p2() {
    or_ln186_307_fu_9801_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_35);
}

void poly_pointwise_montg::thread_or_ln186_308_fu_9873_p2() {
    or_ln186_308_fu_9873_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_36);
}

void poly_pointwise_montg::thread_or_ln186_309_fu_9887_p2() {
    or_ln186_309_fu_9887_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_37);
}

void poly_pointwise_montg::thread_or_ln186_30_fu_8741_p2() {
    or_ln186_30_fu_8741_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_1F);
}

void poly_pointwise_montg::thread_or_ln186_310_fu_9959_p2() {
    or_ln186_310_fu_9959_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_38);
}

void poly_pointwise_montg::thread_or_ln186_311_fu_9973_p2() {
    or_ln186_311_fu_9973_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_39);
}

void poly_pointwise_montg::thread_or_ln186_312_fu_10045_p2() {
    or_ln186_312_fu_10045_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3A);
}

void poly_pointwise_montg::thread_or_ln186_313_fu_10059_p2() {
    or_ln186_313_fu_10059_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3B);
}

void poly_pointwise_montg::thread_or_ln186_314_fu_10131_p2() {
    or_ln186_314_fu_10131_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3C);
}

void poly_pointwise_montg::thread_or_ln186_315_fu_10145_p2() {
    or_ln186_315_fu_10145_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3D);
}

void poly_pointwise_montg::thread_or_ln186_316_fu_10217_p2() {
    or_ln186_316_fu_10217_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3E);
}

void poly_pointwise_montg::thread_or_ln186_317_fu_10231_p2() {
    or_ln186_317_fu_10231_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_3F);
}

void poly_pointwise_montg::thread_or_ln186_318_fu_10303_p2() {
    or_ln186_318_fu_10303_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_40);
}

void poly_pointwise_montg::thread_or_ln186_319_fu_10317_p2() {
    or_ln186_319_fu_10317_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_41);
}

void poly_pointwise_montg::thread_or_ln186_31_fu_8813_p2() {
    or_ln186_31_fu_8813_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_20);
}

void poly_pointwise_montg::thread_or_ln186_320_fu_10389_p2() {
    or_ln186_320_fu_10389_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_42);
}

void poly_pointwise_montg::thread_or_ln186_321_fu_10403_p2() {
    or_ln186_321_fu_10403_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_43);
}

void poly_pointwise_montg::thread_or_ln186_322_fu_10475_p2() {
    or_ln186_322_fu_10475_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_44);
}

void poly_pointwise_montg::thread_or_ln186_323_fu_10489_p2() {
    or_ln186_323_fu_10489_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_45);
}

void poly_pointwise_montg::thread_or_ln186_324_fu_10561_p2() {
    or_ln186_324_fu_10561_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_46);
}

void poly_pointwise_montg::thread_or_ln186_325_fu_10575_p2() {
    or_ln186_325_fu_10575_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_47);
}

void poly_pointwise_montg::thread_or_ln186_326_fu_10647_p2() {
    or_ln186_326_fu_10647_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_48);
}

void poly_pointwise_montg::thread_or_ln186_327_fu_10661_p2() {
    or_ln186_327_fu_10661_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_49);
}

void poly_pointwise_montg::thread_or_ln186_328_fu_10733_p2() {
    or_ln186_328_fu_10733_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4A);
}

void poly_pointwise_montg::thread_or_ln186_329_fu_10747_p2() {
    or_ln186_329_fu_10747_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4B);
}

void poly_pointwise_montg::thread_or_ln186_32_fu_8827_p2() {
    or_ln186_32_fu_8827_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_21);
}

void poly_pointwise_montg::thread_or_ln186_330_fu_10819_p2() {
    or_ln186_330_fu_10819_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4C);
}

void poly_pointwise_montg::thread_or_ln186_331_fu_10833_p2() {
    or_ln186_331_fu_10833_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4D);
}

void poly_pointwise_montg::thread_or_ln186_332_fu_10905_p2() {
    or_ln186_332_fu_10905_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4E);
}

void poly_pointwise_montg::thread_or_ln186_333_fu_10919_p2() {
    or_ln186_333_fu_10919_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_4F);
}

void poly_pointwise_montg::thread_or_ln186_334_fu_10991_p2() {
    or_ln186_334_fu_10991_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_50);
}

void poly_pointwise_montg::thread_or_ln186_335_fu_11005_p2() {
    or_ln186_335_fu_11005_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_51);
}

void poly_pointwise_montg::thread_or_ln186_336_fu_11077_p2() {
    or_ln186_336_fu_11077_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_52);
}

void poly_pointwise_montg::thread_or_ln186_337_fu_11091_p2() {
    or_ln186_337_fu_11091_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_53);
}

void poly_pointwise_montg::thread_or_ln186_338_fu_11163_p2() {
    or_ln186_338_fu_11163_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_54);
}

void poly_pointwise_montg::thread_or_ln186_339_fu_11177_p2() {
    or_ln186_339_fu_11177_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_55);
}

void poly_pointwise_montg::thread_or_ln186_33_fu_8899_p2() {
    or_ln186_33_fu_8899_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_22);
}

void poly_pointwise_montg::thread_or_ln186_340_fu_11249_p2() {
    or_ln186_340_fu_11249_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_56);
}

void poly_pointwise_montg::thread_or_ln186_341_fu_11263_p2() {
    or_ln186_341_fu_11263_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_57);
}

void poly_pointwise_montg::thread_or_ln186_342_fu_11335_p2() {
    or_ln186_342_fu_11335_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_58);
}

void poly_pointwise_montg::thread_or_ln186_343_fu_11349_p2() {
    or_ln186_343_fu_11349_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_59);
}

void poly_pointwise_montg::thread_or_ln186_344_fu_11421_p2() {
    or_ln186_344_fu_11421_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5A);
}

void poly_pointwise_montg::thread_or_ln186_345_fu_11435_p2() {
    or_ln186_345_fu_11435_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5B);
}

void poly_pointwise_montg::thread_or_ln186_346_fu_11507_p2() {
    or_ln186_346_fu_11507_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5C);
}

void poly_pointwise_montg::thread_or_ln186_347_fu_11521_p2() {
    or_ln186_347_fu_11521_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5D);
}

void poly_pointwise_montg::thread_or_ln186_348_fu_11593_p2() {
    or_ln186_348_fu_11593_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5E);
}

void poly_pointwise_montg::thread_or_ln186_349_fu_11607_p2() {
    or_ln186_349_fu_11607_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_5F);
}

void poly_pointwise_montg::thread_or_ln186_34_fu_8913_p2() {
    or_ln186_34_fu_8913_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_23);
}

void poly_pointwise_montg::thread_or_ln186_350_fu_11679_p2() {
    or_ln186_350_fu_11679_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_60);
}

void poly_pointwise_montg::thread_or_ln186_351_fu_11693_p2() {
    or_ln186_351_fu_11693_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_61);
}

void poly_pointwise_montg::thread_or_ln186_352_fu_11765_p2() {
    or_ln186_352_fu_11765_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_62);
}

void poly_pointwise_montg::thread_or_ln186_353_fu_11779_p2() {
    or_ln186_353_fu_11779_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_63);
}

void poly_pointwise_montg::thread_or_ln186_354_fu_11851_p2() {
    or_ln186_354_fu_11851_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_64);
}

void poly_pointwise_montg::thread_or_ln186_355_fu_11865_p2() {
    or_ln186_355_fu_11865_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_65);
}

void poly_pointwise_montg::thread_or_ln186_356_fu_11937_p2() {
    or_ln186_356_fu_11937_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_66);
}

void poly_pointwise_montg::thread_or_ln186_357_fu_11951_p2() {
    or_ln186_357_fu_11951_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_67);
}

void poly_pointwise_montg::thread_or_ln186_358_fu_12023_p2() {
    or_ln186_358_fu_12023_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_68);
}

void poly_pointwise_montg::thread_or_ln186_359_fu_12037_p2() {
    or_ln186_359_fu_12037_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_69);
}

void poly_pointwise_montg::thread_or_ln186_35_fu_8985_p2() {
    or_ln186_35_fu_8985_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_24);
}

void poly_pointwise_montg::thread_or_ln186_360_fu_12109_p2() {
    or_ln186_360_fu_12109_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6A);
}

void poly_pointwise_montg::thread_or_ln186_361_fu_12123_p2() {
    or_ln186_361_fu_12123_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6B);
}

void poly_pointwise_montg::thread_or_ln186_362_fu_12195_p2() {
    or_ln186_362_fu_12195_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6C);
}

void poly_pointwise_montg::thread_or_ln186_363_fu_12209_p2() {
    or_ln186_363_fu_12209_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6D);
}

void poly_pointwise_montg::thread_or_ln186_364_fu_12281_p2() {
    or_ln186_364_fu_12281_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6E);
}

void poly_pointwise_montg::thread_or_ln186_365_fu_12295_p2() {
    or_ln186_365_fu_12295_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_6F);
}

void poly_pointwise_montg::thread_or_ln186_366_fu_12367_p2() {
    or_ln186_366_fu_12367_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_70);
}

void poly_pointwise_montg::thread_or_ln186_367_fu_12381_p2() {
    or_ln186_367_fu_12381_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_71);
}

void poly_pointwise_montg::thread_or_ln186_368_fu_12453_p2() {
    or_ln186_368_fu_12453_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_72);
}

void poly_pointwise_montg::thread_or_ln186_369_fu_12467_p2() {
    or_ln186_369_fu_12467_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_73);
}

void poly_pointwise_montg::thread_or_ln186_36_fu_8999_p2() {
    or_ln186_36_fu_8999_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_25);
}

void poly_pointwise_montg::thread_or_ln186_370_fu_12539_p2() {
    or_ln186_370_fu_12539_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_74);
}

void poly_pointwise_montg::thread_or_ln186_371_fu_12553_p2() {
    or_ln186_371_fu_12553_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_75);
}

void poly_pointwise_montg::thread_or_ln186_372_fu_12625_p2() {
    or_ln186_372_fu_12625_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_76);
}

void poly_pointwise_montg::thread_or_ln186_373_fu_12639_p2() {
    or_ln186_373_fu_12639_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_77);
}

void poly_pointwise_montg::thread_or_ln186_374_fu_12711_p2() {
    or_ln186_374_fu_12711_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_78);
}

void poly_pointwise_montg::thread_or_ln186_375_fu_12725_p2() {
    or_ln186_375_fu_12725_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_79);
}

void poly_pointwise_montg::thread_or_ln186_376_fu_12797_p2() {
    or_ln186_376_fu_12797_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7A);
}

void poly_pointwise_montg::thread_or_ln186_377_fu_12811_p2() {
    or_ln186_377_fu_12811_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7B);
}

void poly_pointwise_montg::thread_or_ln186_378_fu_12883_p2() {
    or_ln186_378_fu_12883_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7C);
}

void poly_pointwise_montg::thread_or_ln186_379_fu_12897_p2() {
    or_ln186_379_fu_12897_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7D);
}

void poly_pointwise_montg::thread_or_ln186_37_fu_9071_p2() {
    or_ln186_37_fu_9071_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_26);
}

void poly_pointwise_montg::thread_or_ln186_380_fu_12969_p2() {
    or_ln186_380_fu_12969_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7E);
}

void poly_pointwise_montg::thread_or_ln186_381_fu_12983_p2() {
    or_ln186_381_fu_12983_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_7F);
}

void poly_pointwise_montg::thread_or_ln186_382_fu_13055_p2() {
    or_ln186_382_fu_13055_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_80);
}

void poly_pointwise_montg::thread_or_ln186_383_fu_13069_p2() {
    or_ln186_383_fu_13069_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_81);
}

void poly_pointwise_montg::thread_or_ln186_384_fu_13141_p2() {
    or_ln186_384_fu_13141_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_82);
}

void poly_pointwise_montg::thread_or_ln186_385_fu_13155_p2() {
    or_ln186_385_fu_13155_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_83);
}

void poly_pointwise_montg::thread_or_ln186_386_fu_13227_p2() {
    or_ln186_386_fu_13227_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_84);
}

void poly_pointwise_montg::thread_or_ln186_387_fu_13241_p2() {
    or_ln186_387_fu_13241_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_85);
}

void poly_pointwise_montg::thread_or_ln186_388_fu_13313_p2() {
    or_ln186_388_fu_13313_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_86);
}

void poly_pointwise_montg::thread_or_ln186_389_fu_13327_p2() {
    or_ln186_389_fu_13327_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_87);
}

void poly_pointwise_montg::thread_or_ln186_38_fu_9085_p2() {
    or_ln186_38_fu_9085_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_27);
}

void poly_pointwise_montg::thread_or_ln186_390_fu_13399_p2() {
    or_ln186_390_fu_13399_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_88);
}

void poly_pointwise_montg::thread_or_ln186_391_fu_13413_p2() {
    or_ln186_391_fu_13413_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_89);
}

void poly_pointwise_montg::thread_or_ln186_392_fu_13485_p2() {
    or_ln186_392_fu_13485_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8A);
}

void poly_pointwise_montg::thread_or_ln186_393_fu_13499_p2() {
    or_ln186_393_fu_13499_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8B);
}

void poly_pointwise_montg::thread_or_ln186_394_fu_13571_p2() {
    or_ln186_394_fu_13571_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8C);
}

void poly_pointwise_montg::thread_or_ln186_395_fu_13585_p2() {
    or_ln186_395_fu_13585_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8D);
}

void poly_pointwise_montg::thread_or_ln186_396_fu_13657_p2() {
    or_ln186_396_fu_13657_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8E);
}

void poly_pointwise_montg::thread_or_ln186_397_fu_13671_p2() {
    or_ln186_397_fu_13671_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_8F);
}

void poly_pointwise_montg::thread_or_ln186_398_fu_13743_p2() {
    or_ln186_398_fu_13743_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_90);
}

void poly_pointwise_montg::thread_or_ln186_399_fu_13757_p2() {
    or_ln186_399_fu_13757_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_91);
}

void poly_pointwise_montg::thread_or_ln186_39_fu_9157_p2() {
    or_ln186_39_fu_9157_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_28);
}

void poly_pointwise_montg::thread_or_ln186_3_fu_7609_p2() {
    or_ln186_3_fu_7609_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4);
}

void poly_pointwise_montg::thread_or_ln186_400_fu_13829_p2() {
    or_ln186_400_fu_13829_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_92);
}

void poly_pointwise_montg::thread_or_ln186_401_fu_13843_p2() {
    or_ln186_401_fu_13843_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_93);
}

void poly_pointwise_montg::thread_or_ln186_402_fu_13915_p2() {
    or_ln186_402_fu_13915_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_94);
}

void poly_pointwise_montg::thread_or_ln186_403_fu_13929_p2() {
    or_ln186_403_fu_13929_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_95);
}

void poly_pointwise_montg::thread_or_ln186_404_fu_14001_p2() {
    or_ln186_404_fu_14001_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_96);
}

void poly_pointwise_montg::thread_or_ln186_405_fu_14015_p2() {
    or_ln186_405_fu_14015_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_97);
}

void poly_pointwise_montg::thread_or_ln186_406_fu_14087_p2() {
    or_ln186_406_fu_14087_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_98);
}

void poly_pointwise_montg::thread_or_ln186_407_fu_14101_p2() {
    or_ln186_407_fu_14101_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_99);
}

void poly_pointwise_montg::thread_or_ln186_408_fu_14173_p2() {
    or_ln186_408_fu_14173_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9A);
}

void poly_pointwise_montg::thread_or_ln186_409_fu_14187_p2() {
    or_ln186_409_fu_14187_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9B);
}

void poly_pointwise_montg::thread_or_ln186_40_fu_9171_p2() {
    or_ln186_40_fu_9171_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_29);
}

void poly_pointwise_montg::thread_or_ln186_410_fu_14259_p2() {
    or_ln186_410_fu_14259_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9C);
}

void poly_pointwise_montg::thread_or_ln186_411_fu_14273_p2() {
    or_ln186_411_fu_14273_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9D);
}

void poly_pointwise_montg::thread_or_ln186_412_fu_14345_p2() {
    or_ln186_412_fu_14345_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9E);
}

void poly_pointwise_montg::thread_or_ln186_413_fu_14359_p2() {
    or_ln186_413_fu_14359_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_9F);
}

void poly_pointwise_montg::thread_or_ln186_414_fu_14431_p2() {
    or_ln186_414_fu_14431_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A0);
}

void poly_pointwise_montg::thread_or_ln186_415_fu_14445_p2() {
    or_ln186_415_fu_14445_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A1);
}

void poly_pointwise_montg::thread_or_ln186_416_fu_14517_p2() {
    or_ln186_416_fu_14517_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A2);
}

void poly_pointwise_montg::thread_or_ln186_417_fu_14531_p2() {
    or_ln186_417_fu_14531_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A3);
}

void poly_pointwise_montg::thread_or_ln186_418_fu_14603_p2() {
    or_ln186_418_fu_14603_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A4);
}

void poly_pointwise_montg::thread_or_ln186_419_fu_14617_p2() {
    or_ln186_419_fu_14617_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A5);
}

void poly_pointwise_montg::thread_or_ln186_41_fu_9243_p2() {
    or_ln186_41_fu_9243_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2A);
}

void poly_pointwise_montg::thread_or_ln186_420_fu_14689_p2() {
    or_ln186_420_fu_14689_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A6);
}

void poly_pointwise_montg::thread_or_ln186_421_fu_14703_p2() {
    or_ln186_421_fu_14703_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A7);
}

void poly_pointwise_montg::thread_or_ln186_422_fu_14775_p2() {
    or_ln186_422_fu_14775_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A8);
}

void poly_pointwise_montg::thread_or_ln186_423_fu_14789_p2() {
    or_ln186_423_fu_14789_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_A9);
}

void poly_pointwise_montg::thread_or_ln186_424_fu_14861_p2() {
    or_ln186_424_fu_14861_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_AA);
}

void poly_pointwise_montg::thread_or_ln186_425_fu_14875_p2() {
    or_ln186_425_fu_14875_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_AB);
}

void poly_pointwise_montg::thread_or_ln186_426_fu_14947_p2() {
    or_ln186_426_fu_14947_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_AC);
}

void poly_pointwise_montg::thread_or_ln186_427_fu_14961_p2() {
    or_ln186_427_fu_14961_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_AD);
}

void poly_pointwise_montg::thread_or_ln186_428_fu_15033_p2() {
    or_ln186_428_fu_15033_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_AE);
}

void poly_pointwise_montg::thread_or_ln186_429_fu_15047_p2() {
    or_ln186_429_fu_15047_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_AF);
}

void poly_pointwise_montg::thread_or_ln186_42_fu_9257_p2() {
    or_ln186_42_fu_9257_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2B);
}

void poly_pointwise_montg::thread_or_ln186_430_fu_15119_p2() {
    or_ln186_430_fu_15119_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B0);
}

void poly_pointwise_montg::thread_or_ln186_431_fu_15133_p2() {
    or_ln186_431_fu_15133_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B1);
}

void poly_pointwise_montg::thread_or_ln186_432_fu_15205_p2() {
    or_ln186_432_fu_15205_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B2);
}

void poly_pointwise_montg::thread_or_ln186_433_fu_15219_p2() {
    or_ln186_433_fu_15219_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B3);
}

void poly_pointwise_montg::thread_or_ln186_434_fu_15291_p2() {
    or_ln186_434_fu_15291_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B4);
}

void poly_pointwise_montg::thread_or_ln186_435_fu_15305_p2() {
    or_ln186_435_fu_15305_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B5);
}

void poly_pointwise_montg::thread_or_ln186_436_fu_15377_p2() {
    or_ln186_436_fu_15377_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B6);
}

void poly_pointwise_montg::thread_or_ln186_437_fu_15391_p2() {
    or_ln186_437_fu_15391_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B7);
}

void poly_pointwise_montg::thread_or_ln186_438_fu_15463_p2() {
    or_ln186_438_fu_15463_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B8);
}

void poly_pointwise_montg::thread_or_ln186_439_fu_15477_p2() {
    or_ln186_439_fu_15477_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_B9);
}

void poly_pointwise_montg::thread_or_ln186_43_fu_9329_p2() {
    or_ln186_43_fu_9329_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2C);
}

void poly_pointwise_montg::thread_or_ln186_440_fu_15549_p2() {
    or_ln186_440_fu_15549_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_BA);
}

void poly_pointwise_montg::thread_or_ln186_441_fu_15563_p2() {
    or_ln186_441_fu_15563_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_BB);
}

void poly_pointwise_montg::thread_or_ln186_442_fu_15635_p2() {
    or_ln186_442_fu_15635_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_BC);
}

void poly_pointwise_montg::thread_or_ln186_443_fu_15649_p2() {
    or_ln186_443_fu_15649_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_BD);
}

void poly_pointwise_montg::thread_or_ln186_444_fu_15721_p2() {
    or_ln186_444_fu_15721_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_BE);
}

void poly_pointwise_montg::thread_or_ln186_445_fu_15735_p2() {
    or_ln186_445_fu_15735_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_BF);
}

void poly_pointwise_montg::thread_or_ln186_446_fu_15807_p2() {
    or_ln186_446_fu_15807_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C0);
}

void poly_pointwise_montg::thread_or_ln186_447_fu_15821_p2() {
    or_ln186_447_fu_15821_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C1);
}

void poly_pointwise_montg::thread_or_ln186_448_fu_15893_p2() {
    or_ln186_448_fu_15893_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C2);
}

void poly_pointwise_montg::thread_or_ln186_449_fu_15907_p2() {
    or_ln186_449_fu_15907_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C3);
}

void poly_pointwise_montg::thread_or_ln186_44_fu_9343_p2() {
    or_ln186_44_fu_9343_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2D);
}

void poly_pointwise_montg::thread_or_ln186_450_fu_15979_p2() {
    or_ln186_450_fu_15979_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C4);
}

void poly_pointwise_montg::thread_or_ln186_451_fu_15993_p2() {
    or_ln186_451_fu_15993_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C5);
}

void poly_pointwise_montg::thread_or_ln186_452_fu_16065_p2() {
    or_ln186_452_fu_16065_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C6);
}

void poly_pointwise_montg::thread_or_ln186_453_fu_16079_p2() {
    or_ln186_453_fu_16079_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C7);
}

void poly_pointwise_montg::thread_or_ln186_454_fu_16151_p2() {
    or_ln186_454_fu_16151_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C8);
}

void poly_pointwise_montg::thread_or_ln186_455_fu_16165_p2() {
    or_ln186_455_fu_16165_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_C9);
}

void poly_pointwise_montg::thread_or_ln186_456_fu_16237_p2() {
    or_ln186_456_fu_16237_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_CA);
}

void poly_pointwise_montg::thread_or_ln186_457_fu_16251_p2() {
    or_ln186_457_fu_16251_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_CB);
}

void poly_pointwise_montg::thread_or_ln186_458_fu_16323_p2() {
    or_ln186_458_fu_16323_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_CC);
}

void poly_pointwise_montg::thread_or_ln186_459_fu_16337_p2() {
    or_ln186_459_fu_16337_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_CD);
}

void poly_pointwise_montg::thread_or_ln186_45_fu_9415_p2() {
    or_ln186_45_fu_9415_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2E);
}

void poly_pointwise_montg::thread_or_ln186_460_fu_16409_p2() {
    or_ln186_460_fu_16409_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_CE);
}

void poly_pointwise_montg::thread_or_ln186_461_fu_16423_p2() {
    or_ln186_461_fu_16423_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_CF);
}

void poly_pointwise_montg::thread_or_ln186_462_fu_16495_p2() {
    or_ln186_462_fu_16495_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D0);
}

void poly_pointwise_montg::thread_or_ln186_463_fu_16509_p2() {
    or_ln186_463_fu_16509_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D1);
}

void poly_pointwise_montg::thread_or_ln186_464_fu_16581_p2() {
    or_ln186_464_fu_16581_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D2);
}

void poly_pointwise_montg::thread_or_ln186_465_fu_16595_p2() {
    or_ln186_465_fu_16595_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D3);
}

void poly_pointwise_montg::thread_or_ln186_466_fu_16667_p2() {
    or_ln186_466_fu_16667_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D4);
}

void poly_pointwise_montg::thread_or_ln186_467_fu_16681_p2() {
    or_ln186_467_fu_16681_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D5);
}

void poly_pointwise_montg::thread_or_ln186_468_fu_16753_p2() {
    or_ln186_468_fu_16753_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D6);
}

void poly_pointwise_montg::thread_or_ln186_469_fu_16767_p2() {
    or_ln186_469_fu_16767_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D7);
}

void poly_pointwise_montg::thread_or_ln186_46_fu_9429_p2() {
    or_ln186_46_fu_9429_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_2F);
}

void poly_pointwise_montg::thread_or_ln186_470_fu_16839_p2() {
    or_ln186_470_fu_16839_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D8);
}

void poly_pointwise_montg::thread_or_ln186_471_fu_16853_p2() {
    or_ln186_471_fu_16853_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_D9);
}

void poly_pointwise_montg::thread_or_ln186_472_fu_16925_p2() {
    or_ln186_472_fu_16925_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_DA);
}

void poly_pointwise_montg::thread_or_ln186_473_fu_16939_p2() {
    or_ln186_473_fu_16939_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_DB);
}

void poly_pointwise_montg::thread_or_ln186_474_fu_17011_p2() {
    or_ln186_474_fu_17011_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_DC);
}

void poly_pointwise_montg::thread_or_ln186_475_fu_17025_p2() {
    or_ln186_475_fu_17025_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_DD);
}

void poly_pointwise_montg::thread_or_ln186_476_fu_17097_p2() {
    or_ln186_476_fu_17097_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_DE);
}

void poly_pointwise_montg::thread_or_ln186_477_fu_17111_p2() {
    or_ln186_477_fu_17111_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_DF);
}

void poly_pointwise_montg::thread_or_ln186_478_fu_17183_p2() {
    or_ln186_478_fu_17183_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E0);
}

void poly_pointwise_montg::thread_or_ln186_479_fu_17197_p2() {
    or_ln186_479_fu_17197_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E1);
}

void poly_pointwise_montg::thread_or_ln186_47_fu_9501_p2() {
    or_ln186_47_fu_9501_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_30);
}

void poly_pointwise_montg::thread_or_ln186_480_fu_17269_p2() {
    or_ln186_480_fu_17269_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E2);
}

void poly_pointwise_montg::thread_or_ln186_481_fu_17283_p2() {
    or_ln186_481_fu_17283_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E3);
}

void poly_pointwise_montg::thread_or_ln186_482_fu_17355_p2() {
    or_ln186_482_fu_17355_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E4);
}

void poly_pointwise_montg::thread_or_ln186_483_fu_17369_p2() {
    or_ln186_483_fu_17369_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E5);
}

void poly_pointwise_montg::thread_or_ln186_484_fu_17441_p2() {
    or_ln186_484_fu_17441_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E6);
}

void poly_pointwise_montg::thread_or_ln186_485_fu_17455_p2() {
    or_ln186_485_fu_17455_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E7);
}

void poly_pointwise_montg::thread_or_ln186_486_fu_17527_p2() {
    or_ln186_486_fu_17527_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E8);
}

void poly_pointwise_montg::thread_or_ln186_487_fu_17541_p2() {
    or_ln186_487_fu_17541_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_E9);
}

void poly_pointwise_montg::thread_or_ln186_488_fu_17613_p2() {
    or_ln186_488_fu_17613_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_EA);
}

void poly_pointwise_montg::thread_or_ln186_489_fu_17627_p2() {
    or_ln186_489_fu_17627_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_EB);
}

void poly_pointwise_montg::thread_or_ln186_48_fu_9515_p2() {
    or_ln186_48_fu_9515_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_31);
}

void poly_pointwise_montg::thread_or_ln186_490_fu_17699_p2() {
    or_ln186_490_fu_17699_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_EC);
}

void poly_pointwise_montg::thread_or_ln186_491_fu_17713_p2() {
    or_ln186_491_fu_17713_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_ED);
}

void poly_pointwise_montg::thread_or_ln186_492_fu_17785_p2() {
    or_ln186_492_fu_17785_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_EE);
}

void poly_pointwise_montg::thread_or_ln186_493_fu_17799_p2() {
    or_ln186_493_fu_17799_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_EF);
}

void poly_pointwise_montg::thread_or_ln186_494_fu_17871_p2() {
    or_ln186_494_fu_17871_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F0);
}

void poly_pointwise_montg::thread_or_ln186_495_fu_17885_p2() {
    or_ln186_495_fu_17885_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F1);
}

void poly_pointwise_montg::thread_or_ln186_496_fu_17957_p2() {
    or_ln186_496_fu_17957_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F2);
}

void poly_pointwise_montg::thread_or_ln186_497_fu_17971_p2() {
    or_ln186_497_fu_17971_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F3);
}

void poly_pointwise_montg::thread_or_ln186_498_fu_18043_p2() {
    or_ln186_498_fu_18043_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F4);
}

void poly_pointwise_montg::thread_or_ln186_499_fu_18057_p2() {
    or_ln186_499_fu_18057_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F5);
}

void poly_pointwise_montg::thread_or_ln186_49_fu_9587_p2() {
    or_ln186_49_fu_9587_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_32);
}

void poly_pointwise_montg::thread_or_ln186_4_fu_7623_p2() {
    or_ln186_4_fu_7623_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5);
}

void poly_pointwise_montg::thread_or_ln186_500_fu_18129_p2() {
    or_ln186_500_fu_18129_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F6);
}

void poly_pointwise_montg::thread_or_ln186_501_fu_18143_p2() {
    or_ln186_501_fu_18143_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F7);
}

void poly_pointwise_montg::thread_or_ln186_502_fu_18215_p2() {
    or_ln186_502_fu_18215_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F8);
}

void poly_pointwise_montg::thread_or_ln186_503_fu_18229_p2() {
    or_ln186_503_fu_18229_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_F9);
}

void poly_pointwise_montg::thread_or_ln186_504_fu_18301_p2() {
    or_ln186_504_fu_18301_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_FA);
}

void poly_pointwise_montg::thread_or_ln186_505_fu_18315_p2() {
    or_ln186_505_fu_18315_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_FB);
}

void poly_pointwise_montg::thread_or_ln186_506_fu_18387_p2() {
    or_ln186_506_fu_18387_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_FC);
}

void poly_pointwise_montg::thread_or_ln186_507_fu_18401_p2() {
    or_ln186_507_fu_18401_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_FD);
}

void poly_pointwise_montg::thread_or_ln186_508_fu_18445_p2() {
    or_ln186_508_fu_18445_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_FE);
}

void poly_pointwise_montg::thread_or_ln186_509_fu_18459_p2() {
    or_ln186_509_fu_18459_p2 = (tmp_1599_reg_18791.read() | ap_const_lv11_FF);
}

void poly_pointwise_montg::thread_or_ln186_50_fu_9601_p2() {
    or_ln186_50_fu_9601_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_33);
}

void poly_pointwise_montg::thread_or_ln186_51_fu_9673_p2() {
    or_ln186_51_fu_9673_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_34);
}

void poly_pointwise_montg::thread_or_ln186_52_fu_9687_p2() {
    or_ln186_52_fu_9687_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_35);
}

void poly_pointwise_montg::thread_or_ln186_53_fu_9759_p2() {
    or_ln186_53_fu_9759_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_36);
}

void poly_pointwise_montg::thread_or_ln186_54_fu_9773_p2() {
    or_ln186_54_fu_9773_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_37);
}

void poly_pointwise_montg::thread_or_ln186_55_fu_9845_p2() {
    or_ln186_55_fu_9845_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_38);
}

void poly_pointwise_montg::thread_or_ln186_56_fu_9859_p2() {
    or_ln186_56_fu_9859_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_39);
}

void poly_pointwise_montg::thread_or_ln186_57_fu_9931_p2() {
    or_ln186_57_fu_9931_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3A);
}

void poly_pointwise_montg::thread_or_ln186_58_fu_9945_p2() {
    or_ln186_58_fu_9945_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3B);
}

void poly_pointwise_montg::thread_or_ln186_59_fu_10017_p2() {
    or_ln186_59_fu_10017_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3C);
}

void poly_pointwise_montg::thread_or_ln186_5_fu_7695_p2() {
    or_ln186_5_fu_7695_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_6);
}

void poly_pointwise_montg::thread_or_ln186_60_fu_10031_p2() {
    or_ln186_60_fu_10031_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3D);
}

void poly_pointwise_montg::thread_or_ln186_61_fu_10103_p2() {
    or_ln186_61_fu_10103_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3E);
}

void poly_pointwise_montg::thread_or_ln186_62_fu_10117_p2() {
    or_ln186_62_fu_10117_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_3F);
}

void poly_pointwise_montg::thread_or_ln186_63_fu_10189_p2() {
    or_ln186_63_fu_10189_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_40);
}

void poly_pointwise_montg::thread_or_ln186_64_fu_10203_p2() {
    or_ln186_64_fu_10203_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_41);
}

void poly_pointwise_montg::thread_or_ln186_65_fu_10275_p2() {
    or_ln186_65_fu_10275_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_42);
}

void poly_pointwise_montg::thread_or_ln186_66_fu_10289_p2() {
    or_ln186_66_fu_10289_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_43);
}

void poly_pointwise_montg::thread_or_ln186_67_fu_10361_p2() {
    or_ln186_67_fu_10361_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_44);
}

void poly_pointwise_montg::thread_or_ln186_68_fu_10375_p2() {
    or_ln186_68_fu_10375_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_45);
}

void poly_pointwise_montg::thread_or_ln186_69_fu_10447_p2() {
    or_ln186_69_fu_10447_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_46);
}

void poly_pointwise_montg::thread_or_ln186_6_fu_7709_p2() {
    or_ln186_6_fu_7709_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_7);
}

void poly_pointwise_montg::thread_or_ln186_70_fu_10461_p2() {
    or_ln186_70_fu_10461_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_47);
}

void poly_pointwise_montg::thread_or_ln186_71_fu_10533_p2() {
    or_ln186_71_fu_10533_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_48);
}

void poly_pointwise_montg::thread_or_ln186_72_fu_10547_p2() {
    or_ln186_72_fu_10547_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_49);
}

void poly_pointwise_montg::thread_or_ln186_73_fu_10619_p2() {
    or_ln186_73_fu_10619_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4A);
}

void poly_pointwise_montg::thread_or_ln186_74_fu_10633_p2() {
    or_ln186_74_fu_10633_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4B);
}

void poly_pointwise_montg::thread_or_ln186_75_fu_10705_p2() {
    or_ln186_75_fu_10705_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4C);
}

void poly_pointwise_montg::thread_or_ln186_76_fu_10719_p2() {
    or_ln186_76_fu_10719_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4D);
}

void poly_pointwise_montg::thread_or_ln186_77_fu_10791_p2() {
    or_ln186_77_fu_10791_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4E);
}

void poly_pointwise_montg::thread_or_ln186_78_fu_10805_p2() {
    or_ln186_78_fu_10805_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_4F);
}

void poly_pointwise_montg::thread_or_ln186_79_fu_10877_p2() {
    or_ln186_79_fu_10877_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_50);
}

void poly_pointwise_montg::thread_or_ln186_7_fu_7781_p2() {
    or_ln186_7_fu_7781_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_8);
}

void poly_pointwise_montg::thread_or_ln186_80_fu_10891_p2() {
    or_ln186_80_fu_10891_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_51);
}

void poly_pointwise_montg::thread_or_ln186_81_fu_10963_p2() {
    or_ln186_81_fu_10963_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_52);
}

void poly_pointwise_montg::thread_or_ln186_82_fu_10977_p2() {
    or_ln186_82_fu_10977_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_53);
}

void poly_pointwise_montg::thread_or_ln186_83_fu_11049_p2() {
    or_ln186_83_fu_11049_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_54);
}

void poly_pointwise_montg::thread_or_ln186_84_fu_11063_p2() {
    or_ln186_84_fu_11063_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_55);
}

void poly_pointwise_montg::thread_or_ln186_85_fu_11135_p2() {
    or_ln186_85_fu_11135_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_56);
}

void poly_pointwise_montg::thread_or_ln186_86_fu_11149_p2() {
    or_ln186_86_fu_11149_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_57);
}

void poly_pointwise_montg::thread_or_ln186_87_fu_11221_p2() {
    or_ln186_87_fu_11221_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_58);
}

void poly_pointwise_montg::thread_or_ln186_88_fu_11235_p2() {
    or_ln186_88_fu_11235_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_59);
}

void poly_pointwise_montg::thread_or_ln186_89_fu_11307_p2() {
    or_ln186_89_fu_11307_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5A);
}

void poly_pointwise_montg::thread_or_ln186_8_fu_7795_p2() {
    or_ln186_8_fu_7795_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_9);
}

void poly_pointwise_montg::thread_or_ln186_90_fu_11321_p2() {
    or_ln186_90_fu_11321_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5B);
}

void poly_pointwise_montg::thread_or_ln186_91_fu_11393_p2() {
    or_ln186_91_fu_11393_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5C);
}

void poly_pointwise_montg::thread_or_ln186_92_fu_11407_p2() {
    or_ln186_92_fu_11407_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5D);
}

void poly_pointwise_montg::thread_or_ln186_93_fu_11479_p2() {
    or_ln186_93_fu_11479_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5E);
}

void poly_pointwise_montg::thread_or_ln186_94_fu_11493_p2() {
    or_ln186_94_fu_11493_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_5F);
}

void poly_pointwise_montg::thread_or_ln186_95_fu_11565_p2() {
    or_ln186_95_fu_11565_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_60);
}

void poly_pointwise_montg::thread_or_ln186_96_fu_11579_p2() {
    or_ln186_96_fu_11579_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_61);
}

void poly_pointwise_montg::thread_or_ln186_97_fu_11651_p2() {
    or_ln186_97_fu_11651_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_62);
}

void poly_pointwise_montg::thread_or_ln186_98_fu_11665_p2() {
    or_ln186_98_fu_11665_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_63);
}

void poly_pointwise_montg::thread_or_ln186_99_fu_11737_p2() {
    or_ln186_99_fu_11737_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_64);
}

void poly_pointwise_montg::thread_or_ln186_9_fu_7867_p2() {
    or_ln186_9_fu_7867_p2 = (tmp_1343_reg_18503.read() | ap_const_lv11_A);
}

void poly_pointwise_montg::thread_or_ln186_fu_7508_p2() {
    or_ln186_fu_7508_p2 = (tmp_1343_fu_7495_p3.read() | ap_const_lv11_1);
}

void poly_pointwise_montg::thread_tmp_1343_fu_7495_p3() {
    tmp_1343_fu_7495_p3 = esl_concat<3,8>(b_coeffs_offset.read(), ap_const_lv8_0);
}

void poly_pointwise_montg::thread_tmp_1344_fu_7514_p3() {
    tmp_1344_fu_7514_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_fu_7508_p2.read());
}

void poly_pointwise_montg::thread_tmp_1345_fu_7528_p3() {
    tmp_1345_fu_7528_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_1_fu_7523_p2.read());
}

void poly_pointwise_montg::thread_tmp_1346_fu_7542_p3() {
    tmp_1346_fu_7542_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_2_fu_7537_p2.read());
}

void poly_pointwise_montg::thread_tmp_1347_fu_7614_p3() {
    tmp_1347_fu_7614_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_3_fu_7609_p2.read());
}

void poly_pointwise_montg::thread_tmp_1348_fu_7628_p3() {
    tmp_1348_fu_7628_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_4_fu_7623_p2.read());
}

void poly_pointwise_montg::thread_tmp_1349_fu_7700_p3() {
    tmp_1349_fu_7700_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_5_fu_7695_p2.read());
}

void poly_pointwise_montg::thread_tmp_1350_fu_7714_p3() {
    tmp_1350_fu_7714_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_6_fu_7709_p2.read());
}

void poly_pointwise_montg::thread_tmp_1351_fu_7786_p3() {
    tmp_1351_fu_7786_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_7_fu_7781_p2.read());
}

void poly_pointwise_montg::thread_tmp_1352_fu_7800_p3() {
    tmp_1352_fu_7800_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_8_fu_7795_p2.read());
}

void poly_pointwise_montg::thread_tmp_1353_fu_7872_p3() {
    tmp_1353_fu_7872_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_9_fu_7867_p2.read());
}

void poly_pointwise_montg::thread_tmp_1354_fu_7886_p3() {
    tmp_1354_fu_7886_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_10_fu_7881_p2.read());
}

void poly_pointwise_montg::thread_tmp_1355_fu_7958_p3() {
    tmp_1355_fu_7958_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_11_fu_7953_p2.read());
}

void poly_pointwise_montg::thread_tmp_1356_fu_7972_p3() {
    tmp_1356_fu_7972_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_12_fu_7967_p2.read());
}

void poly_pointwise_montg::thread_tmp_1357_fu_8044_p3() {
    tmp_1357_fu_8044_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_13_fu_8039_p2.read());
}

void poly_pointwise_montg::thread_tmp_1358_fu_8058_p3() {
    tmp_1358_fu_8058_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_14_fu_8053_p2.read());
}

void poly_pointwise_montg::thread_tmp_1359_fu_8130_p3() {
    tmp_1359_fu_8130_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_15_fu_8125_p2.read());
}

void poly_pointwise_montg::thread_tmp_1360_fu_8144_p3() {
    tmp_1360_fu_8144_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_16_fu_8139_p2.read());
}

void poly_pointwise_montg::thread_tmp_1361_fu_8216_p3() {
    tmp_1361_fu_8216_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_17_fu_8211_p2.read());
}

void poly_pointwise_montg::thread_tmp_1362_fu_8230_p3() {
    tmp_1362_fu_8230_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_18_fu_8225_p2.read());
}

void poly_pointwise_montg::thread_tmp_1363_fu_8302_p3() {
    tmp_1363_fu_8302_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_19_fu_8297_p2.read());
}

void poly_pointwise_montg::thread_tmp_1364_fu_8316_p3() {
    tmp_1364_fu_8316_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_20_fu_8311_p2.read());
}

void poly_pointwise_montg::thread_tmp_1365_fu_8388_p3() {
    tmp_1365_fu_8388_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_21_fu_8383_p2.read());
}

void poly_pointwise_montg::thread_tmp_1366_fu_8402_p3() {
    tmp_1366_fu_8402_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_22_fu_8397_p2.read());
}

void poly_pointwise_montg::thread_tmp_1367_fu_8474_p3() {
    tmp_1367_fu_8474_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_23_fu_8469_p2.read());
}

void poly_pointwise_montg::thread_tmp_1368_fu_8488_p3() {
    tmp_1368_fu_8488_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_24_fu_8483_p2.read());
}

void poly_pointwise_montg::thread_tmp_1369_fu_8560_p3() {
    tmp_1369_fu_8560_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_25_fu_8555_p2.read());
}

void poly_pointwise_montg::thread_tmp_1370_fu_8574_p3() {
    tmp_1370_fu_8574_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_26_fu_8569_p2.read());
}

void poly_pointwise_montg::thread_tmp_1371_fu_8646_p3() {
    tmp_1371_fu_8646_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_27_fu_8641_p2.read());
}

void poly_pointwise_montg::thread_tmp_1372_fu_8660_p3() {
    tmp_1372_fu_8660_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_28_fu_8655_p2.read());
}

void poly_pointwise_montg::thread_tmp_1373_fu_8732_p3() {
    tmp_1373_fu_8732_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_29_fu_8727_p2.read());
}

void poly_pointwise_montg::thread_tmp_1374_fu_8746_p3() {
    tmp_1374_fu_8746_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_30_fu_8741_p2.read());
}

void poly_pointwise_montg::thread_tmp_1375_fu_8818_p3() {
    tmp_1375_fu_8818_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_31_fu_8813_p2.read());
}

void poly_pointwise_montg::thread_tmp_1376_fu_8832_p3() {
    tmp_1376_fu_8832_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_32_fu_8827_p2.read());
}

void poly_pointwise_montg::thread_tmp_1377_fu_8904_p3() {
    tmp_1377_fu_8904_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_33_fu_8899_p2.read());
}

void poly_pointwise_montg::thread_tmp_1378_fu_8918_p3() {
    tmp_1378_fu_8918_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_34_fu_8913_p2.read());
}

void poly_pointwise_montg::thread_tmp_1379_fu_8990_p3() {
    tmp_1379_fu_8990_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_35_fu_8985_p2.read());
}

void poly_pointwise_montg::thread_tmp_1380_fu_9004_p3() {
    tmp_1380_fu_9004_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_36_fu_8999_p2.read());
}

void poly_pointwise_montg::thread_tmp_1381_fu_9076_p3() {
    tmp_1381_fu_9076_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_37_fu_9071_p2.read());
}

void poly_pointwise_montg::thread_tmp_1382_fu_9090_p3() {
    tmp_1382_fu_9090_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_38_fu_9085_p2.read());
}

void poly_pointwise_montg::thread_tmp_1383_fu_9162_p3() {
    tmp_1383_fu_9162_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_39_fu_9157_p2.read());
}

void poly_pointwise_montg::thread_tmp_1384_fu_9176_p3() {
    tmp_1384_fu_9176_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_40_fu_9171_p2.read());
}

void poly_pointwise_montg::thread_tmp_1385_fu_9248_p3() {
    tmp_1385_fu_9248_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_41_fu_9243_p2.read());
}

void poly_pointwise_montg::thread_tmp_1386_fu_9262_p3() {
    tmp_1386_fu_9262_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_42_fu_9257_p2.read());
}

void poly_pointwise_montg::thread_tmp_1387_fu_9334_p3() {
    tmp_1387_fu_9334_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_43_fu_9329_p2.read());
}

void poly_pointwise_montg::thread_tmp_1388_fu_9348_p3() {
    tmp_1388_fu_9348_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_44_fu_9343_p2.read());
}

void poly_pointwise_montg::thread_tmp_1389_fu_9420_p3() {
    tmp_1389_fu_9420_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_45_fu_9415_p2.read());
}

void poly_pointwise_montg::thread_tmp_1390_fu_9434_p3() {
    tmp_1390_fu_9434_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_46_fu_9429_p2.read());
}

void poly_pointwise_montg::thread_tmp_1391_fu_9506_p3() {
    tmp_1391_fu_9506_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_47_fu_9501_p2.read());
}

void poly_pointwise_montg::thread_tmp_1392_fu_9520_p3() {
    tmp_1392_fu_9520_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_48_fu_9515_p2.read());
}

void poly_pointwise_montg::thread_tmp_1393_fu_9592_p3() {
    tmp_1393_fu_9592_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_49_fu_9587_p2.read());
}

void poly_pointwise_montg::thread_tmp_1394_fu_9606_p3() {
    tmp_1394_fu_9606_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_50_fu_9601_p2.read());
}

void poly_pointwise_montg::thread_tmp_1395_fu_9678_p3() {
    tmp_1395_fu_9678_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_51_fu_9673_p2.read());
}

void poly_pointwise_montg::thread_tmp_1396_fu_9692_p3() {
    tmp_1396_fu_9692_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln186_52_fu_9687_p2.read());
}

}

