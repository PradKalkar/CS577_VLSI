#include "pqcrystals_dilithium_25.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pqcrystals_dilithium_25::thread_sub_ln62_893_fu_26312_p0() {
    sub_ln62_893_fu_26312_p0 = reg_4110.read();
}

void pqcrystals_dilithium_25::thread_sub_ln62_893_fu_26312_p2() {
    sub_ln62_893_fu_26312_p2 = (!sub_ln62_893_fu_26312_p0.read().is_01() || !grp_pqcrystals_dilithium_26_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln62_893_fu_26312_p0.read()) - sc_biguint<32>(grp_pqcrystals_dilithium_26_fu_2922_ap_return.read()));
}

void pqcrystals_dilithium_25::thread_sub_ln62_894_fu_26341_p0() {
    sub_ln62_894_fu_26341_p0 = reg_4120.read();
}

void pqcrystals_dilithium_25::thread_sub_ln62_894_fu_26341_p2() {
    sub_ln62_894_fu_26341_p2 = (!sub_ln62_894_fu_26341_p0.read().is_01() || !grp_pqcrystals_dilithium_26_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln62_894_fu_26341_p0.read()) - sc_biguint<32>(grp_pqcrystals_dilithium_26_fu_2922_ap_return.read()));
}

void pqcrystals_dilithium_25::thread_sub_ln62_94_fu_12600_p2() {
    sub_ln62_94_fu_12600_p2 = (!reg_3878.read().is_01() || !reg_3874.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3878.read()) - sc_biguint<32>(reg_3874.read()));
}

void pqcrystals_dilithium_25::thread_sub_ln62_97_fu_12643_p2() {
    sub_ln62_97_fu_12643_p2 = (!reg_3907.read().is_01() || !reg_3903.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3907.read()) - sc_biguint<32>(reg_3903.read()));
}

