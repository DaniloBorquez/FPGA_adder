----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:15:55 02/13/2019 
-- Design Name: 
-- Module Name:    preadder - Behavioral 
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

entity preadder is
	PORT	(
				numberA	:	IN STD_LOGIC_VECTOR(63 downto 0);
				numberB	:	IN STD_LOGIC_VECTOR(63 downto 0);
				enable	:	IN STD_LOGIC;
				SA			:	OUT STD_LOGIC;
				SB			:	OUT STD_LOGIC;
				C			:	OUT STD_LOGIC;
				Eout		:	OUT STD_LOGIC_VECTOR(10 downto 0);
				MAOut		:	OUT STD_LOGIC_VECTOR(56 downto 0);
				MBOut		:	OUT STD_LOGIC_VECTOR(56 downto 0)
			);
end preadder;

architecture Behavioral of preadder is

	COMPONENT n_normal	PORT	(
											numberA, numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
											Comp					:	OUT STD_LOGIC;
											SA						:	OUT STD_LOGIC;
											SB						:	OUT STD_LOGIC;
											EO						:	OUT STD_LOGIC_VECTOR(10 downto 0);
											MA, MB				:	OUT STD_LOGIC_VECTOR(56 downto 0)
										);
	END COMPONENT;
	
	COMPONENT mux_ns	PORT	(
										NorA, NorB, MixA, MixB	:	IN STD_LOGIC_VECTOR(68 downto 0);
										e_data						:	IN STD_LOGIC_VECTOR(1 downto 0);
										NA, NB						:	OUT STD_LOGIC_VECTOR(68 downto 0)
									);
	END COMPONENT;
	
	COMPONENT demux	PORT	(
										numberA, numberB					:	IN STD_LOGIC_VECTOR(68 downto 0);
										e_data								:	IN STD_LOGIC_VECTOR(1 downto 0);
										NA0, NB0, NA1, NB1, NA2, NB2	:	OUT STD_LOGIC_VECTOR(68 downto 0)
									);
	END COMPONENT;
	
	COMPONENT mux_adder PORT	(
											NorSA, NorSB, SubSA, SubSB	:	IN STD_LOGIC;
											CompN, CompS					:	IN STD_LOGIC;
											NorE, SubE						:	IN STD_LOGIC_VECTOR(10 downto 0);
											NorMA, NorMB, SubMA, SubMB	:	IN STD_LOGIC_VECTOR(56 downto 0);
											e_data							:	IN STD_LOGIC_VECTOR(1 downto 0);
											SA, SB, C						:	OUT STD_LOGIC;
											E									:	OUT STD_LOGIC_VECTOR(10 downto 0);
											A, B								:	OUT STD_LOGIC_VECTOR(56 downto 0)
										);
	END COMPONENT;
	
	COMPONENT norm PORT	(
									numberA, numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
									MA, MB				:	OUT STD_LOGIC_VECTOR(68 downto 0)
								);
	END COMPONENT;
	
	COMPONENT n_subn	PORT	(
										numberA, numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
										Comp					:	OUT STD_LOGIC;
										SA						:	OUT STD_LOGIC;
										SB						:	OUT STD_LOGIC;
										EO						:	OUT STD_LOGIC_VECTOR(10 downto 0);
										MA, MB				:	OUT STD_LOGIC_VECTOR(56 downto 0)
									);
	END COMPONENT;
	
	COMPONENT selector	PORT	(
											numberA, numberB	:	IN	STD_LOGIC_VECTOR(63 downto 0);
											enable				:	IN	STD_LOGIC;
											e_data				:	OUT	STD_LOGIC_VECTOR(1 downto 0);
											NA, NB				:	OUT	STD_LOGIC_VECTOR(68 downto 0)
										);
	END COMPONENT;
	
	SIGNAL	NA_out_select, NB_out_select					: STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL	A_sub, B_sub										: STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL	A_nor, B_nor										: STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL	A_mix, B_mix										: STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL	mixAaux, mixBaux									: STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL	Amux, Bmux											: STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL	SAnor, SBnor, SAsub, SBsub, NComp, SComp	: STD_LOGIC;
	SIGNAL	Enor, Esub											: STD_LOGIC_VECTOR(10 downto 0);
	SIGNAL	MAnor, MBnor, MAsub, MBsub						: STD_LOGIC_VECTOR(56 downto 0);	
	
	SIGNAL edata	:	STD_LOGIC_VECTOR(1 downto 0);
	
begin

	comp0	:	n_normal
				PORT MAP	(
								numberA	=>	Amux,
								numberB	=>	Bmux,
								Comp		=>	NComp,
								SA			=>	SAnor,
								SB			=>	SBnor,
								EO			=>	Enor,
								MA			=>	MAnor,
								MB			=>	MBnor
							);
	comp1	:	mux_ns
				PORT MAP	(
								norA		=>	A_nor,
								norB		=>	B_nor,
								mixA		=>	mixAaux,
								mixB		=>	mixBaux,
								e_data	=>	edata,
								NA			=>	Amux,
								NB			=>	Bmux
							);
	comp2	:	demux
				PORT MAP	(
								numberA	=>	NA_out_select,
								numberB	=>	NB_out_select,
								e_data	=>	edata,
								NA0		=>	A_sub,
								NB0		=>	B_sub,
								NA1		=>	A_nor,
								NB1		=>	B_nor,
								NA2		=>	A_mix,
								NB2		=>	B_mix
							);
	comp3	:	mux_adder
				PORT MAP	(
								norSA		=>	SAnor,
								norSB		=>	SBnor,
								subSA		=>	SAsub,
								subSB		=>	SBsub,
								CompN		=>	NComp,
								CompS		=>	SComp,
								norE		=>	Enor,
								subE		=>	Esub,
								norMA		=>	MAnor,
								norMB		=>	MBnor,
								subMA		=>	MAsub,
								subMB		=>	MBsub,
								e_data	=>	edata,
								SA			=>	SA,
								SB			=>	SB,
								C			=>	C,
								E			=>	Eout,
								A			=>	MAout,
								B			=>	MBout
							);
	comp4	:	norm
				PORT MAP	(
								numberA	=>	A_mix,
								numberB	=>	B_mix,
								MA			=>	mixAaux,
								MB			=>	mixBaux
							);
	comp5	:	n_subn
				PORT MAP	(
								numberA	=>	A_sub,
								numberB	=>	B_sub,
								Comp		=>	SComp,
								SA			=>	SAsub,
								SB			=>	SBsub,
								EO			=>	Esub,
								MA			=>	MAsub,
								MB			=>	MBsub
							);
	comp6	:	selector
				PORT MAP	(
								numberA	=>	numberA,
								numberB	=>	numberB,
								enable	=>	enable,
								e_data	=>	edata,
								NA			=>	NA_out_select,
								NB			=>	NB_out_select
							);

end Behavioral;

