#include "pqcrystals_dilithium_18.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_18::thread_B_cast_fu_2639_p1() {
    B_cast_fu_2639_p1 = esl_zext<32,18>(B.read());
}

void pqcrystals_dilithium_18::thread_a_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3408_fu_17226_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3406_fu_17105_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3404_fu_16999_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3402_fu_16873_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3400_fu_16767_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3398_fu_16646_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3396_fu_16540_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3394_fu_16409_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3392_fu_16303_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3390_fu_16182_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3388_fu_16076_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3386_fu_15950_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3384_fu_15844_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3382_fu_15723_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3380_fu_15617_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3378_fu_15486_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3376_fu_15380_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3374_fu_15259_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3372_fu_15153_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3370_fu_15027_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3368_fu_14921_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3366_fu_14800_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3364_fu_14694_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3362_fu_14563_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3360_fu_14457_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3358_fu_14336_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3356_fu_14230_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3354_fu_14104_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3352_fu_13998_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3350_fu_13877_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3348_fu_13771_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3346_fu_13625_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3344_fu_13519_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3342_fu_13398_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3340_fu_13292_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3338_fu_13166_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3336_fu_13060_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3334_fu_12939_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3332_fu_12833_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3330_fu_12702_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3328_fu_12596_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3326_fu_12475_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3324_fu_12369_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3322_fu_12243_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3320_fu_12137_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3318_fu_12016_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3316_fu_11910_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3314_fu_11779_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3312_fu_11673_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3310_fu_11552_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3308_fu_11446_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3306_fu_11320_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3304_fu_11214_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3302_fu_11093_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3300_fu_10987_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3298_fu_10856_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3296_fu_10750_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3294_fu_10629_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3292_fu_10523_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3290_fu_10397_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3288_fu_10291_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3286_fu_10170_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3284_fu_10064_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3282_fu_9913_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3280_fu_9807_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3278_fu_9686_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3276_fu_9580_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3274_fu_9454_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3272_fu_9348_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3270_fu_9227_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3268_fu_9121_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3266_fu_8990_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3264_fu_8884_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3262_fu_8763_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3260_fu_8657_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3258_fu_8531_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3256_fu_8425_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3254_fu_8304_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3252_fu_8198_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3250_fu_8067_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3248_fu_7961_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3246_fu_7840_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3244_fu_7734_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3242_fu_7608_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3240_fu_7502_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3238_fu_7381_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3236_fu_7275_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3234_fu_7144_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3232_fu_7038_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3230_fu_6917_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3228_fu_6811_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3226_fu_6685_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3224_fu_6579_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3222_fu_6458_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3220_fu_6352_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3218_fu_6206_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3216_fu_6100_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3214_fu_5979_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3212_fu_5873_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3210_fu_5747_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3208_fu_5641_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3206_fu_5520_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3204_fu_5414_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3202_fu_5283_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3200_fu_5177_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3198_fu_5056_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3196_fu_4950_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3194_fu_4824_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3192_fu_4718_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3190_fu_4597_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3188_fu_4491_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3186_fu_4360_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3184_fu_4254_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3182_fu_4133_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3180_fu_4027_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3178_fu_3901_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3176_fu_3795_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3174_fu_3674_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3172_fu_3568_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3170_fu_3437_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3168_fu_3331_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3166_fu_3210_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3164_fu_3104_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3162_fu_2978_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3160_fu_2872_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3158_fu_2756_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_3156_fu_2648_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (zext_ln315_fu_2619_p1.read());
    } else {
        a_coeffs_address0 = "XXXXXXXXXX";
    }
}

void pqcrystals_dilithium_18::thread_a_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3409_fu_17240_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3407_fu_17119_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3405_fu_17013_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3403_fu_16887_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3401_fu_16781_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3399_fu_16660_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3397_fu_16554_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3395_fu_16423_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3393_fu_16317_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3391_fu_16196_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3389_fu_16090_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3387_fu_15964_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3385_fu_15858_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3383_fu_15737_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3381_fu_15631_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3379_fu_15500_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3377_fu_15394_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3375_fu_15273_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3373_fu_15167_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3371_fu_15041_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3369_fu_14935_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3367_fu_14814_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3365_fu_14708_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3363_fu_14577_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3361_fu_14471_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3359_fu_14350_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3357_fu_14244_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3355_fu_14118_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3353_fu_14012_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3351_fu_13891_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3349_fu_13785_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3347_fu_13639_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3345_fu_13533_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3343_fu_13412_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3341_fu_13306_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3339_fu_13180_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3337_fu_13074_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3335_fu_12953_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3333_fu_12847_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3331_fu_12716_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3329_fu_12610_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3327_fu_12489_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3325_fu_12383_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3323_fu_12257_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3321_fu_12151_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3319_fu_12030_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3317_fu_11924_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3315_fu_11793_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3313_fu_11687_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3311_fu_11566_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3309_fu_11460_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3307_fu_11334_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3305_fu_11228_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3303_fu_11107_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3301_fu_11001_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3299_fu_10870_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3297_fu_10764_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3295_fu_10643_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3293_fu_10537_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3291_fu_10411_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3289_fu_10305_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3287_fu_10184_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3285_fu_10078_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3283_fu_9927_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3281_fu_9821_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3279_fu_9700_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3277_fu_9594_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3275_fu_9468_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3273_fu_9362_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3271_fu_9241_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3269_fu_9135_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3267_fu_9004_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3265_fu_8898_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3263_fu_8777_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3261_fu_8671_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3259_fu_8545_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3257_fu_8439_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3255_fu_8318_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3253_fu_8212_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3251_fu_8081_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3249_fu_7975_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3247_fu_7854_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3245_fu_7748_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3243_fu_7622_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3241_fu_7516_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3239_fu_7395_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3237_fu_7289_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3235_fu_7158_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3233_fu_7052_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3231_fu_6931_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3229_fu_6825_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3227_fu_6699_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3225_fu_6593_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3223_fu_6472_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3221_fu_6366_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3219_fu_6220_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3217_fu_6114_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3215_fu_5993_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3213_fu_5887_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3211_fu_5761_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3209_fu_5655_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3207_fu_5534_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3205_fu_5428_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3203_fu_5297_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3201_fu_5191_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3199_fu_5070_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3197_fu_4964_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3195_fu_4838_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3193_fu_4732_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3191_fu_4611_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3189_fu_4505_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3187_fu_4374_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3185_fu_4268_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3183_fu_4147_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3181_fu_4041_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3179_fu_3915_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3177_fu_3809_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3175_fu_3688_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3173_fu_3582_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3171_fu_3451_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3169_fu_3345_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3167_fu_3224_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3165_fu_3118_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3163_fu_2992_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3161_fu_2886_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3159_fu_2770_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_3157_fu_2662_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        a_coeffs_address1 =  (sc_lv<10>) (tmp_s_fu_2630_p3.read());
    } else {
        a_coeffs_address1 = "XXXXXXXXXX";
    }
}

