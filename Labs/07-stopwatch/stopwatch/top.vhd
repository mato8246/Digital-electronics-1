------------------------------------------------------------------------
--
-- Implementation of 4-bit binary counter.
-- Xilinx XC2C256-TQ144 CPLD, ISE Design Suite 14.7
--
-- Copyright (c) 2019-2020 Tomas Fryza
-- Dept. of Radio Electronics, Brno University of Technology, Czechia
-- This work is licensed under the terms of the MIT license.
--
------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

------------------------------------------------------------------------
-- Entity declaration for top level
------------------------------------------------------------------------
entity top is
port (
    clk_i : in std_logic := '0';
    srst_n_i : in std_logic:= '1';
	ce_100Hz_i : in std_logic := '0';
    cnt_en_i : in std_logic := '0';
    sec_h_o : out std_logic_vector(3 downto 0) := (others => '0');
	sec_l_o : out std_logic_vector(3 downto 0) := (others => '0');
	hth_h_o : out std_logic_vector(3 downto 0) := (others => '0');
	hth_l_o : out std_logic_vector(3 downto 0) := (others => '0'));
	
);
end entity top;

------------------------------------------------------------------------
-- Architecture declaration for top level
------------------------------------------------------------------------
architecture Behavioral of top is
    signal en_dc0_s, en_dc1_s,en_dc2_s, en_dc3_s, en_dc4_s, en_100Hz :std_logic := '0';
    --- WRITE YOUR CODE HERE
begin


    --------------------------------------------------------------------
    -- Sub-block of clock_enable entity
    --- WRITE YOUR CODE HERE
 GGenable: entity work.clock_enable
        generic map (g_NPERIOD=>x"09C4")
        port map (-- <component_signal> => actual_signal,
                  -- <component_signal> => actual_signal,
                  -- ...
                  -- <component_signal> => actual_signal);
                  -- WRITE YOUR CODE HERE
                  clk_i=>clk_i,
                  srst_n_i=>BTN0,
                  clock_enable_o=>s_e
                 );
          
 GGenable2: entity work.clock_enable
        generic map (g_NPERIOD=>x"2710")
        port map (-- <component_signal> => actual_signal,
                  -- <component_signal> => actual_signal,
                  -- ...
                  -- <component_signal> => actual_signal);
                  -- WRITE YOUR CODE HERE
                  clk_i=>clk_i,
                  srst_n_i=>BTN0,
                  clock_enable_o=>s_e2
                 );
          
    --------------------------------------------------------------------
    -- Sub-block of binary_cnt entity
    --- WRITE YOUR CODE HERE
decimalCounter0 : entity work.decimalCounter
	generic map (
    				pwm => 9
							)
	port map (
		 clk_i => clk_i,
    srst_n_i => srst_n_i,
    en_i => en_dc0_s,
    cnt_o => sec_l_o,
    carry => en_dc1_s
	);
    
decimalCounter1 : entity work.decimalCounter
    generic map (
                        pwm => 9
                                )
	port map (
		 clk_i => clk_i,
    srst_n_i => srst_n_i,
    en_i => en_dc1_s,
    cnt_o => sec_h_o,
    carry => en_dc2_s
	);
    
decimalCounter2 : entity work.decimalCounter
	generic map (
    				pwm => 9
							)
	port map (
		 clk_i => clk_i,
    srst_n_i => srst_n_i,
    en_i => en_dc2_s,
    cnt_o => hth_l_o,
    carry => en_dc3_s
	);
    
decimalCounter3 : entity work.decimalCounter
	generic map (
    				pwm => 5
							)
	port map (
		 clk_i => clk_i,
    srst_n_i => srst_n_i,
    en_i => en_dc3_s,
    cnt_o => hth_h_o,
    carry => en_dc4_s
	);

    --------------------------------------------------------------------
    -- Sub-block of hex_to_7seg entity
    --- WRITE YOUR CODE HERE
HEX_TO_7SEG0: entity work.hex_to_7seg
        port map (hex_i=>bity,
                  seg_o=>disp_seg_o
                  );

    -- Select display position
    disp_dig_o <= "1110";

	LD0_CPLD<=bity8(0);
    LD1_CPLD<=bity8(1);
    LD2_CPLD<=bity8(2);
    LD3_CPLD<=bity8(3);
    
    LD8_CPLD<=bity8(4);
    LD9_CPLD<=bity8(5);
    LD10_CPLD<=bity8(6);
    LD11_CPLD<=bity8(7);



end architecture Behavioral;