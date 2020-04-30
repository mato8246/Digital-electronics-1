--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:49:59 04/30/2020
-- Design Name:   
-- Module Name:   /home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/hcsr04_tb.vhd
-- Project Name:  HCSRO4_xrehbe00_xpaule03
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: hcsr04
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY hcsr04_tb IS
END hcsr04_tb;
 
ARCHITECTURE behavior OF hcsr04_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT hcsr04
    PORT(
         fpgaclk_i : IN  std_logic;
         pulse_i : IN  std_logic;
         trig_o : OUT  std_logic;
         meters_o : OUT  std_logic_vector(3 downto 0);
         decimeters_o : OUT  std_logic_vector(3 downto 0);
         centimeters_o : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal fpgaclk_i : std_logic := '0';
   signal pulse_i : std_logic := '0';

 	--Outputs
   signal trig_o : std_logic;
   signal meters_o : std_logic_vector(3 downto 0);
   signal decimeters_o : std_logic_vector(3 downto 0);
   signal centimeters_o : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant pulse_i_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: hcsr04 PORT MAP (
          fpgaclk_i => fpgaclk_i,
          pulse_i => pulse_i,
          trig_o => trig_o,
          meters_o => meters_o,
          decimeters_o => decimeters_o,
          centimeters_o => centimeters_o
        );

   -- Clock process definitions
   pulse_i_process :process
   begin
		pulse_i <= '0';
		wait for pulse_i_period/2;
		pulse_i <= '1';
		wait for pulse_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      pulse_i <= '1';
      wait for 100 ns;	
	  trig_o <= '1'; 
      wait for pulse_i_period*10;
	  fpgaclk_i <= '1';
	  wait for pulse_i_period*100;
	  fpgaclk_i <= '0';
	  wait for pulse_i_period*10;
	  pulse_i <= '0';
	  wait for pulse_i_period*10;
	  pulse_i <= '1';

      -- insert stimulus here 

      wait;
   end process;

END;
