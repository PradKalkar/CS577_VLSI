-- ==============================================================
-- RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
-- Version: 2022.2
-- Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity crypto_sign_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    tmp_921 : IN STD_LOGIC_VECTOR (4 downto 0);
    add_ln31_3 : IN STD_LOGIC_VECTOR (12 downto 0);
    sm_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
    sm_ce0 : OUT STD_LOGIC;
    sm_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    sm_address1 : OUT STD_LOGIC_VECTOR (12 downto 0);
    sm_ce1 : OUT STD_LOGIC;
    sm_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
    trunc_ln418_1 : IN STD_LOGIC_VECTOR (4 downto 0);
    s_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    s_ce0 : OUT STD_LOGIC;
    s_we0 : OUT STD_LOGIC;
    s_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
    s_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
    s_ce1 : OUT STD_LOGIC;
    s_q1 : IN STD_LOGIC_VECTOR (63 downto 0) );
end;


architecture behav of crypto_sign_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_fsm_pp0_stage1 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_fsm_pp0_stage2 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_fsm_pp0_stage3 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv64_FFFFFFFFFFFFFFFF : STD_LOGIC_VECTOR (63 downto 0) := "1111111111111111111111111111111111111111111111111111111111111111";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv13_1 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000001";
    constant ap_const_lv13_2 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000010";
    constant ap_const_lv13_3 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000011";
    constant ap_const_lv13_4 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000100";
    constant ap_const_lv13_5 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000101";
    constant ap_const_lv13_6 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000110";
    constant ap_const_lv13_7 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000111";

attribute shreg_extract : string;
    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage1 : signal is "none";
    signal ap_block_state2_pp0_stage1_iter0 : BOOLEAN;
    signal ap_block_state6_pp0_stage1_iter1 : BOOLEAN;
    signal ap_block_pp0_stage1_subdone : BOOLEAN;
    signal icmp_ln416_fu_204_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_condition_exit_pp0_iter0_stage1 : STD_LOGIC;
    signal ap_loop_exit_ready : STD_LOGIC;
    signal ap_ready_int : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage3 : signal is "none";
    signal ap_block_state4_pp0_stage3_iter0 : BOOLEAN;
    signal ap_block_pp0_stage3_subdone : BOOLEAN;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal icmp_ln416_reg_412 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_pp0_stage1_11001 : BOOLEAN;
    signal add_ln31_fu_231_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_reg_416 : STD_LOGIC_VECTOR (12 downto 0);
    signal s_addr_reg_436 : STD_LOGIC_VECTOR (4 downto 0);
    signal addr_cmp_fu_265_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal addr_cmp_reg_442 : STD_LOGIC_VECTOR (0 downto 0);
    signal sm_load_reg_447 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_pp0_stage2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage2 : signal is "none";
    signal ap_block_state3_pp0_stage2_iter0 : BOOLEAN;
    signal ap_block_pp0_stage2_11001 : BOOLEAN;
    signal sm_load_1_reg_452 : STD_LOGIC_VECTOR (7 downto 0);
    signal s_load_reg_467 : STD_LOGIC_VECTOR (63 downto 0);
    signal sm_load_2_reg_472 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_block_pp0_stage3_11001 : BOOLEAN;
    signal sm_load_3_reg_477 : STD_LOGIC_VECTOR (7 downto 0);
    signal sm_load_4_reg_492 : STD_LOGIC_VECTOR (7 downto 0);
    signal sm_load_5_reg_497 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_enable_reg_pp0_iter0_reg : STD_LOGIC := '0';
    signal zext_ln31_38_fu_236_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage1 : BOOLEAN;
    signal zext_ln31_39_fu_247_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln417_fu_257_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln31_40_fu_286_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage2 : BOOLEAN;
    signal zext_ln31_41_fu_296_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln31_42_fu_306_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage3 : BOOLEAN;
    signal zext_ln31_43_fu_316_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln31_44_fu_326_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal zext_ln31_45_fu_336_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal reuse_addr_reg_fu_66 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_loop_init : STD_LOGIC;
    signal reuse_reg_fu_70 : STD_LOGIC_VECTOR (63 downto 0);
    signal xor_ln417_fu_364_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_36_fu_74 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_64_fu_209_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal trunc_ln417_fu_215_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal shl_ln_fu_219_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln31_fu_227_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_15_fu_241_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln417_fu_252_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal add_ln31_16_fu_281_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_17_fu_291_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_18_fu_301_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_19_fu_311_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_20_fu_321_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln31_21_fu_331_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal reuse_select_fu_358_p3 : STD_LOGIC_VECTOR (63 downto 0);
    signal r_7_7_fu_341_p9 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_continue_int : STD_LOGIC;
    signal ap_done_int : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_idle_pp0_1to1 : STD_LOGIC;
    signal ap_block_pp0_stage2_subdone : BOOLEAN;
    signal ap_enable_pp0 : STD_LOGIC;
    signal ap_start_int : STD_LOGIC;
    signal ap_ce_reg : STD_LOGIC;

    component crypto_sign_flow_control_loop_pipe_sequential_init IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_start_int : OUT STD_LOGIC;
        ap_loop_init : OUT STD_LOGIC;
        ap_ready_int : IN STD_LOGIC;
        ap_loop_exit_ready : IN STD_LOGIC;
        ap_loop_exit_done : IN STD_LOGIC;
        ap_continue_int : OUT STD_LOGIC;
        ap_done_int : IN STD_LOGIC );
    end component;



