----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:00:37 02/12/2019 
-- Design Name: 
-- Module Name:    n_normal - Behavioral 
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

entity n_normal is
	Port	(
				numberA	:	IN STD_LOGIC_VECTOR(68 downto 0);
				numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
				Comp		:	OUT STD_LOGIC;
				SA			:	OUT STD_LOGIC;
				SB			:	OUT STD_LOGIC;
				EO			:	OUT STD_LOGIC_VECTOR(10 downto 0);
				MA			:	OUT STD_LOGIC_VECTOR(56 downto 0);
				MB			:	OUT STD_LOGIC_VECTOR(56 downto 0)
			);
end n_normal;

architecture Behavioral of n_normal is

COMPONENT comp_exp PORT	(
									numberA, numberB	:	IN STD_LOGIC_VECTOR (68 downto 0);
									SA, SB				:	OUT STD_LOGIC;
									Emax					:	OUT STD_LOGIC_VECTOR(10 downto 0);
									Mmax					:	OUT STD_LOGIC_VECTOR(56 downto 0);
									Mshft					:	OUT STD_LOGIC_VECTOR(56 downto 0);
									Dexp					:	OUT STD_LOGIC_VECTOR(5 downto 0);
									Comp					:	OUT STD_LOGIC
								);
END COMPONENT;

COMPONENT shift PORT	(
									T		:	IN STD_LOGIC_VECTOR (56 downto 0);
									shft	:	IN STD_LOGIC_VECTOR(5 downto 0);
									S		:	OUT STD_LOGIC_VECTOR(56 downto 0)
								);
END COMPONENT;

SIGNAL Mshft_aux		:	STD_LOGIC_VECTOR(56 downto 0);
SIGNAL Dexp_aux		:	STD_LOGIC_VECTOR(5 downto 0);

begin
	COMP0: comp_exp
		PORT MAP (
						numberA	=>	numberA,
						numberB	=>	numberB,
						SA			=>	SA,
						SB			=>	SB,
						EMAX		=>	EO,
						Mmax		=>	MA,
						MShft		=>	Mshft_aux,
						Dexp		=>	Dexp_aux,
						Comp		=>	Comp
					);
	COMP1: shift
		PORT MAP (
						T		=>	Mshft_aux,
						shft	=>	Dexp_aux,
						S		=>	MB
					);
end Behavioral;

