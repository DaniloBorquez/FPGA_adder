----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:08:08 02/19/2019 
-- Design Name: 
-- Module Name:    vector - Behavioral 
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

entity vector is
	PORT	(
				S	:	IN STD_LOGIC;
				E	:	IN STD_LOGIC_VECTOR(10 downto 0);
				M	:	IN STD_LOGIC_VECTOR(51 downto 0);
				N	:	OUT STD_LOGIC_VECTOR(63 downto 0)
			);
end vector;

architecture Behavioral of vector is

begin

	N(63)	<=	S;
	N(62 downto 52)	<=	E;
	N(51 downto 0)	<=	M;

end Behavioral;

