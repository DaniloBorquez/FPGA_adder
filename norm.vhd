----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:59:17 02/12/2019 
-- Design Name: 
-- Module Name:    norm - Behavioral 
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

entity norm is
	PORT (
			numberA	:	IN STD_LOGIC_VECTOR(68 downto 0);
			numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
			MA			:	OUT STD_LOGIC_VECTOR(68 downto 0);
			MB			:	OUT STD_LOGIC_VECTOR(68 downto 0)
		);
end norm;

architecture Behavioral of norm is

	COMPONENT Zero PORT (
								T			:	IN STD_LOGIC_VECTOR(56 downto 0);
								Zcount	:	OUT STD_LOGIC_VECTOR(5 downto 0)
							);
	END COMPONENT;
	
	COMPONENT shift_left PORT (
											T		:	IN STD_LOGIC_VECTOR(56 downto 0);
											shft	:	IN STD_LOGIC_VECTOR(5 downto 0);
											S		:	OUT STD_LOGIC_VECTOR(56 downto 0)
										);
	END COMPONENT;
	
	COMPONENT Comp PORT (
								numberA	:	IN STD_LOGIC_VECTOR(68 downto 0);
								numberB	:	IN STD_LOGIC_VECTOR(68 downto 0);
								NA			:	OUT STD_LOGIC_VECTOR(68 downto 0);
								NB			:	OUT STD_LOGIC_VECTOR(68 downto 0)
							);
	END COMPONENT;
	
	SIGNAL Zcount_aux		:STD_LOGIC_VECTOR(5 downto 0);
	SIGNAL EB				:STD_LOGIC_VECTOR(10 downto 0);
	SIGNAL numberB_aux	:STD_LOGIC_VECTOR(68 downto 0);
	SIGNAL MB_aux			:STD_LOGIC_VECTOR(56 downto 0);

begin

	comp0	:	Zero
		PORT MAP (
						T			=>	numberB_aux(56 downto 0),
						Zcount	=>	Zcount_aux
					);
	comp1	:	shift_left
		PORT MAP (
						T			=>	numberB_aux(56 downto 0),
						shft		=>	Zcount_aux,
						S			=>	MB_aux
					);
	comp2	:	comp
		PORT MAP (
						numberA	=>	numberA,
						numberB	=>	numberB,
						NA			=>	MA,
						NB			=>	numberB_aux
					);
	PROCESS(Zcount_aux, numberB_aux, EB, MB_aux)
		begin
			if Zcount_aux /= "------" then
				EB						<=	"00000" & Zcount_aux;
				MB(56 downto 0) 	<= MB_aux(56 downto 1) & '1';
			else
				EB						<=	"-----------";
				MB(56 downto 0) 	<=	MB_aux;
			end if;
			
			MB(67 downto 57)		<=	EB;
			MB(68)					<=	numberB_aux(68);
		END PROCESS;

end Behavioral;

