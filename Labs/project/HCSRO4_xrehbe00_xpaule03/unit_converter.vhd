----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:22:06 04/25/2020 
-- Design Name: 
-- Module Name:    unit_converter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Depdsendencies: 
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

entity unit_converter is
    Port (distance_i : in STD_LOGIC_VECTOR(8 downto 0);
          hundreds_o : out STD_LOGIC_VECTOR(3 downto 0);
          tens_o : out STD_LOGIC_VECTOR(3 downto 0);
          unit_o : out STD_LOGIC_VECTOR(3 downto 0));
end unit_converter;

architecture Behavioral of unit_converter is 

begin
process(distance_i)
    variable i : integer:=0;
    variable unit_mdc : std_logic_vector (20 downto 0);
    
    begin
        unit_mdc := (others => '0');
        unit_mdc (8 downto 0) := distance_i;
for i in 0 to 8 loop
          unit_mdc (19 downto 0) := unit_mdc (18 downto 0) & '0';
          
          if (i < 8 and unit_mdc (12 downto 9) > "0100") then
              unit_mdc (12 downto 9) := unit_mdc (12 downto 9) + "0011";
          end if;
          
          if (i < 8 and unit_mdc (16 downto 13) > "0100") then
              unit_mdc (16 downto 13) := unit_mdc (16 downto 13) + "0011";
          end if;
          
          if (i < 8 and unit_mdc (20 downto 17) > "0100") then
              unit_mdc (20 downto 17) := unit_mdc (20 downto 17) + "0011";
          end if;
          
          end loop;
          
      hundreds_o <= unit_mdc (20 downto 17);
      tens_o <= unit_mdc (16 downto 13);
      unit_o <= unit_mdc (12 downto 9);
end process;

end Behavioral;
