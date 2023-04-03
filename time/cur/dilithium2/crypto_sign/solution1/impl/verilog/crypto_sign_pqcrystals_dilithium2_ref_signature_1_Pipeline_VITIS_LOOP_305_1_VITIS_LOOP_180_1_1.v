// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module crypto_sign_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        t0_vec_coeffs_address0,
        t0_vec_coeffs_ce0,
        t0_vec_coeffs_q0,
        h_vec_coeffs_address0,
        h_vec_coeffs_ce0,
        h_vec_coeffs_we0,
        h_vec_coeffs_d0,
        cp_coeffs_address0,
        cp_coeffs_ce0,
        cp_coeffs_q0
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] t0_vec_coeffs_address0;
output   t0_vec_coeffs_ce0;
input  [31:0] t0_vec_coeffs_q0;
output  [9:0] h_vec_coeffs_address0;
output   h_vec_coeffs_ce0;
output   h_vec_coeffs_we0;
output  [31:0] h_vec_coeffs_d0;
output  [7:0] cp_coeffs_address0;
output   cp_coeffs_ce0;
input  [31:0] cp_coeffs_q0;

reg ap_idle;
reg t0_vec_coeffs_ce0;
reg h_vec_coeffs_ce0;
reg h_vec_coeffs_we0;
reg cp_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_idle_pp0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln305_fu_127_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire   [63:0] zext_ln181_2_fu_200_p1;
reg   [63:0] zext_ln181_2_reg_305;
wire    ap_block_pp0_stage0_11001;
wire    ap_block_pp0_stage0;
wire   [63:0] i_51_cast_fu_185_p1;
reg   [8:0] i_fu_58;
wire   [8:0] add_ln180_fu_205_p2;
wire    ap_loop_init;
reg   [8:0] ap_sig_allocacmp_i_load;
reg   [2:0] i_16_fu_62;
wire   [2:0] select_ln305_2_fu_165_p3;
reg   [2:0] ap_sig_allocacmp_i_16_load;
reg   [10:0] indvar_flatten111_fu_66;
wire   [10:0] add_ln305_fu_133_p2;
reg   [10:0] ap_sig_allocacmp_indvar_flatten111_load;
wire   [0:0] icmp_ln180_fu_151_p2;
wire   [2:0] add_ln305_1_fu_145_p2;
wire   [1:0] trunc_ln181_fu_173_p1;
wire   [8:0] select_ln305_fu_157_p3;
wire   [9:0] tmp_s_fu_177_p3;
wire   [9:0] zext_ln181_fu_190_p1;
wire   [9:0] add_ln181_fu_194_p2;
wire   [63:0] mul_ln181_fu_234_p2;
wire  signed [31:0] t_fu_244_p0;
wire   [26:0] t_fu_244_p1;
wire  signed [31:0] t_fu_244_p2;
wire  signed [23:0] mul_ln19_fu_254_p1;
wire   [54:0] mul_ln19_fu_254_p2;
wire  signed [63:0] sext_ln19_11_fu_260_p1;
wire   [63:0] add_ln19_fu_264_p2;
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

crypto_sign_mul_32s_32s_64_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
mul_32s_32s_64_1_1_U300(
    .din0(t0_vec_coeffs_q0),
    .din1(cp_coeffs_q0),
    .dout(mul_ln181_fu_234_p2)
);

crypto_sign_mul_32s_27ns_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 27 ),
    .dout_WIDTH( 32 ))
mul_32s_27ns_32_1_1_U301(
    .din0(t_fu_244_p0),
    .din1(t_fu_244_p1),
    .dout(t_fu_244_p2)
);

crypto_sign_mul_32s_24s_55_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 24 ),
    .dout_WIDTH( 55 ))
