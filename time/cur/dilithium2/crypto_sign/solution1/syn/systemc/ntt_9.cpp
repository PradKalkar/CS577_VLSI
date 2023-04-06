#include "ntt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ntt::thread_sub_ln60_761_fu_24247_p2() {
    sub_ln60_761_fu_24247_p2 = (!sub_ln60_761_fu_24247_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_761_fu_24247_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_762_fu_24276_p0() {
    sub_ln60_762_fu_24276_p0 = reg_4129.read();
}

void ntt::thread_sub_ln60_762_fu_24276_p2() {
    sub_ln60_762_fu_24276_p2 = (!sub_ln60_762_fu_24276_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_762_fu_24276_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_763_fu_24305_p0() {
    sub_ln60_763_fu_24305_p0 = reg_4139.read();
}

void ntt::thread_sub_ln60_763_fu_24305_p2() {
    sub_ln60_763_fu_24305_p2 = (!sub_ln60_763_fu_24305_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_763_fu_24305_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_764_fu_24334_p0() {
    sub_ln60_764_fu_24334_p0 = reg_4149.read();
}

void ntt::thread_sub_ln60_764_fu_24334_p2() {
    sub_ln60_764_fu_24334_p2 = (!sub_ln60_764_fu_24334_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_764_fu_24334_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_765_fu_24363_p0() {
    sub_ln60_765_fu_24363_p0 = reg_4159.read();
}

void ntt::thread_sub_ln60_765_fu_24363_p2() {
    sub_ln60_765_fu_24363_p2 = (!sub_ln60_765_fu_24363_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_765_fu_24363_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_766_fu_24392_p0() {
    sub_ln60_766_fu_24392_p0 = reg_4169.read();
}

void ntt::thread_sub_ln60_766_fu_24392_p2() {
    sub_ln60_766_fu_24392_p2 = (!sub_ln60_766_fu_24392_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_766_fu_24392_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_767_fu_24421_p0() {
    sub_ln60_767_fu_24421_p0 = reg_4179.read();
}

void ntt::thread_sub_ln60_767_fu_24421_p2() {
    sub_ln60_767_fu_24421_p2 = (!sub_ln60_767_fu_24421_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_767_fu_24421_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_783_fu_24810_p2() {
    sub_ln60_783_fu_24810_p2 = (!reg_3085.read().is_01() || !reg_3011.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3085.read()) - sc_biguint<32>(reg_3011.read()));
}

void ntt::thread_sub_ln60_78_fu_12057_p2() {
    sub_ln60_78_fu_12057_p2 = (!reg_3705.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3705.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_790_fu_24914_p0() {
    sub_ln60_790_fu_24914_p0 = reg_3150.read();
}

void ntt::thread_sub_ln60_790_fu_24914_p2() {
    sub_ln60_790_fu_24914_p2 = (!sub_ln60_790_fu_24914_p0.read().is_01() || !reg_3170.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_790_fu_24914_p0.read()) - sc_biguint<32>(reg_3170.read()));
}

void ntt::thread_sub_ln60_796_fu_25018_p0() {
    sub_ln60_796_fu_25018_p0 = reg_3218.read();
}

void ntt::thread_sub_ln60_796_fu_25018_p2() {
    sub_ln60_796_fu_25018_p2 = (!sub_ln60_796_fu_25018_p0.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_796_fu_25018_p0.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_80_fu_12100_p2() {
    sub_ln60_80_fu_12100_p2 = (!reg_3725.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3725.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_811_fu_25242_p2() {
    sub_ln60_811_fu_25242_p2 = (!reg_3371.read().is_01() || !reg_3189.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3371.read()) - sc_biguint<32>(reg_3189.read()));
}

void ntt::thread_sub_ln60_82_fu_12143_p2() {
    sub_ln60_82_fu_12143_p2 = (!reg_3745.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3745.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_84_fu_12186_p2() {
    sub_ln60_84_fu_12186_p2 = (!reg_3765.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3765.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_861_fu_25961_p2() {
    sub_ln60_861_fu_25961_p2 = (!reg_3844.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3844.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_862_fu_25975_p0() {
    sub_ln60_862_fu_25975_p0 = reg_3849.read();
}

void ntt::thread_sub_ln60_862_fu_25975_p2() {
    sub_ln60_862_fu_25975_p2 = (!sub_ln60_862_fu_25975_p0.read().is_01() || !reg_3258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_862_fu_25975_p0.read()) - sc_biguint<32>(reg_3258.read()));
}

void ntt::thread_sub_ln60_86_fu_12229_p2() {
    sub_ln60_86_fu_12229_p2 = (!reg_3785.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3785.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_872_fu_26124_p2() {
    sub_ln60_872_fu_26124_p2 = (!reg_3953.read().is_01() || !reg_3267.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3953.read()) - sc_biguint<32>(reg_3267.read()));
}

void ntt::thread_sub_ln60_873_fu_26153_p2() {
    sub_ln60_873_fu_26153_p2 = (!reg_3963.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3963.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_875_fu_26182_p0() {
    sub_ln60_875_fu_26182_p0 = reg_3978.read();
}

void ntt::thread_sub_ln60_875_fu_26182_p2() {
    sub_ln60_875_fu_26182_p2 = (!sub_ln60_875_fu_26182_p0.read().is_01() || !reg_3671.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln60_875_fu_26182_p0.read()) - sc_biguint<32>(reg_3671.read()));
}

void ntt::thread_sub_ln60_876_fu_26196_p2() {
    sub_ln60_876_fu_26196_p2 = (!reg_3983.read().is_01() || !reg_3810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3983.read()) - sc_biguint<32>(reg_3810.read()));
}

void ntt::thread_sub_ln60_879_fu_26255_p2() {
    sub_ln60_879_fu_26255_p2 = (!reg_4024.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_4024.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_889_fu_26419_p2() {
    sub_ln60_889_fu_26419_p2 = (!reg_4124.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_4124.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_88_fu_12272_p2() {
    sub_ln60_88_fu_12272_p2 = (!reg_3805.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3805.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_891_fu_26463_p2() {
    sub_ln60_891_fu_26463_p2 = (!reg_4144.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_4144.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_893_fu_26507_p2() {
    sub_ln60_893_fu_26507_p2 = (!reg_4164.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_4164.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_895_fu_26551_p2() {
    sub_ln60_895_fu_26551_p2 = (!reg_4184.read().is_01() || !grp_montgomery_reduce_fu_2922_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_4184.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2922_ap_return.read()));
}

void ntt::thread_sub_ln60_89_fu_12285_p2() {
    sub_ln60_89_fu_12285_p2 = (!reg_3814.read().is_01() || !reg_3810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3814.read()) - sc_biguint<32>(reg_3810.read()));
}

void ntt::thread_sub_ln60_8_fu_10947_p2() {
    sub_ln60_8_fu_10947_p2 = (!reg_3015.read().is_01() || !reg_3011.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3015.read()) - sc_biguint<32>(reg_3011.read()));
}

void ntt::thread_sub_ln60_96_fu_12433_p2() {
    sub_ln60_96_fu_12433_p2 = (!reg_3884.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3884.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_sub_ln60_98_fu_12491_p2() {
    sub_ln60_98_fu_12491_p2 = (!reg_3904.read().is_01() || !grp_montgomery_reduce_fu_2927_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_3904.read()) - sc_biguint<32>(grp_montgomery_reduce_fu_2927_ap_return.read()));
}

void ntt::thread_tmp_2620_fu_7141_p3() {
    tmp_2620_fu_7141_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_1_fu_7136_p2.read());
}

void ntt::thread_tmp_2621_fu_7155_p3() {
    tmp_2621_fu_7155_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_fu_7150_p2.read());
}

void ntt::thread_tmp_2622_fu_7169_p3() {
    tmp_2622_fu_7169_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_2_fu_7164_p2.read());
}

void ntt::thread_tmp_2623_fu_7183_p3() {
    tmp_2623_fu_7183_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_1_fu_7178_p2.read());
}

void ntt::thread_tmp_2624_fu_7197_p3() {
    tmp_2624_fu_7197_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_3_fu_7192_p2.read());
}

void ntt::thread_tmp_2625_fu_7211_p3() {
    tmp_2625_fu_7211_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_2_fu_7206_p2.read());
}

void ntt::thread_tmp_2626_fu_7225_p3() {
    tmp_2626_fu_7225_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_4_fu_7220_p2.read());
}

void ntt::thread_tmp_2627_fu_7239_p3() {
    tmp_2627_fu_7239_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_3_fu_7234_p2.read());
}

void ntt::thread_tmp_2628_fu_7253_p3() {
    tmp_2628_fu_7253_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_5_fu_7248_p2.read());
}

void ntt::thread_tmp_2629_fu_7267_p3() {
    tmp_2629_fu_7267_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_4_fu_7262_p2.read());
}

void ntt::thread_tmp_2630_fu_7281_p3() {
    tmp_2630_fu_7281_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_6_fu_7276_p2.read());
}

void ntt::thread_tmp_2631_fu_7295_p3() {
    tmp_2631_fu_7295_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_5_fu_7290_p2.read());
}

void ntt::thread_tmp_2632_fu_7309_p3() {
    tmp_2632_fu_7309_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_7_fu_7304_p2.read());
}

void ntt::thread_tmp_2633_fu_7323_p3() {
    tmp_2633_fu_7323_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_6_fu_7318_p2.read());
}

void ntt::thread_tmp_2634_fu_7337_p3() {
    tmp_2634_fu_7337_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_8_fu_7332_p2.read());
}

void ntt::thread_tmp_2635_fu_7351_p3() {
    tmp_2635_fu_7351_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_7_fu_7346_p2.read());
}

void ntt::thread_tmp_2636_fu_7380_p3() {
    tmp_2636_fu_7380_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_9_fu_7375_p2.read());
}

void ntt::thread_tmp_2637_fu_7394_p3() {
    tmp_2637_fu_7394_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_8_fu_7389_p2.read());
}

void ntt::thread_tmp_2638_fu_7408_p3() {
    tmp_2638_fu_7408_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_10_fu_7403_p2.read());
}

void ntt::thread_tmp_2639_fu_7422_p3() {
    tmp_2639_fu_7422_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_9_fu_7417_p2.read());
}

void ntt::thread_tmp_2640_fu_7436_p3() {
    tmp_2640_fu_7436_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_11_fu_7431_p2.read());
}

void ntt::thread_tmp_2641_fu_7450_p3() {
    tmp_2641_fu_7450_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_10_fu_7445_p2.read());
}

void ntt::thread_tmp_2642_fu_7464_p3() {
    tmp_2642_fu_7464_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_12_fu_7459_p2.read());
}

void ntt::thread_tmp_2643_fu_7478_p3() {
    tmp_2643_fu_7478_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_11_fu_7473_p2.read());
}

void ntt::thread_tmp_2644_fu_7492_p3() {
    tmp_2644_fu_7492_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_13_fu_7487_p2.read());
}

void ntt::thread_tmp_2645_fu_7506_p3() {
    tmp_2645_fu_7506_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_12_fu_7501_p2.read());
}

void ntt::thread_tmp_2646_fu_7520_p3() {
    tmp_2646_fu_7520_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_14_fu_7515_p2.read());
}

void ntt::thread_tmp_2647_fu_7534_p3() {
    tmp_2647_fu_7534_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_13_fu_7529_p2.read());
}

void ntt::thread_tmp_2648_fu_7548_p3() {
    tmp_2648_fu_7548_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_15_fu_7543_p2.read());
}

void ntt::thread_tmp_2649_fu_7562_p3() {
    tmp_2649_fu_7562_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_14_fu_7557_p2.read());
}

