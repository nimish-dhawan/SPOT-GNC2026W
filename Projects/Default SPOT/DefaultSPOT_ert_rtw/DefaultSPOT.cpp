//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DefaultSPOT.cpp
//
// Code generated for Simulink model 'DefaultSPOT'.
//
// Model version                  : 4.656
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Mar 16 12:28:00 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "DefaultSPOT.h"
#include "rtwtypes.h"
#include "DefaultSPOT_types.h"
#include "DefaultSPOT_private.h"
#include <string.h>
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "coder_posix_time.h"
#include "rt_defines.h"

// Block signals (default storage)
B_DefaultSPOT_T DefaultSPOT_B;

// Block states (default storage)
DW_DefaultSPOT_T DefaultSPOT_DW;

// Real-time model
RT_MODEL_DefaultSPOT_T DefaultSPOT_M_ = RT_MODEL_DefaultSPOT_T();
RT_MODEL_DefaultSPOT_T *const DefaultSPOT_M = &DefaultSPOT_M_;

// Forward declaration for local functions
static real_T DefaultSPOT_xzlangeM(const real_T x[24]);
static void DefaultSPOT_xzlascl(real_T cfrom, real_T cto, real_T A[24]);
static real_T DefaultSPOT_xnrm2(int32_T n, const real_T x[24], int32_T ix0);
static real_T DefaultSPOT_xdotc(int32_T n, const real_T x[24], int32_T ix0,
  const real_T y[24], int32_T iy0);
static void DefaultSPOT_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[24],
  int32_T iy0);
static real_T DefaultSPOT_xdotc_o(const real_T x[9], const real_T y[9], int32_T
  iy0);
static void DefaultSPOT_xaxpy_gop(real_T a, real_T y[9], int32_T iy0);
static real_T DefaultSPOT_xnrm2_p(const real_T x[3], int32_T ix0);
static void DefaultSPOT_xaxpy_g(int32_T n, real_T a, const real_T x[24], int32_T
  ix0, real_T y[8], int32_T iy0);
static void DefaultSPOT_xaxpy_go(int32_T n, real_T a, const real_T x[8], int32_T
  ix0, real_T y[24], int32_T iy0);
static void DefaultSPOT_xzlascl_i(real_T cfrom, real_T cto, real_T A[3]);
static void DefaultSPOT_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b,
  real_T *c, real_T *s);
static void DefaultSPOT_xrot_ps(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static void DefaultSPOT_xrot_psj(real_T x[24], int32_T ix0, int32_T iy0, real_T
  c, real_T s);
static void DefaultSPOT_xswap_dj(real_T x[9], int32_T ix0, int32_T iy0);
static void DefaultSPOT_xswap_dj5(real_T x[24], int32_T ix0, int32_T iy0);
static void DefaultSPOT_svd(const real_T A[24], real_T U[24], real_T s[3],
  real_T V[9]);

// Forward declaration for local functions
static real_T DefaultSPOT_maximum(const real_T x[8]);

// Forward declaration for local functions
static real_T DefaultSPOT_maximum_e(const real_T x[8]);
static real_T DefaultSPOT_norm(const real_T x[3]);

// Forward declaration for local functions
static void DefaultSPOT_pause(real_T varargin_1);
static void D_bmi160_set_EnableSecondaryMag(b_bmi160_DefaultSPOT_T *obj);
static void DefaultSPOT_SystemCore_setup(nvidiacoder_sensors_BMI160Blo_T *obj);

//
// Output and update for action system:
//    '<S1>/Phase #0: Synchronization'
//    '<S1>/Phase #1: Start Floating '
//    '<S1>/Phase #6: Clean Shutdown'
//
void DefaultSP_Phase0Synchronization(real_T *rtd_ARM_Control_Law_Enabler, real_T
  *rtd_ARM_Path_Planner_Selection, real_T *rtd_BLACK_Control_Law_Enabler, char_T
  rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T
  *rtd_BLUE_Control_Law_Enabler, char_T rtd_BLUE_Logger[256], real_T
  *rtd_BLUE_Path_Planner_Selection, real_T *rtd_Float_State, real_T
  *rtd_RED_Control_Law_Enabler, char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase0Synchronization_Defau_T *localP)
{
  // DataStoreWrite: '<S18>/Data Store Write2' incorporates:
  //   Constant: '<S18>/Constant1'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant1_Value;

  // DataStoreWrite: '<S18>/Data Store Write3' incorporates:
  //   Constant: '<S18>/Constant2'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant2_Value;

  // DataStoreWrite: '<S18>/Data Store Write7' incorporates:
  //   Constant: '<S18>/Constant3'

  *rtd_RED_Path_Planner_Selection = localP->Constant3_Value;

  // DataStoreWrite: '<S18>/Data Store Write8' incorporates:
  //   Constant: '<S18>/Constant4'

  *rtd_ARM_Path_Planner_Selection = localP->Constant4_Value;

  // DataStoreWrite: '<S18>/Data Store Write' incorporates:
  //   Constant: '<S18>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S18>/Data Store Write6' incorporates:
  //   Constant: '<S18>/Constant6'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant6_Value;

  // DataStoreWrite: '<S18>/Data Store Write5' incorporates:
  //   Constant: '<S18>/Constant7'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant7_Value;

  // DataStoreWrite: '<S18>/Data Store Write9' incorporates:
  //   Constant: '<S18>/Constant8'

  *rtd_ARM_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S18>/String Constant' incorporates:
  //   DataStoreWrite: '<S18>/Data Store Write1'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // StringConstant: '<S18>/String Constant1' incorporates:
  //   DataStoreWrite: '<S18>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S18>/String Constant2' incorporates:
  //   DataStoreWrite: '<S18>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S18>/Data Store Write4' incorporates:
  //   Constant: '<S18>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

//
// Output and update for action system:
//    '<S21>/Sub-Phase #1'
//    '<S21>/Sub-Phase #2 '
//    '<S21>/Sub-Phase #3 '
//    '<S21>/Sub-Phase #4'
//
void DefaultSPOT_SubPhase1(real_T *rtd_ARM_Control_Law_Enabler, real_T
  rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection, real_T
  *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3], char_T
  rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T
  *rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, const real_T *rtd_Univ_Time,
  P_SubPhase1_DefaultSPOT_T *localP)
{
  real_T rtb_Atan2_i;
  real_T rtb_Gain_l;
  real_T rtb_Sum2_e;

  // DataStoreWrite: '<S29>/Data Store Write24' incorporates:
  //   Constant: '<S29>/Constant11'

  *rtd_RED_Path_Planner_Selection = localP->Constant11_Value;

  // DataStoreWrite: '<S29>/Data Store Write1' incorporates:
  //   Constant: '<S29>/Constant12'

  *rtd_ARM_Path_Planner_Selection = localP->Constant12_Value;

  // DataStoreWrite: '<S29>/Data Store Write23' incorporates:
  //   Constant: '<S29>/Constant14'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant14_Value;

  // DataStoreWrite: '<S29>/Data Store Write22' incorporates:
  //   Constant: '<S29>/Constant15'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant15_Value;

  // DataStoreWrite: '<S29>/Data Store Write2' incorporates:
  //   Constant: '<S29>/Constant18'

  *rtd_ARM_Control_Law_Enabler = localP->Constant18_Value;

  // DataStoreWrite: '<S29>/Data Store Write4' incorporates:
  //   Constant: '<S29>/Constant4'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant4_Value;

  // DataStoreWrite: '<S29>/Data Store Write3' incorporates:
  //   Constant: '<S29>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S29>/Data Store Write7' incorporates:
  //   Constant: '<S29>/Constant6'

  *rtd_Float_State = localP->Constant6_Value;

  // DataStoreWrite: '<S29>/Data Store Write16' incorporates:
  //   Constant: '<S29>/Constant8'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S29>/String Constant1' incorporates:
  //   DataStoreWrite: '<S29>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S29>/String Constant2' incorporates:
  //   DataStoreWrite: '<S29>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S29>/Data Store Write13' incorporates:
  //   Constant: '<S33>/Constant1'
  //   Constant: '<S33>/Constant2'
  //   Constant: '<S33>/Constant3'

  rtd_ARM_Desired_States[0] = localP->Constant3_Value;
  rtd_ARM_Desired_States[1] = localP->Constant1_Value;
  rtd_ARM_Desired_States[2] = localP->Constant2_Value;

  // Sum: '<S41>/Subtract3' incorporates:
  //   Constant: '<S41>/Constant2'
  //   DataStoreRead: '<S43>/Universal_Time'
  //   Sum: '<S39>/Subtract'
  //   Sum: '<S45>/Subtract3'

  rtb_Gain_l = *rtd_Univ_Time - DefaultSPOT_P.Phase2_End;

  // Product: '<S35>/Product' incorporates:
  //   Constant: '<S35>/Desired Rate '
  //   Sum: '<S41>/Subtract3'

  rtb_Sum2_e = rtb_Gain_l * localP->DesiredRate_Value;

  // Trigonometry: '<S40>/Sin' incorporates:
  //   Trigonometry: '<S42>/Sin'

  rtb_Atan2_i = sin(rtb_Sum2_e);

  // Trigonometry: '<S40>/Cos' incorporates:
  //   Trigonometry: '<S42>/Cos'

  rtb_Sum2_e = cos(rtb_Sum2_e);

  // DataStoreWrite: '<S29>/Data Store Write18' incorporates:
  //   Constant: '<S40>/Constant1'
  //   Constant: '<S40>/Constant2'
  //   Gain: '<S40>/Gain'
  //   Gain: '<S40>/Gain1'
  //   Sum: '<S40>/Sum1'
  //   Sum: '<S40>/Sum2'
  //   Trigonometry: '<S40>/Cos'
  //   Trigonometry: '<S40>/Sin'
  //   Trigonometry: '<S42>/Atan2'

  rtd_BLUE_Desired_States[0] = localP->Gain_Gain * rtb_Sum2_e +
    DefaultSPOT_P.xLength / 2.0;
  rtd_BLUE_Desired_States[1] = localP->Gain1_Gain * rtb_Atan2_i +
    DefaultSPOT_P.yLength / 2.0;
  rtd_BLUE_Desired_States[2] = rt_atan2d_snf(rtb_Atan2_i, rtb_Sum2_e);

  // Product: '<S37>/Product' incorporates:
  //   Constant: '<S37>/Desired Rate (BLACK)'

  rtb_Atan2_i = rtb_Gain_l * localP->DesiredRateBLACK_Value;

  // DataStoreWrite: '<S29>/Data Store Write5' incorporates:
  //   Constant: '<S34>/Desired X-Position (BLACK)'
  //   Constant: '<S34>/Desired Y-Position (BLACK)'
  //   Trigonometry: '<S38>/Atan2'
  //   Trigonometry: '<S38>/Cos'
  //   Trigonometry: '<S38>/Sin'

  rtd_BLACK_Desired_States[0] = DefaultSPOT_P.xLength / 2.0;
  rtd_BLACK_Desired_States[1] = DefaultSPOT_P.yLength / 2.0;
  rtd_BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_Atan2_i), cos(rtb_Atan2_i));

  // StringConstant: '<S29>/String Constant' incorporates:
  //   DataStoreWrite: '<S29>/Data Store Write6'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // Product: '<S36>/Product' incorporates:
  //   Constant: '<S36>/Desired Rate '

  rtb_Atan2_i = rtb_Gain_l * localP->DesiredRate_Value_b;

  // Gain: '<S44>/Gain' incorporates:
  //   Trigonometry: '<S44>/Cos'

  rtb_Gain_l = localP->Gain_Gain_n * cos(rtb_Atan2_i);

  // Gain: '<S44>/Gain1' incorporates:
  //   Trigonometry: '<S44>/Sin'

  rtb_Sum2_e = localP->Gain1_Gain_k * sin(rtb_Atan2_i);

  // Sum: '<S36>/Sum' incorporates:
  //   Constant: '<S36>/Constant'

  rtb_Atan2_i += localP->Constant_Value;

  // DataStoreWrite: '<S29>/Data Store Write9' incorporates:
  //   Constant: '<S44>/Constant1'
  //   Constant: '<S44>/Constant2'
  //   Sum: '<S44>/Sum1'
  //   Sum: '<S44>/Sum2'
  //   Trigonometry: '<S46>/Atan2'
  //   Trigonometry: '<S46>/Cos'
  //   Trigonometry: '<S46>/Sin'

  rtd_RED_Desired_States[0] = DefaultSPOT_P.xLength / 2.0 + rtb_Gain_l;
  rtd_RED_Desired_States[1] = DefaultSPOT_P.yLength / 2.0 + rtb_Sum2_e;
  rtd_RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_Atan2_i), cos(rtb_Atan2_i));
}

//
// Output and update for action system:
//    '<S1>/Phase #4: Return Home'
//    '<S1>/Phase #5: Hold Home'
//
void DefaultSPOT_Phase4ReturnHome(real_T *rtd_ARM_Control_Law_Enabler, real_T
  rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection, real_T
  *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3], char_T
  rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T
  *rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase4ReturnHome_DefaultSPO_T *localP)
{
  // DataStoreWrite: '<S22>/Data Store Write24' incorporates:
  //   Constant: '<S22>/Constant11'

  *rtd_RED_Path_Planner_Selection = localP->Constant11_Value;

  // DataStoreWrite: '<S22>/Data Store Write3' incorporates:
  //   Constant: '<S22>/Constant12'

  *rtd_ARM_Path_Planner_Selection = localP->Constant12_Value;

  // DataStoreWrite: '<S22>/Data Store Write23' incorporates:
  //   Constant: '<S22>/Constant14'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant14_Value;

  // DataStoreWrite: '<S22>/Data Store Write22' incorporates:
  //   Constant: '<S22>/Constant15'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant15_Value;

  // DataStoreWrite: '<S22>/Data Store Write4' incorporates:
  //   Constant: '<S22>/Constant18'

  *rtd_ARM_Control_Law_Enabler = localP->Constant18_Value;

  // DataStoreWrite: '<S22>/Data Store Write5' incorporates:
  //   Constant: '<S22>/Constant4'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant4_Value;

  // DataStoreWrite: '<S22>/Data Store Write8' incorporates:
  //   Constant: '<S22>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S22>/Data Store Write7' incorporates:
  //   Constant: '<S22>/Constant6'

  *rtd_Float_State = localP->Constant6_Value;

  // DataStoreWrite: '<S22>/Data Store Write16' incorporates:
  //   Constant: '<S22>/Constant8'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S22>/String Constant1' incorporates:
  //   DataStoreWrite: '<S22>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S22>/String Constant2' incorporates:
  //   DataStoreWrite: '<S22>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S22>/Data Store Write13' incorporates:
  //   Constant: '<S93>/Constant1'
  //   Constant: '<S93>/Constant2'
  //   Constant: '<S93>/Constant3'

  rtd_ARM_Desired_States[0] = localP->Constant3_Value;
  rtd_ARM_Desired_States[1] = localP->Constant1_Value;
  rtd_ARM_Desired_States[2] = localP->Constant2_Value;

  // StringConstant: '<S22>/String Constant' incorporates:
  //   DataStoreWrite: '<S22>/Data Store Write2'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // DataStoreWrite: '<S22>/Data Store Write18' incorporates:
  //   Constant: '<S95>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[0] = DefaultSPOT_P.home_states_BLUE[0];

  // DataStoreWrite: '<S22>/Data Store Write6' incorporates:
  //   Constant: '<S94>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[0] = DefaultSPOT_P.home_states_BLACK[0];

  // DataStoreWrite: '<S22>/Data Store Write9' incorporates:
  //   Constant: '<S96>/Constant2'

  rtd_RED_Desired_States[0] = DefaultSPOT_P.home_states_RED[0];

  // DataStoreWrite: '<S22>/Data Store Write18' incorporates:
  //   Constant: '<S95>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[1] = DefaultSPOT_P.home_states_BLUE[1];

  // DataStoreWrite: '<S22>/Data Store Write6' incorporates:
  //   Constant: '<S94>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[1] = DefaultSPOT_P.home_states_BLACK[1];

  // DataStoreWrite: '<S22>/Data Store Write9' incorporates:
  //   Constant: '<S96>/Constant2'

  rtd_RED_Desired_States[1] = DefaultSPOT_P.home_states_RED[1];

  // DataStoreWrite: '<S22>/Data Store Write18' incorporates:
  //   Constant: '<S95>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[2] = DefaultSPOT_P.home_states_BLUE[2];

  // DataStoreWrite: '<S22>/Data Store Write6' incorporates:
  //   Constant: '<S94>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[2] = DefaultSPOT_P.home_states_BLACK[2];

  // DataStoreWrite: '<S22>/Data Store Write9' incorporates:
  //   Constant: '<S96>/Constant2'

  rtd_RED_Desired_States[2] = DefaultSPOT_P.home_states_RED[2];
}

