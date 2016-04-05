----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 15.02.2016 20:09:27
-- Design Name: 
-- Module Name: simpleCore - Behavioral
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

entity simpleCore is
  Port (
        -- global control signals
        clk   : in  STD_LOGIC;
        reset : in  STD_LOGIC;
        -- instruction memory signals
        PC    : out STD_LOGIC_VECTOR(PC_WIDTH-1 downto 0);
        I     : in  STD_LOGIC_VECTOR(31 downto 0);
        -- data memory signals
        MemAddress    : out STD_LOGIC_VECTOR(PC_WIDTH-1 downto 0);
        MemWriteEnable : out STD_LOGIC; 
        MemWriteData  : out STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0); 
        MemReadData   : in  STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0)
       );
end simpleCore;

architecture Behavioral of simpleCore is

--------------------------------------------------------------------------------------------
-- stage control signals
--------------------------------------------------------------------------------------------
signal IF_STAGE_ENABLE : STD_LOGIC;
signal ID_STAGE_ENABLE : STD_LOGIC;
signal EX_STAGE_ENABLE : STD_LOGIC;
signal MEM_STAGE_ENABLE : STD_LOGIC;
signal WB_STAGE_ENABLE : STD_LOGIC;

--------------------------------------------------------------------------------------------
-- IF  stage signals
--------------------------------------------------------------------------------------------
signal IF_PC : STD_LOGIC_VECTOR(PC_WIDTH-1 downto 0);

--------------------------------------------------------------------------------------------
-- ID  stage signals
--------------------------------------------------------------------------------------------
-- instruction & branch condition
signal ID_I : STD_LOGIC_VECTOR(31 downto 0);
signal ID_PC, ID_NextPC : STD_LOGIC_VECTOR(PC_WIDTH-1 downto 0);
signal ID_BrCond : STD_LOGIC_VECTOR( 2 downto 0);
signal ID_BrPC, ID_BrOffset : STD_LOGIC_VECTOR(PC_WIDTH-1 downto 0);

-- operands
signal ID_OpA, ID_OpB, ID_OpD : STD_LOGIC_VECTOR(REG_ADD_WIDTH-1 downto 0);
signal ID_RegDA, ID_RegDB, ID_RegDD : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

-- EX control & operands
signal ID_ExCTRL  : STD_LOGIC_VECTOR( 2 downto 0);
signal ID_ExOpA, ID_ExOpB : STD_LOGIC_VECTOR(WORD_WIDTH downto 0);
signal ID_ExOpC : STD_LOGIC;
signal ID_MSR_C_WE : STD_LOGIC;

-- EX memory
signal ID_MemCTRL  : STD_LOGIC_VECTOR( 2 downto 0);

-- WB
signal ID_RegWE : STD_LOGIC;

--Tables
signal exTable : std_logic_vector(N_REGISTERS-1 downto 0);
signal memTable: std_logic_vector(N_REGISTERS-1 downto 0);
signal wbTable : std_logic_vector(N_REGISTERS-1 downto 0);

--------------------------------------------------------------------------------------------
-- EX  stage signals
--------------------------------------------------------------------------------------------
-- EX control & operands
signal EX_CTRL  : STD_LOGIC_VECTOR( 2 downto 0);
signal EX_OpA, EX_OpB : STD_LOGIC_VECTOR(WORD_WIDTH downto 0);
signal EX_OpC : STD_LOGIC;
signal EX_OpD : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal EX_FlagC, EX_MSR_C_WE, EX_MSR_C : STD_LOGIC;
signal EX_Result : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

-- EX control & operands
signal EX_MemCTRL  : STD_LOGIC_VECTOR( 2 downto 0);

-- WB
signal EX_RegWE : STD_LOGIC;

--------------------------------------------------------------------------------------------
-- MEM stage signals
--------------------------------------------------------------------------------------------
signal MEM_CTRL  : STD_LOGIC_VECTOR( 2 downto 0);
signal MEM_ExResult, MEM_DataIn : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

-- WB
signal MEM_RegWE : STD_LOGIC;