void ntt::thread_tmp_2650_fu_7576_p3() {
    tmp_2650_fu_7576_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_16_fu_7571_p2.read());
}

void ntt::thread_tmp_2651_fu_7590_p3() {
    tmp_2651_fu_7590_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_15_fu_7585_p2.read());
}

void ntt::thread_tmp_2652_fu_7604_p3() {
    tmp_2652_fu_7604_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_17_fu_7599_p2.read());
}

void ntt::thread_tmp_2653_fu_7618_p3() {
    tmp_2653_fu_7618_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_16_fu_7613_p2.read());
}

void ntt::thread_tmp_2654_fu_7632_p3() {
    tmp_2654_fu_7632_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_18_fu_7627_p2.read());
}

void ntt::thread_tmp_2655_fu_7646_p3() {
    tmp_2655_fu_7646_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_17_fu_7641_p2.read());
}

void ntt::thread_tmp_2656_fu_7660_p3() {
    tmp_2656_fu_7660_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_19_fu_7655_p2.read());
}

void ntt::thread_tmp_2657_fu_7674_p3() {
    tmp_2657_fu_7674_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_18_fu_7669_p2.read());
}

void ntt::thread_tmp_2658_fu_7688_p3() {
    tmp_2658_fu_7688_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_20_fu_7683_p2.read());
}