//
// Output and update for atomic system:
//    '<S163>/MATLAB Function'
//    '<S140>/MATLAB Function'
//    '<S153>/MATLAB Function'
//    '<S130>/MATLAB Function'
//    '<S158>/MATLAB Function'
//    '<S135>/MATLAB Function'
//
void DefaultSPOT_MATLABFunction(real_T rtu_Rz_path, real_T rtu_Rz_measured,
  real_T *rty_Rz_error)
{
  real_T q;
  real_T r;
  q = (rtu_Rz_measured - rtu_Rz_path) + 3.1415926535897931;
  if (rtIsNaN(q)) {
    r = (rtNaN);
  } else if (rtIsInf(q)) {
    r = (rtNaN);
  } else if (q == 0.0) {
    r = 0.0;
  } else {
    boolean_T rEQ0;
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

  *rty_Rz_error = r - 3.1415926535897931;
}

//
// Output and update for action system:
//    '<S3>/Custom Control (RED)'
//    '<S3>/Disable Thrusters (RED)'
//    '<S3>/Custom Control (ARM)'
//
void DefaultSPOT_CustomControlRED(real_T rty_u[3],
  P_CustomControlRED_DefaultSPO_T *localP)
{
  // SignalConversion generated from: '<S118>/u' incorporates:
  //   Constant: '<S118>/Zero'

  rty_u[0] = localP->Zero_Value;
  rty_u[1] = localP->Zero_Value;
  rty_u[2] = localP->Zero_Value;
}

//
// Output and update for action system:
//    '<S3>/Disable Thrusters (BLACK)'
//    '<S3>/Disable Thrusters (BLUE)'
//
void DefaultSP_DisableThrustersBLACK(real_T rty_Out1[3],
  P_DisableThrustersBLACK_Defau_T *localP)
{
  // SignalConversion generated from: '<S127>/Out1' incorporates:
  //   Constant: '<S127>/Zero'

  rty_Out1[0] = localP->Zero_Value;
  rty_Out1[1] = localP->Zero_Value;
  rty_Out1[2] = localP->Zero_Value;
}

//
// System initialize for action system:
//    '<S4>/Change BLACK Behavior'
//    '<S4>/Change BLUE Behavior'
//    '<S4>/Change RED Behavior'
//
void Defaul_ChangeBLACKBehavior_Init(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defaul_T *localDW,
  P_ChangeBLACKBehavior_Default_T *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S168>/UDP Send'
  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  CreateUDPInterface(&localDW->UDPSend_NetworkLib[0U]);
  if (*sErr == 0) {
    LibCreate_Network(&localDW->UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                      "255.255.255.255", localP->UDPSend_Port, 8192, 4, 0);
  }

  if (*sErr == 0) {
    LibStart(&localDW->UDPSend_NetworkLib[0U]);
  }

  if (*sErr != 0) {
    DestroyUDPInterface(&localDW->UDPSend_NetworkLib[0U]);
    if (*sErr != 0) {
      DefaultSPOT_M->setErrorStatus(sErr);
      DefaultSPOT_M->setStopRequested(1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S168>/UDP Send'
}

//
// Output and update for action system:
//    '<S4>/Change BLACK Behavior'
//    '<S4>/Change BLUE Behavior'
//    '<S4>/Change RED Behavior'
//
void DefaultSPOT_ChangeBLACKBehavior(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defaul_T *localDW,
  P_ChangeBLACKBehavior_Default_T *localP)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S168>/UDP Send' incorporates:
  //   Constant: '<S168>/Constant1'

  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSend_NetworkLib[0U], &localP->Constant1_Value,
                    1);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S168>/UDP Send'
}

//
// Termination for action system:
//    '<S4>/Change BLACK Behavior'
//    '<S4>/Change BLUE Behavior'
//    '<S4>/Change RED Behavior'
//
void Defaul_ChangeBLACKBehavior_Term(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defaul_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S168>/UDP Send'
  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S168>/UDP Send'
}

//
// System initialize for action system:
//    '<S190>/Change BLACK Behavior'
//    '<S190>/Change BLUE Behavior'
//    '<S190>/Change RED Behavior'
//
void Defa_ChangeBLACKBehavior_a_Init(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_l_T *localDW,
  P_ChangeBLACKBehavior_Defau_p_T *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S191>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  CreateUDPInterface(&localDW->UDPSendGUI_NetworkLib[0U]);
  if (*sErr == 0) {
    LibCreate_Network(&localDW->UDPSendGUI_NetworkLib[0U], 1, "0.0.0.0", -1,
                      "255.255.255.255", localP->UDPSendGUI_Port, 8192, 8, 0);
  }

  if (*sErr == 0) {
    LibStart(&localDW->UDPSendGUI_NetworkLib[0U]);
  }

  if (*sErr != 0) {
    DestroyUDPInterface(&localDW->UDPSendGUI_NetworkLib[0U]);
    if (*sErr != 0) {
      DefaultSPOT_M->setErrorStatus(sErr);
      DefaultSPOT_M->setStopRequested(1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S191>/UDP Send (GUI)'
}

//
// Update for action system:
//    '<S190>/Change BLACK Behavior'
//    '<S190>/Change BLUE Behavior'
//    '<S190>/Change RED Behavior'
//
void De_ChangeBLACKBehavior_e_Update(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_Defa_l_T
  *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S191>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendGUI_NetworkLib[0U], &rtu_UniversalTime, 1);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S191>/UDP Send (GUI)'
}

//
// Termination for action system:
//    '<S190>/Change BLACK Behavior'
//    '<S190>/Change BLUE Behavior'
//    '<S190>/Change RED Behavior'
//
void Defa_ChangeBLACKBehavior_l_Term(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_l_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S191>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendGUI_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSendGUI_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendGUI_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S191>/UDP Send (GUI)'
}

//
// Output and update for atomic system:
//    '<S194>/MATLAB Function'
//    '<S204>/MATLAB Function'
//    '<S214>/MATLAB Function'
//
void DefaultSPOT_MATLABFunction_j(real_T rtu_dt, real_T rtu_dataRate, real_T
  *rty_dt_out)
{
  if (rtu_dt <= 0.0) {
    *rty_dt_out = rtu_dataRate;
  } else {
    *rty_dt_out = rtu_dt;
  }
}

//
// System initialize for enable system:
//    '<S195>/Enabled Subsystem'
//    '<S205>/Enabled Subsystem'
//    '<S215>/Enabled Subsystem'
//
void DefaultSP_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_DefaultSP_T *localDW, P_EnabledSubsystem_DefaultSPO_T
  *localP)
{
  // InitializeConditions for Delay: '<S200>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S200>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S200>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S200>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S200>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S200>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S195>/Enabled Subsystem'
//    '<S205>/Enabled Subsystem'
//    '<S215>/Enabled Subsystem'
//
void Defaul_EnabledSubsystem_Disable(DW_EnabledSubsystem_DefaultSP_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S195>/Enabled Subsystem'
//    '<S205>/Enabled Subsystem'
//    '<S215>/Enabled Subsystem'
//
void DefaultSPOT_EnabledSubsystem(const boolean_T rtu_Enable[3], const real_T
  rtu_y[3], real_T rtu_dt, real_T rty_dydt[3], B_EnabledSubsystem_DefaultSPO_T
  *localB, DW_EnabledSubsystem_DefaultSP_T *localDW,
  P_EnabledSubsystem_DefaultSPO_T *localP)
{
  real_T Delay;
  real_T ema;
  real_T x;

  // Outputs for Enabled SubSystem: '<S195>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S200>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    Defaul_EnabledSubsystem_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Constant: '<S200>/Constant2'

    x = exp(-rtu_dt / localP->Constant2_Value);

    // Delay: '<S200>/Delay'
    Delay = localDW->Delay_DSTATE[0];
    localB->Delay[0] = Delay;

    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Delay: '<S200>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[0];
    localB->ema[0] = ema;

    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Delay: '<S200>/Delay'

    rty_dydt[0] = (ema - Delay) / rtu_dt;

    // Delay: '<S200>/Delay'
    Delay = localDW->Delay_DSTATE[1];
    localB->Delay[1] = Delay;

    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Delay: '<S200>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[1];
    localB->ema[1] = ema;

    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Delay: '<S200>/Delay'

    rty_dydt[1] = (ema - Delay) / rtu_dt;

    // Delay: '<S200>/Delay'
    Delay = localDW->Delay_DSTATE[2];
    localB->Delay[2] = Delay;

    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Delay: '<S200>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[2];
    localB->ema[2] = ema;

    // MATLAB Function: '<S200>/MATLAB Function' incorporates:
    //   Delay: '<S200>/Delay'

    rty_dydt[2] = (ema - Delay) / rtu_dt;
  }

  // End of Outputs for SubSystem: '<S195>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S195>/Enabled Subsystem'
//    '<S205>/Enabled Subsystem'
//    '<S215>/Enabled Subsystem'
//
void Default_EnabledSubsystem_Update(B_EnabledSubsystem_DefaultSPO_T *localB,
  DW_EnabledSubsystem_DefaultSP_T *localDW)
{
  // Update for Enabled SubSystem: '<S195>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S200>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S200>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S195>/Enabled Subsystem'
}

//
// System initialize for enable system:
//    '<S196>/Enabled Subsystem'
//    '<S206>/Enabled Subsystem'
//    '<S216>/Enabled Subsystem'
//
void Default_EnabledSubsystem_m_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_Default_c_T *localDW, P_EnabledSubsystem_DefaultS_c_T
  *localP)
{
  // InitializeConditions for Delay: '<S202>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S202>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S202>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S202>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S202>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S202>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S196>/Enabled Subsystem'
//    '<S206>/Enabled Subsystem'
//    '<S216>/Enabled Subsystem'
//
void Defa_EnabledSubsystem_d_Disable(DW_EnabledSubsystem_Default_c_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S196>/Enabled Subsystem'
//    '<S206>/Enabled Subsystem'
//    '<S216>/Enabled Subsystem'
//
void DefaultSPOT_EnabledSubsystem_g(const boolean_T rtu_Enable[3], real_T rtu_y,
  real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_DefaultS_h_T *localB, DW_EnabledSubsystem_Default_c_T
  *localDW, P_EnabledSubsystem_DefaultS_c_T *localP)
{
  real_T x;

  // Outputs for Enabled SubSystem: '<S196>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S202>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    Defa_EnabledSubsystem_d_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // Delay: '<S202>/Delay'
    localB->Delay[0] = localDW->Delay_DSTATE[0];
    localB->Delay[1] = localDW->Delay_DSTATE[1];
    localB->Delay[2] = localDW->Delay_DSTATE[2];

    // MATLAB Function: '<S202>/MATLAB Function' incorporates:
    //   Constant: '<S202>/Constant2'
    //   Delay: '<S202>/Delay'
    //   SignalConversion generated from: '<S203>/ SFunction '

    x = exp(-rtu_dt / localP->Constant2_Value);
    localB->ema[0] = (1.0 - (1.0 - x)) * localB->Delay[0] + (1.0 - x) * rtu_y;
    localB->ema[1] = (1.0 - (1.0 - x)) * localB->Delay[1] + (1.0 - x) * rtu_y_c;
    localB->ema[2] = (1.0 - (1.0 - x)) * localB->Delay[2] + (1.0 - x) * rtu_y_k;
    rty_dydt[0] = (localB->ema[0] - localB->Delay[0]) / rtu_dt;
    rty_dydt[1] = (localB->ema[1] - localB->Delay[1]) / rtu_dt;
    rty_dydt[2] = (localB->ema[2] - localB->Delay[2]) / rtu_dt;
  }

  // End of Outputs for SubSystem: '<S196>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S196>/Enabled Subsystem'
//    '<S206>/Enabled Subsystem'
//    '<S216>/Enabled Subsystem'
//
void Defau_EnabledSubsystem_d_Update(B_EnabledSubsystem_DefaultS_h_T *localB,
  DW_EnabledSubsystem_Default_c_T *localDW)
{
  // Update for Enabled SubSystem: '<S196>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S202>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S202>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S196>/Enabled Subsystem'
}

static real_T DefaultSPOT_xzlangeM(const real_T x[24])
{
  real_T y;
  int32_T b_k;
  boolean_T exitg1;
  y = 0.0;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 24)) {
    real_T absxk;
    absxk = fabs(x[b_k]);
    if (rtIsNaN(absxk)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }

      b_k++;
    }
  }

  return y;
}

static void DefaultSPOT_xzlascl(real_T cfrom, real_T cto, real_T A[24])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((fabs(cfrom1) > fabs(ctoc)) && (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (fabs(cto1) > fabs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    for (int32_T i = 0; i < 24; i++) {
      A[i] *= mul;
    }
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
}

static real_T DefaultSPOT_xnrm2(int32_T n, const real_T x[24], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  kend = ix0 + n;
  for (int32_T k = ix0; k < kend; k++) {
    real_T absxk;
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
  return scale * sqrt(y);
}

static real_T DefaultSPOT_xdotc(int32_T n, const real_T x[24], int32_T ix0,
  const real_T y[24], int32_T iy0)
{
  real_T d;
  int32_T b;
  d = 0.0;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  b = static_cast<uint8_T>(n);
  for (int32_T k = 0; k < b; k++) {
    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }

  return d;
}

static void DefaultSPOT_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[24],
  int32_T iy0)
{
  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += y[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
}

static real_T DefaultSPOT_xdotc_o(const real_T x[9], const real_T y[9], int32_T
  iy0)
{
  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  return y[iy0 - 1] * x[1] + x[2] * y[iy0];
}

static void DefaultSPOT_xaxpy_gop(real_T a, real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  if (!(a == 0.0)) {
    y[iy0 - 1] += a * y[1];
    y[iy0] += a * y[2];
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
}

static real_T DefaultSPOT_xnrm2_p(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  for (int32_T k = ix0; k <= ix0 + 1; k++) {
    real_T absxk;
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
  return scale * sqrt(y);
}

static void DefaultSPOT_xaxpy_g(int32_T n, real_T a, const real_T x[24], int32_T
  ix0, real_T y[8], int32_T iy0)
{
  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
}

static void DefaultSPOT_xaxpy_go(int32_T n, real_T a, const real_T x[8], int32_T
  ix0, real_T y[24], int32_T iy0)
{
  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
}

static void DefaultSPOT_xzlascl_i(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((fabs(cfrom1) > fabs(ctoc)) && (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (fabs(cto1) > fabs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    A[0] *= mul;
    A[1] *= mul;
    A[2] *= mul;
  }

  // End of Start for MATLABSystem: '<S234>/Pseudoinverse1'
}

static void DefaultSPOT_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b,
  real_T *c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  roe = b;
  absa = fabs(a);
  absb = fabs(b);
  if (absa > absb) {
    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    roe = a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *b_a = 0.0;
    *b_b = 0.0;
  } else {
    real_T ads;
    real_T bds;
    ads = absa / scale;
    bds = absb / scale;

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    *b_a = sqrt(ads * ads + bds * bds) * scale;
    if (roe < 0.0) {
      *b_a = -*b_a;
    }

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    *c = a / *b_a;
    *s = b / *b_a;
    if (absa > absb) {
      *b_b = *s;
    } else if (*c != 0.0) {
      // Start for MATLABSystem: '<S234>/Pseudoinverse1'
      *b_b = 1.0 / *c;
    } else {
      *b_b = 1.0;
    }
  }
}

static void DefaultSPOT_xrot_ps(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
{
  real_T temp;
  real_T temp_tmp;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  temp = x[iy0 - 1];
  temp_tmp = x[ix0 - 1];
  x[iy0 - 1] = temp * c - temp_tmp * s;
  x[ix0 - 1] = temp_tmp * c + temp * s;
  temp = x[ix0] * c + x[iy0] * s;
  x[iy0] = x[iy0] * c - x[ix0] * s;
  x[ix0] = temp;
  temp = x[iy0 + 1];
  temp_tmp = x[ix0 + 1];
  x[iy0 + 1] = temp * c - temp_tmp * s;
  x[ix0 + 1] = temp_tmp * c + temp * s;
}

static void DefaultSPOT_xrot_psj(real_T x[24], int32_T ix0, int32_T iy0, real_T
  c, real_T s)
{
  for (int32_T k = 0; k < 8; k++) {
    real_T temp_tmp;
    real_T temp_tmp_0;
    int32_T temp_tmp_tmp;
    int32_T temp_tmp_tmp_0;

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    temp_tmp_tmp = (iy0 + k) - 1;
    temp_tmp = x[temp_tmp_tmp];

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    temp_tmp_tmp_0 = (ix0 + k) - 1;
    temp_tmp_0 = x[temp_tmp_tmp_0];

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    x[temp_tmp_tmp] = temp_tmp * c - temp_tmp_0 * s;
    x[temp_tmp_tmp_0] = temp_tmp_0 * c + temp_tmp * s;
  }
}

static void DefaultSPOT_xswap_dj(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  temp = x[ix0 - 1];
  x[ix0 - 1] = x[iy0 - 1];
  x[iy0 - 1] = temp;
  temp = x[ix0];
  x[ix0] = x[iy0];
  x[iy0] = temp;
  temp = x[ix0 + 1];
  x[ix0 + 1] = x[iy0 + 1];
  x[iy0 + 1] = temp;
}

static void DefaultSPOT_xswap_dj5(real_T x[24], int32_T ix0, int32_T iy0)
{
  for (int32_T k = 0; k < 8; k++) {
    real_T temp;
    int32_T temp_tmp;
    int32_T tmp;

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    temp_tmp = (ix0 + k) - 1;
    temp = x[temp_tmp];

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    tmp = (iy0 + k) - 1;
    x[temp_tmp] = x[tmp];
    x[tmp] = temp;
  }
}

static void DefaultSPOT_svd(const real_T A[24], real_T U[24], real_T s[3],
  real_T V[9])
{
  real_T A_0[24];
  real_T Vf[9];
  real_T work[8];
  real_T e[3];
  real_T s_0[3];
  real_T a__3;
  real_T anrm;
  real_T b;
  real_T cscale;
  real_T d_sn;
  real_T emm1;
  real_T nrm;
  real_T r;
  real_T smm1;
  real_T sqds;
  real_T ztest;
  int32_T b_0;
  int32_T colqp1;
  int32_T i;
  int32_T qjj;
  int32_T qp1;
  int32_T qq;
  int32_T qq_tmp_tmp;
  boolean_T apply_transform;
  boolean_T doscale;
  boolean_T exitg1;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  memcpy(&A_0[0], &A[0], 24U * sizeof(real_T));
  s_0[0] = 0.0;
  e[0] = 0.0;
  s_0[1] = 0.0;
  e[1] = 0.0;
  s_0[2] = 0.0;
  e[2] = 0.0;
  memset(&work[0], 0, sizeof(real_T) << 3U);
  memset(&U[0], 0, 24U * sizeof(real_T));
  memset(&Vf[0], 0, 9U * sizeof(real_T));
  doscale = false;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  anrm = DefaultSPOT_xzlangeM(A);
  cscale = anrm;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    DefaultSPOT_xzlascl(anrm, cscale, A_0);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    DefaultSPOT_xzlascl(anrm, cscale, A_0);
  }

  for (i = 0; i < 3; i++) {
    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    qp1 = i + 2;
    qq_tmp_tmp = i << 3;

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    colqp1 = qq_tmp_tmp + i;
    qq = colqp1 + 1;
    apply_transform = false;

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    nrm = DefaultSPOT_xnrm2(8 - i, A_0, colqp1 + 1);
    if (nrm > 0.0) {
      apply_transform = true;

      // Start for MATLABSystem: '<S234>/Pseudoinverse1'
      if (A_0[colqp1] < 0.0) {
        r = -nrm;
        s_0[i] = -nrm;
      } else {
        r = nrm;
        s_0[i] = nrm;
      }

      if (fabs(r) >= 1.0020841800044864E-292) {
        r = 1.0 / r;
        b_0 = (colqp1 - i) + 1;
        for (qjj = qq; qjj <= b_0 + 7; qjj++) {
          A_0[qjj - 1] *= r;
        }
      } else {
        b_0 = (colqp1 - i) + 1;
        for (qjj = qq; qjj <= b_0 + 7; qjj++) {
          A_0[qjj - 1] /= s_0[i];
        }
      }

      A_0[colqp1]++;
      s_0[i] = -s_0[i];
    } else {
      s_0[i] = 0.0;
    }

    for (qq = qp1; qq < 4; qq++) {
      // Start for MATLABSystem: '<S234>/Pseudoinverse1'
      qjj = (((qq - 1) << 3) + i) + 1;
      if (apply_transform) {
        // Start for MATLABSystem: '<S234>/Pseudoinverse1'
        DefaultSPOT_xaxpy(8 - i, -(DefaultSPOT_xdotc(8 - i, A_0, colqp1 + 1, A_0,
          qjj) / A_0[colqp1]), colqp1 + 1, A_0, qjj);
      }

      e[qq - 1] = A_0[qjj - 1];
    }

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    for (colqp1 = i + 1; colqp1 < 9; colqp1++) {
      qjj = (qq_tmp_tmp + colqp1) - 1;
      U[qjj] = A_0[qjj];
    }

    if (i + 1 <= 1) {
      nrm = DefaultSPOT_xnrm2_p(e, i + 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[i + 1] < 0.0) {
          nrm = -nrm;
        }

        e[0] = nrm;
        if (fabs(nrm) >= 1.0020841800044864E-292) {
          r = 1.0 / nrm;
          for (qjj = qp1; qjj <= i + 3; qjj++) {
            e[qjj - 1] *= r;
          }
        } else {
          for (qjj = qp1; qjj <= i + 3; qjj++) {
            e[qjj - 1] /= nrm;
          }
        }

        e[i + 1]++;
        e[0] = -e[0];
        for (colqp1 = qp1; colqp1 < 9; colqp1++) {
          work[colqp1 - 1] = 0.0;
        }

        for (colqp1 = qp1; colqp1 < 4; colqp1++) {
          DefaultSPOT_xaxpy_g(7 - i, e[colqp1 - 1], A_0, (i + ((colqp1 - 1) << 3))
                              + 2, work, i + 2);
        }

        for (colqp1 = qp1; colqp1 < 4; colqp1++) {
          DefaultSPOT_xaxpy_go(7 - i, -e[colqp1 - 1] / e[i + 1], work, i + 2,
                               A_0, (i + ((colqp1 - 1) << 3)) + 2);
        }
      }

      for (colqp1 = qp1; colqp1 < 4; colqp1++) {
        Vf[colqp1 - 1] = e[colqp1 - 1];
      }
    }
  }

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  i = 2;
  e[1] = A_0[17];
  e[2] = 0.0;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  for (qp1 = 2; qp1 >= 0; qp1--) {
    colqp1 = qp1 << 3;
    qq = colqp1 + qp1;
    if (s_0[qp1] != 0.0) {
      for (qq_tmp_tmp = qp1 + 2; qq_tmp_tmp < 4; qq_tmp_tmp++) {
        qjj = (((qq_tmp_tmp - 1) << 3) + qp1) + 1;
        DefaultSPOT_xaxpy(8 - qp1, -(DefaultSPOT_xdotc(8 - qp1, U, qq + 1, U,
          qjj) / U[qq]), qq + 1, U, qjj);
      }

      for (qq_tmp_tmp = qp1 + 1; qq_tmp_tmp < 9; qq_tmp_tmp++) {
        qjj = (colqp1 + qq_tmp_tmp) - 1;
        U[qjj] = -U[qjj];
      }

      U[qq]++;
      for (qq = 0; qq < qp1; qq++) {
        U[qq + colqp1] = 0.0;
      }
    } else {
      memset(&U[colqp1], 0, sizeof(real_T) << 3U);
      U[qq] = 1.0;
    }

    if ((qp1 + 1 <= 1) && (e[0] != 0.0)) {
      DefaultSPOT_xaxpy_gop(-(DefaultSPOT_xdotc_o(Vf, Vf, 5) / Vf[1]), Vf, 5);
      DefaultSPOT_xaxpy_gop(-(DefaultSPOT_xdotc_o(Vf, Vf, 8) / Vf[1]), Vf, 8);
    }

    Vf[3 * qp1] = 0.0;
    Vf[3 * qp1 + 1] = 0.0;
    Vf[3 * qp1 + 2] = 0.0;
    Vf[qp1 + 3 * qp1] = 1.0;
  }

  for (qp1 = 0; qp1 < 3; qp1++) {
    r = s_0[qp1];
    if (r != 0.0) {
      // Start for MATLABSystem: '<S234>/Pseudoinverse1'
      nrm = fabs(r);
      r /= nrm;
      s_0[qp1] = nrm;

      // Start for MATLABSystem: '<S234>/Pseudoinverse1'
      if (qp1 + 1 < 3) {
        e[qp1] /= r;
      }

      qq = qp1 << 3;

      // Start for MATLABSystem: '<S234>/Pseudoinverse1'
      for (qjj = qq + 1; qjj <= qq + 8; qjj++) {
        U[qjj - 1] *= r;
      }
    }

    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    if (qp1 + 1 < 3) {
      ztest = e[qp1];
      if (ztest != 0.0) {
        nrm = fabs(ztest);
        r = nrm / ztest;
        e[qp1] = nrm;
        s_0[qp1 + 1] *= r;
        colqp1 = (qp1 + 1) * 3;
        for (qjj = colqp1 + 1; qjj <= colqp1 + 3; qjj++) {
          Vf[qjj - 1] *= r;
        }
      }
    }
  }

  qp1 = 0;
  r = 0.0;

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  ztest = fabs(s_0[0]);
  nrm = fabs(e[0]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(nrm <= 0.0)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  ztest = fabs(s_0[1]);
  nrm = fabs(e[1]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  ztest = fabs(s_0[2]);
  nrm = fabs(e[2]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  while ((i + 1 > 0) && (qp1 < 75)) {
    colqp1 = i;
    qq = i;
    exitg1 = false;
    while ((!exitg1) && (qq > -1)) {
      colqp1 = qq;
      if (qq == 0) {
        exitg1 = true;
      } else {
        nrm = fabs(e[qq - 1]);
        if ((nrm <= (fabs(s_0[qq - 1]) + fabs(s_0[qq])) * 2.2204460492503131E-16)
            || ((nrm <= 1.0020841800044864E-292) || ((qp1 > 20) && (nrm <=
               2.2204460492503131E-16 * r)))) {
          e[qq - 1] = 0.0;
          exitg1 = true;
        } else {
          qq--;
        }
      }
    }

    if (colqp1 == i) {
      qjj = 4;
    } else {
      qq = i + 1;
      qjj = i + 1;
      exitg1 = false;
      while ((!exitg1) && (qjj >= colqp1)) {
        qq = qjj;
        if (qjj == colqp1) {
          exitg1 = true;
        } else {
          nrm = 0.0;
          if (qjj < i + 1) {
            nrm = fabs(e[qjj - 1]);
          }

          if (qjj > colqp1 + 1) {
            nrm += fabs(e[qjj - 2]);
          }

          ztest = fabs(s_0[qjj - 1]);
          if ((ztest <= 2.2204460492503131E-16 * nrm) || (ztest <=
               1.0020841800044864E-292)) {
            s_0[qjj - 1] = 0.0;
            exitg1 = true;
          } else {
            qjj--;
          }
        }
      }

      if (qq == colqp1) {
        qjj = 3;
      } else if (i + 1 == qq) {
        qjj = 1;
      } else {
        qjj = 2;
        colqp1 = qq;
      }
    }

    switch (qjj) {
     case 1:
      nrm = e[i - 1];
      e[i - 1] = 0.0;
      for (qq = i; qq >= colqp1 + 1; qq--) {
        DefaultSPOT_xrotg(s_0[qq - 1], nrm, &s_0[qq - 1], &nrm, &ztest, &sqds);
        if (qq > colqp1 + 1) {
          nrm = -sqds * e[0];
          e[0] *= ztest;
        }

        DefaultSPOT_xrot_ps(Vf, 3 * (qq - 1) + 1, 3 * i + 1, ztest, sqds);
      }
      break;

     case 2:
      nrm = e[colqp1 - 1];
      e[colqp1 - 1] = 0.0;
      for (qq = colqp1 + 1; qq <= i + 1; qq++) {
        DefaultSPOT_xrotg(s_0[qq - 1], nrm, &s_0[qq - 1], &ztest, &sqds, &b);
        ztest = e[qq - 1];
        nrm = -b * ztest;
        e[qq - 1] = ztest * sqds;
        DefaultSPOT_xrot_psj(U, ((qq - 1) << 3) + 1, ((colqp1 - 1) << 3) + 1,
                             sqds, b);
      }
      break;

     case 3:
      ztest = fabs(s_0[i]);
      sqds = s_0[i - 1];
      nrm = fabs(sqds);
      if ((ztest >= nrm) || rtIsNaN(nrm)) {
        nrm = ztest;
      }

      b = e[i - 1];
      ztest = fabs(b);
      if ((nrm >= ztest) || rtIsNaN(ztest)) {
        ztest = nrm;
      }

      nrm = fabs(s_0[colqp1]);
      if ((ztest >= nrm) || rtIsNaN(nrm)) {
        nrm = ztest;
      }

      ztest = fabs(e[colqp1]);
      if ((nrm >= ztest) || rtIsNaN(ztest)) {
        ztest = nrm;
      }

      nrm = s_0[i] / ztest;
      smm1 = sqds / ztest;
      emm1 = b / ztest;
      sqds = s_0[colqp1] / ztest;
      b = ((smm1 + nrm) * (smm1 - nrm) + emm1 * emm1) / 2.0;
      smm1 = nrm * emm1;
      smm1 *= smm1;
      if ((b != 0.0) || (smm1 != 0.0)) {
        emm1 = sqrt(b * b + smm1);
        if (b < 0.0) {
          emm1 = -emm1;
        }

        emm1 = smm1 / (b + emm1);
      } else {
        emm1 = 0.0;
      }

      nrm = (sqds + nrm) * (sqds - nrm) + emm1;
      ztest = e[colqp1] / ztest * sqds;
      for (qq = colqp1 + 1; qq <= i; qq++) {
        DefaultSPOT_xrotg(nrm, ztest, &smm1, &emm1, &sqds, &b);
        if (qq > colqp1 + 1) {
          e[0] = smm1;
        }

        smm1 = e[qq - 1];
        nrm = s_0[qq - 1];
        e[qq - 1] = smm1 * sqds - nrm * b;
        ztest = b * s_0[qq];
        s_0[qq] *= sqds;
        DefaultSPOT_xrot_ps(Vf, 3 * (qq - 1) + 1, 3 * qq + 1, sqds, b);
        DefaultSPOT_xrotg(nrm * sqds + smm1 * b, ztest, &s_0[qq - 1], &a__3,
                          &emm1, &d_sn);
        smm1 = e[qq - 1];
        nrm = smm1 * emm1 + d_sn * s_0[qq];
        s_0[qq] = smm1 * -d_sn + emm1 * s_0[qq];
        ztest = d_sn * e[qq];
        e[qq] *= emm1;
        DefaultSPOT_xrot_psj(U, ((qq - 1) << 3) + 1, (qq << 3) + 1, emm1, d_sn);
      }

      e[i - 1] = nrm;
      qp1++;
      break;

     default:
      if (s_0[colqp1] < 0.0) {
        s_0[colqp1] = -s_0[colqp1];
        qq = 3 * colqp1;
        for (qjj = qq + 1; qjj <= qq + 3; qjj++) {
          Vf[qjj - 1] = -Vf[qjj - 1];
        }
      }

      qp1 = colqp1 + 1;
      while ((colqp1 + 1 < 3) && (s_0[colqp1] < s_0[qp1])) {
        nrm = s_0[colqp1];
        s_0[colqp1] = s_0[qp1];
        s_0[qp1] = nrm;
        DefaultSPOT_xswap_dj(Vf, 3 * colqp1 + 1, 3 * (colqp1 + 1) + 1);
        DefaultSPOT_xswap_dj5(U, (colqp1 << 3) + 1, ((colqp1 + 1) << 3) + 1);
        colqp1 = qp1;
        qp1++;
      }

      qp1 = 0;
      i--;
      break;
    }
  }

  s[0] = s_0[0];
  s[1] = s_0[1];
  s[2] = s_0[2];
  if (doscale) {
    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    DefaultSPOT_xzlascl_i(cscale, anrm, s);
  }

  for (i = 0; i < 3; i++) {
    V[3 * i] = Vf[3 * i];
    qp1 = 3 * i + 1;
    V[qp1] = Vf[qp1];
    qp1 = 3 * i + 2;
    V[qp1] = Vf[qp1];
  }
}

// System initialize for atomic system:
void DefaultSPOT_Pseudoinverse1_Init(DW_Pseudoinverse1_DefaultSPOT_T *localDW)
{
  // Start for MATLABSystem: '<S234>/Pseudoinverse1'
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

// Output and update for atomic system:
void DefaultSPOT_Pseudoinverse1(const real_T rtu_0[24],
  B_Pseudoinverse1_DefaultSPOT_T *localB)
{
  real_T A[24];
  real_T U[24];
  real_T X[24];
  real_T V[9];
  real_T s[3];
  real_T absx;
  int32_T ar;
  int32_T b_exponent;
  int32_T b_k;
  int32_T br;
  int32_T d;
  int32_T f;
  int32_T i;
  int32_T vcol;
  boolean_T b[24];
  boolean_T b_0[24];
  boolean_T exitg1;
  boolean_T y;

  // MATLABSystem: '<S234>/Pseudoinverse1'
  for (i = 0; i < 24; i++) {
    // Start for MATLABSystem: '<S234>/Pseudoinverse1'
    absx = rtu_0[i];
    b[i] = rtIsInf(absx);
    b_0[i] = rtIsNaN(absx);
  }

  y = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 24)) {
    if (b[b_k] || b_0[b_k]) {
      y = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (y) {
    for (i = 0; i < 3; i++) {
      for (b_k = 0; b_k < 8; b_k++) {
        A[b_k + (i << 3)] = rtu_0[3 * b_k + i];
      }
    }

    y = true;
    for (b_k = 0; b_k < 24; b_k++) {
      X[b_k] = 0.0;
      if (y) {
        absx = A[b_k];
        if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
        } else {
          y = false;
        }
      } else {
        y = false;
      }
    }

    if (!y) {
      for (i = 0; i < 24; i++) {
        X[i] = (rtNaN);
      }
    } else {
      DefaultSPOT_svd(A, U, s, V);
      absx = fabs(s[0]);
      if (rtIsInf(absx) || rtIsNaN(absx)) {
        absx = (rtNaN);
      } else if (absx < 4.4501477170144028E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &b_exponent);
        absx = ldexp(1.0, b_exponent - 53);
      }

      absx *= 8.0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 3)) {
        if (rtIsInf(s[i]) || rtIsNaN(s[i])) {
          absx = 1.7976931348623157E+308;
          exitg1 = true;
        } else {
          i++;
        }
      }

      i = -1;
      b_k = 0;
      while ((b_k < 3) && (s[b_k] > absx)) {
        i++;
        b_k++;
      }

      if (i + 1 > 0) {
        vcol = 3;
        for (b_k = 0; b_k <= i; b_k++) {
          absx = 1.0 / s[b_k];
          for (b_exponent = vcol - 2; b_exponent <= vcol; b_exponent++) {
            V[b_exponent - 1] *= absx;
          }

          vcol += 3;
        }

        for (b_k = 0; b_k <= 21; b_k += 3) {
          for (b_exponent = b_k + 1; b_exponent <= b_k + 3; b_exponent++) {
            X[b_exponent - 1] = 0.0;
          }
        }

        br = 0;
        for (b_k = 0; b_k <= 21; b_k += 3) {
          ar = 0;
          br++;
          d = (i << 3) + br;
          for (b_exponent = br; b_exponent <= d; b_exponent += 8) {
            f = b_k + 3;
            for (vcol = b_k + 1; vcol <= f; vcol++) {
              X[vcol - 1] += V[((ar + vcol) - b_k) - 1] * U[b_exponent - 1];
            }

            ar += 3;
          }
        }
      }
    }

    for (i = 0; i < 3; i++) {
      for (b_k = 0; b_k < 8; b_k++) {
        localB->Pseudoinverse1[b_k + (i << 3)] = X[3 * b_k + i];
      }
    }
  } else {
    memset(&localB->Pseudoinverse1[0], 0, 24U * sizeof(real_T));
  }

  // End of MATLABSystem: '<S234>/Pseudoinverse1'
}

// Function for MATLAB Function: '<S231>/MATLAB Function1'
static real_T DefaultSPOT_maximum(const real_T x[8])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  if (!rtIsNaN(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (!rtIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 9; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (ex < x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

//
// Output and update for atomic system:
//    '<S231>/MATLAB Function1'
//    '<S243>/MATLAB Function1'
//    '<S255>/MATLAB Function8'
//
void DefaultSPOT_MATLABFunction1(const real_T rtu_ThrustPer[8], real_T
  rty_ThrustPer_Final[8])
{
  real_T TControl;
  real_T ThrustPer_Sat;
  real_T maxval;
  int32_T i;
  TControl = 1.0 / DefaultSPOT_P.PWMFreq;
  maxval = DefaultSPOT_maximum(rtu_ThrustPer);
  for (i = 0; i < 8; i++) {
    if (maxval > 1.0) {
      ThrustPer_Sat = rtu_ThrustPer[i] / maxval;
    } else {
      ThrustPer_Sat = rtu_ThrustPer[i];
    }

    if (ThrustPer_Sat > 0.007 / TControl) {
      rty_ThrustPer_Final[i] = ThrustPer_Sat;
    } else {
      rty_ThrustPer_Final[i] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S231>/MATLAB Function5'
static real_T DefaultSPOT_maximum_e(const real_T x[8])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  if (!rtIsNaN(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (!rtIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 9; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (ex < x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

// Function for MATLAB Function: '<S231>/MATLAB Function5'
static real_T DefaultSPOT_norm(const real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

//
// Output and update for atomic system:
//    '<S231>/MATLAB Function5'
//    '<S243>/MATLAB Function5'
//    '<S255>/MATLAB Function5'
//
void DefaultSPOT_MATLABFunction5(const real_T rtu_u_desired[3], const real_T
  rtu_x0[8], real_T rty_H_final[24], real_T rty_duty_cycles[8], real_T
  rtp_max_iters, real_T rtp_tol)
{
  real_T HtH[64];
  real_T H[24];
  real_T HtH_tmp[24];
  real_T b[24];
  real_T Htb[8];
  real_T gradient[8];
  real_T prev_duty_cycles[8];
  real_T x[8];
  real_T x_new[8];
  real_T H_0[3];
  real_T absx;
  real_T absxk;
  real_T current_obj;
  real_T new_obj;
  real_T step_size;
  real_T t;
  real_T thrust_decay_factor;
  int32_T b_iter;
  int32_T i;
  int32_T iter;
  int32_T ls_iter;
  int32_T nz;
  boolean_T b_x[8];
  static const int8_T b_0[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

  static const int8_T c[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

  int32_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;
  thrust_decay_factor = 1.0;
  absx = 2.0 * rtp_tol;
  for (i = 0; i < 8; i++) {
    current_obj = rtu_x0[i];
    rty_duty_cycles[i] = current_obj;
    prev_duty_cycles[i] = current_obj + absx;
  }

  iter = 0;
  do {
    exitg1 = 0;
    if (iter <= static_cast<int32_T>(rtp_max_iters) - 1) {
      current_obj = DefaultSPOT_P.F_red_X_nominal * thrust_decay_factor / 2.0;
      gradient[0] = current_obj;
      gradient[1] = current_obj;
      thrust_decay_factor = DefaultSPOT_P.F_red_Y_nominal * thrust_decay_factor /
        2.0;
      gradient[2] = thrust_decay_factor;
      gradient[3] = thrust_decay_factor;
      gradient[4] = current_obj;
      gradient[5] = current_obj;
      gradient[6] = thrust_decay_factor;
      gradient[7] = thrust_decay_factor;
      memset(&HtH[0], 0, sizeof(real_T) << 6U);
      for (i = 0; i < 8; i++) {
        HtH[i + (i << 3)] = gradient[i];
        b[3 * i] = b_0[i];
        b[3 * i + 1] = c[i];
        b[3 * i + 2] = DefaultSPOT_P.thruster_dist2CG_RED[i] / 1000.0;
      }

      for (i = 0; i < 3; i++) {
        for (nz = 0; nz < 8; nz++) {
          thrust_decay_factor = 0.0;
          for (b_iter = 0; b_iter < 8; b_iter++) {
            thrust_decay_factor += b[3 * b_iter + i] * HtH[(nz << 3) + b_iter];
          }

          H[i + 3 * nz] = thrust_decay_factor;
        }
      }

      thrust_decay_factor = 0.01;
      for (i = 0; i < 8; i++) {
        absxk = rty_duty_cycles[i];
        x[i] = absxk;
        rty_duty_cycles[i] = absxk + 2.0E-6;
      }

      for (i = 0; i < 3; i++) {
        for (nz = 0; nz < 8; nz++) {
          HtH_tmp[nz + (i << 3)] = H[3 * nz + i];
        }
      }

      for (i = 0; i < 8; i++) {
        current_obj = HtH_tmp[i + 8];
        absx = HtH_tmp[i];
        step_size = HtH_tmp[i + 16];
        for (nz = 0; nz < 8; nz++) {
          HtH[i + (nz << 3)] = (H[3 * nz + 1] * current_obj + H[3 * nz] * absx)
            + H[3 * nz + 2] * step_size;
        }

        Htb[i] = (current_obj * rtu_u_desired[1] + absx * rtu_u_desired[0]) +
          step_size * rtu_u_desired[2];
      }

      b_iter = 0;
      exitg2 = false;
      while ((!exitg2) && (b_iter < 100)) {
        for (i = 0; i < 8; i++) {
          absx = 0.0;
          for (nz = 0; nz < 8; nz++) {
            absx += HtH[(nz << 3) + i] * x[nz];
          }

          gradient[i] = (absx - Htb[i]) * 2.0;
        }

        for (i = 0; i < 3; i++) {
          absx = 0.0;
          for (nz = 0; nz < 8; nz++) {
            absx += H[3 * nz + i] * x[nz];
          }

          H_0[i] = absx - rtu_u_desired[i];
        }

        current_obj = DefaultSPOT_norm(H_0);
        current_obj *= current_obj;
        step_size = thrust_decay_factor;
        ls_iter = 0;
        exitg3 = false;
        while ((!exitg3) && (ls_iter < 20)) {
          for (i = 0; i < 8; i++) {
            new_obj = x[i] - step_size * gradient[i];
            if ((new_obj >= 1.0) || rtIsNaN(new_obj)) {
              new_obj = 1.0;
            }

            if (new_obj <= 0.0) {
              x_new[i] = 0.0;
            } else {
              x_new[i] = new_obj;
            }
          }

          for (i = 0; i < 3; i++) {
            absx = 0.0;
            for (nz = 0; nz < 8; nz++) {
              absx += H[3 * nz + i] * x_new[nz];
            }

            H_0[i] = absx - rtu_u_desired[i];
          }

          new_obj = DefaultSPOT_norm(H_0);
          new_obj *= new_obj;
          if (new_obj < current_obj) {
            exitg3 = true;
          } else {
            step_size *= 0.5;
            ls_iter++;
          }
        }

        absx = 0.0;
        step_size = 3.3121686421112381E-170;
        for (i = 0; i < 8; i++) {
          absxk = x_new[i];
          x[i] = absxk;
          absxk -= rty_duty_cycles[i];
          rty_duty_cycles[i] = absxk;
          absxk = fabs(absxk);
          if (absxk > step_size) {
            t = step_size / absxk;
            absx = absx * t * t + 1.0;
            step_size = absxk;
          } else {
            t = absxk / step_size;
            absx += t * t;
          }
        }

        absx = step_size * sqrt(absx);
        if (absx < 1.0E-6) {
          exitg2 = true;
        } else {
          if ((b_iter + 1 > 1) && (new_obj < current_obj)) {
            thrust_decay_factor *= 1.1;
            if (!(thrust_decay_factor <= 0.1)) {
              thrust_decay_factor = 0.1;
            }
          } else {
            thrust_decay_factor *= 0.9;
          }

          memcpy(&rty_duty_cycles[0], &x_new[0], sizeof(real_T) << 3U);
          b_iter++;
        }
      }

      thrust_decay_factor = DefaultSPOT_maximum_e(x);
      for (i = 0; i < 8; i++) {
        current_obj = x[i];
        rty_duty_cycles[i] = current_obj;
        gradient[i] = current_obj;
        if (thrust_decay_factor > 1.0) {
          current_obj /= thrust_decay_factor;
          gradient[i] = current_obj;
        }

        b_x[i] = (current_obj > 0.0);
      }

      nz = b_x[0];
      for (i = 0; i < 7; i++) {
        nz += b_x[i + 1];
      }

      for (i = 0; i < 8; i++) {
        thrust_decay_factor = gradient[i];
        if (thrust_decay_factor >= 0.0) {
          Htb[i] = thrust_decay_factor;
        } else {
          Htb[i] = 0.0;
        }
      }

      thrust_decay_factor = Htb[0];
      for (i = 0; i < 7; i++) {
        thrust_decay_factor += Htb[i + 1];
      }

      if (nz >= 1) {
        i = nz;
      } else {
        i = 1;
      }

      thrust_decay_factor /= static_cast<real_T>(i);
      if ((thrust_decay_factor < 0.3) || (nz == 0)) {
        thrust_decay_factor = 1.0;
      } else {
        thrust_decay_factor = (0.6 - 2.0 * thrust_decay_factor) + 1.0;
        if (!(thrust_decay_factor >= 0.5)) {
          thrust_decay_factor = 0.5;
        }
      }

      current_obj = 0.0;
      for (i = 0; i < 8; i++) {
        absx = x[i] - prev_duty_cycles[i];
        prev_duty_cycles[i] = absx;
        absx = fabs(absx);
        if (rtIsNaN(absx)) {
          current_obj = (rtNaN);
        } else if (absx > current_obj) {
          current_obj = absx;
        }
      }

      if (current_obj < rtp_tol) {
        current_obj = DefaultSPOT_P.F_red_X_nominal * thrust_decay_factor;
        gradient[0] = current_obj;
        gradient[1] = current_obj;
        thrust_decay_factor *= DefaultSPOT_P.F_red_Y_nominal;
        gradient[2] = thrust_decay_factor;
        gradient[3] = thrust_decay_factor;
        gradient[4] = current_obj;
        gradient[5] = current_obj;
        gradient[6] = thrust_decay_factor;
        gradient[7] = thrust_decay_factor;
        memset(&HtH[0], 0, sizeof(real_T) << 6U);
        for (iter = 0; iter < 8; iter++) {
          HtH[iter + (iter << 3)] = gradient[iter];
        }

        for (i = 0; i < 8; i++) {
          for (nz = 0; nz < 3; nz++) {
            new_obj = 0.0;
            for (b_iter = 0; b_iter < 8; b_iter++) {
              new_obj += b[3 * b_iter + nz] * HtH[(i << 3) + b_iter];
            }

            rty_H_final[nz + 3 * i] = new_obj;
          }
        }

        exitg1 = 1;
      } else {
        memcpy(&prev_duty_cycles[0], &x[0], sizeof(real_T) << 3U);
        iter++;
      }
    } else {
      current_obj = DefaultSPOT_P.F_red_X_nominal * thrust_decay_factor;
      gradient[0] = current_obj;
      gradient[1] = current_obj;
      thrust_decay_factor *= DefaultSPOT_P.F_red_Y_nominal;
      gradient[2] = thrust_decay_factor;
      gradient[3] = thrust_decay_factor;
      gradient[4] = current_obj;
      gradient[5] = current_obj;
      gradient[6] = thrust_decay_factor;
      gradient[7] = thrust_decay_factor;
      memset(&HtH[0], 0, sizeof(real_T) << 6U);
      for (iter = 0; iter < 8; iter++) {
        HtH[iter + (iter << 3)] = gradient[iter];
        b[3 * iter] = b_0[iter];
        b[3 * iter + 1] = c[iter];
        b[3 * iter + 2] = DefaultSPOT_P.thruster_dist2CG_RED[iter] / 1000.0;
      }

      for (i = 0; i < 8; i++) {
        for (nz = 0; nz < 3; nz++) {
          new_obj = 0.0;
          for (b_iter = 0; b_iter < 8; b_iter++) {
            new_obj += b[3 * b_iter + nz] * HtH[(i << 3) + b_iter];
          }

          rty_H_final[nz + 3 * i] = new_obj;
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

//
// Output and update for atomic system:
//    '<S237>/Create Rotation Matrix'
//    '<S249>/Create Rotation Matrix'
//    '<S261>/Create Rotation Matrix'
//
void DefaultSPO_CreateRotationMatrix(real_T rtu_Rz, real_T rty_C_Ib[4])
{
  real_T x_tmp;
  real_T x_tmp_0;
  x_tmp = sin(rtu_Rz);
  x_tmp_0 = cos(rtu_Rz);
  if (fabs(-x_tmp) > fabs(x_tmp_0)) {
    real_T r_tmp;
    real_T t;
    r_tmp = x_tmp_0 / -x_tmp;
    t = 1.0 / (r_tmp * x_tmp_0 - x_tmp);
    x_tmp_0 = r_tmp * t;
    rty_C_Ib[0] = x_tmp_0;
    rty_C_Ib[1] = -t;
    rty_C_Ib[2] = -x_tmp / -x_tmp * t;
    rty_C_Ib[3] = x_tmp_0;
  } else {
    real_T r_tmp;
    real_T t;
    r_tmp = -x_tmp / x_tmp_0;
    t = 1.0 / (x_tmp_0 - r_tmp * x_tmp);
    rty_C_Ib[0] = x_tmp_0 / x_tmp_0 * t;
    rty_C_Ib[1] = -r_tmp * t;
    rty_C_Ib[2] = r_tmp * t;
    rty_C_Ib[3] = t;
  }
}

//
// Output and update for atomic system:
//    '<S232>/Create Rotation Matrix'
//    '<S244>/Create Rotation Matrix'
//    '<S256>/Create Rotation Matrix'
//
void DefaultS_CreateRotationMatrix_a(real_T rtu_Rz, real_T rty_C_bI[4])
{
  real_T tmp;
  real_T tmp_0;
  tmp = sin(rtu_Rz);
  tmp_0 = cos(rtu_Rz);
  rty_C_bI[0] = tmp_0;
  rty_C_bI[2] = tmp;
  rty_C_bI[1] = -tmp;
  rty_C_bI[3] = tmp_0;
}

//
// System initialize for action system:
//    '<S17>/Change BLACK Behavior'
//    '<S17>/Change BLUE Behavior'
//    '<S17>/Change RED Behavior'
//
void Defa_ChangeBLACKBehavior_n_Init(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_g_T *localDW,
  P_ChangeBLACKBehavior_Defau_b_T *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S267>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  CreateUDPInterface(&localDW->UDPSendClock_NetworkLib[0U]);
  if (*sErr == 0) {
    LibCreate_Network(&localDW->UDPSendClock_NetworkLib[0U], 1, "0.0.0.0", -1,
                      "255.255.255.255", localP->UDPSendClock_Port, 8192, 8, 0);
  }

  if (*sErr == 0) {
    LibStart(&localDW->UDPSendClock_NetworkLib[0U]);
  }

  if (*sErr != 0) {
    DestroyUDPInterface(&localDW->UDPSendClock_NetworkLib[0U]);
    if (*sErr != 0) {
      DefaultSPOT_M->setErrorStatus(sErr);
      DefaultSPOT_M->setStopRequested(1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S267>/UDP Send (Clock)'
}

//
// Outputs for action system:
//    '<S17>/Change BLACK Behavior'
//    '<S17>/Change BLUE Behavior'
//    '<S17>/Change RED Behavior'
//
void DefaultSP_ChangeBLACKBehavior_i(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, B_ChangeBLACKBehavior_Defau_m_T *localB)
{
  // Clock: '<S267>/Clock1'
  localB->Clock1 = DefaultSPOT_M->Timing.t[0];
}

//
// Update for action system:
//    '<S17>/Change BLACK Behavior'
//    '<S17>/Change BLUE Behavior'
//    '<S17>/Change RED Behavior'
//
void De_ChangeBLACKBehavior_j_Update(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, B_ChangeBLACKBehavior_Defau_m_T *localB,
  DW_ChangeBLACKBehavior_Defa_g_T *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S267>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendClock_NetworkLib[0U], &localB->Clock1, 1);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S267>/UDP Send (Clock)'
}

//
// Termination for action system:
//    '<S17>/Change BLACK Behavior'
//    '<S17>/Change BLUE Behavior'
//    '<S17>/Change RED Behavior'
//
void Defa_ChangeBLACKBehavior_n_Term(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_g_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S267>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendClock_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSendClock_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S267>/UDP Send (Clock)'
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void DefaultSPOT_pause(real_T varargin_1)
{
  coderTimespec b_timespec;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  if (DefaultSPOT_DW.pauseState == 0) {
    real_T delay;
    real_T delayInt;
    delay = varargin_1;
    if ((varargin_1 < 0.0) || rtIsNaN(varargin_1)) {
      delay = 0.0;
    }

    delayInt = floor(delay);
    if (delayInt > 4.294967295E+9) {
      delayInt = 4.294967295E+9;
      delay = 0.0;
    } else {
      delay -= delayInt;
    }

    b_timespec.tv_sec = delayInt;
    if (delay > 0.0) {
      b_timespec.tv_nsec = floor(delay * 1.0E+9);
    } else {
      b_timespec.tv_nsec = 0.0;
    }

    coderTimeSleep(&b_timespec);
  }

  // End of Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
}

static void D_bmi160_set_EnableSecondaryMag(b_bmi160_DefaultSPOT_T *obj)
{
  b_bmi160_DefaultSPOT_T *obj_0;
  b_bmi160_DefaultSPOT_T *obj_1;
  e_matlabshared_devicedrivers__T *obj_3;
  f_matlabshared_sensors_coder__T *obj_2;
  uint8_T b_data[2];
  uint8_T b_status;
  uint8_T slaveAddress;
  uint8_T val;
  obj_0 = obj;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 25U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.06);
  obj_1 = obj_0;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 55U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_1->Device;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 154U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_1->Device;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 192U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 5U;
  b_data[1] = 32U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  obj_2 = obj_0->Device;
  b_status = 75U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 75U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 1U) | 32);
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_0->Device;
  b_status = 76U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 76U;
  b_data[1] = 131U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_0->Device;
  b_status = 107U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 107U;
  b_data[1] = 32U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_0->Device;
  b_status = 79U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  b_status = 78U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 79U;
  b_data[1] = 1U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 78U;
  b_data[1] = 75U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_1 = obj_0;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 77U;
  b_data[1] = 64U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_1->Device;
  b_status = 4U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  obj_1 = obj_0;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  b_status = 79U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  b_status = 78U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 79U;
  b_data[1] = 4U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 78U;
  b_data[1] = 81U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_1->Device;
  b_status = 79U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  obj_2 = obj_1->Device;
  b_status = 78U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  obj_2 = obj_1->Device;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 79U;
  b_data[1] = 14U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  obj_2 = obj_1->Device;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 78U;
  b_data[1] = 82U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  obj_2 = obj_0->Device;
  b_status = 79U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  b_status = 78U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 79U;
  b_data[1] = 2U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 78U;
  b_data[1] = 76U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
  obj_2 = obj_0->Device;
  b_status = 77U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_status,
    1U, true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_3->MW_I2C_HANDLE, slaveAddress, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = obj_0->Device;
  obj_3 = obj_2->Device.InterfaceObj;
  slaveAddress = obj_2->Device.DeviceAddress;
  b_data[0] = 77U;
  b_data[1] = 66U;
  MW_I2C_MasterWrite(obj_3->MW_I2C_HANDLE, slaveAddress, &b_data[0], 2U, false,
                     false);
}

static void DefaultSPOT_SystemCore_setup(nvidiacoder_sensors_BMI160Blo_T *obj)
{
  b_bmi160_DefaultSPOT_T *b_obj;
  b_bmi160_DefaultSPOT_T *obj_2;
  e_codertarget_jetson_sensors__T *varargin_1;
  e_matlabshared_devicedrivers__T *obj_4;
  f_matlabshared_sensors_coder__T *obj_3;
  nvidiacoder_sensors_BMI160Blo_T *obj_0;
  nvidiacoder_sensors_BMI160Blo_T *obj_1;
  real_T bus;
  uint8_T b_data[2];
  uint8_T b_status;
  uint8_T i2cModule;
  uint8_T val;
  obj->isSetupComplete = false;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj->isInitialized = 1;
  obj_0 = obj;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj->_pobj3.currentTime = -1.0;
  obj->HwUtilityObject = &obj->_pobj3;
  obj_1 = obj;
  varargin_1 = obj->HwUtilityObject;
  b_obj = &obj->_pobj2;
  obj->_pobj2.isInitialized = 0;
  obj->_pobj2.Parent = varargin_1;
  obj->_pobj2._pobj0.isInitialized = 0;
  obj->_pobj2._pobj0.Bus = 1.0;
  obj->_pobj2._pobj0.BusI2CDriver = obj->_pobj2._pobj0.Bus;
  bus = obj->_pobj2._pobj0.BusI2CDriver;
  bus = rt_roundd_snf(bus);
  if (bus < 256.0) {
    if (bus >= 0.0) {
      obj->_pobj2._pobj0.Device.Bus = static_cast<uint8_T>(bus);
    } else {
      obj->_pobj2._pobj0.Device.Bus = 0U;
    }
  } else {
    obj->_pobj2._pobj0.Device.Bus = MAX_uint8_T;
  }

  obj->_pobj2._pobj0.Device.DeviceAddress = 105U;
  obj->_pobj2._pobj0.Device._pobj0.MW_I2C_HANDLE = NULL;
  obj->_pobj2._pobj0.Device.InterfaceObj = &obj->_pobj2._pobj0.Device._pobj0;
  obj_4 = obj->_pobj2._pobj0.Device.InterfaceObj;
  i2cModule = obj->_pobj2._pobj0.Device.Bus;
  obj_4->MW_I2C_HANDLE = MW_I2C_Open(i2cModule, MW_I2C_MASTER);
  obj->_pobj2.Device = &obj->_pobj2._pobj0;
  obj_3 = obj->_pobj2.Device;
  b_status = 0U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U, false,
                      true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_2 = &obj->_pobj2;
  obj_3 = obj->_pobj2.Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 182U;
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.06);
  obj_3 = obj_2->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 3U;
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.06);
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 17U;
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.005);
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 126U;
  b_data[1] = 21U;
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.085);
  D_bmi160_set_EnableSecondaryMag(b_obj);

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  b_status = 65U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 65U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 240U) | 3);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 64U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 64U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 112U) | 8);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 64U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 64U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 15U) | 32);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 67U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 67U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 248U) | 4);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 66U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 66U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 240U) | 8);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 66U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 66U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 207U) | 32);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 68U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 68U;
  b_data[1] = static_cast<uint8_T>(static_cast<int32_T>(val & 240U) | 6);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  obj_3 = b_obj->Device;
  b_status = 76U;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  val = 0U;
  b_status = MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_status, 1U,
    true, false);
  if (b_status == 0) {
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    MW_I2C_MasterRead(obj_4->MW_I2C_HANDLE, i2cModule, &val, 1U, false, true);
  }

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_3 = b_obj->Device;
  obj_4 = obj_3->Device.InterfaceObj;
  i2cModule = obj_3->Device.DeviceAddress;
  b_data[0] = 76U;
  b_data[1] = static_cast<uint8_T>(val & 63);
  MW_I2C_MasterWrite(obj_4->MW_I2C_HANDLE, i2cModule, &b_data[0], 2U, false,
                     false);
  DefaultSPOT_pause(0.001);
  b_obj->matlabCodegenIsDeleted = false;
  obj_1->SensorObject = b_obj;

  // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  obj_0->OutputModules.f1 = &obj_0->_pobj1;
  obj_0->OutputModules.f2 = &obj_0->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// Model step function
void DefaultSPOT_step(void)
{
  // local block i/o variables
  real_T rtb_H_final[24];
  real_T rtb_ThrustPer_Final_p[8];
  real_T rtb_H_final_j[24];
  real_T rtb_H_final_g[24];

  {
    e_matlabshared_devicedrivers__T *obj_0;
    f_matlabshared_sensors_coder__T *obj;
    real_T b_u1[123];
    real_T y[64];
    real_T b[24];
    real_T rtb_H[24];
    real_T tmp[18];
    real_T rtb_Product3[8];
    real_T rtb_Product3_f[8];
    real_T rtb_Product3_h[8];
    real_T tmp_0[6];
    real_T tmp_1[6];
    real_T tmp_2[6];
    real_T rtb_C_Ib[4];
    real_T ARM_Path[3];
    real_T rtb_Merge6[3];
    real_T rtb_Product1[3];
    real_T BLACK_Path_idx_0;
    real_T BLACK_Path_idx_1;
    real_T BLACK_Path_idx_2;
    real_T BLUE_Path_idx_0;
    real_T BLUE_Path_idx_1;
    real_T BLUE_Path_idx_2;
    real_T RED_Desired_States;
    real_T RED_Path_idx_0;
    real_T RED_Path_idx_1;
    real_T rtb_TSamp;
    real_T rtb_TSamp_af;
    real_T rtb_TSamp_d;
    real_T rtb_TSamp_e;
    real_T rtb_TSamp_h;
    real_T rtb_TSamp_hx;
    real_T rtb_TSamp_k;
    real_T rtb_TSamp_ks;
    real_T rtb_TSamp_n5;
    real_T rtb_TSamp_o;
    real_T sampleTime;
    real_T sampleTime_0;
    real_T sampleTime_1;
    int32_T i;
    int32_T i_0;
    int32_T idx;
    int32_T samplesRead;
    int32_T samplesRead_0;
    int32_T samplesRead_1;
    int32_T samplesRead_2;
    int32_T samplesRead_3;
    char_T *sErr;
    int8_T rtAction;
    int8_T rtPrevAction;
    uint8_T b_output[6];
    uint8_T b_output_0[6];
    uint8_T b_status;
    uint8_T slaveAddress;
    boolean_T RelationalOperator_i[3];
    static const int8_T b_0[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

    static const int8_T c[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

    boolean_T exitg1;

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S101>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S109>/Data Store Read'
    //   DataStoreWrite: '<S2>/Data Store Write9'

    ARM_Path[0] = DefaultSPOT_DW.ARM_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S102>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S110>/BLACK_Px'
    //   DataStoreWrite: '<S2>/Data Store Write3'

    BLACK_Path_idx_0 = DefaultSPOT_DW.BLACK_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S103>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S111>/Data Store Read4'
    //   DataStoreWrite: '<S2>/Data Store Write6'

    BLUE_Path_idx_0 = DefaultSPOT_DW.BLUE_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // Outputs for IfAction SubSystem: '<S2>/Disable PPL (RED)' incorporates:
    //   ActionPort: '<S108>/Action Port'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
    //   ActionPort: '<S104>/Action Port'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S112>/RED_Px'
    //   DataStoreRead: '<S116>/RED_Px'
    //   DataStoreWrite: '<S2>/Data Store Write'
    //   Merge: '<S3>/Merge6'

    rtb_Merge6[0] = DefaultSPOT_DW.RED_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Disable PPL (RED)'
    RED_Path_idx_0 = DefaultSPOT_DW.RED_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S101>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S109>/Data Store Read'
    //   DataStoreWrite: '<S2>/Data Store Write9'

    ARM_Path[1] = DefaultSPOT_DW.ARM_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S102>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S110>/BLACK_Px'
    //   DataStoreWrite: '<S2>/Data Store Write3'

    BLACK_Path_idx_1 = DefaultSPOT_DW.BLACK_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S103>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S111>/Data Store Read4'
    //   DataStoreWrite: '<S2>/Data Store Write6'

    BLUE_Path_idx_1 = DefaultSPOT_DW.BLUE_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // Outputs for IfAction SubSystem: '<S2>/Disable PPL (RED)' incorporates:
    //   ActionPort: '<S108>/Action Port'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
    //   ActionPort: '<S104>/Action Port'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S112>/RED_Px'
    //   DataStoreRead: '<S116>/RED_Px'
    //   DataStoreWrite: '<S2>/Data Store Write'
    //   Merge: '<S3>/Merge6'

    rtb_Merge6[1] = DefaultSPOT_DW.RED_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Disable PPL (RED)'
    RED_Path_idx_1 = DefaultSPOT_DW.RED_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S101>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S109>/Data Store Read'
    //   DataStoreWrite: '<S2>/Data Store Write9'

    ARM_Path[2] = DefaultSPOT_DW.ARM_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S102>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S110>/BLACK_Px'
    //   DataStoreWrite: '<S2>/Data Store Write3'

    BLACK_Path_idx_2 = DefaultSPOT_DW.BLACK_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S103>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S111>/Data Store Read4'
    //   DataStoreWrite: '<S2>/Data Store Write6'

    BLUE_Path_idx_2 = DefaultSPOT_DW.BLUE_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
    //   ActionPort: '<S104>/Action Port'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S112>/RED_Px'
    //   DataStoreRead: '<S116>/RED_Px'
    //   Merge: '<S3>/Merge6'

    RED_Desired_States = DefaultSPOT_DW.RED_Desired_States[2];

    // Outputs for IfAction SubSystem: '<S2>/Disable PPL (RED)' incorporates:
    //   ActionPort: '<S108>/Action Port'

    rtb_Merge6[2] = DefaultSPOT_DW.RED_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Disable PPL (RED)'
    // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

    // If: '<S3>/If1' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read3'

    if (DefaultSPOT_DW.BLACK_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' incorporates:
      //   ActionPort: '<S123>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   DataStoreRead: '<S123>/Data Store Read13'
      //   MATLAB Function: '<S153>/MATLAB Function'
      //   SampleTimeMath: '<S154>/TSamp'
      //
      //  About '<S154>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      DefaultSPOT_MATLABFunction(DefaultSPOT_DW.BLACK_Desired_States[2],
        DefaultSPOT_DW.BLACK_Measured_States[2], &rtb_TSamp_k);
      rtb_TSamp_af = DefaultSPOT_DW.BLACK_Desired_States[0] *
        DefaultSPOT_P.TSamp_WtEt_i;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S154>/Diff' incorporates:
      //   UnitDelay: '<S154>/UD'
      //
      //  Block description for '<S154>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S154>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_eh = rtb_TSamp_af - DefaultSPOT_DW.UD_DSTATE_eh;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   SampleTimeMath: '<S155>/TSamp'
      //
      //  About '<S155>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_o = DefaultSPOT_DW.BLACK_Desired_States[1] *
        DefaultSPOT_P.TSamp_WtEt_hr;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S155>/Diff' incorporates:
      //   UnitDelay: '<S155>/UD'
      //
      //  Block description for '<S155>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S155>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hv = rtb_TSamp_o - DefaultSPOT_DW.UD_DSTATE_hv;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   SampleTimeMath: '<S156>/TSamp'
      //
      //  About '<S156>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_n5 = DefaultSPOT_DW.BLACK_Desired_States[2] *
        DefaultSPOT_P.TSamp_WtEt_ca;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S156>/Diff' incorporates:
      //   UnitDelay: '<S156>/UD'
      //
      //  Block description for '<S156>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S156>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_kv = rtb_TSamp_n5 - DefaultSPOT_DW.UD_DSTATE_kv;

      // Sum: '<S123>/Subtract7' incorporates:
      //   DataStoreRead: '<S123>/Data Store Read13'
      //   UnitDelay: '<S154>/UD'
      //
      //  Block description for '<S154>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_eh = DefaultSPOT_DW.BLACK_Measured_States[3] -
        DefaultSPOT_DW.UD_DSTATE_eh;

      // Sum: '<S123>/Subtract6' incorporates:
      //   DataStoreRead: '<S123>/Data Store Read13'
      //   UnitDelay: '<S155>/UD'
      //
      //  Block description for '<S155>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hv = DefaultSPOT_DW.BLACK_Measured_States[4] -
        DefaultSPOT_DW.UD_DSTATE_hv;

      // Sum: '<S123>/Subtract8' incorporates:
      //   DataStoreRead: '<S123>/Data Store Read13'
      //   UnitDelay: '<S156>/UD'
      //
      //  Block description for '<S156>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_kv = DefaultSPOT_DW.BLACK_Measured_States[5] -
        DefaultSPOT_DW.UD_DSTATE_kv;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   DataStoreRead: '<S123>/Data Store Read13'
      //   Gain: '<S123>/Gain'
      //   Gain: '<S123>/Gain1'
      //   Gain: '<S123>/Gain3'
      //   Gain: '<S123>/Gain4'
      //   Gain: '<S123>/Gain6'
      //   Gain: '<S123>/Gain7'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S123>/Subtract4'
      //   Sum: '<S123>/Subtract5'
      //   Sum: '<S123>/Sum'
      //   Sum: '<S123>/Sum1'
      //   UnitDelay: '<S154>/UD'
      //   UnitDelay: '<S155>/UD'
      //
      //  Block description for '<S154>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S155>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_B.Merge1[0] = ((DefaultSPOT_DW.BLACK_Measured_States[0] -
        DefaultSPOT_DW.BLACK_Desired_States[0]) * DefaultSPOT_P.Kp_xb +
        DefaultSPOT_P.Kd_xb * DefaultSPOT_DW.UD_DSTATE_eh) *
        DefaultSPOT_P.Gain6_Gain_g;
      DefaultSPOT_B.Merge1[1] = ((DefaultSPOT_DW.BLACK_Measured_States[1] -
        DefaultSPOT_DW.BLACK_Desired_States[1]) * DefaultSPOT_P.Kp_yb +
        DefaultSPOT_P.Kd_yb * DefaultSPOT_DW.UD_DSTATE_hv) *
        DefaultSPOT_P.Gain7_Gain_b;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Gain: '<S123>/Gain8' incorporates:
      //   Gain: '<S123>/Gain2'
      //   Gain: '<S123>/Gain5'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S123>/Sum2'
      //   UnitDelay: '<S156>/UD'
      //
      //  Block description for '<S156>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_B.Merge1[2] = (DefaultSPOT_P.Kp_tb * rtb_TSamp_k +
        DefaultSPOT_P.Kd_tb * DefaultSPOT_DW.UD_DSTATE_kv) *
        DefaultSPOT_P.Gain8_Gain_m;

      // Update for UnitDelay: '<S154>/UD'
      //
      //  Block description for '<S154>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_eh = rtb_TSamp_af;

      // Update for UnitDelay: '<S155>/UD'
      //
      //  Block description for '<S155>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hv = rtb_TSamp_o;

      // Update for UnitDelay: '<S156>/UD'
      //
      //  Block description for '<S156>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_kv = rtb_TSamp_n5;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLACK)'
    } else if (DefaultSPOT_DW.BLACK_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' incorporates:
      //   ActionPort: '<S119>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   DataStoreRead: '<S119>/Data Store Read13'
      //   MATLAB Function: '<S130>/MATLAB Function'
      //   Product: '<S119>/Matrix Multiply'
      //   SampleTimeMath: '<S131>/TSamp'
      //
      //  About '<S131>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      DefaultSPOT_MATLABFunction(DefaultSPOT_DW.BLACK_Desired_States[2],
        DefaultSPOT_DW.BLACK_Measured_States[2], &tmp_0[2]);
      rtb_TSamp_k = DefaultSPOT_DW.BLACK_Desired_States[0] *
        DefaultSPOT_P.TSamp_WtEt_nd;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S131>/Diff' incorporates:
      //   UnitDelay: '<S131>/UD'
      //
      //  Block description for '<S131>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S131>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_j = rtb_TSamp_k - DefaultSPOT_DW.UD_DSTATE_j;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   SampleTimeMath: '<S132>/TSamp'
      //
      //  About '<S132>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_af = DefaultSPOT_DW.BLACK_Desired_States[1] *
        DefaultSPOT_P.TSamp_WtEt_co;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S132>/Diff' incorporates:
      //   UnitDelay: '<S132>/UD'
      //
      //  Block description for '<S132>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S132>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_c = rtb_TSamp_af - DefaultSPOT_DW.UD_DSTATE_c;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   SampleTimeMath: '<S133>/TSamp'
      //
      //  About '<S133>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_o = DefaultSPOT_DW.BLACK_Desired_States[2] *
        DefaultSPOT_P.TSamp_WtEt_no;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S133>/Diff' incorporates:
      //   UnitDelay: '<S133>/UD'
      //
      //  Block description for '<S133>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S133>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_d = rtb_TSamp_o - DefaultSPOT_DW.UD_DSTATE_d;

      // Sum: '<S119>/Subtract7' incorporates:
      //   DataStoreRead: '<S119>/Data Store Read13'
      //   UnitDelay: '<S131>/UD'
      //
      //  Block description for '<S131>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_j = DefaultSPOT_DW.BLACK_Measured_States[3] -
        DefaultSPOT_DW.UD_DSTATE_j;

      // Sum: '<S119>/Subtract6' incorporates:
      //   DataStoreRead: '<S119>/Data Store Read13'
      //   UnitDelay: '<S132>/UD'
      //
      //  Block description for '<S132>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_c = DefaultSPOT_DW.BLACK_Measured_States[4] -
        DefaultSPOT_DW.UD_DSTATE_c;

      // Sum: '<S119>/Subtract8' incorporates:
      //   DataStoreRead: '<S119>/Data Store Read13'
      //   UnitDelay: '<S133>/UD'
      //
      //  Block description for '<S133>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_d = DefaultSPOT_DW.BLACK_Measured_States[5] -
        DefaultSPOT_DW.UD_DSTATE_d;
      for (i = 0; i < 18; i++) {
        // Product: '<S119>/Matrix Multiply' incorporates:
        //   Constant: '<S119>/Constant2'

        tmp[i] = -DefaultSPOT_P.K_BLACK[i];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S102>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S110>/BLACK_Px'
      //   DataStoreRead: '<S119>/Data Store Read13'
      //   Product: '<S119>/Matrix Multiply'
      //   Reshape: '<S119>/Reshape1'
      //   Sum: '<S119>/Subtract4'
      //   Sum: '<S119>/Subtract5'

      tmp_0[0] = DefaultSPOT_DW.BLACK_Measured_States[0] -
        DefaultSPOT_DW.BLACK_Desired_States[0];
      tmp_0[1] = DefaultSPOT_DW.BLACK_Measured_States[1] -
        DefaultSPOT_DW.BLACK_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Product: '<S119>/Matrix Multiply' incorporates:
      //   Reshape: '<S119>/Reshape3'
      //   UnitDelay: '<S131>/UD'
      //   UnitDelay: '<S132>/UD'
      //   UnitDelay: '<S133>/UD'
      //
      //  Block description for '<S131>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S132>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S133>/UD':
      //
      //   Store in Global RAM

      tmp_0[3] = DefaultSPOT_DW.UD_DSTATE_j;
      tmp_0[4] = DefaultSPOT_DW.UD_DSTATE_c;
      tmp_0[5] = DefaultSPOT_DW.UD_DSTATE_d;
      for (i = 0; i < 3; i++) {
        // Product: '<S119>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge1'

        rtb_TSamp_n5 = 0.0;
        for (idx = 0; idx < 6; idx++) {
          // Merge: '<S3>/Merge1' incorporates:
          //   Product: '<S119>/Matrix Multiply'
          //   Reshape: '<S119>/Reshape4'

          rtb_TSamp_n5 += tmp[3 * idx + i] * tmp_0[idx];
        }

        // Merge: '<S3>/Merge1' incorporates:
        //   Product: '<S119>/Matrix Multiply'

        DefaultSPOT_B.Merge1[i] = rtb_TSamp_n5;
      }

      // Update for UnitDelay: '<S131>/UD'
      //
      //  Block description for '<S131>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_j = rtb_TSamp_k;

      // Update for UnitDelay: '<S132>/UD'
      //
      //  Block description for '<S132>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_c = rtb_TSamp_af;

      // Update for UnitDelay: '<S133>/UD'
      //
      //  Block description for '<S133>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_d = rtb_TSamp_o;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLACK)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLACK)' incorporates:
      //   ActionPort: '<S127>/Action Port'

      DefaultSP_DisableThrustersBLACK(DefaultSPOT_B.Merge1,
        &DefaultSPOT_P.DisableThrustersBLACK);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLACK)'
    }

    // End of If: '<S3>/If1'

    // DataStoreWrite: '<S3>/BLACK Controls'
    rtb_TSamp_k = DefaultSPOT_B.Merge1[0];
    rtb_TSamp_af = DefaultSPOT_B.Merge1[1];
    rtb_TSamp_o = DefaultSPOT_B.Merge1[2];

    // If: '<S3>/If2' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read2'

    if (DefaultSPOT_DW.BLUE_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   DataStoreRead: '<S124>/Data Store Read2'
      //   MATLAB Function: '<S158>/MATLAB Function'
      //   SampleTimeMath: '<S159>/TSamp'
      //
      //  About '<S159>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      DefaultSPOT_MATLABFunction(DefaultSPOT_DW.BLUE_Desired_States[2],
        DefaultSPOT_DW.BLUE_Measured_States[2], &rtb_TSamp_n5);
      rtb_TSamp_d = DefaultSPOT_DW.BLUE_Desired_States[0] *
        DefaultSPOT_P.TSamp_WtEt_p;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S159>/Diff' incorporates:
      //   UnitDelay: '<S159>/UD'
      //
      //  Block description for '<S159>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S159>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_o = rtb_TSamp_d - DefaultSPOT_DW.UD_DSTATE_o;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   SampleTimeMath: '<S160>/TSamp'
      //
      //  About '<S160>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ks = DefaultSPOT_DW.BLUE_Desired_States[1] *
        DefaultSPOT_P.TSamp_WtEt_o;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S160>/Diff' incorporates:
      //   UnitDelay: '<S160>/UD'
      //
      //  Block description for '<S160>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S160>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_n = rtb_TSamp_ks - DefaultSPOT_DW.UD_DSTATE_n;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   SampleTimeMath: '<S161>/TSamp'
      //
      //  About '<S161>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_e = DefaultSPOT_DW.BLUE_Desired_States[2] *
        DefaultSPOT_P.TSamp_WtEt_px;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S161>/Diff' incorporates:
      //   UnitDelay: '<S161>/UD'
      //
      //  Block description for '<S161>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S161>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hu = rtb_TSamp_e - DefaultSPOT_DW.UD_DSTATE_hu;

      // Sum: '<S124>/Subtract7' incorporates:
      //   DataStoreRead: '<S124>/Data Store Read2'
      //   UnitDelay: '<S159>/UD'
      //
      //  Block description for '<S159>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_o = DefaultSPOT_DW.BLUE_Measured_States[3] -
        DefaultSPOT_DW.UD_DSTATE_o;

      // Sum: '<S124>/Subtract6' incorporates:
      //   DataStoreRead: '<S124>/Data Store Read2'
      //   UnitDelay: '<S160>/UD'
      //
      //  Block description for '<S160>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_n = DefaultSPOT_DW.BLUE_Measured_States[4] -
        DefaultSPOT_DW.UD_DSTATE_n;

      // Sum: '<S124>/Subtract8' incorporates:
      //   DataStoreRead: '<S124>/Data Store Read2'
      //   UnitDelay: '<S161>/UD'
      //
      //  Block description for '<S161>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hu = DefaultSPOT_DW.BLUE_Measured_States[5] -
        DefaultSPOT_DW.UD_DSTATE_hu;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   DataStoreRead: '<S124>/Data Store Read2'
      //   Gain: '<S124>/Gain'
      //   Gain: '<S124>/Gain1'
      //   Gain: '<S124>/Gain3'
      //   Gain: '<S124>/Gain4'
      //   Gain: '<S124>/Gain6'
      //   Gain: '<S124>/Gain7'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S124>/Subtract4'
      //   Sum: '<S124>/Subtract5'
      //   Sum: '<S124>/Sum'
      //   Sum: '<S124>/Sum1'
      //   UnitDelay: '<S159>/UD'
      //   UnitDelay: '<S160>/UD'
      //
      //  Block description for '<S159>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S160>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_B.Merge2[0] = ((DefaultSPOT_DW.BLUE_Measured_States[0] -
        DefaultSPOT_DW.BLUE_Desired_States[0]) * DefaultSPOT_P.Kp_xblue +
        DefaultSPOT_P.Kd_xblue * DefaultSPOT_DW.UD_DSTATE_o) *
        DefaultSPOT_P.Gain6_Gain_a;
      DefaultSPOT_B.Merge2[1] = ((DefaultSPOT_DW.BLUE_Measured_States[1] -
        DefaultSPOT_DW.BLUE_Desired_States[1]) * DefaultSPOT_P.Kp_yblue +
        DefaultSPOT_P.Kd_yblue * DefaultSPOT_DW.UD_DSTATE_n) *
        DefaultSPOT_P.Gain7_Gain_e;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Gain: '<S124>/Gain8' incorporates:
      //   Gain: '<S124>/Gain2'
      //   Gain: '<S124>/Gain5'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S124>/Sum2'
      //   UnitDelay: '<S161>/UD'
      //
      //  Block description for '<S161>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_B.Merge2[2] = (DefaultSPOT_P.Kp_tblue * rtb_TSamp_n5 +
        DefaultSPOT_P.Kd_tblue * DefaultSPOT_DW.UD_DSTATE_hu) *
        DefaultSPOT_P.Gain8_Gain_g;

      // Update for UnitDelay: '<S159>/UD'
      //
      //  Block description for '<S159>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_o = rtb_TSamp_d;

      // Update for UnitDelay: '<S160>/UD'
      //
      //  Block description for '<S160>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_n = rtb_TSamp_ks;

      // Update for UnitDelay: '<S161>/UD'
      //
      //  Block description for '<S161>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hu = rtb_TSamp_e;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLUE)'
    } else if (DefaultSPOT_DW.BLUE_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' incorporates:
      //   ActionPort: '<S120>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   DataStoreRead: '<S120>/Data Store Read2'
      //   MATLAB Function: '<S135>/MATLAB Function'
      //   Product: '<S120>/Matrix Multiply'
      //   SampleTimeMath: '<S136>/TSamp'
      //
      //  About '<S136>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      DefaultSPOT_MATLABFunction(DefaultSPOT_DW.BLUE_Desired_States[2],
        DefaultSPOT_DW.BLUE_Measured_States[2], &tmp_1[2]);
      rtb_TSamp_n5 = DefaultSPOT_DW.BLUE_Desired_States[0] *
        DefaultSPOT_P.TSamp_WtEt_ft;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S136>/Diff' incorporates:
      //   UnitDelay: '<S136>/UD'
      //
      //  Block description for '<S136>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S136>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_l = rtb_TSamp_n5 - DefaultSPOT_DW.UD_DSTATE_l;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   SampleTimeMath: '<S137>/TSamp'
      //
      //  About '<S137>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_d = DefaultSPOT_DW.BLUE_Desired_States[1] *
        DefaultSPOT_P.TSamp_WtEt_eh;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S137>/Diff' incorporates:
      //   UnitDelay: '<S137>/UD'
      //
      //  Block description for '<S137>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S137>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_k = rtb_TSamp_d - DefaultSPOT_DW.UD_DSTATE_k;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   SampleTimeMath: '<S138>/TSamp'
      //
      //  About '<S138>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ks = DefaultSPOT_DW.BLUE_Desired_States[2] *
        DefaultSPOT_P.TSamp_WtEt_ii;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S138>/Diff' incorporates:
      //   UnitDelay: '<S138>/UD'
      //
      //  Block description for '<S138>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S138>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_h = rtb_TSamp_ks - DefaultSPOT_DW.UD_DSTATE_h;

      // Sum: '<S120>/Subtract7' incorporates:
      //   DataStoreRead: '<S120>/Data Store Read2'
      //   UnitDelay: '<S136>/UD'
      //
      //  Block description for '<S136>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_l = DefaultSPOT_DW.BLUE_Measured_States[3] -
        DefaultSPOT_DW.UD_DSTATE_l;

      // Sum: '<S120>/Subtract6' incorporates:
      //   DataStoreRead: '<S120>/Data Store Read2'
      //   UnitDelay: '<S137>/UD'
      //
      //  Block description for '<S137>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_k = DefaultSPOT_DW.BLUE_Measured_States[4] -
        DefaultSPOT_DW.UD_DSTATE_k;

      // Sum: '<S120>/Subtract8' incorporates:
      //   DataStoreRead: '<S120>/Data Store Read2'
      //   UnitDelay: '<S138>/UD'
      //
      //  Block description for '<S138>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_h = DefaultSPOT_DW.BLUE_Measured_States[5] -
        DefaultSPOT_DW.UD_DSTATE_h;
      for (i = 0; i < 18; i++) {
        // Product: '<S120>/Matrix Multiply' incorporates:
        //   Constant: '<S120>/Constant2'

        tmp[i] = -DefaultSPOT_P.K_BLUE[i];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S103>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S111>/Data Store Read4'
      //   DataStoreRead: '<S120>/Data Store Read2'
      //   Product: '<S120>/Matrix Multiply'
      //   Reshape: '<S120>/Reshape1'
      //   Sum: '<S120>/Subtract4'
      //   Sum: '<S120>/Subtract5'

      tmp_1[0] = DefaultSPOT_DW.BLUE_Measured_States[0] -
        DefaultSPOT_DW.BLUE_Desired_States[0];
      tmp_1[1] = DefaultSPOT_DW.BLUE_Measured_States[1] -
        DefaultSPOT_DW.BLUE_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Product: '<S120>/Matrix Multiply' incorporates:
      //   Reshape: '<S120>/Reshape2'
      //   UnitDelay: '<S136>/UD'
      //   UnitDelay: '<S137>/UD'
      //   UnitDelay: '<S138>/UD'
      //
      //  Block description for '<S136>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S137>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S138>/UD':
      //
      //   Store in Global RAM

      tmp_1[3] = DefaultSPOT_DW.UD_DSTATE_l;
      tmp_1[4] = DefaultSPOT_DW.UD_DSTATE_k;
      tmp_1[5] = DefaultSPOT_DW.UD_DSTATE_h;
      for (i = 0; i < 3; i++) {
        // Product: '<S120>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge2'

        rtb_TSamp_e = 0.0;
        for (idx = 0; idx < 6; idx++) {
          // Merge: '<S3>/Merge2' incorporates:
          //   Product: '<S120>/Matrix Multiply'
          //   Reshape: '<S120>/Reshape4'

          rtb_TSamp_e += tmp[3 * idx + i] * tmp_1[idx];
        }

        // Merge: '<S3>/Merge2' incorporates:
        //   Product: '<S120>/Matrix Multiply'

        DefaultSPOT_B.Merge2[i] = rtb_TSamp_e;
      }

      // Update for UnitDelay: '<S136>/UD'
      //
      //  Block description for '<S136>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_l = rtb_TSamp_n5;

      // Update for UnitDelay: '<S137>/UD'
      //
      //  Block description for '<S137>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_k = rtb_TSamp_d;

      // Update for UnitDelay: '<S138>/UD'
      //
      //  Block description for '<S138>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_h = rtb_TSamp_ks;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLUE)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLUE)' incorporates:
      //   ActionPort: '<S128>/Action Port'

      DefaultSP_DisableThrustersBLACK(DefaultSPOT_B.Merge2,
        &DefaultSPOT_P.DisableThrustersBLUE);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLUE)'
    }

    // End of If: '<S3>/If2'

    // DataStoreWrite: '<S3>/BLUE Controls'
    rtb_TSamp_n5 = DefaultSPOT_B.Merge2[0];
    rtb_TSamp_d = DefaultSPOT_B.Merge2[1];
    rtb_TSamp_ks = DefaultSPOT_B.Merge2[2];

    // If: '<S3>/If3' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read5'

    if (DefaultSPOT_DW.ARM_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD (ARM)' incorporates:
      //   ActionPort: '<S122>/Action Port'

      // DataStoreWrite: '<S122>/Data Store Write12' incorporates:
      //   Constant: '<S122>/Constant7'

      DefaultSPOT_DW.ARM_Control_Mode = DefaultSPOT_P.Constant7_Value;

      // If: '<S122>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
      //   DataStoreRead: '<S122>/Data Store Read4'

      if (DefaultSPOT_DW.isSim == 1.0) {
        // Outputs for IfAction SubSystem: '<S122>/Simulated Position Controller' incorporates:
        //   ActionPort: '<S146>/Action Port'

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S101>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S109>/Data Store Read'
        //   DataStoreRead: '<S146>/Data Store Read2'
        //   Sum: '<S146>/Subtract3'

        rtb_TSamp_e = DefaultSPOT_DW.ARM_Desired_States[1] -
          DefaultSPOT_DW.ARM_Measured_States[1];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S150>/TSamp'
        //
        //  About '<S150>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp = rtb_TSamp_e * DefaultSPOT_P.TSamp_WtEt_pu;

        // Sum: '<S147>/Sum3' incorporates:
        //   Gain: '<S147>/kd_elarm'
        //   Gain: '<S147>/kp_elarm'
        //   Sum: '<S150>/Diff'
        //   UnitDelay: '<S150>/UD'
        //
        //  Block description for '<S150>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S150>/UD':
        //
        //   Store in Global RAM

        DefaultSPOT_DW.UD_DSTATE = (rtb_TSamp - DefaultSPOT_DW.UD_DSTATE) *
          DefaultSPOT_P.Kd_elarm + DefaultSPOT_P.Kp_elarm * rtb_TSamp_e;

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S101>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S109>/Data Store Read'
        //   DataStoreRead: '<S146>/Data Store Read2'
        //   Sum: '<S146>/Subtract2'

        rtb_TSamp_e = DefaultSPOT_DW.ARM_Desired_States[0] -
          DefaultSPOT_DW.ARM_Measured_States[0];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S151>/TSamp'
        //
        //  About '<S151>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_hx = rtb_TSamp_e * DefaultSPOT_P.TSamp_WtEt_f0;

        // Sum: '<S148>/Sum3' incorporates:
        //   Gain: '<S148>/kd_sharm'
        //   Gain: '<S148>/kp_sharm'
        //   Sum: '<S151>/Diff'
        //   UnitDelay: '<S151>/UD'
        //
        //  Block description for '<S151>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S151>/UD':
        //
        //   Store in Global RAM

        DefaultSPOT_DW.UD_DSTATE_e = (rtb_TSamp_hx - DefaultSPOT_DW.UD_DSTATE_e)
          * DefaultSPOT_P.Kd_sharm + DefaultSPOT_P.Kp_sharm * rtb_TSamp_e;

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S101>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S109>/Data Store Read'
        //   DataStoreRead: '<S146>/Data Store Read2'
        //   Sum: '<S146>/Subtract4'

        rtb_TSamp_e = DefaultSPOT_DW.ARM_Desired_States[2] -
          DefaultSPOT_DW.ARM_Measured_States[2];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S152>/TSamp'
        //
        //  About '<S152>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_h = rtb_TSamp_e * DefaultSPOT_P.TSamp_WtEt_nz;

        // Sum: '<S149>/Sum3' incorporates:
        //   Gain: '<S149>/kd_wrarm'
        //   Gain: '<S149>/kp_wrarm'
        //   Sum: '<S152>/Diff'
        //   UnitDelay: '<S152>/UD'
        //
        //  Block description for '<S152>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S152>/UD':
        //
        //   Store in Global RAM

        DefaultSPOT_DW.UD_DSTATE_a = (rtb_TSamp_h - DefaultSPOT_DW.UD_DSTATE_a) *
          DefaultSPOT_P.Kd_wrarm + DefaultSPOT_P.Kp_wrarm * rtb_TSamp_e;

        // Saturate: '<S146>/Saturation' incorporates:
        //   UnitDelay: '<S151>/UD'
        //
        //  Block description for '<S151>/UD':
        //
        //   Store in Global RAM

        if (DefaultSPOT_DW.UD_DSTATE_e > DefaultSPOT_P.Tz_lim_sharm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge3'

          rtb_Merge6[0] = DefaultSPOT_P.Tz_lim_sharm;
        } else if (DefaultSPOT_DW.UD_DSTATE_e < -DefaultSPOT_P.Tz_lim_sharm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge3'

          rtb_Merge6[0] = -DefaultSPOT_P.Tz_lim_sharm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge3'

          rtb_Merge6[0] = DefaultSPOT_DW.UD_DSTATE_e;
        }

        // End of Saturate: '<S146>/Saturation'

        // Saturate: '<S146>/Saturation1' incorporates:
        //   UnitDelay: '<S150>/UD'
        //
        //  Block description for '<S150>/UD':
        //
        //   Store in Global RAM

        if (DefaultSPOT_DW.UD_DSTATE > DefaultSPOT_P.Tz_lim_elarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge4'

          rtb_Merge6[1] = DefaultSPOT_P.Tz_lim_elarm;
        } else if (DefaultSPOT_DW.UD_DSTATE < -DefaultSPOT_P.Tz_lim_elarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge4'

          rtb_Merge6[1] = -DefaultSPOT_P.Tz_lim_elarm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge4'

          rtb_Merge6[1] = DefaultSPOT_DW.UD_DSTATE;
        }

        // End of Saturate: '<S146>/Saturation1'

        // Saturate: '<S146>/Saturation3' incorporates:
        //   UnitDelay: '<S152>/UD'
        //
        //  Block description for '<S152>/UD':
        //
        //   Store in Global RAM

        if (DefaultSPOT_DW.UD_DSTATE_a > DefaultSPOT_P.Tz_lim_wrarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge5'

          rtb_Merge6[2] = DefaultSPOT_P.Tz_lim_wrarm;
        } else if (DefaultSPOT_DW.UD_DSTATE_a < -DefaultSPOT_P.Tz_lim_wrarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge5'

          rtb_Merge6[2] = -DefaultSPOT_P.Tz_lim_wrarm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S122>/Merge5'

          rtb_Merge6[2] = DefaultSPOT_DW.UD_DSTATE_a;
        }

        // End of Saturate: '<S146>/Saturation3'

        // Update for UnitDelay: '<S150>/UD'
        //
        //  Block description for '<S150>/UD':
        //
        //   Store in Global RAM

        DefaultSPOT_DW.UD_DSTATE = rtb_TSamp;

        // Update for UnitDelay: '<S151>/UD'
        //
        //  Block description for '<S151>/UD':
        //
        //   Store in Global RAM

        DefaultSPOT_DW.UD_DSTATE_e = rtb_TSamp_hx;

        // Update for UnitDelay: '<S152>/UD'
        //
        //  Block description for '<S152>/UD':
        //
        //   Store in Global RAM

        DefaultSPOT_DW.UD_DSTATE_a = rtb_TSamp_h;

        // End of Outputs for SubSystem: '<S122>/Simulated Position Controller'
      } else {
        // Outputs for IfAction SubSystem: '<S122>/Passthrough for Experiment' incorporates:
        //   ActionPort: '<S145>/Action Port'

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S101>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S109>/Data Store Read'
        //   Merge: '<S122>/Merge3'
        //   Merge: '<S122>/Merge4'
        //   Merge: '<S122>/Merge5'
        //   Merge: '<S3>/Merge6'
        //   SignalConversion generated from: '<S145>/q1_desired'
        //   SignalConversion generated from: '<S145>/q2_desired'
        //   SignalConversion generated from: '<S145>/q3_desired'

        rtb_Merge6[0] = DefaultSPOT_DW.ARM_Desired_States[0];
        rtb_Merge6[1] = DefaultSPOT_DW.ARM_Desired_States[1];
        rtb_Merge6[2] = DefaultSPOT_DW.ARM_Desired_States[2];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'
        // End of Outputs for SubSystem: '<S122>/Passthrough for Experiment'
      }

      // End of If: '<S122>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      // End of Outputs for SubSystem: '<S3>/Default PD (ARM)'
    } else if (DefaultSPOT_DW.ARM_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (ARM)' incorporates:
      //   ActionPort: '<S117>/Action Port'

      DefaultSPOT_CustomControlRED(rtb_Merge6, &DefaultSPOT_P.CustomControlARM);

      // End of Outputs for SubSystem: '<S3>/Custom Control (ARM)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Control (ARM)' incorporates:
      //   ActionPort: '<S126>/Action Port'

      // DataStoreWrite: '<S126>/Data Store Write12' incorporates:
      //   Constant: '<S126>/Constant7'

      DefaultSPOT_DW.ARM_Control_Mode = DefaultSPOT_P.Constant7_Value_h;

      // Merge: '<S3>/Merge6' incorporates:
      //   Constant: '<S126>/Zero'
      //   SignalConversion generated from: '<S126>/Out1'

      rtb_Merge6[0] = DefaultSPOT_P.Zero_Value;
      rtb_Merge6[1] = DefaultSPOT_P.Zero_Value;
      rtb_Merge6[2] = DefaultSPOT_P.Zero_Value;

      // End of Outputs for SubSystem: '<S3>/Disable Control (ARM)'
    }

    // End of If: '<S3>/If3'

    // If: '<S3>/If' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read1'

    if (DefaultSPOT_DW.RED_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (RED)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   DataStoreRead: '<S125>/Data Store Read13'
      //   MATLAB Function: '<S163>/MATLAB Function'
      //   SampleTimeMath: '<S164>/TSamp'
      //
      //  About '<S164>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      DefaultSPOT_MATLABFunction(DefaultSPOT_DW.RED_Desired_States[2],
        DefaultSPOT_DW.RED_Measured_States[2], &rtb_TSamp_e);
      rtb_TSamp = DefaultSPOT_DW.RED_Desired_States[0] *
        DefaultSPOT_P.TSamp_WtEt;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Sum: '<S164>/Diff' incorporates:
      //   UnitDelay: '<S164>/UD'
      //
      //  Block description for '<S164>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_eg = rtb_TSamp - DefaultSPOT_DW.UD_DSTATE_eg;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   SampleTimeMath: '<S165>/TSamp'
      //
      //  About '<S165>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_hx = DefaultSPOT_DW.RED_Desired_States[1] *
        DefaultSPOT_P.TSamp_WtEt_f;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Sum: '<S165>/Diff' incorporates:
      //   UnitDelay: '<S165>/UD'
      //
      //  Block description for '<S165>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_cd = rtb_TSamp_hx - DefaultSPOT_DW.UD_DSTATE_cd;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   SampleTimeMath: '<S166>/TSamp'
      //
      //  About '<S166>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_h = DefaultSPOT_DW.RED_Desired_States[2] *
        DefaultSPOT_P.TSamp_WtEt_c;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Sum: '<S166>/Diff' incorporates:
      //   UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S166>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hd = rtb_TSamp_h - DefaultSPOT_DW.UD_DSTATE_hd;

      // Sum: '<S125>/Subtract7' incorporates:
      //   DataStoreRead: '<S125>/Data Store Read13'
      //   UnitDelay: '<S164>/UD'
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_eg = DefaultSPOT_DW.RED_Measured_States[3] -
        DefaultSPOT_DW.UD_DSTATE_eg;

      // Sum: '<S125>/Subtract6' incorporates:
      //   DataStoreRead: '<S125>/Data Store Read13'
      //   UnitDelay: '<S165>/UD'
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_cd = DefaultSPOT_DW.RED_Measured_States[4] -
        DefaultSPOT_DW.UD_DSTATE_cd;

      // Sum: '<S125>/Subtract8' incorporates:
      //   DataStoreRead: '<S125>/Data Store Read13'
      //   UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hd = DefaultSPOT_DW.RED_Measured_States[5] -
        DefaultSPOT_DW.UD_DSTATE_hd;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   DataStoreRead: '<S125>/Data Store Read13'
      //   Gain: '<S125>/Gain'
      //   Gain: '<S125>/Gain1'
      //   Gain: '<S125>/Gain3'
      //   Gain: '<S125>/Gain4'
      //   Gain: '<S125>/Gain6'
      //   Gain: '<S125>/Gain7'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S125>/Subtract4'
      //   Sum: '<S125>/Subtract5'
      //   Sum: '<S125>/Sum'
      //   Sum: '<S125>/Sum1'
      //   UnitDelay: '<S164>/UD'
      //   UnitDelay: '<S165>/UD'
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_B.Merge[0] = ((DefaultSPOT_DW.RED_Measured_States[0] -
        DefaultSPOT_DW.RED_Desired_States[0]) * DefaultSPOT_P.Kp_xr +
        DefaultSPOT_P.Kd_xr * DefaultSPOT_DW.UD_DSTATE_eg) *
        DefaultSPOT_P.Gain6_Gain;
      DefaultSPOT_B.Merge[1] = ((DefaultSPOT_DW.RED_Measured_States[1] -
        DefaultSPOT_DW.RED_Desired_States[1]) * DefaultSPOT_P.Kp_yr +
        DefaultSPOT_P.Kd_yr * DefaultSPOT_DW.UD_DSTATE_cd) *
        DefaultSPOT_P.Gain7_Gain;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Gain: '<S125>/Gain8' incorporates:
      //   Gain: '<S125>/Gain2'
      //   Gain: '<S125>/Gain5'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S125>/Sum2'
      //   UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_B.Merge[2] = (DefaultSPOT_P.Kp_tr * rtb_TSamp_e +
        DefaultSPOT_P.Kd_tr * DefaultSPOT_DW.UD_DSTATE_hd) *
        DefaultSPOT_P.Gain8_Gain;

      // Update for UnitDelay: '<S164>/UD'
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_eg = rtb_TSamp;

      // Update for UnitDelay: '<S165>/UD'
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_cd = rtb_TSamp_hx;

      // Update for UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_hd = rtb_TSamp_h;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (RED)'
    } else if (DefaultSPOT_DW.RED_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (RED)' incorporates:
      //   ActionPort: '<S121>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   DataStoreRead: '<S121>/Data Store Read13'
      //   MATLAB Function: '<S140>/MATLAB Function'
      //   Product: '<S121>/Matrix Multiply'
      //   SampleTimeMath: '<S141>/TSamp'
      //
      //  About '<S141>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      DefaultSPOT_MATLABFunction(DefaultSPOT_DW.RED_Desired_States[2],
        DefaultSPOT_DW.RED_Measured_States[2], &tmp_2[2]);
      rtb_TSamp_e = DefaultSPOT_DW.RED_Desired_States[0] *
        DefaultSPOT_P.TSamp_WtEt_h;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Sum: '<S141>/Diff' incorporates:
      //   UnitDelay: '<S141>/UD'
      //
      //  Block description for '<S141>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S141>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_aq = rtb_TSamp_e - DefaultSPOT_DW.UD_DSTATE_aq;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   SampleTimeMath: '<S142>/TSamp'
      //
      //  About '<S142>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp = DefaultSPOT_DW.RED_Desired_States[1] *
        DefaultSPOT_P.TSamp_WtEt_e;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Sum: '<S142>/Diff' incorporates:
      //   UnitDelay: '<S142>/UD'
      //
      //  Block description for '<S142>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S142>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_p = rtb_TSamp - DefaultSPOT_DW.UD_DSTATE_p;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   SampleTimeMath: '<S143>/TSamp'
      //
      //  About '<S143>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_hx = DefaultSPOT_DW.RED_Desired_States[2] *
        DefaultSPOT_P.TSamp_WtEt_n;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Sum: '<S143>/Diff' incorporates:
      //   UnitDelay: '<S143>/UD'
      //
      //  Block description for '<S143>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S143>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_pr = rtb_TSamp_hx - DefaultSPOT_DW.UD_DSTATE_pr;

      // Sum: '<S121>/Subtract7' incorporates:
      //   DataStoreRead: '<S121>/Data Store Read13'
      //   UnitDelay: '<S141>/UD'
      //
      //  Block description for '<S141>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_aq = DefaultSPOT_DW.RED_Measured_States[3] -
        DefaultSPOT_DW.UD_DSTATE_aq;

      // Sum: '<S121>/Subtract6' incorporates:
      //   DataStoreRead: '<S121>/Data Store Read13'
      //   UnitDelay: '<S142>/UD'
      //
      //  Block description for '<S142>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_p = DefaultSPOT_DW.RED_Measured_States[4] -
        DefaultSPOT_DW.UD_DSTATE_p;

      // Sum: '<S121>/Subtract8' incorporates:
      //   DataStoreRead: '<S121>/Data Store Read13'
      //   UnitDelay: '<S143>/UD'
      //
      //  Block description for '<S143>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_pr = DefaultSPOT_DW.RED_Measured_States[5] -
        DefaultSPOT_DW.UD_DSTATE_pr;
      for (i = 0; i < 18; i++) {
        // Product: '<S121>/Matrix Multiply' incorporates:
        //   Constant: '<S121>/Constant2'

        tmp[i] = -DefaultSPOT_P.K_RED[i];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S104>/Action Port'

      // If: '<S2>/If' incorporates:
      //   DataStoreRead: '<S112>/RED_Px'
      //   DataStoreRead: '<S121>/Data Store Read13'
      //   Product: '<S121>/Matrix Multiply'
      //   Reshape: '<S121>/Reshape2'
      //   Sum: '<S121>/Subtract4'
      //   Sum: '<S121>/Subtract5'

      tmp_2[0] = DefaultSPOT_DW.RED_Measured_States[0] -
        DefaultSPOT_DW.RED_Desired_States[0];
      tmp_2[1] = DefaultSPOT_DW.RED_Measured_States[1] -
        DefaultSPOT_DW.RED_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

      // Product: '<S121>/Matrix Multiply' incorporates:
      //   Reshape: '<S121>/Reshape3'
      //   UnitDelay: '<S141>/UD'
      //   UnitDelay: '<S142>/UD'
      //   UnitDelay: '<S143>/UD'
      //
      //  Block description for '<S141>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S142>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S143>/UD':
      //
      //   Store in Global RAM

      tmp_2[3] = DefaultSPOT_DW.UD_DSTATE_aq;
      tmp_2[4] = DefaultSPOT_DW.UD_DSTATE_p;
      tmp_2[5] = DefaultSPOT_DW.UD_DSTATE_pr;
      for (i = 0; i < 3; i++) {
        // Product: '<S121>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge'

        rtb_TSamp_h = 0.0;
        for (idx = 0; idx < 6; idx++) {
          // Merge: '<S3>/Merge' incorporates:
          //   Product: '<S121>/Matrix Multiply'
          //   Reshape: '<S121>/Reshape4'

          rtb_TSamp_h += tmp[3 * idx + i] * tmp_2[idx];
        }

        // Merge: '<S3>/Merge' incorporates:
        //   Product: '<S121>/Matrix Multiply'

        DefaultSPOT_B.Merge[i] = rtb_TSamp_h;
      }

      // Update for UnitDelay: '<S141>/UD'
      //
      //  Block description for '<S141>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_aq = rtb_TSamp_e;

      // Update for UnitDelay: '<S142>/UD'
      //
      //  Block description for '<S142>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_p = rtb_TSamp;

      // Update for UnitDelay: '<S143>/UD'
      //
      //  Block description for '<S143>/UD':
      //
      //   Store in Global RAM

      DefaultSPOT_DW.UD_DSTATE_pr = rtb_TSamp_hx;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (RED)'
    } else if (DefaultSPOT_DW.RED_Control_Law_Enabler == 3.0) {
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (RED)' incorporates:
      //   ActionPort: '<S118>/Action Port'

      DefaultSPOT_CustomControlRED(DefaultSPOT_B.Merge,
        &DefaultSPOT_P.CustomControlRED);

      // End of Outputs for SubSystem: '<S3>/Custom Control (RED)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (RED)' incorporates:
      //   ActionPort: '<S129>/Action Port'

      DefaultSPOT_CustomControlRED(DefaultSPOT_B.Merge,
        &DefaultSPOT_P.DisableThrustersRED);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (RED)'
    }

    // End of If: '<S3>/If'

    // MATLABSystem: '<S171>/MATLAB System' incorporates:
    //   DataStoreWrite: '<S3>/RED Controls'

    b_u1[1] = DefaultSPOT_B.Merge[0];
    b_u1[2] = DefaultSPOT_B.Merge[1];
    b_u1[3] = DefaultSPOT_B.Merge[2];

    // DataStoreWrite: '<S15>/Data Store Write' incorporates:
    //   Constant: '<S15>/Constant'

    DefaultSPOT_DW.isSim = DefaultSPOT_P.simMode;

    // If: '<S16>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S257>/Constant1'
    //   Constant: '<S257>/Constant2'
    //   DataStoreRead: '<S16>/Data Store Read'
    //   DataStoreRead: '<S16>/Data Store Read1'
    //   Delay: '<S257>/Delay'
    //   RelationalOperator: '<S257>/Relational Operator1'
    //   RelationalOperator: '<S257>/Relational Operator2'

    if ((DefaultSPOT_DW.WhoAmI == 1.0) || (DefaultSPOT_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S16>/Change RED Behavior' incorporates:
      //   ActionPort: '<S230>/Action Port'

      // MATLAB Function: '<S261>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S230>/Data Store Read1'

      DefaultSPO_CreateRotationMatrix(DefaultSPOT_DW.RED_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S256>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S230>/Data Store Read1'

      DefaultS_CreateRotationMatrix_a(DefaultSPOT_DW.RED_Measured_States[2],
        &rtb_ThrustPer_Final_p[0]);

      // Product: '<S256>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_TSamp_e = rtb_ThrustPer_Final_p[0] * DefaultSPOT_B.Merge[0] +
        DefaultSPOT_B.Merge[1] * rtb_ThrustPer_Final_p[2];

      // SignalConversion generated from: '<S258>/Product3' incorporates:
      //   Product: '<S256>/Rotate F_I to F_b'

      rtb_Product1[0] = rtb_TSamp_e;

      // Product: '<S256>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_TSamp = DefaultSPOT_B.Merge[0] * rtb_ThrustPer_Final_p[1] +
        DefaultSPOT_B.Merge[1] * rtb_ThrustPer_Final_p[3];

      // SignalConversion generated from: '<S258>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_Product1[1] = rtb_TSamp;
      rtb_Product1[2] = DefaultSPOT_B.Merge[2];

      // MATLAB Function: '<S258>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3_f[i] = DefaultSPOT_P.F_thrusters_RED[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (i = 0; i < 8; i++) {
        y[i + (i << 3)] = rtb_Product3_f[i];
        b[3 * i] = b_0[i];
        b[3 * i + 1] = c[i];
        b[3 * i + 2] = DefaultSPOT_P.thruster_dist2CG_RED[i] / 1000.0;
      }

      for (i = 0; i < 8; i++) {
        for (idx = 0; idx < 3; idx++) {
          rtb_TSamp_hx = 0.0;
          for (i_0 = 0; i_0 < 8; i_0++) {
            rtb_TSamp_hx += b[3 * i_0 + idx] * y[(i << 3) + i_0];
          }

          rtb_H[idx + 3 * i] = rtb_TSamp_hx;
        }
      }

      // End of MATLAB Function: '<S258>/MATLAB Function'
      DefaultSPOT_Pseudoinverse1(rtb_H, &DefaultSPOT_B.Pseudoinverse1_pn);
      for (i = 0; i < 8; i++) {
        // Product: '<S258>/Product3' incorporates:
        //   MATLABSystem: '<S258>/Pseudoinverse1'
        //   Product: '<S256>/Rotate F_I to F_b'

        rtb_Product3[i] = (DefaultSPOT_B.Pseudoinverse1_pn.Pseudoinverse1[i + 8]
                           * rtb_TSamp +
                           DefaultSPOT_B.Pseudoinverse1_pn.Pseudoinverse1[i] *
                           rtb_TSamp_e) +
          DefaultSPOT_B.Pseudoinverse1_pn.Pseudoinverse1[i + 16] * rtb_Product1
          [2];
      }

      // MATLAB Function: '<S255>/MATLAB Function5' incorporates:
      //   Reshape: '<S255>/Reshape'

      DefaultSPOT_MATLABFunction5(rtb_Product1, rtb_Product3, rtb_H_final,
        DefaultSPOT_B.duty_cycles, DefaultSPOT_P.MATLABFunction5_max_iters_e,
        DefaultSPOT_P.MATLABFunction5_tol_g);

      // MATLAB Function: '<S255>/MATLAB Function8'
      DefaultSPOT_MATLABFunction1(DefaultSPOT_B.duty_cycles,
        rtb_ThrustPer_Final_p);

      // Outputs for Enabled SubSystem: '<S257>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S262>/Enable'

      if (DefaultSPOT_DW.Delay_DSTATE >= 1.0 / DefaultSPOT_P.PWMFreq) {
        // SignalConversion generated from: '<S262>/In1' incorporates:
        //   DataStoreRead: '<S257>/Data Store Read'

        DefaultSPOT_B.In1 = DefaultSPOT_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S257>/Enabled Subsystem'

      // Sum: '<S257>/Subtract' incorporates:
      //   Constant: '<S257>/Constant1'
      //   DataStoreRead: '<S257>/Data Store Read'
      //   Delay: '<S257>/Delay'
      //   RelationalOperator: '<S257>/Relational Operator1'

      DefaultSPOT_DW.Delay_DSTATE = DefaultSPOT_DW.Univ_Time - DefaultSPOT_B.In1;

      // Outputs for Enabled SubSystem: '<S257>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S263>/Enable'

      if (DefaultSPOT_DW.Delay_DSTATE == DefaultSPOT_P.Constant2_Value_e) {
        // SignalConversion generated from: '<S263>/ThrustPer_Final'
        memcpy(&DefaultSPOT_B.ThrustPer_Final[0], &rtb_ThrustPer_Final_p[0],
               sizeof(real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S257>/Enabled Subsystem1'

      // Product: '<S255>/Product1' incorporates:
      //   Constant: '<S257>/Constant2'
      //   Delay: '<S257>/Delay'
      //   RelationalOperator: '<S257>/Relational Operator2'

      for (i = 0; i < 3; i++) {
        rtb_TSamp_e = 0.0;
        for (idx = 0; idx < 8; idx++) {
          rtb_TSamp_e += rtb_H_final[3 * idx + i] *
            DefaultSPOT_B.ThrustPer_Final[idx];
        }

        rtb_Product1[i] = rtb_TSamp_e;
      }

      // End of Product: '<S255>/Product1'

      // DataStoreWrite: '<S230>/Data Store Write1' incorporates:
      //   Product: '<S261>/Rotate F_b to F_I'

      DefaultSPOT_DW.RED_Saturated_Controls[0] = rtb_C_Ib[0] * rtb_Product1[0] +
        rtb_Product1[1] * rtb_C_Ib[2];
      DefaultSPOT_DW.RED_Saturated_Controls[1] = rtb_Product1[0] * rtb_C_Ib[1] +
        rtb_Product1[1] * rtb_C_Ib[3];
      DefaultSPOT_DW.RED_Saturated_Controls[2] = rtb_Product1[2];

      // End of Outputs for SubSystem: '<S16>/Change RED Behavior'
    }

    // End of If: '<S16>/This IF block determines whether or not to run the RED sim//exp ' 

    // DataStoreWrite: '<S16>/Data Store Write'
    memcpy(&rtb_Product3[0], &DefaultSPOT_B.duty_cycles[0], sizeof(real_T) << 3U);

    // If: '<S16>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   Constant: '<S233>/Constant1'
    //   Constant: '<S233>/Constant2'
    //   DataStoreRead: '<S16>/Data Store Read'
    //   DataStoreRead: '<S16>/Data Store Read1'
    //   Delay: '<S233>/Delay'
    //   RelationalOperator: '<S233>/Relational Operator1'
    //   RelationalOperator: '<S233>/Relational Operator2'

    if ((DefaultSPOT_DW.WhoAmI == 2.0) || (DefaultSPOT_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S16>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S228>/Action Port'

      // MATLAB Function: '<S237>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S228>/BLACK States'

      DefaultSPO_CreateRotationMatrix(DefaultSPOT_DW.BLACK_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S232>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S228>/BLACK States'

      DefaultS_CreateRotationMatrix_a(DefaultSPOT_DW.BLACK_Measured_States[2],
        &rtb_H_final_g[0]);

      // Product: '<S232>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_TSamp_e = rtb_H_final_g[0] * DefaultSPOT_B.Merge1[0] +
        DefaultSPOT_B.Merge1[1] * rtb_H_final_g[2];

      // SignalConversion generated from: '<S234>/Product3' incorporates:
      //   Product: '<S232>/Rotate F_I to F_b'

      rtb_Product1[0] = rtb_TSamp_e;

      // Product: '<S232>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_TSamp = DefaultSPOT_B.Merge1[0] * rtb_H_final_g[1] +
        DefaultSPOT_B.Merge1[1] * rtb_H_final_g[3];

      // SignalConversion generated from: '<S234>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_Product1[1] = rtb_TSamp;
      rtb_Product1[2] = DefaultSPOT_B.Merge1[2];

      // MATLAB Function: '<S234>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3_f[i] = DefaultSPOT_P.F_thrusters_BLACK[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (i = 0; i < 8; i++) {
        y[i + (i << 3)] = rtb_Product3_f[i];
        b[3 * i] = b_0[i];
        b[3 * i + 1] = c[i];
        b[3 * i + 2] = DefaultSPOT_P.thruster_dist2CG_BLACK[i] / 1000.0;
      }

      for (i = 0; i < 8; i++) {
        for (idx = 0; idx < 3; idx++) {
          rtb_TSamp_hx = 0.0;
          for (i_0 = 0; i_0 < 8; i_0++) {
            rtb_TSamp_hx += b[3 * i_0 + idx] * y[(i << 3) + i_0];
          }

          rtb_H[idx + 3 * i] = rtb_TSamp_hx;
        }
      }

      // End of MATLAB Function: '<S234>/MATLAB Function'
      DefaultSPOT_Pseudoinverse1(rtb_H, &DefaultSPOT_B.Pseudoinverse1);
      for (i = 0; i < 8; i++) {
        // Product: '<S234>/Product3' incorporates:
        //   MATLABSystem: '<S234>/Pseudoinverse1'
        //   Product: '<S232>/Rotate F_I to F_b'

        rtb_Product3_h[i] = (DefaultSPOT_B.Pseudoinverse1.Pseudoinverse1[i + 8] *
                             rtb_TSamp +
                             DefaultSPOT_B.Pseudoinverse1.Pseudoinverse1[i] *
                             rtb_TSamp_e) +
          DefaultSPOT_B.Pseudoinverse1.Pseudoinverse1[i + 16] * rtb_Product1[2];
      }

      // MATLAB Function: '<S231>/MATLAB Function5' incorporates:
      //   Reshape: '<S231>/Reshape'

      DefaultSPOT_MATLABFunction5(rtb_Product1, rtb_Product3_h, rtb_H_final_g,
        DefaultSPOT_B.duty_cycles_m, DefaultSPOT_P.MATLABFunction5_max_iters,
        DefaultSPOT_P.MATLABFunction5_tol);

      // MATLAB Function: '<S231>/MATLAB Function1'
      DefaultSPOT_MATLABFunction1(DefaultSPOT_B.duty_cycles_m, rtb_Product3_h);

      // Outputs for Enabled SubSystem: '<S233>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S238>/Enable'

      if (DefaultSPOT_DW.Delay_DSTATE_kz >= 1.0 / DefaultSPOT_P.PWMFreq) {
        // SignalConversion generated from: '<S238>/In1' incorporates:
        //   DataStoreRead: '<S233>/Data Store Read'

        DefaultSPOT_B.In1_g2 = DefaultSPOT_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S233>/Enabled Subsystem'

      // Sum: '<S233>/Subtract' incorporates:
      //   Constant: '<S233>/Constant1'
      //   DataStoreRead: '<S233>/Data Store Read'
      //   Delay: '<S233>/Delay'
      //   RelationalOperator: '<S233>/Relational Operator1'

      DefaultSPOT_DW.Delay_DSTATE_kz = DefaultSPOT_DW.Univ_Time -
        DefaultSPOT_B.In1_g2;

      // Outputs for Enabled SubSystem: '<S233>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S239>/Enable'

      if (DefaultSPOT_DW.Delay_DSTATE_kz == DefaultSPOT_P.Constant2_Value_h) {
        // SignalConversion generated from: '<S239>/ThrustPer_Final'
        memcpy(&DefaultSPOT_B.ThrustPer_Final_h5[0], &rtb_Product3_h[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S233>/Enabled Subsystem1'

      // Product: '<S231>/Product1' incorporates:
      //   Constant: '<S233>/Constant2'
      //   Delay: '<S233>/Delay'
      //   RelationalOperator: '<S233>/Relational Operator2'

      for (i = 0; i < 3; i++) {
        rtb_TSamp_e = 0.0;
        for (idx = 0; idx < 8; idx++) {
          rtb_TSamp_e += rtb_H_final_g[3 * idx + i] *
            DefaultSPOT_B.ThrustPer_Final_h5[idx];
        }

        rtb_Product1[i] = rtb_TSamp_e;
      }

      // End of Product: '<S231>/Product1'

      // DataStoreWrite: '<S228>/Data Store Write2' incorporates:
      //   Product: '<S237>/Rotate F_b to F_I'

      DefaultSPOT_DW.BLACK_Saturated_Controls[0] = rtb_C_Ib[0] * rtb_Product1[0]
        + rtb_Product1[1] * rtb_C_Ib[2];
      DefaultSPOT_DW.BLACK_Saturated_Controls[1] = rtb_Product1[0] * rtb_C_Ib[1]
        + rtb_Product1[1] * rtb_C_Ib[3];
      DefaultSPOT_DW.BLACK_Saturated_Controls[2] = rtb_Product1[2];

      // End of Outputs for SubSystem: '<S16>/Change BLACK Behavior'
    }

    // End of If: '<S16>/This IF block determines whether or not to run the BLACK sim//exp' 

    // DataStoreWrite: '<S16>/Data Store Write1'
    memcpy(&rtb_Product3_h[0], &DefaultSPOT_B.duty_cycles_m[0], sizeof(real_T) <<
           3U);

    // If: '<S16>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   Constant: '<S245>/Constant1'
    //   Constant: '<S245>/Constant2'
    //   DataStoreRead: '<S16>/Data Store Read'
    //   DataStoreRead: '<S16>/Data Store Read1'
    //   Delay: '<S245>/Delay'
    //   RelationalOperator: '<S245>/Relational Operator1'
    //   RelationalOperator: '<S245>/Relational Operator2'

    if ((DefaultSPOT_DW.WhoAmI == 3.0) || (DefaultSPOT_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S16>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S229>/Action Port'

      // MATLAB Function: '<S249>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S229>/Data Store Read1'

      DefaultSPO_CreateRotationMatrix(DefaultSPOT_DW.BLUE_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S244>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S229>/Data Store Read1'

      DefaultS_CreateRotationMatrix_a(DefaultSPOT_DW.BLUE_Measured_States[2],
        &rtb_H_final_j[0]);

      // Product: '<S244>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_TSamp_e = rtb_H_final_j[0] * DefaultSPOT_B.Merge2[0] +
        DefaultSPOT_B.Merge2[1] * rtb_H_final_j[2];

      // SignalConversion generated from: '<S246>/Product3' incorporates:
      //   Product: '<S244>/Rotate F_I to F_b'

      rtb_Product1[0] = rtb_TSamp_e;

      // Product: '<S244>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_TSamp = DefaultSPOT_B.Merge2[0] * rtb_H_final_j[1] +
        DefaultSPOT_B.Merge2[1] * rtb_H_final_j[3];

      // SignalConversion generated from: '<S246>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_Product1[1] = rtb_TSamp;
      rtb_Product1[2] = DefaultSPOT_B.Merge2[2];

      // MATLAB Function: '<S246>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3_f[i] = DefaultSPOT_P.F_thrusters_BLUE[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (i = 0; i < 8; i++) {
        y[i + (i << 3)] = rtb_Product3_f[i];
        b[3 * i] = b_0[i];
        b[3 * i + 1] = c[i];
        b[3 * i + 2] = DefaultSPOT_P.thruster_dist2CG_BLUE[i] / 1000.0;
      }

      for (i = 0; i < 8; i++) {
        for (idx = 0; idx < 3; idx++) {
          rtb_TSamp_hx = 0.0;
          for (i_0 = 0; i_0 < 8; i_0++) {
            rtb_TSamp_hx += b[3 * i_0 + idx] * y[(i << 3) + i_0];
          }

          rtb_H[idx + 3 * i] = rtb_TSamp_hx;
        }
      }

      // End of MATLAB Function: '<S246>/MATLAB Function'
      DefaultSPOT_Pseudoinverse1(rtb_H, &DefaultSPOT_B.Pseudoinverse1_p);
      for (i = 0; i < 8; i++) {
        // Product: '<S246>/Product3' incorporates:
        //   MATLABSystem: '<S246>/Pseudoinverse1'
        //   Product: '<S244>/Rotate F_I to F_b'

        rtb_Product3_f[i] = (DefaultSPOT_B.Pseudoinverse1_p.Pseudoinverse1[i + 8]
                             * rtb_TSamp +
                             DefaultSPOT_B.Pseudoinverse1_p.Pseudoinverse1[i] *
                             rtb_TSamp_e) +
          DefaultSPOT_B.Pseudoinverse1_p.Pseudoinverse1[i + 16] * rtb_Product1[2];
      }

      // MATLAB Function: '<S243>/MATLAB Function5' incorporates:
      //   Reshape: '<S243>/Reshape'

      DefaultSPOT_MATLABFunction5(rtb_Product1, rtb_Product3_f, rtb_H_final_j,
        DefaultSPOT_B.duty_cycles_j, DefaultSPOT_P.MATLABFunction5_max_iters_b,
        DefaultSPOT_P.MATLABFunction5_tol_j);

      // MATLAB Function: '<S243>/MATLAB Function1'
      DefaultSPOT_MATLABFunction1(DefaultSPOT_B.duty_cycles_j, rtb_Product3_f);

      // Outputs for Enabled SubSystem: '<S245>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S250>/Enable'

      if (DefaultSPOT_DW.Delay_DSTATE_k >= 1.0 / DefaultSPOT_P.PWMFreq) {
        // SignalConversion generated from: '<S250>/In1' incorporates:
        //   DataStoreRead: '<S245>/Data Store Read'

        DefaultSPOT_B.In1_g = DefaultSPOT_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S245>/Enabled Subsystem'

      // Sum: '<S245>/Subtract' incorporates:
      //   Constant: '<S245>/Constant1'
      //   DataStoreRead: '<S245>/Data Store Read'
      //   Delay: '<S245>/Delay'
      //   RelationalOperator: '<S245>/Relational Operator1'

      DefaultSPOT_DW.Delay_DSTATE_k = DefaultSPOT_DW.Univ_Time -
        DefaultSPOT_B.In1_g;

      // Outputs for Enabled SubSystem: '<S245>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S251>/Enable'

      if (DefaultSPOT_DW.Delay_DSTATE_k == DefaultSPOT_P.Constant2_Value_f) {
        // SignalConversion generated from: '<S251>/ThrustPer_Final'
        memcpy(&DefaultSPOT_B.ThrustPer_Final_h[0], &rtb_Product3_f[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S245>/Enabled Subsystem1'

      // Product: '<S243>/Product1' incorporates:
      //   Constant: '<S245>/Constant2'
      //   Delay: '<S245>/Delay'
      //   RelationalOperator: '<S245>/Relational Operator2'

      for (i = 0; i < 3; i++) {
        rtb_TSamp_e = 0.0;
        for (idx = 0; idx < 8; idx++) {
          rtb_TSamp_e += rtb_H_final_j[3 * idx + i] *
            DefaultSPOT_B.ThrustPer_Final_h[idx];
        }

        rtb_Product1[i] = rtb_TSamp_e;
      }

      // End of Product: '<S243>/Product1'

      // DataStoreWrite: '<S229>/Data Store Write3' incorporates:
      //   Product: '<S249>/Rotate F_b to F_I'

      DefaultSPOT_DW.BLUE_Saturated_Controls[0] = rtb_C_Ib[0] * rtb_Product1[0]
        + rtb_Product1[1] * rtb_C_Ib[2];
      DefaultSPOT_DW.BLUE_Saturated_Controls[1] = rtb_Product1[0] * rtb_C_Ib[1]
        + rtb_Product1[1] * rtb_C_Ib[3];
      DefaultSPOT_DW.BLUE_Saturated_Controls[2] = rtb_Product1[2];

      // End of Outputs for SubSystem: '<S16>/Change BLUE Behavior'
    }

    // End of If: '<S16>/This IF block determines whether or not to run the BLUE sim//exp' 

    // DataStoreWrite: '<S16>/Data Store Write2'
    memcpy(&rtb_Product3_f[0], &DefaultSPOT_B.duty_cycles_j[0], sizeof(real_T) <<
           3U);

    // SignalConversion generated from: '<S16>/UDP Send' incorporates:
    //   Constant: '<S16>/PWM Frequency'
    //   Constant: '<S16>/Safety Number'
    //   Gain: '<S16>/Gain'
    //   Gain: '<S16>/Gain1'
    //   Gain: '<S16>/Gain2'
    //   Gain: '<S16>/Gain3'
    //   Gain: '<S16>/Gain4'
    //   Gain: '<S16>/Gain5'
    //   Gain: '<S16>/Gain6'
    //   Gain: '<S16>/Gain7'
    //   Sum: '<S16>/Sum'
    //   Sum: '<S16>/Sum1'
    //   Sum: '<S16>/Sum2'
    //   Sum: '<S16>/Sum3'
    //   Sum: '<S16>/Sum4'
    //   Sum: '<S16>/Sum5'
    //   Sum: '<S16>/Sum6'
    //   Sum: '<S16>/Sum7'

    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[0] =
      DefaultSPOT_P.SafetyNumber_Value;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[1] = DefaultSPOT_P.PWMFreq;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[2] =
      ((DefaultSPOT_B.duty_cycles[0] + DefaultSPOT_B.duty_cycles_m[0]) +
       DefaultSPOT_B.duty_cycles_j[0]) * DefaultSPOT_P.Gain_Gain;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[3] =
      ((DefaultSPOT_B.duty_cycles[1] + DefaultSPOT_B.duty_cycles_m[1]) +
       DefaultSPOT_B.duty_cycles_j[1]) * DefaultSPOT_P.Gain1_Gain;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[4] =
      ((DefaultSPOT_B.duty_cycles[2] + DefaultSPOT_B.duty_cycles_m[2]) +
       DefaultSPOT_B.duty_cycles_j[2]) * DefaultSPOT_P.Gain2_Gain;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[5] =
      ((DefaultSPOT_B.duty_cycles[3] + DefaultSPOT_B.duty_cycles_m[3]) +
       DefaultSPOT_B.duty_cycles_j[3]) * DefaultSPOT_P.Gain3_Gain;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[6] =
      ((DefaultSPOT_B.duty_cycles[4] + DefaultSPOT_B.duty_cycles_m[4]) +
       DefaultSPOT_B.duty_cycles_j[4]) * DefaultSPOT_P.Gain4_Gain;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[7] =
      ((DefaultSPOT_B.duty_cycles[5] + DefaultSPOT_B.duty_cycles_m[5]) +
       DefaultSPOT_B.duty_cycles_j[5]) * DefaultSPOT_P.Gain5_Gain;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[8] =
      ((DefaultSPOT_B.duty_cycles[6] + DefaultSPOT_B.duty_cycles_m[6]) +
       DefaultSPOT_B.duty_cycles_j[6]) * DefaultSPOT_P.Gain6_Gain_c;
    DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[9] =
      ((DefaultSPOT_B.duty_cycles[7] + DefaultSPOT_B.duty_cycles_m[7]) +
       DefaultSPOT_B.duty_cycles_j[7]) * DefaultSPOT_P.Gain7_Gain_l;

    // If: '<S1>/Separate Phases' incorporates:
    //   Constant: '<S1>/Constant'
    //   Constant: '<S1>/Constant1'
    //   Constant: '<S1>/Constant2'
    //   Constant: '<S1>/Constant3'
    //   Constant: '<S1>/Constant4'
    //   Constant: '<S1>/Constant6'
    //   DataStoreRead: '<S1>/Universal_Time25'
    //   DataStoreWrite: '<S20>/Data Store Write10'
    //   DataStoreWrite: '<S20>/Data Store Write11'
    //   DataStoreWrite: '<S20>/Data Store Write2'
    //   StringConstant: '<S20>/String Constant'
    //   StringConstant: '<S20>/String Constant1'
    //   StringConstant: '<S20>/String Constant2'

    if (DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase0_End) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #0: Synchronization' incorporates:
      //   ActionPort: '<S18>/Action Port'

      DefaultSP_Phase0Synchronization(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_e, &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
        DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
        &DefaultSPOT_DW.BLUE_Control_Law_Enabler, DefaultSPOT_DW.BLUE_Logger,
        &rtb_TSamp_hx, &DefaultSPOT_DW.Float_State,
        &DefaultSPOT_DW.RED_Control_Law_Enabler, DefaultSPOT_DW.RED_Logger,
        &rtb_TSamp_h, &DefaultSPOT_P.Phase0Synchronization);

      // End of Outputs for SubSystem: '<S1>/Phase #0: Synchronization'
    } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase1_End) &&
               (DefaultSPOT_DW.Univ_Time >= DefaultSPOT_P.Phase0_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #1: Start Floating ' incorporates:
      //   ActionPort: '<S19>/Action Port'

      DefaultSP_Phase0Synchronization(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_e, &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
        DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
        &DefaultSPOT_DW.BLUE_Control_Law_Enabler, DefaultSPOT_DW.BLUE_Logger,
        &rtb_TSamp_hx, &DefaultSPOT_DW.Float_State,
        &DefaultSPOT_DW.RED_Control_Law_Enabler, DefaultSPOT_DW.RED_Logger,
        &rtb_TSamp_h, &DefaultSPOT_P.Phase1StartFloating);

      // End of Outputs for SubSystem: '<S1>/Phase #1: Start Floating '
    } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase2_End) &&
               (DefaultSPOT_DW.Univ_Time >= DefaultSPOT_P.Phase1_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #2: Initial Position' incorporates:
      //   ActionPort: '<S20>/Action Port'

      // DataStoreWrite: '<S20>/Data Store Write27' incorporates:
      //   Constant: '<S20>/Constant18'

      DefaultSPOT_DW.ARM_Control_Law_Enabler = DefaultSPOT_P.Constant18_Value;

      // DataStoreWrite: '<S20>/Data Store Write4' incorporates:
      //   Constant: '<S20>/Constant4'

      DefaultSPOT_DW.BLACK_Control_Law_Enabler = DefaultSPOT_P.Constant4_Value;

      // DataStoreWrite: '<S20>/Data Store Write8' incorporates:
      //   Constant: '<S20>/Constant5'

      DefaultSPOT_DW.RED_Control_Law_Enabler = DefaultSPOT_P.Constant5_Value;

      // DataStoreWrite: '<S20>/Data Store Write7' incorporates:
      //   Constant: '<S20>/Constant6'

      DefaultSPOT_DW.Float_State = DefaultSPOT_P.Constant6_Value;

      // DataStoreWrite: '<S20>/Data Store Write16' incorporates:
      //   Constant: '<S20>/Constant8'

      DefaultSPOT_DW.BLUE_Control_Law_Enabler = DefaultSPOT_P.Constant8_Value;
      strncpy(&DefaultSPOT_DW.BLACK_Logger[0],
              &DefaultSPOT_P.StringConstant1_String[0], 255U);
      DefaultSPOT_DW.BLACK_Logger[255] = '\x00';
      strncpy(&DefaultSPOT_DW.BLUE_Logger[0],
              &DefaultSPOT_P.StringConstant2_String[0], 255U);
      DefaultSPOT_DW.BLUE_Logger[255] = '\x00';

      // DataStoreWrite: '<S20>/Data Store Write13' incorporates:
      //   Constant: '<S25>/Constant1'
      //   Constant: '<S25>/Constant2'
      //   Constant: '<S25>/Constant3'
      //   DataStoreWrite: '<S20>/Data Store Write10'
      //   DataStoreWrite: '<S20>/Data Store Write11'
      //   StringConstant: '<S20>/String Constant1'
      //   StringConstant: '<S20>/String Constant2'

      DefaultSPOT_DW.ARM_Desired_States[0] = DefaultSPOT_P.Constant3_Value;
      DefaultSPOT_DW.ARM_Desired_States[1] = DefaultSPOT_P.Constant1_Value;
      DefaultSPOT_DW.ARM_Desired_States[2] = DefaultSPOT_P.Constant2_Value;
      strncpy(&DefaultSPOT_DW.RED_Logger[0],
              &DefaultSPOT_P.StringConstant_String[0], 255U);
      DefaultSPOT_DW.RED_Logger[255] = '\x00';

      // DataStoreWrite: '<S20>/Data Store Write1' incorporates:
      //   Constant: '<S26>/Desired States (BLACK)'
      //   DataStoreWrite: '<S20>/Data Store Write2'
      //   StringConstant: '<S20>/String Constant'

      DefaultSPOT_DW.BLACK_Desired_States[0] = DefaultSPOT_P.init_states_BLACK[0];

      // DataStoreWrite: '<S20>/Data Store Write18' incorporates:
      //   Constant: '<S27>/Desired States (BLUE)'

      DefaultSPOT_DW.BLUE_Desired_States[0] = DefaultSPOT_P.init_states_BLUE[0];

      // DataStoreWrite: '<S20>/Data Store Write9' incorporates:
      //   Constant: '<S28>/Constant2'

      DefaultSPOT_DW.RED_Desired_States[0] = DefaultSPOT_P.init_states_RED[0];

      // DataStoreWrite: '<S20>/Data Store Write1' incorporates:
      //   Constant: '<S26>/Desired States (BLACK)'

      DefaultSPOT_DW.BLACK_Desired_States[1] = DefaultSPOT_P.init_states_BLACK[1];

      // DataStoreWrite: '<S20>/Data Store Write18' incorporates:
      //   Constant: '<S27>/Desired States (BLUE)'

      DefaultSPOT_DW.BLUE_Desired_States[1] = DefaultSPOT_P.init_states_BLUE[1];

      // DataStoreWrite: '<S20>/Data Store Write9' incorporates:
      //   Constant: '<S28>/Constant2'

      DefaultSPOT_DW.RED_Desired_States[1] = DefaultSPOT_P.init_states_RED[1];

      // DataStoreWrite: '<S20>/Data Store Write1' incorporates:
      //   Constant: '<S26>/Desired States (BLACK)'

      DefaultSPOT_DW.BLACK_Desired_States[2] = DefaultSPOT_P.init_states_BLACK[2];

      // DataStoreWrite: '<S20>/Data Store Write18' incorporates:
      //   Constant: '<S27>/Desired States (BLUE)'

      DefaultSPOT_DW.BLUE_Desired_States[2] = DefaultSPOT_P.init_states_BLUE[2];

      // DataStoreWrite: '<S20>/Data Store Write9' incorporates:
      //   Constant: '<S28>/Constant2'

      DefaultSPOT_DW.RED_Desired_States[2] = DefaultSPOT_P.init_states_RED[2];

      // End of Outputs for SubSystem: '<S1>/Phase #2: Initial Position'
    } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase3_End) &&
               (DefaultSPOT_DW.Univ_Time >= DefaultSPOT_P.Phase2_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #3: Experiment' incorporates:
      //   ActionPort: '<S21>/Action Port'

      // If: '<S21>/Experiment Sub-Phases' incorporates:
      //   Constant: '<S21>/Constant1'
      //   Constant: '<S21>/Constant2'
      //   Constant: '<S21>/Constant3'
      //   Constant: '<S21>/Constant4'
      //   DataStoreRead: '<S21>/Universal_Time'

      if (DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase3_SubPhase1_End) {
        // Outputs for IfAction SubSystem: '<S21>/Sub-Phase #1' incorporates:
        //   ActionPort: '<S29>/Action Port'

        DefaultSPOT_SubPhase1(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
                              DefaultSPOT_DW.ARM_Desired_States, &rtb_TSamp_e,
                              &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
                              DefaultSPOT_DW.BLACK_Desired_States,
                              DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
                              &DefaultSPOT_DW.BLUE_Control_Law_Enabler,
                              DefaultSPOT_DW.BLUE_Desired_States,
                              DefaultSPOT_DW.BLUE_Logger, &rtb_TSamp_hx,
                              &DefaultSPOT_DW.Float_State,
                              &DefaultSPOT_DW.RED_Control_Law_Enabler,
                              DefaultSPOT_DW.RED_Desired_States,
                              DefaultSPOT_DW.RED_Logger, &rtb_TSamp_h,
                              &DefaultSPOT_DW.Univ_Time,
                              &DefaultSPOT_P.SubPhase1);

        // End of Outputs for SubSystem: '<S21>/Sub-Phase #1'
      } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase3_SubPhase2_End)
                 && (DefaultSPOT_DW.Univ_Time >=
                     DefaultSPOT_P.Phase3_SubPhase1_End)) {
        // Outputs for IfAction SubSystem: '<S21>/Sub-Phase #2 ' incorporates:
        //   ActionPort: '<S30>/Action Port'

        DefaultSPOT_SubPhase1(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
                              DefaultSPOT_DW.ARM_Desired_States, &rtb_TSamp_e,
                              &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
                              DefaultSPOT_DW.BLACK_Desired_States,
                              DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
                              &DefaultSPOT_DW.BLUE_Control_Law_Enabler,
                              DefaultSPOT_DW.BLUE_Desired_States,
                              DefaultSPOT_DW.BLUE_Logger, &rtb_TSamp_hx,
                              &DefaultSPOT_DW.Float_State,
                              &DefaultSPOT_DW.RED_Control_Law_Enabler,
                              DefaultSPOT_DW.RED_Desired_States,
                              DefaultSPOT_DW.RED_Logger, &rtb_TSamp_h,
                              &DefaultSPOT_DW.Univ_Time,
                              &DefaultSPOT_P.SubPhase2);

        // End of Outputs for SubSystem: '<S21>/Sub-Phase #2 '
      } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase3_SubPhase3_End)
                 && (DefaultSPOT_DW.Univ_Time >=
                     DefaultSPOT_P.Phase3_SubPhase2_End)) {
        // Outputs for IfAction SubSystem: '<S21>/Sub-Phase #3 ' incorporates:
        //   ActionPort: '<S31>/Action Port'

        DefaultSPOT_SubPhase1(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
                              DefaultSPOT_DW.ARM_Desired_States, &rtb_TSamp_e,
                              &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
                              DefaultSPOT_DW.BLACK_Desired_States,
                              DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
                              &DefaultSPOT_DW.BLUE_Control_Law_Enabler,
                              DefaultSPOT_DW.BLUE_Desired_States,
                              DefaultSPOT_DW.BLUE_Logger, &rtb_TSamp_hx,
                              &DefaultSPOT_DW.Float_State,
                              &DefaultSPOT_DW.RED_Control_Law_Enabler,
                              DefaultSPOT_DW.RED_Desired_States,
                              DefaultSPOT_DW.RED_Logger, &rtb_TSamp_h,
                              &DefaultSPOT_DW.Univ_Time,
                              &DefaultSPOT_P.SubPhase3);

        // End of Outputs for SubSystem: '<S21>/Sub-Phase #3 '
      } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase3_SubPhase4_End)
                 && (DefaultSPOT_DW.Univ_Time >=
                     DefaultSPOT_P.Phase3_SubPhase3_End)) {
        // Outputs for IfAction SubSystem: '<S21>/Sub-Phase #4' incorporates:
        //   ActionPort: '<S32>/Action Port'

        DefaultSPOT_SubPhase1(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
                              DefaultSPOT_DW.ARM_Desired_States, &rtb_TSamp_e,
                              &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
                              DefaultSPOT_DW.BLACK_Desired_States,
                              DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
                              &DefaultSPOT_DW.BLUE_Control_Law_Enabler,
                              DefaultSPOT_DW.BLUE_Desired_States,
                              DefaultSPOT_DW.BLUE_Logger, &rtb_TSamp_hx,
                              &DefaultSPOT_DW.Float_State,
                              &DefaultSPOT_DW.RED_Control_Law_Enabler,
                              DefaultSPOT_DW.RED_Desired_States,
                              DefaultSPOT_DW.RED_Logger, &rtb_TSamp_h,
                              &DefaultSPOT_DW.Univ_Time,
                              &DefaultSPOT_P.SubPhase4);

        // End of Outputs for SubSystem: '<S21>/Sub-Phase #4'
      }

      // End of If: '<S21>/Experiment Sub-Phases'
      // End of Outputs for SubSystem: '<S1>/Phase #3: Experiment'
    } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase4_End) &&
               (DefaultSPOT_DW.Univ_Time >= DefaultSPOT_P.Phase3_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #4: Return Home' incorporates:
      //   ActionPort: '<S22>/Action Port'

      DefaultSPOT_Phase4ReturnHome(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
        DefaultSPOT_DW.ARM_Desired_States, &rtb_TSamp_e,
        &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
        DefaultSPOT_DW.BLACK_Desired_States, DefaultSPOT_DW.BLACK_Logger,
        &rtb_TSamp, &DefaultSPOT_DW.BLUE_Control_Law_Enabler,
        DefaultSPOT_DW.BLUE_Desired_States, DefaultSPOT_DW.BLUE_Logger,
        &rtb_TSamp_hx, &DefaultSPOT_DW.Float_State,
        &DefaultSPOT_DW.RED_Control_Law_Enabler,
        DefaultSPOT_DW.RED_Desired_States, DefaultSPOT_DW.RED_Logger,
        &rtb_TSamp_h, &DefaultSPOT_P.Phase4ReturnHome);

      // End of Outputs for SubSystem: '<S1>/Phase #4: Return Home'
    } else if ((DefaultSPOT_DW.Univ_Time < DefaultSPOT_P.Phase5_End) &&
               (DefaultSPOT_DW.Univ_Time >= DefaultSPOT_P.Phase4_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #5: Hold Home' incorporates:
      //   ActionPort: '<S23>/Action Port'

      DefaultSPOT_Phase4ReturnHome(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
        DefaultSPOT_DW.ARM_Desired_States, &rtb_TSamp_e,
        &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
        DefaultSPOT_DW.BLACK_Desired_States, DefaultSPOT_DW.BLACK_Logger,
        &rtb_TSamp, &DefaultSPOT_DW.BLUE_Control_Law_Enabler,
        DefaultSPOT_DW.BLUE_Desired_States, DefaultSPOT_DW.BLUE_Logger,
        &rtb_TSamp_hx, &DefaultSPOT_DW.Float_State,
        &DefaultSPOT_DW.RED_Control_Law_Enabler,
        DefaultSPOT_DW.RED_Desired_States, DefaultSPOT_DW.RED_Logger,
        &rtb_TSamp_h, &DefaultSPOT_P.Phase5HoldHome);

      // End of Outputs for SubSystem: '<S1>/Phase #5: Hold Home'
    } else if (DefaultSPOT_DW.Univ_Time >= DefaultSPOT_P.Phase5_End) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #6: Clean Shutdown' incorporates:
      //   ActionPort: '<S24>/Action Port'

      DefaultSP_Phase0Synchronization(&DefaultSPOT_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_e, &DefaultSPOT_DW.BLACK_Control_Law_Enabler,
        DefaultSPOT_DW.BLACK_Logger, &rtb_TSamp,
        &DefaultSPOT_DW.BLUE_Control_Law_Enabler, DefaultSPOT_DW.BLUE_Logger,
        &rtb_TSamp_hx, &DefaultSPOT_DW.Float_State,
        &DefaultSPOT_DW.RED_Control_Law_Enabler, DefaultSPOT_DW.RED_Logger,
        &rtb_TSamp_h, &DefaultSPOT_P.Phase6CleanShutdown);

      // End of Outputs for SubSystem: '<S1>/Phase #6: Clean Shutdown'
    }

    // End of If: '<S1>/Separate Phases'

    // If: '<S4>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 2.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S168>/Action Port'

      DefaultSPOT_ChangeBLACKBehavior(DefaultSPOT_M,
        &DefaultSPOT_DW.ChangeBLACKBehavior, &DefaultSPOT_P.ChangeBLACKBehavior);

      // End of Outputs for SubSystem: '<S4>/Change BLACK Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S4>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 3.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S169>/Action Port'

      DefaultSPOT_ChangeBLACKBehavior(DefaultSPOT_M,
        &DefaultSPOT_DW.ChangeBLUEBehavior, &DefaultSPOT_P.ChangeBLUEBehavior);

      // End of Outputs for SubSystem: '<S4>/Change BLUE Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 1.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change RED Behavior' incorporates:
      //   ActionPort: '<S170>/Action Port'

      DefaultSPOT_ChangeBLACKBehavior(DefaultSPOT_M,
        &DefaultSPOT_DW.ChangeREDBehavior, &DefaultSPOT_P.ChangeREDBehavior);

      // End of Outputs for SubSystem: '<S4>/Change RED Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' 

    // MATLABSystem: '<S171>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read1'
    //   DataStoreRead: '<S5>/Data Store Read23'
    //   DataStoreRead: '<S5>/Data Store Read25'
    //   DataStoreRead: '<S5>/Data Store Read3'
    //   DataStoreRead: '<S5>/Data Store Read37'
    //   DataStoreRead: '<S5>/Data Store Read4'
    //   DataStoreRead: '<S5>/Data Store Read6'
    //   DataStoreRead: '<S5>/Data Store Read7'
    //   DataStoreRead: '<S5>/Data Store Read8'
    //   DataStoreWrite: '<S3>/Data Store Write9'
    //   SignalConversion generated from: '<S171>/MATLAB System'

    //         %% Define input properties
    //  Call C-function implementing device output
    b_u1[0] = DefaultSPOT_DW.Univ_Time;
    b_u1[4] = DefaultSPOT_DW.RED_Saturated_Controls[0];
    b_u1[5] = DefaultSPOT_DW.RED_Saturated_Controls[1];
    b_u1[6] = DefaultSPOT_DW.RED_Saturated_Controls[2];
    memcpy(&b_u1[7], &DefaultSPOT_DW.RED_Measured_States[0], 9U * sizeof(real_T));
    b_u1[16] = DefaultSPOT_DW.RED_Desired_States[0];
    b_u1[19] = DefaultSPOT_DW.RED_IMU_Measurements[0];
    b_u1[17] = DefaultSPOT_DW.RED_Desired_States[1];
    b_u1[20] = DefaultSPOT_DW.RED_IMU_Measurements[1];
    b_u1[18] = DefaultSPOT_DW.RED_Desired_States[2];
    b_u1[21] = DefaultSPOT_DW.RED_IMU_Measurements[2];
    memcpy(&b_u1[22], &rtb_Product3[0], sizeof(real_T) << 3U);
    b_u1[30] = DefaultSPOT_DW.RED_Control_Law_Enabler;
    b_u1[34] = DefaultSPOT_DW.ARM_Control_Mode;
    b_u1[31] = RED_Path_idx_0;
    b_u1[35] = rtb_Merge6[0];
    b_u1[32] = RED_Path_idx_1;
    b_u1[36] = rtb_Merge6[1];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
    //   ActionPort: '<S104>/Action Port'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S112>/RED_Px'
    //   MATLABSystem: '<S171>/MATLAB System'

    b_u1[33] = RED_Desired_States;

    // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'

    // MATLABSystem: '<S171>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read'
    //   DataStoreRead: '<S5>/Data Store Read10'
    //   DataStoreRead: '<S5>/Data Store Read11'
    //   DataStoreRead: '<S5>/Data Store Read12'
    //   DataStoreRead: '<S5>/Data Store Read13'
    //   DataStoreRead: '<S5>/Data Store Read14'
    //   DataStoreRead: '<S5>/Data Store Read15'
    //   DataStoreRead: '<S5>/Data Store Read16'
    //   DataStoreRead: '<S5>/Data Store Read17'
    //   DataStoreRead: '<S5>/Data Store Read18'
    //   DataStoreRead: '<S5>/Data Store Read19'
    //   DataStoreRead: '<S5>/Data Store Read2'
    //   DataStoreRead: '<S5>/Data Store Read20'
    //   DataStoreRead: '<S5>/Data Store Read22'
    //   DataStoreRead: '<S5>/Data Store Read24'
    //   DataStoreRead: '<S5>/Data Store Read26'
    //   DataStoreRead: '<S5>/Data Store Read27'
    //   DataStoreRead: '<S5>/Data Store Read30'
    //   DataStoreRead: '<S5>/Data Store Read60'
    //   DataStoreRead: '<S5>/Data Store Read83'
    //   DataStoreRead: '<S5>/Data Store Read84'
    //   DataStoreRead: '<S5>/Data Store Read85'
    //   DataStoreRead: '<S5>/Data Store Read86'
    //   DataStoreRead: '<S5>/Data Store Read9'
    //   DataStoreWrite: '<S3>/Data Store Write9'
    //   MATLAB Function: '<S171>/MATLAB Function'
    //   SignalConversion generated from: '<S171>/MATLAB System'

    b_u1[37] = rtb_Merge6[2];
    for (i = 0; i < 6; i++) {
      b_u1[i + 38] = DefaultSPOT_DW.ARM_Measured_States[i];
    }

    b_u1[44] = ARM_Path[0];
    b_u1[47] = DefaultSPOT_DW.ARM_Desired_States[0];
    b_u1[50] = rtb_TSamp_k;
    b_u1[53] = DefaultSPOT_DW.BLACK_Saturated_Controls[0];
    b_u1[45] = ARM_Path[1];
    b_u1[48] = DefaultSPOT_DW.ARM_Desired_States[1];
    b_u1[51] = rtb_TSamp_af;
    b_u1[54] = DefaultSPOT_DW.BLACK_Saturated_Controls[1];
    b_u1[46] = ARM_Path[2];
    b_u1[49] = DefaultSPOT_DW.ARM_Desired_States[2];
    b_u1[52] = rtb_TSamp_o;
    b_u1[55] = DefaultSPOT_DW.BLACK_Saturated_Controls[2];
    memcpy(&b_u1[56], &DefaultSPOT_DW.BLACK_Measured_States[0], 9U * sizeof
           (real_T));
    b_u1[65] = DefaultSPOT_DW.BLACK_Desired_States[0];
    b_u1[68] = DefaultSPOT_DW.BLACK_IMU_Measurements[0];
    b_u1[66] = DefaultSPOT_DW.BLACK_Desired_States[1];
    b_u1[69] = DefaultSPOT_DW.BLACK_IMU_Measurements[1];
    b_u1[67] = DefaultSPOT_DW.BLACK_Desired_States[2];
    b_u1[70] = DefaultSPOT_DW.BLACK_IMU_Measurements[2];
    memcpy(&b_u1[71], &rtb_Product3_h[0], sizeof(real_T) << 3U);
    b_u1[79] = DefaultSPOT_DW.BLACK_Control_Law_Enabler;
    b_u1[80] = BLACK_Path_idx_0;
    b_u1[83] = rtb_TSamp_n5;
    b_u1[86] = DefaultSPOT_DW.BLUE_Saturated_Controls[0];
    b_u1[81] = BLACK_Path_idx_1;
    b_u1[84] = rtb_TSamp_d;
    b_u1[87] = DefaultSPOT_DW.BLUE_Saturated_Controls[1];
    b_u1[82] = BLACK_Path_idx_2;
    b_u1[85] = rtb_TSamp_ks;
    b_u1[88] = DefaultSPOT_DW.BLUE_Saturated_Controls[2];
    memcpy(&b_u1[89], &DefaultSPOT_DW.BLUE_Measured_States[0], 9U * sizeof
           (real_T));
    b_u1[98] = DefaultSPOT_DW.BLUE_Desired_States[0];
    b_u1[101] = DefaultSPOT_DW.BLUE_IMU_Measurements[0];
    b_u1[99] = DefaultSPOT_DW.BLUE_Desired_States[1];
    b_u1[102] = DefaultSPOT_DW.BLUE_IMU_Measurements[1];
    b_u1[100] = DefaultSPOT_DW.BLUE_Desired_States[2];
    b_u1[103] = DefaultSPOT_DW.BLUE_IMU_Measurements[2];
    memcpy(&b_u1[104], &rtb_Product3_f[0], sizeof(real_T) << 3U);
    b_u1[112] = DefaultSPOT_DW.BLUE_Control_Law_Enabler;
    b_u1[116] = DefaultSPOT_DW.Float_State;
    b_u1[117] = DefaultSPOT_DW.WhoAmI;
    b_u1[118] = DefaultSPOT_DW.isSim;
    b_u1[113] = BLUE_Path_idx_0;
    b_u1[119] = DefaultSPOT_DW.VIS_Measured_States[0];
    b_u1[114] = BLUE_Path_idx_1;
    b_u1[120] = DefaultSPOT_DW.VIS_Measured_States[1];
    b_u1[115] = BLUE_Path_idx_2;
    b_u1[121] = DefaultSPOT_DW.VIS_Measured_States[2];
    b_u1[122] = DefaultSPOT_DW.VIS_Confidence;
    appendDataToFile(&b_u1[0], 123.0);

    // If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 2.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S173>/Action Port'

      // StringToASCII: '<S173>/String to ASCII1' incorporates:
      //   DataStoreRead: '<S173>/Data Store Read2'

      strncpy((char_T *)&DefaultSPOT_B.StringtoASCII1[0],
              &DefaultSPOT_DW.BLACK_Logger[0], 31U);

      // Update for S-Function (sdspToNetwork): '<S173>/UDP Send1' incorporates:
      //   StringToASCII: '<S173>/String to ASCII1'
      //
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
      LibUpdate_Network(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U],
                        &DefaultSPOT_B.StringtoASCII1[0U], 31);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S173>/UDP Send1'
      // End of Outputs for SubSystem: '<S6>/Change BLACK Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 3.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S174>/Action Port'

      // StringToASCII: '<S174>/String to ASCII2' incorporates:
      //   DataStoreRead: '<S174>/Data Store Read'

      strncpy((char_T *)&DefaultSPOT_B.StringtoASCII2[0],
              &DefaultSPOT_DW.BLUE_Logger[0], 31U);

      // Update for S-Function (sdspToNetwork): '<S174>/UDP Send2' incorporates:
      //   StringToASCII: '<S174>/String to ASCII2'
      //
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
      LibUpdate_Network(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U],
                        &DefaultSPOT_B.StringtoASCII2[0U], 31);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S174>/UDP Send2'
      // End of Outputs for SubSystem: '<S6>/Change BLUE Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 1.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change RED Behavior' incorporates:
      //   ActionPort: '<S175>/Action Port'

      // StringToASCII: '<S175>/String to ASCII' incorporates:
      //   DataStoreRead: '<S175>/Data Store Read'

      strncpy((char_T *)&DefaultSPOT_B.StringtoASCII[0],
              &DefaultSPOT_DW.RED_Logger[0], 31U);

      // Update for S-Function (sdspToNetwork): '<S175>/UDP Send3' incorporates:
      //   StringToASCII: '<S175>/String to ASCII'
      //
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
      LibUpdate_Network(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U],
                        &DefaultSPOT_B.StringtoASCII[0U], 31);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S175>/UDP Send3'
      // End of Outputs for SubSystem: '<S6>/Change RED Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S7>/This IF block determines whether or not to run the exp code' incorporates:
    //   DataStoreRead: '<S7>/Data Store Read'
    //   If: '<S8>/This IF block determines whether or not to run the exp code'

    if (DefaultSPOT_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S7>/Enable Pucks' incorporates:
      //   ActionPort: '<S176>/Action Port'

      // MATLABSystem: '<S176>/GPIO Write1' incorporates:
      //   DataStoreRead: '<S176>/Data Store Read1'

      if (DefaultSPOT_DW.obj_l.gpioPin != DefaultSPOT_P.GPIOWrite1_gpioPin) {
        DefaultSPOT_DW.obj_l.gpioPin = DefaultSPOT_P.GPIOWrite1_gpioPin;
      }

      if (DefaultSPOT_DW.obj_l.pinDirection !=
          DefaultSPOT_P.GPIOWrite1_pinDirection) {
        DefaultSPOT_DW.obj_l.pinDirection =
          DefaultSPOT_P.GPIOWrite1_pinDirection;
      }

      //         %% Define input properties
      //  Call C-function implementing device output
      // coder.ceval('export_gpio', obj.gpioPin);
      set_pin_direction(DefaultSPOT_DW.obj_l.gpioPin,
                        DefaultSPOT_DW.obj_l.pinDirection);
      change_gpio_value(DefaultSPOT_DW.obj_l.gpioPin, DefaultSPOT_DW.Float_State);

      // End of MATLABSystem: '<S176>/GPIO Write1'
      // End of Outputs for SubSystem: '<S7>/Enable Pucks'

      // Outputs for IfAction SubSystem: '<S8>/Log Gyro//Accel' incorporates:
      //   ActionPort: '<S177>/Action Port'

      // MATLABSystem: '<S177>/Gyroscope//Accelerometer'
      if (DefaultSPOT_DW.obj.SampleTime !=
          DefaultSPOT_P.GyroscopeAccelerometer_SampleTi) {
        DefaultSPOT_DW.obj.SampleTime =
          DefaultSPOT_P.GyroscopeAccelerometer_SampleTi;
      }

      if (DefaultSPOT_DW.obj.TunablePropsChanged) {
        DefaultSPOT_DW.obj.TunablePropsChanged = false;
      }

      obj = DefaultSPOT_DW.obj.SensorObject->Device;
      obj_0 = obj->Device.InterfaceObj;
      slaveAddress = obj->Device.DeviceAddress;
      for (i = 0; i < 6; i++) {
        b_output[i] = 0U;
      }

      b_status = 18U;
      b_status = MW_I2C_MasterWrite(obj_0->MW_I2C_HANDLE, slaveAddress,
        &b_status, 1U, true, false);
      if (b_status == 0) {
        MW_I2C_MasterRead(obj_0->MW_I2C_HANDLE, slaveAddress, &b_output[0], 6U,
                          false, true);
      }

      obj = DefaultSPOT_DW.obj.SensorObject->Device;
      obj_0 = obj->Device.InterfaceObj;
      slaveAddress = obj->Device.DeviceAddress;
      for (i = 0; i < 6; i++) {
        b_output_0[i] = 0U;
      }

      b_status = 12U;
      b_status = MW_I2C_MasterWrite(obj_0->MW_I2C_HANDLE, slaveAddress,
        &b_status, 1U, true, false);
      if (b_status == 0) {
        MW_I2C_MasterRead(obj_0->MW_I2C_HANDLE, slaveAddress, &b_output_0[0], 6U,
                          false, true);
      }

      ARM_Path[0] = static_cast<real_T>(static_cast<int16_T>(static_cast<int16_T>
        (b_output[1] << 8) | b_output[0])) * 6.103515625E-5 * 9.81;
      ARM_Path[1] = static_cast<real_T>(static_cast<int16_T>(static_cast<int16_T>
        (b_output[3] << 8) | b_output[2])) * 6.103515625E-5 * 9.81;
      BLACK_Path_idx_2 = static_cast<real_T>(static_cast<int16_T>
        (static_cast<int16_T>(b_output_0[5] << 8) | b_output_0[4])) *
        6.6512957317073178E-5;

      // End of MATLABSystem: '<S177>/Gyroscope//Accelerometer'

      // MATLAB Function: '<S177>/Parse IMU Data' incorporates:
      //   DataStoreRead: '<S177>/Data Store Read'

      if (DefaultSPOT_DW.WhoAmI == 1.0) {
        // DataStoreWrite: '<S177>/Data Store Write9'
        DefaultSPOT_DW.RED_IMU_Measurements[0] = ARM_Path[0];
        DefaultSPOT_DW.RED_IMU_Measurements[1] = ARM_Path[1];
        DefaultSPOT_DW.RED_IMU_Measurements[2] = BLACK_Path_idx_2;

        // DataStoreWrite: '<S177>/Data Store Write10'
        DefaultSPOT_DW.BLACK_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.BLACK_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.BLACK_IMU_Measurements[2] = 0.0;

        // DataStoreWrite: '<S177>/Data Store Write11'
        DefaultSPOT_DW.BLUE_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.BLUE_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.BLUE_IMU_Measurements[2] = 0.0;
      } else if (DefaultSPOT_DW.WhoAmI == 2.0) {
        // DataStoreWrite: '<S177>/Data Store Write9'
        DefaultSPOT_DW.RED_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.RED_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.RED_IMU_Measurements[2] = 0.0;

        // DataStoreWrite: '<S177>/Data Store Write10'
        DefaultSPOT_DW.BLACK_IMU_Measurements[0] = ARM_Path[0];
        DefaultSPOT_DW.BLACK_IMU_Measurements[1] = ARM_Path[1];
        DefaultSPOT_DW.BLACK_IMU_Measurements[2] = BLACK_Path_idx_2;

        // DataStoreWrite: '<S177>/Data Store Write11'
        DefaultSPOT_DW.BLUE_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.BLUE_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.BLUE_IMU_Measurements[2] = 0.0;
      } else if (DefaultSPOT_DW.WhoAmI == 3.0) {
        // DataStoreWrite: '<S177>/Data Store Write9'
        DefaultSPOT_DW.RED_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.RED_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.RED_IMU_Measurements[2] = 0.0;

        // DataStoreWrite: '<S177>/Data Store Write10'
        DefaultSPOT_DW.BLACK_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.BLACK_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.BLACK_IMU_Measurements[2] = 0.0;

        // DataStoreWrite: '<S177>/Data Store Write11'
        DefaultSPOT_DW.BLUE_IMU_Measurements[0] = ARM_Path[0];
        DefaultSPOT_DW.BLUE_IMU_Measurements[1] = ARM_Path[1];
        DefaultSPOT_DW.BLUE_IMU_Measurements[2] = BLACK_Path_idx_2;
      } else {
        // DataStoreWrite: '<S177>/Data Store Write9'
        DefaultSPOT_DW.RED_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.RED_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.RED_IMU_Measurements[2] = 0.0;

        // DataStoreWrite: '<S177>/Data Store Write10'
        DefaultSPOT_DW.BLACK_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.BLACK_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.BLACK_IMU_Measurements[2] = 0.0;

        // DataStoreWrite: '<S177>/Data Store Write11'
        DefaultSPOT_DW.BLUE_IMU_Measurements[0] = 0.0;
        DefaultSPOT_DW.BLUE_IMU_Measurements[1] = 0.0;
        DefaultSPOT_DW.BLUE_IMU_Measurements[2] = 0.0;
      }

      // End of MATLAB Function: '<S177>/Parse IMU Data'
      // End of Outputs for SubSystem: '<S8>/Log Gyro//Accel'
    }

    // End of If: '<S7>/This IF block determines whether or not to run the exp code' 

    // If: '<S9>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S9>/Data Store Read1'
    //   DataStoreRead: '<S9>/Data Store Read2'

    if ((DefaultSPOT_DW.WhoAmI == 1.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S9>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S179>/Action Port'

      // MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders'
      if (DefaultSPOT_DW.obj_d.SampleTime != DefaultSPOT_P.baseRate) {
        if (((!rtIsInf(DefaultSPOT_P.baseRate)) && (!rtIsNaN
              (DefaultSPOT_P.baseRate))) || rtIsInf(DefaultSPOT_P.baseRate)) {
          sampleTime = DefaultSPOT_P.baseRate;
        }

        DefaultSPOT_DW.obj_d.SampleTime = sampleTime;
      }

      //         %% Define input properties
      //         %% Define output properties
      BLACK_Path_idx_0 = 0.0;
      BLUE_Path_idx_0 = 0.0;
      RED_Path_idx_0 = 0.0;

      // DataStoreWrite: '<S179>/Data Store Write' incorporates:
      //   Delay: '<S179>/Delay'
      //   Delay: '<S179>/Delay1'
      //   Delay: '<S179>/Delay2'
      //   MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders'

      DefaultSPOT_DW.ARM_Measured_States[3] = 0.0;
      DefaultSPOT_DW.ARM_Measured_States[4] = 0.0;
      DefaultSPOT_DW.ARM_Measured_States[5] = 0.0;
      read_dynamixel_position(&BLACK_Path_idx_0, &BLUE_Path_idx_0,
        &RED_Path_idx_0, &DefaultSPOT_DW.ARM_Measured_States[3],
        &DefaultSPOT_DW.ARM_Measured_States[4],
        &DefaultSPOT_DW.ARM_Measured_States[5], DefaultSPOT_DW.Delay_DSTATE_o,
        DefaultSPOT_DW.Delay1_DSTATE_cg, DefaultSPOT_DW.Delay2_DSTATE_h);

      // MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders' incorporates:
      //   Delay: '<S179>/Delay'
      //   Delay: '<S179>/Delay1'
      //   Delay: '<S179>/Delay2'

      DefaultSPOT_DW.Delay_DSTATE_o = BLACK_Path_idx_0;
      DefaultSPOT_DW.Delay1_DSTATE_cg = BLUE_Path_idx_0;
      DefaultSPOT_DW.Delay2_DSTATE_h = RED_Path_idx_0;

      // DataStoreWrite: '<S179>/Data Store Write' incorporates:
      //   Delay: '<S179>/Delay'
      //   Delay: '<S179>/Delay1'
      //   Delay: '<S179>/Delay2'

      DefaultSPOT_DW.ARM_Measured_States[0] = DefaultSPOT_DW.Delay_DSTATE_o;
      DefaultSPOT_DW.ARM_Measured_States[1] = DefaultSPOT_DW.Delay1_DSTATE_cg;
      DefaultSPOT_DW.ARM_Measured_States[2] = DefaultSPOT_DW.Delay2_DSTATE_h;

      // End of Outputs for SubSystem: '<S9>/Change ARM Behavior'
    }

    // End of If: '<S9>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Constant: '<S186>/Constant'
    //   Constant: '<S194>/Constant3'
    //   Constant: '<S204>/Constant3'
    //   Constant: '<S214>/Constant3'
    //   DataStoreRead: '<S10>/Data Store Read2'
    //   Delay: '<S194>/Delay1'
    //   Delay: '<S204>/Delay1'
    //   Delay: '<S214>/Delay1'
    //   RelationalOperator: '<S186>/Relational Operator'
    //   RelationalOperator: '<S194>/Relational Operator'
    //   RelationalOperator: '<S195>/Relational Operator'
    //   RelationalOperator: '<S204>/Relational Operator'
    //   RelationalOperator: '<S205>/Relational Operator'
    //   RelationalOperator: '<S214>/Relational Operator'
    //   RelationalOperator: '<S215>/Relational Operator'
    //   SignalConversion generated from: '<S200>/Enable'
    //   SignalConversion generated from: '<S202>/Enable'
    //   SignalConversion generated from: '<S210>/Enable'
    //   SignalConversion generated from: '<S212>/Enable'
    //   SignalConversion generated from: '<S220>/Enable'
    //   SignalConversion generated from: '<S222>/Enable'
    //   Sum: '<S194>/Subtract2'
    //   Sum: '<S204>/Subtract2'
    //   Sum: '<S214>/Subtract2'

    rtPrevAction = DefaultSPOT_DW.Ifperforminganexperimentgrabthe;
    rtAction = -1;
    if (DefaultSPOT_DW.isSim == 0.0) {
      rtAction = 0;
    } else if (DefaultSPOT_DW.isSim == 1.0) {
      rtAction = 1;
    }

    DefaultSPOT_DW.Ifperforminganexperimentgrabthe = rtAction;
    if (rtPrevAction != rtAction) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&DefaultSPOT_M->solverInfo,
        true);
      if (rtPrevAction == 0) {
        // Disable for Enabled SubSystem: '<S196>/Enabled Subsystem'
        if (DefaultSPOT_DW.EnabledSubsystem_g.EnabledSubsystem_MODE) {
          Defa_EnabledSubsystem_d_Disable(&DefaultSPOT_DW.EnabledSubsystem_g);
        }

        // End of Disable for SubSystem: '<S196>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S195>/Enabled Subsystem'
        if (DefaultSPOT_DW.EnabledSubsystem.EnabledSubsystem_MODE) {
          Defaul_EnabledSubsystem_Disable(&DefaultSPOT_DW.EnabledSubsystem);
        }

        // End of Disable for SubSystem: '<S195>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S206>/Enabled Subsystem'
        if (DefaultSPOT_DW.EnabledSubsystem_d.EnabledSubsystem_MODE) {
          Defa_EnabledSubsystem_d_Disable(&DefaultSPOT_DW.EnabledSubsystem_d);
        }

        // End of Disable for SubSystem: '<S206>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S205>/Enabled Subsystem'
        if (DefaultSPOT_DW.EnabledSubsystem_l.EnabledSubsystem_MODE) {
          Defaul_EnabledSubsystem_Disable(&DefaultSPOT_DW.EnabledSubsystem_l);
        }

        // End of Disable for SubSystem: '<S205>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S216>/Enabled Subsystem'
        if (DefaultSPOT_DW.EnabledSubsystem_l1.EnabledSubsystem_MODE) {
          Defa_EnabledSubsystem_d_Disable(&DefaultSPOT_DW.EnabledSubsystem_l1);
        }

        // End of Disable for SubSystem: '<S216>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S215>/Enabled Subsystem'
        if (DefaultSPOT_DW.EnabledSubsystem_k.EnabledSubsystem_MODE) {
          Defaul_EnabledSubsystem_Disable(&DefaultSPOT_DW.EnabledSubsystem_k);
        }

        // End of Disable for SubSystem: '<S215>/Enabled Subsystem'

        // Disable for If: '<S190>/This IF block determines whether or not to run the BLACK sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&DefaultSPOT_M->solverInfo,
          true);
        DefaultSPOT_DW.ThisIFblockdetermineswhether_ch = -1;

        // Disable for If: '<S190>/This IF block determines whether or not to run the BLUE sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&DefaultSPOT_M->solverInfo,
          true);
        DefaultSPOT_DW.ThisIFblockdetermineswhether_cs = -1;

        // Disable for If: '<S190>/This IF block determines whether or not to run the RED sim//exp ' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&DefaultSPOT_M->solverInfo,
          true);
        DefaultSPOT_DW.ThisIFblockdetermineswhethero_d = -1;
      }
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S181>/Action Port'

      // S-Function (sdspFromNetwork): '<S182>/Receive PhaseSpace Data'
      sErr = GetErrorBuffer(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
      samplesRead = 19;
      LibOutputs_Network(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U],
                         &DefaultSPOT_B.ReceivePhaseSpaceData_o1[0U],
                         &samplesRead);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S182>/Receive PhaseSpace Data'

      // Gain: '<S183>/Convert BLAX from [mm] to [m]'
      DefaultSPOT_B.ConvertBLAXfrommmtom =
        DefaultSPOT_P.ConvertBLAXfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[4];

      // Gain: '<S183>/Convert BLAY from [mm] to [m]'
      BLACK_Path_idx_0 = DefaultSPOT_P.ConvertBLAYfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[5];

      // Trigonometry: '<S197>/Sin'
      RED_Path_idx_0 = sin(DefaultSPOT_B.ReceivePhaseSpaceData_o1[6]);

      // Trigonometry: '<S197>/Cos'
      BLUE_Path_idx_0 = cos(DefaultSPOT_B.ReceivePhaseSpaceData_o1[6]);

      // DataStoreWrite: '<S183>/RED_Px7' incorporates:
      //   Gain: '<S183>/Convert BLACKVX from [mm] to [m]'
      //   Gain: '<S183>/Convert BLACKVY from [mm] to [m]'
      //   Trigonometry: '<S197>/Atan2'

      DefaultSPOT_DW.BLACK_Measured_States[2] = rt_atan2d_snf(RED_Path_idx_0,
        BLUE_Path_idx_0);
      DefaultSPOT_DW.BLACK_Measured_States[3] =
        DefaultSPOT_P.ConvertBLACKVXfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[13];
      DefaultSPOT_DW.BLACK_Measured_States[4] =
        DefaultSPOT_P.ConvertBLACKVYfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[14];

      // Sum: '<S194>/Subtract1' incorporates:
      //   Delay: '<S194>/Delay2'

      BLUE_Path_idx_0 = DefaultSPOT_B.ReceivePhaseSpaceData_o1[0] -
        DefaultSPOT_DW.Delay2_DSTATE;

      // Outputs for Enabled SubSystem: '<S194>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S198>/Enable'

      if (DefaultSPOT_B.ConvertBLAXfrommmtom - DefaultSPOT_DW.Delay1_DSTATE !=
          DefaultSPOT_P.Constant3_Value_e) {
        // SignalConversion generated from: '<S198>/y2-y1'
        DefaultSPOT_B.y2y1_ob = BLUE_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S194>/Enabled Subsystem3'

      // MATLAB Function: '<S194>/MATLAB Function' incorporates:
      //   Constant: '<S194>/Constant'
      //   Constant: '<S194>/Constant3'
      //   Delay: '<S194>/Delay1'
      //   RelationalOperator: '<S194>/Relational Operator'
      //   Sum: '<S194>/Subtract2'

      DefaultSPOT_MATLABFunction_j(DefaultSPOT_B.y2y1_ob, DefaultSPOT_P.dataRate,
        &BLUE_Path_idx_0);

      // Sum: '<S196>/Subtract1' incorporates:
      //   Delay: '<S196>/Delay1'

      ARM_Path[2] = DefaultSPOT_B.ReceivePhaseSpaceData_o1[6] -
        DefaultSPOT_DW.Delay1_DSTATE_g[2];

      // RelationalOperator: '<S196>/Relational Operator' incorporates:
      //   Constant: '<S196>/Constant3'
      //   Delay: '<S196>/Delay1'
      //   Sum: '<S196>/Subtract1'

      RelationalOperator_i[0] = (DefaultSPOT_B.ConvertBLAXfrommmtom -
        DefaultSPOT_DW.Delay1_DSTATE_g[0] != DefaultSPOT_P.Constant3_Value_a);
      RelationalOperator_i[1] = (BLACK_Path_idx_0 -
        DefaultSPOT_DW.Delay1_DSTATE_g[1] != DefaultSPOT_P.Constant3_Value_a);
      RelationalOperator_i[2] = (ARM_Path[2] != DefaultSPOT_P.Constant3_Value_a);

      // Outputs for Enabled SubSystem: '<S196>/Enabled Subsystem'
      DefaultSPOT_EnabledSubsystem_g(RelationalOperator_i,
        DefaultSPOT_B.ConvertBLAXfrommmtom, BLACK_Path_idx_0,
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[6], BLUE_Path_idx_0,
        DefaultSPOT_B.dy_p, &DefaultSPOT_B.EnabledSubsystem_g,
        &DefaultSPOT_DW.EnabledSubsystem_g, &DefaultSPOT_P.EnabledSubsystem_g);

      // End of Outputs for SubSystem: '<S196>/Enabled Subsystem'

      // RelationalOperator: '<S195>/Relational Operator' incorporates:
      //   Constant: '<S195>/Constant3'
      //   Delay: '<S195>/Delay1'
      //   SignalConversion generated from: '<S202>/Enable'
      //   Sum: '<S195>/Subtract1'

      RelationalOperator_i[0] = (DefaultSPOT_B.dy_p[0] -
        DefaultSPOT_DW.Delay1_DSTATE_b[0] != DefaultSPOT_P.Constant3_Value_d);
      RelationalOperator_i[1] = (DefaultSPOT_B.dy_p[1] -
        DefaultSPOT_DW.Delay1_DSTATE_b[1] != DefaultSPOT_P.Constant3_Value_d);
      RelationalOperator_i[2] = (DefaultSPOT_B.dy_p[2] -
        DefaultSPOT_DW.Delay1_DSTATE_b[2] != DefaultSPOT_P.Constant3_Value_d);

      // Outputs for Enabled SubSystem: '<S195>/Enabled Subsystem'
      DefaultSPOT_EnabledSubsystem(RelationalOperator_i, DefaultSPOT_B.dy_p,
        BLUE_Path_idx_0, DefaultSPOT_B.dy_g, &DefaultSPOT_B.EnabledSubsystem,
        &DefaultSPOT_DW.EnabledSubsystem, &DefaultSPOT_P.EnabledSubsystem);

      // End of Outputs for SubSystem: '<S195>/Enabled Subsystem'

      // DataStoreWrite: '<S183>/RED_Px7' incorporates:
      //   RelationalOperator: '<S195>/Relational Operator'
      //   SignalConversion generated from: '<S200>/Enable'

      DefaultSPOT_DW.BLACK_Measured_States[0] =
        DefaultSPOT_B.ConvertBLAXfrommmtom;
      DefaultSPOT_DW.BLACK_Measured_States[1] = BLACK_Path_idx_0;
      DefaultSPOT_DW.BLACK_Measured_States[5] =
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[15];
      DefaultSPOT_DW.BLACK_Measured_States[6] = DefaultSPOT_B.dy_g[0];
      DefaultSPOT_DW.BLACK_Measured_States[7] = DefaultSPOT_B.dy_g[1];
      DefaultSPOT_DW.BLACK_Measured_States[8] = DefaultSPOT_B.dy_g[2];

      // SignalConversion generated from: '<S196>/Delay1' incorporates:
      //   Delay: '<S196>/Delay1'

      DefaultSPOT_DW.Delay1_DSTATE_g[0] = DefaultSPOT_B.ConvertBLAXfrommmtom;
      DefaultSPOT_DW.Delay1_DSTATE_g[1] = BLACK_Path_idx_0;
      DefaultSPOT_DW.Delay1_DSTATE_g[2] =
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[6];

      // Gain: '<S184>/Convert BLUX from [mm] to [m]'
      DefaultSPOT_B.ConvertBLUXfrommmtom =
        DefaultSPOT_P.ConvertBLUXfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[7];

      // Gain: '<S184>/Convert BLUY from [mm] to [m]'
      BLACK_Path_idx_0 = DefaultSPOT_P.ConvertBLUYfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[8];

      // Trigonometry: '<S207>/Sin'
      RED_Path_idx_0 = sin(DefaultSPOT_B.ReceivePhaseSpaceData_o1[9]);

      // Trigonometry: '<S207>/Cos'
      BLUE_Path_idx_0 = cos(DefaultSPOT_B.ReceivePhaseSpaceData_o1[9]);

      // DataStoreWrite: '<S184>/RED_Px7' incorporates:
      //   Gain: '<S184>/Convert BLUEVX from [mm] to [m]'
      //   Gain: '<S184>/Convert BLUEVY from [mm] to [m]'
      //   Trigonometry: '<S207>/Atan2'

      DefaultSPOT_DW.BLUE_Measured_States[2] = rt_atan2d_snf(RED_Path_idx_0,
        BLUE_Path_idx_0);
      DefaultSPOT_DW.BLUE_Measured_States[3] =
        DefaultSPOT_P.ConvertBLUEVXfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[16];
      DefaultSPOT_DW.BLUE_Measured_States[4] =
        DefaultSPOT_P.ConvertBLUEVYfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[17];

      // Sum: '<S204>/Subtract1' incorporates:
      //   Delay: '<S204>/Delay2'

      BLUE_Path_idx_0 = DefaultSPOT_B.ReceivePhaseSpaceData_o1[0] -
        DefaultSPOT_DW.Delay2_DSTATE_l;

      // Outputs for Enabled SubSystem: '<S204>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S208>/Enable'

      if (DefaultSPOT_B.ConvertBLUXfrommmtom - DefaultSPOT_DW.Delay1_DSTATE_l !=
          DefaultSPOT_P.Constant3_Value_o) {
        // SignalConversion generated from: '<S208>/y2-y1'
        DefaultSPOT_B.y2y1_o = BLUE_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S204>/Enabled Subsystem3'

      // MATLAB Function: '<S204>/MATLAB Function' incorporates:
      //   Constant: '<S204>/Constant'
      //   Constant: '<S204>/Constant3'
      //   Delay: '<S204>/Delay1'
      //   RelationalOperator: '<S204>/Relational Operator'
      //   Sum: '<S204>/Subtract2'

      DefaultSPOT_MATLABFunction_j(DefaultSPOT_B.y2y1_o, DefaultSPOT_P.dataRate,
        &BLUE_Path_idx_0);

      // Sum: '<S206>/Subtract1' incorporates:
      //   Delay: '<S206>/Delay1'

      ARM_Path[2] = DefaultSPOT_B.ReceivePhaseSpaceData_o1[9] -
        DefaultSPOT_DW.Delay1_DSTATE_m[2];

      // RelationalOperator: '<S206>/Relational Operator' incorporates:
      //   Constant: '<S206>/Constant3'
      //   Delay: '<S206>/Delay1'
      //   Sum: '<S206>/Subtract1'

      RelationalOperator_i[0] = (DefaultSPOT_B.ConvertBLUXfrommmtom -
        DefaultSPOT_DW.Delay1_DSTATE_m[0] != DefaultSPOT_P.Constant3_Value_c);
      RelationalOperator_i[1] = (BLACK_Path_idx_0 -
        DefaultSPOT_DW.Delay1_DSTATE_m[1] != DefaultSPOT_P.Constant3_Value_c);
      RelationalOperator_i[2] = (ARM_Path[2] != DefaultSPOT_P.Constant3_Value_c);

      // Outputs for Enabled SubSystem: '<S206>/Enabled Subsystem'
      DefaultSPOT_EnabledSubsystem_g(RelationalOperator_i,
        DefaultSPOT_B.ConvertBLUXfrommmtom, BLACK_Path_idx_0,
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[9], BLUE_Path_idx_0,
        DefaultSPOT_B.dy_c, &DefaultSPOT_B.EnabledSubsystem_d,
        &DefaultSPOT_DW.EnabledSubsystem_d, &DefaultSPOT_P.EnabledSubsystem_d);

      // End of Outputs for SubSystem: '<S206>/Enabled Subsystem'

      // RelationalOperator: '<S205>/Relational Operator' incorporates:
      //   Constant: '<S205>/Constant3'
      //   Delay: '<S205>/Delay1'
      //   SignalConversion generated from: '<S212>/Enable'
      //   Sum: '<S205>/Subtract1'

      RelationalOperator_i[0] = (DefaultSPOT_B.dy_c[0] -
        DefaultSPOT_DW.Delay1_DSTATE_lv[0] != DefaultSPOT_P.Constant3_Value_k);
      RelationalOperator_i[1] = (DefaultSPOT_B.dy_c[1] -
        DefaultSPOT_DW.Delay1_DSTATE_lv[1] != DefaultSPOT_P.Constant3_Value_k);
      RelationalOperator_i[2] = (DefaultSPOT_B.dy_c[2] -
        DefaultSPOT_DW.Delay1_DSTATE_lv[2] != DefaultSPOT_P.Constant3_Value_k);

      // Outputs for Enabled SubSystem: '<S205>/Enabled Subsystem'
      DefaultSPOT_EnabledSubsystem(RelationalOperator_i, DefaultSPOT_B.dy_c,
        BLUE_Path_idx_0, DefaultSPOT_B.dy_d, &DefaultSPOT_B.EnabledSubsystem_l,
        &DefaultSPOT_DW.EnabledSubsystem_l, &DefaultSPOT_P.EnabledSubsystem_l);

      // End of Outputs for SubSystem: '<S205>/Enabled Subsystem'

      // DataStoreWrite: '<S184>/RED_Px7' incorporates:
      //   RelationalOperator: '<S205>/Relational Operator'
      //   SignalConversion generated from: '<S210>/Enable'

      DefaultSPOT_DW.BLUE_Measured_States[0] =
        DefaultSPOT_B.ConvertBLUXfrommmtom;
      DefaultSPOT_DW.BLUE_Measured_States[1] = BLACK_Path_idx_0;
      DefaultSPOT_DW.BLUE_Measured_States[5] =
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[18];
      DefaultSPOT_DW.BLUE_Measured_States[6] = DefaultSPOT_B.dy_d[0];
      DefaultSPOT_DW.BLUE_Measured_States[7] = DefaultSPOT_B.dy_d[1];
      DefaultSPOT_DW.BLUE_Measured_States[8] = DefaultSPOT_B.dy_d[2];

      // SignalConversion generated from: '<S206>/Delay1' incorporates:
      //   Delay: '<S206>/Delay1'

      DefaultSPOT_DW.Delay1_DSTATE_m[0] = DefaultSPOT_B.ConvertBLUXfrommmtom;
      DefaultSPOT_DW.Delay1_DSTATE_m[1] = BLACK_Path_idx_0;
      DefaultSPOT_DW.Delay1_DSTATE_m[2] =
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[9];

      // Gain: '<S185>/Convert REDX from [mm] to [m]'
      DefaultSPOT_B.ConvertREDXfrommmtom =
        DefaultSPOT_P.ConvertREDXfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[1];

      // Gain: '<S185>/Convert REDY from [mm] to [m]'
      BLACK_Path_idx_0 = DefaultSPOT_P.ConvertREDYfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[2];

      // Trigonometry: '<S217>/Sin'
      RED_Path_idx_0 = sin(DefaultSPOT_B.ReceivePhaseSpaceData_o1[3]);

      // Trigonometry: '<S217>/Cos'
      BLUE_Path_idx_0 = cos(DefaultSPOT_B.ReceivePhaseSpaceData_o1[3]);

      // DataStoreWrite: '<S185>/RED_Px7' incorporates:
      //   Gain: '<S185>/Convert REDVX from [mm] to [m]'
      //   Gain: '<S185>/Convert REDVY from [mm] to [m]'
      //   Trigonometry: '<S217>/Atan2'

      DefaultSPOT_DW.RED_Measured_States[2] = rt_atan2d_snf(RED_Path_idx_0,
        BLUE_Path_idx_0);
      DefaultSPOT_DW.RED_Measured_States[3] =
        DefaultSPOT_P.ConvertREDVXfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[10];
      DefaultSPOT_DW.RED_Measured_States[4] =
        DefaultSPOT_P.ConvertREDVYfrommmtom_Gain *
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[11];

      // Sum: '<S214>/Subtract1' incorporates:
      //   Delay: '<S214>/Delay2'

      BLUE_Path_idx_0 = DefaultSPOT_B.ReceivePhaseSpaceData_o1[0] -
        DefaultSPOT_DW.Delay2_DSTATE_l0;

      // Outputs for Enabled SubSystem: '<S214>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S218>/Enable'

      if (DefaultSPOT_B.ConvertREDXfrommmtom - DefaultSPOT_DW.Delay1_DSTATE_ld
          != DefaultSPOT_P.Constant3_Value_f) {
        // SignalConversion generated from: '<S218>/y2-y1'
        DefaultSPOT_B.y2y1 = BLUE_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S214>/Enabled Subsystem3'

      // MATLAB Function: '<S214>/MATLAB Function' incorporates:
      //   Constant: '<S214>/Constant'
      //   Constant: '<S214>/Constant3'
      //   Delay: '<S214>/Delay1'
      //   RelationalOperator: '<S214>/Relational Operator'
      //   Sum: '<S214>/Subtract2'

      DefaultSPOT_MATLABFunction_j(DefaultSPOT_B.y2y1, DefaultSPOT_P.dataRate,
        &BLUE_Path_idx_0);

      // Sum: '<S216>/Subtract1' incorporates:
      //   Delay: '<S216>/Delay1'

      ARM_Path[2] = DefaultSPOT_B.ReceivePhaseSpaceData_o1[3] -
        DefaultSPOT_DW.Delay1_DSTATE_c[2];

      // RelationalOperator: '<S216>/Relational Operator' incorporates:
      //   Constant: '<S216>/Constant3'
      //   Delay: '<S216>/Delay1'
      //   Sum: '<S216>/Subtract1'

      RelationalOperator_i[0] = (DefaultSPOT_B.ConvertREDXfrommmtom -
        DefaultSPOT_DW.Delay1_DSTATE_c[0] != DefaultSPOT_P.Constant3_Value_dh);
      RelationalOperator_i[1] = (BLACK_Path_idx_0 -
        DefaultSPOT_DW.Delay1_DSTATE_c[1] != DefaultSPOT_P.Constant3_Value_dh);
      RelationalOperator_i[2] = (ARM_Path[2] != DefaultSPOT_P.Constant3_Value_dh);

      // Outputs for Enabled SubSystem: '<S216>/Enabled Subsystem'
      DefaultSPOT_EnabledSubsystem_g(RelationalOperator_i,
        DefaultSPOT_B.ConvertREDXfrommmtom, BLACK_Path_idx_0,
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[3], BLUE_Path_idx_0,
        DefaultSPOT_B.dy, &DefaultSPOT_B.EnabledSubsystem_l1,
        &DefaultSPOT_DW.EnabledSubsystem_l1, &DefaultSPOT_P.EnabledSubsystem_l1);

      // End of Outputs for SubSystem: '<S216>/Enabled Subsystem'

      // RelationalOperator: '<S215>/Relational Operator' incorporates:
      //   Constant: '<S215>/Constant3'
      //   Delay: '<S215>/Delay1'
      //   SignalConversion generated from: '<S222>/Enable'
      //   Sum: '<S215>/Subtract1'

      RelationalOperator_i[0] = (DefaultSPOT_B.dy[0] -
        DefaultSPOT_DW.Delay1_DSTATE_cq[0] != DefaultSPOT_P.Constant3_Value_dz);
      RelationalOperator_i[1] = (DefaultSPOT_B.dy[1] -
        DefaultSPOT_DW.Delay1_DSTATE_cq[1] != DefaultSPOT_P.Constant3_Value_dz);
      RelationalOperator_i[2] = (DefaultSPOT_B.dy[2] -
        DefaultSPOT_DW.Delay1_DSTATE_cq[2] != DefaultSPOT_P.Constant3_Value_dz);

      // Outputs for Enabled SubSystem: '<S215>/Enabled Subsystem'
      DefaultSPOT_EnabledSubsystem(RelationalOperator_i, DefaultSPOT_B.dy,
        BLUE_Path_idx_0, DefaultSPOT_B.dy_h, &DefaultSPOT_B.EnabledSubsystem_k,
        &DefaultSPOT_DW.EnabledSubsystem_k, &DefaultSPOT_P.EnabledSubsystem_k);

      // End of Outputs for SubSystem: '<S215>/Enabled Subsystem'

      // DataStoreWrite: '<S185>/RED_Px7' incorporates:
      //   RelationalOperator: '<S215>/Relational Operator'
      //   SignalConversion generated from: '<S220>/Enable'

      DefaultSPOT_DW.RED_Measured_States[0] = DefaultSPOT_B.ConvertREDXfrommmtom;
      DefaultSPOT_DW.RED_Measured_States[1] = BLACK_Path_idx_0;
      DefaultSPOT_DW.RED_Measured_States[5] =
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[12];
      DefaultSPOT_DW.RED_Measured_States[6] = DefaultSPOT_B.dy_h[0];
      DefaultSPOT_DW.RED_Measured_States[7] = DefaultSPOT_B.dy_h[1];
      DefaultSPOT_DW.RED_Measured_States[8] = DefaultSPOT_B.dy_h[2];

      // S-Function (sdspFromNetwork): '<S186>/UDP Receive (RED Clock)'
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
      samplesRead_1 = 1;
      LibOutputs_Network(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U],
                         &DefaultSPOT_B.UDPReceiveREDClock_o1, &samplesRead_1);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S186>/UDP Receive (RED Clock)'

      // S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLACK Clock)'
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
      samplesRead_2 = 1;
      LibOutputs_Network(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U],
                         &DefaultSPOT_B.UDPReceiveBLACKClock_o1, &samplesRead_2);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLACK Clock)' 

      // S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLUE Clock)'
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
      samplesRead_3 = 1;
      LibOutputs_Network(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U],
                         &DefaultSPOT_B.UDPReceiveBLUEClock_o1, &samplesRead_3);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLUE Clock)'

      // MATLAB Function: '<S186>/MATLAB Function1'
      ARM_Path[0] = DefaultSPOT_B.UDPReceiveREDClock_o1;
      ARM_Path[1] = DefaultSPOT_B.UDPReceiveBLACKClock_o1;
      ARM_Path[2] = DefaultSPOT_B.UDPReceiveBLUEClock_o1;

      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      for (i = 0; i < 3; i++) {
        // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
        //   ActionPort: '<S181>/Action Port'

        if (ARM_Path[i] == 0.0) {
          ARM_Path[i] = (rtNaN);
        }

        // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      }

      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S181>/Action Port'

      // MATLAB Function: '<S186>/MATLAB Function1'
      if (!rtIsNaN(ARM_Path[0])) {
        idx = 1;
      } else {
        idx = 0;
        i = 2;
        exitg1 = false;
        while ((!exitg1) && (i < 4)) {
          if (!rtIsNaN(ARM_Path[i - 1])) {
            idx = i;
            exitg1 = true;
          } else {
            i++;
          }
        }
      }

      if (idx == 0) {
        RED_Path_idx_0 = ARM_Path[0];
      } else {
        RED_Path_idx_0 = ARM_Path[idx - 1];
        for (i = idx + 1; i < 4; i++) {
          BLUE_Path_idx_0 = ARM_Path[i - 1];
          if (RED_Path_idx_0 > BLUE_Path_idx_0) {
            RED_Path_idx_0 = BLUE_Path_idx_0;
          }
        }
      }

      // MATLAB Function: '<S186>/MATLAB Function'
      i = 0;
      if (DefaultSPOT_P.platformSelection == 1.0) {
        i = (DefaultSPOT_B.UDPReceiveREDClock_o1 != 0.0);
      } else if (DefaultSPOT_P.platformSelection == 2.0) {
        i = (DefaultSPOT_B.UDPReceiveBLACKClock_o1 != 0.0);
      } else if (DefaultSPOT_P.platformSelection == 3.0) {
        i = ((DefaultSPOT_B.UDPReceiveREDClock_o1 != 0.0) &&
             (DefaultSPOT_B.UDPReceiveBLACKClock_o1 != 0.0));
      } else if (DefaultSPOT_P.platformSelection == 4.0) {
        i = ((DefaultSPOT_B.UDPReceiveREDClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLACKClock_o1 != 1.0));
      } else if (DefaultSPOT_P.platformSelection == 5.0) {
        i = (DefaultSPOT_B.UDPReceiveREDClock_o1 != 1.0);
      } else if (DefaultSPOT_P.platformSelection == 6.0) {
        i = (DefaultSPOT_B.UDPReceiveBLUEClock_o1 != 1.0);
      } else if (DefaultSPOT_P.platformSelection == 7.0) {
        i = ((DefaultSPOT_B.UDPReceiveREDClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (DefaultSPOT_P.platformSelection == 8.0) {
        i = ((DefaultSPOT_B.UDPReceiveREDClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLACKClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (DefaultSPOT_P.platformSelection == 9.0) {
        i = ((DefaultSPOT_B.UDPReceiveBLACKClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (DefaultSPOT_P.platformSelection == 10.0) {
        i = ((DefaultSPOT_B.UDPReceiveREDClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (DefaultSPOT_P.platformSelection == 11.0) {
        i = ((DefaultSPOT_B.UDPReceiveREDClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLACKClock_o1 != 1.0) &&
             (DefaultSPOT_B.UDPReceiveBLUEClock_o1 != 1.0));
      }

      // End of MATLAB Function: '<S186>/MATLAB Function'

      // Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem2' incorporates:
      //   EnablePort: '<S187>/Enable'

      if (i == DefaultSPOT_P.Constant_Value) {
        // SignalConversion generated from: '<S187>/In1'
        DefaultSPOT_B.In1_g20 = RED_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S186>/Enabled Subsystem2'

      // DataStoreWrite: '<S185>/Universal_Time' incorporates:
      //   Constant: '<S186>/Constant'
      //   RelationalOperator: '<S186>/Relational Operator'

      DefaultSPOT_DW.Univ_Time = DefaultSPOT_B.In1_g20;

      // SignalConversion generated from: '<S216>/Delay1' incorporates:
      //   Delay: '<S216>/Delay1'

      DefaultSPOT_DW.Delay1_DSTATE_c[0] = DefaultSPOT_B.ConvertREDXfrommmtom;
      DefaultSPOT_DW.Delay1_DSTATE_c[1] = BLACK_Path_idx_0;
      DefaultSPOT_DW.Delay1_DSTATE_c[2] =
        DefaultSPOT_B.ReceivePhaseSpaceData_o1[3];

      // If: '<S190>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   DataStoreRead: '<S190>/Data Store Read'
      //   DataStoreRead: '<S190>/Data Store Read2'

      DefaultSPOT_DW.ThisIFblockdetermineswhether_ch = -1;
      if ((DefaultSPOT_DW.WhoAmI == 2.0) && (DefaultSPOT_DW.isSim == 0.0)) {
        DefaultSPOT_DW.ThisIFblockdetermineswhether_ch = 0;
      }

      // End of If: '<S190>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S190>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   DataStoreRead: '<S190>/Data Store Read'
      //   DataStoreRead: '<S190>/Data Store Read2'

      DefaultSPOT_DW.ThisIFblockdetermineswhether_cs = -1;
      if ((DefaultSPOT_DW.WhoAmI == 3.0) && (DefaultSPOT_DW.isSim == 0.0)) {
        DefaultSPOT_DW.ThisIFblockdetermineswhether_cs = 0;
      }

      // End of If: '<S190>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S190>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   DataStoreRead: '<S190>/Data Store Read'
      //   DataStoreRead: '<S190>/Data Store Read2'

      DefaultSPOT_DW.ThisIFblockdetermineswhethero_d = -1;
      if ((DefaultSPOT_DW.WhoAmI == 1.0) && (DefaultSPOT_DW.isSim == 0.0)) {
        DefaultSPOT_DW.ThisIFblockdetermineswhethero_d = 0;
      }

      // End of If: '<S190>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S10>/Initialize Universal Time (Simulation)' incorporates:
      //   ActionPort: '<S180>/Action Port'

      // Clock: '<S180>/Set Universal Time (If this is a simulation)' incorporates:
      //   DataStoreWrite: '<S180>/Universal_Time'

      DefaultSPOT_DW.Univ_Time = DefaultSPOT_M->Timing.t[0];

      // End of Outputs for SubSystem: '<S10>/Initialize Universal Time (Simulation)' 
      break;
    }

    // End of If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S11>/Data Store Read1'
    //   If: '<S11>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'

    if (DefaultSPOT_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S11>/Subsystem' incorporates:
      //   ActionPort: '<S224>/Action Port'

      // MATLABSystem: '<S224>/WhoAmI' incorporates:
      //   DataStoreWrite: '<S224>/Data Store Write'

      if (DefaultSPOT_DW.obj_dk.SampleTime != DefaultSPOT_P.baseRate) {
        if (((!rtIsInf(DefaultSPOT_P.baseRate)) && (!rtIsNaN
              (DefaultSPOT_P.baseRate))) || rtIsInf(DefaultSPOT_P.baseRate)) {
          sampleTime_0 = DefaultSPOT_P.baseRate;
        }

        DefaultSPOT_DW.obj_dk.SampleTime = sampleTime_0;
      }

      //         %% Define output properties
      //  Call C-function implementing device output
      DefaultSPOT_DW.WhoAmI = WhoAmI();

      // End of MATLABSystem: '<S224>/WhoAmI'
      // End of Outputs for SubSystem: '<S11>/Subsystem'

      // Outputs for IfAction SubSystem: '<S12>/Subsystem' incorporates:
      //   ActionPort: '<S225>/Action Port'

      // S-Function (sdspFromNetwork): '<S225>/UDP Receive'
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
      samplesRead_0 = 4;
      LibOutputs_Network(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U],
                         &DefaultSPOT_B.UDPReceive_o1[0U], &samplesRead_0);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S225>/UDP Receive'

      // DataStoreWrite: '<S225>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S225>/Cast To Double'
      //   DataTypeConversion: '<S225>/Cast To Double1'
      //   DataTypeConversion: '<S225>/Cast To Double2'

      DefaultSPOT_DW.VIS_Measured_States[0] = DefaultSPOT_B.UDPReceive_o1[0];
      DefaultSPOT_DW.VIS_Measured_States[1] = DefaultSPOT_B.UDPReceive_o1[1];
      DefaultSPOT_DW.VIS_Measured_States[2] = DefaultSPOT_B.UDPReceive_o1[2];

      // DataTypeConversion: '<S225>/Cast To Double3' incorporates:
      //   DataStoreWrite: '<S225>/Data Store Write1'

      DefaultSPOT_DW.VIS_Confidence = DefaultSPOT_B.UDPReceive_o1[3];

      // End of Outputs for SubSystem: '<S12>/Subsystem'
    }

    // End of If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S13>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S13>/Data Store Read'
    //   DataStoreRead: '<S13>/Data Store Read1'

    if ((DefaultSPOT_DW.WhoAmI == 1.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S13>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S226>/Action Port'

      // MATLABSystem: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' incorporates:
      //   DataStoreRead: '<S226>/Arm Control Mode'
      //   DataStoreWrite: '<S3>/Data Store Write9'

      if (DefaultSPOT_DW.obj_n.POSITION_P_GAIN !=
          DefaultSPOT_P.ControlDynamixelActuatorsineith) {
        DefaultSPOT_DW.obj_n.POSITION_P_GAIN =
          DefaultSPOT_P.ControlDynamixelActuatorsineith;
      }

      if (DefaultSPOT_DW.obj_n.POSITION_I_GAIN !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_b) {
        DefaultSPOT_DW.obj_n.POSITION_I_GAIN =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_b;
      }

      if (DefaultSPOT_DW.obj_n.POSITION_D_GAIN !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_h) {
        DefaultSPOT_DW.obj_n.POSITION_D_GAIN =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_h;
      }

      if (DefaultSPOT_DW.obj_n.MAX_POSITION !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_j) {
        DefaultSPOT_DW.obj_n.MAX_POSITION =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_j;
      }

      if (DefaultSPOT_DW.obj_n.MIN_POSITION !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_m) {
        DefaultSPOT_DW.obj_n.MIN_POSITION =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_m;
      }

      if (DefaultSPOT_DW.obj_n.MOVE_TIME !=
          DefaultSPOT_P.ControlDynamixelActuatorsine_hy) {
        DefaultSPOT_DW.obj_n.MOVE_TIME =
          DefaultSPOT_P.ControlDynamixelActuatorsine_hy;
      }

      if (DefaultSPOT_DW.obj_n.CURRENT_LIMIT !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_i) {
        DefaultSPOT_DW.obj_n.CURRENT_LIMIT =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_i;
      }

      if (DefaultSPOT_DW.obj_n.SPEED_P_GAIN !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_g) {
        DefaultSPOT_DW.obj_n.SPEED_P_GAIN =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_g;
      }

      if (DefaultSPOT_DW.obj_n.SPEED_I_GAIN !=
          DefaultSPOT_P.ControlDynamixelActuatorsine_g3) {
        DefaultSPOT_DW.obj_n.SPEED_I_GAIN =
          DefaultSPOT_P.ControlDynamixelActuatorsine_g3;
      }

      if (DefaultSPOT_DW.obj_n.VELOCITY_LIMIT !=
          DefaultSPOT_P.ControlDynamixelActuatorsine_bf) {
        DefaultSPOT_DW.obj_n.VELOCITY_LIMIT =
          DefaultSPOT_P.ControlDynamixelActuatorsine_bf;
      }

      if (DefaultSPOT_DW.obj_n.ACCELERATION_TIME !=
          DefaultSPOT_P.ControlDynamixelActuatorsinei_l) {
        DefaultSPOT_DW.obj_n.ACCELERATION_TIME =
          DefaultSPOT_P.ControlDynamixelActuatorsinei_l;
      }

      if (DefaultSPOT_DW.obj_n.SampleTime != DefaultSPOT_P.baseRate) {
        if (((!rtIsInf(DefaultSPOT_P.baseRate)) && (!rtIsNaN
              (DefaultSPOT_P.baseRate))) || rtIsInf(DefaultSPOT_P.baseRate)) {
          sampleTime_1 = DefaultSPOT_P.baseRate;
        }

        DefaultSPOT_DW.obj_n.SampleTime = sampleTime_1;
      }

      //         %% Define input properties
      //  Call C-function implementing device output
      //  include the dynamicel functions
      //  Run the main controller code. If the switch state is
      //  true then this code will initialize the parameters and
      //  then start the actuator, and THEN run the command. If the
      //  switch state is false, it will not reinitialize the
      //  motor
      dynamixel_controller(DefaultSPOT_DW.ARM_Control_Mode,
                           DefaultSPOT_DW.obj_n.POSITION_P_GAIN,
                           DefaultSPOT_DW.obj_n.POSITION_I_GAIN,
                           DefaultSPOT_DW.obj_n.POSITION_D_GAIN,
                           DefaultSPOT_DW.obj_n.MAX_POSITION,
                           DefaultSPOT_DW.obj_n.MIN_POSITION,
                           DefaultSPOT_DW.obj_n.MOVE_TIME, rtb_Merge6[0],
                           rtb_Merge6[1], rtb_Merge6[2],
                           DefaultSPOT_DW.obj_n.CURRENT_LIMIT, rtb_Merge6[0],
                           rtb_Merge6[1], rtb_Merge6[2],
                           DefaultSPOT_DW.obj_n.SPEED_P_GAIN,
                           DefaultSPOT_DW.obj_n.SPEED_I_GAIN,
                           DefaultSPOT_DW.obj_n.VELOCITY_LIMIT, rtb_Merge6[0],
                           rtb_Merge6[1], rtb_Merge6[2],
                           DefaultSPOT_DW.obj_n.ACCELERATION_TIME);

      // End of MATLABSystem: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
      // End of Outputs for SubSystem: '<S13>/Change ARM Behavior'
    }

    // End of If: '<S13>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S14>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S14>/Data Store Read1'

    if (DefaultSPOT_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S14>/Subsystem' incorporates:
      //   ActionPort: '<S227>/Action Port'

      // SignalConversion generated from: '<S227>/UDP Send' incorporates:
      //   DataStoreRead: '<S227>/BLACK States'
      //   DataStoreRead: '<S227>/BLUE States'
      //   DataStoreRead: '<S227>/RED States'
      //   DataStoreRead: '<S227>/Time'

      DefaultSPOT_B.TmpSignalConversionAtUDPSendI_o[0] =
        DefaultSPOT_DW.Univ_Time;
      for (i = 0; i < 9; i++) {
        DefaultSPOT_B.TmpSignalConversionAtUDPSendI_o[i + 1] =
          DefaultSPOT_DW.RED_Measured_States[i];
        DefaultSPOT_B.TmpSignalConversionAtUDPSendI_o[i + 10] =
          DefaultSPOT_DW.BLACK_Measured_States[i];
        DefaultSPOT_B.TmpSignalConversionAtUDPSendI_o[i + 19] =
          DefaultSPOT_DW.BLUE_Measured_States[i];
      }

      // Update for S-Function (sdspToNetwork): '<S227>/UDP Send' incorporates:
      //   SignalConversion generated from: '<S227>/UDP Send'
      //
      sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
      LibUpdate_Network(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U],
                        &DefaultSPOT_B.TmpSignalConversionAtUDPSendI_o[0U], 28);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S227>/UDP Send'
      // End of Outputs for SubSystem: '<S14>/Subsystem'
    }

    // End of If: '<S14>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S17>/Data Store Read'
    //   DataStoreRead: '<S17>/Data Store Read2'

    DefaultSPOT_DW.ThisIFblockdetermineswhetherorn = -1;
    if ((DefaultSPOT_DW.WhoAmI == 2.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      DefaultSPOT_DW.ThisIFblockdetermineswhetherorn = 0;

      // Outputs for IfAction SubSystem: '<S17>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S267>/Action Port'

      DefaultSP_ChangeBLACKBehavior_i(DefaultSPOT_M,
        &DefaultSPOT_B.ChangeBLACKBehavior_i);

      // End of Outputs for SubSystem: '<S17>/Change BLACK Behavior'
    }

    // End of If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S17>/Data Store Read'
    //   DataStoreRead: '<S17>/Data Store Read2'

    DefaultSPOT_DW.ThisIFblockdetermineswhethero_b = -1;
    if ((DefaultSPOT_DW.WhoAmI == 3.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      DefaultSPOT_DW.ThisIFblockdetermineswhethero_b = 0;

      // Outputs for IfAction SubSystem: '<S17>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S268>/Action Port'

      DefaultSP_ChangeBLACKBehavior_i(DefaultSPOT_M,
        &DefaultSPOT_B.ChangeBLUEBehavior_e);

      // End of Outputs for SubSystem: '<S17>/Change BLUE Behavior'
    }

    // End of If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S17>/Data Store Read'
    //   DataStoreRead: '<S17>/Data Store Read2'

    DefaultSPOT_DW.ThisIFblockdetermineswhethero_c = -1;
    if ((DefaultSPOT_DW.WhoAmI == 1.0) && (DefaultSPOT_DW.isSim == 0.0)) {
      DefaultSPOT_DW.ThisIFblockdetermineswhethero_c = 0;

      // Outputs for IfAction SubSystem: '<S17>/Change RED Behavior' incorporates:
      //   ActionPort: '<S269>/Action Port'

      DefaultSP_ChangeBLACKBehavior_i(DefaultSPOT_M,
        &DefaultSPOT_B.ChangeREDBehavior_h);

      // End of Outputs for SubSystem: '<S17>/Change RED Behavior'
    }

    // End of If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  {
    char_T *sErr;

    // Update for S-Function (sdspToNetwork): '<S16>/UDP Send' incorporates:
    //   SignalConversion generated from: '<S16>/UDP Send'

    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&DefaultSPOT_DW.UDPSend_NetworkLib[0U],
                      &DefaultSPOT_B.TmpSignalConversionAtUDPSendInp[0U], 10);
    if (*sErr != 0) {
      DefaultSPOT_M->setErrorStatus(sErr);
      DefaultSPOT_M->setStopRequested(1);
    }

    // End of Update for S-Function (sdspToNetwork): '<S16>/UDP Send'

    // Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    if (DefaultSPOT_DW.Ifperforminganexperimentgrabthe == 0) {
      // Update for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S181>/Action Port'

      // Update for Delay: '<S194>/Delay2'
      DefaultSPOT_DW.Delay2_DSTATE = DefaultSPOT_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S194>/Delay1'
      DefaultSPOT_DW.Delay1_DSTATE = DefaultSPOT_B.ConvertBLAXfrommmtom;

      // Update for Enabled SubSystem: '<S196>/Enabled Subsystem'
      Defau_EnabledSubsystem_d_Update(&DefaultSPOT_B.EnabledSubsystem_g,
        &DefaultSPOT_DW.EnabledSubsystem_g);

      // End of Update for SubSystem: '<S196>/Enabled Subsystem'

      // Update for Delay: '<S195>/Delay1'
      DefaultSPOT_DW.Delay1_DSTATE_b[0] = DefaultSPOT_B.dy_p[0];
      DefaultSPOT_DW.Delay1_DSTATE_b[1] = DefaultSPOT_B.dy_p[1];
      DefaultSPOT_DW.Delay1_DSTATE_b[2] = DefaultSPOT_B.dy_p[2];

      // Update for Enabled SubSystem: '<S195>/Enabled Subsystem'
      Default_EnabledSubsystem_Update(&DefaultSPOT_B.EnabledSubsystem,
        &DefaultSPOT_DW.EnabledSubsystem);

      // End of Update for SubSystem: '<S195>/Enabled Subsystem'

      // Update for Delay: '<S204>/Delay2'
      DefaultSPOT_DW.Delay2_DSTATE_l = DefaultSPOT_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S204>/Delay1'
      DefaultSPOT_DW.Delay1_DSTATE_l = DefaultSPOT_B.ConvertBLUXfrommmtom;

      // Update for Enabled SubSystem: '<S206>/Enabled Subsystem'
      Defau_EnabledSubsystem_d_Update(&DefaultSPOT_B.EnabledSubsystem_d,
        &DefaultSPOT_DW.EnabledSubsystem_d);

      // End of Update for SubSystem: '<S206>/Enabled Subsystem'

      // Update for Delay: '<S205>/Delay1'
      DefaultSPOT_DW.Delay1_DSTATE_lv[0] = DefaultSPOT_B.dy_c[0];
      DefaultSPOT_DW.Delay1_DSTATE_lv[1] = DefaultSPOT_B.dy_c[1];
      DefaultSPOT_DW.Delay1_DSTATE_lv[2] = DefaultSPOT_B.dy_c[2];

      // Update for Enabled SubSystem: '<S205>/Enabled Subsystem'
      Default_EnabledSubsystem_Update(&DefaultSPOT_B.EnabledSubsystem_l,
        &DefaultSPOT_DW.EnabledSubsystem_l);

      // End of Update for SubSystem: '<S205>/Enabled Subsystem'

      // Update for Delay: '<S214>/Delay2'
      DefaultSPOT_DW.Delay2_DSTATE_l0 = DefaultSPOT_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S214>/Delay1'
      DefaultSPOT_DW.Delay1_DSTATE_ld = DefaultSPOT_B.ConvertREDXfrommmtom;

      // Update for Enabled SubSystem: '<S216>/Enabled Subsystem'
      Defau_EnabledSubsystem_d_Update(&DefaultSPOT_B.EnabledSubsystem_l1,
        &DefaultSPOT_DW.EnabledSubsystem_l1);

      // End of Update for SubSystem: '<S216>/Enabled Subsystem'

      // Update for Delay: '<S215>/Delay1'
      DefaultSPOT_DW.Delay1_DSTATE_cq[0] = DefaultSPOT_B.dy[0];
      DefaultSPOT_DW.Delay1_DSTATE_cq[1] = DefaultSPOT_B.dy[1];
      DefaultSPOT_DW.Delay1_DSTATE_cq[2] = DefaultSPOT_B.dy[2];

      // Update for Enabled SubSystem: '<S215>/Enabled Subsystem'
      Default_EnabledSubsystem_Update(&DefaultSPOT_B.EnabledSubsystem_k,
        &DefaultSPOT_DW.EnabledSubsystem_k);

      // End of Update for SubSystem: '<S215>/Enabled Subsystem'

      // Update for If: '<S190>/This IF block determines whether or not to run the BLACK sim//exp' 
      if (DefaultSPOT_DW.ThisIFblockdetermineswhether_ch == 0) {
        // Update for IfAction SubSystem: '<S190>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S191>/Action Port'

        De_ChangeBLACKBehavior_e_Update(DefaultSPOT_M, DefaultSPOT_B.In1_g20,
          &DefaultSPOT_DW.ChangeBLACKBehavior_e);

        // End of Update for SubSystem: '<S190>/Change BLACK Behavior'
      }

      // End of Update for If: '<S190>/This IF block determines whether or not to run the BLACK sim//exp' 

      // Update for If: '<S190>/This IF block determines whether or not to run the BLUE sim//exp' 
      if (DefaultSPOT_DW.ThisIFblockdetermineswhether_cs == 0) {
        // Update for IfAction SubSystem: '<S190>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S192>/Action Port'

        De_ChangeBLACKBehavior_e_Update(DefaultSPOT_M, DefaultSPOT_B.In1_g20,
          &DefaultSPOT_DW.ChangeBLUEBehavior_f);

        // End of Update for SubSystem: '<S190>/Change BLUE Behavior'
      }

      // End of Update for If: '<S190>/This IF block determines whether or not to run the BLUE sim//exp' 

      // Update for If: '<S190>/This IF block determines whether or not to run the RED sim//exp ' 
      if (DefaultSPOT_DW.ThisIFblockdetermineswhethero_d == 0) {
        // Update for IfAction SubSystem: '<S190>/Change RED Behavior' incorporates:
        //   ActionPort: '<S193>/Action Port'

        De_ChangeBLACKBehavior_e_Update(DefaultSPOT_M, DefaultSPOT_B.In1_g20,
          &DefaultSPOT_DW.ChangeREDBehavior_d);

        // End of Update for SubSystem: '<S190>/Change RED Behavior'
      }

      // End of Update for If: '<S190>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Update for SubSystem: '<S10>/Use Hardware to Obtain States'
    }

    // End of Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // Update for If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' 
    if (DefaultSPOT_DW.ThisIFblockdetermineswhetherorn == 0) {
      // Update for IfAction SubSystem: '<S17>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S267>/Action Port'

      De_ChangeBLACKBehavior_j_Update(DefaultSPOT_M,
        &DefaultSPOT_B.ChangeBLACKBehavior_i,
        &DefaultSPOT_DW.ChangeBLACKBehavior_i);

      // End of Update for SubSystem: '<S17>/Change BLACK Behavior'
    }

    // End of Update for If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' 

    // Update for If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' 
    if (DefaultSPOT_DW.ThisIFblockdetermineswhethero_b == 0) {
      // Update for IfAction SubSystem: '<S17>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S268>/Action Port'

      De_ChangeBLACKBehavior_j_Update(DefaultSPOT_M,
        &DefaultSPOT_B.ChangeBLUEBehavior_e,
        &DefaultSPOT_DW.ChangeBLUEBehavior_e);

      // End of Update for SubSystem: '<S17>/Change BLUE Behavior'
    }

    // End of Update for If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' 

    // Update for If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' 
    if (DefaultSPOT_DW.ThisIFblockdetermineswhethero_c == 0) {
      // Update for IfAction SubSystem: '<S17>/Change RED Behavior' incorporates:
      //   ActionPort: '<S269>/Action Port'

      De_ChangeBLACKBehavior_j_Update(DefaultSPOT_M,
        &DefaultSPOT_B.ChangeREDBehavior_h, &DefaultSPOT_DW.ChangeREDBehavior_h);

      // End of Update for SubSystem: '<S17>/Change RED Behavior'
    }

    // End of Update for If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  DefaultSPOT_M->Timing.t[0] =
    ((time_T)(++DefaultSPOT_M->Timing.clockTick0)) *
    DefaultSPOT_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    DefaultSPOT_M->Timing.clockTick1++;
  }
}

// Model initialize function
void DefaultSPOT_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&DefaultSPOT_M->solverInfo,
                          &DefaultSPOT_M->Timing.simTimeStep);
    rtsiSetTPtr(&DefaultSPOT_M->solverInfo, DefaultSPOT_M->getTPtrPtr());
    rtsiSetStepSizePtr(&DefaultSPOT_M->solverInfo,
                       &DefaultSPOT_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&DefaultSPOT_M->solverInfo,
                          DefaultSPOT_M->getErrorStatusPtr());
    rtsiSetRTModelPtr(&DefaultSPOT_M->solverInfo, DefaultSPOT_M);
  }

  rtsiSetSimTimeStep(&DefaultSPOT_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&DefaultSPOT_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&DefaultSPOT_M->solverInfo, false);
  rtsiSetSolverName(&DefaultSPOT_M->solverInfo,"FixedStepDiscrete");
  DefaultSPOT_M->setTPtr(&DefaultSPOT_M->Timing.tArray[0]);
  DefaultSPOT_M->Timing.stepSize0 = 0.05;

  {
    real_T sampleTime;
    real_T sampleTime_0;
    real_T sampleTime_1;
    int32_T i;
    char_T *sErr;

    // Start for S-Function (sdspToNetwork): '<S16>/UDP Send'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "127.0.0.1", DefaultSPOT_P.UDPSend_Port_h, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S16>/UDP Send'

    // Start for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    DefaultSPOT_DW.Ifperforminganexperimentgrabthe = -1;

    // Start for If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' 
    DefaultSPOT_DW.ThisIFblockdetermineswhetherorn = -1;

    // Start for If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' 
    DefaultSPOT_DW.ThisIFblockdetermineswhethero_b = -1;

    // Start for If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' 
    DefaultSPOT_DW.ThisIFblockdetermineswhethero_c = -1;

    // Start for DataStoreMemory: '<Root>/RED_Tz1'
    DefaultSPOT_DW.BLUE_Control_Law_Enabler = DefaultSPOT_P.RED_Tz1_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz15'
    DefaultSPOT_DW.ARM_Control_Mode = DefaultSPOT_P.RED_Tz15_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz20'
    DefaultSPOT_DW.RED_Control_Law_Enabler = DefaultSPOT_P.RED_Tz20_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz3'
    strncpy(&DefaultSPOT_DW.RED_Logger[0], &DefaultSPOT_P.RED_Tz3_InitialValue[0],
            255U);
    DefaultSPOT_DW.RED_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz38'
    DefaultSPOT_DW.ARM_Control_Law_Enabler = DefaultSPOT_P.RED_Tz38_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz4'
    strncpy(&DefaultSPOT_DW.BLACK_Logger[0],
            &DefaultSPOT_P.RED_Tz4_InitialValue[0], 255U);
    DefaultSPOT_DW.BLACK_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz5'
    strncpy(&DefaultSPOT_DW.BLUE_Logger[0], &DefaultSPOT_P.RED_Tz5_InitialValue
            [0], 255U);
    DefaultSPOT_DW.BLUE_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz7'
    DefaultSPOT_DW.Float_State = DefaultSPOT_P.RED_Tz7_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz8'
    DefaultSPOT_DW.BLACK_Control_Law_Enabler =
      DefaultSPOT_P.RED_Tz8_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time'
    DefaultSPOT_DW.Univ_Time = DefaultSPOT_P.Universal_Time_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time10'
    memcpy(&DefaultSPOT_DW.BLACK_Measured_States[0],
           &DefaultSPOT_P.Universal_Time10_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time19'
    DefaultSPOT_DW.WhoAmI = DefaultSPOT_P.Universal_Time19_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time20'
    DefaultSPOT_DW.isSim = DefaultSPOT_P.Universal_Time20_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    DefaultSPOT_DW.BLUE_Desired_States[0] =
      DefaultSPOT_P.Universal_Time13_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    DefaultSPOT_DW.BLACK_Saturated_Controls[0] =
      DefaultSPOT_P.Universal_Time15_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    DefaultSPOT_DW.VIS_Measured_States[0] =
      DefaultSPOT_P.Universal_Time22_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    DefaultSPOT_DW.BLUE_Desired_States[1] =
      DefaultSPOT_P.Universal_Time13_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    DefaultSPOT_DW.BLACK_Saturated_Controls[1] =
      DefaultSPOT_P.Universal_Time15_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    DefaultSPOT_DW.VIS_Measured_States[1] =
      DefaultSPOT_P.Universal_Time22_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    DefaultSPOT_DW.BLUE_Desired_States[2] =
      DefaultSPOT_P.Universal_Time13_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    DefaultSPOT_DW.BLACK_Saturated_Controls[2] =
      DefaultSPOT_P.Universal_Time15_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    DefaultSPOT_DW.VIS_Measured_States[2] =
      DefaultSPOT_P.Universal_Time22_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time24'
    for (i = 0; i < 6; i++) {
      DefaultSPOT_DW.ARM_Measured_States[i] =
        DefaultSPOT_P.Universal_Time24_InitialValue[i];
    }

    // End of Start for DataStoreMemory: '<Root>/Universal_Time24'

    // Start for DataStoreMemory: '<Root>/Universal_Time25'
    DefaultSPOT_DW.BLACK_Desired_States[0] =
      DefaultSPOT_P.Universal_Time25_InitialValue[0];
    DefaultSPOT_DW.BLACK_Desired_States[1] =
      DefaultSPOT_P.Universal_Time25_InitialValue[1];
    DefaultSPOT_DW.BLACK_Desired_States[2] =
      DefaultSPOT_P.Universal_Time25_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    DefaultSPOT_DW.RED_Saturated_Controls[0] =
      DefaultSPOT_P.Universal_Time28_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    DefaultSPOT_DW.RED_Desired_States[0] =
      DefaultSPOT_P.Universal_Time29_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time31'
    DefaultSPOT_DW.RED_IMU_Measurements[0] =
      DefaultSPOT_P.Universal_Time31_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time33'
    DefaultSPOT_DW.BLACK_IMU_Measurements[0] =
      DefaultSPOT_P.Universal_Time33_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time34'
    DefaultSPOT_DW.BLUE_IMU_Measurements[0] =
      DefaultSPOT_P.Universal_Time34_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    DefaultSPOT_DW.RED_Saturated_Controls[1] =
      DefaultSPOT_P.Universal_Time28_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    DefaultSPOT_DW.RED_Desired_States[1] =
      DefaultSPOT_P.Universal_Time29_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time31'
    DefaultSPOT_DW.RED_IMU_Measurements[1] =
      DefaultSPOT_P.Universal_Time31_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time33'
    DefaultSPOT_DW.BLACK_IMU_Measurements[1] =
      DefaultSPOT_P.Universal_Time33_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time34'
    DefaultSPOT_DW.BLUE_IMU_Measurements[1] =
      DefaultSPOT_P.Universal_Time34_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    DefaultSPOT_DW.RED_Saturated_Controls[2] =
      DefaultSPOT_P.Universal_Time28_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    DefaultSPOT_DW.RED_Desired_States[2] =
      DefaultSPOT_P.Universal_Time29_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time31'
    DefaultSPOT_DW.RED_IMU_Measurements[2] =
      DefaultSPOT_P.Universal_Time31_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time33'
    DefaultSPOT_DW.BLACK_IMU_Measurements[2] =
      DefaultSPOT_P.Universal_Time33_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time34'
    DefaultSPOT_DW.BLUE_IMU_Measurements[2] =
      DefaultSPOT_P.Universal_Time34_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time26'
    memcpy(&DefaultSPOT_DW.RED_Measured_States[0],
           &DefaultSPOT_P.Universal_Time26_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time4'
    memcpy(&DefaultSPOT_DW.BLUE_Measured_States[0],
           &DefaultSPOT_P.Universal_Time4_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    DefaultSPOT_DW.BLUE_Saturated_Controls[0] =
      DefaultSPOT_P.Universal_Time6_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    DefaultSPOT_DW.ARM_Desired_States[0] =
      DefaultSPOT_P.Universal_Time8_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    DefaultSPOT_DW.BLUE_Saturated_Controls[1] =
      DefaultSPOT_P.Universal_Time6_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    DefaultSPOT_DW.ARM_Desired_States[1] =
      DefaultSPOT_P.Universal_Time8_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    DefaultSPOT_DW.BLUE_Saturated_Controls[2] =
      DefaultSPOT_P.Universal_Time6_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    DefaultSPOT_DW.ARM_Desired_States[2] =
      DefaultSPOT_P.Universal_Time8_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time9'
    DefaultSPOT_DW.VIS_Confidence = DefaultSPOT_P.Universal_Time9_InitialValue;

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S154>/UD'
    //
    //  Block description for '<S154>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_eh = DefaultSPOT_P.DiscreteDerivative_ICPrevScal_p;

    // InitializeConditions for UnitDelay: '<S155>/UD'
    //
    //  Block description for '<S155>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_hv = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_m;

    // InitializeConditions for UnitDelay: '<S156>/UD'
    //
    //  Block description for '<S156>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_kv = DefaultSPOT_P.DiscreteDerivative2_ICPrevSca_a;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLACK)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S131>/UD'
    //
    //  Block description for '<S131>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_j = DefaultSPOT_P.DiscreteDerivative_ICPrevScal_d;

    // InitializeConditions for UnitDelay: '<S132>/UD'
    //
    //  Block description for '<S132>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_c = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_i;

    // InitializeConditions for UnitDelay: '<S133>/UD'
    //
    //  Block description for '<S133>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_d = DefaultSPOT_P.DiscreteDerivative2_ICPrevSc_oo;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLACK)' 

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S159>/UD'
    //
    //  Block description for '<S159>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_o = DefaultSPOT_P.DiscreteDerivative_ICPrevSca_pf;

    // InitializeConditions for UnitDelay: '<S160>/UD'
    //
    //  Block description for '<S160>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_n = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_l;

    // InitializeConditions for UnitDelay: '<S161>/UD'
    //
    //  Block description for '<S161>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_hu = DefaultSPOT_P.DiscreteDerivative2_ICPrevSc_on;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLUE)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S136>/UD'
    //
    //  Block description for '<S136>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_l = DefaultSPOT_P.DiscreteDerivative_ICPrevScal_n;

    // InitializeConditions for UnitDelay: '<S137>/UD'
    //
    //  Block description for '<S137>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_k = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_f;

    // InitializeConditions for UnitDelay: '<S138>/UD'
    //
    //  Block description for '<S138>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_h = DefaultSPOT_P.DiscreteDerivative2_ICPrevSca_g;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLUE)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD (ARM)'
    // SystemInitialize for IfAction SubSystem: '<S122>/Simulated Position Controller' 
    // InitializeConditions for UnitDelay: '<S150>/UD'
    //
    //  Block description for '<S150>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_j;

    // InitializeConditions for UnitDelay: '<S151>/UD'
    //
    //  Block description for '<S151>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_e = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_a;

    // InitializeConditions for UnitDelay: '<S152>/UD'
    //
    //  Block description for '<S152>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_a = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_k;

    // End of SystemInitialize for SubSystem: '<S122>/Simulated Position Controller' 
    // End of SystemInitialize for SubSystem: '<S3>/Default PD (ARM)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (RED)'
    // InitializeConditions for UnitDelay: '<S164>/UD'
    //
    //  Block description for '<S164>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_eg = DefaultSPOT_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for UnitDelay: '<S165>/UD'
    //
    //  Block description for '<S165>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_cd = DefaultSPOT_P.DiscreteDerivative1_ICPrevScale;

    // InitializeConditions for UnitDelay: '<S166>/UD'
    //
    //  Block description for '<S166>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_hd = DefaultSPOT_P.DiscreteDerivative2_ICPrevScale;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (RED)' 
    // InitializeConditions for UnitDelay: '<S141>/UD'
    //
    //  Block description for '<S141>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_aq = DefaultSPOT_P.DiscreteDerivative_ICPrevScal_i;

    // InitializeConditions for UnitDelay: '<S142>/UD'
    //
    //  Block description for '<S142>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_p = DefaultSPOT_P.DiscreteDerivative1_ICPrevSca_e;

    // InitializeConditions for UnitDelay: '<S143>/UD'
    //
    //  Block description for '<S143>/UD':
    //
    //   Store in Global RAM

    DefaultSPOT_DW.UD_DSTATE_pr = DefaultSPOT_P.DiscreteDerivative2_ICPrevSca_o;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (RED)'

    // SystemInitialize for Merge: '<S3>/Merge1'
    DefaultSPOT_B.Merge1[0] = DefaultSPOT_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    DefaultSPOT_B.Merge2[0] = DefaultSPOT_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge'
    DefaultSPOT_B.Merge[0] = DefaultSPOT_P.Merge_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge1'
    DefaultSPOT_B.Merge1[1] = DefaultSPOT_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    DefaultSPOT_B.Merge2[1] = DefaultSPOT_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge'
    DefaultSPOT_B.Merge[1] = DefaultSPOT_P.Merge_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge1'
    DefaultSPOT_B.Merge1[2] = DefaultSPOT_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    DefaultSPOT_B.Merge2[2] = DefaultSPOT_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge'
    DefaultSPOT_B.Merge[2] = DefaultSPOT_P.Merge_InitialOutput;

    // SystemInitialize for IfAction SubSystem: '<S16>/Change RED Behavior'
    // InitializeConditions for Delay: '<S257>/Delay'
    DefaultSPOT_DW.Delay_DSTATE = DefaultSPOT_P.Delay_InitialCondition_p;

    // SystemInitialize for Enabled SubSystem: '<S257>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S262>/In1' incorporates:
    //   Outport: '<S262>/Out1'

    DefaultSPOT_B.In1 = DefaultSPOT_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S257>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S257>/Enabled Subsystem1'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for SignalConversion generated from: '<S263>/ThrustPer_Final' incorporates:
      //   Outport: '<S263>/Out1'

      DefaultSPOT_B.ThrustPer_Final[i] = DefaultSPOT_P.Out1_Y0_d;
    }

    // End of SystemInitialize for SubSystem: '<S257>/Enabled Subsystem1'
    DefaultSPOT_Pseudoinverse1_Init(&DefaultSPOT_DW.Pseudoinverse1_pn);

    // End of SystemInitialize for SubSystem: '<S16>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S16>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S233>/Delay'
    DefaultSPOT_DW.Delay_DSTATE_kz = DefaultSPOT_P.Delay_InitialCondition_i;

    // SystemInitialize for Enabled SubSystem: '<S233>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S238>/In1' incorporates:
    //   Outport: '<S238>/Out1'

    DefaultSPOT_B.In1_g2 = DefaultSPOT_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S233>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S233>/Enabled Subsystem1'
    // SystemInitialize for IfAction SubSystem: '<S16>/Change RED Behavior'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for Outport: '<S230>/RED DC'
      DefaultSPOT_B.duty_cycles[i] = DefaultSPOT_P.REDDC_Y0;

      // SystemInitialize for SignalConversion generated from: '<S239>/ThrustPer_Final' incorporates:
      //   Outport: '<S239>/Out1'

      DefaultSPOT_B.ThrustPer_Final_h5[i] = DefaultSPOT_P.Out1_Y0_j;
    }

    // End of SystemInitialize for SubSystem: '<S16>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S233>/Enabled Subsystem1'
    DefaultSPOT_Pseudoinverse1_Init(&DefaultSPOT_DW.Pseudoinverse1);

    // End of SystemInitialize for SubSystem: '<S16>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S16>/Change BLUE Behavior'
    // InitializeConditions for Delay: '<S245>/Delay'
    DefaultSPOT_DW.Delay_DSTATE_k = DefaultSPOT_P.Delay_InitialCondition_n;

    // SystemInitialize for Enabled SubSystem: '<S245>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S250>/In1' incorporates:
    //   Outport: '<S250>/Out1'

    DefaultSPOT_B.In1_g = DefaultSPOT_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S245>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S245>/Enabled Subsystem1'
    // SystemInitialize for IfAction SubSystem: '<S16>/Change BLACK Behavior'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for Outport: '<S228>/BLACK DC'
      DefaultSPOT_B.duty_cycles_m[i] = DefaultSPOT_P.BLACKDC_Y0;

      // SystemInitialize for SignalConversion generated from: '<S251>/ThrustPer_Final' incorporates:
      //   Outport: '<S251>/Out1'

      DefaultSPOT_B.ThrustPer_Final_h[i] = DefaultSPOT_P.Out1_Y0_js;
    }

    // End of SystemInitialize for SubSystem: '<S16>/Change BLACK Behavior'
    // End of SystemInitialize for SubSystem: '<S245>/Enabled Subsystem1'
    DefaultSPOT_Pseudoinverse1_Init(&DefaultSPOT_DW.Pseudoinverse1_p);

    // SystemInitialize for Outport: '<S229>/BLUE DC'
    for (i = 0; i < 8; i++) {
      DefaultSPOT_B.duty_cycles_j[i] = DefaultSPOT_P.BLUEDC_Y0;
    }

    // End of SystemInitialize for Outport: '<S229>/BLUE DC'
    // End of SystemInitialize for SubSystem: '<S16>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change BLACK Behavior'
    Defaul_ChangeBLACKBehavior_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeBLACKBehavior, &DefaultSPOT_P.ChangeBLACKBehavior);

    // End of SystemInitialize for SubSystem: '<S4>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change BLUE Behavior'
    Defaul_ChangeBLACKBehavior_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeBLUEBehavior, &DefaultSPOT_P.ChangeBLUEBehavior);

    // End of SystemInitialize for SubSystem: '<S4>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change RED Behavior'
    Defaul_ChangeBLACKBehavior_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeREDBehavior, &DefaultSPOT_P.ChangeREDBehavior);

    // End of SystemInitialize for SubSystem: '<S4>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change BLACK Behavior'
    // Start for S-Function (sdspToNetwork): '<S173>/UDP Send1'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U], 1, "0.0.0.0",
                        -1, "255.255.255.255", DefaultSPOT_P.UDPSend1_Port, 8192,
                        1, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S173>/UDP Send1'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change BLUE Behavior'
    // Start for S-Function (sdspToNetwork): '<S174>/UDP Send2'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U], 1, "0.0.0.0",
                        -1, "255.255.255.255", DefaultSPOT_P.UDPSend2_Port, 8192,
                        1, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S174>/UDP Send2'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change RED Behavior'
    // Start for S-Function (sdspToNetwork): '<S175>/UDP Send3'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U], 1, "0.0.0.0",
                        -1, "255.255.255.255", DefaultSPOT_P.UDPSend3_Port, 8192,
                        1, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S175>/UDP Send3'
    // End of SystemInitialize for SubSystem: '<S6>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S7>/Enable Pucks'
    // Start for MATLABSystem: '<S176>/GPIO Write1'
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    DefaultSPOT_DW.obj_l.matlabCodegenIsDeleted = false;
    DefaultSPOT_DW.obj_l.gpioPin = DefaultSPOT_P.GPIOWrite1_gpioPin;
    DefaultSPOT_DW.obj_l.pinDirection = DefaultSPOT_P.GPIOWrite1_pinDirection;
    DefaultSPOT_DW.obj_l.isInitialized = 1;

    //         %% Define input properties
    //  Call C-function implementing device initialization
    export_gpio(DefaultSPOT_DW.obj_l.gpioPin);
    set_pin_direction(DefaultSPOT_DW.obj_l.gpioPin,
                      DefaultSPOT_DW.obj_l.pinDirection);
    DefaultSPOT_DW.obj_l.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S7>/Enable Pucks'

    // SystemInitialize for IfAction SubSystem: '<S8>/Log Gyro//Accel'
    // Start for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
    DefaultSPOT_DW.obj._pobj2.matlabCodegenIsDeleted = true;
    DefaultSPOT_DW.obj.isInitialized = 0;
    DefaultSPOT_DW.obj.matlabCodegenIsDeleted = false;
    DefaultSPOT_DW.obj.SampleTime =
      DefaultSPOT_P.GyroscopeAccelerometer_SampleTi;
    DefaultSPOT_SystemCore_setup(&DefaultSPOT_DW.obj);

    // End of SystemInitialize for SubSystem: '<S8>/Log Gyro//Accel'

    // SystemInitialize for IfAction SubSystem: '<S9>/Change ARM Behavior'
    // InitializeConditions for Delay: '<S179>/Delay'
    DefaultSPOT_DW.Delay_DSTATE_o = DefaultSPOT_P.Delay_InitialCondition;

    // InitializeConditions for Delay: '<S179>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_cg = DefaultSPOT_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S179>/Delay2'
    DefaultSPOT_DW.Delay2_DSTATE_h = DefaultSPOT_P.Delay2_InitialCondition;

    // Start for MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders' 
    DefaultSPOT_DW.obj_d.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(DefaultSPOT_P.baseRate)) && (!rtIsNaN(DefaultSPOT_P.baseRate)))
        || rtIsInf(DefaultSPOT_P.baseRate)) {
      sampleTime = DefaultSPOT_P.baseRate;
    }

    DefaultSPOT_DW.obj_d.SampleTime = sampleTime;
    DefaultSPOT_DW.obj_d.isInitialized = 1;

    //         %% Define input properties
    //  Call C-function implementing device initialization
    DefaultSPOT_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders' 
    // End of SystemInitialize for SubSystem: '<S9>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' 
    // Start for S-Function (sdspFromNetwork): '<S182>/Receive PhaseSpace Data'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U], 0,
                        "0.0.0.0", DefaultSPOT_P.ReceivePhaseSpaceData_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S182>/Receive PhaseSpace Data' 

    // Start for S-Function (sdspFromNetwork): '<S186>/UDP Receive (RED Clock)'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U], 0,
                        "0.0.0.0", DefaultSPOT_P.UDPReceiveREDClock_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S186>/UDP Receive (RED Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLACK Clock)' 
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U], 0,
                        "0.0.0.0", DefaultSPOT_P.UDPReceiveBLACKClock_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLACK Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLUE Clock)' 
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U], 0,
                        "0.0.0.0", DefaultSPOT_P.UDPReceiveBLUEClock_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLUE Clock)' 

    // Start for If: '<S190>/This IF block determines whether or not to run the BLACK sim//exp' 
    DefaultSPOT_DW.ThisIFblockdetermineswhether_ch = -1;

    // Start for If: '<S190>/This IF block determines whether or not to run the BLUE sim//exp' 
    DefaultSPOT_DW.ThisIFblockdetermineswhether_cs = -1;

    // Start for If: '<S190>/This IF block determines whether or not to run the RED sim//exp ' 
    DefaultSPOT_DW.ThisIFblockdetermineswhethero_d = -1;

    // InitializeConditions for Delay: '<S194>/Delay2'
    DefaultSPOT_DW.Delay2_DSTATE = DefaultSPOT_P.Delay2_InitialCondition_e;

    // InitializeConditions for Delay: '<S194>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE = DefaultSPOT_P.Delay1_InitialCondition_m;

    // InitializeConditions for Delay: '<S204>/Delay2'
    DefaultSPOT_DW.Delay2_DSTATE_l = DefaultSPOT_P.Delay2_InitialCondition_a;

    // InitializeConditions for Delay: '<S204>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_l = DefaultSPOT_P.Delay1_InitialCondition_i3;

    // InitializeConditions for Delay: '<S214>/Delay2'
    DefaultSPOT_DW.Delay2_DSTATE_l0 = DefaultSPOT_P.Delay2_InitialCondition_m;

    // InitializeConditions for Delay: '<S214>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_ld = DefaultSPOT_P.Delay1_InitialCondition_l;

    // InitializeConditions for Delay: '<S196>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_g[0] = DefaultSPOT_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S195>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_b[0] = DefaultSPOT_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S206>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_m[0] = DefaultSPOT_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S205>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_lv[0] = DefaultSPOT_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S216>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_c[0] = DefaultSPOT_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S215>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_cq[0] = DefaultSPOT_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S196>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_g[1] = DefaultSPOT_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S195>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_b[1] = DefaultSPOT_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S206>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_m[1] = DefaultSPOT_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S205>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_lv[1] = DefaultSPOT_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S216>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_c[1] = DefaultSPOT_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S215>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_cq[1] = DefaultSPOT_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S196>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_g[2] = DefaultSPOT_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S195>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_b[2] = DefaultSPOT_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S206>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_m[2] = DefaultSPOT_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S205>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_lv[2] = DefaultSPOT_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S216>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_c[2] = DefaultSPOT_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S215>/Delay1'
    DefaultSPOT_DW.Delay1_DSTATE_cq[2] = DefaultSPOT_P.Delay1_InitialCondition_c;

    // SystemInitialize for Enabled SubSystem: '<S194>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S198>/y2-y1' incorporates:
    //   Outport: '<S198>/dy(t)//dt'

    DefaultSPOT_B.y2y1_ob = DefaultSPOT_P.dytdt_Y0;

    // End of SystemInitialize for SubSystem: '<S194>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S196>/Enabled Subsystem'
    Default_EnabledSubsystem_m_Init(DefaultSPOT_B.dy_p,
      &DefaultSPOT_DW.EnabledSubsystem_g, &DefaultSPOT_P.EnabledSubsystem_g);

    // End of SystemInitialize for SubSystem: '<S196>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S195>/Enabled Subsystem'
    DefaultSP_EnabledSubsystem_Init(DefaultSPOT_B.dy_g,
      &DefaultSPOT_DW.EnabledSubsystem, &DefaultSPOT_P.EnabledSubsystem);

    // End of SystemInitialize for SubSystem: '<S195>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S204>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S208>/y2-y1' incorporates:
    //   Outport: '<S208>/dy(t)//dt'

    DefaultSPOT_B.y2y1_o = DefaultSPOT_P.dytdt_Y0_j;

    // End of SystemInitialize for SubSystem: '<S204>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S206>/Enabled Subsystem'
    Default_EnabledSubsystem_m_Init(DefaultSPOT_B.dy_c,
      &DefaultSPOT_DW.EnabledSubsystem_d, &DefaultSPOT_P.EnabledSubsystem_d);

    // End of SystemInitialize for SubSystem: '<S206>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S205>/Enabled Subsystem'
    DefaultSP_EnabledSubsystem_Init(DefaultSPOT_B.dy_d,
      &DefaultSPOT_DW.EnabledSubsystem_l, &DefaultSPOT_P.EnabledSubsystem_l);

    // End of SystemInitialize for SubSystem: '<S205>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S214>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S218>/y2-y1' incorporates:
    //   Outport: '<S218>/dy(t)//dt'

    DefaultSPOT_B.y2y1 = DefaultSPOT_P.dytdt_Y0_d;

    // End of SystemInitialize for SubSystem: '<S214>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S216>/Enabled Subsystem'
    Default_EnabledSubsystem_m_Init(DefaultSPOT_B.dy,
      &DefaultSPOT_DW.EnabledSubsystem_l1, &DefaultSPOT_P.EnabledSubsystem_l1);

    // End of SystemInitialize for SubSystem: '<S216>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S215>/Enabled Subsystem'
    DefaultSP_EnabledSubsystem_Init(DefaultSPOT_B.dy_h,
      &DefaultSPOT_DW.EnabledSubsystem_k, &DefaultSPOT_P.EnabledSubsystem_k);

    // End of SystemInitialize for SubSystem: '<S215>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S186>/Enabled Subsystem2'
    // SystemInitialize for SignalConversion generated from: '<S187>/In1' incorporates:
    //   Outport: '<S187>/Universal Time'

    DefaultSPOT_B.In1_g20 = DefaultSPOT_P.UniversalTime_Y0;

    // End of SystemInitialize for SubSystem: '<S186>/Enabled Subsystem2'

    // SystemInitialize for IfAction SubSystem: '<S190>/Change BLACK Behavior'
    Defa_ChangeBLACKBehavior_a_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeBLACKBehavior_e,
      &DefaultSPOT_P.ChangeBLACKBehavior_e);

    // End of SystemInitialize for SubSystem: '<S190>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S190>/Change BLUE Behavior'
    Defa_ChangeBLACKBehavior_a_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeBLUEBehavior_f, &DefaultSPOT_P.ChangeBLUEBehavior_f);

    // End of SystemInitialize for SubSystem: '<S190>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S190>/Change RED Behavior'
    Defa_ChangeBLACKBehavior_a_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeREDBehavior_d, &DefaultSPOT_P.ChangeREDBehavior_d);

    // End of SystemInitialize for SubSystem: '<S190>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S10>/Use Hardware to Obtain States' 

    // SystemInitialize for IfAction SubSystem: '<S11>/Subsystem'
    // Start for MATLABSystem: '<S224>/WhoAmI'
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    DefaultSPOT_DW.obj_dk.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(DefaultSPOT_P.baseRate)) && (!rtIsNaN(DefaultSPOT_P.baseRate)))
        || rtIsInf(DefaultSPOT_P.baseRate)) {
      sampleTime_0 = DefaultSPOT_P.baseRate;
    }

    DefaultSPOT_DW.obj_dk.SampleTime = sampleTime_0;
    DefaultSPOT_DW.obj_dk.isInitialized = 1;

    //         %% Define output properties
    //  Call C-function implementing device initialization
    DefaultSPOT_DW.obj_dk.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S224>/WhoAmI'
    // End of SystemInitialize for SubSystem: '<S11>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S12>/Subsystem'
    // Start for S-Function (sdspFromNetwork): '<S225>/UDP Receive'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U], 0, "0.0.0.0",
                        DefaultSPOT_P.UDPReceive_Port, "0.0.0.0", -1, 8192, 4, 0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S225>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S12>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S13>/Change ARM Behavior'
    // Start for MATLABSystem: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    DefaultSPOT_DW.obj_n.matlabCodegenIsDeleted = false;
    DefaultSPOT_DW.obj_n.POSITION_P_GAIN =
      DefaultSPOT_P.ControlDynamixelActuatorsineith;
    DefaultSPOT_DW.obj_n.POSITION_I_GAIN =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_b;
    DefaultSPOT_DW.obj_n.POSITION_D_GAIN =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_h;
    DefaultSPOT_DW.obj_n.MAX_POSITION =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_j;
    DefaultSPOT_DW.obj_n.MIN_POSITION =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_m;
    DefaultSPOT_DW.obj_n.MOVE_TIME =
      DefaultSPOT_P.ControlDynamixelActuatorsine_hy;
    DefaultSPOT_DW.obj_n.CURRENT_LIMIT =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_i;
    DefaultSPOT_DW.obj_n.SPEED_P_GAIN =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_g;
    DefaultSPOT_DW.obj_n.SPEED_I_GAIN =
      DefaultSPOT_P.ControlDynamixelActuatorsine_g3;
    DefaultSPOT_DW.obj_n.VELOCITY_LIMIT =
      DefaultSPOT_P.ControlDynamixelActuatorsine_bf;
    DefaultSPOT_DW.obj_n.ACCELERATION_TIME =
      DefaultSPOT_P.ControlDynamixelActuatorsinei_l;
    if (((!rtIsInf(DefaultSPOT_P.baseRate)) && (!rtIsNaN(DefaultSPOT_P.baseRate)))
        || rtIsInf(DefaultSPOT_P.baseRate)) {
      sampleTime_1 = DefaultSPOT_P.baseRate;
    }

    DefaultSPOT_DW.obj_n.SampleTime = sampleTime_1;
    DefaultSPOT_DW.obj_n.isInitialized = 1;

    //         %% Define input properties
    initialize_dynamixel();
    DefaultSPOT_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
    // End of SystemInitialize for SubSystem: '<S13>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S14>/Subsystem'
    // Start for S-Function (sdspToNetwork): '<S227>/UDP Send'
    sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
    CreateUDPInterface(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U], 1, "0.0.0.0",
                        -1, "192.168.1.115", DefaultSPOT_P.UDPSend_Port, 8192, 8,
                        0);
    }

    if (*sErr == 0) {
      LibStart(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
      if (*sErr != 0) {
        DefaultSPOT_M->setErrorStatus(sErr);
        DefaultSPOT_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S227>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S14>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S17>/Change BLACK Behavior'
    Defa_ChangeBLACKBehavior_n_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeBLACKBehavior_i,
      &DefaultSPOT_P.ChangeBLACKBehavior_i);

    // End of SystemInitialize for SubSystem: '<S17>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S17>/Change BLUE Behavior'
    Defa_ChangeBLACKBehavior_n_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeBLUEBehavior_e, &DefaultSPOT_P.ChangeBLUEBehavior_e);

    // End of SystemInitialize for SubSystem: '<S17>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S17>/Change RED Behavior'
    Defa_ChangeBLACKBehavior_n_Init(DefaultSPOT_M,
      &DefaultSPOT_DW.ChangeREDBehavior_h, &DefaultSPOT_P.ChangeREDBehavior_h);

    // End of SystemInitialize for SubSystem: '<S17>/Change RED Behavior'

    // Start for MATLABSystem: '<S171>/MATLAB System'
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    DefaultSPOT_DW.obj_f.matlabCodegenIsDeleted = false;
    DefaultSPOT_DW.obj_f.isInitialized = 1;

    //         %% Define input properties
    //  Call C-function implementing device initialization
    createFile();
    DefaultSPOT_DW.obj_f.isSetupComplete = true;
  }
}

