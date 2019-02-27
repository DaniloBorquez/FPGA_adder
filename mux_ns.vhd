----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:35:07 02/12/2019 
-- Design Name: 
-- Module Name:    mux_ns - Behavioral 
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

entity mux_ns is
	PORT	(
				NorA		:	IN STD_LOGIC_VECTOR(68 downto 0);
				NorB		:	IN STD_LOGIC_VECTOR(68 downto 0);
				MixA		:	IN STD_LOGIC_VECTOR(68 downto 0);
				MixB		:	IN STD_LOGIC_VECTOR(68 downto 0);
				e_data	:	IN STD_LOGIC_VECTOR(1 downto 0);
				NA			:	OUT STD_LOGIC_VECTOR(68 downto 0);
				NB			:	OUT STD_LOGIC_VECTOR(68 downto 0)
			);
end mux_ns;

architecture Behavioral of mux_ns is

begin

	NA	<=	NorA when e_data = "01" else
			MixA when e_data = "10" else
			"---------------------------------------------------------------------";
			
	NB	<=	NorB when e_data = "01" else
			MixB when e_data = "10" else
			"---------------------------------------------------------------------";

end Behavioral;

