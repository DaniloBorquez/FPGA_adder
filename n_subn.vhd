----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:36:52 02/12/2019 
-- Design Name: 
-- Module Name:    n_subn - Behavioral 
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

entity n_subn is
	PORT	(
				numberA	:	IN STD_LOGIC_VECTOR(68 downto 0);
				numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
				Comp		:	OUT STD_LOGIC;
				SA			:	OUT STD_LOGIC;
				SB			:	OUT STD_LOGIC;
				EO			:	OUT STD_LOGIC_VECTOR(10 downto 0);
				MA			:	OUT STD_LOGIC_VECTOR(56 downto 0);
				MB			:	OUT STD_LOGIC_VECTOR(56 downto 0)
			);
end n_subn;

architecture Behavioral of n_subn is

SIGNAL MAa, MBb	:	STD_LOGIC_VECTOR(56 downto 0);
SIGNAL C				:	STD_LOGIC;

begin

	SA		<=	numberA(68);
	SB		<=	numberB(68);
	MAa	<=	numberA(56 downto 0);
	MBb	<=	numberB(56 downto 0);	
	
	C		<=	'1' when MAa >= MBb else
				'0' when MBb > MAa else
				'-';
				
	Comp	<=	C;
	
	EO		<=	numberA(67 downto 57);
	
	MB		<=	MBb when C = '1' else
				MAa when C = '0' else
				"---------------------------------------------------------";
				
	MA		<=	MAa when C = '1' else
				MBb when C = '0' else
				"---------------------------------------------------------";

end Behavioral;

