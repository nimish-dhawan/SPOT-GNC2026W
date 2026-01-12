//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SPOTSim_UKE_V4_1_DataReceiverOnly.cpp
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
#include "SPOTSim_UKE_V4_1_DataReceiverOnly.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <math.h>
#include "rtwtypes.h"
#include "SPOTSim_UKE_V4_1_DataReceiverOnly_private.h"
#include "SPOTSim_UKE_V4_1_DataReceiverOnly_dt.h"

// Block signals (default storage)
B_SPOTSim_UKE_V4_1_DataReceiv_T SPOTSim_UKE_V4_1_DataReceiver_B;

// Block states (default storage)
DW_SPOTSim_UKE_V4_1_DataRecei_T SPOTSim_UKE_V4_1_DataReceive_DW;

// Real-time model
RT_MODEL_SPOTSim_UKE_V4_1_Dat_T SPOTSim_UKE_V4_1_DataReceive_M_ =
  RT_MODEL_SPOTSim_UKE_V4_1_Dat_T();
RT_MODEL_SPOTSim_UKE_V4_1_Dat_T *const SPOTSim_UKE_V4_1_DataReceive_M =
  &SPOTSim_UKE_V4_1_DataReceive_M_;

// Model step function
void SPOTSim_UKE_V4_1_DataReceiverOnly_step(void)
{
  real_T q;
  real_T r;
  real_T rtb_CastToDouble2;
  int32_T samplesRead;
  char_T *sErr;
  boolean_T rEQ0;

  // S-Function (sdspFromNetwork): '<Root>/UDP Receive'
  sErr = GetErrorBuffer(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib
                        [0U]);
  samplesRead = 4;
  LibOutputs_Network(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U],
                     &SPOTSim_UKE_V4_1_DataReceiver_B.UDPReceive_o1[0U],
                     &samplesRead);
  if (*sErr != 0) {
    rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, sErr);
    rtmSetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M, 1);
  }

  // End of S-Function (sdspFromNetwork): '<Root>/UDP Receive'

  // DataTypeConversion: '<Root>/Cast To Double'
  SPOTSim_UKE_V4_1_DataReceiver_B.CastToDouble =
    SPOTSim_UKE_V4_1_DataReceiver_B.UDPReceive_o1[1];

  // DataTypeConversion: '<Root>/Cast To Double1'
  SPOTSim_UKE_V4_1_DataReceiver_B.CastToDouble1 =
    SPOTSim_UKE_V4_1_DataReceiver_B.UDPReceive_o1[2];

  // DataTypeConversion: '<Root>/Cast To Double2'
  rtb_CastToDouble2 = SPOTSim_UKE_V4_1_DataReceiver_B.UDPReceive_o1[3];

  // MATLAB Function: '<S2>/MATLAB Function' incorporates:
  //   Delay: '<S2>/Delay'
  //   Delay: '<S2>/Delay1'

  q = (rtb_CastToDouble2 - SPOTSim_UKE_V4_1_DataReceive_DW.Delay_DSTATE) +
    3.1415926535897931;
  if (rtIsNaN(q)) {
    r = (rtNaN);
  } else if (rtIsInf(q)) {
    r = (rtNaN);
  } else if (q == 0.0) {
    r = 0.0;
  } else {
    r = fmod(q, 6.2831853071795862);
    rEQ0 = (r == 0.0);
    if (!rEQ0) {
      q = fabs(q / 6.2831853071795862);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = 0.0;
    } else if (r < 0.0) {
      r += 6.2831853071795862;
    }
  }

  SPOTSim_UKE_V4_1_DataReceiver_B.y = (r - 3.1415926535897931) +
    SPOTSim_UKE_V4_1_DataReceive_DW.Delay1_DSTATE;
  SPOTSim_UKE_V4_1_DataReceive_DW.Delay_DSTATE = rtb_CastToDouble2;

  // End of MATLAB Function: '<S2>/MATLAB Function'
  // Update for Delay: '<S2>/Delay1'
  SPOTSim_UKE_V4_1_DataReceive_DW.Delay1_DSTATE =
    SPOTSim_UKE_V4_1_DataReceiver_B.y;

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.05s, 0.0s]
    rtExtModeUpload(0, (real_T)SPOTSim_UKE_V4_1_DataReceive_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.05s, 0.0s]
    if ((rtmGetTFinal(SPOTSim_UKE_V4_1_DataReceive_M)!=-1) &&
        !((rtmGetTFinal(SPOTSim_UKE_V4_1_DataReceive_M)-
           SPOTSim_UKE_V4_1_DataReceive_M->Timing.taskTime0) >
          SPOTSim_UKE_V4_1_DataReceive_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, "Simulation finished");
    }

    if (rtmGetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M)) {
      rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  SPOTSim_UKE_V4_1_DataReceive_M->Timing.taskTime0 =
    ((time_T)(++SPOTSim_UKE_V4_1_DataReceive_M->Timing.clockTick0)) *
    SPOTSim_UKE_V4_1_DataReceive_M->Timing.stepSize0;
}

// Model initialize function
void SPOTSim_UKE_V4_1_DataReceiverOnly_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(SPOTSim_UKE_V4_1_DataReceive_M, -1);
  SPOTSim_UKE_V4_1_DataReceive_M->Timing.stepSize0 = 0.05;

  // External mode info
  SPOTSim_UKE_V4_1_DataReceive_M->Sizes.checksums[0] = (3173012081U);
  SPOTSim_UKE_V4_1_DataReceive_M->Sizes.checksums[1] = (4284363763U);
  SPOTSim_UKE_V4_1_DataReceive_M->Sizes.checksums[2] = (2285766567U);
  SPOTSim_UKE_V4_1_DataReceive_M->Sizes.checksums[3] = (3117853802U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo,
      &SPOTSim_UKE_V4_1_DataReceive_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo,
                        SPOTSim_UKE_V4_1_DataReceive_M->Sizes.checksums);
    rteiSetTPtr(SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo, rtmGetTPtr
                (SPOTSim_UKE_V4_1_DataReceive_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    SPOTSim_UKE_V4_1_DataReceive_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 23;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    char_T *sErr;

    // Start for S-Function (sdspFromNetwork): '<Root>/UDP Receive'
    sErr = GetErrorBuffer
      (&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib
                        [0U], 0, "0.0.0.0",
                        SPOTSim_UKE_V4_1_DataReceiver_P.UDPReceive_Port,
                        "0.0.0.0", -1, 8192, 4, 0);
    }

    if (*sErr == 0) {
      LibStart(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface
        (&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, sErr);
        rtmSetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<Root>/UDP Receive'

    // InitializeConditions for Delay: '<S2>/Delay'
    SPOTSim_UKE_V4_1_DataReceive_DW.Delay_DSTATE =
      SPOTSim_UKE_V4_1_DataReceiver_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S2>/Delay1'
    SPOTSim_UKE_V4_1_DataReceive_DW.Delay1_DSTATE =
      SPOTSim_UKE_V4_1_DataReceiver_P.init_states_BLACK[2];
  }
}

// Model terminate function
void SPOTSim_UKE_V4_1_DataReceiverOnly_terminate(void)
{
  char_T *sErr;

  // Terminate for S-Function (sdspFromNetwork): '<Root>/UDP Receive'
  sErr = GetErrorBuffer(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib
                        [0U]);
  LibTerminate(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, sErr);
    rtmSetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M, 1);
  }

  LibDestroy(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&SPOTSim_UKE_V4_1_DataReceive_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<Root>/UDP Receive'
}

//
// File trailer for generated code.
//
// [EOF]
//
