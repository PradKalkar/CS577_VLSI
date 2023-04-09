#include "pqcrystals_dilithium_21.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_21::thread_sub_ln62_92_fu_12467_p2() {
    sub_ln62_92_fu_12467_p2 = (!reg_3849.read().is_01() || !grp_pqcrystals_dilithium_22_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3849.read()) - sc_biguint<32>(grp_pqcrystals_dilithium_22_fu_2927_ap_return.read()));
}

void pqcrystals_dilithium_21::thread_sub_ln62_94_fu_12510_p2() {
    sub_ln62_94_fu_12510_p2 = (!reg_3869.read().is_01() || !grp_pqcrystals_dilithium_22_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3869.read()) - sc_biguint<32>(grp_pqcrystals_dilithium_22_fu_2927_ap_return.read()));
}

void pqcrystals_dilithium_21::thread_sub_ln62_96_fu_12553_p2() {
    sub_ln62_96_fu_12553_p2 = (!reg_3889.read().is_01() || !grp_pqcrystals_dilithium_22_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3889.read()) - sc_biguint<32>(grp_pqcrystals_dilithium_22_fu_2927_ap_return.read()));
}

void pqcrystals_dilithium_21::thread_sub_ln62_98_fu_12596_p2() {
    sub_ln62_98_fu_12596_p2 = (!reg_3909.read().is_01() || !grp_pqcrystals_dilithium_22_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3909.read()) - sc_biguint<32>(grp_pqcrystals_dilithium_22_fu_2927_ap_return.read()));
}