void ntt::thread_tmp_2659_fu_7702_p3() {
    tmp_2659_fu_7702_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_19_fu_7697_p2.read());
}

void ntt::thread_tmp_2660_fu_7716_p3() {
    tmp_2660_fu_7716_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_21_fu_7711_p2.read());
}

void ntt::thread_tmp_2661_fu_7730_p3() {
    tmp_2661_fu_7730_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_20_fu_7725_p2.read());
}

void ntt::thread_tmp_2662_fu_7744_p3() {
    tmp_2662_fu_7744_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_22_fu_7739_p2.read());
}

void ntt::thread_tmp_2663_fu_7758_p3() {
    tmp_2663_fu_7758_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_21_fu_7753_p2.read());
}

void ntt::thread_tmp_2664_fu_7772_p3() {
    tmp_2664_fu_7772_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_23_fu_7767_p2.read());
}

void ntt::thread_tmp_2665_fu_7786_p3() {
    tmp_2665_fu_7786_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_22_fu_7781_p2.read());
}

void ntt::thread_tmp_2666_fu_7800_p3() {
    tmp_2666_fu_7800_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_24_fu_7795_p2.read());
}

void ntt::thread_tmp_2667_fu_7814_p3() {
    tmp_2667_fu_7814_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_23_fu_7809_p2.read());
}

void ntt::thread_tmp_2668_fu_7843_p3() {
    tmp_2668_fu_7843_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_25_fu_7838_p2.read());
}

void ntt::thread_tmp_2669_fu_7857_p3() {
    tmp_2669_fu_7857_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_24_fu_7852_p2.read());
}

void ntt::thread_tmp_2670_fu_7871_p3() {
    tmp_2670_fu_7871_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_26_fu_7866_p2.read());
}

void ntt::thread_tmp_2671_fu_7885_p3() {
    tmp_2671_fu_7885_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_25_fu_7880_p2.read());
}

void ntt::thread_tmp_2672_fu_7914_p3() {
    tmp_2672_fu_7914_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_27_fu_7909_p2.read());
}

void ntt::thread_tmp_2673_fu_7928_p3() {
    tmp_2673_fu_7928_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_26_fu_7923_p2.read());
}

void ntt::thread_tmp_2674_fu_7942_p3() {
    tmp_2674_fu_7942_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_28_fu_7937_p2.read());
}

void ntt::thread_tmp_2675_fu_7956_p3() {
    tmp_2675_fu_7956_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_27_fu_7951_p2.read());
}

void ntt::thread_tmp_2676_fu_7970_p3() {
    tmp_2676_fu_7970_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_29_fu_7965_p2.read());
}

void ntt::thread_tmp_2677_fu_7984_p3() {
    tmp_2677_fu_7984_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_28_fu_7979_p2.read());
}

void ntt::thread_tmp_2678_fu_7998_p3() {
    tmp_2678_fu_7998_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_30_fu_7993_p2.read());
}

void ntt::thread_tmp_2679_fu_8012_p3() {
    tmp_2679_fu_8012_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_29_fu_8007_p2.read());
}

void ntt::thread_tmp_2680_fu_8026_p3() {
    tmp_2680_fu_8026_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_31_fu_8021_p2.read());
}

void ntt::thread_tmp_2681_fu_8040_p3() {
    tmp_2681_fu_8040_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_30_fu_8035_p2.read());
}

void ntt::thread_tmp_2682_fu_8054_p3() {
    tmp_2682_fu_8054_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_32_fu_8049_p2.read());
}

void ntt::thread_tmp_2683_fu_8068_p3() {
    tmp_2683_fu_8068_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_31_fu_8063_p2.read());
}

void ntt::thread_tmp_2684_fu_8082_p3() {
    tmp_2684_fu_8082_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_33_fu_8077_p2.read());
}

void ntt::thread_tmp_2685_fu_8096_p3() {
    tmp_2685_fu_8096_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_32_fu_8091_p2.read());
}

void ntt::thread_tmp_2686_fu_8125_p3() {
    tmp_2686_fu_8125_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_34_fu_8120_p2.read());
}

void ntt::thread_tmp_2687_fu_8139_p3() {
    tmp_2687_fu_8139_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_33_fu_8134_p2.read());
}

