----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:04:55 02/12/2019 
-- Design Name: 
-- Module Name:    Comp - Behavioral 
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

entity Comp is
	PORT	(
				numberA	:	IN STD_LOGIC_VECTOR(68 downto 0);
				numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
				NA			:	OUT STD_LOGIC_VECTOR(68 downto 0);
				NB			:	OUT STD_LOGIC_VECTOR(68 downto 0)
			);
end Comp;

architecture Behavioral of Comp is

	SIGNAL EA, EB	:	STD_LOGIC_VECTOR(10 downto 0);

begin

	EA	<=	numberA(67 downto 57);
	EB	<=	numberB(67 downto 57);
	
	process	(numberA, numberB, EA, EB)
		begin
			if EA = X"00" then
				NB	<=	numberA;
				NA	<=	numberB;
			elsif EB = X"00" then
				NB	<=	numberB;
				NA	<=	numberA;
			else
				NA	<=	"---------------------------------------------------------------------";
				NB	<=	"---------------------------------------------------------------------";
			end if;
			
		end process;
end Behavioral;

