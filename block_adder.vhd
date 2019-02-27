----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:09:09 02/19/2019 
-- Design Name: 
-- Module Name:    block_adder - Behavioral 
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

entity block_adder is
	PORT	(
				SA		:	IN STD_LOGIC;
				SB		:	IN STD_LOGIC;
				A		:	IN STD_LOGIC_VECTOR(56 downto 0);
				B		:	IN STD_LOGIC_VECTOR(56 downto 0);
				A_S	:	IN STD_LOGIC;
				Comp	:	IN STD_LOGIC;
				S		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				SO		:	OUT STD_LOGIC;
				CO		:	OUT STD_LOGIC
			);
end block_adder;

architecture Behavioral of block_adder is

	COMPONENT adder PORT	(
									A, B	:	IN STD_LOGIC_VECTOR(56 downto 0);
									A_S	:	IN STD_LOGIC;
									S		:	OUT STD_LOGIC_VECTOR(56 downto 0);
									Co		:	OUT STD_LOGIC
								);
	END COMPONENT;
	
	COMPONENT signout PORT	(
										SA, SB		:	IN STD_LOGIC;
										A, B			:	IN STD_LOGIC_VECTOR(56 downto 0);
										A_S, Comp	:	IN STD_LOGIC;
										Aa, Bb		:	OUT STD_LOGIC_VECTOR(56 downto 0);
										AS, SO		:	OUT STD_LOGIC
									);
	END COMPONENT;
	
	SIGNAL Aa_aux, Bb_aux, S_aux	:	STD_LOGIC_VECTOR(56 downto 0);
	SIGNAL As_aux, SO_aux, Co_aux	:	STD_LOGIC;

begin

	component00: signout PORT MAP	(
												SA		=>	SA,
												SB		=>	SB,
												A		=>	A,
												B		=>	B,
												A_S	=>	A_S,
												Comp	=>	Comp,
												Aa		=>	Aa_aux,
												Bb		=>	Bb_aux,
												AS		=>	AS_aux,
												SO		=>	SO_aux
											);
	
	component01: adder PORT MAP	(
												A		=>	Aa_aux,
												B		=>	Bb_aux,
												A_S	=>	AS_aux,
												S		=>	S_aux,
												Co		=>	Co_aux
											);
											
	S	<=	(S_aux xor (X"FFFFFFFFFFFFFF"&"1")) + '1' when ((AS_aux and SO_aux) = '1') else
			S_aux;
			
	Co	<=	'0' when ((SB xor A_S) /= SA)	else
			Co_aux;
			
	SO	<=	SO_aux;

end Behavioral;