void ntt::thread_tmp_2688_fu_8168_p3() {
    tmp_2688_fu_8168_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_35_fu_8163_p2.read());
}

void ntt::thread_tmp_2689_fu_8182_p3() {
    tmp_2689_fu_8182_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_34_fu_8177_p2.read());
}

void ntt::thread_tmp_2690_fu_8196_p3() {
    tmp_2690_fu_8196_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_36_fu_8191_p2.read());
}

void ntt::thread_tmp_2691_fu_8210_p3() {
    tmp_2691_fu_8210_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_35_fu_8205_p2.read());
}

void ntt::thread_tmp_2692_fu_8224_p3() {
    tmp_2692_fu_8224_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_37_fu_8219_p2.read());
}

void ntt::thread_tmp_2693_fu_8238_p3() {
    tmp_2693_fu_8238_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_36_fu_8233_p2.read());
}

void ntt::thread_tmp_2694_fu_8252_p3() {
    tmp_2694_fu_8252_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_38_fu_8247_p2.read());
}

void ntt::thread_tmp_2695_fu_8266_p3() {
    tmp_2695_fu_8266_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_37_fu_8261_p2.read());
}

void ntt::thread_tmp_2696_fu_8280_p3() {
    tmp_2696_fu_8280_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_39_fu_8275_p2.read());
}

void ntt::thread_tmp_2697_fu_8294_p3() {
    tmp_2697_fu_8294_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_38_fu_8289_p2.read());
}

void ntt::thread_tmp_2698_fu_8308_p3() {
    tmp_2698_fu_8308_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_40_fu_8303_p2.read());
}

void ntt::thread_tmp_2699_fu_8322_p3() {
    tmp_2699_fu_8322_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_39_fu_8317_p2.read());
}

void ntt::thread_tmp_2700_fu_8336_p3() {
    tmp_2700_fu_8336_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_41_fu_8331_p2.read());
}

void ntt::thread_tmp_2701_fu_8350_p3() {
    tmp_2701_fu_8350_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_40_fu_8345_p2.read());
}

void ntt::thread_tmp_2702_fu_8364_p3() {
    tmp_2702_fu_8364_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_42_fu_8359_p2.read());
}

void ntt::thread_tmp_2703_fu_8378_p3() {
    tmp_2703_fu_8378_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_41_fu_8373_p2.read());
}

void ntt::thread_tmp_2704_fu_8392_p3() {
    tmp_2704_fu_8392_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_43_fu_8387_p2.read());
}

void ntt::thread_tmp_2705_fu_8406_p3() {
    tmp_2705_fu_8406_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_42_fu_8401_p2.read());
}

void ntt::thread_tmp_2706_fu_8420_p3() {
    tmp_2706_fu_8420_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_44_fu_8415_p2.read());
}

void ntt::thread_tmp_2707_fu_8434_p3() {
    tmp_2707_fu_8434_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_43_fu_8429_p2.read());
}

void ntt::thread_tmp_2708_fu_8448_p3() {
    tmp_2708_fu_8448_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_45_fu_8443_p2.read());
}

void ntt::thread_tmp_2709_fu_8462_p3() {
    tmp_2709_fu_8462_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_44_fu_8457_p2.read());
}

void ntt::thread_tmp_2710_fu_8476_p3() {
    tmp_2710_fu_8476_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_46_fu_8471_p2.read());
}

void ntt::thread_tmp_2711_fu_8490_p3() {
    tmp_2711_fu_8490_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_45_fu_8485_p2.read());
}

void ntt::thread_tmp_2712_fu_8504_p3() {
    tmp_2712_fu_8504_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_47_fu_8499_p2.read());
}

void ntt::thread_tmp_2713_fu_8518_p3() {
    tmp_2713_fu_8518_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_46_fu_8513_p2.read());
}

void ntt::thread_tmp_2714_fu_8532_p3() {
    tmp_2714_fu_8532_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_48_fu_8527_p2.read());
}

void ntt::thread_tmp_2715_fu_8546_p3() {
    tmp_2715_fu_8546_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_47_fu_8541_p2.read());
}

void ntt::thread_tmp_2716_fu_8560_p3() {
    tmp_2716_fu_8560_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_49_fu_8555_p2.read());
}

void ntt::thread_tmp_2717_fu_8574_p3() {
    tmp_2717_fu_8574_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_48_fu_8569_p2.read());
}

void ntt::thread_tmp_2718_fu_8588_p3() {
    tmp_2718_fu_8588_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_50_fu_8583_p2.read());
}

void ntt::thread_tmp_2719_fu_8602_p3() {
    tmp_2719_fu_8602_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_49_fu_8597_p2.read());
}

void ntt::thread_tmp_2720_fu_8616_p3() {
    tmp_2720_fu_8616_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_51_fu_8611_p2.read());
}

void ntt::thread_tmp_2721_fu_8630_p3() {
    tmp_2721_fu_8630_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_50_fu_8625_p2.read());
}

void ntt::thread_tmp_2722_fu_8644_p3() {
    tmp_2722_fu_8644_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_52_fu_8639_p2.read());
}

void ntt::thread_tmp_2723_fu_8658_p3() {
    tmp_2723_fu_8658_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_51_fu_8653_p2.read());
}

void ntt::thread_tmp_2724_fu_8672_p3() {
    tmp_2724_fu_8672_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_53_fu_8667_p2.read());
}

void ntt::thread_tmp_2725_fu_8686_p3() {
    tmp_2725_fu_8686_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_52_fu_8681_p2.read());
}

void ntt::thread_tmp_2726_fu_8700_p3() {
    tmp_2726_fu_8700_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_54_fu_8695_p2.read());
}

void ntt::thread_tmp_2727_fu_8714_p3() {
    tmp_2727_fu_8714_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_53_fu_8709_p2.read());
}

