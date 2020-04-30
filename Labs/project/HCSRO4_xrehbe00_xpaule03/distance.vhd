----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:02:20 04/24/2020 
-- Design Name: 
-- Module Name:    distance - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity distance is
    Port ( clk_i : in STD_LOGIC;
           reset_i : in STD_LOGIC;
           pulse_i : in STD_LOGIC;
           distance_o : out STD_LOGIC_VECTOR (8 downto 0));
end distance;

architecture Behavioral of distance is  
component binary_cnt is
    generic(n : POSITIVE := 10);
    Port (clk_i : in STD_LOGIC;
          enable_i : in STD_LOGIC;
          reset_i : in STD_LOGIC;
          counter_o : out STD_LOGIC_VECTOR(n-1 downto 0));
end component;

signal s_pulse_width : STD_LOGIC_VECTOR(21 downto 0);

begin
CounterPulse : binary_cnt generic map(22) port map(clk_i,pulse_i, not reset_i, s_pulse_width);

distance : process(pulse_i)

                          variable result : integer;
                          variable multiplier : STD_LOGIC_VECTOR(23 downto 0);
                          
                      begin
                          if (pulse_i = '0') then 
                                multiplier := s_pulse_width * "11";
                                result := to_integer(unsigned(multiplier(23 downto 13)));
                                    if (result > 458) then
                                                distance_o <= "111111111";  
                                    else
                                                distance_o <= STD_LOGIC_VECTOR(to_unsigned(result,9));
                                    end if;
                          end if;
                          
            end process distance;
           

end Behavioral;