// Model terminate function
void DefaultSPOT_terminate(void)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S16>/UDP Send'
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S16>/UDP Send'

  // Terminate for IfAction SubSystem: '<S4>/Change BLACK Behavior'
  Defaul_ChangeBLACKBehavior_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeBLACKBehavior);

  // End of Terminate for SubSystem: '<S4>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S4>/Change BLUE Behavior'
  Defaul_ChangeBLACKBehavior_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeBLUEBehavior);

  // End of Terminate for SubSystem: '<S4>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S4>/Change RED Behavior'
  Defaul_ChangeBLACKBehavior_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeREDBehavior);

  // End of Terminate for SubSystem: '<S4>/Change RED Behavior'

  // Terminate for MATLABSystem: '<S171>/MATLAB System'
  if (!DefaultSPOT_DW.obj_f.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S171>/MATLAB System'

  // Terminate for IfAction SubSystem: '<S6>/Change BLACK Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S173>/UDP Send1'
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U], 1);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPSend1_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S173>/UDP Send1'
  // End of Terminate for SubSystem: '<S6>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change BLUE Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S174>/UDP Send2'
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U], 1);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPSend2_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S174>/UDP Send2'
  // End of Terminate for SubSystem: '<S6>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change RED Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S175>/UDP Send3'
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U], 1);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPSend3_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S175>/UDP Send3'
  // End of Terminate for SubSystem: '<S6>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S7>/Enable Pucks'
  // Terminate for MATLABSystem: '<S176>/GPIO Write1'
  if (!DefaultSPOT_DW.obj_l.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((DefaultSPOT_DW.obj_l.isInitialized == 1) &&
        DefaultSPOT_DW.obj_l.isSetupComplete) {
      //  Call C-function implementing device termination
      change_gpio_value(DefaultSPOT_DW.obj_l.gpioPin, 0.0);
      unexport_gpio(DefaultSPOT_DW.obj_l.gpioPin);
    }
  }

  // End of Terminate for MATLABSystem: '<S176>/GPIO Write1'
  // End of Terminate for SubSystem: '<S7>/Enable Pucks'

  // Terminate for IfAction SubSystem: '<S8>/Log Gyro//Accel'
  // Terminate for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  if (!DefaultSPOT_DW.obj.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj.matlabCodegenIsDeleted = true;
  }

  if (!DefaultSPOT_DW.obj._pobj2.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj._pobj2.matlabCodegenIsDeleted = true;
    if (DefaultSPOT_DW.obj._pobj2.isInitialized == 1) {
      DefaultSPOT_DW.obj._pobj2.isInitialized = 2;
    }
  }

  // End of Terminate for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
  // End of Terminate for SubSystem: '<S8>/Log Gyro//Accel'

  // Terminate for IfAction SubSystem: '<S9>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders' 
  if (!DefaultSPOT_DW.obj_d.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S179>/Read Joint Positions using  Dynamixel Encoders' 
  // End of Terminate for SubSystem: '<S9>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S10>/Use Hardware to Obtain States'
  // Terminate for S-Function (sdspFromNetwork): '<S182>/Receive PhaseSpace Data' 
  sErr = GetErrorBuffer(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  LibTerminate(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U], 0);
  DestroyUDPInterface(&DefaultSPOT_DW.ReceivePhaseSpaceData_NetworkLi[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S182>/Receive PhaseSpace Data' 

  // Terminate for S-Function (sdspFromNetwork): '<S186>/UDP Receive (RED Clock)' 
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPReceiveREDClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S186>/UDP Receive (RED Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLACK Clock)' 
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPReceiveBLACKClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLACK Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLUE Clock)' 
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPReceiveBLUEClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S186>/UDP Receive (BLUE Clock)' 

  // Terminate for IfAction SubSystem: '<S190>/Change BLACK Behavior'
  Defa_ChangeBLACKBehavior_l_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeBLACKBehavior_e);

  // End of Terminate for SubSystem: '<S190>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S190>/Change BLUE Behavior'
  Defa_ChangeBLACKBehavior_l_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeBLUEBehavior_f);

  // End of Terminate for SubSystem: '<S190>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S190>/Change RED Behavior'
  Defa_ChangeBLACKBehavior_l_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeREDBehavior_d);

  // End of Terminate for SubSystem: '<S190>/Change RED Behavior'
  // End of Terminate for SubSystem: '<S10>/Use Hardware to Obtain States'

  // Terminate for IfAction SubSystem: '<S11>/Subsystem'
  // Terminate for MATLABSystem: '<S224>/WhoAmI'
  if (!DefaultSPOT_DW.obj_dk.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj_dk.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S224>/WhoAmI'
  // End of Terminate for SubSystem: '<S11>/Subsystem'

  // Terminate for IfAction SubSystem: '<S12>/Subsystem'
  // Terminate for S-Function (sdspFromNetwork): '<S225>/UDP Receive'
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S225>/UDP Receive'
  // End of Terminate for SubSystem: '<S12>/Subsystem'

  // Terminate for IfAction SubSystem: '<S13>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  if (!DefaultSPOT_DW.obj_n.matlabCodegenIsDeleted) {
    DefaultSPOT_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((DefaultSPOT_DW.obj_n.isInitialized == 1) &&
        DefaultSPOT_DW.obj_n.isSetupComplete) {
      terminate_dynamixel();
    }
  }

  // End of Terminate for MATLABSystem: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  // End of Terminate for SubSystem: '<S13>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S14>/Subsystem'
  // Terminate for S-Function (sdspToNetwork): '<S227>/UDP Send'
  sErr = GetErrorBuffer(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
  LibTerminate(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);
  if (*sErr != 0) {
    DefaultSPOT_M->setErrorStatus(sErr);
    DefaultSPOT_M->setStopRequested(1);
  }

  LibDestroy(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U], 1);
  DestroyUDPInterface(&DefaultSPOT_DW.UDPSend_NetworkLib_m[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S227>/UDP Send'
  // End of Terminate for SubSystem: '<S14>/Subsystem'

  // Terminate for IfAction SubSystem: '<S17>/Change BLACK Behavior'
  Defa_ChangeBLACKBehavior_n_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeBLACKBehavior_i);

  // End of Terminate for SubSystem: '<S17>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S17>/Change BLUE Behavior'
  Defa_ChangeBLACKBehavior_n_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeBLUEBehavior_e);

  // End of Terminate for SubSystem: '<S17>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S17>/Change RED Behavior'
  Defa_ChangeBLACKBehavior_n_Term(DefaultSPOT_M,
    &DefaultSPOT_DW.ChangeREDBehavior_h);

  // End of Terminate for SubSystem: '<S17>/Change RED Behavior'
}