void pqcrystals_dilithium_21::thread_tmp_1212_fu_7224_p3() {
    tmp_1212_fu_7224_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_1_fu_7219_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1213_fu_7238_p3() {
    tmp_1213_fu_7238_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_fu_7233_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1214_fu_7252_p3() {
    tmp_1214_fu_7252_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_2_fu_7247_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1215_fu_7266_p3() {
    tmp_1215_fu_7266_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_1_fu_7261_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1216_fu_7280_p3() {
    tmp_1216_fu_7280_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_3_fu_7275_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1217_fu_7294_p3() {
    tmp_1217_fu_7294_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_2_fu_7289_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1218_fu_7308_p3() {
    tmp_1218_fu_7308_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_4_fu_7303_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1219_fu_7322_p3() {
    tmp_1219_fu_7322_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_3_fu_7317_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1220_fu_7336_p3() {
    tmp_1220_fu_7336_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_5_fu_7331_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1221_fu_7350_p3() {
    tmp_1221_fu_7350_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_4_fu_7345_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1222_fu_7364_p3() {
    tmp_1222_fu_7364_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_6_fu_7359_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1223_fu_7378_p3() {
    tmp_1223_fu_7378_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_5_fu_7373_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1224_fu_7392_p3() {
    tmp_1224_fu_7392_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_7_fu_7387_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1225_fu_7406_p3() {
    tmp_1225_fu_7406_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_6_fu_7401_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1226_fu_7420_p3() {
    tmp_1226_fu_7420_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_8_fu_7415_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1227_fu_7434_p3() {
    tmp_1227_fu_7434_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_7_fu_7429_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1228_fu_7448_p3() {
    tmp_1228_fu_7448_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_9_fu_7443_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1229_fu_7462_p3() {
    tmp_1229_fu_7462_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_8_fu_7457_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1230_fu_7476_p3() {
    tmp_1230_fu_7476_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_10_fu_7471_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1231_fu_7490_p3() {
    tmp_1231_fu_7490_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_9_fu_7485_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1232_fu_7504_p3() {
    tmp_1232_fu_7504_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_11_fu_7499_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1233_fu_7518_p3() {
    tmp_1233_fu_7518_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_10_fu_7513_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1234_fu_7532_p3() {
    tmp_1234_fu_7532_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_12_fu_7527_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1235_fu_7546_p3() {
    tmp_1235_fu_7546_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_11_fu_7541_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1236_fu_7560_p3() {
    tmp_1236_fu_7560_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_13_fu_7555_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1237_fu_7574_p3() {
    tmp_1237_fu_7574_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_12_fu_7569_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1238_fu_7588_p3() {
    tmp_1238_fu_7588_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_14_fu_7583_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1239_fu_7602_p3() {
    tmp_1239_fu_7602_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_13_fu_7597_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1240_fu_7616_p3() {
    tmp_1240_fu_7616_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_15_fu_7611_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1241_fu_7630_p3() {
    tmp_1241_fu_7630_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_14_fu_7625_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1242_fu_7644_p3() {
    tmp_1242_fu_7644_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_16_fu_7639_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1243_fu_7658_p3() {
    tmp_1243_fu_7658_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_15_fu_7653_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1244_fu_7672_p3() {
    tmp_1244_fu_7672_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_17_fu_7667_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1245_fu_7686_p3() {
    tmp_1245_fu_7686_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_16_fu_7681_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1246_fu_7700_p3() {
    tmp_1246_fu_7700_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_18_fu_7695_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1247_fu_7714_p3() {
    tmp_1247_fu_7714_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_17_fu_7709_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1248_fu_7728_p3() {
    tmp_1248_fu_7728_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_19_fu_7723_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1249_fu_7742_p3() {
    tmp_1249_fu_7742_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_18_fu_7737_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1250_fu_7756_p3() {
    tmp_1250_fu_7756_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_20_fu_7751_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1251_fu_7770_p3() {
    tmp_1251_fu_7770_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_19_fu_7765_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1252_fu_7784_p3() {
    tmp_1252_fu_7784_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_21_fu_7779_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1253_fu_7798_p3() {
    tmp_1253_fu_7798_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_20_fu_7793_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1254_fu_7812_p3() {
    tmp_1254_fu_7812_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_22_fu_7807_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1255_fu_7826_p3() {
    tmp_1255_fu_7826_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_21_fu_7821_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1256_fu_7840_p3() {
    tmp_1256_fu_7840_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_23_fu_7835_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1257_fu_7854_p3() {
    tmp_1257_fu_7854_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_22_fu_7849_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1258_fu_7883_p3() {
    tmp_1258_fu_7883_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_24_fu_7878_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1259_fu_7897_p3() {
    tmp_1259_fu_7897_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_23_fu_7892_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1260_fu_7926_p3() {
    tmp_1260_fu_7926_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_25_fu_7921_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1261_fu_7940_p3() {
    tmp_1261_fu_7940_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_24_fu_7935_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1262_fu_7969_p3() {
    tmp_1262_fu_7969_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_26_fu_7964_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1263_fu_7983_p3() {
    tmp_1263_fu_7983_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_25_fu_7978_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1264_fu_8012_p3() {
    tmp_1264_fu_8012_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_27_fu_8007_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1265_fu_8026_p3() {
    tmp_1265_fu_8026_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_26_fu_8021_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1266_fu_8040_p3() {
    tmp_1266_fu_8040_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_28_fu_8035_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1267_fu_8054_p3() {
    tmp_1267_fu_8054_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_27_fu_8049_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1268_fu_8068_p3() {
    tmp_1268_fu_8068_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_29_fu_8063_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1269_fu_8082_p3() {
    tmp_1269_fu_8082_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_28_fu_8077_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1270_fu_8096_p3() {
    tmp_1270_fu_8096_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_30_fu_8091_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1271_fu_8110_p3() {
    tmp_1271_fu_8110_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_29_fu_8105_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1272_fu_8124_p3() {
    tmp_1272_fu_8124_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_31_fu_8119_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1273_fu_8138_p3() {
    tmp_1273_fu_8138_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_30_fu_8133_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1274_fu_8152_p3() {
    tmp_1274_fu_8152_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_32_fu_8147_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1275_fu_8166_p3() {
    tmp_1275_fu_8166_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_31_fu_8161_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1276_fu_8195_p3() {
    tmp_1276_fu_8195_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_33_fu_8190_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1277_fu_8209_p3() {
    tmp_1277_fu_8209_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_32_fu_8204_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1278_fu_8223_p3() {
    tmp_1278_fu_8223_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_34_fu_8218_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1279_fu_8237_p3() {
    tmp_1279_fu_8237_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_33_fu_8232_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1280_fu_8251_p3() {
    tmp_1280_fu_8251_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_35_fu_8246_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1281_fu_8265_p3() {
    tmp_1281_fu_8265_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_34_fu_8260_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1282_fu_8294_p3() {
    tmp_1282_fu_8294_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_36_fu_8289_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1283_fu_8308_p3() {
    tmp_1283_fu_8308_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_35_fu_8303_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1284_fu_8322_p3() {
    tmp_1284_fu_8322_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_37_fu_8317_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1285_fu_8336_p3() {
    tmp_1285_fu_8336_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_36_fu_8331_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1286_fu_8350_p3() {
    tmp_1286_fu_8350_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_38_fu_8345_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1287_fu_8364_p3() {
    tmp_1287_fu_8364_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_37_fu_8359_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1288_fu_8378_p3() {
    tmp_1288_fu_8378_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_39_fu_8373_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1289_fu_8392_p3() {
    tmp_1289_fu_8392_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_38_fu_8387_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1290_fu_8406_p3() {
    tmp_1290_fu_8406_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_40_fu_8401_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1291_fu_8420_p3() {
    tmp_1291_fu_8420_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_39_fu_8415_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1292_fu_8434_p3() {
    tmp_1292_fu_8434_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_41_fu_8429_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1293_fu_8448_p3() {
    tmp_1293_fu_8448_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_40_fu_8443_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1294_fu_8462_p3() {
    tmp_1294_fu_8462_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_42_fu_8457_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1295_fu_8476_p3() {
    tmp_1295_fu_8476_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_41_fu_8471_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1296_fu_8490_p3() {
    tmp_1296_fu_8490_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_43_fu_8485_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1297_fu_8504_p3() {
    tmp_1297_fu_8504_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_42_fu_8499_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1298_fu_8518_p3() {
    tmp_1298_fu_8518_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_44_fu_8513_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1299_fu_8532_p3() {
    tmp_1299_fu_8532_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_43_fu_8527_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1300_fu_8546_p3() {
    tmp_1300_fu_8546_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_45_fu_8541_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1301_fu_8560_p3() {
    tmp_1301_fu_8560_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_44_fu_8555_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1302_fu_8574_p3() {
    tmp_1302_fu_8574_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_46_fu_8569_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1303_fu_8588_p3() {
    tmp_1303_fu_8588_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_45_fu_8583_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1304_fu_8602_p3() {
    tmp_1304_fu_8602_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_47_fu_8597_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1305_fu_8616_p3() {
    tmp_1305_fu_8616_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_46_fu_8611_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1306_fu_8630_p3() {
    tmp_1306_fu_8630_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_48_fu_8625_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1307_fu_8644_p3() {
    tmp_1307_fu_8644_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_47_fu_8639_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1308_fu_8658_p3() {
    tmp_1308_fu_8658_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_49_fu_8653_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1309_fu_8672_p3() {
    tmp_1309_fu_8672_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_48_fu_8667_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1310_fu_8686_p3() {
    tmp_1310_fu_8686_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_50_fu_8681_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1311_fu_8700_p3() {
    tmp_1311_fu_8700_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_49_fu_8695_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1312_fu_8714_p3() {
    tmp_1312_fu_8714_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_51_fu_8709_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1313_fu_8728_p3() {
    tmp_1313_fu_8728_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_50_fu_8723_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1314_fu_8742_p3() {
    tmp_1314_fu_8742_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_52_fu_8737_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1315_fu_8756_p3() {
    tmp_1315_fu_8756_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_51_fu_8751_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1316_fu_8770_p3() {
    tmp_1316_fu_8770_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_53_fu_8765_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1317_fu_8784_p3() {
    tmp_1317_fu_8784_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_52_fu_8779_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1318_fu_8798_p3() {
    tmp_1318_fu_8798_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_54_fu_8793_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1319_fu_8812_p3() {
    tmp_1319_fu_8812_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_53_fu_8807_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1320_fu_8826_p3() {
    tmp_1320_fu_8826_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_55_fu_8821_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1321_fu_8840_p3() {
    tmp_1321_fu_8840_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_54_fu_8835_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1322_fu_8854_p3() {
    tmp_1322_fu_8854_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_56_fu_8849_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1323_fu_8868_p3() {
    tmp_1323_fu_8868_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_55_fu_8863_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1324_fu_8882_p3() {
    tmp_1324_fu_8882_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_57_fu_8877_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1325_fu_8896_p3() {
    tmp_1325_fu_8896_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_56_fu_8891_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1326_fu_8910_p3() {
    tmp_1326_fu_8910_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_58_fu_8905_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1327_fu_8924_p3() {
    tmp_1327_fu_8924_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_57_fu_8919_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1328_fu_8938_p3() {
    tmp_1328_fu_8938_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_59_fu_8933_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1329_fu_8952_p3() {
    tmp_1329_fu_8952_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_58_fu_8947_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1330_fu_8981_p3() {
    tmp_1330_fu_8981_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_60_fu_8976_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1331_fu_8995_p3() {
    tmp_1331_fu_8995_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_59_fu_8990_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1332_fu_9009_p3() {
    tmp_1332_fu_9009_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_61_fu_9004_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1333_fu_9023_p3() {
    tmp_1333_fu_9023_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_60_fu_9018_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1334_fu_9037_p3() {
    tmp_1334_fu_9037_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_62_fu_9032_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1335_fu_9051_p3() {
    tmp_1335_fu_9051_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_61_fu_9046_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1336_fu_9065_p3() {
    tmp_1336_fu_9065_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_63_fu_9060_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1337_fu_9079_p3() {
    tmp_1337_fu_9079_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_62_fu_9074_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1338_fu_9093_p3() {
    tmp_1338_fu_9093_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_64_fu_9088_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1339_fu_9107_p3() {
    tmp_1339_fu_9107_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_63_fu_9102_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1340_fu_9121_p3() {
    tmp_1340_fu_9121_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_65_fu_9116_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1341_fu_9135_p3() {
    tmp_1341_fu_9135_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_64_fu_9130_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1342_fu_9149_p3() {
    tmp_1342_fu_9149_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_66_fu_9144_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1343_fu_9163_p3() {
    tmp_1343_fu_9163_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_65_fu_9158_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1344_fu_9177_p3() {
    tmp_1344_fu_9177_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_67_fu_9172_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1345_fu_9191_p3() {
    tmp_1345_fu_9191_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_66_fu_9186_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1346_fu_9205_p3() {
    tmp_1346_fu_9205_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_68_fu_9200_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1347_fu_9219_p3() {
    tmp_1347_fu_9219_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_67_fu_9214_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1348_fu_9233_p3() {
    tmp_1348_fu_9233_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_69_fu_9228_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1349_fu_9247_p3() {
    tmp_1349_fu_9247_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_68_fu_9242_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1350_fu_9261_p3() {
    tmp_1350_fu_9261_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_70_fu_9256_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1351_fu_9275_p3() {
    tmp_1351_fu_9275_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_69_fu_9270_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1352_fu_9289_p3() {
    tmp_1352_fu_9289_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_71_fu_9284_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1353_fu_9303_p3() {
    tmp_1353_fu_9303_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_70_fu_9298_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1354_fu_9317_p3() {
    tmp_1354_fu_9317_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_72_fu_9312_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1355_fu_9331_p3() {
    tmp_1355_fu_9331_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_71_fu_9326_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1356_fu_9345_p3() {
    tmp_1356_fu_9345_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_73_fu_9340_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1357_fu_9359_p3() {
    tmp_1357_fu_9359_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_72_fu_9354_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1358_fu_9373_p3() {
    tmp_1358_fu_9373_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_74_fu_9368_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1359_fu_9387_p3() {
    tmp_1359_fu_9387_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_73_fu_9382_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1360_fu_9401_p3() {
    tmp_1360_fu_9401_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_75_fu_9396_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1361_fu_9415_p3() {
    tmp_1361_fu_9415_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_74_fu_9410_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1362_fu_9429_p3() {
    tmp_1362_fu_9429_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_76_fu_9424_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1363_fu_9443_p3() {
    tmp_1363_fu_9443_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_75_fu_9438_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1364_fu_9457_p3() {
    tmp_1364_fu_9457_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_77_fu_9452_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1365_fu_9471_p3() {
    tmp_1365_fu_9471_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_76_fu_9466_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1366_fu_9485_p3() {
    tmp_1366_fu_9485_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_78_fu_9480_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1367_fu_9499_p3() {
    tmp_1367_fu_9499_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_77_fu_9494_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1368_fu_9528_p3() {
    tmp_1368_fu_9528_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_79_fu_9523_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1369_fu_9542_p3() {
    tmp_1369_fu_9542_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_78_fu_9537_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1370_fu_9556_p3() {
    tmp_1370_fu_9556_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_80_fu_9551_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1371_fu_9570_p3() {
    tmp_1371_fu_9570_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_79_fu_9565_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1372_fu_9584_p3() {
    tmp_1372_fu_9584_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_81_fu_9579_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1373_fu_9598_p3() {
    tmp_1373_fu_9598_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_80_fu_9593_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1374_fu_9612_p3() {
    tmp_1374_fu_9612_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_82_fu_9607_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1375_fu_9626_p3() {
    tmp_1375_fu_9626_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_81_fu_9621_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1376_fu_9640_p3() {
    tmp_1376_fu_9640_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_83_fu_9635_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1377_fu_9654_p3() {
    tmp_1377_fu_9654_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_82_fu_9649_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1378_fu_9668_p3() {
    tmp_1378_fu_9668_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_84_fu_9663_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1379_fu_9682_p3() {
    tmp_1379_fu_9682_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_83_fu_9677_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1380_fu_9696_p3() {
    tmp_1380_fu_9696_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_85_fu_9691_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1381_fu_9710_p3() {
    tmp_1381_fu_9710_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_84_fu_9705_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1382_fu_9724_p3() {
    tmp_1382_fu_9724_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_86_fu_9719_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1383_fu_9738_p3() {
    tmp_1383_fu_9738_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_85_fu_9733_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1384_fu_9752_p3() {
    tmp_1384_fu_9752_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_87_fu_9747_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1385_fu_9766_p3() {
    tmp_1385_fu_9766_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_86_fu_9761_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1386_fu_9780_p3() {
    tmp_1386_fu_9780_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_88_fu_9775_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1387_fu_9794_p3() {
    tmp_1387_fu_9794_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_87_fu_9789_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1388_fu_9808_p3() {
    tmp_1388_fu_9808_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_89_fu_9803_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1389_fu_9822_p3() {
    tmp_1389_fu_9822_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_88_fu_9817_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1390_fu_9836_p3() {
    tmp_1390_fu_9836_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_90_fu_9831_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1391_fu_9850_p3() {
    tmp_1391_fu_9850_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_89_fu_9845_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1392_fu_9864_p3() {
    tmp_1392_fu_9864_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_91_fu_9859_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1393_fu_9878_p3() {
    tmp_1393_fu_9878_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_90_fu_9873_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1394_fu_9892_p3() {
    tmp_1394_fu_9892_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_92_fu_9887_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1395_fu_9906_p3() {
    tmp_1395_fu_9906_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_91_fu_9901_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1396_fu_9920_p3() {
    tmp_1396_fu_9920_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_93_fu_9915_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1397_fu_9934_p3() {
    tmp_1397_fu_9934_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_92_fu_9929_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1398_fu_9948_p3() {
    tmp_1398_fu_9948_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_94_fu_9943_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1399_fu_9962_p3() {
    tmp_1399_fu_9962_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_93_fu_9957_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1400_fu_9976_p3() {
    tmp_1400_fu_9976_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_95_fu_9971_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1401_fu_9990_p3() {
    tmp_1401_fu_9990_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_94_fu_9985_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1402_fu_10004_p3() {
    tmp_1402_fu_10004_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_96_fu_9999_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1403_fu_10018_p3() {
    tmp_1403_fu_10018_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_95_fu_10013_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1404_fu_10032_p3() {
    tmp_1404_fu_10032_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_97_fu_10027_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1405_fu_10046_p3() {
    tmp_1405_fu_10046_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_96_fu_10041_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1406_fu_10060_p3() {
    tmp_1406_fu_10060_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_98_fu_10055_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1407_fu_10074_p3() {
    tmp_1407_fu_10074_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_97_fu_10069_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1408_fu_10088_p3() {
    tmp_1408_fu_10088_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_99_fu_10083_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1409_fu_10102_p3() {
    tmp_1409_fu_10102_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_98_fu_10097_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1410_fu_10116_p3() {
    tmp_1410_fu_10116_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_100_fu_10111_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1411_fu_10130_p3() {
    tmp_1411_fu_10130_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_99_fu_10125_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1412_fu_10159_p3() {
    tmp_1412_fu_10159_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_101_fu_10154_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1413_fu_10173_p3() {
    tmp_1413_fu_10173_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_100_fu_10168_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1414_fu_10187_p3() {
    tmp_1414_fu_10187_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_102_fu_10182_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1415_fu_10201_p3() {
    tmp_1415_fu_10201_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_101_fu_10196_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1416_fu_10215_p3() {
    tmp_1416_fu_10215_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_103_fu_10210_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1417_fu_10229_p3() {
    tmp_1417_fu_10229_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_102_fu_10224_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1418_fu_10243_p3() {
    tmp_1418_fu_10243_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_104_fu_10238_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1419_fu_10257_p3() {
    tmp_1419_fu_10257_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_103_fu_10252_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1420_fu_10271_p3() {
    tmp_1420_fu_10271_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_105_fu_10266_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1421_fu_10285_p3() {
    tmp_1421_fu_10285_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_104_fu_10280_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1422_fu_10299_p3() {
    tmp_1422_fu_10299_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_106_fu_10294_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1423_fu_10313_p3() {
    tmp_1423_fu_10313_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_105_fu_10308_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1424_fu_10327_p3() {
    tmp_1424_fu_10327_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_107_fu_10322_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1425_fu_10341_p3() {
    tmp_1425_fu_10341_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_106_fu_10336_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1426_fu_10355_p3() {
    tmp_1426_fu_10355_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_108_fu_10350_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1427_fu_10369_p3() {
    tmp_1427_fu_10369_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_107_fu_10364_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1428_fu_10383_p3() {
    tmp_1428_fu_10383_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_109_fu_10378_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1429_fu_10397_p3() {
    tmp_1429_fu_10397_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_108_fu_10392_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1430_fu_10411_p3() {
    tmp_1430_fu_10411_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_110_fu_10406_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1431_fu_10425_p3() {
    tmp_1431_fu_10425_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_109_fu_10420_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1432_fu_10439_p3() {
    tmp_1432_fu_10439_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_111_fu_10434_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1433_fu_10453_p3() {
    tmp_1433_fu_10453_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_110_fu_10448_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1434_fu_10467_p3() {
    tmp_1434_fu_10467_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_112_fu_10462_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1435_fu_10481_p3() {
    tmp_1435_fu_10481_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_111_fu_10476_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1436_fu_10495_p3() {
    tmp_1436_fu_10495_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_113_fu_10490_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1437_fu_10509_p3() {
    tmp_1437_fu_10509_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_112_fu_10504_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1438_fu_10523_p3() {
    tmp_1438_fu_10523_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_114_fu_10518_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1439_fu_10537_p3() {
    tmp_1439_fu_10537_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_113_fu_10532_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1440_fu_10566_p3() {
    tmp_1440_fu_10566_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_115_fu_10561_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1441_fu_10580_p3() {
    tmp_1441_fu_10580_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_114_fu_10575_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1442_fu_10594_p3() {
    tmp_1442_fu_10594_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_116_fu_10589_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1443_fu_10608_p3() {
    tmp_1443_fu_10608_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_115_fu_10603_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1444_fu_10637_p3() {
    tmp_1444_fu_10637_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_117_fu_10632_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1445_fu_10651_p3() {
    tmp_1445_fu_10651_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_116_fu_10646_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1446_fu_10665_p3() {
    tmp_1446_fu_10665_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_118_fu_10660_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1447_fu_10679_p3() {
    tmp_1447_fu_10679_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_117_fu_10674_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1448_fu_10693_p3() {
    tmp_1448_fu_10693_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_119_fu_10688_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1449_fu_10707_p3() {
    tmp_1449_fu_10707_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_118_fu_10702_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1450_fu_10721_p3() {
    tmp_1450_fu_10721_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_120_fu_10716_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1451_fu_10735_p3() {
    tmp_1451_fu_10735_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_119_fu_10730_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1452_fu_10749_p3() {
    tmp_1452_fu_10749_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_121_fu_10744_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1453_fu_10763_p3() {
    tmp_1453_fu_10763_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_120_fu_10758_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1454_fu_10777_p3() {
    tmp_1454_fu_10777_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_122_fu_10772_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1455_fu_10791_p3() {
    tmp_1455_fu_10791_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_121_fu_10786_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1456_fu_10805_p3() {
    tmp_1456_fu_10805_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_123_fu_10800_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1457_fu_10819_p3() {
    tmp_1457_fu_10819_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_122_fu_10814_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1458_fu_10833_p3() {
    tmp_1458_fu_10833_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_124_fu_10828_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1459_fu_10847_p3() {
    tmp_1459_fu_10847_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_123_fu_10842_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1460_fu_10861_p3() {
    tmp_1460_fu_10861_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_125_fu_10856_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1461_fu_10875_p3() {
    tmp_1461_fu_10875_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_124_fu_10870_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1462_fu_10889_p3() {
    tmp_1462_fu_10889_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_126_fu_10884_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1463_fu_10903_p3() {
    tmp_1463_fu_10903_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_125_fu_10898_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1464_fu_10917_p3() {
    tmp_1464_fu_10917_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_127_fu_10912_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_1465_fu_10931_p3() {
    tmp_1465_fu_10931_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln62_126_fu_10926_p2.read());
}

void pqcrystals_dilithium_21::thread_tmp_452_fu_26302_p3() {
    tmp_452_fu_26302_p3 = j_7_reg_2888.read().range(8, 8);
}

void pqcrystals_dilithium_21::thread_tmp_fu_7191_p3() {
    tmp_fu_7191_p3 = esl_concat<3,8>(a_offset.read(), ap_const_lv8_0);
}

void pqcrystals_dilithium_21::thread_tmp_s_fu_7210_p3() {
    tmp_s_fu_7210_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln61_fu_7204_p2.read());
}

void pqcrystals_dilithium_21::thread_zetas_address0() {
    zetas_address0 =  (sc_lv<8>) (zext_ln58_fu_26310_p1.read());
}

void pqcrystals_dilithium_21::thread_zetas_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1601.read())) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_21::thread_zext_ln58_fu_26310_p1() {
    zext_ln58_fu_26310_p1 = esl_zext<64,32>(phi_ln58_reg_2900.read());
}

void pqcrystals_dilithium_21::thread_zext_ln61_1_fu_26350_p1() {
    zext_ln61_1_fu_26350_p1 = esl_zext<11,9>(add_ln61_fu_26344_p2.read());
}

void pqcrystals_dilithium_21::thread_zext_ln61_2_fu_26359_p1() {
    zext_ln61_2_fu_26359_p1 = esl_zext<64,11>(add_ln61_1_fu_26354_p2.read());
}

void pqcrystals_dilithium_21::thread_zext_ln61_fu_7199_p1() {
    zext_ln61_fu_7199_p1 = esl_zext<64,11>(tmp_fu_7191_p3.read());
}

void pqcrystals_dilithium_21::thread_zext_ln62_1_fu_26373_p1() {
    zext_ln62_1_fu_26373_p1 = esl_zext<64,11>(add_ln62_fu_26368_p2.read());
}

void pqcrystals_dilithium_21::thread_zext_ln62_fu_26364_p1() {
    zext_ln62_fu_26364_p1 = esl_zext<11,9>(j_0_7_reg_2912.read());
}

}

