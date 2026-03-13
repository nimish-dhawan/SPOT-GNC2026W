//
//  GNC2026W_dt.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "GNC2026W".
//
//  Model version              : 4.1884
//  Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
//  C++ source code generated on : Fri Mar 13 18:31:11 2026
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#include "ext_types.h"

// data type size table
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  8,
  256,
  sizeof(CustomDataLogger_GNC2026W_T),
  sizeof(comm_internal_BernoulliBinary_T),
  sizeof(GPIO_Write_GNC2026W_T),
  sizeof(ReadArm_Position_Rates_GNC202_T),
  sizeof(IdentifyPlatform_GNC2026W_T),
  sizeof(Dynamixel_Controller_GNC2026W_T),
  sizeof(dsp_simulink_Pseudoinverse_GN_T),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

// data type name table
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "string",
  "char_T",
  "CustomDataLogger_GNC2026W_T",
  "comm_internal_BernoulliBinary_T",
  "GPIO_Write_GNC2026W_T",
  "ReadArm_Position_Rates_GNC202_T",
  "IdentifyPlatform_GNC2026W_T",
  "Dynamixel_Controller_GNC2026W_T",
  "dsp_simulink_Pseudoinverse_GN_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&GNC2026W_B.Merge1[0]), 0, 0, 484 },

  { (char_T *)(&GNC2026W_B.UDPReceive_o1[0]), 1, 0, 9 },

  { (char_T *)(&GNC2026W_B.StringtoASCII[0]), 3, 0, 93 },

  { (char_T *)(&GNC2026W_B.ChangeREDBehavior_h.Clock1), 0, 0, 1 },

  { (char_T *)(&GNC2026W_B.ChangeBLUEBehavior_e.Clock1), 0, 0, 1 },

  { (char_T *)(&GNC2026W_B.ChangeBLACKBehavior_i.Clock1), 0, 0, 1 },

  { (char_T *)(&GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[0]), 0, 0, 24 },

  { (char_T *)(&GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[0]), 0, 0, 24 },

  { (char_T *)(&GNC2026W_B.Pseudoinverse1.Pseudoinverse1[0]), 0, 0, 24 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_l1.Delay[0]), 0, 0, 6 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_kh.Delay[0]), 0, 0, 6 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_d.Delay[0]), 0, 0, 6 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_lw.Delay[0]), 0, 0, 6 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_g.Delay[0]), 0, 0, 6 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_it.Delay[0]), 0, 0, 6 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_p.ema[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_kx.ema[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_k.ema[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_B.EnabledSubsystem_m.ema[0]), 0, 0, 3 }
  ,

  { (char_T *)(&GNC2026W_DW.obj), 24, 0, 1 },

  { (char_T *)(&GNC2026W_DW.obj_l), 21, 0, 1 },

  { (char_T *)(&GNC2026W_DW.obj_d), 22, 0, 1 },

  { (char_T *)(&GNC2026W_DW.obj_dk), 23, 0, 1 },

  { (char_T *)(&GNC2026W_DW.obj_f), 19, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Delay_DSTATE), 0, 0, 163 },

  { (char_T *)(&GNC2026W_DW.q.re), 0, 1, 2 },

  { (char_T *)(&GNC2026W_DW.NextOutput), 0, 0, 1952 },

  { (char_T *)(&GNC2026W_DW.RED_Logger[0]), 18, 0, 1 },

  { (char_T *)(&GNC2026W_DW.BLACK_Logger[0]), 18, 0, 1 },

  { (char_T *)(&GNC2026W_DW.BLUE_Logger[0]), 18, 0, 1 },

  { (char_T *)(&GNC2026W_DW.obj_fv), 20, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Scope_PWORK.LoggedData[0]), 11, 0, 30 },

  { (char_T *)(&GNC2026W_DW.RandSeed), 7, 0, 1892 },

  { (char_T *)(&GNC2026W_DW.Ifperforminganexperimentgrabthe), 2, 0, 84 },

  { (char_T *)(&GNC2026W_DW.k_not_empty), 8, 0, 4 },

  { (char_T *)(&GNC2026W_DW.ChangeREDBehavior_h.UDPSendClock_NetworkLib[0]), 0,
    0, 137 },

  { (char_T *)(&GNC2026W_DW.ChangeREDBehavior_h.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeBLUEBehavior_e.UDPSendClock_NetworkLib[0]), 0,
    0, 137 },

  { (char_T *)(&GNC2026W_DW.ChangeBLUEBehavior_e.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeBLACKBehavior_i.UDPSendClock_NetworkLib[0]), 0,
    0, 137 },

  { (char_T *)
    (&GNC2026W_DW.ChangeBLACKBehavior_i.ChangeBLACKBehavior_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_e.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_e.doneDoubleBufferReInit), 8,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_i.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_i.doneDoubleBufferReInit), 8,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction8.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction8.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction5_e.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction5_e.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.Pseudoinverse1_pn.obj), 25, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Pseudoinverse1_pn.objisempty), 8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_n.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_n.doneDoubleBufferReInit), 8,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_c.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_c.doneDoubleBufferReInit), 8,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction5_i.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction5_i.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction1_i.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction1_i.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.Pseudoinverse1_p.obj), 25, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Pseudoinverse1_p.objisempty), 8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_a.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix_a.doneDoubleBufferReInit), 8,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_CreateRotationMatrix.doneDoubleBufferReInit), 8,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction5.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction5.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction1_l.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction1_l.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.Pseudoinverse1.obj), 25, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Pseudoinverse1.objisempty), 8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l1.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l1.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l1.doneDoubleBufferReInit), 8, 0, 2
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kh.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_MODE), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kh.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_kh.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_kd.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_kd.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_d.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_d.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_d.doneDoubleBufferReInit), 8, 0, 2
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_lw.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_MODE), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_lw.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_lw.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_es.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_es.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_g.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_g.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_g.doneDoubleBufferReInit), 8, 0, 2
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_it.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_MODE), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_it.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_it.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_gq.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_gq.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_j.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_j.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.ChangeREDBehavior_d.UDPSendGUI_NetworkLib[0]), 0, 0,
    137 },

  { (char_T *)(&GNC2026W_DW.ChangeREDBehavior_d.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeBLUEBehavior_f.UDPSendGUI_NetworkLib[0]), 0, 0,
    137 },

  { (char_T *)(&GNC2026W_DW.ChangeBLUEBehavior_f.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeBLACKBehavior_e.UDPSendGUI_NetworkLib[0]), 0,
    0, 137 },

  { (char_T *)
    (&GNC2026W_DW.ChangeBLACKBehavior_e.ChangeBLACKBehavior_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_nq.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_nq.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.ExperimentalVISStates_a.ExperimentalVISStates_SubsysRan), 2, 0,
    3 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_p.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_p.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)
    (&GNC2026W_DW.ExperimentalVISStates.ExperimentalVISStates_SubsysRan), 2, 0,
    3 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_n5.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_n5.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_iu.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_iu.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_h.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_h.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_h.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_h.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_p.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_p.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_p.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_m.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_m.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kx.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kx.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_kx.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_kx.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_l.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_g.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_g.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_i.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_i.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_i.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_i.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_k.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_k.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_k.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_k.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_l2.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_l2.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_o.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_o.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_b.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_b.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_b.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_b.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_m.Delay_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_m.EnabledSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.EnabledSubsystem_m.sf_MATLABFunction.sfEvent), 6, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.EnabledSubsystem_m.sf_MATLABFunction.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeREDBehavior.UDPSend_NetworkLib[0]), 0, 0, 137
  },

  { (char_T *)(&GNC2026W_DW.ChangeREDBehavior.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeBLUEBehavior.UDPSend_NetworkLib[0]), 0, 0, 137
  },

  { (char_T *)(&GNC2026W_DW.ChangeBLUEBehavior.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.ChangeBLACKBehavior.UDPSend_NetworkLib[0]), 0, 0,
    137 },

  { (char_T *)(&GNC2026W_DW.ChangeBLACKBehavior.ChangeBLACKBehavior_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.CustomControlARM.DisableThrustersRED_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.DisableThrustersBLUE.DisableThrustersBLACK_SubsysRan),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_k.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_k.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_cj.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_cj.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)
    (&GNC2026W_DW.DisableThrustersBLACK.DisableThrustersBLACK_SubsysRan), 2, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_c.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_c.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_de.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_de.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.DisableThrustersRED.DisableThrustersRED_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_d.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_d.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_i.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_i.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_h.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_h.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_n2.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_n2.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_n.sfEvent), 6, 0, 1 },

  { (char_T *)(&GNC2026W_DW.sf_MATLABFunction_n.doneDoubleBufferReInit), 8, 0, 1
  },

  { (char_T *)(&GNC2026W_DW.Phase6CleanShutdown.Phase0Synchronization_SubsysRan),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Phase5HoldHome.Phase4ReturnHome_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.Phase4ReturnHome.Phase4ReturnHome_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)(&GNC2026W_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&GNC2026W_DW.IfActionSubsystem_a.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&GNC2026W_DW.Phase1StartFloating.Phase0Synchronization_SubsysRan),
    2, 0, 1 },

  { (char_T *)
    (&GNC2026W_DW.Phase0Synchronization.Phase0Synchronization_SubsysRan), 2, 0,
    1 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable = {
  201U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&GNC2026W_P.A_c[0]), 0, 0, 846 },

  { (char_T *)(&GNC2026W_P.StringConstant1_String[0]), 17, 0, 4608 },

  { (char_T *)(&GNC2026W_P.UDPSend1_Port), 6, 0, 12 },

  { (char_T *)(&GNC2026W_P.ManualSwitch_CurrentSetting), 3, 0, 1 },

  { (char_T *)(&GNC2026W_P.ChangeREDBehavior_h.UDPSendClock_Port), 6, 0, 1 },

  { (char_T *)(&GNC2026W_P.ChangeBLUEBehavior_e.UDPSendClock_Port), 6, 0, 1 },

  { (char_T *)(&GNC2026W_P.ChangeBLACKBehavior_i.UDPSendClock_Port), 6, 0, 1 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_l1.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_kh.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_d.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_lw.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_g.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_it.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.ChangeREDBehavior_d.UDPSendGUI_Port), 6, 0, 1 },

  { (char_T *)(&GNC2026W_P.ChangeBLUEBehavior_f.UDPSendGUI_Port), 6, 0, 1 },

  { (char_T *)(&GNC2026W_P.ChangeBLACKBehavior_e.UDPSendGUI_Port), 6, 0, 1 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_h.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_p.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_kx.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_l.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_i.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_k.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_b.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.EnabledSubsystem_m.dydt_Y0), 0, 0, 3 },

  { (char_T *)(&GNC2026W_P.ChangeREDBehavior.Constant1_Value), 6, 0, 2 },

  { (char_T *)(&GNC2026W_P.ChangeBLUEBehavior.Constant1_Value), 6, 0, 2 },

  { (char_T *)(&GNC2026W_P.ChangeBLACKBehavior.Constant1_Value), 6, 0, 2 },

  { (char_T *)(&GNC2026W_P.CustomControlARM.Zero_Value), 0, 0, 1 },

  { (char_T *)(&GNC2026W_P.DisableThrustersBLUE.Zero_Value), 0, 0, 1 },

  { (char_T *)(&GNC2026W_P.DisableThrustersBLACK.Zero_Value), 0, 0, 1 },

  { (char_T *)(&GNC2026W_P.DisableThrustersRED.Zero_Value), 0, 0, 1 },

  { (char_T *)(&GNC2026W_P.Phase6CleanShutdown.Constant1_Value), 0, 0, 9 },

  { (char_T *)(&GNC2026W_P.Phase6CleanShutdown.StringConstant_String[0]), 17, 0,
    768 },

  { (char_T *)(&GNC2026W_P.Phase5HoldHome.Constant11_Value), 0, 0, 12 },

  { (char_T *)(&GNC2026W_P.Phase5HoldHome.StringConstant1_String[0]), 17, 0, 768
  },

  { (char_T *)(&GNC2026W_P.Phase4ReturnHome.Constant11_Value), 0, 0, 12 },

  { (char_T *)(&GNC2026W_P.Phase4ReturnHome.StringConstant1_String[0]), 17, 0,
    768 },

  { (char_T *)(&GNC2026W_P.IfActionSubsystem5.Constant_Value), 0, 0, 2 },

  { (char_T *)(&GNC2026W_P.IfActionSubsystem4.Constant_Value), 0, 0, 2 },

  { (char_T *)(&GNC2026W_P.IfActionSubsystem3.Constant_Value), 0, 0, 2 },

  { (char_T *)(&GNC2026W_P.IfActionSubsystem2.Constant_Value), 0, 0, 2 },

  { (char_T *)(&GNC2026W_P.IfActionSubsystem1.Constant_Value), 0, 0, 2 },

  { (char_T *)(&GNC2026W_P.IfActionSubsystem_a.Constant_Value), 0, 0, 2 },

  { (char_T *)(&GNC2026W_P.Phase1StartFloating.Constant1_Value), 0, 0, 9 },

  { (char_T *)(&GNC2026W_P.Phase1StartFloating.StringConstant_String[0]), 17, 0,
    768 },

  { (char_T *)(&GNC2026W_P.Phase0Synchronization.Constant1_Value), 0, 0, 9 },

  { (char_T *)(&GNC2026W_P.Phase0Synchronization.StringConstant_String[0]), 17,
    0, 768 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable = {
  47U,
  rtPTransitions
};

// [EOF] GNC2026W_dt.h
