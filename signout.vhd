----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:35:16 02/19/2019 
-- Design Name: 
-- Module Name:    signout - Behavioral 
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


entity signout is
	PORT (
				SA		:	IN STD_LOGIC;
				SB		:	IN STD_LOGIC;
				A		:	IN STD_LOGIC_VECTOR(56 downto 0);
				B		:	IN STD_LOGIC_VECTOR(56 downto 0);
				A_S		:	IN STD_LOGIC;
				Comp		:	IN STD_LOGIC;
				Aa		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				Bb		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				AS		:	OUT STD_LOGIC;
				SO		:	OUT STD_LOGIC
				);
end signout;

architecture Behavioral of signout is

	SIGNAL SB_aux		:	STD_LOGIC;
	SIGNAL Aaux, Baux	:	STD_LOGIC_VECTOR(56 downto 0);

begin

	SB_aux	<=	SB xor A_S;
	
	SO			<=	SA when Comp = '1' else
					SB_aux when Comp = '0' else
					'-';
					
	AS			<= '1' when SA /= SB_aux else
					'0';
	
	Aaux		<=	A when Comp = '1' else
					B when Comp = '0' else
					"---------------------------------------------------------";
					
	Baux		<=	B when Comp = '1' else
					A when Comp = '0' else
					"---------------------------------------------------------";

	PROCESS (SA, SB_aux, Aaux, Baux)
	begin
		if (SA xor SB_aux) = '0' then
			Aa	<=	Aaux;
			Bb <= Baux;
		elsif SA = '1' and SB_aux = '0' then
			Aa	<=	Baux;
			Bb	<= Aaux;
		elsif SA = '0' and SB_aux = '1' then
			Aa	<=	Aaux;
			Bb	<=	Baux;
		else
			Aa	<=	"---------------------------------------------------------";
			Bb	<=	"---------------------------------------------------------";
		end if;
	end PROCESS;
end Behavioral;

