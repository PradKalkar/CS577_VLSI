-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity ntt_1 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    a_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_ce0 : OUT STD_LOGIC;
    a_we0 : OUT STD_LOGIC;
    a_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    a_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    a_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_ce1 : OUT STD_LOGIC;
    a_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    a_offset : IN STD_LOGIC_VECTOR (2 downto 0) );
end;


architecture behav of ntt_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv29_80 : STD_LOGIC_VECTOR (28 downto 0) := "00000000000000000000010000000";
    constant ap_const_lv31_0 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv29_0 : STD_LOGIC_VECTOR (28 downto 0) := "00000000000000000000000000000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv32_1C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011100";
    constant ap_const_lv32_3802001 : STD_LOGIC_VECTOR (31 downto 0) := "00000011100000000010000000000001";
    constant ap_const_lv55_7FFFFFFF801FFF : STD_LOGIC_VECTOR (54 downto 0) := "1111111111111111111111111111111100000000001111111111111";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_37 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal zetas_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal zetas_ce0 : STD_LOGIC;
    signal zetas_q0 : STD_LOGIC_VECTOR (22 downto 0);
    signal zext_ln49_fu_139_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln49_reg_379 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln54_fu_148_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal zext_ln54_reg_385 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal zext_ln55_fu_158_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln55_reg_394 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal k_fu_181_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal k_reg_402 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln55_fu_172_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln54_1_fu_202_p1 : STD_LOGIC_VECTOR (28 downto 0);
    signal zext_ln57_fu_211_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln57_reg_417 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal zext_ln55_1_fu_237_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal zext_ln55_1_reg_422 : STD_LOGIC_VECTOR (30 downto 0);
    signal sext_ln57_fu_241_p1 : STD_LOGIC_VECTOR (53 downto 0);
    signal sext_ln57_reg_427 : STD_LOGIC_VECTOR (53 downto 0);
    signal a_addr_reg_435 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal icmp_ln57_fu_245_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal a_addr_14_reg_440 : STD_LOGIC_VECTOR (9 downto 0);
    signal j_1_fu_288_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_1_reg_446 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln55_fu_294_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal t_7_fu_355_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_7_reg_456 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal len_0_reg_98 : STD_LOGIC_VECTOR (28 downto 0);
    signal j_reg_110 : STD_LOGIC_VECTOR (30 downto 0);
    signal icmp_ln54_fu_152_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_0_reg_122 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal zext_ln56_fu_187_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln58_fu_269_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln59_fu_283_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal k_2_fu_50 : STD_LOGIC_VECTOR (31 downto 0);
    signal sub_ln59_fu_359_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal add_ln60_fu_366_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_131_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_7_fu_162_p4 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_8_fu_192_p4 : STD_LOGIC_VECTOR (27 downto 0);
    signal add_ln57_fu_206_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal empty_52_fu_215_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln55_fu_221_p1 : STD_LOGIC_VECTOR (29 downto 0);
    signal trunc_ln55_1_fu_225_p1 : STD_LOGIC_VECTOR (29 downto 0);
    signal start_fu_229_p3 : STD_LOGIC_VECTOR (29 downto 0);
    signal trunc_ln58_1_fu_254_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal trunc_ln58_fu_250_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln58_fu_258_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln58_1_fu_264_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal trunc_ln59_fu_274_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln59_fu_278_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal sext_ln58_fu_302_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln58_fu_306_p0 : STD_LOGIC_VECTOR (22 downto 0);
    signal mul_ln58_fu_306_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln58_fu_306_p2 : STD_LOGIC_VECTOR (53 downto 0);
    signal trunc_ln18_fu_315_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_fu_319_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln19_fu_329_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln19_fu_329_p2 : STD_LOGIC_VECTOR (54 downto 0);
    signal sext_ln58_1_fu_311_p1 : STD_LOGIC_VECTOR (55 downto 0);
    signal sext_ln19_5_fu_335_p1 : STD_LOGIC_VECTOR (55 downto 0);
    signal add_ln19_fu_339_p2 : STD_LOGIC_VECTOR (55 downto 0);
    signal trunc_ln_fu_345_p4 : STD_LOGIC_VECTOR (23 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);

    component ntt_1_zetas IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (22 downto 0) );
    end component;



