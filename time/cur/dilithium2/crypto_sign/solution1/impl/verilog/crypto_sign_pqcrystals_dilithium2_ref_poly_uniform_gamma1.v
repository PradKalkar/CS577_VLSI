// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_gamma1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_address0,
        a_ce0,
        a_we0,
        a_d0,
        a_offset,
        seed_address0,
        seed_ce0,
        seed_q0,
        seed_address1,
        seed_ce1,
        seed_q1,
        nonce
);

parameter    ap_ST_fsm_state1 = 14'd1;
parameter    ap_ST_fsm_state2 = 14'd2;
parameter    ap_ST_fsm_state3 = 14'd4;
parameter    ap_ST_fsm_state4 = 14'd8;
parameter    ap_ST_fsm_state5 = 14'd16;
parameter    ap_ST_fsm_state6 = 14'd32;
parameter    ap_ST_fsm_state7 = 14'd64;
parameter    ap_ST_fsm_state8 = 14'd128;
parameter    ap_ST_fsm_state9 = 14'd256;
parameter    ap_ST_fsm_state10 = 14'd512;
parameter    ap_ST_fsm_state11 = 14'd1024;
parameter    ap_ST_fsm_state12 = 14'd2048;
parameter    ap_ST_fsm_state13 = 14'd4096;
parameter    ap_ST_fsm_state14 = 14'd8192;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] a_address0;
output   a_ce0;
output   a_we0;
output  [18:0] a_d0;
input  [1:0] a_offset;
output  [7:0] seed_address0;
output   seed_ce0;
input  [7:0] seed_q0;
output  [7:0] seed_address1;
output   seed_ce1;
input  [7:0] seed_q1;
input  [15:0] nonce;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [13:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] t_0_fu_184_p1;
reg   [7:0] t_0_reg_334;
reg   [7:0] t_1_reg_339;
wire   [7:0] grp_keccak_absorb_fu_149_ap_return;
reg   [7:0] state_pos_reg_361;
wire    ap_CS_fsm_state5;
reg   [4:0] i_reg_366;
reg   [4:0] state_s_addr_reg_371;
wire    ap_CS_fsm_state6;
wire   [4:0] state_s_addr_3_reg_376;
wire    ap_CS_fsm_state8;
reg   [9:0] idx_load_reg_384;
wire    ap_CS_fsm_state12;
reg   [9:0] buf_address0;
reg    buf_ce0;
reg    buf_we0;
wire   [7:0] buf_q0;
reg   [9:0] buf_address1;
reg    buf_ce1;
reg    buf_we1;
wire   [7:0] buf_q1;
reg   [4:0] state_s_address0;
reg    state_s_ce0;
reg    state_s_we0;
reg   [63:0] state_s_d0;
wire   [63:0] state_s_q0;
reg   [4:0] state_s_address1;
reg    state_s_ce1;
reg    state_s_we1;
reg   [63:0] state_s_d1;
wire   [63:0] state_s_q1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_done;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_idle;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_ready;
wire   [7:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_address0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_ce0;
wire   [7:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_address1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_ce1;
wire   [4:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_address0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_ce0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_we0;
wire   [63:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_d0;
wire   [4:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_address1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_ce1;
wire    grp_keccak_absorb_fu_149_ap_start;
wire    grp_keccak_absorb_fu_149_ap_done;
wire    grp_keccak_absorb_fu_149_ap_idle;
wire    grp_keccak_absorb_fu_149_ap_ready;
wire   [4:0] grp_keccak_absorb_fu_149_s_address0;
wire    grp_keccak_absorb_fu_149_s_ce0;
wire    grp_keccak_absorb_fu_149_s_we0;
wire   [63:0] grp_keccak_absorb_fu_149_s_d0;
wire   [4:0] grp_keccak_absorb_fu_149_s_address1;
wire    grp_keccak_absorb_fu_149_s_ce1;
wire    grp_keccak_absorb_fu_149_s_we1;
wire   [63:0] grp_keccak_absorb_fu_149_s_d1;
wire    grp_KeccakF1600_StatePermute_fu_162_ap_start;
wire    grp_KeccakF1600_StatePermute_fu_162_ap_done;
wire    grp_KeccakF1600_StatePermute_fu_162_ap_idle;
wire    grp_KeccakF1600_StatePermute_fu_162_ap_ready;
wire   [4:0] grp_KeccakF1600_StatePermute_fu_162_state_address0;
wire    grp_KeccakF1600_StatePermute_fu_162_state_ce0;
wire    grp_KeccakF1600_StatePermute_fu_162_state_we0;
wire   [63:0] grp_KeccakF1600_StatePermute_fu_162_state_d0;
wire   [4:0] grp_KeccakF1600_StatePermute_fu_162_state_address1;
wire    grp_KeccakF1600_StatePermute_fu_162_state_ce1;
wire    grp_KeccakF1600_StatePermute_fu_162_state_we1;
wire   [63:0] grp_KeccakF1600_StatePermute_fu_162_state_d1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_done;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_idle;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_ready;
wire   [9:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_address0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_ce0;
wire   [9:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_address1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_ce1;
wire   [9:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_address0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_ce0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_we0;
wire   [18:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_d0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_done;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_idle;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_ready;
wire   [4:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_state_s_address0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_state_s_ce0;
wire   [9:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_address0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_ce0;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_we0;
wire   [7:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_d0;
wire   [9:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_address1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_ce1;
wire    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_we1;
wire   [7:0] grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_d1;
reg    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start_reg;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln362_fu_211_p2;
wire    ap_CS_fsm_state3;
reg    grp_keccak_absorb_fu_149_ap_start_reg;
wire    ap_CS_fsm_state4;
reg    grp_KeccakF1600_StatePermute_fu_162_ap_start_reg;
wire    ap_CS_fsm_state10;
wire   [0:0] icmp_ln474_fu_290_p2;
wire    ap_CS_fsm_state11;
reg    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start_reg;
wire    ap_CS_fsm_state14;
reg    grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start_reg;
wire    ap_CS_fsm_state13;
wire   [63:0] zext_ln362_fu_206_p1;
wire   [63:0] zext_ln450_4_fu_248_p1;
reg   [4:0] i_34_fu_82;
wire   [4:0] add_ln362_fu_217_p2;
reg   [9:0] idx_fu_94;
wire   [9:0] add_ln474_fu_311_p2;
reg   [2:0] nblocks_assign_fu_98;
wire   [2:0] add_ln479_fu_296_p2;
wire    ap_CS_fsm_state7;
wire   [63:0] xor_ln450_fu_273_p2;
wire    ap_CS_fsm_state9;
wire   [63:0] xor_ln451_fu_280_p2;
wire   [2:0] trunc_ln450_fu_252_p1;
wire   [5:0] shl_ln_fu_255_p3;
wire   [63:0] zext_ln450_fu_263_p1;
wire   [63:0] shl_ln450_fu_267_p2;
reg   [13:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
reg    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
reg    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
wire    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
wire    ap_ST_fsm_state9_blk;
wire    ap_ST_fsm_state10_blk;
reg    ap_ST_fsm_state11_blk;
wire    ap_ST_fsm_state12_blk;
reg    ap_ST_fsm_state13_blk;
reg    ap_ST_fsm_state14_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 14'd1;
#0 grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start_reg = 1'b0;
#0 grp_keccak_absorb_fu_149_ap_start_reg = 1'b0;
#0 grp_KeccakF1600_StatePermute_fu_162_ap_start_reg = 1'b0;
#0 grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start_reg = 1'b0;
#0 grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start_reg = 1'b0;
end

crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_gamma1_buf_RAM_AUTO_1R1W #(
    .DataWidth( 8 ),
    .AddressRange( 680 ),
    .AddressWidth( 10 ))
buf_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_address0),
    .ce0(buf_ce0),
    .we0(buf_we0),
    .d0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_d0),
    .q0(buf_q0),
    .address1(buf_address1),
    .ce1(buf_ce1),
    .we1(buf_we1),
    .d1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_d1),
    .q1(buf_q1)
);

crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_state_s_RAM_AUTO_1R1W #(
    .DataWidth( 64 ),
    .AddressRange( 25 ),
    .AddressWidth( 5 ))
state_s_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(state_s_address0),
    .ce0(state_s_ce0),
    .we0(state_s_we0),
    .d0(state_s_d0),
    .q0(state_s_q0),
    .address1(state_s_address1),
    .ce1(state_s_ce1),
    .we1(state_s_we1),
    .d1(state_s_d1),
    .q1(state_s_q1)
);

crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5 grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start),
    .ap_done(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_done),
    .ap_idle(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_idle),
    .ap_ready(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_ready),
    .seed_address0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_address0),
    .seed_ce0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_ce0),
    .seed_q0(seed_q0),
    .seed_address1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_address1),
    .seed_ce1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_ce1),
    .seed_q1(seed_q1),
    .state_s_address0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_address0),
    .state_s_ce0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_ce0),
    .state_s_we0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_we0),
    .state_s_d0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_d0),
    .state_s_address1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_address1),
    .state_s_ce1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_ce1),
    .state_s_q1(state_s_q1)
);

