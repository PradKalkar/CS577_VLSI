#include "pqcrystals_dilithium_20.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_20::thread_mul_ln61_23_fu_7841_p2() {
    mul_ln61_23_fu_7841_p2 = (!mul_ln61_23_fu_7841_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_23_fu_7841_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_240_fu_11661_p0() {
    mul_ln61_240_fu_11661_p0 = reg_3955.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_240_fu_11661_p2() {
    mul_ln61_240_fu_11661_p2 = (!mul_ln61_240_fu_11661_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_240_fu_11661_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_241_fu_11689_p0() {
    mul_ln61_241_fu_11689_p0 = reg_3965.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_241_fu_11689_p2() {
    mul_ln61_241_fu_11689_p2 = (!mul_ln61_241_fu_11689_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_241_fu_11689_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_242_fu_11704_p0() {
    mul_ln61_242_fu_11704_p0 = reg_3975.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_242_fu_11704_p2() {
    mul_ln61_242_fu_11704_p2 = (!mul_ln61_242_fu_11704_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_242_fu_11704_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_243_fu_9788_p0() {
    mul_ln61_243_fu_9788_p0 = sext_ln61_484_fu_9784_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_243_fu_9788_p2() {
    mul_ln61_243_fu_9788_p2 = (!mul_ln61_243_fu_9788_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_243_fu_9788_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_244_fu_11745_p0() {
    mul_ln61_244_fu_11745_p0 = sext_ln61_486_fu_11741_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_244_fu_11745_p2() {
    mul_ln61_244_fu_11745_p2 = (!mul_ln61_244_fu_11745_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_244_fu_11745_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_245_fu_11760_p0() {
    mul_ln61_245_fu_11760_p0 = sext_ln61_488_fu_11756_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_245_fu_11760_p2() {
    mul_ln61_245_fu_11760_p2 = (!mul_ln61_245_fu_11760_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_245_fu_11760_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_246_fu_9803_p0() {
    mul_ln61_246_fu_9803_p0 = sext_ln61_490_fu_9799_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_246_fu_9803_p2() {
    mul_ln61_246_fu_9803_p2 = (!mul_ln61_246_fu_9803_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_246_fu_9803_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_247_fu_11775_p0() {
    mul_ln61_247_fu_11775_p0 = sext_ln61_492_fu_11771_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_247_fu_11775_p2() {
    mul_ln61_247_fu_11775_p2 = (!mul_ln61_247_fu_11775_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_247_fu_11775_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_248_fu_11790_p0() {
    mul_ln61_248_fu_11790_p0 = sext_ln61_494_fu_11786_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_248_fu_11790_p2() {
    mul_ln61_248_fu_11790_p2 = (!mul_ln61_248_fu_11790_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_248_fu_11790_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_249_fu_9818_p0() {
    mul_ln61_249_fu_9818_p0 = sext_ln61_496_fu_9814_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_249_fu_9818_p2() {
    mul_ln61_249_fu_9818_p2 = (!mul_ln61_249_fu_9818_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_249_fu_9818_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_24_fu_7856_p0() {
    mul_ln61_24_fu_7856_p0 = reg_3416.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_24_fu_7856_p2() {
    mul_ln61_24_fu_7856_p2 = (!mul_ln61_24_fu_7856_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_24_fu_7856_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_250_fu_11831_p0() {
    mul_ln61_250_fu_11831_p0 = sext_ln61_498_fu_11827_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_250_fu_11831_p2() {
    mul_ln61_250_fu_11831_p2 = (!mul_ln61_250_fu_11831_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_250_fu_11831_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_251_fu_11846_p0() {
    mul_ln61_251_fu_11846_p0 = sext_ln61_500_fu_11842_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_251_fu_11846_p2() {
    mul_ln61_251_fu_11846_p2 = (!mul_ln61_251_fu_11846_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_251_fu_11846_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_252_fu_11861_p0() {
    mul_ln61_252_fu_11861_p0 = sext_ln61_502_fu_11857_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_252_fu_11861_p2() {
    mul_ln61_252_fu_11861_p2 = (!mul_ln61_252_fu_11861_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_252_fu_11861_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_253_fu_11889_p0() {
    mul_ln61_253_fu_11889_p0 = reg_4084.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_253_fu_11889_p2() {
    mul_ln61_253_fu_11889_p2 = (!mul_ln61_253_fu_11889_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_253_fu_11889_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_254_fu_11904_p0() {
    mul_ln61_254_fu_11904_p0 = reg_4094.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_254_fu_11904_p2() {
    mul_ln61_254_fu_11904_p2 = (!mul_ln61_254_fu_11904_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_254_fu_11904_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_255_fu_11947_p0() {
    mul_ln61_255_fu_11947_p0 = sext_ln61_508_fu_11943_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_255_fu_11947_p2() {
    mul_ln61_255_fu_11947_p2 = (!mul_ln61_255_fu_11947_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_255_fu_11947_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_256_fu_11962_p0() {
    mul_ln61_256_fu_11962_p0 = reg_3193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_256_fu_11962_p2() {
    mul_ln61_256_fu_11962_p2 = (!mul_ln61_256_fu_11962_p0.read().is_01() || !ap_const_lv51_7FFFFFFF81503.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_256_fu_11962_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFF81503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_257_fu_12019_p0() {
    mul_ln61_257_fu_12019_p0 = add_ln63_161_reg_24745.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_257_fu_12019_p2() {
    mul_ln61_257_fu_12019_p2 = (!mul_ln61_257_fu_12019_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_257_fu_12019_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_258_fu_12033_p0() {
    mul_ln61_258_fu_12033_p0 = add_ln63_162_reg_24750.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_258_fu_12033_p2() {
    mul_ln61_258_fu_12033_p2 = (!mul_ln61_258_fu_12033_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_258_fu_12033_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_259_fu_12047_p0() {
    mul_ln61_259_fu_12047_p0 = add_ln63_163_reg_24755.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_259_fu_12047_p2() {
    mul_ln61_259_fu_12047_p2 = (!mul_ln61_259_fu_12047_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_259_fu_12047_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_25_fu_7871_p0() {
    mul_ln61_25_fu_7871_p0 = reg_3426.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_25_fu_7871_p2() {
    mul_ln61_25_fu_7871_p2 = (!mul_ln61_25_fu_7871_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_25_fu_7871_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_260_fu_12061_p0() {
    mul_ln61_260_fu_12061_p0 = add_ln63_164_reg_24760.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_260_fu_12061_p2() {
    mul_ln61_260_fu_12061_p2 = (!mul_ln61_260_fu_12061_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_260_fu_12061_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_261_fu_12075_p0() {
    mul_ln61_261_fu_12075_p0 = add_ln63_165_reg_24765.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_261_fu_12075_p2() {
    mul_ln61_261_fu_12075_p2 = (!mul_ln61_261_fu_12075_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_261_fu_12075_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_262_fu_12089_p0() {
    mul_ln61_262_fu_12089_p0 = add_ln63_166_reg_24770.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_262_fu_12089_p2() {
    mul_ln61_262_fu_12089_p2 = (!mul_ln61_262_fu_12089_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_262_fu_12089_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_263_fu_12103_p0() {
    mul_ln61_263_fu_12103_p0 = add_ln63_167_reg_24775.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_263_fu_12103_p2() {
    mul_ln61_263_fu_12103_p2 = (!mul_ln61_263_fu_12103_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_263_fu_12103_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_264_fu_12117_p0() {
    mul_ln61_264_fu_12117_p0 = add_ln63_168_reg_24780.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_264_fu_12117_p2() {
    mul_ln61_264_fu_12117_p2 = (!mul_ln61_264_fu_12117_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_264_fu_12117_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_265_fu_12131_p0() {
    mul_ln61_265_fu_12131_p0 = add_ln63_169_reg_24785.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_265_fu_12131_p2() {
    mul_ln61_265_fu_12131_p2 = (!mul_ln61_265_fu_12131_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_265_fu_12131_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_266_fu_12145_p0() {
    mul_ln61_266_fu_12145_p0 = add_ln63_170_reg_24790.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_266_fu_12145_p2() {
    mul_ln61_266_fu_12145_p2 = (!mul_ln61_266_fu_12145_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_266_fu_12145_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_267_fu_12159_p0() {
    mul_ln61_267_fu_12159_p0 = add_ln63_171_reg_24795.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_267_fu_12159_p2() {
    mul_ln61_267_fu_12159_p2 = (!mul_ln61_267_fu_12159_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_267_fu_12159_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_268_fu_12173_p0() {
    mul_ln61_268_fu_12173_p0 = add_ln63_172_reg_24800.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_268_fu_12173_p2() {
    mul_ln61_268_fu_12173_p2 = (!mul_ln61_268_fu_12173_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_268_fu_12173_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_269_fu_12187_p0() {
    mul_ln61_269_fu_12187_p0 = add_ln63_173_reg_24805.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_269_fu_12187_p2() {
    mul_ln61_269_fu_12187_p2 = (!mul_ln61_269_fu_12187_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_269_fu_12187_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_26_fu_7886_p0() {
    mul_ln61_26_fu_7886_p0 = reg_3436.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_26_fu_7886_p2() {
    mul_ln61_26_fu_7886_p2 = (!mul_ln61_26_fu_7886_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_26_fu_7886_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_270_fu_12201_p0() {
    mul_ln61_270_fu_12201_p0 = add_ln63_174_reg_24810.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_270_fu_12201_p2() {
    mul_ln61_270_fu_12201_p2 = (!mul_ln61_270_fu_12201_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_270_fu_12201_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_271_fu_12215_p0() {
    mul_ln61_271_fu_12215_p0 = add_ln63_175_reg_24815.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_271_fu_12215_p2() {
    mul_ln61_271_fu_12215_p2 = (!mul_ln61_271_fu_12215_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_271_fu_12215_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_272_fu_12229_p0() {
    mul_ln61_272_fu_12229_p0 = add_ln63_176_reg_24820.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_272_fu_12229_p2() {
    mul_ln61_272_fu_12229_p2 = (!mul_ln61_272_fu_12229_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_272_fu_12229_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_273_fu_12243_p0() {
    mul_ln61_273_fu_12243_p0 = add_ln63_177_reg_24825.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_273_fu_12243_p2() {
    mul_ln61_273_fu_12243_p2 = (!mul_ln61_273_fu_12243_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_273_fu_12243_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_274_fu_12257_p0() {
    mul_ln61_274_fu_12257_p0 = add_ln63_178_reg_24830.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_274_fu_12257_p2() {
    mul_ln61_274_fu_12257_p2 = (!mul_ln61_274_fu_12257_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_274_fu_12257_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_275_fu_12299_p0() {
    mul_ln61_275_fu_12299_p0 = add_ln63_179_reg_24835.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_275_fu_12299_p2() {
    mul_ln61_275_fu_12299_p2 = (!mul_ln61_275_fu_12299_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_275_fu_12299_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_276_fu_12313_p0() {
    mul_ln61_276_fu_12313_p0 = add_ln63_180_reg_24840.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_276_fu_12313_p2() {
    mul_ln61_276_fu_12313_p2 = (!mul_ln61_276_fu_12313_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_276_fu_12313_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_277_fu_12340_p0() {
    mul_ln61_277_fu_12340_p0 = add_ln63_181_reg_24845.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_277_fu_12340_p2() {
    mul_ln61_277_fu_12340_p2 = (!mul_ln61_277_fu_12340_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_277_fu_12340_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_278_fu_12354_p0() {
    mul_ln61_278_fu_12354_p0 = add_ln63_182_reg_24850.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_278_fu_12354_p2() {
    mul_ln61_278_fu_12354_p2 = (!mul_ln61_278_fu_12354_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_278_fu_12354_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_279_fu_12381_p0() {
    mul_ln61_279_fu_12381_p0 = add_ln63_183_reg_24855.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_279_fu_12381_p2() {
    mul_ln61_279_fu_12381_p2 = (!mul_ln61_279_fu_12381_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_279_fu_12381_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_27_fu_7901_p0() {
    mul_ln61_27_fu_7901_p0 = reg_3446.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_27_fu_7901_p2() {
    mul_ln61_27_fu_7901_p2 = (!mul_ln61_27_fu_7901_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_27_fu_7901_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_280_fu_12395_p0() {
    mul_ln61_280_fu_12395_p0 = add_ln63_184_reg_24860.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_280_fu_12395_p2() {
    mul_ln61_280_fu_12395_p2 = (!mul_ln61_280_fu_12395_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_280_fu_12395_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_281_fu_12422_p0() {
    mul_ln61_281_fu_12422_p0 = add_ln63_185_reg_24865.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_281_fu_12422_p2() {
    mul_ln61_281_fu_12422_p2 = (!mul_ln61_281_fu_12422_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_281_fu_12422_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_282_fu_12436_p0() {
    mul_ln61_282_fu_12436_p0 = add_ln63_186_reg_24870.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_282_fu_12436_p2() {
    mul_ln61_282_fu_12436_p2 = (!mul_ln61_282_fu_12436_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_282_fu_12436_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_283_fu_12463_p0() {
    mul_ln61_283_fu_12463_p0 = add_ln63_187_reg_24875.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_283_fu_12463_p2() {
    mul_ln61_283_fu_12463_p2 = (!mul_ln61_283_fu_12463_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_283_fu_12463_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_284_fu_12477_p0() {
    mul_ln61_284_fu_12477_p0 = add_ln63_188_reg_24880.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_284_fu_12477_p2() {
    mul_ln61_284_fu_12477_p2 = (!mul_ln61_284_fu_12477_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_284_fu_12477_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_285_fu_12534_p0() {
    mul_ln61_285_fu_12534_p0 = add_ln63_189_reg_24885.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_285_fu_12534_p2() {
    mul_ln61_285_fu_12534_p2 = (!mul_ln61_285_fu_12534_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_285_fu_12534_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_286_fu_12548_p0() {
    mul_ln61_286_fu_12548_p0 = add_ln63_190_reg_24890.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_286_fu_12548_p2() {
    mul_ln61_286_fu_12548_p2 = (!mul_ln61_286_fu_12548_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_286_fu_12548_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_287_fu_12575_p0() {
    mul_ln61_287_fu_12575_p0 = add_ln63_191_reg_24895.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_287_fu_12575_p2() {
    mul_ln61_287_fu_12575_p2 = (!mul_ln61_287_fu_12575_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_287_fu_12575_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_288_fu_12589_p0() {
    mul_ln61_288_fu_12589_p0 = add_ln63_192_reg_24900.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_288_fu_12589_p2() {
    mul_ln61_288_fu_12589_p2 = (!mul_ln61_288_fu_12589_p0.read().is_01() || !ap_const_lv51_39E44.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_288_fu_12589_p0.read()) * sc_biguint<51>(ap_const_lv51_39E44);
}

void pqcrystals_dilithium_20::thread_mul_ln61_289_fu_12617_p0() {
    mul_ln61_289_fu_12617_p0 = sext_ln61_576_fu_12613_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_289_fu_12617_p2() {
    mul_ln61_289_fu_12617_p2 = (!mul_ln61_289_fu_12617_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_289_fu_12617_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_28_fu_7916_p0() {
    mul_ln61_28_fu_7916_p0 = reg_3456.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_28_fu_7916_p2() {
    mul_ln61_28_fu_7916_p2 = (!mul_ln61_28_fu_7916_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_28_fu_7916_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_290_fu_12632_p0() {
    mul_ln61_290_fu_12632_p0 = sext_ln61_578_fu_12628_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_290_fu_12632_p2() {
    mul_ln61_290_fu_12632_p2 = (!mul_ln61_290_fu_12632_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_290_fu_12632_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_291_fu_12647_p0() {
    mul_ln61_291_fu_12647_p0 = sext_ln61_580_fu_12643_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_291_fu_12647_p2() {
    mul_ln61_291_fu_12647_p2 = (!mul_ln61_291_fu_12647_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_291_fu_12647_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_292_fu_12662_p0() {
    mul_ln61_292_fu_12662_p0 = sext_ln61_582_fu_12658_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_292_fu_12662_p2() {
    mul_ln61_292_fu_12662_p2 = (!mul_ln61_292_fu_12662_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_292_fu_12662_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_293_fu_12677_p0() {
    mul_ln61_293_fu_12677_p0 = sext_ln61_584_fu_12673_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_293_fu_12677_p2() {
    mul_ln61_293_fu_12677_p2 = (!mul_ln61_293_fu_12677_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_293_fu_12677_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_294_fu_12692_p0() {
    mul_ln61_294_fu_12692_p0 = sext_ln61_586_fu_12688_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_294_fu_12692_p2() {
    mul_ln61_294_fu_12692_p2 = (!mul_ln61_294_fu_12692_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_294_fu_12692_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_295_fu_12721_p0() {
    mul_ln61_295_fu_12721_p0 = sext_ln61_588_fu_12717_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_295_fu_12721_p2() {
    mul_ln61_295_fu_12721_p2 = (!mul_ln61_295_fu_12721_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_295_fu_12721_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_296_fu_12750_p0() {
    mul_ln61_296_fu_12750_p0 = sext_ln61_590_fu_12746_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_296_fu_12750_p2() {
    mul_ln61_296_fu_12750_p2 = (!mul_ln61_296_fu_12750_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_296_fu_12750_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_297_fu_12765_p0() {
    mul_ln61_297_fu_12765_p0 = sext_ln61_592_fu_12761_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_297_fu_12765_p2() {
    mul_ln61_297_fu_12765_p2 = (!mul_ln61_297_fu_12765_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_297_fu_12765_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_298_fu_12780_p0() {
    mul_ln61_298_fu_12780_p0 = sext_ln61_594_fu_12776_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_298_fu_12780_p2() {
    mul_ln61_298_fu_12780_p2 = (!mul_ln61_298_fu_12780_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_298_fu_12780_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_299_fu_12795_p0() {
    mul_ln61_299_fu_12795_p0 = sext_ln61_596_fu_12791_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_299_fu_12795_p2() {
    mul_ln61_299_fu_12795_p2 = (!mul_ln61_299_fu_12795_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_299_fu_12795_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_29_fu_7931_p0() {
    mul_ln61_29_fu_7931_p0 = reg_3466.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_29_fu_7931_p2() {
    mul_ln61_29_fu_7931_p2 = (!mul_ln61_29_fu_7931_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_29_fu_7931_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_2_fu_7542_p0() {
    mul_ln61_2_fu_7542_p0 = reg_3209.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_2_fu_7542_p2() {
    mul_ln61_2_fu_7542_p2 = (!mul_ln61_2_fu_7542_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_2_fu_7542_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_300_fu_12810_p0() {
    mul_ln61_300_fu_12810_p0 = sext_ln61_598_fu_12806_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_300_fu_12810_p2() {
    mul_ln61_300_fu_12810_p2 = (!mul_ln61_300_fu_12810_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_300_fu_12810_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_301_fu_12825_p0() {
    mul_ln61_301_fu_12825_p0 = sext_ln61_600_fu_12821_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_301_fu_12825_p2() {
    mul_ln61_301_fu_12825_p2 = (!mul_ln61_301_fu_12825_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_301_fu_12825_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_302_fu_12840_p0() {
    mul_ln61_302_fu_12840_p0 = sext_ln61_602_fu_12836_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_302_fu_12840_p2() {
    mul_ln61_302_fu_12840_p2 = (!mul_ln61_302_fu_12840_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_302_fu_12840_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_303_fu_12855_p0() {
    mul_ln61_303_fu_12855_p0 = sext_ln61_604_fu_12851_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_303_fu_12855_p2() {
    mul_ln61_303_fu_12855_p2 = (!mul_ln61_303_fu_12855_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_303_fu_12855_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_304_fu_12870_p0() {
    mul_ln61_304_fu_12870_p0 = sext_ln61_606_fu_12866_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_304_fu_12870_p2() {
    mul_ln61_304_fu_12870_p2 = (!mul_ln61_304_fu_12870_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_304_fu_12870_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_305_fu_12899_p0() {
    mul_ln61_305_fu_12899_p0 = sext_ln61_608_fu_12895_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_305_fu_12899_p2() {
    mul_ln61_305_fu_12899_p2 = (!mul_ln61_305_fu_12899_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_305_fu_12899_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_306_fu_12914_p0() {
    mul_ln61_306_fu_12914_p0 = sext_ln61_610_fu_12910_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_306_fu_12914_p2() {
    mul_ln61_306_fu_12914_p2 = (!mul_ln61_306_fu_12914_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_306_fu_12914_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_307_fu_12957_p0() {
    mul_ln61_307_fu_12957_p0 = sext_ln61_612_fu_12953_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_307_fu_12957_p2() {
    mul_ln61_307_fu_12957_p2 = (!mul_ln61_307_fu_12957_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_307_fu_12957_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_308_fu_11990_p0() {
    mul_ln61_308_fu_11990_p0 = sext_ln61_614_fu_11986_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_308_fu_11990_p2() {
    mul_ln61_308_fu_11990_p2 = (!mul_ln61_308_fu_11990_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_308_fu_11990_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_309_fu_12985_p0() {
    mul_ln61_309_fu_12985_p0 = reg_3546.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_309_fu_12985_p2() {
    mul_ln61_309_fu_12985_p2 = (!mul_ln61_309_fu_12985_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_309_fu_12985_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_30_fu_7946_p0() {
    mul_ln61_30_fu_7946_p0 = reg_3476.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_30_fu_7946_p2() {
    mul_ln61_30_fu_7946_p2 = (!mul_ln61_30_fu_7946_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_30_fu_7946_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_310_fu_13000_p0() {
    mul_ln61_310_fu_13000_p0 = reg_3556.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_310_fu_13000_p2() {
    mul_ln61_310_fu_13000_p2 = (!mul_ln61_310_fu_13000_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_310_fu_13000_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_311_fu_13028_p0() {
    mul_ln61_311_fu_13028_p0 = reg_3566.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_311_fu_13028_p2() {
    mul_ln61_311_fu_13028_p2 = (!mul_ln61_311_fu_13028_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_311_fu_13028_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_312_fu_13043_p0() {
    mul_ln61_312_fu_13043_p0 = reg_3576.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_312_fu_13043_p2() {
    mul_ln61_312_fu_13043_p2 = (!mul_ln61_312_fu_13043_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_312_fu_13043_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_313_fu_13086_p0() {
    mul_ln61_313_fu_13086_p0 = reg_3586.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_313_fu_13086_p2() {
    mul_ln61_313_fu_13086_p2 = (!mul_ln61_313_fu_13086_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_313_fu_13086_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_314_fu_13101_p0() {
    mul_ln61_314_fu_13101_p0 = reg_3596.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_314_fu_13101_p2() {
    mul_ln61_314_fu_13101_p2 = (!mul_ln61_314_fu_13101_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_314_fu_13101_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_315_fu_13129_p0() {
    mul_ln61_315_fu_13129_p0 = reg_3605.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_315_fu_13129_p2() {
    mul_ln61_315_fu_13129_p2 = (!mul_ln61_315_fu_13129_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_315_fu_13129_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_316_fu_13144_p0() {
    mul_ln61_316_fu_13144_p0 = reg_3613.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_316_fu_13144_p2() {
    mul_ln61_316_fu_13144_p2 = (!mul_ln61_316_fu_13144_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_316_fu_13144_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_317_fu_13172_p0() {
    mul_ln61_317_fu_13172_p0 = reg_3621.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_317_fu_13172_p2() {
    mul_ln61_317_fu_13172_p2 = (!mul_ln61_317_fu_13172_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_317_fu_13172_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_318_fu_13187_p0() {
    mul_ln61_318_fu_13187_p0 = reg_3629.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_318_fu_13187_p2() {
    mul_ln61_318_fu_13187_p2 = (!mul_ln61_318_fu_13187_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_318_fu_13187_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_319_fu_13215_p0() {
    mul_ln61_319_fu_13215_p0 = reg_3637.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_319_fu_13215_p2() {
    mul_ln61_319_fu_13215_p2 = (!mul_ln61_319_fu_13215_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_319_fu_13215_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_31_fu_7961_p0() {
    mul_ln61_31_fu_7961_p0 = reg_3486.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_31_fu_7961_p2() {
    mul_ln61_31_fu_7961_p2 = (!mul_ln61_31_fu_7961_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_31_fu_7961_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_320_fu_13230_p0() {
    mul_ln61_320_fu_13230_p0 = reg_3647.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_320_fu_13230_p2() {
    mul_ln61_320_fu_13230_p2 = (!mul_ln61_320_fu_13230_p0.read().is_01() || !ap_const_lv52_FFFFFFFF42118.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_320_fu_13230_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF42118);
}

void pqcrystals_dilithium_20::thread_mul_ln61_321_fu_13257_p0() {
    mul_ln61_321_fu_13257_p0 = add_ln63_225_reg_24905.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_321_fu_13257_p2() {
    mul_ln61_321_fu_13257_p2 = (!mul_ln61_321_fu_13257_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_321_fu_13257_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_322_fu_13271_p0() {
    mul_ln61_322_fu_13271_p0 = add_ln63_226_reg_24910.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_322_fu_13271_p2() {
    mul_ln61_322_fu_13271_p2 = (!mul_ln61_322_fu_13271_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_322_fu_13271_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_323_fu_13285_p0() {
    mul_ln61_323_fu_13285_p0 = add_ln63_227_reg_24915.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_323_fu_13285_p2() {
    mul_ln61_323_fu_13285_p2 = (!mul_ln61_323_fu_13285_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_323_fu_13285_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_324_fu_13299_p0() {
    mul_ln61_324_fu_13299_p0 = add_ln63_228_reg_24920.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_324_fu_13299_p2() {
    mul_ln61_324_fu_13299_p2 = (!mul_ln61_324_fu_13299_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_324_fu_13299_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_325_fu_13313_p0() {
    mul_ln61_325_fu_13313_p0 = add_ln63_229_reg_24925.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_325_fu_13313_p2() {
    mul_ln61_325_fu_13313_p2 = (!mul_ln61_325_fu_13313_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_325_fu_13313_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_326_fu_13327_p0() {
    mul_ln61_326_fu_13327_p0 = add_ln63_230_reg_24930.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_326_fu_13327_p2() {
    mul_ln61_326_fu_13327_p2 = (!mul_ln61_326_fu_13327_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_326_fu_13327_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_327_fu_13341_p0() {
    mul_ln61_327_fu_13341_p0 = add_ln63_231_reg_24935.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_327_fu_13341_p2() {
    mul_ln61_327_fu_13341_p2 = (!mul_ln61_327_fu_13341_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_327_fu_13341_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_328_fu_13355_p0() {
    mul_ln61_328_fu_13355_p0 = add_ln63_232_reg_24940.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_328_fu_13355_p2() {
    mul_ln61_328_fu_13355_p2 = (!mul_ln61_328_fu_13355_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_328_fu_13355_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_329_fu_13369_p0() {
    mul_ln61_329_fu_13369_p0 = add_ln63_233_reg_24945.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_329_fu_13369_p2() {
    mul_ln61_329_fu_13369_p2 = (!mul_ln61_329_fu_13369_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_329_fu_13369_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_32_fu_7976_p0() {
    mul_ln61_32_fu_7976_p0 = reg_3496.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_32_fu_7976_p2() {
    mul_ln61_32_fu_7976_p2 = (!mul_ln61_32_fu_7976_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_32_fu_7976_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_330_fu_13383_p0() {
    mul_ln61_330_fu_13383_p0 = add_ln63_234_reg_24950.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_330_fu_13383_p2() {
    mul_ln61_330_fu_13383_p2 = (!mul_ln61_330_fu_13383_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_330_fu_13383_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_331_fu_13397_p0() {
    mul_ln61_331_fu_13397_p0 = add_ln63_235_reg_24955.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_331_fu_13397_p2() {
    mul_ln61_331_fu_13397_p2 = (!mul_ln61_331_fu_13397_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_331_fu_13397_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_332_fu_13411_p0() {
    mul_ln61_332_fu_13411_p0 = add_ln63_236_reg_24960.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_332_fu_13411_p2() {
    mul_ln61_332_fu_13411_p2 = (!mul_ln61_332_fu_13411_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_332_fu_13411_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_333_fu_13425_p0() {
    mul_ln61_333_fu_13425_p0 = add_ln63_237_reg_24965.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_333_fu_13425_p2() {
    mul_ln61_333_fu_13425_p2 = (!mul_ln61_333_fu_13425_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_333_fu_13425_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_334_fu_13439_p0() {
    mul_ln61_334_fu_13439_p0 = add_ln63_238_reg_24970.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_334_fu_13439_p2() {
    mul_ln61_334_fu_13439_p2 = (!mul_ln61_334_fu_13439_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_334_fu_13439_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_335_fu_13453_p0() {
    mul_ln61_335_fu_13453_p0 = add_ln63_239_reg_24975.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_335_fu_13453_p2() {
    mul_ln61_335_fu_13453_p2 = (!mul_ln61_335_fu_13453_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_335_fu_13453_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_336_fu_13467_p0() {
    mul_ln61_336_fu_13467_p0 = add_ln63_240_reg_24980.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_336_fu_13467_p2() {
    mul_ln61_336_fu_13467_p2 = (!mul_ln61_336_fu_13467_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_336_fu_13467_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_337_fu_13481_p0() {
    mul_ln61_337_fu_13481_p0 = add_ln63_241_reg_24985.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_337_fu_13481_p2() {
    mul_ln61_337_fu_13481_p2 = (!mul_ln61_337_fu_13481_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_337_fu_13481_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_338_fu_13495_p0() {
    mul_ln61_338_fu_13495_p0 = add_ln63_242_reg_24990.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_338_fu_13495_p2() {
    mul_ln61_338_fu_13495_p2 = (!mul_ln61_338_fu_13495_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_338_fu_13495_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_339_fu_13537_p0() {
    mul_ln61_339_fu_13537_p0 = add_ln63_243_reg_24995.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_339_fu_13537_p2() {
    mul_ln61_339_fu_13537_p2 = (!mul_ln61_339_fu_13537_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_339_fu_13537_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_33_fu_7991_p0() {
    mul_ln61_33_fu_7991_p0 = reg_3506.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_33_fu_7991_p2() {
    mul_ln61_33_fu_7991_p2 = (!mul_ln61_33_fu_7991_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_33_fu_7991_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_340_fu_13551_p0() {
    mul_ln61_340_fu_13551_p0 = add_ln63_244_reg_25000.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_340_fu_13551_p2() {
    mul_ln61_340_fu_13551_p2 = (!mul_ln61_340_fu_13551_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_340_fu_13551_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_341_fu_13578_p0() {
    mul_ln61_341_fu_13578_p0 = add_ln63_245_reg_25005.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_341_fu_13578_p2() {
    mul_ln61_341_fu_13578_p2 = (!mul_ln61_341_fu_13578_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_341_fu_13578_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_342_fu_13593_p0() {
    mul_ln61_342_fu_13593_p0 = reg_4435.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_342_fu_13593_p2() {
    mul_ln61_342_fu_13593_p2 = (!mul_ln61_342_fu_13593_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_342_fu_13593_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_343_fu_13620_p0() {
    mul_ln61_343_fu_13620_p0 = add_ln63_247_reg_25010.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_343_fu_13620_p2() {
    mul_ln61_343_fu_13620_p2 = (!mul_ln61_343_fu_13620_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_343_fu_13620_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_344_fu_13634_p0() {
    mul_ln61_344_fu_13634_p0 = add_ln63_248_reg_25015.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_344_fu_13634_p2() {
    mul_ln61_344_fu_13634_p2 = (!mul_ln61_344_fu_13634_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_344_fu_13634_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_345_fu_13661_p0() {
    mul_ln61_345_fu_13661_p0 = add_ln63_249_reg_25020.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_345_fu_13661_p2() {
    mul_ln61_345_fu_13661_p2 = (!mul_ln61_345_fu_13661_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_345_fu_13661_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_346_fu_13676_p0() {
    mul_ln61_346_fu_13676_p0 = reg_7309.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_346_fu_13676_p2() {
    mul_ln61_346_fu_13676_p2 = (!mul_ln61_346_fu_13676_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_346_fu_13676_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_347_fu_13703_p0() {
    mul_ln61_347_fu_13703_p0 = add_ln63_251_reg_25025.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_347_fu_13703_p2() {
    mul_ln61_347_fu_13703_p2 = (!mul_ln61_347_fu_13703_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_347_fu_13703_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_348_fu_13717_p0() {
    mul_ln61_348_fu_13717_p0 = add_ln63_252_reg_25030.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_348_fu_13717_p2() {
    mul_ln61_348_fu_13717_p2 = (!mul_ln61_348_fu_13717_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_348_fu_13717_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_349_fu_13745_p0() {
    mul_ln61_349_fu_13745_p0 = reg_7297.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_349_fu_13745_p2() {
    mul_ln61_349_fu_13745_p2 = (!mul_ln61_349_fu_13745_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_349_fu_13745_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_34_fu_8006_p0() {
    mul_ln61_34_fu_8006_p0 = reg_3516.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_34_fu_8006_p2() {
    mul_ln61_34_fu_8006_p2 = (!mul_ln61_34_fu_8006_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_34_fu_8006_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_350_fu_11932_p0() {
    mul_ln61_350_fu_11932_p0 = add_ln63_254_fu_11922_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_350_fu_11932_p2() {
    mul_ln61_350_fu_11932_p2 = (!mul_ln61_350_fu_11932_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_350_fu_11932_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_351_fu_13772_p0() {
    mul_ln61_351_fu_13772_p0 = add_ln63_255_reg_25035.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_351_fu_13772_p2() {
    mul_ln61_351_fu_13772_p2 = (!mul_ln61_351_fu_13772_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_351_fu_13772_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_352_fu_13786_p0() {
    mul_ln61_352_fu_13786_p0 = add_ln63_256_reg_25040.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_352_fu_13786_p2() {
    mul_ln61_352_fu_13786_p2 = (!mul_ln61_352_fu_13786_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_352_fu_13786_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void pqcrystals_dilithium_20::thread_mul_ln61_353_fu_13814_p0() {
    mul_ln61_353_fu_13814_p0 = reg_3825.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_353_fu_13814_p2() {
    mul_ln61_353_fu_13814_p2 = (!mul_ln61_353_fu_13814_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_353_fu_13814_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_354_fu_13829_p0() {
    mul_ln61_354_fu_13829_p0 = reg_3835.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_354_fu_13829_p2() {
    mul_ln61_354_fu_13829_p2 = (!mul_ln61_354_fu_13829_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_354_fu_13829_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_355_fu_13844_p0() {
    mul_ln61_355_fu_13844_p0 = reg_3845.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_355_fu_13844_p2() {
    mul_ln61_355_fu_13844_p2 = (!mul_ln61_355_fu_13844_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_355_fu_13844_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_356_fu_13859_p0() {
    mul_ln61_356_fu_13859_p0 = sext_ln61_710_fu_13855_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_356_fu_13859_p2() {
    mul_ln61_356_fu_13859_p2 = (!mul_ln61_356_fu_13859_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_356_fu_13859_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_357_fu_13874_p0() {
    mul_ln61_357_fu_13874_p0 = sext_ln61_712_fu_13870_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_357_fu_13874_p2() {
    mul_ln61_357_fu_13874_p2 = (!mul_ln61_357_fu_13874_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_357_fu_13874_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_358_fu_13889_p0() {
    mul_ln61_358_fu_13889_p0 = sext_ln61_714_fu_13885_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_358_fu_13889_p2() {
    mul_ln61_358_fu_13889_p2 = (!mul_ln61_358_fu_13889_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_358_fu_13889_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_359_fu_13904_p0() {
    mul_ln61_359_fu_13904_p0 = sext_ln61_716_fu_13900_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_359_fu_13904_p2() {
    mul_ln61_359_fu_13904_p2 = (!mul_ln61_359_fu_13904_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_359_fu_13904_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_35_fu_8021_p0() {
    mul_ln61_35_fu_8021_p0 = reg_3526.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_35_fu_8021_p2() {
    mul_ln61_35_fu_8021_p2 = (!mul_ln61_35_fu_8021_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_35_fu_8021_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_360_fu_13919_p0() {
    mul_ln61_360_fu_13919_p0 = sext_ln61_718_fu_13915_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_360_fu_13919_p2() {
    mul_ln61_360_fu_13919_p2 = (!mul_ln61_360_fu_13919_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_360_fu_13919_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_361_fu_13934_p0() {
    mul_ln61_361_fu_13934_p0 = sext_ln61_720_fu_13930_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_361_fu_13934_p2() {
    mul_ln61_361_fu_13934_p2 = (!mul_ln61_361_fu_13934_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_361_fu_13934_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_362_fu_13949_p0() {
    mul_ln61_362_fu_13949_p0 = sext_ln61_722_fu_13945_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_362_fu_13949_p2() {
    mul_ln61_362_fu_13949_p2 = (!mul_ln61_362_fu_13949_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_362_fu_13949_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_363_fu_13964_p0() {
    mul_ln61_363_fu_13964_p0 = sext_ln61_724_fu_13960_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_363_fu_13964_p2() {
    mul_ln61_363_fu_13964_p2 = (!mul_ln61_363_fu_13964_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_363_fu_13964_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_364_fu_13979_p0() {
    mul_ln61_364_fu_13979_p0 = sext_ln61_726_fu_13975_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_364_fu_13979_p2() {
    mul_ln61_364_fu_13979_p2 = (!mul_ln61_364_fu_13979_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_364_fu_13979_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_365_fu_13994_p0() {
    mul_ln61_365_fu_13994_p0 = sext_ln61_728_fu_13990_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_365_fu_13994_p2() {
    mul_ln61_365_fu_13994_p2 = (!mul_ln61_365_fu_13994_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_365_fu_13994_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_366_fu_14009_p0() {
    mul_ln61_366_fu_14009_p0 = sext_ln61_730_fu_14005_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_366_fu_14009_p2() {
    mul_ln61_366_fu_14009_p2 = (!mul_ln61_366_fu_14009_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_366_fu_14009_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_367_fu_14024_p0() {
    mul_ln61_367_fu_14024_p0 = sext_ln61_732_fu_14020_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_367_fu_14024_p2() {
    mul_ln61_367_fu_14024_p2 = (!mul_ln61_367_fu_14024_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_367_fu_14024_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_368_fu_14039_p0() {
    mul_ln61_368_fu_14039_p0 = sext_ln61_734_fu_14035_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_368_fu_14039_p2() {
    mul_ln61_368_fu_14039_p2 = (!mul_ln61_368_fu_14039_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_368_fu_14039_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_369_fu_12005_p0() {
    mul_ln61_369_fu_12005_p0 = sext_ln61_736_fu_12001_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_369_fu_12005_p2() {
    mul_ln61_369_fu_12005_p2 = (!mul_ln61_369_fu_12005_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_369_fu_12005_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_36_fu_8036_p0() {
    mul_ln61_36_fu_8036_p0 = reg_3536.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_36_fu_8036_p2() {
    mul_ln61_36_fu_8036_p2 = (!mul_ln61_36_fu_8036_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_36_fu_8036_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_370_fu_14067_p0() {
    mul_ln61_370_fu_14067_p0 = reg_4005.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_370_fu_14067_p2() {
    mul_ln61_370_fu_14067_p2 = (!mul_ln61_370_fu_14067_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_370_fu_14067_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_371_fu_14082_p0() {
    mul_ln61_371_fu_14082_p0 = reg_4015.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_371_fu_14082_p2() {
    mul_ln61_371_fu_14082_p2 = (!mul_ln61_371_fu_14082_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_371_fu_14082_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_372_fu_14097_p0() {
    mul_ln61_372_fu_14097_p0 = reg_4025.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_372_fu_14097_p2() {
    mul_ln61_372_fu_14097_p2 = (!mul_ln61_372_fu_14097_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_372_fu_14097_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_373_fu_14112_p0() {
    mul_ln61_373_fu_14112_p0 = sext_ln61_744_fu_14108_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_373_fu_14112_p2() {
    mul_ln61_373_fu_14112_p2 = (!mul_ln61_373_fu_14112_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_373_fu_14112_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_374_fu_14127_p0() {
    mul_ln61_374_fu_14127_p0 = sext_ln61_746_fu_14123_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_374_fu_14127_p2() {
    mul_ln61_374_fu_14127_p2 = (!mul_ln61_374_fu_14127_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_374_fu_14127_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_375_fu_14155_p0() {
    mul_ln61_375_fu_14155_p0 = sext_ln61_748_fu_14151_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_375_fu_14155_p2() {
    mul_ln61_375_fu_14155_p2 = (!mul_ln61_375_fu_14155_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_375_fu_14155_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_376_fu_14170_p0() {
    mul_ln61_376_fu_14170_p0 = reg_4084.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_376_fu_14170_p2() {
    mul_ln61_376_fu_14170_p2 = (!mul_ln61_376_fu_14170_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_376_fu_14170_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_377_fu_14213_p0() {
    mul_ln61_377_fu_14213_p0 = reg_4094.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_377_fu_14213_p2() {
    mul_ln61_377_fu_14213_p2 = (!mul_ln61_377_fu_14213_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_377_fu_14213_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_378_fu_14228_p0() {
    mul_ln61_378_fu_14228_p0 = sext_ln61_754_fu_14224_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_378_fu_14228_p2() {
    mul_ln61_378_fu_14228_p2 = (!mul_ln61_378_fu_14228_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_378_fu_14228_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_379_fu_14256_p0() {
    mul_ln61_379_fu_14256_p0 = sext_ln61_756_fu_14252_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_379_fu_14256_p2() {
    mul_ln61_379_fu_14256_p2 = (!mul_ln61_379_fu_14256_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_379_fu_14256_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_37_fu_8051_p0() {
    mul_ln61_37_fu_8051_p0 = reg_3546.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_37_fu_8051_p2() {
    mul_ln61_37_fu_8051_p2 = (!mul_ln61_37_fu_8051_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_37_fu_8051_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_380_fu_14271_p0() {
    mul_ln61_380_fu_14271_p0 = sext_ln61_758_fu_14267_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_380_fu_14271_p2() {
    mul_ln61_380_fu_14271_p2 = (!mul_ln61_380_fu_14271_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_380_fu_14271_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_381_fu_14314_p0() {
    mul_ln61_381_fu_14314_p0 = sext_ln61_760_fu_14310_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_381_fu_14314_p2() {
    mul_ln61_381_fu_14314_p2 = (!mul_ln61_381_fu_14314_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_381_fu_14314_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_382_fu_14329_p0() {
    mul_ln61_382_fu_14329_p0 = sext_ln61_762_fu_14325_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_382_fu_14329_p2() {
    mul_ln61_382_fu_14329_p2 = (!mul_ln61_382_fu_14329_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_382_fu_14329_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_383_fu_14357_p0() {
    mul_ln61_383_fu_14357_p0 = sext_ln61_764_fu_14353_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_383_fu_14357_p2() {
    mul_ln61_383_fu_14357_p2 = (!mul_ln61_383_fu_14357_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_383_fu_14357_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_384_fu_14372_p0() {
    mul_ln61_384_fu_14372_p0 = reg_3193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_384_fu_14372_p2() {
    mul_ln61_384_fu_14372_p2 = (!mul_ln61_384_fu_14372_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_384_fu_14372_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void pqcrystals_dilithium_20::thread_mul_ln61_385_fu_12285_p0() {
    mul_ln61_385_fu_12285_p0 = grp_fu_4561_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_385_fu_12285_p2() {
    mul_ln61_385_fu_12285_p2 = (!mul_ln61_385_fu_12285_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_385_fu_12285_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_386_fu_14503_p0() {
    mul_ln61_386_fu_14503_p0 = add_ln63_274_reg_25045.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_386_fu_14503_p2() {
    mul_ln61_386_fu_14503_p2 = (!mul_ln61_386_fu_14503_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_386_fu_14503_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_387_fu_14517_p0() {
    mul_ln61_387_fu_14517_p0 = add_ln63_275_reg_25056.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_387_fu_14517_p2() {
    mul_ln61_387_fu_14517_p2 = (!mul_ln61_387_fu_14517_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_387_fu_14517_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_388_fu_14531_p0() {
    mul_ln61_388_fu_14531_p0 = add_ln63_276_reg_25061.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_388_fu_14531_p2() {
    mul_ln61_388_fu_14531_p2 = (!mul_ln61_388_fu_14531_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_388_fu_14531_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_389_fu_14545_p0() {
    mul_ln61_389_fu_14545_p0 = add_ln63_277_reg_25066.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_389_fu_14545_p2() {
    mul_ln61_389_fu_14545_p2 = (!mul_ln61_389_fu_14545_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_389_fu_14545_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_38_fu_8066_p0() {
    mul_ln61_38_fu_8066_p0 = reg_3556.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_38_fu_8066_p2() {
    mul_ln61_38_fu_8066_p2 = (!mul_ln61_38_fu_8066_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_38_fu_8066_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_390_fu_14559_p0() {
    mul_ln61_390_fu_14559_p0 = add_ln63_278_reg_25071.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_390_fu_14559_p2() {
    mul_ln61_390_fu_14559_p2 = (!mul_ln61_390_fu_14559_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_390_fu_14559_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_391_fu_14573_p0() {
    mul_ln61_391_fu_14573_p0 = add_ln63_279_reg_25076.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_391_fu_14573_p2() {
    mul_ln61_391_fu_14573_p2 = (!mul_ln61_391_fu_14573_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_391_fu_14573_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_392_fu_14587_p0() {
    mul_ln61_392_fu_14587_p0 = add_ln63_280_reg_25081.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_392_fu_14587_p2() {
    mul_ln61_392_fu_14587_p2 = (!mul_ln61_392_fu_14587_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_392_fu_14587_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_393_fu_14601_p0() {
    mul_ln61_393_fu_14601_p0 = add_ln63_281_reg_25086.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_393_fu_14601_p2() {
    mul_ln61_393_fu_14601_p2 = (!mul_ln61_393_fu_14601_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_393_fu_14601_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_394_fu_14615_p0() {
    mul_ln61_394_fu_14615_p0 = add_ln63_282_reg_25091.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_394_fu_14615_p2() {
    mul_ln61_394_fu_14615_p2 = (!mul_ln61_394_fu_14615_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_394_fu_14615_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_395_fu_12505_p0() {
    mul_ln61_395_fu_12505_p0 = grp_fu_4631_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_395_fu_12505_p2() {
    mul_ln61_395_fu_12505_p2 = (!mul_ln61_395_fu_12505_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_395_fu_12505_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_396_fu_12520_p0() {
    mul_ln61_396_fu_12520_p0 = add_ln63_284_fu_12495_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_396_fu_12520_p2() {
    mul_ln61_396_fu_12520_p2 = (!mul_ln61_396_fu_12520_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_396_fu_12520_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_397_fu_14653_p0() {
    mul_ln61_397_fu_14653_p0 = add_ln63_285_reg_25108.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_397_fu_14653_p2() {
    mul_ln61_397_fu_14653_p2 = (!mul_ln61_397_fu_14653_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_397_fu_14653_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_398_fu_14667_p0() {
    mul_ln61_398_fu_14667_p0 = add_ln63_286_reg_25113.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_398_fu_14667_p2() {
    mul_ln61_398_fu_14667_p2 = (!mul_ln61_398_fu_14667_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_398_fu_14667_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_399_fu_14681_p0() {
    mul_ln61_399_fu_14681_p0 = add_ln63_287_reg_25118.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_399_fu_14681_p2() {
    mul_ln61_399_fu_14681_p2 = (!mul_ln61_399_fu_14681_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_399_fu_14681_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_39_fu_8081_p0() {
    mul_ln61_39_fu_8081_p0 = reg_3566.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_39_fu_8081_p2() {
    mul_ln61_39_fu_8081_p2 = (!mul_ln61_39_fu_8081_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_39_fu_8081_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_3_fu_7317_p0() {
    mul_ln61_3_fu_7317_p0 = sext_ln61_6_fu_7313_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_3_fu_7317_p2() {
    mul_ln61_3_fu_7317_p2 = (!mul_ln61_3_fu_7317_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_3_fu_7317_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_400_fu_14695_p0() {
    mul_ln61_400_fu_14695_p0 = add_ln63_288_reg_25123.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_400_fu_14695_p2() {
    mul_ln61_400_fu_14695_p2 = (!mul_ln61_400_fu_14695_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_400_fu_14695_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_401_fu_14710_p0() {
    mul_ln61_401_fu_14710_p0 = sext_ln61_800_fu_14706_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_401_fu_14710_p2() {
    mul_ln61_401_fu_14710_p2 = (!mul_ln61_401_fu_14710_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_401_fu_14710_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_402_fu_14725_p0() {
    mul_ln61_402_fu_14725_p0 = sext_ln61_802_fu_14721_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_402_fu_14725_p2() {
    mul_ln61_402_fu_14725_p2 = (!mul_ln61_402_fu_14725_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_402_fu_14725_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_403_fu_14740_p0() {
    mul_ln61_403_fu_14740_p0 = sext_ln61_804_fu_14736_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_403_fu_14740_p2() {
    mul_ln61_403_fu_14740_p2 = (!mul_ln61_403_fu_14740_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_403_fu_14740_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_404_fu_14755_p0() {
    mul_ln61_404_fu_14755_p0 = sext_ln61_806_fu_14751_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_404_fu_14755_p2() {
    mul_ln61_404_fu_14755_p2 = (!mul_ln61_404_fu_14755_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_404_fu_14755_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_405_fu_14770_p0() {
    mul_ln61_405_fu_14770_p0 = sext_ln61_808_fu_14766_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_405_fu_14770_p2() {
    mul_ln61_405_fu_14770_p2 = (!mul_ln61_405_fu_14770_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_405_fu_14770_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_406_fu_14785_p0() {
    mul_ln61_406_fu_14785_p0 = sext_ln61_810_fu_14781_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_406_fu_14785_p2() {
    mul_ln61_406_fu_14785_p2 = (!mul_ln61_406_fu_14785_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_406_fu_14785_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_407_fu_14800_p0() {
    mul_ln61_407_fu_14800_p0 = sext_ln61_812_fu_14796_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_407_fu_14800_p2() {
    mul_ln61_407_fu_14800_p2 = (!mul_ln61_407_fu_14800_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_407_fu_14800_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_408_fu_14815_p0() {
    mul_ln61_408_fu_14815_p0 = sext_ln61_814_fu_14811_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_408_fu_14815_p2() {
    mul_ln61_408_fu_14815_p2 = (!mul_ln61_408_fu_14815_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_408_fu_14815_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_409_fu_14830_p0() {
    mul_ln61_409_fu_14830_p0 = sext_ln61_816_fu_14826_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_409_fu_14830_p2() {
    mul_ln61_409_fu_14830_p2 = (!mul_ln61_409_fu_14830_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_409_fu_14830_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_40_fu_8096_p0() {
    mul_ln61_40_fu_8096_p0 = reg_3576.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_40_fu_8096_p2() {
    mul_ln61_40_fu_8096_p2 = (!mul_ln61_40_fu_8096_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_40_fu_8096_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_410_fu_14845_p0() {
    mul_ln61_410_fu_14845_p0 = sext_ln61_818_fu_14841_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_410_fu_14845_p2() {
    mul_ln61_410_fu_14845_p2 = (!mul_ln61_410_fu_14845_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_410_fu_14845_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_411_fu_14860_p0() {
    mul_ln61_411_fu_14860_p0 = sext_ln61_820_fu_14856_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_411_fu_14860_p2() {
    mul_ln61_411_fu_14860_p2 = (!mul_ln61_411_fu_14860_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_411_fu_14860_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_412_fu_14875_p0() {
    mul_ln61_412_fu_14875_p0 = sext_ln61_822_fu_14871_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_412_fu_14875_p2() {
    mul_ln61_412_fu_14875_p2 = (!mul_ln61_412_fu_14875_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_412_fu_14875_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_413_fu_14890_p0() {
    mul_ln61_413_fu_14890_p0 = sext_ln61_824_fu_14886_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_413_fu_14890_p2() {
    mul_ln61_413_fu_14890_p2 = (!mul_ln61_413_fu_14890_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_413_fu_14890_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_414_fu_14387_p0() {
    mul_ln61_414_fu_14387_p0 = sext_ln61_826_fu_14383_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_414_fu_14387_p2() {
    mul_ln61_414_fu_14387_p2 = (!mul_ln61_414_fu_14387_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_414_fu_14387_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_415_fu_14919_p0() {
    mul_ln61_415_fu_14919_p0 = reg_3406.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_415_fu_14919_p2() {
    mul_ln61_415_fu_14919_p2 = (!mul_ln61_415_fu_14919_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_415_fu_14919_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_416_fu_14934_p0() {
    mul_ln61_416_fu_14934_p0 = reg_3416.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_416_fu_14934_p2() {
    mul_ln61_416_fu_14934_p2 = (!mul_ln61_416_fu_14934_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_416_fu_14934_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_417_fu_14948_p0() {
    mul_ln61_417_fu_14948_p0 = add_ln63_305_reg_25128.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_417_fu_14948_p2() {
    mul_ln61_417_fu_14948_p2 = (!mul_ln61_417_fu_14948_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_417_fu_14948_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_418_fu_12942_p0() {
    mul_ln61_418_fu_12942_p0 = add_ln63_306_fu_12932_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_418_fu_12942_p2() {
    mul_ln61_418_fu_12942_p2 = (!mul_ln61_418_fu_12942_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_418_fu_12942_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_419_fu_14974_p0() {
    mul_ln61_419_fu_14974_p0 = add_ln63_307_reg_25139.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_419_fu_14974_p2() {
    mul_ln61_419_fu_14974_p2 = (!mul_ln61_419_fu_14974_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_419_fu_14974_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_41_fu_8111_p0() {
    mul_ln61_41_fu_8111_p0 = reg_3586.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_41_fu_8111_p2() {
    mul_ln61_41_fu_8111_p2 = (!mul_ln61_41_fu_8111_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_41_fu_8111_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_420_fu_14988_p0() {
    mul_ln61_420_fu_14988_p0 = add_ln63_308_reg_25144.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_420_fu_14988_p2() {
    mul_ln61_420_fu_14988_p2 = (!mul_ln61_420_fu_14988_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_420_fu_14988_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_421_fu_15002_p0() {
    mul_ln61_421_fu_15002_p0 = add_ln63_309_reg_25149.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_421_fu_15002_p2() {
    mul_ln61_421_fu_15002_p2 = (!mul_ln61_421_fu_15002_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_421_fu_15002_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_422_fu_15016_p0() {
    mul_ln61_422_fu_15016_p0 = add_ln63_310_reg_25154.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_422_fu_15016_p2() {
    mul_ln61_422_fu_15016_p2 = (!mul_ln61_422_fu_15016_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_422_fu_15016_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_423_fu_15030_p0() {
    mul_ln61_423_fu_15030_p0 = add_ln63_311_reg_25159.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_423_fu_15030_p2() {
    mul_ln61_423_fu_15030_p2 = (!mul_ln61_423_fu_15030_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_423_fu_15030_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_424_fu_13071_p0() {
    mul_ln61_424_fu_13071_p0 = add_ln63_312_fu_13061_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_424_fu_13071_p2() {
    mul_ln61_424_fu_13071_p2 = (!mul_ln61_424_fu_13071_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_424_fu_13071_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_425_fu_15056_p0() {
    mul_ln61_425_fu_15056_p0 = add_ln63_313_reg_25170.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_425_fu_15056_p2() {
    mul_ln61_425_fu_15056_p2 = (!mul_ln61_425_fu_15056_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_425_fu_15056_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_426_fu_15070_p0() {
    mul_ln61_426_fu_15070_p0 = add_ln63_314_reg_25175.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_426_fu_15070_p2() {
    mul_ln61_426_fu_15070_p2 = (!mul_ln61_426_fu_15070_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_426_fu_15070_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_427_fu_15084_p0() {
    mul_ln61_427_fu_15084_p0 = add_ln63_315_reg_25180.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_427_fu_15084_p2() {
    mul_ln61_427_fu_15084_p2 = (!mul_ln61_427_fu_15084_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_427_fu_15084_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_428_fu_15098_p0() {
    mul_ln61_428_fu_15098_p0 = add_ln63_316_reg_25185.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_428_fu_15098_p2() {
    mul_ln61_428_fu_15098_p2 = (!mul_ln61_428_fu_15098_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_428_fu_15098_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_429_fu_15112_p0() {
    mul_ln61_429_fu_15112_p0 = add_ln63_317_reg_25190.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_429_fu_15112_p2() {
    mul_ln61_429_fu_15112_p2 = (!mul_ln61_429_fu_15112_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_429_fu_15112_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_42_fu_8126_p0() {
    mul_ln61_42_fu_8126_p0 = reg_3596.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_42_fu_8126_p2() {
    mul_ln61_42_fu_8126_p2 = (!mul_ln61_42_fu_8126_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_42_fu_8126_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_430_fu_15126_p0() {
    mul_ln61_430_fu_15126_p0 = add_ln63_318_reg_25195.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_430_fu_15126_p2() {
    mul_ln61_430_fu_15126_p2 = (!mul_ln61_430_fu_15126_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_430_fu_15126_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_431_fu_15140_p0() {
    mul_ln61_431_fu_15140_p0 = add_ln63_319_reg_25200.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_431_fu_15140_p2() {
    mul_ln61_431_fu_15140_p2 = (!mul_ln61_431_fu_15140_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_431_fu_15140_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_432_fu_15154_p0() {
    mul_ln61_432_fu_15154_p0 = add_ln63_320_reg_25205.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_432_fu_15154_p2() {
    mul_ln61_432_fu_15154_p2 = (!mul_ln61_432_fu_15154_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_432_fu_15154_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_433_fu_15169_p0() {
    mul_ln61_433_fu_15169_p0 = reg_3506.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_433_fu_15169_p2() {
    mul_ln61_433_fu_15169_p2 = (!mul_ln61_433_fu_15169_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_433_fu_15169_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_434_fu_15184_p0() {
    mul_ln61_434_fu_15184_p0 = reg_3516.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_434_fu_15184_p2() {
    mul_ln61_434_fu_15184_p2 = (!mul_ln61_434_fu_15184_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_434_fu_15184_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_435_fu_15199_p0() {
    mul_ln61_435_fu_15199_p0 = reg_3526.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_435_fu_15199_p2() {
    mul_ln61_435_fu_15199_p2 = (!mul_ln61_435_fu_15199_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_435_fu_15199_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_436_fu_15214_p0() {
    mul_ln61_436_fu_15214_p0 = reg_3536.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_436_fu_15214_p2() {
    mul_ln61_436_fu_15214_p2 = (!mul_ln61_436_fu_15214_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_436_fu_15214_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_437_fu_15229_p0() {
    mul_ln61_437_fu_15229_p0 = reg_3546.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_437_fu_15229_p2() {
    mul_ln61_437_fu_15229_p2 = (!mul_ln61_437_fu_15229_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_437_fu_15229_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_438_fu_15244_p0() {
    mul_ln61_438_fu_15244_p0 = reg_3556.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_438_fu_15244_p2() {
    mul_ln61_438_fu_15244_p2 = (!mul_ln61_438_fu_15244_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_438_fu_15244_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_439_fu_15259_p0() {
    mul_ln61_439_fu_15259_p0 = reg_3566.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_439_fu_15259_p2() {
    mul_ln61_439_fu_15259_p2 = (!mul_ln61_439_fu_15259_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_439_fu_15259_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_43_fu_8141_p0() {
    mul_ln61_43_fu_8141_p0 = reg_3605.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_43_fu_8141_p2() {
    mul_ln61_43_fu_8141_p2 = (!mul_ln61_43_fu_8141_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_43_fu_8141_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_440_fu_15274_p0() {
    mul_ln61_440_fu_15274_p0 = reg_3576.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_440_fu_15274_p2() {
    mul_ln61_440_fu_15274_p2 = (!mul_ln61_440_fu_15274_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_440_fu_15274_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_441_fu_15289_p0() {
    mul_ln61_441_fu_15289_p0 = reg_3586.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_441_fu_15289_p2() {
    mul_ln61_441_fu_15289_p2 = (!mul_ln61_441_fu_15289_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_441_fu_15289_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_442_fu_15304_p0() {
    mul_ln61_442_fu_15304_p0 = reg_3596.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_442_fu_15304_p2() {
    mul_ln61_442_fu_15304_p2 = (!mul_ln61_442_fu_15304_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_442_fu_15304_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_443_fu_15319_p0() {
    mul_ln61_443_fu_15319_p0 = reg_3605.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_443_fu_15319_p2() {
    mul_ln61_443_fu_15319_p2 = (!mul_ln61_443_fu_15319_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_443_fu_15319_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_444_fu_15334_p0() {
    mul_ln61_444_fu_15334_p0 = reg_3613.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_444_fu_15334_p2() {
    mul_ln61_444_fu_15334_p2 = (!mul_ln61_444_fu_15334_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_444_fu_15334_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_445_fu_15349_p0() {
    mul_ln61_445_fu_15349_p0 = reg_3621.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_445_fu_15349_p2() {
    mul_ln61_445_fu_15349_p2 = (!mul_ln61_445_fu_15349_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_445_fu_15349_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_446_fu_15364_p0() {
    mul_ln61_446_fu_15364_p0 = reg_3629.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_446_fu_15364_p2() {
    mul_ln61_446_fu_15364_p2 = (!mul_ln61_446_fu_15364_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_446_fu_15364_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_447_fu_14402_p0() {
    mul_ln61_447_fu_14402_p0 = sext_ln61_892_fu_14398_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_447_fu_14402_p2() {
    mul_ln61_447_fu_14402_p2 = (!mul_ln61_447_fu_14402_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_447_fu_14402_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_448_fu_15379_p0() {
    mul_ln61_448_fu_15379_p0 = sext_ln61_894_fu_15375_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_448_fu_15379_p2() {
    mul_ln61_448_fu_15379_p2 = (!mul_ln61_448_fu_15379_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_448_fu_15379_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void pqcrystals_dilithium_20::thread_mul_ln61_449_fu_13523_p0() {
    mul_ln61_449_fu_13523_p0 = grp_fu_6130_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_449_fu_13523_p2() {
    mul_ln61_449_fu_13523_p2 = (!mul_ln61_449_fu_13523_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_449_fu_13523_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_44_fu_8156_p0() {
    mul_ln61_44_fu_8156_p0 = reg_3613.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_44_fu_8156_p2() {
    mul_ln61_44_fu_8156_p2 = (!mul_ln61_44_fu_8156_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_44_fu_8156_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_450_fu_15419_p0() {
    mul_ln61_450_fu_15419_p0 = add_ln63_338_reg_25210.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_450_fu_15419_p2() {
    mul_ln61_450_fu_15419_p2 = (!mul_ln61_450_fu_15419_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_450_fu_15419_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_451_fu_15433_p0() {
    mul_ln61_451_fu_15433_p0 = add_ln63_339_reg_25221.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_451_fu_15433_p2() {
    mul_ln61_451_fu_15433_p2 = (!mul_ln61_451_fu_15433_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_451_fu_15433_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_452_fu_15447_p0() {
    mul_ln61_452_fu_15447_p0 = add_ln63_340_reg_25226.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_452_fu_15447_p2() {
    mul_ln61_452_fu_15447_p2 = (!mul_ln61_452_fu_15447_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_452_fu_15447_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_453_fu_15461_p0() {
    mul_ln61_453_fu_15461_p0 = add_ln63_341_reg_25231.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_453_fu_15461_p2() {
    mul_ln61_453_fu_15461_p2 = (!mul_ln61_453_fu_15461_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_453_fu_15461_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_454_fu_15475_p0() {
    mul_ln61_454_fu_15475_p0 = add_ln63_342_reg_25236.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_454_fu_15475_p2() {
    mul_ln61_454_fu_15475_p2 = (!mul_ln61_454_fu_15475_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_454_fu_15475_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_455_fu_15489_p0() {
    mul_ln61_455_fu_15489_p0 = add_ln63_343_reg_25241.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_455_fu_15489_p2() {
    mul_ln61_455_fu_15489_p2 = (!mul_ln61_455_fu_15489_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_455_fu_15489_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_456_fu_15503_p0() {
    mul_ln61_456_fu_15503_p0 = add_ln63_344_reg_25246.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_456_fu_15503_p2() {
    mul_ln61_456_fu_15503_p2 = (!mul_ln61_456_fu_15503_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_456_fu_15503_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_457_fu_15517_p0() {
    mul_ln61_457_fu_15517_p0 = add_ln63_345_reg_25251.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_457_fu_15517_p2() {
    mul_ln61_457_fu_15517_p2 = (!mul_ln61_457_fu_15517_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_457_fu_15517_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_458_fu_15531_p0() {
    mul_ln61_458_fu_15531_p0 = add_ln63_346_reg_25256.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_458_fu_15531_p2() {
    mul_ln61_458_fu_15531_p2 = (!mul_ln61_458_fu_15531_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_458_fu_15531_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_459_fu_15545_p0() {
    mul_ln61_459_fu_15545_p0 = add_ln63_347_reg_25261.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_459_fu_15545_p2() {
    mul_ln61_459_fu_15545_p2 = (!mul_ln61_459_fu_15545_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_459_fu_15545_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_45_fu_8171_p0() {
    mul_ln61_45_fu_8171_p0 = reg_3621.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_45_fu_8171_p2() {
    mul_ln61_45_fu_8171_p2 = (!mul_ln61_45_fu_8171_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_45_fu_8171_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_460_fu_15559_p0() {
    mul_ln61_460_fu_15559_p0 = add_ln63_348_reg_25266.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_460_fu_15559_p2() {
    mul_ln61_460_fu_15559_p2 = (!mul_ln61_460_fu_15559_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_460_fu_15559_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_461_fu_15573_p0() {
    mul_ln61_461_fu_15573_p0 = add_ln63_349_reg_25271.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_461_fu_15573_p2() {
    mul_ln61_461_fu_15573_p2 = (!mul_ln61_461_fu_15573_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_461_fu_15573_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_462_fu_15587_p0() {
    mul_ln61_462_fu_15587_p0 = add_ln63_350_reg_25276.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_462_fu_15587_p2() {
    mul_ln61_462_fu_15587_p2 = (!mul_ln61_462_fu_15587_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_462_fu_15587_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_463_fu_15601_p0() {
    mul_ln61_463_fu_15601_p0 = add_ln63_351_reg_25281.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_463_fu_15601_p2() {
    mul_ln61_463_fu_15601_p2 = (!mul_ln61_463_fu_15601_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_463_fu_15601_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_464_fu_15615_p0() {
    mul_ln61_464_fu_15615_p0 = add_ln63_352_reg_25286.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_464_fu_15615_p2() {
    mul_ln61_464_fu_15615_p2 = (!mul_ln61_464_fu_15615_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_464_fu_15615_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void pqcrystals_dilithium_20::thread_mul_ln61_465_fu_15630_p0() {
    mul_ln61_465_fu_15630_p0 = sext_ln61_928_fu_15626_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_465_fu_15630_p2() {
    mul_ln61_465_fu_15630_p2 = (!mul_ln61_465_fu_15630_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_465_fu_15630_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_466_fu_15645_p0() {
    mul_ln61_466_fu_15645_p0 = sext_ln61_930_fu_15641_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_466_fu_15645_p2() {
    mul_ln61_466_fu_15645_p2 = (!mul_ln61_466_fu_15645_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_466_fu_15645_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_467_fu_15660_p0() {
    mul_ln61_467_fu_15660_p0 = sext_ln61_932_fu_15656_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_467_fu_15660_p2() {
    mul_ln61_467_fu_15660_p2 = (!mul_ln61_467_fu_15660_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_467_fu_15660_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_468_fu_14417_p0() {
    mul_ln61_468_fu_14417_p0 = sext_ln61_934_fu_14413_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_468_fu_14417_p2() {
    mul_ln61_468_fu_14417_p2 = (!mul_ln61_468_fu_14417_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_468_fu_14417_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_469_fu_15689_p0() {
    mul_ln61_469_fu_15689_p0 = reg_3767.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_469_fu_15689_p2() {
    mul_ln61_469_fu_15689_p2 = (!mul_ln61_469_fu_15689_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_469_fu_15689_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_46_fu_8186_p0() {
    mul_ln61_46_fu_8186_p0 = reg_3629.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_46_fu_8186_p2() {
    mul_ln61_46_fu_8186_p2 = (!mul_ln61_46_fu_8186_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_46_fu_8186_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_470_fu_15704_p0() {
    mul_ln61_470_fu_15704_p0 = reg_3777.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_470_fu_15704_p2() {
    mul_ln61_470_fu_15704_p2 = (!mul_ln61_470_fu_15704_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_470_fu_15704_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_471_fu_14432_p0() {
    mul_ln61_471_fu_14432_p0 = sext_ln61_940_fu_14428_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_471_fu_14432_p2() {
    mul_ln61_471_fu_14432_p2 = (!mul_ln61_471_fu_14432_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_471_fu_14432_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_472_fu_14447_p0() {
    mul_ln61_472_fu_14447_p0 = sext_ln61_942_fu_14443_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_472_fu_14447_p2() {
    mul_ln61_472_fu_14447_p2 = (!mul_ln61_472_fu_14447_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_472_fu_14447_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_473_fu_15747_p0() {
    mul_ln61_473_fu_15747_p0 = reg_3805.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_473_fu_15747_p2() {
    mul_ln61_473_fu_15747_p2 = (!mul_ln61_473_fu_15747_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_473_fu_15747_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_474_fu_15762_p0() {
    mul_ln61_474_fu_15762_p0 = reg_3815.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_474_fu_15762_p2() {
    mul_ln61_474_fu_15762_p2 = (!mul_ln61_474_fu_15762_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_474_fu_15762_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_475_fu_15777_p0() {
    mul_ln61_475_fu_15777_p0 = reg_3825.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_475_fu_15777_p2() {
    mul_ln61_475_fu_15777_p2 = (!mul_ln61_475_fu_15777_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_475_fu_15777_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_476_fu_15792_p0() {
    mul_ln61_476_fu_15792_p0 = reg_3835.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_476_fu_15792_p2() {
    mul_ln61_476_fu_15792_p2 = (!mul_ln61_476_fu_15792_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_476_fu_15792_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_477_fu_15807_p0() {
    mul_ln61_477_fu_15807_p0 = reg_3845.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_477_fu_15807_p2() {
    mul_ln61_477_fu_15807_p2 = (!mul_ln61_477_fu_15807_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_477_fu_15807_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_478_fu_15822_p0() {
    mul_ln61_478_fu_15822_p0 = sext_ln61_954_fu_15818_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_478_fu_15822_p2() {
    mul_ln61_478_fu_15822_p2 = (!mul_ln61_478_fu_15822_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_478_fu_15822_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_479_fu_15837_p0() {
    mul_ln61_479_fu_15837_p0 = sext_ln61_956_fu_15833_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_479_fu_15837_p2() {
    mul_ln61_479_fu_15837_p2 = (!mul_ln61_479_fu_15837_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_479_fu_15837_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_47_fu_8201_p0() {
    mul_ln61_47_fu_8201_p0 = reg_3637.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_47_fu_8201_p2() {
    mul_ln61_47_fu_8201_p2 = (!mul_ln61_47_fu_8201_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_47_fu_8201_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_480_fu_14462_p0() {
    mul_ln61_480_fu_14462_p0 = sext_ln61_958_fu_14458_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_480_fu_14462_p2() {
    mul_ln61_480_fu_14462_p2 = (!mul_ln61_480_fu_14462_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_480_fu_14462_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void pqcrystals_dilithium_20::thread_mul_ln61_481_fu_15865_p0() {
    mul_ln61_481_fu_15865_p0 = add_ln63_369_reg_25291.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_481_fu_15865_p2() {
    mul_ln61_481_fu_15865_p2 = (!mul_ln61_481_fu_15865_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_481_fu_15865_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_482_fu_15879_p0() {
    mul_ln61_482_fu_15879_p0 = add_ln63_370_reg_25296.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_482_fu_15879_p2() {
    mul_ln61_482_fu_15879_p2 = (!mul_ln61_482_fu_15879_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_482_fu_15879_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_483_fu_15894_p0() {
    mul_ln61_483_fu_15894_p0 = reg_7289.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_483_fu_15894_p2() {
    mul_ln61_483_fu_15894_p2 = (!mul_ln61_483_fu_15894_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_483_fu_15894_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_484_fu_15909_p0() {
    mul_ln61_484_fu_15909_p0 = reg_7293.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_484_fu_15909_p2() {
    mul_ln61_484_fu_15909_p2 = (!mul_ln61_484_fu_15909_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_484_fu_15909_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_485_fu_15924_p0() {
    mul_ln61_485_fu_15924_p0 = reg_7309.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_485_fu_15924_p2() {
    mul_ln61_485_fu_15924_p2 = (!mul_ln61_485_fu_15924_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_485_fu_15924_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_486_fu_15938_p0() {
    mul_ln61_486_fu_15938_p0 = add_ln63_374_reg_25301.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_486_fu_15938_p2() {
    mul_ln61_486_fu_15938_p2 = (!mul_ln61_486_fu_15938_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_486_fu_15938_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_487_fu_14198_p0() {
    mul_ln61_487_fu_14198_p0 = grp_fu_6820_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_487_fu_14198_p2() {
    mul_ln61_487_fu_14198_p2 = (!mul_ln61_487_fu_14198_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_487_fu_14198_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_488_fu_15966_p0() {
    mul_ln61_488_fu_15966_p0 = add_ln63_376_reg_25306.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_488_fu_15966_p2() {
    mul_ln61_488_fu_15966_p2 = (!mul_ln61_488_fu_15966_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_488_fu_15966_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_489_fu_15981_p0() {
    mul_ln61_489_fu_15981_p0 = reg_7301.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_489_fu_15981_p2() {
    mul_ln61_489_fu_15981_p2 = (!mul_ln61_489_fu_15981_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_489_fu_15981_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_48_fu_8216_p0() {
    mul_ln61_48_fu_8216_p0 = reg_3647.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_48_fu_8216_p2() {
    mul_ln61_48_fu_8216_p2 = (!mul_ln61_48_fu_8216_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_48_fu_8216_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_490_fu_15995_p0() {
    mul_ln61_490_fu_15995_p0 = add_ln63_378_reg_25311.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_490_fu_15995_p2() {
    mul_ln61_490_fu_15995_p2 = (!mul_ln61_490_fu_15995_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_490_fu_15995_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_491_fu_14299_p0() {
    mul_ln61_491_fu_14299_p0 = grp_fu_6834_p2.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_491_fu_14299_p2() {
    mul_ln61_491_fu_14299_p2 = (!mul_ln61_491_fu_14299_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_491_fu_14299_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_492_fu_16021_p0() {
    mul_ln61_492_fu_16021_p0 = add_ln63_380_reg_25316.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_492_fu_16021_p2() {
    mul_ln61_492_fu_16021_p2 = (!mul_ln61_492_fu_16021_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_492_fu_16021_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_493_fu_16035_p0() {
    mul_ln61_493_fu_16035_p0 = add_ln63_381_reg_25327.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_493_fu_16035_p2() {
    mul_ln61_493_fu_16035_p2 = (!mul_ln61_493_fu_16035_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_493_fu_16035_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_494_fu_16049_p0() {
    mul_ln61_494_fu_16049_p0 = add_ln63_382_reg_25332.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_494_fu_16049_p2() {
    mul_ln61_494_fu_16049_p2 = (!mul_ln61_494_fu_16049_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_494_fu_16049_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_495_fu_16063_p0() {
    mul_ln61_495_fu_16063_p0 = add_ln63_383_reg_25337.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_495_fu_16063_p2() {
    mul_ln61_495_fu_16063_p2 = (!mul_ln61_495_fu_16063_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_495_fu_16063_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_496_fu_16078_p0() {
    mul_ln61_496_fu_16078_p0 = reg_7305.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_496_fu_16078_p2() {
    mul_ln61_496_fu_16078_p2 = (!mul_ln61_496_fu_16078_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_496_fu_16078_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void pqcrystals_dilithium_20::thread_mul_ln61_497_fu_16093_p0() {
    mul_ln61_497_fu_16093_p0 = reg_3975.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_497_fu_16093_p2() {
    mul_ln61_497_fu_16093_p2 = (!mul_ln61_497_fu_16093_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_497_fu_16093_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_498_fu_16108_p0() {
    mul_ln61_498_fu_16108_p0 = reg_3985.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_498_fu_16108_p2() {
    mul_ln61_498_fu_16108_p2 = (!mul_ln61_498_fu_16108_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_498_fu_16108_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_499_fu_16123_p0() {
    mul_ln61_499_fu_16123_p0 = reg_3995.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_499_fu_16123_p2() {
    mul_ln61_499_fu_16123_p2 = (!mul_ln61_499_fu_16123_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_499_fu_16123_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_49_fu_8231_p0() {
    mul_ln61_49_fu_8231_p0 = reg_3657.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_49_fu_8231_p2() {
    mul_ln61_49_fu_8231_p2 = (!mul_ln61_49_fu_8231_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_49_fu_8231_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_4_fu_7571_p0() {
    mul_ln61_4_fu_7571_p0 = reg_3226.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_4_fu_7571_p2() {
    mul_ln61_4_fu_7571_p2 = (!mul_ln61_4_fu_7571_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_4_fu_7571_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_500_fu_16138_p0() {
    mul_ln61_500_fu_16138_p0 = reg_4005.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_500_fu_16138_p2() {
    mul_ln61_500_fu_16138_p2 = (!mul_ln61_500_fu_16138_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_500_fu_16138_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_501_fu_16153_p0() {
    mul_ln61_501_fu_16153_p0 = reg_4015.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_501_fu_16153_p2() {
    mul_ln61_501_fu_16153_p2 = (!mul_ln61_501_fu_16153_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_501_fu_16153_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_502_fu_16168_p0() {
    mul_ln61_502_fu_16168_p0 = reg_4025.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_502_fu_16168_p2() {
    mul_ln61_502_fu_16168_p2 = (!mul_ln61_502_fu_16168_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_502_fu_16168_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_503_fu_14477_p0() {
    mul_ln61_503_fu_14477_p0 = sext_ln61_1004_fu_14473_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_503_fu_14477_p2() {
    mul_ln61_503_fu_14477_p2 = (!mul_ln61_503_fu_14477_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_503_fu_14477_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_504_fu_16197_p0() {
    mul_ln61_504_fu_16197_p0 = reg_4055.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_504_fu_16197_p2() {
    mul_ln61_504_fu_16197_p2 = (!mul_ln61_504_fu_16197_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_504_fu_16197_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_505_fu_16212_p0() {
    mul_ln61_505_fu_16212_p0 = reg_4065.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_505_fu_16212_p2() {
    mul_ln61_505_fu_16212_p2 = (!mul_ln61_505_fu_16212_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_505_fu_16212_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_506_fu_16227_p0() {
    mul_ln61_506_fu_16227_p0 = sext_ln61_1010_fu_16223_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_506_fu_16227_p2() {
    mul_ln61_506_fu_16227_p2 = (!mul_ln61_506_fu_16227_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_506_fu_16227_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_507_fu_16242_p0() {
    mul_ln61_507_fu_16242_p0 = sext_ln61_1012_fu_16238_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_507_fu_16242_p2() {
    mul_ln61_507_fu_16242_p2 = (!mul_ln61_507_fu_16242_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_507_fu_16242_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_508_fu_16257_p0() {
    mul_ln61_508_fu_16257_p0 = sext_ln61_1014_fu_16253_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_508_fu_16257_p2() {
    mul_ln61_508_fu_16257_p2 = (!mul_ln61_508_fu_16257_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_508_fu_16257_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_509_fu_16272_p0() {
    mul_ln61_509_fu_16272_p0 = reg_4113.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_509_fu_16272_p2() {
    mul_ln61_509_fu_16272_p2 = (!mul_ln61_509_fu_16272_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_509_fu_16272_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_50_fu_8246_p0() {
    mul_ln61_50_fu_8246_p0 = reg_3667.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_50_fu_8246_p2() {
    mul_ln61_50_fu_8246_p2 = (!mul_ln61_50_fu_8246_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_50_fu_8246_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_510_fu_16287_p0() {
    mul_ln61_510_fu_16287_p0 = reg_4123.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_510_fu_16287_p2() {
    mul_ln61_510_fu_16287_p2 = (!mul_ln61_510_fu_16287_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_510_fu_16287_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_511_fu_16302_p0() {
    mul_ln61_511_fu_16302_p0 = reg_4133.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_511_fu_16302_p2() {
    mul_ln61_511_fu_16302_p2 = (!mul_ln61_511_fu_16302_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_511_fu_16302_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_512_fu_16317_p0() {
    mul_ln61_512_fu_16317_p0 = reg_3193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_512_fu_16317_p2() {
    mul_ln61_512_fu_16317_p2 = (!mul_ln61_512_fu_16317_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_512_fu_16317_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void pqcrystals_dilithium_20::thread_mul_ln61_513_fu_16407_p0() {
    mul_ln61_513_fu_16407_p0 = reg_3193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_513_fu_16407_p2() {
    mul_ln61_513_fu_16407_p2 = (!mul_ln61_513_fu_16407_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_513_fu_16407_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_514_fu_16422_p0() {
    mul_ln61_514_fu_16422_p0 = reg_3201.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_514_fu_16422_p2() {
    mul_ln61_514_fu_16422_p2 = (!mul_ln61_514_fu_16422_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_514_fu_16422_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_515_fu_16437_p0() {
    mul_ln61_515_fu_16437_p0 = reg_3209.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_515_fu_16437_p2() {
    mul_ln61_515_fu_16437_p2 = (!mul_ln61_515_fu_16437_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_515_fu_16437_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_516_fu_16452_p0() {
    mul_ln61_516_fu_16452_p0 = sext_ln61_1030_fu_16448_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_516_fu_16452_p2() {
    mul_ln61_516_fu_16452_p2 = (!mul_ln61_516_fu_16452_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_516_fu_16452_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_517_fu_16467_p0() {
    mul_ln61_517_fu_16467_p0 = sext_ln61_1032_fu_16463_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_517_fu_16467_p2() {
    mul_ln61_517_fu_16467_p2 = (!mul_ln61_517_fu_16467_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_517_fu_16467_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_518_fu_16482_p0() {
    mul_ln61_518_fu_16482_p0 = sext_ln61_1034_fu_16478_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_518_fu_16482_p2() {
    mul_ln61_518_fu_16482_p2 = (!mul_ln61_518_fu_16482_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_518_fu_16482_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_519_fu_16332_p0() {
    mul_ln61_519_fu_16332_p0 = sext_ln61_1036_fu_16328_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_519_fu_16332_p2() {
    mul_ln61_519_fu_16332_p2 = (!mul_ln61_519_fu_16332_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_519_fu_16332_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_51_fu_8261_p0() {
    mul_ln61_51_fu_8261_p0 = reg_3677.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_51_fu_8261_p2() {
    mul_ln61_51_fu_8261_p2 = (!mul_ln61_51_fu_8261_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_51_fu_8261_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_520_fu_16497_p0() {
    mul_ln61_520_fu_16497_p0 = reg_3256.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_520_fu_16497_p2() {
    mul_ln61_520_fu_16497_p2 = (!mul_ln61_520_fu_16497_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_520_fu_16497_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void pqcrystals_dilithium_20::thread_mul_ln61_521_fu_16512_p0() {
    mul_ln61_521_fu_16512_p0 = reg_3266.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_521_fu_16512_p2() {
    mul_ln61_521_fu_16512_p2 = (!mul_ln61_521_fu_16512_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_521_fu_16512_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_522_fu_16527_p0() {
    mul_ln61_522_fu_16527_p0 = reg_3276.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_522_fu_16527_p2() {
    mul_ln61_522_fu_16527_p2 = (!mul_ln61_522_fu_16527_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_522_fu_16527_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_523_fu_16542_p0() {
    mul_ln61_523_fu_16542_p0 = reg_3286.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_523_fu_16542_p2() {
    mul_ln61_523_fu_16542_p2 = (!mul_ln61_523_fu_16542_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_523_fu_16542_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_524_fu_16557_p0() {
    mul_ln61_524_fu_16557_p0 = reg_3296.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_524_fu_16557_p2() {
    mul_ln61_524_fu_16557_p2 = (!mul_ln61_524_fu_16557_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_524_fu_16557_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_525_fu_16572_p0() {
    mul_ln61_525_fu_16572_p0 = reg_3306.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_525_fu_16572_p2() {
    mul_ln61_525_fu_16572_p2 = (!mul_ln61_525_fu_16572_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_525_fu_16572_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_526_fu_16587_p0() {
    mul_ln61_526_fu_16587_p0 = reg_3316.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_526_fu_16587_p2() {
    mul_ln61_526_fu_16587_p2 = (!mul_ln61_526_fu_16587_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_526_fu_16587_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_527_fu_16602_p0() {
    mul_ln61_527_fu_16602_p0 = reg_3326.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_527_fu_16602_p2() {
    mul_ln61_527_fu_16602_p2 = (!mul_ln61_527_fu_16602_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_527_fu_16602_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_528_fu_16617_p0() {
    mul_ln61_528_fu_16617_p0 = reg_3336.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_528_fu_16617_p2() {
    mul_ln61_528_fu_16617_p2 = (!mul_ln61_528_fu_16617_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_528_fu_16617_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void pqcrystals_dilithium_20::thread_mul_ln61_529_fu_16632_p0() {
    mul_ln61_529_fu_16632_p0 = reg_3346.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_529_fu_16632_p2() {
    mul_ln61_529_fu_16632_p2 = (!mul_ln61_529_fu_16632_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_529_fu_16632_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_52_fu_8276_p0() {
    mul_ln61_52_fu_8276_p0 = reg_3687.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_52_fu_8276_p2() {
    mul_ln61_52_fu_8276_p2 = (!mul_ln61_52_fu_8276_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_52_fu_8276_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_530_fu_16647_p0() {
    mul_ln61_530_fu_16647_p0 = reg_3356.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_530_fu_16647_p2() {
    mul_ln61_530_fu_16647_p2 = (!mul_ln61_530_fu_16647_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_530_fu_16647_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_531_fu_16662_p0() {
    mul_ln61_531_fu_16662_p0 = reg_3366.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_531_fu_16662_p2() {
    mul_ln61_531_fu_16662_p2 = (!mul_ln61_531_fu_16662_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_531_fu_16662_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_532_fu_16677_p0() {
    mul_ln61_532_fu_16677_p0 = reg_3376.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_532_fu_16677_p2() {
    mul_ln61_532_fu_16677_p2 = (!mul_ln61_532_fu_16677_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_532_fu_16677_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_533_fu_16692_p0() {
    mul_ln61_533_fu_16692_p0 = reg_3386.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_533_fu_16692_p2() {
    mul_ln61_533_fu_16692_p2 = (!mul_ln61_533_fu_16692_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_533_fu_16692_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_534_fu_16707_p0() {
    mul_ln61_534_fu_16707_p0 = reg_3396.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_534_fu_16707_p2() {
    mul_ln61_534_fu_16707_p2 = (!mul_ln61_534_fu_16707_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_534_fu_16707_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_535_fu_16722_p0() {
    mul_ln61_535_fu_16722_p0 = reg_3406.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_535_fu_16722_p2() {
    mul_ln61_535_fu_16722_p2 = (!mul_ln61_535_fu_16722_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_535_fu_16722_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_536_fu_16737_p0() {
    mul_ln61_536_fu_16737_p0 = reg_3416.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_536_fu_16737_p2() {
    mul_ln61_536_fu_16737_p2 = (!mul_ln61_536_fu_16737_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_536_fu_16737_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_537_fu_16752_p0() {
    mul_ln61_537_fu_16752_p0 = reg_3426.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_537_fu_16752_p2() {
    mul_ln61_537_fu_16752_p2 = (!mul_ln61_537_fu_16752_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_537_fu_16752_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_538_fu_16767_p0() {
    mul_ln61_538_fu_16767_p0 = reg_3436.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_538_fu_16767_p2() {
    mul_ln61_538_fu_16767_p2 = (!mul_ln61_538_fu_16767_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_538_fu_16767_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_539_fu_16782_p0() {
    mul_ln61_539_fu_16782_p0 = reg_3446.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_539_fu_16782_p2() {
    mul_ln61_539_fu_16782_p2 = (!mul_ln61_539_fu_16782_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_539_fu_16782_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_53_fu_8291_p0() {
    mul_ln61_53_fu_8291_p0 = reg_3697.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_53_fu_8291_p2() {
    mul_ln61_53_fu_8291_p2 = (!mul_ln61_53_fu_8291_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_53_fu_8291_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_540_fu_16797_p0() {
    mul_ln61_540_fu_16797_p0 = reg_3456.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_540_fu_16797_p2() {
    mul_ln61_540_fu_16797_p2 = (!mul_ln61_540_fu_16797_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_540_fu_16797_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_541_fu_16812_p0() {
    mul_ln61_541_fu_16812_p0 = reg_3466.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_541_fu_16812_p2() {
    mul_ln61_541_fu_16812_p2 = (!mul_ln61_541_fu_16812_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_541_fu_16812_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_542_fu_16827_p0() {
    mul_ln61_542_fu_16827_p0 = reg_3476.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_542_fu_16827_p2() {
    mul_ln61_542_fu_16827_p2 = (!mul_ln61_542_fu_16827_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_542_fu_16827_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_543_fu_16842_p0() {
    mul_ln61_543_fu_16842_p0 = reg_3486.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_543_fu_16842_p2() {
    mul_ln61_543_fu_16842_p2 = (!mul_ln61_543_fu_16842_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_543_fu_16842_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_544_fu_16857_p0() {
    mul_ln61_544_fu_16857_p0 = reg_3496.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_544_fu_16857_p2() {
    mul_ln61_544_fu_16857_p2 = (!mul_ln61_544_fu_16857_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_544_fu_16857_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void pqcrystals_dilithium_20::thread_mul_ln61_545_fu_16872_p0() {
    mul_ln61_545_fu_16872_p0 = reg_3506.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_545_fu_16872_p2() {
    mul_ln61_545_fu_16872_p2 = (!mul_ln61_545_fu_16872_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_545_fu_16872_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_546_fu_16887_p0() {
    mul_ln61_546_fu_16887_p0 = reg_3516.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_546_fu_16887_p2() {
    mul_ln61_546_fu_16887_p2 = (!mul_ln61_546_fu_16887_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_546_fu_16887_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_547_fu_16347_p0() {
    mul_ln61_547_fu_16347_p0 = sext_ln61_1092_fu_16343_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_547_fu_16347_p2() {
    mul_ln61_547_fu_16347_p2 = (!mul_ln61_547_fu_16347_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_547_fu_16347_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_548_fu_16916_p0() {
    mul_ln61_548_fu_16916_p0 = sext_ln61_1094_fu_16912_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_548_fu_16916_p2() {
    mul_ln61_548_fu_16916_p2 = (!mul_ln61_548_fu_16916_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_548_fu_16916_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_549_fu_16931_p0() {
    mul_ln61_549_fu_16931_p0 = sext_ln61_1096_fu_16927_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_549_fu_16931_p2() {
    mul_ln61_549_fu_16931_p2 = (!mul_ln61_549_fu_16931_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_549_fu_16931_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_54_fu_8306_p0() {
    mul_ln61_54_fu_8306_p0 = reg_3707.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_54_fu_8306_p2() {
    mul_ln61_54_fu_8306_p2 = (!mul_ln61_54_fu_8306_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_54_fu_8306_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_550_fu_16960_p0() {
    mul_ln61_550_fu_16960_p0 = sext_ln61_1098_fu_16956_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_550_fu_16960_p2() {
    mul_ln61_550_fu_16960_p2 = (!mul_ln61_550_fu_16960_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_550_fu_16960_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_551_fu_16989_p0() {
    mul_ln61_551_fu_16989_p0 = sext_ln61_1100_fu_16985_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_551_fu_16989_p2() {
    mul_ln61_551_fu_16989_p2 = (!mul_ln61_551_fu_16989_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_551_fu_16989_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_552_fu_17018_p0() {
    mul_ln61_552_fu_17018_p0 = sext_ln61_1102_fu_17014_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_552_fu_17018_p2() {
    mul_ln61_552_fu_17018_p2 = (!mul_ln61_552_fu_17018_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln61_552_fu_17018_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void pqcrystals_dilithium_20::thread_mul_ln61_553_fu_17047_p0() {
    mul_ln61_553_fu_17047_p0 = sext_ln61_1104_fu_17043_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_553_fu_17047_p2() {
    mul_ln61_553_fu_17047_p2 = (!mul_ln61_553_fu_17047_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_553_fu_17047_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_554_fu_17076_p0() {
    mul_ln61_554_fu_17076_p0 = sext_ln61_1106_fu_17072_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_554_fu_17076_p2() {
    mul_ln61_554_fu_17076_p2 = (!mul_ln61_554_fu_17076_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_554_fu_17076_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_555_fu_16362_p0() {
    mul_ln61_555_fu_16362_p0 = sext_ln61_1108_fu_16358_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_555_fu_16362_p2() {
    mul_ln61_555_fu_16362_p2 = (!mul_ln61_555_fu_16362_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_555_fu_16362_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_556_fu_17119_p0() {
    mul_ln61_556_fu_17119_p0 = reg_3605.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_556_fu_17119_p2() {
    mul_ln61_556_fu_17119_p2 = (!mul_ln61_556_fu_17119_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_556_fu_17119_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_557_fu_17134_p0() {
    mul_ln61_557_fu_17134_p0 = reg_3613.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_557_fu_17134_p2() {
    mul_ln61_557_fu_17134_p2 = (!mul_ln61_557_fu_17134_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_557_fu_17134_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_558_fu_17149_p0() {
    mul_ln61_558_fu_17149_p0 = reg_3621.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_558_fu_17149_p2() {
    mul_ln61_558_fu_17149_p2 = (!mul_ln61_558_fu_17149_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_558_fu_17149_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_559_fu_17164_p0() {
    mul_ln61_559_fu_17164_p0 = reg_3629.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_559_fu_17164_p2() {
    mul_ln61_559_fu_17164_p2 = (!mul_ln61_559_fu_17164_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_559_fu_17164_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_55_fu_8321_p0() {
    mul_ln61_55_fu_8321_p0 = reg_3717.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_55_fu_8321_p2() {
    mul_ln61_55_fu_8321_p2 = (!mul_ln61_55_fu_8321_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_55_fu_8321_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_560_fu_17179_p0() {
    mul_ln61_560_fu_17179_p0 = reg_3637.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_560_fu_17179_p2() {
    mul_ln61_560_fu_17179_p2 = (!mul_ln61_560_fu_17179_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_560_fu_17179_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void pqcrystals_dilithium_20::thread_mul_ln61_561_fu_17194_p0() {
    mul_ln61_561_fu_17194_p0 = reg_3647.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_561_fu_17194_p2() {
    mul_ln61_561_fu_17194_p2 = (!mul_ln61_561_fu_17194_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_561_fu_17194_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_562_fu_17209_p0() {
    mul_ln61_562_fu_17209_p0 = reg_3657.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_562_fu_17209_p2() {
    mul_ln61_562_fu_17209_p2 = (!mul_ln61_562_fu_17209_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_562_fu_17209_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_563_fu_17224_p0() {
    mul_ln61_563_fu_17224_p0 = reg_3667.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_563_fu_17224_p2() {
    mul_ln61_563_fu_17224_p2 = (!mul_ln61_563_fu_17224_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_563_fu_17224_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_564_fu_17239_p0() {
    mul_ln61_564_fu_17239_p0 = reg_3677.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_564_fu_17239_p2() {
    mul_ln61_564_fu_17239_p2 = (!mul_ln61_564_fu_17239_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_564_fu_17239_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_565_fu_17254_p0() {
    mul_ln61_565_fu_17254_p0 = reg_3687.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_565_fu_17254_p2() {
    mul_ln61_565_fu_17254_p2 = (!mul_ln61_565_fu_17254_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_565_fu_17254_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_566_fu_17269_p0() {
    mul_ln61_566_fu_17269_p0 = reg_3697.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_566_fu_17269_p2() {
    mul_ln61_566_fu_17269_p2 = (!mul_ln61_566_fu_17269_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_566_fu_17269_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_567_fu_17284_p0() {
    mul_ln61_567_fu_17284_p0 = reg_3707.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_567_fu_17284_p2() {
    mul_ln61_567_fu_17284_p2 = (!mul_ln61_567_fu_17284_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_567_fu_17284_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_568_fu_17299_p0() {
    mul_ln61_568_fu_17299_p0 = reg_3717.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_568_fu_17299_p2() {
    mul_ln61_568_fu_17299_p2 = (!mul_ln61_568_fu_17299_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_568_fu_17299_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void pqcrystals_dilithium_20::thread_mul_ln61_569_fu_17314_p0() {
    mul_ln61_569_fu_17314_p0 = reg_3727.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_569_fu_17314_p2() {
    mul_ln61_569_fu_17314_p2 = (!mul_ln61_569_fu_17314_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_569_fu_17314_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_56_fu_8336_p0() {
    mul_ln61_56_fu_8336_p0 = reg_3727.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_56_fu_8336_p2() {
    mul_ln61_56_fu_8336_p2 = (!mul_ln61_56_fu_8336_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_56_fu_8336_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_570_fu_16377_p0() {
    mul_ln61_570_fu_16377_p0 = sext_ln61_1138_fu_16373_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_570_fu_16377_p2() {
    mul_ln61_570_fu_16377_p2 = (!mul_ln61_570_fu_16377_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_570_fu_16377_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_571_fu_17343_p0() {
    mul_ln61_571_fu_17343_p0 = sext_ln61_1140_fu_17339_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_571_fu_17343_p2() {
    mul_ln61_571_fu_17343_p2 = (!mul_ln61_571_fu_17343_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_571_fu_17343_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_572_fu_17358_p0() {
    mul_ln61_572_fu_17358_p0 = sext_ln61_1142_fu_17354_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_572_fu_17358_p2() {
    mul_ln61_572_fu_17358_p2 = (!mul_ln61_572_fu_17358_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_572_fu_17358_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_573_fu_17373_p0() {
    mul_ln61_573_fu_17373_p0 = sext_ln61_1144_fu_17369_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_573_fu_17373_p2() {
    mul_ln61_573_fu_17373_p2 = (!mul_ln61_573_fu_17373_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_573_fu_17373_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_574_fu_17388_p0() {
    mul_ln61_574_fu_17388_p0 = sext_ln61_1146_fu_17384_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_574_fu_17388_p2() {
    mul_ln61_574_fu_17388_p2 = (!mul_ln61_574_fu_17388_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_574_fu_17388_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_575_fu_17403_p0() {
    mul_ln61_575_fu_17403_p0 = sext_ln61_1148_fu_17399_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_575_fu_17403_p2() {
    mul_ln61_575_fu_17403_p2 = (!mul_ln61_575_fu_17403_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_575_fu_17403_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_576_fu_17418_p0() {
    mul_ln61_576_fu_17418_p0 = sext_ln61_1150_fu_17414_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_576_fu_17418_p2() {
    mul_ln61_576_fu_17418_p2 = (!mul_ln61_576_fu_17418_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_576_fu_17418_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void pqcrystals_dilithium_20::thread_mul_ln61_577_fu_17433_p0() {
    mul_ln61_577_fu_17433_p0 = sext_ln61_1152_fu_17429_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_577_fu_17433_p2() {
    mul_ln61_577_fu_17433_p2 = (!mul_ln61_577_fu_17433_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_577_fu_17433_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_578_fu_17448_p0() {
    mul_ln61_578_fu_17448_p0 = sext_ln61_1154_fu_17444_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_578_fu_17448_p2() {
    mul_ln61_578_fu_17448_p2 = (!mul_ln61_578_fu_17448_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_578_fu_17448_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_579_fu_17463_p0() {
    mul_ln61_579_fu_17463_p0 = sext_ln61_1156_fu_17459_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_579_fu_17463_p2() {
    mul_ln61_579_fu_17463_p2 = (!mul_ln61_579_fu_17463_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_579_fu_17463_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_57_fu_8351_p0() {
    mul_ln61_57_fu_8351_p0 = reg_3737.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_57_fu_8351_p2() {
    mul_ln61_57_fu_8351_p2 = (!mul_ln61_57_fu_8351_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_57_fu_8351_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_580_fu_17478_p0() {
    mul_ln61_580_fu_17478_p0 = sext_ln61_1158_fu_17474_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_580_fu_17478_p2() {
    mul_ln61_580_fu_17478_p2 = (!mul_ln61_580_fu_17478_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_580_fu_17478_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_581_fu_17507_p0() {
    mul_ln61_581_fu_17507_p0 = sext_ln61_1160_fu_17503_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_581_fu_17507_p2() {
    mul_ln61_581_fu_17507_p2 = (!mul_ln61_581_fu_17507_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_581_fu_17507_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_582_fu_17522_p0() {
    mul_ln61_582_fu_17522_p0 = reg_3864.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_582_fu_17522_p2() {
    mul_ln61_582_fu_17522_p2 = (!mul_ln61_582_fu_17522_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_582_fu_17522_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_583_fu_17537_p0() {
    mul_ln61_583_fu_17537_p0 = reg_3874.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_583_fu_17537_p2() {
    mul_ln61_583_fu_17537_p2 = (!mul_ln61_583_fu_17537_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_583_fu_17537_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_584_fu_17552_p0() {
    mul_ln61_584_fu_17552_p0 = reg_3884.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_584_fu_17552_p2() {
    mul_ln61_584_fu_17552_p2 = (!mul_ln61_584_fu_17552_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_584_fu_17552_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void pqcrystals_dilithium_20::thread_mul_ln61_585_fu_17567_p0() {
    mul_ln61_585_fu_17567_p0 = reg_3894.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_585_fu_17567_p2() {
    mul_ln61_585_fu_17567_p2 = (!mul_ln61_585_fu_17567_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_585_fu_17567_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_586_fu_17582_p0() {
    mul_ln61_586_fu_17582_p0 = reg_3904.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_586_fu_17582_p2() {
    mul_ln61_586_fu_17582_p2 = (!mul_ln61_586_fu_17582_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_586_fu_17582_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_587_fu_17597_p0() {
    mul_ln61_587_fu_17597_p0 = reg_3914.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_587_fu_17597_p2() {
    mul_ln61_587_fu_17597_p2 = (!mul_ln61_587_fu_17597_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_587_fu_17597_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_588_fu_17612_p0() {
    mul_ln61_588_fu_17612_p0 = reg_3935.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_588_fu_17612_p2() {
    mul_ln61_588_fu_17612_p2 = (!mul_ln61_588_fu_17612_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_588_fu_17612_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_589_fu_17627_p0() {
    mul_ln61_589_fu_17627_p0 = reg_3945.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_589_fu_17627_p2() {
    mul_ln61_589_fu_17627_p2 = (!mul_ln61_589_fu_17627_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_589_fu_17627_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_58_fu_8366_p0() {
    mul_ln61_58_fu_8366_p0 = reg_3747.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_58_fu_8366_p2() {
    mul_ln61_58_fu_8366_p2 = (!mul_ln61_58_fu_8366_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_58_fu_8366_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_590_fu_17642_p0() {
    mul_ln61_590_fu_17642_p0 = reg_3955.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_590_fu_17642_p2() {
    mul_ln61_590_fu_17642_p2 = (!mul_ln61_590_fu_17642_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_590_fu_17642_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_591_fu_17657_p0() {
    mul_ln61_591_fu_17657_p0 = reg_3965.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_591_fu_17657_p2() {
    mul_ln61_591_fu_17657_p2 = (!mul_ln61_591_fu_17657_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_591_fu_17657_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_592_fu_17672_p0() {
    mul_ln61_592_fu_17672_p0 = reg_3975.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_592_fu_17672_p2() {
    mul_ln61_592_fu_17672_p2 = (!mul_ln61_592_fu_17672_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_592_fu_17672_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_593_fu_17687_p0() {
    mul_ln61_593_fu_17687_p0 = reg_3985.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_593_fu_17687_p2() {
    mul_ln61_593_fu_17687_p2 = (!mul_ln61_593_fu_17687_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_593_fu_17687_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_594_fu_17702_p0() {
    mul_ln61_594_fu_17702_p0 = reg_3995.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_594_fu_17702_p2() {
    mul_ln61_594_fu_17702_p2 = (!mul_ln61_594_fu_17702_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_594_fu_17702_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_595_fu_17717_p0() {
    mul_ln61_595_fu_17717_p0 = reg_4005.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_595_fu_17717_p2() {
    mul_ln61_595_fu_17717_p2 = (!mul_ln61_595_fu_17717_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_595_fu_17717_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_596_fu_17732_p0() {
    mul_ln61_596_fu_17732_p0 = reg_4015.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_596_fu_17732_p2() {
    mul_ln61_596_fu_17732_p2 = (!mul_ln61_596_fu_17732_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_596_fu_17732_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_597_fu_16392_p0() {
    mul_ln61_597_fu_16392_p0 = sext_ln61_1192_fu_16388_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_597_fu_16392_p2() {
    mul_ln61_597_fu_16392_p2 = (!mul_ln61_597_fu_16392_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_597_fu_16392_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_598_fu_17761_p0() {
    mul_ln61_598_fu_17761_p0 = sext_ln61_1194_fu_17757_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_598_fu_17761_p2() {
    mul_ln61_598_fu_17761_p2 = (!mul_ln61_598_fu_17761_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_598_fu_17761_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_599_fu_17776_p0() {
    mul_ln61_599_fu_17776_p0 = reg_4055.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_599_fu_17776_p2() {
    mul_ln61_599_fu_17776_p2 = (!mul_ln61_599_fu_17776_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_599_fu_17776_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_59_fu_8381_p0() {
    mul_ln61_59_fu_8381_p0 = reg_3757.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_59_fu_8381_p2() {
    mul_ln61_59_fu_8381_p2 = (!mul_ln61_59_fu_8381_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_59_fu_8381_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_5_fu_7586_p0() {
    mul_ln61_5_fu_7586_p0 = reg_3236.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_5_fu_7586_p2() {
    mul_ln61_5_fu_7586_p2 = (!mul_ln61_5_fu_7586_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_5_fu_7586_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_600_fu_17791_p0() {
    mul_ln61_600_fu_17791_p0 = reg_4065.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_600_fu_17791_p2() {
    mul_ln61_600_fu_17791_p2 = (!mul_ln61_600_fu_17791_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_600_fu_17791_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_601_fu_17806_p0() {
    mul_ln61_601_fu_17806_p0 = sext_ln61_1200_fu_17802_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_601_fu_17806_p2() {
    mul_ln61_601_fu_17806_p2 = (!mul_ln61_601_fu_17806_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_601_fu_17806_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_602_fu_17821_p0() {
    mul_ln61_602_fu_17821_p0 = sext_ln61_1202_fu_17817_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_602_fu_17821_p2() {
    mul_ln61_602_fu_17821_p2 = (!mul_ln61_602_fu_17821_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_602_fu_17821_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_603_fu_17836_p0() {
    mul_ln61_603_fu_17836_p0 = sext_ln61_1204_fu_17832_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_603_fu_17836_p2() {
    mul_ln61_603_fu_17836_p2 = (!mul_ln61_603_fu_17836_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_603_fu_17836_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_604_fu_17851_p0() {
    mul_ln61_604_fu_17851_p0 = reg_4113.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_604_fu_17851_p2() {
    mul_ln61_604_fu_17851_p2 = (!mul_ln61_604_fu_17851_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_604_fu_17851_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_605_fu_17866_p0() {
    mul_ln61_605_fu_17866_p0 = reg_4123.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_605_fu_17866_p2() {
    mul_ln61_605_fu_17866_p2 = (!mul_ln61_605_fu_17866_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_605_fu_17866_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_606_fu_17881_p0() {
    mul_ln61_606_fu_17881_p0 = reg_4133.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_606_fu_17881_p2() {
    mul_ln61_606_fu_17881_p2 = (!mul_ln61_606_fu_17881_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_606_fu_17881_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_607_fu_17896_p0() {
    mul_ln61_607_fu_17896_p0 = reg_4143.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_607_fu_17896_p2() {
    mul_ln61_607_fu_17896_p2 = (!mul_ln61_607_fu_17896_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_607_fu_17896_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_608_fu_17925_p0() {
    mul_ln61_608_fu_17925_p0 = reg_4153.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_608_fu_17925_p2() {
    mul_ln61_608_fu_17925_p2 = (!mul_ln61_608_fu_17925_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_608_fu_17925_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void pqcrystals_dilithium_20::thread_mul_ln61_609_fu_17940_p0() {
    mul_ln61_609_fu_17940_p0 = reg_4163.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_609_fu_17940_p2() {
    mul_ln61_609_fu_17940_p2 = (!mul_ln61_609_fu_17940_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_609_fu_17940_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_60_fu_8396_p0() {
    mul_ln61_60_fu_8396_p0 = reg_3767.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_60_fu_8396_p2() {
    mul_ln61_60_fu_8396_p2 = (!mul_ln61_60_fu_8396_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_60_fu_8396_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_610_fu_17969_p0() {
    mul_ln61_610_fu_17969_p0 = reg_4173.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_610_fu_17969_p2() {
    mul_ln61_610_fu_17969_p2 = (!mul_ln61_610_fu_17969_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_610_fu_17969_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_611_fu_17984_p0() {
    mul_ln61_611_fu_17984_p0 = reg_4183.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_611_fu_17984_p2() {
    mul_ln61_611_fu_17984_p2 = (!mul_ln61_611_fu_17984_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_611_fu_17984_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_612_fu_18013_p0() {
    mul_ln61_612_fu_18013_p0 = reg_4193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_612_fu_18013_p2() {
    mul_ln61_612_fu_18013_p2 = (!mul_ln61_612_fu_18013_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_612_fu_18013_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_613_fu_18028_p0() {
    mul_ln61_613_fu_18028_p0 = reg_4203.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_613_fu_18028_p2() {
    mul_ln61_613_fu_18028_p2 = (!mul_ln61_613_fu_18028_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_613_fu_18028_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_614_fu_18043_p0() {
    mul_ln61_614_fu_18043_p0 = reg_4213.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_614_fu_18043_p2() {
    mul_ln61_614_fu_18043_p2 = (!mul_ln61_614_fu_18043_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_614_fu_18043_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_615_fu_18058_p0() {
    mul_ln61_615_fu_18058_p0 = sext_ln61_1228_fu_18054_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_615_fu_18058_p2() {
    mul_ln61_615_fu_18058_p2 = (!mul_ln61_615_fu_18058_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_615_fu_18058_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_616_fu_18073_p0() {
    mul_ln61_616_fu_18073_p0 = reg_4241.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_616_fu_18073_p2() {
    mul_ln61_616_fu_18073_p2 = (!mul_ln61_616_fu_18073_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_616_fu_18073_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void pqcrystals_dilithium_20::thread_mul_ln61_617_fu_18088_p0() {
    mul_ln61_617_fu_18088_p0 = reg_4251.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_617_fu_18088_p2() {
    mul_ln61_617_fu_18088_p2 = (!mul_ln61_617_fu_18088_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_617_fu_18088_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_618_fu_18103_p0() {
    mul_ln61_618_fu_18103_p0 = reg_4261.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_618_fu_18103_p2() {
    mul_ln61_618_fu_18103_p2 = (!mul_ln61_618_fu_18103_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_618_fu_18103_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_619_fu_18118_p0() {
    mul_ln61_619_fu_18118_p0 = sext_ln61_1236_fu_18114_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_619_fu_18118_p2() {
    mul_ln61_619_fu_18118_p2 = (!mul_ln61_619_fu_18118_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_619_fu_18118_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_61_fu_8411_p0() {
    mul_ln61_61_fu_8411_p0 = reg_3777.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_61_fu_8411_p2() {
    mul_ln61_61_fu_8411_p2 = (!mul_ln61_61_fu_8411_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_61_fu_8411_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_620_fu_18133_p0() {
    mul_ln61_620_fu_18133_p0 = reg_4285.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_620_fu_18133_p2() {
    mul_ln61_620_fu_18133_p2 = (!mul_ln61_620_fu_18133_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_620_fu_18133_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_621_fu_18148_p0() {
    mul_ln61_621_fu_18148_p0 = reg_4294.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_621_fu_18148_p2() {
    mul_ln61_621_fu_18148_p2 = (!mul_ln61_621_fu_18148_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_621_fu_18148_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_622_fu_18163_p0() {
    mul_ln61_622_fu_18163_p0 = reg_4304.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_622_fu_18163_p2() {
    mul_ln61_622_fu_18163_p2 = (!mul_ln61_622_fu_18163_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_622_fu_18163_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_623_fu_18178_p0() {
    mul_ln61_623_fu_18178_p0 = reg_4314.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_623_fu_18178_p2() {
    mul_ln61_623_fu_18178_p2 = (!mul_ln61_623_fu_18178_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_623_fu_18178_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_624_fu_18193_p0() {
    mul_ln61_624_fu_18193_p0 = reg_4324.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_624_fu_18193_p2() {
    mul_ln61_624_fu_18193_p2 = (!mul_ln61_624_fu_18193_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_624_fu_18193_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void pqcrystals_dilithium_20::thread_mul_ln61_625_fu_18208_p0() {
    mul_ln61_625_fu_18208_p0 = reg_4334.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_625_fu_18208_p2() {
    mul_ln61_625_fu_18208_p2 = (!mul_ln61_625_fu_18208_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_625_fu_18208_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_626_fu_18223_p0() {
    mul_ln61_626_fu_18223_p0 = reg_4344.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_626_fu_18223_p2() {
    mul_ln61_626_fu_18223_p2 = (!mul_ln61_626_fu_18223_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_626_fu_18223_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_627_fu_18238_p0() {
    mul_ln61_627_fu_18238_p0 = reg_4354.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_627_fu_18238_p2() {
    mul_ln61_627_fu_18238_p2 = (!mul_ln61_627_fu_18238_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_627_fu_18238_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_628_fu_18253_p0() {
    mul_ln61_628_fu_18253_p0 = reg_4364.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_628_fu_18253_p2() {
    mul_ln61_628_fu_18253_p2 = (!mul_ln61_628_fu_18253_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_628_fu_18253_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_629_fu_18268_p0() {
    mul_ln61_629_fu_18268_p0 = reg_4374.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_629_fu_18268_p2() {
    mul_ln61_629_fu_18268_p2 = (!mul_ln61_629_fu_18268_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_629_fu_18268_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_62_fu_7332_p0() {
    mul_ln61_62_fu_7332_p0 = sext_ln61_122_fu_7328_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_62_fu_7332_p2() {
    mul_ln61_62_fu_7332_p2 = (!mul_ln61_62_fu_7332_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_62_fu_7332_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_630_fu_18283_p0() {
    mul_ln61_630_fu_18283_p0 = reg_4384.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_630_fu_18283_p2() {
    mul_ln61_630_fu_18283_p2 = (!mul_ln61_630_fu_18283_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_630_fu_18283_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_631_fu_18298_p0() {
    mul_ln61_631_fu_18298_p0 = reg_4394.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_631_fu_18298_p2() {
    mul_ln61_631_fu_18298_p2 = (!mul_ln61_631_fu_18298_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_631_fu_18298_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_632_fu_18313_p0() {
    mul_ln61_632_fu_18313_p0 = reg_4404.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_632_fu_18313_p2() {
    mul_ln61_632_fu_18313_p2 = (!mul_ln61_632_fu_18313_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_632_fu_18313_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void pqcrystals_dilithium_20::thread_mul_ln61_633_fu_18328_p0() {
    mul_ln61_633_fu_18328_p0 = reg_4414.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_633_fu_18328_p2() {
    mul_ln61_633_fu_18328_p2 = (!mul_ln61_633_fu_18328_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_633_fu_18328_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_634_fu_18343_p0() {
    mul_ln61_634_fu_18343_p0 = reg_4423.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_634_fu_18343_p2() {
    mul_ln61_634_fu_18343_p2 = (!mul_ln61_634_fu_18343_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_634_fu_18343_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_635_fu_18358_p0() {
    mul_ln61_635_fu_18358_p0 = reg_4440.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_635_fu_18358_p2() {
    mul_ln61_635_fu_18358_p2 = (!mul_ln61_635_fu_18358_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_635_fu_18358_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_636_fu_18373_p0() {
    mul_ln61_636_fu_18373_p0 = reg_4448.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_636_fu_18373_p2() {
    mul_ln61_636_fu_18373_p2 = (!mul_ln61_636_fu_18373_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_636_fu_18373_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_637_fu_18387_p0() {
    mul_ln61_637_fu_18387_p0 = a_load_2051_reg_25342.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_637_fu_18387_p2() {
    mul_ln61_637_fu_18387_p2 = (!mul_ln61_637_fu_18387_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_637_fu_18387_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_638_fu_18413_p0() {
    mul_ln61_638_fu_18413_p0 = a_load_2053_reg_25353.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_638_fu_18413_p2() {
    mul_ln61_638_fu_18413_p2 = (!mul_ln61_638_fu_18413_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_638_fu_18413_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_639_fu_18439_p0() {
    mul_ln61_639_fu_18439_p0 = a_load_2055_reg_25364.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_639_fu_18439_p2() {
    mul_ln61_639_fu_18439_p2 = (!mul_ln61_639_fu_18439_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_639_fu_18439_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_63_fu_7347_p0() {
    mul_ln61_63_fu_7347_p0 = sext_ln61_124_fu_7343_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_63_fu_7347_p2() {
    mul_ln61_63_fu_7347_p2 = (!mul_ln61_63_fu_7347_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_63_fu_7347_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_640_fu_18466_p0() {
    mul_ln61_640_fu_18466_p0 = reg_3193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_640_fu_18466_p2() {
    mul_ln61_640_fu_18466_p2 = (!mul_ln61_640_fu_18466_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln61_640_fu_18466_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_641_fu_18481_p0() {
    mul_ln61_641_fu_18481_p0 = sext_ln61_1280_fu_18477_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_641_fu_18481_p2() {
    mul_ln61_641_fu_18481_p2 = (!mul_ln61_641_fu_18481_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_641_fu_18481_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void pqcrystals_dilithium_20::thread_mul_ln61_642_fu_18691_p0() {
    mul_ln61_642_fu_18691_p0 = reg_3193.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_642_fu_18691_p2() {
    mul_ln61_642_fu_18691_p2 = (!mul_ln61_642_fu_18691_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_642_fu_18691_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void pqcrystals_dilithium_20::thread_mul_ln61_643_fu_18706_p0() {
    mul_ln61_643_fu_18706_p0 = reg_3201.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_643_fu_18706_p2() {
    mul_ln61_643_fu_18706_p2 = (!mul_ln61_643_fu_18706_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_643_fu_18706_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void pqcrystals_dilithium_20::thread_mul_ln61_644_fu_18496_p0() {
    mul_ln61_644_fu_18496_p0 = sext_ln61_1286_fu_18492_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_644_fu_18496_p2() {
    mul_ln61_644_fu_18496_p2 = (!mul_ln61_644_fu_18496_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_644_fu_18496_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void pqcrystals_dilithium_20::thread_mul_ln61_645_fu_18511_p0() {
    mul_ln61_645_fu_18511_p0 = sext_ln61_1288_fu_18507_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_645_fu_18511_p2() {
    mul_ln61_645_fu_18511_p2 = (!mul_ln61_645_fu_18511_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln61_645_fu_18511_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void pqcrystals_dilithium_20::thread_mul_ln61_646_fu_18721_p0() {
    mul_ln61_646_fu_18721_p0 = reg_3209.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_646_fu_18721_p2() {
    mul_ln61_646_fu_18721_p2 = (!mul_ln61_646_fu_18721_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln61_646_fu_18721_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void pqcrystals_dilithium_20::thread_mul_ln61_647_fu_18526_p0() {
    mul_ln61_647_fu_18526_p0 = sext_ln61_1292_fu_18522_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_647_fu_18526_p2() {
    mul_ln61_647_fu_18526_p2 = (!mul_ln61_647_fu_18526_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln61_647_fu_18526_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void pqcrystals_dilithium_20::thread_mul_ln61_648_fu_18541_p0() {
    mul_ln61_648_fu_18541_p0 = sext_ln61_1294_fu_18537_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_648_fu_18541_p2() {
    mul_ln61_648_fu_18541_p2 = (!mul_ln61_648_fu_18541_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln61_648_fu_18541_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void pqcrystals_dilithium_20::thread_mul_ln61_649_fu_18556_p0() {
    mul_ln61_649_fu_18556_p0 = sext_ln61_1296_fu_18552_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_649_fu_18556_p2() {
    mul_ln61_649_fu_18556_p2 = (!mul_ln61_649_fu_18556_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_649_fu_18556_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_64_fu_8440_p0() {
    mul_ln61_64_fu_8440_p0 = reg_3805.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_64_fu_8440_p2() {
    mul_ln61_64_fu_8440_p2 = (!mul_ln61_64_fu_8440_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_64_fu_8440_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_650_fu_18736_p0() {
    mul_ln61_650_fu_18736_p0 = sext_ln61_1298_fu_18732_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_650_fu_18736_p2() {
    mul_ln61_650_fu_18736_p2 = (!mul_ln61_650_fu_18736_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_650_fu_18736_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_651_fu_18751_p0() {
    mul_ln61_651_fu_18751_p0 = sext_ln61_1300_fu_18747_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_651_fu_18751_p2() {
    mul_ln61_651_fu_18751_p2 = (!mul_ln61_651_fu_18751_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_651_fu_18751_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_652_fu_18766_p0() {
    mul_ln61_652_fu_18766_p0 = sext_ln61_1302_fu_18762_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_652_fu_18766_p2() {
    mul_ln61_652_fu_18766_p2 = (!mul_ln61_652_fu_18766_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_652_fu_18766_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void pqcrystals_dilithium_20::thread_mul_ln61_653_fu_18781_p0() {
    mul_ln61_653_fu_18781_p0 = sext_ln61_1304_fu_18777_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_653_fu_18781_p2() {
    mul_ln61_653_fu_18781_p2 = (!mul_ln61_653_fu_18781_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_653_fu_18781_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_654_fu_18796_p0() {
    mul_ln61_654_fu_18796_p0 = sext_ln61_1306_fu_18792_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_654_fu_18796_p2() {
    mul_ln61_654_fu_18796_p2 = (!mul_ln61_654_fu_18796_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_654_fu_18796_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_655_fu_18811_p0() {
    mul_ln61_655_fu_18811_p0 = sext_ln61_1308_fu_18807_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_655_fu_18811_p2() {
    mul_ln61_655_fu_18811_p2 = (!mul_ln61_655_fu_18811_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_655_fu_18811_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_656_fu_18826_p0() {
    mul_ln61_656_fu_18826_p0 = sext_ln61_1310_fu_18822_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_656_fu_18826_p2() {
    mul_ln61_656_fu_18826_p2 = (!mul_ln61_656_fu_18826_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_656_fu_18826_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void pqcrystals_dilithium_20::thread_mul_ln61_657_fu_18841_p0() {
    mul_ln61_657_fu_18841_p0 = sext_ln61_1312_fu_18837_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_657_fu_18841_p2() {
    mul_ln61_657_fu_18841_p2 = (!mul_ln61_657_fu_18841_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_657_fu_18841_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_658_fu_18856_p0() {
    mul_ln61_658_fu_18856_p0 = sext_ln61_1314_fu_18852_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_658_fu_18856_p2() {
    mul_ln61_658_fu_18856_p2 = (!mul_ln61_658_fu_18856_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_658_fu_18856_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_659_fu_18571_p0() {
    mul_ln61_659_fu_18571_p0 = sext_ln61_1316_fu_18567_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_659_fu_18571_p2() {
    mul_ln61_659_fu_18571_p2 = (!mul_ln61_659_fu_18571_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_659_fu_18571_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_65_fu_8455_p0() {
    mul_ln61_65_fu_8455_p0 = reg_3815.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_65_fu_8455_p2() {
    mul_ln61_65_fu_8455_p2 = (!mul_ln61_65_fu_8455_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_65_fu_8455_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_660_fu_18885_p0() {
    mul_ln61_660_fu_18885_p0 = reg_3316.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_660_fu_18885_p2() {
    mul_ln61_660_fu_18885_p2 = (!mul_ln61_660_fu_18885_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln61_660_fu_18885_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void pqcrystals_dilithium_20::thread_mul_ln61_661_fu_18900_p0() {
    mul_ln61_661_fu_18900_p0 = reg_3326.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_661_fu_18900_p2() {
    mul_ln61_661_fu_18900_p2 = (!mul_ln61_661_fu_18900_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_661_fu_18900_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_662_fu_18915_p0() {
    mul_ln61_662_fu_18915_p0 = reg_3336.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_662_fu_18915_p2() {
    mul_ln61_662_fu_18915_p2 = (!mul_ln61_662_fu_18915_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_662_fu_18915_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_663_fu_18930_p0() {
    mul_ln61_663_fu_18930_p0 = reg_3346.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_663_fu_18930_p2() {
    mul_ln61_663_fu_18930_p2 = (!mul_ln61_663_fu_18930_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_663_fu_18930_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_664_fu_18945_p0() {
    mul_ln61_664_fu_18945_p0 = reg_3356.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_664_fu_18945_p2() {
    mul_ln61_664_fu_18945_p2 = (!mul_ln61_664_fu_18945_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_664_fu_18945_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_665_fu_18960_p0() {
    mul_ln61_665_fu_18960_p0 = reg_3366.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_665_fu_18960_p2() {
    mul_ln61_665_fu_18960_p2 = (!mul_ln61_665_fu_18960_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_665_fu_18960_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_666_fu_18975_p0() {
    mul_ln61_666_fu_18975_p0 = reg_3376.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_666_fu_18975_p2() {
    mul_ln61_666_fu_18975_p2 = (!mul_ln61_666_fu_18975_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_666_fu_18975_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_667_fu_18990_p0() {
    mul_ln61_667_fu_18990_p0 = reg_3386.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_667_fu_18990_p2() {
    mul_ln61_667_fu_18990_p2 = (!mul_ln61_667_fu_18990_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_667_fu_18990_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_668_fu_19005_p0() {
    mul_ln61_668_fu_19005_p0 = reg_3396.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_668_fu_19005_p2() {
    mul_ln61_668_fu_19005_p2 = (!mul_ln61_668_fu_19005_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_668_fu_19005_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void pqcrystals_dilithium_20::thread_mul_ln61_669_fu_19020_p0() {
    mul_ln61_669_fu_19020_p0 = reg_3406.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_669_fu_19020_p2() {
    mul_ln61_669_fu_19020_p2 = (!mul_ln61_669_fu_19020_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_669_fu_19020_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void pqcrystals_dilithium_20::thread_mul_ln61_66_fu_8470_p0() {
    mul_ln61_66_fu_8470_p0 = reg_3825.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_66_fu_8470_p2() {
    mul_ln61_66_fu_8470_p2 = (!mul_ln61_66_fu_8470_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_66_fu_8470_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_670_fu_19035_p0() {
    mul_ln61_670_fu_19035_p0 = reg_3416.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_670_fu_19035_p2() {
    mul_ln61_670_fu_19035_p2 = (!mul_ln61_670_fu_19035_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_670_fu_19035_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void pqcrystals_dilithium_20::thread_mul_ln61_671_fu_19050_p0() {
    mul_ln61_671_fu_19050_p0 = reg_3426.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_671_fu_19050_p2() {
    mul_ln61_671_fu_19050_p2 = (!mul_ln61_671_fu_19050_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_671_fu_19050_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void pqcrystals_dilithium_20::thread_mul_ln61_672_fu_18586_p0() {
    mul_ln61_672_fu_18586_p0 = sext_ln61_1342_fu_18582_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_672_fu_18586_p2() {
    mul_ln61_672_fu_18586_p2 = (!mul_ln61_672_fu_18586_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_672_fu_18586_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void pqcrystals_dilithium_20::thread_mul_ln61_673_fu_19079_p0() {
    mul_ln61_673_fu_19079_p0 = sext_ln61_1344_fu_19075_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_673_fu_19079_p2() {
    mul_ln61_673_fu_19079_p2 = (!mul_ln61_673_fu_19079_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_673_fu_19079_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void pqcrystals_dilithium_20::thread_mul_ln61_674_fu_19094_p0() {
    mul_ln61_674_fu_19094_p0 = sext_ln61_1346_fu_19090_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_674_fu_19094_p2() {
    mul_ln61_674_fu_19094_p2 = (!mul_ln61_674_fu_19094_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_674_fu_19094_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void pqcrystals_dilithium_20::thread_mul_ln61_675_fu_18601_p0() {
    mul_ln61_675_fu_18601_p0 = sext_ln61_1348_fu_18597_p0.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_675_fu_18601_p2() {
    mul_ln61_675_fu_18601_p2 = (!mul_ln61_675_fu_18601_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_675_fu_18601_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void pqcrystals_dilithium_20::thread_mul_ln61_676_fu_19123_p0() {
    mul_ln61_676_fu_19123_p0 = reg_3466.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_676_fu_19123_p2() {
    mul_ln61_676_fu_19123_p2 = (!mul_ln61_676_fu_19123_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_676_fu_19123_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void pqcrystals_dilithium_20::thread_mul_ln61_677_fu_19138_p0() {
    mul_ln61_677_fu_19138_p0 = reg_3476.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_677_fu_19138_p2() {
    mul_ln61_677_fu_19138_p2 = (!mul_ln61_677_fu_19138_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_677_fu_19138_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_678_fu_19153_p0() {
    mul_ln61_678_fu_19153_p0 = reg_3486.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_678_fu_19153_p2() {
    mul_ln61_678_fu_19153_p2 = (!mul_ln61_678_fu_19153_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_678_fu_19153_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_679_fu_19168_p0() {
    mul_ln61_679_fu_19168_p0 = reg_3496.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_679_fu_19168_p2() {
    mul_ln61_679_fu_19168_p2 = (!mul_ln61_679_fu_19168_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_679_fu_19168_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_67_fu_8498_p0() {
    mul_ln61_67_fu_8498_p0 = reg_3835.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_67_fu_8498_p2() {
    mul_ln61_67_fu_8498_p2 = (!mul_ln61_67_fu_8498_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_67_fu_8498_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_680_fu_19183_p0() {
    mul_ln61_680_fu_19183_p0 = reg_3506.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_680_fu_19183_p2() {
    mul_ln61_680_fu_19183_p2 = (!mul_ln61_680_fu_19183_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_680_fu_19183_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void pqcrystals_dilithium_20::thread_mul_ln61_681_fu_19198_p0() {
    mul_ln61_681_fu_19198_p0 = reg_3516.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_681_fu_19198_p2() {
    mul_ln61_681_fu_19198_p2 = (!mul_ln61_681_fu_19198_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_681_fu_19198_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void pqcrystals_dilithium_20::thread_mul_ln61_682_fu_19213_p0() {
    mul_ln61_682_fu_19213_p0 = reg_3526.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_682_fu_19213_p2() {
    mul_ln61_682_fu_19213_p2 = (!mul_ln61_682_fu_19213_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_682_fu_19213_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void pqcrystals_dilithium_20::thread_mul_ln61_683_fu_19228_p0() {
    mul_ln61_683_fu_19228_p0 = reg_3536.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_683_fu_19228_p2() {
    mul_ln61_683_fu_19228_p2 = (!mul_ln61_683_fu_19228_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_683_fu_19228_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void pqcrystals_dilithium_20::thread_mul_ln61_684_fu_19243_p0() {
    mul_ln61_684_fu_19243_p0 = reg_3546.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_684_fu_19243_p2() {
    mul_ln61_684_fu_19243_p2 = (!mul_ln61_684_fu_19243_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_684_fu_19243_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void pqcrystals_dilithium_20::thread_mul_ln61_685_fu_19258_p0() {
    mul_ln61_685_fu_19258_p0 = reg_3556.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_685_fu_19258_p2() {
    mul_ln61_685_fu_19258_p2 = (!mul_ln61_685_fu_19258_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_685_fu_19258_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void pqcrystals_dilithium_20::thread_mul_ln61_686_fu_19273_p0() {
    mul_ln61_686_fu_19273_p0 = reg_3566.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_686_fu_19273_p2() {
    mul_ln61_686_fu_19273_p2 = (!mul_ln61_686_fu_19273_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_686_fu_19273_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void pqcrystals_dilithium_20::thread_mul_ln61_687_fu_19288_p0() {
    mul_ln61_687_fu_19288_p0 = reg_3576.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_687_fu_19288_p2() {
    mul_ln61_687_fu_19288_p2 = (!mul_ln61_687_fu_19288_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_687_fu_19288_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void pqcrystals_dilithium_20::thread_mul_ln61_688_fu_19303_p0() {
    mul_ln61_688_fu_19303_p0 = reg_3586.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_688_fu_19303_p2() {
    mul_ln61_688_fu_19303_p2 = (!mul_ln61_688_fu_19303_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_688_fu_19303_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void pqcrystals_dilithium_20::thread_mul_ln61_689_fu_19318_p0() {
    mul_ln61_689_fu_19318_p0 = reg_3596.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_689_fu_19318_p2() {
    mul_ln61_689_fu_19318_p2 = (!mul_ln61_689_fu_19318_p0.read().is_01() || !ap_const_lv54_360400.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln61_689_fu_19318_p0.read()) * sc_biguint<54>(ap_const_lv54_360400);
}

void pqcrystals_dilithium_20::thread_mul_ln61_68_fu_8513_p0() {
    mul_ln61_68_fu_8513_p0 = reg_3845.read();
}

void pqcrystals_dilithium_20::thread_mul_ln61_68_fu_8513_p2() {
    mul_ln61_68_fu_8513_p2 = (!mul_ln61_68_fu_8513_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln61_68_fu_8513_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void pqcrystals_dilithium_20::thread_mul_ln61_690_fu_19333_p0() {
    mul_ln61_690_fu_19333_p0 = reg_3605.read();
}

}

