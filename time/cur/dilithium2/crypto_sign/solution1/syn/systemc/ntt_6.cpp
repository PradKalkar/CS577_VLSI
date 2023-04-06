#include "ntt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ntt::thread_mul_ln59_326_fu_16877_p2() {
    mul_ln59_326_fu_16877_p2 = (!mul_ln59_326_fu_16877_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_326_fu_16877_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_327_fu_16891_p0() {
    mul_ln59_327_fu_16891_p0 = add_ln61_231_reg_28913.read();
}

void ntt::thread_mul_ln59_327_fu_16891_p2() {
    mul_ln59_327_fu_16891_p2 = (!mul_ln59_327_fu_16891_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_327_fu_16891_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_328_fu_16905_p0() {
    mul_ln59_328_fu_16905_p0 = add_ln61_232_reg_28918.read();
}

void ntt::thread_mul_ln59_328_fu_16905_p2() {
    mul_ln59_328_fu_16905_p2 = (!mul_ln59_328_fu_16905_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_328_fu_16905_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_329_fu_16919_p0() {
    mul_ln59_329_fu_16919_p0 = add_ln61_233_reg_28923.read();
}

void ntt::thread_mul_ln59_329_fu_16919_p2() {
    mul_ln59_329_fu_16919_p2 = (!mul_ln59_329_fu_16919_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_329_fu_16919_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_32_fu_11308_p0() {
    mul_ln59_32_fu_11308_p0 = reg_3248.read();
}

void ntt::thread_mul_ln59_32_fu_11308_p2() {
    mul_ln59_32_fu_11308_p2 = (!mul_ln59_32_fu_11308_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_32_fu_11308_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_330_fu_16947_p0() {
    mul_ln59_330_fu_16947_p0 = add_ln61_234_reg_28928.read();
}

void ntt::thread_mul_ln59_330_fu_16947_p2() {
    mul_ln59_330_fu_16947_p2 = (!mul_ln59_330_fu_16947_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_330_fu_16947_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_331_fu_16961_p0() {
    mul_ln59_331_fu_16961_p0 = add_ln61_235_reg_28933.read();
}

void ntt::thread_mul_ln59_331_fu_16961_p2() {
    mul_ln59_331_fu_16961_p2 = (!mul_ln59_331_fu_16961_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_331_fu_16961_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_332_fu_16975_p0() {
    mul_ln59_332_fu_16975_p0 = add_ln61_236_reg_28938.read();
}

void ntt::thread_mul_ln59_332_fu_16975_p2() {
    mul_ln59_332_fu_16975_p2 = (!mul_ln59_332_fu_16975_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_332_fu_16975_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_333_fu_16989_p0() {
    mul_ln59_333_fu_16989_p0 = add_ln61_237_reg_28943.read();
}

void ntt::thread_mul_ln59_333_fu_16989_p2() {
    mul_ln59_333_fu_16989_p2 = (!mul_ln59_333_fu_16989_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_333_fu_16989_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_334_fu_15069_p0() {
    mul_ln59_334_fu_15069_p0 = add_ln61_238_fu_15059_p2.read();
}

void ntt::thread_mul_ln59_334_fu_15069_p2() {
    mul_ln59_334_fu_15069_p2 = (!mul_ln59_334_fu_15069_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_334_fu_15069_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_335_fu_15127_p0() {
    mul_ln59_335_fu_15127_p0 = grp_fu_6088_p2.read();
}

void ntt::thread_mul_ln59_335_fu_15127_p2() {
    mul_ln59_335_fu_15127_p2 = (!mul_ln59_335_fu_15127_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_335_fu_15127_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_336_fu_17031_p0() {
    mul_ln59_336_fu_17031_p0 = add_ln61_240_reg_28948.read();
}

void ntt::thread_mul_ln59_336_fu_17031_p2() {
    mul_ln59_336_fu_17031_p2 = (!mul_ln59_336_fu_17031_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_336_fu_17031_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_337_fu_17045_p0() {
    mul_ln59_337_fu_17045_p0 = add_ln61_241_reg_28953.read();
}

void ntt::thread_mul_ln59_337_fu_17045_p2() {
    mul_ln59_337_fu_17045_p2 = (!mul_ln59_337_fu_17045_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_337_fu_17045_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_338_fu_17059_p0() {
    mul_ln59_338_fu_17059_p0 = add_ln61_242_reg_28958.read();
}

void ntt::thread_mul_ln59_338_fu_17059_p2() {
    mul_ln59_338_fu_17059_p2 = (!mul_ln59_338_fu_17059_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_338_fu_17059_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_339_fu_17086_p0() {
    mul_ln59_339_fu_17086_p0 = add_ln61_243_reg_28963.read();
}

void ntt::thread_mul_ln59_339_fu_17086_p2() {
    mul_ln59_339_fu_17086_p2 = (!mul_ln59_339_fu_17086_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_339_fu_17086_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_33_fu_8109_p0() {
    mul_ln59_33_fu_8109_p0 = sext_ln59_65_fu_8105_p0.read();
}

void ntt::thread_mul_ln59_33_fu_8109_p2() {
    mul_ln59_33_fu_8109_p2 = (!mul_ln59_33_fu_8109_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_33_fu_8109_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_340_fu_17100_p0() {
    mul_ln59_340_fu_17100_p0 = add_ln61_244_reg_28968.read();
}

void ntt::thread_mul_ln59_340_fu_17100_p2() {
    mul_ln59_340_fu_17100_p2 = (!mul_ln59_340_fu_17100_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_340_fu_17100_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_341_fu_17127_p0() {
    mul_ln59_341_fu_17127_p0 = add_ln61_245_reg_28973.read();
}

void ntt::thread_mul_ln59_341_fu_17127_p2() {
    mul_ln59_341_fu_17127_p2 = (!mul_ln59_341_fu_17127_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_341_fu_17127_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_342_fu_17141_p0() {
    mul_ln59_342_fu_17141_p0 = add_ln61_246_reg_28978.read();
}

void ntt::thread_mul_ln59_342_fu_17141_p2() {
    mul_ln59_342_fu_17141_p2 = (!mul_ln59_342_fu_17141_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_342_fu_17141_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_343_fu_17183_p0() {
    mul_ln59_343_fu_17183_p0 = add_ln61_247_reg_28983.read();
}

void ntt::thread_mul_ln59_343_fu_17183_p2() {
    mul_ln59_343_fu_17183_p2 = (!mul_ln59_343_fu_17183_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_343_fu_17183_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_344_fu_17197_p0() {
    mul_ln59_344_fu_17197_p0 = add_ln61_248_reg_28988.read();
}

void ntt::thread_mul_ln59_344_fu_17197_p2() {
    mul_ln59_344_fu_17197_p2 = (!mul_ln59_344_fu_17197_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_344_fu_17197_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_345_fu_17224_p0() {
    mul_ln59_345_fu_17224_p0 = add_ln61_249_reg_28993.read();
}

void ntt::thread_mul_ln59_345_fu_17224_p2() {
    mul_ln59_345_fu_17224_p2 = (!mul_ln59_345_fu_17224_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_345_fu_17224_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_346_fu_17238_p0() {
    mul_ln59_346_fu_17238_p0 = add_ln61_250_reg_28998.read();
}

void ntt::thread_mul_ln59_346_fu_17238_p2() {
    mul_ln59_346_fu_17238_p2 = (!mul_ln59_346_fu_17238_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_346_fu_17238_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_347_fu_17266_p0() {
    mul_ln59_347_fu_17266_p0 = reg_7092.read();
}

void ntt::thread_mul_ln59_347_fu_17266_p2() {
    mul_ln59_347_fu_17266_p2 = (!mul_ln59_347_fu_17266_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_347_fu_17266_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_348_fu_17280_p0() {
    mul_ln59_348_fu_17280_p0 = add_ln61_252_reg_29003.read();
}

void ntt::thread_mul_ln59_348_fu_17280_p2() {
    mul_ln59_348_fu_17280_p2 = (!mul_ln59_348_fu_17280_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_348_fu_17280_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_349_fu_17308_p0() {
    mul_ln59_349_fu_17308_p0 = reg_7096.read();
}

void ntt::thread_mul_ln59_349_fu_17308_p2() {
    mul_ln59_349_fu_17308_p2 = (!mul_ln59_349_fu_17308_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_349_fu_17308_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_34_fu_8152_p0() {
    mul_ln59_34_fu_8152_p0 = sext_ln59_67_fu_8148_p0.read();
}

void ntt::thread_mul_ln59_34_fu_8152_p2() {
    mul_ln59_34_fu_8152_p2 = (!mul_ln59_34_fu_8152_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_34_fu_8152_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_350_fu_17323_p0() {
    mul_ln59_350_fu_17323_p0 = reg_7104.read();
}

void ntt::thread_mul_ln59_350_fu_17323_p2() {
    mul_ln59_350_fu_17323_p2 = (!mul_ln59_350_fu_17323_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_350_fu_17323_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_351_fu_17350_p0() {
    mul_ln59_351_fu_17350_p0 = add_ln61_255_reg_29008.read();
}

void ntt::thread_mul_ln59_351_fu_17350_p2() {
    mul_ln59_351_fu_17350_p2 = (!mul_ln59_351_fu_17350_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_351_fu_17350_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_352_fu_17364_p0() {
    mul_ln59_352_fu_17364_p0 = add_ln61_256_reg_29013.read();
}

void ntt::thread_mul_ln59_352_fu_17364_p2() {
    mul_ln59_352_fu_17364_p2 = (!mul_ln59_352_fu_17364_p0.read().is_01() || !ap_const_lv52_FFFFFFFF2A128.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_352_fu_17364_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF2A128);
}

void ntt::thread_mul_ln59_353_fu_17392_p0() {
    mul_ln59_353_fu_17392_p0 = reg_3585.read();
}

void ntt::thread_mul_ln59_353_fu_17392_p2() {
    mul_ln59_353_fu_17392_p2 = (!mul_ln59_353_fu_17392_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_353_fu_17392_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_354_fu_17407_p0() {
    mul_ln59_354_fu_17407_p0 = reg_3593.read();
}

void ntt::thread_mul_ln59_354_fu_17407_p2() {
    mul_ln59_354_fu_17407_p2 = (!mul_ln59_354_fu_17407_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_354_fu_17407_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_355_fu_17422_p0() {
    mul_ln59_355_fu_17422_p0 = reg_3602.read();
}

void ntt::thread_mul_ln59_355_fu_17422_p2() {
    mul_ln59_355_fu_17422_p2 = (!mul_ln59_355_fu_17422_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_355_fu_17422_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_356_fu_15505_p0() {
    mul_ln59_356_fu_15505_p0 = sext_ln59_711_fu_15501_p0.read();
}

void ntt::thread_mul_ln59_356_fu_15505_p2() {
    mul_ln59_356_fu_15505_p2 = (!mul_ln59_356_fu_15505_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_356_fu_15505_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_357_fu_15520_p0() {
    mul_ln59_357_fu_15520_p0 = sext_ln59_713_fu_15516_p0.read();
}

void ntt::thread_mul_ln59_357_fu_15520_p2() {
    mul_ln59_357_fu_15520_p2 = (!mul_ln59_357_fu_15520_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_357_fu_15520_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_358_fu_15535_p0() {
    mul_ln59_358_fu_15535_p0 = sext_ln59_715_fu_15531_p0.read();
}

void ntt::thread_mul_ln59_358_fu_15535_p2() {
    mul_ln59_358_fu_15535_p2 = (!mul_ln59_358_fu_15535_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_358_fu_15535_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_359_fu_15550_p0() {
    mul_ln59_359_fu_15550_p0 = sext_ln59_717_fu_15546_p0.read();
}

void ntt::thread_mul_ln59_359_fu_15550_p2() {
    mul_ln59_359_fu_15550_p2 = (!mul_ln59_359_fu_15550_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_359_fu_15550_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_35_fu_11351_p0() {
    mul_ln59_35_fu_11351_p0 = reg_3276.read();
}

void ntt::thread_mul_ln59_35_fu_11351_p2() {
    mul_ln59_35_fu_11351_p2 = (!mul_ln59_35_fu_11351_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_35_fu_11351_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_360_fu_15565_p0() {
    mul_ln59_360_fu_15565_p0 = sext_ln59_719_fu_15561_p0.read();
}

void ntt::thread_mul_ln59_360_fu_15565_p2() {
    mul_ln59_360_fu_15565_p2 = (!mul_ln59_360_fu_15565_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_360_fu_15565_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_361_fu_15580_p0() {
    mul_ln59_361_fu_15580_p0 = sext_ln59_721_fu_15576_p0.read();
}

void ntt::thread_mul_ln59_361_fu_15580_p2() {
    mul_ln59_361_fu_15580_p2 = (!mul_ln59_361_fu_15580_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_361_fu_15580_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_362_fu_17521_p0() {
    mul_ln59_362_fu_17521_p0 = reg_3641.read();
}

void ntt::thread_mul_ln59_362_fu_17521_p2() {
    mul_ln59_362_fu_17521_p2 = (!mul_ln59_362_fu_17521_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_362_fu_17521_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_363_fu_17536_p0() {
    mul_ln59_363_fu_17536_p0 = reg_3651.read();
}

void ntt::thread_mul_ln59_363_fu_17536_p2() {
    mul_ln59_363_fu_17536_p2 = (!mul_ln59_363_fu_17536_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_363_fu_17536_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_364_fu_17551_p0() {
    mul_ln59_364_fu_17551_p0 = reg_3661.read();
}

void ntt::thread_mul_ln59_364_fu_17551_p2() {
    mul_ln59_364_fu_17551_p2 = (!mul_ln59_364_fu_17551_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_364_fu_17551_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_365_fu_17566_p0() {
    mul_ln59_365_fu_17566_p0 = sext_ln59_729_fu_17562_p0.read();
}

void ntt::thread_mul_ln59_365_fu_17566_p2() {
    mul_ln59_365_fu_17566_p2 = (!mul_ln59_365_fu_17566_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_365_fu_17566_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_366_fu_17581_p0() {
    mul_ln59_366_fu_17581_p0 = sext_ln59_731_fu_17577_p0.read();
}

void ntt::thread_mul_ln59_366_fu_17581_p2() {
    mul_ln59_366_fu_17581_p2 = (!mul_ln59_366_fu_17581_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_366_fu_17581_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_367_fu_17596_p0() {
    mul_ln59_367_fu_17596_p0 = sext_ln59_733_fu_17592_p0.read();
}

void ntt::thread_mul_ln59_367_fu_17596_p2() {
    mul_ln59_367_fu_17596_p2 = (!mul_ln59_367_fu_17596_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_367_fu_17596_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_368_fu_17611_p0() {
    mul_ln59_368_fu_17611_p0 = sext_ln59_735_fu_17607_p0.read();
}

void ntt::thread_mul_ln59_368_fu_17611_p2() {
    mul_ln59_368_fu_17611_p2 = (!mul_ln59_368_fu_17611_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_368_fu_17611_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_369_fu_17626_p0() {
    mul_ln59_369_fu_17626_p0 = sext_ln59_737_fu_17622_p0.read();
}

void ntt::thread_mul_ln59_369_fu_17626_p2() {
    mul_ln59_369_fu_17626_p2 = (!mul_ln59_369_fu_17626_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_369_fu_17626_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_36_fu_11366_p0() {
    mul_ln59_36_fu_11366_p0 = reg_3286.read();
}

void ntt::thread_mul_ln59_36_fu_11366_p2() {
    mul_ln59_36_fu_11366_p2 = (!mul_ln59_36_fu_11366_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_36_fu_11366_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_370_fu_17641_p0() {
    mul_ln59_370_fu_17641_p0 = sext_ln59_739_fu_17637_p0.read();
}

void ntt::thread_mul_ln59_370_fu_17641_p2() {
    mul_ln59_370_fu_17641_p2 = (!mul_ln59_370_fu_17641_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_370_fu_17641_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_371_fu_17669_p0() {
    mul_ln59_371_fu_17669_p0 = sext_ln59_741_fu_17665_p0.read();
}

void ntt::thread_mul_ln59_371_fu_17669_p2() {
    mul_ln59_371_fu_17669_p2 = (!mul_ln59_371_fu_17669_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_371_fu_17669_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_372_fu_17684_p0() {
    mul_ln59_372_fu_17684_p0 = sext_ln59_743_fu_17680_p0.read();
}

void ntt::thread_mul_ln59_372_fu_17684_p2() {
    mul_ln59_372_fu_17684_p2 = (!mul_ln59_372_fu_17684_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_372_fu_17684_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_373_fu_17712_p0() {
    mul_ln59_373_fu_17712_p0 = sext_ln59_745_fu_17708_p0.read();
}

void ntt::thread_mul_ln59_373_fu_17712_p2() {
    mul_ln59_373_fu_17712_p2 = (!mul_ln59_373_fu_17712_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_373_fu_17712_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_374_fu_17727_p0() {
    mul_ln59_374_fu_17727_p0 = sext_ln59_747_fu_17723_p0.read();
}

void ntt::thread_mul_ln59_374_fu_17727_p2() {
    mul_ln59_374_fu_17727_p2 = (!mul_ln59_374_fu_17727_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_374_fu_17727_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_375_fu_17755_p0() {
    mul_ln59_375_fu_17755_p0 = sext_ln59_749_fu_17751_p0.read();
}

void ntt::thread_mul_ln59_375_fu_17755_p2() {
    mul_ln59_375_fu_17755_p2 = (!mul_ln59_375_fu_17755_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_375_fu_17755_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_376_fu_17770_p0() {
    mul_ln59_376_fu_17770_p0 = sext_ln59_751_fu_17766_p0.read();
}

void ntt::thread_mul_ln59_376_fu_17770_p2() {
    mul_ln59_376_fu_17770_p2 = (!mul_ln59_376_fu_17770_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_376_fu_17770_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_377_fu_17813_p0() {
    mul_ln59_377_fu_17813_p0 = sext_ln59_753_fu_17809_p0.read();
}

void ntt::thread_mul_ln59_377_fu_17813_p2() {
    mul_ln59_377_fu_17813_p2 = (!mul_ln59_377_fu_17813_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_377_fu_17813_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_378_fu_17828_p0() {
    mul_ln59_378_fu_17828_p0 = sext_ln59_755_fu_17824_p0.read();
}

void ntt::thread_mul_ln59_378_fu_17828_p2() {
    mul_ln59_378_fu_17828_p2 = (!mul_ln59_378_fu_17828_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_378_fu_17828_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_379_fu_15595_p0() {
    mul_ln59_379_fu_15595_p0 = sext_ln59_757_fu_15591_p0.read();
}

void ntt::thread_mul_ln59_379_fu_15595_p2() {
    mul_ln59_379_fu_15595_p2 = (!mul_ln59_379_fu_15595_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_379_fu_15595_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_37_fu_11381_p0() {
    mul_ln59_37_fu_11381_p0 = reg_3296.read();
}

void ntt::thread_mul_ln59_37_fu_11381_p2() {
    mul_ln59_37_fu_11381_p2 = (!mul_ln59_37_fu_11381_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_37_fu_11381_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_380_fu_17869_p0() {
    mul_ln59_380_fu_17869_p0 = sext_ln59_759_fu_17865_p0.read();
}

void ntt::thread_mul_ln59_380_fu_17869_p2() {
    mul_ln59_380_fu_17869_p2 = (!mul_ln59_380_fu_17869_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_380_fu_17869_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_381_fu_17899_p0() {
    mul_ln59_381_fu_17899_p0 = sext_ln59_761_fu_17895_p0.read();
}

void ntt::thread_mul_ln59_381_fu_17899_p2() {
    mul_ln59_381_fu_17899_p2 = (!mul_ln59_381_fu_17899_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_381_fu_17899_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_382_fu_17914_p0() {
    mul_ln59_382_fu_17914_p0 = sext_ln59_763_fu_17910_p0.read();
}

void ntt::thread_mul_ln59_382_fu_17914_p2() {
    mul_ln59_382_fu_17914_p2 = (!mul_ln59_382_fu_17914_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_382_fu_17914_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_383_fu_17942_p0() {
    mul_ln59_383_fu_17942_p0 = sext_ln59_765_fu_17938_p0.read();
}

void ntt::thread_mul_ln59_383_fu_17942_p2() {
    mul_ln59_383_fu_17942_p2 = (!mul_ln59_383_fu_17942_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_383_fu_17942_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_384_fu_17957_p0() {
    mul_ln59_384_fu_17957_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_384_fu_17957_p2() {
    mul_ln59_384_fu_17957_p2 = (!mul_ln59_384_fu_17957_p0.read().is_01() || !ap_const_lv51_71E24.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_384_fu_17957_p0.read()) * sc_biguint<51>(ap_const_lv51_71E24);
}

void ntt::thread_mul_ln59_385_fu_18030_p0() {
    mul_ln59_385_fu_18030_p0 = add_ln61_273_reg_29018.read();
}

void ntt::thread_mul_ln59_385_fu_18030_p2() {
    mul_ln59_385_fu_18030_p2 = (!mul_ln59_385_fu_18030_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_385_fu_18030_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_386_fu_18044_p0() {
    mul_ln59_386_fu_18044_p0 = add_ln61_274_reg_29023.read();
}

void ntt::thread_mul_ln59_386_fu_18044_p2() {
    mul_ln59_386_fu_18044_p2 = (!mul_ln59_386_fu_18044_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_386_fu_18044_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_387_fu_18058_p0() {
    mul_ln59_387_fu_18058_p0 = add_ln61_275_reg_29028.read();
}

void ntt::thread_mul_ln59_387_fu_18058_p2() {
    mul_ln59_387_fu_18058_p2 = (!mul_ln59_387_fu_18058_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_387_fu_18058_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_388_fu_18072_p0() {
    mul_ln59_388_fu_18072_p0 = add_ln61_276_reg_29033.read();
}

void ntt::thread_mul_ln59_388_fu_18072_p2() {
    mul_ln59_388_fu_18072_p2 = (!mul_ln59_388_fu_18072_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_388_fu_18072_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_389_fu_18086_p0() {
    mul_ln59_389_fu_18086_p0 = add_ln61_277_reg_29038.read();
}

void ntt::thread_mul_ln59_389_fu_18086_p2() {
    mul_ln59_389_fu_18086_p2 = (!mul_ln59_389_fu_18086_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_389_fu_18086_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_38_fu_11396_p0() {
    mul_ln59_38_fu_11396_p0 = reg_3306.read();
}

void ntt::thread_mul_ln59_38_fu_11396_p2() {
    mul_ln59_38_fu_11396_p2 = (!mul_ln59_38_fu_11396_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_38_fu_11396_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_390_fu_18100_p0() {
    mul_ln59_390_fu_18100_p0 = add_ln61_278_reg_29043.read();
}

void ntt::thread_mul_ln59_390_fu_18100_p2() {
    mul_ln59_390_fu_18100_p2 = (!mul_ln59_390_fu_18100_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_390_fu_18100_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_391_fu_18114_p0() {
    mul_ln59_391_fu_18114_p0 = add_ln61_279_reg_29048.read();
}

void ntt::thread_mul_ln59_391_fu_18114_p2() {
    mul_ln59_391_fu_18114_p2 = (!mul_ln59_391_fu_18114_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_391_fu_18114_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_392_fu_18128_p0() {
    mul_ln59_392_fu_18128_p0 = add_ln61_280_reg_29053.read();
}

void ntt::thread_mul_ln59_392_fu_18128_p2() {
    mul_ln59_392_fu_18128_p2 = (!mul_ln59_392_fu_18128_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_392_fu_18128_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_393_fu_18142_p0() {
    mul_ln59_393_fu_18142_p0 = add_ln61_281_reg_29058.read();
}

void ntt::thread_mul_ln59_393_fu_18142_p2() {
    mul_ln59_393_fu_18142_p2 = (!mul_ln59_393_fu_18142_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_393_fu_18142_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_394_fu_16039_p0() {
    mul_ln59_394_fu_16039_p0 = add_ln61_282_fu_16029_p2.read();
}

void ntt::thread_mul_ln59_394_fu_16039_p2() {
    mul_ln59_394_fu_16039_p2 = (!mul_ln59_394_fu_16039_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_394_fu_16039_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_395_fu_18170_p0() {
    mul_ln59_395_fu_18170_p0 = add_ln61_283_reg_29063.read();
}

void ntt::thread_mul_ln59_395_fu_18170_p2() {
    mul_ln59_395_fu_18170_p2 = (!mul_ln59_395_fu_18170_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_395_fu_18170_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_396_fu_16095_p0() {
    mul_ln59_396_fu_16095_p0 = add_ln61_284_fu_16085_p2.read();
}

void ntt::thread_mul_ln59_396_fu_16095_p2() {
    mul_ln59_396_fu_16095_p2 = (!mul_ln59_396_fu_16095_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_396_fu_16095_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_397_fu_18198_p0() {
    mul_ln59_397_fu_18198_p0 = add_ln61_285_reg_29068.read();
}

void ntt::thread_mul_ln59_397_fu_18198_p2() {
    mul_ln59_397_fu_18198_p2 = (!mul_ln59_397_fu_18198_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_397_fu_18198_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_398_fu_18212_p0() {
    mul_ln59_398_fu_18212_p0 = add_ln61_286_reg_29073.read();
}

void ntt::thread_mul_ln59_398_fu_18212_p2() {
    mul_ln59_398_fu_18212_p2 = (!mul_ln59_398_fu_18212_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_398_fu_18212_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_399_fu_18226_p0() {
    mul_ln59_399_fu_18226_p0 = add_ln61_287_reg_29078.read();
}

void ntt::thread_mul_ln59_399_fu_18226_p2() {
    mul_ln59_399_fu_18226_p2 = (!mul_ln59_399_fu_18226_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_399_fu_18226_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_39_fu_11411_p0() {
    mul_ln59_39_fu_11411_p0 = reg_3316.read();
}

void ntt::thread_mul_ln59_39_fu_11411_p2() {
    mul_ln59_39_fu_11411_p2 = (!mul_ln59_39_fu_11411_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_39_fu_11411_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_3_fu_10891_p0() {
    mul_ln59_3_fu_10891_p0 = reg_2975.read();
}

void ntt::thread_mul_ln59_3_fu_10891_p2() {
    mul_ln59_3_fu_10891_p2 = (!mul_ln59_3_fu_10891_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_3_fu_10891_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_400_fu_18240_p0() {
    mul_ln59_400_fu_18240_p0 = add_ln61_288_reg_29083.read();
}

void ntt::thread_mul_ln59_400_fu_18240_p2() {
    mul_ln59_400_fu_18240_p2 = (!mul_ln59_400_fu_18240_p0.read().is_01() || !ap_const_lv53_1BDE2B.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_400_fu_18240_p0.read()) * sc_biguint<53>(ap_const_lv53_1BDE2B);
}

void ntt::thread_mul_ln59_401_fu_18255_p0() {
    mul_ln59_401_fu_18255_p0 = sext_ln59_801_fu_18251_p0.read();
}

void ntt::thread_mul_ln59_401_fu_18255_p2() {
    mul_ln59_401_fu_18255_p2 = (!mul_ln59_401_fu_18255_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_401_fu_18255_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_402_fu_18270_p0() {
    mul_ln59_402_fu_18270_p0 = sext_ln59_803_fu_18266_p0.read();
}

void ntt::thread_mul_ln59_402_fu_18270_p2() {
    mul_ln59_402_fu_18270_p2 = (!mul_ln59_402_fu_18270_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_402_fu_18270_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_403_fu_18285_p0() {
    mul_ln59_403_fu_18285_p0 = sext_ln59_805_fu_18281_p0.read();
}

void ntt::thread_mul_ln59_403_fu_18285_p2() {
    mul_ln59_403_fu_18285_p2 = (!mul_ln59_403_fu_18285_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_403_fu_18285_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_404_fu_18300_p0() {
    mul_ln59_404_fu_18300_p0 = sext_ln59_807_fu_18296_p0.read();
}

void ntt::thread_mul_ln59_404_fu_18300_p2() {
    mul_ln59_404_fu_18300_p2 = (!mul_ln59_404_fu_18300_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_404_fu_18300_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_405_fu_18315_p0() {
    mul_ln59_405_fu_18315_p0 = sext_ln59_809_fu_18311_p0.read();
}

void ntt::thread_mul_ln59_405_fu_18315_p2() {
    mul_ln59_405_fu_18315_p2 = (!mul_ln59_405_fu_18315_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_405_fu_18315_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_406_fu_18330_p0() {
    mul_ln59_406_fu_18330_p0 = sext_ln59_811_fu_18326_p0.read();
}

void ntt::thread_mul_ln59_406_fu_18330_p2() {
    mul_ln59_406_fu_18330_p2 = (!mul_ln59_406_fu_18330_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_406_fu_18330_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_407_fu_18345_p0() {
    mul_ln59_407_fu_18345_p0 = sext_ln59_813_fu_18341_p0.read();
}

void ntt::thread_mul_ln59_407_fu_18345_p2() {
    mul_ln59_407_fu_18345_p2 = (!mul_ln59_407_fu_18345_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_407_fu_18345_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_408_fu_18360_p0() {
    mul_ln59_408_fu_18360_p0 = sext_ln59_815_fu_18356_p0.read();
}

void ntt::thread_mul_ln59_408_fu_18360_p2() {
    mul_ln59_408_fu_18360_p2 = (!mul_ln59_408_fu_18360_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_408_fu_18360_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_409_fu_18375_p0() {
    mul_ln59_409_fu_18375_p0 = sext_ln59_817_fu_18371_p0.read();
}

void ntt::thread_mul_ln59_409_fu_18375_p2() {
    mul_ln59_409_fu_18375_p2 = (!mul_ln59_409_fu_18375_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_409_fu_18375_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_40_fu_11426_p0() {
    mul_ln59_40_fu_11426_p0 = reg_3326.read();
}

void ntt::thread_mul_ln59_40_fu_11426_p2() {
    mul_ln59_40_fu_11426_p2 = (!mul_ln59_40_fu_11426_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_40_fu_11426_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_410_fu_18390_p0() {
    mul_ln59_410_fu_18390_p0 = sext_ln59_819_fu_18386_p0.read();
}

void ntt::thread_mul_ln59_410_fu_18390_p2() {
    mul_ln59_410_fu_18390_p2 = (!mul_ln59_410_fu_18390_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_410_fu_18390_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_411_fu_18405_p0() {
    mul_ln59_411_fu_18405_p0 = sext_ln59_821_fu_18401_p0.read();
}

void ntt::thread_mul_ln59_411_fu_18405_p2() {
    mul_ln59_411_fu_18405_p2 = (!mul_ln59_411_fu_18405_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_411_fu_18405_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_412_fu_18420_p0() {
    mul_ln59_412_fu_18420_p0 = sext_ln59_823_fu_18416_p0.read();
}

void ntt::thread_mul_ln59_412_fu_18420_p2() {
    mul_ln59_412_fu_18420_p2 = (!mul_ln59_412_fu_18420_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_412_fu_18420_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_413_fu_18435_p0() {
    mul_ln59_413_fu_18435_p0 = sext_ln59_825_fu_18431_p0.read();
}

void ntt::thread_mul_ln59_413_fu_18435_p2() {
    mul_ln59_413_fu_18435_p2 = (!mul_ln59_413_fu_18435_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_413_fu_18435_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_414_fu_18450_p0() {
    mul_ln59_414_fu_18450_p0 = sext_ln59_827_fu_18446_p0.read();
}

void ntt::thread_mul_ln59_414_fu_18450_p2() {
    mul_ln59_414_fu_18450_p2 = (!mul_ln59_414_fu_18450_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_414_fu_18450_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_415_fu_18465_p0() {
    mul_ln59_415_fu_18465_p0 = sext_ln59_829_fu_18461_p0.read();
}

void ntt::thread_mul_ln59_415_fu_18465_p2() {
    mul_ln59_415_fu_18465_p2 = (!mul_ln59_415_fu_18465_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_415_fu_18465_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_416_fu_18480_p0() {
    mul_ln59_416_fu_18480_p0 = reg_3179.read();
}

void ntt::thread_mul_ln59_416_fu_18480_p2() {
    mul_ln59_416_fu_18480_p2 = (!mul_ln59_416_fu_18480_p0.read().is_01() || !ap_const_lv54_23E92B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_416_fu_18480_p0.read()) * sc_biguint<54>(ap_const_lv54_23E92B);
}

void ntt::thread_mul_ln59_417_fu_18495_p0() {
    mul_ln59_417_fu_18495_p0 = reg_7100.read();
}

void ntt::thread_mul_ln59_417_fu_18495_p2() {
    mul_ln59_417_fu_18495_p2 = (!mul_ln59_417_fu_18495_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_417_fu_18495_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_418_fu_18509_p0() {
    mul_ln59_418_fu_18509_p0 = add_ln61_306_reg_29088.read();
}

void ntt::thread_mul_ln59_418_fu_18509_p2() {
    mul_ln59_418_fu_18509_p2 = (!mul_ln59_418_fu_18509_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_418_fu_18509_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_419_fu_18523_p0() {
    mul_ln59_419_fu_18523_p0 = add_ln61_307_reg_29093.read();
}

void ntt::thread_mul_ln59_419_fu_18523_p2() {
    mul_ln59_419_fu_18523_p2 = (!mul_ln59_419_fu_18523_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_419_fu_18523_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_41_fu_11441_p0() {
    mul_ln59_41_fu_11441_p0 = reg_3336.read();
}

void ntt::thread_mul_ln59_41_fu_11441_p2() {
    mul_ln59_41_fu_11441_p2 = (!mul_ln59_41_fu_11441_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_41_fu_11441_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_420_fu_18537_p0() {
    mul_ln59_420_fu_18537_p0 = add_ln61_308_reg_29098.read();
}

void ntt::thread_mul_ln59_420_fu_18537_p2() {
    mul_ln59_420_fu_18537_p2 = (!mul_ln59_420_fu_18537_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_420_fu_18537_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_421_fu_18551_p0() {
    mul_ln59_421_fu_18551_p0 = add_ln61_309_reg_29103.read();
}

void ntt::thread_mul_ln59_421_fu_18551_p2() {
    mul_ln59_421_fu_18551_p2 = (!mul_ln59_421_fu_18551_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_421_fu_18551_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_422_fu_16559_p0() {
    mul_ln59_422_fu_16559_p0 = add_ln61_310_fu_16549_p2.read();
}

void ntt::thread_mul_ln59_422_fu_16559_p2() {
    mul_ln59_422_fu_16559_p2 = (!mul_ln59_422_fu_16559_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_422_fu_16559_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_423_fu_18577_p0() {
    mul_ln59_423_fu_18577_p0 = add_ln61_311_reg_29114.read();
}

void ntt::thread_mul_ln59_423_fu_18577_p2() {
    mul_ln59_423_fu_18577_p2 = (!mul_ln59_423_fu_18577_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_423_fu_18577_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_424_fu_18591_p0() {
    mul_ln59_424_fu_18591_p0 = add_ln61_312_reg_29119.read();
}

void ntt::thread_mul_ln59_424_fu_18591_p2() {
    mul_ln59_424_fu_18591_p2 = (!mul_ln59_424_fu_18591_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_424_fu_18591_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_425_fu_16660_p0() {
    mul_ln59_425_fu_16660_p0 = grp_fu_4758_p2.read();
}

void ntt::thread_mul_ln59_425_fu_16660_p2() {
    mul_ln59_425_fu_16660_p2 = (!mul_ln59_425_fu_16660_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_425_fu_16660_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_426_fu_18617_p0() {
    mul_ln59_426_fu_18617_p0 = add_ln61_314_reg_29124.read();
}

void ntt::thread_mul_ln59_426_fu_18617_p2() {
    mul_ln59_426_fu_18617_p2 = (!mul_ln59_426_fu_18617_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_426_fu_18617_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_427_fu_18631_p0() {
    mul_ln59_427_fu_18631_p0 = add_ln61_315_reg_29135.read();
}

void ntt::thread_mul_ln59_427_fu_18631_p2() {
    mul_ln59_427_fu_18631_p2 = (!mul_ln59_427_fu_18631_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_427_fu_18631_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_428_fu_18645_p0() {
    mul_ln59_428_fu_18645_p0 = add_ln61_316_reg_29140.read();
}

void ntt::thread_mul_ln59_428_fu_18645_p2() {
    mul_ln59_428_fu_18645_p2 = (!mul_ln59_428_fu_18645_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_428_fu_18645_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_429_fu_18659_p0() {
    mul_ln59_429_fu_18659_p0 = add_ln61_317_reg_29145.read();
}

void ntt::thread_mul_ln59_429_fu_18659_p2() {
    mul_ln59_429_fu_18659_p2 = (!mul_ln59_429_fu_18659_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_429_fu_18659_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_42_fu_11456_p0() {
    mul_ln59_42_fu_11456_p0 = reg_3346.read();
}

void ntt::thread_mul_ln59_42_fu_11456_p2() {
    mul_ln59_42_fu_11456_p2 = (!mul_ln59_42_fu_11456_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_42_fu_11456_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_430_fu_18673_p0() {
    mul_ln59_430_fu_18673_p0 = add_ln61_318_reg_29150.read();
}

void ntt::thread_mul_ln59_430_fu_18673_p2() {
    mul_ln59_430_fu_18673_p2 = (!mul_ln59_430_fu_18673_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_430_fu_18673_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_431_fu_18687_p0() {
    mul_ln59_431_fu_18687_p0 = add_ln61_319_reg_29155.read();
}

void ntt::thread_mul_ln59_431_fu_18687_p2() {
    mul_ln59_431_fu_18687_p2 = (!mul_ln59_431_fu_18687_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_431_fu_18687_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_432_fu_18701_p0() {
    mul_ln59_432_fu_18701_p0 = add_ln61_320_reg_29160.read();
}

void ntt::thread_mul_ln59_432_fu_18701_p2() {
    mul_ln59_432_fu_18701_p2 = (!mul_ln59_432_fu_18701_p0.read().is_01() || !ap_const_lv51_7FFFFFFFA84AD.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_432_fu_18701_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFA84AD);
}

void ntt::thread_mul_ln59_433_fu_18716_p0() {
    mul_ln59_433_fu_18716_p0 = sext_ln59_865_fu_18712_p0.read();
}

void ntt::thread_mul_ln59_433_fu_18716_p2() {
    mul_ln59_433_fu_18716_p2 = (!mul_ln59_433_fu_18716_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_433_fu_18716_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_434_fu_18731_p0() {
    mul_ln59_434_fu_18731_p0 = sext_ln59_867_fu_18727_p0.read();
}

void ntt::thread_mul_ln59_434_fu_18731_p2() {
    mul_ln59_434_fu_18731_p2 = (!mul_ln59_434_fu_18731_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_434_fu_18731_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_435_fu_18746_p0() {
    mul_ln59_435_fu_18746_p0 = sext_ln59_869_fu_18742_p0.read();
}

void ntt::thread_mul_ln59_435_fu_18746_p2() {
    mul_ln59_435_fu_18746_p2 = (!mul_ln59_435_fu_18746_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_435_fu_18746_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_436_fu_18761_p0() {
    mul_ln59_436_fu_18761_p0 = sext_ln59_871_fu_18757_p0.read();
}

void ntt::thread_mul_ln59_436_fu_18761_p2() {
    mul_ln59_436_fu_18761_p2 = (!mul_ln59_436_fu_18761_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_436_fu_18761_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_437_fu_18776_p0() {
    mul_ln59_437_fu_18776_p0 = sext_ln59_873_fu_18772_p0.read();
}

void ntt::thread_mul_ln59_437_fu_18776_p2() {
    mul_ln59_437_fu_18776_p2 = (!mul_ln59_437_fu_18776_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_437_fu_18776_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_438_fu_18791_p0() {
    mul_ln59_438_fu_18791_p0 = sext_ln59_875_fu_18787_p0.read();
}

void ntt::thread_mul_ln59_438_fu_18791_p2() {
    mul_ln59_438_fu_18791_p2 = (!mul_ln59_438_fu_18791_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_438_fu_18791_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_439_fu_18806_p0() {
    mul_ln59_439_fu_18806_p0 = sext_ln59_877_fu_18802_p0.read();
}

void ntt::thread_mul_ln59_439_fu_18806_p2() {
    mul_ln59_439_fu_18806_p2 = (!mul_ln59_439_fu_18806_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_439_fu_18806_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_43_fu_11471_p0() {
    mul_ln59_43_fu_11471_p0 = reg_3356.read();
}

void ntt::thread_mul_ln59_43_fu_11471_p2() {
    mul_ln59_43_fu_11471_p2 = (!mul_ln59_43_fu_11471_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_43_fu_11471_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_440_fu_18821_p0() {
    mul_ln59_440_fu_18821_p0 = sext_ln59_879_fu_18817_p0.read();
}

void ntt::thread_mul_ln59_440_fu_18821_p2() {
    mul_ln59_440_fu_18821_p2 = (!mul_ln59_440_fu_18821_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_440_fu_18821_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_441_fu_18836_p0() {
    mul_ln59_441_fu_18836_p0 = sext_ln59_881_fu_18832_p0.read();
}

void ntt::thread_mul_ln59_441_fu_18836_p2() {
    mul_ln59_441_fu_18836_p2 = (!mul_ln59_441_fu_18836_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_441_fu_18836_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_442_fu_18851_p0() {
    mul_ln59_442_fu_18851_p0 = sext_ln59_883_fu_18847_p0.read();
}

void ntt::thread_mul_ln59_442_fu_18851_p2() {
    mul_ln59_442_fu_18851_p2 = (!mul_ln59_442_fu_18851_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_442_fu_18851_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_443_fu_18866_p0() {
    mul_ln59_443_fu_18866_p0 = sext_ln59_885_fu_18862_p0.read();
}

void ntt::thread_mul_ln59_443_fu_18866_p2() {
    mul_ln59_443_fu_18866_p2 = (!mul_ln59_443_fu_18866_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_443_fu_18866_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_444_fu_18881_p0() {
    mul_ln59_444_fu_18881_p0 = sext_ln59_887_fu_18877_p0.read();
}

void ntt::thread_mul_ln59_444_fu_18881_p2() {
    mul_ln59_444_fu_18881_p2 = (!mul_ln59_444_fu_18881_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_444_fu_18881_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_445_fu_18896_p0() {
    mul_ln59_445_fu_18896_p0 = sext_ln59_889_fu_18892_p0.read();
}

void ntt::thread_mul_ln59_445_fu_18896_p2() {
    mul_ln59_445_fu_18896_p2 = (!mul_ln59_445_fu_18896_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_445_fu_18896_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_446_fu_18925_p0() {
    mul_ln59_446_fu_18925_p0 = sext_ln59_891_fu_18921_p0.read();
}

void ntt::thread_mul_ln59_446_fu_18925_p2() {
    mul_ln59_446_fu_18925_p2 = (!mul_ln59_446_fu_18925_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_446_fu_18925_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_447_fu_18954_p0() {
    mul_ln59_447_fu_18954_p0 = sext_ln59_893_fu_18950_p0.read();
}

void ntt::thread_mul_ln59_447_fu_18954_p2() {
    mul_ln59_447_fu_18954_p2 = (!mul_ln59_447_fu_18954_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_447_fu_18954_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_448_fu_18969_p0() {
    mul_ln59_448_fu_18969_p0 = sext_ln59_895_fu_18965_p0.read();
}

void ntt::thread_mul_ln59_448_fu_18969_p2() {
    mul_ln59_448_fu_18969_p2 = (!mul_ln59_448_fu_18969_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE0147F.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_448_fu_18969_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE0147F);
}

void ntt::thread_mul_ln59_449_fu_18983_p0() {
    mul_ln59_449_fu_18983_p0 = add_ln61_337_reg_29165.read();
}

void ntt::thread_mul_ln59_449_fu_18983_p2() {
    mul_ln59_449_fu_18983_p2 = (!mul_ln59_449_fu_18983_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_449_fu_18983_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_44_fu_11486_p0() {
    mul_ln59_44_fu_11486_p0 = reg_3366.read();
}

void ntt::thread_mul_ln59_44_fu_11486_p2() {
    mul_ln59_44_fu_11486_p2 = (!mul_ln59_44_fu_11486_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_44_fu_11486_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_450_fu_18997_p0() {
    mul_ln59_450_fu_18997_p0 = add_ln61_338_reg_29170.read();
}

void ntt::thread_mul_ln59_450_fu_18997_p2() {
    mul_ln59_450_fu_18997_p2 = (!mul_ln59_450_fu_18997_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_450_fu_18997_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_451_fu_19011_p0() {
    mul_ln59_451_fu_19011_p0 = add_ln61_339_reg_29175.read();
}

void ntt::thread_mul_ln59_451_fu_19011_p2() {
    mul_ln59_451_fu_19011_p2 = (!mul_ln59_451_fu_19011_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_451_fu_19011_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_452_fu_19025_p0() {
    mul_ln59_452_fu_19025_p0 = add_ln61_340_reg_29180.read();
}

void ntt::thread_mul_ln59_452_fu_19025_p2() {
    mul_ln59_452_fu_19025_p2 = (!mul_ln59_452_fu_19025_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_452_fu_19025_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_453_fu_19039_p0() {
    mul_ln59_453_fu_19039_p0 = add_ln61_341_reg_29185.read();
}

void ntt::thread_mul_ln59_453_fu_19039_p2() {
    mul_ln59_453_fu_19039_p2 = (!mul_ln59_453_fu_19039_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_453_fu_19039_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_454_fu_17169_p0() {
    mul_ln59_454_fu_17169_p0 = add_ln61_342_fu_17159_p2.read();
}

void ntt::thread_mul_ln59_454_fu_17169_p2() {
    mul_ln59_454_fu_17169_p2 = (!mul_ln59_454_fu_17169_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_454_fu_17169_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_455_fu_19067_p0() {
    mul_ln59_455_fu_19067_p0 = add_ln61_343_reg_29190.read();
}

void ntt::thread_mul_ln59_455_fu_19067_p2() {
    mul_ln59_455_fu_19067_p2 = (!mul_ln59_455_fu_19067_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_455_fu_19067_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_456_fu_19081_p0() {
    mul_ln59_456_fu_19081_p0 = add_ln61_344_reg_29195.read();
}

void ntt::thread_mul_ln59_456_fu_19081_p2() {
    mul_ln59_456_fu_19081_p2 = (!mul_ln59_456_fu_19081_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_456_fu_19081_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_457_fu_19095_p0() {
    mul_ln59_457_fu_19095_p0 = add_ln61_345_reg_29200.read();
}

void ntt::thread_mul_ln59_457_fu_19095_p2() {
    mul_ln59_457_fu_19095_p2 = (!mul_ln59_457_fu_19095_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_457_fu_19095_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_458_fu_19109_p0() {
    mul_ln59_458_fu_19109_p0 = add_ln61_346_reg_29205.read();
}

void ntt::thread_mul_ln59_458_fu_19109_p2() {
    mul_ln59_458_fu_19109_p2 = (!mul_ln59_458_fu_19109_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_458_fu_19109_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_459_fu_19123_p0() {
    mul_ln59_459_fu_19123_p0 = add_ln61_347_reg_29210.read();
}

void ntt::thread_mul_ln59_459_fu_19123_p2() {
    mul_ln59_459_fu_19123_p2 = (!mul_ln59_459_fu_19123_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_459_fu_19123_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_45_fu_11501_p0() {
    mul_ln59_45_fu_11501_p0 = reg_3376.read();
}

void ntt::thread_mul_ln59_45_fu_11501_p2() {
    mul_ln59_45_fu_11501_p2 = (!mul_ln59_45_fu_11501_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_45_fu_11501_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_460_fu_19137_p0() {
    mul_ln59_460_fu_19137_p0 = add_ln61_348_reg_29215.read();
}

void ntt::thread_mul_ln59_460_fu_19137_p2() {
    mul_ln59_460_fu_19137_p2 = (!mul_ln59_460_fu_19137_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_460_fu_19137_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_461_fu_19151_p0() {
    mul_ln59_461_fu_19151_p0 = add_ln61_349_reg_29220.read();
}

void ntt::thread_mul_ln59_461_fu_19151_p2() {
    mul_ln59_461_fu_19151_p2 = (!mul_ln59_461_fu_19151_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_461_fu_19151_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_462_fu_17971_p0() {
    mul_ln59_462_fu_17971_p0 = add_ln61_350_reg_29225.read();
}

void ntt::thread_mul_ln59_462_fu_17971_p2() {
    mul_ln59_462_fu_17971_p2 = (!mul_ln59_462_fu_17971_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_462_fu_17971_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_463_fu_19165_p0() {
    mul_ln59_463_fu_19165_p0 = add_ln61_351_reg_29230.read();
}

void ntt::thread_mul_ln59_463_fu_19165_p2() {
    mul_ln59_463_fu_19165_p2 = (!mul_ln59_463_fu_19165_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_463_fu_19165_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_464_fu_19179_p0() {
    mul_ln59_464_fu_19179_p0 = add_ln61_352_reg_29235.read();
}

void ntt::thread_mul_ln59_464_fu_19179_p2() {
    mul_ln59_464_fu_19179_p2 = (!mul_ln59_464_fu_19179_p0.read().is_01() || !ap_const_lv54_2F9A75.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_464_fu_19179_p0.read()) * sc_biguint<54>(ap_const_lv54_2F9A75);
}

void ntt::thread_mul_ln59_465_fu_19194_p0() {
    mul_ln59_465_fu_19194_p0 = reg_3516.read();
}

void ntt::thread_mul_ln59_465_fu_19194_p2() {
    mul_ln59_465_fu_19194_p2 = (!mul_ln59_465_fu_19194_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_465_fu_19194_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_466_fu_17986_p0() {
    mul_ln59_466_fu_17986_p0 = sext_ln59_931_fu_17982_p0.read();
}

void ntt::thread_mul_ln59_466_fu_17986_p2() {
    mul_ln59_466_fu_17986_p2 = (!mul_ln59_466_fu_17986_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_466_fu_17986_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_467_fu_19223_p0() {
    mul_ln59_467_fu_19223_p0 = sext_ln59_933_fu_19219_p0.read();
}

void ntt::thread_mul_ln59_467_fu_19223_p2() {
    mul_ln59_467_fu_19223_p2 = (!mul_ln59_467_fu_19223_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_467_fu_19223_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_468_fu_19238_p0() {
    mul_ln59_468_fu_19238_p0 = sext_ln59_935_fu_19234_p0.read();
}

void ntt::thread_mul_ln59_468_fu_19238_p2() {
    mul_ln59_468_fu_19238_p2 = (!mul_ln59_468_fu_19238_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_468_fu_19238_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_469_fu_19253_p0() {
    mul_ln59_469_fu_19253_p0 = sext_ln59_937_fu_19249_p0.read();
}

void ntt::thread_mul_ln59_469_fu_19253_p2() {
    mul_ln59_469_fu_19253_p2 = (!mul_ln59_469_fu_19253_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_469_fu_19253_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_46_fu_11516_p0() {
    mul_ln59_46_fu_11516_p0 = reg_3386.read();
}

void ntt::thread_mul_ln59_46_fu_11516_p2() {
    mul_ln59_46_fu_11516_p2 = (!mul_ln59_46_fu_11516_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_46_fu_11516_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_470_fu_19268_p0() {
    mul_ln59_470_fu_19268_p0 = sext_ln59_939_fu_19264_p0.read();
}

void ntt::thread_mul_ln59_470_fu_19268_p2() {
    mul_ln59_470_fu_19268_p2 = (!mul_ln59_470_fu_19268_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_470_fu_19268_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_471_fu_19283_p0() {
    mul_ln59_471_fu_19283_p0 = sext_ln59_941_fu_19279_p0.read();
}

void ntt::thread_mul_ln59_471_fu_19283_p2() {
    mul_ln59_471_fu_19283_p2 = (!mul_ln59_471_fu_19283_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_471_fu_19283_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_472_fu_18001_p0() {
    mul_ln59_472_fu_18001_p0 = sext_ln59_943_fu_17997_p0.read();
}

void ntt::thread_mul_ln59_472_fu_18001_p2() {
    mul_ln59_472_fu_18001_p2 = (!mul_ln59_472_fu_18001_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_472_fu_18001_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_473_fu_19312_p0() {
    mul_ln59_473_fu_19312_p0 = reg_3585.read();
}

void ntt::thread_mul_ln59_473_fu_19312_p2() {
    mul_ln59_473_fu_19312_p2 = (!mul_ln59_473_fu_19312_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_473_fu_19312_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_474_fu_19327_p0() {
    mul_ln59_474_fu_19327_p0 = reg_3593.read();
}

void ntt::thread_mul_ln59_474_fu_19327_p2() {
    mul_ln59_474_fu_19327_p2 = (!mul_ln59_474_fu_19327_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_474_fu_19327_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_475_fu_19342_p0() {
    mul_ln59_475_fu_19342_p0 = reg_3602.read();
}

void ntt::thread_mul_ln59_475_fu_19342_p2() {
    mul_ln59_475_fu_19342_p2 = (!mul_ln59_475_fu_19342_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_475_fu_19342_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_476_fu_19357_p0() {
    mul_ln59_476_fu_19357_p0 = reg_3611.read();
}

void ntt::thread_mul_ln59_476_fu_19357_p2() {
    mul_ln59_476_fu_19357_p2 = (!mul_ln59_476_fu_19357_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_476_fu_19357_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_477_fu_19372_p0() {
    mul_ln59_477_fu_19372_p0 = reg_3621.read();
}

void ntt::thread_mul_ln59_477_fu_19372_p2() {
    mul_ln59_477_fu_19372_p2 = (!mul_ln59_477_fu_19372_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_477_fu_19372_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_478_fu_19387_p0() {
    mul_ln59_478_fu_19387_p0 = reg_3631.read();
}

void ntt::thread_mul_ln59_478_fu_19387_p2() {
    mul_ln59_478_fu_19387_p2 = (!mul_ln59_478_fu_19387_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_478_fu_19387_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_479_fu_19402_p0() {
    mul_ln59_479_fu_19402_p0 = reg_3641.read();
}

void ntt::thread_mul_ln59_479_fu_19402_p2() {
    mul_ln59_479_fu_19402_p2 = (!mul_ln59_479_fu_19402_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_479_fu_19402_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_47_fu_11531_p0() {
    mul_ln59_47_fu_11531_p0 = reg_3396.read();
}

void ntt::thread_mul_ln59_47_fu_11531_p2() {
    mul_ln59_47_fu_11531_p2 = (!mul_ln59_47_fu_11531_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_47_fu_11531_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_480_fu_18016_p0() {
    mul_ln59_480_fu_18016_p0 = sext_ln59_959_fu_18012_p0.read();
}

void ntt::thread_mul_ln59_480_fu_18016_p2() {
    mul_ln59_480_fu_18016_p2 = (!mul_ln59_480_fu_18016_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD3FB09.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_480_fu_18016_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD3FB09);
}

void ntt::thread_mul_ln59_481_fu_19430_p0() {
    mul_ln59_481_fu_19430_p0 = add_ln61_369_reg_29240.read();
}

void ntt::thread_mul_ln59_481_fu_19430_p2() {
    mul_ln59_481_fu_19430_p2 = (!mul_ln59_481_fu_19430_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_481_fu_19430_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_482_fu_19444_p0() {
    mul_ln59_482_fu_19444_p0 = add_ln61_370_reg_29245.read();
}

void ntt::thread_mul_ln59_482_fu_19444_p2() {
    mul_ln59_482_fu_19444_p2 = (!mul_ln59_482_fu_19444_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_482_fu_19444_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_483_fu_19458_p0() {
    mul_ln59_483_fu_19458_p0 = add_ln61_371_reg_29250.read();
}

void ntt::thread_mul_ln59_483_fu_19458_p2() {
    mul_ln59_483_fu_19458_p2 = (!mul_ln59_483_fu_19458_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_483_fu_19458_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_484_fu_19472_p0() {
    mul_ln59_484_fu_19472_p0 = add_ln61_372_reg_29255.read();
}

void ntt::thread_mul_ln59_484_fu_19472_p2() {
    mul_ln59_484_fu_19472_p2 = (!mul_ln59_484_fu_19472_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_484_fu_19472_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_485_fu_19486_p0() {
    mul_ln59_485_fu_19486_p0 = add_ln61_373_reg_29260.read();
}

void ntt::thread_mul_ln59_485_fu_19486_p2() {
    mul_ln59_485_fu_19486_p2 = (!mul_ln59_485_fu_19486_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_485_fu_19486_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_486_fu_19500_p0() {
    mul_ln59_486_fu_19500_p0 = add_ln61_374_reg_29265.read();
}

void ntt::thread_mul_ln59_486_fu_19500_p2() {
    mul_ln59_486_fu_19500_p2 = (!mul_ln59_486_fu_19500_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_486_fu_19500_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_487_fu_17798_p0() {
    mul_ln59_487_fu_17798_p0 = grp_fu_6424_p2.read();
}

void ntt::thread_mul_ln59_487_fu_17798_p2() {
    mul_ln59_487_fu_17798_p2 = (!mul_ln59_487_fu_17798_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_487_fu_17798_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_488_fu_19528_p0() {
    mul_ln59_488_fu_19528_p0 = add_ln61_376_reg_29270.read();
}

void ntt::thread_mul_ln59_488_fu_19528_p2() {
    mul_ln59_488_fu_19528_p2 = (!mul_ln59_488_fu_19528_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_488_fu_19528_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_489_fu_19542_p0() {
    mul_ln59_489_fu_19542_p0 = add_ln61_377_reg_29275.read();
}

void ntt::thread_mul_ln59_489_fu_19542_p2() {
    mul_ln59_489_fu_19542_p2 = (!mul_ln59_489_fu_19542_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_489_fu_19542_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_48_fu_11546_p0() {
    mul_ln59_48_fu_11546_p0 = reg_3406.read();
}

void ntt::thread_mul_ln59_48_fu_11546_p2() {
    mul_ln59_48_fu_11546_p2 = (!mul_ln59_48_fu_11546_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_48_fu_11546_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_490_fu_19556_p0() {
    mul_ln59_490_fu_19556_p0 = add_ln61_378_reg_29280.read();
}

void ntt::thread_mul_ln59_490_fu_19556_p2() {
    mul_ln59_490_fu_19556_p2 = (!mul_ln59_490_fu_19556_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_490_fu_19556_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_491_fu_19570_p0() {
    mul_ln59_491_fu_19570_p0 = add_ln61_379_reg_29285.read();
}

void ntt::thread_mul_ln59_491_fu_19570_p2() {
    mul_ln59_491_fu_19570_p2 = (!mul_ln59_491_fu_19570_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_491_fu_19570_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_492_fu_17884_p0() {
    mul_ln59_492_fu_17884_p0 = grp_fu_6453_p2.read();
}

void ntt::thread_mul_ln59_492_fu_17884_p2() {
    mul_ln59_492_fu_17884_p2 = (!mul_ln59_492_fu_17884_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_492_fu_17884_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_493_fu_19598_p0() {
    mul_ln59_493_fu_19598_p0 = add_ln61_381_reg_29290.read();
}

void ntt::thread_mul_ln59_493_fu_19598_p2() {
    mul_ln59_493_fu_19598_p2 = (!mul_ln59_493_fu_19598_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_493_fu_19598_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_494_fu_19612_p0() {
    mul_ln59_494_fu_19612_p0 = add_ln61_382_reg_29295.read();
}

void ntt::thread_mul_ln59_494_fu_19612_p2() {
    mul_ln59_494_fu_19612_p2 = (!mul_ln59_494_fu_19612_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_494_fu_19612_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_495_fu_19626_p0() {
    mul_ln59_495_fu_19626_p0 = add_ln61_383_reg_29300.read();
}

void ntt::thread_mul_ln59_495_fu_19626_p2() {
    mul_ln59_495_fu_19626_p2 = (!mul_ln59_495_fu_19626_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_495_fu_19626_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_496_fu_19641_p0() {
    mul_ln59_496_fu_19641_p0 = reg_7104.read();
}

void ntt::thread_mul_ln59_496_fu_19641_p2() {
    mul_ln59_496_fu_19641_p2 = (!mul_ln59_496_fu_19641_p0.read().is_01() || !ap_const_lv54_2F7A49.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_496_fu_19641_p0.read()) * sc_biguint<54>(ap_const_lv54_2F7A49);
}

void ntt::thread_mul_ln59_497_fu_19656_p0() {
    mul_ln59_497_fu_19656_p0 = reg_3740.read();
}

void ntt::thread_mul_ln59_497_fu_19656_p2() {
    mul_ln59_497_fu_19656_p2 = (!mul_ln59_497_fu_19656_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_497_fu_19656_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_498_fu_19671_p0() {
    mul_ln59_498_fu_19671_p0 = reg_3750.read();
}

void ntt::thread_mul_ln59_498_fu_19671_p2() {
    mul_ln59_498_fu_19671_p2 = (!mul_ln59_498_fu_19671_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_498_fu_19671_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_499_fu_19686_p0() {
    mul_ln59_499_fu_19686_p0 = reg_3760.read();
}

void ntt::thread_mul_ln59_499_fu_19686_p2() {
    mul_ln59_499_fu_19686_p2 = (!mul_ln59_499_fu_19686_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_499_fu_19686_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_49_fu_11561_p0() {
    mul_ln59_49_fu_11561_p0 = reg_3416.read();
}

void ntt::thread_mul_ln59_49_fu_11561_p2() {
    mul_ln59_49_fu_11561_p2 = (!mul_ln59_49_fu_11561_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_49_fu_11561_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_4_fu_10906_p0() {
    mul_ln59_4_fu_10906_p0 = reg_2983.read();
}

void ntt::thread_mul_ln59_4_fu_10906_p2() {
    mul_ln59_4_fu_10906_p2 = (!mul_ln59_4_fu_10906_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_4_fu_10906_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_500_fu_19701_p0() {
    mul_ln59_500_fu_19701_p0 = reg_3770.read();
}

void ntt::thread_mul_ln59_500_fu_19701_p2() {
    mul_ln59_500_fu_19701_p2 = (!mul_ln59_500_fu_19701_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_500_fu_19701_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_501_fu_19716_p0() {
    mul_ln59_501_fu_19716_p0 = reg_3780.read();
}

void ntt::thread_mul_ln59_501_fu_19716_p2() {
    mul_ln59_501_fu_19716_p2 = (!mul_ln59_501_fu_19716_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_501_fu_19716_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_502_fu_19731_p0() {
    mul_ln59_502_fu_19731_p0 = reg_3790.read();
}

void ntt::thread_mul_ln59_502_fu_19731_p2() {
    mul_ln59_502_fu_19731_p2 = (!mul_ln59_502_fu_19731_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_502_fu_19731_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_503_fu_19746_p0() {
    mul_ln59_503_fu_19746_p0 = reg_3800.read();
}

void ntt::thread_mul_ln59_503_fu_19746_p2() {
    mul_ln59_503_fu_19746_p2 = (!mul_ln59_503_fu_19746_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_503_fu_19746_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_504_fu_19761_p0() {
    mul_ln59_504_fu_19761_p0 = sext_ln59_1007_fu_19757_p0.read();
}

void ntt::thread_mul_ln59_504_fu_19761_p2() {
    mul_ln59_504_fu_19761_p2 = (!mul_ln59_504_fu_19761_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_504_fu_19761_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_505_fu_19776_p0() {
    mul_ln59_505_fu_19776_p0 = sext_ln59_1009_fu_19772_p0.read();
}

void ntt::thread_mul_ln59_505_fu_19776_p2() {
    mul_ln59_505_fu_19776_p2 = (!mul_ln59_505_fu_19776_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_505_fu_19776_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_506_fu_19791_p0() {
    mul_ln59_506_fu_19791_p0 = sext_ln59_1011_fu_19787_p0.read();
}

void ntt::thread_mul_ln59_506_fu_19791_p2() {
    mul_ln59_506_fu_19791_p2 = (!mul_ln59_506_fu_19791_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_506_fu_19791_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_507_fu_19806_p0() {
    mul_ln59_507_fu_19806_p0 = sext_ln59_1013_fu_19802_p0.read();
}

void ntt::thread_mul_ln59_507_fu_19806_p2() {
    mul_ln59_507_fu_19806_p2 = (!mul_ln59_507_fu_19806_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_507_fu_19806_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_508_fu_19821_p0() {
    mul_ln59_508_fu_19821_p0 = sext_ln59_1015_fu_19817_p0.read();
}

void ntt::thread_mul_ln59_508_fu_19821_p2() {
    mul_ln59_508_fu_19821_p2 = (!mul_ln59_508_fu_19821_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_508_fu_19821_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_509_fu_19836_p0() {
    mul_ln59_509_fu_19836_p0 = sext_ln59_1017_fu_19832_p0.read();
}

void ntt::thread_mul_ln59_509_fu_19836_p2() {
    mul_ln59_509_fu_19836_p2 = (!mul_ln59_509_fu_19836_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_509_fu_19836_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_50_fu_11576_p0() {
    mul_ln59_50_fu_11576_p0 = reg_3426.read();
}

void ntt::thread_mul_ln59_50_fu_11576_p2() {
    mul_ln59_50_fu_11576_p2 = (!mul_ln59_50_fu_11576_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_50_fu_11576_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_510_fu_19851_p0() {
    mul_ln59_510_fu_19851_p0 = sext_ln59_1019_fu_19847_p0.read();
}

void ntt::thread_mul_ln59_510_fu_19851_p2() {
    mul_ln59_510_fu_19851_p2 = (!mul_ln59_510_fu_19851_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_510_fu_19851_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_511_fu_19866_p0() {
    mul_ln59_511_fu_19866_p0 = sext_ln59_1021_fu_19862_p0.read();
}

void ntt::thread_mul_ln59_511_fu_19866_p2() {
    mul_ln59_511_fu_19866_p2 = (!mul_ln59_511_fu_19866_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_511_fu_19866_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_512_fu_19881_p0() {
    mul_ln59_512_fu_19881_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_512_fu_19881_p2() {
    mul_ln59_512_fu_19881_p2 = (!mul_ln59_512_fu_19881_p0.read().is_01() || !ap_const_lv54_28E527.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_512_fu_19881_p0.read()) * sc_biguint<54>(ap_const_lv54_28E527);
}

void ntt::thread_mul_ln59_513_fu_20256_p0() {
    mul_ln59_513_fu_20256_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_513_fu_20256_p2() {
    mul_ln59_513_fu_20256_p2 = (!mul_ln59_513_fu_20256_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_513_fu_20256_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_514_fu_19896_p0() {
    mul_ln59_514_fu_19896_p0 = sext_ln59_1027_fu_19892_p0.read();
}

void ntt::thread_mul_ln59_514_fu_19896_p2() {
    mul_ln59_514_fu_19896_p2 = (!mul_ln59_514_fu_19896_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_514_fu_19896_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_515_fu_19911_p0() {
    mul_ln59_515_fu_19911_p0 = sext_ln59_1029_fu_19907_p0.read();
}

void ntt::thread_mul_ln59_515_fu_19911_p2() {
    mul_ln59_515_fu_19911_p2 = (!mul_ln59_515_fu_19911_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_515_fu_19911_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_516_fu_20299_p0() {
    mul_ln59_516_fu_20299_p0 = reg_2967.read();
}

void ntt::thread_mul_ln59_516_fu_20299_p2() {
    mul_ln59_516_fu_20299_p2 = (!mul_ln59_516_fu_20299_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_516_fu_20299_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_517_fu_20314_p0() {
    mul_ln59_517_fu_20314_p0 = reg_2975.read();
}

void ntt::thread_mul_ln59_517_fu_20314_p2() {
    mul_ln59_517_fu_20314_p2 = (!mul_ln59_517_fu_20314_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_517_fu_20314_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_518_fu_20329_p0() {
    mul_ln59_518_fu_20329_p0 = reg_2983.read();
}

void ntt::thread_mul_ln59_518_fu_20329_p2() {
    mul_ln59_518_fu_20329_p2 = (!mul_ln59_518_fu_20329_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_518_fu_20329_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_519_fu_20344_p0() {
    mul_ln59_519_fu_20344_p0 = reg_2991.read();
}

void ntt::thread_mul_ln59_519_fu_20344_p2() {
    mul_ln59_519_fu_20344_p2 = (!mul_ln59_519_fu_20344_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_519_fu_20344_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_51_fu_11591_p0() {
    mul_ln59_51_fu_11591_p0 = reg_3436.read();
}

void ntt::thread_mul_ln59_51_fu_11591_p2() {
    mul_ln59_51_fu_11591_p2 = (!mul_ln59_51_fu_11591_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_51_fu_11591_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_520_fu_19926_p0() {
    mul_ln59_520_fu_19926_p0 = sext_ln59_1039_fu_19922_p0.read();
}

void ntt::thread_mul_ln59_520_fu_19926_p2() {
    mul_ln59_520_fu_19926_p2 = (!mul_ln59_520_fu_19926_p0.read().is_01() || !ap_const_lv54_299658.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_520_fu_19926_p0.read()) * sc_biguint<54>(ap_const_lv54_299658);
}

void ntt::thread_mul_ln59_521_fu_19941_p0() {
    mul_ln59_521_fu_19941_p0 = sext_ln59_1041_fu_19937_p0.read();
}

void ntt::thread_mul_ln59_521_fu_19941_p2() {
    mul_ln59_521_fu_19941_p2 = (!mul_ln59_521_fu_19941_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_521_fu_19941_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_522_fu_20387_p0() {
    mul_ln59_522_fu_20387_p0 = sext_ln59_1043_fu_20383_p0.read();
}

void ntt::thread_mul_ln59_522_fu_20387_p2() {
    mul_ln59_522_fu_20387_p2 = (!mul_ln59_522_fu_20387_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_522_fu_20387_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_523_fu_20402_p0() {
    mul_ln59_523_fu_20402_p0 = sext_ln59_1045_fu_20398_p0.read();
}

void ntt::thread_mul_ln59_523_fu_20402_p2() {
    mul_ln59_523_fu_20402_p2 = (!mul_ln59_523_fu_20402_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_523_fu_20402_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_524_fu_20417_p0() {
    mul_ln59_524_fu_20417_p0 = sext_ln59_1047_fu_20413_p0.read();
}

void ntt::thread_mul_ln59_524_fu_20417_p2() {
    mul_ln59_524_fu_20417_p2 = (!mul_ln59_524_fu_20417_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_524_fu_20417_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_525_fu_20432_p0() {
    mul_ln59_525_fu_20432_p0 = sext_ln59_1049_fu_20428_p0.read();
}

void ntt::thread_mul_ln59_525_fu_20432_p2() {
    mul_ln59_525_fu_20432_p2 = (!mul_ln59_525_fu_20432_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_525_fu_20432_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_526_fu_20447_p0() {
    mul_ln59_526_fu_20447_p0 = sext_ln59_1051_fu_20443_p0.read();
}

void ntt::thread_mul_ln59_526_fu_20447_p2() {
    mul_ln59_526_fu_20447_p2 = (!mul_ln59_526_fu_20447_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_526_fu_20447_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_527_fu_20462_p0() {
    mul_ln59_527_fu_20462_p0 = sext_ln59_1053_fu_20458_p0.read();
}

void ntt::thread_mul_ln59_527_fu_20462_p2() {
    mul_ln59_527_fu_20462_p2 = (!mul_ln59_527_fu_20462_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_527_fu_20462_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_528_fu_20477_p0() {
    mul_ln59_528_fu_20477_p0 = sext_ln59_1055_fu_20473_p0.read();
}

void ntt::thread_mul_ln59_528_fu_20477_p2() {
    mul_ln59_528_fu_20477_p2 = (!mul_ln59_528_fu_20477_p0.read().is_01() || !ap_const_lv52_FA070.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_528_fu_20477_p0.read()) * sc_biguint<52>(ap_const_lv52_FA070);
}

void ntt::thread_mul_ln59_529_fu_20492_p0() {
    mul_ln59_529_fu_20492_p0 = sext_ln59_1057_fu_20488_p0.read();
}

void ntt::thread_mul_ln59_529_fu_20492_p2() {
    mul_ln59_529_fu_20492_p2 = (!mul_ln59_529_fu_20492_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_529_fu_20492_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_52_fu_11606_p0() {
    mul_ln59_52_fu_11606_p0 = reg_3446.read();
}

void ntt::thread_mul_ln59_52_fu_11606_p2() {
    mul_ln59_52_fu_11606_p2 = (!mul_ln59_52_fu_11606_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_52_fu_11606_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_530_fu_20507_p0() {
    mul_ln59_530_fu_20507_p0 = sext_ln59_1059_fu_20503_p0.read();
}

void ntt::thread_mul_ln59_530_fu_20507_p2() {
    mul_ln59_530_fu_20507_p2 = (!mul_ln59_530_fu_20507_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_530_fu_20507_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_531_fu_19956_p0() {
    mul_ln59_531_fu_19956_p0 = sext_ln59_1061_fu_19952_p0.read();
}

void ntt::thread_mul_ln59_531_fu_19956_p2() {
    mul_ln59_531_fu_19956_p2 = (!mul_ln59_531_fu_19956_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_531_fu_19956_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_532_fu_20522_p0() {
    mul_ln59_532_fu_20522_p0 = sext_ln59_1063_fu_20518_p0.read();
}

void ntt::thread_mul_ln59_532_fu_20522_p2() {
    mul_ln59_532_fu_20522_p2 = (!mul_ln59_532_fu_20522_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_532_fu_20522_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_533_fu_20537_p0() {
    mul_ln59_533_fu_20537_p0 = sext_ln59_1065_fu_20533_p0.read();
}

void ntt::thread_mul_ln59_533_fu_20537_p2() {
    mul_ln59_533_fu_20537_p2 = (!mul_ln59_533_fu_20537_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_533_fu_20537_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_534_fu_20552_p0() {
    mul_ln59_534_fu_20552_p0 = sext_ln59_1067_fu_20548_p0.read();
}

void ntt::thread_mul_ln59_534_fu_20552_p2() {
    mul_ln59_534_fu_20552_p2 = (!mul_ln59_534_fu_20552_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_534_fu_20552_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_535_fu_20567_p0() {
    mul_ln59_535_fu_20567_p0 = sext_ln59_1069_fu_20563_p0.read();
}

void ntt::thread_mul_ln59_535_fu_20567_p2() {
    mul_ln59_535_fu_20567_p2 = (!mul_ln59_535_fu_20567_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_535_fu_20567_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_536_fu_20582_p0() {
    mul_ln59_536_fu_20582_p0 = sext_ln59_1071_fu_20578_p0.read();
}

void ntt::thread_mul_ln59_536_fu_20582_p2() {
    mul_ln59_536_fu_20582_p2 = (!mul_ln59_536_fu_20582_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEF85A4.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_536_fu_20582_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEF85A4);
}

void ntt::thread_mul_ln59_537_fu_20597_p0() {
    mul_ln59_537_fu_20597_p0 = sext_ln59_1073_fu_20593_p0.read();
}

void ntt::thread_mul_ln59_537_fu_20597_p2() {
    mul_ln59_537_fu_20597_p2 = (!mul_ln59_537_fu_20597_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_537_fu_20597_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_538_fu_19971_p0() {
    mul_ln59_538_fu_19971_p0 = sext_ln59_1075_fu_19967_p0.read();
}

void ntt::thread_mul_ln59_538_fu_19971_p2() {
    mul_ln59_538_fu_19971_p2 = (!mul_ln59_538_fu_19971_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_538_fu_19971_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_539_fu_20626_p0() {
    mul_ln59_539_fu_20626_p0 = sext_ln59_1077_fu_20622_p0.read();
}

void ntt::thread_mul_ln59_539_fu_20626_p2() {
    mul_ln59_539_fu_20626_p2 = (!mul_ln59_539_fu_20626_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_539_fu_20626_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_53_fu_11621_p0() {
    mul_ln59_53_fu_11621_p0 = reg_3456.read();
}

void ntt::thread_mul_ln59_53_fu_11621_p2() {
    mul_ln59_53_fu_11621_p2 = (!mul_ln59_53_fu_11621_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_53_fu_11621_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_540_fu_20641_p0() {
    mul_ln59_540_fu_20641_p0 = sext_ln59_1079_fu_20637_p0.read();
}

void ntt::thread_mul_ln59_540_fu_20641_p2() {
    mul_ln59_540_fu_20641_p2 = (!mul_ln59_540_fu_20641_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_540_fu_20641_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_541_fu_20656_p0() {
    mul_ln59_541_fu_20656_p0 = reg_3198.read();
}

void ntt::thread_mul_ln59_541_fu_20656_p2() {
    mul_ln59_541_fu_20656_p2 = (!mul_ln59_541_fu_20656_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_541_fu_20656_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_542_fu_20671_p0() {
    mul_ln59_542_fu_20671_p0 = reg_3208.read();
}

void ntt::thread_mul_ln59_542_fu_20671_p2() {
    mul_ln59_542_fu_20671_p2 = (!mul_ln59_542_fu_20671_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_542_fu_20671_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_543_fu_20686_p0() {
    mul_ln59_543_fu_20686_p0 = reg_3218.read();
}

void ntt::thread_mul_ln59_543_fu_20686_p2() {
    mul_ln59_543_fu_20686_p2 = (!mul_ln59_543_fu_20686_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_543_fu_20686_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_544_fu_20701_p0() {
    mul_ln59_544_fu_20701_p0 = reg_3228.read();
}

void ntt::thread_mul_ln59_544_fu_20701_p2() {
    mul_ln59_544_fu_20701_p2 = (!mul_ln59_544_fu_20701_p0.read().is_01() || !ap_const_lv54_36B788.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_544_fu_20701_p0.read()) * sc_biguint<54>(ap_const_lv54_36B788);
}

void ntt::thread_mul_ln59_545_fu_20716_p0() {
    mul_ln59_545_fu_20716_p0 = reg_3238.read();
}

void ntt::thread_mul_ln59_545_fu_20716_p2() {
    mul_ln59_545_fu_20716_p2 = (!mul_ln59_545_fu_20716_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_545_fu_20716_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_546_fu_20731_p0() {
    mul_ln59_546_fu_20731_p0 = reg_3248.read();
}

void ntt::thread_mul_ln59_546_fu_20731_p2() {
    mul_ln59_546_fu_20731_p2 = (!mul_ln59_546_fu_20731_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_546_fu_20731_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_547_fu_20746_p0() {
    mul_ln59_547_fu_20746_p0 = sext_ln59_1093_fu_20742_p0.read();
}

void ntt::thread_mul_ln59_547_fu_20746_p2() {
    mul_ln59_547_fu_20746_p2 = (!mul_ln59_547_fu_20746_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_547_fu_20746_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_548_fu_20761_p0() {
    mul_ln59_548_fu_20761_p0 = reg_3276.read();
}

void ntt::thread_mul_ln59_548_fu_20761_p2() {
    mul_ln59_548_fu_20761_p2 = (!mul_ln59_548_fu_20761_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_548_fu_20761_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_549_fu_20776_p0() {
    mul_ln59_549_fu_20776_p0 = reg_3286.read();
}

void ntt::thread_mul_ln59_549_fu_20776_p2() {
    mul_ln59_549_fu_20776_p2 = (!mul_ln59_549_fu_20776_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_549_fu_20776_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_54_fu_11636_p0() {
    mul_ln59_54_fu_11636_p0 = reg_3466.read();
}

void ntt::thread_mul_ln59_54_fu_11636_p2() {
    mul_ln59_54_fu_11636_p2 = (!mul_ln59_54_fu_11636_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_54_fu_11636_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_550_fu_20791_p0() {
    mul_ln59_550_fu_20791_p0 = reg_3296.read();
}

void ntt::thread_mul_ln59_550_fu_20791_p2() {
    mul_ln59_550_fu_20791_p2 = (!mul_ln59_550_fu_20791_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_550_fu_20791_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_551_fu_20806_p0() {
    mul_ln59_551_fu_20806_p0 = reg_3306.read();
}

void ntt::thread_mul_ln59_551_fu_20806_p2() {
    mul_ln59_551_fu_20806_p2 = (!mul_ln59_551_fu_20806_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_551_fu_20806_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_552_fu_20821_p0() {
    mul_ln59_552_fu_20821_p0 = reg_3316.read();
}

void ntt::thread_mul_ln59_552_fu_20821_p2() {
    mul_ln59_552_fu_20821_p2 = (!mul_ln59_552_fu_20821_p0.read().is_01() || !ap_const_lv52_FFFFFFFF79D90.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_552_fu_20821_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF79D90);
}

void ntt::thread_mul_ln59_553_fu_20836_p0() {
    mul_ln59_553_fu_20836_p0 = reg_3326.read();
}

void ntt::thread_mul_ln59_553_fu_20836_p2() {
    mul_ln59_553_fu_20836_p2 = (!mul_ln59_553_fu_20836_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_553_fu_20836_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_554_fu_20851_p0() {
    mul_ln59_554_fu_20851_p0 = reg_3336.read();
}

void ntt::thread_mul_ln59_554_fu_20851_p2() {
    mul_ln59_554_fu_20851_p2 = (!mul_ln59_554_fu_20851_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_554_fu_20851_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_555_fu_19986_p0() {
    mul_ln59_555_fu_19986_p0 = sext_ln59_1109_fu_19982_p0.read();
}

void ntt::thread_mul_ln59_555_fu_19986_p2() {
    mul_ln59_555_fu_19986_p2 = (!mul_ln59_555_fu_19986_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_555_fu_19986_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_556_fu_20866_p0() {
    mul_ln59_556_fu_20866_p0 = reg_3346.read();
}

void ntt::thread_mul_ln59_556_fu_20866_p2() {
    mul_ln59_556_fu_20866_p2 = (!mul_ln59_556_fu_20866_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_556_fu_20866_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_557_fu_20881_p0() {
    mul_ln59_557_fu_20881_p0 = reg_3356.read();
}

void ntt::thread_mul_ln59_557_fu_20881_p2() {
    mul_ln59_557_fu_20881_p2 = (!mul_ln59_557_fu_20881_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_557_fu_20881_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_558_fu_20896_p0() {
    mul_ln59_558_fu_20896_p0 = reg_3366.read();
}

void ntt::thread_mul_ln59_558_fu_20896_p2() {
    mul_ln59_558_fu_20896_p2 = (!mul_ln59_558_fu_20896_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_558_fu_20896_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_559_fu_20911_p0() {
    mul_ln59_559_fu_20911_p0 = reg_3376.read();
}

void ntt::thread_mul_ln59_559_fu_20911_p2() {
    mul_ln59_559_fu_20911_p2 = (!mul_ln59_559_fu_20911_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_559_fu_20911_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_55_fu_11651_p0() {
    mul_ln59_55_fu_11651_p0 = reg_3476.read();
}

void ntt::thread_mul_ln59_55_fu_11651_p2() {
    mul_ln59_55_fu_11651_p2 = (!mul_ln59_55_fu_11651_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_55_fu_11651_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_560_fu_20926_p0() {
    mul_ln59_560_fu_20926_p0 = reg_3386.read();
}

void ntt::thread_mul_ln59_560_fu_20926_p2() {
    mul_ln59_560_fu_20926_p2 = (!mul_ln59_560_fu_20926_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEEEAA0.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_560_fu_20926_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEEEAA0);
}

void ntt::thread_mul_ln59_561_fu_20941_p0() {
    mul_ln59_561_fu_20941_p0 = reg_3396.read();
}

void ntt::thread_mul_ln59_561_fu_20941_p2() {
    mul_ln59_561_fu_20941_p2 = (!mul_ln59_561_fu_20941_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_561_fu_20941_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_562_fu_20956_p0() {
    mul_ln59_562_fu_20956_p0 = reg_3406.read();
}

void ntt::thread_mul_ln59_562_fu_20956_p2() {
    mul_ln59_562_fu_20956_p2 = (!mul_ln59_562_fu_20956_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_562_fu_20956_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_563_fu_20971_p0() {
    mul_ln59_563_fu_20971_p0 = reg_3416.read();
}

void ntt::thread_mul_ln59_563_fu_20971_p2() {
    mul_ln59_563_fu_20971_p2 = (!mul_ln59_563_fu_20971_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_563_fu_20971_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_564_fu_20986_p0() {
    mul_ln59_564_fu_20986_p0 = reg_3426.read();
}

void ntt::thread_mul_ln59_564_fu_20986_p2() {
    mul_ln59_564_fu_20986_p2 = (!mul_ln59_564_fu_20986_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_564_fu_20986_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_565_fu_21001_p0() {
    mul_ln59_565_fu_21001_p0 = reg_3436.read();
}

void ntt::thread_mul_ln59_565_fu_21001_p2() {
    mul_ln59_565_fu_21001_p2 = (!mul_ln59_565_fu_21001_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_565_fu_21001_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_566_fu_21016_p0() {
    mul_ln59_566_fu_21016_p0 = reg_3446.read();
}

void ntt::thread_mul_ln59_566_fu_21016_p2() {
    mul_ln59_566_fu_21016_p2 = (!mul_ln59_566_fu_21016_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_566_fu_21016_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_567_fu_20001_p0() {
    mul_ln59_567_fu_20001_p0 = sext_ln59_1133_fu_19997_p0.read();
}

void ntt::thread_mul_ln59_567_fu_20001_p2() {
    mul_ln59_567_fu_20001_p2 = (!mul_ln59_567_fu_20001_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_567_fu_20001_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_568_fu_21031_p0() {
    mul_ln59_568_fu_21031_p0 = reg_3456.read();
}

void ntt::thread_mul_ln59_568_fu_21031_p2() {
    mul_ln59_568_fu_21031_p2 = (!mul_ln59_568_fu_21031_p0.read().is_01() || !ap_const_lv54_27F968.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_568_fu_21031_p0.read()) * sc_biguint<54>(ap_const_lv54_27F968);
}

void ntt::thread_mul_ln59_569_fu_20016_p0() {
    mul_ln59_569_fu_20016_p0 = sext_ln59_1137_fu_20012_p0.read();
}

void ntt::thread_mul_ln59_569_fu_20016_p2() {
    mul_ln59_569_fu_20016_p2 = (!mul_ln59_569_fu_20016_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_569_fu_20016_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_56_fu_11666_p0() {
    mul_ln59_56_fu_11666_p0 = reg_3486.read();
}

void ntt::thread_mul_ln59_56_fu_11666_p2() {
    mul_ln59_56_fu_11666_p2 = (!mul_ln59_56_fu_11666_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_56_fu_11666_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_570_fu_21046_p0() {
    mul_ln59_570_fu_21046_p0 = reg_3466.read();
}

void ntt::thread_mul_ln59_570_fu_21046_p2() {
    mul_ln59_570_fu_21046_p2 = (!mul_ln59_570_fu_21046_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_570_fu_21046_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_571_fu_20031_p0() {
    mul_ln59_571_fu_20031_p0 = sext_ln59_1141_fu_20027_p0.read();
}

void ntt::thread_mul_ln59_571_fu_20031_p2() {
    mul_ln59_571_fu_20031_p2 = (!mul_ln59_571_fu_20031_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_571_fu_20031_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_572_fu_21061_p0() {
    mul_ln59_572_fu_21061_p0 = reg_3476.read();
}

void ntt::thread_mul_ln59_572_fu_21061_p2() {
    mul_ln59_572_fu_21061_p2 = (!mul_ln59_572_fu_21061_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_572_fu_21061_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_573_fu_21076_p0() {
    mul_ln59_573_fu_21076_p0 = reg_3486.read();
}

void ntt::thread_mul_ln59_573_fu_21076_p2() {
    mul_ln59_573_fu_21076_p2 = (!mul_ln59_573_fu_21076_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_573_fu_21076_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_574_fu_21091_p0() {
    mul_ln59_574_fu_21091_p0 = reg_3496.read();
}

void ntt::thread_mul_ln59_574_fu_21091_p2() {
    mul_ln59_574_fu_21091_p2 = (!mul_ln59_574_fu_21091_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_574_fu_21091_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_575_fu_21106_p0() {
    mul_ln59_575_fu_21106_p0 = reg_3506.read();
}

void ntt::thread_mul_ln59_575_fu_21106_p2() {
    mul_ln59_575_fu_21106_p2 = (!mul_ln59_575_fu_21106_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_575_fu_21106_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_576_fu_21121_p0() {
    mul_ln59_576_fu_21121_p0 = reg_3516.read();
}

void ntt::thread_mul_ln59_576_fu_21121_p2() {
    mul_ln59_576_fu_21121_p2 = (!mul_ln59_576_fu_21121_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFD37B.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_576_fu_21121_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFD37B);
}

void ntt::thread_mul_ln59_577_fu_21136_p0() {
    mul_ln59_577_fu_21136_p0 = reg_3526.read();
}

void ntt::thread_mul_ln59_577_fu_21136_p2() {
    mul_ln59_577_fu_21136_p2 = (!mul_ln59_577_fu_21136_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_577_fu_21136_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_578_fu_21151_p0() {
    mul_ln59_578_fu_21151_p0 = reg_3536.read();
}

void ntt::thread_mul_ln59_578_fu_21151_p2() {
    mul_ln59_578_fu_21151_p2 = (!mul_ln59_578_fu_21151_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_578_fu_21151_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_579_fu_21166_p0() {
    mul_ln59_579_fu_21166_p0 = reg_3546.read();
}

void ntt::thread_mul_ln59_579_fu_21166_p2() {
    mul_ln59_579_fu_21166_p2 = (!mul_ln59_579_fu_21166_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_579_fu_21166_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_57_fu_11681_p0() {
    mul_ln59_57_fu_11681_p0 = reg_3496.read();
}

void ntt::thread_mul_ln59_57_fu_11681_p2() {
    mul_ln59_57_fu_11681_p2 = (!mul_ln59_57_fu_11681_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_57_fu_11681_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_580_fu_21181_p0() {
    mul_ln59_580_fu_21181_p0 = reg_3556.read();
}

void ntt::thread_mul_ln59_580_fu_21181_p2() {
    mul_ln59_580_fu_21181_p2 = (!mul_ln59_580_fu_21181_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_580_fu_21181_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_581_fu_21196_p0() {
    mul_ln59_581_fu_21196_p0 = reg_3566.read();
}

void ntt::thread_mul_ln59_581_fu_21196_p2() {
    mul_ln59_581_fu_21196_p2 = (!mul_ln59_581_fu_21196_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_581_fu_21196_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_582_fu_21211_p0() {
    mul_ln59_582_fu_21211_p0 = reg_3576.read();
}

void ntt::thread_mul_ln59_582_fu_21211_p2() {
    mul_ln59_582_fu_21211_p2 = (!mul_ln59_582_fu_21211_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_582_fu_21211_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_583_fu_21226_p0() {
    mul_ln59_583_fu_21226_p0 = reg_3585.read();
}

void ntt::thread_mul_ln59_583_fu_21226_p2() {
    mul_ln59_583_fu_21226_p2 = (!mul_ln59_583_fu_21226_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_583_fu_21226_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_584_fu_21241_p0() {
    mul_ln59_584_fu_21241_p0 = reg_3593.read();
}

void ntt::thread_mul_ln59_584_fu_21241_p2() {
    mul_ln59_584_fu_21241_p2 = (!mul_ln59_584_fu_21241_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDFADD6.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_584_fu_21241_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDFADD6);
}

void ntt::thread_mul_ln59_585_fu_21256_p0() {
    mul_ln59_585_fu_21256_p0 = reg_3602.read();
}

void ntt::thread_mul_ln59_585_fu_21256_p2() {
    mul_ln59_585_fu_21256_p2 = (!mul_ln59_585_fu_21256_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_585_fu_21256_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_586_fu_21271_p0() {
    mul_ln59_586_fu_21271_p0 = reg_3611.read();
}

void ntt::thread_mul_ln59_586_fu_21271_p2() {
    mul_ln59_586_fu_21271_p2 = (!mul_ln59_586_fu_21271_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_586_fu_21271_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_587_fu_21286_p0() {
    mul_ln59_587_fu_21286_p0 = reg_3621.read();
}

void ntt::thread_mul_ln59_587_fu_21286_p2() {
    mul_ln59_587_fu_21286_p2 = (!mul_ln59_587_fu_21286_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_587_fu_21286_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_588_fu_20046_p0() {
    mul_ln59_588_fu_20046_p0 = sext_ln59_1175_fu_20042_p0.read();
}

void ntt::thread_mul_ln59_588_fu_20046_p2() {
    mul_ln59_588_fu_20046_p2 = (!mul_ln59_588_fu_20046_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_588_fu_20046_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_589_fu_20061_p0() {
    mul_ln59_589_fu_20061_p0 = sext_ln59_1177_fu_20057_p0.read();
}

void ntt::thread_mul_ln59_589_fu_20061_p2() {
    mul_ln59_589_fu_20061_p2 = (!mul_ln59_589_fu_20061_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_589_fu_20061_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_58_fu_11696_p0() {
    mul_ln59_58_fu_11696_p0 = reg_3506.read();
}

void ntt::thread_mul_ln59_58_fu_11696_p2() {
    mul_ln59_58_fu_11696_p2 = (!mul_ln59_58_fu_11696_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_58_fu_11696_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_590_fu_20076_p0() {
    mul_ln59_590_fu_20076_p0 = sext_ln59_1179_fu_20072_p0.read();
}

void ntt::thread_mul_ln59_590_fu_20076_p2() {
    mul_ln59_590_fu_20076_p2 = (!mul_ln59_590_fu_20076_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_590_fu_20076_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_591_fu_21343_p0() {
    mul_ln59_591_fu_21343_p0 = sext_ln59_1181_fu_21339_p0.read();
}

void ntt::thread_mul_ln59_591_fu_21343_p2() {
    mul_ln59_591_fu_21343_p2 = (!mul_ln59_591_fu_21343_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_591_fu_21343_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_592_fu_21358_p0() {
    mul_ln59_592_fu_21358_p0 = sext_ln59_1183_fu_21354_p0.read();
}

void ntt::thread_mul_ln59_592_fu_21358_p2() {
    mul_ln59_592_fu_21358_p2 = (!mul_ln59_592_fu_21358_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51AE7.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_592_fu_21358_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51AE7);
}

void ntt::thread_mul_ln59_593_fu_21373_p0() {
    mul_ln59_593_fu_21373_p0 = sext_ln59_1185_fu_21369_p0.read();
}

void ntt::thread_mul_ln59_593_fu_21373_p2() {
    mul_ln59_593_fu_21373_p2 = (!mul_ln59_593_fu_21373_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_593_fu_21373_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_594_fu_21388_p0() {
    mul_ln59_594_fu_21388_p0 = reg_3680.read();
}

void ntt::thread_mul_ln59_594_fu_21388_p2() {
    mul_ln59_594_fu_21388_p2 = (!mul_ln59_594_fu_21388_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_594_fu_21388_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_595_fu_21403_p0() {
    mul_ln59_595_fu_21403_p0 = reg_3690.read();
}

void ntt::thread_mul_ln59_595_fu_21403_p2() {
    mul_ln59_595_fu_21403_p2 = (!mul_ln59_595_fu_21403_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_595_fu_21403_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_596_fu_21418_p0() {
    mul_ln59_596_fu_21418_p0 = reg_3700.read();
}

void ntt::thread_mul_ln59_596_fu_21418_p2() {
    mul_ln59_596_fu_21418_p2 = (!mul_ln59_596_fu_21418_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_596_fu_21418_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_597_fu_21433_p0() {
    mul_ln59_597_fu_21433_p0 = reg_3710.read();
}

void ntt::thread_mul_ln59_597_fu_21433_p2() {
    mul_ln59_597_fu_21433_p2 = (!mul_ln59_597_fu_21433_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_597_fu_21433_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_598_fu_21448_p0() {
    mul_ln59_598_fu_21448_p0 = reg_3720.read();
}

void ntt::thread_mul_ln59_598_fu_21448_p2() {
    mul_ln59_598_fu_21448_p2 = (!mul_ln59_598_fu_21448_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_598_fu_21448_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_599_fu_21463_p0() {
    mul_ln59_599_fu_21463_p0 = reg_3730.read();
}

void ntt::thread_mul_ln59_599_fu_21463_p2() {
    mul_ln59_599_fu_21463_p2 = (!mul_ln59_599_fu_21463_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_599_fu_21463_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_59_fu_11711_p0() {
    mul_ln59_59_fu_11711_p0 = reg_3516.read();
}

void ntt::thread_mul_ln59_59_fu_11711_p2() {
    mul_ln59_59_fu_11711_p2 = (!mul_ln59_59_fu_11711_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_59_fu_11711_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_5_fu_10921_p0() {
    mul_ln59_5_fu_10921_p0 = reg_2991.read();
}

void ntt::thread_mul_ln59_5_fu_10921_p2() {
    mul_ln59_5_fu_10921_p2 = (!mul_ln59_5_fu_10921_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_5_fu_10921_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_600_fu_20091_p0() {
    mul_ln59_600_fu_20091_p0 = sext_ln59_1199_fu_20087_p0.read();
}

void ntt::thread_mul_ln59_600_fu_20091_p2() {
    mul_ln59_600_fu_20091_p2 = (!mul_ln59_600_fu_20091_p0.read().is_01() || !ap_const_lv53_1FFFFFFFEAA4F7.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_600_fu_20091_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFEAA4F7);
}

void ntt::thread_mul_ln59_601_fu_21492_p0() {
    mul_ln59_601_fu_21492_p0 = sext_ln59_1201_fu_21488_p0.read();
}

void ntt::thread_mul_ln59_601_fu_21492_p2() {
    mul_ln59_601_fu_21492_p2 = (!mul_ln59_601_fu_21492_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_601_fu_21492_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_602_fu_21507_p0() {
    mul_ln59_602_fu_21507_p0 = sext_ln59_1203_fu_21503_p0.read();
}

void ntt::thread_mul_ln59_602_fu_21507_p2() {
    mul_ln59_602_fu_21507_p2 = (!mul_ln59_602_fu_21507_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_602_fu_21507_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_603_fu_21522_p0() {
    mul_ln59_603_fu_21522_p0 = sext_ln59_1205_fu_21518_p0.read();
}

void ntt::thread_mul_ln59_603_fu_21522_p2() {
    mul_ln59_603_fu_21522_p2 = (!mul_ln59_603_fu_21522_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_603_fu_21522_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_604_fu_21537_p0() {
    mul_ln59_604_fu_21537_p0 = sext_ln59_1207_fu_21533_p0.read();
}

void ntt::thread_mul_ln59_604_fu_21537_p2() {
    mul_ln59_604_fu_21537_p2 = (!mul_ln59_604_fu_21537_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_604_fu_21537_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_605_fu_20106_p0() {
    mul_ln59_605_fu_20106_p0 = sext_ln59_1209_fu_20102_p0.read();
}

void ntt::thread_mul_ln59_605_fu_20106_p2() {
    mul_ln59_605_fu_20106_p2 = (!mul_ln59_605_fu_20106_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_605_fu_20106_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_606_fu_21566_p0() {
    mul_ln59_606_fu_21566_p0 = reg_3790.read();
}

void ntt::thread_mul_ln59_606_fu_21566_p2() {
    mul_ln59_606_fu_21566_p2 = (!mul_ln59_606_fu_21566_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_606_fu_21566_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_607_fu_21581_p0() {
    mul_ln59_607_fu_21581_p0 = reg_3800.read();
}

void ntt::thread_mul_ln59_607_fu_21581_p2() {
    mul_ln59_607_fu_21581_p2 = (!mul_ln59_607_fu_21581_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_607_fu_21581_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_608_fu_21596_p0() {
    mul_ln59_608_fu_21596_p0 = sext_ln59_1215_fu_21592_p0.read();
}

void ntt::thread_mul_ln59_608_fu_21596_p2() {
    mul_ln59_608_fu_21596_p2 = (!mul_ln59_608_fu_21596_p0.read().is_01() || !ap_const_lv54_3FFFFFFFCDFC98.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_608_fu_21596_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFCDFC98);
}

void ntt::thread_mul_ln59_609_fu_20121_p0() {
    mul_ln59_609_fu_20121_p0 = sext_ln59_1217_fu_20117_p0.read();
}

void ntt::thread_mul_ln59_609_fu_20121_p2() {
    mul_ln59_609_fu_20121_p2 = (!mul_ln59_609_fu_20121_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_609_fu_20121_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_60_fu_11726_p0() {
    mul_ln59_60_fu_11726_p0 = reg_3526.read();
}

void ntt::thread_mul_ln59_60_fu_11726_p2() {
    mul_ln59_60_fu_11726_p2 = (!mul_ln59_60_fu_11726_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_60_fu_11726_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_610_fu_20136_p0() {
    mul_ln59_610_fu_20136_p0 = sext_ln59_1219_fu_20132_p0.read();
}

void ntt::thread_mul_ln59_610_fu_20136_p2() {
    mul_ln59_610_fu_20136_p2 = (!mul_ln59_610_fu_20136_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_610_fu_20136_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_611_fu_21639_p0() {
    mul_ln59_611_fu_21639_p0 = sext_ln59_1221_fu_21635_p0.read();
}

void ntt::thread_mul_ln59_611_fu_21639_p2() {
    mul_ln59_611_fu_21639_p2 = (!mul_ln59_611_fu_21639_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_611_fu_21639_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_612_fu_20151_p0() {
    mul_ln59_612_fu_20151_p0 = sext_ln59_1223_fu_20147_p0.read();
}

void ntt::thread_mul_ln59_612_fu_20151_p2() {
    mul_ln59_612_fu_20151_p2 = (!mul_ln59_612_fu_20151_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_612_fu_20151_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_613_fu_21668_p0() {
    mul_ln59_613_fu_21668_p0 = reg_3849.read();
}

void ntt::thread_mul_ln59_613_fu_21668_p2() {
    mul_ln59_613_fu_21668_p2 = (!mul_ln59_613_fu_21668_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_613_fu_21668_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_614_fu_20166_p0() {
    mul_ln59_614_fu_20166_p0 = sext_ln59_1227_fu_20162_p0.read();
}

void ntt::thread_mul_ln59_614_fu_20166_p2() {
    mul_ln59_614_fu_20166_p2 = (!mul_ln59_614_fu_20166_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_614_fu_20166_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_615_fu_20181_p0() {
    mul_ln59_615_fu_20181_p0 = sext_ln59_1229_fu_20177_p0.read();
}

void ntt::thread_mul_ln59_615_fu_20181_p2() {
    mul_ln59_615_fu_20181_p2 = (!mul_ln59_615_fu_20181_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_615_fu_20181_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_616_fu_20196_p0() {
    mul_ln59_616_fu_20196_p0 = sext_ln59_1231_fu_20192_p0.read();
}

void ntt::thread_mul_ln59_616_fu_20196_p2() {
    mul_ln59_616_fu_20196_p2 = (!mul_ln59_616_fu_20196_p0.read().is_01() || !ap_const_lv53_1AD035.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_616_fu_20196_p0.read()) * sc_biguint<53>(ap_const_lv53_1AD035);
}

void ntt::thread_mul_ln59_617_fu_20211_p0() {
    mul_ln59_617_fu_20211_p0 = sext_ln59_1233_fu_20207_p0.read();
}

void ntt::thread_mul_ln59_617_fu_20211_p2() {
    mul_ln59_617_fu_20211_p2 = (!mul_ln59_617_fu_20211_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_617_fu_20211_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_618_fu_20226_p0() {
    mul_ln59_618_fu_20226_p0 = sext_ln59_1235_fu_20222_p0.read();
}

void ntt::thread_mul_ln59_618_fu_20226_p2() {
    mul_ln59_618_fu_20226_p2 = (!mul_ln59_618_fu_20226_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_618_fu_20226_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_619_fu_21745_p0() {
    mul_ln59_619_fu_21745_p0 = sext_ln59_1237_fu_21741_p0.read();
}

void ntt::thread_mul_ln59_619_fu_21745_p2() {
    mul_ln59_619_fu_21745_p2 = (!mul_ln59_619_fu_21745_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_619_fu_21745_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_61_fu_11741_p0() {
    mul_ln59_61_fu_11741_p0 = reg_3536.read();
}

void ntt::thread_mul_ln59_61_fu_11741_p2() {
    mul_ln59_61_fu_11741_p2 = (!mul_ln59_61_fu_11741_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_61_fu_11741_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_620_fu_21760_p0() {
    mul_ln59_620_fu_21760_p0 = sext_ln59_1239_fu_21756_p0.read();
}

void ntt::thread_mul_ln59_620_fu_21760_p2() {
    mul_ln59_620_fu_21760_p2 = (!mul_ln59_620_fu_21760_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_620_fu_21760_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_621_fu_21775_p0() {
    mul_ln59_621_fu_21775_p0 = sext_ln59_1241_fu_21771_p0.read();
}

void ntt::thread_mul_ln59_621_fu_21775_p2() {
    mul_ln59_621_fu_21775_p2 = (!mul_ln59_621_fu_21775_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_621_fu_21775_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_622_fu_21790_p0() {
    mul_ln59_622_fu_21790_p0 = sext_ln59_1243_fu_21786_p0.read();
}

void ntt::thread_mul_ln59_622_fu_21790_p2() {
    mul_ln59_622_fu_21790_p2 = (!mul_ln59_622_fu_21790_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_622_fu_21790_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_623_fu_21805_p0() {
    mul_ln59_623_fu_21805_p0 = sext_ln59_1245_fu_21801_p0.read();
}

void ntt::thread_mul_ln59_623_fu_21805_p2() {
    mul_ln59_623_fu_21805_p2 = (!mul_ln59_623_fu_21805_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_623_fu_21805_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_624_fu_21820_p0() {
    mul_ln59_624_fu_21820_p0 = sext_ln59_1247_fu_21816_p0.read();
}

void ntt::thread_mul_ln59_624_fu_21820_p2() {
    mul_ln59_624_fu_21820_p2 = (!mul_ln59_624_fu_21820_p0.read().is_01() || !ap_const_lv48_FFFFFFFFB422.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_624_fu_21820_p0.read()) * sc_bigint<48>(ap_const_lv48_FFFFFFFFB422);
}

void ntt::thread_mul_ln59_625_fu_21835_p0() {
    mul_ln59_625_fu_21835_p0 = sext_ln59_1249_fu_21831_p0.read();
}

void ntt::thread_mul_ln59_625_fu_21835_p2() {
    mul_ln59_625_fu_21835_p2 = (!mul_ln59_625_fu_21835_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_625_fu_21835_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_626_fu_21850_p0() {
    mul_ln59_626_fu_21850_p0 = sext_ln59_1251_fu_21846_p0.read();
}

void ntt::thread_mul_ln59_626_fu_21850_p2() {
    mul_ln59_626_fu_21850_p2 = (!mul_ln59_626_fu_21850_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_626_fu_21850_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_627_fu_21865_p0() {
    mul_ln59_627_fu_21865_p0 = sext_ln59_1253_fu_21861_p0.read();
}

void ntt::thread_mul_ln59_627_fu_21865_p2() {
    mul_ln59_627_fu_21865_p2 = (!mul_ln59_627_fu_21865_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_627_fu_21865_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_628_fu_21880_p0() {
    mul_ln59_628_fu_21880_p0 = sext_ln59_1255_fu_21876_p0.read();
}

void ntt::thread_mul_ln59_628_fu_21880_p2() {
    mul_ln59_628_fu_21880_p2 = (!mul_ln59_628_fu_21880_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_628_fu_21880_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_629_fu_21895_p0() {
    mul_ln59_629_fu_21895_p0 = sext_ln59_1257_fu_21891_p0.read();
}

void ntt::thread_mul_ln59_629_fu_21895_p2() {
    mul_ln59_629_fu_21895_p2 = (!mul_ln59_629_fu_21895_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_629_fu_21895_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_62_fu_11756_p0() {
    mul_ln59_62_fu_11756_p0 = reg_3546.read();
}

void ntt::thread_mul_ln59_62_fu_11756_p2() {
    mul_ln59_62_fu_11756_p2 = (!mul_ln59_62_fu_11756_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_62_fu_11756_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_630_fu_21910_p0() {
    mul_ln59_630_fu_21910_p0 = sext_ln59_1259_fu_21906_p0.read();
}

void ntt::thread_mul_ln59_630_fu_21910_p2() {
    mul_ln59_630_fu_21910_p2 = (!mul_ln59_630_fu_21910_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_630_fu_21910_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_631_fu_20241_p0() {
    mul_ln59_631_fu_20241_p0 = sext_ln59_1261_fu_20237_p0.read();
}

void ntt::thread_mul_ln59_631_fu_20241_p2() {
    mul_ln59_631_fu_20241_p2 = (!mul_ln59_631_fu_20241_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_631_fu_20241_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_632_fu_21937_p0() {
    mul_ln59_632_fu_21937_p0 = reg_4029.read();
}

void ntt::thread_mul_ln59_632_fu_21937_p2() {
    mul_ln59_632_fu_21937_p2 = (!mul_ln59_632_fu_21937_p0.read().is_01() || !ap_const_lv54_3D3201.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_632_fu_21937_p0.read()) * sc_biguint<54>(ap_const_lv54_3D3201);
}

void ntt::thread_mul_ln59_633_fu_21952_p0() {
    mul_ln59_633_fu_21952_p0 = reg_4039.read();
}

void ntt::thread_mul_ln59_633_fu_21952_p2() {
    mul_ln59_633_fu_21952_p2 = (!mul_ln59_633_fu_21952_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_633_fu_21952_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_634_fu_21967_p0() {
    mul_ln59_634_fu_21967_p0 = reg_4049.read();
}

void ntt::thread_mul_ln59_634_fu_21967_p2() {
    mul_ln59_634_fu_21967_p2 = (!mul_ln59_634_fu_21967_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_634_fu_21967_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_635_fu_21982_p0() {
    mul_ln59_635_fu_21982_p0 = reg_4059.read();
}

void ntt::thread_mul_ln59_635_fu_21982_p2() {
    mul_ln59_635_fu_21982_p2 = (!mul_ln59_635_fu_21982_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_635_fu_21982_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_636_fu_21997_p0() {
    mul_ln59_636_fu_21997_p0 = reg_4069.read();
}

void ntt::thread_mul_ln59_636_fu_21997_p2() {
    mul_ln59_636_fu_21997_p2 = (!mul_ln59_636_fu_21997_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_636_fu_21997_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_637_fu_22012_p0() {
    mul_ln59_637_fu_22012_p0 = reg_4079.read();
}

void ntt::thread_mul_ln59_637_fu_22012_p2() {
    mul_ln59_637_fu_22012_p2 = (!mul_ln59_637_fu_22012_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_637_fu_22012_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_638_fu_22027_p0() {
    mul_ln59_638_fu_22027_p0 = reg_4089.read();
}

void ntt::thread_mul_ln59_638_fu_22027_p2() {
    mul_ln59_638_fu_22027_p2 = (!mul_ln59_638_fu_22027_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_638_fu_22027_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_639_fu_22042_p0() {
    mul_ln59_639_fu_22042_p0 = reg_4099.read();
}

void ntt::thread_mul_ln59_639_fu_22042_p2() {
    mul_ln59_639_fu_22042_p2 = (!mul_ln59_639_fu_22042_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_639_fu_22042_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_63_fu_11771_p0() {
    mul_ln59_63_fu_11771_p0 = reg_3556.read();
}

void ntt::thread_mul_ln59_63_fu_11771_p2() {
    mul_ln59_63_fu_11771_p2 = (!mul_ln59_63_fu_11771_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_63_fu_11771_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_640_fu_22057_p0() {
    mul_ln59_640_fu_22057_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_640_fu_22057_p2() {
    mul_ln59_640_fu_22057_p2 = (!mul_ln59_640_fu_22057_p0.read().is_01() || !ap_const_lv51_445C5.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_640_fu_22057_p0.read()) * sc_biguint<51>(ap_const_lv51_445C5);
}

void ntt::thread_mul_ln59_641_fu_22282_p0() {
    mul_ln59_641_fu_22282_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_641_fu_22282_p2() {
    mul_ln59_641_fu_22282_p2 = (!mul_ln59_641_fu_22282_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_641_fu_22282_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void ntt::thread_mul_ln59_642_fu_22297_p0() {
    mul_ln59_642_fu_22297_p0 = reg_2958.read();
}

void ntt::thread_mul_ln59_642_fu_22297_p2() {
    mul_ln59_642_fu_22297_p2 = (!mul_ln59_642_fu_22297_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_642_fu_22297_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void ntt::thread_mul_ln59_643_fu_22312_p0() {
    mul_ln59_643_fu_22312_p0 = reg_2967.read();
}

void ntt::thread_mul_ln59_643_fu_22312_p2() {
    mul_ln59_643_fu_22312_p2 = (!mul_ln59_643_fu_22312_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_643_fu_22312_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void ntt::thread_mul_ln59_644_fu_22327_p0() {
    mul_ln59_644_fu_22327_p0 = reg_2975.read();
}

void ntt::thread_mul_ln59_644_fu_22327_p2() {
    mul_ln59_644_fu_22327_p2 = (!mul_ln59_644_fu_22327_p0.read().is_01() || !ap_const_lv54_294A67.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_644_fu_22327_p0.read()) * sc_biguint<54>(ap_const_lv54_294A67);
}

void ntt::thread_mul_ln59_645_fu_22342_p0() {
    mul_ln59_645_fu_22342_p0 = reg_2983.read();
}

void ntt::thread_mul_ln59_645_fu_22342_p2() {
    mul_ln59_645_fu_22342_p2 = (!mul_ln59_645_fu_22342_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln59_645_fu_22342_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void ntt::thread_mul_ln59_646_fu_22072_p0() {
    mul_ln59_646_fu_22072_p0 = sext_ln59_1291_fu_22068_p0.read();
}

void ntt::thread_mul_ln59_646_fu_22072_p2() {
    mul_ln59_646_fu_22072_p2 = (!mul_ln59_646_fu_22072_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln59_646_fu_22072_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void ntt::thread_mul_ln59_647_fu_22371_p0() {
    mul_ln59_647_fu_22371_p0 = sext_ln59_1293_fu_22367_p0.read();
}

void ntt::thread_mul_ln59_647_fu_22371_p2() {
    mul_ln59_647_fu_22371_p2 = (!mul_ln59_647_fu_22371_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln59_647_fu_22371_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void ntt::thread_mul_ln59_648_fu_22386_p0() {
    mul_ln59_648_fu_22386_p0 = sext_ln59_1295_fu_22382_p0.read();
}

void ntt::thread_mul_ln59_648_fu_22386_p2() {
    mul_ln59_648_fu_22386_p2 = (!mul_ln59_648_fu_22386_p0.read().is_01() || !ap_const_lv50_17620.is_01())? sc_lv<50>(): sc_bigint<32>(mul_ln59_648_fu_22386_p0.read()) * sc_biguint<50>(ap_const_lv50_17620);
}

void ntt::thread_mul_ln59_649_fu_22401_p0() {
    mul_ln59_649_fu_22401_p0 = reg_3020.read();
}

void ntt::thread_mul_ln59_649_fu_22401_p2() {
    mul_ln59_649_fu_22401_p2 = (!mul_ln59_649_fu_22401_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_649_fu_22401_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void ntt::thread_mul_ln59_64_fu_11786_p0() {
    mul_ln59_64_fu_11786_p0 = reg_3566.read();
}

void ntt::thread_mul_ln59_64_fu_11786_p2() {
    mul_ln59_64_fu_11786_p2 = (!mul_ln59_64_fu_11786_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_64_fu_11786_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_650_fu_22416_p0() {
    mul_ln59_650_fu_22416_p0 = reg_3030.read();
}

void ntt::thread_mul_ln59_650_fu_22416_p2() {
    mul_ln59_650_fu_22416_p2 = (!mul_ln59_650_fu_22416_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_650_fu_22416_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void ntt::thread_mul_ln59_651_fu_22431_p0() {
    mul_ln59_651_fu_22431_p0 = reg_3040.read();
}

void ntt::thread_mul_ln59_651_fu_22431_p2() {
    mul_ln59_651_fu_22431_p2 = (!mul_ln59_651_fu_22431_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_651_fu_22431_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void ntt::thread_mul_ln59_652_fu_22446_p0() {
    mul_ln59_652_fu_22446_p0 = reg_3050.read();
}

void ntt::thread_mul_ln59_652_fu_22446_p2() {
    mul_ln59_652_fu_22446_p2 = (!mul_ln59_652_fu_22446_p0.read().is_01() || !ap_const_lv54_2EF4CD.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_652_fu_22446_p0.read()) * sc_biguint<54>(ap_const_lv54_2EF4CD);
}

void ntt::thread_mul_ln59_653_fu_22461_p0() {
    mul_ln59_653_fu_22461_p0 = reg_3060.read();
}

void ntt::thread_mul_ln59_653_fu_22461_p2() {
    mul_ln59_653_fu_22461_p2 = (!mul_ln59_653_fu_22461_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_653_fu_22461_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void ntt::thread_mul_ln59_654_fu_22476_p0() {
    mul_ln59_654_fu_22476_p0 = reg_3070.read();
}

void ntt::thread_mul_ln59_654_fu_22476_p2() {
    mul_ln59_654_fu_22476_p2 = (!mul_ln59_654_fu_22476_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_654_fu_22476_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void ntt::thread_mul_ln59_655_fu_22491_p0() {
    mul_ln59_655_fu_22491_p0 = reg_3080.read();
}

void ntt::thread_mul_ln59_655_fu_22491_p2() {
    mul_ln59_655_fu_22491_p2 = (!mul_ln59_655_fu_22491_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_655_fu_22491_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void ntt::thread_mul_ln59_656_fu_22506_p0() {
    mul_ln59_656_fu_22506_p0 = reg_3090.read();
}

void ntt::thread_mul_ln59_656_fu_22506_p2() {
    mul_ln59_656_fu_22506_p2 = (!mul_ln59_656_fu_22506_p0.read().is_01() || !ap_const_lv54_35DEC5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_656_fu_22506_p0.read()) * sc_biguint<54>(ap_const_lv54_35DEC5);
}

void ntt::thread_mul_ln59_657_fu_22521_p0() {
    mul_ln59_657_fu_22521_p0 = reg_3100.read();
}

void ntt::thread_mul_ln59_657_fu_22521_p2() {
    mul_ln59_657_fu_22521_p2 = (!mul_ln59_657_fu_22521_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_657_fu_22521_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void ntt::thread_mul_ln59_658_fu_22536_p0() {
    mul_ln59_658_fu_22536_p0 = reg_3110.read();
}

void ntt::thread_mul_ln59_658_fu_22536_p2() {
    mul_ln59_658_fu_22536_p2 = (!mul_ln59_658_fu_22536_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_658_fu_22536_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void ntt::thread_mul_ln59_659_fu_22551_p0() {
    mul_ln59_659_fu_22551_p0 = reg_3120.read();
}

void ntt::thread_mul_ln59_659_fu_22551_p2() {
    mul_ln59_659_fu_22551_p2 = (!mul_ln59_659_fu_22551_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_659_fu_22551_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void ntt::thread_mul_ln59_65_fu_11801_p0() {
    mul_ln59_65_fu_11801_p0 = reg_3576.read();
}

void ntt::thread_mul_ln59_65_fu_11801_p2() {
    mul_ln59_65_fu_11801_p2 = (!mul_ln59_65_fu_11801_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_65_fu_11801_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_660_fu_22566_p0() {
    mul_ln59_660_fu_22566_p0 = reg_3130.read();
}

void ntt::thread_mul_ln59_660_fu_22566_p2() {
    mul_ln59_660_fu_22566_p2 = (!mul_ln59_660_fu_22566_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6A503.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_660_fu_22566_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6A503);
}

void ntt::thread_mul_ln59_661_fu_22581_p0() {
    mul_ln59_661_fu_22581_p0 = reg_3140.read();
}

void ntt::thread_mul_ln59_661_fu_22581_p2() {
    mul_ln59_661_fu_22581_p2 = (!mul_ln59_661_fu_22581_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_661_fu_22581_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void ntt::thread_mul_ln59_662_fu_22596_p0() {
    mul_ln59_662_fu_22596_p0 = reg_3150.read();
}

void ntt::thread_mul_ln59_662_fu_22596_p2() {
    mul_ln59_662_fu_22596_p2 = (!mul_ln59_662_fu_22596_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_662_fu_22596_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void ntt::thread_mul_ln59_663_fu_22611_p0() {
    mul_ln59_663_fu_22611_p0 = reg_3160.read();
}

void ntt::thread_mul_ln59_663_fu_22611_p2() {
    mul_ln59_663_fu_22611_p2 = (!mul_ln59_663_fu_22611_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_663_fu_22611_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void ntt::thread_mul_ln59_664_fu_22626_p0() {
    mul_ln59_664_fu_22626_p0 = sext_ln59_1327_fu_22622_p0.read();
}

void ntt::thread_mul_ln59_664_fu_22626_p2() {
    mul_ln59_664_fu_22626_p2 = (!mul_ln59_664_fu_22626_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC9302C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_664_fu_22626_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC9302C);
}

void ntt::thread_mul_ln59_665_fu_22641_p0() {
    mul_ln59_665_fu_22641_p0 = sext_ln59_1329_fu_22637_p0.read();
}

void ntt::thread_mul_ln59_665_fu_22641_p2() {
    mul_ln59_665_fu_22641_p2 = (!mul_ln59_665_fu_22641_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_665_fu_22641_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void ntt::thread_mul_ln59_666_fu_22656_p0() {
    mul_ln59_666_fu_22656_p0 = reg_3198.read();
}

void ntt::thread_mul_ln59_666_fu_22656_p2() {
    mul_ln59_666_fu_22656_p2 = (!mul_ln59_666_fu_22656_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_666_fu_22656_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void ntt::thread_mul_ln59_667_fu_22671_p0() {
    mul_ln59_667_fu_22671_p0 = reg_3208.read();
}

void ntt::thread_mul_ln59_667_fu_22671_p2() {
    mul_ln59_667_fu_22671_p2 = (!mul_ln59_667_fu_22671_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_667_fu_22671_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void ntt::thread_mul_ln59_668_fu_22686_p0() {
    mul_ln59_668_fu_22686_p0 = reg_3218.read();
}

void ntt::thread_mul_ln59_668_fu_22686_p2() {
    mul_ln59_668_fu_22686_p2 = (!mul_ln59_668_fu_22686_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD947D4.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_668_fu_22686_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD947D4);
}

void ntt::thread_mul_ln59_669_fu_22701_p0() {
    mul_ln59_669_fu_22701_p0 = reg_3228.read();
}

void ntt::thread_mul_ln59_669_fu_22701_p2() {
    mul_ln59_669_fu_22701_p2 = (!mul_ln59_669_fu_22701_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_669_fu_22701_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void ntt::thread_mul_ln59_66_fu_11816_p0() {
    mul_ln59_66_fu_11816_p0 = reg_3585.read();
}

void ntt::thread_mul_ln59_66_fu_11816_p2() {
    mul_ln59_66_fu_11816_p2 = (!mul_ln59_66_fu_11816_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_66_fu_11816_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_670_fu_22716_p0() {
    mul_ln59_670_fu_22716_p0 = reg_3238.read();
}

void ntt::thread_mul_ln59_670_fu_22716_p2() {
    mul_ln59_670_fu_22716_p2 = (!mul_ln59_670_fu_22716_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_670_fu_22716_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void ntt::thread_mul_ln59_671_fu_22731_p0() {
    mul_ln59_671_fu_22731_p0 = reg_3248.read();
}

void ntt::thread_mul_ln59_671_fu_22731_p2() {
    mul_ln59_671_fu_22731_p2 = (!mul_ln59_671_fu_22731_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_671_fu_22731_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void ntt::thread_mul_ln59_672_fu_22746_p0() {
    mul_ln59_672_fu_22746_p0 = sext_ln59_1343_fu_22742_p0.read();
}

void ntt::thread_mul_ln59_672_fu_22746_p2() {
    mul_ln59_672_fu_22746_p2 = (!mul_ln59_672_fu_22746_p0.read().is_01() || !ap_const_lv54_3BBEAF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_672_fu_22746_p0.read()) * sc_biguint<54>(ap_const_lv54_3BBEAF);
}

void ntt::thread_mul_ln59_673_fu_22761_p0() {
    mul_ln59_673_fu_22761_p0 = reg_3276.read();
}

void ntt::thread_mul_ln59_673_fu_22761_p2() {
    mul_ln59_673_fu_22761_p2 = (!mul_ln59_673_fu_22761_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_673_fu_22761_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void ntt::thread_mul_ln59_674_fu_22776_p0() {
    mul_ln59_674_fu_22776_p0 = reg_3286.read();
}

void ntt::thread_mul_ln59_674_fu_22776_p2() {
    mul_ln59_674_fu_22776_p2 = (!mul_ln59_674_fu_22776_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_674_fu_22776_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void ntt::thread_mul_ln59_675_fu_22791_p0() {
    mul_ln59_675_fu_22791_p0 = reg_3296.read();
}

void ntt::thread_mul_ln59_675_fu_22791_p2() {
    mul_ln59_675_fu_22791_p2 = (!mul_ln59_675_fu_22791_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_675_fu_22791_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void ntt::thread_mul_ln59_676_fu_22806_p0() {
    mul_ln59_676_fu_22806_p0 = reg_3306.read();
}

void ntt::thread_mul_ln59_676_fu_22806_p2() {
    mul_ln59_676_fu_22806_p2 = (!mul_ln59_676_fu_22806_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC51585.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_676_fu_22806_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC51585);
}

void ntt::thread_mul_ln59_677_fu_22821_p0() {
    mul_ln59_677_fu_22821_p0 = reg_3316.read();
}

void ntt::thread_mul_ln59_677_fu_22821_p2() {
    mul_ln59_677_fu_22821_p2 = (!mul_ln59_677_fu_22821_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_677_fu_22821_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void ntt::thread_mul_ln59_678_fu_22836_p0() {
    mul_ln59_678_fu_22836_p0 = reg_3326.read();
}

void ntt::thread_mul_ln59_678_fu_22836_p2() {
    mul_ln59_678_fu_22836_p2 = (!mul_ln59_678_fu_22836_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_678_fu_22836_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void ntt::thread_mul_ln59_679_fu_22851_p0() {
    mul_ln59_679_fu_22851_p0 = reg_3336.read();
}

void ntt::thread_mul_ln59_679_fu_22851_p2() {
    mul_ln59_679_fu_22851_p2 = (!mul_ln59_679_fu_22851_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_679_fu_22851_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void ntt::thread_mul_ln59_67_fu_11831_p0() {
    mul_ln59_67_fu_11831_p0 = reg_3593.read();
}

void ntt::thread_mul_ln59_67_fu_11831_p2() {
    mul_ln59_67_fu_11831_p2 = (!mul_ln59_67_fu_11831_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_67_fu_11831_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_680_fu_22866_p0() {
    mul_ln59_680_fu_22866_p0 = reg_3346.read();
}

void ntt::thread_mul_ln59_680_fu_22866_p2() {
    mul_ln59_680_fu_22866_p2 = (!mul_ln59_680_fu_22866_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD18E7C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_680_fu_22866_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD18E7C);
}

void ntt::thread_mul_ln59_681_fu_22881_p0() {
    mul_ln59_681_fu_22881_p0 = reg_3356.read();
}

void ntt::thread_mul_ln59_681_fu_22881_p2() {
    mul_ln59_681_fu_22881_p2 = (!mul_ln59_681_fu_22881_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_681_fu_22881_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void ntt::thread_mul_ln59_682_fu_22896_p0() {
    mul_ln59_682_fu_22896_p0 = reg_3366.read();
}

void ntt::thread_mul_ln59_682_fu_22896_p2() {
    mul_ln59_682_fu_22896_p2 = (!mul_ln59_682_fu_22896_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_682_fu_22896_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void ntt::thread_mul_ln59_683_fu_22911_p0() {
    mul_ln59_683_fu_22911_p0 = reg_3376.read();
}

void ntt::thread_mul_ln59_683_fu_22911_p2() {
    mul_ln59_683_fu_22911_p2 = (!mul_ln59_683_fu_22911_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_683_fu_22911_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void ntt::thread_mul_ln59_684_fu_22926_p0() {
    mul_ln59_684_fu_22926_p0 = reg_3386.read();
}

void ntt::thread_mul_ln59_684_fu_22926_p2() {
    mul_ln59_684_fu_22926_p2 = (!mul_ln59_684_fu_22926_p0.read().is_01() || !ap_const_lv54_368A96.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_684_fu_22926_p0.read()) * sc_biguint<54>(ap_const_lv54_368A96);
}

void ntt::thread_mul_ln59_685_fu_22941_p0() {
    mul_ln59_685_fu_22941_p0 = reg_3396.read();
}

void ntt::thread_mul_ln59_685_fu_22941_p2() {
    mul_ln59_685_fu_22941_p2 = (!mul_ln59_685_fu_22941_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_685_fu_22941_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void ntt::thread_mul_ln59_686_fu_22956_p0() {
    mul_ln59_686_fu_22956_p0 = reg_3406.read();
}

void ntt::thread_mul_ln59_686_fu_22956_p2() {
    mul_ln59_686_fu_22956_p2 = (!mul_ln59_686_fu_22956_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_686_fu_22956_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void ntt::thread_mul_ln59_687_fu_22971_p0() {
    mul_ln59_687_fu_22971_p0 = reg_3416.read();
}

void ntt::thread_mul_ln59_687_fu_22971_p2() {
    mul_ln59_687_fu_22971_p2 = (!mul_ln59_687_fu_22971_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_687_fu_22971_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void ntt::thread_mul_ln59_688_fu_22986_p0() {
    mul_ln59_688_fu_22986_p0 = reg_3426.read();
}

void ntt::thread_mul_ln59_688_fu_22986_p2() {
    mul_ln59_688_fu_22986_p2 = (!mul_ln59_688_fu_22986_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD43E41.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_688_fu_22986_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD43E41);
}

void ntt::thread_mul_ln59_689_fu_23001_p0() {
    mul_ln59_689_fu_23001_p0 = reg_3436.read();
}

void ntt::thread_mul_ln59_689_fu_23001_p2() {
    mul_ln59_689_fu_23001_p2 = (!mul_ln59_689_fu_23001_p0.read().is_01() || !ap_const_lv54_360400.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_689_fu_23001_p0.read()) * sc_biguint<54>(ap_const_lv54_360400);
}

void ntt::thread_mul_ln59_68_fu_11846_p0() {
    mul_ln59_68_fu_11846_p0 = reg_3602.read();
}

void ntt::thread_mul_ln59_68_fu_11846_p2() {
    mul_ln59_68_fu_11846_p2 = (!mul_ln59_68_fu_11846_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_68_fu_11846_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_690_fu_23016_p0() {
    mul_ln59_690_fu_23016_p0 = reg_3446.read();
}

void ntt::thread_mul_ln59_690_fu_23016_p2() {
    mul_ln59_690_fu_23016_p2 = (!mul_ln59_690_fu_23016_p0.read().is_01() || !ap_const_lv54_360400.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_690_fu_23016_p0.read()) * sc_biguint<54>(ap_const_lv54_360400);
}

void ntt::thread_mul_ln59_691_fu_23031_p0() {
    mul_ln59_691_fu_23031_p0 = reg_3456.read();
}

void ntt::thread_mul_ln59_691_fu_23031_p2() {
    mul_ln59_691_fu_23031_p2 = (!mul_ln59_691_fu_23031_p0.read().is_01() || !ap_const_lv54_360400.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_691_fu_23031_p0.read()) * sc_biguint<54>(ap_const_lv54_360400);
}

void ntt::thread_mul_ln59_692_fu_22087_p0() {
    mul_ln59_692_fu_22087_p0 = sext_ln59_1383_fu_22083_p0.read();
}

void ntt::thread_mul_ln59_692_fu_22087_p2() {
    mul_ln59_692_fu_22087_p2 = (!mul_ln59_692_fu_22087_p0.read().is_01() || !ap_const_lv54_360400.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_692_fu_22087_p0.read()) * sc_biguint<54>(ap_const_lv54_360400);
}

void ntt::thread_mul_ln59_693_fu_23060_p0() {
    mul_ln59_693_fu_23060_p0 = sext_ln59_1385_fu_23056_p0.read();
}

void ntt::thread_mul_ln59_693_fu_23060_p2() {
    mul_ln59_693_fu_23060_p2 = (!mul_ln59_693_fu_23060_p0.read().is_01() || !ap_const_lv51_7FFFFFFFB6A4D.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_693_fu_23060_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFB6A4D);
}

void ntt::thread_mul_ln59_694_fu_22102_p0() {
    mul_ln59_694_fu_22102_p0 = sext_ln59_1387_fu_22098_p0.read();
}

void ntt::thread_mul_ln59_694_fu_22102_p2() {
    mul_ln59_694_fu_22102_p2 = (!mul_ln59_694_fu_22102_p0.read().is_01() || !ap_const_lv51_7FFFFFFFB6A4D.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_694_fu_22102_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFB6A4D);
}

void ntt::thread_mul_ln59_695_fu_23089_p0() {
    mul_ln59_695_fu_23089_p0 = reg_3486.read();
}

void ntt::thread_mul_ln59_695_fu_23089_p2() {
    mul_ln59_695_fu_23089_p2 = (!mul_ln59_695_fu_23089_p0.read().is_01() || !ap_const_lv51_7FFFFFFFB6A4D.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_695_fu_23089_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFB6A4D);
}

void ntt::thread_mul_ln59_696_fu_23104_p0() {
    mul_ln59_696_fu_23104_p0 = reg_3496.read();
}

void ntt::thread_mul_ln59_696_fu_23104_p2() {
    mul_ln59_696_fu_23104_p2 = (!mul_ln59_696_fu_23104_p0.read().is_01() || !ap_const_lv51_7FFFFFFFB6A4D.is_01())? sc_lv<51>(): sc_bigint<32>(mul_ln59_696_fu_23104_p0.read()) * sc_bigint<51>(ap_const_lv51_7FFFFFFFB6A4D);
}

void ntt::thread_mul_ln59_697_fu_23119_p0() {
    mul_ln59_697_fu_23119_p0 = reg_3506.read();
}

void ntt::thread_mul_ln59_697_fu_23119_p2() {
    mul_ln59_697_fu_23119_p2 = (!mul_ln59_697_fu_23119_p0.read().is_01() || !ap_const_lv54_23D69C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_697_fu_23119_p0.read()) * sc_biguint<54>(ap_const_lv54_23D69C);
}

void ntt::thread_mul_ln59_698_fu_23134_p0() {
    mul_ln59_698_fu_23134_p0 = reg_3516.read();
}

void ntt::thread_mul_ln59_698_fu_23134_p2() {
    mul_ln59_698_fu_23134_p2 = (!mul_ln59_698_fu_23134_p0.read().is_01() || !ap_const_lv54_23D69C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_698_fu_23134_p0.read()) * sc_biguint<54>(ap_const_lv54_23D69C);
}

void ntt::thread_mul_ln59_699_fu_23149_p0() {
    mul_ln59_699_fu_23149_p0 = reg_3526.read();
}

void ntt::thread_mul_ln59_699_fu_23149_p2() {
    mul_ln59_699_fu_23149_p2 = (!mul_ln59_699_fu_23149_p0.read().is_01() || !ap_const_lv54_23D69C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_699_fu_23149_p0.read()) * sc_biguint<54>(ap_const_lv54_23D69C);
}

void ntt::thread_mul_ln59_69_fu_11874_p0() {
    mul_ln59_69_fu_11874_p0 = reg_3611.read();
}

void ntt::thread_mul_ln59_69_fu_11874_p2() {
    mul_ln59_69_fu_11874_p2 = (!mul_ln59_69_fu_11874_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_69_fu_11874_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_6_fu_10936_p0() {
    mul_ln59_6_fu_10936_p0 = reg_3001.read();
}

void ntt::thread_mul_ln59_6_fu_10936_p2() {
    mul_ln59_6_fu_10936_p2 = (!mul_ln59_6_fu_10936_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_6_fu_10936_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_700_fu_23164_p0() {
    mul_ln59_700_fu_23164_p0 = reg_3536.read();
}

void ntt::thread_mul_ln59_700_fu_23164_p2() {
    mul_ln59_700_fu_23164_p2 = (!mul_ln59_700_fu_23164_p0.read().is_01() || !ap_const_lv54_23D69C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_700_fu_23164_p0.read()) * sc_biguint<54>(ap_const_lv54_23D69C);
}

void ntt::thread_mul_ln59_701_fu_22117_p0() {
    mul_ln59_701_fu_22117_p0 = sext_ln59_1401_fu_22113_p0.read();
}

void ntt::thread_mul_ln59_701_fu_22117_p2() {
    mul_ln59_701_fu_22117_p2 = (!mul_ln59_701_fu_22117_p0.read().is_01() || !ap_const_lv52_FFFFFFFF7C55D.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_701_fu_22117_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF7C55D);
}

void ntt::thread_mul_ln59_702_fu_22132_p0() {
    mul_ln59_702_fu_22132_p0 = sext_ln59_1403_fu_22128_p0.read();
}

void ntt::thread_mul_ln59_702_fu_22132_p2() {
    mul_ln59_702_fu_22132_p2 = (!mul_ln59_702_fu_22132_p0.read().is_01() || !ap_const_lv52_FFFFFFFF7C55D.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_702_fu_22132_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF7C55D);
}

void ntt::thread_mul_ln59_703_fu_22147_p0() {
    mul_ln59_703_fu_22147_p0 = sext_ln59_1405_fu_22143_p0.read();
}

void ntt::thread_mul_ln59_703_fu_22147_p2() {
    mul_ln59_703_fu_22147_p2 = (!mul_ln59_703_fu_22147_p0.read().is_01() || !ap_const_lv52_FFFFFFFF7C55D.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_703_fu_22147_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF7C55D);
}

void ntt::thread_mul_ln59_704_fu_22162_p0() {
    mul_ln59_704_fu_22162_p0 = sext_ln59_1407_fu_22158_p0.read();
}

void ntt::thread_mul_ln59_704_fu_22162_p2() {
    mul_ln59_704_fu_22162_p2 = (!mul_ln59_704_fu_22162_p0.read().is_01() || !ap_const_lv52_FFFFFFFF7C55D.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_704_fu_22162_p0.read()) * sc_bigint<52>(ap_const_lv52_FFFFFFFF7C55D);
}

void ntt::thread_mul_ln59_705_fu_23235_p0() {
    mul_ln59_705_fu_23235_p0 = reg_3566.read();
}

void ntt::thread_mul_ln59_705_fu_23235_p2() {
    mul_ln59_705_fu_23235_p2 = (!mul_ln59_705_fu_23235_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6123D.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_705_fu_23235_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6123D);
}

void ntt::thread_mul_ln59_706_fu_23250_p0() {
    mul_ln59_706_fu_23250_p0 = reg_3576.read();
}

void ntt::thread_mul_ln59_706_fu_23250_p2() {
    mul_ln59_706_fu_23250_p2 = (!mul_ln59_706_fu_23250_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6123D.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_706_fu_23250_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6123D);
}

void ntt::thread_mul_ln59_707_fu_23265_p0() {
    mul_ln59_707_fu_23265_p0 = reg_3585.read();
}

void ntt::thread_mul_ln59_707_fu_23265_p2() {
    mul_ln59_707_fu_23265_p2 = (!mul_ln59_707_fu_23265_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6123D.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_707_fu_23265_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6123D);
}

void ntt::thread_mul_ln59_708_fu_22177_p0() {
    mul_ln59_708_fu_22177_p0 = sext_ln59_1415_fu_22173_p0.read();
}

void ntt::thread_mul_ln59_708_fu_22177_p2() {
    mul_ln59_708_fu_22177_p2 = (!mul_ln59_708_fu_22177_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6123D.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_708_fu_22177_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6123D);
}

void ntt::thread_mul_ln59_709_fu_22192_p0() {
    mul_ln59_709_fu_22192_p0 = sext_ln59_1417_fu_22188_p0.read();
}

void ntt::thread_mul_ln59_709_fu_22192_p2() {
    mul_ln59_709_fu_22192_p2 = (!mul_ln59_709_fu_22192_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6EAD6.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_709_fu_22192_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6EAD6);
}

void ntt::thread_mul_ln59_70_fu_11889_p0() {
    mul_ln59_70_fu_11889_p0 = reg_3621.read();
}

void ntt::thread_mul_ln59_70_fu_11889_p2() {
    mul_ln59_70_fu_11889_p2 = (!mul_ln59_70_fu_11889_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_70_fu_11889_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_710_fu_23308_p0() {
    mul_ln59_710_fu_23308_p0 = reg_3602.read();
}

void ntt::thread_mul_ln59_710_fu_23308_p2() {
    mul_ln59_710_fu_23308_p2 = (!mul_ln59_710_fu_23308_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6EAD6.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_710_fu_23308_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6EAD6);
}

void ntt::thread_mul_ln59_711_fu_22207_p0() {
    mul_ln59_711_fu_22207_p0 = sext_ln59_1421_fu_22203_p0.read();
}

void ntt::thread_mul_ln59_711_fu_22207_p2() {
    mul_ln59_711_fu_22207_p2 = (!mul_ln59_711_fu_22207_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6EAD6.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_711_fu_22207_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6EAD6);
}

void ntt::thread_mul_ln59_712_fu_23337_p0() {
    mul_ln59_712_fu_23337_p0 = sext_ln59_1423_fu_23333_p0.read();
}

void ntt::thread_mul_ln59_712_fu_23337_p2() {
    mul_ln59_712_fu_23337_p2 = (!mul_ln59_712_fu_23337_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE6EAD6.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_712_fu_23337_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE6EAD6);
}

void ntt::thread_mul_ln59_713_fu_23366_p0() {
    mul_ln59_713_fu_23366_p0 = sext_ln59_1425_fu_23362_p0.read();
}

void ntt::thread_mul_ln59_713_fu_23366_p2() {
    mul_ln59_713_fu_23366_p2 = (!mul_ln59_713_fu_23366_p0.read().is_01() || !ap_const_lv54_357E1E.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_713_fu_23366_p0.read()) * sc_biguint<54>(ap_const_lv54_357E1E);
}

void ntt::thread_mul_ln59_714_fu_23395_p0() {
    mul_ln59_714_fu_23395_p0 = sext_ln59_1427_fu_23391_p0.read();
}

void ntt::thread_mul_ln59_714_fu_23395_p2() {
    mul_ln59_714_fu_23395_p2 = (!mul_ln59_714_fu_23395_p0.read().is_01() || !ap_const_lv54_357E1E.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_714_fu_23395_p0.read()) * sc_biguint<54>(ap_const_lv54_357E1E);
}

void ntt::thread_mul_ln59_715_fu_23424_p0() {
    mul_ln59_715_fu_23424_p0 = sext_ln59_1429_fu_23420_p0.read();
}

void ntt::thread_mul_ln59_715_fu_23424_p2() {
    mul_ln59_715_fu_23424_p2 = (!mul_ln59_715_fu_23424_p0.read().is_01() || !ap_const_lv54_357E1E.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_715_fu_23424_p0.read()) * sc_biguint<54>(ap_const_lv54_357E1E);
}

void ntt::thread_mul_ln59_716_fu_23439_p0() {
    mul_ln59_716_fu_23439_p0 = sext_ln59_1431_fu_23435_p0.read();
}

void ntt::thread_mul_ln59_716_fu_23439_p2() {
    mul_ln59_716_fu_23439_p2 = (!mul_ln59_716_fu_23439_p0.read().is_01() || !ap_const_lv54_357E1E.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_716_fu_23439_p0.read()) * sc_biguint<54>(ap_const_lv54_357E1E);
}

void ntt::thread_mul_ln59_717_fu_23454_p0() {
    mul_ln59_717_fu_23454_p0 = sext_ln59_1433_fu_23450_p0.read();
}

void ntt::thread_mul_ln59_717_fu_23454_p2() {
    mul_ln59_717_fu_23454_p2 = (!mul_ln59_717_fu_23454_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC5AF59.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_717_fu_23454_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC5AF59);
}

void ntt::thread_mul_ln59_718_fu_23469_p0() {
    mul_ln59_718_fu_23469_p0 = reg_3680.read();
}

void ntt::thread_mul_ln59_718_fu_23469_p2() {
    mul_ln59_718_fu_23469_p2 = (!mul_ln59_718_fu_23469_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC5AF59.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_718_fu_23469_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC5AF59);
}

void ntt::thread_mul_ln59_719_fu_23484_p0() {
    mul_ln59_719_fu_23484_p0 = reg_3690.read();
}

void ntt::thread_mul_ln59_719_fu_23484_p2() {
    mul_ln59_719_fu_23484_p2 = (!mul_ln59_719_fu_23484_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC5AF59.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_719_fu_23484_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC5AF59);
}

void ntt::thread_mul_ln59_71_fu_11917_p0() {
    mul_ln59_71_fu_11917_p0 = reg_3631.read();
}

void ntt::thread_mul_ln59_71_fu_11917_p2() {
    mul_ln59_71_fu_11917_p2 = (!mul_ln59_71_fu_11917_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_71_fu_11917_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_720_fu_23499_p0() {
    mul_ln59_720_fu_23499_p0 = reg_3700.read();
}

void ntt::thread_mul_ln59_720_fu_23499_p2() {
    mul_ln59_720_fu_23499_p2 = (!mul_ln59_720_fu_23499_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC5AF59.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_720_fu_23499_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC5AF59);
}

void ntt::thread_mul_ln59_721_fu_23514_p0() {
    mul_ln59_721_fu_23514_p0 = reg_3710.read();
}

void ntt::thread_mul_ln59_721_fu_23514_p2() {
    mul_ln59_721_fu_23514_p2 = (!mul_ln59_721_fu_23514_p0.read().is_01() || !ap_const_lv54_35843F.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_721_fu_23514_p0.read()) * sc_biguint<54>(ap_const_lv54_35843F);
}

void ntt::thread_mul_ln59_722_fu_23529_p0() {
    mul_ln59_722_fu_23529_p0 = reg_3720.read();
}

void ntt::thread_mul_ln59_722_fu_23529_p2() {
    mul_ln59_722_fu_23529_p2 = (!mul_ln59_722_fu_23529_p0.read().is_01() || !ap_const_lv54_35843F.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_722_fu_23529_p0.read()) * sc_biguint<54>(ap_const_lv54_35843F);
}

void ntt::thread_mul_ln59_723_fu_23544_p0() {
    mul_ln59_723_fu_23544_p0 = reg_3730.read();
}

void ntt::thread_mul_ln59_723_fu_23544_p2() {
    mul_ln59_723_fu_23544_p2 = (!mul_ln59_723_fu_23544_p0.read().is_01() || !ap_const_lv54_35843F.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_723_fu_23544_p0.read()) * sc_biguint<54>(ap_const_lv54_35843F);
}

void ntt::thread_mul_ln59_724_fu_23559_p0() {
    mul_ln59_724_fu_23559_p0 = reg_3740.read();
}

void ntt::thread_mul_ln59_724_fu_23559_p2() {
    mul_ln59_724_fu_23559_p2 = (!mul_ln59_724_fu_23559_p0.read().is_01() || !ap_const_lv54_35843F.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_724_fu_23559_p0.read()) * sc_biguint<54>(ap_const_lv54_35843F);
}

void ntt::thread_mul_ln59_725_fu_23574_p0() {
    mul_ln59_725_fu_23574_p0 = reg_3750.read();
}

void ntt::thread_mul_ln59_725_fu_23574_p2() {
    mul_ln59_725_fu_23574_p2 = (!mul_ln59_725_fu_23574_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDF5617.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_725_fu_23574_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDF5617);
}

void ntt::thread_mul_ln59_726_fu_23589_p0() {
    mul_ln59_726_fu_23589_p0 = reg_3760.read();
}

void ntt::thread_mul_ln59_726_fu_23589_p2() {
    mul_ln59_726_fu_23589_p2 = (!mul_ln59_726_fu_23589_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDF5617.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_726_fu_23589_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDF5617);
}

void ntt::thread_mul_ln59_727_fu_22222_p0() {
    mul_ln59_727_fu_22222_p0 = sext_ln59_1453_fu_22218_p0.read();
}

void ntt::thread_mul_ln59_727_fu_22222_p2() {
    mul_ln59_727_fu_22222_p2 = (!mul_ln59_727_fu_22222_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDF5617.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_727_fu_22222_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDF5617);
}

void ntt::thread_mul_ln59_728_fu_22237_p0() {
    mul_ln59_728_fu_22237_p0 = sext_ln59_1455_fu_22233_p0.read();
}

void ntt::thread_mul_ln59_728_fu_22237_p2() {
    mul_ln59_728_fu_22237_p2 = (!mul_ln59_728_fu_22237_p0.read().is_01() || !ap_const_lv54_3FFFFFFFDF5617.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_728_fu_22237_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFDF5617);
}

void ntt::thread_mul_ln59_729_fu_23632_p0() {
    mul_ln59_729_fu_23632_p0 = reg_3780.read();
}

void ntt::thread_mul_ln59_729_fu_23632_p2() {
    mul_ln59_729_fu_23632_p2 = (!mul_ln59_729_fu_23632_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE7945C.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_729_fu_23632_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE7945C);
}

void ntt::thread_mul_ln59_72_fu_11932_p0() {
    mul_ln59_72_fu_11932_p0 = reg_3641.read();
}

void ntt::thread_mul_ln59_72_fu_11932_p2() {
    mul_ln59_72_fu_11932_p2 = (!mul_ln59_72_fu_11932_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_72_fu_11932_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_730_fu_22252_p0() {
    mul_ln59_730_fu_22252_p0 = sext_ln59_1459_fu_22248_p0.read();
}

void ntt::thread_mul_ln59_730_fu_22252_p2() {
    mul_ln59_730_fu_22252_p2 = (!mul_ln59_730_fu_22252_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE7945C.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_730_fu_22252_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE7945C);
}

void ntt::thread_mul_ln59_731_fu_23661_p0() {
    mul_ln59_731_fu_23661_p0 = sext_ln59_1461_fu_23657_p0.read();
}

void ntt::thread_mul_ln59_731_fu_23661_p2() {
    mul_ln59_731_fu_23661_p2 = (!mul_ln59_731_fu_23661_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE7945C.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_731_fu_23661_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE7945C);
}

void ntt::thread_mul_ln59_732_fu_23676_p0() {
    mul_ln59_732_fu_23676_p0 = sext_ln59_1463_fu_23672_p0.read();
}

void ntt::thread_mul_ln59_732_fu_23676_p2() {
    mul_ln59_732_fu_23676_p2 = (!mul_ln59_732_fu_23676_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE7945C.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_732_fu_23676_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE7945C);
}

void ntt::thread_mul_ln59_733_fu_23691_p0() {
    mul_ln59_733_fu_23691_p0 = reg_3819.read();
}

void ntt::thread_mul_ln59_733_fu_23691_p2() {
    mul_ln59_733_fu_23691_p2 = (!mul_ln59_733_fu_23691_p0.read().is_01() || !ap_const_lv54_38738C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_733_fu_23691_p0.read()) * sc_biguint<54>(ap_const_lv54_38738C);
}

void ntt::thread_mul_ln59_734_fu_23706_p0() {
    mul_ln59_734_fu_23706_p0 = reg_3829.read();
}

void ntt::thread_mul_ln59_734_fu_23706_p2() {
    mul_ln59_734_fu_23706_p2 = (!mul_ln59_734_fu_23706_p0.read().is_01() || !ap_const_lv54_38738C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_734_fu_23706_p0.read()) * sc_biguint<54>(ap_const_lv54_38738C);
}

void ntt::thread_mul_ln59_735_fu_22267_p0() {
    mul_ln59_735_fu_22267_p0 = sext_ln59_1469_fu_22263_p0.read();
}

void ntt::thread_mul_ln59_735_fu_22267_p2() {
    mul_ln59_735_fu_22267_p2 = (!mul_ln59_735_fu_22267_p0.read().is_01() || !ap_const_lv54_38738C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_735_fu_22267_p0.read()) * sc_biguint<54>(ap_const_lv54_38738C);
}

void ntt::thread_mul_ln59_736_fu_23735_p0() {
    mul_ln59_736_fu_23735_p0 = sext_ln59_1471_fu_23731_p0.read();
}

void ntt::thread_mul_ln59_736_fu_23735_p2() {
    mul_ln59_736_fu_23735_p2 = (!mul_ln59_736_fu_23735_p0.read().is_01() || !ap_const_lv54_38738C.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_736_fu_23735_p0.read()) * sc_biguint<54>(ap_const_lv54_38738C);
}

void ntt::thread_mul_ln59_737_fu_23750_p0() {
    mul_ln59_737_fu_23750_p0 = sext_ln59_1473_fu_23746_p0.read();
}

void ntt::thread_mul_ln59_737_fu_23750_p2() {
    mul_ln59_737_fu_23750_p2 = (!mul_ln59_737_fu_23750_p0.read().is_01() || !ap_const_lv52_C63A8.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_737_fu_23750_p0.read()) * sc_biguint<52>(ap_const_lv52_C63A8);
}

void ntt::thread_mul_ln59_738_fu_23765_p0() {
    mul_ln59_738_fu_23765_p0 = sext_ln59_1475_fu_23761_p0.read();
}

void ntt::thread_mul_ln59_738_fu_23765_p2() {
    mul_ln59_738_fu_23765_p2 = (!mul_ln59_738_fu_23765_p0.read().is_01() || !ap_const_lv52_C63A8.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_738_fu_23765_p0.read()) * sc_biguint<52>(ap_const_lv52_C63A8);
}

void ntt::thread_mul_ln59_739_fu_23780_p0() {
    mul_ln59_739_fu_23780_p0 = sext_ln59_1477_fu_23776_p0.read();
}

void ntt::thread_mul_ln59_739_fu_23780_p2() {
    mul_ln59_739_fu_23780_p2 = (!mul_ln59_739_fu_23780_p0.read().is_01() || !ap_const_lv52_C63A8.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_739_fu_23780_p0.read()) * sc_biguint<52>(ap_const_lv52_C63A8);
}

void ntt::thread_mul_ln59_73_fu_11960_p0() {
    mul_ln59_73_fu_11960_p0 = reg_3651.read();
}

void ntt::thread_mul_ln59_73_fu_11960_p2() {
    mul_ln59_73_fu_11960_p2 = (!mul_ln59_73_fu_11960_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_73_fu_11960_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_740_fu_23795_p0() {
    mul_ln59_740_fu_23795_p0 = sext_ln59_1479_fu_23791_p0.read();
}

void ntt::thread_mul_ln59_740_fu_23795_p2() {
    mul_ln59_740_fu_23795_p2 = (!mul_ln59_740_fu_23795_p0.read().is_01() || !ap_const_lv52_C63A8.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_740_fu_23795_p0.read()) * sc_biguint<52>(ap_const_lv52_C63A8);
}

void ntt::thread_mul_ln59_741_fu_23810_p0() {
    mul_ln59_741_fu_23810_p0 = sext_ln59_1481_fu_23806_p0.read();
}

void ntt::thread_mul_ln59_741_fu_23810_p2() {
    mul_ln59_741_fu_23810_p2 = (!mul_ln59_741_fu_23810_p0.read().is_01() || !ap_const_lv52_81B9A.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_741_fu_23810_p0.read()) * sc_biguint<52>(ap_const_lv52_81B9A);
}

void ntt::thread_mul_ln59_742_fu_23825_p0() {
    mul_ln59_742_fu_23825_p0 = sext_ln59_1483_fu_23821_p0.read();
}

void ntt::thread_mul_ln59_742_fu_23825_p2() {
    mul_ln59_742_fu_23825_p2 = (!mul_ln59_742_fu_23825_p0.read().is_01() || !ap_const_lv52_81B9A.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_742_fu_23825_p0.read()) * sc_biguint<52>(ap_const_lv52_81B9A);
}

void ntt::thread_mul_ln59_743_fu_23840_p0() {
    mul_ln59_743_fu_23840_p0 = sext_ln59_1485_fu_23836_p0.read();
}

void ntt::thread_mul_ln59_743_fu_23840_p2() {
    mul_ln59_743_fu_23840_p2 = (!mul_ln59_743_fu_23840_p0.read().is_01() || !ap_const_lv52_81B9A.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_743_fu_23840_p0.read()) * sc_biguint<52>(ap_const_lv52_81B9A);
}

void ntt::thread_mul_ln59_744_fu_23855_p0() {
    mul_ln59_744_fu_23855_p0 = sext_ln59_1487_fu_23851_p0.read();
}

void ntt::thread_mul_ln59_744_fu_23855_p2() {
    mul_ln59_744_fu_23855_p2 = (!mul_ln59_744_fu_23855_p0.read().is_01() || !ap_const_lv52_81B9A.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_744_fu_23855_p0.read()) * sc_biguint<52>(ap_const_lv52_81B9A);
}

void ntt::thread_mul_ln59_745_fu_23870_p0() {
    mul_ln59_745_fu_23870_p0 = sext_ln59_1489_fu_23866_p0.read();
}

void ntt::thread_mul_ln59_745_fu_23870_p2() {
    mul_ln59_745_fu_23870_p2 = (!mul_ln59_745_fu_23870_p0.read().is_01() || !ap_const_lv52_E8F76.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_745_fu_23870_p0.read()) * sc_biguint<52>(ap_const_lv52_E8F76);
}

void ntt::thread_mul_ln59_746_fu_23885_p0() {
    mul_ln59_746_fu_23885_p0 = sext_ln59_1491_fu_23881_p0.read();
}

void ntt::thread_mul_ln59_746_fu_23885_p2() {
    mul_ln59_746_fu_23885_p2 = (!mul_ln59_746_fu_23885_p0.read().is_01() || !ap_const_lv52_E8F76.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_746_fu_23885_p0.read()) * sc_biguint<52>(ap_const_lv52_E8F76);
}

void ntt::thread_mul_ln59_747_fu_23900_p0() {
    mul_ln59_747_fu_23900_p0 = sext_ln59_1493_fu_23896_p0.read();
}

void ntt::thread_mul_ln59_747_fu_23900_p2() {
    mul_ln59_747_fu_23900_p2 = (!mul_ln59_747_fu_23900_p0.read().is_01() || !ap_const_lv52_E8F76.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_747_fu_23900_p0.read()) * sc_biguint<52>(ap_const_lv52_E8F76);
}

void ntt::thread_mul_ln59_748_fu_23915_p0() {
    mul_ln59_748_fu_23915_p0 = sext_ln59_1495_fu_23911_p0.read();
}

void ntt::thread_mul_ln59_748_fu_23915_p2() {
    mul_ln59_748_fu_23915_p2 = (!mul_ln59_748_fu_23915_p0.read().is_01() || !ap_const_lv52_E8F76.is_01())? sc_lv<52>(): sc_bigint<32>(mul_ln59_748_fu_23915_p0.read()) * sc_biguint<52>(ap_const_lv52_E8F76);
}

void ntt::thread_mul_ln59_749_fu_23930_p0() {
    mul_ln59_749_fu_23930_p0 = sext_ln59_1497_fu_23926_p0.read();
}

void ntt::thread_mul_ln59_749_fu_23930_p2() {
    mul_ln59_749_fu_23930_p2 = (!mul_ln59_749_fu_23930_p0.read().is_01() || !ap_const_lv54_3B3853.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_749_fu_23930_p0.read()) * sc_biguint<54>(ap_const_lv54_3B3853);
}

void ntt::thread_mul_ln59_74_fu_11975_p0() {
    mul_ln59_74_fu_11975_p0 = reg_3661.read();
}

void ntt::thread_mul_ln59_74_fu_11975_p2() {
    mul_ln59_74_fu_11975_p2 = (!mul_ln59_74_fu_11975_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_74_fu_11975_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_750_fu_23945_p0() {
    mul_ln59_750_fu_23945_p0 = sext_ln59_1499_fu_23941_p0.read();
}

void ntt::thread_mul_ln59_750_fu_23945_p2() {
    mul_ln59_750_fu_23945_p2 = (!mul_ln59_750_fu_23945_p0.read().is_01() || !ap_const_lv54_3B3853.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_750_fu_23945_p0.read()) * sc_biguint<54>(ap_const_lv54_3B3853);
}

void ntt::thread_mul_ln59_751_fu_23960_p0() {
    mul_ln59_751_fu_23960_p0 = sext_ln59_1501_fu_23956_p0.read();
}

void ntt::thread_mul_ln59_751_fu_23960_p2() {
    mul_ln59_751_fu_23960_p2 = (!mul_ln59_751_fu_23960_p0.read().is_01() || !ap_const_lv54_3B3853.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_751_fu_23960_p0.read()) * sc_biguint<54>(ap_const_lv54_3B3853);
}

void ntt::thread_mul_ln59_752_fu_23975_p0() {
    mul_ln59_752_fu_23975_p0 = sext_ln59_1503_fu_23971_p0.read();
}

void ntt::thread_mul_ln59_752_fu_23975_p2() {
    mul_ln59_752_fu_23975_p2 = (!mul_ln59_752_fu_23975_p0.read().is_01() || !ap_const_lv54_3B3853.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_752_fu_23975_p0.read()) * sc_biguint<54>(ap_const_lv54_3B3853);
}

void ntt::thread_mul_ln59_753_fu_24004_p0() {
    mul_ln59_753_fu_24004_p0 = sext_ln59_1505_fu_24000_p0.read();
}

void ntt::thread_mul_ln59_753_fu_24004_p2() {
    mul_ln59_753_fu_24004_p2 = (!mul_ln59_753_fu_24004_p0.read().is_01() || !ap_const_lv54_3B8534.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_753_fu_24004_p0.read()) * sc_biguint<54>(ap_const_lv54_3B8534);
}

void ntt::thread_mul_ln59_754_fu_24033_p0() {
    mul_ln59_754_fu_24033_p0 = sext_ln59_1507_fu_24029_p0.read();
}

void ntt::thread_mul_ln59_754_fu_24033_p2() {
    mul_ln59_754_fu_24033_p2 = (!mul_ln59_754_fu_24033_p0.read().is_01() || !ap_const_lv54_3B8534.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_754_fu_24033_p0.read()) * sc_biguint<54>(ap_const_lv54_3B8534);
}

void ntt::thread_mul_ln59_755_fu_24062_p0() {
    mul_ln59_755_fu_24062_p0 = sext_ln59_1509_fu_24058_p0.read();
}

void ntt::thread_mul_ln59_755_fu_24062_p2() {
    mul_ln59_755_fu_24062_p2 = (!mul_ln59_755_fu_24062_p0.read().is_01() || !ap_const_lv54_3B8534.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_755_fu_24062_p0.read()) * sc_biguint<54>(ap_const_lv54_3B8534);
}

void ntt::thread_mul_ln59_756_fu_24091_p0() {
    mul_ln59_756_fu_24091_p0 = sext_ln59_1511_fu_24087_p0.read();
}

void ntt::thread_mul_ln59_756_fu_24091_p2() {
    mul_ln59_756_fu_24091_p2 = (!mul_ln59_756_fu_24091_p0.read().is_01() || !ap_const_lv54_3B8534.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_756_fu_24091_p0.read()) * sc_biguint<54>(ap_const_lv54_3B8534);
}

void ntt::thread_mul_ln59_757_fu_24120_p0() {
    mul_ln59_757_fu_24120_p0 = sext_ln59_1513_fu_24116_p0.read();
}

void ntt::thread_mul_ln59_757_fu_24120_p2() {
    mul_ln59_757_fu_24120_p2 = (!mul_ln59_757_fu_24120_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD8FC30.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_757_fu_24120_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD8FC30);
}

void ntt::thread_mul_ln59_758_fu_24149_p0() {
    mul_ln59_758_fu_24149_p0 = sext_ln59_1515_fu_24145_p0.read();
}

void ntt::thread_mul_ln59_758_fu_24149_p2() {
    mul_ln59_758_fu_24149_p2 = (!mul_ln59_758_fu_24149_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD8FC30.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_758_fu_24149_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD8FC30);
}

void ntt::thread_mul_ln59_759_fu_24178_p0() {
    mul_ln59_759_fu_24178_p0 = sext_ln59_1517_fu_24174_p0.read();
}

void ntt::thread_mul_ln59_759_fu_24178_p2() {
    mul_ln59_759_fu_24178_p2 = (!mul_ln59_759_fu_24178_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD8FC30.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_759_fu_24178_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD8FC30);
}

void ntt::thread_mul_ln59_75_fu_9315_p0() {
    mul_ln59_75_fu_9315_p0 = sext_ln59_149_fu_9311_p0.read();
}

void ntt::thread_mul_ln59_75_fu_9315_p2() {
    mul_ln59_75_fu_9315_p2 = (!mul_ln59_75_fu_9315_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_75_fu_9315_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_760_fu_24207_p0() {
    mul_ln59_760_fu_24207_p0 = sext_ln59_1519_fu_24203_p0.read();
}

void ntt::thread_mul_ln59_760_fu_24207_p2() {
    mul_ln59_760_fu_24207_p2 = (!mul_ln59_760_fu_24207_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD8FC30.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_760_fu_24207_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD8FC30);
}

void ntt::thread_mul_ln59_761_fu_24236_p0() {
    mul_ln59_761_fu_24236_p0 = sext_ln59_1521_fu_24232_p0.read();
}

void ntt::thread_mul_ln59_761_fu_24236_p2() {
    mul_ln59_761_fu_24236_p2 = (!mul_ln59_761_fu_24236_p0.read().is_01() || !ap_const_lv53_1F9D54.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_761_fu_24236_p0.read()) * sc_biguint<53>(ap_const_lv53_1F9D54);
}

void ntt::thread_mul_ln59_762_fu_24265_p0() {
    mul_ln59_762_fu_24265_p0 = sext_ln59_1523_fu_24261_p0.read();
}

void ntt::thread_mul_ln59_762_fu_24265_p2() {
    mul_ln59_762_fu_24265_p2 = (!mul_ln59_762_fu_24265_p0.read().is_01() || !ap_const_lv53_1F9D54.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_762_fu_24265_p0.read()) * sc_biguint<53>(ap_const_lv53_1F9D54);
}

void ntt::thread_mul_ln59_763_fu_24294_p0() {
    mul_ln59_763_fu_24294_p0 = sext_ln59_1525_fu_24290_p0.read();
}

void ntt::thread_mul_ln59_763_fu_24294_p2() {
    mul_ln59_763_fu_24294_p2 = (!mul_ln59_763_fu_24294_p0.read().is_01() || !ap_const_lv53_1F9D54.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_763_fu_24294_p0.read()) * sc_biguint<53>(ap_const_lv53_1F9D54);
}

void ntt::thread_mul_ln59_764_fu_24323_p0() {
    mul_ln59_764_fu_24323_p0 = sext_ln59_1527_fu_24319_p0.read();
}

void ntt::thread_mul_ln59_764_fu_24323_p2() {
    mul_ln59_764_fu_24323_p2 = (!mul_ln59_764_fu_24323_p0.read().is_01() || !ap_const_lv53_1F9D54.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_764_fu_24323_p0.read()) * sc_biguint<53>(ap_const_lv53_1F9D54);
}

void ntt::thread_mul_ln59_765_fu_24352_p0() {
    mul_ln59_765_fu_24352_p0 = sext_ln59_1529_fu_24348_p0.read();
}

void ntt::thread_mul_ln59_765_fu_24352_p2() {
    mul_ln59_765_fu_24352_p2 = (!mul_ln59_765_fu_24352_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD54F2D.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_765_fu_24352_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD54F2D);
}

void ntt::thread_mul_ln59_766_fu_24381_p0() {
    mul_ln59_766_fu_24381_p0 = sext_ln59_1531_fu_24377_p0.read();
}

void ntt::thread_mul_ln59_766_fu_24381_p2() {
    mul_ln59_766_fu_24381_p2 = (!mul_ln59_766_fu_24381_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD54F2D.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_766_fu_24381_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD54F2D);
}

void ntt::thread_mul_ln59_767_fu_24410_p0() {
    mul_ln59_767_fu_24410_p0 = sext_ln59_1533_fu_24406_p0.read();
}

void ntt::thread_mul_ln59_767_fu_24410_p2() {
    mul_ln59_767_fu_24410_p2 = (!mul_ln59_767_fu_24410_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD54F2D.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_767_fu_24410_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD54F2D);
}

void ntt::thread_mul_ln59_768_fu_24439_p0() {
    mul_ln59_768_fu_24439_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_768_fu_24439_p2() {
    mul_ln59_768_fu_24439_p2 = (!mul_ln59_768_fu_24439_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD54F2D.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_768_fu_24439_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD54F2D);
}

void ntt::thread_mul_ln59_769_fu_24604_p0() {
    mul_ln59_769_fu_24604_p0 = reg_2950.read();
}

void ntt::thread_mul_ln59_769_fu_24604_p2() {
    mul_ln59_769_fu_24604_p2 = (!mul_ln59_769_fu_24604_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC406E5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_769_fu_24604_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC406E5);
}

void ntt::thread_mul_ln59_76_fu_12016_p0() {
    mul_ln59_76_fu_12016_p0 = reg_3680.read();
}

void ntt::thread_mul_ln59_76_fu_12016_p2() {
    mul_ln59_76_fu_12016_p2 = (!mul_ln59_76_fu_12016_p0.read().is_01() || !ap_const_lv48_64F7.is_01())? sc_lv<48>(): sc_bigint<32>(mul_ln59_76_fu_12016_p0.read()) * sc_biguint<48>(ap_const_lv48_64F7);
}

void ntt::thread_mul_ln59_770_fu_24619_p0() {
    mul_ln59_770_fu_24619_p0 = reg_2958.read();
}

void ntt::thread_mul_ln59_770_fu_24619_p2() {
    mul_ln59_770_fu_24619_p2 = (!mul_ln59_770_fu_24619_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC406E5.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_770_fu_24619_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC406E5);
}

void ntt::thread_mul_ln59_771_fu_24634_p0() {
    mul_ln59_771_fu_24634_p0 = reg_2967.read();
}

void ntt::thread_mul_ln59_771_fu_24634_p2() {
    mul_ln59_771_fu_24634_p2 = (!mul_ln59_771_fu_24634_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE8AC81.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_771_fu_24634_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE8AC81);
}

void ntt::thread_mul_ln59_772_fu_24649_p0() {
    mul_ln59_772_fu_24649_p0 = reg_2975.read();
}

void ntt::thread_mul_ln59_772_fu_24649_p2() {
    mul_ln59_772_fu_24649_p2 = (!mul_ln59_772_fu_24649_p0.read().is_01() || !ap_const_lv53_1FFFFFFFE8AC81.is_01())? sc_lv<53>(): sc_bigint<32>(mul_ln59_772_fu_24649_p0.read()) * sc_bigint<53>(ap_const_lv53_1FFFFFFFE8AC81);
}

void ntt::thread_mul_ln59_773_fu_24664_p0() {
    mul_ln59_773_fu_24664_p0 = reg_2983.read();
}

void ntt::thread_mul_ln59_773_fu_24664_p2() {
    mul_ln59_773_fu_24664_p2 = (!mul_ln59_773_fu_24664_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC7E1CF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_773_fu_24664_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC7E1CF);
}

void ntt::thread_mul_ln59_774_fu_24679_p0() {
    mul_ln59_774_fu_24679_p0 = reg_2991.read();
}

void ntt::thread_mul_ln59_774_fu_24679_p2() {
    mul_ln59_774_fu_24679_p2 = (!mul_ln59_774_fu_24679_p0.read().is_01() || !ap_const_lv54_3FFFFFFFC7E1CF.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_774_fu_24679_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFC7E1CF);
}

void ntt::thread_mul_ln59_775_fu_24694_p0() {
    mul_ln59_775_fu_24694_p0 = reg_3001.read();
}

void ntt::thread_mul_ln59_775_fu_24694_p2() {
    mul_ln59_775_fu_24694_p2 = (!mul_ln59_775_fu_24694_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD19819.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_775_fu_24694_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD19819);
}

void ntt::thread_mul_ln59_776_fu_24709_p0() {
    mul_ln59_776_fu_24709_p0 = sext_ln59_1551_fu_24705_p0.read();
}

void ntt::thread_mul_ln59_776_fu_24709_p2() {
    mul_ln59_776_fu_24709_p2 = (!mul_ln59_776_fu_24709_p0.read().is_01() || !ap_const_lv54_3FFFFFFFD19819.is_01())? sc_lv<54>(): sc_bigint<32>(mul_ln59_776_fu_24709_p0.read()) * sc_bigint<54>(ap_const_lv54_3FFFFFFFD19819);
}

void ntt::thread_mul_ln59_777_fu_24724_p0() {
    mul_ln59_777_fu_24724_p0 = sext_ln59_1553_fu_24720_p0.read();
}

}

