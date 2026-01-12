//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SPOTSim_UKE_V4_1_DataReceiverOnly.h
//
// Code generated for Simulink model 'SPOTSim_UKE_V4_1_DataReceiverOnly'.
//
// Model version                  : 4.1114
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Jan 12 12:30:51 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef SPOTSim_UKE_V4_1_DataReceiverOnly_h_
#define SPOTSim_UKE_V4_1_DataReceiverOnly_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "DAHostLib_Network.h"
#include "SPOTSim_UKE_V4_1_DataReceiverOnly_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <float.h>
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#define SPOTSim_UKE_V4_1_DataReceiverOnly_M (SPOTSim_UKE_V4_1_DataReceive_M)

// Block signals (default storage)
struct B_SPOTSim_UKE_V4_1_DataReceiv_T {
  real_T CastToDouble;                 // '<Root>/Cast To Double'
  real_T CastToDouble1;                // '<Root>/Cast To Double1'
  real_T y;                            // '<S2>/MATLAB Function'
  real32_T UDPReceive_o1[4];           // '<Root>/UDP Receive'
};

// Block states (default storage) for system '<Root>'
struct DW_SPOTSim_UKE_V4_1_DataRecei_T {
  real_T Delay_DSTATE;                 // '<S2>/Delay'
  real_T Delay1_DSTATE;                // '<S2>/Delay1'
  real_T UDPReceive_NetworkLib[137];   // '<Root>/UDP Receive'
  struct {
    void *LoggedData;
  } Scope_PWORK;                       // '<Root>/Scope'
};

// Parameters (default storage)
struct P_SPOTSim_UKE_V4_1_DataReceiv_T_ {
  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S2>/Delay'
                                          //    '<S2>/Delay1'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<Root>/UDP Receive'

};

// Real-time Model Data Structure
struct tag_RTM_SPOTSim_UKE_V4_1_Data_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_SPOTSim_UKE_V4_1_DataReceiv_T SPOTSim_UKE_V4_1_DataReceiver_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_SPOTSim_UKE_V4_1_DataReceiv_T SPOTSim_UKE_V4_1_DataReceiver_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_SPOTSim_UKE_V4_1_DataRecei_T SPOTSim_UKE_V4_1_DataReceive_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void SPOTSim_UKE_V4_1_DataReceiverOnly_initialize(void);
  extern void SPOTSim_UKE_V4_1_DataReceiverOnly_step(void);
  extern void SPOTSim_UKE_V4_1_DataReceiverOnly_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_SPOTSim_UKE_V4_1_Dat_T *const SPOTSim_UKE_V4_1_DataReceive_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'SPOTSim_UKE_V4_1_DataReceiverOnly'
//  '<S1>'   : 'SPOTSim_UKE_V4_1_DataReceiverOnly/Unwrap'
//  '<S2>'   : 'SPOTSim_UKE_V4_1_DataReceiverOnly/Unwrap/Unwrap'
//  '<S3>'   : 'SPOTSim_UKE_V4_1_DataReceiverOnly/Unwrap/Unwrap/MATLAB Function'

#endif                                 // SPOTSim_UKE_V4_1_DataReceiverOnly_h_

//
// File trailer for generated code.
//
// [EOF]
//
