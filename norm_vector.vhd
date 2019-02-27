----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:22:46 02/19/2019 
-- Design Name: 
-- Module Name:    norm_vector - Behavioral 
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

entity norm_vector is
	PORT	(
				SS	:	IN STD_LOGIC;
				MS	:	IN STD_LOGIC_VECTOR(56 downto 0);
				ES	:	IN STD_LOGIC_VECTOR(10 downto 0);
				Co	:	IN STD_LOGIC;
				N	:	OUT STD_LOGIC_VECTOR(63 downto 0)
			);
end norm_vector;

architecture Behavioral of norm_vector is

	COMPONENT block_norm PORT	(
											MS	:	IN STD_LOGIC_VECTOR(56 downto 0);
											ES	:	IN STD_LOGIC_VECTOR(10 downto 0);
											Co	:	IN STD_LOGIC;
											M	:	OUT STD_LOGIC_VECTOR(51 downto 0);
											E	:	OUT STD_LOGIC_VECTOR(10 downto 0)
										);
	END COMPONENT;
	
	COMPONENT vector PORT	(
										S	:	IN STD_LOGIC;
										E	:	IN STD_LOGIC_VECTOR(10 downto 0);
										M	:	IN STD_LOGIC_VECTOR(51 downto 0);
										N	:	OUT STD_LOGIC_VECTOR(63 downto 0)
									);
	END COMPONENT;
	
	SIGNAL Maux	:	STD_LOGIC_VECTOR(51 downto 0);
	SIGNAL Eaux	:	STD_LOGIC_VECTOR(10 downto 0);

begin
	comp0:	block_norm PORT MAP	(
												MS	=>	MS,
												ES	=>	ES,
												Co	=>	Co,
												M	=>	Maux,
												E	=>	Eaux
											);
	comp1	:	vector PORT MAP	(
											S	=>	SS,
											E	=>	Eaux,
											M	=>	Maux,
											N	=>	N
										);

end Behavioral;

