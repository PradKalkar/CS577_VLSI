// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module invntt_tomont (
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
        a_q0,
        a_address1,
        a_ce1,
        a_q1,
        a_offset
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] a_address0;
output   a_ce0;
output   a_we0;
output  [31:0] a_d0;
input  [31:0] a_q0;
output  [9:0] a_address1;
output   a_ce1;
input  [31:0] a_q1;
input  [2:0] a_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] a_address0;
reg a_ce0;
reg a_we0;
reg[31:0] a_d0;
reg[9:0] a_address1;
reg a_ce1;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] zetas_address0;
reg    zetas_ce0;
wire   [22:0] zetas_q0;
wire   [11:0] zext_ln77_fu_166_p1;
reg   [11:0] zext_ln77_reg_493;
wire   [9:0] zext_ln83_fu_175_p1;
reg   [9:0] zext_ln83_reg_500;
wire    ap_CS_fsm_state2;
wire   [31:0] zext_ln84_fu_187_p1;
reg   [31:0] zext_ln84_reg_509;
wire    ap_CS_fsm_state3;
wire   [31:0] k_fu_210_p2;
reg   [31:0] k_reg_517;
wire   [0:0] icmp_ln84_fu_201_p2;
wire   [8:0] len_fu_221_p2;
wire   [31:0] zext_ln86_fu_238_p1;
reg   [31:0] zext_ln86_reg_532;
wire    ap_CS_fsm_state4;
wire   [9:0] zext_ln84_1_fu_266_p1;
reg   [9:0] zext_ln84_1_reg_537;
wire  signed [53:0] sext_ln86_fu_270_p1;
reg  signed [53:0] sext_ln86_reg_542;
reg   [9:0] a_addr_reg_550;
wire    ap_CS_fsm_state5;
wire   [0:0] icmp_ln86_fu_274_p2;
reg   [9:0] a_addr_15_reg_555;
wire   [31:0] j_4_fu_317_p2;
reg   [31:0] j_4_reg_561;
wire   [9:0] add_ln84_fu_323_p2;
reg   [31:0] t_reg_571;
wire    ap_CS_fsm_state6;
wire   [8:0] j_3_fu_407_p2;
reg   [8:0] j_3_reg_579;
wire    ap_CS_fsm_state9;
reg   [9:0] a_addr55_reg_584;
wire   [0:0] icmp_ln95_fu_401_p2;
reg   [8:0] len_0_reg_114;
reg   [9:0] j_reg_126;
wire   [0:0] tmp_30_fu_179_p3;
reg   [31:0] j_0_reg_138;
wire    ap_CS_fsm_state8;
reg   [8:0] j_1_reg_147;
wire    ap_CS_fsm_state10;
wire   [63:0] zext_ln85_fu_216_p1;
wire   [63:0] zext_ln87_fu_288_p1;
wire   [63:0] zext_ln88_3_fu_312_p1;
wire   [63:0] zext_ln96_1_fu_422_p1;
reg   [31:0] k_4_fu_58;
wire   [31:0] add_ln88_1_fu_331_p2;
wire    ap_CS_fsm_state7;
wire  signed [31:0] t_12_fu_396_p1;
wire  signed [31:0] t_10_fu_481_p1;
wire   [10:0] tmp_fu_158_p3;
wire   [1:0] tmp_31_fu_191_p4;
wire   [9:0] add_ln86_fu_233_p2;
wire   [8:0] trunc_ln84_fu_248_p1;
wire   [0:0] empty_71_fu_242_p2;
wire   [8:0] add_ln84_1_fu_252_p2;
wire   [8:0] start_fu_258_p3;
wire   [22:0] zeta_fu_227_p2;
wire   [11:0] trunc_ln87_fu_279_p1;
wire   [11:0] add_ln87_fu_283_p2;
wire   [11:0] zext_ln88_fu_297_p1;
wire   [11:0] trunc_ln88_fu_293_p1;
wire   [11:0] add_ln88_fu_301_p2;
wire   [11:0] add_ln88_2_fu_307_p2;
wire   [31:0] sub_ln89_fu_338_p2;
wire  signed [22:0] mul_ln90_fu_347_p0;
wire  signed [31:0] mul_ln90_fu_347_p1;
wire  signed [53:0] mul_ln90_fu_347_p2;
wire  signed [31:0] trunc_ln18_2_fu_356_p1;
wire   [31:0] t_11_fu_360_p2;
wire  signed [31:0] mul_ln19_2_fu_370_p1;
wire   [54:0] mul_ln19_2_fu_370_p2;
wire  signed [55:0] sext_ln90_1_fu_352_p1;
wire  signed [55:0] sext_ln19_12_fu_376_p1;
wire   [55:0] add_ln19_2_fu_380_p2;
wire   [23:0] trunc_ln19_1_fu_386_p4;
wire   [11:0] zext_ln96_fu_413_p1;
wire   [11:0] add_ln96_fu_417_p2;
wire  signed [31:0] sext_ln96_fu_427_p0;
wire  signed [31:0] mul_ln96_fu_431_p1;
wire  signed [48:0] mul_ln96_fu_431_p2;
wire  signed [31:0] trunc_ln18_fu_441_p1;
wire   [31:0] t_9_fu_445_p2;
wire  signed [31:0] mul_ln19_fu_455_p1;
wire   [54:0] mul_ln19_fu_455_p2;
wire  signed [55:0] sext_ln19_9_fu_461_p1;
wire  signed [55:0] sext_ln96_1_fu_437_p1;
wire   [55:0] add_ln19_fu_465_p2;
wire   [23:0] trunc_ln_fu_471_p4;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
end