--------------------------------------------------------------------------------------------
-- WB  stage signals
--------------------------------------------------------------------------------------------
signal WB_RegWE, RegWE : STD_LOGIC;
signal WB_MemCTRL : STD_LOGIC_VECTOR( 2 downto 0);
signal WB_RegDin, WB_ExResult, WB_StoreData: STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

---
--
---
signal RF_InValidA, RF_InValidB : STD_LOGIC;
signal Data_Hazard : STD_LOGIC;
signal OpA_I_Needed,OpB_I_Needed: STD_LOGIC;
signal Mux_I : STD_LOGIC_VECTOR(31 downto 0);
signal REG_I : STD_LOGIC_VECTOR(31 downto 0);
signal REG_PC: STD_LOGIC_VECTOR(PC_WIDTH-1 downto 0);
signal CHazard : STD_LOGIC;
signal Control_Hazard: STD_LOGIC_VECTOR(2 downto 0);
signal Hazard,PC_Hazard : STD_LOGIC;

-- Forwarding
signal FW_Ex_OpA : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal FW_Ex_OpB : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal FW_Mem_OpA : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal FW_Mem_OpB : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal FW_Wb_OpA : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal FW_Wb_OpB : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

signal ID_ExOpA_EX_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal ID_ExOpB_EX_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal ID_ExOpA_MEM_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal ID_ExOpB_MEM_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal ID_ExOpA_WB_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal ID_ExOpB_WB_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

signal ID_ExOpA_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);
signal ID_ExOpB_FW : STD_LOGIC_VECTOR(WORD_WIDTH-1 downto 0);

signal extable_a : std_logic;
signal extable_b : std_logic;
signal memtable_a : std_logic;
signal memtable_b : std_logic;
signal wbtable_a : std_logic;
signal wbtable_b : std_logic;

signal BrTaken, REG_BrTaken : std_logic;

-- Carry forwarding
signal EX_MSR_C_FW, MSR_C_REG : std_logic;

begin


--------------------------------------------------------------------------------------------
-- stage control signals
--------------------------------------------------------------------------------------------
-- activate one stage at a time
--IF_STAGE_ENABLE  <= '1';-- when reset='1' else WB_STAGE_ENABLE when rising_edge(clk);
ID_STAGE_ENABLE  <= '0' when reset='1' else NOT Hazard when rising_edge(clk);
EX_STAGE_ENABLE  <= '1';--0' when reset='1' else ID_STAGE_ENABLE when rising_edge(clk);
MEM_STAGE_ENABLE <= '1';--0' when reset='1' else EX_STAGE_ENABLE when rising_edge(clk);
WB_STAGE_ENABLE  <= '1';--0' when reset='1' else MEM_STAGE_ENABLE when rising_edge(clk);

---------------------------------------------------------------------------------------------------------------
-- PC REGISTER
---------------------------------------------------------------------------------------------------------------
--IF_PC <= (PC_WIDTH-1 downto 0=>'0') when reset='1' else
--         ID_NextPC when rising_edge(clk);-- and WB_STAGE_ENABLE='1';
ID_PC <= (PC_WIDTH-1 downto 0=>'0') when reset='1' else
         ID_NextPC when rising_edge(clk) and PC_Hazard='0' else REG_PC when rising_edge(clk);
			
REG_PC <= (others=>'0') when reset='1' else
			  ID_NextPC when rising_edge(clk) and PC_Hazard='0';

PC <= ID_PC;
---------------------------------------------------------------------------------------------------------------
-- IF to ID stage registers
---------------------------------------------------------------------------------------------------------------
--ID_PC <= (others=>'0') when reset='1' else IF_PC when rising_edge(clk) and IF_STAGE_ENABLE='1';

---------------------------------------------------------------------------------------------------------------
-- DECODER UNIT
---------------------------------------------------------------------------------------------------------------		

REG_I <= (others=>'0') when reset='1' else I when rising_edge(clk) AND Hazard='0';

ID_I <= (others=>'0') when reset='1' else  
			I when Hazard='0' else 			    
			REG_I;							

