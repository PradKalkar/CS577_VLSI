// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module crypto_sign_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        w0_vec_coeffs_address0,
        w0_vec_coeffs_ce0,
        w0_vec_coeffs_we0,
        w0_vec_coeffs_d0,
        w0_vec_coeffs_address1,
        w0_vec_coeffs_ce1,
        w0_vec_coeffs_q1,
        h_vec_coeffs_address0,
        h_vec_coeffs_ce0,
        h_vec_coeffs_q0
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] w0_vec_coeffs_address0;
output   w0_vec_coeffs_ce0;
output   w0_vec_coeffs_we0;
output  [31:0] w0_vec_coeffs_d0;
output  [9:0] w0_vec_coeffs_address1;
output   w0_vec_coeffs_ce1;
input  [31:0] w0_vec_coeffs_q1;
output  [9:0] h_vec_coeffs_address0;
output   h_vec_coeffs_ce0;
input  [31:0] h_vec_coeffs_q0;

reg ap_idle;
reg w0_vec_coeffs_ce0;
reg w0_vec_coeffs_we0;
reg w0_vec_coeffs_ce1;
reg h_vec_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_idle_pp0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln234_fu_106_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
reg   [9:0] w0_vec_coeffs_addr_reg_232;
wire    ap_block_pp0_stage0_11001;
wire   [63:0] zext_ln88_3_fu_174_p1;
wire    ap_block_pp0_stage0;
reg   [8:0] i_fu_46;
wire   [8:0] add_ln87_fu_180_p2;
wire    ap_loop_init;
reg   [8:0] ap_sig_allocacmp_i_load;
reg   [2:0] i_18_fu_50;
wire   [2:0] select_ln234_1_fu_144_p3;
reg   [2:0] ap_sig_allocacmp_i_18_load;
reg   [10:0] indvar_flatten132_fu_54;
wire   [10:0] add_ln234_1_fu_112_p2;
reg   [10:0] ap_sig_allocacmp_indvar_flatten132_load;
wire   [0:0] icmp_ln87_fu_130_p2;
wire   [2:0] add_ln234_fu_124_p2;
wire   [1:0] trunc_ln88_fu_152_p1;
wire   [8:0] select_ln234_fu_136_p3;
wire   [9:0] tmp_s_fu_156_p3;
wire   [9:0] zext_ln88_fu_164_p1;
wire   [9:0] add_ln88_fu_168_p2;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg   [0:0] ap_NS_fsm;
wire    ap_enable_pp0;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_done_reg = 1'b0;
end

crypto_sign_flow_control_loop_pipe_sequential_init flow_control_loop_pipe_sequential_init_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage0),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue_int == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((ap_loop_exit_ready == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_exit_pp0_iter0_stage0)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter1 <= ap_start_int;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln234_fu_106_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_18_fu_50 <= select_ln234_1_fu_144_p3;
        end else if ((ap_loop_init == 1'b1)) begin
            i_18_fu_50 <= 3'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln234_fu_106_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_fu_46 <= add_ln87_fu_180_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_46 <= 9'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln234_fu_106_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            indvar_flatten132_fu_54 <= add_ln234_1_fu_112_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            indvar_flatten132_fu_54 <= 11'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln234_fu_106_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        w0_vec_coeffs_addr_reg_232 <= zext_ln88_3_fu_174_p1;
    end
end

always @ (*) begin
    if (((icmp_ln234_fu_106_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_exit_ready == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_start_int == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_init == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_i_18_load = 3'd0;
    end else begin
        ap_sig_allocacmp_i_18_load = i_18_fu_50;
    end
end

always @ (*) begin
    if (((ap_loop_init == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_i_load = 9'd0;
    end else begin
        ap_sig_allocacmp_i_load = i_fu_46;
    end
end

always @ (*) begin
    if (((ap_loop_init == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_indvar_flatten132_load = 11'd0;
    end else begin
        ap_sig_allocacmp_indvar_flatten132_load = indvar_flatten132_fu_54;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        h_vec_coeffs_ce0 = 1'b1;
    end else begin
        h_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        w0_vec_coeffs_ce0 = 1'b1;
    end else begin
        w0_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        w0_vec_coeffs_ce1 = 1'b1;
    end else begin
        w0_vec_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        w0_vec_coeffs_we0 = 1'b1;
    end else begin
        w0_vec_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln234_1_fu_112_p2 = (ap_sig_allocacmp_indvar_flatten132_load + 11'd1);

assign add_ln234_fu_124_p2 = (ap_sig_allocacmp_i_18_load + 3'd1);

assign add_ln87_fu_180_p2 = (select_ln234_fu_136_p3 + 9'd1);

assign add_ln88_fu_168_p2 = (tmp_s_fu_156_p3 + zext_ln88_fu_164_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start_int;

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign h_vec_coeffs_address0 = zext_ln88_3_fu_174_p1;

assign icmp_ln234_fu_106_p2 = ((ap_sig_allocacmp_indvar_flatten132_load == 11'd1024) ? 1'b1 : 1'b0);

assign icmp_ln87_fu_130_p2 = ((ap_sig_allocacmp_i_load == 9'd256) ? 1'b1 : 1'b0);

assign select_ln234_1_fu_144_p3 = ((icmp_ln87_fu_130_p2[0:0] == 1'b1) ? add_ln234_fu_124_p2 : ap_sig_allocacmp_i_18_load);

assign select_ln234_fu_136_p3 = ((icmp_ln87_fu_130_p2[0:0] == 1'b1) ? 9'd0 : ap_sig_allocacmp_i_load);

assign tmp_s_fu_156_p3 = {{trunc_ln88_fu_152_p1}, {8'd0}};

assign trunc_ln88_fu_152_p1 = select_ln234_1_fu_144_p3[1:0];

assign w0_vec_coeffs_address0 = w0_vec_coeffs_addr_reg_232;

assign w0_vec_coeffs_address1 = zext_ln88_3_fu_174_p1;

assign w0_vec_coeffs_d0 = (h_vec_coeffs_q0 + w0_vec_coeffs_q1);

assign zext_ln88_3_fu_174_p1 = add_ln88_fu_168_p2;

assign zext_ln88_fu_164_p1 = select_ln234_fu_136_p3;

endmodule //crypto_sign_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1