crypto_sign_keccak_absorb grp_keccak_absorb_fu_149(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_keccak_absorb_fu_149_ap_start),
    .ap_done(grp_keccak_absorb_fu_149_ap_done),
    .ap_idle(grp_keccak_absorb_fu_149_ap_idle),
    .ap_ready(grp_keccak_absorb_fu_149_ap_ready),
    .s_address0(grp_keccak_absorb_fu_149_s_address0),
    .s_ce0(grp_keccak_absorb_fu_149_s_ce0),
    .s_we0(grp_keccak_absorb_fu_149_s_we0),
    .s_d0(grp_keccak_absorb_fu_149_s_d0),
    .s_q0(state_s_q0),
    .s_address1(grp_keccak_absorb_fu_149_s_address1),
    .s_ce1(grp_keccak_absorb_fu_149_s_ce1),
    .s_we1(grp_keccak_absorb_fu_149_s_we1),
    .s_d1(grp_keccak_absorb_fu_149_s_d1),
    .s_q1(state_s_q1),
    .r(8'd136),
    .pos_r(6'd48),
    .m_0_read(t_0_reg_334),
    .m_1_read(t_1_reg_339),
    .ap_return(grp_keccak_absorb_fu_149_ap_return)
);

crypto_sign_KeccakF1600_StatePermute grp_KeccakF1600_StatePermute_fu_162(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_KeccakF1600_StatePermute_fu_162_ap_start),
    .ap_done(grp_KeccakF1600_StatePermute_fu_162_ap_done),
    .ap_idle(grp_KeccakF1600_StatePermute_fu_162_ap_idle),
    .ap_ready(grp_KeccakF1600_StatePermute_fu_162_ap_ready),
    .state_address0(grp_KeccakF1600_StatePermute_fu_162_state_address0),
    .state_ce0(grp_KeccakF1600_StatePermute_fu_162_state_ce0),
    .state_we0(grp_KeccakF1600_StatePermute_fu_162_state_we0),
    .state_d0(grp_KeccakF1600_StatePermute_fu_162_state_d0),
    .state_q0(state_s_q0),
    .state_address1(grp_KeccakF1600_StatePermute_fu_162_state_address1),
    .state_ce1(grp_KeccakF1600_StatePermute_fu_162_state_ce1),
    .state_we1(grp_KeccakF1600_StatePermute_fu_162_state_we1),
    .state_d1(grp_KeccakF1600_StatePermute_fu_162_state_d1),
    .state_q1(state_s_q1)
);

crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1 grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start),
    .ap_done(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_done),
    .ap_idle(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_idle),
    .ap_ready(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_ready),
    .buf_r_address0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_address0),
    .buf_r_ce0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_ce0),
    .buf_r_q0(buf_q0),
    .buf_r_address1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_address1),
    .buf_r_ce1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_ce1),
    .buf_r_q1(buf_q1),
    .a_offset(a_offset),
    .a_address0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_address0),
    .a_ce0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_ce0),
    .a_we0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_we0),
    .a_d0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_d0)
);

crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2 grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start),
    .ap_done(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_done),
    .ap_idle(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_idle),
    .ap_ready(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_ready),
    .state_s_address0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_state_s_address0),
    .state_s_ce0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_state_s_ce0),
    .state_s_q0(state_s_q0),
    .idx(idx_load_reg_384),
    .buf_r_address0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_address0),
    .buf_r_ce0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_ce0),
    .buf_r_we0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_we0),
    .buf_r_d0(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_d0),
    .buf_r_address1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_address1),
    .buf_r_ce1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_ce1),
    .buf_r_we1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_we1),
    .buf_r_d1(grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_d1)
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
        grp_KeccakF1600_StatePermute_fu_162_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln474_fu_290_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
            grp_KeccakF1600_StatePermute_fu_162_ap_start_reg <= 1'b1;
        end else if ((grp_KeccakF1600_StatePermute_fu_162_ap_ready == 1'b1)) begin
            grp_KeccakF1600_StatePermute_fu_162_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_keccak_absorb_fu_149_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state4)) begin
            grp_keccak_absorb_fu_149_ap_start_reg <= 1'b1;
        end else if ((grp_keccak_absorb_fu_149_ap_ready == 1'b1)) begin
            grp_keccak_absorb_fu_149_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln362_fu_211_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start_reg <= 1'b1;
        end else if ((grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_ready == 1'b1)) begin
            grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state12)) begin
            grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start_reg <= 1'b1;
        end else if ((grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_ready == 1'b1)) begin
            grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln474_fu_290_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
            grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start_reg <= 1'b1;
        end else if ((grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_ready == 1'b1)) begin
            grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_34_fu_82 <= 5'd0;
    end else if (((icmp_ln362_fu_211_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_34_fu_82 <= add_ln362_fu_217_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln362_fu_211_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        idx_fu_94 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        idx_fu_94 <= add_ln474_fu_311_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln362_fu_211_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        nblocks_assign_fu_98 <= 3'd5;
    end else if (((icmp_ln474_fu_290_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
        nblocks_assign_fu_98 <= add_ln479_fu_296_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_reg_366 <= {{grp_keccak_absorb_fu_149_ap_return[7:3]}};
        state_pos_reg_361 <= grp_keccak_absorb_fu_149_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        idx_load_reg_384 <= idx_fu_94;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        state_s_addr_reg_371 <= zext_ln450_4_fu_248_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        t_0_reg_334 <= t_0_fu_184_p1;
        t_1_reg_339 <= {{nonce[15:8]}};
    end
end

assign ap_ST_fsm_state10_blk = 1'b0;

always @ (*) begin
    if ((grp_KeccakF1600_StatePermute_fu_162_ap_done == 1'b0)) begin
        ap_ST_fsm_state11_blk = 1'b1;
    end else begin
        ap_ST_fsm_state11_blk = 1'b0;
    end
end

assign ap_ST_fsm_state12_blk = 1'b0;

always @ (*) begin
    if ((grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_done == 1'b0)) begin
        ap_ST_fsm_state13_blk = 1'b1;
    end else begin
        ap_ST_fsm_state13_blk = 1'b0;
    end
end

always @ (*) begin
    if ((grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_done == 1'b0)) begin
        ap_ST_fsm_state14_blk = 1'b1;
    end else begin
        ap_ST_fsm_state14_blk = 1'b0;
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

assign ap_ST_fsm_state2_blk = 1'b0;

always @ (*) begin
    if ((grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_done == 1'b0)) begin
        ap_ST_fsm_state3_blk = 1'b1;
    end else begin
        ap_ST_fsm_state3_blk = 1'b0;
    end
end

assign ap_ST_fsm_state4_blk = 1'b0;

always @ (*) begin
    if ((grp_keccak_absorb_fu_149_ap_done == 1'b0)) begin
        ap_ST_fsm_state5_blk = 1'b1;
    end else begin
        ap_ST_fsm_state5_blk = 1'b0;
    end
end

assign ap_ST_fsm_state6_blk = 1'b0;

assign ap_ST_fsm_state7_blk = 1'b0;

assign ap_ST_fsm_state8_blk = 1'b0;

assign ap_ST_fsm_state9_blk = 1'b0;

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)) | ((1'b1 == ap_CS_fsm_state14) & (grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_done == 1'b1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state14) & (grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_done == 1'b1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        buf_address0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_address0;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        buf_address0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_address0;
    end else begin
        buf_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        buf_address1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_address1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        buf_address1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_address1;
    end else begin
        buf_address1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        buf_ce0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_ce0;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        buf_ce0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_ce0;
    end else begin
        buf_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        buf_ce1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_ce1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        buf_ce1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_buf_r_ce1;
    end else begin
        buf_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        buf_we0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_we0;
    end else begin
        buf_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        buf_we1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_buf_r_we1;
    end else begin
        buf_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        state_s_address0 = state_s_addr_3_reg_376;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        state_s_address0 = 64'd16;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        state_s_address0 = state_s_addr_reg_371;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        state_s_address0 = zext_ln450_4_fu_248_p1;
    end else if (((icmp_ln362_fu_211_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        state_s_address0 = zext_ln362_fu_206_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        state_s_address0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_state_s_address0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_address0 = grp_KeccakF1600_StatePermute_fu_162_state_address0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_address0 = grp_keccak_absorb_fu_149_s_address0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_s_address0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_address0;
    end else begin
        state_s_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_address1 = grp_KeccakF1600_StatePermute_fu_162_state_address1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_address1 = grp_keccak_absorb_fu_149_s_address1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_s_address1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_address1;
    end else begin
        state_s_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | ((icmp_ln362_fu_211_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        state_s_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        state_s_ce0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_state_s_ce0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_ce0 = grp_KeccakF1600_StatePermute_fu_162_state_ce0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_ce0 = grp_keccak_absorb_fu_149_s_ce0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_s_ce0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_ce0;
    end else begin
        state_s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_ce1 = grp_KeccakF1600_StatePermute_fu_162_state_ce1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_ce1 = grp_keccak_absorb_fu_149_s_ce1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_s_ce1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_ce1;
    end else begin
        state_s_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        state_s_d0 = xor_ln451_fu_280_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        state_s_d0 = xor_ln450_fu_273_p2;
    end else if (((icmp_ln362_fu_211_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        state_s_d0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_d0 = grp_KeccakF1600_StatePermute_fu_162_state_d0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_d0 = grp_keccak_absorb_fu_149_s_d0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_s_d0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_d0;
    end else begin
        state_s_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_d1 = grp_KeccakF1600_StatePermute_fu_162_state_d1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_d1 = grp_keccak_absorb_fu_149_s_d1;
    end else begin
        state_s_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | ((icmp_ln362_fu_211_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        state_s_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_we0 = grp_KeccakF1600_StatePermute_fu_162_state_we0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_we0 = grp_keccak_absorb_fu_149_s_we0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_s_we0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_state_s_we0;
    end else begin
        state_s_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        state_s_we1 = grp_KeccakF1600_StatePermute_fu_162_state_we1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_s_we1 = grp_keccak_absorb_fu_149_s_we1;
    end else begin
        state_s_we1 = 1'b0;
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
            if (((icmp_ln362_fu_211_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (grp_keccak_absorb_fu_149_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
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
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            if (((icmp_ln474_fu_290_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state11 : begin
            if (((1'b1 == ap_CS_fsm_state11) & (grp_KeccakF1600_StatePermute_fu_162_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            if (((1'b1 == ap_CS_fsm_state13) & (grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state14 : begin
            if (((1'b1 == ap_CS_fsm_state14) & (grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_address0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_address0;

assign a_ce0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_ce0;

assign a_d0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_d0;

assign a_we0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_a_we0;

assign add_ln362_fu_217_p2 = (i_34_fu_82 + 5'd1);

assign add_ln474_fu_311_p2 = (idx_fu_94 + 10'd136);

assign add_ln479_fu_296_p2 = ($signed(nblocks_assign_fu_98) + $signed(3'd7));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign grp_KeccakF1600_StatePermute_fu_162_ap_start = grp_KeccakF1600_StatePermute_fu_162_ap_start_reg;

assign grp_keccak_absorb_fu_149_ap_start = grp_keccak_absorb_fu_149_ap_start_reg;

assign grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_ap_start_reg;

assign grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177_ap_start_reg;

assign grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169_ap_start_reg;

assign icmp_ln362_fu_211_p2 = ((i_34_fu_82 == 5'd25) ? 1'b1 : 1'b0);

assign icmp_ln474_fu_290_p2 = ((nblocks_assign_fu_98 == 3'd0) ? 1'b1 : 1'b0);

assign seed_address0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_address0;

assign seed_address1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_address1;

assign seed_ce0 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_ce0;

assign seed_ce1 = grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142_seed_ce1;

assign shl_ln450_fu_267_p2 = 64'd31 << zext_ln450_fu_263_p1;

assign shl_ln_fu_255_p3 = {{trunc_ln450_fu_252_p1}, {3'd0}};

assign state_s_addr_3_reg_376 = 64'd16;

assign t_0_fu_184_p1 = nonce[7:0];

assign trunc_ln450_fu_252_p1 = state_pos_reg_361[2:0];

assign xor_ln450_fu_273_p2 = (state_s_q0 ^ shl_ln450_fu_267_p2);

assign xor_ln451_fu_280_p2 = (state_s_q0 ^ 64'd9223372036854775808);

assign zext_ln362_fu_206_p1 = i_34_fu_82;

assign zext_ln450_4_fu_248_p1 = i_reg_366;

assign zext_ln450_fu_263_p1 = shl_ln_fu_255_p3;

endmodule //crypto_sign_pqcrystals_dilithium2_ref_poly_uniform_gamma1
