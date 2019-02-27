-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY testbench IS
  END testbench;

  ARCHITECTURE behavior OF testbench IS 

  -- Component Declaration
          COMPONENT fpadder
          PORT(
                  NumberA	:	IN STD_LOGIC_VECTOR(63 downto 0);
						NumberB	:	IN STD_LOGIC_VECTOR(63 downto 0);
						A_S		:	IN STD_LOGIC;
						result	:	OUT STD_LOGIC_VECTOR(63 downto 0)
                  );
          END COMPONENT;
			 
			SIGNAL NumberA	:	STD_LOGIC_VECTOR(63 downto 0);
			SIGNAL NumberB	:	STD_LOGIC_VECTOR(63 downto 0);
			SIGNAL A_S		:	STD_LOGIC;
			SIGNAL result	:	STD_LOGIC_VECTOR(63 downto 0);
			
		
          
	--		CONSTANT Tpw_clk : time := 12.5 ns;
  BEGIN

  -- Component Instantiation
			 
			 uut: fpadder PORT MAP(
                  NumberA => NumberA,
                  NumberB => NumberB,
						A_S => A_S,
						result => result
          );
			 
			 

	--	clock_gen : PROCESS IS
	--		BEGIN
	--			MClk	<=	'0' after Tpw_clk, '1' after 2 * Tpw_clk;
	--			WAIT for 2 * Tpw_clk;
	--	END PROCESS clock_gen;
			
  --  Test Bench Statements
     tb : PROCESS
     BEGIN

			wait for 100 ns; -- wait until global set/reset completes

			NumberA	<=	"0000000000000000000000000000000000000000000000000000000000000000";
			NumberB	<=	"0111111111011010101010101010101010000000000000000000000000000000";
			A_S	<=	'0';
			wait for 100 ns; -- wait until global set/reset completes

			NumberA	<=	"0111111111011010101010101010101010000000000000000000000000000000";
			NumberB	<=	"1111111111110000000000000000000000000000000000000000000000000000";
			A_S	<=	'0';
			wait for 100 ns; -- wait until global set/reset completes
			
			NumberA	<=	"1111111111110000000000000000000000000000000000000000000000000000";
			NumberB	<=	"1111111111110000000000000000000000000000000000000000000000000000";
			A_S	<=	'0';
			wait for 100 ns; -- wait until global set/reset completes
			
			NumberA	<=	"1111111111110000000000000000000000000000000000000000000000000000";
			NumberB	<=	"0111111111110000000000000000000000000000000000000000000000000000";
			A_S	<=	'0';
			wait for 100 ns; -- wait until global set/reset completes
			
			NumberA	<=	"1111111111110000000000000000000000000000000000000000000000000000";
			NumberB	<=	"0111111111011010101010101010101010000000000000000000000000000000";
			A_S	<=	'0';
			wait for 100 ns; -- wait until global set/reset completes
			
			NumberA	<=	"0100000001001001010000000000000000000000000000000000000000000000";
			NumberB	<=	"0100000001001001010000000000000000000000000000000000000000000000";
			A_S	<=	'0';
			wait for 100 ns; -- wait until global set/reset completes

			wait; -- will wait forever
     END PROCESS tb;
  --  End Test Bench 

  END;
