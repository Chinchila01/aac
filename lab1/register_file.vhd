----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10.02.2016 12:04:57
-- Design Name: 
-- Module Name: register_file - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use WORK.MAIN_DEFINITIONS.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_file is
    Port ( 
           clk : in STD_LOGIC;
           reset : in STD_LOGIC;
           -- Output Port A 
           OpA   : in  STD_LOGIC_VECTOR  (REG_ADD_WIDTH-1 downto 0);
           DoutA : out STD_LOGIC_VECTOR  (WORD_WIDTH-1 downto 0);
           -- Output Port B
           OpB   : in  STD_LOGIC_VECTOR  (REG_ADD_WIDTH-1 downto 0);
           DoutB : out STD_LOGIC_VECTOR  (WORD_WIDTH-1 downto 0);
           -- input/output Port D
           WE    : in  STD_LOGIC;
           OpD   : in  STD_LOGIC_VECTOR (REG_ADD_WIDTH-1 downto 0);
			  OP_D_REG : in STD_LOGIC_VECTOR(REG_ADD_WIDTH-1 downto 0);
           DinD  : in  STD_LOGIC_VECTOR  (WORD_WIDTH-1 downto 0);
           DoutD : out STD_LOGIC_VECTOR  (WORD_WIDTH-1 downto 0);
			  -- Validation --
			  FW_exTable_A : out std_logic;
			  FW_exTable_B : out std_logic;
			  FW_exTable_D : out std_logic;
			  
			  FW_memTable_A : out std_logic;
			  FW_memTable_B : out std_logic;
			  FW_memTable_D : out std_logic;
			  
			  FW_wbTable_A : out std_logic;
			  FW_wbTable_B : out std_logic;
			  FW_wbTable_D : out std_logic;

			  
			  AIsInValid:out STD_LOGIC;
			  BIsInValid:out STD_LOGIC;
			  
			  ID_ENABLE: in STD_LOGIC;
			  
			  memCTRL: in STD_LOGIC_VECTOR(2 downto 0);
			  BrTaken : in STD_LOGIC
         );
end register_file;

architecture Behavioral of register_file is

-- declare signals
signal RegisterTable : word_array(N_REGISTERS-1 downto 0);
signal idTable  : std_logic_vector(N_REGISTERS-1 downto 0);
signal exTable  : std_logic_vector(N_REGISTERS-1 downto 0);
signal memTable : std_logic_vector(N_REGISTERS-1 downto 0);
signal wbTable  : std_logic_vector(N_REGISTERS-1 downto 0);

signal toScoreBoard : std_logic; -- when 1, scoreboard is recorded, else isn't
signal StoreSig : std_logic;
signal loadOP_reg: std_logic; -- when load operation, data_hazard is needed
signal DIsInValid: std_logic;
signal REG_AIsInValid,REG_BIsInValid : std_logic; -- load operation, 2 stalls needed
signal Data_Stall : std_logic;
begin

StoreSig <= '0' when memCTRL(2)='1' else '1'; -- when store operation, scoreboard is not updated

toScoreBoard <= ID_ENABLE AND NOT BrTaken AND StoreSig;
loadOP_reg <= '1' when (memCTRL="001" OR memCTRL="010" OR memCTRL="011") else '0' when rising_edge(clk);

Data_Stall <= REG_BIsInValid or (exTable(conv_integer(OpB)) AND loadOp_Reg) or REG_AIsInValid or (exTable(conv_integer(OpA)) AND loadOp_Reg);-- when stalls, scoreboard not updated

-- Scoreboard markings --
uScoreboard: for i in 1 to (N_REGISTERS-1) generate
		idTable(i) <= '1' when conv_integer(OpD)=i AND toScoreBoard='1' AND Data_Stall='0' else '0';
end generate;
		idTable(0) <= '0';

exTable  <= (others => '0') when reset='1' else idTable  when rising_edge(clk);
memTable <= (others => '0') when reset='1' else exTable  when rising_edge(clk);
wbTable  <= (others => '0') when reset='1' else memTable when rising_edge(clk);

FW_exTable_A <= exTable(conv_integer(OpA));
FW_memTable_A <= memTable(conv_integer(OpA));
FW_wbTable_A <= wbTable(conv_integer(OpA));
FW_exTable_B <= exTable(conv_integer(OpB));
FW_memTable_B <= memTable(conv_integer(OpB));
FW_wbTable_B <= wbTable(conv_integer(OpB));
FW_exTable_D <= DIsInValid and exTable(conv_integer(OpD));
FW_memTable_D <= DIsInValid and memTable(conv_integer(OpD));
FW_wbTable_D <= DIsInValid and wbTable(conv_integer(OpD));

REG_AIsInValid <= (exTable(conv_integer(OpA)) AND loadOp_Reg) when rising_edge(clk);
REG_BIsInValid <= (exTable(conv_integer(OpB)) AND loadOp_Reg) when rising_edge(clk);
AIsInValid <= (exTable(conv_integer(OpA)) AND loadOp_Reg) OR REG_AIsInValid; --OR memTable(conv_integer(OpA)) OR wbTable(conv_integer(OpA));
BIsInValid <= (exTable(conv_integer(OpB)) AND loadOp_Reg) OR REG_BIsInValid; --OR memTable(conv_integer(OpB)) OR wbTable(conv_integer(OpB));
DIsInValid <= Not(StoreSig) and (exTable(conv_integer(OpD)) OR memTable(conv_integer(OpD)) OR wbTable(conv_integer(OpD)));

-- Asynchronous read process
DoutA <= RegisterTable(conv_integer(OpA));
DoutB <= RegisterTable(conv_integer(OpB));
DoutD <= RegisterTable(conv_integer(OpD));

-- Register r[0] is always 0
RegisterTable(0) <= (others =>'0');

-- Synchronous write process to remaining registers (2**N ==> 2^N)
WriteUnit: for i in 1 to 2**REG_ADD_WIDTH-1 generate
	process(CLK,reset)
	begin
	    if reset='1' then
	       RegisterTable(i) <= (others=>'0');
		elsif falling_edge(clk) then
			if WE='1' and conv_integer(OP_D_REG)=i then
				RegisterTable(i) <= DinD;
			end if;
		end if;
	end process;
end generate;

end Behavioral;
