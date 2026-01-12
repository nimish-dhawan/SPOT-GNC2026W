//
//  SPOTSim_UKE_V4_1_DataReceiverOnly_dt.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "SPOTSim_UKE_V4_1_DataReceiverOnly".
//
//  Model version              : 4.1114
//  Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
//  C++ source code generated on : Mon Jan 12 12:30:51 2026
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
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&SPOTSim_UKE_V4_1_DataReceiver_B.CastToDouble), 0, 0, 3 },

  { (char_T *)(&SPOTSim_UKE_V4_1_DataReceiver_B.UDPReceive_o1[0]), 1, 0, 4 }
  ,

  { (char_T *)(&SPOTSim_UKE_V4_1_DataReceive_DW.Delay_DSTATE), 0, 0, 139 },

  { (char_T *)(&SPOTSim_UKE_V4_1_DataReceive_DW.Scope_PWORK.LoggedData), 11, 0,
    1 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable = {
  4U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&SPOTSim_UKE_V4_1_DataReceiver_P.init_states_BLACK[0]), 0, 0, 3 },

  { (char_T *)(&SPOTSim_UKE_V4_1_DataReceiver_P.UDPReceive_Port), 6, 0, 1 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

// [EOF] SPOTSim_UKE_V4_1_DataReceiverOnly_dt.h
