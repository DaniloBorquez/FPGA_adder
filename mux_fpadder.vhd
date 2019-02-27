----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:34:22 02/19/2019 
-- Design Name: 
-- Module Name:    mux_fpadder - Behavioral 
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

entity mux_fpadder is
	PORT	(
				N1			:	IN STD_LOGIC_VECTOR(63 downto 0);
				N2			:	IN STD_LOGIC_VECTOR(63 downto 0);
				enable	:	IN STD_LOGIC;
				result	:	OUT STD_LOGIC_VECTOR(63 downto 0)
			);
end mux_fpadder;

architecture Behavioral of mux_fpadder is

begin

	result	<=	N1 when enable = '0' else
					N2 when enable = '1' else
					"----------------------------------------------------------------";
end Behavioral;