void ntt::thread_tmp_2728_fu_8728_p3() {
    tmp_2728_fu_8728_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_55_fu_8723_p2.read());
}

void ntt::thread_tmp_2729_fu_8742_p3() {
    tmp_2729_fu_8742_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_54_fu_8737_p2.read());
}

void ntt::thread_tmp_2730_fu_8756_p3() {
    tmp_2730_fu_8756_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_56_fu_8751_p2.read());
}

void ntt::thread_tmp_2731_fu_8770_p3() {
    tmp_2731_fu_8770_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_55_fu_8765_p2.read());
}

void ntt::thread_tmp_2732_fu_8784_p3() {
    tmp_2732_fu_8784_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_57_fu_8779_p2.read());
}

void ntt::thread_tmp_2733_fu_8798_p3() {
    tmp_2733_fu_8798_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_56_fu_8793_p2.read());
}

void ntt::thread_tmp_2734_fu_8812_p3() {
    tmp_2734_fu_8812_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_58_fu_8807_p2.read());
}

void ntt::thread_tmp_2735_fu_8826_p3() {
    tmp_2735_fu_8826_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_57_fu_8821_p2.read());
}

void ntt::thread_tmp_2736_fu_8840_p3() {
    tmp_2736_fu_8840_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_59_fu_8835_p2.read());
}

void ntt::thread_tmp_2737_fu_8854_p3() {
    tmp_2737_fu_8854_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_58_fu_8849_p2.read());
}

void ntt::thread_tmp_2738_fu_8868_p3() {
    tmp_2738_fu_8868_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_60_fu_8863_p2.read());
}

void ntt::thread_tmp_2739_fu_8882_p3() {
    tmp_2739_fu_8882_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_59_fu_8877_p2.read());
}

void ntt::thread_tmp_2740_fu_8896_p3() {
    tmp_2740_fu_8896_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_61_fu_8891_p2.read());
}

void ntt::thread_tmp_2741_fu_8910_p3() {
    tmp_2741_fu_8910_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_60_fu_8905_p2.read());
}

void ntt::thread_tmp_2742_fu_8924_p3() {
    tmp_2742_fu_8924_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_62_fu_8919_p2.read());
}

void ntt::thread_tmp_2743_fu_8938_p3() {
    tmp_2743_fu_8938_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_61_fu_8933_p2.read());
}

void ntt::thread_tmp_2744_fu_8952_p3() {
    tmp_2744_fu_8952_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_63_fu_8947_p2.read());
}

void ntt::thread_tmp_2745_fu_8966_p3() {
    tmp_2745_fu_8966_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_62_fu_8961_p2.read());
}

void ntt::thread_tmp_2746_fu_8980_p3() {
    tmp_2746_fu_8980_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_64_fu_8975_p2.read());
}

void ntt::thread_tmp_2747_fu_8994_p3() {
    tmp_2747_fu_8994_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_63_fu_8989_p2.read());
}

void ntt::thread_tmp_2748_fu_9008_p3() {
    tmp_2748_fu_9008_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_65_fu_9003_p2.read());
}

void ntt::thread_tmp_2749_fu_9022_p3() {
    tmp_2749_fu_9022_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_64_fu_9017_p2.read());
}

void ntt::thread_tmp_2750_fu_9036_p3() {
    tmp_2750_fu_9036_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_66_fu_9031_p2.read());
}

void ntt::thread_tmp_2751_fu_9050_p3() {
    tmp_2751_fu_9050_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_65_fu_9045_p2.read());
}

void ntt::thread_tmp_2752_fu_9064_p3() {
    tmp_2752_fu_9064_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_67_fu_9059_p2.read());
}

void ntt::thread_tmp_2753_fu_9078_p3() {
    tmp_2753_fu_9078_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_66_fu_9073_p2.read());
}

void ntt::thread_tmp_2754_fu_9092_p3() {
    tmp_2754_fu_9092_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_68_fu_9087_p2.read());
}

void ntt::thread_tmp_2755_fu_9106_p3() {
    tmp_2755_fu_9106_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_67_fu_9101_p2.read());
}

void ntt::thread_tmp_2756_fu_9120_p3() {
    tmp_2756_fu_9120_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_69_fu_9115_p2.read());
}

void ntt::thread_tmp_2757_fu_9134_p3() {
    tmp_2757_fu_9134_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_68_fu_9129_p2.read());
}

void ntt::thread_tmp_2758_fu_9148_p3() {
    tmp_2758_fu_9148_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_70_fu_9143_p2.read());
}

void ntt::thread_tmp_2759_fu_9162_p3() {
    tmp_2759_fu_9162_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_69_fu_9157_p2.read());
}

void ntt::thread_tmp_2760_fu_9176_p3() {
    tmp_2760_fu_9176_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_71_fu_9171_p2.read());
}

void ntt::thread_tmp_2761_fu_9190_p3() {
    tmp_2761_fu_9190_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_70_fu_9185_p2.read());
}

void ntt::thread_tmp_2762_fu_9204_p3() {
    tmp_2762_fu_9204_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_72_fu_9199_p2.read());
}

void ntt::thread_tmp_2763_fu_9218_p3() {
    tmp_2763_fu_9218_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_71_fu_9213_p2.read());
}

void ntt::thread_tmp_2764_fu_9232_p3() {
    tmp_2764_fu_9232_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_73_fu_9227_p2.read());
}

void ntt::thread_tmp_2765_fu_9246_p3() {
    tmp_2765_fu_9246_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_72_fu_9241_p2.read());
}

void ntt::thread_tmp_2766_fu_9260_p3() {
    tmp_2766_fu_9260_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_74_fu_9255_p2.read());
}

void ntt::thread_tmp_2767_fu_9274_p3() {
    tmp_2767_fu_9274_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_73_fu_9269_p2.read());
}

