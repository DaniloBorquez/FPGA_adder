----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:46:33 02/19/2019 
-- Design Name: 
-- Module Name:    round - Behavioral 
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

entity round is
	PORT	(
				Min	:	IN STD_LOGIC_VECTOR(56 downto 0);
				Mout	:	OUT STD_LOGIC_VECTOR(51 downto 0)
			);
end round;

architecture Behavioral of round is

	SIGNAL M_aux	:	STD_LOGIC_VECTOR(51 downto 0);

begin

	PROCESS(Min)
		begin
			if Min(3 downto 0) = "----" then
				M_aux	<=	"----------------------------------------------------"; 
			elsif Min(3 downto 0) >= "1000" then
				M_aux	<=	Min(56 downto 5) + '1';
			else
				M_aux	<=	Min(56 downto 5);
			end if;
		end PROCESS;

		Mout	<=	M_aux;

end Behavioral;

