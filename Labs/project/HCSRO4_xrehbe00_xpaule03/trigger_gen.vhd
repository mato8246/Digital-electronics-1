----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:34:41 04/25/2020 
-- Design Name: 
-- Module Name:    trigger_gen - Behavioral 
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

entity trigger_gen is
    Port (  clk_i : in STD_LOGIC;
            trigger_o : out STD_LOGIC);
end trigger_gen;  
  
architecture Behavioral of trigger_gen is
component binary_cnt is
  generic (n : POSITIVE := 10);
  Port (    clk_i : in STD_LOGIC;
            enable_i : in STD_LOGIC;
            reset_i : in STD_LOGIC;
				counter_o: out STD_LOGIC_VECTOR (n-1 downto 0));
end component;
   signal s_resetCounter : STD_LOGIC;
   signal s_outputCounter : STD_LOGIC_VECTOR(23 downto 0);
    
begin
    trigg : binary_cnt generic map(24) port map(clk_i,'1',s_resetCounter,s_outputCounter);
    process(clk_i)
 constant ms250 : STD_LOGIC_VECTOR(23 downto 0) := "101111101011110000100000";
 constant ms250And100us : STD_LOGIC_VECTOR(23 downto 0) := "101111101100111110101000";
    begin
        if(s_outputCounter > ms250 and s_outputCounter < ms250And100us) then
            trigger_o <= '1';
        else 
            trigger_o <= '0';
        end if;
        if(s_outputCounter = ms250And100us or s_outputCounter = "XXXXXXXXXXXXXXXXXXXXXXXX") then
            s_resetCounter <= '0';
        else
            s_resetCounter <= '1';
        end if; 
            end process;

                    
end Behavioral;                    