ntt_zetas #(
    .DataWidth( 23 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
zetas_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(zetas_address0),
    .ce0(zetas_ce0),
    .q0(zetas_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        j_0_reg_138 <= j_4_reg_561;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_0_reg_138 <= zext_ln84_reg_509;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_30_fu_179_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_1_reg_147 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        j_1_reg_147 <= j_3_reg_579;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_30_fu_179_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_126 <= 10'd0;
    end else if (((icmp_ln86_fu_274_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        j_reg_126 <= add_ln84_fu_323_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln86_fu_274_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        k_4_fu_58 <= k_reg_517;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_4_fu_58 <= 32'd256;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln84_fu_201_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        len_0_reg_114 <= len_fu_221_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        len_0_reg_114 <= 9'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln95_fu_401_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        a_addr55_reg_584 <= zext_ln96_1_fu_422_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln86_fu_274_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        a_addr_15_reg_555 <= zext_ln88_3_fu_312_p1;
        a_addr_reg_550 <= zext_ln87_fu_288_p1;
        j_4_reg_561 <= j_4_fu_317_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        j_3_reg_579 <= j_3_fu_407_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln84_fu_201_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        k_reg_517 <= k_fu_210_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        sext_ln86_reg_542 <= sext_ln86_fu_270_p1;
        zext_ln84_1_reg_537[8 : 0] <= zext_ln84_1_fu_266_p1[8 : 0];
        zext_ln86_reg_532[9 : 0] <= zext_ln86_fu_238_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        t_reg_571 <= a_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        zext_ln77_reg_493[10 : 8] <= zext_ln77_fu_166_p1[10 : 8];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        zext_ln83_reg_500[8 : 0] <= zext_ln83_fu_175_p1[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        zext_ln84_reg_509[9 : 0] <= zext_ln84_fu_187_p1[9 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        a_address0 = a_addr55_reg_584;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        a_address0 = a_addr_15_reg_555;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address0 = a_addr_reg_550;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address0 = zext_ln87_fu_288_p1;
    end else begin
        a_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        a_address1 = zext_ln96_1_fu_422_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address1 = a_addr_15_reg_555;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address1 = zext_ln88_3_fu_312_p1;
    end else begin
        a_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6))) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state9))) begin
        a_ce1 = 1'b1;
    end else begin
        a_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        a_d0 = t_10_fu_481_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        a_d0 = t_12_fu_396_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_d0 = add_ln88_1_fu_331_p2;
    end else begin
        a_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6))) begin
        a_we0 = 1'b1;
    end else begin
        a_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((icmp_ln95_fu_401_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9)))) begin
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
    if (((icmp_ln95_fu_401_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        zetas_ce0 = 1'b1;
    end else begin
        zetas_ce0 = 1'b0;
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
            if (((tmp_30_fu_179_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln84_fu_201_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((icmp_ln86_fu_274_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state9 : begin
            if (((icmp_ln95_fu_401_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln19_2_fu_380_p2 = ($signed(sext_ln90_1_fu_352_p1) + $signed(sext_ln19_12_fu_376_p1));

assign add_ln19_fu_465_p2 = ($signed(sext_ln19_9_fu_461_p1) + $signed(sext_ln96_1_fu_437_p1));

assign add_ln84_1_fu_252_p2 = (trunc_ln84_fu_248_p1 + len_0_reg_114);

assign add_ln84_fu_323_p2 = (zext_ln84_1_reg_537 + zext_ln83_reg_500);

assign add_ln86_fu_233_p2 = (zext_ln83_reg_500 + j_reg_126);

assign add_ln87_fu_283_p2 = (zext_ln77_reg_493 + trunc_ln87_fu_279_p1);

assign add_ln88_1_fu_331_p2 = (a_q0 + a_q1);

assign add_ln88_2_fu_307_p2 = (zext_ln77_reg_493 + add_ln88_fu_301_p2);

assign add_ln88_fu_301_p2 = (zext_ln88_fu_297_p1 + trunc_ln88_fu_293_p1);

assign add_ln96_fu_417_p2 = (zext_ln96_fu_413_p1 + zext_ln77_reg_493);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign empty_71_fu_242_p2 = ((j_reg_126 > add_ln86_fu_233_p2) ? 1'b1 : 1'b0);

assign icmp_ln84_fu_201_p2 = ((tmp_31_fu_191_p4 == 2'd0) ? 1'b1 : 1'b0);

assign icmp_ln86_fu_274_p2 = ((j_0_reg_138 < zext_ln86_reg_532) ? 1'b1 : 1'b0);

assign icmp_ln95_fu_401_p2 = ((j_1_reg_147 == 9'd256) ? 1'b1 : 1'b0);

assign j_3_fu_407_p2 = (j_1_reg_147 + 9'd1);

assign j_4_fu_317_p2 = (32'd1 + j_0_reg_138);

assign k_fu_210_p2 = ($signed(32'd4294967295) + $signed(k_4_fu_58));

assign len_fu_221_p2 = len_0_reg_114 << 9'd1;

assign mul_ln19_2_fu_370_p1 = t_11_fu_360_p2;

assign mul_ln19_2_fu_370_p2 = ($signed(55'd36028797010583551) * $signed(mul_ln19_2_fu_370_p1));

assign mul_ln19_fu_455_p1 = t_9_fu_445_p2;

assign mul_ln19_fu_455_p2 = ($signed(55'd36028797010583551) * $signed(mul_ln19_fu_455_p1));

assign mul_ln90_fu_347_p0 = sext_ln86_reg_542;

assign mul_ln90_fu_347_p1 = sub_ln89_fu_338_p2;

assign mul_ln90_fu_347_p2 = ($signed(mul_ln90_fu_347_p0) * $signed(mul_ln90_fu_347_p1));

assign mul_ln96_fu_431_p1 = sext_ln96_fu_427_p0;

assign mul_ln96_fu_431_p2 = ($signed({{1'b0}, {49'd41978}}) * $signed(mul_ln96_fu_431_p1));

assign sext_ln19_12_fu_376_p1 = $signed(mul_ln19_2_fu_370_p2);

assign sext_ln19_9_fu_461_p1 = $signed(mul_ln19_fu_455_p2);

assign sext_ln86_fu_270_p1 = $signed(zeta_fu_227_p2);

assign sext_ln90_1_fu_352_p1 = mul_ln90_fu_347_p2;

assign sext_ln96_1_fu_437_p1 = mul_ln96_fu_431_p2;

assign sext_ln96_fu_427_p0 = a_q1;

assign start_fu_258_p3 = ((empty_71_fu_242_p2[0:0] === 1'b1) ? trunc_ln84_fu_248_p1 : add_ln84_1_fu_252_p2);

assign sub_ln89_fu_338_p2 = (t_reg_571 - a_q1);

assign t_10_fu_481_p1 = $signed(trunc_ln_fu_471_p4);

assign t_11_fu_360_p2 = ($signed({{1'b0}, {32'd58728449}}) * $signed(trunc_ln18_2_fu_356_p1));

assign t_12_fu_396_p1 = $signed(trunc_ln19_1_fu_386_p4);

assign t_9_fu_445_p2 = ($signed({{1'b0}, {32'd58728449}}) * $signed(trunc_ln18_fu_441_p1));

assign tmp_30_fu_179_p3 = len_0_reg_114[32'd8];

assign tmp_31_fu_191_p4 = {{j_reg_126[9:8]}};

assign tmp_fu_158_p3 = {{a_offset}, {8'd0}};

assign trunc_ln18_2_fu_356_p1 = mul_ln90_fu_347_p2[31:0];

assign trunc_ln18_fu_441_p1 = mul_ln96_fu_431_p2[31:0];

assign trunc_ln19_1_fu_386_p4 = {{add_ln19_2_fu_380_p2[55:32]}};

assign trunc_ln84_fu_248_p1 = j_reg_126[8:0];

assign trunc_ln87_fu_279_p1 = j_0_reg_138[11:0];

assign trunc_ln88_fu_293_p1 = j_0_reg_138[11:0];

assign trunc_ln_fu_471_p4 = {{add_ln19_fu_465_p2[55:32]}};

assign zeta_fu_227_p2 = (23'd0 - zetas_q0);

assign zetas_address0 = zext_ln85_fu_216_p1;

assign zext_ln77_fu_166_p1 = tmp_fu_158_p3;

assign zext_ln83_fu_175_p1 = len_0_reg_114;

assign zext_ln84_1_fu_266_p1 = start_fu_258_p3;

assign zext_ln84_fu_187_p1 = j_reg_126;

assign zext_ln85_fu_216_p1 = k_fu_210_p2;

assign zext_ln86_fu_238_p1 = add_ln86_fu_233_p2;

assign zext_ln87_fu_288_p1 = add_ln87_fu_283_p2;

assign zext_ln88_3_fu_312_p1 = add_ln88_2_fu_307_p2;

assign zext_ln88_fu_297_p1 = len_0_reg_114;

assign zext_ln96_1_fu_422_p1 = add_ln96_fu_417_p2;

assign zext_ln96_fu_413_p1 = j_1_reg_147;

always @ (posedge ap_clk) begin
    zext_ln77_reg_493[7:0] <= 8'b00000000;
    zext_ln77_reg_493[11] <= 1'b0;
    zext_ln83_reg_500[9] <= 1'b0;
    zext_ln84_reg_509[31:10] <= 22'b0000000000000000000000;
    zext_ln86_reg_532[31:10] <= 22'b0000000000000000000000;
    zext_ln84_1_reg_537[9] <= 1'b0;
end

endmodule //invntt_tomont
