// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module crypto_sign_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        zext_ln57,
        add_ln57_5,
        zext_ln58_5,
        s1_vec_coeffs_address0,
        s1_vec_coeffs_ce0,
        s1_vec_coeffs_we0,
        s1_vec_coeffs_d0,
        s1_vec_coeffs_q0,
        s1_vec_coeffs_address1,
        s1_vec_coeffs_ce1,
        s1_vec_coeffs_q1,
        zext_ln50_1,
        sext_ln57
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] zext_ln57;
input  [10:0] add_ln57_5;
input  [9:0] zext_ln58_5;
output  [9:0] s1_vec_coeffs_address0;
output   s1_vec_coeffs_ce0;
output   s1_vec_coeffs_we0;
output  [31:0] s1_vec_coeffs_d0;
input  [31:0] s1_vec_coeffs_q0;
output  [9:0] s1_vec_coeffs_address1;
output   s1_vec_coeffs_ce1;
input  [31:0] s1_vec_coeffs_q1;
input  [7:0] zext_ln50_1;
input  [22:0] sext_ln57;

reg ap_idle;
reg[9:0] s1_vec_coeffs_address0;
reg s1_vec_coeffs_ce0;
reg s1_vec_coeffs_we0;
reg[31:0] s1_vec_coeffs_d0;
reg[9:0] s1_vec_coeffs_address1;
reg s1_vec_coeffs_ce1;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    ap_block_state1_pp0_stage0_iter0;
wire   [0:0] icmp_ln57_fu_127_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire    ap_CS_fsm_state4;
wire    ap_block_state4_pp0_stage3_iter0;
wire  signed [53:0] sext_ln57_cast_fu_107_p1;
reg  signed [53:0] sext_ln57_cast_reg_253;
reg   [9:0] s1_vec_coeffs_addr_1_reg_261;
reg   [9:0] s1_vec_coeffs_addr_reg_267;
wire  signed [31:0] sext_ln19_9_fu_229_p1;
reg  signed [31:0] sext_ln19_9_reg_273;
wire    ap_CS_fsm_state2;
wire    ap_block_state2_pp0_stage1_iter0;
wire   [63:0] zext_ln59_fu_143_p1;
wire   [63:0] zext_ln58_fu_160_p1;
reg   [10:0] j_4_fu_48;
wire   [10:0] zext_ln57_cast_fu_115_p1;
wire   [10:0] add_ln57_fu_165_p2;
wire    ap_loop_init;
reg   [10:0] ap_sig_allocacmp_j;
wire   [31:0] sub_ln59_fu_233_p2;
wire    ap_CS_fsm_state3;
wire    ap_block_state3_pp0_stage2_iter0;
wire   [31:0] add_ln60_fu_240_p2;
wire   [9:0] trunc_ln59_fu_133_p1;
wire   [9:0] add_ln59_fu_137_p2;
wire   [9:0] zext_ln50_1_cast_fu_111_p1;
wire   [9:0] add_ln58_fu_148_p2;
wire   [9:0] add_ln58_3_fu_154_p2;
wire  signed [22:0] mul_ln58_fu_180_p1;
wire  signed [53:0] mul_ln58_fu_180_p2;
wire  signed [31:0] t_fu_193_p0;
wire   [26:0] t_fu_193_p1;
wire  signed [31:0] t_fu_193_p2;
wire  signed [23:0] mul_ln19_fu_203_p1;
wire   [54:0] mul_ln19_fu_203_p2;
wire  signed [55:0] sext_ln19_1_fu_209_p1;
wire  signed [55:0] sext_ln15_fu_185_p1;
wire   [55:0] add_ln19_fu_213_p2;
wire   [23:0] t_8_fu_219_p4;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg   [3:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 ap_done_reg = 1'b0;
end

crypto_sign_mul_32s_23s_54_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 23 ),
    .dout_WIDTH( 54 ))
mul_32s_23s_54_1_1_U141(
    .din0(s1_vec_coeffs_q1),
    .din1(mul_ln58_fu_180_p1),
    .dout(mul_ln58_fu_180_p2)
);

crypto_sign_mul_32s_27ns_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 27 ),
    .dout_WIDTH( 32 ))
mul_32s_27ns_32_1_1_U142(
    .din0(t_fu_193_p0),
    .din1(t_fu_193_p1),
    .dout(t_fu_193_p2)
);

crypto_sign_mul_32s_24s_55_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 24 ),
    .dout_WIDTH( 55 ))
