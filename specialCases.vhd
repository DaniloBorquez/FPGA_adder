----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:01:30 02/05/2019 
-- Design Name: 
-- Module Name:    specialCases - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity n_case is
	port(
		numberA	: 	in STD_LOGIC_VECTOR(63 downto 0);
		numberB	:	in STD_LOGIC_VECTOR(63 downto 0);
		enable	:	out STD_LOGIC;
		S			:	out STD_LOGIC_VECTOR(63 downto 0)
	);
end n_case;

architecture Behavioral of n_case is

signal outA, outB	:	STD_LOGIC_VECTOR(2 downto 0);

signal EA, EB		:	STD_LOGIC_VECTOR(10 downto 0);
signal MA, MB		:	STD_LOGIC_VECTOR(51 downto 0);
signal SA, SB		:	STD_LOGIC;

signal SS		:	STD_LOGIC;
signal ES		:	STD_LOGIC_VECTOR(10 downto 0);
signal MS		:	STD_LOGIC_VECTOR(51 downto 0);

begin

	SA <= numberA(63);
	SB <= numberB(63);
	EA <= numberA(62 downto 52);
	EB <= numberB(62 downto 52);
	MA <= numberA(51 downto 0);
	MB <= numberB(51 downto 0);
	
	outA <= 	"000" when EA = 0 and MA = 0 else
				"001" when EA = 0 and MA > 0 else
				"011" when (EA > 0 and EA < "11111111111") and MA > 0 else
				"100" when EA = "11111111111" and MA = 0 else
				"110" when EA = "11111111111" and MA > 0 else
				"000";
				
	outB <= 	"000" when EB = 0 and MB = 0 else
				"001" when EB = 0 and MB > 0 else
				"011" when (EB > 0 and EB < "11111111111") and MB > 0 else
				"100" when EB = "11111111111" and MB = 0 else
				"110" when EB = "11111111111" and MB > 0 else
				"000";

	enable <= '1' when ((outA(0) and outB(0)) = '1') else '0';
	
	process(SA, SB, outA, outB)
	begin
		if (outA = "000") then
			SS <= SB;
			ES <= EB;
			MS <= MB;
		elsif (outB = "000") then
			SS <= SA;
			ES <= EA;
			MS <= MA;
		end if;
		
		if(outA(0) = '1' and outB = "100") then
			SS <= SB;
			ES <= EB;
			MS <= MB;
		elsif(outB(0) = '1' and outA = "100") then
			SS <= SA;
			ES <= EA;
			MS <= MA;
		end if;
		
		if((outA and outB) = "100" and SA = SB) then
			SS <= SA;
			ES <= EA;
			MS <= MA;
		elsif ((outA and outB) = "100" and SA /= SB) then
			SS <= '1';
			ES <= "11111111111";
			MS <= "0000000000000000000000000000000000000000000000000001";
		end if;
		
		if(outA = "100" or outB = "110") then
			SS <= '1';
			ES <= "11111111111";
			MS <= "0000000000000000000000000000000000000000000000000001";
		end if;
		
		if((outA(0) and outB(0)) = '1') then
			SS <= '-';
			ES <= "-----------";
			MS <= "----------------------------------------------------";
		end if;
	end process;
	
	S(63) <= SS;
	S(62 downto 52) <= ES;
	S(51 downto 0) <= MS;
end Behavioral;

