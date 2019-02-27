----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:36:38 02/13/2019 
-- Design Name: 
-- Module Name:    mux_adder - Behavioral 
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

entity mux_adder is
	PORT	(
				NorSA		:	IN STD_LOGIC;
				NorSB		:	IN STD_LOGIC;
				SubSA		:	IN STD_LOGIC;
				SubSB		:	IN STD_LOGIC;
				CompN		:	IN STD_LOGIC;
				CompS		:	IN STD_LOGIC;
				NorE		:	IN STD_LOGIC_VECTOR(10 downto 0);
				SubE		:	IN STD_LOGIC_VECTOR(10 downto 0);
				NorMA		:	IN STD_LOGIC_VECTOR(56 downto 0);
				NorMB		:	IN STD_LOGIC_VECTOR(56 downto 0);
				SubMA		:	IN STD_LOGIC_VECTOR(56 downto 0);
				SubMB		:	IN STD_LOGIC_VECTOR(56 downto 0);
				e_data	:	IN STD_LOGIC_VECTOR(1 downto 0);
				SA			:	OUT STD_LOGIC;
				SB			:	OUT STD_LOGIC;
				C			:	OUT STD_LOGIC;
				E			:	OUT STD_LOGIC_VECTOR(10 downto 0);
				A			:	OUT STD_LOGIC_VECTOR(56 downto 0);
				B			:	OUT STD_LOGIC_VECTOR(56 downto 0)
			);
end mux_adder;

architecture Behavioral of mux_adder is

begin

	A	<=	NorMA when e_data = "01" or e_data = "10" else
			SubMA when e_data = "00" else
			"---------------------------------------------------------";
			
	B	<=	NorMB when e_data = "01" or e_data = "10" else
			SubMB when e_data = "00" else
			"---------------------------------------------------------";
			
	C	<=	CompN when e_data = "01" or e_data = "10" else
			CompS when e_data = "00" else
			'-';
			
	SA	<=	NorSA when e_data = "01" or e_data = "10" else
			SubSA when e_data = "00" else
			'-';
			
	SB	<=	NorSB when e_data = "01" or e_data = "10" else
			SubSB when e_data = "00" else
			'-';
			
	E	<=	NorE when e_data = "01" or e_data = "10" else
			SubE when e_data = "00" else
			"-----------";

end Behavioral;

