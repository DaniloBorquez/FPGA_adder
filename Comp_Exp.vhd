----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:37:12 02/12/2019 
-- Design Name: 
-- Module Name:    Comp_Exp - Behavioral 
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

entity Comp_Exp is
	PORT (
				numberA	:	in STD_LOGIC_VECTOR(68 downto 0);
				numberB	:	in STD_LOGIC_VECTOR(68 downto 0);
				SA			:	OUT STD_LOGIC;
				SB			:	OUT STD_LOGIC;
				Emax		:	OUT STD_LOGIC_VECTOR(10 downto 0);
				Mmax		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				Mshft		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				Dexp		:	OUT STD_LOGIC_VECTOR(5 downto 0);
				Comp		:	OUT STD_LOGIC
			);
end Comp_Exp;

architecture Behavioral of Comp_Exp is
	signal EA, EB	:	STD_LOGIC_VECTOR(10 downto 0);
	signal MA, MB	:	STD_LOGIC_VECTOR(56 downto 0);
	
	signal dif		:	STD_LOGIC_VECTOR(10 downto 0);
	signal C			:	STD_LOGIC;
begin

	SA	<=	numberA(68);
	SB	<=	numberB(68);
	
	EA	<=	numberA(67 downto 57);
	EB	<=	numberB(67 downto 57);
	MA	<=	numberA(56 downto 0);
	MB	<=	numberB(56 downto 0);
	
	C	<=	'1' when (EA > EB) or (MB(0) = '1') else
			'0' when EA < EB  else
			'1' when MA >= MB else
			'0' when MA < MB else
			'-';
			
	Comp	<=	C;
	
	Emax	<=	EA when C = '1' else
				EB when C = '0' else
				"-----------";
				
	dif	<=	EA-EB when (C = '1') and (MB(0) = '0') else
				EB-EA when C='0' else
				EA+EB when (C = '1') and (MB(0) = '1') else
				"-----------";
	process (dif)
		begin
			if dif <= X"38" then
				Dexp	<=	dif(5 downto 0);
			elsif dif > X"38" then
				Dexp	<=	"111001";
			else
				Dexp	<=	"------";
			end if;
		end process;
		
	Mshft	<=	MB when C = '1' else
				MA when C = '0' else
				"---------------------------------------------------------";
	
	Mmax	<=	MA when C = '1' else
				MB when C = '0' else
				"---------------------------------------------------------";

end Behavioral;

