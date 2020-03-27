-- Code your testbench here
library IEEE;
use IEEE.std_logic_1164.all;

entity testbench is
-- empty
end testbench; 

architecture tb of testbench is

-- DUT (Device Under Test) component
component trafficLights is
port (
	clk_i    	: in  std_logic;
    srst_n_i	: in  std_logic;   -- Synchronous reset (active low);
    clk_en_i	: in  std_logic;   -- clock enable
    enable_i	: in std_logic;	   -- switch if lights are managed or no
    lights_o	: out std_logic_vector(5 downto 0) -- NS_R, NS_Y, NS_G, EW_R, EW_Y, EW_G
);
end component;

signal clk_s, srst_n_s, clk_en_s,enable_s : std_logic := '1';
signal lights_s : std_logic_vector(5 downto 0) := (others => '0');


begin

	-- Connect DUT
  	DUT: trafficLights port map(clk_s, srst_n_s, clk_en_s,enable_s, lights_s);


    CLK_GEN: process
  	begin
      while true loop
        clk_s <= not clk_s;
        wait for 10 ps;
      end loop;
	end process CLK_GEN;
    
    CE_100Hz_GEN: process
    begin
      while true loop
        clk_en_s <= not clk_en_s;
        wait for 10 ps;
      end loop;
    end process CE_100Hz_GEN;
    
end tb;
