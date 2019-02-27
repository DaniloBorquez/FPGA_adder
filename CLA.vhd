----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:48:44 02/19/2019 
-- Design Name: 
-- Module Name:    CLA - Behavioral 
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

entity CLA is
	PORT (
				A, B, Cin	:	IN STD_LOGIC;
				S, Cout		:	OUT STD_LOGIC
			);
end CLA;

architecture Behavioral of CLA is

	SIGNAL c_g, c_p	:	STD_LOGIC;

begin

	c_g	<=	A and B;
	c_p	<=	A xor	B;
	
	Cout	<=	c_g or (c_p and Cin);
	S		<=	c_p xor Cin;

end Behavioral;

