----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:35:35 04/28/2020 
-- Design Name: 
-- Module Name:    clock_enable - Behavioral 
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

entity clock_enable is
    Port ( clk_i : in  STD_LOGIC;
           enable_i : in  STD_LOGIC;
           reset_i : in  STD_LOGIC;
           data_clk_o : out  STD_LOGIC_VECTOR (15 downto 0));
end clock_enable;

architecture Behavioral of clock_enable is

begin
	process(clk_i,reset_i)
	variable count: STD_LOGIC_VECTOR(15 downto 0) :=(others=>'0');
	begin
	
	if reset_i ='1' then
		count := (others=>'0');
	elsif enable_i='1' and clk_i'event and clk_i='1' then
		count := count + 1;
	end if;
	data_clk_o <= count;
	end process;

end Behavioral;
