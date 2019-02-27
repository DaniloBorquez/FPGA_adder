----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:12:36 02/12/2019 
-- Design Name: 
-- Module Name:    Zero - Behavioral 
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

entity Zero is
	PORT	(
				T		:	IN STD_LOGIC_VECTOR(56 downto 0);
				ZCount:	OUT STD_LOGIC_VECTOR(5 downto 0)
			);
end Zero;

architecture Behavioral of Zero is

	SIGNAL zero_vector	:	STD_LOGIC_VECTOR(56 downto 0);
	SIGNAL aux				:	STD_LOGIC_VECTOR(7 downto 0);

begin

	zero_vector	<=	"000000000000000000000000000000000000000000000000000000000";
	
	aux	<=	"--------" when T(56 downto 56) = "-" else
				X"39" when T(56 downto 0) = zero_vector(56 downto 0) else
				X"38" when T(56 downto 1) = zero_vector(56 downto 1) else
				X"37" when T(56 downto 2) = zero_vector(56 downto 2) else
				X"36" when T(56 downto 3) = zero_vector(56 downto 3) else
				X"35" when T(56 downto 4) = zero_vector(56 downto 4) else
				X"34" when T(56 downto 5) = zero_vector(56 downto 5) else
				X"33" when T(56 downto 6) = zero_vector(56 downto 6) else
				X"32" when T(56 downto 7) = zero_vector(56 downto 7) else
				X"31" when T(56 downto 8) = zero_vector(56 downto 8) else
				X"30" when T(56 downto 9) = zero_vector(56 downto 9) else
				X"2F" when T(56 downto 10) = zero_vector(56 downto 10) else
				X"2E" when T(56 downto 11) = zero_vector(56 downto 11) else
				X"2D" when T(56 downto 12) = zero_vector(56 downto 12) else
				X"2C" when T(56 downto 13) = zero_vector(56 downto 13) else
				X"2B" when T(56 downto 14) = zero_vector(56 downto 14) else
				X"2A" when T(56 downto 15) = zero_vector(56 downto 15) else
				X"29" when T(56 downto 16) = zero_vector(56 downto 16) else
				X"28" when T(56 downto 17) = zero_vector(56 downto 17) else
				X"27" when T(56 downto 18) = zero_vector(56 downto 18) else
				X"26" when T(56 downto 19) = zero_vector(56 downto 19) else
				X"25" when T(56 downto 20) = zero_vector(56 downto 20) else
				X"24" when T(56 downto 21) = zero_vector(56 downto 21) else
				X"23" when T(56 downto 22) = zero_vector(56 downto 22) else
				X"22" when T(56 downto 23) = zero_vector(56 downto 23) else
				X"21" when T(56 downto 24) = zero_vector(56 downto 24) else
				X"20" when T(56 downto 25) = zero_vector(56 downto 25) else
				X"1F" when T(56 downto 26) = zero_vector(56 downto 26) else
				X"1E" when T(56 downto 27) = zero_vector(56 downto 27) else
				X"1D" when T(56 downto 28) = zero_vector(56 downto 28) else
				X"1C" when T(56 downto 29) = zero_vector(56 downto 29) else
				X"1B" when T(56 downto 30) = zero_vector(56 downto 30) else
				X"1A" when T(56 downto 31) = zero_vector(56 downto 31) else
				X"19" when T(56 downto 32) = zero_vector(56 downto 32) else
				X"18" when T(56 downto 33) = zero_vector(56 downto 33) else
				X"17" when T(56 downto 34) = zero_vector(56 downto 34) else
				X"16" when T(56 downto 35) = zero_vector(56 downto 35) else
				X"15" when T(56 downto 36) = zero_vector(56 downto 36) else
				X"14" when T(56 downto 37) = zero_vector(56 downto 37) else
				X"13" when T(56 downto 38) = zero_vector(56 downto 38) else
				X"12" when T(56 downto 39) = zero_vector(56 downto 39) else
				X"11" when T(56 downto 40) = zero_vector(56 downto 40) else
				X"10" when T(56 downto 41) = zero_vector(56 downto 41) else
				X"0F" when T(56 downto 42) = zero_vector(56 downto 42) else
				X"0E" when T(56 downto 43) = zero_vector(56 downto 43) else
				X"0D" when T(56 downto 44) = zero_vector(56 downto 44) else
				X"0C" when T(56 downto 45) = zero_vector(56 downto 45) else
				X"0B" when T(56 downto 46) = zero_vector(56 downto 46) else
				X"0A" when T(56 downto 47) = zero_vector(56 downto 47) else
				X"09" when T(56 downto 48) = zero_vector(56 downto 48) else
				X"08" when T(56 downto 49) = zero_vector(56 downto 49) else
				X"07" when T(56 downto 50) = zero_vector(56 downto 50) else
				X"06" when T(56 downto 51) = zero_vector(56 downto 51) else
				X"05" when T(56 downto 52) = zero_vector(56 downto 52) else
				X"04" when T(56 downto 53) = zero_vector(56 downto 53) else
				X"03" when T(56 downto 54) = zero_vector(56 downto 54) else
				X"02" when T(56 downto 55) = zero_vector(56 downto 55) else
				X"01" when T(56 downto 56) = zero_vector(56 downto 56) else
				X"00";
				
		ZCount	<=	aux(5 downto 0);

end Behavioral;

