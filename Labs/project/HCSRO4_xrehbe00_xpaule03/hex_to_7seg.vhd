----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:32:21 04/28/2020 
-- Design Name: 
-- Module Name:    hex_to_7seg - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity hex_to_7seg is
    Port ( digit_i : in  STD_LOGIC_VECTOR (3 downto 0);
           seg_A_o : out  STD_LOGIC;
           seg_B_o : out  STD_LOGIC;
           seg_C_o : out  STD_LOGIC;
           seg_D_o : out  STD_LOGIC;
           seg_E_o : out  STD_LOGIC;
           seg_F_o : out  STD_LOGIC;
           seg_G_o : out  STD_LOGIC);
end hex_to_7seg;

architecture Behavioral of hex_to_7seg is

begin
process(digit_i)
	variable decode_data: STD_LOGIC_VECTOR(6 downto 0);
	begin
		case digit_i is
			when "0000" => decode_data := "1111110";
			when "0001" => decode_data := "0110000";
			when "0010" => decode_data := "1101101";
			when "0011" => decode_data := "1111001";
			when "0100" => decode_data := "0110011";
			when "0101" => decode_data := "1011011";
			when "0110" => decode_data := "1011111";
			when "0111" => decode_data := "1110000";
			when "1000" => decode_data := "1111111";
			when "1001" => decode_data := "1111011";
			when "1010" => decode_data := "1110111";
			when "1011" => decode_data := "0011111";
			when "1100" => decode_data := "1001110";
			when "1101" => decode_data := "0111101";
			when "1110" => decode_data := "1001111";
			when others => decode_data := "1000111";
		end case;	
			seg_A_o <= not decode_data(6);
			seg_B_o <= not decode_data(5);
			seg_C_o <= not decode_data(4);
			seg_D_o <= not decode_data(3);
			seg_E_o <= not decode_data(2);
			seg_F_o <= not decode_data(1);
			seg_G_o <= not decode_data(0);
		end process;	
			
			
			
end Behavioral;
