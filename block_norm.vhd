----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:13:22 02/19/2019 
-- Design Name: 
-- Module Name:    block_norm - Behavioral 
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

entity block_norm is
	PORT	(
				MS	:	IN STD_LOGIC_VECTOR(56 downto 0);
				ES	:	IN STD_LOGIC_VECTOR(10 downto 0);
				Co	:	IN STD_LOGIC;
				M	:	OUT STD_LOGIC_VECTOR(51 downto 0);
				E	:	OUT STD_LOGIC_VECTOR(10 downto 0)
			);
end block_norm;

architecture Behavioral of block_norm is

	COMPONENT zero PORT	(
									T			:	IN STD_LOGIC_VECTOR(56 downto 0);
									ZCount	:	OUT STD_LOGIC_VECTOR(5 downto 0)
								);
	end COMPONENT;
	
	COMPONENT shift_left	PORT	(
											T		:	IN STD_LOGIC_VECTOR(56 downto 0);
											Shft	:	IN STD_LOGIC_VECTOR(5 downto 0);
											S		:	OUT STD_LOGIC_VECTOR(56 downto 0)
										);
	end COMPONENT;
	
	COMPONENT round PORT	(
									Min	:	IN STD_LOGIC_VECTOR(56 downto 0);
									Mout	:	OUT STD_LOGIC_VECTOR(51 downto 0)
								);
	END COMPONENT;
	
	SIGNAL Zcount_aux, Shift	:	STD_LOGIC_VECTOR(5 downto 0);
	SIGNAL Number					:	STD_LOGIC_VECTOR(56 downto 0);

begin
	comp0	:	zero PORT MAP	(
										T	=>	MS,
										ZCount	=>	ZCount_aux
									);
	comp1	:	shift_left PORT MAP	(
												T		=>	MS,
												shft	=>	Shift,
												S		=>	Number
											);
	comp2	:	round PORT MAP	(
										Min	=>	Number,
										Mout	=>	M
									);
									
	PROCESS(MS, ES, Shift, ZCount_aux, Co)
		begin
		
			if ZCount_aux = "------" then
				Shift	<=	"------";
				E		<=	"-----------";
			elsif ES > ZCount_aux then
				Shift	<=	ZCount_aux;
				E		<=	ES - Shift + Co;
			elsif ES < ZCount_aux then
				Shift	<=	ES(5 downto 0);
				E		<=	X"00"&"000";
			elsif ES = ZCount_aux then
				Shift	<=	ZCount_aux;
				E		<=	"000"&X"01";
			end if;
	end PROCESS;
end Behavioral;