void ntt::thread_tmp_2768_fu_9288_p3() {
    tmp_2768_fu_9288_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_75_fu_9283_p2.read());
}

void ntt::thread_tmp_2769_fu_9302_p3() {
    tmp_2769_fu_9302_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_74_fu_9297_p2.read());
}

void ntt::thread_tmp_2770_fu_9331_p3() {
    tmp_2770_fu_9331_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_76_fu_9326_p2.read());
}

void ntt::thread_tmp_2771_fu_9345_p3() {
    tmp_2771_fu_9345_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_75_fu_9340_p2.read());
}

void ntt::thread_tmp_2772_fu_9359_p3() {
    tmp_2772_fu_9359_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_77_fu_9354_p2.read());
}

void ntt::thread_tmp_2773_fu_9373_p3() {
    tmp_2773_fu_9373_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_76_fu_9368_p2.read());
}

void ntt::thread_tmp_2774_fu_9387_p3() {
    tmp_2774_fu_9387_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_78_fu_9382_p2.read());
}

void ntt::thread_tmp_2775_fu_9401_p3() {
    tmp_2775_fu_9401_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_77_fu_9396_p2.read());
}

void ntt::thread_tmp_2776_fu_9415_p3() {
    tmp_2776_fu_9415_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_79_fu_9410_p2.read());
}

void ntt::thread_tmp_2777_fu_9429_p3() {
    tmp_2777_fu_9429_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_78_fu_9424_p2.read());
}

void ntt::thread_tmp_2778_fu_9443_p3() {
    tmp_2778_fu_9443_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_80_fu_9438_p2.read());
}

void ntt::thread_tmp_2779_fu_9457_p3() {
    tmp_2779_fu_9457_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_79_fu_9452_p2.read());
}

void ntt::thread_tmp_2780_fu_9471_p3() {
    tmp_2780_fu_9471_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_81_fu_9466_p2.read());
}

void ntt::thread_tmp_2781_fu_9485_p3() {
    tmp_2781_fu_9485_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_80_fu_9480_p2.read());
}

void ntt::thread_tmp_2782_fu_9499_p3() {
    tmp_2782_fu_9499_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_82_fu_9494_p2.read());
}

void ntt::thread_tmp_2783_fu_9513_p3() {
    tmp_2783_fu_9513_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_81_fu_9508_p2.read());
}

void ntt::thread_tmp_2784_fu_9527_p3() {
    tmp_2784_fu_9527_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_83_fu_9522_p2.read());
}

void ntt::thread_tmp_2785_fu_9541_p3() {
    tmp_2785_fu_9541_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_82_fu_9536_p2.read());
}

void ntt::thread_tmp_2786_fu_9555_p3() {
    tmp_2786_fu_9555_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_84_fu_9550_p2.read());
}

void ntt::thread_tmp_2787_fu_9569_p3() {
    tmp_2787_fu_9569_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_83_fu_9564_p2.read());
}

void ntt::thread_tmp_2788_fu_9583_p3() {
    tmp_2788_fu_9583_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_85_fu_9578_p2.read());
}

void ntt::thread_tmp_2789_fu_9597_p3() {
    tmp_2789_fu_9597_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_84_fu_9592_p2.read());
}

void ntt::thread_tmp_2790_fu_9611_p3() {
    tmp_2790_fu_9611_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_86_fu_9606_p2.read());
}

void ntt::thread_tmp_2791_fu_9625_p3() {
    tmp_2791_fu_9625_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_85_fu_9620_p2.read());
}

void ntt::thread_tmp_2792_fu_9639_p3() {
    tmp_2792_fu_9639_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_87_fu_9634_p2.read());
}

void ntt::thread_tmp_2793_fu_9653_p3() {
    tmp_2793_fu_9653_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_86_fu_9648_p2.read());
}

void ntt::thread_tmp_2794_fu_9667_p3() {
    tmp_2794_fu_9667_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_88_fu_9662_p2.read());
}

void ntt::thread_tmp_2795_fu_9681_p3() {
    tmp_2795_fu_9681_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_87_fu_9676_p2.read());
}

void ntt::thread_tmp_2796_fu_9695_p3() {
    tmp_2796_fu_9695_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_89_fu_9690_p2.read());
}

void ntt::thread_tmp_2797_fu_9709_p3() {
    tmp_2797_fu_9709_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_88_fu_9704_p2.read());
}

void ntt::thread_tmp_2798_fu_9738_p3() {
    tmp_2798_fu_9738_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_90_fu_9733_p2.read());
}

void ntt::thread_tmp_2799_fu_9752_p3() {
    tmp_2799_fu_9752_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_89_fu_9747_p2.read());
}

void ntt::thread_tmp_2800_fu_9766_p3() {
    tmp_2800_fu_9766_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_91_fu_9761_p2.read());
}

void ntt::thread_tmp_2801_fu_9780_p3() {
    tmp_2801_fu_9780_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_90_fu_9775_p2.read());
}

void ntt::thread_tmp_2802_fu_9794_p3() {
    tmp_2802_fu_9794_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_92_fu_9789_p2.read());
}

void ntt::thread_tmp_2803_fu_9808_p3() {
    tmp_2803_fu_9808_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_91_fu_9803_p2.read());
}

void ntt::thread_tmp_2804_fu_9822_p3() {
    tmp_2804_fu_9822_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_93_fu_9817_p2.read());
}

void ntt::thread_tmp_2805_fu_9836_p3() {
    tmp_2805_fu_9836_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_92_fu_9831_p2.read());
}

void ntt::thread_tmp_2806_fu_9850_p3() {
    tmp_2806_fu_9850_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_94_fu_9845_p2.read());
}