mul_32s_24s_55_1_1_U302(
    .din0(t_fu_244_p2),
    .din1(mul_ln19_fu_254_p1),
    .dout(mul_ln19_fu_254_p2)
);

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
        if (((icmp_ln305_fu_127_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_16_fu_62 <= select_ln305_2_fu_165_p3;
        end else if ((ap_loop_init == 1'b1)) begin
            i_16_fu_62 <= 3'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln305_fu_127_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_fu_58 <= add_ln180_fu_205_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_58 <= 9'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln305_fu_127_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            indvar_flatten111_fu_66 <= add_ln305_fu_133_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            indvar_flatten111_fu_66 <= 11'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln305_fu_127_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        zext_ln181_2_reg_305[9 : 0] <= zext_ln181_2_fu_200_p1[9 : 0];
    end
end

always @ (*) begin
    if (((icmp_ln305_fu_127_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
    if (((ap_idle_pp0 == 1'b1) & (ap_start_int == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
        ap_sig_allocacmp_i_16_load = 3'd0;
    end else begin
        ap_sig_allocacmp_i_16_load = i_16_fu_62;
    end
end

always @ (*) begin
    if (((ap_loop_init == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_i_load = 9'd0;
    end else begin
        ap_sig_allocacmp_i_load = i_fu_58;
    end
end

always @ (*) begin
    if (((ap_loop_init == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_indvar_flatten111_load = 11'd0;
    end else begin
        ap_sig_allocacmp_indvar_flatten111_load = indvar_flatten111_fu_66;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        cp_coeffs_ce0 = 1'b1;
    end else begin
        cp_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        h_vec_coeffs_ce0 = 1'b1;
    end else begin
        h_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        h_vec_coeffs_we0 = 1'b1;
    end else begin
        h_vec_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        t0_vec_coeffs_ce0 = 1'b1;
    end else begin
        t0_vec_coeffs_ce0 = 1'b0;
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

assign add_ln180_fu_205_p2 = (select_ln305_fu_157_p3 + 9'd1);

assign add_ln181_fu_194_p2 = (tmp_s_fu_177_p3 + zext_ln181_fu_190_p1);

assign add_ln19_fu_264_p2 = ($signed(sext_ln19_11_fu_260_p1) + $signed(mul_ln181_fu_234_p2));

assign add_ln305_1_fu_145_p2 = (ap_sig_allocacmp_i_16_load + 3'd1);

assign add_ln305_fu_133_p2 = (ap_sig_allocacmp_indvar_flatten111_load + 11'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start_int;

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign cp_coeffs_address0 = i_51_cast_fu_185_p1;

assign h_vec_coeffs_address0 = zext_ln181_2_reg_305;

assign h_vec_coeffs_d0 = {{add_ln19_fu_264_p2[63:32]}};

assign i_51_cast_fu_185_p1 = select_ln305_fu_157_p3;

assign icmp_ln180_fu_151_p2 = ((ap_sig_allocacmp_i_load == 9'd256) ? 1'b1 : 1'b0);

assign icmp_ln305_fu_127_p2 = ((ap_sig_allocacmp_indvar_flatten111_load == 11'd1024) ? 1'b1 : 1'b0);

assign mul_ln19_fu_254_p1 = 55'd36028797010583551;

assign select_ln305_2_fu_165_p3 = ((icmp_ln180_fu_151_p2[0:0] == 1'b1) ? add_ln305_1_fu_145_p2 : ap_sig_allocacmp_i_16_load);

assign select_ln305_fu_157_p3 = ((icmp_ln180_fu_151_p2[0:0] == 1'b1) ? 9'd0 : ap_sig_allocacmp_i_load);

assign sext_ln19_11_fu_260_p1 = $signed(mul_ln19_fu_254_p2);

assign t0_vec_coeffs_address0 = zext_ln181_2_fu_200_p1;

assign t_fu_244_p0 = mul_ln181_fu_234_p2[31:0];

assign t_fu_244_p1 = 32'd58728449;

assign tmp_s_fu_177_p3 = {{trunc_ln181_fu_173_p1}, {8'd0}};

assign trunc_ln181_fu_173_p1 = select_ln305_2_fu_165_p3[1:0];

assign zext_ln181_2_fu_200_p1 = add_ln181_fu_194_p2;

assign zext_ln181_fu_190_p1 = select_ln305_fu_157_p3;

always @ (posedge ap_clk) begin
    zext_ln181_2_reg_305[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //crypto_sign_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1
