------------------------------------------------------------------------
--
-- top file for 
-- Xilinx XC2C256-TQ144 CPLD, ISE Design Suite 14.7
--
-- Copyright (g) 2019-2020 Tomas Fryza
-- Dept. of Radio Electronics, Brno University of Technology, Czechia
-- This work is licensed under the terms of the MIT license.
--
------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;    -- Provides unsigned numerical computation

------------------------------------------------------------------------
-- Entity declaration for display driver
------------------------------------------------------------------------
entity top is
port (
    clk_i    	: in  std_logic;
    BTN0_i 		: in  std_logic;   -- Synchronous reset (active low);
    SW0_i 		: in std_logic;    -- lights enable enable
    LD8_CPLD_o 	: out std_logic;   -- NS Red
    LD0_CPLD_o 	: out std_logic;   -- NS Yelow
    LD1_CPLD_o 	: out std_logic;   -- NS Green
    
    LD12_CPLD_o 	: out std_logic;   -- EW Red
    LD4_CPLD_o 	: out std_logic;   -- EW Yelow
    LD5_CPLD_o 	: out std_logic    -- EW Green
);
end entity top;

------------------------------------------------------------------------
-- Architecture declaration for display driver
------------------------------------------------------------------------
architecture Behavioral of stopwatchTop is
    signal s_en, srst_n_s, cnt_en_s  : std_logic := '0';
    signal lights_s : std_logic_vector(5 downto 0) := (others => '0');
begin

LD8_CPLD_o <= lights_s(5);
LD0_CPLD_o <= lights_s(4);
LD1_CPLD_o <= lights_s(3);
LD12_CPLD_o<= lights_s(2);
LD4_CPLD_o <= lights_s(1);
LD5_CPLD_o <= lights_s(0);

srst_n_s <= BTN0_i;
s_en <= SW0_i;

    --------------------------------------------------------------------
    -- Sub-block of clock_enable entity. Create s_en signal.
    CLK_EN_0 : entity work.clock_enable
			generic map (
								g_NPERIOD => x"2710" 1 second
							)
	port map (
		 clk_i   => clk_i,   -- 10 kHz
		 srst_n_i => srst_n_s,    -- Synchronous reset
		 clock_enable_o   => cnt_en_s   -- Output bit
	);


    TrafficLights0 : entity.work.trafficLights
    		generic map 
            (
            	PriorityRatio : unsigned(3 downto 0) := "0101",   -- 
    			ChangeStateRatio : unsigned(3 downto 0) := "0001" --  Ratio 5:1
            			)
      		port map
            (
            	clk_i    	=> clk_i,
                srst_n_i	=> BTN0_i
                clk_en_i	=> cnt_en_s,
                enable_i	=> SW0_i,
                lights_o	=>lights_s
            
            );
                  

end architecture Behavioral;