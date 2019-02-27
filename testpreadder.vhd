-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY testbench IS
  END testbench;

  ARCHITECTURE behavior OF testbench IS 

  -- Component Declaration
          COMPONENT <component name>
          PORT	(
				numberA	:	IN STD_LOGIC_VECTOR(63 downto 0);
				numberB	:	IN STD_LOGIC_VECTOR(63 downto 0);
				enable	:	IN STD_LOGIC;
				SA			:	OUT STD_LOGIC;
				SB			:	OUT STD_LOGIC;
				C			:	OUT STD_LOGIC;
				Eout		:	OUT STD_LOGIC_VECTOR(10 downto 0);
				MAOut		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				MBOut		:	OUT STD_LOGIC_VECTOR(56 downto 0)
			);
          END COMPONENT;

          SIGNAL <signal1> :  std_logic;
          SIGNAL <signal2> :  std_logic_vector(3 downto 0);
          

  BEGIN

  -- Component Instantiation
          uut: <component name> PORT MAP(
                  <port1> => <signal1>,
                  <port3> => <signal2>
          );


  --  Test Bench Statements
     tb : PROCESS
     BEGIN

        wait for 100 ns; -- wait until global set/reset completes

        -- Add user defined stimulus here

        wait; -- will wait forever
     END PROCESS tb;
  --  End Test Bench 

  END;