begin
    zetas_U : component ntt_1_zetas
    generic map (
        DataWidth => 23,
        AddressRange => 256,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => zetas_address0,
        ce0 => zetas_ce0,
        q0 => zetas_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    j_0_reg_122_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                j_0_reg_122 <= j_1_reg_446;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                j_0_reg_122 <= zext_ln55_reg_394;
            end if; 
        end if;
    end process;

    j_reg_110_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln54_fu_152_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_reg_110 <= ap_const_lv31_0;
            elsif (((icmp_ln57_fu_245_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                j_reg_110 <= add_ln55_fu_294_p2;
            end if; 
        end if;
    end process;

    k_2_fu_50_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln57_fu_245_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                k_2_fu_50 <= k_reg_402;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                k_2_fu_50 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    len_0_reg_98_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln55_fu_172_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                                len_0_reg_98(7 downto 0) <= zext_ln54_1_fu_202_p1(7 downto 0);
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                len_0_reg_98(0) <= '0';
                len_0_reg_98(1) <= '0';
                len_0_reg_98(2) <= '0';
                len_0_reg_98(3) <= '0';
                len_0_reg_98(4) <= '0';
                len_0_reg_98(5) <= '0';
                len_0_reg_98(6) <= '0';
                len_0_reg_98(7) <= '1';
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln57_fu_245_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                a_addr_14_reg_440 <= zext_ln59_fu_283_p1(10 - 1 downto 0);
                a_addr_reg_435 <= zext_ln58_fu_269_p1(10 - 1 downto 0);
                j_1_reg_446 <= j_1_fu_288_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln55_fu_172_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                k_reg_402 <= k_fu_181_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                sext_ln57_reg_427 <= sext_ln57_fu_241_p1;
                    zext_ln55_1_reg_422(29 downto 0) <= zext_ln55_1_fu_237_p1(29 downto 0);
                    zext_ln57_reg_417(30 downto 0) <= zext_ln57_fu_211_p1(30 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                t_7_reg_456 <= t_7_fu_355_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    zext_ln49_reg_379(10 downto 8) <= zext_ln49_fu_139_p1(10 downto 8);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                    zext_ln54_reg_385(7 downto 0) <= zext_ln54_fu_148_p1(7 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                    zext_ln55_reg_394(30 downto 0) <= zext_ln55_fu_158_p1(30 downto 0);
            end if;
        end if;
    end process;
    zext_ln49_reg_379(7 downto 0) <= "00000000";
    zext_ln49_reg_379(11) <= '0';
    zext_ln54_reg_385(30 downto 8) <= "00000000000000000000000";
    zext_ln55_reg_394(31) <= '0';
    zext_ln57_reg_417(31) <= '0';
    zext_ln55_1_reg_422(30) <= '0';
    len_0_reg_98(28 downto 8) <= "000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_CS_fsm_state3, icmp_ln55_fu_172_p2, ap_CS_fsm_state5, icmp_ln57_fu_245_p2, icmp_ln54_fu_152_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln54_fu_152_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln55_fu_172_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                if (((icmp_ln57_fu_245_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;

    a_address0_assign_proc : process(a_addr_reg_435, ap_CS_fsm_state5, a_addr_14_reg_440, ap_CS_fsm_state6, ap_CS_fsm_state8, zext_ln58_fu_269_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            a_address0 <= a_addr_14_reg_440;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_address0 <= a_addr_reg_435;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            a_address0 <= zext_ln58_fu_269_p1(10 - 1 downto 0);
        else 
            a_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_address1_assign_proc : process(ap_CS_fsm_state5, a_addr_14_reg_440, zext_ln59_fu_283_p1, ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            a_address1 <= a_addr_14_reg_440;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            a_address1 <= zext_ln59_fu_283_p1(10 - 1 downto 0);
        else 
            a_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_ce0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            a_ce0 <= ap_const_logic_1;
        else 
            a_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    a_ce1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            a_ce1 <= ap_const_logic_1;
        else 
            a_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    a_d0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state8, sub_ln59_fu_359_p2, add_ln60_fu_366_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            a_d0 <= add_ln60_fu_366_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_d0 <= sub_ln59_fu_359_p2;
        else 
            a_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    a_we0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            a_we0 <= ap_const_logic_1;
        else 
            a_we0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln19_fu_339_p2 <= std_logic_vector(signed(sext_ln58_1_fu_311_p1) + signed(sext_ln19_5_fu_335_p1));
    add_ln55_fu_294_p2 <= std_logic_vector(unsigned(zext_ln54_reg_385) + unsigned(zext_ln55_1_reg_422));
    add_ln57_fu_206_p2 <= std_logic_vector(unsigned(zext_ln54_reg_385) + unsigned(j_reg_110));
    add_ln58_1_fu_264_p2 <= std_logic_vector(unsigned(zext_ln49_reg_379) + unsigned(add_ln58_fu_258_p2));
    add_ln58_fu_258_p2 <= std_logic_vector(unsigned(trunc_ln58_1_fu_254_p1) + unsigned(trunc_ln58_fu_250_p1));
    add_ln59_fu_278_p2 <= std_logic_vector(unsigned(zext_ln49_reg_379) + unsigned(trunc_ln59_fu_274_p1));
    add_ln60_fu_366_p2 <= std_logic_vector(signed(t_7_reg_456) + signed(a_q1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln54_fu_152_p2)
    begin
        if ((((icmp_ln54_fu_152_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln54_fu_152_p2)
    begin
        if (((icmp_ln54_fu_152_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    empty_52_fu_215_p2 <= "1" when (unsigned(j_reg_110) > unsigned(add_ln57_fu_206_p2)) else "0";
    icmp_ln54_fu_152_p2 <= "1" when (len_0_reg_98 = ap_const_lv29_0) else "0";
    icmp_ln55_fu_172_p2 <= "1" when (tmp_7_fu_162_p4 = ap_const_lv23_0) else "0";
    icmp_ln57_fu_245_p2 <= "1" when (unsigned(j_0_reg_122) < unsigned(zext_ln57_reg_417)) else "0";
    j_1_fu_288_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(j_0_reg_122));
    k_fu_181_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(k_2_fu_50));
    mul_ln19_fu_329_p1 <= t_fu_319_p2;
    mul_ln19_fu_329_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(ap_const_lv55_7FFFFFFF801FFF) * signed(mul_ln19_fu_329_p1))), 55));
    mul_ln58_fu_306_p0 <= sext_ln57_reg_427(23 - 1 downto 0);
    mul_ln58_fu_306_p1 <= sext_ln58_fu_302_p0;
    mul_ln58_fu_306_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(mul_ln58_fu_306_p0) * signed(mul_ln58_fu_306_p1))), 54));
        sext_ln19_5_fu_335_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(mul_ln19_fu_329_p2),56));

        sext_ln57_fu_241_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(zetas_q0),54));

        sext_ln58_1_fu_311_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(mul_ln58_fu_306_p2),56));

    sext_ln58_fu_302_p0 <= a_q0;
    start_fu_229_p3 <= 
        trunc_ln55_fu_221_p1 when (empty_52_fu_215_p2(0) = '1') else 
        trunc_ln55_1_fu_225_p1;
    sub_ln59_fu_359_p2 <= std_logic_vector(unsigned(a_q1) - unsigned(t_7_fu_355_p1));
        t_7_fu_355_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(trunc_ln_fu_345_p4),32));

    t_fu_319_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed('0' &ap_const_lv32_3802001) * signed(trunc_ln18_fu_315_p1))), 32));
    tmp_7_fu_162_p4 <= j_reg_110(30 downto 8);
    tmp_8_fu_192_p4 <= len_0_reg_98(28 downto 1);
    tmp_fu_131_p3 <= (a_offset & ap_const_lv8_0);
    trunc_ln18_fu_315_p1 <= mul_ln58_fu_306_p2(32 - 1 downto 0);
    trunc_ln55_1_fu_225_p1 <= add_ln57_fu_206_p2(30 - 1 downto 0);
    trunc_ln55_fu_221_p1 <= j_reg_110(30 - 1 downto 0);
    trunc_ln58_1_fu_254_p1 <= len_0_reg_98(12 - 1 downto 0);
    trunc_ln58_fu_250_p1 <= j_0_reg_122(12 - 1 downto 0);
    trunc_ln59_fu_274_p1 <= j_0_reg_122(12 - 1 downto 0);
    trunc_ln_fu_345_p4 <= add_ln19_fu_339_p2(55 downto 32);
    zetas_address0 <= zext_ln56_fu_187_p1(8 - 1 downto 0);

    zetas_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            zetas_ce0 <= ap_const_logic_1;
        else 
            zetas_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    zext_ln49_fu_139_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_131_p3),12));
    zext_ln54_1_fu_202_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_8_fu_192_p4),29));
    zext_ln54_fu_148_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(len_0_reg_98),31));
    zext_ln55_1_fu_237_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(start_fu_229_p3),31));
    zext_ln55_fu_158_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_reg_110),32));
    zext_ln56_fu_187_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_fu_181_p2),64));
    zext_ln57_fu_211_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln57_fu_206_p2),32));
    zext_ln58_fu_269_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln58_1_fu_264_p2),64));
    zext_ln59_fu_283_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln59_fu_278_p2),64));
end behav;
