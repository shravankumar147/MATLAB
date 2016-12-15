-- -------------------------------------------------------------
-- 
-- File Name: hdlsrc\dadda_mult\Step1.vhd
-- Created: 2015-12-15 12:20:02
-- 
-- Generated by MATLAB 8.5 and HDL Coder 3.6
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Step1
-- Source Path: dadda_mult/Subsystem/Step1
-- Hierarchy Level: 1
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Step1 IS
  PORT( a4                                :   IN    real;  -- double
        a2                                :   IN    real;  -- double
        a3                                :   IN    real;  -- double
        a1                                :   IN    real;  -- double
        b0                                :   IN    real;  -- double
        P03                               :   OUT   std_logic;
        P02                               :   OUT   std_logic;
        P01                               :   OUT   std_logic;
        P00                               :   OUT   std_logic
        );
END Step1;


ARCHITECTURE rtl OF Step1 IS

  -- Signals
  SIGNAL a4_is_not0                       : std_logic;
  SIGNAL b0_is_not0                       : std_logic;
  SIGNAL G4_out1                          : std_logic;
  SIGNAL a3_is_not0                       : std_logic;
  SIGNAL b0_is_not0_1                     : std_logic;
  SIGNAL G3_out1                          : std_logic;
  SIGNAL a2_is_not0                       : std_logic;
  SIGNAL b0_is_not0_2                     : std_logic;
  SIGNAL G2_out1                          : std_logic;
  SIGNAL a1_is_not0                       : std_logic;
  SIGNAL b0_is_not0_3                     : std_logic;
  SIGNAL G1_out1                          : std_logic;

BEGIN
  
  a4_is_not0 <= '1' WHEN a4 /= 0.0 ELSE
      '0';

  
  b0_is_not0 <= '1' WHEN b0 /= 0.0 ELSE
      '0';

  G4_out1 <= a4_is_not0 AND b0_is_not0;

  
  a3_is_not0 <= '1' WHEN a3 /= 0.0 ELSE
      '0';

  
  b0_is_not0_1 <= '1' WHEN b0 /= 0.0 ELSE
      '0';

  G3_out1 <= a3_is_not0 AND b0_is_not0_1;

  
  a2_is_not0 <= '1' WHEN a2 /= 0.0 ELSE
      '0';

  
  b0_is_not0_2 <= '1' WHEN b0 /= 0.0 ELSE
      '0';

  G2_out1 <= a2_is_not0 AND b0_is_not0_2;

  
  a1_is_not0 <= '1' WHEN a1 /= 0.0 ELSE
      '0';

  
  b0_is_not0_3 <= '1' WHEN b0 /= 0.0 ELSE
      '0';

  G1_out1 <= a1_is_not0 AND b0_is_not0_3;

  P03 <= G4_out1;

  P02 <= G3_out1;

  P01 <= G2_out1;

  P00 <= G1_out1;

END rtl;

