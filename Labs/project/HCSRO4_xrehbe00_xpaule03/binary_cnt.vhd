----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:50:15 04/23/2020 
-- Design Name: 
-- Module Name:    binary_cnt - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity binary_cnt is
      generic(n : POSITIVE := 10);
    Port (  clk_i : in STD_LOGIC;
              enable_i: in STD_LOGIC;
              reset_i : in STD_LOGIC;
              counter_o : out STD_LOGIC_VECTOR (n-1 downto 0));
end binary_cnt;

architecture Behavioral of binary_cnt is
    signal s_count: STD_LOGIC_VECTOR(n-1 downto 0);
  begin
    process (clk_i,reset_i)
      
      begin
        if(reset_i = '0') then
            s_count <= (others => '0');
            elsif(clk_i'event and clk_i = '1') then
            if(enable_i = '1') then
                  s_count <= s_count + 1;
                  end if;
            end if;
		end process;
end Behavioral;              
