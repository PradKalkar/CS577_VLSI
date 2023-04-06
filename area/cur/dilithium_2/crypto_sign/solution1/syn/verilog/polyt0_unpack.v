// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module polyt0_unpack (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        r_coeffs_address0,
        r_coeffs_ce0,
        r_coeffs_we0,
        r_coeffs_d0,
        r_coeffs_address1,
        r_coeffs_ce1,
        r_coeffs_we1,
        r_coeffs_d1,
        r_coeffs_offset,
        a_address0,
        a_ce0,
        a_q0,
        a_address1,
        a_ce1,
        a_q1,
        a_offset
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] r_coeffs_address0;
output   r_coeffs_ce0;
output   r_coeffs_we0;
output  [31:0] r_coeffs_d0;
output  [9:0] r_coeffs_address1;
output   r_coeffs_ce1;
output   r_coeffs_we1;
output  [31:0] r_coeffs_d1;
input  [2:0] r_coeffs_offset;
output  [11:0] a_address0;
output   a_ce0;
input  [7:0] a_q0;
output  [11:0] a_address1;
output   a_ce1;
input  [7:0] a_q1;
input  [11:0] a_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] r_coeffs_address0;
reg r_coeffs_ce0;
reg r_coeffs_we0;
reg[31:0] r_coeffs_d0;
reg[9:0] r_coeffs_address1;
reg r_coeffs_ce1;
reg r_coeffs_we1;
reg[31:0] r_coeffs_d1;
reg[11:0] a_address0;
reg a_ce0;
reg[11:0] a_address1;
reg a_ce1;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [7:0] reg_361;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
reg   [7:0] reg_366;
wire   [5:0] i_fu_376_p2;
reg   [5:0] i_reg_1199;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln738_fu_370_p2;
wire   [4:0] trunc_ln739_fu_396_p1;
reg   [4:0] trunc_ln739_reg_1209;
wire   [7:0] shl_ln_fu_500_p3;
reg   [7:0] shl_ln_reg_1230;
wire    ap_CS_fsm_state4;
reg   [5:0] lshr_ln3_reg_1240;
wire   [8:0] add_ln739_1_fu_839_p2;
reg   [8:0] add_ln739_1_reg_1275;
wire   [11:0] add_ln772_1_fu_1007_p2;
reg   [11:0] add_ln772_1_reg_1290;
reg   [4:0] lshr_ln8_reg_1295;
wire    ap_CS_fsm_state8;
reg   [5:0] i_0_reg_338;
wire    ap_CS_fsm_state9;
reg   [8:0] phi_mul_reg_349;
wire   [63:0] zext_ln739_1_fu_391_p1;
wire   [63:0] zext_ln740_1_fu_415_p1;
wire   [63:0] zext_ln739_2_fu_428_p1;
wire   [63:0] zext_ln744_1_fu_464_p1;
wire   [63:0] zext_ln745_1_fu_484_p1;
wire   [63:0] zext_ln743_2_fu_534_p1;
wire   [63:0] zext_ln749_1_fu_602_p1;
wire   [63:0] zext_ln753_1_fu_622_p1;
wire   [63:0] zext_ln748_fu_650_p1;
wire   [63:0] zext_ln754_1_fu_685_p1;
wire   [63:0] zext_ln758_1_fu_705_p1;
wire   [63:0] zext_ln752_1_fu_745_p1;
wire   [63:0] zext_ln759_1_fu_803_p1;
wire   [63:0] zext_ln763_1_fu_823_p1;
wire   [63:0] zext_ln757_1_fu_871_p1;
wire   [63:0] zext_ln762_fu_936_p1;
wire   [63:0] zext_ln767_1_fu_972_p1;
wire   [63:0] zext_ln768_1_fu_992_p1;
wire   [63:0] zext_ln766_1_fu_1060_p1;
wire   [63:0] zext_ln772_1_fu_1113_p1;
wire   [63:0] zext_ln771_fu_1140_p1;
wire  signed [31:0] sext_ln775_fu_495_p1;
wire  signed [31:0] sext_ln776_fu_633_p1;
wire  signed [31:0] sext_ln777_fu_716_p1;
wire  signed [31:0] sext_ln778_fu_834_p1;
wire  signed [31:0] sext_ln779_fu_1018_p1;
wire  signed [31:0] sext_ln780_fu_1029_p1;
wire  signed [31:0] sext_ln781_fu_1123_p1;
wire  signed [31:0] sext_ln782_fu_1162_p1;
wire   [11:0] zext_ln739_fu_382_p1;
wire   [11:0] add_ln739_fu_386_p2;
wire   [8:0] add_ln740_fu_400_p2;
wire   [11:0] zext_ln740_fu_406_p1;
wire   [11:0] add_ln740_1_fu_410_p2;
wire   [10:0] tmp_fu_420_p4;
wire   [4:0] trunc_ln741_fu_433_p1;
wire   [12:0] tmp_s_fu_437_p3;
wire   [8:0] add_ln744_fu_449_p2;
wire   [11:0] zext_ln744_fu_455_p1;
wire   [11:0] add_ln744_1_fu_459_p2;
wire   [8:0] add_ln745_fu_469_p2;
wire   [11:0] zext_ln745_fu_475_p1;
wire   [11:0] add_ln745_1_fu_479_p2;
wire   [13:0] zext_ln743_fu_445_p1;
wire   [13:0] sub_ln775_fu_489_p2;
wire   [2:0] lshr_ln_fu_507_p4;
wire   [7:0] or_ln743_fu_521_p2;
wire   [10:0] tmp_10_fu_527_p3;
wire   [7:0] zext_ln743_1_fu_517_p1;
wire   [10:0] tmp_6_fu_551_p3;
wire   [10:0] shl_ln10_fu_539_p3;
wire   [1:0] trunc_ln746_fu_547_p1;
wire   [10:0] or_ln746_fu_559_p2;
wire   [12:0] or_ln_fu_565_p3;
wire   [8:0] add_ln749_fu_587_p2;
wire   [11:0] zext_ln749_fu_593_p1;
wire   [11:0] add_ln749_1_fu_597_p2;
wire   [8:0] add_ln753_fu_607_p2;
wire   [11:0] zext_ln753_fu_613_p1;
wire   [11:0] add_ln753_1_fu_617_p2;
wire   [13:0] zext_ln746_fu_573_p1;
wire   [13:0] sub_ln776_fu_627_p2;
wire   [7:0] or_ln748_fu_638_p2;
wire   [10:0] tmp_11_fu_643_p3;
wire   [6:0] trunc_ln750_fu_655_p1;
wire   [12:0] or_ln1_fu_659_p3;
wire   [8:0] add_ln754_fu_670_p2;
wire   [11:0] zext_ln754_fu_676_p1;
wire   [11:0] add_ln754_1_fu_680_p2;
wire   [8:0] add_ln758_fu_690_p2;
wire   [11:0] zext_ln758_fu_696_p1;
wire   [11:0] add_ln758_1_fu_700_p2;
wire   [13:0] zext_ln750_fu_666_p1;
wire   [13:0] sub_ln777_fu_710_p2;
wire   [0:0] tmp_12_fu_721_p3;
wire   [7:0] or_ln752_fu_733_p2;
wire   [10:0] tmp_13_fu_738_p3;
wire   [7:0] zext_ln752_fu_729_p1;
wire   [8:0] tmp_9_fu_762_p3;
wire   [8:0] shl_ln11_fu_750_p3;
wire   [3:0] trunc_ln755_fu_758_p1;
wire   [8:0] or_ln755_fu_770_p2;
wire   [12:0] or_ln2_fu_776_p3;
wire   [8:0] add_ln759_fu_788_p2;
wire   [11:0] zext_ln759_fu_794_p1;
wire   [11:0] add_ln759_1_fu_798_p2;
wire   [8:0] add_ln763_fu_808_p2;
wire   [11:0] zext_ln763_fu_814_p1;
wire   [11:0] add_ln763_1_fu_818_p2;
wire   [13:0] zext_ln755_fu_784_p1;
wire   [13:0] sub_ln778_fu_828_p2;
wire   [3:0] lshr_ln5_fu_845_p4;
wire   [7:0] or_ln757_fu_859_p2;
wire   [10:0] tmp_14_fu_864_p3;
wire   [7:0] zext_ln757_fu_855_p1;
wire   [11:0] tmp_2_fu_888_p3;
wire   [11:0] shl_ln12_fu_876_p3;
wire   [0:0] trunc_ln760_fu_884_p1;
wire   [11:0] or_ln760_fu_896_p2;
wire   [12:0] or_ln3_fu_902_p3;
wire   [7:0] or_ln762_fu_924_p2;
wire   [10:0] tmp_15_fu_929_p3;
wire   [5:0] trunc_ln764_fu_941_p1;
wire   [6:0] lshr_ln6_fu_914_p4;
wire   [12:0] or_ln4_fu_945_p3;
wire   [8:0] add_ln767_fu_957_p2;
wire   [11:0] zext_ln767_fu_963_p1;
wire   [11:0] add_ln767_1_fu_967_p2;
wire   [8:0] add_ln768_fu_977_p2;
wire   [11:0] zext_ln768_fu_983_p1;
wire   [11:0] add_ln768_1_fu_987_p2;
wire   [8:0] add_ln772_fu_997_p2;
wire   [11:0] zext_ln772_fu_1003_p1;
wire   [13:0] zext_ln760_fu_910_p1;
wire   [13:0] sub_ln779_fu_1012_p2;
wire   [13:0] zext_ln764_fu_953_p1;
wire   [13:0] sub_ln780_fu_1023_p2;
wire   [1:0] lshr_ln7_fu_1034_p4;
wire   [7:0] or_ln766_fu_1048_p2;
wire   [10:0] tmp_16_fu_1053_p3;
wire   [7:0] zext_ln766_fu_1044_p1;
wire   [9:0] tmp_4_fu_1077_p3;
wire   [9:0] shl_ln13_fu_1065_p3;
wire   [2:0] trunc_ln769_fu_1073_p1;
wire   [9:0] or_ln769_fu_1085_p2;
wire   [12:0] or_ln5_fu_1091_p3;
wire   [13:0] zext_ln769_fu_1099_p1;
wire   [13:0] sub_ln781_fu_1117_p2;
wire   [7:0] or_ln771_fu_1128_p2;
wire   [10:0] tmp_17_fu_1133_p3;
wire   [12:0] or_ln6_fu_1145_p3;
wire   [13:0] zext_ln772_2_fu_1152_p1;
wire   [13:0] sub_ln782_fu_1156_p2;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        i_0_reg_338 <= i_reg_1199;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_338 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        phi_mul_reg_349 <= add_ln739_1_reg_1275;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_349 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        reg_361 <= a_q0;
    end else if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state3))) begin
        reg_361 <= a_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        add_ln739_1_reg_1275 <= add_ln739_1_fu_839_p2;
        add_ln772_1_reg_1290 <= add_ln772_1_fu_1007_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_1199 <= i_fu_376_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        lshr_ln3_reg_1240 <= {{a_q1[7:2]}};
        shl_ln_reg_1230[7 : 3] <= shl_ln_fu_500_p3[7 : 3];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        lshr_ln8_reg_1295 <= {{a_q1[7:3]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        reg_366 <= a_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln738_fu_370_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        trunc_ln739_reg_1209 <= trunc_ln739_fu_396_p1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        a_address0 = zext_ln772_1_fu_1113_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address0 = zext_ln767_1_fu_972_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address0 = zext_ln759_1_fu_803_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address0 = zext_ln754_1_fu_685_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        a_address0 = zext_ln749_1_fu_602_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_address0 = zext_ln744_1_fu_464_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_address0 = zext_ln739_1_fu_391_p1;
    end else begin
        a_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address1 = zext_ln768_1_fu_992_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address1 = zext_ln763_1_fu_823_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address1 = zext_ln758_1_fu_705_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        a_address1 = zext_ln753_1_fu_622_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_address1 = zext_ln745_1_fu_484_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_address1 = zext_ln740_1_fu_415_p1;
    end else begin
        a_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state4))) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4))) begin
        a_ce1 = 1'b1;
    end else begin
        a_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln738_fu_370_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln738_fu_370_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_address0 = zext_ln757_1_fu_871_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address0 = zext_ln752_1_fu_745_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_address0 = zext_ln748_fu_650_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_address0 = zext_ln743_2_fu_534_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        r_coeffs_address0 = zext_ln739_2_fu_428_p1;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_address1 = zext_ln771_fu_1140_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_address1 = zext_ln766_1_fu_1060_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_address1 = zext_ln762_fu_936_p1;
    end else begin
        r_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        r_coeffs_ce1 = 1'b1;
    end else begin
        r_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_d0 = sext_ln779_fu_1018_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_d0 = sext_ln778_fu_834_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = sext_ln777_fu_716_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_d0 = sext_ln776_fu_633_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        r_coeffs_d0 = sext_ln775_fu_495_p1;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_d1 = sext_ln782_fu_1162_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d1 = sext_ln781_fu_1123_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_d1 = sext_ln780_fu_1029_p1;
    end else begin
        r_coeffs_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        r_coeffs_we1 = 1'b1;
    end else begin
        r_coeffs_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln738_fu_370_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln739_1_fu_839_p2 = (9'd13 + phi_mul_reg_349);

assign add_ln739_fu_386_p2 = (a_offset + zext_ln739_fu_382_p1);

assign add_ln740_1_fu_410_p2 = (a_offset + zext_ln740_fu_406_p1);

assign add_ln740_fu_400_p2 = (9'd1 + phi_mul_reg_349);

assign add_ln744_1_fu_459_p2 = (a_offset + zext_ln744_fu_455_p1);

assign add_ln744_fu_449_p2 = (9'd2 + phi_mul_reg_349);

assign add_ln745_1_fu_479_p2 = (a_offset + zext_ln745_fu_475_p1);

assign add_ln745_fu_469_p2 = (9'd3 + phi_mul_reg_349);

assign add_ln749_1_fu_597_p2 = (a_offset + zext_ln749_fu_593_p1);

assign add_ln749_fu_587_p2 = (9'd4 + phi_mul_reg_349);

assign add_ln753_1_fu_617_p2 = (a_offset + zext_ln753_fu_613_p1);

assign add_ln753_fu_607_p2 = (9'd5 + phi_mul_reg_349);

assign add_ln754_1_fu_680_p2 = (a_offset + zext_ln754_fu_676_p1);

assign add_ln754_fu_670_p2 = (9'd6 + phi_mul_reg_349);

assign add_ln758_1_fu_700_p2 = (a_offset + zext_ln758_fu_696_p1);

assign add_ln758_fu_690_p2 = (9'd7 + phi_mul_reg_349);

assign add_ln759_1_fu_798_p2 = (a_offset + zext_ln759_fu_794_p1);

assign add_ln759_fu_788_p2 = (9'd8 + phi_mul_reg_349);

assign add_ln763_1_fu_818_p2 = (a_offset + zext_ln763_fu_814_p1);

assign add_ln763_fu_808_p2 = (9'd9 + phi_mul_reg_349);

assign add_ln767_1_fu_967_p2 = (a_offset + zext_ln767_fu_963_p1);

assign add_ln767_fu_957_p2 = (9'd10 + phi_mul_reg_349);

assign add_ln768_1_fu_987_p2 = (a_offset + zext_ln768_fu_983_p1);

assign add_ln768_fu_977_p2 = (9'd11 + phi_mul_reg_349);

assign add_ln772_1_fu_1007_p2 = (a_offset + zext_ln772_fu_1003_p1);

assign add_ln772_fu_997_p2 = (9'd12 + phi_mul_reg_349);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign i_fu_376_p2 = (i_0_reg_338 + 6'd1);

assign icmp_ln738_fu_370_p2 = ((i_0_reg_338 == 6'd32) ? 1'b1 : 1'b0);

assign lshr_ln5_fu_845_p4 = {{reg_361[7:4]}};

assign lshr_ln6_fu_914_p4 = {{a_q0[7:1]}};

assign lshr_ln7_fu_1034_p4 = {{reg_361[7:6]}};

assign lshr_ln_fu_507_p4 = {{reg_361[7:5]}};

assign or_ln1_fu_659_p3 = {{trunc_ln750_fu_655_p1}, {lshr_ln3_reg_1240}};

assign or_ln2_fu_776_p3 = {{trunc_ln755_fu_758_p1}, {or_ln755_fu_770_p2}};

assign or_ln3_fu_902_p3 = {{trunc_ln760_fu_884_p1}, {or_ln760_fu_896_p2}};

assign or_ln4_fu_945_p3 = {{trunc_ln764_fu_941_p1}, {lshr_ln6_fu_914_p4}};

assign or_ln5_fu_1091_p3 = {{trunc_ln769_fu_1073_p1}, {or_ln769_fu_1085_p2}};

assign or_ln6_fu_1145_p3 = {{a_q0}, {lshr_ln8_reg_1295}};

assign or_ln743_fu_521_p2 = (shl_ln_fu_500_p3 | 8'd1);

assign or_ln746_fu_559_p2 = (tmp_6_fu_551_p3 | shl_ln10_fu_539_p3);

assign or_ln748_fu_638_p2 = (shl_ln_reg_1230 | 8'd2);

assign or_ln752_fu_733_p2 = (shl_ln_reg_1230 | 8'd3);

assign or_ln755_fu_770_p2 = (tmp_9_fu_762_p3 | shl_ln11_fu_750_p3);

assign or_ln757_fu_859_p2 = (shl_ln_reg_1230 | 8'd4);

assign or_ln760_fu_896_p2 = (tmp_2_fu_888_p3 | shl_ln12_fu_876_p3);

assign or_ln762_fu_924_p2 = (shl_ln_reg_1230 | 8'd5);

assign or_ln766_fu_1048_p2 = (shl_ln_reg_1230 | 8'd6);

assign or_ln769_fu_1085_p2 = (tmp_4_fu_1077_p3 | shl_ln13_fu_1065_p3);

assign or_ln771_fu_1128_p2 = (shl_ln_reg_1230 | 8'd7);

assign or_ln_fu_565_p3 = {{trunc_ln746_fu_547_p1}, {or_ln746_fu_559_p2}};

assign sext_ln775_fu_495_p1 = $signed(sub_ln775_fu_489_p2);

assign sext_ln776_fu_633_p1 = $signed(sub_ln776_fu_627_p2);

assign sext_ln777_fu_716_p1 = $signed(sub_ln777_fu_710_p2);

assign sext_ln778_fu_834_p1 = $signed(sub_ln778_fu_828_p2);

assign sext_ln779_fu_1018_p1 = $signed(sub_ln779_fu_1012_p2);

assign sext_ln780_fu_1029_p1 = $signed(sub_ln780_fu_1023_p2);

assign sext_ln781_fu_1123_p1 = $signed(sub_ln781_fu_1117_p2);

assign sext_ln782_fu_1162_p1 = $signed(sub_ln782_fu_1156_p2);

assign shl_ln10_fu_539_p3 = {{a_q0}, {3'd0}};

assign shl_ln11_fu_750_p3 = {{reg_366}, {1'd0}};

assign shl_ln12_fu_876_p3 = {{reg_366}, {4'd0}};

assign shl_ln13_fu_1065_p3 = {{a_q0}, {2'd0}};

assign shl_ln_fu_500_p3 = {{trunc_ln739_reg_1209}, {3'd0}};

assign sub_ln775_fu_489_p2 = (14'd4096 - zext_ln743_fu_445_p1);

assign sub_ln776_fu_627_p2 = (14'd4096 - zext_ln746_fu_573_p1);

assign sub_ln777_fu_710_p2 = (14'd4096 - zext_ln750_fu_666_p1);

assign sub_ln778_fu_828_p2 = (14'd4096 - zext_ln755_fu_784_p1);

assign sub_ln779_fu_1012_p2 = (14'd4096 - zext_ln760_fu_910_p1);

assign sub_ln780_fu_1023_p2 = (14'd4096 - zext_ln764_fu_953_p1);

assign sub_ln781_fu_1117_p2 = (14'd4096 - zext_ln769_fu_1099_p1);

assign sub_ln782_fu_1156_p2 = (14'd4096 - zext_ln772_2_fu_1152_p1);

assign tmp_10_fu_527_p3 = {{r_coeffs_offset}, {or_ln743_fu_521_p2}};

assign tmp_11_fu_643_p3 = {{r_coeffs_offset}, {or_ln748_fu_638_p2}};

assign tmp_12_fu_721_p3 = reg_361[32'd7];

assign tmp_13_fu_738_p3 = {{r_coeffs_offset}, {or_ln752_fu_733_p2}};

assign tmp_14_fu_864_p3 = {{r_coeffs_offset}, {or_ln757_fu_859_p2}};

assign tmp_15_fu_929_p3 = {{r_coeffs_offset}, {or_ln762_fu_924_p2}};

assign tmp_16_fu_1053_p3 = {{r_coeffs_offset}, {or_ln766_fu_1048_p2}};

assign tmp_17_fu_1133_p3 = {{r_coeffs_offset}, {or_ln771_fu_1128_p2}};

assign tmp_2_fu_888_p3 = {{4'd0}, {zext_ln757_fu_855_p1}};

assign tmp_4_fu_1077_p3 = {{2'd0}, {zext_ln766_fu_1044_p1}};

assign tmp_6_fu_551_p3 = {{3'd0}, {zext_ln743_1_fu_517_p1}};

assign tmp_9_fu_762_p3 = {{1'd0}, {zext_ln752_fu_729_p1}};

assign tmp_fu_420_p4 = {{{r_coeffs_offset}, {trunc_ln739_reg_1209}}, {3'd0}};

assign tmp_s_fu_437_p3 = {{trunc_ln741_fu_433_p1}, {a_q0}};

assign trunc_ln739_fu_396_p1 = i_0_reg_338[4:0];

assign trunc_ln741_fu_433_p1 = a_q1[4:0];

assign trunc_ln746_fu_547_p1 = a_q1[1:0];

assign trunc_ln750_fu_655_p1 = a_q0[6:0];

assign trunc_ln755_fu_758_p1 = a_q0[3:0];

assign trunc_ln760_fu_884_p1 = a_q0[0:0];

assign trunc_ln764_fu_941_p1 = a_q1[5:0];

assign trunc_ln769_fu_1073_p1 = a_q1[2:0];

assign zext_ln739_1_fu_391_p1 = add_ln739_fu_386_p2;

assign zext_ln739_2_fu_428_p1 = tmp_fu_420_p4;

assign zext_ln739_fu_382_p1 = phi_mul_reg_349;

assign zext_ln740_1_fu_415_p1 = add_ln740_1_fu_410_p2;

assign zext_ln740_fu_406_p1 = add_ln740_fu_400_p2;

assign zext_ln743_1_fu_517_p1 = lshr_ln_fu_507_p4;

assign zext_ln743_2_fu_534_p1 = tmp_10_fu_527_p3;

assign zext_ln743_fu_445_p1 = tmp_s_fu_437_p3;

assign zext_ln744_1_fu_464_p1 = add_ln744_1_fu_459_p2;

assign zext_ln744_fu_455_p1 = add_ln744_fu_449_p2;

assign zext_ln745_1_fu_484_p1 = add_ln745_1_fu_479_p2;

assign zext_ln745_fu_475_p1 = add_ln745_fu_469_p2;

assign zext_ln746_fu_573_p1 = or_ln_fu_565_p3;

assign zext_ln748_fu_650_p1 = tmp_11_fu_643_p3;

assign zext_ln749_1_fu_602_p1 = add_ln749_1_fu_597_p2;

assign zext_ln749_fu_593_p1 = add_ln749_fu_587_p2;

assign zext_ln750_fu_666_p1 = or_ln1_fu_659_p3;

assign zext_ln752_1_fu_745_p1 = tmp_13_fu_738_p3;

assign zext_ln752_fu_729_p1 = tmp_12_fu_721_p3;

assign zext_ln753_1_fu_622_p1 = add_ln753_1_fu_617_p2;

assign zext_ln753_fu_613_p1 = add_ln753_fu_607_p2;

assign zext_ln754_1_fu_685_p1 = add_ln754_1_fu_680_p2;

assign zext_ln754_fu_676_p1 = add_ln754_fu_670_p2;

assign zext_ln755_fu_784_p1 = or_ln2_fu_776_p3;

assign zext_ln757_1_fu_871_p1 = tmp_14_fu_864_p3;

assign zext_ln757_fu_855_p1 = lshr_ln5_fu_845_p4;

assign zext_ln758_1_fu_705_p1 = add_ln758_1_fu_700_p2;

assign zext_ln758_fu_696_p1 = add_ln758_fu_690_p2;

assign zext_ln759_1_fu_803_p1 = add_ln759_1_fu_798_p2;

assign zext_ln759_fu_794_p1 = add_ln759_fu_788_p2;

assign zext_ln760_fu_910_p1 = or_ln3_fu_902_p3;

assign zext_ln762_fu_936_p1 = tmp_15_fu_929_p3;

assign zext_ln763_1_fu_823_p1 = add_ln763_1_fu_818_p2;

assign zext_ln763_fu_814_p1 = add_ln763_fu_808_p2;

assign zext_ln764_fu_953_p1 = or_ln4_fu_945_p3;

assign zext_ln766_1_fu_1060_p1 = tmp_16_fu_1053_p3;

assign zext_ln766_fu_1044_p1 = lshr_ln7_fu_1034_p4;

assign zext_ln767_1_fu_972_p1 = add_ln767_1_fu_967_p2;

assign zext_ln767_fu_963_p1 = add_ln767_fu_957_p2;

assign zext_ln768_1_fu_992_p1 = add_ln768_1_fu_987_p2;

assign zext_ln768_fu_983_p1 = add_ln768_fu_977_p2;

assign zext_ln769_fu_1099_p1 = or_ln5_fu_1091_p3;

assign zext_ln771_fu_1140_p1 = tmp_17_fu_1133_p3;

assign zext_ln772_1_fu_1113_p1 = add_ln772_1_reg_1290;

assign zext_ln772_2_fu_1152_p1 = or_ln6_fu_1145_p3;

assign zext_ln772_fu_1003_p1 = add_ln772_fu_997_p2;

always @ (posedge ap_clk) begin
    shl_ln_reg_1230[2:0] <= 3'b000;
end

endmodule //polyt0_unpack