void pqcrystals_dilithium_25::thread_tmp_1626_fu_7446_p3() {
    tmp_1626_fu_7446_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_1_fu_7441_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1627_fu_7460_p3() {
    tmp_1627_fu_7460_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_fu_7455_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1628_fu_7474_p3() {
    tmp_1628_fu_7474_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_2_fu_7469_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1629_fu_7488_p3() {
    tmp_1629_fu_7488_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_1_fu_7483_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1630_fu_7502_p3() {
    tmp_1630_fu_7502_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_3_fu_7497_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1631_fu_7516_p3() {
    tmp_1631_fu_7516_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_2_fu_7511_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1632_fu_7530_p3() {
    tmp_1632_fu_7530_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_4_fu_7525_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1633_fu_7544_p3() {
    tmp_1633_fu_7544_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_3_fu_7539_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1634_fu_7558_p3() {
    tmp_1634_fu_7558_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_5_fu_7553_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1635_fu_7572_p3() {
    tmp_1635_fu_7572_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_4_fu_7567_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1636_fu_7586_p3() {
    tmp_1636_fu_7586_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_6_fu_7581_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1637_fu_7600_p3() {
    tmp_1637_fu_7600_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_5_fu_7595_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1638_fu_7614_p3() {
    tmp_1638_fu_7614_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_7_fu_7609_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1639_fu_7628_p3() {
    tmp_1639_fu_7628_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_6_fu_7623_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1640_fu_7657_p3() {
    tmp_1640_fu_7657_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_8_fu_7652_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1641_fu_7671_p3() {
    tmp_1641_fu_7671_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_7_fu_7666_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1642_fu_7685_p3() {
    tmp_1642_fu_7685_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_9_fu_7680_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1643_fu_7699_p3() {
    tmp_1643_fu_7699_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_8_fu_7694_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1644_fu_7713_p3() {
    tmp_1644_fu_7713_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_10_fu_7708_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1645_fu_7727_p3() {
    tmp_1645_fu_7727_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_9_fu_7722_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1646_fu_7741_p3() {
    tmp_1646_fu_7741_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_11_fu_7736_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1647_fu_7755_p3() {
    tmp_1647_fu_7755_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_10_fu_7750_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1648_fu_7769_p3() {
    tmp_1648_fu_7769_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_12_fu_7764_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1649_fu_7783_p3() {
    tmp_1649_fu_7783_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_11_fu_7778_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1650_fu_7797_p3() {
    tmp_1650_fu_7797_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_13_fu_7792_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1651_fu_7811_p3() {
    tmp_1651_fu_7811_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_12_fu_7806_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1652_fu_7825_p3() {
    tmp_1652_fu_7825_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_14_fu_7820_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1653_fu_7839_p3() {
    tmp_1653_fu_7839_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_13_fu_7834_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1654_fu_7853_p3() {
    tmp_1654_fu_7853_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_15_fu_7848_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1655_fu_7867_p3() {
    tmp_1655_fu_7867_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_14_fu_7862_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1656_fu_7881_p3() {
    tmp_1656_fu_7881_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_16_fu_7876_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1657_fu_7895_p3() {
    tmp_1657_fu_7895_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_15_fu_7890_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1658_fu_7909_p3() {
    tmp_1658_fu_7909_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_17_fu_7904_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1659_fu_7923_p3() {
    tmp_1659_fu_7923_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_16_fu_7918_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1660_fu_7937_p3() {
    tmp_1660_fu_7937_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_18_fu_7932_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1661_fu_7951_p3() {
    tmp_1661_fu_7951_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_17_fu_7946_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1662_fu_7965_p3() {
    tmp_1662_fu_7965_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_19_fu_7960_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1663_fu_7979_p3() {
    tmp_1663_fu_7979_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_18_fu_7974_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1664_fu_7993_p3() {
    tmp_1664_fu_7993_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_20_fu_7988_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1665_fu_8007_p3() {
    tmp_1665_fu_8007_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_19_fu_8002_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1666_fu_8021_p3() {
    tmp_1666_fu_8021_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_21_fu_8016_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1667_fu_8035_p3() {
    tmp_1667_fu_8035_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_20_fu_8030_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1668_fu_8049_p3() {
    tmp_1668_fu_8049_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_22_fu_8044_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1669_fu_8063_p3() {
    tmp_1669_fu_8063_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_21_fu_8058_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1670_fu_8077_p3() {
    tmp_1670_fu_8077_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_23_fu_8072_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1671_fu_8091_p3() {
    tmp_1671_fu_8091_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_22_fu_8086_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1672_fu_8105_p3() {
    tmp_1672_fu_8105_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_24_fu_8100_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1673_fu_8119_p3() {
    tmp_1673_fu_8119_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_23_fu_8114_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1674_fu_8133_p3() {
    tmp_1674_fu_8133_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_25_fu_8128_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1675_fu_8147_p3() {
    tmp_1675_fu_8147_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_24_fu_8142_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1676_fu_8161_p3() {
    tmp_1676_fu_8161_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_26_fu_8156_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1677_fu_8175_p3() {
    tmp_1677_fu_8175_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_25_fu_8170_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1678_fu_8189_p3() {
    tmp_1678_fu_8189_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_27_fu_8184_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1679_fu_8203_p3() {
    tmp_1679_fu_8203_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_26_fu_8198_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1680_fu_8232_p3() {
    tmp_1680_fu_8232_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_28_fu_8227_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1681_fu_8246_p3() {
    tmp_1681_fu_8246_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_27_fu_8241_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1682_fu_8260_p3() {
    tmp_1682_fu_8260_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_29_fu_8255_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1683_fu_8274_p3() {
    tmp_1683_fu_8274_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_28_fu_8269_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1684_fu_8288_p3() {
    tmp_1684_fu_8288_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_30_fu_8283_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1685_fu_8302_p3() {
    tmp_1685_fu_8302_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_29_fu_8297_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1686_fu_8316_p3() {
    tmp_1686_fu_8316_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_31_fu_8311_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1687_fu_8330_p3() {
    tmp_1687_fu_8330_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_30_fu_8325_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1688_fu_8344_p3() {
    tmp_1688_fu_8344_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_32_fu_8339_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1689_fu_8358_p3() {
    tmp_1689_fu_8358_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_31_fu_8353_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1690_fu_8372_p3() {
    tmp_1690_fu_8372_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_33_fu_8367_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1691_fu_8386_p3() {
    tmp_1691_fu_8386_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_32_fu_8381_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1692_fu_8415_p3() {
    tmp_1692_fu_8415_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_34_fu_8410_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1693_fu_8429_p3() {
    tmp_1693_fu_8429_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_33_fu_8424_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1694_fu_8443_p3() {
    tmp_1694_fu_8443_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_35_fu_8438_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1695_fu_8457_p3() {
    tmp_1695_fu_8457_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_34_fu_8452_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1696_fu_8486_p3() {
    tmp_1696_fu_8486_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_36_fu_8481_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1697_fu_8500_p3() {
    tmp_1697_fu_8500_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_35_fu_8495_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1698_fu_8514_p3() {
    tmp_1698_fu_8514_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_37_fu_8509_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1699_fu_8528_p3() {
    tmp_1699_fu_8528_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_36_fu_8523_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1700_fu_8542_p3() {
    tmp_1700_fu_8542_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_38_fu_8537_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1701_fu_8556_p3() {
    tmp_1701_fu_8556_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_37_fu_8551_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1702_fu_8585_p3() {
    tmp_1702_fu_8585_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_39_fu_8580_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1703_fu_8599_p3() {
    tmp_1703_fu_8599_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_38_fu_8594_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1704_fu_8613_p3() {
    tmp_1704_fu_8613_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_40_fu_8608_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1705_fu_8627_p3() {
    tmp_1705_fu_8627_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_39_fu_8622_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1706_fu_8641_p3() {
    tmp_1706_fu_8641_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_41_fu_8636_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1707_fu_8655_p3() {
    tmp_1707_fu_8655_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_40_fu_8650_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1708_fu_8669_p3() {
    tmp_1708_fu_8669_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_42_fu_8664_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1709_fu_8683_p3() {
    tmp_1709_fu_8683_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_41_fu_8678_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1710_fu_8697_p3() {
    tmp_1710_fu_8697_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_43_fu_8692_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1711_fu_8711_p3() {
    tmp_1711_fu_8711_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_42_fu_8706_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1712_fu_8725_p3() {
    tmp_1712_fu_8725_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_44_fu_8720_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1713_fu_8739_p3() {
    tmp_1713_fu_8739_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_43_fu_8734_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1714_fu_8753_p3() {
    tmp_1714_fu_8753_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_45_fu_8748_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1715_fu_8767_p3() {
    tmp_1715_fu_8767_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_44_fu_8762_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1716_fu_8781_p3() {
    tmp_1716_fu_8781_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_46_fu_8776_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1717_fu_8795_p3() {
    tmp_1717_fu_8795_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_45_fu_8790_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1718_fu_8809_p3() {
    tmp_1718_fu_8809_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_47_fu_8804_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1719_fu_8823_p3() {
    tmp_1719_fu_8823_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_46_fu_8818_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1720_fu_8837_p3() {
    tmp_1720_fu_8837_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_48_fu_8832_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1721_fu_8851_p3() {
    tmp_1721_fu_8851_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_47_fu_8846_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1722_fu_8865_p3() {
    tmp_1722_fu_8865_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_49_fu_8860_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1723_fu_8879_p3() {
    tmp_1723_fu_8879_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_48_fu_8874_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1724_fu_8893_p3() {
    tmp_1724_fu_8893_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_50_fu_8888_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1725_fu_8907_p3() {
    tmp_1725_fu_8907_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_49_fu_8902_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1726_fu_8921_p3() {
    tmp_1726_fu_8921_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_51_fu_8916_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1727_fu_8935_p3() {
    tmp_1727_fu_8935_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_50_fu_8930_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1728_fu_8949_p3() {
    tmp_1728_fu_8949_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_52_fu_8944_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1729_fu_8963_p3() {
    tmp_1729_fu_8963_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_51_fu_8958_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1730_fu_8977_p3() {
    tmp_1730_fu_8977_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_53_fu_8972_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1731_fu_8991_p3() {
    tmp_1731_fu_8991_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_52_fu_8986_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1732_fu_9005_p3() {
    tmp_1732_fu_9005_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_54_fu_9000_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1733_fu_9019_p3() {
    tmp_1733_fu_9019_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_53_fu_9014_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1734_fu_9033_p3() {
    tmp_1734_fu_9033_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_55_fu_9028_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1735_fu_9047_p3() {
    tmp_1735_fu_9047_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_54_fu_9042_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1736_fu_9061_p3() {
    tmp_1736_fu_9061_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_56_fu_9056_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1737_fu_9075_p3() {
    tmp_1737_fu_9075_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_55_fu_9070_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1738_fu_9089_p3() {
    tmp_1738_fu_9089_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_57_fu_9084_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1739_fu_9103_p3() {
    tmp_1739_fu_9103_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_56_fu_9098_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1740_fu_9117_p3() {
    tmp_1740_fu_9117_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_58_fu_9112_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1741_fu_9131_p3() {
    tmp_1741_fu_9131_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_57_fu_9126_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1742_fu_9145_p3() {
    tmp_1742_fu_9145_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_59_fu_9140_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1743_fu_9159_p3() {
    tmp_1743_fu_9159_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_58_fu_9154_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1744_fu_9173_p3() {
    tmp_1744_fu_9173_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_60_fu_9168_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1745_fu_9187_p3() {
    tmp_1745_fu_9187_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_59_fu_9182_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1746_fu_9201_p3() {
    tmp_1746_fu_9201_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_61_fu_9196_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1747_fu_9215_p3() {
    tmp_1747_fu_9215_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_60_fu_9210_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1748_fu_9229_p3() {
    tmp_1748_fu_9229_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_62_fu_9224_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1749_fu_9243_p3() {
    tmp_1749_fu_9243_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_61_fu_9238_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1750_fu_9257_p3() {
    tmp_1750_fu_9257_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_63_fu_9252_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1751_fu_9271_p3() {
    tmp_1751_fu_9271_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_62_fu_9266_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1752_fu_9285_p3() {
    tmp_1752_fu_9285_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_64_fu_9280_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1753_fu_9299_p3() {
    tmp_1753_fu_9299_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_63_fu_9294_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1754_fu_9313_p3() {
    tmp_1754_fu_9313_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_65_fu_9308_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1755_fu_9327_p3() {
    tmp_1755_fu_9327_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_64_fu_9322_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1756_fu_9341_p3() {
    tmp_1756_fu_9341_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_66_fu_9336_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1757_fu_9355_p3() {
    tmp_1757_fu_9355_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_65_fu_9350_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1758_fu_9369_p3() {
    tmp_1758_fu_9369_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_67_fu_9364_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1759_fu_9383_p3() {
    tmp_1759_fu_9383_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_66_fu_9378_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1760_fu_9397_p3() {
    tmp_1760_fu_9397_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_68_fu_9392_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1761_fu_9411_p3() {
    tmp_1761_fu_9411_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_67_fu_9406_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1762_fu_9425_p3() {
    tmp_1762_fu_9425_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_69_fu_9420_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1763_fu_9439_p3() {
    tmp_1763_fu_9439_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_68_fu_9434_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1764_fu_9453_p3() {
    tmp_1764_fu_9453_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_70_fu_9448_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1765_fu_9467_p3() {
    tmp_1765_fu_9467_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_69_fu_9462_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1766_fu_9481_p3() {
    tmp_1766_fu_9481_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_71_fu_9476_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1767_fu_9495_p3() {
    tmp_1767_fu_9495_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_70_fu_9490_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1768_fu_9509_p3() {
    tmp_1768_fu_9509_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_72_fu_9504_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1769_fu_9523_p3() {
    tmp_1769_fu_9523_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_71_fu_9518_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1770_fu_9537_p3() {
    tmp_1770_fu_9537_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_73_fu_9532_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1771_fu_9551_p3() {
    tmp_1771_fu_9551_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_72_fu_9546_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1772_fu_9565_p3() {
    tmp_1772_fu_9565_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_74_fu_9560_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1773_fu_9579_p3() {
    tmp_1773_fu_9579_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_73_fu_9574_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1774_fu_9593_p3() {
    tmp_1774_fu_9593_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_75_fu_9588_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1775_fu_9607_p3() {
    tmp_1775_fu_9607_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_74_fu_9602_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1776_fu_9621_p3() {
    tmp_1776_fu_9621_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_76_fu_9616_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1777_fu_9635_p3() {
    tmp_1777_fu_9635_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_75_fu_9630_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1778_fu_9649_p3() {
    tmp_1778_fu_9649_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_77_fu_9644_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1779_fu_9663_p3() {
    tmp_1779_fu_9663_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_76_fu_9658_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1780_fu_9677_p3() {
    tmp_1780_fu_9677_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_78_fu_9672_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1781_fu_9691_p3() {
    tmp_1781_fu_9691_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_77_fu_9686_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1782_fu_9705_p3() {
    tmp_1782_fu_9705_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_79_fu_9700_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1783_fu_9719_p3() {
    tmp_1783_fu_9719_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_78_fu_9714_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1784_fu_9733_p3() {
    tmp_1784_fu_9733_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_80_fu_9728_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1785_fu_9747_p3() {
    tmp_1785_fu_9747_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_79_fu_9742_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1786_fu_9761_p3() {
    tmp_1786_fu_9761_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_81_fu_9756_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1787_fu_9775_p3() {
    tmp_1787_fu_9775_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_80_fu_9770_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1788_fu_9789_p3() {
    tmp_1788_fu_9789_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_82_fu_9784_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1789_fu_9803_p3() {
    tmp_1789_fu_9803_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_81_fu_9798_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1790_fu_9817_p3() {
    tmp_1790_fu_9817_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_83_fu_9812_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1791_fu_9831_p3() {
    tmp_1791_fu_9831_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_82_fu_9826_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1792_fu_9845_p3() {
    tmp_1792_fu_9845_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_84_fu_9840_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1793_fu_9859_p3() {
    tmp_1793_fu_9859_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_83_fu_9854_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1794_fu_9888_p3() {
    tmp_1794_fu_9888_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_85_fu_9883_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1795_fu_9902_p3() {
    tmp_1795_fu_9902_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_84_fu_9897_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1796_fu_9916_p3() {
    tmp_1796_fu_9916_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_86_fu_9911_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1797_fu_9930_p3() {
    tmp_1797_fu_9930_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_85_fu_9925_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1798_fu_9944_p3() {
    tmp_1798_fu_9944_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_87_fu_9939_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1799_fu_9958_p3() {
    tmp_1799_fu_9958_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_86_fu_9953_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1800_fu_9972_p3() {
    tmp_1800_fu_9972_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_88_fu_9967_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1801_fu_9986_p3() {
    tmp_1801_fu_9986_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_87_fu_9981_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1802_fu_10000_p3() {
    tmp_1802_fu_10000_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_89_fu_9995_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1803_fu_10014_p3() {
    tmp_1803_fu_10014_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_88_fu_10009_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1804_fu_10028_p3() {
    tmp_1804_fu_10028_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_90_fu_10023_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1805_fu_10042_p3() {
    tmp_1805_fu_10042_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_89_fu_10037_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1806_fu_10056_p3() {
    tmp_1806_fu_10056_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_91_fu_10051_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1807_fu_10070_p3() {
    tmp_1807_fu_10070_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_90_fu_10065_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1808_fu_10084_p3() {
    tmp_1808_fu_10084_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_92_fu_10079_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1809_fu_10098_p3() {
    tmp_1809_fu_10098_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_91_fu_10093_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1810_fu_10112_p3() {
    tmp_1810_fu_10112_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_93_fu_10107_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1811_fu_10126_p3() {
    tmp_1811_fu_10126_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_92_fu_10121_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1812_fu_10140_p3() {
    tmp_1812_fu_10140_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_94_fu_10135_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1813_fu_10154_p3() {
    tmp_1813_fu_10154_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_93_fu_10149_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1814_fu_10183_p3() {
    tmp_1814_fu_10183_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_95_fu_10178_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1815_fu_10197_p3() {
    tmp_1815_fu_10197_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_94_fu_10192_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1816_fu_10211_p3() {
    tmp_1816_fu_10211_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_96_fu_10206_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1817_fu_10225_p3() {
    tmp_1817_fu_10225_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_95_fu_10220_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1818_fu_10239_p3() {
    tmp_1818_fu_10239_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_97_fu_10234_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1819_fu_10253_p3() {
    tmp_1819_fu_10253_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_96_fu_10248_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1820_fu_10282_p3() {
    tmp_1820_fu_10282_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_98_fu_10277_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1821_fu_10296_p3() {
    tmp_1821_fu_10296_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_97_fu_10291_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1822_fu_10310_p3() {
    tmp_1822_fu_10310_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_99_fu_10305_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1823_fu_10324_p3() {
    tmp_1823_fu_10324_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_98_fu_10319_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1824_fu_10338_p3() {
    tmp_1824_fu_10338_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_100_fu_10333_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1825_fu_10352_p3() {
    tmp_1825_fu_10352_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_99_fu_10347_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1826_fu_10366_p3() {
    tmp_1826_fu_10366_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_101_fu_10361_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1827_fu_10380_p3() {
    tmp_1827_fu_10380_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_100_fu_10375_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1828_fu_10394_p3() {
    tmp_1828_fu_10394_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_102_fu_10389_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1829_fu_10408_p3() {
    tmp_1829_fu_10408_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_101_fu_10403_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1830_fu_10422_p3() {
    tmp_1830_fu_10422_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_103_fu_10417_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1831_fu_10436_p3() {
    tmp_1831_fu_10436_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_102_fu_10431_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1832_fu_10450_p3() {
    tmp_1832_fu_10450_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_104_fu_10445_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1833_fu_10464_p3() {
    tmp_1833_fu_10464_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_103_fu_10459_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1834_fu_10478_p3() {
    tmp_1834_fu_10478_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_105_fu_10473_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1835_fu_10492_p3() {
    tmp_1835_fu_10492_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_104_fu_10487_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1836_fu_10506_p3() {
    tmp_1836_fu_10506_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_106_fu_10501_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1837_fu_10520_p3() {
    tmp_1837_fu_10520_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_105_fu_10515_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1838_fu_10549_p3() {
    tmp_1838_fu_10549_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_107_fu_10544_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1839_fu_10563_p3() {
    tmp_1839_fu_10563_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_106_fu_10558_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1840_fu_10577_p3() {
    tmp_1840_fu_10577_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_108_fu_10572_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1841_fu_10591_p3() {
    tmp_1841_fu_10591_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_107_fu_10586_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1842_fu_10605_p3() {
    tmp_1842_fu_10605_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_109_fu_10600_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1843_fu_10619_p3() {
    tmp_1843_fu_10619_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_108_fu_10614_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1844_fu_10633_p3() {
    tmp_1844_fu_10633_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_110_fu_10628_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1845_fu_10647_p3() {
    tmp_1845_fu_10647_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_109_fu_10642_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1846_fu_10661_p3() {
    tmp_1846_fu_10661_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_111_fu_10656_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1847_fu_10675_p3() {
    tmp_1847_fu_10675_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_110_fu_10670_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1848_fu_10689_p3() {
    tmp_1848_fu_10689_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_112_fu_10684_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1849_fu_10703_p3() {
    tmp_1849_fu_10703_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_111_fu_10698_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1850_fu_10717_p3() {
    tmp_1850_fu_10717_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_113_fu_10712_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1851_fu_10731_p3() {
    tmp_1851_fu_10731_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_112_fu_10726_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1852_fu_10745_p3() {
    tmp_1852_fu_10745_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_114_fu_10740_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1853_fu_10759_p3() {
    tmp_1853_fu_10759_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_113_fu_10754_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1854_fu_10788_p3() {
    tmp_1854_fu_10788_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_115_fu_10783_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1855_fu_10802_p3() {
    tmp_1855_fu_10802_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_114_fu_10797_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1856_fu_10816_p3() {
    tmp_1856_fu_10816_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_116_fu_10811_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1857_fu_10830_p3() {
    tmp_1857_fu_10830_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_115_fu_10825_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1858_fu_10844_p3() {
    tmp_1858_fu_10844_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_117_fu_10839_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1859_fu_10858_p3() {
    tmp_1859_fu_10858_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_116_fu_10853_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1860_fu_10872_p3() {
    tmp_1860_fu_10872_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_118_fu_10867_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1861_fu_10886_p3() {
    tmp_1861_fu_10886_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_117_fu_10881_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1862_fu_10900_p3() {
    tmp_1862_fu_10900_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_119_fu_10895_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1863_fu_10914_p3() {
    tmp_1863_fu_10914_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_118_fu_10909_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1864_fu_10928_p3() {
    tmp_1864_fu_10928_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_120_fu_10923_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1865_fu_10942_p3() {
    tmp_1865_fu_10942_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_119_fu_10937_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1866_fu_10956_p3() {
    tmp_1866_fu_10956_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_121_fu_10951_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1867_fu_10970_p3() {
    tmp_1867_fu_10970_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_120_fu_10965_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1868_fu_10984_p3() {
    tmp_1868_fu_10984_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_122_fu_10979_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1869_fu_10998_p3() {
    tmp_1869_fu_10998_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_121_fu_10993_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1870_fu_11012_p3() {
    tmp_1870_fu_11012_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_123_fu_11007_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1871_fu_11026_p3() {
    tmp_1871_fu_11026_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_122_fu_11021_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1872_fu_11040_p3() {
    tmp_1872_fu_11040_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_124_fu_11035_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1873_fu_11054_p3() {
    tmp_1873_fu_11054_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_123_fu_11049_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1874_fu_11068_p3() {
    tmp_1874_fu_11068_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_125_fu_11063_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1875_fu_11082_p3() {
    tmp_1875_fu_11082_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_124_fu_11077_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1876_fu_11096_p3() {
    tmp_1876_fu_11096_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_126_fu_11091_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1877_fu_11110_p3() {
    tmp_1877_fu_11110_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_125_fu_11105_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1878_fu_11124_p3() {
    tmp_1878_fu_11124_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_127_fu_11119_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_1879_fu_11138_p3() {
    tmp_1879_fu_11138_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln62_126_fu_11133_p2.read());
}

void pqcrystals_dilithium_25::thread_tmp_646_fu_26385_p3() {
    tmp_646_fu_26385_p3 = j_7_reg_2888.read().range(8, 8);
}

void pqcrystals_dilithium_25::thread_tmp_fu_7413_p3() {
    tmp_fu_7413_p3 = esl_concat<4,8>(a_offset.read(), ap_const_lv8_0);
}

void pqcrystals_dilithium_25::thread_tmp_s_fu_7432_p3() {
    tmp_s_fu_7432_p3 = esl_concat<52,12>(ap_const_lv52_0, or_ln61_fu_7426_p2.read());
}

void pqcrystals_dilithium_25::thread_zetas_address0() {
    zetas_address0 =  (sc_lv<8>) (zext_ln58_fu_26393_p1.read());
}

void pqcrystals_dilithium_25::thread_zetas_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1601.read())) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void pqcrystals_dilithium_25::thread_zext_ln58_fu_26393_p1() {
    zext_ln58_fu_26393_p1 = esl_zext<64,32>(phi_ln58_reg_2900.read());
}

void pqcrystals_dilithium_25::thread_zext_ln61_1_fu_26433_p1() {
    zext_ln61_1_fu_26433_p1 = esl_zext<12,9>(add_ln61_fu_26427_p2.read());
}

void pqcrystals_dilithium_25::thread_zext_ln61_2_fu_26442_p1() {
    zext_ln61_2_fu_26442_p1 = esl_zext<64,12>(add_ln61_1_fu_26437_p2.read());
}

void pqcrystals_dilithium_25::thread_zext_ln61_fu_7421_p1() {
    zext_ln61_fu_7421_p1 = esl_zext<64,12>(tmp_fu_7413_p3.read());
}

void pqcrystals_dilithium_25::thread_zext_ln62_1_fu_26456_p1() {
    zext_ln62_1_fu_26456_p1 = esl_zext<64,12>(add_ln62_fu_26451_p2.read());
}

void pqcrystals_dilithium_25::thread_zext_ln62_fu_26447_p1() {
    zext_ln62_fu_26447_p1 = esl_zext<12,9>(j_0_7_reg_2912.read());
}

}

