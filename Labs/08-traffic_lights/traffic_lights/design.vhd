library ieee;
use ieee.std_logic_1164.all;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

entity trafficLights is
generic (
    PriorityRatio : unsigned(3 downto 0) := "1111";
    ChangeStateRatio : unsigned(3 downto 0) := "0011"
);
port (
    clk_i    	: in  std_logic;
    srst_n_i	: in  std_logic;   -- Synchronous reset (active low);
    clk_en_i	: in  std_logic;   -- clock enable
    enable_i	: in std_logic;	   -- switch if lights are managed or no
    lights_o	: out std_logic_vector(5 downto 0) -- NS_R, NS_Y, NS_G, EW_R, EW_Y, EW_G
);
end entity trafficLights;

architecture Behavioral  of trafficLights is

type state_type is (STOP_ALL,NO_PRIORITY_ON,NO_PRIORITY_OFF,NS_GO,NS_READY,EW_GO,EW_READY);
    type last_priority_type is (NS,EW);
    
    signal count : unsigned(3 downto 0) := (others => '0');
	signal state : state_type := STOP_ALL;
    signal last_priority : last_priority_type := NS;

begin
  FSM : process(clk_i)
    begin
    
    	if rising_edge(clk_i) then  -- Rising clock edge
       		if srst_n_i = '0' then  -- Synchronous reset (active low)
       		state <= STOP_ALL; 
            count <= X"0";
            else 
       		case state is 
            when STOP_ALL => 
            	if enable_i = '0' then
                	state <= NO_PRIORITY_OFF;
            	elsif count < ChangeStateRatio then
                	state <= STOP_ALL;
                    count <= count + 1;
                 else 
                 	if last_priority = NS then
                 		state <= EW_READY;
                    else
                    	state <= NS_READY;
                    end if;
                    count <= X"0";
                 end if;
             when EW_READY =>
             	if enable_i = '0' then
                	state <= NO_PRIORITY_OFF;
            	elsif count < ChangeStateRatio then
                	state <= EW_READY;
                    count <= count + 1;
                 else 
                 	if last_priority = NS then
                 		state <= EW_GO;
                    else
                    	state <= STOP_ALL;
                    end if;
                    count <= X"0";
                 end if;
             when EW_GO =>
             	last_priority <= EW;
            	if enable_i = '0' then
                	state <= NO_PRIORITY_OFF;
            	elsif count < PriorityRatio then
                	state <= EW_GO;
                    count <= count + 1;
                 else 
                 	state <= EW_READY;
                    count <= X"0";
                 end if;
              when NS_READY => 
            	if enable_i = '0' then
                	state <= NO_PRIORITY_OFF;
            	elsif count < ChangeStateRatio then
                	state <= NS_READY;
                    count <= count + 1;
                 else 
                 	if last_priority = EW then
                 		state <= NS_GO;
                    else
                    	state <= STOP_ALL;
                    end if;
                    count <= X"0";
                 end if;
               when NS_GO => 
            	last_priority <= NS;
            	if enable_i = '0' then
                	state <= NO_PRIORITY_OFF;
            	elsif count < PriorityRatio then
                	state <= NS_GO;
                    count <= count + 1;
                 else 
                 	state <= NS_READY;
                    count <= X"0";
                 end if;
               when NO_PRIORITY_OFF => 
            	if count < ChangeStateRatio then
                	state <= NO_PRIORITY_OFF;
                    count <= count + 1;
                 else 
                 	state <= NO_PRIORITY_ON;
                    count <= X"0";
                 end if;
                 when NO_PRIORITY_ON => 
                if enable_i = '1' then
                	state <= STOP_ALL;
                else
            		if count < ChangeStateRatio then
                		state <= NO_PRIORITY_ON;
                    	count <= count + 1;
                 	else 
                 		state <= NO_PRIORITY_OFF;
                    	count <= X"0";
                 	end if;
               	end if;
               when others =>
               		state <= NO_PRIORITY_ON;
               end case;
           end if;
        end if;
        end process FSM;--FSM;
        
        
        
        Lights : process(state)
        begin
        
        case state is 
        when NS_GO => lights_o <= "001100";
        when NS_READY => lights_o <= "010100";
        when EW_GO => lights_o <= "100001";
        when EW_READY => lights_o <= "100010";
        when STOP_ALL => lights_o <= "100100";
        when NO_PRIORITY_ON => lights_o <= "010010";
        when others => lights_o <= "000000";
        
        end case;
        end process Lights;

	
end architecture Behavioral ;