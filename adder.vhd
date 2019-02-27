----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:55:15 02/19/2019 
-- Design Name: 
-- Module Name:    adder - Behavioral 
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

entity adder is
	PORT (
				A		:	IN STD_LOGIC_VECTOR(56 downto 0);
				B		:	IN STD_LOGIC_VECTOR(56 downto 0);
				A_S	:	IN STD_LOGIC;
				S		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				Co		:	OUT STD_LOGIC
			);
end adder;

architecture Behavioral of adder is

	COMPONENT CLA PORT 	(
									A, B, Cin	:	IN STD_LOGIC;
									S, Cout		:	OUT STD_LOGIC
								);
	END COMPONENT;
	
	SIGNAL B1, aux, S_aux	:	STD_LOGIC_VECTOR(56 downto 0);

begin

	Comp1: for i in 0 to 56 generate
		B1(i)	<=	B(i) xor A_S;
		
		sumador_0: 	if (i = 0) generate
							sumador_0comp:	CLA PORT MAP	(
																		A		=>	A(i),
																		B		=>	B1(i),
																		Cin	=>	A_S,
																		S		=>	S_aux(i),
																		Cout	=>	aux(i)
																	);
						end generate;
		sumador_i:	if ((i > 0) and (i < 57)) generate
							sumador_icomp:	CLA PORT MAP	(
																		A		=>	A(i),
																		B		=>	B1(i),
																		Cin	=>	aux(i-1),
																		S		=>	S_aux(i),
																		Cout	=>	aux(i)
																	);
						end generate;
	end generate;
	
	S	<=	S_aux;
	
	Co	<=	aux(56);
																		
end Behavioral;

