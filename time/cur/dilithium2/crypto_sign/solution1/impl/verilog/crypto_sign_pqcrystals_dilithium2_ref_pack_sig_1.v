// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module crypto_sign_pqcrystals_dilithium2_ref_pack_sig_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        sm_address0,
        sm_ce0,
        sm_we0,
        sm_d0,
        z_address0,
        z_ce0,
        z_q0,
        z_address1,
        z_ce1,
        z_q1,
        h_address0,
        h_ce0,
        h_q0
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_state5 = 6'd16;
parameter    ap_ST_fsm_state6 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [12:0] sm_address0;
output   sm_ce0;
output   sm_we0;
output  [7:0] sm_d0;
output  [9:0] z_address0;
output   z_ce0;
input  [31:0] z_q0;
output  [9:0] z_address1;
output   z_ce1;
input  [31:0] z_q1;
output  [9:0] h_address0;
output   h_ce0;
input  [31:0] h_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[12:0] sm_address0;
reg sm_ce0;
reg sm_we0;
reg[7:0] sm_d0;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_done;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_idle;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_ready;
wire   [9:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_address0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_ce0;
wire   [9:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_address1;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_ce1;
wire   [12:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_address0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_ce0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_we0;
wire   [7:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_d0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_done;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_idle;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_ready;
wire   [12:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_address0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_ce0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_we0;
wire   [7:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_d0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_done;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_idle;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_ready;
wire   [9:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_h_address0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_h_ce0;
wire   [12:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_address0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_ce0;
wire    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_we0;
wire   [7:0] grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_d0;
reg    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start_reg;
wire    ap_CS_fsm_state2;
reg    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start_reg;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
reg    grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start_reg;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
reg   [5:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
reg    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
reg    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
reg    ap_ST_fsm_state6_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start_reg = 1'b0;
#0 grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start_reg = 1'b0;
#0 grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start_reg = 1'b0;
end

crypto_sign_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1 grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start),
    .ap_done(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_done),
    .ap_idle(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_idle),
    .ap_ready(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_ready),
    .z_address0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_address0),
    .z_ce0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_ce0),
    .z_q0(z_q0),
    .z_address1(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_address1),
    .z_ce1(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_ce1),
    .z_q1(z_q1),
    .sm_address0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_address0),
    .sm_ce0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_ce0),
    .sm_we0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_we0),
    .sm_d0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_d0)
);

crypto_sign_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3 grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start),
    .ap_done(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_done),
    .ap_idle(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_idle),
    .ap_ready(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_ready),
    .sm_address0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_address0),
    .sm_ce0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_ce0),
    .sm_we0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_we0),
    .sm_d0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_d0)
);

crypto_sign_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5 grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start),
    .ap_done(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_done),
    .ap_idle(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_idle),
    .ap_ready(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_ready),
    .h_address0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_h_address0),
    .h_ce0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_h_ce0),
    .h_q0(h_q0),
    .sm_address0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_address0),
    .sm_ce0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_ce0),
    .sm_we0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_we0),
    .sm_d0(grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_d0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start_reg <= 1'b1;
        end else if ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_ready == 1'b1)) begin
            grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state3)) begin
            grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start_reg <= 1'b1;
        end else if ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_ready == 1'b1)) begin
            grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state5)) begin
            grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start_reg <= 1'b1;
        end else if ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_ready == 1'b1)) begin
            grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start_reg <= 1'b0;
        end
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

always @ (*) begin
    if ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_done == 1'b0)) begin
        ap_ST_fsm_state2_blk = 1'b1;
    end else begin
        ap_ST_fsm_state2_blk = 1'b0;
    end
end

assign ap_ST_fsm_state3_blk = 1'b0;

always @ (*) begin
    if ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_done == 1'b0)) begin
        ap_ST_fsm_state4_blk = 1'b1;
    end else begin
        ap_ST_fsm_state4_blk = 1'b0;
    end
end

assign ap_ST_fsm_state5_blk = 1'b0;

always @ (*) begin
    if ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_done == 1'b0)) begin
        ap_ST_fsm_state6_blk = 1'b1;
    end else begin
        ap_ST_fsm_state6_blk = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)) | ((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sm_address0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        sm_address0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        sm_address0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_address0;
    end else begin
        sm_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sm_ce0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        sm_ce0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        sm_ce0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_ce0;
    end else begin
        sm_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sm_d0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_d0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        sm_d0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_d0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        sm_d0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_d0;
    end else begin
        sm_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        sm_we0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_sm_we0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        sm_we0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_sm_we0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        sm_we0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_sm_we0;
    end else begin
        sm_we0 = 1'b0;
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
            if (((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_ap_start_reg;

assign grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30_ap_start_reg;

assign grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_ap_start_reg;

assign h_address0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_h_address0;

assign h_ce0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36_h_ce0;

assign z_address0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_address0;

assign z_address1 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_address1;

assign z_ce0 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_ce0;

assign z_ce1 = grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22_z_ce1;

endmodule //crypto_sign_pqcrystals_dilithium2_ref_pack_sig_1