uDecoder : decoder port map(
    clk      => clk,               reset  => reset,
    -- instruction
    I        => ID_I,              PC     => ID_PC,
    -- register file connections
    RegOpA   => ID_OpA,            RegOpB => ID_OpB,           RegOpD   => ID_OpD,
    RegDA    => ID_ExOpA_FW,          RegDB  => ID_ExOpB_FW,
    RegWE    => ID_RegWE,
    -- ALU connections
    ExCTRL   => ID_ExCTRL,
    ExOpA    => ID_ExOpA,          ExOpB  => ID_ExOpB,         ExOpC    => ID_ExOpC,
    -- BR connections
    BrCond   => ID_BrCond,         BrPC   => ID_BrPC,        BrOffset => ID_BrOffset,
    -- MEM connections
    MemCTRL  => ID_MemCTRL,
    -- Other/Flag connections
    MSR_C_WE => ID_MSR_C_WE,       MSR_C => EX_MSR_C_FW
);

EX_MSR_C_FW <= EX_MSR_C when (ID_STAGE_ENABLE='0')OR(ID_MSR_C_WE='1') else
					MSR_C_REG;
			
MSR_C_REG <= EX_MSR_C when EX_MSR_C_WE='1' AND rising_edge(clk);

-- MUX EXTABLE
--ID_ExOpA_EX_FW <= ID_RegDA when exTable_A='0' else FW_Ex_OpA;
--ID_ExOpB_EX_FW <= ID_RegDB when exTable_B='0' else FW_Ex_OpB;
ID_ExOpA_FW <= ID_ExOpA_MEM_FW when exTable_A='0' else FW_Ex_OpA;
ID_ExOpB_FW <= ID_ExOpB_MEM_FW when exTable_B='0' else FW_Ex_OpB;

-- MUX MEMTABLE
ID_ExOpA_MEM_FW <= ID_ExOpA_WB_FW when memTable_A='0' else FW_Mem_OpA;
ID_ExOpB_MEM_FW <= ID_ExOpB_WB_FW when memTable_B='0' else FW_Mem_OpB;

-- MUX WBTABLE
ID_ExOpA_WB_FW <= ID_RegDA when wbTable_A='0' else FW_Wb_OpA;
ID_ExOpB_WB_FW <= ID_RegDB when wbTable_B='0' else FW_Wb_OpB;

---------------------------------------------------------------------------------------------------------------
-- REGISTER FILE
---------------------------------------------------------------------------------------------------------------
uRF : register_file port map(
    clk   => clk,           reset => reset,
    OpA   => ID_OpA,          OpB => ID_OpB,          OpD => ID_OpD,     -- port addressing
	 DoutA => ID_RegDA,      DoutB => ID_RegDB,      DoutD => ID_RegDD, -- port output
    WE    => RegWE,         DinD  => WB_RegDin,                        -- RF write (port D only)
	 fw_exTable_A =>exTable_A,fw_exTable_B =>exTable_B,fw_memTable_A => memTable_A,fw_memTable_B => memTable_B,fw_wbTable_A => wbTable_A,fw_wbTable_B => wbTable_B,
	AIsInValid=>RF_InValidA,  BIsInValid => RF_InValidB,	ID_ENABLE => ID_STAGE_ENABLE--Valid Registers
);

-------------------------------------------------------------------------------------------------
-- HAZARD DETECTION 
---------------------------------------------------------------------------------------------------------------
-- Data Hazard
Data_Hazard <= (RF_InValidA AND OpA_I_Needed) OR (RF_InValidB AND OpB_I_Needed);

OpA_I_Needed <= '0' when ID_I(31 downto 26)="101100" else '1';
OpB_I_Needed <= '0' when ID_I(29)='1' OR ID_I(31 downto 26)="100100" else '1';

-- Control Hazards
CHazard <= '1' when (ID_I(31 downto 27)="10011" OR ID_I(31 downto 27)="10111") and rising_edge(clk) else
						'0';
						
Control_Hazard <= Control_Hazard(1 downto 0) & CHazard;
						