void ntt::thread_tmp_2807_fu_9864_p3() {
    tmp_2807_fu_9864_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_93_fu_9859_p2.read());
}

void ntt::thread_tmp_2808_fu_9878_p3() {
    tmp_2808_fu_9878_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_95_fu_9873_p2.read());
}

void ntt::thread_tmp_2809_fu_9892_p3() {
    tmp_2809_fu_9892_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_94_fu_9887_p2.read());
}

void ntt::thread_tmp_2810_fu_9906_p3() {
    tmp_2810_fu_9906_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_96_fu_9901_p2.read());
}

void ntt::thread_tmp_2811_fu_9920_p3() {
    tmp_2811_fu_9920_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_95_fu_9915_p2.read());
}

void ntt::thread_tmp_2812_fu_9934_p3() {
    tmp_2812_fu_9934_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_97_fu_9929_p2.read());
}

void ntt::thread_tmp_2813_fu_9948_p3() {
    tmp_2813_fu_9948_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_96_fu_9943_p2.read());
}

void ntt::thread_tmp_2814_fu_9962_p3() {
    tmp_2814_fu_9962_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_98_fu_9957_p2.read());
}

void ntt::thread_tmp_2815_fu_9976_p3() {
    tmp_2815_fu_9976_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_97_fu_9971_p2.read());
}

void ntt::thread_tmp_2816_fu_9990_p3() {
    tmp_2816_fu_9990_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_99_fu_9985_p2.read());
}

void ntt::thread_tmp_2817_fu_10004_p3() {
    tmp_2817_fu_10004_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_98_fu_9999_p2.read());
}

void ntt::thread_tmp_2818_fu_10048_p3() {
    tmp_2818_fu_10048_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_100_fu_10043_p2.read());
}

void ntt::thread_tmp_2819_fu_10062_p3() {
    tmp_2819_fu_10062_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_99_fu_10057_p2.read());
}

void ntt::thread_tmp_2820_fu_10076_p3() {
    tmp_2820_fu_10076_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_101_fu_10071_p2.read());
}

void ntt::thread_tmp_2821_fu_10090_p3() {
    tmp_2821_fu_10090_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_100_fu_10085_p2.read());
}

void ntt::thread_tmp_2822_fu_10104_p3() {
    tmp_2822_fu_10104_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_102_fu_10099_p2.read());
}

void ntt::thread_tmp_2823_fu_10118_p3() {
    tmp_2823_fu_10118_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_101_fu_10113_p2.read());
}

void ntt::thread_tmp_2824_fu_10132_p3() {
    tmp_2824_fu_10132_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_103_fu_10127_p2.read());
}

void ntt::thread_tmp_2825_fu_10146_p3() {
    tmp_2825_fu_10146_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_102_fu_10141_p2.read());
}

void ntt::thread_tmp_2826_fu_10160_p3() {
    tmp_2826_fu_10160_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_104_fu_10155_p2.read());
}

void ntt::thread_tmp_2827_fu_10174_p3() {
    tmp_2827_fu_10174_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_103_fu_10169_p2.read());
}

void ntt::thread_tmp_2828_fu_10188_p3() {
    tmp_2828_fu_10188_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_105_fu_10183_p2.read());
}

void ntt::thread_tmp_2829_fu_10202_p3() {
    tmp_2829_fu_10202_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_104_fu_10197_p2.read());
}

void ntt::thread_tmp_2830_fu_10216_p3() {
    tmp_2830_fu_10216_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_106_fu_10211_p2.read());
}

void ntt::thread_tmp_2831_fu_10230_p3() {
    tmp_2831_fu_10230_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_105_fu_10225_p2.read());
}

void ntt::thread_tmp_2832_fu_10244_p3() {
    tmp_2832_fu_10244_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_107_fu_10239_p2.read());
}

void ntt::thread_tmp_2833_fu_10258_p3() {
    tmp_2833_fu_10258_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_106_fu_10253_p2.read());
}

void ntt::thread_tmp_2834_fu_10272_p3() {
    tmp_2834_fu_10272_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_108_fu_10267_p2.read());
}

void ntt::thread_tmp_2835_fu_10286_p3() {
    tmp_2835_fu_10286_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_107_fu_10281_p2.read());
}

void ntt::thread_tmp_2836_fu_10315_p3() {
    tmp_2836_fu_10315_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_109_fu_10310_p2.read());
}

void ntt::thread_tmp_2837_fu_10329_p3() {
    tmp_2837_fu_10329_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_108_fu_10324_p2.read());
}

void ntt::thread_tmp_2838_fu_10343_p3() {
    tmp_2838_fu_10343_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_110_fu_10338_p2.read());
}

void ntt::thread_tmp_2839_fu_10357_p3() {
    tmp_2839_fu_10357_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_109_fu_10352_p2.read());
}

void ntt::thread_tmp_2840_fu_10371_p3() {
    tmp_2840_fu_10371_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_111_fu_10366_p2.read());
}

void ntt::thread_tmp_2841_fu_10385_p3() {
    tmp_2841_fu_10385_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_110_fu_10380_p2.read());
}

void ntt::thread_tmp_2842_fu_10399_p3() {
    tmp_2842_fu_10399_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_112_fu_10394_p2.read());
}

void ntt::thread_tmp_2843_fu_10413_p3() {
    tmp_2843_fu_10413_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_111_fu_10408_p2.read());
}

void ntt::thread_tmp_2844_fu_10427_p3() {
    tmp_2844_fu_10427_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_113_fu_10422_p2.read());
}

void ntt::thread_tmp_2845_fu_10441_p3() {
    tmp_2845_fu_10441_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_112_fu_10436_p2.read());
}

void ntt::thread_tmp_2846_fu_10455_p3() {
    tmp_2846_fu_10455_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_114_fu_10450_p2.read());
}

