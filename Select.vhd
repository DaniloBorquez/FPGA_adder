----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:36:04 02/09/2019 
-- Design Name: 
-- Module Name:    Select - Behavioral 
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

entity selector is
	Port(	numberA	:	in STD_LOGIC_VECTOR(63 downto 0);
			numberB	:	in STD_LOGIC_VECTOR(63 downto 0);
			enable	:	in STD_LOGIC;
			e_data	:	out STD_LOGIC_VECTOR(1 downto 0);
			NA			:	out STD_LOGIC_VECTOR(68 downto 0);
			NB			:	out STD_LOGIC_VECTOR(68 downto 0)
			);
end selector;

architecture Behavioral of selector is
	signal EA, EB		:	STD_LOGIC_VECTOR(10 downto 0);
	signal MA, MB		:	STD_LOGIC_VECTOR(51 downto 0);
	signal SA, SB		:	STD_LOGIC;
begin
	SA <= numberA(63);
	SB <= numberB(63);
	EA <= numberA(62 downto 52);
	EB <= numberB(62 downto 52);
	MA <= numberA(51 downto 0);
	MB <= numberB(51 downto 0);
	
	process(SA, SB, EA, EB, MA, MB, enable)
	begin
		if enable = '1' then
			NA(68) <= SA;
			NA(67 downto 57) <= EA;
			NB(68) <= SB;
			NB(67 downto 57) <= EB;
			if (EA > X"00"&"000") then
				NA(56) <= '1';
				NA(55 downto 4) <= MA;
				NA(3 downto 0) <= X"0";
			elsif EA = X"00"&"000" then
				NA(56) <= '0';
				NA(55 downto 4) <= MA;
				NA(3 downto 0) <= X"0";
			else
				NA <= "---------------------------------------------------------------------";
			end if;
			if (EB > X"00"&"000") then
				NB(56) <= '1';
				NB(55 downto 4) <= MB;
				NB(3 downto 0) <= X"0";
			elsif EB = X"00"&"000" then
				NB(56) <= '0';
				NB(55 downto 4) <= MB;
				NB(3 downto 0) <= X"0";
			else
				NB <= "---------------------------------------------------------------------";
			end if;
		else
			NA <= "---------------------------------------------------------------------";
			NB <= "---------------------------------------------------------------------";
		end if;
	end process;

	e_data <= 	"00" when EA = X"00"&"000" and EB = X"00"&"000" and enable = '1' else
					"01" when EA > X"00"&"000" and EB > X"00"&"000" and enable = '1' else
					"10" when (EA = X"00"&"000" or EB = X"00"&"000")and enable = '1' else
					"--";
	
end Behavioral;