Hazard <= PC_Hazard when rising_edge(clk);
--PC_Hazard <= (Data_Hazard OR Control_Hazard(2) OR Control_Hazard(1) OR Control_Hazard(0)); before forwarding
--PC_Hazard <= (Control_Hazard(2) OR Control_Hazard(1) OR Control_Hazard(0));
PC_Hazard <= '0';
---------------------------------------------------------------------------------------------------------------
-- BRANCH (i.e. PC) CONTROL
---------------------------------------------------------------------------------------------------------------
uBranchCTRL: branch_control port map (
    PC       => ID_BrPC,
    Offset   => ID_BrOffset,
    Cond     => ID_BrCond,
    CondWord => ID_RegDA,
    NextPC   => ID_NextPC,
	 Data_Hazard => Hazard,
	 BrTaken => REG_BrTaken
);

BrTaken <= '0' when reset='1' else REG_BrTaken when rising_edge(clk);
---------------------------------------------------------------------------------------------------------------
-- ID/OF to EX stage registers
---------------------------------------------------------------------------------------------------------------
EX_CTRL     <= (others=>'0') when (reset='1' OR BrTaken='1') else ID_ExCTRL   when rising_edge(clk) and ID_STAGE_ENABLE='1';
EX_OpA      <= (others=>'0') when (reset='1' OR BrTaken='1') else ID_ExOpA    when rising_edge(clk) and ID_STAGE_ENABLE='1';
EX_OpB      <= (others=>'0') when (reset='1' OR BrTaken='1') else ID_ExOpB    when rising_edge(clk) and ID_STAGE_ENABLE='1';
EX_OpC      <=          '0'  when (reset='1' OR BrTaken='1') else ID_ExOpC    when rising_edge(clk) and ID_STAGE_ENABLE='1';
EX_OpD      <= (others=>'0') when (reset='1' OR BrTaken='1') else ID_RegDD    when rising_edge(clk) and ID_STAGE_ENABLE='1';
EX_MSR_C_WE <=          '0'  when (reset='1' OR BrTaken='1') else ID_MSR_C_WE when rising_edge(clk) and ID_STAGE_ENABLE='1'; 
EX_MemCTRL  <= (others=>'0') when (reset='1' OR BrTaken='1') else ID_MemCTRL  when rising_edge(clk) and ID_STAGE_ENABLE='1'; 
EX_RegWE    <=          '0'  when (reset='1' OR BrTaken='1') else ID_RegWE    when rising_edge(clk) and ID_STAGE_ENABLE='1'; 

--EX_MSR_C    <= '0' when (reset='1' OR BrTaken='1') else EX_FlagC when rising_edge(clk) and EX_MSR_C_WE='1' and EX_STAGE_ENABLE='1';
EX_MSR_C    <= '0' when (reset='1' OR BrTaken='1') else EX_FlagC;
---------------------------------------------------------------------------------------------------------------
-- ALU
---------------------------------------------------------------------------------------------------------------
uALU: alu port map (
    CTRL => EX_CTRL,
    OpA  => EX_OpA,          OpB   => EX_OpB,           OpC => EX_OpC,
    Res  => EX_Result,       FlagC => EX_FlagC
);

-- Forwarding
FW_Ex_OpA <= Ex_Result;
FW_Ex_OpB <= Ex_Result;

---------------------------------------------------------------------------------------------------------------
-- EX to MEM stage registers
---------------------------------------------------------------------------------------------------------------
MEM_CTRL     <= (others=>'0') when (reset='1') else EX_MemCTRL when rising_edge(clk) and EX_STAGE_ENABLE='1';
MEM_ExResult <= (others=>'0') when (reset='1') else EX_Result  when rising_edge(clk) and EX_STAGE_ENABLE='1';
MEM_DataIn   <= (others=>'0') when (reset='1') else EX_OpD     when rising_edge(clk) and EX_STAGE_ENABLE='1';
MEM_RegWE    <=          '0'  when (reset='1') else EX_RegWE   when rising_edge(clk) and EX_STAGE_ENABLE='1'; 

---------------------------------------------------------------------------------------------------------------
-- DATA MEMORY
---------------------------------------------------------------------------------------------------------------
MemAddress   <= MEM_ExResult(PC_WIDTH-1 downto 0);