mul_32s_24s_55_1_1_U143(
    .din0(t_fu_193_p2),
    .din1(mul_ln19_fu_203_p1),
    .dout(mul_ln19_fu_203_p2)
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
        ap_CS_fsm <= ap_ST_fsm_state1;
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
        end else if (((ap_loop_exit_ready == 1'b1) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        if ((icmp_ln57_fu_127_p2 == 1'd0)) begin
            j_4_fu_48 <= add_ln57_fu_165_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            j_4_fu_48 <= zext_ln57_cast_fu_115_p1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln57_fu_127_p2 == 1'd0) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        s1_vec_coeffs_addr_1_reg_261 <= zext_ln59_fu_143_p1;
        s1_vec_coeffs_addr_reg_267 <= zext_ln58_fu_160_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        sext_ln19_9_reg_273 <= sext_ln19_9_fu_229_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        sext_ln57_cast_reg_253 <= sext_ln57_cast_fu_107_p1;
    end
end

always @ (*) begin
    if ((ap_start_int == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

assign ap_ST_fsm_state2_blk = 1'b0;

assign ap_ST_fsm_state3_blk = 1'b0;

assign ap_ST_fsm_state4_blk = 1'b0;

always @ (*) begin
    if (((icmp_ln57_fu_127_p2 == 1'd1) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_exit_ready == 1'b1) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_init == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_sig_allocacmp_j = zext_ln57_cast_fu_115_p1;
    end else begin
        ap_sig_allocacmp_j = j_4_fu_48;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s1_vec_coeffs_address0 = s1_vec_coeffs_addr_1_reg_261;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s1_vec_coeffs_address0 = s1_vec_coeffs_addr_reg_267;
    end else if (((icmp_ln57_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        s1_vec_coeffs_address0 = zext_ln59_fu_143_p1;
    end else begin
        s1_vec_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        s1_vec_coeffs_address1 = s1_vec_coeffs_addr_1_reg_261;
    end else if (((icmp_ln57_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        s1_vec_coeffs_address1 = zext_ln58_fu_160_p1;
    end else begin
        s1_vec_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4) | ((icmp_ln57_fu_127_p2 == 1'd0) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        s1_vec_coeffs_ce0 = 1'b1;
    end else begin
        s1_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | ((icmp_ln57_fu_127_p2 == 1'd0) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        s1_vec_coeffs_ce1 = 1'b1;
    end else begin
        s1_vec_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s1_vec_coeffs_d0 = add_ln60_fu_240_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s1_vec_coeffs_d0 = sub_ln59_fu_233_p2;
    end else begin
        s1_vec_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4))) begin
        s1_vec_coeffs_we0 = 1'b1;
    end else begin
        s1_vec_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((icmp_ln57_fu_127_p2 == 1'd1) & (ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln19_fu_213_p2 = ($signed(sext_ln19_1_fu_209_p1) + $signed(sext_ln15_fu_185_p1));

assign add_ln57_fu_165_p2 = (ap_sig_allocacmp_j + 11'd1);

assign add_ln58_3_fu_154_p2 = (add_ln58_fu_148_p2 + trunc_ln59_fu_133_p1);

assign add_ln58_fu_148_p2 = (zext_ln58_5 + zext_ln50_1_cast_fu_111_p1);

assign add_ln59_fu_137_p2 = (zext_ln58_5 + trunc_ln59_fu_133_p1);

assign add_ln60_fu_240_p2 = ($signed(s1_vec_coeffs_q1) + $signed(sext_ln19_9_reg_273));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_start_int == 1'b0);
end

assign ap_block_state2_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign icmp_ln57_fu_127_p2 = ((ap_sig_allocacmp_j == add_ln57_5) ? 1'b1 : 1'b0);

assign mul_ln19_fu_203_p1 = 55'd36028797010583551;

assign mul_ln58_fu_180_p1 = sext_ln57_cast_reg_253;

assign sext_ln15_fu_185_p1 = mul_ln58_fu_180_p2;

assign sext_ln19_1_fu_209_p1 = $signed(mul_ln19_fu_203_p2);

assign sext_ln19_9_fu_229_p1 = $signed(t_8_fu_219_p4);

assign sext_ln57_cast_fu_107_p1 = $signed(sext_ln57);

assign sub_ln59_fu_233_p2 = ($signed(s1_vec_coeffs_q0) - $signed(sext_ln19_9_fu_229_p1));

assign t_8_fu_219_p4 = {{add_ln19_fu_213_p2[55:32]}};

assign t_fu_193_p0 = mul_ln58_fu_180_p2[31:0];

assign t_fu_193_p1 = 32'd58728449;

assign trunc_ln59_fu_133_p1 = ap_sig_allocacmp_j[9:0];

assign zext_ln50_1_cast_fu_111_p1 = zext_ln50_1;

assign zext_ln57_cast_fu_115_p1 = zext_ln57;

assign zext_ln58_fu_160_p1 = add_ln58_3_fu_154_p2;

assign zext_ln59_fu_143_p1 = add_ln59_fu_137_p2;

endmodule //crypto_sign_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3