void ntt::thread_tmp_2847_fu_10469_p3() {
    tmp_2847_fu_10469_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_113_fu_10464_p2.read());
}

void ntt::thread_tmp_2848_fu_10483_p3() {
    tmp_2848_fu_10483_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_115_fu_10478_p2.read());
}

void ntt::thread_tmp_2849_fu_10497_p3() {
    tmp_2849_fu_10497_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_114_fu_10492_p2.read());
}

void ntt::thread_tmp_2850_fu_10511_p3() {
    tmp_2850_fu_10511_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_116_fu_10506_p2.read());
}

void ntt::thread_tmp_2851_fu_10525_p3() {
    tmp_2851_fu_10525_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_115_fu_10520_p2.read());
}

void ntt::thread_tmp_2852_fu_10539_p3() {
    tmp_2852_fu_10539_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_117_fu_10534_p2.read());
}

void ntt::thread_tmp_2853_fu_10553_p3() {
    tmp_2853_fu_10553_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_116_fu_10548_p2.read());
}

void ntt::thread_tmp_2854_fu_10567_p3() {
    tmp_2854_fu_10567_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_118_fu_10562_p2.read());
}

void ntt::thread_tmp_2855_fu_10581_p3() {
    tmp_2855_fu_10581_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_117_fu_10576_p2.read());
}

void ntt::thread_tmp_2856_fu_10595_p3() {
    tmp_2856_fu_10595_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_119_fu_10590_p2.read());
}

void ntt::thread_tmp_2857_fu_10609_p3() {
    tmp_2857_fu_10609_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_118_fu_10604_p2.read());
}

void ntt::thread_tmp_2858_fu_10623_p3() {
    tmp_2858_fu_10623_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_120_fu_10618_p2.read());
}

void ntt::thread_tmp_2859_fu_10637_p3() {
    tmp_2859_fu_10637_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_119_fu_10632_p2.read());
}

void ntt::thread_tmp_2860_fu_10651_p3() {
    tmp_2860_fu_10651_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_121_fu_10646_p2.read());
}

void ntt::thread_tmp_2861_fu_10665_p3() {
    tmp_2861_fu_10665_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_120_fu_10660_p2.read());
}

void ntt::thread_tmp_2862_fu_10679_p3() {
    tmp_2862_fu_10679_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_122_fu_10674_p2.read());
}

void ntt::thread_tmp_2863_fu_10693_p3() {
    tmp_2863_fu_10693_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_121_fu_10688_p2.read());
}

void ntt::thread_tmp_2864_fu_10707_p3() {
    tmp_2864_fu_10707_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_123_fu_10702_p2.read());
}

void ntt::thread_tmp_2865_fu_10721_p3() {
    tmp_2865_fu_10721_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_122_fu_10716_p2.read());
}

void ntt::thread_tmp_2866_fu_10735_p3() {
    tmp_2866_fu_10735_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_124_fu_10730_p2.read());
}

void ntt::thread_tmp_2867_fu_10749_p3() {
    tmp_2867_fu_10749_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_123_fu_10744_p2.read());
}

void ntt::thread_tmp_2868_fu_10763_p3() {
    tmp_2868_fu_10763_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_125_fu_10758_p2.read());
}

void ntt::thread_tmp_2869_fu_10777_p3() {
    tmp_2869_fu_10777_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_124_fu_10772_p2.read());
}

void ntt::thread_tmp_2870_fu_10791_p3() {
    tmp_2870_fu_10791_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_126_fu_10786_p2.read());
}

void ntt::thread_tmp_2871_fu_10805_p3() {
    tmp_2871_fu_10805_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_125_fu_10800_p2.read());
}

void ntt::thread_tmp_2872_fu_10819_p3() {
    tmp_2872_fu_10819_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_127_fu_10814_p2.read());
}

void ntt::thread_tmp_2873_fu_10833_p3() {
    tmp_2873_fu_10833_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln60_126_fu_10828_p2.read());
}

void ntt::thread_tmp_357_fu_26580_p3() {
    tmp_357_fu_26580_p3 = j_7_reg_2888.read().range(8, 8);
}

void ntt::thread_tmp_fu_7108_p3() {
    tmp_fu_7108_p3 = esl_concat<3,8>(a_offset.read(), ap_const_lv8_0);
}

void ntt::thread_tmp_s_fu_7127_p3() {
    tmp_s_fu_7127_p3 = esl_concat<53,11>(ap_const_lv53_0, or_ln59_fu_7121_p2.read());
}

void ntt::thread_zetas_address0() {
    zetas_address0 =  (sc_lv<8>) (zext_ln57_fu_26588_p1.read());
}

void ntt::thread_zetas_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1601.read())) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_zext_ln57_fu_26588_p1() {
    zext_ln57_fu_26588_p1 = esl_zext<64,32>(phi_ln57_reg_2900.read());
}

void ntt::thread_zext_ln59_1_fu_26628_p1() {
    zext_ln59_1_fu_26628_p1 = esl_zext<11,9>(add_ln59_fu_26622_p2.read());
}

void ntt::thread_zext_ln59_2_fu_26637_p1() {
    zext_ln59_2_fu_26637_p1 = esl_zext<64,11>(add_ln59_1_fu_26632_p2.read());
}

void ntt::thread_zext_ln59_fu_7116_p1() {
    zext_ln59_fu_7116_p1 = esl_zext<64,11>(tmp_fu_7108_p3.read());
}

void ntt::thread_zext_ln60_1_fu_26651_p1() {
    zext_ln60_1_fu_26651_p1 = esl_zext<64,11>(add_ln60_fu_26646_p2.read());
}

void ntt::thread_zext_ln60_fu_26642_p1() {
    zext_ln60_fu_26642_p1 = esl_zext<11,9>(j_0_7_reg_2912.read());
}

}

