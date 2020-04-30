----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:15:25 04/26/2020 
-- Design Name: 
-- Module Name:    hcsr04 - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity hcsr04 is
  Port (  fpgaclk_i : in STD_LOGIC;
          pulse_i : in STD_LOGIC;
          trig_o : out STD_LOGIC;
          meters_o : out STD_LOGIC_VECTOR(3 downto 0);
          decimeters_o : out STD_LOGIC_VECTOR(3 downto 0);
          centimeters_o : out STD_LOGIC_VECTOR(3 downto 0));
end hcsr04;  

architecture Behavioral of hcsr04 is
component distance is
  Port (  clk_i : in STD_LOGIC;
          reset_i : in STD_LOGIC;
          pulse_i : in STD_LOGIC;
          distance_o : out STD_LOGIC_VECTOR(8 downto 0));
end component;

component trigger_gen is 
	Port (	clk_i: in STD_LOGIC;
				trigger_o: out STD_LOGIC);
end component;
					
component unit_converter is
    Port (  distance_i : in STD_LOGIC_VECTOR(8 downto 0);
            hundreds_o : out STD_LOGIC_VECTOR(3 downto 0);
            tens_o : out STD_LOGIC_VECTOR(3 downto 0);
            unit_o : out STD_LOGIC_VECTOR(3 downto 0));
end component;
  
signal s_distanceOut : STD_LOGIC_VECTOR(8 downto 0);
signal s_triggOut : STD_LOGIC;

begin
  trigger_gen_m : trigger_gen port map(fpgaclk_i,s_triggOut);
  Pulsewidth : distance port map(fpgaclk_i,s_triggOut,pulse_i,s_distanceOut);
  UnitConv : unit_converter port map(s_distanceOut,meters_o,decimeters_o,centimeters_o);
  trig_o <= s_triggOut;  
    

 end Behavioral;   
