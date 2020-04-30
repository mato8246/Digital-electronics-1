--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:19:14 04/30/2020
-- Design Name:   
-- Module Name:   /home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/top_tb.vhd
-- Project Name:  HCSRO4_xrehbe00_xpaule03
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
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
 
ENTITY top_tb IS
END top_tb;
 
ARCHITECTURE behavior OF top_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         pulse_pin_i : IN  std_logic;
         trig_pin_o : OUT  std_logic;
         clk_i : IN  std_logic;
         topselDisp0_o : OUT  std_logic;
         topselDisp1_o : OUT  std_logic;
         topselDisp2_o : OUT  std_logic;
         topselDisp3_o : OUT  std_logic;
         topsegA_o : OUT  std_logic;
         topsegB_o : OUT  std_logic;
         topsegC_o : OUT  std_logic;
         topsegD_o : OUT  std_logic;
         topsegE_o : OUT  std_logic;
         topsegF_o : OUT  std_logic;
         topsegG_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal pulse_pin_i : std_logic := '0';
   signal clk_i : std_logic := '0';

 	--Outputs
   signal trig_pin_o : std_logic;
   signal topselDisp0_o : std_logic;
   signal topselDisp1_o : std_logic;
   signal topselDisp2_o : std_logic;
   signal topselDisp3_o : std_logic;
   signal topsegA_o : std_logic;
   signal topsegB_o : std_logic;
   signal topsegC_o : std_logic;
   signal topsegD_o : std_logic;
   signal topsegE_o : std_logic;
   signal topsegF_o : std_logic;
   signal topsegG_o : std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 1 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          pulse_pin_i => pulse_pin_i,
          trig_pin_o => trig_pin_o,
          clk_i => clk_i,
          topselDisp0_o => topselDisp0_o,
          topselDisp1_o => topselDisp1_o,
          topselDisp2_o => topselDisp2_o,
          topselDisp3_o => topselDisp3_o,
          topsegA_o => topsegA_o,
          topsegB_o => topsegB_o,
          topsegC_o => topsegC_o,
          topsegD_o => topsegD_o,
          topsegE_o => topsegE_o,
          topsegF_o => topsegF_o,
          topsegG_o => topsegG_o
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      

      wait for 100 ns;	
		

      -- insert stimulus here 

      pulse_pin_i <= '1';
	  wait for clk_i_period*236;
	  pulse_pin_i <= '0';
	    wait for 66 ms;
	  pulse_pin_i <= '1';
	  wait for clk_i_period*600;
	  pulse_pin_i <= '0';      
	  wait;
   end process;

END;