MemWriteData <= MemReadData(31 downto  8) & WB_StoreData( 7 downto 0)                            when WB_MemCTRL="101" and MEM_ExResult(1 downto 0)="00" else -- write on byte 0
                MemReadData(31 downto 16) & WB_StoreData( 7 downto 0) & MemReadData( 7 downto 0) when WB_MemCTRL="101" and MEM_ExResult(1 downto 0)="01" else -- write on byte 1
                MemReadData(31 downto 24) & WB_StoreData( 7 downto 0) & MemReadData(15 downto 0) when WB_MemCTRL="101" and MEM_ExResult(1 downto 0)="10" else -- write on byte 2
                                            WB_StoreData( 7 downto 0) & MemReadData(23 downto 0) when WB_MemCTRL="101" and MEM_ExResult(1 downto 0)="11" else -- write on byte 3
                MemReadData(31 downto 16) & WB_StoreData(15 downto 0)                            when WB_MemCTRL="110" and MEM_ExResult(1)='0' else -- write on half-word 0
                                            WB_StoreData(15 downto 0) & MemReadData(15 downto 0) when WB_MemCTRL="110" and MEM_ExResult(1)='1' else -- write on half-word 1
                WB_StoreData; -- write word

-- with the current implementation, during the MEM Stage, only read operations are allowed
-- all writes are performed during the WB stage
MemWriteEnable <= '1' when WB_STAGE_ENABLE='1' and WB_MemCTRL(2)='1' else '0'; 

-- Forwarding
FW_Mem_OpA <= MEM_ExResult;
FW_Mem_OpB <= MEM_ExResult;

---------------------------------------------------------------------------------------------------------------
-- MEM to WB stage registers
---------------------------------------------------------------------------------------------------------------
WB_ExResult    <= (others=>'0') when reset='1' else MEM_ExResult when rising_edge(clk) and MEM_STAGE_ENABLE='1';
WB_StoreData   <= (others=>'0') when reset='1' else MEM_DataIn   when rising_edge(clk) and MEM_STAGE_ENABLE='1';
WB_MemCTRL     <= (others=>'0') when reset='1' else MEM_CTRL     when rising_edge(clk) and MEM_STAGE_ENABLE='1';
WB_ExResult    <= (others=>'0') when reset='1' else MEM_ExResult when rising_edge(clk) and MEM_STAGE_ENABLE='1';
WB_RegWE       <=          '0'  when reset='1' else MEM_RegWE    when rising_edge(clk) and MEM_STAGE_ENABLE='1'; 

---------------------------------------------------------------------------------------------------------------
-- WRITE BACK STAGE
---------------------------------------------------------------------------------------------------------------
WB_RegDin <= (WORD_WIDTH-1 downto  8=>'0') & MemReadData( 7 downto  0) when WB_MemCTRL="001" and WB_ExResult(1 downto 0)="00" else -- read from byte 0
             (WORD_WIDTH-1 downto  8=>'0') & MemReadData(15 downto  8) when WB_MemCTRL="001" and WB_ExResult(1 downto 0)="01" else -- read from byte 1
             (WORD_WIDTH-1 downto  8=>'0') & MemReadData(23 downto 16) when WB_MemCTRL="001" and WB_ExResult(1 downto 0)="10" else -- read from byte 2
             (WORD_WIDTH-1 downto  8=>'0') & MemReadData(31 downto 24) when WB_MemCTRL="001" and WB_ExResult(1 downto 0)="11" else -- read from byte 3
             (WORD_WIDTH-1 downto 16=>'0') & MemReadData(15 downto  0) when WB_MemCTRL="010" and WB_ExResult(1)='0'           else -- read from half-word 0
             (WORD_WIDTH-1 downto 16=>'0') & MemReadData(31 downto 16) when WB_MemCTRL="010" and WB_ExResult(1)='1'           else -- read from half-word 1
             MemReadData                                               when WB_MemCTRL="011"                                  else -- read word
             WB_ExResult; -- remaining operations

RegWE <= WB_RegWE when WB_STAGE_ENABLE='1' else '0';

-- Forwarding
FW_Wb_OpA <= WB_ExResult;
FW_Wb_OpB <= WB_ExResult;

end Behavioral;