time_T** RT_MODEL_DefaultSPOT_T::getTPtrPtr()
{
  return &(Timing.t);
}

boolean_T RT_MODEL_DefaultSPOT_T::getStopRequested() const
{
  return (Timing.stopRequestedFlag);
}

void RT_MODEL_DefaultSPOT_T::setStopRequested(boolean_T aStopRequested)
{
  (Timing.stopRequestedFlag = aStopRequested);
}

const char_T* RT_MODEL_DefaultSPOT_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_DefaultSPOT_T::setErrorStatus(const char_T* const aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

time_T* RT_MODEL_DefaultSPOT_T::getTPtr() const
{
  return (Timing.t);
}

void RT_MODEL_DefaultSPOT_T::setTPtr(time_T* aTPtr)
{
  (Timing.t = aTPtr);
}

boolean_T* RT_MODEL_DefaultSPOT_T::getStopRequestedPtr()
{
  return (&(Timing.stopRequestedFlag));
}

const char_T** RT_MODEL_DefaultSPOT_T::getErrorStatusPtr()
{
  return &errorStatus;
}

boolean_T RT_MODEL_DefaultSPOT_T::isMajorTimeStep() const
{
  return ((Timing.simTimeStep) == MAJOR_TIME_STEP);
}

boolean_T RT_MODEL_DefaultSPOT_T::isMinorTimeStep() const
{
  return ((Timing.simTimeStep) == MINOR_TIME_STEP);
}

//
// File trailer for generated code.
//
// [EOF]
//
