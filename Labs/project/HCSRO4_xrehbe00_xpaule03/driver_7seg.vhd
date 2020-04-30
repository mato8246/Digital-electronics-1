----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:42:27 04/28/2020 
-- Design Name: 
-- Module Name:    driver_7seg - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity driver_7seg is
    Port ( data0_i : in  STD_LOGIC_VECTOR (3 downto 0);
           data1_i : in  STD_LOGIC_VECTOR (3 downto 0);
           data2_i : in  STD_LOGIC_VECTOR (3 downto 0);
           data3_i : in  STD_LOGIC_VECTOR (3 downto 0);
           segA_o : out  STD_LOGIC;
           segB_o : out  STD_LOGIC;
           segC_o : out  STD_LOGIC;
           segD_o : out  STD_LOGIC;
           segE_o : out  STD_LOGIC;
           segF_o : out  STD_LOGIC;
           segG_o : out  STD_LOGIC;
           selDisp0_o : out  STD_LOGIC;
           selDisp1_o : out  STD_LOGIC;
           selDisp2_o : out  STD_LOGIC;
           selDisp3_o : out  STD_LOGIC;
           clk_i : in  STD_LOGIC);
end driver_7seg;

architecture Behavioral of driver_7seg is

component hex_to_7seg
	Port (	digit_i: in STD_LOGIC_VECTOR(3 downto 0);
				seg_A_o : out STD_LOGIC;
				seg_B_o : out STD_LOGIC;
				seg_C_o : out STD_LOGIC;
				seg_D_o : out STD_LOGIC;
				seg_E_o : out STD_LOGIC;
				seg_F_o : out STD_LOGIC;
				seg_G_o : out STD_LOGIC);
end component;

component clock_enable
	Port(		clk_i : in STD_LOGIC;
				enable_i : in STD_LOGIC;
				reset_i : in STD_LOGIC;
				data_clk_o : out STD_LOGIC_VECTOR(15 downto 0));
end component;		
signal s_temperary_data : STD_LOGIC_VECTOR(3 downto 0);
signal s_clock_word : STD_LOGIC_VECTOR(15 downto 0);
signal s_slow_clock : STD_LOGIC;
		
begin

	uut : hex_to_7seg PORT MAP(
		digit_i => s_temperary_data,
		seg_A_o => segA_o,
		seg_B_o => segB_o,
		seg_C_o => segC_o,
		seg_D_o => segD_o,
		seg_E_o => segE_o,
		seg_F_o => segF_o,
		seg_G_o => segG_o
	);
	
	uut1 : clock_enable PORT MAP(
		clk_i => clk_i,
		enable_i => '1',
		reset_i => '0',
		data_clk_o => s_clock_word
	);
s_slow_clock <= s_clock_word(15);	

process(s_slow_clock)
	variable display_selection : STD_LOGIC_VECTOR(1 downto 0);
	begin
		if s_slow_clock'event and s_slow_clock = '1' then
		
		case display_selection is
			when "00" => s_temperary_data <= data0_i;
				selDisp0_o <= '0';
				selDisp1_o <= '1';
				selDisp2_o <= '1';
				selDisp3_o <= '1';
				
				display_selection := display_selection + '1';
				
			when "01" => s_temperary_data <= data1_i;	
				selDisp0_o <= '1';
				selDisp1_o <= '0';
				selDisp2_o <= '1';
				selDisp3_o <= '1';
				
				display_selection := display_selection + '1';
			when "10" => s_temperary_data <= data2_i;
				selDisp0_o <= '1';
				selDisp1_o <= '1';
				selDisp2_o <= '0';
				selDisp3_o <= '1';
				
				display_selection := display_selection + '1';
			when others => s_temperary_data <= data3_i;
				selDisp0_o <= '1';
				selDisp1_o <= '1';
				selDisp2_o <= '1';
				selDisp3_o <= '0';
				
				display_selection := display_selection + '1';
		end case;
	end if;
end process;
	
end Behavioral;
