----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:11:14 02/12/2019 
-- Design Name: 
-- Module Name:    Shift - Behavioral 
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

entity Shift is
	PORT	(
				T		:	IN STD_LOGIC_VECTOR(56 downto 0);
				SHFT	:	IN STD_LOGIC_VECTOR(5 downto 0);
				S		:	OUT STD_LOGIC_VECTOR(56 downto 0)
			);
end Shift;

architecture Behavioral of Shift is

COMPONENT Mux PORT	(
								A, B, SEL	:	IN STD_LOGIC;
								Z				:	OUT STD_LOGIC
							);
END COMPONENT;

SIGNAL Z1, Z2, Z3, Z4, Z5, Z6	:	STD_LOGIC_VECTOR(56 DOWNTO 0);

begin

	COMP1:	FOR i IN 0 TO 56 GENERATE
		SHIFTER0_0:	if (i = 0) GENERATE	
							SHIFTER0_0COMP:	Mux PORT MAP	(
																			A		=>	'0',
																			B		=>	T(56),
																			SEL	=>	SHFT(0),
																			Z		=>	Z1(56-i)
																		);
		END GENERATE;
		SHIFTER0_i:	if ((i > 0) and (i < 57)) GENERATE	
							SHIFTER0_iCOMP:	Mux PORT MAP	(
																			A		=>	T(56-(i-1)),
																			B		=>	T(56-i),
																			SEL	=>	SHFT(0),
																			Z		=>	Z1(56-i)
																		);
		END GENERATE;
		SHIFTER1_0:	if ((i >= 0) and (i < 2)) GENERATE	
							SHIFTER1_0COMP:	Mux PORT MAP	(
																			A		=>	'0',
																			B		=>	Z1(56-i),
																			SEL	=>	SHFT(1),
																			Z		=>	Z2(56-i)
																		);
		END GENERATE;
		SHIFTER1_i:	if ((i > 1) and (i < 57)) GENERATE	
							SHIFTER1_iCOMP:	Mux PORT MAP	(
																			A		=>	Z1(56-(i-2)),
																			B		=>	Z1(56-i),
																			SEL	=>	SHFT(1),
																			Z		=>	Z2(56-i)
																		);
		END GENERATE;
		SHIFTER2_0:	if ((i >= 0) and (i < 4)) GENERATE	
							SHIFTER2_0COMP:	Mux PORT MAP	(
																			A		=>	'0',
																			B		=>	Z2(56-i),
																			SEL	=>	SHFT(2),
																			Z		=>	Z3(56-i)
																		);
		END GENERATE;
		SHIFTER2_i:	if ((i > 3) and (i < 57)) GENERATE	
							SHIFTER2_iCOMP:	Mux PORT MAP	(
																			A		=>	Z2(56-(i-4)),
																			B		=>	Z2(56-i),
																			SEL	=>	SHFT(2),
																			Z		=>	Z3(56-i)
																		);
		END GENERATE;
		SHIFTER3_0:	if ((i >= 0) and (i < 8)) GENERATE	
							SHIFTER3_0COMP:	Mux PORT MAP	(
																			A		=>	'0',
																			B		=>	Z3(56-i),
																			SEL	=>	SHFT(3),
																			Z		=>	Z4(56-i)
																		);
		END GENERATE;
		SHIFTER3_i:	if ((i > 7) and (i < 57)) GENERATE	
							SHIFTER3_iCOMP:	Mux PORT MAP	(
																			A		=>	Z3(56-(i-8)),
																			B		=>	Z3(56-i),
																			SEL	=>	SHFT(3),
																			Z		=>	Z4(56-i)
																		);
		END GENERATE;
		SHIFTER4_0:	if ((i >= 0) and (i < 16)) GENERATE	
							SHIFTER4_0COMP:	Mux PORT MAP	(
																			A		=>	'0',
																			B		=>	Z4(56-i),
																			SEL	=>	SHFT(4),
																			Z		=>	Z5(56-i)
																		);
		END GENERATE;
		SHIFTER4_i:	if ((i > 15) and (i < 57)) GENERATE	
							SHIFTER4_iCOMP:	Mux PORT MAP	(
																			A		=>	Z4(56-(i-16)),
																			B		=>	Z4(56-i),
																			SEL	=>	SHFT(4),
																			Z		=>	Z5(56-i)
																		);
		END GENERATE;
		SHIFTER5_0:	if ((i >= 0) and (i < 32)) GENERATE	
							SHIFTER5_0COMP:	Mux PORT MAP	(
																			A		=>	'0',
																			B		=>	Z5(56-i),
																			SEL	=>	SHFT(5),
																			Z		=>	Z6(56-i)
																		);
		END GENERATE;
		SHIFTER5_i:	if ((i > 31) and (i < 57)) GENERATE	
							SHIFTER5_iCOMP:	Mux PORT MAP	(
																			A		=>	Z5(56-(i-32)),
																			B		=>	Z5(56-i),
																			SEL	=>	SHFT(5),
																			Z		=>	Z6(56-i)
																		);
		END GENERATE;
	END GENERATE;
	
	S	<=	Z6;

end Behavioral;

