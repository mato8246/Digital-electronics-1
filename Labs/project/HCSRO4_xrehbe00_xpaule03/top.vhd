----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:58:36 04/28/2020 
-- Design Name: 
-- Module Name:    top - Behavioral 
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

entity top is
    Port ( pulse_pin_i : in STD_LOGIC;
           trig_pin_o : out STD_LOGIC;
           clk_i : in STD_LOGIC;
           topselDisp0_o : out STD_LOGIC;
           topselDisp1_o : out STD_LOGIC;
           topselDisp2_o : out STD_LOGIC;
           topselDisp3_o : out STD_LOGIC;
           topsegA_o : out STD_LOGIC;
           topsegB_o : out STD_LOGIC;
           topsegC_o : out STD_LOGIC;
           topsegD_o : out STD_LOGIC;
           topsegE_o : out STD_LOGIC;
           topsegF_o : out STD_LOGIC;
           topsegG_o : out STD_LOGIC);
end top;

architecture Behavioral of top is 
component hcsr04
port (
    fpgaclk_i : in STD_LOGIC;
    trig_o : out STD_LOGIC;
    pulse_i : in STD_LOGIC;
    meters_o : out STD_LOGIC_VECTOR (3 downto 0);
    decimeters_o : out STD_LOGIC_VECTOR (3 downto 0);
    centimeters_o : out STD_LOGIC_VECTOR (3 downto 0)
    );
end component;

component driver_7seg 
  Port(
        data0_i : in STD_LOGIC_VECTOR (3 downto 0);
        data1_i : in STD_LOGIC_VECTOR (3 downto 0);
        data2_i : in STD_LOGIC_VECTOR (3 downto 0);
        data3_i : in STD_LOGIC_VECTOR (3 downto 0);
        segA_o : out STD_LOGIC;
        segB_o : out STD_LOGIC;
        segC_o : out STD_LOGIC;
        segD_o : out STD_LOGIC;
        segE_o : out STD_LOGIC;
        segF_o : out STD_LOGIC;
        segG_o : out STD_LOGIC;
        selDisp0_o : out STD_LOGIC;
        selDisp1_o : out STD_LOGIC;
        selDisp2_o : out STD_LOGIC;
        selDisp3_o : out STD_LOGIC;
        clk_i : in STD_LOGIC
  );
end component;
SIGNAL s_0 : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL s_1 : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL s_2 : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL s_3 : STD_LOGIC_VECTOR(3 DOWNTO 0);

SIGNAL s_sensor_meters : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL s_sensor_decimeters : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL s_sensor_centimeters : STD_LOGIC_VECTOR(3 DOWNTO 0);

begin
uut2: driver_7seg PORT MAP (
          data0_i => s_0,
          data1_i => s_1,
          data2_i => s_2,
          data3_i => s_3,
          segA_o => topsegA_o,
          segB_o => topsegB_o,
          segC_o => topsegC_o,
          segD_o => topsegD_o,
          segE_o => topsegE_o,
          segF_o => topsegF_o,
          segG_o => topsegG_o,
          selDisp0_o => topselDisp0_o,
          selDisp1_o => topselDisp1_o,
          selDisp2_o => topselDisp2_o,
          selDisp3_o => topselDisp3_o,
          clk_i => clk_i
      );
      
uut4 : hcsr04 PORT MAP (
      fpgaclk_i => clk_i,
      trig_o => trig_pin_o,
      pulse_i => pulse_pin_i,
      meters_o => s_sensor_meters,
      decimeters_o => s_sensor_decimeters,
      centimeters_o => s_sensor_centimeters
      );
      
          s_0 <= s_sensor_centimeters;
          s_1 <= s_sensor_decimeters;
          s_2 <= s_sensor_meters;
          s_3 <= "0000";

end Behavioral;
