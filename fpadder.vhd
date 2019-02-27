----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:39:43 02/19/2019 
-- Design Name: 
-- Module Name:    fpadder - Behavioral 
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

entity fpadder is
	PORT	(
				NumberA	:	IN STD_LOGIC_VECTOR(63 downto 0);
				NumberB	:	IN STD_LOGIC_VECTOR(63 downto 0);
				A_S		:	IN STD_LOGIC;
				result	:	OUT STD_LOGIC_VECTOR(63 downto 0)
			);
end fpadder;

architecture Behavioral of fpadder is

	COMPONENT n_case PORT	(
										NumberA, NumberB	:	IN STD_LOGIC_VECTOR(63 downto 0);
										enable				:	OUT STD_LOGIC;
										S						:	OUT STD_LOGIC_VECTOR(63 downto 0)
									);
	END COMPONENT;
	
	COMPONENT preadder PORT	(
										NumberA, NumberB	:	IN STD_LOGIC_VECTOR(63 downto 0);
										enable				:	IN STD_LOGIC;
										SA, SB				:	OUT STD_LOGIC;
										C						:	OUT STD_LOGIC;
										EOut					:	OUT STD_LOGIC_VECTOR(10 downto 0);
										MAOut, MBOut		:	OUT STD_LOGIC_VECTOR(56 downto 0)
									);
	END COMPONENT;
	
	COMPONENT block_adder PORT	(
											SA, SB	:	IN STD_LOGIC;
											A, B		:	IN STD_LOGIC_VECTOR(56 downto 0);
											A_S		:	IN STD_LOGIC;
											Comp		:	IN STD_LOGIC;
											S			:	OUT STD_LOGIC_VECTOR(56 downto 0);
											SO			:	OUT STD_LOGIC;
											Co			:	OUT STD_LOGIC
										);
	END COMPONENT;
	
	COMPONENT norm_vector PORT	(
											SS	:	IN STD_LOGIC;
											MS	:	IN STD_LOGIC_VECTOR(56 downto 0);
											ES	:	IN STD_LOGIC_VECTOR(10 downto 0);
											Co	:	IN STD_LOGIC;
											N	:	OUT STD_LOGIC_VECTOR(63 downto 0)
										);
	END COMPONENT;
	
	COMPONENT mux_fpadder PORT	(
											N1, N2	:	IN STD_LOGIC_VECTOR(63 downto 0);
											enable	:	IN STD_LOGIC;
											result	:	OUT STD_LOGIC_VECTOR(63 downto 0)
										);
	END COMPONENT;
	
	SIGNAL MA_aux, MB_aux, MOut_aux	:	STD_LOGIC_VECTOR(56 downto 0);
	SIGNAL EOut_aux						:	STD_LOGIC_VECTOR(10 downto 0);
	SIGNAL Comp_aux, Carry				:	STD_LOGIC;
	SIGNAL SA_aux, SB_aux, S_aux		:	STD_LOGIC;
	SIGNAL enable_aux						:	STD_LOGIC;
	SIGNAL Ncase, Nadder					:	STD_LOGIC_VECTOR(63 downto 0);

begin

	comp0:	preadder PORT MAP	(
											NumberA	=>	NumberA,
											NumberB	=>	NumberB,
											enable	=>	enable_aux,
											SA			=>	SA_aux,
											SB			=>	SB_aux,
											C			=>	Comp_aux,
											EOut		=>	EOut_aux,
											MAOut		=>	MA_aux,
											MBOut		=>	MB_aux
										);
	comp1:	block_adder PORT MAP	(
												SA		=>	SA_aux,
												SB		=>	SB_aux,
												A		=>	MA_aux,
												B		=>	MB_aux,
												A_S	=>	A_S,
												Comp	=>	Comp_aux,
												S		=>	MOut_aux,
												SO		=>	S_aux,
												Co		=>	Carry
											);
	comp2:	norm_vector PORT MAP	(
												SS	=>	S_aux,
												MS	=>	MOut_aux,
												ES	=>	EOut_aux,
												Co	=>	Carry,
												N	=>	Nadder
											);
	comp3:	mux_fpadder PORT MAP	(
												N1			=>	Ncase,
												N2			=> Nadder,
												enable	=>	enable_aux,
												result	=>	result
											);
	comp4:	n_case PORT MAP	(
											NumberA	=>	NumberA,
											NumberB	=>	NumberB,
											enable	=>	enable_aux,
											S			=>	Ncase
										);

end Behavioral;