void pqcrystals_dilithium_18::thread_a_coeffs_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        a_coeffs_ce0 = ap_const_logic_1;
    } else {
        a_coeffs_ce0 = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_18::thread_a_coeffs_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        a_coeffs_ce1 = ap_const_logic_1;
    } else {
        a_coeffs_ce1 = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_18::thread_and_ln316_100_fu_8470_p2() {
    and_ln316_100_fu_8470_p2 = (shl_ln316_100_fu_8464_p2.read() & select_ln315_100_fu_8456_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_101_fu_8509_p2() {
    and_ln316_101_fu_8509_p2 = (shl_ln316_101_fu_8503_p2.read() & select_ln315_101_fu_8495_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_102_fu_8576_p2() {
    and_ln316_102_fu_8576_p2 = (shl_ln316_102_fu_8570_p2.read() & select_ln315_102_fu_8562_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_103_fu_8615_p2() {
    and_ln316_103_fu_8615_p2 = (shl_ln316_103_fu_8609_p2.read() & select_ln315_103_fu_8601_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_104_fu_8702_p2() {
    and_ln316_104_fu_8702_p2 = (shl_ln316_104_fu_8696_p2.read() & select_ln315_104_fu_8688_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_105_fu_8741_p2() {
    and_ln316_105_fu_8741_p2 = (shl_ln316_105_fu_8735_p2.read() & select_ln315_105_fu_8727_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_106_fu_8808_p2() {
    and_ln316_106_fu_8808_p2 = (shl_ln316_106_fu_8802_p2.read() & select_ln315_106_fu_8794_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_107_fu_8847_p2() {
    and_ln316_107_fu_8847_p2 = (shl_ln316_107_fu_8841_p2.read() & select_ln315_107_fu_8833_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_108_fu_8929_p2() {
    and_ln316_108_fu_8929_p2 = (shl_ln316_108_fu_8923_p2.read() & select_ln315_108_fu_8915_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_109_fu_8968_p2() {
    and_ln316_109_fu_8968_p2 = (shl_ln316_109_fu_8962_p2.read() & select_ln315_109_fu_8954_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_10_fu_3255_p2() {
    and_ln316_10_fu_3255_p2 = (shl_ln316_10_fu_3249_p2.read() & select_ln315_10_fu_3241_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_110_fu_9035_p2() {
    and_ln316_110_fu_9035_p2 = (shl_ln316_110_fu_9029_p2.read() & select_ln315_110_fu_9021_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_111_fu_9074_p2() {
    and_ln316_111_fu_9074_p2 = (shl_ln316_111_fu_9068_p2.read() & select_ln315_111_fu_9060_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_112_fu_9166_p2() {
    and_ln316_112_fu_9166_p2 = (shl_ln316_112_fu_9160_p2.read() & select_ln315_112_fu_9152_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_113_fu_9205_p2() {
    and_ln316_113_fu_9205_p2 = (shl_ln316_113_fu_9199_p2.read() & select_ln315_113_fu_9191_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_114_fu_9272_p2() {
    and_ln316_114_fu_9272_p2 = (shl_ln316_114_fu_9266_p2.read() & select_ln315_114_fu_9258_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_115_fu_9311_p2() {
    and_ln316_115_fu_9311_p2 = (shl_ln316_115_fu_9305_p2.read() & select_ln315_115_fu_9297_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_116_fu_9393_p2() {
    and_ln316_116_fu_9393_p2 = (shl_ln316_116_fu_9387_p2.read() & select_ln315_116_fu_9379_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_117_fu_9432_p2() {
    and_ln316_117_fu_9432_p2 = (shl_ln316_117_fu_9426_p2.read() & select_ln315_117_fu_9418_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_118_fu_9499_p2() {
    and_ln316_118_fu_9499_p2 = (shl_ln316_118_fu_9493_p2.read() & select_ln315_118_fu_9485_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_119_fu_9538_p2() {
    and_ln316_119_fu_9538_p2 = (shl_ln316_119_fu_9532_p2.read() & select_ln315_119_fu_9524_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_11_fu_3294_p2() {
    and_ln316_11_fu_3294_p2 = (shl_ln316_11_fu_3288_p2.read() & select_ln315_11_fu_3280_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_120_fu_9625_p2() {
    and_ln316_120_fu_9625_p2 = (shl_ln316_120_fu_9619_p2.read() & select_ln315_120_fu_9611_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_121_fu_9664_p2() {
    and_ln316_121_fu_9664_p2 = (shl_ln316_121_fu_9658_p2.read() & select_ln315_121_fu_9650_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_122_fu_9731_p2() {
    and_ln316_122_fu_9731_p2 = (shl_ln316_122_fu_9725_p2.read() & select_ln315_122_fu_9717_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_123_fu_9770_p2() {
    and_ln316_123_fu_9770_p2 = (shl_ln316_123_fu_9764_p2.read() & select_ln315_123_fu_9756_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_124_fu_9852_p2() {
    and_ln316_124_fu_9852_p2 = (shl_ln316_124_fu_9846_p2.read() & select_ln315_124_fu_9838_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_125_fu_9891_p2() {
    and_ln316_125_fu_9891_p2 = (shl_ln316_125_fu_9885_p2.read() & select_ln315_125_fu_9877_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_126_fu_9958_p2() {
    and_ln316_126_fu_9958_p2 = (shl_ln316_126_fu_9952_p2.read() & select_ln315_126_fu_9944_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_127_fu_9997_p2() {
    and_ln316_127_fu_9997_p2 = (shl_ln316_127_fu_9991_p2.read() & select_ln315_127_fu_9983_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_128_fu_10109_p2() {
    and_ln316_128_fu_10109_p2 = (shl_ln316_128_fu_10103_p2.read() & select_ln315_128_fu_10095_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_129_fu_10148_p2() {
    and_ln316_129_fu_10148_p2 = (shl_ln316_129_fu_10142_p2.read() & select_ln315_129_fu_10134_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_12_fu_3376_p2() {
    and_ln316_12_fu_3376_p2 = (shl_ln316_12_fu_3370_p2.read() & select_ln315_12_fu_3362_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_130_fu_10215_p2() {
    and_ln316_130_fu_10215_p2 = (shl_ln316_130_fu_10209_p2.read() & select_ln315_130_fu_10201_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_131_fu_10254_p2() {
    and_ln316_131_fu_10254_p2 = (shl_ln316_131_fu_10248_p2.read() & select_ln315_131_fu_10240_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_132_fu_10336_p2() {
    and_ln316_132_fu_10336_p2 = (shl_ln316_132_fu_10330_p2.read() & select_ln315_132_fu_10322_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_133_fu_10375_p2() {
    and_ln316_133_fu_10375_p2 = (shl_ln316_133_fu_10369_p2.read() & select_ln315_133_fu_10361_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_134_fu_10442_p2() {
    and_ln316_134_fu_10442_p2 = (shl_ln316_134_fu_10436_p2.read() & select_ln315_134_fu_10428_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_135_fu_10481_p2() {
    and_ln316_135_fu_10481_p2 = (shl_ln316_135_fu_10475_p2.read() & select_ln315_135_fu_10467_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_136_fu_10568_p2() {
    and_ln316_136_fu_10568_p2 = (shl_ln316_136_fu_10562_p2.read() & select_ln315_136_fu_10554_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_137_fu_10607_p2() {
    and_ln316_137_fu_10607_p2 = (shl_ln316_137_fu_10601_p2.read() & select_ln315_137_fu_10593_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_138_fu_10674_p2() {
    and_ln316_138_fu_10674_p2 = (shl_ln316_138_fu_10668_p2.read() & select_ln315_138_fu_10660_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_139_fu_10713_p2() {
    and_ln316_139_fu_10713_p2 = (shl_ln316_139_fu_10707_p2.read() & select_ln315_139_fu_10699_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_13_fu_3415_p2() {
    and_ln316_13_fu_3415_p2 = (shl_ln316_13_fu_3409_p2.read() & select_ln315_13_fu_3401_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_140_fu_10795_p2() {
    and_ln316_140_fu_10795_p2 = (shl_ln316_140_fu_10789_p2.read() & select_ln315_140_fu_10781_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_141_fu_10834_p2() {
    and_ln316_141_fu_10834_p2 = (shl_ln316_141_fu_10828_p2.read() & select_ln315_141_fu_10820_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_142_fu_10901_p2() {
    and_ln316_142_fu_10901_p2 = (shl_ln316_142_fu_10895_p2.read() & select_ln315_142_fu_10887_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_143_fu_10940_p2() {
    and_ln316_143_fu_10940_p2 = (shl_ln316_143_fu_10934_p2.read() & select_ln315_143_fu_10926_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_144_fu_11032_p2() {
    and_ln316_144_fu_11032_p2 = (shl_ln316_144_fu_11026_p2.read() & select_ln315_144_fu_11018_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_145_fu_11071_p2() {
    and_ln316_145_fu_11071_p2 = (shl_ln316_145_fu_11065_p2.read() & select_ln315_145_fu_11057_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_146_fu_11138_p2() {
    and_ln316_146_fu_11138_p2 = (shl_ln316_146_fu_11132_p2.read() & select_ln315_146_fu_11124_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_147_fu_11177_p2() {
    and_ln316_147_fu_11177_p2 = (shl_ln316_147_fu_11171_p2.read() & select_ln315_147_fu_11163_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_148_fu_11259_p2() {
    and_ln316_148_fu_11259_p2 = (shl_ln316_148_fu_11253_p2.read() & select_ln315_148_fu_11245_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_149_fu_11298_p2() {
    and_ln316_149_fu_11298_p2 = (shl_ln316_149_fu_11292_p2.read() & select_ln315_149_fu_11284_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_14_fu_3482_p2() {
    and_ln316_14_fu_3482_p2 = (shl_ln316_14_fu_3476_p2.read() & select_ln315_14_fu_3468_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_150_fu_11365_p2() {
    and_ln316_150_fu_11365_p2 = (shl_ln316_150_fu_11359_p2.read() & select_ln315_150_fu_11351_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_151_fu_11404_p2() {
    and_ln316_151_fu_11404_p2 = (shl_ln316_151_fu_11398_p2.read() & select_ln315_151_fu_11390_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_152_fu_11491_p2() {
    and_ln316_152_fu_11491_p2 = (shl_ln316_152_fu_11485_p2.read() & select_ln315_152_fu_11477_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_153_fu_11530_p2() {
    and_ln316_153_fu_11530_p2 = (shl_ln316_153_fu_11524_p2.read() & select_ln315_153_fu_11516_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_154_fu_11597_p2() {
    and_ln316_154_fu_11597_p2 = (shl_ln316_154_fu_11591_p2.read() & select_ln315_154_fu_11583_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_155_fu_11636_p2() {
    and_ln316_155_fu_11636_p2 = (shl_ln316_155_fu_11630_p2.read() & select_ln315_155_fu_11622_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_156_fu_11718_p2() {
    and_ln316_156_fu_11718_p2 = (shl_ln316_156_fu_11712_p2.read() & select_ln315_156_fu_11704_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_157_fu_11757_p2() {
    and_ln316_157_fu_11757_p2 = (shl_ln316_157_fu_11751_p2.read() & select_ln315_157_fu_11743_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_158_fu_11824_p2() {
    and_ln316_158_fu_11824_p2 = (shl_ln316_158_fu_11818_p2.read() & select_ln315_158_fu_11810_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_159_fu_11863_p2() {
    and_ln316_159_fu_11863_p2 = (shl_ln316_159_fu_11857_p2.read() & select_ln315_159_fu_11849_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_15_fu_3521_p2() {
    and_ln316_15_fu_3521_p2 = (shl_ln316_15_fu_3515_p2.read() & select_ln315_15_fu_3507_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_160_fu_11955_p2() {
    and_ln316_160_fu_11955_p2 = (shl_ln316_160_fu_11949_p2.read() & select_ln315_160_fu_11941_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_161_fu_11994_p2() {
    and_ln316_161_fu_11994_p2 = (shl_ln316_161_fu_11988_p2.read() & select_ln315_161_fu_11980_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_162_fu_12061_p2() {
    and_ln316_162_fu_12061_p2 = (shl_ln316_162_fu_12055_p2.read() & select_ln315_162_fu_12047_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_163_fu_12100_p2() {
    and_ln316_163_fu_12100_p2 = (shl_ln316_163_fu_12094_p2.read() & select_ln315_163_fu_12086_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_164_fu_12182_p2() {
    and_ln316_164_fu_12182_p2 = (shl_ln316_164_fu_12176_p2.read() & select_ln315_164_fu_12168_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_165_fu_12221_p2() {
    and_ln316_165_fu_12221_p2 = (shl_ln316_165_fu_12215_p2.read() & select_ln315_165_fu_12207_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_166_fu_12288_p2() {
    and_ln316_166_fu_12288_p2 = (shl_ln316_166_fu_12282_p2.read() & select_ln315_166_fu_12274_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_167_fu_12327_p2() {
    and_ln316_167_fu_12327_p2 = (shl_ln316_167_fu_12321_p2.read() & select_ln315_167_fu_12313_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_168_fu_12414_p2() {
    and_ln316_168_fu_12414_p2 = (shl_ln316_168_fu_12408_p2.read() & select_ln315_168_fu_12400_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_169_fu_12453_p2() {
    and_ln316_169_fu_12453_p2 = (shl_ln316_169_fu_12447_p2.read() & select_ln315_169_fu_12439_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_16_fu_3613_p2() {
    and_ln316_16_fu_3613_p2 = (shl_ln316_16_fu_3607_p2.read() & select_ln315_16_fu_3599_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_170_fu_12520_p2() {
    and_ln316_170_fu_12520_p2 = (shl_ln316_170_fu_12514_p2.read() & select_ln315_170_fu_12506_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_171_fu_12559_p2() {
    and_ln316_171_fu_12559_p2 = (shl_ln316_171_fu_12553_p2.read() & select_ln315_171_fu_12545_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_172_fu_12641_p2() {
    and_ln316_172_fu_12641_p2 = (shl_ln316_172_fu_12635_p2.read() & select_ln315_172_fu_12627_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_173_fu_12680_p2() {
    and_ln316_173_fu_12680_p2 = (shl_ln316_173_fu_12674_p2.read() & select_ln315_173_fu_12666_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_174_fu_12747_p2() {
    and_ln316_174_fu_12747_p2 = (shl_ln316_174_fu_12741_p2.read() & select_ln315_174_fu_12733_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_175_fu_12786_p2() {
    and_ln316_175_fu_12786_p2 = (shl_ln316_175_fu_12780_p2.read() & select_ln315_175_fu_12772_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_176_fu_12878_p2() {
    and_ln316_176_fu_12878_p2 = (shl_ln316_176_fu_12872_p2.read() & select_ln315_176_fu_12864_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_177_fu_12917_p2() {
    and_ln316_177_fu_12917_p2 = (shl_ln316_177_fu_12911_p2.read() & select_ln315_177_fu_12903_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_178_fu_12984_p2() {
    and_ln316_178_fu_12984_p2 = (shl_ln316_178_fu_12978_p2.read() & select_ln315_178_fu_12970_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_179_fu_13023_p2() {
    and_ln316_179_fu_13023_p2 = (shl_ln316_179_fu_13017_p2.read() & select_ln315_179_fu_13009_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_17_fu_3652_p2() {
    and_ln316_17_fu_3652_p2 = (shl_ln316_17_fu_3646_p2.read() & select_ln315_17_fu_3638_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_180_fu_13105_p2() {
    and_ln316_180_fu_13105_p2 = (shl_ln316_180_fu_13099_p2.read() & select_ln315_180_fu_13091_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_181_fu_13144_p2() {
    and_ln316_181_fu_13144_p2 = (shl_ln316_181_fu_13138_p2.read() & select_ln315_181_fu_13130_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_182_fu_13211_p2() {
    and_ln316_182_fu_13211_p2 = (shl_ln316_182_fu_13205_p2.read() & select_ln315_182_fu_13197_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_183_fu_13250_p2() {
    and_ln316_183_fu_13250_p2 = (shl_ln316_183_fu_13244_p2.read() & select_ln315_183_fu_13236_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_184_fu_13337_p2() {
    and_ln316_184_fu_13337_p2 = (shl_ln316_184_fu_13331_p2.read() & select_ln315_184_fu_13323_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_185_fu_13376_p2() {
    and_ln316_185_fu_13376_p2 = (shl_ln316_185_fu_13370_p2.read() & select_ln315_185_fu_13362_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_186_fu_13443_p2() {
    and_ln316_186_fu_13443_p2 = (shl_ln316_186_fu_13437_p2.read() & select_ln315_186_fu_13429_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_187_fu_13482_p2() {
    and_ln316_187_fu_13482_p2 = (shl_ln316_187_fu_13476_p2.read() & select_ln315_187_fu_13468_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_188_fu_13564_p2() {
    and_ln316_188_fu_13564_p2 = (shl_ln316_188_fu_13558_p2.read() & select_ln315_188_fu_13550_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_189_fu_13603_p2() {
    and_ln316_189_fu_13603_p2 = (shl_ln316_189_fu_13597_p2.read() & select_ln315_189_fu_13589_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_18_fu_3719_p2() {
    and_ln316_18_fu_3719_p2 = (shl_ln316_18_fu_3713_p2.read() & select_ln315_18_fu_3705_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_190_fu_13670_p2() {
    and_ln316_190_fu_13670_p2 = (shl_ln316_190_fu_13664_p2.read() & select_ln315_190_fu_13656_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_191_fu_13709_p2() {
    and_ln316_191_fu_13709_p2 = (shl_ln316_191_fu_13703_p2.read() & select_ln315_191_fu_13695_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_192_fu_13816_p2() {
    and_ln316_192_fu_13816_p2 = (shl_ln316_192_fu_13810_p2.read() & select_ln315_192_fu_13802_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_193_fu_13855_p2() {
    and_ln316_193_fu_13855_p2 = (shl_ln316_193_fu_13849_p2.read() & select_ln315_193_fu_13841_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_194_fu_13922_p2() {
    and_ln316_194_fu_13922_p2 = (shl_ln316_194_fu_13916_p2.read() & select_ln315_194_fu_13908_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_195_fu_13961_p2() {
    and_ln316_195_fu_13961_p2 = (shl_ln316_195_fu_13955_p2.read() & select_ln315_195_fu_13947_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_196_fu_14043_p2() {
    and_ln316_196_fu_14043_p2 = (shl_ln316_196_fu_14037_p2.read() & select_ln315_196_fu_14029_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_197_fu_14082_p2() {
    and_ln316_197_fu_14082_p2 = (shl_ln316_197_fu_14076_p2.read() & select_ln315_197_fu_14068_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_198_fu_14149_p2() {
    and_ln316_198_fu_14149_p2 = (shl_ln316_198_fu_14143_p2.read() & select_ln315_198_fu_14135_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_199_fu_14188_p2() {
    and_ln316_199_fu_14188_p2 = (shl_ln316_199_fu_14182_p2.read() & select_ln315_199_fu_14174_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_19_fu_3758_p2() {
    and_ln316_19_fu_3758_p2 = (shl_ln316_19_fu_3752_p2.read() & select_ln315_19_fu_3744_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_1_fu_2733_p2() {
    and_ln316_1_fu_2733_p2 = (shl_ln316_1_fu_2727_p2.read() & select_ln315_1_fu_2719_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_200_fu_14275_p2() {
    and_ln316_200_fu_14275_p2 = (shl_ln316_200_fu_14269_p2.read() & select_ln315_200_fu_14261_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_201_fu_14314_p2() {
    and_ln316_201_fu_14314_p2 = (shl_ln316_201_fu_14308_p2.read() & select_ln315_201_fu_14300_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_202_fu_14381_p2() {
    and_ln316_202_fu_14381_p2 = (shl_ln316_202_fu_14375_p2.read() & select_ln315_202_fu_14367_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_203_fu_14420_p2() {
    and_ln316_203_fu_14420_p2 = (shl_ln316_203_fu_14414_p2.read() & select_ln315_203_fu_14406_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_204_fu_14502_p2() {
    and_ln316_204_fu_14502_p2 = (shl_ln316_204_fu_14496_p2.read() & select_ln315_204_fu_14488_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_205_fu_14541_p2() {
    and_ln316_205_fu_14541_p2 = (shl_ln316_205_fu_14535_p2.read() & select_ln315_205_fu_14527_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_206_fu_14608_p2() {
    and_ln316_206_fu_14608_p2 = (shl_ln316_206_fu_14602_p2.read() & select_ln315_206_fu_14594_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_207_fu_14647_p2() {
    and_ln316_207_fu_14647_p2 = (shl_ln316_207_fu_14641_p2.read() & select_ln315_207_fu_14633_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_208_fu_14739_p2() {
    and_ln316_208_fu_14739_p2 = (shl_ln316_208_fu_14733_p2.read() & select_ln315_208_fu_14725_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_209_fu_14778_p2() {
    and_ln316_209_fu_14778_p2 = (shl_ln316_209_fu_14772_p2.read() & select_ln315_209_fu_14764_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_20_fu_3840_p2() {
    and_ln316_20_fu_3840_p2 = (shl_ln316_20_fu_3834_p2.read() & select_ln315_20_fu_3826_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_210_fu_14845_p2() {
    and_ln316_210_fu_14845_p2 = (shl_ln316_210_fu_14839_p2.read() & select_ln315_210_fu_14831_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_211_fu_14884_p2() {
    and_ln316_211_fu_14884_p2 = (shl_ln316_211_fu_14878_p2.read() & select_ln315_211_fu_14870_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_212_fu_14966_p2() {
    and_ln316_212_fu_14966_p2 = (shl_ln316_212_fu_14960_p2.read() & select_ln315_212_fu_14952_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_213_fu_15005_p2() {
    and_ln316_213_fu_15005_p2 = (shl_ln316_213_fu_14999_p2.read() & select_ln315_213_fu_14991_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_214_fu_15072_p2() {
    and_ln316_214_fu_15072_p2 = (shl_ln316_214_fu_15066_p2.read() & select_ln315_214_fu_15058_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_215_fu_15111_p2() {
    and_ln316_215_fu_15111_p2 = (shl_ln316_215_fu_15105_p2.read() & select_ln315_215_fu_15097_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_216_fu_15198_p2() {
    and_ln316_216_fu_15198_p2 = (shl_ln316_216_fu_15192_p2.read() & select_ln315_216_fu_15184_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_217_fu_15237_p2() {
    and_ln316_217_fu_15237_p2 = (shl_ln316_217_fu_15231_p2.read() & select_ln315_217_fu_15223_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_218_fu_15304_p2() {
    and_ln316_218_fu_15304_p2 = (shl_ln316_218_fu_15298_p2.read() & select_ln315_218_fu_15290_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_219_fu_15343_p2() {
    and_ln316_219_fu_15343_p2 = (shl_ln316_219_fu_15337_p2.read() & select_ln315_219_fu_15329_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_21_fu_3879_p2() {
    and_ln316_21_fu_3879_p2 = (shl_ln316_21_fu_3873_p2.read() & select_ln315_21_fu_3865_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_220_fu_15425_p2() {
    and_ln316_220_fu_15425_p2 = (shl_ln316_220_fu_15419_p2.read() & select_ln315_220_fu_15411_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_221_fu_15464_p2() {
    and_ln316_221_fu_15464_p2 = (shl_ln316_221_fu_15458_p2.read() & select_ln315_221_fu_15450_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_222_fu_15531_p2() {
    and_ln316_222_fu_15531_p2 = (shl_ln316_222_fu_15525_p2.read() & select_ln315_222_fu_15517_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_223_fu_15570_p2() {
    and_ln316_223_fu_15570_p2 = (shl_ln316_223_fu_15564_p2.read() & select_ln315_223_fu_15556_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_224_fu_15662_p2() {
    and_ln316_224_fu_15662_p2 = (shl_ln316_224_fu_15656_p2.read() & select_ln315_224_fu_15648_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_225_fu_15701_p2() {
    and_ln316_225_fu_15701_p2 = (shl_ln316_225_fu_15695_p2.read() & select_ln315_225_fu_15687_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_226_fu_15768_p2() {
    and_ln316_226_fu_15768_p2 = (shl_ln316_226_fu_15762_p2.read() & select_ln315_226_fu_15754_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_227_fu_15807_p2() {
    and_ln316_227_fu_15807_p2 = (shl_ln316_227_fu_15801_p2.read() & select_ln315_227_fu_15793_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_228_fu_15889_p2() {
    and_ln316_228_fu_15889_p2 = (shl_ln316_228_fu_15883_p2.read() & select_ln315_228_fu_15875_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_229_fu_15928_p2() {
    and_ln316_229_fu_15928_p2 = (shl_ln316_229_fu_15922_p2.read() & select_ln315_229_fu_15914_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_22_fu_3946_p2() {
    and_ln316_22_fu_3946_p2 = (shl_ln316_22_fu_3940_p2.read() & select_ln315_22_fu_3932_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_230_fu_15995_p2() {
    and_ln316_230_fu_15995_p2 = (shl_ln316_230_fu_15989_p2.read() & select_ln315_230_fu_15981_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_231_fu_16034_p2() {
    and_ln316_231_fu_16034_p2 = (shl_ln316_231_fu_16028_p2.read() & select_ln315_231_fu_16020_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_232_fu_16121_p2() {
    and_ln316_232_fu_16121_p2 = (shl_ln316_232_fu_16115_p2.read() & select_ln315_232_fu_16107_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_233_fu_16160_p2() {
    and_ln316_233_fu_16160_p2 = (shl_ln316_233_fu_16154_p2.read() & select_ln315_233_fu_16146_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_234_fu_16227_p2() {
    and_ln316_234_fu_16227_p2 = (shl_ln316_234_fu_16221_p2.read() & select_ln315_234_fu_16213_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_235_fu_16266_p2() {
    and_ln316_235_fu_16266_p2 = (shl_ln316_235_fu_16260_p2.read() & select_ln315_235_fu_16252_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_236_fu_16348_p2() {
    and_ln316_236_fu_16348_p2 = (shl_ln316_236_fu_16342_p2.read() & select_ln315_236_fu_16334_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_237_fu_16387_p2() {
    and_ln316_237_fu_16387_p2 = (shl_ln316_237_fu_16381_p2.read() & select_ln315_237_fu_16373_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_238_fu_16454_p2() {
    and_ln316_238_fu_16454_p2 = (shl_ln316_238_fu_16448_p2.read() & select_ln315_238_fu_16440_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_239_fu_16493_p2() {
    and_ln316_239_fu_16493_p2 = (shl_ln316_239_fu_16487_p2.read() & select_ln315_239_fu_16479_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_23_fu_3985_p2() {
    and_ln316_23_fu_3985_p2 = (shl_ln316_23_fu_3979_p2.read() & select_ln315_23_fu_3971_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_240_fu_16585_p2() {
    and_ln316_240_fu_16585_p2 = (shl_ln316_240_fu_16579_p2.read() & select_ln315_240_fu_16571_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_241_fu_16624_p2() {
    and_ln316_241_fu_16624_p2 = (shl_ln316_241_fu_16618_p2.read() & select_ln315_241_fu_16610_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_242_fu_16691_p2() {
    and_ln316_242_fu_16691_p2 = (shl_ln316_242_fu_16685_p2.read() & select_ln315_242_fu_16677_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_243_fu_16730_p2() {
    and_ln316_243_fu_16730_p2 = (shl_ln316_243_fu_16724_p2.read() & select_ln315_243_fu_16716_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_244_fu_16812_p2() {
    and_ln316_244_fu_16812_p2 = (shl_ln316_244_fu_16806_p2.read() & select_ln315_244_fu_16798_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_245_fu_16851_p2() {
    and_ln316_245_fu_16851_p2 = (shl_ln316_245_fu_16845_p2.read() & select_ln315_245_fu_16837_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_246_fu_16918_p2() {
    and_ln316_246_fu_16918_p2 = (shl_ln316_246_fu_16912_p2.read() & select_ln315_246_fu_16904_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_247_fu_16957_p2() {
    and_ln316_247_fu_16957_p2 = (shl_ln316_247_fu_16951_p2.read() & select_ln315_247_fu_16943_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_248_fu_17044_p2() {
    and_ln316_248_fu_17044_p2 = (shl_ln316_248_fu_17038_p2.read() & select_ln315_248_fu_17030_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_249_fu_17083_p2() {
    and_ln316_249_fu_17083_p2 = (shl_ln316_249_fu_17077_p2.read() & select_ln315_249_fu_17069_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_24_fu_4072_p2() {
    and_ln316_24_fu_4072_p2 = (shl_ln316_24_fu_4066_p2.read() & select_ln315_24_fu_4058_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_250_fu_17150_p2() {
    and_ln316_250_fu_17150_p2 = (shl_ln316_250_fu_17144_p2.read() & select_ln315_250_fu_17136_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_251_fu_17189_p2() {
    and_ln316_251_fu_17189_p2 = (shl_ln316_251_fu_17183_p2.read() & select_ln315_251_fu_17175_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_252_fu_17271_p2() {
    and_ln316_252_fu_17271_p2 = (shl_ln316_252_fu_17265_p2.read() & select_ln315_252_fu_17257_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_253_fu_17310_p2() {
    and_ln316_253_fu_17310_p2 = (shl_ln316_253_fu_17304_p2.read() & select_ln315_253_fu_17296_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_254_fu_17349_p2() {
    and_ln316_254_fu_17349_p2 = (shl_ln316_254_fu_17343_p2.read() & select_ln315_254_fu_17335_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_255_fu_17388_p2() {
    and_ln316_255_fu_17388_p2 = (shl_ln316_255_fu_17382_p2.read() & select_ln315_255_fu_17374_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_25_fu_4111_p2() {
    and_ln316_25_fu_4111_p2 = (shl_ln316_25_fu_4105_p2.read() & select_ln315_25_fu_4097_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_26_fu_4178_p2() {
    and_ln316_26_fu_4178_p2 = (shl_ln316_26_fu_4172_p2.read() & select_ln315_26_fu_4164_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_27_fu_4217_p2() {
    and_ln316_27_fu_4217_p2 = (shl_ln316_27_fu_4211_p2.read() & select_ln315_27_fu_4203_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_28_fu_4299_p2() {
    and_ln316_28_fu_4299_p2 = (shl_ln316_28_fu_4293_p2.read() & select_ln315_28_fu_4285_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_29_fu_4338_p2() {
    and_ln316_29_fu_4338_p2 = (shl_ln316_29_fu_4332_p2.read() & select_ln315_29_fu_4324_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_2_fu_2801_p2() {
    and_ln316_2_fu_2801_p2 = (shl_ln316_2_fu_2795_p2.read() & select_ln315_2_fu_2787_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_30_fu_4405_p2() {
    and_ln316_30_fu_4405_p2 = (shl_ln316_30_fu_4399_p2.read() & select_ln315_30_fu_4391_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_31_fu_4444_p2() {
    and_ln316_31_fu_4444_p2 = (shl_ln316_31_fu_4438_p2.read() & select_ln315_31_fu_4430_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_32_fu_4536_p2() {
    and_ln316_32_fu_4536_p2 = (shl_ln316_32_fu_4530_p2.read() & select_ln315_32_fu_4522_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_33_fu_4575_p2() {
    and_ln316_33_fu_4575_p2 = (shl_ln316_33_fu_4569_p2.read() & select_ln315_33_fu_4561_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_34_fu_4642_p2() {
    and_ln316_34_fu_4642_p2 = (shl_ln316_34_fu_4636_p2.read() & select_ln315_34_fu_4628_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_35_fu_4681_p2() {
    and_ln316_35_fu_4681_p2 = (shl_ln316_35_fu_4675_p2.read() & select_ln315_35_fu_4667_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_36_fu_4763_p2() {
    and_ln316_36_fu_4763_p2 = (shl_ln316_36_fu_4757_p2.read() & select_ln315_36_fu_4749_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_37_fu_4802_p2() {
    and_ln316_37_fu_4802_p2 = (shl_ln316_37_fu_4796_p2.read() & select_ln315_37_fu_4788_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_38_fu_4869_p2() {
    and_ln316_38_fu_4869_p2 = (shl_ln316_38_fu_4863_p2.read() & select_ln315_38_fu_4855_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_39_fu_4908_p2() {
    and_ln316_39_fu_4908_p2 = (shl_ln316_39_fu_4902_p2.read() & select_ln315_39_fu_4894_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_3_fu_2840_p2() {
    and_ln316_3_fu_2840_p2 = (shl_ln316_3_fu_2834_p2.read() & select_ln315_3_fu_2826_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_40_fu_4995_p2() {
    and_ln316_40_fu_4995_p2 = (shl_ln316_40_fu_4989_p2.read() & select_ln315_40_fu_4981_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_41_fu_5034_p2() {
    and_ln316_41_fu_5034_p2 = (shl_ln316_41_fu_5028_p2.read() & select_ln315_41_fu_5020_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_42_fu_5101_p2() {
    and_ln316_42_fu_5101_p2 = (shl_ln316_42_fu_5095_p2.read() & select_ln315_42_fu_5087_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_43_fu_5140_p2() {
    and_ln316_43_fu_5140_p2 = (shl_ln316_43_fu_5134_p2.read() & select_ln315_43_fu_5126_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_44_fu_5222_p2() {
    and_ln316_44_fu_5222_p2 = (shl_ln316_44_fu_5216_p2.read() & select_ln315_44_fu_5208_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_45_fu_5261_p2() {
    and_ln316_45_fu_5261_p2 = (shl_ln316_45_fu_5255_p2.read() & select_ln315_45_fu_5247_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_46_fu_5328_p2() {
    and_ln316_46_fu_5328_p2 = (shl_ln316_46_fu_5322_p2.read() & select_ln315_46_fu_5314_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_47_fu_5367_p2() {
    and_ln316_47_fu_5367_p2 = (shl_ln316_47_fu_5361_p2.read() & select_ln315_47_fu_5353_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_48_fu_5459_p2() {
    and_ln316_48_fu_5459_p2 = (shl_ln316_48_fu_5453_p2.read() & select_ln315_48_fu_5445_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_49_fu_5498_p2() {
    and_ln316_49_fu_5498_p2 = (shl_ln316_49_fu_5492_p2.read() & select_ln315_49_fu_5484_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_4_fu_2917_p2() {
    and_ln316_4_fu_2917_p2 = (shl_ln316_4_fu_2911_p2.read() & select_ln315_4_fu_2903_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_50_fu_5565_p2() {
    and_ln316_50_fu_5565_p2 = (shl_ln316_50_fu_5559_p2.read() & select_ln315_50_fu_5551_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_51_fu_5604_p2() {
    and_ln316_51_fu_5604_p2 = (shl_ln316_51_fu_5598_p2.read() & select_ln315_51_fu_5590_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_52_fu_5686_p2() {
    and_ln316_52_fu_5686_p2 = (shl_ln316_52_fu_5680_p2.read() & select_ln315_52_fu_5672_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_53_fu_5725_p2() {
    and_ln316_53_fu_5725_p2 = (shl_ln316_53_fu_5719_p2.read() & select_ln315_53_fu_5711_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_54_fu_5792_p2() {
    and_ln316_54_fu_5792_p2 = (shl_ln316_54_fu_5786_p2.read() & select_ln315_54_fu_5778_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_55_fu_5831_p2() {
    and_ln316_55_fu_5831_p2 = (shl_ln316_55_fu_5825_p2.read() & select_ln315_55_fu_5817_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_56_fu_5918_p2() {
    and_ln316_56_fu_5918_p2 = (shl_ln316_56_fu_5912_p2.read() & select_ln315_56_fu_5904_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_57_fu_5957_p2() {
    and_ln316_57_fu_5957_p2 = (shl_ln316_57_fu_5951_p2.read() & select_ln315_57_fu_5943_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_58_fu_6024_p2() {
    and_ln316_58_fu_6024_p2 = (shl_ln316_58_fu_6018_p2.read() & select_ln315_58_fu_6010_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_59_fu_6063_p2() {
    and_ln316_59_fu_6063_p2 = (shl_ln316_59_fu_6057_p2.read() & select_ln315_59_fu_6049_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_5_fu_2956_p2() {
    and_ln316_5_fu_2956_p2 = (shl_ln316_5_fu_2950_p2.read() & select_ln315_5_fu_2942_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_60_fu_6145_p2() {
    and_ln316_60_fu_6145_p2 = (shl_ln316_60_fu_6139_p2.read() & select_ln315_60_fu_6131_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_61_fu_6184_p2() {
    and_ln316_61_fu_6184_p2 = (shl_ln316_61_fu_6178_p2.read() & select_ln315_61_fu_6170_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_62_fu_6251_p2() {
    and_ln316_62_fu_6251_p2 = (shl_ln316_62_fu_6245_p2.read() & select_ln315_62_fu_6237_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_63_fu_6290_p2() {
    and_ln316_63_fu_6290_p2 = (shl_ln316_63_fu_6284_p2.read() & select_ln315_63_fu_6276_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_64_fu_6397_p2() {
    and_ln316_64_fu_6397_p2 = (shl_ln316_64_fu_6391_p2.read() & select_ln315_64_fu_6383_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_65_fu_6436_p2() {
    and_ln316_65_fu_6436_p2 = (shl_ln316_65_fu_6430_p2.read() & select_ln315_65_fu_6422_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_66_fu_6503_p2() {
    and_ln316_66_fu_6503_p2 = (shl_ln316_66_fu_6497_p2.read() & select_ln315_66_fu_6489_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_67_fu_6542_p2() {
    and_ln316_67_fu_6542_p2 = (shl_ln316_67_fu_6536_p2.read() & select_ln315_67_fu_6528_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_68_fu_6624_p2() {
    and_ln316_68_fu_6624_p2 = (shl_ln316_68_fu_6618_p2.read() & select_ln315_68_fu_6610_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_69_fu_6663_p2() {
    and_ln316_69_fu_6663_p2 = (shl_ln316_69_fu_6657_p2.read() & select_ln315_69_fu_6649_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_6_fu_3023_p2() {
    and_ln316_6_fu_3023_p2 = (shl_ln316_6_fu_3017_p2.read() & select_ln315_6_fu_3009_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_70_fu_6730_p2() {
    and_ln316_70_fu_6730_p2 = (shl_ln316_70_fu_6724_p2.read() & select_ln315_70_fu_6716_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_71_fu_6769_p2() {
    and_ln316_71_fu_6769_p2 = (shl_ln316_71_fu_6763_p2.read() & select_ln315_71_fu_6755_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_72_fu_6856_p2() {
    and_ln316_72_fu_6856_p2 = (shl_ln316_72_fu_6850_p2.read() & select_ln315_72_fu_6842_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_73_fu_6895_p2() {
    and_ln316_73_fu_6895_p2 = (shl_ln316_73_fu_6889_p2.read() & select_ln315_73_fu_6881_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_74_fu_6962_p2() {
    and_ln316_74_fu_6962_p2 = (shl_ln316_74_fu_6956_p2.read() & select_ln315_74_fu_6948_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_75_fu_7001_p2() {
    and_ln316_75_fu_7001_p2 = (shl_ln316_75_fu_6995_p2.read() & select_ln315_75_fu_6987_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_76_fu_7083_p2() {
    and_ln316_76_fu_7083_p2 = (shl_ln316_76_fu_7077_p2.read() & select_ln315_76_fu_7069_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_77_fu_7122_p2() {
    and_ln316_77_fu_7122_p2 = (shl_ln316_77_fu_7116_p2.read() & select_ln315_77_fu_7108_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_78_fu_7189_p2() {
    and_ln316_78_fu_7189_p2 = (shl_ln316_78_fu_7183_p2.read() & select_ln315_78_fu_7175_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_79_fu_7228_p2() {
    and_ln316_79_fu_7228_p2 = (shl_ln316_79_fu_7222_p2.read() & select_ln315_79_fu_7214_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_7_fu_3062_p2() {
    and_ln316_7_fu_3062_p2 = (shl_ln316_7_fu_3056_p2.read() & select_ln315_7_fu_3048_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_80_fu_7320_p2() {
    and_ln316_80_fu_7320_p2 = (shl_ln316_80_fu_7314_p2.read() & select_ln315_80_fu_7306_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_81_fu_7359_p2() {
    and_ln316_81_fu_7359_p2 = (shl_ln316_81_fu_7353_p2.read() & select_ln315_81_fu_7345_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_82_fu_7426_p2() {
    and_ln316_82_fu_7426_p2 = (shl_ln316_82_fu_7420_p2.read() & select_ln315_82_fu_7412_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_83_fu_7465_p2() {
    and_ln316_83_fu_7465_p2 = (shl_ln316_83_fu_7459_p2.read() & select_ln315_83_fu_7451_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_84_fu_7547_p2() {
    and_ln316_84_fu_7547_p2 = (shl_ln316_84_fu_7541_p2.read() & select_ln315_84_fu_7533_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_85_fu_7586_p2() {
    and_ln316_85_fu_7586_p2 = (shl_ln316_85_fu_7580_p2.read() & select_ln315_85_fu_7572_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_86_fu_7653_p2() {
    and_ln316_86_fu_7653_p2 = (shl_ln316_86_fu_7647_p2.read() & select_ln315_86_fu_7639_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_87_fu_7692_p2() {
    and_ln316_87_fu_7692_p2 = (shl_ln316_87_fu_7686_p2.read() & select_ln315_87_fu_7678_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_88_fu_7779_p2() {
    and_ln316_88_fu_7779_p2 = (shl_ln316_88_fu_7773_p2.read() & select_ln315_88_fu_7765_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_89_fu_7818_p2() {
    and_ln316_89_fu_7818_p2 = (shl_ln316_89_fu_7812_p2.read() & select_ln315_89_fu_7804_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_8_fu_3149_p2() {
    and_ln316_8_fu_3149_p2 = (shl_ln316_8_fu_3143_p2.read() & select_ln315_8_fu_3135_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_90_fu_7885_p2() {
    and_ln316_90_fu_7885_p2 = (shl_ln316_90_fu_7879_p2.read() & select_ln315_90_fu_7871_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_91_fu_7924_p2() {
    and_ln316_91_fu_7924_p2 = (shl_ln316_91_fu_7918_p2.read() & select_ln315_91_fu_7910_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_92_fu_8006_p2() {
    and_ln316_92_fu_8006_p2 = (shl_ln316_92_fu_8000_p2.read() & select_ln315_92_fu_7992_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_93_fu_8045_p2() {
    and_ln316_93_fu_8045_p2 = (shl_ln316_93_fu_8039_p2.read() & select_ln315_93_fu_8031_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_94_fu_8112_p2() {
    and_ln316_94_fu_8112_p2 = (shl_ln316_94_fu_8106_p2.read() & select_ln315_94_fu_8098_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_95_fu_8151_p2() {
    and_ln316_95_fu_8151_p2 = (shl_ln316_95_fu_8145_p2.read() & select_ln315_95_fu_8137_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_96_fu_8243_p2() {
    and_ln316_96_fu_8243_p2 = (shl_ln316_96_fu_8237_p2.read() & select_ln315_96_fu_8229_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_97_fu_8282_p2() {
    and_ln316_97_fu_8282_p2 = (shl_ln316_97_fu_8276_p2.read() & select_ln315_97_fu_8268_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_98_fu_8349_p2() {
    and_ln316_98_fu_8349_p2 = (shl_ln316_98_fu_8343_p2.read() & select_ln315_98_fu_8335_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_99_fu_8388_p2() {
    and_ln316_99_fu_8388_p2 = (shl_ln316_99_fu_8382_p2.read() & select_ln315_99_fu_8374_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_9_fu_3188_p2() {
    and_ln316_9_fu_3188_p2 = (shl_ln316_9_fu_3182_p2.read() & select_ln315_9_fu_3174_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln316_fu_2693_p2() {
    and_ln316_fu_2693_p2 = (shl_ln316_fu_2687_p2.read() & select_ln315_fu_2679_p3.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_100_fu_8864_p2() {
    and_ln318_100_fu_8864_p2 = (icmp_ln318_103_reg_19029.read() & icmp_ln318_104_reg_19049.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_101_fu_8868_p2() {
    and_ln318_101_fu_8868_p2 = (icmp_ln318_105_reg_19054.read() & icmp_ln318_106_fu_8820_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_102_fu_8873_p2() {
    and_ln318_102_fu_8873_p2 = (and_ln318_101_fu_8868_p2.read() & and_ln318_100_fu_8864_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_103_fu_9091_p2() {
    and_ln318_103_fu_9091_p2 = (icmp_ln318_107_reg_19069.read() & icmp_ln318_108_reg_19089.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_104_fu_9095_p2() {
    and_ln318_104_fu_9095_p2 = (icmp_ln318_109_reg_19094.read() & icmp_ln318_110_fu_9047_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_105_fu_9100_p2() {
    and_ln318_105_fu_9100_p2 = (and_ln318_104_fu_9095_p2.read() & and_ln318_103_fu_9091_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_106_fu_9106_p2() {
    and_ln318_106_fu_9106_p2 = (and_ln318_105_fu_9100_p2.read() & and_ln318_102_reg_19074.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_107_fu_9111_p2() {
    and_ln318_107_fu_9111_p2 = (and_ln318_106_fu_9106_p2.read() & and_ln318_99_reg_19034.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_108_fu_9328_p2() {
    and_ln318_108_fu_9328_p2 = (icmp_ln318_111_reg_19109.read() & icmp_ln318_112_reg_19129.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_109_fu_9332_p2() {
    and_ln318_109_fu_9332_p2 = (icmp_ln318_113_reg_19134.read() & icmp_ln318_114_fu_9284_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_10_fu_3542_p2() {
    and_ln318_10_fu_3542_p2 = (icmp_ln318_13_reg_18134.read() & icmp_ln318_14_fu_3494_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_110_fu_9337_p2() {
    and_ln318_110_fu_9337_p2 = (and_ln318_109_fu_9332_p2.read() & and_ln318_108_fu_9328_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_111_fu_9555_p2() {
    and_ln318_111_fu_9555_p2 = (icmp_ln318_115_reg_19149.read() & icmp_ln318_116_reg_19169.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_112_fu_9559_p2() {
    and_ln318_112_fu_9559_p2 = (icmp_ln318_117_reg_19174.read() & icmp_ln318_118_fu_9511_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_113_fu_9564_p2() {
    and_ln318_113_fu_9564_p2 = (and_ln318_112_fu_9559_p2.read() & and_ln318_111_fu_9555_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_114_fu_9570_p2() {
    and_ln318_114_fu_9570_p2 = (and_ln318_113_fu_9564_p2.read() & and_ln318_110_reg_19154.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_115_fu_9787_p2() {
    and_ln318_115_fu_9787_p2 = (icmp_ln318_119_reg_19189.read() & icmp_ln318_120_reg_19209.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_116_fu_9791_p2() {
    and_ln318_116_fu_9791_p2 = (icmp_ln318_121_reg_19214.read() & icmp_ln318_122_fu_9743_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_117_fu_9796_p2() {
    and_ln318_117_fu_9796_p2 = (and_ln318_116_fu_9791_p2.read() & and_ln318_115_fu_9787_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_118_fu_10018_p2() {
    and_ln318_118_fu_10018_p2 = (icmp_ln318_123_reg_19229.read() & icmp_ln318_124_reg_19249.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_119_fu_10022_p2() {
    and_ln318_119_fu_10022_p2 = (icmp_ln318_125_reg_19254.read() & icmp_ln318_126_fu_9970_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_11_fu_3547_p2() {
    and_ln318_11_fu_3547_p2 = (and_ln318_10_fu_3542_p2.read() & and_ln318_9_fu_3538_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_120_fu_10027_p2() {
    and_ln318_120_fu_10027_p2 = (and_ln318_119_fu_10022_p2.read() & and_ln318_118_fu_10018_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_121_fu_10033_p2() {
    and_ln318_121_fu_10033_p2 = (and_ln318_120_fu_10027_p2.read() & and_ln318_117_reg_19234.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_122_fu_10038_p2() {
    and_ln318_122_fu_10038_p2 = (and_ln318_121_fu_10033_p2.read() & and_ln318_114_reg_19194.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_123_fu_10043_p2() {
    and_ln318_123_fu_10043_p2 = (and_ln318_122_fu_10038_p2.read() & and_ln318_107_reg_19114.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_124_fu_10048_p2() {
    and_ln318_124_fu_10048_p2 = (and_ln318_123_fu_10043_p2.read() & and_ln318_92_fu_10014_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_125_fu_10054_p2() {
    and_ln318_125_fu_10054_p2 = (and_ln318_124_fu_10048_p2.read() & and_ln318_61_reg_18634.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_126_fu_10271_p2() {
    and_ln318_126_fu_10271_p2 = (icmp_ln318_127_reg_19269.read() & icmp_ln318_128_reg_19289.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_127_fu_10275_p2() {
    and_ln318_127_fu_10275_p2 = (icmp_ln318_129_reg_19294.read() & icmp_ln318_130_fu_10227_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_128_fu_10280_p2() {
    and_ln318_128_fu_10280_p2 = (and_ln318_127_fu_10275_p2.read() & and_ln318_126_fu_10271_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_129_fu_10498_p2() {
    and_ln318_129_fu_10498_p2 = (icmp_ln318_131_reg_19309.read() & icmp_ln318_132_reg_19329.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_12_fu_3553_p2() {
    and_ln318_12_fu_3553_p2 = (and_ln318_11_fu_3547_p2.read() & and_ln318_8_reg_18114.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_130_fu_10502_p2() {
    and_ln318_130_fu_10502_p2 = (icmp_ln318_133_reg_19334.read() & icmp_ln318_134_fu_10454_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_131_fu_10507_p2() {
    and_ln318_131_fu_10507_p2 = (and_ln318_130_fu_10502_p2.read() & and_ln318_129_fu_10498_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_132_fu_10513_p2() {
    and_ln318_132_fu_10513_p2 = (and_ln318_131_fu_10507_p2.read() & and_ln318_128_reg_19314.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_133_fu_10730_p2() {
    and_ln318_133_fu_10730_p2 = (icmp_ln318_135_reg_19349.read() & icmp_ln318_136_reg_19369.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_134_fu_10734_p2() {
    and_ln318_134_fu_10734_p2 = (icmp_ln318_137_reg_19374.read() & icmp_ln318_138_fu_10686_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_135_fu_10739_p2() {
    and_ln318_135_fu_10739_p2 = (and_ln318_134_fu_10734_p2.read() & and_ln318_133_fu_10730_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_136_fu_10957_p2() {
    and_ln318_136_fu_10957_p2 = (icmp_ln318_139_reg_19389.read() & icmp_ln318_140_reg_19409.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_137_fu_10961_p2() {
    and_ln318_137_fu_10961_p2 = (icmp_ln318_141_reg_19414.read() & icmp_ln318_142_fu_10913_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_138_fu_10966_p2() {
    and_ln318_138_fu_10966_p2 = (and_ln318_137_fu_10961_p2.read() & and_ln318_136_fu_10957_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_139_fu_10972_p2() {
    and_ln318_139_fu_10972_p2 = (and_ln318_138_fu_10966_p2.read() & and_ln318_135_reg_19394.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_13_fu_3558_p2() {
    and_ln318_13_fu_3558_p2 = (and_ln318_12_fu_3553_p2.read() & and_ln318_5_reg_18074.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_140_fu_10977_p2() {
    and_ln318_140_fu_10977_p2 = (and_ln318_139_fu_10972_p2.read() & and_ln318_132_reg_19354.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_141_fu_11194_p2() {
    and_ln318_141_fu_11194_p2 = (icmp_ln318_143_reg_19429.read() & icmp_ln318_144_reg_19449.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_142_fu_11198_p2() {
    and_ln318_142_fu_11198_p2 = (icmp_ln318_145_reg_19454.read() & icmp_ln318_146_fu_11150_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_143_fu_11203_p2() {
    and_ln318_143_fu_11203_p2 = (and_ln318_142_fu_11198_p2.read() & and_ln318_141_fu_11194_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_144_fu_11421_p2() {
    and_ln318_144_fu_11421_p2 = (icmp_ln318_147_reg_19469.read() & icmp_ln318_148_reg_19489.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_145_fu_11425_p2() {
    and_ln318_145_fu_11425_p2 = (icmp_ln318_149_reg_19494.read() & icmp_ln318_150_fu_11377_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_146_fu_11430_p2() {
    and_ln318_146_fu_11430_p2 = (and_ln318_145_fu_11425_p2.read() & and_ln318_144_fu_11421_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_147_fu_11436_p2() {
    and_ln318_147_fu_11436_p2 = (and_ln318_146_fu_11430_p2.read() & and_ln318_143_reg_19474.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_148_fu_11653_p2() {
    and_ln318_148_fu_11653_p2 = (icmp_ln318_151_reg_19509.read() & icmp_ln318_152_reg_19529.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_149_fu_11657_p2() {
    and_ln318_149_fu_11657_p2 = (icmp_ln318_153_reg_19534.read() & icmp_ln318_154_fu_11609_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_14_fu_3775_p2() {
    and_ln318_14_fu_3775_p2 = (icmp_ln318_15_reg_18149.read() & icmp_ln318_16_reg_18169.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_150_fu_11662_p2() {
    and_ln318_150_fu_11662_p2 = (and_ln318_149_fu_11657_p2.read() & and_ln318_148_fu_11653_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_151_fu_11880_p2() {
    and_ln318_151_fu_11880_p2 = (icmp_ln318_155_reg_19549.read() & icmp_ln318_156_reg_19569.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_152_fu_11884_p2() {
    and_ln318_152_fu_11884_p2 = (icmp_ln318_157_reg_19574.read() & icmp_ln318_158_fu_11836_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_153_fu_11889_p2() {
    and_ln318_153_fu_11889_p2 = (and_ln318_152_fu_11884_p2.read() & and_ln318_151_fu_11880_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_154_fu_11895_p2() {
    and_ln318_154_fu_11895_p2 = (and_ln318_153_fu_11889_p2.read() & and_ln318_150_reg_19554.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_155_fu_11900_p2() {
    and_ln318_155_fu_11900_p2 = (and_ln318_154_fu_11895_p2.read() & and_ln318_147_reg_19514.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_156_fu_13726_p2() {
    and_ln318_156_fu_13726_p2 = (and_ln318_155_reg_19594.read() & and_ln318_140_reg_19434.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_157_fu_12117_p2() {
    and_ln318_157_fu_12117_p2 = (icmp_ln318_159_reg_19589.read() & icmp_ln318_160_reg_19609.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_158_fu_12121_p2() {
    and_ln318_158_fu_12121_p2 = (icmp_ln318_161_reg_19614.read() & icmp_ln318_162_fu_12073_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_159_fu_12126_p2() {
    and_ln318_159_fu_12126_p2 = (and_ln318_158_fu_12121_p2.read() & and_ln318_157_fu_12117_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_15_fu_3779_p2() {
    and_ln318_15_fu_3779_p2 = (icmp_ln318_17_reg_18174.read() & icmp_ln318_18_fu_3731_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_160_fu_12344_p2() {
    and_ln318_160_fu_12344_p2 = (icmp_ln318_163_reg_19629.read() & icmp_ln318_164_reg_19649.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_161_fu_12348_p2() {
    and_ln318_161_fu_12348_p2 = (icmp_ln318_165_reg_19654.read() & icmp_ln318_166_fu_12300_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_162_fu_12353_p2() {
    and_ln318_162_fu_12353_p2 = (and_ln318_161_fu_12348_p2.read() & and_ln318_160_fu_12344_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_163_fu_12359_p2() {
    and_ln318_163_fu_12359_p2 = (and_ln318_162_fu_12353_p2.read() & and_ln318_159_reg_19634.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_164_fu_12576_p2() {
    and_ln318_164_fu_12576_p2 = (icmp_ln318_167_reg_19669.read() & icmp_ln318_168_reg_19689.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_165_fu_12580_p2() {
    and_ln318_165_fu_12580_p2 = (icmp_ln318_169_reg_19694.read() & icmp_ln318_170_fu_12532_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_166_fu_12585_p2() {
    and_ln318_166_fu_12585_p2 = (and_ln318_165_fu_12580_p2.read() & and_ln318_164_fu_12576_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_167_fu_12803_p2() {
    and_ln318_167_fu_12803_p2 = (icmp_ln318_171_reg_19709.read() & icmp_ln318_172_reg_19729.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_168_fu_12807_p2() {
    and_ln318_168_fu_12807_p2 = (icmp_ln318_173_reg_19734.read() & icmp_ln318_174_fu_12759_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_169_fu_12812_p2() {
    and_ln318_169_fu_12812_p2 = (and_ln318_168_fu_12807_p2.read() & and_ln318_167_fu_12803_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_16_fu_3784_p2() {
    and_ln318_16_fu_3784_p2 = (and_ln318_15_fu_3779_p2.read() & and_ln318_14_fu_3775_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_170_fu_12818_p2() {
    and_ln318_170_fu_12818_p2 = (and_ln318_169_fu_12812_p2.read() & and_ln318_166_reg_19714.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_171_fu_12823_p2() {
    and_ln318_171_fu_12823_p2 = (and_ln318_170_fu_12818_p2.read() & and_ln318_163_reg_19674.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_172_fu_13040_p2() {
    and_ln318_172_fu_13040_p2 = (icmp_ln318_175_reg_19749.read() & icmp_ln318_176_reg_19769.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_173_fu_13044_p2() {
    and_ln318_173_fu_13044_p2 = (icmp_ln318_177_reg_19774.read() & icmp_ln318_178_fu_12996_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_174_fu_13049_p2() {
    and_ln318_174_fu_13049_p2 = (and_ln318_173_fu_13044_p2.read() & and_ln318_172_fu_13040_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_175_fu_13267_p2() {
    and_ln318_175_fu_13267_p2 = (icmp_ln318_179_reg_19789.read() & icmp_ln318_180_reg_19809.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_176_fu_13271_p2() {
    and_ln318_176_fu_13271_p2 = (icmp_ln318_181_reg_19814.read() & icmp_ln318_182_fu_13223_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_177_fu_13276_p2() {
    and_ln318_177_fu_13276_p2 = (and_ln318_176_fu_13271_p2.read() & and_ln318_175_fu_13267_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_178_fu_13282_p2() {
    and_ln318_178_fu_13282_p2 = (and_ln318_177_fu_13276_p2.read() & and_ln318_174_reg_19794.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_179_fu_13499_p2() {
    and_ln318_179_fu_13499_p2 = (icmp_ln318_183_reg_19829.read() & icmp_ln318_184_reg_19849.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_17_fu_4002_p2() {
    and_ln318_17_fu_4002_p2 = (icmp_ln318_19_reg_18189.read() & icmp_ln318_20_reg_18209.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_180_fu_13503_p2() {
    and_ln318_180_fu_13503_p2 = (icmp_ln318_185_reg_19854.read() & icmp_ln318_186_fu_13455_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_181_fu_13508_p2() {
    and_ln318_181_fu_13508_p2 = (and_ln318_180_fu_13503_p2.read() & and_ln318_179_fu_13499_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_182_fu_13730_p2() {
    and_ln318_182_fu_13730_p2 = (icmp_ln318_187_reg_19869.read() & icmp_ln318_188_reg_19889.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_183_fu_13734_p2() {
    and_ln318_183_fu_13734_p2 = (icmp_ln318_189_reg_19894.read() & icmp_ln318_190_fu_13682_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_184_fu_13739_p2() {
    and_ln318_184_fu_13739_p2 = (and_ln318_183_fu_13734_p2.read() & and_ln318_182_fu_13730_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_185_fu_13745_p2() {
    and_ln318_185_fu_13745_p2 = (and_ln318_184_fu_13739_p2.read() & and_ln318_181_reg_19874.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_186_fu_13750_p2() {
    and_ln318_186_fu_13750_p2 = (and_ln318_185_fu_13745_p2.read() & and_ln318_178_reg_19834.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_187_fu_13755_p2() {
    and_ln318_187_fu_13755_p2 = (and_ln318_186_fu_13750_p2.read() & and_ln318_171_reg_19754.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_188_fu_13760_p2() {
    and_ln318_188_fu_13760_p2 = (and_ln318_187_fu_13755_p2.read() & and_ln318_156_fu_13726_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_189_fu_13978_p2() {
    and_ln318_189_fu_13978_p2 = (icmp_ln318_191_reg_19909.read() & icmp_ln318_192_reg_19929.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_18_fu_4006_p2() {
    and_ln318_18_fu_4006_p2 = (icmp_ln318_21_reg_18214.read() & icmp_ln318_22_fu_3958_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_190_fu_13982_p2() {
    and_ln318_190_fu_13982_p2 = (icmp_ln318_193_reg_19934.read() & icmp_ln318_194_fu_13934_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_191_fu_13987_p2() {
    and_ln318_191_fu_13987_p2 = (and_ln318_190_fu_13982_p2.read() & and_ln318_189_fu_13978_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_192_fu_14205_p2() {
    and_ln318_192_fu_14205_p2 = (icmp_ln318_195_reg_19949.read() & icmp_ln318_196_reg_19969.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_193_fu_14209_p2() {
    and_ln318_193_fu_14209_p2 = (icmp_ln318_197_reg_19974.read() & icmp_ln318_198_fu_14161_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_194_fu_14214_p2() {
    and_ln318_194_fu_14214_p2 = (and_ln318_193_fu_14209_p2.read() & and_ln318_192_fu_14205_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_195_fu_14220_p2() {
    and_ln318_195_fu_14220_p2 = (and_ln318_194_fu_14214_p2.read() & and_ln318_191_reg_19954.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_196_fu_14437_p2() {
    and_ln318_196_fu_14437_p2 = (icmp_ln318_199_reg_19989.read() & icmp_ln318_200_reg_20009.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_197_fu_14441_p2() {
    and_ln318_197_fu_14441_p2 = (icmp_ln318_201_reg_20014.read() & icmp_ln318_202_fu_14393_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_198_fu_14446_p2() {
    and_ln318_198_fu_14446_p2 = (and_ln318_197_fu_14441_p2.read() & and_ln318_196_fu_14437_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_199_fu_14664_p2() {
    and_ln318_199_fu_14664_p2 = (icmp_ln318_203_reg_20029.read() & icmp_ln318_204_reg_20049.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_19_fu_4011_p2() {
    and_ln318_19_fu_4011_p2 = (and_ln318_18_fu_4006_p2.read() & and_ln318_17_fu_4002_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_1_fu_2862_p2() {
    and_ln318_1_fu_2862_p2 = (and_ln318_fu_2857_p2.read() & icmp_ln318_reg_18009.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_200_fu_14668_p2() {
    and_ln318_200_fu_14668_p2 = (icmp_ln318_205_reg_20054.read() & icmp_ln318_206_fu_14620_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_201_fu_14673_p2() {
    and_ln318_201_fu_14673_p2 = (and_ln318_200_fu_14668_p2.read() & and_ln318_199_fu_14664_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_202_fu_14679_p2() {
    and_ln318_202_fu_14679_p2 = (and_ln318_201_fu_14673_p2.read() & and_ln318_198_reg_20034.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_203_fu_14684_p2() {
    and_ln318_203_fu_14684_p2 = (and_ln318_202_fu_14679_p2.read() & and_ln318_195_reg_19994.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_204_fu_14901_p2() {
    and_ln318_204_fu_14901_p2 = (icmp_ln318_207_reg_20069.read() & icmp_ln318_208_reg_20089.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_205_fu_14905_p2() {
    and_ln318_205_fu_14905_p2 = (icmp_ln318_209_reg_20094.read() & icmp_ln318_210_fu_14857_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_206_fu_14910_p2() {
    and_ln318_206_fu_14910_p2 = (and_ln318_205_fu_14905_p2.read() & and_ln318_204_fu_14901_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_207_fu_15128_p2() {
    and_ln318_207_fu_15128_p2 = (icmp_ln318_211_reg_20109.read() & icmp_ln318_212_reg_20129.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_208_fu_15132_p2() {
    and_ln318_208_fu_15132_p2 = (icmp_ln318_213_reg_20134.read() & icmp_ln318_214_fu_15084_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_209_fu_15137_p2() {
    and_ln318_209_fu_15137_p2 = (and_ln318_208_fu_15132_p2.read() & and_ln318_207_fu_15128_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_20_fu_4017_p2() {
    and_ln318_20_fu_4017_p2 = (and_ln318_19_fu_4011_p2.read() & and_ln318_16_reg_18194.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_210_fu_15143_p2() {
    and_ln318_210_fu_15143_p2 = (and_ln318_209_fu_15137_p2.read() & and_ln318_206_reg_20114.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_211_fu_15360_p2() {
    and_ln318_211_fu_15360_p2 = (icmp_ln318_215_reg_20149.read() & icmp_ln318_216_reg_20169.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_212_fu_15364_p2() {
    and_ln318_212_fu_15364_p2 = (icmp_ln318_217_reg_20174.read() & icmp_ln318_218_fu_15316_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_213_fu_15369_p2() {
    and_ln318_213_fu_15369_p2 = (and_ln318_212_fu_15364_p2.read() & and_ln318_211_fu_15360_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_214_fu_15587_p2() {
    and_ln318_214_fu_15587_p2 = (icmp_ln318_219_reg_20189.read() & icmp_ln318_220_reg_20209.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_215_fu_15591_p2() {
    and_ln318_215_fu_15591_p2 = (icmp_ln318_221_reg_20214.read() & icmp_ln318_222_fu_15543_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_216_fu_15596_p2() {
    and_ln318_216_fu_15596_p2 = (and_ln318_215_fu_15591_p2.read() & and_ln318_214_fu_15587_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_217_fu_15602_p2() {
    and_ln318_217_fu_15602_p2 = (and_ln318_216_fu_15596_p2.read() & and_ln318_213_reg_20194.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_218_fu_15607_p2() {
    and_ln318_218_fu_15607_p2 = (and_ln318_217_fu_15602_p2.read() & and_ln318_210_reg_20154.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_219_fu_17411_p2() {
    and_ln318_219_fu_17411_p2 = (and_ln318_218_reg_20234.read() & and_ln318_203_reg_20074.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_21_fu_4234_p2() {
    and_ln318_21_fu_4234_p2 = (icmp_ln318_23_reg_18229.read() & icmp_ln318_24_reg_18249.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_220_fu_15824_p2() {
    and_ln318_220_fu_15824_p2 = (icmp_ln318_223_reg_20229.read() & icmp_ln318_224_reg_20249.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_221_fu_15828_p2() {
    and_ln318_221_fu_15828_p2 = (icmp_ln318_225_reg_20254.read() & icmp_ln318_226_fu_15780_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_222_fu_15833_p2() {
    and_ln318_222_fu_15833_p2 = (and_ln318_221_fu_15828_p2.read() & and_ln318_220_fu_15824_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_223_fu_16051_p2() {
    and_ln318_223_fu_16051_p2 = (icmp_ln318_227_reg_20269.read() & icmp_ln318_228_reg_20289.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_224_fu_16055_p2() {
    and_ln318_224_fu_16055_p2 = (icmp_ln318_229_reg_20294.read() & icmp_ln318_230_fu_16007_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_225_fu_16060_p2() {
    and_ln318_225_fu_16060_p2 = (and_ln318_224_fu_16055_p2.read() & and_ln318_223_fu_16051_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_226_fu_16066_p2() {
    and_ln318_226_fu_16066_p2 = (and_ln318_225_fu_16060_p2.read() & and_ln318_222_reg_20274.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_227_fu_16283_p2() {
    and_ln318_227_fu_16283_p2 = (icmp_ln318_231_reg_20309.read() & icmp_ln318_232_reg_20329.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_228_fu_16287_p2() {
    and_ln318_228_fu_16287_p2 = (icmp_ln318_233_reg_20334.read() & icmp_ln318_234_fu_16239_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_229_fu_16292_p2() {
    and_ln318_229_fu_16292_p2 = (and_ln318_228_fu_16287_p2.read() & and_ln318_227_fu_16283_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_22_fu_4238_p2() {
    and_ln318_22_fu_4238_p2 = (icmp_ln318_25_reg_18254.read() & icmp_ln318_26_fu_4190_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_230_fu_16510_p2() {
    and_ln318_230_fu_16510_p2 = (icmp_ln318_235_reg_20349.read() & icmp_ln318_236_reg_20369.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_231_fu_16514_p2() {
    and_ln318_231_fu_16514_p2 = (icmp_ln318_237_reg_20374.read() & icmp_ln318_238_fu_16466_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_232_fu_16519_p2() {
    and_ln318_232_fu_16519_p2 = (and_ln318_231_fu_16514_p2.read() & and_ln318_230_fu_16510_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_233_fu_16525_p2() {
    and_ln318_233_fu_16525_p2 = (and_ln318_232_fu_16519_p2.read() & and_ln318_229_reg_20354.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_234_fu_16530_p2() {
    and_ln318_234_fu_16530_p2 = (and_ln318_233_fu_16525_p2.read() & and_ln318_226_reg_20314.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_235_fu_16747_p2() {
    and_ln318_235_fu_16747_p2 = (icmp_ln318_239_reg_20389.read() & icmp_ln318_240_reg_20409.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_236_fu_16751_p2() {
    and_ln318_236_fu_16751_p2 = (icmp_ln318_241_reg_20414.read() & icmp_ln318_242_fu_16703_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_237_fu_16756_p2() {
    and_ln318_237_fu_16756_p2 = (and_ln318_236_fu_16751_p2.read() & and_ln318_235_fu_16747_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_238_fu_16974_p2() {
    and_ln318_238_fu_16974_p2 = (icmp_ln318_243_reg_20429.read() & icmp_ln318_244_reg_20449.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_239_fu_16978_p2() {
    and_ln318_239_fu_16978_p2 = (icmp_ln318_245_reg_20454.read() & icmp_ln318_246_fu_16930_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_23_fu_4243_p2() {
    and_ln318_23_fu_4243_p2 = (and_ln318_22_fu_4238_p2.read() & and_ln318_21_fu_4234_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_240_fu_16983_p2() {
    and_ln318_240_fu_16983_p2 = (and_ln318_239_fu_16978_p2.read() & and_ln318_238_fu_16974_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_241_fu_16989_p2() {
    and_ln318_241_fu_16989_p2 = (and_ln318_240_fu_16983_p2.read() & and_ln318_237_reg_20434.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_242_fu_17206_p2() {
    and_ln318_242_fu_17206_p2 = (icmp_ln318_247_reg_20469.read() & icmp_ln318_248_reg_20489.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_243_fu_17210_p2() {
    and_ln318_243_fu_17210_p2 = (icmp_ln318_249_reg_20494.read() & icmp_ln318_250_fu_17162_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_244_fu_17215_p2() {
    and_ln318_244_fu_17215_p2 = (and_ln318_243_fu_17210_p2.read() & and_ln318_242_fu_17206_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_245_fu_17415_p2() {
    and_ln318_245_fu_17415_p2 = (icmp_ln318_251_reg_20509.read() & icmp_ln318_252_reg_20529.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_246_fu_17419_p2() {
    and_ln318_246_fu_17419_p2 = (icmp_ln318_253_reg_20534.read() & icmp_ln318_254_fu_17361_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_247_fu_17424_p2() {
    and_ln318_247_fu_17424_p2 = (and_ln318_246_fu_17419_p2.read() & and_ln318_245_fu_17415_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_248_fu_17430_p2() {
    and_ln318_248_fu_17430_p2 = (and_ln318_247_fu_17424_p2.read() & and_ln318_244_reg_20514.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_249_fu_17435_p2() {
    and_ln318_249_fu_17435_p2 = (and_ln318_248_fu_17430_p2.read() & and_ln318_241_reg_20474.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_24_fu_4461_p2() {
    and_ln318_24_fu_4461_p2 = (icmp_ln318_27_reg_18269.read() & icmp_ln318_28_reg_18289.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_250_fu_17440_p2() {
    and_ln318_250_fu_17440_p2 = (and_ln318_249_fu_17435_p2.read() & and_ln318_234_reg_20394.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_251_fu_17445_p2() {
    and_ln318_251_fu_17445_p2 = (and_ln318_250_fu_17440_p2.read() & and_ln318_219_fu_17411_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_252_fu_17451_p2() {
    and_ln318_252_fu_17451_p2 = (and_ln318_251_fu_17445_p2.read() & and_ln318_188_reg_19914.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_253_fu_17456_p2() {
    and_ln318_253_fu_17456_p2 = (and_ln318_252_fu_17451_p2.read() & and_ln318_125_reg_19274.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_25_fu_4465_p2() {
    and_ln318_25_fu_4465_p2 = (icmp_ln318_29_reg_18294.read() & icmp_ln318_30_fu_4417_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_26_fu_4470_p2() {
    and_ln318_26_fu_4470_p2 = (and_ln318_25_fu_4465_p2.read() & and_ln318_24_fu_4461_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_27_fu_4476_p2() {
    and_ln318_27_fu_4476_p2 = (and_ln318_26_fu_4470_p2.read() & and_ln318_23_reg_18274.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_28_fu_4481_p2() {
    and_ln318_28_fu_4481_p2 = (and_ln318_27_fu_4476_p2.read() & and_ln318_20_reg_18234.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_29_fu_6307_p2() {
    and_ln318_29_fu_6307_p2 = (and_ln318_28_reg_18314.read() & and_ln318_13_reg_18154.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_2_fu_3079_p2() {
    and_ln318_2_fu_3079_p2 = (icmp_ln318_3_reg_18029.read() & icmp_ln318_4_reg_18049.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_30_fu_4698_p2() {
    and_ln318_30_fu_4698_p2 = (icmp_ln318_31_reg_18309.read() & icmp_ln318_32_reg_18329.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_31_fu_4702_p2() {
    and_ln318_31_fu_4702_p2 = (icmp_ln318_33_reg_18334.read() & icmp_ln318_34_fu_4654_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_32_fu_4707_p2() {
    and_ln318_32_fu_4707_p2 = (and_ln318_31_fu_4702_p2.read() & and_ln318_30_fu_4698_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_33_fu_4925_p2() {
    and_ln318_33_fu_4925_p2 = (icmp_ln318_35_reg_18349.read() & icmp_ln318_36_reg_18369.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_34_fu_4929_p2() {
    and_ln318_34_fu_4929_p2 = (icmp_ln318_37_reg_18374.read() & icmp_ln318_38_fu_4881_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_35_fu_4934_p2() {
    and_ln318_35_fu_4934_p2 = (and_ln318_34_fu_4929_p2.read() & and_ln318_33_fu_4925_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_36_fu_4940_p2() {
    and_ln318_36_fu_4940_p2 = (and_ln318_35_fu_4934_p2.read() & and_ln318_32_reg_18354.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_37_fu_5157_p2() {
    and_ln318_37_fu_5157_p2 = (icmp_ln318_39_reg_18389.read() & icmp_ln318_40_reg_18409.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_38_fu_5161_p2() {
    and_ln318_38_fu_5161_p2 = (icmp_ln318_41_reg_18414.read() & icmp_ln318_42_fu_5113_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_39_fu_5166_p2() {
    and_ln318_39_fu_5166_p2 = (and_ln318_38_fu_5161_p2.read() & and_ln318_37_fu_5157_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_3_fu_3083_p2() {
    and_ln318_3_fu_3083_p2 = (icmp_ln318_5_reg_18054.read() & icmp_ln318_6_fu_3035_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_40_fu_5384_p2() {
    and_ln318_40_fu_5384_p2 = (icmp_ln318_43_reg_18429.read() & icmp_ln318_44_reg_18449.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_41_fu_5388_p2() {
    and_ln318_41_fu_5388_p2 = (icmp_ln318_45_reg_18454.read() & icmp_ln318_46_fu_5340_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_42_fu_5393_p2() {
    and_ln318_42_fu_5393_p2 = (and_ln318_41_fu_5388_p2.read() & and_ln318_40_fu_5384_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_43_fu_5399_p2() {
    and_ln318_43_fu_5399_p2 = (and_ln318_42_fu_5393_p2.read() & and_ln318_39_reg_18434.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_44_fu_5404_p2() {
    and_ln318_44_fu_5404_p2 = (and_ln318_43_fu_5399_p2.read() & and_ln318_36_reg_18394.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_45_fu_5621_p2() {
    and_ln318_45_fu_5621_p2 = (icmp_ln318_47_reg_18469.read() & icmp_ln318_48_reg_18489.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_46_fu_5625_p2() {
    and_ln318_46_fu_5625_p2 = (icmp_ln318_49_reg_18494.read() & icmp_ln318_50_fu_5577_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_47_fu_5630_p2() {
    and_ln318_47_fu_5630_p2 = (and_ln318_46_fu_5625_p2.read() & and_ln318_45_fu_5621_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_48_fu_5848_p2() {
    and_ln318_48_fu_5848_p2 = (icmp_ln318_51_reg_18509.read() & icmp_ln318_52_reg_18529.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_49_fu_5852_p2() {
    and_ln318_49_fu_5852_p2 = (icmp_ln318_53_reg_18534.read() & icmp_ln318_54_fu_5804_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_4_fu_3088_p2() {
    and_ln318_4_fu_3088_p2 = (and_ln318_3_fu_3083_p2.read() & and_ln318_2_fu_3079_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_50_fu_5857_p2() {
    and_ln318_50_fu_5857_p2 = (and_ln318_49_fu_5852_p2.read() & and_ln318_48_fu_5848_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_51_fu_5863_p2() {
    and_ln318_51_fu_5863_p2 = (and_ln318_50_fu_5857_p2.read() & and_ln318_47_reg_18514.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_52_fu_6080_p2() {
    and_ln318_52_fu_6080_p2 = (icmp_ln318_55_reg_18549.read() & icmp_ln318_56_reg_18569.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_53_fu_6084_p2() {
    and_ln318_53_fu_6084_p2 = (icmp_ln318_57_reg_18574.read() & icmp_ln318_58_fu_6036_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_54_fu_6089_p2() {
    and_ln318_54_fu_6089_p2 = (and_ln318_53_fu_6084_p2.read() & and_ln318_52_fu_6080_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_55_fu_6311_p2() {
    and_ln318_55_fu_6311_p2 = (icmp_ln318_59_reg_18589.read() & icmp_ln318_60_reg_18609.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_56_fu_6315_p2() {
    and_ln318_56_fu_6315_p2 = (icmp_ln318_61_reg_18614.read() & icmp_ln318_62_fu_6263_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_57_fu_6320_p2() {
    and_ln318_57_fu_6320_p2 = (and_ln318_56_fu_6315_p2.read() & and_ln318_55_fu_6311_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_58_fu_6326_p2() {
    and_ln318_58_fu_6326_p2 = (and_ln318_57_fu_6320_p2.read() & and_ln318_54_reg_18594.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_59_fu_6331_p2() {
    and_ln318_59_fu_6331_p2 = (and_ln318_58_fu_6326_p2.read() & and_ln318_51_reg_18554.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_5_fu_3094_p2() {
    and_ln318_5_fu_3094_p2 = (and_ln318_4_fu_3088_p2.read() & and_ln318_1_reg_18034.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_60_fu_6336_p2() {
    and_ln318_60_fu_6336_p2 = (and_ln318_59_fu_6331_p2.read() & and_ln318_44_reg_18474.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_61_fu_6341_p2() {
    and_ln318_61_fu_6341_p2 = (and_ln318_60_fu_6336_p2.read() & and_ln318_29_fu_6307_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_62_fu_6559_p2() {
    and_ln318_62_fu_6559_p2 = (icmp_ln318_63_reg_18629.read() & icmp_ln318_64_reg_18649.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_63_fu_6563_p2() {
    and_ln318_63_fu_6563_p2 = (icmp_ln318_65_reg_18654.read() & icmp_ln318_66_fu_6515_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_64_fu_6568_p2() {
    and_ln318_64_fu_6568_p2 = (and_ln318_63_fu_6563_p2.read() & and_ln318_62_fu_6559_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_65_fu_6786_p2() {
    and_ln318_65_fu_6786_p2 = (icmp_ln318_67_reg_18669.read() & icmp_ln318_68_reg_18689.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_66_fu_6790_p2() {
    and_ln318_66_fu_6790_p2 = (icmp_ln318_69_reg_18694.read() & icmp_ln318_70_fu_6742_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_67_fu_6795_p2() {
    and_ln318_67_fu_6795_p2 = (and_ln318_66_fu_6790_p2.read() & and_ln318_65_fu_6786_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_68_fu_6801_p2() {
    and_ln318_68_fu_6801_p2 = (and_ln318_67_fu_6795_p2.read() & and_ln318_64_reg_18674.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_69_fu_7018_p2() {
    and_ln318_69_fu_7018_p2 = (icmp_ln318_71_reg_18709.read() & icmp_ln318_72_reg_18729.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_6_fu_3311_p2() {
    and_ln318_6_fu_3311_p2 = (icmp_ln318_7_reg_18069.read() & icmp_ln318_8_reg_18089.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_70_fu_7022_p2() {
    and_ln318_70_fu_7022_p2 = (icmp_ln318_73_reg_18734.read() & icmp_ln318_74_fu_6974_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_71_fu_7027_p2() {
    and_ln318_71_fu_7027_p2 = (and_ln318_70_fu_7022_p2.read() & and_ln318_69_fu_7018_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_72_fu_7245_p2() {
    and_ln318_72_fu_7245_p2 = (icmp_ln318_75_reg_18749.read() & icmp_ln318_76_reg_18769.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_73_fu_7249_p2() {
    and_ln318_73_fu_7249_p2 = (icmp_ln318_77_reg_18774.read() & icmp_ln318_78_fu_7201_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_74_fu_7254_p2() {
    and_ln318_74_fu_7254_p2 = (and_ln318_73_fu_7249_p2.read() & and_ln318_72_fu_7245_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_75_fu_7260_p2() {
    and_ln318_75_fu_7260_p2 = (and_ln318_74_fu_7254_p2.read() & and_ln318_71_reg_18754.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_76_fu_7265_p2() {
    and_ln318_76_fu_7265_p2 = (and_ln318_75_fu_7260_p2.read() & and_ln318_68_reg_18714.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_77_fu_7482_p2() {
    and_ln318_77_fu_7482_p2 = (icmp_ln318_79_reg_18789.read() & icmp_ln318_80_reg_18809.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_78_fu_7486_p2() {
    and_ln318_78_fu_7486_p2 = (icmp_ln318_81_reg_18814.read() & icmp_ln318_82_fu_7438_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_79_fu_7491_p2() {
    and_ln318_79_fu_7491_p2 = (and_ln318_78_fu_7486_p2.read() & and_ln318_77_fu_7482_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_7_fu_3315_p2() {
    and_ln318_7_fu_3315_p2 = (icmp_ln318_9_reg_18094.read() & icmp_ln318_10_fu_3267_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_80_fu_7709_p2() {
    and_ln318_80_fu_7709_p2 = (icmp_ln318_83_reg_18829.read() & icmp_ln318_84_reg_18849.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_81_fu_7713_p2() {
    and_ln318_81_fu_7713_p2 = (icmp_ln318_85_reg_18854.read() & icmp_ln318_86_fu_7665_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_82_fu_7718_p2() {
    and_ln318_82_fu_7718_p2 = (and_ln318_81_fu_7713_p2.read() & and_ln318_80_fu_7709_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_83_fu_7724_p2() {
    and_ln318_83_fu_7724_p2 = (and_ln318_82_fu_7718_p2.read() & and_ln318_79_reg_18834.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_84_fu_7941_p2() {
    and_ln318_84_fu_7941_p2 = (icmp_ln318_87_reg_18869.read() & icmp_ln318_88_reg_18889.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_85_fu_7945_p2() {
    and_ln318_85_fu_7945_p2 = (icmp_ln318_89_reg_18894.read() & icmp_ln318_90_fu_7897_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_86_fu_7950_p2() {
    and_ln318_86_fu_7950_p2 = (and_ln318_85_fu_7945_p2.read() & and_ln318_84_fu_7941_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_87_fu_8168_p2() {
    and_ln318_87_fu_8168_p2 = (icmp_ln318_91_reg_18909.read() & icmp_ln318_92_reg_18929.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_88_fu_8172_p2() {
    and_ln318_88_fu_8172_p2 = (icmp_ln318_93_reg_18934.read() & icmp_ln318_94_fu_8124_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_89_fu_8177_p2() {
    and_ln318_89_fu_8177_p2 = (and_ln318_88_fu_8172_p2.read() & and_ln318_87_fu_8168_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_8_fu_3320_p2() {
    and_ln318_8_fu_3320_p2 = (and_ln318_7_fu_3315_p2.read() & and_ln318_6_fu_3311_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_90_fu_8183_p2() {
    and_ln318_90_fu_8183_p2 = (and_ln318_89_fu_8177_p2.read() & and_ln318_86_reg_18914.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_91_fu_8188_p2() {
    and_ln318_91_fu_8188_p2 = (and_ln318_90_fu_8183_p2.read() & and_ln318_83_reg_18874.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_92_fu_10014_p2() {
    and_ln318_92_fu_10014_p2 = (and_ln318_91_reg_18954.read() & and_ln318_76_reg_18794.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_93_fu_8405_p2() {
    and_ln318_93_fu_8405_p2 = (icmp_ln318_95_reg_18949.read() & icmp_ln318_96_reg_18969.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_94_fu_8409_p2() {
    and_ln318_94_fu_8409_p2 = (icmp_ln318_97_reg_18974.read() & icmp_ln318_98_fu_8361_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_95_fu_8414_p2() {
    and_ln318_95_fu_8414_p2 = (and_ln318_94_fu_8409_p2.read() & and_ln318_93_fu_8405_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_96_fu_8632_p2() {
    and_ln318_96_fu_8632_p2 = (icmp_ln318_99_reg_18989.read() & icmp_ln318_100_reg_19009.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_97_fu_8636_p2() {
    and_ln318_97_fu_8636_p2 = (icmp_ln318_101_reg_19014.read() & icmp_ln318_102_fu_8588_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_98_fu_8641_p2() {
    and_ln318_98_fu_8641_p2 = (and_ln318_97_fu_8636_p2.read() & and_ln318_96_fu_8632_p2.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_99_fu_8647_p2() {
    and_ln318_99_fu_8647_p2 = (and_ln318_98_fu_8641_p2.read() & and_ln318_95_reg_18994.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_9_fu_3538_p2() {
    and_ln318_9_fu_3538_p2 = (icmp_ln318_11_reg_18109.read() & icmp_ln318_12_reg_18129.read());
}

void pqcrystals_dilithium_18::thread_and_ln318_fu_2857_p2() {
    and_ln318_fu_2857_p2 = (icmp_ln318_1_reg_18014.read() & icmp_ln318_2_fu_2813_p2.read());
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[108];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[111];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[112];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[118];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[119];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[120];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[121];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[122];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[123];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[75];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[76];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[77];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[78];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[79];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[80];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[81];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[82];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[83];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[84];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[85];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[86];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[87];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[88];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[89];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[90];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[91];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[92];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[93];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[94];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[95];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[96];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[97];
}

void pqcrystals_dilithium_18::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[98];
}

void pqcrystals_dilithium_18::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_18::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_18::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_18::thread_ap_return() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        ap_return = or_ln318_fu_17467_p2.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void pqcrystals_dilithium_18::thread_icmp_ln318_100_fu_8482_p2() {
    icmp_ln318_100_fu_8482_p2 = (!sub_ln316_100_fu_8476_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_100_fu_8476_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_101_fu_8521_p2() {
    icmp_ln318_101_fu_8521_p2 = (!sub_ln316_101_fu_8515_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_101_fu_8515_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_102_fu_8588_p2() {
    icmp_ln318_102_fu_8588_p2 = (!sub_ln316_102_fu_8582_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_102_fu_8582_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_103_fu_8627_p2() {
    icmp_ln318_103_fu_8627_p2 = (!sub_ln316_103_fu_8621_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_103_fu_8621_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_104_fu_8714_p2() {
    icmp_ln318_104_fu_8714_p2 = (!sub_ln316_104_fu_8708_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_104_fu_8708_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_105_fu_8753_p2() {
    icmp_ln318_105_fu_8753_p2 = (!sub_ln316_105_fu_8747_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_105_fu_8747_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_106_fu_8820_p2() {
    icmp_ln318_106_fu_8820_p2 = (!sub_ln316_106_fu_8814_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_106_fu_8814_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_107_fu_8859_p2() {
    icmp_ln318_107_fu_8859_p2 = (!sub_ln316_107_fu_8853_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_107_fu_8853_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_108_fu_8941_p2() {
    icmp_ln318_108_fu_8941_p2 = (!sub_ln316_108_fu_8935_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_108_fu_8935_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_109_fu_8980_p2() {
    icmp_ln318_109_fu_8980_p2 = (!sub_ln316_109_fu_8974_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_109_fu_8974_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_10_fu_3267_p2() {
    icmp_ln318_10_fu_3267_p2 = (!sub_ln316_10_fu_3261_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_10_fu_3261_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_110_fu_9047_p2() {
    icmp_ln318_110_fu_9047_p2 = (!sub_ln316_110_fu_9041_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_110_fu_9041_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_111_fu_9086_p2() {
    icmp_ln318_111_fu_9086_p2 = (!sub_ln316_111_fu_9080_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_111_fu_9080_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_112_fu_9178_p2() {
    icmp_ln318_112_fu_9178_p2 = (!sub_ln316_112_fu_9172_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_112_fu_9172_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_113_fu_9217_p2() {
    icmp_ln318_113_fu_9217_p2 = (!sub_ln316_113_fu_9211_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_113_fu_9211_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_114_fu_9284_p2() {
    icmp_ln318_114_fu_9284_p2 = (!sub_ln316_114_fu_9278_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_114_fu_9278_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_115_fu_9323_p2() {
    icmp_ln318_115_fu_9323_p2 = (!sub_ln316_115_fu_9317_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_115_fu_9317_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_116_fu_9405_p2() {
    icmp_ln318_116_fu_9405_p2 = (!sub_ln316_116_fu_9399_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_116_fu_9399_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_117_fu_9444_p2() {
    icmp_ln318_117_fu_9444_p2 = (!sub_ln316_117_fu_9438_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_117_fu_9438_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_118_fu_9511_p2() {
    icmp_ln318_118_fu_9511_p2 = (!sub_ln316_118_fu_9505_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_118_fu_9505_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_119_fu_9550_p2() {
    icmp_ln318_119_fu_9550_p2 = (!sub_ln316_119_fu_9544_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_119_fu_9544_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_11_fu_3306_p2() {
    icmp_ln318_11_fu_3306_p2 = (!sub_ln316_11_fu_3300_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_11_fu_3300_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_120_fu_9637_p2() {
    icmp_ln318_120_fu_9637_p2 = (!sub_ln316_120_fu_9631_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_120_fu_9631_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_121_fu_9676_p2() {
    icmp_ln318_121_fu_9676_p2 = (!sub_ln316_121_fu_9670_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_121_fu_9670_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_122_fu_9743_p2() {
    icmp_ln318_122_fu_9743_p2 = (!sub_ln316_122_fu_9737_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_122_fu_9737_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_123_fu_9782_p2() {
    icmp_ln318_123_fu_9782_p2 = (!sub_ln316_123_fu_9776_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_123_fu_9776_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_124_fu_9864_p2() {
    icmp_ln318_124_fu_9864_p2 = (!sub_ln316_124_fu_9858_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_124_fu_9858_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_125_fu_9903_p2() {
    icmp_ln318_125_fu_9903_p2 = (!sub_ln316_125_fu_9897_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_125_fu_9897_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_126_fu_9970_p2() {
    icmp_ln318_126_fu_9970_p2 = (!sub_ln316_126_fu_9964_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_126_fu_9964_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_127_fu_10009_p2() {
    icmp_ln318_127_fu_10009_p2 = (!sub_ln316_127_fu_10003_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_127_fu_10003_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_128_fu_10121_p2() {
    icmp_ln318_128_fu_10121_p2 = (!sub_ln316_128_fu_10115_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_128_fu_10115_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_129_fu_10160_p2() {
    icmp_ln318_129_fu_10160_p2 = (!sub_ln316_129_fu_10154_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_129_fu_10154_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_12_fu_3388_p2() {
    icmp_ln318_12_fu_3388_p2 = (!sub_ln316_12_fu_3382_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_12_fu_3382_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_130_fu_10227_p2() {
    icmp_ln318_130_fu_10227_p2 = (!sub_ln316_130_fu_10221_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_130_fu_10221_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_131_fu_10266_p2() {
    icmp_ln318_131_fu_10266_p2 = (!sub_ln316_131_fu_10260_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_131_fu_10260_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_132_fu_10348_p2() {
    icmp_ln318_132_fu_10348_p2 = (!sub_ln316_132_fu_10342_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_132_fu_10342_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_133_fu_10387_p2() {
    icmp_ln318_133_fu_10387_p2 = (!sub_ln316_133_fu_10381_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_133_fu_10381_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_134_fu_10454_p2() {
    icmp_ln318_134_fu_10454_p2 = (!sub_ln316_134_fu_10448_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_134_fu_10448_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_135_fu_10493_p2() {
    icmp_ln318_135_fu_10493_p2 = (!sub_ln316_135_fu_10487_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_135_fu_10487_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_136_fu_10580_p2() {
    icmp_ln318_136_fu_10580_p2 = (!sub_ln316_136_fu_10574_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_136_fu_10574_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_137_fu_10619_p2() {
    icmp_ln318_137_fu_10619_p2 = (!sub_ln316_137_fu_10613_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_137_fu_10613_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_138_fu_10686_p2() {
    icmp_ln318_138_fu_10686_p2 = (!sub_ln316_138_fu_10680_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_138_fu_10680_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_139_fu_10725_p2() {
    icmp_ln318_139_fu_10725_p2 = (!sub_ln316_139_fu_10719_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_139_fu_10719_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_13_fu_3427_p2() {
    icmp_ln318_13_fu_3427_p2 = (!sub_ln316_13_fu_3421_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_13_fu_3421_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_140_fu_10807_p2() {
    icmp_ln318_140_fu_10807_p2 = (!sub_ln316_140_fu_10801_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_140_fu_10801_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_141_fu_10846_p2() {
    icmp_ln318_141_fu_10846_p2 = (!sub_ln316_141_fu_10840_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_141_fu_10840_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_142_fu_10913_p2() {
    icmp_ln318_142_fu_10913_p2 = (!sub_ln316_142_fu_10907_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_142_fu_10907_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_143_fu_10952_p2() {
    icmp_ln318_143_fu_10952_p2 = (!sub_ln316_143_fu_10946_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_143_fu_10946_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_144_fu_11044_p2() {
    icmp_ln318_144_fu_11044_p2 = (!sub_ln316_144_fu_11038_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_144_fu_11038_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_145_fu_11083_p2() {
    icmp_ln318_145_fu_11083_p2 = (!sub_ln316_145_fu_11077_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_145_fu_11077_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_146_fu_11150_p2() {
    icmp_ln318_146_fu_11150_p2 = (!sub_ln316_146_fu_11144_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_146_fu_11144_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_147_fu_11189_p2() {
    icmp_ln318_147_fu_11189_p2 = (!sub_ln316_147_fu_11183_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_147_fu_11183_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_148_fu_11271_p2() {
    icmp_ln318_148_fu_11271_p2 = (!sub_ln316_148_fu_11265_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_148_fu_11265_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_149_fu_11310_p2() {
    icmp_ln318_149_fu_11310_p2 = (!sub_ln316_149_fu_11304_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_149_fu_11304_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_14_fu_3494_p2() {
    icmp_ln318_14_fu_3494_p2 = (!sub_ln316_14_fu_3488_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_14_fu_3488_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_150_fu_11377_p2() {
    icmp_ln318_150_fu_11377_p2 = (!sub_ln316_150_fu_11371_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_150_fu_11371_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_151_fu_11416_p2() {
    icmp_ln318_151_fu_11416_p2 = (!sub_ln316_151_fu_11410_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_151_fu_11410_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_152_fu_11503_p2() {
    icmp_ln318_152_fu_11503_p2 = (!sub_ln316_152_fu_11497_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_152_fu_11497_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_153_fu_11542_p2() {
    icmp_ln318_153_fu_11542_p2 = (!sub_ln316_153_fu_11536_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_153_fu_11536_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_154_fu_11609_p2() {
    icmp_ln318_154_fu_11609_p2 = (!sub_ln316_154_fu_11603_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_154_fu_11603_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_155_fu_11648_p2() {
    icmp_ln318_155_fu_11648_p2 = (!sub_ln316_155_fu_11642_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_155_fu_11642_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_156_fu_11730_p2() {
    icmp_ln318_156_fu_11730_p2 = (!sub_ln316_156_fu_11724_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_156_fu_11724_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_157_fu_11769_p2() {
    icmp_ln318_157_fu_11769_p2 = (!sub_ln316_157_fu_11763_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_157_fu_11763_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_158_fu_11836_p2() {
    icmp_ln318_158_fu_11836_p2 = (!sub_ln316_158_fu_11830_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_158_fu_11830_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_159_fu_11875_p2() {
    icmp_ln318_159_fu_11875_p2 = (!sub_ln316_159_fu_11869_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_159_fu_11869_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_15_fu_3533_p2() {
    icmp_ln318_15_fu_3533_p2 = (!sub_ln316_15_fu_3527_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_15_fu_3527_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_160_fu_11967_p2() {
    icmp_ln318_160_fu_11967_p2 = (!sub_ln316_160_fu_11961_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_160_fu_11961_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_161_fu_12006_p2() {
    icmp_ln318_161_fu_12006_p2 = (!sub_ln316_161_fu_12000_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_161_fu_12000_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_162_fu_12073_p2() {
    icmp_ln318_162_fu_12073_p2 = (!sub_ln316_162_fu_12067_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_162_fu_12067_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_163_fu_12112_p2() {
    icmp_ln318_163_fu_12112_p2 = (!sub_ln316_163_fu_12106_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_163_fu_12106_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_164_fu_12194_p2() {
    icmp_ln318_164_fu_12194_p2 = (!sub_ln316_164_fu_12188_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_164_fu_12188_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_165_fu_12233_p2() {
    icmp_ln318_165_fu_12233_p2 = (!sub_ln316_165_fu_12227_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_165_fu_12227_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_166_fu_12300_p2() {
    icmp_ln318_166_fu_12300_p2 = (!sub_ln316_166_fu_12294_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_166_fu_12294_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_167_fu_12339_p2() {
    icmp_ln318_167_fu_12339_p2 = (!sub_ln316_167_fu_12333_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_167_fu_12333_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_168_fu_12426_p2() {
    icmp_ln318_168_fu_12426_p2 = (!sub_ln316_168_fu_12420_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_168_fu_12420_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_169_fu_12465_p2() {
    icmp_ln318_169_fu_12465_p2 = (!sub_ln316_169_fu_12459_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_169_fu_12459_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_16_fu_3625_p2() {
    icmp_ln318_16_fu_3625_p2 = (!sub_ln316_16_fu_3619_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_16_fu_3619_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_170_fu_12532_p2() {
    icmp_ln318_170_fu_12532_p2 = (!sub_ln316_170_fu_12526_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_170_fu_12526_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_171_fu_12571_p2() {
    icmp_ln318_171_fu_12571_p2 = (!sub_ln316_171_fu_12565_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_171_fu_12565_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_172_fu_12653_p2() {
    icmp_ln318_172_fu_12653_p2 = (!sub_ln316_172_fu_12647_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_172_fu_12647_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_173_fu_12692_p2() {
    icmp_ln318_173_fu_12692_p2 = (!sub_ln316_173_fu_12686_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_173_fu_12686_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_174_fu_12759_p2() {
    icmp_ln318_174_fu_12759_p2 = (!sub_ln316_174_fu_12753_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_174_fu_12753_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_175_fu_12798_p2() {
    icmp_ln318_175_fu_12798_p2 = (!sub_ln316_175_fu_12792_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_175_fu_12792_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_176_fu_12890_p2() {
    icmp_ln318_176_fu_12890_p2 = (!sub_ln316_176_fu_12884_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_176_fu_12884_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_177_fu_12929_p2() {
    icmp_ln318_177_fu_12929_p2 = (!sub_ln316_177_fu_12923_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_177_fu_12923_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_178_fu_12996_p2() {
    icmp_ln318_178_fu_12996_p2 = (!sub_ln316_178_fu_12990_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_178_fu_12990_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_179_fu_13035_p2() {
    icmp_ln318_179_fu_13035_p2 = (!sub_ln316_179_fu_13029_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_179_fu_13029_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_17_fu_3664_p2() {
    icmp_ln318_17_fu_3664_p2 = (!sub_ln316_17_fu_3658_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_17_fu_3658_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_180_fu_13117_p2() {
    icmp_ln318_180_fu_13117_p2 = (!sub_ln316_180_fu_13111_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_180_fu_13111_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_181_fu_13156_p2() {
    icmp_ln318_181_fu_13156_p2 = (!sub_ln316_181_fu_13150_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_181_fu_13150_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_182_fu_13223_p2() {
    icmp_ln318_182_fu_13223_p2 = (!sub_ln316_182_fu_13217_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_182_fu_13217_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_183_fu_13262_p2() {
    icmp_ln318_183_fu_13262_p2 = (!sub_ln316_183_fu_13256_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_183_fu_13256_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_184_fu_13349_p2() {
    icmp_ln318_184_fu_13349_p2 = (!sub_ln316_184_fu_13343_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_184_fu_13343_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_185_fu_13388_p2() {
    icmp_ln318_185_fu_13388_p2 = (!sub_ln316_185_fu_13382_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_185_fu_13382_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_186_fu_13455_p2() {
    icmp_ln318_186_fu_13455_p2 = (!sub_ln316_186_fu_13449_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_186_fu_13449_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_187_fu_13494_p2() {
    icmp_ln318_187_fu_13494_p2 = (!sub_ln316_187_fu_13488_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_187_fu_13488_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_188_fu_13576_p2() {
    icmp_ln318_188_fu_13576_p2 = (!sub_ln316_188_fu_13570_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_188_fu_13570_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_189_fu_13615_p2() {
    icmp_ln318_189_fu_13615_p2 = (!sub_ln316_189_fu_13609_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_189_fu_13609_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_18_fu_3731_p2() {
    icmp_ln318_18_fu_3731_p2 = (!sub_ln316_18_fu_3725_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_18_fu_3725_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_190_fu_13682_p2() {
    icmp_ln318_190_fu_13682_p2 = (!sub_ln316_190_fu_13676_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_190_fu_13676_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_191_fu_13721_p2() {
    icmp_ln318_191_fu_13721_p2 = (!sub_ln316_191_fu_13715_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_191_fu_13715_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_192_fu_13828_p2() {
    icmp_ln318_192_fu_13828_p2 = (!sub_ln316_192_fu_13822_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_192_fu_13822_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_193_fu_13867_p2() {
    icmp_ln318_193_fu_13867_p2 = (!sub_ln316_193_fu_13861_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_193_fu_13861_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_194_fu_13934_p2() {
    icmp_ln318_194_fu_13934_p2 = (!sub_ln316_194_fu_13928_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_194_fu_13928_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_195_fu_13973_p2() {
    icmp_ln318_195_fu_13973_p2 = (!sub_ln316_195_fu_13967_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_195_fu_13967_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_196_fu_14055_p2() {
    icmp_ln318_196_fu_14055_p2 = (!sub_ln316_196_fu_14049_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_196_fu_14049_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_197_fu_14094_p2() {
    icmp_ln318_197_fu_14094_p2 = (!sub_ln316_197_fu_14088_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_197_fu_14088_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_198_fu_14161_p2() {
    icmp_ln318_198_fu_14161_p2 = (!sub_ln316_198_fu_14155_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_198_fu_14155_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_199_fu_14200_p2() {
    icmp_ln318_199_fu_14200_p2 = (!sub_ln316_199_fu_14194_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_199_fu_14194_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_19_fu_3770_p2() {
    icmp_ln318_19_fu_3770_p2 = (!sub_ln316_19_fu_3764_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_19_fu_3764_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_1_fu_2745_p2() {
    icmp_ln318_1_fu_2745_p2 = (!sub_ln316_1_fu_2739_p2.read().is_01() || !B_cast_fu_2639_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_1_fu_2739_p2.read()) < sc_bigint<32>(B_cast_fu_2639_p1.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_200_fu_14287_p2() {
    icmp_ln318_200_fu_14287_p2 = (!sub_ln316_200_fu_14281_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_200_fu_14281_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_201_fu_14326_p2() {
    icmp_ln318_201_fu_14326_p2 = (!sub_ln316_201_fu_14320_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_201_fu_14320_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_202_fu_14393_p2() {
    icmp_ln318_202_fu_14393_p2 = (!sub_ln316_202_fu_14387_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_202_fu_14387_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_203_fu_14432_p2() {
    icmp_ln318_203_fu_14432_p2 = (!sub_ln316_203_fu_14426_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_203_fu_14426_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_204_fu_14514_p2() {
    icmp_ln318_204_fu_14514_p2 = (!sub_ln316_204_fu_14508_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_204_fu_14508_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_205_fu_14553_p2() {
    icmp_ln318_205_fu_14553_p2 = (!sub_ln316_205_fu_14547_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_205_fu_14547_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_206_fu_14620_p2() {
    icmp_ln318_206_fu_14620_p2 = (!sub_ln316_206_fu_14614_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_206_fu_14614_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_207_fu_14659_p2() {
    icmp_ln318_207_fu_14659_p2 = (!sub_ln316_207_fu_14653_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_207_fu_14653_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_208_fu_14751_p2() {
    icmp_ln318_208_fu_14751_p2 = (!sub_ln316_208_fu_14745_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_208_fu_14745_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_209_fu_14790_p2() {
    icmp_ln318_209_fu_14790_p2 = (!sub_ln316_209_fu_14784_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_209_fu_14784_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_20_fu_3852_p2() {
    icmp_ln318_20_fu_3852_p2 = (!sub_ln316_20_fu_3846_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_20_fu_3846_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_210_fu_14857_p2() {
    icmp_ln318_210_fu_14857_p2 = (!sub_ln316_210_fu_14851_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_210_fu_14851_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_211_fu_14896_p2() {
    icmp_ln318_211_fu_14896_p2 = (!sub_ln316_211_fu_14890_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_211_fu_14890_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_212_fu_14978_p2() {
    icmp_ln318_212_fu_14978_p2 = (!sub_ln316_212_fu_14972_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_212_fu_14972_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_213_fu_15017_p2() {
    icmp_ln318_213_fu_15017_p2 = (!sub_ln316_213_fu_15011_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_213_fu_15011_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_214_fu_15084_p2() {
    icmp_ln318_214_fu_15084_p2 = (!sub_ln316_214_fu_15078_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_214_fu_15078_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_215_fu_15123_p2() {
    icmp_ln318_215_fu_15123_p2 = (!sub_ln316_215_fu_15117_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_215_fu_15117_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_216_fu_15210_p2() {
    icmp_ln318_216_fu_15210_p2 = (!sub_ln316_216_fu_15204_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_216_fu_15204_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_217_fu_15249_p2() {
    icmp_ln318_217_fu_15249_p2 = (!sub_ln316_217_fu_15243_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_217_fu_15243_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_218_fu_15316_p2() {
    icmp_ln318_218_fu_15316_p2 = (!sub_ln316_218_fu_15310_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_218_fu_15310_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_219_fu_15355_p2() {
    icmp_ln318_219_fu_15355_p2 = (!sub_ln316_219_fu_15349_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_219_fu_15349_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_21_fu_3891_p2() {
    icmp_ln318_21_fu_3891_p2 = (!sub_ln316_21_fu_3885_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_21_fu_3885_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_220_fu_15437_p2() {
    icmp_ln318_220_fu_15437_p2 = (!sub_ln316_220_fu_15431_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_220_fu_15431_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_221_fu_15476_p2() {
    icmp_ln318_221_fu_15476_p2 = (!sub_ln316_221_fu_15470_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_221_fu_15470_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_222_fu_15543_p2() {
    icmp_ln318_222_fu_15543_p2 = (!sub_ln316_222_fu_15537_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_222_fu_15537_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_223_fu_15582_p2() {
    icmp_ln318_223_fu_15582_p2 = (!sub_ln316_223_fu_15576_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_223_fu_15576_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_224_fu_15674_p2() {
    icmp_ln318_224_fu_15674_p2 = (!sub_ln316_224_fu_15668_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_224_fu_15668_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_225_fu_15713_p2() {
    icmp_ln318_225_fu_15713_p2 = (!sub_ln316_225_fu_15707_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_225_fu_15707_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_226_fu_15780_p2() {
    icmp_ln318_226_fu_15780_p2 = (!sub_ln316_226_fu_15774_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_226_fu_15774_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_227_fu_15819_p2() {
    icmp_ln318_227_fu_15819_p2 = (!sub_ln316_227_fu_15813_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_227_fu_15813_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_228_fu_15901_p2() {
    icmp_ln318_228_fu_15901_p2 = (!sub_ln316_228_fu_15895_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_228_fu_15895_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_229_fu_15940_p2() {
    icmp_ln318_229_fu_15940_p2 = (!sub_ln316_229_fu_15934_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_229_fu_15934_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_22_fu_3958_p2() {
    icmp_ln318_22_fu_3958_p2 = (!sub_ln316_22_fu_3952_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_22_fu_3952_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_230_fu_16007_p2() {
    icmp_ln318_230_fu_16007_p2 = (!sub_ln316_230_fu_16001_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_230_fu_16001_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_231_fu_16046_p2() {
    icmp_ln318_231_fu_16046_p2 = (!sub_ln316_231_fu_16040_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_231_fu_16040_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_232_fu_16133_p2() {
    icmp_ln318_232_fu_16133_p2 = (!sub_ln316_232_fu_16127_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_232_fu_16127_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_233_fu_16172_p2() {
    icmp_ln318_233_fu_16172_p2 = (!sub_ln316_233_fu_16166_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_233_fu_16166_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_234_fu_16239_p2() {
    icmp_ln318_234_fu_16239_p2 = (!sub_ln316_234_fu_16233_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_234_fu_16233_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_235_fu_16278_p2() {
    icmp_ln318_235_fu_16278_p2 = (!sub_ln316_235_fu_16272_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_235_fu_16272_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_236_fu_16360_p2() {
    icmp_ln318_236_fu_16360_p2 = (!sub_ln316_236_fu_16354_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_236_fu_16354_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_237_fu_16399_p2() {
    icmp_ln318_237_fu_16399_p2 = (!sub_ln316_237_fu_16393_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_237_fu_16393_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_238_fu_16466_p2() {
    icmp_ln318_238_fu_16466_p2 = (!sub_ln316_238_fu_16460_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_238_fu_16460_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_239_fu_16505_p2() {
    icmp_ln318_239_fu_16505_p2 = (!sub_ln316_239_fu_16499_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_239_fu_16499_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_23_fu_3997_p2() {
    icmp_ln318_23_fu_3997_p2 = (!sub_ln316_23_fu_3991_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_23_fu_3991_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_240_fu_16597_p2() {
    icmp_ln318_240_fu_16597_p2 = (!sub_ln316_240_fu_16591_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_240_fu_16591_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_241_fu_16636_p2() {
    icmp_ln318_241_fu_16636_p2 = (!sub_ln316_241_fu_16630_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_241_fu_16630_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_242_fu_16703_p2() {
    icmp_ln318_242_fu_16703_p2 = (!sub_ln316_242_fu_16697_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_242_fu_16697_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_243_fu_16742_p2() {
    icmp_ln318_243_fu_16742_p2 = (!sub_ln316_243_fu_16736_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_243_fu_16736_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_244_fu_16824_p2() {
    icmp_ln318_244_fu_16824_p2 = (!sub_ln316_244_fu_16818_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_244_fu_16818_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_245_fu_16863_p2() {
    icmp_ln318_245_fu_16863_p2 = (!sub_ln316_245_fu_16857_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_245_fu_16857_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_246_fu_16930_p2() {
    icmp_ln318_246_fu_16930_p2 = (!sub_ln316_246_fu_16924_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_246_fu_16924_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_247_fu_16969_p2() {
    icmp_ln318_247_fu_16969_p2 = (!sub_ln316_247_fu_16963_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_247_fu_16963_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_248_fu_17056_p2() {
    icmp_ln318_248_fu_17056_p2 = (!sub_ln316_248_fu_17050_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_248_fu_17050_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_249_fu_17095_p2() {
    icmp_ln318_249_fu_17095_p2 = (!sub_ln316_249_fu_17089_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_249_fu_17089_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_24_fu_4084_p2() {
    icmp_ln318_24_fu_4084_p2 = (!sub_ln316_24_fu_4078_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_24_fu_4078_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_250_fu_17162_p2() {
    icmp_ln318_250_fu_17162_p2 = (!sub_ln316_250_fu_17156_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_250_fu_17156_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_251_fu_17201_p2() {
    icmp_ln318_251_fu_17201_p2 = (!sub_ln316_251_fu_17195_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_251_fu_17195_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_252_fu_17283_p2() {
    icmp_ln318_252_fu_17283_p2 = (!sub_ln316_252_fu_17277_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_252_fu_17277_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_253_fu_17322_p2() {
    icmp_ln318_253_fu_17322_p2 = (!sub_ln316_253_fu_17316_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_253_fu_17316_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_254_fu_17361_p2() {
    icmp_ln318_254_fu_17361_p2 = (!sub_ln316_254_fu_17355_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_254_fu_17355_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_255_fu_17400_p2() {
    icmp_ln318_255_fu_17400_p2 = (!sub_ln316_255_fu_17394_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_255_fu_17394_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_25_fu_4123_p2() {
    icmp_ln318_25_fu_4123_p2 = (!sub_ln316_25_fu_4117_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_25_fu_4117_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_26_fu_4190_p2() {
    icmp_ln318_26_fu_4190_p2 = (!sub_ln316_26_fu_4184_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_26_fu_4184_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_27_fu_4229_p2() {
    icmp_ln318_27_fu_4229_p2 = (!sub_ln316_27_fu_4223_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_27_fu_4223_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_28_fu_4311_p2() {
    icmp_ln318_28_fu_4311_p2 = (!sub_ln316_28_fu_4305_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_28_fu_4305_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_29_fu_4350_p2() {
    icmp_ln318_29_fu_4350_p2 = (!sub_ln316_29_fu_4344_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_29_fu_4344_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_2_fu_2813_p2() {
    icmp_ln318_2_fu_2813_p2 = (!sub_ln316_2_fu_2807_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_2_fu_2807_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_30_fu_4417_p2() {
    icmp_ln318_30_fu_4417_p2 = (!sub_ln316_30_fu_4411_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_30_fu_4411_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_31_fu_4456_p2() {
    icmp_ln318_31_fu_4456_p2 = (!sub_ln316_31_fu_4450_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_31_fu_4450_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_32_fu_4548_p2() {
    icmp_ln318_32_fu_4548_p2 = (!sub_ln316_32_fu_4542_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_32_fu_4542_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_33_fu_4587_p2() {
    icmp_ln318_33_fu_4587_p2 = (!sub_ln316_33_fu_4581_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_33_fu_4581_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_34_fu_4654_p2() {
    icmp_ln318_34_fu_4654_p2 = (!sub_ln316_34_fu_4648_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_34_fu_4648_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_35_fu_4693_p2() {
    icmp_ln318_35_fu_4693_p2 = (!sub_ln316_35_fu_4687_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_35_fu_4687_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_36_fu_4775_p2() {
    icmp_ln318_36_fu_4775_p2 = (!sub_ln316_36_fu_4769_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_36_fu_4769_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_37_fu_4814_p2() {
    icmp_ln318_37_fu_4814_p2 = (!sub_ln316_37_fu_4808_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_37_fu_4808_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_38_fu_4881_p2() {
    icmp_ln318_38_fu_4881_p2 = (!sub_ln316_38_fu_4875_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_38_fu_4875_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_39_fu_4920_p2() {
    icmp_ln318_39_fu_4920_p2 = (!sub_ln316_39_fu_4914_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_39_fu_4914_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_3_fu_2852_p2() {
    icmp_ln318_3_fu_2852_p2 = (!sub_ln316_3_fu_2846_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_3_fu_2846_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_40_fu_5007_p2() {
    icmp_ln318_40_fu_5007_p2 = (!sub_ln316_40_fu_5001_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_40_fu_5001_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_41_fu_5046_p2() {
    icmp_ln318_41_fu_5046_p2 = (!sub_ln316_41_fu_5040_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_41_fu_5040_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_42_fu_5113_p2() {
    icmp_ln318_42_fu_5113_p2 = (!sub_ln316_42_fu_5107_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_42_fu_5107_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_43_fu_5152_p2() {
    icmp_ln318_43_fu_5152_p2 = (!sub_ln316_43_fu_5146_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_43_fu_5146_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_44_fu_5234_p2() {
    icmp_ln318_44_fu_5234_p2 = (!sub_ln316_44_fu_5228_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_44_fu_5228_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_45_fu_5273_p2() {
    icmp_ln318_45_fu_5273_p2 = (!sub_ln316_45_fu_5267_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_45_fu_5267_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_46_fu_5340_p2() {
    icmp_ln318_46_fu_5340_p2 = (!sub_ln316_46_fu_5334_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_46_fu_5334_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_47_fu_5379_p2() {
    icmp_ln318_47_fu_5379_p2 = (!sub_ln316_47_fu_5373_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_47_fu_5373_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_48_fu_5471_p2() {
    icmp_ln318_48_fu_5471_p2 = (!sub_ln316_48_fu_5465_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_48_fu_5465_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_49_fu_5510_p2() {
    icmp_ln318_49_fu_5510_p2 = (!sub_ln316_49_fu_5504_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_49_fu_5504_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_4_fu_2929_p2() {
    icmp_ln318_4_fu_2929_p2 = (!sub_ln316_4_fu_2923_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_4_fu_2923_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_50_fu_5577_p2() {
    icmp_ln318_50_fu_5577_p2 = (!sub_ln316_50_fu_5571_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_50_fu_5571_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_51_fu_5616_p2() {
    icmp_ln318_51_fu_5616_p2 = (!sub_ln316_51_fu_5610_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_51_fu_5610_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_52_fu_5698_p2() {
    icmp_ln318_52_fu_5698_p2 = (!sub_ln316_52_fu_5692_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_52_fu_5692_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_53_fu_5737_p2() {
    icmp_ln318_53_fu_5737_p2 = (!sub_ln316_53_fu_5731_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_53_fu_5731_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_54_fu_5804_p2() {
    icmp_ln318_54_fu_5804_p2 = (!sub_ln316_54_fu_5798_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_54_fu_5798_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_55_fu_5843_p2() {
    icmp_ln318_55_fu_5843_p2 = (!sub_ln316_55_fu_5837_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_55_fu_5837_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_56_fu_5930_p2() {
    icmp_ln318_56_fu_5930_p2 = (!sub_ln316_56_fu_5924_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_56_fu_5924_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_57_fu_5969_p2() {
    icmp_ln318_57_fu_5969_p2 = (!sub_ln316_57_fu_5963_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_57_fu_5963_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_58_fu_6036_p2() {
    icmp_ln318_58_fu_6036_p2 = (!sub_ln316_58_fu_6030_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_58_fu_6030_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_59_fu_6075_p2() {
    icmp_ln318_59_fu_6075_p2 = (!sub_ln316_59_fu_6069_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_59_fu_6069_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_5_fu_2968_p2() {
    icmp_ln318_5_fu_2968_p2 = (!sub_ln316_5_fu_2962_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_5_fu_2962_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_60_fu_6157_p2() {
    icmp_ln318_60_fu_6157_p2 = (!sub_ln316_60_fu_6151_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_60_fu_6151_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_61_fu_6196_p2() {
    icmp_ln318_61_fu_6196_p2 = (!sub_ln316_61_fu_6190_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_61_fu_6190_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_62_fu_6263_p2() {
    icmp_ln318_62_fu_6263_p2 = (!sub_ln316_62_fu_6257_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_62_fu_6257_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_63_fu_6302_p2() {
    icmp_ln318_63_fu_6302_p2 = (!sub_ln316_63_fu_6296_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_63_fu_6296_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_64_fu_6409_p2() {
    icmp_ln318_64_fu_6409_p2 = (!sub_ln316_64_fu_6403_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_64_fu_6403_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_65_fu_6448_p2() {
    icmp_ln318_65_fu_6448_p2 = (!sub_ln316_65_fu_6442_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_65_fu_6442_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_66_fu_6515_p2() {
    icmp_ln318_66_fu_6515_p2 = (!sub_ln316_66_fu_6509_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_66_fu_6509_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_67_fu_6554_p2() {
    icmp_ln318_67_fu_6554_p2 = (!sub_ln316_67_fu_6548_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_67_fu_6548_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_68_fu_6636_p2() {
    icmp_ln318_68_fu_6636_p2 = (!sub_ln316_68_fu_6630_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_68_fu_6630_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_69_fu_6675_p2() {
    icmp_ln318_69_fu_6675_p2 = (!sub_ln316_69_fu_6669_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_69_fu_6669_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_6_fu_3035_p2() {
    icmp_ln318_6_fu_3035_p2 = (!sub_ln316_6_fu_3029_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_6_fu_3029_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_70_fu_6742_p2() {
    icmp_ln318_70_fu_6742_p2 = (!sub_ln316_70_fu_6736_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_70_fu_6736_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_71_fu_6781_p2() {
    icmp_ln318_71_fu_6781_p2 = (!sub_ln316_71_fu_6775_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_71_fu_6775_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_72_fu_6868_p2() {
    icmp_ln318_72_fu_6868_p2 = (!sub_ln316_72_fu_6862_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_72_fu_6862_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_73_fu_6907_p2() {
    icmp_ln318_73_fu_6907_p2 = (!sub_ln316_73_fu_6901_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_73_fu_6901_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_74_fu_6974_p2() {
    icmp_ln318_74_fu_6974_p2 = (!sub_ln316_74_fu_6968_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_74_fu_6968_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_75_fu_7013_p2() {
    icmp_ln318_75_fu_7013_p2 = (!sub_ln316_75_fu_7007_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_75_fu_7007_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_76_fu_7095_p2() {
    icmp_ln318_76_fu_7095_p2 = (!sub_ln316_76_fu_7089_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_76_fu_7089_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_77_fu_7134_p2() {
    icmp_ln318_77_fu_7134_p2 = (!sub_ln316_77_fu_7128_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_77_fu_7128_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_78_fu_7201_p2() {
    icmp_ln318_78_fu_7201_p2 = (!sub_ln316_78_fu_7195_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_78_fu_7195_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_79_fu_7240_p2() {
    icmp_ln318_79_fu_7240_p2 = (!sub_ln316_79_fu_7234_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_79_fu_7234_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_7_fu_3074_p2() {
    icmp_ln318_7_fu_3074_p2 = (!sub_ln316_7_fu_3068_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_7_fu_3068_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_80_fu_7332_p2() {
    icmp_ln318_80_fu_7332_p2 = (!sub_ln316_80_fu_7326_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_80_fu_7326_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_81_fu_7371_p2() {
    icmp_ln318_81_fu_7371_p2 = (!sub_ln316_81_fu_7365_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_81_fu_7365_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_82_fu_7438_p2() {
    icmp_ln318_82_fu_7438_p2 = (!sub_ln316_82_fu_7432_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_82_fu_7432_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_83_fu_7477_p2() {
    icmp_ln318_83_fu_7477_p2 = (!sub_ln316_83_fu_7471_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_83_fu_7471_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_84_fu_7559_p2() {
    icmp_ln318_84_fu_7559_p2 = (!sub_ln316_84_fu_7553_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_84_fu_7553_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_85_fu_7598_p2() {
    icmp_ln318_85_fu_7598_p2 = (!sub_ln316_85_fu_7592_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_85_fu_7592_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_86_fu_7665_p2() {
    icmp_ln318_86_fu_7665_p2 = (!sub_ln316_86_fu_7659_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_86_fu_7659_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_87_fu_7704_p2() {
    icmp_ln318_87_fu_7704_p2 = (!sub_ln316_87_fu_7698_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_87_fu_7698_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_88_fu_7791_p2() {
    icmp_ln318_88_fu_7791_p2 = (!sub_ln316_88_fu_7785_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_88_fu_7785_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_89_fu_7830_p2() {
    icmp_ln318_89_fu_7830_p2 = (!sub_ln316_89_fu_7824_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_89_fu_7824_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_8_fu_3161_p2() {
    icmp_ln318_8_fu_3161_p2 = (!sub_ln316_8_fu_3155_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_8_fu_3155_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_90_fu_7897_p2() {
    icmp_ln318_90_fu_7897_p2 = (!sub_ln316_90_fu_7891_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_90_fu_7891_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_91_fu_7936_p2() {
    icmp_ln318_91_fu_7936_p2 = (!sub_ln316_91_fu_7930_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_91_fu_7930_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_92_fu_8018_p2() {
    icmp_ln318_92_fu_8018_p2 = (!sub_ln316_92_fu_8012_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_92_fu_8012_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_93_fu_8057_p2() {
    icmp_ln318_93_fu_8057_p2 = (!sub_ln316_93_fu_8051_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_93_fu_8051_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_94_fu_8124_p2() {
    icmp_ln318_94_fu_8124_p2 = (!sub_ln316_94_fu_8118_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_94_fu_8118_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_95_fu_8163_p2() {
    icmp_ln318_95_fu_8163_p2 = (!sub_ln316_95_fu_8157_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_95_fu_8157_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_96_fu_8255_p2() {
    icmp_ln318_96_fu_8255_p2 = (!sub_ln316_96_fu_8249_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_96_fu_8249_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_97_fu_8294_p2() {
    icmp_ln318_97_fu_8294_p2 = (!sub_ln316_97_fu_8288_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_97_fu_8288_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_98_fu_8361_p2() {
    icmp_ln318_98_fu_8361_p2 = (!sub_ln316_98_fu_8355_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_98_fu_8355_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_99_fu_8400_p2() {
    icmp_ln318_99_fu_8400_p2 = (!sub_ln316_99_fu_8394_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_99_fu_8394_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_9_fu_3200_p2() {
    icmp_ln318_9_fu_3200_p2 = (!sub_ln316_9_fu_3194_p2.read().is_01() || !B_cast_reg_17741.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_9_fu_3194_p2.read()) < sc_bigint<32>(B_cast_reg_17741.read()));
}

void pqcrystals_dilithium_18::thread_icmp_ln318_fu_2705_p2() {
    icmp_ln318_fu_2705_p2 = (!sub_ln316_fu_2699_p2.read().is_01() || !B_cast_fu_2639_p1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(sub_ln316_fu_2699_p2.read()) < sc_bigint<32>(B_cast_fu_2639_p1.read()));
}

void pqcrystals_dilithium_18::thread_or_ln315_100_fu_8313_p2() {
    or_ln315_100_fu_8313_p2 = (tmp_reg_17473.read() | ap_const_lv12_65);
}

void pqcrystals_dilithium_18::thread_or_ln315_101_fu_8420_p2() {
    or_ln315_101_fu_8420_p2 = (tmp_reg_17473.read() | ap_const_lv12_66);
}

void pqcrystals_dilithium_18::thread_or_ln315_102_fu_8434_p2() {
    or_ln315_102_fu_8434_p2 = (tmp_reg_17473.read() | ap_const_lv12_67);
}

void pqcrystals_dilithium_18::thread_or_ln315_103_fu_8526_p2() {
    or_ln315_103_fu_8526_p2 = (tmp_reg_17473.read() | ap_const_lv12_68);
}

void pqcrystals_dilithium_18::thread_or_ln315_104_fu_8540_p2() {
    or_ln315_104_fu_8540_p2 = (tmp_reg_17473.read() | ap_const_lv12_69);
}

void pqcrystals_dilithium_18::thread_or_ln315_105_fu_8652_p2() {
    or_ln315_105_fu_8652_p2 = (tmp_reg_17473.read() | ap_const_lv12_6A);
}

void pqcrystals_dilithium_18::thread_or_ln315_106_fu_8666_p2() {
    or_ln315_106_fu_8666_p2 = (tmp_reg_17473.read() | ap_const_lv12_6B);
}

void pqcrystals_dilithium_18::thread_or_ln315_107_fu_8758_p2() {
    or_ln315_107_fu_8758_p2 = (tmp_reg_17473.read() | ap_const_lv12_6C);
}

void pqcrystals_dilithium_18::thread_or_ln315_108_fu_8772_p2() {
    or_ln315_108_fu_8772_p2 = (tmp_reg_17473.read() | ap_const_lv12_6D);
}

void pqcrystals_dilithium_18::thread_or_ln315_109_fu_8879_p2() {
    or_ln315_109_fu_8879_p2 = (tmp_reg_17473.read() | ap_const_lv12_6E);
}

void pqcrystals_dilithium_18::thread_or_ln315_10_fu_3113_p2() {
    or_ln315_10_fu_3113_p2 = (tmp_reg_17473.read() | ap_const_lv12_B);
}

void pqcrystals_dilithium_18::thread_or_ln315_110_fu_8893_p2() {
    or_ln315_110_fu_8893_p2 = (tmp_reg_17473.read() | ap_const_lv12_6F);
}

void pqcrystals_dilithium_18::thread_or_ln315_111_fu_8985_p2() {
    or_ln315_111_fu_8985_p2 = (tmp_reg_17473.read() | ap_const_lv12_70);
}

void pqcrystals_dilithium_18::thread_or_ln315_112_fu_8999_p2() {
    or_ln315_112_fu_8999_p2 = (tmp_reg_17473.read() | ap_const_lv12_71);
}

void pqcrystals_dilithium_18::thread_or_ln315_113_fu_9116_p2() {
    or_ln315_113_fu_9116_p2 = (tmp_reg_17473.read() | ap_const_lv12_72);
}

void pqcrystals_dilithium_18::thread_or_ln315_114_fu_9130_p2() {
    or_ln315_114_fu_9130_p2 = (tmp_reg_17473.read() | ap_const_lv12_73);
}

void pqcrystals_dilithium_18::thread_or_ln315_115_fu_9222_p2() {
    or_ln315_115_fu_9222_p2 = (tmp_reg_17473.read() | ap_const_lv12_74);
}

void pqcrystals_dilithium_18::thread_or_ln315_116_fu_9236_p2() {
    or_ln315_116_fu_9236_p2 = (tmp_reg_17473.read() | ap_const_lv12_75);
}

void pqcrystals_dilithium_18::thread_or_ln315_117_fu_9343_p2() {
    or_ln315_117_fu_9343_p2 = (tmp_reg_17473.read() | ap_const_lv12_76);
}

void pqcrystals_dilithium_18::thread_or_ln315_118_fu_9357_p2() {
    or_ln315_118_fu_9357_p2 = (tmp_reg_17473.read() | ap_const_lv12_77);
}

void pqcrystals_dilithium_18::thread_or_ln315_119_fu_9449_p2() {
    or_ln315_119_fu_9449_p2 = (tmp_reg_17473.read() | ap_const_lv12_78);
}

void pqcrystals_dilithium_18::thread_or_ln315_11_fu_3205_p2() {
    or_ln315_11_fu_3205_p2 = (tmp_reg_17473.read() | ap_const_lv12_C);
}

void pqcrystals_dilithium_18::thread_or_ln315_120_fu_9463_p2() {
    or_ln315_120_fu_9463_p2 = (tmp_reg_17473.read() | ap_const_lv12_79);
}

void pqcrystals_dilithium_18::thread_or_ln315_121_fu_9575_p2() {
    or_ln315_121_fu_9575_p2 = (tmp_reg_17473.read() | ap_const_lv12_7A);
}

void pqcrystals_dilithium_18::thread_or_ln315_122_fu_9589_p2() {
    or_ln315_122_fu_9589_p2 = (tmp_reg_17473.read() | ap_const_lv12_7B);
}

void pqcrystals_dilithium_18::thread_or_ln315_123_fu_9681_p2() {
    or_ln315_123_fu_9681_p2 = (tmp_reg_17473.read() | ap_const_lv12_7C);
}

void pqcrystals_dilithium_18::thread_or_ln315_124_fu_9695_p2() {
    or_ln315_124_fu_9695_p2 = (tmp_reg_17473.read() | ap_const_lv12_7D);
}

void pqcrystals_dilithium_18::thread_or_ln315_125_fu_9802_p2() {
    or_ln315_125_fu_9802_p2 = (tmp_reg_17473.read() | ap_const_lv12_7E);
}

void pqcrystals_dilithium_18::thread_or_ln315_126_fu_9816_p2() {
    or_ln315_126_fu_9816_p2 = (tmp_reg_17473.read() | ap_const_lv12_7F);
}

void pqcrystals_dilithium_18::thread_or_ln315_127_fu_9908_p2() {
    or_ln315_127_fu_9908_p2 = (tmp_reg_17473.read() | ap_const_lv12_80);
}

void pqcrystals_dilithium_18::thread_or_ln315_128_fu_9922_p2() {
    or_ln315_128_fu_9922_p2 = (tmp_reg_17473.read() | ap_const_lv12_81);
}

void pqcrystals_dilithium_18::thread_or_ln315_129_fu_10059_p2() {
    or_ln315_129_fu_10059_p2 = (tmp_reg_17473.read() | ap_const_lv12_82);
}

void pqcrystals_dilithium_18::thread_or_ln315_12_fu_3219_p2() {
    or_ln315_12_fu_3219_p2 = (tmp_reg_17473.read() | ap_const_lv12_D);
}

void pqcrystals_dilithium_18::thread_or_ln315_130_fu_10073_p2() {
    or_ln315_130_fu_10073_p2 = (tmp_reg_17473.read() | ap_const_lv12_83);
}

void pqcrystals_dilithium_18::thread_or_ln315_131_fu_10165_p2() {
    or_ln315_131_fu_10165_p2 = (tmp_reg_17473.read() | ap_const_lv12_84);
}

void pqcrystals_dilithium_18::thread_or_ln315_132_fu_10179_p2() {
    or_ln315_132_fu_10179_p2 = (tmp_reg_17473.read() | ap_const_lv12_85);
}

void pqcrystals_dilithium_18::thread_or_ln315_133_fu_10286_p2() {
    or_ln315_133_fu_10286_p2 = (tmp_reg_17473.read() | ap_const_lv12_86);
}

void pqcrystals_dilithium_18::thread_or_ln315_134_fu_10300_p2() {
    or_ln315_134_fu_10300_p2 = (tmp_reg_17473.read() | ap_const_lv12_87);
}

void pqcrystals_dilithium_18::thread_or_ln315_135_fu_10392_p2() {
    or_ln315_135_fu_10392_p2 = (tmp_reg_17473.read() | ap_const_lv12_88);
}

void pqcrystals_dilithium_18::thread_or_ln315_136_fu_10406_p2() {
    or_ln315_136_fu_10406_p2 = (tmp_reg_17473.read() | ap_const_lv12_89);
}

void pqcrystals_dilithium_18::thread_or_ln315_137_fu_10518_p2() {
    or_ln315_137_fu_10518_p2 = (tmp_reg_17473.read() | ap_const_lv12_8A);
}

void pqcrystals_dilithium_18::thread_or_ln315_138_fu_10532_p2() {
    or_ln315_138_fu_10532_p2 = (tmp_reg_17473.read() | ap_const_lv12_8B);
}

void pqcrystals_dilithium_18::thread_or_ln315_139_fu_10624_p2() {
    or_ln315_139_fu_10624_p2 = (tmp_reg_17473.read() | ap_const_lv12_8C);
}

void pqcrystals_dilithium_18::thread_or_ln315_13_fu_3326_p2() {
    or_ln315_13_fu_3326_p2 = (tmp_reg_17473.read() | ap_const_lv12_E);
}

void pqcrystals_dilithium_18::thread_or_ln315_140_fu_10638_p2() {
    or_ln315_140_fu_10638_p2 = (tmp_reg_17473.read() | ap_const_lv12_8D);
}

void pqcrystals_dilithium_18::thread_or_ln315_141_fu_10745_p2() {
    or_ln315_141_fu_10745_p2 = (tmp_reg_17473.read() | ap_const_lv12_8E);
}

void pqcrystals_dilithium_18::thread_or_ln315_142_fu_10759_p2() {
    or_ln315_142_fu_10759_p2 = (tmp_reg_17473.read() | ap_const_lv12_8F);
}

void pqcrystals_dilithium_18::thread_or_ln315_143_fu_10851_p2() {
    or_ln315_143_fu_10851_p2 = (tmp_reg_17473.read() | ap_const_lv12_90);
}

void pqcrystals_dilithium_18::thread_or_ln315_144_fu_10865_p2() {
    or_ln315_144_fu_10865_p2 = (tmp_reg_17473.read() | ap_const_lv12_91);
}

void pqcrystals_dilithium_18::thread_or_ln315_145_fu_10982_p2() {
    or_ln315_145_fu_10982_p2 = (tmp_reg_17473.read() | ap_const_lv12_92);
}

void pqcrystals_dilithium_18::thread_or_ln315_146_fu_10996_p2() {
    or_ln315_146_fu_10996_p2 = (tmp_reg_17473.read() | ap_const_lv12_93);
}

void pqcrystals_dilithium_18::thread_or_ln315_147_fu_11088_p2() {
    or_ln315_147_fu_11088_p2 = (tmp_reg_17473.read() | ap_const_lv12_94);
}

void pqcrystals_dilithium_18::thread_or_ln315_148_fu_11102_p2() {
    or_ln315_148_fu_11102_p2 = (tmp_reg_17473.read() | ap_const_lv12_95);
}

void pqcrystals_dilithium_18::thread_or_ln315_149_fu_11209_p2() {
    or_ln315_149_fu_11209_p2 = (tmp_reg_17473.read() | ap_const_lv12_96);
}

void pqcrystals_dilithium_18::thread_or_ln315_14_fu_3340_p2() {
    or_ln315_14_fu_3340_p2 = (tmp_reg_17473.read() | ap_const_lv12_F);
}

void pqcrystals_dilithium_18::thread_or_ln315_150_fu_11223_p2() {
    or_ln315_150_fu_11223_p2 = (tmp_reg_17473.read() | ap_const_lv12_97);
}

void pqcrystals_dilithium_18::thread_or_ln315_151_fu_11315_p2() {
    or_ln315_151_fu_11315_p2 = (tmp_reg_17473.read() | ap_const_lv12_98);
}

void pqcrystals_dilithium_18::thread_or_ln315_152_fu_11329_p2() {
    or_ln315_152_fu_11329_p2 = (tmp_reg_17473.read() | ap_const_lv12_99);
}

void pqcrystals_dilithium_18::thread_or_ln315_153_fu_11441_p2() {
    or_ln315_153_fu_11441_p2 = (tmp_reg_17473.read() | ap_const_lv12_9A);
}

void pqcrystals_dilithium_18::thread_or_ln315_154_fu_11455_p2() {
    or_ln315_154_fu_11455_p2 = (tmp_reg_17473.read() | ap_const_lv12_9B);
}

void pqcrystals_dilithium_18::thread_or_ln315_155_fu_11547_p2() {
    or_ln315_155_fu_11547_p2 = (tmp_reg_17473.read() | ap_const_lv12_9C);
}

void pqcrystals_dilithium_18::thread_or_ln315_156_fu_11561_p2() {
    or_ln315_156_fu_11561_p2 = (tmp_reg_17473.read() | ap_const_lv12_9D);
}

void pqcrystals_dilithium_18::thread_or_ln315_157_fu_11668_p2() {
    or_ln315_157_fu_11668_p2 = (tmp_reg_17473.read() | ap_const_lv12_9E);
}

void pqcrystals_dilithium_18::thread_or_ln315_158_fu_11682_p2() {
    or_ln315_158_fu_11682_p2 = (tmp_reg_17473.read() | ap_const_lv12_9F);
}

void pqcrystals_dilithium_18::thread_or_ln315_159_fu_11774_p2() {
    or_ln315_159_fu_11774_p2 = (tmp_reg_17473.read() | ap_const_lv12_A0);
}

void pqcrystals_dilithium_18::thread_or_ln315_15_fu_3432_p2() {
    or_ln315_15_fu_3432_p2 = (tmp_reg_17473.read() | ap_const_lv12_10);
}

void pqcrystals_dilithium_18::thread_or_ln315_160_fu_11788_p2() {
    or_ln315_160_fu_11788_p2 = (tmp_reg_17473.read() | ap_const_lv12_A1);
}

void pqcrystals_dilithium_18::thread_or_ln315_161_fu_11905_p2() {
    or_ln315_161_fu_11905_p2 = (tmp_reg_17473.read() | ap_const_lv12_A2);
}

void pqcrystals_dilithium_18::thread_or_ln315_162_fu_11919_p2() {
    or_ln315_162_fu_11919_p2 = (tmp_reg_17473.read() | ap_const_lv12_A3);
}

void pqcrystals_dilithium_18::thread_or_ln315_163_fu_12011_p2() {
    or_ln315_163_fu_12011_p2 = (tmp_reg_17473.read() | ap_const_lv12_A4);
}

void pqcrystals_dilithium_18::thread_or_ln315_164_fu_12025_p2() {
    or_ln315_164_fu_12025_p2 = (tmp_reg_17473.read() | ap_const_lv12_A5);
}

void pqcrystals_dilithium_18::thread_or_ln315_165_fu_12132_p2() {
    or_ln315_165_fu_12132_p2 = (tmp_reg_17473.read() | ap_const_lv12_A6);
}

void pqcrystals_dilithium_18::thread_or_ln315_166_fu_12146_p2() {
    or_ln315_166_fu_12146_p2 = (tmp_reg_17473.read() | ap_const_lv12_A7);
}

void pqcrystals_dilithium_18::thread_or_ln315_167_fu_12238_p2() {
    or_ln315_167_fu_12238_p2 = (tmp_reg_17473.read() | ap_const_lv12_A8);
}

void pqcrystals_dilithium_18::thread_or_ln315_168_fu_12252_p2() {
    or_ln315_168_fu_12252_p2 = (tmp_reg_17473.read() | ap_const_lv12_A9);
}

void pqcrystals_dilithium_18::thread_or_ln315_169_fu_12364_p2() {
    or_ln315_169_fu_12364_p2 = (tmp_reg_17473.read() | ap_const_lv12_AA);
}

void pqcrystals_dilithium_18::thread_or_ln315_16_fu_3446_p2() {
    or_ln315_16_fu_3446_p2 = (tmp_reg_17473.read() | ap_const_lv12_11);
}

void pqcrystals_dilithium_18::thread_or_ln315_170_fu_12378_p2() {
    or_ln315_170_fu_12378_p2 = (tmp_reg_17473.read() | ap_const_lv12_AB);
}

void pqcrystals_dilithium_18::thread_or_ln315_171_fu_12470_p2() {
    or_ln315_171_fu_12470_p2 = (tmp_reg_17473.read() | ap_const_lv12_AC);
}

void pqcrystals_dilithium_18::thread_or_ln315_172_fu_12484_p2() {
    or_ln315_172_fu_12484_p2 = (tmp_reg_17473.read() | ap_const_lv12_AD);
}

void pqcrystals_dilithium_18::thread_or_ln315_173_fu_12591_p2() {
    or_ln315_173_fu_12591_p2 = (tmp_reg_17473.read() | ap_const_lv12_AE);
}

void pqcrystals_dilithium_18::thread_or_ln315_174_fu_12605_p2() {
    or_ln315_174_fu_12605_p2 = (tmp_reg_17473.read() | ap_const_lv12_AF);
}

void pqcrystals_dilithium_18::thread_or_ln315_175_fu_12697_p2() {
    or_ln315_175_fu_12697_p2 = (tmp_reg_17473.read() | ap_const_lv12_B0);
}

void pqcrystals_dilithium_18::thread_or_ln315_176_fu_12711_p2() {
    or_ln315_176_fu_12711_p2 = (tmp_reg_17473.read() | ap_const_lv12_B1);
}

void pqcrystals_dilithium_18::thread_or_ln315_177_fu_12828_p2() {
    or_ln315_177_fu_12828_p2 = (tmp_reg_17473.read() | ap_const_lv12_B2);
}

void pqcrystals_dilithium_18::thread_or_ln315_178_fu_12842_p2() {
    or_ln315_178_fu_12842_p2 = (tmp_reg_17473.read() | ap_const_lv12_B3);
}

void pqcrystals_dilithium_18::thread_or_ln315_179_fu_12934_p2() {
    or_ln315_179_fu_12934_p2 = (tmp_reg_17473.read() | ap_const_lv12_B4);
}

void pqcrystals_dilithium_18::thread_or_ln315_17_fu_3563_p2() {
    or_ln315_17_fu_3563_p2 = (tmp_reg_17473.read() | ap_const_lv12_12);
}

void pqcrystals_dilithium_18::thread_or_ln315_180_fu_12948_p2() {
    or_ln315_180_fu_12948_p2 = (tmp_reg_17473.read() | ap_const_lv12_B5);
}

void pqcrystals_dilithium_18::thread_or_ln315_181_fu_13055_p2() {
    or_ln315_181_fu_13055_p2 = (tmp_reg_17473.read() | ap_const_lv12_B6);
}

void pqcrystals_dilithium_18::thread_or_ln315_182_fu_13069_p2() {
    or_ln315_182_fu_13069_p2 = (tmp_reg_17473.read() | ap_const_lv12_B7);
}

void pqcrystals_dilithium_18::thread_or_ln315_183_fu_13161_p2() {
    or_ln315_183_fu_13161_p2 = (tmp_reg_17473.read() | ap_const_lv12_B8);
}

void pqcrystals_dilithium_18::thread_or_ln315_184_fu_13175_p2() {
    or_ln315_184_fu_13175_p2 = (tmp_reg_17473.read() | ap_const_lv12_B9);
}

void pqcrystals_dilithium_18::thread_or_ln315_185_fu_13287_p2() {
    or_ln315_185_fu_13287_p2 = (tmp_reg_17473.read() | ap_const_lv12_BA);
}

void pqcrystals_dilithium_18::thread_or_ln315_186_fu_13301_p2() {
    or_ln315_186_fu_13301_p2 = (tmp_reg_17473.read() | ap_const_lv12_BB);
}

void pqcrystals_dilithium_18::thread_or_ln315_187_fu_13393_p2() {
    or_ln315_187_fu_13393_p2 = (tmp_reg_17473.read() | ap_const_lv12_BC);
}

}