begin
    flow_control_loop_pipe_sequential_init_U : component crypto_sign_flow_control_loop_pipe_sequential_init
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => ap_start,
        ap_ready => ap_ready,
        ap_done => ap_done,
        ap_start_int => ap_start_int,
        ap_loop_init => ap_loop_init,
        ap_ready_int => ap_ready_int,
        ap_loop_exit_ready => ap_condition_exit_pp0_iter0_stage1,
        ap_loop_exit_done => ap_done_int,
        ap_continue_int => ap_continue_int,
        ap_done_int => ap_done_int);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue_int = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((ap_loop_exit_ready = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_condition_exit_pp0_iter0_stage1)) then 
                    ap_enable_reg_pp0_iter0_reg <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) then 
                    ap_enable_reg_pp0_iter0_reg <= ap_start_int;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage3_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3))) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                end if; 
            end if;
        end if;
    end process;


    i_36_fu_74_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_loop_init = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                i_36_fu_74 <= ap_const_lv5_0;
            elsif (((icmp_ln416_fu_204_p2 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
                i_36_fu_74 <= i_64_fu_209_p2;
            end if; 
        end if;
    end process;

    reuse_addr_reg_fu_66_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_loop_init = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                reuse_addr_reg_fu_66 <= ap_const_lv64_FFFFFFFFFFFFFFFF;
            elsif (((icmp_ln416_fu_204_p2 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
                reuse_addr_reg_fu_66 <= zext_ln417_fu_257_p1;
            end if; 
        end if;
    end process;

    reuse_reg_fu_70_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_loop_init = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                reuse_reg_fu_70 <= ap_const_lv64_0;
            elsif (((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
                reuse_reg_fu_70 <= xor_ln417_fu_364_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln416_fu_204_p2 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then
                add_ln31_reg_416 <= add_ln31_fu_231_p2;
                addr_cmp_reg_442 <= addr_cmp_fu_265_p2;
                s_addr_reg_436 <= zext_ln417_fu_257_p1(5 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then
                icmp_ln416_reg_412 <= icmp_ln416_fu_204_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2) and (icmp_ln416_reg_412 = ap_const_lv1_0))) then
                s_load_reg_467 <= s_q1;
                sm_load_1_reg_452 <= sm_q0;
                sm_load_reg_447 <= sm_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage3_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3) and (icmp_ln416_reg_412 = ap_const_lv1_0))) then
                sm_load_2_reg_472 <= sm_q1;
                sm_load_3_reg_477 <= sm_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (icmp_ln416_reg_412 = ap_const_lv1_0))) then
                sm_load_4_reg_492 <= sm_q1;
                sm_load_5_reg_497 <= sm_q0;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm, ap_block_pp0_stage1_subdone, ap_condition_exit_pp0_iter0_stage1, ap_block_pp0_stage3_subdone, ap_block_pp0_stage0_subdone, ap_idle_pp0_1to1, ap_block_pp0_stage2_subdone, ap_start_int)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((ap_start_int = ap_const_logic_0) and (ap_idle_pp0_1to1 = ap_const_logic_1))) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_pp0_stage1 => 
                if ((ap_const_logic_1 = ap_condition_exit_pp0_iter0_stage1)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif ((ap_const_boolean_0 = ap_block_pp0_stage1_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage2;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                end if;
            when ap_ST_fsm_pp0_stage2 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage2_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage3;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage2;
                end if;
            when ap_ST_fsm_pp0_stage3 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage3_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage3;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;
    add_ln31_15_fu_241_p2 <= std_logic_vector(unsigned(add_ln31_fu_231_p2) + unsigned(ap_const_lv13_1));
    add_ln31_16_fu_281_p2 <= std_logic_vector(unsigned(add_ln31_reg_416) + unsigned(ap_const_lv13_2));
    add_ln31_17_fu_291_p2 <= std_logic_vector(unsigned(add_ln31_reg_416) + unsigned(ap_const_lv13_3));
    add_ln31_18_fu_301_p2 <= std_logic_vector(unsigned(add_ln31_reg_416) + unsigned(ap_const_lv13_4));
    add_ln31_19_fu_311_p2 <= std_logic_vector(unsigned(add_ln31_reg_416) + unsigned(ap_const_lv13_5));
    add_ln31_20_fu_321_p2 <= std_logic_vector(unsigned(add_ln31_reg_416) + unsigned(ap_const_lv13_6));
    add_ln31_21_fu_331_p2 <= std_logic_vector(unsigned(add_ln31_reg_416) + unsigned(ap_const_lv13_7));
    add_ln31_fu_231_p2 <= std_logic_vector(unsigned(add_ln31_3) + unsigned(zext_ln31_fu_227_p1));
    add_ln417_fu_252_p2 <= std_logic_vector(unsigned(i_36_fu_74) + unsigned(trunc_ln418_1));
    addr_cmp_fu_265_p2 <= "1" when (reuse_addr_reg_fu_66 = zext_ln417_fu_257_p1) else "0";
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
    ap_CS_fsm_pp0_stage1 <= ap_CS_fsm(1);
    ap_CS_fsm_pp0_stage2 <= ap_CS_fsm(2);
    ap_CS_fsm_pp0_stage3 <= ap_CS_fsm(3);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage3_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage3_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage1_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage2_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage3_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage1_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_exit_pp0_iter0_stage1_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_subdone, icmp_ln416_fu_204_p2)
    begin
        if (((icmp_ln416_fu_204_p2 = ap_const_lv1_1) and (ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            ap_condition_exit_pp0_iter0_stage1 <= ap_const_logic_1;
        else 
            ap_condition_exit_pp0_iter0_stage1 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_int_assign_proc : process(ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_subdone, ap_loop_exit_ready, ap_done_reg)
    begin
        if (((ap_loop_exit_ready = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            ap_done_int <= ap_const_logic_1;
        else 
            ap_done_int <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_enable_reg_pp0_iter0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0_reg, ap_start_int)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) then 
            ap_enable_reg_pp0_iter0 <= ap_start_int;
        else 
            ap_enable_reg_pp0_iter0 <= ap_enable_reg_pp0_iter0_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_idle_pp0, ap_start_int)
    begin
        if (((ap_start_int = ap_const_logic_0) and (ap_idle_pp0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_1to1_assign_proc : process(ap_enable_reg_pp0_iter1)
    begin
        if ((ap_enable_reg_pp0_iter1 = ap_const_logic_0)) then 
            ap_idle_pp0_1to1 <= ap_const_logic_1;
        else 
            ap_idle_pp0_1to1 <= ap_const_logic_0;
        end if; 
    end process;

    ap_loop_exit_ready <= ap_condition_exit_pp0_iter0_stage1;

    ap_ready_int_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage3, ap_block_pp0_stage3_subdone)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage3_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3))) then 
            ap_ready_int <= ap_const_logic_1;
        else 
            ap_ready_int <= ap_const_logic_0;
        end if; 
    end process;

    i_64_fu_209_p2 <= std_logic_vector(unsigned(i_36_fu_74) + unsigned(ap_const_lv5_1));
    icmp_ln416_fu_204_p2 <= "1" when (i_36_fu_74 = tmp_921) else "0";
    r_7_7_fu_341_p9 <= (((((((sm_q0 & sm_q1) & sm_load_5_reg_497) & sm_load_4_reg_492) & sm_load_3_reg_477) & sm_load_2_reg_472) & sm_load_1_reg_452) & sm_load_reg_447);
    reuse_select_fu_358_p3 <= 
        reuse_reg_fu_70 when (addr_cmp_reg_442(0) = '1') else 
        s_load_reg_467;
    s_address0 <= s_addr_reg_436;
    s_address1 <= zext_ln417_fu_257_p1(5 - 1 downto 0);

    s_ce0_assign_proc : process(ap_enable_reg_pp0_iter1, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            s_ce0 <= ap_const_logic_1;
        else 
            s_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    s_ce1_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            s_ce1 <= ap_const_logic_1;
        else 
            s_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    s_d0 <= (reuse_select_fu_358_p3 xor r_7_7_fu_341_p9);

    s_we0_assign_proc : process(ap_enable_reg_pp0_iter1, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            s_we0 <= ap_const_logic_1;
        else 
            s_we0 <= ap_const_logic_0;
        end if; 
    end process;

    shl_ln_fu_219_p3 <= (trunc_ln417_fu_215_p1 & ap_const_lv3_0);

    sm_address0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_CS_fsm_pp0_stage1, ap_CS_fsm_pp0_stage3, ap_CS_fsm_pp0_stage2, ap_block_pp0_stage1, zext_ln31_39_fu_247_p1, ap_block_pp0_stage2, zext_ln31_41_fu_296_p1, ap_block_pp0_stage3, zext_ln31_43_fu_316_p1, ap_block_pp0_stage0, zext_ln31_45_fu_336_p1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            sm_address0 <= zext_ln31_45_fu_336_p1(13 - 1 downto 0);
        elsif (((ap_const_boolean_0 = ap_block_pp0_stage3) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3))) then 
            sm_address0 <= zext_ln31_43_fu_316_p1(13 - 1 downto 0);
        elsif (((ap_const_boolean_0 = ap_block_pp0_stage2) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2))) then 
            sm_address0 <= zext_ln31_41_fu_296_p1(13 - 1 downto 0);
        elsif (((ap_const_boolean_0 = ap_block_pp0_stage1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            sm_address0 <= zext_ln31_39_fu_247_p1(13 - 1 downto 0);
        else 
            sm_address0 <= "XXXXXXXXXXXXX";
        end if; 
    end process;


    sm_address1_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_CS_fsm_pp0_stage1, ap_CS_fsm_pp0_stage3, ap_CS_fsm_pp0_stage2, zext_ln31_38_fu_236_p1, ap_block_pp0_stage1, zext_ln31_40_fu_286_p1, ap_block_pp0_stage2, zext_ln31_42_fu_306_p1, ap_block_pp0_stage3, zext_ln31_44_fu_326_p1, ap_block_pp0_stage0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            sm_address1 <= zext_ln31_44_fu_326_p1(13 - 1 downto 0);
        elsif (((ap_const_boolean_0 = ap_block_pp0_stage3) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3))) then 
            sm_address1 <= zext_ln31_42_fu_306_p1(13 - 1 downto 0);
        elsif (((ap_const_boolean_0 = ap_block_pp0_stage2) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2))) then 
            sm_address1 <= zext_ln31_40_fu_286_p1(13 - 1 downto 0);
        elsif (((ap_const_boolean_0 = ap_block_pp0_stage1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            sm_address1 <= zext_ln31_38_fu_236_p1(13 - 1 downto 0);
        else 
            sm_address1 <= "XXXXXXXXXXXXX";
        end if; 
    end process;


    sm_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_CS_fsm_pp0_stage1, ap_CS_fsm_pp0_stage3, ap_block_pp0_stage0_11001, ap_block_pp0_stage1_11001, ap_CS_fsm_pp0_stage2, ap_block_pp0_stage2_11001, ap_block_pp0_stage3_11001)
    begin
        if ((((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_const_boolean_0 = ap_block_pp0_stage3_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3)) or ((ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2)) or ((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1)))) then 
            sm_ce0 <= ap_const_logic_1;
        else 
            sm_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    sm_ce1_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_CS_fsm_pp0_stage1, ap_CS_fsm_pp0_stage3, ap_block_pp0_stage0_11001, ap_block_pp0_stage1_11001, ap_CS_fsm_pp0_stage2, ap_block_pp0_stage2_11001, ap_block_pp0_stage3_11001)
    begin
        if ((((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_const_boolean_0 = ap_block_pp0_stage3_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3)) or ((ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2)) or ((ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1)))) then 
            sm_ce1 <= ap_const_logic_1;
        else 
            sm_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    trunc_ln417_fu_215_p1 <= i_36_fu_74(4 - 1 downto 0);
    xor_ln417_fu_364_p2 <= (reuse_select_fu_358_p3 xor r_7_7_fu_341_p9);
    zext_ln31_38_fu_236_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_fu_231_p2),64));
    zext_ln31_39_fu_247_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_15_fu_241_p2),64));
    zext_ln31_40_fu_286_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_16_fu_281_p2),64));
    zext_ln31_41_fu_296_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_17_fu_291_p2),64));
    zext_ln31_42_fu_306_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_18_fu_301_p2),64));
    zext_ln31_43_fu_316_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_19_fu_311_p2),64));
    zext_ln31_44_fu_326_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_20_fu_321_p2),64));
    zext_ln31_45_fu_336_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_21_fu_331_p2),64));
    zext_ln31_fu_227_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(shl_ln_fu_219_p3),13));
    zext_ln417_fu_257_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln417_fu_252_p2),64));
end behav;
