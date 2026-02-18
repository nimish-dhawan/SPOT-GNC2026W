//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.cpp
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1759
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Wed Feb 18 14:43:45 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "GNC2026W.h"
#include "rtwtypes.h"
#include "GNC2026W_types.h"
#include "GNC2026W_private.h"
#include <string.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <math.h>
#include <ctime>
#include <stddef.h>
#include "rt_defines.h"

// Block signals (default storage)
B_GNC2026W_T GNC2026W_B;

// Block states (default storage)
DW_GNC2026W_T GNC2026W_DW;

// Real-time model
RT_MODEL_GNC2026W_T GNC2026W_M_ = RT_MODEL_GNC2026W_T();
RT_MODEL_GNC2026W_T *const GNC2026W_M = &GNC2026W_M_;

// Forward declaration for local functions
static real_T GNC2026W_xzlangeM(const real_T x[24]);
static void GNC2026W_xzlascl(real_T cfrom, real_T cto, real_T A[24]);
static real_T GNC2026W_xnrm2(int32_T n, const real_T x[24], int32_T ix0);
static real_T GNC2026W_xdotc(int32_T n, const real_T x[24], int32_T ix0, const
  real_T y[24], int32_T iy0);
static void GNC2026W_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[24],
  int32_T iy0);
static real_T GNC2026W_xdotc_o(const real_T x[9], const real_T y[9], int32_T iy0);
static void GNC2026W_xaxpy_gop(real_T a, real_T y[9], int32_T iy0);
static real_T GNC2026W_xnrm2_p(const real_T x[3], int32_T ix0);
static void GNC2026W_xaxpy_g(int32_T n, real_T a, const real_T x[24], int32_T
  ix0, real_T y[8], int32_T iy0);
static void GNC2026W_xaxpy_go(int32_T n, real_T a, const real_T x[8], int32_T
  ix0, real_T y[24], int32_T iy0);
static void GNC2026W_xzlascl_i(real_T cfrom, real_T cto, real_T A[3]);
static void GNC2026W_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b, real_T *
  c, real_T *s);
static void GNC2026W_xrot_ps(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static void GNC2026W_xrot_psj(real_T x[24], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static void GNC2026W_xswap_dj(real_T x[9], int32_T ix0, int32_T iy0);
static void GNC2026W_xswap_dj5(real_T x[24], int32_T ix0, int32_T iy0);
static void GNC2026W_svd(const real_T A[24], real_T U[24], real_T s[3], real_T
  V[9]);

// Forward declaration for local functions
static real_T GNC2026W_maximum(const real_T x[8]);

// Forward declaration for local functions
static real_T GNC2026W_maximum_e(const real_T x[8]);
static real_T GNC2026W_norm(const real_T x[3]);

// Forward declaration for local functions
static real_T GNC2026W_rand(void);
static real_T GNC2026W_xzlangeM_a(const real_T x[9]);
static void GNC2026W_xzlascl_e(real_T cfrom, real_T cto, real_T A[9]);
static real_T GNC2026W_xnrm2_g(int32_T n, const real_T x[9], int32_T ix0);
static real_T GNC2026W_xdotc_p(int32_T n, const real_T x[9], int32_T ix0, const
  real_T y[9], int32_T iy0);
static void GNC2026W_xaxpy_l(int32_T n, real_T a, int32_T ix0, real_T y[9],
  int32_T iy0);
static real_T GNC2026W_xnrm2_g1(const real_T x[3], int32_T ix0);
static void GNC2026W_xaxpy_lx(int32_T n, real_T a, const real_T x[9], int32_T
  ix0, real_T y[3], int32_T iy0);
static void GNC2026W_xaxpy_lx2(int32_T n, real_T a, const real_T x[3], int32_T
  ix0, real_T y[9], int32_T iy0);
static void GNC2026W_xzlascl_eg(real_T cfrom, real_T cto, real_T A[3]);
static void GNC2026W_xswap_g(real_T x[9], int32_T ix0, int32_T iy0);
static void GNC2026W_xrotg_b(real_T *a, real_T *b, real_T *c, real_T *s);
static void GNC2026W_xrot_d(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static void GNC2026W_svd_n(const real_T A[9], real_T U[9], real_T s[3], real_T
  V[9]);
static real_T GNC2026W_xnrm2_h(int32_T n, const real_T x_data[], int32_T ix0);
static void GNC2026W_xgeqp3(real_T A_data[], const int32_T A_size[2], real_T
  tau_data[], int32_T *tau_size, int32_T jpvt_data[], int32_T jpvt_size[2]);
static void GNC2026W_mrdiv(const real_T A_data[], const int32_T A_size[2], const
  real_T B_data[], const int32_T B_size[2], real_T Y_data[], int32_T Y_size[2]);
static void GNC2026W_binary_expand_op(real_T in1_data[], int32_T in1_size[2],
  const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
  const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2]);
static void GNC2026W_mtimes(const real_T A_data[], const int32_T A_size[2],
  const real_T B_data[], const int32_T B_size[2], real_T C[36]);
static void GNC2026W_chol(real_T A[36]);
static void GNC2026W_inv(const real_T x[9], real_T y[9]);
static real_T GNC2026W_rand_a(void);
static real_T GNC2026W_now(void);
static real_T GNC2026W_mod(real_T x);
static void GNC2026W_twister_state_vector(uint32_T mt[625], uint32_T seed);
static void GNC2026W_SystemCore_setup(comm_internal_BernoulliBinary_T *obj,
  uint32_T *seed);
int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

//
// Output and update for action system:
//    '<S1>/Phase #0: Synchronization'
//    '<S1>/Phase #1: Start Floating '
//    '<S1>/Phase #6: Clean Shutdown'
//
void GNC2026W_Phase0Synchronization(real_T *rtd_ARM_Control_Law_Enabler, real_T *
  rtd_ARM_Path_Planner_Selection, real_T *rtd_BLACK_Control_Law_Enabler, char_T
  rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T
  *rtd_BLUE_Control_Law_Enabler, char_T rtd_BLUE_Logger[256], real_T
  *rtd_BLUE_Path_Planner_Selection, real_T *rtd_Float_State, real_T
  *rtd_RED_Control_Law_Enabler, char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase0Synchronization_GNC20_T *localP)
{
  // DataStoreWrite: '<S19>/Data Store Write2' incorporates:
  //   Constant: '<S19>/Constant1'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant1_Value;

  // DataStoreWrite: '<S19>/Data Store Write3' incorporates:
  //   Constant: '<S19>/Constant2'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant2_Value;

  // DataStoreWrite: '<S19>/Data Store Write7' incorporates:
  //   Constant: '<S19>/Constant3'

  *rtd_RED_Path_Planner_Selection = localP->Constant3_Value;

  // DataStoreWrite: '<S19>/Data Store Write8' incorporates:
  //   Constant: '<S19>/Constant4'

  *rtd_ARM_Path_Planner_Selection = localP->Constant4_Value;

  // DataStoreWrite: '<S19>/Data Store Write' incorporates:
  //   Constant: '<S19>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S19>/Data Store Write6' incorporates:
  //   Constant: '<S19>/Constant6'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant6_Value;

  // DataStoreWrite: '<S19>/Data Store Write5' incorporates:
  //   Constant: '<S19>/Constant7'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant7_Value;

  // DataStoreWrite: '<S19>/Data Store Write9' incorporates:
  //   Constant: '<S19>/Constant8'

  *rtd_ARM_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S19>/String Constant' incorporates:
  //   DataStoreWrite: '<S19>/Data Store Write1'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // StringConstant: '<S19>/String Constant1' incorporates:
  //   DataStoreWrite: '<S19>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S19>/String Constant2' incorporates:
  //   DataStoreWrite: '<S19>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S19>/Data Store Write4' incorporates:
  //   Constant: '<S19>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for action system:
//    '<S57>/If Action Subsystem'
//    '<S57>/If Action Subsystem1'
//    '<S57>/If Action Subsystem2'
//    '<S57>/If Action Subsystem3'
//    '<S57>/If Action Subsystem4'
//    '<S57>/If Action Subsystem5'
//
void GNC2026W_IfActionSubsystem(real_T *rtd_RED_Control_Law_Enabler, real_T
  *rtd_RED_Path_Planner_Selection, P_IfActionSubsystem_GNC2026W_T *localP)
{
  // DataStoreWrite: '<S74>/Data Store Write3' incorporates:
  //   Constant: '<S74>/Constant'

  *rtd_RED_Control_Law_Enabler = localP->Constant_Value;

  // DataStoreWrite: '<S74>/Data Store Write24' incorporates:
  //   Constant: '<S74>/Constant1'

  *rtd_RED_Path_Planner_Selection = localP->Constant1_Value;
}

//
// Output and update for action system:
//    '<S1>/Phase #4: Return Home'
//    '<S1>/Phase #5: Hold Home'
//
void GNC2026W_Phase4ReturnHome(real_T *rtd_ARM_Control_Law_Enabler, real_T
  rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection, real_T
  *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3], char_T
  rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T
  *rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase4ReturnHome_GNC2026W_T *localP)
{
  // DataStoreWrite: '<S23>/Data Store Write24' incorporates:
  //   Constant: '<S23>/Constant11'

  *rtd_RED_Path_Planner_Selection = localP->Constant11_Value;

  // DataStoreWrite: '<S23>/Data Store Write3' incorporates:
  //   Constant: '<S23>/Constant12'

  *rtd_ARM_Path_Planner_Selection = localP->Constant12_Value;

  // DataStoreWrite: '<S23>/Data Store Write23' incorporates:
  //   Constant: '<S23>/Constant14'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant14_Value;

  // DataStoreWrite: '<S23>/Data Store Write22' incorporates:
  //   Constant: '<S23>/Constant15'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant15_Value;

  // DataStoreWrite: '<S23>/Data Store Write4' incorporates:
  //   Constant: '<S23>/Constant18'

  *rtd_ARM_Control_Law_Enabler = localP->Constant18_Value;

  // DataStoreWrite: '<S23>/Data Store Write5' incorporates:
  //   Constant: '<S23>/Constant4'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant4_Value;

  // DataStoreWrite: '<S23>/Data Store Write8' incorporates:
  //   Constant: '<S23>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S23>/Data Store Write7' incorporates:
  //   Constant: '<S23>/Constant6'

  *rtd_Float_State = localP->Constant6_Value;

  // DataStoreWrite: '<S23>/Data Store Write16' incorporates:
  //   Constant: '<S23>/Constant8'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S23>/String Constant1' incorporates:
  //   DataStoreWrite: '<S23>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S23>/String Constant2' incorporates:
  //   DataStoreWrite: '<S23>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S23>/Data Store Write13' incorporates:
  //   Constant: '<S115>/Constant1'
  //   Constant: '<S115>/Constant2'
  //   Constant: '<S115>/Constant3'

  rtd_ARM_Desired_States[0] = localP->Constant3_Value;
  rtd_ARM_Desired_States[1] = localP->Constant1_Value;
  rtd_ARM_Desired_States[2] = localP->Constant2_Value;

  // StringConstant: '<S23>/String Constant' incorporates:
  //   DataStoreWrite: '<S23>/Data Store Write2'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // DataStoreWrite: '<S23>/Data Store Write18' incorporates:
  //   Constant: '<S117>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[0] = GNC2026W_P.home_states_BLUE[0];

  // DataStoreWrite: '<S23>/Data Store Write6' incorporates:
  //   Constant: '<S116>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[0] = GNC2026W_P.home_states_BLACK[0];

  // DataStoreWrite: '<S23>/Data Store Write9' incorporates:
  //   Constant: '<S118>/Constant2'

  rtd_RED_Desired_States[0] = GNC2026W_P.home_states_RED[0];

  // DataStoreWrite: '<S23>/Data Store Write18' incorporates:
  //   Constant: '<S117>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[1] = GNC2026W_P.home_states_BLUE[1];

  // DataStoreWrite: '<S23>/Data Store Write6' incorporates:
  //   Constant: '<S116>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[1] = GNC2026W_P.home_states_BLACK[1];

  // DataStoreWrite: '<S23>/Data Store Write9' incorporates:
  //   Constant: '<S118>/Constant2'

  rtd_RED_Desired_States[1] = GNC2026W_P.home_states_RED[1];

  // DataStoreWrite: '<S23>/Data Store Write18' incorporates:
  //   Constant: '<S117>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[2] = GNC2026W_P.home_states_BLUE[2];

  // DataStoreWrite: '<S23>/Data Store Write6' incorporates:
  //   Constant: '<S116>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[2] = GNC2026W_P.home_states_BLACK[2];

  // DataStoreWrite: '<S23>/Data Store Write9' incorporates:
  //   Constant: '<S118>/Constant2'

  rtd_RED_Desired_States[2] = GNC2026W_P.home_states_RED[2];
}

//
// Output and update for atomic system:
//    '<S137>/MATLAB Function'
//    '<S160>/MATLAB Function'
//    '<S159>/MATLAB Function'
//    '<S232>/MATLAB Function'
//    '<S225>/MATLAB Function'
//    '<S220>/MATLAB Function'
//    '<S262>/MATLAB Function'
//
void GNC2026W_MATLABFunction(real_T rtu_u, real_T rtu_u_pre, real_T rtu_y_pre,
  real_T *rty_y, real_T *rty_u_next)
{
  real_T q;
  real_T r;
  q = (rtu_u - rtu_u_pre) + 3.1415926535897931;
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

  *rty_y = (r - 3.1415926535897931) + rtu_y_pre;
  *rty_u_next = rtu_u;
}

//
// Output and update for atomic system:
//    '<S196>/MATLAB Function'
//    '<S173>/MATLAB Function'
//    '<S186>/MATLAB Function'
//    '<S163>/MATLAB Function'
//    '<S191>/MATLAB Function'
//    '<S168>/MATLAB Function'
//
void GNC2026W_MATLABFunction_n(real_T rtu_Rz_path, real_T rtu_Rz_measured,
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
//    '<S3>/Disable Thrusters (RED)'
//    '<S3>/Custom Control (ARM)'
//
void GNC2026W_DisableThrustersRED(real_T rty_u[3],
  P_DisableThrustersRED_GNC2026_T *localP)
{
  // SignalConversion generated from: '<S155>/u' incorporates:
  //   Constant: '<S155>/Zero'

  rty_u[0] = localP->Zero_Value;
  rty_u[1] = localP->Zero_Value;
  rty_u[2] = localP->Zero_Value;
}

//
// Output and update for action system:
//    '<S3>/Disable Thrusters (BLACK)'
//    '<S3>/Disable Thrusters (BLUE)'
//
void GNC2026W_DisableThrustersBLACK(real_T rty_Out1[3],
  P_DisableThrustersBLACK_GNC20_T *localP)
{
  // SignalConversion generated from: '<S153>/Out1' incorporates:
  //   Constant: '<S153>/Zero'

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
void GNC202_ChangeBLACKBehavior_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC202_T *localDW, P_ChangeBLACKBehavior_GNC2026_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S201>/UDP Send'
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
      GNC2026W_M->setErrorStatus(sErr);
      GNC2026W_M->setStopRequested(1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S201>/UDP Send'
}

//
// Output and update for action system:
//    '<S4>/Change BLACK Behavior'
//    '<S4>/Change BLUE Behavior'
//    '<S4>/Change RED Behavior'
//
void GNC2026W_ChangeBLACKBehavior(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC202_T *localDW, P_ChangeBLACKBehavior_GNC2026_T
  *localP)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S201>/UDP Send' incorporates:
  //   Constant: '<S201>/Constant1'

  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSend_NetworkLib[0U], &localP->Constant1_Value,
                    1);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S201>/UDP Send'
}

//
// Termination for action system:
//    '<S4>/Change BLACK Behavior'
//    '<S4>/Change BLUE Behavior'
//    '<S4>/Change RED Behavior'
//
void GNC202_ChangeBLACKBehavior_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC202_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S201>/UDP Send'
  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S201>/UDP Send'
}

//
// Output and update for atomic system:
//    '<S215>/Camera to Inertial Frame'
//    '<S214>/Camera to Inertial Frame'
//
void GNC2026W_CameratoInertialFrame(const real_T rtu_r_C_I[2], real_T
  rtu_r_C_I_a, const real_T rtu_r_REL_C[3], real_T rty_r_T_I[3])
{
  real_T th_T;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;

  // SignalConversion generated from: '<S222>/ SFunction '
  th_T = rtu_r_C_I_a + rtu_r_REL_C[2];
  tmp = sin(rtu_r_C_I_a);
  tmp_0 = cos(rtu_r_C_I_a);
  tmp_1 = sin(th_T);
  tmp_2 = cos(th_T);

  // SignalConversion generated from: '<S222>/ SFunction '
  rty_r_T_I[0] = (((rtu_r_REL_C[0] + 0.125) * tmp_0 + (rtu_r_REL_C[1] + 0.03) *
                   -tmp) + rtu_r_C_I[0]) - (tmp_2 * 0.145 + -tmp_1 * 0.0);
  rty_r_T_I[1] = (((rtu_r_REL_C[0] + 0.125) * tmp + (rtu_r_REL_C[1] + 0.03) *
                   tmp_0) + rtu_r_C_I[1]) - (tmp_1 * 0.145 + tmp_2 * 0.0);
  rty_r_T_I[2] = th_T;
}

//
// System initialize for action system:
//    '<S244>/Change BLACK Behavior'
//    '<S244>/Change BLUE Behavior'
//    '<S244>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_j_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_l_T *localDW, P_ChangeBLACKBehavior_GNC20_p_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S245>/UDP Send (GUI)'
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
      GNC2026W_M->setErrorStatus(sErr);
      GNC2026W_M->setStopRequested(1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S245>/UDP Send (GUI)'
}

//
// Update for action system:
//    '<S244>/Change BLACK Behavior'
//    '<S244>/Change BLUE Behavior'
//    '<S244>/Change RED Behavior'
//
void GN_ChangeBLACKBehavior_p_Update(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_GNC2_l_T *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S245>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendGUI_NetworkLib[0U], &rtu_UniversalTime, 1);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S245>/UDP Send (GUI)'
}

//
// Termination for action system:
//    '<S244>/Change BLACK Behavior'
//    '<S244>/Change BLUE Behavior'
//    '<S244>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_j_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_l_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S245>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendGUI_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSendGUI_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendGUI_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S245>/UDP Send (GUI)'
}

//
// Output and update for atomic system:
//    '<S248>/MATLAB Function'
//    '<S268>/MATLAB Function'
//    '<S278>/MATLAB Function'
//
void GNC2026W_MATLABFunction_j(real_T rtu_dt, real_T rtu_dataRate, real_T
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
//    '<S250>/Enabled Subsystem'
//    '<S269>/Enabled Subsystem'
//    '<S279>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026W_T *localDW, P_EnabledSubsystem_GNC2026W_T *localP)
{
  // InitializeConditions for Delay: '<S264>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S264>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S264>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S264>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S264>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S264>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S250>/Enabled Subsystem'
//    '<S269>/Enabled Subsystem'
//    '<S279>/Enabled Subsystem'
//
void GNC202_EnabledSubsystem_Disable(DW_EnabledSubsystem_GNC2026W_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S250>/Enabled Subsystem'
//    '<S269>/Enabled Subsystem'
//    '<S279>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem(const boolean_T rtu_Enable[3], const real_T
  rtu_y[3], real_T rtu_dt, real_T rty_dydt[3], B_EnabledSubsystem_GNC2026W_T
  *localB, DW_EnabledSubsystem_GNC2026W_T *localDW,
  P_EnabledSubsystem_GNC2026W_T *localP)
{
  real_T Delay;
  real_T ema;
  real_T x;

  // Outputs for Enabled SubSystem: '<S250>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S264>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    GNC202_EnabledSubsystem_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Constant: '<S264>/Constant2'

    x = exp(-rtu_dt / localP->Constant2_Value);

    // Delay: '<S264>/Delay'
    Delay = localDW->Delay_DSTATE[0];
    localB->Delay[0] = Delay;

    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Delay: '<S264>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[0];
    localB->ema[0] = ema;

    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Delay: '<S264>/Delay'

    rty_dydt[0] = (ema - Delay) / rtu_dt;

    // Delay: '<S264>/Delay'
    Delay = localDW->Delay_DSTATE[1];
    localB->Delay[1] = Delay;

    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Delay: '<S264>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[1];
    localB->ema[1] = ema;

    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Delay: '<S264>/Delay'

    rty_dydt[1] = (ema - Delay) / rtu_dt;

    // Delay: '<S264>/Delay'
    Delay = localDW->Delay_DSTATE[2];
    localB->Delay[2] = Delay;

    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Delay: '<S264>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[2];
    localB->ema[2] = ema;

    // MATLAB Function: '<S264>/MATLAB Function' incorporates:
    //   Delay: '<S264>/Delay'

    rty_dydt[2] = (ema - Delay) / rtu_dt;
  }

  // End of Outputs for SubSystem: '<S250>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S250>/Enabled Subsystem'
//    '<S269>/Enabled Subsystem'
//    '<S279>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_Update(B_EnabledSubsystem_GNC2026W_T *localB,
  DW_EnabledSubsystem_GNC2026W_T *localDW)
{
  // Update for Enabled SubSystem: '<S250>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S264>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S264>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S250>/Enabled Subsystem'
}

//
// System initialize for enable system:
//    '<S251>/Enabled Subsystem'
//    '<S270>/Enabled Subsystem'
//    '<S280>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_f_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_c_T *localDW, P_EnabledSubsystem_GNC2026W_c_T
  *localP)
{
  // InitializeConditions for Delay: '<S266>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S266>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S266>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S266>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S266>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S266>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S251>/Enabled Subsystem'
//    '<S270>/Enabled Subsystem'
//    '<S280>/Enabled Subsystem'
//
void GNC2_EnabledSubsystem_p_Disable(DW_EnabledSubsystem_GNC2026_c_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S251>/Enabled Subsystem'
//    '<S270>/Enabled Subsystem'
//    '<S280>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_g(const boolean_T rtu_Enable[3], real_T rtu_y,
  real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_GNC2026W_h_T *localB, DW_EnabledSubsystem_GNC2026_c_T
  *localDW, P_EnabledSubsystem_GNC2026W_c_T *localP)
{
  real_T x;

  // Outputs for Enabled SubSystem: '<S251>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S266>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    GNC2_EnabledSubsystem_p_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // Delay: '<S266>/Delay'
    localB->Delay[0] = localDW->Delay_DSTATE[0];
    localB->Delay[1] = localDW->Delay_DSTATE[1];
    localB->Delay[2] = localDW->Delay_DSTATE[2];

    // MATLAB Function: '<S266>/MATLAB Function' incorporates:
    //   Constant: '<S266>/Constant2'
    //   Delay: '<S266>/Delay'
    //   SignalConversion generated from: '<S267>/ SFunction '

    x = exp(-rtu_dt / localP->Constant2_Value);
    localB->ema[0] = (1.0 - (1.0 - x)) * localB->Delay[0] + (1.0 - x) * rtu_y;
    localB->ema[1] = (1.0 - (1.0 - x)) * localB->Delay[1] + (1.0 - x) * rtu_y_c;
    localB->ema[2] = (1.0 - (1.0 - x)) * localB->Delay[2] + (1.0 - x) * rtu_y_k;
    rty_dydt[0] = (localB->ema[0] - localB->Delay[0]) / rtu_dt;
    rty_dydt[1] = (localB->ema[1] - localB->Delay[1]) / rtu_dt;
    rty_dydt[2] = (localB->ema[2] - localB->Delay[2]) / rtu_dt;
  }

  // End of Outputs for SubSystem: '<S251>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S251>/Enabled Subsystem'
//    '<S270>/Enabled Subsystem'
//    '<S280>/Enabled Subsystem'
//
void GNC20_EnabledSubsystem_a_Update(B_EnabledSubsystem_GNC2026W_h_T *localB,
  DW_EnabledSubsystem_GNC2026_c_T *localDW)
{
  // Update for Enabled SubSystem: '<S251>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S266>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S266>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S251>/Enabled Subsystem'
}

static real_T GNC2026W_xzlangeM(const real_T x[24])
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

static void GNC2026W_xzlascl(real_T cfrom, real_T cto, real_T A[24])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
}

static real_T GNC2026W_xnrm2(int32_T n, const real_T x[24], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
  return scale * sqrt(y);
}

static real_T GNC2026W_xdotc(int32_T n, const real_T x[24], int32_T ix0, const
  real_T y[24], int32_T iy0)
{
  real_T d;
  int32_T b;
  d = 0.0;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  b = static_cast<uint8_T>(n);
  for (int32_T k = 0; k < b; k++) {
    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }

  return d;
}

static void GNC2026W_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[24],
  int32_T iy0)
{
  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += y[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
}

static real_T GNC2026W_xdotc_o(const real_T x[9], const real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  return y[iy0 - 1] * x[1] + x[2] * y[iy0];
}

static void GNC2026W_xaxpy_gop(real_T a, real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  if (!(a == 0.0)) {
    y[iy0 - 1] += a * y[1];
    y[iy0] += a * y[2];
  }

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
}

static real_T GNC2026W_xnrm2_p(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
  return scale * sqrt(y);
}

static void GNC2026W_xaxpy_g(int32_T n, real_T a, const real_T x[24], int32_T
  ix0, real_T y[8], int32_T iy0)
{
  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
}

static void GNC2026W_xaxpy_go(int32_T n, real_T a, const real_T x[8], int32_T
  ix0, real_T y[24], int32_T iy0)
{
  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
}

static void GNC2026W_xzlascl_i(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S300>/Pseudoinverse1'
}

static void GNC2026W_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b, real_T *
  c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  roe = b;
  absa = fabs(a);
  absb = fabs(b);
  if (absa > absb) {
    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    *b_a = sqrt(ads * ads + bds * bds) * scale;
    if (roe < 0.0) {
      *b_a = -*b_a;
    }

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    *c = a / *b_a;
    *s = b / *b_a;
    if (absa > absb) {
      *b_b = *s;
    } else if (*c != 0.0) {
      // Start for MATLABSystem: '<S300>/Pseudoinverse1'
      *b_b = 1.0 / *c;
    } else {
      *b_b = 1.0;
    }
  }
}

static void GNC2026W_xrot_ps(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
{
  real_T temp;
  real_T temp_tmp;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

static void GNC2026W_xrot_psj(real_T x[24], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
{
  for (int32_T k = 0; k < 8; k++) {
    real_T temp_tmp;
    real_T temp_tmp_0;
    int32_T temp_tmp_tmp;
    int32_T temp_tmp_tmp_0;

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    temp_tmp_tmp = (iy0 + k) - 1;
    temp_tmp = x[temp_tmp_tmp];

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    temp_tmp_tmp_0 = (ix0 + k) - 1;
    temp_tmp_0 = x[temp_tmp_tmp_0];

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    x[temp_tmp_tmp] = temp_tmp * c - temp_tmp_0 * s;
    x[temp_tmp_tmp_0] = temp_tmp_0 * c + temp_tmp * s;
  }
}

static void GNC2026W_xswap_dj(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

static void GNC2026W_xswap_dj5(real_T x[24], int32_T ix0, int32_T iy0)
{
  for (int32_T k = 0; k < 8; k++) {
    real_T temp;
    int32_T temp_tmp;
    int32_T tmp;

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    temp_tmp = (ix0 + k) - 1;
    temp = x[temp_tmp];

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    tmp = (iy0 + k) - 1;
    x[temp_tmp] = x[tmp];
    x[tmp] = temp;
  }
}

static void GNC2026W_svd(const real_T A[24], real_T U[24], real_T s[3], real_T
  V[9])
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

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  anrm = GNC2026W_xzlangeM(A);
  cscale = anrm;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    GNC2026W_xzlascl(anrm, cscale, A_0);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    GNC2026W_xzlascl(anrm, cscale, A_0);
  }

  for (i = 0; i < 3; i++) {
    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    qp1 = i + 2;
    qq_tmp_tmp = i << 3;

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    colqp1 = qq_tmp_tmp + i;
    qq = colqp1 + 1;
    apply_transform = false;

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    nrm = GNC2026W_xnrm2(8 - i, A_0, colqp1 + 1);
    if (nrm > 0.0) {
      apply_transform = true;

      // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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
      // Start for MATLABSystem: '<S300>/Pseudoinverse1'
      qjj = (((qq - 1) << 3) + i) + 1;
      if (apply_transform) {
        // Start for MATLABSystem: '<S300>/Pseudoinverse1'
        GNC2026W_xaxpy(8 - i, -(GNC2026W_xdotc(8 - i, A_0, colqp1 + 1, A_0, qjj)
          / A_0[colqp1]), colqp1 + 1, A_0, qjj);
      }

      e[qq - 1] = A_0[qjj - 1];
    }

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    for (colqp1 = i + 1; colqp1 < 9; colqp1++) {
      qjj = (qq_tmp_tmp + colqp1) - 1;
      U[qjj] = A_0[qjj];
    }

    if (i + 1 <= 1) {
      nrm = GNC2026W_xnrm2_p(e, i + 2);
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
          GNC2026W_xaxpy_g(7 - i, e[colqp1 - 1], A_0, (i + ((colqp1 - 1) << 3))
                           + 2, work, i + 2);
        }

        for (colqp1 = qp1; colqp1 < 4; colqp1++) {
          GNC2026W_xaxpy_go(7 - i, -e[colqp1 - 1] / e[i + 1], work, i + 2, A_0,
                            (i + ((colqp1 - 1) << 3)) + 2);
        }
      }

      for (colqp1 = qp1; colqp1 < 4; colqp1++) {
        Vf[colqp1 - 1] = e[colqp1 - 1];
      }
    }
  }

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  i = 2;
  e[1] = A_0[17];
  e[2] = 0.0;

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  for (qp1 = 2; qp1 >= 0; qp1--) {
    colqp1 = qp1 << 3;
    qq = colqp1 + qp1;
    if (s_0[qp1] != 0.0) {
      for (qq_tmp_tmp = qp1 + 2; qq_tmp_tmp < 4; qq_tmp_tmp++) {
        qjj = (((qq_tmp_tmp - 1) << 3) + qp1) + 1;
        GNC2026W_xaxpy(8 - qp1, -(GNC2026W_xdotc(8 - qp1, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
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
      GNC2026W_xaxpy_gop(-(GNC2026W_xdotc_o(Vf, Vf, 5) / Vf[1]), Vf, 5);
      GNC2026W_xaxpy_gop(-(GNC2026W_xdotc_o(Vf, Vf, 8) / Vf[1]), Vf, 8);
    }

    Vf[3 * qp1] = 0.0;
    Vf[3 * qp1 + 1] = 0.0;
    Vf[3 * qp1 + 2] = 0.0;
    Vf[qp1 + 3 * qp1] = 1.0;
  }

  for (qp1 = 0; qp1 < 3; qp1++) {
    r = s_0[qp1];
    if (r != 0.0) {
      // Start for MATLABSystem: '<S300>/Pseudoinverse1'
      nrm = fabs(r);
      r /= nrm;
      s_0[qp1] = nrm;

      // Start for MATLABSystem: '<S300>/Pseudoinverse1'
      if (qp1 + 1 < 3) {
        e[qp1] /= r;
      }

      qq = qp1 << 3;

      // Start for MATLABSystem: '<S300>/Pseudoinverse1'
      for (qjj = qq + 1; qjj <= qq + 8; qjj++) {
        U[qjj - 1] *= r;
      }
    }

    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  ztest = fabs(s_0[0]);
  nrm = fabs(e[0]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(nrm <= 0.0)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  ztest = fabs(s_0[1]);
  nrm = fabs(e[1]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  ztest = fabs(s_0[2]);
  nrm = fabs(e[2]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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
        GNC2026W_xrotg(s_0[qq - 1], nrm, &s_0[qq - 1], &nrm, &ztest, &sqds);
        if (qq > colqp1 + 1) {
          nrm = -sqds * e[0];
          e[0] *= ztest;
        }

        GNC2026W_xrot_ps(Vf, 3 * (qq - 1) + 1, 3 * i + 1, ztest, sqds);
      }
      break;

     case 2:
      nrm = e[colqp1 - 1];
      e[colqp1 - 1] = 0.0;
      for (qq = colqp1 + 1; qq <= i + 1; qq++) {
        GNC2026W_xrotg(s_0[qq - 1], nrm, &s_0[qq - 1], &ztest, &sqds, &b);
        ztest = e[qq - 1];
        nrm = -b * ztest;
        e[qq - 1] = ztest * sqds;
        GNC2026W_xrot_psj(U, ((qq - 1) << 3) + 1, ((colqp1 - 1) << 3) + 1, sqds,
                          b);
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
        GNC2026W_xrotg(nrm, ztest, &smm1, &emm1, &sqds, &b);
        if (qq > colqp1 + 1) {
          e[0] = smm1;
        }

        smm1 = e[qq - 1];
        nrm = s_0[qq - 1];
        e[qq - 1] = smm1 * sqds - nrm * b;
        ztest = b * s_0[qq];
        s_0[qq] *= sqds;
        GNC2026W_xrot_ps(Vf, 3 * (qq - 1) + 1, 3 * qq + 1, sqds, b);
        GNC2026W_xrotg(nrm * sqds + smm1 * b, ztest, &s_0[qq - 1], &a__3, &emm1,
                       &d_sn);
        smm1 = e[qq - 1];
        nrm = smm1 * emm1 + d_sn * s_0[qq];
        s_0[qq] = smm1 * -d_sn + emm1 * s_0[qq];
        ztest = d_sn * e[qq];
        e[qq] *= emm1;
        GNC2026W_xrot_psj(U, ((qq - 1) << 3) + 1, (qq << 3) + 1, emm1, d_sn);
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
        GNC2026W_xswap_dj(Vf, 3 * colqp1 + 1, 3 * (colqp1 + 1) + 1);
        GNC2026W_xswap_dj5(U, (colqp1 << 3) + 1, ((colqp1 + 1) << 3) + 1);
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
    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
    GNC2026W_xzlascl_i(cscale, anrm, s);
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
void GNC2026W_Pseudoinverse1_Init(DW_Pseudoinverse1_GNC2026W_T *localDW)
{
  // Start for MATLABSystem: '<S300>/Pseudoinverse1'
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

// Output and update for atomic system:
void GNC2026W_Pseudoinverse1(const real_T rtu_0[24], B_Pseudoinverse1_GNC2026W_T
  *localB)
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

  // MATLABSystem: '<S300>/Pseudoinverse1'
  for (i = 0; i < 24; i++) {
    // Start for MATLABSystem: '<S300>/Pseudoinverse1'
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
      GNC2026W_svd(A, U, s, V);
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

  // End of MATLABSystem: '<S300>/Pseudoinverse1'
}

// Function for MATLAB Function: '<S297>/MATLAB Function1'
static real_T GNC2026W_maximum(const real_T x[8])
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
//    '<S297>/MATLAB Function1'
//    '<S309>/MATLAB Function1'
//    '<S321>/MATLAB Function8'
//
void GNC2026W_MATLABFunction1(const real_T rtu_ThrustPer[8], real_T
  rty_ThrustPer_Final[8])
{
  real_T TControl;
  real_T ThrustPer_Sat;
  real_T maxval;
  int32_T i;
  TControl = 1.0 / GNC2026W_P.PWMFreq;
  maxval = GNC2026W_maximum(rtu_ThrustPer);
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

// Function for MATLAB Function: '<S297>/MATLAB Function5'
static real_T GNC2026W_maximum_e(const real_T x[8])
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

// Function for MATLAB Function: '<S297>/MATLAB Function5'
static real_T GNC2026W_norm(const real_T x[3])
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
//    '<S297>/MATLAB Function5'
//    '<S309>/MATLAB Function5'
//    '<S321>/MATLAB Function5'
//
void GNC2026W_MATLABFunction5(const real_T rtu_u_desired[3], const real_T
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
      current_obj = GNC2026W_P.F_red_X_nominal * thrust_decay_factor / 2.0;
      gradient[0] = current_obj;
      gradient[1] = current_obj;
      thrust_decay_factor = GNC2026W_P.F_red_Y_nominal * thrust_decay_factor /
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
        b[3 * i + 2] = GNC2026W_P.thruster_dist2CG_RED[i] / 1000.0;
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

        current_obj = GNC2026W_norm(H_0);
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

          new_obj = GNC2026W_norm(H_0);
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

      thrust_decay_factor = GNC2026W_maximum_e(x);
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
        current_obj = GNC2026W_P.F_red_X_nominal * thrust_decay_factor;
        gradient[0] = current_obj;
        gradient[1] = current_obj;
        thrust_decay_factor *= GNC2026W_P.F_red_Y_nominal;
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
      current_obj = GNC2026W_P.F_red_X_nominal * thrust_decay_factor;
      gradient[0] = current_obj;
      gradient[1] = current_obj;
      thrust_decay_factor *= GNC2026W_P.F_red_Y_nominal;
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
        b[3 * iter + 2] = GNC2026W_P.thruster_dist2CG_RED[iter] / 1000.0;
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
//    '<S303>/Create Rotation Matrix'
//    '<S315>/Create Rotation Matrix'
//    '<S327>/Create Rotation Matrix'
//
void GNC2026W_CreateRotationMatrix(real_T rtu_Rz, real_T rty_C_Ib[4])
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
//    '<S298>/Create Rotation Matrix'
//    '<S310>/Create Rotation Matrix'
//    '<S322>/Create Rotation Matrix'
//
void GNC2026W_CreateRotationMatrix_a(real_T rtu_Rz, real_T rty_C_bI[4])
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
//    '<S18>/Change BLACK Behavior'
//    '<S18>/Change BLUE Behavior'
//    '<S18>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_e_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW, P_ChangeBLACKBehavior_GNC20_b_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S333>/UDP Send (Clock)'
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
      GNC2026W_M->setErrorStatus(sErr);
      GNC2026W_M->setStopRequested(1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S333>/UDP Send (Clock)'
}

//
// Outputs for action system:
//    '<S18>/Change BLACK Behavior'
//    '<S18>/Change BLUE Behavior'
//    '<S18>/Change RED Behavior'
//
void GNC2026W_ChangeBLACKBehavior_i(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  B_ChangeBLACKBehavior_GNC20_m_T *localB)
{
  // Clock: '<S333>/Clock1'
  localB->Clock1 = GNC2026W_M->Timing.t[0];
}

//
// Update for action system:
//    '<S18>/Change BLACK Behavior'
//    '<S18>/Change BLUE Behavior'
//    '<S18>/Change RED Behavior'
//
void GN_ChangeBLACKBehavior_n_Update(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  B_ChangeBLACKBehavior_GNC20_m_T *localB, DW_ChangeBLACKBehavior_GNC2_g_T
  *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S333>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendClock_NetworkLib[0U], &localB->Clock1, 1);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S333>/UDP Send (Clock)'
}

//
// Termination for action system:
//    '<S18>/Change BLACK Behavior'
//    '<S18>/Change BLUE Behavior'
//    '<S18>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_f_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S333>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSendClock_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S333>/UDP Send (Clock)'
}

static real_T GNC2026W_rand(void)
{
  real_T r;
  uint32_T b_u[2];

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  if (GNC2026W_DW.state_b == 4U) {
    int32_T k;
    uint32_T mti;
    uint32_T y;
    k = static_cast<int32_T>(GNC2026W_DW.method_e / 127773U);
    mti = (GNC2026W_DW.method_e - static_cast<uint32_T>(k) * 127773U) * 16807U;
    y = 2836U * static_cast<uint32_T>(k);
    if (mti < y) {
      GNC2026W_DW.method_e = ~(y - mti) & 2147483647U;
    } else {
      GNC2026W_DW.method_e = mti - y;
    }

    r = static_cast<real_T>(GNC2026W_DW.method_e) * 4.6566128752457969E-10;
  } else if (GNC2026W_DW.state_b == 5U) {
    uint32_T mti;
    uint32_T y;
    mti = 69069U * GNC2026W_DW.state_jw[0] + 1234567U;
    y = GNC2026W_DW.state_jw[1] << 13 ^ GNC2026W_DW.state_jw[1];
    y ^= y >> 17;
    y ^= y << 5;
    GNC2026W_DW.state_jw[0] = mti;
    GNC2026W_DW.state_jw[1] = y;
    r = static_cast<real_T>(mti + y) * 2.328306436538696E-10;
  } else {
    uint32_T mti;
    uint32_T y;

    // ========================= COPYRIGHT NOTICE ============================
    //  This is a uniform (0,1) pseudorandom number generator based on:
    //
    //  A C-program for MT19937, with initialization improved 2002/1/26.
    //  Coded by Takuji Nishimura and Makoto Matsumoto.
    //
    //  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,
    //  All rights reserved.
    //
    //  Redistribution and use in source and binary forms, with or without
    //  modification, are permitted provided that the following conditions
    //  are met:
    //
    //    1. Redistributions of source code must retain the above copyright
    //       notice, this list of conditions and the following disclaimer.
    //
    //    2. Redistributions in binary form must reproduce the above copyright
    //       notice, this list of conditions and the following disclaimer
    //       in the documentation and/or other materials provided with the
    //       distribution.
    //
    //    3. The names of its contributors may not be used to endorse or
    //       promote products derived from this software without specific
    //       prior written permission.
    //
    //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
    //  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
    //  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
    //  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
    //  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
    //  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
    //  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    //  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    //  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    //
    // =============================   END   =================================
    int32_T exitg1;
    do {
      int32_T k;
      exitg1 = 0;
      for (k = 0; k < 2; k++) {
        mti = GNC2026W_DW.state_d[624] + 1U;
        if (GNC2026W_DW.state_d[624] + 1U >= 625U) {
          for (int32_T b_kk = 0; b_kk < 227; b_kk++) {
            y = (GNC2026W_DW.state_d[b_kk + 1] & 2147483647U) |
              (GNC2026W_DW.state_d[b_kk] & 2147483648U);
            if ((y & 1U) == 0U) {
              mti = y >> 1U;
            } else {
              mti = y >> 1U ^ 2567483615U;
            }

            GNC2026W_DW.state_d[b_kk] = GNC2026W_DW.state_d[b_kk + 397] ^ mti;
          }

          for (int32_T b_kk = 0; b_kk < 396; b_kk++) {
            y = (GNC2026W_DW.state_d[b_kk + 227] & 2147483648U) |
              (GNC2026W_DW.state_d[b_kk + 228] & 2147483647U);
            if ((y & 1U) == 0U) {
              mti = y >> 1U;
            } else {
              mti = y >> 1U ^ 2567483615U;
            }

            GNC2026W_DW.state_d[b_kk + 227] = GNC2026W_DW.state_d[b_kk] ^ mti;
          }

          y = (GNC2026W_DW.state_d[623] & 2147483648U) | (GNC2026W_DW.state_d[0]
            & 2147483647U);
          if ((y & 1U) == 0U) {
            mti = y >> 1U;
          } else {
            mti = y >> 1U ^ 2567483615U;
          }

          GNC2026W_DW.state_d[623] = GNC2026W_DW.state_d[396] ^ mti;
          mti = 1U;
        }

        y = GNC2026W_DW.state_d[static_cast<int32_T>(mti) - 1];
        GNC2026W_DW.state_d[624] = mti;
        y ^= y >> 11U;
        y ^= y << 7U & 2636928640U;
        y ^= y << 15U & 4022730752U;
        b_u[k] = y >> 18U ^ y;
      }

      mti = b_u[0] >> 5U;
      y = b_u[1] >> 6U;
      if ((mti == 0U) && (y == 0U)) {
        boolean_T b_isvalid;
        if ((GNC2026W_DW.state_d[624] >= 1U) && (GNC2026W_DW.state_d[624] < 625U))
        {
          b_isvalid = true;
        } else {
          b_isvalid = false;
        }

        if (b_isvalid) {
          boolean_T exitg2;
          b_isvalid = false;
          k = 0;
          exitg2 = false;
          while ((!exitg2) && (k + 1 < 625)) {
            if (GNC2026W_DW.state_d[k] == 0U) {
              k++;
            } else {
              b_isvalid = true;
              exitg2 = true;
            }
          }
        }

        if (!b_isvalid) {
          mti = 5489U;
          GNC2026W_DW.state_d[0] = 5489U;
          for (k = 0; k < 623; k++) {
            mti = ((mti >> 30U ^ mti) * 1812433253U + static_cast<uint32_T>(k))
              + 1U;
            GNC2026W_DW.state_d[k + 1] = mti;
          }

          GNC2026W_DW.state_d[624] = 624U;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    r = (static_cast<real_T>(mti) * 6.7108864E+7 + static_cast<real_T>(y)) *
      1.1102230246251565E-16;
  }

  // End of Start for MATLABSystem: '<Root>/Dropped Frames'
  return r;
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static real_T GNC2026W_xzlangeM_a(const real_T x[9])
{
  real_T y;
  int32_T k;
  boolean_T exitg1;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    real_T absxk;
    absxk = fabs(x[k]);
    if (rtIsNaN(absxk)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }

      k++;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xzlascl_e(real_T cfrom, real_T cto, real_T A[9])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
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

    for (int32_T j = 0; j < 3; j++) {
      int32_T offset;
      offset = j * 3;
      A[offset] *= mul;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
    }
  }
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static real_T GNC2026W_xnrm2_g(int32_T n, const real_T x[9], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;
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

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static real_T GNC2026W_xdotc_p(int32_T n, const real_T x[9], int32_T ix0, const
  real_T y[9], int32_T iy0)
{
  real_T d;
  int32_T b;
  d = 0.0;
  b = static_cast<uint8_T>(n);
  for (int32_T k = 0; k < b; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }

  return d;
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xaxpy_l(int32_T n, real_T a, int32_T ix0, real_T y[9],
  int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += y[(ix0 + k) - 1] * a;
    }
  }
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static real_T GNC2026W_xnrm2_g1(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
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

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xaxpy_lx(int32_T n, real_T a, const real_T x[9], int32_T
  ix0, real_T y[3], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xaxpy_lx2(int32_T n, real_T a, const real_T x[3], int32_T
  ix0, real_T y[9], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xzlascl_eg(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
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
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xswap_g(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;
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

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xrotg_b(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;
  roe = *b;
  absa = fabs(*a);
  absb = fabs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *a = 0.0;
    *b = 0.0;
  } else {
    real_T ads;
    real_T bds;
    ads = absa / scale;
    bds = absb / scale;
    scale *= sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }

    *a = scale;
  }
}

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_xrot_d(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
{
  real_T temp;
  real_T temp_tmp;
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

// Function for MATLAB Function: '<S144>/MATLAB Function3'
static void GNC2026W_svd_n(const real_T A[9], real_T U[9], real_T s[3], real_T
  V[9])
{
  real_T Vf[9];
  real_T b_A[9];
  real_T b_s[3];
  real_T e[3];
  real_T work[3];
  real_T anrm;
  real_T cscale;
  real_T emm1;
  real_T nrm;
  real_T r;
  real_T rt;
  real_T shift;
  real_T smm1;
  real_T sqds;
  int32_T e_k;
  int32_T m;
  int32_T qjj;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T doscale;
  boolean_T exitg1;
  b_s[0] = 0.0;
  e[0] = 0.0;
  work[0] = 0.0;
  b_s[1] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  b_s[2] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  for (qs = 0; qs < 9; qs++) {
    b_A[qs] = A[qs];
    U[qs] = 0.0;
    Vf[qs] = 0.0;
  }

  doscale = false;
  anrm = GNC2026W_xzlangeM_a(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    GNC2026W_xzlascl_e(anrm, cscale, b_A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    GNC2026W_xzlascl_e(anrm, cscale, b_A);
  }

  for (m = 0; m < 2; m++) {
    qp1 = m + 2;
    qs = 3 * m + m;
    qq = qs + 1;
    apply_transform = false;
    nrm = GNC2026W_xnrm2_g(3 - m, b_A, qs + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qs] < 0.0) {
        nrm = -nrm;
      }

      b_s[m] = nrm;
      if (fabs(nrm) >= 1.0020841800044864E-292) {
        nrm = 1.0 / nrm;
        qjj = (qs - m) + 3;
        for (e_k = qq; e_k <= qjj; e_k++) {
          b_A[e_k - 1] *= nrm;
        }
      } else {
        qjj = (qs - m) + 3;
        for (e_k = qq; e_k <= qjj; e_k++) {
          b_A[e_k - 1] /= b_s[m];
        }
      }

      b_A[qs]++;
      b_s[m] = -b_s[m];
    } else {
      b_s[m] = 0.0;
    }

    for (qq = qp1; qq < 4; qq++) {
      qjj = (qq - 1) * 3 + m;
      if (apply_transform) {
        GNC2026W_xaxpy_l(3 - m, -(GNC2026W_xdotc_p(3 - m, b_A, qs + 1, b_A, qjj
          + 1) / b_A[qs]), qs + 1, b_A, qjj + 1);
      }

      e[qq - 1] = b_A[qjj];
    }

    for (qq = m + 1; qq < 4; qq++) {
      qs = (3 * m + qq) - 1;
      U[qs] = b_A[qs];
    }

    if (m + 1 <= 1) {
      nrm = GNC2026W_xnrm2_g1(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }

        nrm = e[0];
        if (fabs(e[0]) >= 1.0020841800044864E-292) {
          nrm = 1.0 / e[0];
          for (qq = qp1; qq < 4; qq++) {
            e[qq - 1] *= nrm;
          }
        } else {
          for (qq = qp1; qq < 4; qq++) {
            e[qq - 1] /= nrm;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (qq = qp1; qq < 4; qq++) {
          work[qq - 1] = 0.0;
        }

        for (qq = qp1; qq < 4; qq++) {
          GNC2026W_xaxpy_lx(2, e[qq - 1], b_A, 3 * (qq - 1) + 2, work, 2);
        }

        for (qq = qp1; qq < 4; qq++) {
          GNC2026W_xaxpy_lx2(2, -e[qq - 1] / e[1], work, 2, b_A, 3 * (qq - 1) +
                             2);
        }
      }

      for (qq = qp1; qq < 4; qq++) {
        Vf[qq - 1] = e[qq - 1];
      }
    }
  }

  m = 1;
  b_s[2] = b_A[8];
  e[1] = b_A[7];
  e[2] = 0.0;
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (qp1 = 1; qp1 >= 0; qp1--) {
    qq = 3 * qp1 + qp1;
    if (b_s[qp1] != 0.0) {
      for (qs = qp1 + 2; qs < 4; qs++) {
        qjj = ((qs - 1) * 3 + qp1) + 1;
        GNC2026W_xaxpy_l(3 - qp1, -(GNC2026W_xdotc_p(3 - qp1, U, qq + 1, U, qjj)
          / U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1 + 1; qjj < 4; qjj++) {
        qs = (3 * qp1 + qjj) - 1;
        U[qs] = -U[qs];
      }

      U[qq]++;
      if (qp1 - 1 >= 0) {
        U[3 * qp1] = 0.0;
      }
    } else {
      U[3 * qp1] = 0.0;
      U[3 * qp1 + 1] = 0.0;
      U[3 * qp1 + 2] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (qp1 = 2; qp1 >= 0; qp1--) {
    if ((qp1 + 1 <= 1) && (e[0] != 0.0)) {
      GNC2026W_xaxpy_l(2, -(GNC2026W_xdotc_p(2, Vf, 2, Vf, 5) / Vf[1]), 2, Vf, 5);
      GNC2026W_xaxpy_l(2, -(GNC2026W_xdotc_p(2, Vf, 2, Vf, 8) / Vf[1]), 2, Vf, 8);
    }

    Vf[3 * qp1] = 0.0;
    Vf[3 * qp1 + 1] = 0.0;
    Vf[3 * qp1 + 2] = 0.0;
    Vf[qp1 + 3 * qp1] = 1.0;
  }

  qp1 = 0;
  nrm = 0.0;
  for (qq = 0; qq < 3; qq++) {
    r = b_s[qq];
    if (r != 0.0) {
      rt = fabs(r);
      r /= rt;
      b_s[qq] = rt;
      if (qq + 1 < 3) {
        e[qq] /= r;
      }

      qs = 3 * qq + 1;
      for (qjj = qs; qjj <= qs + 2; qjj++) {
        U[qjj - 1] *= r;
      }
    }

    if (qq + 1 < 3) {
      r = e[qq];
      if (r != 0.0) {
        rt = fabs(r);
        r = rt / r;
        e[qq] = rt;
        b_s[qq + 1] *= r;
        qs = (qq + 1) * 3 + 1;
        for (qjj = qs; qjj <= qs + 2; qjj++) {
          Vf[qjj - 1] *= r;
        }
      }
    }

    r = fabs(b_s[qq]);
    rt = fabs(e[qq]);
    if ((r >= rt) || rtIsNaN(rt)) {
      rt = r;
    }

    if ((!(nrm >= rt)) && (!rtIsNaN(rt))) {
      nrm = rt;
    }
  }

  while ((m + 2 > 0) && (qp1 < 75)) {
    qq = m + 1;
    exitg1 = false;
    while (!(exitg1 || (qq == 0))) {
      rt = fabs(e[qq - 1]);
      if (rt <= (fabs(b_s[qq - 1]) + fabs(b_s[qq])) * 2.2204460492503131E-16) {
        e[qq - 1] = 0.0;
        exitg1 = true;
      } else if ((rt <= 1.0020841800044864E-292) || ((qp1 > 20) && (rt <=
                   2.2204460492503131E-16 * nrm))) {
        e[qq - 1] = 0.0;
        exitg1 = true;
      } else {
        qq--;
      }
    }

    if (m + 1 == qq) {
      qjj = 4;
    } else {
      qs = m + 2;
      qjj = m + 2;
      exitg1 = false;
      while ((!exitg1) && (qjj >= qq)) {
        qs = qjj;
        if (qjj == qq) {
          exitg1 = true;
        } else {
          rt = 0.0;
          if (qjj < m + 2) {
            rt = fabs(e[qjj - 1]);
          }

          if (qjj > qq + 1) {
            rt += fabs(e[qjj - 2]);
          }

          r = fabs(b_s[qjj - 1]);
          if ((r <= 2.2204460492503131E-16 * rt) || (r <=
               1.0020841800044864E-292)) {
            b_s[qjj - 1] = 0.0;
            exitg1 = true;
          } else {
            qjj--;
          }
        }
      }

      if (qs == qq) {
        qjj = 3;
      } else if (m + 2 == qs) {
        qjj = 1;
      } else {
        qjj = 2;
        qq = qs;
      }
    }

    switch (qjj) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      for (qs = m + 1; qs >= qq + 1; qs--) {
        GNC2026W_xrotg_b(&b_s[qs - 1], &rt, &r, &sqds);
        if (qs > qq + 1) {
          rt = -sqds * e[0];
          e[0] *= r;
        }

        GNC2026W_xrot_d(Vf, 3 * (qs - 1) + 1, 3 * (m + 1) + 1, r, sqds);
      }
      break;

     case 2:
      rt = e[qq - 1];
      e[qq - 1] = 0.0;
      for (qs = qq + 1; qs <= m + 2; qs++) {
        GNC2026W_xrotg_b(&b_s[qs - 1], &rt, &sqds, &smm1);
        r = e[qs - 1];
        rt = -smm1 * r;
        e[qs - 1] = r * sqds;
        GNC2026W_xrot_d(U, 3 * (qs - 1) + 1, 3 * (qq - 1) + 1, sqds, smm1);
      }
      break;

     case 3:
      sqds = b_s[m + 1];
      r = fabs(sqds);
      rt = fabs(b_s[m]);
      if ((r >= rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[m]);
      if ((rt >= r) || rtIsNaN(r)) {
        r = rt;
      }

      rt = fabs(b_s[qq]);
      if ((r >= rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[qq]);
      if ((rt >= r) || rtIsNaN(r)) {
        r = rt;
      }

      rt = sqds / r;
      smm1 = b_s[m] / r;
      emm1 = e[m] / r;
      sqds = b_s[qq] / r;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      r = e[qq] / r * sqds;
      for (e_k = qq + 1; e_k <= m + 1; e_k++) {
        GNC2026W_xrotg_b(&rt, &r, &sqds, &smm1);
        if (e_k > qq + 1) {
          e[0] = rt;
        }

        r = e[e_k - 1];
        emm1 = b_s[e_k - 1];
        e[e_k - 1] = r * sqds - emm1 * smm1;
        rt = smm1 * b_s[e_k];
        b_s[e_k] *= sqds;
        qs = (e_k - 1) * 3 + 1;
        qjj = 3 * e_k + 1;
        GNC2026W_xrot_d(Vf, qs, qjj, sqds, smm1);
        b_s[e_k - 1] = emm1 * sqds + r * smm1;
        GNC2026W_xrotg_b(&b_s[e_k - 1], &rt, &sqds, &smm1);
        emm1 = e[e_k - 1];
        rt = emm1 * sqds + smm1 * b_s[e_k];
        b_s[e_k] = emm1 * -smm1 + sqds * b_s[e_k];
        r = smm1 * e[e_k];
        e[e_k] *= sqds;
        GNC2026W_xrot_d(U, qs, qjj, sqds, smm1);
      }

      e[m] = rt;
      qp1++;
      break;

     default:
      if (b_s[qq] < 0.0) {
        b_s[qq] = -b_s[qq];
        qp1 = 3 * qq + 1;
        for (qs = qp1; qs <= qp1 + 2; qs++) {
          Vf[qs - 1] = -Vf[qs - 1];
        }
      }

      qp1 = qq + 1;
      while ((qq + 1 < 3) && (b_s[qq] < b_s[qp1])) {
        rt = b_s[qq];
        b_s[qq] = b_s[qp1];
        b_s[qp1] = rt;
        qs = 3 * qq + 1;
        qjj = (qq + 1) * 3 + 1;
        GNC2026W_xswap_g(Vf, qs, qjj);
        GNC2026W_xswap_g(U, qs, qjj);
        qq = qp1;
        qp1++;
      }

      qp1 = 0;
      m--;
      break;
    }
  }

  s[0] = b_s[0];
  s[1] = b_s[1];
  s[2] = b_s[2];
  if (doscale) {
    GNC2026W_xzlascl_eg(cscale, anrm, s);
  }

  for (m = 0; m < 3; m++) {
    V[3 * m] = Vf[3 * m];
    qp1 = 3 * m + 1;
    V[qp1] = Vf[qp1];
    qp1 = 3 * m + 2;
    V[qp1] = Vf[qp1];
  }
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

// Function for MATLAB Function: '<S214>/EKF'
static real_T GNC2026W_xnrm2_h(int32_T n, const real_T x_data[], int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      real_T scale;
      int32_T kend;
      scale = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (int32_T k = ix0; k < kend; k++) {
        real_T absxk;
        absxk = fabs(x_data[k - 1]);
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

      y = scale * sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt(b * b + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

// Function for MATLAB Function: '<S214>/EKF'
static void GNC2026W_xgeqp3(real_T A_data[], const int32_T A_size[2], real_T
  tau_data[], int32_T *tau_size, int32_T jpvt_data[], int32_T jpvt_size[2])
{
  real_T vn1_data[3];
  real_T vn2_data[3];
  real_T work_data[3];
  real_T s;
  real_T smax;
  real_T temp2;
  int32_T b_i;
  int32_T b_ix;
  int32_T exitg1;
  int32_T ii;
  int32_T itemp;
  int32_T k;
  int32_T l;
  int32_T lastv;
  int32_T m_tmp;
  int32_T minmana;
  int32_T mmi;
  int32_T n_tmp;
  int32_T nmi;
  int32_T pvt;
  int32_T temp_tmp;
  boolean_T exitg2;
  boolean_T guard1;
  m_tmp = A_size[0];
  n_tmp = A_size[1];
  if (A_size[0] <= A_size[1]) {
    minmana = A_size[0];
  } else {
    minmana = A_size[1];
  }

  *tau_size = minmana;
  if (minmana - 1 >= 0) {
    memset(&tau_data[0], 0, static_cast<uint32_T>(minmana) * sizeof(real_T));
  }

  guard1 = false;
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
    guard1 = true;
  } else {
    if (A_size[0] <= A_size[1]) {
      itemp = A_size[0];
    } else {
      itemp = A_size[1];
    }

    if (itemp < 1) {
      guard1 = true;
    } else {
      jpvt_size[0] = 1;
      jpvt_size[1] = A_size[1];
      for (k = 0; k < n_tmp; k++) {
        jpvt_data[k] = k + 1;
      }

      if (minmana - 1 >= 0) {
        memset(&tau_data[0], 0, static_cast<uint32_T>(minmana) * sizeof(real_T));
      }

      for (minmana = 0; minmana < n_tmp; minmana++) {
        work_data[minmana] = 0.0;
        smax = GNC2026W_xnrm2_h(m_tmp, A_data, minmana * m_tmp + 1);
        vn1_data[minmana] = smax;
        vn2_data[minmana] = smax;
      }

      if (A_size[0] <= A_size[1]) {
        k = A_size[0];
      } else {
        k = A_size[1];
      }

      for (minmana = 0; minmana < k; minmana++) {
        lastv = minmana * m_tmp;
        ii = lastv + minmana;
        nmi = n_tmp - minmana;
        mmi = m_tmp - minmana;
        if (nmi < 1) {
          pvt = -1;
        } else {
          pvt = 0;
          if (nmi > 1) {
            smax = fabs(vn1_data[minmana]);
            for (itemp = 2; itemp <= nmi; itemp++) {
              s = fabs(vn1_data[(minmana + itemp) - 1]);
              if (s > smax) {
                pvt = itemp - 1;
                smax = s;
              }
            }
          }
        }

        pvt += minmana;
        if (pvt != minmana) {
          b_ix = pvt * m_tmp;
          for (b_i = 0; b_i < m_tmp; b_i++) {
            temp_tmp = b_ix + b_i;
            smax = A_data[temp_tmp];
            itemp = lastv + b_i;
            A_data[temp_tmp] = A_data[itemp];
            A_data[itemp] = smax;
          }

          itemp = jpvt_data[pvt];
          jpvt_data[pvt] = jpvt_data[minmana];
          jpvt_data[minmana] = itemp;
          vn1_data[pvt] = vn1_data[minmana];
          vn2_data[pvt] = vn2_data[minmana];
        }

        if (minmana + 1 < m_tmp) {
          s = A_data[ii];
          lastv = ii + 2;
          tau_data[minmana] = 0.0;
          if (mmi > 0) {
            smax = GNC2026W_xnrm2_h(mmi - 1, A_data, ii + 2);
            if (smax != 0.0) {
              smax = rt_hypotd_snf(A_data[ii], smax);
              if (A_data[ii] >= 0.0) {
                smax = -smax;
              }

              if (fabs(smax) < 1.0020841800044864E-292) {
                pvt = 0;
                b_i = ii + mmi;
                do {
                  pvt++;
                  for (b_ix = lastv; b_ix <= b_i; b_ix++) {
                    A_data[b_ix - 1] *= 9.9792015476736E+291;
                  }

                  smax *= 9.9792015476736E+291;
                  s *= 9.9792015476736E+291;
                } while ((fabs(smax) < 1.0020841800044864E-292) && (pvt < 20));

                smax = rt_hypotd_snf(s, GNC2026W_xnrm2_h(mmi - 1, A_data, ii + 2));
                if (s >= 0.0) {
                  smax = -smax;
                }

                tau_data[minmana] = (smax - s) / smax;
                s = 1.0 / (s - smax);
                for (b_ix = lastv; b_ix <= b_i; b_ix++) {
                  A_data[b_ix - 1] *= s;
                }

                for (lastv = 0; lastv < pvt; lastv++) {
                  smax *= 1.0020841800044864E-292;
                }

                s = smax;
              } else {
                tau_data[minmana] = (smax - A_data[ii]) / smax;
                s = 1.0 / (A_data[ii] - smax);
                b_i = ii + mmi;
                for (pvt = lastv; pvt <= b_i; pvt++) {
                  A_data[pvt - 1] *= s;
                }

                s = smax;
              }
            }
          }

          A_data[ii] = s;
        } else {
          tau_data[minmana] = 0.0;
        }

        if (minmana + 1 < n_tmp) {
          smax = A_data[ii];
          A_data[ii] = 1.0;
          pvt = (ii + m_tmp) + 1;
          if (tau_data[minmana] != 0.0) {
            lastv = mmi - 1;
            b_i = (ii + mmi) - 1;
            while ((lastv + 1 > 0) && (A_data[b_i] == 0.0)) {
              lastv--;
              b_i--;
            }

            nmi--;
            exitg2 = false;
            while ((!exitg2) && (nmi > 0)) {
              b_i = (nmi - 1) * m_tmp + pvt;
              b_ix = b_i;
              do {
                exitg1 = 0;
                if (b_ix <= b_i + lastv) {
                  if (A_data[b_ix - 1] != 0.0) {
                    exitg1 = 1;
                  } else {
                    b_ix++;
                  }
                } else {
                  nmi--;
                  exitg1 = 2;
                }
              } while (exitg1 == 0);

              if (exitg1 == 1) {
                exitg2 = true;
              }
            }

            nmi--;
          } else {
            lastv = -1;
            nmi = -1;
          }

          if (lastv + 1 > 0) {
            if (nmi + 1 != 0) {
              if (nmi >= 0) {
                memset(&work_data[0], 0, static_cast<uint32_T>(nmi + 1) * sizeof
                       (real_T));
              }

              itemp = 0;
              temp_tmp = m_tmp * nmi + pvt;
              for (b_i = pvt; m_tmp < 0 ? b_i >= temp_tmp : b_i <= temp_tmp; b_i
                   += m_tmp) {
                s = 0.0;
                l = b_i + lastv;
                for (b_ix = b_i; b_ix <= l; b_ix++) {
                  s += A_data[(ii + b_ix) - b_i] * A_data[b_ix - 1];
                }

                work_data[itemp] += s;
                itemp++;
              }
            }

            if (!(-tau_data[minmana] == 0.0)) {
              for (b_i = 0; b_i <= nmi; b_i++) {
                s = work_data[b_i];
                if (s != 0.0) {
                  s *= -tau_data[minmana];
                  itemp = lastv + pvt;
                  for (b_ix = pvt; b_ix <= itemp; b_ix++) {
                    A_data[b_ix - 1] += A_data[(ii + b_ix) - pvt] * s;
                  }
                }

                pvt += m_tmp;
              }
            }
          }

          A_data[ii] = smax;
        }

        for (ii = minmana + 2; ii <= n_tmp; ii++) {
          nmi = (ii - 1) * m_tmp + minmana;
          smax = vn1_data[ii - 1];
          if (smax != 0.0) {
            s = fabs(A_data[nmi]) / smax;
            s = 1.0 - s * s;
            if (s < 0.0) {
              s = 0.0;
            }

            temp2 = smax / vn2_data[ii - 1];
            temp2 = temp2 * temp2 * s;
            if (temp2 <= 1.4901161193847656E-8) {
              if (minmana + 1 < m_tmp) {
                smax = GNC2026W_xnrm2_h(mmi - 1, A_data, nmi + 2);
                vn1_data[ii - 1] = smax;
                vn2_data[ii - 1] = smax;
              } else {
                vn1_data[ii - 1] = 0.0;
                vn2_data[ii - 1] = 0.0;
              }
            } else {
              vn1_data[ii - 1] = smax * sqrt(s);
            }
          }
        }
      }
    }
  }

  if (guard1) {
    jpvt_size[0] = 1;
    jpvt_size[1] = A_size[1];
    for (m_tmp = 0; m_tmp < n_tmp; m_tmp++) {
      jpvt_data[m_tmp] = m_tmp + 1;
    }
  }
}

// Function for MATLAB Function: '<S214>/EKF'
static void GNC2026W_mrdiv(const real_T A_data[], const int32_T A_size[2], const
  real_T B_data[], const int32_T B_size[2], real_T Y_data[], int32_T Y_size[2])
{
  real_T b_B_data[18];
  real_T b_Y_data[18];
  real_T b_A_data[9];
  real_T tau_data[3];
  real_T s;
  real_T wj;
  int32_T jpvt_data[3];
  int32_T b_A_size[2];
  int32_T jpvt_size[2];
  int32_T b_Y_data_tmp;
  int32_T b_Y_size_idx_0;
  int32_T jA;
  int32_T jAcol;
  int32_T jBcol;
  int32_T m;
  int32_T maxmn;
  int32_T minmn;
  int32_T rankA;
  int32_T wj_tmp;
  int32_T yk;
  if ((A_size[1] == 0) || ((B_size[0] == 0) || (B_size[1] == 0))) {
    Y_size[0] = 6;
    Y_size[1] = B_size[0];
    minmn = 6 * B_size[0];
    if (minmn - 1 >= 0) {
      memset(&Y_data[0], 0, static_cast<uint32_T>(minmn) * sizeof(real_T));
    }
  } else if (B_size[0] == B_size[1]) {
    Y_size[0] = 6;
    Y_size[1] = A_size[1];
    memcpy(&Y_data[0], &A_data[0], static_cast<uint32_T>(6 * A_size[1]) * sizeof
           (real_T));
    minmn = B_size[1];
    memcpy(&b_A_data[0], &B_data[0], static_cast<uint32_T>(B_size[0] * B_size[1])
           * sizeof(real_T));
    jpvt_data[0] = 1;
    yk = 1;
    for (m = 2; m <= minmn; m++) {
      yk++;
      jpvt_data[m - 1] = yk;
    }

    if (B_size[1] - 1 <= B_size[1]) {
      m = B_size[1] - 1;
    } else {
      m = 1;
    }

    for (jBcol = 0; jBcol < m; jBcol++) {
      jAcol = minmn - jBcol;
      rankA = (minmn + 1) * jBcol;
      if (jAcol < 1) {
        yk = -1;
      } else {
        yk = 0;
        if (jAcol > 1) {
          wj = fabs(b_A_data[rankA]);
          for (maxmn = 2; maxmn <= jAcol; maxmn++) {
            s = fabs(b_A_data[(rankA + maxmn) - 1]);
            if (s > wj) {
              yk = maxmn - 1;
              wj = s;
            }
          }
        }
      }

      if (b_A_data[rankA + yk] != 0.0) {
        if (yk != 0) {
          maxmn = jBcol + yk;
          jpvt_data[jBcol] = maxmn + 1;
          for (jA = 0; jA < minmn; jA++) {
            yk = jA * minmn;
            b_Y_size_idx_0 = yk + jBcol;
            wj = b_A_data[b_Y_size_idx_0];
            yk += maxmn;
            b_A_data[b_Y_size_idx_0] = b_A_data[yk];
            b_A_data[yk] = wj;
          }
        }

        yk = rankA + jAcol;
        for (maxmn = rankA + 2; maxmn <= yk; maxmn++) {
          b_A_data[maxmn - 1] /= b_A_data[rankA];
        }
      }

      yk = jAcol - 2;
      maxmn = rankA + minmn;
      jA = maxmn + 2;
      for (b_Y_size_idx_0 = 0; b_Y_size_idx_0 <= yk; b_Y_size_idx_0++) {
        wj = b_A_data[b_Y_size_idx_0 * minmn + maxmn];
        if (wj != 0.0) {
          b_Y_data_tmp = (jAcol + jA) - 2;
          for (wj_tmp = jA; wj_tmp <= b_Y_data_tmp; wj_tmp++) {
            b_A_data[wj_tmp - 1] += b_A_data[((rankA + wj_tmp) - jA) + 1] * -wj;
          }
        }

        jA += minmn;
      }
    }

    for (m = 0; m < minmn; m++) {
      jBcol = 6 * m;
      jAcol = minmn * m;
      for (rankA = 0; rankA < m; rankA++) {
        maxmn = 6 * rankA;
        wj = b_A_data[rankA + jAcol];
        if (wj != 0.0) {
          for (jA = 0; jA < 6; jA++) {
            yk = jA + jBcol;
            Y_data[yk] -= Y_data[jA + maxmn] * wj;
          }
        }
      }

      wj = 1.0 / b_A_data[m + jAcol];
      for (jAcol = 0; jAcol < 6; jAcol++) {
        yk = jAcol + jBcol;
        Y_data[yk] *= wj;
      }
    }

    for (m = minmn; m >= 1; m--) {
      jBcol = (m - 1) * 6;
      jAcol = (m - 1) * minmn - 1;
      for (rankA = m + 1; rankA <= minmn; rankA++) {
        maxmn = (rankA - 1) * 6;
        wj = b_A_data[rankA + jAcol];
        if (wj != 0.0) {
          for (jA = 0; jA < 6; jA++) {
            yk = jA + jBcol;
            Y_data[yk] -= Y_data[jA + maxmn] * wj;
          }
        }
      }
    }

    rankA = B_size[1] - 1;
    for (minmn = rankA; minmn >= 1; minmn--) {
      maxmn = jpvt_data[minmn - 1];
      if (maxmn != minmn) {
        for (yk = 0; yk < 6; yk++) {
          wj_tmp = (minmn - 1) * 6;
          wj = Y_data[yk + wj_tmp];
          m = (maxmn - 1) * 6 + yk;
          Y_data[yk + wj_tmp] = Y_data[m];
          Y_data[m] = wj;
        }
      }
    }
  } else {
    minmn = A_size[1];
    jA = A_size[1];
    for (yk = 0; yk < 6; yk++) {
      for (rankA = 0; rankA < minmn; rankA++) {
        b_B_data[rankA + jA * yk] = A_data[6 * rankA + yk];
      }
    }

    minmn = B_size[1];
    b_A_size[0] = B_size[1];
    maxmn = B_size[0];
    b_A_size[1] = B_size[0];
    for (yk = 0; yk < maxmn; yk++) {
      for (rankA = 0; rankA < minmn; rankA++) {
        b_A_data[rankA + b_A_size[0] * yk] = B_data[B_size[0] * rankA + yk];
      }
    }

    GNC2026W_xgeqp3(b_A_data, b_A_size, tau_data, &minmn, jpvt_data, jpvt_size);
    rankA = 0;
    if (b_A_size[0] < b_A_size[1]) {
      minmn = b_A_size[0];
      maxmn = b_A_size[1];
    } else {
      minmn = b_A_size[1];
      maxmn = b_A_size[0];
    }

    if (minmn > 0) {
      while ((rankA < minmn) && (!(fabs(b_A_data[b_A_size[0] * rankA + rankA]) <=
               2.2204460492503131E-15 * static_cast<real_T>(maxmn) * fabs
               (b_A_data[0])))) {
        rankA++;
      }
    }

    minmn = b_A_size[1];
    b_Y_size_idx_0 = b_A_size[1];
    maxmn = b_A_size[1] * 6;
    if (maxmn - 1 >= 0) {
      memset(&b_Y_data[0], 0, static_cast<uint32_T>(maxmn) * sizeof(real_T));
    }

    if (b_A_size[0] <= b_A_size[1]) {
      maxmn = b_A_size[0];
    } else {
      maxmn = b_A_size[1];
    }

    for (yk = 0; yk < maxmn; yk++) {
      m = b_A_size[0];
      if (tau_data[yk] != 0.0) {
        for (jBcol = 0; jBcol < 6; jBcol++) {
          wj_tmp = jA * jBcol;
          wj = b_B_data[yk + wj_tmp];
          for (jAcol = yk + 2; jAcol <= m; jAcol++) {
            wj += b_A_data[(b_A_size[0] * yk + jAcol) - 1] * b_B_data[(jAcol +
              wj_tmp) - 1];
          }

          wj *= tau_data[yk];
          if (wj != 0.0) {
            wj_tmp += yk;
            b_B_data[wj_tmp] -= wj;
            for (jAcol = yk + 2; jAcol <= m; jAcol++) {
              wj_tmp = (jA * jBcol + jAcol) - 1;
              b_B_data[wj_tmp] -= b_A_data[(b_A_size[0] * yk + jAcol) - 1] * wj;
            }
          }
        }
      }
    }

    for (maxmn = 0; maxmn < 6; maxmn++) {
      for (yk = 0; yk < rankA; yk++) {
        b_Y_data[(jpvt_data[yk] + b_Y_size_idx_0 * maxmn) - 1] = b_B_data[jA *
          maxmn + yk];
      }

      for (yk = rankA; yk >= 1; yk--) {
        jBcol = b_Y_size_idx_0 * maxmn;
        jAcol = (jpvt_data[yk - 1] + jBcol) - 1;
        wj_tmp = (yk - 1) * b_A_size[0];
        b_Y_data[jAcol] /= b_A_data[(yk + wj_tmp) - 1];
        for (m = 0; m <= yk - 2; m++) {
          b_Y_data_tmp = (jpvt_data[m] + jBcol) - 1;
          b_Y_data[b_Y_data_tmp] -= b_A_data[m + wj_tmp] * b_Y_data[jAcol];
        }
      }
    }

    Y_size[0] = 6;
    Y_size[1] = b_A_size[1];
    for (yk = 0; yk < minmn; yk++) {
      for (rankA = 0; rankA < 6; rankA++) {
        Y_data[rankA + 6 * yk] = b_Y_data[b_Y_size_idx_0 * rankA + yk];
      }
    }
  }
}

static void GNC2026W_binary_expand_op(real_T in1_data[], int32_T in1_size[2],
  const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
  const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2])
{
  real_T in3_data_0[9];
  int32_T in3_size_0[2];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;

  // Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
  //   ActionPort: '<S213>/Action Port'

  // Outputs for IfAction SubSystem: '<S213>/EKF' incorporates:
  //   ActionPort: '<S214>/Action Port'

  // If: '<S213>/If' incorporates:
  //   If: '<S9>/Experiment Sub-Phases'
  //   MATLAB Function: '<S214>/EKF'

  loop_ub_0 = in4_size[0] == 1 ? in3_size[0] : in4_size[0];
  in3_size_0[0] = loop_ub_0;
  loop_ub = in4_size[1] == 1 ? in3_size[1] : in4_size[1];
  in3_size_0[1] = loop_ub;
  stride_0_0 = (in3_size[0] != 1);
  stride_0_1 = (in3_size[1] != 1);
  stride_1_0 = (in4_size[0] != 1);
  stride_1_1 = (in4_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i_0 = 0; i_0 < loop_ub; i_0++) {
    for (i = 0; i < loop_ub_0; i++) {
      in3_data_0[i + loop_ub_0 * i_0] = in3_data[i * stride_0_0 + in3_size[0] *
        aux_0_1] + in4_data[i * stride_1_0 + in4_size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  GNC2026W_mrdiv(in2_data, in2_size, in3_data_0, in3_size_0, in1_data, in1_size);

  // End of If: '<S213>/If'
  // End of Outputs for SubSystem: '<S213>/EKF'
  // End of Outputs for SubSystem: '<S9>/If Action Subsystem'
}

// Function for MATLAB Function: '<S214>/EKF'
static void GNC2026W_mtimes(const real_T A_data[], const int32_T A_size[2],
  const real_T B_data[], const int32_T B_size[2], real_T C[36])
{
  int32_T b;
  b = A_size[1];
  for (int32_T j = 0; j < 6; j++) {
    int32_T boffset;
    int32_T coffset;
    coffset = j * 6;
    boffset = j * B_size[0];
    for (int32_T i = 0; i < 6; i++) {
      C[coffset + i] = 0.0;
    }

    for (int32_T i = 0; i < b; i++) {
      real_T bkj;
      int32_T aoffset;
      aoffset = i * 6;
      bkj = B_data[boffset + i];
      for (int32_T b_i = 0; b_i < 6; b_i++) {
        int32_T C_tmp;
        C_tmp = coffset + b_i;
        C[C_tmp] += A_data[aoffset + b_i] * bkj;
      }
    }
  }
}

// Function for MATLAB Function: '<S216>/Unscented Kalman Filter'
static void GNC2026W_chol(real_T A[36])
{
  int32_T c_j;
  int32_T ia;
  int32_T idxAjj;
  int32_T info;
  boolean_T exitg1;
  info = 0;
  c_j = 0;
  exitg1 = false;
  while ((!exitg1) && (c_j < 6)) {
    real_T c;
    real_T ssq;
    int32_T b_j;
    int32_T c_k;
    int32_T idxA1j;
    b_j = c_j - 1;
    idxA1j = c_j * 6;
    idxAjj = idxA1j + c_j;
    ssq = 0.0;
    if (c_j >= 1) {
      for (c_k = 0; c_k <= b_j; c_k++) {
        c = A[idxA1j + c_k];
        ssq += c * c;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = sqrt(ssq);
      A[idxAjj] = ssq;
      if (c_j + 1 < 6) {
        if (c_j != 0) {
          b_j = ((4 - c_j) * 6 + idxA1j) + 7;
          for (c_k = idxA1j + 7; c_k <= b_j; c_k += 6) {
            int32_T e;
            c = 0.0;
            e = (c_k + c_j) - 1;
            for (ia = c_k; ia <= e; ia++) {
              c += A[(idxA1j + ia) - c_k] * A[ia - 1];
            }

            ia = (div_nde_s32_floor((c_k - idxA1j) - 7, 6) * 6 + idxAjj) + 6;
            A[ia] -= c;
          }
        }

        ssq = 1.0 / ssq;
        c_k = ((4 - c_j) * 6 + idxAjj) + 7;
        for (idxA1j = idxAjj + 7; idxA1j <= c_k; idxA1j += 6) {
          A[idxA1j - 1] *= ssq;
        }
      }

      c_j++;
    } else {
      A[idxAjj] = ssq;
      info = c_j + 1;
      exitg1 = true;
    }
  }

  if (info == 0) {
    ia = 5;
  } else {
    ia = info - 2;
  }

  idxAjj = ia - 1;
  for (info = 0; info <= idxAjj; info++) {
    for (c_j = info + 2; c_j <= idxAjj + 2; c_j++) {
      A[(c_j + 6 * info) - 1] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S216>/Unscented Kalman Filter'
static void GNC2026W_inv(const real_T x[9], real_T y[9])
{
  real_T b_x[9];
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 0;
  p2 = 3;
  p3 = 6;
  absx11 = fabs(x[0]);
  absx21 = fabs(x[1]);
  absx31 = fabs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 3;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else if (absx31 > absx11) {
    p1 = 6;
    p3 = 0;
    b_x[0] = x[2];
    b_x[2] = x[0];
    b_x[3] = x[5];
    b_x[5] = x[3];
    b_x[6] = x[8];
    b_x[8] = x[6];
  }

  b_x[1] /= b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= b_x[1] * b_x[3];
  b_x[5] -= b_x[2] * b_x[3];
  b_x[7] -= b_x[1] * b_x[6];
  b_x[8] -= b_x[2] * b_x[6];
  if (fabs(b_x[5]) > fabs(b_x[4])) {
    int32_T itmp;
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    absx11 = b_x[1];
    b_x[1] = b_x[2];
    b_x[2] = absx11;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  b_x[5] /= b_x[4];
  b_x[8] -= b_x[5] * b_x[7];
  absx11 = (b_x[1] * b_x[5] - b_x[2]) / b_x[8];
  absx21 = -(b_x[7] * absx11 + b_x[1]) / b_x[4];
  y[p1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1 + 1] = absx21;
  y[p1 + 2] = absx11;
  absx11 = -b_x[5] / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
}

// Function for MATLAB Function: '<S249>/CV Noise'
static real_T GNC2026W_rand_a(void)
{
  real_T r;
  uint32_T b_u[2];
  switch (GNC2026W_DW.method) {
   case 4U:
    {
      int32_T k;
      uint32_T mti;
      uint32_T y;
      k = static_cast<int32_T>(GNC2026W_DW.state / 127773U);
      mti = (GNC2026W_DW.state - static_cast<uint32_T>(k) * 127773U) * 16807U;
      y = 2836U * static_cast<uint32_T>(k);
      if (mti < y) {
        GNC2026W_DW.state = ~(y - mti) & 2147483647U;
      } else {
        GNC2026W_DW.state = mti - y;
      }

      r = static_cast<real_T>(GNC2026W_DW.state) * 4.6566128752457969E-10;
    }
    break;

   case 5U:
    {
      uint32_T mti;
      uint32_T y;
      mti = 69069U * GNC2026W_DW.state_g[0] + 1234567U;
      y = GNC2026W_DW.state_g[1] << 13 ^ GNC2026W_DW.state_g[1];
      y ^= y >> 17;
      y ^= y << 5;
      GNC2026W_DW.state_g[0] = mti;
      GNC2026W_DW.state_g[1] = y;
      r = static_cast<real_T>(mti + y) * 2.328306436538696E-10;
    }
    break;

   default:
    {
      uint32_T mti;
      uint32_T y;

      // ========================= COPYRIGHT NOTICE ============================ 
      //  This is a uniform (0,1) pseudorandom number generator based on:
      //
      //  A C-program for MT19937, with initialization improved 2002/1/26.
      //  Coded by Takuji Nishimura and Makoto Matsumoto.
      //
      //  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,
      //  All rights reserved.
      //
      //  Redistribution and use in source and binary forms, with or without
      //  modification, are permitted provided that the following conditions
      //  are met:
      //
      //    1. Redistributions of source code must retain the above copyright
      //       notice, this list of conditions and the following disclaimer.
      //
      //    2. Redistributions in binary form must reproduce the above copyright 
      //       notice, this list of conditions and the following disclaimer
      //       in the documentation and/or other materials provided with the
      //       distribution.
      //
      //    3. The names of its contributors may not be used to endorse or
      //       promote products derived from this software without specific
      //       prior written permission.
      //
      //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
      //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
      //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
      //  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
      //  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
      //  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
      //  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
      //  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
      //  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
      //  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
      //  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
      //
      // =============================   END   ================================= 
      int32_T exitg1;
      do {
        int32_T k;
        exitg1 = 0;
        for (k = 0; k < 2; k++) {
          mti = GNC2026W_DW.state_j[624] + 1U;
          if (GNC2026W_DW.state_j[624] + 1U >= 625U) {
            for (int32_T kk = 0; kk < 227; kk++) {
              mti = (GNC2026W_DW.state_j[kk + 1] & 2147483647U) |
                (GNC2026W_DW.state_j[kk] & 2147483648U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              GNC2026W_DW.state_j[kk] = GNC2026W_DW.state_j[kk + 397] ^ mti;
            }

            for (int32_T kk = 0; kk < 396; kk++) {
              mti = (GNC2026W_DW.state_j[kk + 227] & 2147483648U) |
                (GNC2026W_DW.state_j[kk + 228] & 2147483647U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              GNC2026W_DW.state_j[kk + 227] = GNC2026W_DW.state_j[kk] ^ mti;
            }

            mti = (GNC2026W_DW.state_j[623] & 2147483648U) |
              (GNC2026W_DW.state_j[0] & 2147483647U);
            if ((mti & 1U) == 0U) {
              mti >>= 1U;
            } else {
              mti = mti >> 1U ^ 2567483615U;
            }

            GNC2026W_DW.state_j[623] = GNC2026W_DW.state_j[396] ^ mti;
            mti = 1U;
          }

          y = GNC2026W_DW.state_j[static_cast<int32_T>(mti) - 1];
          GNC2026W_DW.state_j[624] = mti;
          y ^= y >> 11U;
          y ^= y << 7U & 2636928640U;
          y ^= y << 15U & 4022730752U;
          b_u[k] = y >> 18U ^ y;
        }

        mti = b_u[0] >> 5U;
        y = b_u[1] >> 6U;
        if ((mti == 0U) && (y == 0U)) {
          boolean_T b_isvalid;
          b_isvalid = ((GNC2026W_DW.state_j[624] >= 1U) && (GNC2026W_DW.state_j
            [624] < 625U));
          if (b_isvalid) {
            boolean_T exitg2;
            b_isvalid = false;
            k = 1;
            exitg2 = false;
            while ((!exitg2) && (k < 625)) {
              if (GNC2026W_DW.state_j[k - 1] == 0U) {
                k++;
              } else {
                b_isvalid = true;
                exitg2 = true;
              }
            }
          }

          if (!b_isvalid) {
            mti = 5489U;
            GNC2026W_DW.state_j[0] = 5489U;
            for (k = 0; k < 623; k++) {
              mti = ((mti >> 30U ^ mti) * 1812433253U + static_cast<uint32_T>(k))
                + 1U;
              GNC2026W_DW.state_j[k + 1] = mti;
            }

            GNC2026W_DW.state_j[624] = 624U;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      r = (static_cast<real_T>(mti) * 6.7108864E+7 + static_cast<real_T>(y)) *
        1.1102230246251565E-16;
    }
    break;
  }

  return r;
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

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T hi;
  uint32_T lo;

  // Uniform random number generator (random number between 0 and 1)

  // #define IA      16807                      magic multiplier = 7^5
  // #define IM      2147483647                 modulus = 2^31-1
  // #define IQ      127773                     IM div IA
  // #define IR      2836                       IM modulo IA
  // #define S       4.656612875245797e-10      reciprocal of 2^31-1
  // test = IA * (seed % IQ) - IR * (seed/IQ)
  // seed = test < 0 ? (test + IM) : test
  // return (seed*S)

  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return static_cast<real_T>(*u) * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T si;
  real_T sr;
  real_T y;

  // Normal (Gaussian) random number generator
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sqrt(-2.0 * log(si) / si) * sr;
  return y;
}

static real_T GNC2026W_now(void)
{
  std::time_t rawtime;
  std::tm expl_temp;
  real_T dDateNum;
  int16_T cDaysMonthWise[12];
  cDaysMonthWise[0] = 0;
  cDaysMonthWise[1] = 31;
  cDaysMonthWise[2] = 59;
  cDaysMonthWise[3] = 90;
  cDaysMonthWise[4] = 120;
  cDaysMonthWise[5] = 151;
  cDaysMonthWise[6] = 181;
  cDaysMonthWise[7] = 212;
  cDaysMonthWise[8] = 243;
  cDaysMonthWise[9] = 273;
  cDaysMonthWise[10] = 304;
  cDaysMonthWise[11] = 334;
  std::time(&rawtime);
  expl_temp = *std::localtime(&rawtime);

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  dDateNum = ((((static_cast<real_T>(expl_temp.tm_year + 1900) * 365.0 + ceil(
    static_cast<real_T>(expl_temp.tm_year + 1900) / 4.0)) - ceil
                (static_cast<real_T>(expl_temp.tm_year + 1900) / 100.0)) + ceil(
    static_cast<real_T>(expl_temp.tm_year + 1900) / 400.0)) + static_cast<real_T>
              (cDaysMonthWise[expl_temp.tm_mon])) + static_cast<real_T>
    (expl_temp.tm_mday);
  if (expl_temp.tm_mon + 1 > 2) {
    int32_T r;
    boolean_T guard1;
    if (expl_temp.tm_year + 1900 == 0) {
      r = 0;
    } else {
      r = static_cast<int32_T>(fmod(static_cast<real_T>(expl_temp.tm_year + 1900),
        4.0));
      if ((r != 0) && (r < 0)) {
        r += 4;
      }
    }

    guard1 = false;
    if (r == 0) {
      if (expl_temp.tm_year + 1900 == 0) {
        r = 0;
      } else {
        r = static_cast<int32_T>(fmod(static_cast<real_T>(expl_temp.tm_year +
          1900), 100.0));
        if ((r != 0) && (r < 0)) {
          r += 100;
        }
      }

      if (r != 0) {
        dDateNum++;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (expl_temp.tm_year + 1900 == 0) {
        r = 0;
      } else {
        r = static_cast<int32_T>(fmod(static_cast<real_T>(expl_temp.tm_year +
          1900), 400.0));
        if ((r != 0) && (r < 0)) {
          r += 400;
        }
      }

      if (r == 0) {
        dDateNum++;
      }
    }
  }

  return ((static_cast<real_T>(expl_temp.tm_hour) * 3600.0 + static_cast<real_T>
           (expl_temp.tm_min) * 60.0) + static_cast<real_T>(expl_temp.tm_sec)) /
    86400.0 + dDateNum;

  // End of Start for MATLABSystem: '<Root>/Dropped Frames'
}

static real_T GNC2026W_mod(real_T x)
{
  real_T r;

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  if (rtIsNaN(x) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = fmod(x, 2.147483647E+9);
    if (r == 0.0) {
      r = 0.0;
    } else if (r < 0.0) {
      r += 2.147483647E+9;
    }
  }

  // End of Start for MATLABSystem: '<Root>/Dropped Frames'
  return r;
}

static void GNC2026W_twister_state_vector(uint32_T mt[625], uint32_T seed)
{
  uint32_T r;

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  r = seed;
  mt[0] = seed;
  for (int32_T b_mti = 0; b_mti < 623; b_mti++) {
    r = ((r >> 30U ^ r) * 1812433253U + static_cast<uint32_T>(b_mti)) + 1U;
    mt[b_mti + 1] = r;
  }

  mt[624] = 624U;

  // End of Start for MATLABSystem: '<Root>/Dropped Frames'
}

static void GNC2026W_SystemCore_setup(comm_internal_BernoulliBinary_T *obj,
  uint32_T *seed)
{
  std::time_t eTime;
  std::time_t eTime_0;
  real_T s;
  real_T x;
  int32_T exitg1;
  int32_T r;
  int32_T t;

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  obj->isInitialized = 1;
  x = GNC2026W_now() * 8.64E+6;

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  s = GNC2026W_mod(floor(x));
  eTime = std::time(NULL);
  do {
    exitg1 = 0;
    eTime_0 = std::time(NULL);
    if ((int32_T)eTime_0 <= (int32_T)eTime + 1) {
      x = GNC2026W_now() * 8.64E+6;
      if (s != GNC2026W_mod(floor(x))) {
        exitg1 = 1;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  x = rt_roundd_snf(s);
  if (x < 4.294967296E+9) {
    if (x >= 0.0) {
      *seed = static_cast<uint32_T>(x);
    } else {
      *seed = 0U;
    }
  } else {
    *seed = MAX_uint32_T;
  }

  // Start for MATLABSystem: '<Root>/Dropped Frames'
  if (GNC2026W_DW.state_b == 7U) {
    GNC2026W_twister_state_vector(GNC2026W_DW.state_d, *seed);
  } else if (GNC2026W_DW.state_b == 5U) {
    GNC2026W_DW.state_jw[0] = 362436069U;
    GNC2026W_DW.state_jw[1] = *seed;
    if (GNC2026W_DW.state_jw[1] == 0U) {
      GNC2026W_DW.state_jw[1] = 521288629U;
    }
  } else if (GNC2026W_DW.state_b == 4U) {
    r = static_cast<int32_T>(*seed >> 16U);
    t = static_cast<int32_T>(*seed & 32768U);
    GNC2026W_DW.method_e = static_cast<uint32_T>(r) << 16U;
    GNC2026W_DW.method_e = *seed - GNC2026W_DW.method_e;
    GNC2026W_DW.method_e -= static_cast<uint32_T>(t);
    GNC2026W_DW.method_e <<= 16U;
    GNC2026W_DW.method_e += static_cast<uint32_T>(t);
    GNC2026W_DW.method_e += static_cast<uint32_T>(r);
    if (GNC2026W_DW.method_e < 1U) {
      GNC2026W_DW.method_e = 1144108930U;
    } else if (GNC2026W_DW.method_e > 2147483646U) {
      GNC2026W_DW.method_e = 2147483646U;
    }
  }

  obj->TunablePropsChanged = false;
}

// Model step function
void GNC2026W_step(void)
{
  // local block i/o variables
  real_T rtb_H_final[24];
  real_T rtb_ThrustPer_Final_p[8];
  real_T rtb_H_final_j[24];
  real_T rtb_H_final_g[24];

  {
    real_T b_u1[148];
    real_T Fi[78];
    real_T Xi_pre[78];
    real_T y[64];
    real_T h[39];
    real_T P_tmp[36];
    real_T phi[36];
    real_T phi_0[36];
    real_T phi_1[36];
    real_T rtb_UnitDelay2[36];
    real_T rtb_UnitDelay2_0[36];
    real_T b_0[24];
    real_T rtb_H[24];
    real_T Ks_data[18];
    real_T P_xy[18];
    real_T P_xy_0[18];
    real_T wi_c[13];
    real_T wi_m[13];
    real_T A_tmp[9];
    real_T F[9];
    real_T F_0[9];
    real_T P_minus[9];
    real_T U[9];
    real_T V[9];
    real_T b[9];
    real_T rtb_Product3[8];
    real_T rtb_Product3_f[8];
    real_T rtb_Product3_h[8];
    real_T delta_x[6];
    real_T tmp[6];
    real_T tmp_0[6];
    real_T rtb_C_Ib[4];
    real_T ARM_Path[3];
    real_T BLACK_Path[3];
    real_T K[3];
    real_T RED_Controls[3];
    real_T rtb_TmpSignalConversionAtSFun_b[3];
    real_T x_minus[3];
    real_T BLACK_Exp_Noise;
    real_T BLUE_Path_idx_0;
    real_T BLUE_Path_idx_1;
    real_T BLUE_Path_idx_2;
    real_T F_1;
    real_T RED_Path_idx_0;
    real_T RED_Path_idx_1;
    real_T RED_Path_idx_2;
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
    int32_T aoffset;
    int32_T ar;
    int32_T b_boffset;
    int32_T boffset;
    int32_T br;
    int32_T r;
    int32_T r2;
    int32_T samplesRead;
    int32_T samplesRead_0;
    int32_T samplesRead_1;
    int32_T samplesRead_2;
    int32_T samplesRead_3;
    int32_T samplesRead_4;
    int32_T vcol;
    char_T *sErr;
    int8_T H[18];
    int8_T S_tmp[3];
    int8_T tmp_data[3];
    int8_T S_tmp_0;
    int8_T rtAction;
    int8_T rtPrevAction;
    boolean_T keep[3];
    boolean_T rEQ0;
    static const int8_T b_1[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

    static const int8_T c[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

    static const int8_T a[3] = { 1, 0, 0 };

    static const real_T c_0[9] = { 0.001, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0,
      0.001 };

    static const int8_T cb[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

    static const int8_T db[18] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,
      0, 0, 1 };

    static const int8_T b_a[18] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
      0, 0, 1 };

    static const real_T a_0[9] = { 1.0E-8, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0,
      1.0E-8 };

    static const int8_T c_a[18] = { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0 };

    static const real_T a_1[36] = { 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8
    };

    static const real_T Q[36] = { 1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-10,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0E-10 };

    static const int8_T e[18] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
      1, 0 };

    static const real_T fb[9] = { 0.005, 0.0, 0.0, 0.0, 0.005, 0.0, 0.0, 0.0,
      0.005 };

    static const int8_T f_a[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

    int32_T Ks_size[2];
    int32_T R_new_size[2];
    int32_T b_size[2];
    int32_T b_size_0[2];
    int32_T b_y_size[2];
    int32_T y_size[2];
    int32_T d_size_idx_0;
    int32_T tmp_size_idx_0;
    boolean_T exitg1;

    // RandomNumber: '<Root>/Gaussian Noise' incorporates:
    //   DataStoreWrite: '<Root>/Data Store Write'

    BLACK_Exp_Noise = GNC2026W_DW.NextOutput;

    // MATLABSystem: '<Root>/Dropped Frames'
    if (GNC2026W_DW.obj_fv.TunablePropsChanged) {
      GNC2026W_DW.obj_fv.TunablePropsChanged = false;
    }

    GNC2026W_rand();

    // End of MATLABSystem: '<Root>/Dropped Frames'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S123>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S131>/Data Store Read'
    //   DataStoreWrite: '<S2>/Data Store Write9'

    ARM_Path[0] = GNC2026W_DW.ARM_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S124>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S132>/BLACK_Px'
    //   DataStoreWrite: '<S2>/Data Store Write3'

    BLACK_Path[0] = GNC2026W_DW.BLACK_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S125>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S133>/Data Store Read4'
    //   DataStoreWrite: '<S2>/Data Store Write6'

    BLUE_Path_idx_0 = GNC2026W_DW.BLUE_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S123>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S131>/Data Store Read'
    //   DataStoreWrite: '<S2>/Data Store Write9'

    ARM_Path[1] = GNC2026W_DW.ARM_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S124>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S132>/BLACK_Px'
    //   DataStoreWrite: '<S2>/Data Store Write3'

    BLACK_Path[1] = GNC2026W_DW.BLACK_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S125>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S133>/Data Store Read4'
    //   DataStoreWrite: '<S2>/Data Store Write6'

    BLUE_Path_idx_1 = GNC2026W_DW.BLUE_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S123>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S131>/Data Store Read'
    //   DataStoreWrite: '<S2>/Data Store Write9'

    ARM_Path[2] = GNC2026W_DW.ARM_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S124>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S132>/BLACK_Px'
    //   DataStoreWrite: '<S2>/Data Store Write3'

    BLACK_Path[2] = GNC2026W_DW.BLACK_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S125>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S133>/Data Store Read4'
    //   DataStoreWrite: '<S2>/Data Store Write6'

    BLUE_Path_idx_2 = GNC2026W_DW.BLUE_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S2>/Data Store Read'

    if (GNC2026W_DW.RED_Path_Planner_Selection == 1.0) {
      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S126>/Action Port'

      // MATLAB Function: '<S126>/MATLAB Function4' incorporates:
      //   DataStoreRead: '<S126>/Data Store Read'
      //   DataStoreRead: '<S126>/Data Store Read5'
      //   MATLAB Function: '<S126>/End Effector Desired'

      rtb_TSamp_k = cos(GNC2026W_DW.BLACK_Filtered_States[2]);
      GNC2026W_DW.RED_desired[0] = GNC2026W_DW.L0 * rtb_TSamp_k +
        GNC2026W_DW.BLACK_Filtered_States[0];
      rtb_TSamp_af = sin(GNC2026W_DW.BLACK_Filtered_States[2]);
      GNC2026W_DW.RED_desired[1] = GNC2026W_DW.L0 * rtb_TSamp_af +
        GNC2026W_DW.BLACK_Filtered_States[1];
      GNC2026W_DW.RED_desired[2] = GNC2026W_DW.BLACK_Filtered_States[2] +
        3.1415926535897931;
      rtb_TSamp_e = GNC2026W_DW.L0 * GNC2026W_DW.BLACK_Filtered_States[5];
      GNC2026W_DW.RED_desired[3] = GNC2026W_DW.BLACK_Filtered_States[3] -
        rtb_TSamp_e * rtb_TSamp_af;
      GNC2026W_DW.RED_desired[4] = rtb_TSamp_e * rtb_TSamp_k +
        GNC2026W_DW.BLACK_Filtered_States[4];
      GNC2026W_DW.RED_desired[5] = GNC2026W_DW.BLACK_Filtered_States[5];
      rtb_TSamp_e = GNC2026W_DW.BLACK_Filtered_States[5] *
        GNC2026W_DW.BLACK_Filtered_States[5] * GNC2026W_DW.L0;
      GNC2026W_DW.RED_desired[6] = (0.0 - 0.0 * GNC2026W_DW.L0 * rtb_TSamp_af) -
        rtb_TSamp_e * rtb_TSamp_k;
      GNC2026W_DW.RED_desired[7] = 0.0 * GNC2026W_DW.L0 * rtb_TSamp_k -
        rtb_TSamp_e * rtb_TSamp_af;
      GNC2026W_DW.RED_desired[8] = 0.0;

      // MATLAB Function: '<S137>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S126>/Data Store Read3'
      //   Delay: '<S137>/Delay'
      //   Delay: '<S137>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_h0, GNC2026W_DW.Delay1_DSTATE_lo,
        &GNC2026W_DW.Delay1_DSTATE_lo, &GNC2026W_DW.Delay_DSTATE_h0);

      // SignalConversion generated from: '<S134>/ SFunction ' incorporates:
      //   DataStoreRead: '<S126>/Data Store Read3'
      //   Delay: '<S137>/Delay1'
      //   MATLAB Function: '<S126>/End Effector Desired'

      rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_DW.RED_Measured_States[0];
      rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_DW.RED_Measured_States[1];
      rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_DW.Delay1_DSTATE_lo;

      // MATLAB Function: '<S126>/End Effector Desired' incorporates:
      //   DataStoreRead: '<S126>/Data Store Read2'
      //   DataStoreRead: '<S126>/Data Store Read3'
      //   DataStoreWrite: '<S126>/Data Store Write1'
      //   Delay: '<S137>/Delay1'
      //   SignalConversion generated from: '<S134>/ SFunction '

      RED_Path_idx_0 = sin(GNC2026W_DW.Delay1_DSTATE_lo);
      RED_Path_idx_1 = cos(GNC2026W_DW.Delay1_DSTATE_lo);
      RED_Path_idx_2 = ((rtb_TSamp_k * 0.145 + -rtb_TSamp_af * 0.0) +
                        GNC2026W_DW.BLACK_Filtered_States[0]) -
        GNC2026W_DW.RED_Measured_States[0];
      rtb_TSamp_k = ((rtb_TSamp_af * 0.145 + rtb_TSamp_k * 0.0) +
                     GNC2026W_DW.BLACK_Filtered_States[1]) -
        GNC2026W_DW.RED_Measured_States[1];
      GNC2026W_DW.thRel = (-RED_Path_idx_0 * RED_Path_idx_2 + RED_Path_idx_1 *
                           rtb_TSamp_k) / (RED_Path_idx_1 * RED_Path_idx_2 +
        RED_Path_idx_0 * rtb_TSamp_k);
      GNC2026W_DW.thRel = atan(GNC2026W_DW.thRel);

      // DataStoreWrite: '<S2>/Data Store Write' incorporates:
      //   Merge: '<S3>/Merge6'
      //   SignalConversion generated from: '<S126>/Path'

      RED_Path_idx_0 = GNC2026W_DW.RED_desired[0];
      RED_Path_idx_1 = GNC2026W_DW.RED_desired[1];
      RED_Path_idx_2 = GNC2026W_DW.RED_desired[2];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'
    } else {
      // Outputs for IfAction SubSystem: '<S2>/Disable PPL (RED)' incorporates:
      //   ActionPort: '<S130>/Action Port'

      // DataStoreWrite: '<S2>/Data Store Write' incorporates:
      //   DataStoreRead: '<S142>/RED_Px'
      //   Merge: '<S3>/Merge6'

      RED_Path_idx_0 = GNC2026W_DW.RED_Desired_States[0];
      RED_Path_idx_1 = GNC2026W_DW.RED_Desired_States[1];
      RED_Path_idx_2 = GNC2026W_DW.RED_Desired_States[2];

      // End of Outputs for SubSystem: '<S2>/Disable PPL (RED)'
    }

    // End of If: '<S2>/If'

    // If: '<S3>/If1' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read3'

    if (GNC2026W_DW.BLACK_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' incorporates:
      //   ActionPort: '<S149>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   DataStoreRead: '<S149>/Data Store Read13'
      //   MATLAB Function: '<S186>/MATLAB Function'
      //   SampleTimeMath: '<S187>/TSamp'
      //
      //  About '<S187>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLACK_Desired_States[2],
        GNC2026W_DW.BLACK_Measured_States[2], &rtb_TSamp_k);
      rtb_TSamp_af = GNC2026W_DW.BLACK_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_i;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S187>/Diff' incorporates:
      //   UnitDelay: '<S187>/UD'
      //
      //  Block description for '<S187>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = rtb_TSamp_af - GNC2026W_DW.UD_DSTATE_eh;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   SampleTimeMath: '<S188>/TSamp'
      //
      //  About '<S188>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_o = GNC2026W_DW.BLACK_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_hr;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S188>/Diff' incorporates:
      //   UnitDelay: '<S188>/UD'
      //
      //  Block description for '<S188>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S188>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = rtb_TSamp_o - GNC2026W_DW.UD_DSTATE_hv;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   SampleTimeMath: '<S189>/TSamp'
      //
      //  About '<S189>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_n5 = GNC2026W_DW.BLACK_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_ca;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S189>/Diff' incorporates:
      //   UnitDelay: '<S189>/UD'
      //
      //  Block description for '<S189>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S189>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = rtb_TSamp_n5 - GNC2026W_DW.UD_DSTATE_kv;

      // Sum: '<S149>/Subtract7' incorporates:
      //   DataStoreRead: '<S149>/Data Store Read13'
      //   UnitDelay: '<S187>/UD'
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = GNC2026W_DW.BLACK_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_eh;

      // Sum: '<S149>/Subtract6' incorporates:
      //   DataStoreRead: '<S149>/Data Store Read13'
      //   UnitDelay: '<S188>/UD'
      //
      //  Block description for '<S188>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = GNC2026W_DW.BLACK_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_hv;

      // Sum: '<S149>/Subtract8' incorporates:
      //   DataStoreRead: '<S149>/Data Store Read13'
      //   UnitDelay: '<S189>/UD'
      //
      //  Block description for '<S189>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = GNC2026W_DW.BLACK_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_kv;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   DataStoreRead: '<S149>/Data Store Read13'
      //   Gain: '<S149>/Gain'
      //   Gain: '<S149>/Gain1'
      //   Gain: '<S149>/Gain3'
      //   Gain: '<S149>/Gain4'
      //   Gain: '<S149>/Gain6'
      //   Gain: '<S149>/Gain7'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S149>/Subtract4'
      //   Sum: '<S149>/Subtract5'
      //   Sum: '<S149>/Sum'
      //   Sum: '<S149>/Sum1'
      //   UnitDelay: '<S187>/UD'
      //   UnitDelay: '<S188>/UD'
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S188>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[0] = ((GNC2026W_DW.BLACK_Measured_States[0] -
        GNC2026W_DW.BLACK_Desired_States[0]) * GNC2026W_P.Kp_xb +
        GNC2026W_P.Kd_xb * GNC2026W_DW.UD_DSTATE_eh) * GNC2026W_P.Gain6_Gain_g;
      GNC2026W_B.Merge1[1] = ((GNC2026W_DW.BLACK_Measured_States[1] -
        GNC2026W_DW.BLACK_Desired_States[1]) * GNC2026W_P.Kp_yb +
        GNC2026W_P.Kd_yb * GNC2026W_DW.UD_DSTATE_hv) * GNC2026W_P.Gain7_Gain_b;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Gain: '<S149>/Gain8' incorporates:
      //   Gain: '<S149>/Gain2'
      //   Gain: '<S149>/Gain5'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S149>/Sum2'
      //   UnitDelay: '<S189>/UD'
      //
      //  Block description for '<S189>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[2] = (GNC2026W_P.Kp_tb * rtb_TSamp_k + GNC2026W_P.Kd_tb *
        GNC2026W_DW.UD_DSTATE_kv) * GNC2026W_P.Gain8_Gain_m;

      // Update for UnitDelay: '<S187>/UD'
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = rtb_TSamp_af;

      // Update for UnitDelay: '<S188>/UD'
      //
      //  Block description for '<S188>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = rtb_TSamp_o;

      // Update for UnitDelay: '<S189>/UD'
      //
      //  Block description for '<S189>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = rtb_TSamp_n5;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLACK)'
    } else if (GNC2026W_DW.BLACK_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' incorporates:
      //   ActionPort: '<S145>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   DataStoreRead: '<S145>/Data Store Read13'
      //   MATLAB Function: '<S163>/MATLAB Function'
      //   Product: '<S145>/Matrix Multiply'
      //   SampleTimeMath: '<S164>/TSamp'
      //
      //  About '<S164>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLACK_Desired_States[2],
        GNC2026W_DW.BLACK_Measured_States[2], &delta_x[2]);
      rtb_TSamp_k = GNC2026W_DW.BLACK_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_nd;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_j = rtb_TSamp_k - GNC2026W_DW.UD_DSTATE_j;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   SampleTimeMath: '<S165>/TSamp'
      //
      //  About '<S165>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_af = GNC2026W_DW.BLACK_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_co;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_c = rtb_TSamp_af - GNC2026W_DW.UD_DSTATE_c;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   SampleTimeMath: '<S166>/TSamp'
      //
      //  About '<S166>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_o = GNC2026W_DW.BLACK_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_no;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_d = rtb_TSamp_o - GNC2026W_DW.UD_DSTATE_d;

      // Sum: '<S145>/Subtract7' incorporates:
      //   DataStoreRead: '<S145>/Data Store Read13'
      //   UnitDelay: '<S164>/UD'
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_j = GNC2026W_DW.BLACK_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_j;

      // Sum: '<S145>/Subtract6' incorporates:
      //   DataStoreRead: '<S145>/Data Store Read13'
      //   UnitDelay: '<S165>/UD'
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_c = GNC2026W_DW.BLACK_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_c;

      // Sum: '<S145>/Subtract8' incorporates:
      //   DataStoreRead: '<S145>/Data Store Read13'
      //   UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_d = GNC2026W_DW.BLACK_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_d;
      for (r = 0; r < 18; r++) {
        // Product: '<S145>/Matrix Multiply' incorporates:
        //   Constant: '<S145>/Constant2'

        P_xy[r] = -GNC2026W_P.K_BLACK[r];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S124>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S132>/BLACK_Px'
      //   DataStoreRead: '<S145>/Data Store Read13'
      //   Product: '<S145>/Matrix Multiply'
      //   Reshape: '<S145>/Reshape1'
      //   Sum: '<S145>/Subtract4'
      //   Sum: '<S145>/Subtract5'

      delta_x[0] = GNC2026W_DW.BLACK_Measured_States[0] -
        GNC2026W_DW.BLACK_Desired_States[0];
      delta_x[1] = GNC2026W_DW.BLACK_Measured_States[1] -
        GNC2026W_DW.BLACK_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Product: '<S145>/Matrix Multiply' incorporates:
      //   Reshape: '<S145>/Reshape3'
      //   UnitDelay: '<S164>/UD'
      //   UnitDelay: '<S165>/UD'
      //   UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      delta_x[3] = GNC2026W_DW.UD_DSTATE_j;
      delta_x[4] = GNC2026W_DW.UD_DSTATE_c;
      delta_x[5] = GNC2026W_DW.UD_DSTATE_d;
      for (r = 0; r < 3; r++) {
        // Product: '<S145>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge1'

        rtb_TSamp_n5 = 0.0;
        for (vcol = 0; vcol < 6; vcol++) {
          // Merge: '<S3>/Merge1' incorporates:
          //   Product: '<S145>/Matrix Multiply'
          //   Reshape: '<S145>/Reshape4'

          rtb_TSamp_n5 += P_xy[3 * vcol + r] * delta_x[vcol];
        }

        // Merge: '<S3>/Merge1' incorporates:
        //   Product: '<S145>/Matrix Multiply'

        GNC2026W_B.Merge1[r] = rtb_TSamp_n5;
      }

      // Update for UnitDelay: '<S164>/UD'
      //
      //  Block description for '<S164>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_j = rtb_TSamp_k;

      // Update for UnitDelay: '<S165>/UD'
      //
      //  Block description for '<S165>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_c = rtb_TSamp_af;

      // Update for UnitDelay: '<S166>/UD'
      //
      //  Block description for '<S166>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_d = rtb_TSamp_o;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLACK)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLACK)' incorporates:
      //   ActionPort: '<S153>/Action Port'

      GNC2026W_DisableThrustersBLACK(GNC2026W_B.Merge1,
        &GNC2026W_P.DisableThrustersBLACK);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLACK)'
    }

    // End of If: '<S3>/If1'

    // DataStoreWrite: '<S3>/BLACK Controls'
    rtb_TSamp_k = GNC2026W_B.Merge1[0];
    rtb_TSamp_af = GNC2026W_B.Merge1[1];
    rtb_TSamp_o = GNC2026W_B.Merge1[2];

    // If: '<S3>/If2' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read2'

    if (GNC2026W_DW.BLUE_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' incorporates:
      //   ActionPort: '<S150>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   DataStoreRead: '<S150>/Data Store Read2'
      //   MATLAB Function: '<S191>/MATLAB Function'
      //   SampleTimeMath: '<S192>/TSamp'
      //
      //  About '<S192>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLUE_Desired_States[2],
        GNC2026W_DW.BLUE_Measured_States[2], &rtb_TSamp_n5);
      rtb_TSamp_d = GNC2026W_DW.BLUE_Desired_States[0] * GNC2026W_P.TSamp_WtEt_p;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S192>/Diff' incorporates:
      //   UnitDelay: '<S192>/UD'
      //
      //  Block description for '<S192>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S192>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = rtb_TSamp_d - GNC2026W_DW.UD_DSTATE_o;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   SampleTimeMath: '<S193>/TSamp'
      //
      //  About '<S193>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ks = GNC2026W_DW.BLUE_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_o;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S193>/Diff' incorporates:
      //   UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S193>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = rtb_TSamp_ks - GNC2026W_DW.UD_DSTATE_n;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   SampleTimeMath: '<S194>/TSamp'
      //
      //  About '<S194>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_e = GNC2026W_DW.BLUE_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_px;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S194>/Diff' incorporates:
      //   UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = rtb_TSamp_e - GNC2026W_DW.UD_DSTATE_hu;

      // Sum: '<S150>/Subtract7' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read2'
      //   UnitDelay: '<S192>/UD'
      //
      //  Block description for '<S192>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = GNC2026W_DW.BLUE_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_o;

      // Sum: '<S150>/Subtract6' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read2'
      //   UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = GNC2026W_DW.BLUE_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_n;

      // Sum: '<S150>/Subtract8' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read2'
      //   UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = GNC2026W_DW.BLUE_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_hu;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   DataStoreRead: '<S150>/Data Store Read2'
      //   Gain: '<S150>/Gain'
      //   Gain: '<S150>/Gain1'
      //   Gain: '<S150>/Gain3'
      //   Gain: '<S150>/Gain4'
      //   Gain: '<S150>/Gain6'
      //   Gain: '<S150>/Gain7'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S150>/Subtract4'
      //   Sum: '<S150>/Subtract5'
      //   Sum: '<S150>/Sum'
      //   Sum: '<S150>/Sum1'
      //   UnitDelay: '<S192>/UD'
      //   UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S192>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[0] = ((GNC2026W_DW.BLUE_Measured_States[0] -
        GNC2026W_DW.BLUE_Desired_States[0]) * GNC2026W_P.Kp_xblue +
        GNC2026W_P.Kd_xblue * GNC2026W_DW.UD_DSTATE_o) * GNC2026W_P.Gain6_Gain_a;
      GNC2026W_B.Merge2[1] = ((GNC2026W_DW.BLUE_Measured_States[1] -
        GNC2026W_DW.BLUE_Desired_States[1]) * GNC2026W_P.Kp_yblue +
        GNC2026W_P.Kd_yblue * GNC2026W_DW.UD_DSTATE_n) * GNC2026W_P.Gain7_Gain_e;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Gain: '<S150>/Gain8' incorporates:
      //   Gain: '<S150>/Gain2'
      //   Gain: '<S150>/Gain5'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S150>/Sum2'
      //   UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[2] = (GNC2026W_P.Kp_tblue * rtb_TSamp_n5 +
        GNC2026W_P.Kd_tblue * GNC2026W_DW.UD_DSTATE_hu) *
        GNC2026W_P.Gain8_Gain_g;

      // Update for UnitDelay: '<S192>/UD'
      //
      //  Block description for '<S192>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = rtb_TSamp_d;

      // Update for UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = rtb_TSamp_ks;

      // Update for UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = rtb_TSamp_e;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLUE)'
    } else if (GNC2026W_DW.BLUE_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' incorporates:
      //   ActionPort: '<S146>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   DataStoreRead: '<S146>/Data Store Read2'
      //   MATLAB Function: '<S168>/MATLAB Function'
      //   Product: '<S146>/Matrix Multiply'
      //   SampleTimeMath: '<S169>/TSamp'
      //
      //  About '<S169>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLUE_Desired_States[2],
        GNC2026W_DW.BLUE_Measured_States[2], &tmp[2]);
      rtb_TSamp_n5 = GNC2026W_DW.BLUE_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_ft;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S169>/Diff' incorporates:
      //   UnitDelay: '<S169>/UD'
      //
      //  Block description for '<S169>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S169>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_l = rtb_TSamp_n5 - GNC2026W_DW.UD_DSTATE_l;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   SampleTimeMath: '<S170>/TSamp'
      //
      //  About '<S170>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_d = GNC2026W_DW.BLUE_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_eh;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S170>/Diff' incorporates:
      //   UnitDelay: '<S170>/UD'
      //
      //  Block description for '<S170>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = rtb_TSamp_d - GNC2026W_DW.UD_DSTATE_k;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   SampleTimeMath: '<S171>/TSamp'
      //
      //  About '<S171>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ks = GNC2026W_DW.BLUE_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_ii;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S171>/Diff' incorporates:
      //   UnitDelay: '<S171>/UD'
      //
      //  Block description for '<S171>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = rtb_TSamp_ks - GNC2026W_DW.UD_DSTATE_h;

      // Sum: '<S146>/Subtract7' incorporates:
      //   DataStoreRead: '<S146>/Data Store Read2'
      //   UnitDelay: '<S169>/UD'
      //
      //  Block description for '<S169>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_l = GNC2026W_DW.BLUE_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_l;

      // Sum: '<S146>/Subtract6' incorporates:
      //   DataStoreRead: '<S146>/Data Store Read2'
      //   UnitDelay: '<S170>/UD'
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = GNC2026W_DW.BLUE_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_k;

      // Sum: '<S146>/Subtract8' incorporates:
      //   DataStoreRead: '<S146>/Data Store Read2'
      //   UnitDelay: '<S171>/UD'
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = GNC2026W_DW.BLUE_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_h;
      for (r = 0; r < 18; r++) {
        // Product: '<S146>/Matrix Multiply' incorporates:
        //   Constant: '<S146>/Constant2'

        P_xy[r] = -GNC2026W_P.K_BLUE[r];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S125>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S133>/Data Store Read4'
      //   DataStoreRead: '<S146>/Data Store Read2'
      //   Product: '<S146>/Matrix Multiply'
      //   Reshape: '<S146>/Reshape1'
      //   Sum: '<S146>/Subtract4'
      //   Sum: '<S146>/Subtract5'

      tmp[0] = GNC2026W_DW.BLUE_Measured_States[0] -
        GNC2026W_DW.BLUE_Desired_States[0];
      tmp[1] = GNC2026W_DW.BLUE_Measured_States[1] -
        GNC2026W_DW.BLUE_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Product: '<S146>/Matrix Multiply' incorporates:
      //   Reshape: '<S146>/Reshape2'
      //   UnitDelay: '<S169>/UD'
      //   UnitDelay: '<S170>/UD'
      //   UnitDelay: '<S171>/UD'
      //
      //  Block description for '<S169>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM

      tmp[3] = GNC2026W_DW.UD_DSTATE_l;
      tmp[4] = GNC2026W_DW.UD_DSTATE_k;
      tmp[5] = GNC2026W_DW.UD_DSTATE_h;
      for (r = 0; r < 3; r++) {
        // Product: '<S146>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge2'

        rtb_TSamp_e = 0.0;
        for (vcol = 0; vcol < 6; vcol++) {
          // Merge: '<S3>/Merge2' incorporates:
          //   Product: '<S146>/Matrix Multiply'
          //   Reshape: '<S146>/Reshape4'

          rtb_TSamp_e += P_xy[3 * vcol + r] * tmp[vcol];
        }

        // Merge: '<S3>/Merge2' incorporates:
        //   Product: '<S146>/Matrix Multiply'

        GNC2026W_B.Merge2[r] = rtb_TSamp_e;
      }

      // Update for UnitDelay: '<S169>/UD'
      //
      //  Block description for '<S169>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_l = rtb_TSamp_n5;

      // Update for UnitDelay: '<S170>/UD'
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = rtb_TSamp_d;

      // Update for UnitDelay: '<S171>/UD'
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = rtb_TSamp_ks;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLUE)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLUE)' incorporates:
      //   ActionPort: '<S154>/Action Port'

      GNC2026W_DisableThrustersBLACK(GNC2026W_B.Merge2,
        &GNC2026W_P.DisableThrustersBLUE);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLUE)'
    }

    // End of If: '<S3>/If2'

    // DataStoreWrite: '<S3>/BLUE Controls'
    rtb_TSamp_n5 = GNC2026W_B.Merge2[0];
    rtb_TSamp_d = GNC2026W_B.Merge2[1];
    rtb_TSamp_ks = GNC2026W_B.Merge2[2];

    // If: '<S3>/If3' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read5'

    if (GNC2026W_DW.ARM_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD (ARM)' incorporates:
      //   ActionPort: '<S148>/Action Port'

      // DataStoreWrite: '<S148>/Data Store Write12' incorporates:
      //   Constant: '<S148>/Constant7'

      GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.Constant7_Value;

      // If: '<S148>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
      //   DataStoreRead: '<S148>/Data Store Read4'

      if (GNC2026W_DW.isSim == 1.0) {
        // Outputs for IfAction SubSystem: '<S148>/Simulated Position Controller' incorporates:
        //   ActionPort: '<S179>/Action Port'

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S123>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S131>/Data Store Read'
        //   DataStoreRead: '<S179>/Data Store Read2'
        //   Sum: '<S179>/Subtract3'

        rtb_TSamp_e = GNC2026W_DW.ARM_Desired_States[1] -
          GNC2026W_DW.ARM_Measured_States[1];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S183>/TSamp'
        //
        //  About '<S183>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp = rtb_TSamp_e * GNC2026W_P.TSamp_WtEt_pu;

        // Sum: '<S180>/Sum3' incorporates:
        //   Gain: '<S180>/kd_elarm'
        //   Gain: '<S180>/kp_elarm'
        //   Sum: '<S183>/Diff'
        //   UnitDelay: '<S183>/UD'
        //
        //  Block description for '<S183>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S183>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE = (rtb_TSamp - GNC2026W_DW.UD_DSTATE) *
          GNC2026W_P.Kd_elarm + GNC2026W_P.Kp_elarm * rtb_TSamp_e;

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S123>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S131>/Data Store Read'
        //   DataStoreRead: '<S179>/Data Store Read2'
        //   Sum: '<S179>/Subtract2'

        rtb_TSamp_e = GNC2026W_DW.ARM_Desired_States[0] -
          GNC2026W_DW.ARM_Measured_States[0];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S184>/TSamp'
        //
        //  About '<S184>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_hx = rtb_TSamp_e * GNC2026W_P.TSamp_WtEt_f0;

        // Sum: '<S181>/Sum3' incorporates:
        //   Gain: '<S181>/kd_sharm'
        //   Gain: '<S181>/kp_sharm'
        //   Sum: '<S184>/Diff'
        //   UnitDelay: '<S184>/UD'
        //
        //  Block description for '<S184>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S184>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_e = (rtb_TSamp_hx - GNC2026W_DW.UD_DSTATE_e) *
          GNC2026W_P.Kd_sharm + GNC2026W_P.Kp_sharm * rtb_TSamp_e;

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S123>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S131>/Data Store Read'
        //   DataStoreRead: '<S179>/Data Store Read2'
        //   Sum: '<S179>/Subtract4'

        rtb_TSamp_e = GNC2026W_DW.ARM_Desired_States[2] -
          GNC2026W_DW.ARM_Measured_States[2];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S185>/TSamp'
        //
        //  About '<S185>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_h = rtb_TSamp_e * GNC2026W_P.TSamp_WtEt_nz;

        // Sum: '<S182>/Sum3' incorporates:
        //   Gain: '<S182>/kd_wrarm'
        //   Gain: '<S182>/kp_wrarm'
        //   Sum: '<S185>/Diff'
        //   UnitDelay: '<S185>/UD'
        //
        //  Block description for '<S185>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S185>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_a = (rtb_TSamp_h - GNC2026W_DW.UD_DSTATE_a) *
          GNC2026W_P.Kd_wrarm + GNC2026W_P.Kp_wrarm * rtb_TSamp_e;

        // Saturate: '<S179>/Saturation' incorporates:
        //   UnitDelay: '<S184>/UD'
        //
        //  Block description for '<S184>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_e > GNC2026W_P.Tz_lim_sharm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge3'

          rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_P.Tz_lim_sharm;
        } else if (GNC2026W_DW.UD_DSTATE_e < -GNC2026W_P.Tz_lim_sharm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge3'

          rtb_TmpSignalConversionAtSFun_b[0] = -GNC2026W_P.Tz_lim_sharm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge3'

          rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_DW.UD_DSTATE_e;
        }

        // End of Saturate: '<S179>/Saturation'

        // Saturate: '<S179>/Saturation1' incorporates:
        //   UnitDelay: '<S183>/UD'
        //
        //  Block description for '<S183>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE > GNC2026W_P.Tz_lim_elarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge4'

          rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_P.Tz_lim_elarm;
        } else if (GNC2026W_DW.UD_DSTATE < -GNC2026W_P.Tz_lim_elarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge4'

          rtb_TmpSignalConversionAtSFun_b[1] = -GNC2026W_P.Tz_lim_elarm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge4'

          rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_DW.UD_DSTATE;
        }

        // End of Saturate: '<S179>/Saturation1'

        // Saturate: '<S179>/Saturation3' incorporates:
        //   UnitDelay: '<S185>/UD'
        //
        //  Block description for '<S185>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_a > GNC2026W_P.Tz_lim_wrarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge5'

          rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_P.Tz_lim_wrarm;
        } else if (GNC2026W_DW.UD_DSTATE_a < -GNC2026W_P.Tz_lim_wrarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge5'

          rtb_TmpSignalConversionAtSFun_b[2] = -GNC2026W_P.Tz_lim_wrarm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S148>/Merge5'

          rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_DW.UD_DSTATE_a;
        }

        // End of Saturate: '<S179>/Saturation3'

        // Update for UnitDelay: '<S183>/UD'
        //
        //  Block description for '<S183>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE = rtb_TSamp;

        // Update for UnitDelay: '<S184>/UD'
        //
        //  Block description for '<S184>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_e = rtb_TSamp_hx;

        // Update for UnitDelay: '<S185>/UD'
        //
        //  Block description for '<S185>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_a = rtb_TSamp_h;

        // End of Outputs for SubSystem: '<S148>/Simulated Position Controller'
      } else {
        // Outputs for IfAction SubSystem: '<S148>/Passthrough for Experiment' incorporates:
        //   ActionPort: '<S178>/Action Port'

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S123>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S131>/Data Store Read'
        //   Merge: '<S148>/Merge3'
        //   Merge: '<S148>/Merge4'
        //   Merge: '<S148>/Merge5'
        //   Merge: '<S3>/Merge6'
        //   SignalConversion generated from: '<S178>/q1_desired'
        //   SignalConversion generated from: '<S178>/q2_desired'
        //   SignalConversion generated from: '<S178>/q3_desired'

        rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_DW.ARM_Desired_States[0];
        rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_DW.ARM_Desired_States[1];
        rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_DW.ARM_Desired_States[2];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'
        // End of Outputs for SubSystem: '<S148>/Passthrough for Experiment'
      }

      // End of If: '<S148>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      // End of Outputs for SubSystem: '<S3>/Default PD (ARM)'
    } else if (GNC2026W_DW.ARM_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (ARM)' incorporates:
      //   ActionPort: '<S143>/Action Port'

      GNC2026W_DisableThrustersRED(rtb_TmpSignalConversionAtSFun_b,
        &GNC2026W_P.CustomControlARM);

      // End of Outputs for SubSystem: '<S3>/Custom Control (ARM)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Control (ARM)' incorporates:
      //   ActionPort: '<S152>/Action Port'

      // DataStoreWrite: '<S152>/Data Store Write12' incorporates:
      //   Constant: '<S152>/Constant7'

      GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.Constant7_Value_h;

      // Merge: '<S3>/Merge6' incorporates:
      //   Constant: '<S152>/Zero'
      //   SignalConversion generated from: '<S152>/Out1'

      rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_P.Zero_Value;
      rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_P.Zero_Value;
      rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_P.Zero_Value;

      // End of Outputs for SubSystem: '<S3>/Disable Control (ARM)'
    }

    // End of If: '<S3>/If3'

    // If: '<S3>/If' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read1'

    if (GNC2026W_DW.RED_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (RED)' incorporates:
      //   ActionPort: '<S151>/Action Port'

      // MATLAB Function: '<S196>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //   DataStoreRead: '<S151>/Data Store Read13'

      GNC2026W_MATLABFunction_n(RED_Path_idx_2, GNC2026W_DW.RED_Measured_States
        [2], &rtb_TSamp_e);

      // SampleTimeMath: '<S197>/TSamp' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //
      //  About '<S197>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp = RED_Path_idx_0 * GNC2026W_P.TSamp_WtEt;

      // Sum: '<S197>/Diff' incorporates:
      //   UnitDelay: '<S197>/UD'
      //
      //  Block description for '<S197>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S197>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = rtb_TSamp - GNC2026W_DW.UD_DSTATE_eg;

      // SampleTimeMath: '<S198>/TSamp' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //
      //  About '<S198>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_hx = RED_Path_idx_1 * GNC2026W_P.TSamp_WtEt_f;

      // Sum: '<S198>/Diff' incorporates:
      //   UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = rtb_TSamp_hx - GNC2026W_DW.UD_DSTATE_cd;

      // SampleTimeMath: '<S199>/TSamp' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //
      //  About '<S199>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_h = RED_Path_idx_2 * GNC2026W_P.TSamp_WtEt_c;

      // Sum: '<S199>/Diff' incorporates:
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = rtb_TSamp_h - GNC2026W_DW.UD_DSTATE_hd;

      // Sum: '<S151>/Subtract7' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   UnitDelay: '<S197>/UD'
      //
      //  Block description for '<S197>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = GNC2026W_DW.RED_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_eg;

      // Sum: '<S151>/Subtract6' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = GNC2026W_DW.RED_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_cd;

      // Sum: '<S151>/Subtract8' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = GNC2026W_DW.RED_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_hd;

      // Gain: '<S151>/Gain6' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   Gain: '<S151>/Gain'
      //   Gain: '<S151>/Gain3'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S151>/Subtract5'
      //   Sum: '<S151>/Sum'
      //   UnitDelay: '<S197>/UD'
      //
      //  Block description for '<S197>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[0] = ((GNC2026W_DW.RED_Measured_States[0] -
        RED_Path_idx_0) * GNC2026W_P.Kp_xr + GNC2026W_P.Kd_xr *
        GNC2026W_DW.UD_DSTATE_eg) * GNC2026W_P.Gain6_Gain;

      // Gain: '<S151>/Gain7' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   Gain: '<S151>/Gain1'
      //   Gain: '<S151>/Gain4'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S151>/Subtract4'
      //   Sum: '<S151>/Sum1'
      //   UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[1] = ((GNC2026W_DW.RED_Measured_States[1] -
        RED_Path_idx_1) * GNC2026W_P.Kp_yr + GNC2026W_P.Kd_yr *
        GNC2026W_DW.UD_DSTATE_cd) * GNC2026W_P.Gain7_Gain;

      // Gain: '<S151>/Gain8' incorporates:
      //   Gain: '<S151>/Gain2'
      //   Gain: '<S151>/Gain5'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S151>/Sum2'
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[2] = (GNC2026W_P.Kp_tr * rtb_TSamp_e + GNC2026W_P.Kd_tr *
        GNC2026W_DW.UD_DSTATE_hd) * GNC2026W_P.Gain8_Gain;

      // Update for UnitDelay: '<S197>/UD'
      //
      //  Block description for '<S197>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = rtb_TSamp;

      // Update for UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = rtb_TSamp_hx;

      // Update for UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = rtb_TSamp_h;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (RED)'
    } else if (GNC2026W_DW.RED_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (RED)' incorporates:
      //   ActionPort: '<S147>/Action Port'

      // Product: '<S147>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read1'
      //   DataStoreRead: '<S147>/Data Store Read13'
      //   MATLAB Function: '<S173>/MATLAB Function'

      GNC2026W_MATLABFunction_n(RED_Path_idx_2, GNC2026W_DW.RED_Measured_States
        [2], &tmp_0[2]);

      // SampleTimeMath: '<S174>/TSamp' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read1'
      //
      //  About '<S174>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_e = RED_Path_idx_0 * GNC2026W_P.TSamp_WtEt_h;

      // Sum: '<S174>/Diff' incorporates:
      //   UnitDelay: '<S174>/UD'
      //
      //  Block description for '<S174>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S174>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = rtb_TSamp_e - GNC2026W_DW.UD_DSTATE_aq;

      // SampleTimeMath: '<S175>/TSamp' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read1'
      //
      //  About '<S175>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp = RED_Path_idx_1 * GNC2026W_P.TSamp_WtEt_e;

      // Sum: '<S175>/Diff' incorporates:
      //   UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_p = rtb_TSamp - GNC2026W_DW.UD_DSTATE_p;

      // SampleTimeMath: '<S176>/TSamp' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read1'
      //
      //  About '<S176>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_hx = RED_Path_idx_2 * GNC2026W_P.TSamp_WtEt_n;

      // Sum: '<S176>/Diff' incorporates:
      //   UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = rtb_TSamp_hx - GNC2026W_DW.UD_DSTATE_pr;

      // Sum: '<S147>/Subtract7' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read13'
      //   UnitDelay: '<S174>/UD'
      //
      //  Block description for '<S174>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = GNC2026W_DW.RED_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_aq;

      // Sum: '<S147>/Subtract6' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read13'
      //   UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_p = GNC2026W_DW.RED_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_p;

      // Sum: '<S147>/Subtract8' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read13'
      //   UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = GNC2026W_DW.RED_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_pr;
      for (r = 0; r < 18; r++) {
        // Product: '<S147>/Matrix Multiply' incorporates:
        //   Constant: '<S147>/Constant2'

        P_xy[r] = -GNC2026W_P.K_RED[r];
      }

      // Product: '<S147>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read1'
      //   DataStoreRead: '<S147>/Data Store Read13'
      //   Reshape: '<S147>/Reshape2'
      //   Reshape: '<S147>/Reshape3'
      //   Sum: '<S147>/Subtract4'
      //   Sum: '<S147>/Subtract5'
      //   UnitDelay: '<S174>/UD'
      //   UnitDelay: '<S175>/UD'
      //   UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S174>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      tmp_0[0] = GNC2026W_DW.RED_Measured_States[0] - RED_Path_idx_0;
      tmp_0[1] = GNC2026W_DW.RED_Measured_States[1] - RED_Path_idx_1;
      tmp_0[3] = GNC2026W_DW.UD_DSTATE_aq;
      tmp_0[4] = GNC2026W_DW.UD_DSTATE_p;
      tmp_0[5] = GNC2026W_DW.UD_DSTATE_pr;
      for (r = 0; r < 3; r++) {
        // Product: '<S147>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge'

        rtb_TSamp_h = 0.0;
        for (vcol = 0; vcol < 6; vcol++) {
          // Merge: '<S3>/Merge' incorporates:
          //   Product: '<S147>/Matrix Multiply'
          //   Reshape: '<S147>/Reshape4'

          rtb_TSamp_h += P_xy[3 * vcol + r] * tmp_0[vcol];
        }

        // Merge: '<S3>/Merge' incorporates:
        //   Product: '<S147>/Matrix Multiply'

        GNC2026W_B.Merge[r] = rtb_TSamp_h;
      }

      // Update for UnitDelay: '<S174>/UD'
      //
      //  Block description for '<S174>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = rtb_TSamp_e;

      // Update for UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_p = rtb_TSamp;

      // Update for UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = rtb_TSamp_hx;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (RED)'
    } else if (GNC2026W_DW.RED_Control_Law_Enabler == 3.0) {
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (RED)' incorporates:
      //   ActionPort: '<S144>/Action Port'

      // MATLAB Function: '<S160>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S144>/Data Store Read'
      //   Delay: '<S160>/Delay'
      //   Delay: '<S160>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_l, GNC2026W_DW.Delay1_DSTATE_ba,
        &GNC2026W_DW.Delay1_DSTATE_ba, &GNC2026W_DW.Delay_DSTATE_l);

      // MATLAB Function: '<S159>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S144>/Data Store Read4'
      //   Delay: '<S159>/Delay'
      //   Delay: '<S159>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.thRel, GNC2026W_DW.Delay_DSTATE_c5,
        GNC2026W_DW.Delay1_DSTATE_ag, &GNC2026W_DW.Delay1_DSTATE_ag,
        &GNC2026W_DW.Delay_DSTATE_c5);

      // MATLAB Function: '<S144>/MATLAB Function2' incorporates:
      //   DataStoreWrite: '<S144>/Data Store Write2'
      //   Delay: '<S159>/Delay1'

      if (!GNC2026W_DW.x_not_empty) {
        GNC2026W_DW.x_k[0] = GNC2026W_DW.Delay1_DSTATE_ag;
        GNC2026W_DW.x_k[1] = 0.0;
        GNC2026W_DW.x_k[2] = 0.0;
        GNC2026W_DW.x_not_empty = true;
      }

      F[0] = 1.0;
      F[3] = GNC2026W_P.baseRate;
      F[6] = 0.0;
      F[1] = 0.0;
      F[4] = 1.0;
      F[7] = GNC2026W_P.baseRate;
      F[2] = 0.0;
      F[5] = 0.0;
      F[8] = 0.0;
      rtb_TSamp_e = 0.0;
      for (aoffset = 0; aoffset < 3; aoffset++) {
        rtb_TSamp = 0.0;
        for (r = 0; r < 3; r++) {
          vcol = 3 * r + aoffset;
          rtb_TSamp += F[vcol] * GNC2026W_DW.x_k[r];
          F_0[vcol] = (GNC2026W_DW.P_i[3 * r + 1] * F[aoffset + 3] +
                       GNC2026W_DW.P_i[3 * r] * F[aoffset]) + GNC2026W_DW.P_i[3 *
            r + 2] * F[aoffset + 6];
        }

        x_minus[aoffset] = rtb_TSamp;
        rtb_TSamp_hx = F_0[aoffset + 3];
        rtb_TSamp_h = F_0[aoffset];
        F_1 = F_0[aoffset + 6];
        for (r = 0; r < 3; r++) {
          br = 3 * r + aoffset;
          P_minus[br] = ((F[r + 3] * rtb_TSamp_hx + rtb_TSamp_h * F[r]) + F[r +
                         6] * F_1) + c_0[br];
        }

        vcol = a[aoffset];
        RED_Controls[aoffset] = vcol;
        rtb_TSamp_e += static_cast<real_T>(vcol) * rtb_TSamp;
        S_tmp[aoffset] = a[aoffset];
      }

      rtb_TSamp_hx = GNC2026W_DW.Delay1_DSTATE_ag - rtb_TSamp_e;
      rtb_TSamp_e = 0.0;
      vcol = static_cast<int32_T>(RED_Controls[1]);
      aoffset = static_cast<int32_T>(RED_Controls[0]);
      br = static_cast<int32_T>(RED_Controls[2]);
      for (r = 0; r < 3; r++) {
        rtb_TSamp_e += ((P_minus[3 * r + 1] * static_cast<real_T>(vcol) +
                         P_minus[3 * r] * static_cast<real_T>(aoffset)) +
                        P_minus[3 * r + 2] * static_cast<real_T>(br)) *
          static_cast<real_T>(S_tmp[r]);
      }

      rtPrevAction = S_tmp[1];
      rtAction = S_tmp[0];
      S_tmp_0 = S_tmp[2];
      for (aoffset = 0; aoffset < 3; aoffset++) {
        rtb_TSamp = ((P_minus[aoffset + 3] * static_cast<real_T>(rtPrevAction) +
                      P_minus[aoffset] * static_cast<real_T>(rtAction)) +
                     P_minus[aoffset + 6] * static_cast<real_T>(S_tmp_0)) /
          rtb_TSamp_e;
        K[aoffset] = rtb_TSamp;
        GNC2026W_DW.x_k[aoffset] = rtb_TSamp * rtb_TSamp_hx + x_minus[aoffset];
      }

      memset(&F[0], 0, 9U * sizeof(real_T));
      F[0] = 1.0;
      F[4] = 1.0;
      F[8] = 1.0;
      rtb_TSamp = K[0];
      rtb_TSamp_e = K[1];
      rtb_TSamp_hx = K[2];
      for (r = 0; r < 3; r++) {
        vcol = static_cast<int32_T>(RED_Controls[r]);
        F_0[3 * r] = F[3 * r] - rtb_TSamp * static_cast<real_T>(vcol);
        aoffset = 3 * r + 1;
        F_0[aoffset] = F[aoffset] - rtb_TSamp_e * static_cast<real_T>(vcol);
        aoffset = 3 * r + 2;
        F_0[aoffset] = F[aoffset] - rtb_TSamp_hx * static_cast<real_T>(vcol);
      }

      for (aoffset = 0; aoffset < 3; aoffset++) {
        rtb_TSamp_hx = F_0[aoffset + 3];
        rtb_TSamp_h = F_0[aoffset];
        F_1 = F_0[aoffset + 6];
        for (r = 0; r < 3; r++) {
          GNC2026W_DW.P_i[aoffset + 3 * r] = (P_minus[3 * r + 1] * rtb_TSamp_hx
            + P_minus[3 * r] * rtb_TSamp_h) + P_minus[3 * r + 2] * F_1;
        }

        GNC2026W_DW.lambda[aoffset] = GNC2026W_DW.x_k[aoffset];
      }

      // Reshape: '<S158>/Reshape' incorporates:
      //   DataStoreRead: '<S144>/Data Store Read'
      //   Delay: '<S160>/Delay1'

      F[0] = GNC2026W_DW.RED_Measured_States[0];
      F[1] = GNC2026W_DW.RED_Measured_States[1];
      F[2] = GNC2026W_DW.Delay1_DSTATE_ba;
      for (r = 0; r < 6; r++) {
        F[r + 3] = GNC2026W_DW.RED_Measured_States[r + 3];

        // MATLAB Function: '<S144>/MATLAB Function2' incorporates:
        //   DataStoreRead: '<S144>/Data Store Read1'

        P_minus[r] = F[r] - GNC2026W_DW.RED_desired[r];
      }

      // End of Reshape: '<S158>/Reshape'

      // MATLAB Function: '<S144>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S144>/Data Store Read1'
      //   DataStoreWrite: '<S144>/Data Store Write1'
      //   Delay: '<S159>/Delay1'

      GNC2026W_DW.lambdaFirstOrder[0] = GNC2026W_DW.Delay1_DSTATE_ag;
      GNC2026W_DW.lambdaFirstOrder[1] = (GNC2026W_DW.Delay1_DSTATE_ag -
        GNC2026W_DW.l1) / GNC2026W_P.baseRate;
      GNC2026W_DW.lambdaFirstOrder[2] = ((GNC2026W_DW.Delay1_DSTATE_ag - 2.0 *
        GNC2026W_DW.l1) + GNC2026W_DW.l2) / GNC2026W_P.baseRate;
      GNC2026W_DW.l2 = GNC2026W_DW.l1;
      GNC2026W_DW.l1 = GNC2026W_DW.Delay1_DSTATE_ag;
      for (r = 0; r < 3; r++) {
        P_minus[r + 6] = -GNC2026W_DW.RED_desired[r + 6];

        // MATLAB Function: '<S144>/MATLAB Function3' incorporates:
        //   Constant: '<S144>/Constant7'
        //   DataStoreRead: '<S144>/Data Store Read1'

        for (vcol = 0; vcol < 3; vcol++) {
          aoffset = 3 * vcol + r;
          F_0[vcol + 3 * r] = GNC2026W_P.A_c[aoffset];
          A_tmp[aoffset] = (GNC2026W_P.Mc_inv[3 * vcol + 1] * GNC2026W_P.A_c[r +
                            3] + GNC2026W_P.Mc_inv[3 * vcol] * GNC2026W_P.A_c[r])
            + GNC2026W_P.Mc_inv[3 * vcol + 2] * GNC2026W_P.A_c[r + 6];
        }
      }

      // MATLAB Function: '<S144>/MATLAB Function3' incorporates:
      //   Constant: '<S144>/Constant3'
      //   MATLAB Function: '<S144>/MATLAB Function2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp_e = F_0[3 * r + 1];
        rtb_TSamp = F_0[3 * r];
        rtb_TSamp_hx = F_0[3 * r + 2];
        for (vcol = 0; vcol < 3; vcol++) {
          F[vcol + 3 * r] = (A_tmp[vcol + 3] * rtb_TSamp_e + rtb_TSamp *
                             A_tmp[vcol]) + A_tmp[vcol + 6] * rtb_TSamp_hx;
        }
      }

      rEQ0 = true;
      for (r = 0; r < 9; r++) {
        b[r] = 0.0;
        if (rEQ0) {
          rtb_TSamp_hx = F[r];
          if (rtIsInf(rtb_TSamp_hx) || rtIsNaN(rtb_TSamp_hx)) {
            rEQ0 = false;
          }
        }
      }

      if (!rEQ0) {
        for (r = 0; r < 9; r++) {
          b[r] = (rtNaN);
        }
      } else {
        GNC2026W_svd_n(F, U, RED_Controls, V);
        rtb_TSamp_e = fabs(RED_Controls[0]);
        if (rtIsInf(rtb_TSamp_e) || rtIsNaN(rtb_TSamp_e)) {
          rtb_TSamp_e = (rtNaN);
        } else if (rtb_TSamp_e < 4.4501477170144028E-308) {
          rtb_TSamp_e = 4.94065645841247E-324;
        } else {
          frexp(rtb_TSamp_e, &r2);
          rtb_TSamp_e = ldexp(1.0, r2 - 53);
        }

        rtb_TSamp_e *= 3.0;
        aoffset = 0;
        exitg1 = false;
        while ((!exitg1) && (aoffset < 3)) {
          if (rtIsInf(RED_Controls[aoffset]) || rtIsNaN(RED_Controls[aoffset]))
          {
            rtb_TSamp_e = 1.7976931348623157E+308;
            exitg1 = true;
          } else {
            aoffset++;
          }
        }

        r = -1;
        r2 = 0;
        while ((r2 < 3) && (RED_Controls[r2] > rtb_TSamp_e)) {
          r++;
          r2++;
        }

        if (r + 1 > 0) {
          vcol = 1;
          for (aoffset = 0; aoffset <= r; aoffset++) {
            rtb_TSamp = 1.0 / RED_Controls[aoffset];
            for (r2 = vcol; r2 <= vcol + 2; r2++) {
              V[r2 - 1] *= rtb_TSamp;
            }

            vcol += 3;
          }

          for (r2 = 0; r2 <= 6; r2 += 3) {
            for (vcol = r2 + 1; vcol <= r2 + 3; vcol++) {
              b[vcol - 1] = 0.0;
            }
          }

          br = 0;
          for (r2 = 0; r2 <= 6; r2 += 3) {
            ar = -1;
            br++;
            boffset = 3 * r + br;
            for (vcol = br; vcol <= boffset; vcol += 3) {
              for (aoffset = r2 + 1; aoffset <= r2 + 3; aoffset++) {
                b[aoffset - 1] += V[(ar + aoffset) - r2] * U[vcol - 1];
              }

              ar += 3;
            }
          }
        }
      }

      for (r = 0; r < 3; r++) {
        rtb_TSamp_e = F_0[r + 3];
        rtb_TSamp = F_0[r];
        rtb_TSamp_hx = F_0[r + 6];
        for (vcol = 0; vcol < 3; vcol++) {
          F[r + 3 * vcol] = (b[3 * vcol + 1] * rtb_TSamp_e + b[3 * vcol] *
                             rtb_TSamp) + b[3 * vcol + 2] * rtb_TSamp_hx;
        }

        x_minus[r] = ((-P_minus[r + 6] - P_minus[r + 3] * GNC2026W_P.alpha) -
                      ((GNC2026W_P.gamma[r + 3] * P_minus[1] +
                        GNC2026W_P.gamma[r] * P_minus[0]) + GNC2026W_P.gamma[r +
                       6] * P_minus[2])) - ((A_tmp[r + 3] * GNC2026W_P.F_u[1] +
          A_tmp[r] * GNC2026W_P.F_u[0]) + A_tmp[r + 6] * GNC2026W_P.F_u[2]);
      }

      rtb_TSamp_e = x_minus[1];
      rtb_TSamp = x_minus[0];
      rtb_TSamp_hx = x_minus[2];
      for (r = 0; r < 3; r++) {
        // Merge: '<S3>/Merge' incorporates:
        //   MATLAB Function: '<S144>/MATLAB Function3'

        GNC2026W_B.Merge[r] = (F[r + 3] * rtb_TSamp_e + F[r] * rtb_TSamp) + F[r
          + 6] * rtb_TSamp_hx;
      }

      // End of Outputs for SubSystem: '<S3>/Custom Control (RED)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (RED)' incorporates:
      //   ActionPort: '<S155>/Action Port'

      GNC2026W_DisableThrustersRED(GNC2026W_B.Merge,
        &GNC2026W_P.DisableThrustersRED);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (RED)'
    }

    // End of If: '<S3>/If'

    // DataStoreWrite: '<S3>/RED Controls'
    RED_Controls[0] = GNC2026W_B.Merge[0];
    RED_Controls[1] = GNC2026W_B.Merge[1];
    RED_Controls[2] = GNC2026W_B.Merge[2];

    // DataStoreWrite: '<S16>/Data Store Write' incorporates:
    //   Constant: '<S16>/Constant'

    GNC2026W_DW.isSim = GNC2026W_P.simMode;

    // If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S323>/Constant1'
    //   Constant: '<S323>/Constant2'
    //   DataStoreRead: '<S17>/Data Store Read'
    //   DataStoreRead: '<S17>/Data Store Read1'
    //   Delay: '<S323>/Delay'
    //   RelationalOperator: '<S323>/Relational Operator1'
    //   RelationalOperator: '<S323>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 1.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S17>/Change RED Behavior' incorporates:
      //   ActionPort: '<S296>/Action Port'

      // MATLAB Function: '<S327>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S296>/Data Store Read1'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.RED_Measured_States[2], rtb_C_Ib);

      // MATLAB Function: '<S322>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S296>/Data Store Read1'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.RED_Measured_States[2],
        &rtb_ThrustPer_Final_p[0]);

      // Product: '<S322>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_TSamp_e = rtb_ThrustPer_Final_p[0] * GNC2026W_B.Merge[0] +
        GNC2026W_B.Merge[1] * rtb_ThrustPer_Final_p[2];

      // SignalConversion generated from: '<S324>/Product3' incorporates:
      //   Product: '<S322>/Rotate F_I to F_b'

      x_minus[0] = rtb_TSamp_e;

      // Product: '<S322>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_TSamp = GNC2026W_B.Merge[0] * rtb_ThrustPer_Final_p[1] +
        GNC2026W_B.Merge[1] * rtb_ThrustPer_Final_p[3];

      // SignalConversion generated from: '<S324>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      x_minus[1] = rtb_TSamp;
      x_minus[2] = GNC2026W_B.Merge[2];

      // MATLAB Function: '<S324>/MATLAB Function'
      for (aoffset = 0; aoffset < 8; aoffset++) {
        rtb_Product3_f[aoffset] = GNC2026W_P.F_thrusters_RED[aoffset] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (aoffset = 0; aoffset < 8; aoffset++) {
        y[aoffset + (aoffset << 3)] = rtb_Product3_f[aoffset];
        b_0[3 * aoffset] = b_1[aoffset];
        b_0[3 * aoffset + 1] = c[aoffset];
        b_0[3 * aoffset + 2] = GNC2026W_P.thruster_dist2CG_RED[aoffset] / 1000.0;
      }

      for (r = 0; r < 8; r++) {
        for (vcol = 0; vcol < 3; vcol++) {
          rtb_TSamp_hx = 0.0;
          for (r2 = 0; r2 < 8; r2++) {
            rtb_TSamp_hx += b_0[3 * r2 + vcol] * y[(r << 3) + r2];
          }

          rtb_H[vcol + 3 * r] = rtb_TSamp_hx;
        }
      }

      // End of MATLAB Function: '<S324>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1_pn);
      for (r = 0; r < 8; r++) {
        // Product: '<S324>/Product3' incorporates:
        //   MATLABSystem: '<S324>/Pseudoinverse1'
        //   Product: '<S322>/Rotate F_I to F_b'

        rtb_Product3[r] = (GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[r + 8] *
                           rtb_TSamp +
                           GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[r] *
                           rtb_TSamp_e) +
          GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[r + 16] * x_minus[2];
      }

      // MATLAB Function: '<S321>/MATLAB Function5' incorporates:
      //   Reshape: '<S321>/Reshape'

      GNC2026W_MATLABFunction5(x_minus, rtb_Product3, rtb_H_final,
        GNC2026W_B.duty_cycles, GNC2026W_P.MATLABFunction5_max_iters_e,
        GNC2026W_P.MATLABFunction5_tol_g);

      // MATLAB Function: '<S321>/MATLAB Function8'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles, rtb_ThrustPer_Final_p);

      // Outputs for Enabled SubSystem: '<S323>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S328>/Enable'

      if (GNC2026W_DW.Delay_DSTATE >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S328>/In1' incorporates:
        //   DataStoreRead: '<S323>/Data Store Read'

        GNC2026W_B.In1 = GNC2026W_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S323>/Enabled Subsystem'

      // Sum: '<S323>/Subtract' incorporates:
      //   Constant: '<S323>/Constant1'
      //   DataStoreRead: '<S323>/Data Store Read'
      //   Delay: '<S323>/Delay'
      //   RelationalOperator: '<S323>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE = GNC2026W_DW.Univ_Time - GNC2026W_B.In1;

      // Outputs for Enabled SubSystem: '<S323>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S329>/Enable'

      if (GNC2026W_DW.Delay_DSTATE == GNC2026W_P.Constant2_Value_e) {
        // SignalConversion generated from: '<S329>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final[0], &rtb_ThrustPer_Final_p[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S323>/Enabled Subsystem1'

      // Product: '<S321>/Product1' incorporates:
      //   Constant: '<S323>/Constant2'
      //   Delay: '<S323>/Delay'
      //   RelationalOperator: '<S323>/Relational Operator2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp = 0.0;
        for (vcol = 0; vcol < 8; vcol++) {
          rtb_TSamp += rtb_H_final[3 * vcol + r] *
            GNC2026W_B.ThrustPer_Final[vcol];
        }

        x_minus[r] = rtb_TSamp;
      }

      // End of Product: '<S321>/Product1'

      // DataStoreWrite: '<S296>/Data Store Write1' incorporates:
      //   Product: '<S327>/Rotate F_b to F_I'

      GNC2026W_DW.RED_Saturated_Controls[0] = rtb_C_Ib[0] * x_minus[0] +
        x_minus[1] * rtb_C_Ib[2];
      GNC2026W_DW.RED_Saturated_Controls[1] = x_minus[0] * rtb_C_Ib[1] +
        x_minus[1] * rtb_C_Ib[3];
      GNC2026W_DW.RED_Saturated_Controls[2] = x_minus[2];

      // End of Outputs for SubSystem: '<S17>/Change RED Behavior'
    }

    // End of If: '<S17>/This IF block determines whether or not to run the RED sim//exp ' 

    // DataStoreWrite: '<S17>/Data Store Write'
    memcpy(&rtb_Product3[0], &GNC2026W_B.duty_cycles[0], sizeof(real_T) << 3U);

    // If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   Constant: '<S299>/Constant1'
    //   Constant: '<S299>/Constant2'
    //   DataStoreRead: '<S17>/Data Store Read'
    //   DataStoreRead: '<S17>/Data Store Read1'
    //   Delay: '<S299>/Delay'
    //   RelationalOperator: '<S299>/Relational Operator1'
    //   RelationalOperator: '<S299>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 2.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S17>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S294>/Action Port'

      // MATLAB Function: '<S303>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S294>/BLACK States'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.BLACK_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S298>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S294>/BLACK States'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.BLACK_Measured_States[2],
        &rtb_H_final_g[0]);

      // Product: '<S298>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_TSamp_e = rtb_H_final_g[0] * GNC2026W_B.Merge1[0] + GNC2026W_B.Merge1
        [1] * rtb_H_final_g[2];

      // SignalConversion generated from: '<S300>/Product3' incorporates:
      //   Product: '<S298>/Rotate F_I to F_b'

      x_minus[0] = rtb_TSamp_e;

      // Product: '<S298>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_TSamp = GNC2026W_B.Merge1[0] * rtb_H_final_g[1] + GNC2026W_B.Merge1[1]
        * rtb_H_final_g[3];

      // SignalConversion generated from: '<S300>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      x_minus[1] = rtb_TSamp;
      x_minus[2] = GNC2026W_B.Merge1[2];

      // MATLAB Function: '<S300>/MATLAB Function'
      for (aoffset = 0; aoffset < 8; aoffset++) {
        rtb_Product3_f[aoffset] = GNC2026W_P.F_thrusters_BLACK[aoffset] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (aoffset = 0; aoffset < 8; aoffset++) {
        y[aoffset + (aoffset << 3)] = rtb_Product3_f[aoffset];
        b_0[3 * aoffset] = b_1[aoffset];
        b_0[3 * aoffset + 1] = c[aoffset];
        b_0[3 * aoffset + 2] = GNC2026W_P.thruster_dist2CG_BLACK[aoffset] /
          1000.0;
      }

      for (r = 0; r < 8; r++) {
        for (vcol = 0; vcol < 3; vcol++) {
          rtb_TSamp_hx = 0.0;
          for (r2 = 0; r2 < 8; r2++) {
            rtb_TSamp_hx += b_0[3 * r2 + vcol] * y[(r << 3) + r2];
          }

          rtb_H[vcol + 3 * r] = rtb_TSamp_hx;
        }
      }

      // End of MATLAB Function: '<S300>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1);
      for (r = 0; r < 8; r++) {
        // Product: '<S300>/Product3' incorporates:
        //   MATLABSystem: '<S300>/Pseudoinverse1'
        //   Product: '<S298>/Rotate F_I to F_b'

        rtb_Product3_h[r] = (GNC2026W_B.Pseudoinverse1.Pseudoinverse1[r + 8] *
                             rtb_TSamp +
                             GNC2026W_B.Pseudoinverse1.Pseudoinverse1[r] *
                             rtb_TSamp_e) +
          GNC2026W_B.Pseudoinverse1.Pseudoinverse1[r + 16] * x_minus[2];
      }

      // MATLAB Function: '<S297>/MATLAB Function5' incorporates:
      //   Reshape: '<S297>/Reshape'

      GNC2026W_MATLABFunction5(x_minus, rtb_Product3_h, rtb_H_final_g,
        GNC2026W_B.duty_cycles_m, GNC2026W_P.MATLABFunction5_max_iters,
        GNC2026W_P.MATLABFunction5_tol);

      // MATLAB Function: '<S297>/MATLAB Function1'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles_m, rtb_Product3_h);

      // Outputs for Enabled SubSystem: '<S299>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S304>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_kz >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S304>/In1' incorporates:
        //   DataStoreRead: '<S299>/Data Store Read'

        GNC2026W_B.In1_g2 = GNC2026W_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S299>/Enabled Subsystem'

      // Sum: '<S299>/Subtract' incorporates:
      //   Constant: '<S299>/Constant1'
      //   DataStoreRead: '<S299>/Data Store Read'
      //   Delay: '<S299>/Delay'
      //   RelationalOperator: '<S299>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_kz = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g2;

      // Outputs for Enabled SubSystem: '<S299>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S305>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_kz == GNC2026W_P.Constant2_Value_h) {
        // SignalConversion generated from: '<S305>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h5[0], &rtb_Product3_h[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S299>/Enabled Subsystem1'

      // Product: '<S297>/Product1' incorporates:
      //   Constant: '<S299>/Constant2'
      //   Delay: '<S299>/Delay'
      //   RelationalOperator: '<S299>/Relational Operator2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp = 0.0;
        for (vcol = 0; vcol < 8; vcol++) {
          rtb_TSamp += rtb_H_final_g[3 * vcol + r] *
            GNC2026W_B.ThrustPer_Final_h5[vcol];
        }

        x_minus[r] = rtb_TSamp;
      }

      // End of Product: '<S297>/Product1'

      // DataStoreWrite: '<S294>/Data Store Write2' incorporates:
      //   Product: '<S303>/Rotate F_b to F_I'

      GNC2026W_DW.BLACK_Saturated_Controls[0] = rtb_C_Ib[0] * x_minus[0] +
        x_minus[1] * rtb_C_Ib[2];
      GNC2026W_DW.BLACK_Saturated_Controls[1] = x_minus[0] * rtb_C_Ib[1] +
        x_minus[1] * rtb_C_Ib[3];
      GNC2026W_DW.BLACK_Saturated_Controls[2] = x_minus[2];

      // End of Outputs for SubSystem: '<S17>/Change BLACK Behavior'
    }

    // End of If: '<S17>/This IF block determines whether or not to run the BLACK sim//exp' 

    // DataStoreWrite: '<S17>/Data Store Write1'
    memcpy(&rtb_Product3_h[0], &GNC2026W_B.duty_cycles_m[0], sizeof(real_T) <<
           3U);

    // If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   Constant: '<S311>/Constant1'
    //   Constant: '<S311>/Constant2'
    //   DataStoreRead: '<S17>/Data Store Read'
    //   DataStoreRead: '<S17>/Data Store Read1'
    //   Delay: '<S311>/Delay'
    //   RelationalOperator: '<S311>/Relational Operator1'
    //   RelationalOperator: '<S311>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 3.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S17>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S295>/Action Port'

      // MATLAB Function: '<S315>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S295>/Data Store Read1'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.BLUE_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S310>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S295>/Data Store Read1'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.BLUE_Measured_States[2],
        &rtb_H_final_j[0]);

      // Product: '<S310>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_TSamp_e = rtb_H_final_j[0] * GNC2026W_B.Merge2[0] + GNC2026W_B.Merge2
        [1] * rtb_H_final_j[2];

      // SignalConversion generated from: '<S312>/Product3' incorporates:
      //   Product: '<S310>/Rotate F_I to F_b'

      x_minus[0] = rtb_TSamp_e;

      // Product: '<S310>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_TSamp = GNC2026W_B.Merge2[0] * rtb_H_final_j[1] + GNC2026W_B.Merge2[1]
        * rtb_H_final_j[3];

      // SignalConversion generated from: '<S312>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      x_minus[1] = rtb_TSamp;
      x_minus[2] = GNC2026W_B.Merge2[2];

      // MATLAB Function: '<S312>/MATLAB Function'
      for (aoffset = 0; aoffset < 8; aoffset++) {
        rtb_Product3_f[aoffset] = GNC2026W_P.F_thrusters_BLUE[aoffset] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (aoffset = 0; aoffset < 8; aoffset++) {
        y[aoffset + (aoffset << 3)] = rtb_Product3_f[aoffset];
        b_0[3 * aoffset] = b_1[aoffset];
        b_0[3 * aoffset + 1] = c[aoffset];
        b_0[3 * aoffset + 2] = GNC2026W_P.thruster_dist2CG_BLUE[aoffset] /
          1000.0;
      }

      for (r = 0; r < 8; r++) {
        for (vcol = 0; vcol < 3; vcol++) {
          rtb_TSamp_hx = 0.0;
          for (r2 = 0; r2 < 8; r2++) {
            rtb_TSamp_hx += b_0[3 * r2 + vcol] * y[(r << 3) + r2];
          }

          rtb_H[vcol + 3 * r] = rtb_TSamp_hx;
        }
      }

      // End of MATLAB Function: '<S312>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1_p);
      for (r = 0; r < 8; r++) {
        // Product: '<S312>/Product3' incorporates:
        //   MATLABSystem: '<S312>/Pseudoinverse1'
        //   Product: '<S310>/Rotate F_I to F_b'

        rtb_Product3_f[r] = (GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[r + 8] *
                             rtb_TSamp +
                             GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[r] *
                             rtb_TSamp_e) +
          GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[r + 16] * x_minus[2];
      }

      // MATLAB Function: '<S309>/MATLAB Function5' incorporates:
      //   Reshape: '<S309>/Reshape'

      GNC2026W_MATLABFunction5(x_minus, rtb_Product3_f, rtb_H_final_j,
        GNC2026W_B.duty_cycles_j, GNC2026W_P.MATLABFunction5_max_iters_b,
        GNC2026W_P.MATLABFunction5_tol_j);

      // MATLAB Function: '<S309>/MATLAB Function1'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles_j, rtb_Product3_f);

      // Outputs for Enabled SubSystem: '<S311>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S316>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_k >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S316>/In1' incorporates:
        //   DataStoreRead: '<S311>/Data Store Read'

        GNC2026W_B.In1_g = GNC2026W_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S311>/Enabled Subsystem'

      // Sum: '<S311>/Subtract' incorporates:
      //   Constant: '<S311>/Constant1'
      //   DataStoreRead: '<S311>/Data Store Read'
      //   Delay: '<S311>/Delay'
      //   RelationalOperator: '<S311>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_k = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g;

      // Outputs for Enabled SubSystem: '<S311>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S317>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_k == GNC2026W_P.Constant2_Value_fq) {
        // SignalConversion generated from: '<S317>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h[0], &rtb_Product3_f[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S311>/Enabled Subsystem1'

      // Product: '<S309>/Product1' incorporates:
      //   Constant: '<S311>/Constant2'
      //   Delay: '<S311>/Delay'
      //   RelationalOperator: '<S311>/Relational Operator2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp = 0.0;
        for (vcol = 0; vcol < 8; vcol++) {
          rtb_TSamp += rtb_H_final_j[3 * vcol + r] *
            GNC2026W_B.ThrustPer_Final_h[vcol];
        }

        x_minus[r] = rtb_TSamp;
      }

      // End of Product: '<S309>/Product1'

      // DataStoreWrite: '<S295>/Data Store Write3' incorporates:
      //   Product: '<S315>/Rotate F_b to F_I'

      GNC2026W_DW.BLUE_Saturated_Controls[0] = rtb_C_Ib[0] * x_minus[0] +
        x_minus[1] * rtb_C_Ib[2];
      GNC2026W_DW.BLUE_Saturated_Controls[1] = x_minus[0] * rtb_C_Ib[1] +
        x_minus[1] * rtb_C_Ib[3];
      GNC2026W_DW.BLUE_Saturated_Controls[2] = x_minus[2];

      // End of Outputs for SubSystem: '<S17>/Change BLUE Behavior'
    }

    // End of If: '<S17>/This IF block determines whether or not to run the BLUE sim//exp' 

    // DataStoreWrite: '<S17>/Data Store Write2'
    memcpy(&rtb_Product3_f[0], &GNC2026W_B.duty_cycles_j[0], sizeof(real_T) <<
           3U);

    // SignalConversion generated from: '<S17>/UDP Send' incorporates:
    //   Constant: '<S17>/PWM Frequency'
    //   Constant: '<S17>/Safety Number'
    //   Gain: '<S17>/Gain'
    //   Gain: '<S17>/Gain1'
    //   Gain: '<S17>/Gain2'
    //   Gain: '<S17>/Gain3'
    //   Gain: '<S17>/Gain4'
    //   Gain: '<S17>/Gain5'
    //   Gain: '<S17>/Gain6'
    //   Gain: '<S17>/Gain7'
    //   Sum: '<S17>/Sum'
    //   Sum: '<S17>/Sum1'
    //   Sum: '<S17>/Sum2'
    //   Sum: '<S17>/Sum3'
    //   Sum: '<S17>/Sum4'
    //   Sum: '<S17>/Sum5'
    //   Sum: '<S17>/Sum6'
    //   Sum: '<S17>/Sum7'

    GNC2026W_B.TmpSignalConversionAtUDPSendInp[0] =
      GNC2026W_P.SafetyNumber_Value;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[1] = GNC2026W_P.PWMFreq;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[2] = ((GNC2026W_B.duty_cycles[0]
      + GNC2026W_B.duty_cycles_m[0]) + GNC2026W_B.duty_cycles_j[0]) *
      GNC2026W_P.Gain_Gain_oy;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[3] = ((GNC2026W_B.duty_cycles[1]
      + GNC2026W_B.duty_cycles_m[1]) + GNC2026W_B.duty_cycles_j[1]) *
      GNC2026W_P.Gain1_Gain_em;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[4] = ((GNC2026W_B.duty_cycles[2]
      + GNC2026W_B.duty_cycles_m[2]) + GNC2026W_B.duty_cycles_j[2]) *
      GNC2026W_P.Gain2_Gain;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[5] = ((GNC2026W_B.duty_cycles[3]
      + GNC2026W_B.duty_cycles_m[3]) + GNC2026W_B.duty_cycles_j[3]) *
      GNC2026W_P.Gain3_Gain;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[6] = ((GNC2026W_B.duty_cycles[4]
      + GNC2026W_B.duty_cycles_m[4]) + GNC2026W_B.duty_cycles_j[4]) *
      GNC2026W_P.Gain4_Gain;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[7] = ((GNC2026W_B.duty_cycles[5]
      + GNC2026W_B.duty_cycles_m[5]) + GNC2026W_B.duty_cycles_j[5]) *
      GNC2026W_P.Gain5_Gain;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[8] = ((GNC2026W_B.duty_cycles[6]
      + GNC2026W_B.duty_cycles_m[6]) + GNC2026W_B.duty_cycles_j[6]) *
      GNC2026W_P.Gain6_Gain_c;
    GNC2026W_B.TmpSignalConversionAtUDPSendInp[9] = ((GNC2026W_B.duty_cycles[7]
      + GNC2026W_B.duty_cycles_m[7]) + GNC2026W_B.duty_cycles_j[7]) *
      GNC2026W_P.Gain7_Gain_l;

    // If: '<S1>/Separate Phases' incorporates:
    //   Constant: '<S1>/Constant'
    //   Constant: '<S1>/Constant1'
    //   Constant: '<S1>/Constant2'
    //   Constant: '<S1>/Constant3'
    //   Constant: '<S1>/Constant4'
    //   Constant: '<S1>/Constant6'
    //   DataStoreRead: '<S1>/Universal_Time25'
    //   DataStoreWrite: '<S21>/Data Store Write10'
    //   DataStoreWrite: '<S21>/Data Store Write11'
    //   DataStoreWrite: '<S21>/Data Store Write2'
    //   StringConstant: '<S21>/String Constant'
    //   StringConstant: '<S21>/String Constant1'
    //   StringConstant: '<S21>/String Constant2'

    if (GNC2026W_DW.Univ_Time < GNC2026W_P.Phase0_End) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #0: Synchronization' incorporates:
      //   ActionPort: '<S19>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_e, &GNC2026W_DW.BLACK_Control_Law_Enabler,
        GNC2026W_DW.BLACK_Logger, &rtb_TSamp,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &rtb_TSamp_hx, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase0Synchronization);

      // End of Outputs for SubSystem: '<S1>/Phase #0: Synchronization'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase1_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase0_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #1: Start Floating ' incorporates:
      //   ActionPort: '<S20>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_e, &GNC2026W_DW.BLACK_Control_Law_Enabler,
        GNC2026W_DW.BLACK_Logger, &rtb_TSamp,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &rtb_TSamp_hx, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase1StartFloating);

      // End of Outputs for SubSystem: '<S1>/Phase #1: Start Floating '
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase2_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase1_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #2: Initial Position' incorporates:
      //   ActionPort: '<S21>/Action Port'

      // DataStoreWrite: '<S21>/Data Store Write24' incorporates:
      //   Constant: '<S21>/Constant11'

      GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value;

      // DataStoreWrite: '<S21>/Data Store Write27' incorporates:
      //   Constant: '<S21>/Constant18'

      GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value;

      // DataStoreWrite: '<S21>/Data Store Write4' incorporates:
      //   Constant: '<S21>/Constant4'

      GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value;

      // DataStoreWrite: '<S21>/Data Store Write8' incorporates:
      //   Constant: '<S21>/Constant5'

      GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value;

      // DataStoreWrite: '<S21>/Data Store Write7' incorporates:
      //   Constant: '<S21>/Constant6'

      GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value;

      // DataStoreWrite: '<S21>/Data Store Write16' incorporates:
      //   Constant: '<S21>/Constant8'

      GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value;
      strncpy(&GNC2026W_DW.BLACK_Logger[0], &GNC2026W_P.StringConstant1_String[0],
              255U);
      GNC2026W_DW.BLACK_Logger[255] = '\x00';
      strncpy(&GNC2026W_DW.BLUE_Logger[0], &GNC2026W_P.StringConstant2_String[0],
              255U);
      GNC2026W_DW.BLUE_Logger[255] = '\x00';

      // DataStoreWrite: '<S21>/Data Store Write13' incorporates:
      //   Constant: '<S26>/Constant1'
      //   Constant: '<S26>/Constant2'
      //   Constant: '<S26>/Constant3'
      //   DataStoreWrite: '<S21>/Data Store Write10'
      //   DataStoreWrite: '<S21>/Data Store Write11'
      //   StringConstant: '<S21>/String Constant1'
      //   StringConstant: '<S21>/String Constant2'

      GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value;
      GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value;
      GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value;
      strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String[0],
              255U);
      GNC2026W_DW.RED_Logger[255] = '\x00';

      // DataStoreWrite: '<S21>/Data Store Write1' incorporates:
      //   Constant: '<S27>/Desired States (BLACK)'
      //   DataStoreWrite: '<S21>/Data Store Write2'
      //   StringConstant: '<S21>/String Constant'

      GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_P.init_states_BLACK[0];

      // DataStoreWrite: '<S21>/Data Store Write18' incorporates:
      //   Constant: '<S28>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.init_states_BLUE[0];

      // DataStoreWrite: '<S21>/Data Store Write9' incorporates:
      //   Constant: '<S29>/Constant2'

      GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];

      // DataStoreWrite: '<S21>/Data Store Write1' incorporates:
      //   Constant: '<S27>/Desired States (BLACK)'

      GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_P.init_states_BLACK[1];

      // DataStoreWrite: '<S21>/Data Store Write18' incorporates:
      //   Constant: '<S28>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.init_states_BLUE[1];

      // DataStoreWrite: '<S21>/Data Store Write9' incorporates:
      //   Constant: '<S29>/Constant2'

      GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];

      // DataStoreWrite: '<S21>/Data Store Write1' incorporates:
      //   Constant: '<S27>/Desired States (BLACK)'

      GNC2026W_DW.BLACK_Desired_States[2] = GNC2026W_P.init_states_BLACK[2];

      // DataStoreWrite: '<S21>/Data Store Write18' incorporates:
      //   Constant: '<S28>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[2] = GNC2026W_P.init_states_BLUE[2];

      // DataStoreWrite: '<S21>/Data Store Write9' incorporates:
      //   Constant: '<S29>/Constant2'

      GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

      // End of Outputs for SubSystem: '<S1>/Phase #2: Initial Position'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase2_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #3: Experiment' incorporates:
      //   ActionPort: '<S22>/Action Port'

      // If: '<S22>/Experiment Sub-Phases' incorporates:
      //   Constant: '<S22>/Constant1'
      //   Constant: '<S22>/Constant2'
      //   Constant: '<S22>/Constant3'
      //   Constant: '<S22>/Constant4'
      //   DataStoreRead: '<S22>/Universal_Time'
      //   DataStoreWrite: '<S30>/Data Store Write10'
      //   DataStoreWrite: '<S30>/Data Store Write11'
      //   DataStoreWrite: '<S30>/Data Store Write6'
      //   DataStoreWrite: '<S31>/Data Store Write10'
      //   DataStoreWrite: '<S31>/Data Store Write11'
      //   DataStoreWrite: '<S31>/Data Store Write6'
      //   DataStoreWrite: '<S32>/Data Store Write10'
      //   DataStoreWrite: '<S32>/Data Store Write11'
      //   DataStoreWrite: '<S32>/Data Store Write6'
      //   DataStoreWrite: '<S33>/Data Store Write10'
      //   DataStoreWrite: '<S33>/Data Store Write11'
      //   DataStoreWrite: '<S33>/Data Store Write6'
      //   StringConstant: '<S30>/String Constant'
      //   StringConstant: '<S30>/String Constant1'
      //   StringConstant: '<S30>/String Constant2'
      //   StringConstant: '<S31>/String Constant'
      //   StringConstant: '<S31>/String Constant1'
      //   StringConstant: '<S31>/String Constant2'
      //   StringConstant: '<S32>/String Constant'
      //   StringConstant: '<S32>/String Constant1'
      //   StringConstant: '<S32>/String Constant2'
      //   StringConstant: '<S33>/String Constant'
      //   StringConstant: '<S33>/String Constant1'
      //   StringConstant: '<S33>/String Constant2'

      if (GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase1_End) {
        // Outputs for IfAction SubSystem: '<S22>/Sub-Phase #1' incorporates:
        //   ActionPort: '<S30>/Action Port'

        // DataStoreWrite: '<S30>/Data Store Write24' incorporates:
        //   Constant: '<S30>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_e;

        // DataStoreWrite: '<S30>/Data Store Write2' incorporates:
        //   Constant: '<S30>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_m;

        // DataStoreWrite: '<S30>/Data Store Write4' incorporates:
        //   Constant: '<S30>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_g;

        // DataStoreWrite: '<S30>/Data Store Write3' incorporates:
        //   Constant: '<S30>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_o;

        // DataStoreWrite: '<S30>/Data Store Write7' incorporates:
        //   Constant: '<S30>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_i;

        // DataStoreWrite: '<S30>/Data Store Write16' incorporates:
        //   Constant: '<S30>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_m;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_k[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_p[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S30>/Data Store Write13' incorporates:
        //   Constant: '<S34>/Constant1'
        //   Constant: '<S34>/Constant2'
        //   Constant: '<S34>/Constant3'
        //   DataStoreWrite: '<S30>/Data Store Write10'
        //   DataStoreWrite: '<S30>/Data Store Write11'
        //   StringConstant: '<S30>/String Constant1'
        //   StringConstant: '<S30>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_b;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_o;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_f;

        // Sum: '<S45>/Subtract3' incorporates:
        //   Constant: '<S45>/Constant2'
        //   DataStoreRead: '<S47>/Universal_Time'
        //   Sum: '<S41>/Subtract'
        //   Sum: '<S42>/Subtract'
        //   Sum: '<S43>/Subtract'

        rtb_TSamp_hx = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S36>/Product' incorporates:
        //   Constant: '<S36>/Desired Rate '
        //   Sum: '<S45>/Subtract3'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRate_Value;

        // Trigonometry: '<S44>/Sin' incorporates:
        //   Trigonometry: '<S46>/Sin'

        rtb_TSamp_e = sin(rtb_TSamp);

        // Trigonometry: '<S44>/Cos' incorporates:
        //   Trigonometry: '<S46>/Cos'

        rtb_TSamp = cos(rtb_TSamp);

        // DataStoreWrite: '<S30>/Data Store Write18' incorporates:
        //   Constant: '<S44>/Constant1'
        //   Constant: '<S44>/Constant2'
        //   Gain: '<S44>/Gain'
        //   Gain: '<S44>/Gain1'
        //   Sum: '<S44>/Sum1'
        //   Sum: '<S44>/Sum2'
        //   Trigonometry: '<S44>/Cos'
        //   Trigonometry: '<S44>/Sin'
        //   Trigonometry: '<S46>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain * rtb_TSamp +
          GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain * rtb_TSamp_e
          + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_e,
          rtb_TSamp);

        // Product: '<S38>/Product' incorporates:
        //   Constant: '<S38>/Desired Rate (BLACK)'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRateBLACK_Value;

        // DataStoreWrite: '<S30>/Data Store Write5' incorporates:
        //   Constant: '<S39>/Constant'
        //   Constant: '<S39>/Constant1'
        //   Constant: '<S39>/Desired X-Position (BLACK)'
        //   Constant: '<S39>/Desired Y-Position (BLACK)'
        //   Product: '<S39>/Matrix Multiply'
        //   Product: '<S39>/Matrix Multiply1'
        //   Sum: '<S39>/Sum'
        //   Sum: '<S39>/Sum1'
        //   Trigonometry: '<S40>/Atan2'
        //   Trigonometry: '<S40>/Cos'
        //   Trigonometry: '<S40>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = rtb_TSamp_hx *
          GNC2026W_P.Constant1_Value_n + GNC2026W_P.X1_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = rtb_TSamp_hx *
          GNC2026W_P.Constant_Value + GNC2026W_P.Y1_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp), cos
          (rtb_TSamp));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_b
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // DataStoreWrite: '<S30>/Data Store Write9' incorporates:
        //   Constant: '<S37>/Constant2'
        //   DataStoreWrite: '<S30>/Data Store Write6'
        //   StringConstant: '<S30>/String Constant'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];
        GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

        // Sum: '<S50>/Sum' incorporates:
        //   Constant: '<S37>/Separation'
        //   Constant: '<S50>/Constant'
        //   DataStoreWrite: '<S37>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.sep1 + GNC2026W_P.Constant_Value_n;

        // End of Outputs for SubSystem: '<S22>/Sub-Phase #1'
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase2_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase1_End)) {
        // Outputs for IfAction SubSystem: '<S22>/Sub-Phase #2 ' incorporates:
        //   ActionPort: '<S31>/Action Port'

        // DataStoreWrite: '<S31>/Data Store Write2' incorporates:
        //   Constant: '<S31>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_n;

        // DataStoreWrite: '<S31>/Data Store Write4' incorporates:
        //   Constant: '<S31>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_a;

        // DataStoreWrite: '<S31>/Data Store Write7' incorporates:
        //   Constant: '<S31>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_p;

        // DataStoreWrite: '<S31>/Data Store Write16' incorporates:
        //   Constant: '<S31>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_o;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_e[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_e[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S31>/Data Store Write13' incorporates:
        //   Constant: '<S53>/Constant1'
        //   Constant: '<S53>/Constant2'
        //   Constant: '<S53>/Constant3'
        //   DataStoreWrite: '<S31>/Data Store Write10'
        //   DataStoreWrite: '<S31>/Data Store Write11'
        //   StringConstant: '<S31>/String Constant1'
        //   StringConstant: '<S31>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_p;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_m;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_p;

        // Sum: '<S65>/Subtract3' incorporates:
        //   Constant: '<S65>/Constant2'
        //   DataStoreRead: '<S67>/Universal_Time'
        //   Sum: '<S61>/Subtract'
        //   Sum: '<S62>/Subtract'
        //   Sum: '<S63>/Subtract'

        rtb_TSamp_hx = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S55>/Product' incorporates:
        //   Constant: '<S55>/Desired Rate '
        //   Sum: '<S65>/Subtract3'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRate_Value_h;

        // Trigonometry: '<S64>/Sin' incorporates:
        //   Trigonometry: '<S66>/Sin'

        rtb_TSamp_e = sin(rtb_TSamp);

        // Trigonometry: '<S64>/Cos' incorporates:
        //   Trigonometry: '<S66>/Cos'

        rtb_TSamp = cos(rtb_TSamp);

        // DataStoreWrite: '<S31>/Data Store Write18' incorporates:
        //   Constant: '<S64>/Constant1'
        //   Constant: '<S64>/Constant2'
        //   Gain: '<S64>/Gain'
        //   Gain: '<S64>/Gain1'
        //   Sum: '<S64>/Sum1'
        //   Sum: '<S64>/Sum2'
        //   Trigonometry: '<S64>/Cos'
        //   Trigonometry: '<S64>/Sin'
        //   Trigonometry: '<S66>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_h * rtb_TSamp
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_c *
          rtb_TSamp_e + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_e,
          rtb_TSamp);

        // Product: '<S58>/Product' incorporates:
        //   Constant: '<S58>/Desired Rate (BLACK)'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRateBLACK_Value_k;

        // DataStoreWrite: '<S31>/Data Store Write5' incorporates:
        //   Constant: '<S59>/Constant'
        //   Constant: '<S59>/Constant1'
        //   Constant: '<S59>/Desired X-Position (BLACK)'
        //   Constant: '<S59>/Desired Y-Position (BLACK)'
        //   Product: '<S59>/Matrix Multiply'
        //   Product: '<S59>/Matrix Multiply1'
        //   Sum: '<S59>/Sum'
        //   Sum: '<S59>/Sum1'
        //   Trigonometry: '<S60>/Atan2'
        //   Trigonometry: '<S60>/Cos'
        //   Trigonometry: '<S60>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = rtb_TSamp_hx *
          GNC2026W_P.Constant1_Value_f + GNC2026W_P.X2_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = rtb_TSamp_hx *
          GNC2026W_P.Constant_Value_f + GNC2026W_P.Y2_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp), cos
          (rtb_TSamp));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_c
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // DataStoreWrite: '<S31>/Data Store Write9' incorporates:
        //   Constant: '<S56>/Constant2'
        //   DataStoreWrite: '<S31>/Data Store Write6'
        //   StringConstant: '<S31>/String Constant'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];
        GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

        // Sum: '<S70>/Sum' incorporates:
        //   Constant: '<S56>/Separation'
        //   Constant: '<S70>/Constant'
        //   DataStoreWrite: '<S56>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.sep2 + GNC2026W_P.Constant_Value_e;

        // MATLAB Function: '<S57>/First Fit Detector' incorporates:
        //   DataStoreRead: '<S57>/Data Store Read'
        //   DataStoreRead: '<S57>/Data Store Read4'

        if ((GNC2026W_DW.isValid == 1.0) && (GNC2026W_DW.firstfit == 0.0)) {
          GNC2026W_DW.firstfit = 1.0;
        }

        if ((GNC2026W_DW.firstfit == 1.0) && (GNC2026W_DW.isValid == 1.0) &&
            (GNC2026W_DW.prev == 1.0)) {
          if (GNC2026W_DW.counter < 5.0) {
            GNC2026W_DW.phase = 0.0;
          } else if ((GNC2026W_DW.counter > 5.0) &&
                     (GNC2026W_DW.filterConfidence == 0.0)) {
            GNC2026W_DW.phase = 1.0;
          } else if ((GNC2026W_DW.counter > 5.0) &&
                     (GNC2026W_DW.filterConfidence == 1.0)) {
            GNC2026W_DW.phase = 2.0;
          }

          GNC2026W_DW.counter++;
        } else if (GNC2026W_DW.counter < 5.0) {
          GNC2026W_DW.phase = 3.0;
          GNC2026W_DW.counter = 0.0;
        } else if ((GNC2026W_DW.counter > 5.0) && (GNC2026W_DW.filterConfidence ==
                    0.0)) {
          GNC2026W_DW.phase = 4.0;
        } else if ((GNC2026W_DW.counter > 5.0) && (GNC2026W_DW.filterConfidence ==
                    1.0)) {
          GNC2026W_DW.phase = 5.0;
        }

        GNC2026W_DW.prev = GNC2026W_DW.isValid;

        // If: '<S57>/If' incorporates:
        //   MATLAB Function: '<S57>/First Fit Detector'

        if (GNC2026W_DW.phase == 0.0) {
          // Outputs for IfAction SubSystem: '<S57>/If Action Subsystem' incorporates:
          //   ActionPort: '<S74>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem_a);

          // End of Outputs for SubSystem: '<S57>/If Action Subsystem'
        } else if (GNC2026W_DW.phase == 1.0) {
          // Outputs for IfAction SubSystem: '<S57>/If Action Subsystem1' incorporates:
          //   ActionPort: '<S75>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem1);

          // End of Outputs for SubSystem: '<S57>/If Action Subsystem1'
        } else if (GNC2026W_DW.phase == 2.0) {
          // Outputs for IfAction SubSystem: '<S57>/If Action Subsystem2' incorporates:
          //   ActionPort: '<S76>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem2);

          // End of Outputs for SubSystem: '<S57>/If Action Subsystem2'
        } else if (GNC2026W_DW.phase == 3.0) {
          // Outputs for IfAction SubSystem: '<S57>/If Action Subsystem3' incorporates:
          //   ActionPort: '<S77>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem3);

          // End of Outputs for SubSystem: '<S57>/If Action Subsystem3'
        } else if (GNC2026W_DW.phase == 4.0) {
          // Outputs for IfAction SubSystem: '<S57>/If Action Subsystem4' incorporates:
          //   ActionPort: '<S78>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem4);

          // End of Outputs for SubSystem: '<S57>/If Action Subsystem4'
        } else if (GNC2026W_DW.phase == 5.0) {
          // Outputs for IfAction SubSystem: '<S57>/If Action Subsystem5' incorporates:
          //   ActionPort: '<S79>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem5);

          // End of Outputs for SubSystem: '<S57>/If Action Subsystem5'
        }

        // End of If: '<S57>/If'
        // End of Outputs for SubSystem: '<S22>/Sub-Phase #2 '
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase3_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase2_End)) {
        // Outputs for IfAction SubSystem: '<S22>/Sub-Phase #3 ' incorporates:
        //   ActionPort: '<S32>/Action Port'

        // DataStoreWrite: '<S32>/Data Store Write24' incorporates:
        //   Constant: '<S32>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_b;

        // DataStoreWrite: '<S32>/Data Store Write2' incorporates:
        //   Constant: '<S32>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_l;

        // DataStoreWrite: '<S32>/Data Store Write4' incorporates:
        //   Constant: '<S32>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_b;

        // DataStoreWrite: '<S32>/Data Store Write3' incorporates:
        //   Constant: '<S32>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_n;

        // DataStoreWrite: '<S32>/Data Store Write7' incorporates:
        //   Constant: '<S32>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_n;

        // DataStoreWrite: '<S32>/Data Store Write16' incorporates:
        //   Constant: '<S32>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_f;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_j[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_b[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S32>/Data Store Write13' incorporates:
        //   Constant: '<S80>/Constant1'
        //   Constant: '<S80>/Constant2'
        //   Constant: '<S80>/Constant3'
        //   DataStoreWrite: '<S32>/Data Store Write10'
        //   DataStoreWrite: '<S32>/Data Store Write11'
        //   StringConstant: '<S32>/String Constant1'
        //   StringConstant: '<S32>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_e;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_p;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_c;

        // Sum: '<S91>/Subtract3' incorporates:
        //   Constant: '<S91>/Constant2'
        //   DataStoreRead: '<S93>/Universal_Time'
        //   Sum: '<S87>/Subtract'
        //   Sum: '<S88>/Subtract'
        //   Sum: '<S89>/Subtract'
        //   Sum: '<S95>/Subtract3'

        rtb_TSamp_hx = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S82>/Product' incorporates:
        //   Constant: '<S82>/Desired Rate '
        //   Sum: '<S91>/Subtract3'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRate_Value_l;

        // Trigonometry: '<S90>/Sin' incorporates:
        //   Trigonometry: '<S92>/Sin'

        rtb_TSamp_e = sin(rtb_TSamp);

        // Trigonometry: '<S90>/Cos' incorporates:
        //   Trigonometry: '<S92>/Cos'

        rtb_TSamp = cos(rtb_TSamp);

        // DataStoreWrite: '<S32>/Data Store Write18' incorporates:
        //   Constant: '<S90>/Constant1'
        //   Constant: '<S90>/Constant2'
        //   Gain: '<S90>/Gain'
        //   Gain: '<S90>/Gain1'
        //   Sum: '<S90>/Sum1'
        //   Sum: '<S90>/Sum2'
        //   Trigonometry: '<S90>/Cos'
        //   Trigonometry: '<S90>/Sin'
        //   Trigonometry: '<S92>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_b * rtb_TSamp
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_k *
          rtb_TSamp_e + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_e,
          rtb_TSamp);

        // Product: '<S84>/Product' incorporates:
        //   Constant: '<S84>/Desired Rate (BLACK)'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRateBLACK_Value_kf;

        // DataStoreWrite: '<S32>/Data Store Write5' incorporates:
        //   Constant: '<S85>/Constant'
        //   Constant: '<S85>/Constant1'
        //   Constant: '<S85>/Desired X-Position (BLACK)'
        //   Constant: '<S85>/Desired Y-Position (BLACK)'
        //   Product: '<S85>/Matrix Multiply'
        //   Product: '<S85>/Matrix Multiply1'
        //   Sum: '<S85>/Sum'
        //   Sum: '<S85>/Sum1'
        //   Trigonometry: '<S86>/Atan2'
        //   Trigonometry: '<S86>/Cos'
        //   Trigonometry: '<S86>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = rtb_TSamp_hx *
          GNC2026W_P.Constant1_Value_g + GNC2026W_P.X3_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = rtb_TSamp_hx *
          GNC2026W_P.Constant_Value_d + GNC2026W_P.Y3_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp), cos
          (rtb_TSamp));
        strncpy(&GNC2026W_DW.RED_Logger[0],
                &GNC2026W_P.StringConstant_String_ca[0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // Product: '<S83>/Product' incorporates:
        //   Constant: '<S83>/Desired Rate '
        //   DataStoreWrite: '<S32>/Data Store Write6'
        //   StringConstant: '<S32>/String Constant'

        rtb_TSamp_e = rtb_TSamp_hx * GNC2026W_P.DesiredRate_Value_d;

        // Gain: '<S94>/Gain' incorporates:
        //   Trigonometry: '<S94>/Cos'

        rtb_TSamp = GNC2026W_P.Gain_Gain_ho * cos(rtb_TSamp_e);

        // Gain: '<S94>/Gain1' incorporates:
        //   Trigonometry: '<S94>/Sin'

        rtb_TSamp_hx = GNC2026W_P.Gain1_Gain_d * sin(rtb_TSamp_e);

        // Sum: '<S83>/Sum' incorporates:
        //   Constant: '<S83>/Constant'

        rtb_TSamp_e += GNC2026W_P.Constant_Value_h;

        // DataStoreWrite: '<S32>/Data Store Write9' incorporates:
        //   Constant: '<S94>/Constant1'
        //   Constant: '<S94>/Constant2'
        //   Sum: '<S94>/Sum1'
        //   Sum: '<S94>/Sum2'
        //   Trigonometry: '<S97>/Atan2'
        //   Trigonometry: '<S97>/Cos'
        //   Trigonometry: '<S97>/Sin'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.xLength / 2.0 + rtb_TSamp;
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.yLength / 2.0 +
          rtb_TSamp_hx;
        GNC2026W_DW.RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_e), cos
          (rtb_TSamp_e));

        // Sum: '<S96>/Sum' incorporates:
        //   Constant: '<S83>/Separation'
        //   Constant: '<S96>/Constant'
        //   DataStoreWrite: '<S83>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.sep3 + GNC2026W_P.Constant_Value_a;

        // End of Outputs for SubSystem: '<S22>/Sub-Phase #3 '
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase4_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase3_End)) {
        // Outputs for IfAction SubSystem: '<S22>/Sub-Phase #4' incorporates:
        //   ActionPort: '<S33>/Action Port'

        // DataStoreWrite: '<S33>/Data Store Write24' incorporates:
        //   Constant: '<S33>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_p;

        // DataStoreWrite: '<S33>/Data Store Write2' incorporates:
        //   Constant: '<S33>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_e;

        // DataStoreWrite: '<S33>/Data Store Write4' incorporates:
        //   Constant: '<S33>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_l;

        // DataStoreWrite: '<S33>/Data Store Write3' incorporates:
        //   Constant: '<S33>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_p;

        // DataStoreWrite: '<S33>/Data Store Write7' incorporates:
        //   Constant: '<S33>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_m;

        // DataStoreWrite: '<S33>/Data Store Write16' incorporates:
        //   Constant: '<S33>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_j;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_p[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_l[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S33>/Data Store Write13' incorporates:
        //   Constant: '<S99>/Constant1'
        //   Constant: '<S99>/Constant2'
        //   Constant: '<S99>/Constant3'
        //   DataStoreWrite: '<S33>/Data Store Write10'
        //   DataStoreWrite: '<S33>/Data Store Write11'
        //   StringConstant: '<S33>/String Constant1'
        //   StringConstant: '<S33>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_k;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_b;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_g;

        // Sum: '<S107>/Subtract3' incorporates:
        //   Constant: '<S107>/Constant2'
        //   DataStoreRead: '<S109>/Universal_Time'
        //   Sum: '<S105>/Subtract'
        //   Sum: '<S111>/Subtract3'

        rtb_TSamp_hx = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S101>/Product' incorporates:
        //   Constant: '<S101>/Desired Rate '
        //   Sum: '<S107>/Subtract3'

        rtb_TSamp = rtb_TSamp_hx * GNC2026W_P.DesiredRate_Value_ha;

        // Trigonometry: '<S106>/Sin' incorporates:
        //   Trigonometry: '<S108>/Sin'

        rtb_TSamp_e = sin(rtb_TSamp);

        // Trigonometry: '<S106>/Cos' incorporates:
        //   Trigonometry: '<S108>/Cos'

        rtb_TSamp = cos(rtb_TSamp);

        // DataStoreWrite: '<S33>/Data Store Write18' incorporates:
        //   Constant: '<S106>/Constant1'
        //   Constant: '<S106>/Constant2'
        //   Gain: '<S106>/Gain'
        //   Gain: '<S106>/Gain1'
        //   Sum: '<S106>/Sum1'
        //   Sum: '<S106>/Sum2'
        //   Trigonometry: '<S106>/Cos'
        //   Trigonometry: '<S106>/Sin'
        //   Trigonometry: '<S108>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_o * rtb_TSamp
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_b *
          rtb_TSamp_e + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_e,
          rtb_TSamp);

        // Product: '<S103>/Product' incorporates:
        //   Constant: '<S103>/Desired Rate (BLACK)'

        rtb_TSamp_e = rtb_TSamp_hx * GNC2026W_P.DesiredRateBLACK_Value_i;

        // DataStoreWrite: '<S33>/Data Store Write5' incorporates:
        //   Constant: '<S100>/Desired X-Position (BLACK)'
        //   Constant: '<S100>/Desired Y-Position (BLACK)'
        //   Trigonometry: '<S104>/Atan2'
        //   Trigonometry: '<S104>/Cos'
        //   Trigonometry: '<S104>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_e),
          cos(rtb_TSamp_e));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_e
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // Product: '<S102>/Product' incorporates:
        //   Constant: '<S102>/Desired Rate '
        //   DataStoreWrite: '<S33>/Data Store Write6'
        //   StringConstant: '<S33>/String Constant'

        rtb_TSamp_e = rtb_TSamp_hx * GNC2026W_P.DesiredRate_Value_n;

        // Gain: '<S110>/Gain' incorporates:
        //   Trigonometry: '<S110>/Cos'

        rtb_TSamp = GNC2026W_P.Gain_Gain_ox * cos(rtb_TSamp_e);

        // Gain: '<S110>/Gain1' incorporates:
        //   Trigonometry: '<S110>/Sin'

        rtb_TSamp_hx = GNC2026W_P.Gain1_Gain_e * sin(rtb_TSamp_e);

        // Sum: '<S102>/Sum' incorporates:
        //   Constant: '<S102>/Constant'

        rtb_TSamp_e += GNC2026W_P.Constant_Value_h1;

        // DataStoreWrite: '<S33>/Data Store Write9' incorporates:
        //   Constant: '<S110>/Constant1'
        //   Constant: '<S110>/Constant2'
        //   Sum: '<S110>/Sum1'
        //   Sum: '<S110>/Sum2'
        //   Trigonometry: '<S113>/Atan2'
        //   Trigonometry: '<S113>/Cos'
        //   Trigonometry: '<S113>/Sin'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.xLength / 2.0 + rtb_TSamp;
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.yLength / 2.0 +
          rtb_TSamp_hx;
        GNC2026W_DW.RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_e), cos
          (rtb_TSamp_e));

        // Sum: '<S112>/Sum' incorporates:
        //   Constant: '<S102>/Separation'
        //   Constant: '<S112>/Constant'
        //   DataStoreWrite: '<S102>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.Separation_Value +
          GNC2026W_P.Constant_Value_c;

        // End of Outputs for SubSystem: '<S22>/Sub-Phase #4'
      }

      // End of If: '<S22>/Experiment Sub-Phases'
      // End of Outputs for SubSystem: '<S1>/Phase #3: Experiment'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase4_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #4: Return Home' incorporates:
      //   ActionPort: '<S23>/Action Port'

      GNC2026W_Phase4ReturnHome(&GNC2026W_DW.ARM_Control_Law_Enabler,
        GNC2026W_DW.ARM_Desired_States, &rtb_TSamp_e,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Desired_States,
        GNC2026W_DW.BLACK_Logger, &rtb_TSamp,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Desired_States,
        GNC2026W_DW.BLUE_Logger, &rtb_TSamp_hx, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Desired_States,
        GNC2026W_DW.RED_Logger, &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase4ReturnHome);

      // End of Outputs for SubSystem: '<S1>/Phase #4: Return Home'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase5_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase4_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #5: Hold Home' incorporates:
      //   ActionPort: '<S24>/Action Port'

      GNC2026W_Phase4ReturnHome(&GNC2026W_DW.ARM_Control_Law_Enabler,
        GNC2026W_DW.ARM_Desired_States, &rtb_TSamp_e,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Desired_States,
        GNC2026W_DW.BLACK_Logger, &rtb_TSamp,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Desired_States,
        GNC2026W_DW.BLUE_Logger, &rtb_TSamp_hx, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Desired_States,
        GNC2026W_DW.RED_Logger, &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase5HoldHome);

      // End of Outputs for SubSystem: '<S1>/Phase #5: Hold Home'
    } else if (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase5_End) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #6: Clean Shutdown' incorporates:
      //   ActionPort: '<S25>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_e, &GNC2026W_DW.BLACK_Control_Law_Enabler,
        GNC2026W_DW.BLACK_Logger, &rtb_TSamp,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &rtb_TSamp_hx, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase6CleanShutdown);

      // End of Outputs for SubSystem: '<S1>/Phase #6: Clean Shutdown'
    }

    // End of If: '<S1>/Separate Phases'

    // If: '<S4>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S201>/Action Port'

      GNC2026W_ChangeBLACKBehavior(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior,
        &GNC2026W_P.ChangeBLACKBehavior);

      // End of Outputs for SubSystem: '<S4>/Change BLACK Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S4>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S202>/Action Port'

      GNC2026W_ChangeBLACKBehavior(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior,
        &GNC2026W_P.ChangeBLUEBehavior);

      // End of Outputs for SubSystem: '<S4>/Change BLUE Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change RED Behavior' incorporates:
      //   ActionPort: '<S203>/Action Port'

      GNC2026W_ChangeBLACKBehavior(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior,
        &GNC2026W_P.ChangeREDBehavior);

      // End of Outputs for SubSystem: '<S4>/Change RED Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' 

    // MATLAB Function: '<S205>/MATLAB Function' incorporates:
    //   DataStoreRead: '<S205>/Data Store Read31'
    //   DataStoreRead: '<S205>/Data Store Read32'

    rtb_TSamp = GNC2026W_DW.RED_Measured_States[1] -
      GNC2026W_DW.BLACK_Measured_States[1];
    rtb_TSamp_e = GNC2026W_DW.RED_Measured_States[0] -
      GNC2026W_DW.BLACK_Measured_States[0];

    // MATLABSystem: '<S204>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read'
    //   DataStoreRead: '<S5>/Data Store Read1'
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
    //   DataStoreRead: '<S5>/Data Store Read23'
    //   DataStoreRead: '<S5>/Data Store Read24'
    //   DataStoreRead: '<S5>/Data Store Read25'
    //   DataStoreRead: '<S5>/Data Store Read26'
    //   DataStoreRead: '<S5>/Data Store Read27'
    //   DataStoreRead: '<S5>/Data Store Read28'
    //   DataStoreRead: '<S5>/Data Store Read29'
    //   DataStoreRead: '<S5>/Data Store Read3'
    //   DataStoreRead: '<S5>/Data Store Read30'
    //   DataStoreRead: '<S5>/Data Store Read31'
    //   DataStoreRead: '<S5>/Data Store Read32'
    //   DataStoreRead: '<S5>/Data Store Read33'
    //   DataStoreRead: '<S5>/Data Store Read34'
    //   DataStoreRead: '<S5>/Data Store Read35'
    //   DataStoreRead: '<S5>/Data Store Read36'
    //   DataStoreRead: '<S5>/Data Store Read37'
    //   DataStoreRead: '<S5>/Data Store Read38'
    //   DataStoreRead: '<S5>/Data Store Read4'
    //   DataStoreRead: '<S5>/Data Store Read5'
    //   DataStoreRead: '<S5>/Data Store Read6'
    //   DataStoreRead: '<S5>/Data Store Read60'
    //   DataStoreRead: '<S5>/Data Store Read7'
    //   DataStoreRead: '<S5>/Data Store Read8'
    //   DataStoreRead: '<S5>/Data Store Read83'
    //   DataStoreRead: '<S5>/Data Store Read84'
    //   DataStoreRead: '<S5>/Data Store Read85'
    //   DataStoreRead: '<S5>/Data Store Read86'
    //   DataStoreRead: '<S5>/Data Store Read9'
    //   DataStoreWrite: '<S3>/Data Store Write9'
    //   MATLAB Function: '<S204>/MATLAB Function'
    //   MATLAB Function: '<S205>/MATLAB Function'
    //   SignalConversion generated from: '<S204>/MATLAB System'

    //         %% Define input properties
    //  Call C-function implementing device output
    b_u1[0] = GNC2026W_DW.Univ_Time;
    b_u1[1] = RED_Controls[0];
    b_u1[4] = GNC2026W_DW.RED_Saturated_Controls[0];
    b_u1[2] = RED_Controls[1];
    b_u1[5] = GNC2026W_DW.RED_Saturated_Controls[1];
    b_u1[3] = RED_Controls[2];
    b_u1[6] = GNC2026W_DW.RED_Saturated_Controls[2];
    memcpy(&b_u1[7], &GNC2026W_DW.RED_Measured_States[0], 9U * sizeof(real_T));
    b_u1[16] = GNC2026W_DW.RED_Desired_States[0];
    b_u1[19] = GNC2026W_DW.RED_IMU_Measurements[0];
    b_u1[17] = GNC2026W_DW.RED_Desired_States[1];
    b_u1[20] = GNC2026W_DW.RED_IMU_Measurements[1];
    b_u1[18] = GNC2026W_DW.RED_Desired_States[2];
    b_u1[21] = GNC2026W_DW.RED_IMU_Measurements[2];
    memcpy(&b_u1[22], &rtb_Product3[0], sizeof(real_T) << 3U);
    b_u1[30] = GNC2026W_DW.RED_Control_Law_Enabler;
    b_u1[34] = GNC2026W_DW.ARM_Control_Mode;
    b_u1[31] = RED_Path_idx_0;
    b_u1[35] = rtb_TmpSignalConversionAtSFun_b[0];
    b_u1[32] = RED_Path_idx_1;
    b_u1[36] = rtb_TmpSignalConversionAtSFun_b[1];
    b_u1[33] = RED_Path_idx_2;
    b_u1[37] = rtb_TmpSignalConversionAtSFun_b[2];
    for (aoffset = 0; aoffset < 6; aoffset++) {
      b_u1[aoffset + 38] = GNC2026W_DW.ARM_Measured_States[aoffset];
    }

    b_u1[44] = ARM_Path[0];
    b_u1[47] = GNC2026W_DW.ARM_Desired_States[0];
    b_u1[50] = rtb_TSamp_k;
    b_u1[53] = GNC2026W_DW.BLACK_Saturated_Controls[0];
    b_u1[45] = ARM_Path[1];
    b_u1[48] = GNC2026W_DW.ARM_Desired_States[1];
    b_u1[51] = rtb_TSamp_af;
    b_u1[54] = GNC2026W_DW.BLACK_Saturated_Controls[1];
    b_u1[46] = ARM_Path[2];
    b_u1[49] = GNC2026W_DW.ARM_Desired_States[2];
    b_u1[52] = rtb_TSamp_o;
    b_u1[55] = GNC2026W_DW.BLACK_Saturated_Controls[2];
    memcpy(&b_u1[56], &GNC2026W_DW.BLACK_Measured_States[0], 9U * sizeof(real_T));
    b_u1[65] = GNC2026W_DW.BLACK_Desired_States[0];
    b_u1[68] = GNC2026W_DW.BLACK_IMU_Measurements[0];
    b_u1[66] = GNC2026W_DW.BLACK_Desired_States[1];
    b_u1[69] = GNC2026W_DW.BLACK_IMU_Measurements[1];
    b_u1[67] = GNC2026W_DW.BLACK_Desired_States[2];
    b_u1[70] = GNC2026W_DW.BLACK_IMU_Measurements[2];
    memcpy(&b_u1[71], &rtb_Product3_h[0], sizeof(real_T) << 3U);
    b_u1[79] = GNC2026W_DW.BLACK_Control_Law_Enabler;
    b_u1[80] = BLACK_Path[0];
    b_u1[83] = rtb_TSamp_n5;
    b_u1[86] = GNC2026W_DW.BLUE_Saturated_Controls[0];
    b_u1[81] = BLACK_Path[1];
    b_u1[84] = rtb_TSamp_d;
    b_u1[87] = GNC2026W_DW.BLUE_Saturated_Controls[1];
    b_u1[82] = BLACK_Path[2];
    b_u1[85] = rtb_TSamp_ks;
    b_u1[88] = GNC2026W_DW.BLUE_Saturated_Controls[2];
    memcpy(&b_u1[89], &GNC2026W_DW.BLUE_Measured_States[0], 9U * sizeof(real_T));
    b_u1[98] = GNC2026W_DW.BLUE_Desired_States[0];
    b_u1[101] = GNC2026W_DW.BLUE_IMU_Measurements[0];
    b_u1[99] = GNC2026W_DW.BLUE_Desired_States[1];
    b_u1[102] = GNC2026W_DW.BLUE_IMU_Measurements[1];
    b_u1[100] = GNC2026W_DW.BLUE_Desired_States[2];
    b_u1[103] = GNC2026W_DW.BLUE_IMU_Measurements[2];
    memcpy(&b_u1[104], &rtb_Product3_f[0], sizeof(real_T) << 3U);
    b_u1[112] = GNC2026W_DW.BLUE_Control_Law_Enabler;
    b_u1[116] = GNC2026W_DW.Float_State;
    b_u1[117] = GNC2026W_DW.WhoAmI;
    b_u1[118] = GNC2026W_DW.isSim;
    b_u1[122] = GNC2026W_DW.VIS_Confidence;
    b_u1[113] = BLUE_Path_idx_0;
    b_u1[119] = GNC2026W_DW.VIS_Measured_States[0];
    b_u1[123] = GNC2026W_DW.BLACK_CV_States[0];
    b_u1[114] = BLUE_Path_idx_1;
    b_u1[120] = GNC2026W_DW.VIS_Measured_States[1];
    b_u1[124] = GNC2026W_DW.BLACK_CV_States[1];
    b_u1[115] = BLUE_Path_idx_2;
    b_u1[121] = GNC2026W_DW.VIS_Measured_States[2];
    b_u1[125] = GNC2026W_DW.BLACK_CV_States[2];
    for (aoffset = 0; aoffset < 6; aoffset++) {
      b_u1[aoffset + 126] = GNC2026W_DW.BLACK_Filtered_States[aoffset];
    }

    b_u1[135] = sqrt(rtb_TSamp * rtb_TSamp + rtb_TSamp_e * rtb_TSamp_e);
    b_u1[136] = GNC2026W_DW.L0;
    b_u1[140] = GNC2026W_DW.isValid;
    b_u1[141] = GNC2026W_DW.filterConfidence;
    b_u1[132] = GNC2026W_DW.VIS_LAR_States[0];
    b_u1[137] = GNC2026W_DW.sigma3[0];
    b_u1[142] = GNC2026W_DW.lambda[0];
    b_u1[145] = GNC2026W_DW.lambdaFirstOrder[0];
    b_u1[133] = GNC2026W_DW.VIS_LAR_States[1];
    b_u1[138] = GNC2026W_DW.sigma3[1];
    b_u1[143] = GNC2026W_DW.lambda[1];
    b_u1[146] = GNC2026W_DW.lambdaFirstOrder[1];
    b_u1[134] = GNC2026W_DW.VIS_LAR_States[2];
    b_u1[139] = GNC2026W_DW.sigma3[2];
    b_u1[144] = GNC2026W_DW.lambda[2];
    b_u1[147] = GNC2026W_DW.lambdaFirstOrder[2];
    appendDataToFile(&b_u1[0], 148.0);

    // End of MATLABSystem: '<S204>/MATLAB System'

    // If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S208>/Action Port'

      // StringToASCII: '<S208>/String to ASCII1' incorporates:
      //   DataStoreRead: '<S208>/Data Store Read2'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII1[0],
              &GNC2026W_DW.BLACK_Logger[0], 31U);

      // Update for S-Function (sdspToNetwork): '<S208>/UDP Send1' incorporates:
      //   StringToASCII: '<S208>/String to ASCII1'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend1_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII1[0U], 31);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S208>/UDP Send1'
      // End of Outputs for SubSystem: '<S6>/Change BLACK Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S209>/Action Port'

      // StringToASCII: '<S209>/String to ASCII2' incorporates:
      //   DataStoreRead: '<S209>/Data Store Read'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII2[0], &GNC2026W_DW.BLUE_Logger
              [0], 31U);

      // Update for S-Function (sdspToNetwork): '<S209>/UDP Send2' incorporates:
      //   StringToASCII: '<S209>/String to ASCII2'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend2_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII2[0U], 31);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S209>/UDP Send2'
      // End of Outputs for SubSystem: '<S6>/Change BLUE Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change RED Behavior' incorporates:
      //   ActionPort: '<S210>/Action Port'

      // StringToASCII: '<S210>/String to ASCII' incorporates:
      //   DataStoreRead: '<S210>/Data Store Read'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII[0], &GNC2026W_DW.RED_Logger[0],
              31U);

      // Update for S-Function (sdspToNetwork): '<S210>/UDP Send3' incorporates:
      //   StringToASCII: '<S210>/String to ASCII'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend3_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII[0U], 31);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S210>/UDP Send3'
      // End of Outputs for SubSystem: '<S6>/Change RED Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S7>/This IF block determines whether or not to run the exp code' incorporates:
    //   DataStoreRead: '<S7>/Data Store Read'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S7>/Enable Pucks' incorporates:
      //   ActionPort: '<S211>/Action Port'

      // MATLABSystem: '<S211>/GPIO Write1' incorporates:
      //   DataStoreRead: '<S211>/Data Store Read1'

      if (GNC2026W_DW.obj_l.gpioPin != GNC2026W_P.GPIOWrite1_gpioPin) {
        GNC2026W_DW.obj_l.gpioPin = GNC2026W_P.GPIOWrite1_gpioPin;
      }

      if (GNC2026W_DW.obj_l.pinDirection != GNC2026W_P.GPIOWrite1_pinDirection)
      {
        GNC2026W_DW.obj_l.pinDirection = GNC2026W_P.GPIOWrite1_pinDirection;
      }

      //         %% Define input properties
      //  Call C-function implementing device output
      // coder.ceval('export_gpio', obj.gpioPin);
      set_pin_direction(GNC2026W_DW.obj_l.gpioPin,
                        GNC2026W_DW.obj_l.pinDirection);
      change_gpio_value(GNC2026W_DW.obj_l.gpioPin, GNC2026W_DW.Float_State);

      // End of MATLABSystem: '<S211>/GPIO Write1'
      // End of Outputs for SubSystem: '<S7>/Enable Pucks'
    }

    // End of If: '<S7>/This IF block determines whether or not to run the exp code' 

    // If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S8>/Data Store Read1'
    //   DataStoreRead: '<S8>/Data Store Read2'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S8>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S212>/Action Port'

      // MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders'
      if (GNC2026W_DW.obj_d.SampleTime != GNC2026W_P.baseRate) {
        if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate)))
            || rtIsInf(GNC2026W_P.baseRate)) {
          sampleTime = GNC2026W_P.baseRate;
        }

        GNC2026W_DW.obj_d.SampleTime = sampleTime;
      }

      //         %% Define input properties
      //         %% Define output properties
      BLUE_Path_idx_0 = 0.0;
      BLUE_Path_idx_2 = 0.0;
      BLUE_Path_idx_1 = 0.0;

      // DataStoreWrite: '<S212>/Data Store Write' incorporates:
      //   Delay: '<S212>/Delay'
      //   Delay: '<S212>/Delay1'
      //   Delay: '<S212>/Delay2'
      //   MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders'

      GNC2026W_DW.ARM_Measured_States[3] = 0.0;
      GNC2026W_DW.ARM_Measured_States[4] = 0.0;
      GNC2026W_DW.ARM_Measured_States[5] = 0.0;
      read_dynamixel_position(&BLUE_Path_idx_0, &BLUE_Path_idx_2,
        &BLUE_Path_idx_1, &GNC2026W_DW.ARM_Measured_States[3],
        &GNC2026W_DW.ARM_Measured_States[4], &GNC2026W_DW.ARM_Measured_States[5],
        GNC2026W_DW.Delay_DSTATE_o, GNC2026W_DW.Delay1_DSTATE_cg,
        GNC2026W_DW.Delay2_DSTATE_h);

      // MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders' incorporates:
      //   Delay: '<S212>/Delay'
      //   Delay: '<S212>/Delay1'
      //   Delay: '<S212>/Delay2'

      GNC2026W_DW.Delay_DSTATE_o = BLUE_Path_idx_0;
      GNC2026W_DW.Delay1_DSTATE_cg = BLUE_Path_idx_2;
      GNC2026W_DW.Delay2_DSTATE_h = BLUE_Path_idx_1;

      // DataStoreWrite: '<S212>/Data Store Write' incorporates:
      //   Delay: '<S212>/Delay'
      //   Delay: '<S212>/Delay1'
      //   Delay: '<S212>/Delay2'

      GNC2026W_DW.ARM_Measured_States[0] = GNC2026W_DW.Delay_DSTATE_o;
      GNC2026W_DW.ARM_Measured_States[1] = GNC2026W_DW.Delay1_DSTATE_cg;
      GNC2026W_DW.ARM_Measured_States[2] = GNC2026W_DW.Delay2_DSTATE_h;

      // End of Outputs for SubSystem: '<S8>/Change ARM Behavior'
    }

    // End of If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S9>/Experiment Sub-Phases' incorporates:
    //   Constant: '<S9>/Constant4'
    //   DataStoreRead: '<S9>/Universal_Time'

    if (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase1_End) {
      // Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
      //   ActionPort: '<S213>/Action Port'

      // If: '<S213>/If' incorporates:
      //   Constant: '<S213>/Constant'

      if (GNC2026W_P.fNum == 1.0) {
        // Outputs for IfAction SubSystem: '<S213>/UKF' incorporates:
        //   ActionPort: '<S216>/Action Port'

        // UnitDelay: '<S216>/Unit Delay1'
        for (aoffset = 0; aoffset < 6; aoffset++) {
          delta_x[aoffset] = GNC2026W_DW.UnitDelay1_DSTATE[aoffset];
        }

        // MATLAB Function: '<S232>/MATLAB Function' incorporates:
        //   DataStoreRead: '<S216>/Data Store Read3'
        //   Delay: '<S232>/Delay'
        //   Delay: '<S232>/Delay1'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_b, GNC2026W_DW.Delay1_DSTATE_a,
          &GNC2026W_DW.Delay1_DSTATE_a, &GNC2026W_DW.Delay_DSTATE_b);

        // If: '<S216>/If' incorporates:
        //   Constant: '<S216>/Constant'

        if (GNC2026W_P.VISinLoop == 0.0) {
          // Outputs for IfAction SubSystem: '<S216>/Artificial VIS States' incorporates:
          //   ActionPort: '<S227>/Action Port'

          // Merge: '<S216>/Merge' incorporates:
          //   DataStoreRead: '<S227>/Data Store Read1'

          GNC2026W_B.Merge_b[0] = GNC2026W_DW.BLACK_CV_States[0];
          GNC2026W_B.Merge_b[1] = GNC2026W_DW.BLACK_CV_States[1];
          GNC2026W_B.Merge_b[2] = GNC2026W_DW.BLACK_CV_States[2];

          // End of Outputs for SubSystem: '<S216>/Artificial VIS States'
        } else if (GNC2026W_P.VISinLoop == 1.0) {
          // Outputs for IfAction SubSystem: '<S216>/Experimental VIS States' incorporates:
          //   ActionPort: '<S229>/Action Port'

          // Merge: '<S216>/Merge' incorporates:
          //   DataStoreRead: '<S229>/Data Store Read'

          GNC2026W_B.Merge_b[0] = GNC2026W_DW.VIS_LAR_States[0];
          GNC2026W_B.Merge_b[1] = GNC2026W_DW.VIS_LAR_States[1];
          GNC2026W_B.Merge_b[2] = GNC2026W_DW.VIS_LAR_States[2];

          // End of Outputs for SubSystem: '<S216>/Experimental VIS States'
        }

        // End of If: '<S216>/If'

        // MATLAB Function: '<S216>/Camera to Inertial Frame' incorporates:
        //   Delay: '<S232>/Delay1'
        //   SignalConversion generated from: '<S228>/ SFunction '

        BLUE_Path_idx_0 = GNC2026W_DW.Delay1_DSTATE_a + GNC2026W_B.Merge_b[2];

        // UnitDelay: '<S216>/Unit Delay2'
        memcpy(&rtb_UnitDelay2[0], &GNC2026W_DW.UnitDelay2_DSTATE[0], 36U *
               sizeof(real_T));

        // MATLAB Function: '<S216>/Unscented Kalman Filter' incorporates:
        //   UnitDelay: '<S216>/Unit Delay1'
        //   UnitDelay: '<S216>/Unit Delay2'

        rtb_TSamp_k = GNC2026W_P.a * GNC2026W_P.a;
        BLUE_Path_idx_2 = (GNC2026W_P.k + 6.0) * rtb_TSamp_k - 6.0;
        for (aoffset = 0; aoffset < 13; aoffset++) {
          if (aoffset + 1 == 1) {
            BLUE_Path_idx_1 = BLUE_Path_idx_2 / (BLUE_Path_idx_2 + 6.0);
            wi_m[aoffset] = BLUE_Path_idx_1;
            wi_c[aoffset] = ((BLUE_Path_idx_1 + 1.0) - rtb_TSamp_k) +
              GNC2026W_P.b;
          } else {
            BLUE_Path_idx_1 = 1.0 / ((BLUE_Path_idx_2 + 6.0) * 2.0);
            wi_m[aoffset] = BLUE_Path_idx_1;
            wi_c[aoffset] = BLUE_Path_idx_1;
          }
        }

        memset(&GNC2026W_DW.UnitDelay2_DSTATE[0], 0, 36U * sizeof(real_T));
        GNC2026W_chol(rtb_UnitDelay2);
        for (aoffset = 0; aoffset < 6; aoffset++) {
          GNC2026W_DW.UnitDelay1_DSTATE[aoffset] = 0.0;
          for (r = 0; r < 6; r++) {
            phi[r + 6 * aoffset] = rtb_UnitDelay2[6 * r + aoffset];
          }
        }

        for (aoffset = 0; aoffset < 13; aoffset++) {
          if (aoffset + 1 == 1) {
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * aoffset] = delta_x[r];
            }
          } else if ((aoffset + 1 > 1) && (aoffset + 1 <= 7)) {
            BLUE_Path_idx_1 = sqrt(BLUE_Path_idx_2 + 6.0);
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * aoffset] = phi[(aoffset - 1) * 6 + r] *
                BLUE_Path_idx_1 + delta_x[r];
            }
          } else {
            rtb_TSamp_e = sqrt(BLUE_Path_idx_2 + 6.0);
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * aoffset] = delta_x[r] - phi[(aoffset - 7) * 6 + r] *
                rtb_TSamp_e;
            }
          }

          r = 6 * aoffset + 3;
          sampleTime = Xi_pre[r];
          Fi[6 * aoffset] = Xi_pre[6 * aoffset] + GNC2026W_P.dt * sampleTime;
          Fi[r] = GNC2026W_P.dt * 0.0 + sampleTime;
          r = 6 * aoffset + 4;
          sampleTime = Xi_pre[r];
          r2 = 6 * aoffset + 1;
          Fi[r2] = GNC2026W_P.dt * sampleTime + Xi_pre[r2];
          Fi[r] = GNC2026W_P.dt * 0.0 + sampleTime;
          r = 6 * aoffset + 5;
          sampleTime = Xi_pre[r];
          r2 = 6 * aoffset + 2;
          Fi[r2] = GNC2026W_P.dt * sampleTime + Xi_pre[r2];
          Fi[r] = GNC2026W_P.dt * 0.0 + sampleTime;
          BLUE_Path_idx_1 = wi_m[aoffset];
          for (r = 0; r < 6; r++) {
            GNC2026W_DW.UnitDelay1_DSTATE[r] += Fi[6 * aoffset + r] *
              BLUE_Path_idx_1;
          }
        }

        for (r2 = 0; r2 < 13; r2++) {
          for (r = 0; r < 6; r++) {
            delta_x[r] = Fi[6 * r2 + r] - GNC2026W_DW.UnitDelay1_DSTATE[r];
          }

          BLUE_Path_idx_1 = wi_c[r2];
          for (r = 0; r < 6; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              aoffset = 6 * r + vcol;
              GNC2026W_DW.UnitDelay2_DSTATE[aoffset] += BLUE_Path_idx_1 *
                delta_x[vcol] * delta_x[r] + Q[aoffset];
            }
          }
        }

        ARM_Path[0] = 0.0;
        ARM_Path[1] = 0.0;
        ARM_Path[2] = 0.0;
        memset(&P_xy[0], 0, 18U * sizeof(real_T));
        memset(&F[0], 0, 9U * sizeof(real_T));
        memcpy(&rtb_UnitDelay2[0], &GNC2026W_DW.UnitDelay2_DSTATE[0], 36U *
               sizeof(real_T));
        GNC2026W_chol(rtb_UnitDelay2);
        for (r = 0; r < 6; r++) {
          for (vcol = 0; vcol < 6; vcol++) {
            phi[vcol + 6 * r] = rtb_UnitDelay2[6 * vcol + r];
          }
        }

        for (vcol = 0; vcol < 13; vcol++) {
          if (vcol + 1 == 1) {
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * vcol] = GNC2026W_DW.UnitDelay1_DSTATE[r];
            }
          } else if ((vcol + 1 > 1) && (vcol + 1 <= 7)) {
            BLUE_Path_idx_1 = sqrt(BLUE_Path_idx_2 + 6.0);
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * vcol] = phi[(vcol - 1) * 6 + r] * BLUE_Path_idx_1 +
                GNC2026W_DW.UnitDelay1_DSTATE[r];
            }
          } else {
            BLUE_Path_idx_1 = sqrt(BLUE_Path_idx_2 + 6.0);
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * vcol] = GNC2026W_DW.UnitDelay1_DSTATE[r] - phi
                [(vcol - 7) * 6 + r] * BLUE_Path_idx_1;
            }
          }

          BLUE_Path_idx_1 = wi_m[vcol];
          sampleTime = Xi_pre[6 * vcol + 1];
          RED_Path_idx_0 = Xi_pre[6 * vcol];
          RED_Path_idx_1 = Xi_pre[6 * vcol + 2];
          for (r = 0; r < 3; r++) {
            RED_Path_idx_2 = (static_cast<real_T>(f_a[r + 3]) * sampleTime +
                              RED_Path_idx_0 * static_cast<real_T>(f_a[r])) +
              static_cast<real_T>(f_a[r + 6]) * RED_Path_idx_1;
            h[r + 3 * vcol] = RED_Path_idx_2;
            ARM_Path[r] += BLUE_Path_idx_1 * RED_Path_idx_2;
          }
        }

        // MATLAB Function: '<S216>/Camera to Inertial Frame' incorporates:
        //   Delay: '<S232>/Delay1'
        //   SignalConversion generated from: '<S228>/ SFunction '

        BLUE_Path_idx_2 = sin(GNC2026W_DW.Delay1_DSTATE_a);
        BLUE_Path_idx_1 = cos(GNC2026W_DW.Delay1_DSTATE_a);
        sampleTime = sin(BLUE_Path_idx_0);
        RED_Path_idx_0 = cos(BLUE_Path_idx_0);

        // MATLAB Function: '<S216>/Unscented Kalman Filter' incorporates:
        //   DataStoreRead: '<S216>/Data Store Read2'
        //   DataStoreRead: '<S216>/Data Store Read3'
        //   DataStoreWrite: '<S216>/Data Store Write2'
        //   MATLAB Function: '<S216>/Camera to Inertial Frame'
        //   SignalConversion generated from: '<S228>/ SFunction '
        //   UnitDelay: '<S216>/Unit Delay1'
        //   UnitDelay: '<S216>/Unit Delay2'

        BLACK_Path[0] = ((((GNC2026W_B.Merge_b[0] + 0.125) * BLUE_Path_idx_1 +
                           (GNC2026W_B.Merge_b[1] + 0.03) * -BLUE_Path_idx_2) +
                          GNC2026W_DW.RED_Measured_States[0]) - (RED_Path_idx_0 *
          0.145 + -sampleTime * 0.0)) - ARM_Path[0];
        BLACK_Path[1] = ((((GNC2026W_B.Merge_b[0] + 0.125) * BLUE_Path_idx_2 +
                           (GNC2026W_B.Merge_b[1] + 0.03) * BLUE_Path_idx_1) +
                          GNC2026W_DW.RED_Measured_States[1]) - (sampleTime *
          0.145 + RED_Path_idx_0 * 0.0)) - ARM_Path[1];
        BLACK_Path[2] = BLUE_Path_idx_0 - ARM_Path[2];
        BLUE_Path_idx_2 = 3.3121686421112381E-170;
        BLUE_Path_idx_1 = fabs(BLACK_Path[0]);
        if (BLUE_Path_idx_1 > 3.3121686421112381E-170) {
          BLUE_Path_idx_0 = 1.0;
          BLUE_Path_idx_2 = BLUE_Path_idx_1;
        } else {
          sampleTime = BLUE_Path_idx_1 / 3.3121686421112381E-170;
          BLUE_Path_idx_0 = sampleTime * sampleTime;
        }

        BLUE_Path_idx_1 = fabs(BLACK_Path[1]);
        if (BLUE_Path_idx_1 > BLUE_Path_idx_2) {
          sampleTime = BLUE_Path_idx_2 / BLUE_Path_idx_1;
          BLUE_Path_idx_0 = BLUE_Path_idx_0 * sampleTime * sampleTime + 1.0;
          BLUE_Path_idx_2 = BLUE_Path_idx_1;
        } else {
          sampleTime = BLUE_Path_idx_1 / BLUE_Path_idx_2;
          BLUE_Path_idx_0 += sampleTime * sampleTime;
        }

        BLUE_Path_idx_1 = fabs(BLACK_Path[2]);
        if (BLUE_Path_idx_1 > BLUE_Path_idx_2) {
          sampleTime = BLUE_Path_idx_2 / BLUE_Path_idx_1;
          BLUE_Path_idx_0 = BLUE_Path_idx_0 * sampleTime * sampleTime + 1.0;
          BLUE_Path_idx_2 = BLUE_Path_idx_1;
        } else {
          sampleTime = BLUE_Path_idx_1 / BLUE_Path_idx_2;
          BLUE_Path_idx_0 += sampleTime * sampleTime;
        }

        BLUE_Path_idx_0 = BLUE_Path_idx_2 * sqrt(BLUE_Path_idx_0);
        if (BLUE_Path_idx_0 < 0.05) {
          GNC2026W_DW.converge = 1.0;
        }

        GNC2026W_DW.filterConfidence = GNC2026W_DW.converge;
        for (ar = 0; ar < 13; ar++) {
          RED_Controls[0] = h[3 * ar] - ARM_Path[0];
          RED_Controls[1] = h[3 * ar + 1] - ARM_Path[1];
          RED_Controls[2] = h[3 * ar + 2] - ARM_Path[2];
          BLUE_Path_idx_1 = wi_c[ar];
          for (r = 0; r < 3; r++) {
            F[3 * r] = (BLUE_Path_idx_1 * RED_Controls[0] * RED_Controls[r] + F
                        [3 * r]) + GNC2026W_P.R[3 * r];
            aoffset = 3 * r + 1;
            F[aoffset] = (BLUE_Path_idx_1 * RED_Controls[1] * RED_Controls[r] +
                          F[aoffset]) + GNC2026W_P.R[aoffset];
            aoffset = 3 * r + 2;
            F[aoffset] = (BLUE_Path_idx_1 * RED_Controls[2] * RED_Controls[r] +
                          F[aoffset]) + GNC2026W_P.R[aoffset];
          }

          for (r = 0; r < 6; r++) {
            delta_x[r] = (Xi_pre[6 * ar + r] - GNC2026W_DW.UnitDelay1_DSTATE[r])
              * BLUE_Path_idx_1;
          }

          for (r = 0; r < 3; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              r2 = 6 * r + vcol;
              P_xy[r2] += delta_x[vcol] * RED_Controls[r];
            }
          }
        }

        GNC2026W_inv(F, P_minus);
        for (r = 0; r < 6; r++) {
          BLUE_Path_idx_0 = P_xy[r + 6];
          BLUE_Path_idx_2 = P_xy[r];
          BLUE_Path_idx_1 = P_xy[r + 12];
          for (vcol = 0; vcol < 3; vcol++) {
            Ks_data[r + 6 * vcol] = (P_minus[3 * vcol + 1] * BLUE_Path_idx_0 +
              P_minus[3 * vcol] * BLUE_Path_idx_2) + P_minus[3 * vcol + 2] *
              BLUE_Path_idx_1;
          }

          rtb_TSamp = Ks_data[r + 6];
          rtb_TSamp_e = Ks_data[r];
          rtb_TSamp_hx = Ks_data[r + 12];
          for (vcol = 0; vcol < 3; vcol++) {
            P_xy_0[r + 6 * vcol] = (F[3 * vcol + 1] * rtb_TSamp + F[3 * vcol] *
              rtb_TSamp_e) + F[3 * vcol + 2] * rtb_TSamp_hx;
          }
        }

        for (r = 0; r < 6; r++) {
          rtb_TSamp = P_xy_0[r + 6];
          rtb_TSamp_e = P_xy_0[r];
          rtb_TSamp_hx = P_xy_0[r + 12];
          for (vcol = 0; vcol < 6; vcol++) {
            ar = 6 * vcol + r;
            phi[ar] = GNC2026W_DW.UnitDelay2_DSTATE[ar] - ((Ks_data[vcol + 6] *
              rtb_TSamp + rtb_TSamp_e * Ks_data[vcol]) + Ks_data[vcol + 12] *
              rtb_TSamp_hx);
          }

          delta_x[r] = ((Ks_data[r + 6] * BLACK_Path[1] + Ks_data[r] *
                         BLACK_Path[0]) + Ks_data[r + 12] * BLACK_Path[2]) +
            GNC2026W_DW.UnitDelay1_DSTATE[r];
        }

        BLUE_Path_idx_0 = 0.0;
        for (r = 0; r < 3; r++) {
          BLUE_Path_idx_0 += ((P_minus[3 * r + 1] * BLACK_Path[1] + P_minus[3 *
                               r] * BLACK_Path[0]) + P_minus[3 * r + 2] *
                              BLACK_Path[2]) * BLACK_Path[r];
        }

        if (sqrt(BLUE_Path_idx_0) > 13.931422665512077) {
          memcpy(&phi[0], &GNC2026W_DW.UnitDelay2_DSTATE[0], 36U * sizeof(real_T));
          for (aoffset = 0; aoffset < 6; aoffset++) {
            delta_x[aoffset] = GNC2026W_DW.UnitDelay1_DSTATE[aoffset];
          }
        }

        r = 0;
        BLUE_Path_idx_0 = GNC2026W_P.CVrate / GNC2026W_P.baseRate;
        rtb_TSamp_e = GNC2026W_DW.k_i;
        if (BLUE_Path_idx_0 == 0.0) {
          if (GNC2026W_DW.k_i == 0.0) {
            rtb_TSamp_e = BLUE_Path_idx_0;
          }
        } else if (rtIsNaN(GNC2026W_DW.k_i)) {
          rtb_TSamp_e = (rtNaN);
        } else if (rtIsNaN(BLUE_Path_idx_0)) {
          rtb_TSamp_e = (rtNaN);
        } else if (rtIsInf(GNC2026W_DW.k_i)) {
          rtb_TSamp_e = (rtNaN);
        } else if (GNC2026W_DW.k_i == 0.0) {
          rtb_TSamp_e = 0.0 / BLUE_Path_idx_0;
        } else if (rtIsInf(BLUE_Path_idx_0)) {
          if ((BLUE_Path_idx_0 < 0.0) != (GNC2026W_DW.k_i < 0.0)) {
            rtb_TSamp_e = BLUE_Path_idx_0;
          }
        } else {
          rtb_TSamp_e = fmod(GNC2026W_DW.k_i, BLUE_Path_idx_0);
          rEQ0 = (rtb_TSamp_e == 0.0);
          if ((!rEQ0) && (BLUE_Path_idx_0 > floor(BLUE_Path_idx_0))) {
            BLUE_Path_idx_2 = fabs(GNC2026W_DW.k_i / BLUE_Path_idx_0);
            rEQ0 = !(fabs(BLUE_Path_idx_2 - floor(BLUE_Path_idx_2 + 0.5)) >
                     2.2204460492503131E-16 * BLUE_Path_idx_2);
          }

          if (rEQ0) {
            rtb_TSamp_e = BLUE_Path_idx_0 * 0.0;
          } else if (((rtb_TSamp_e < 0.0) && (!(BLUE_Path_idx_0 < 0.0))) ||
                     ((!(rtb_TSamp_e < 0.0)) && (BLUE_Path_idx_0 < 0.0))) {
            rtb_TSamp_e += BLUE_Path_idx_0;
          }
        }

        if (rtb_TSamp_e == 0.0) {
          r = 1;
        }

        GNC2026W_DW.k_i++;
        if ((GNC2026W_DW.isValid == 1.0) && (r == 1)) {
          for (aoffset = 0; aoffset < 6; aoffset++) {
            GNC2026W_DW.UnitDelay1_DSTATE[aoffset] = delta_x[aoffset];
          }

          memcpy(&GNC2026W_DW.UnitDelay2_DSTATE[0], &phi[0], 36U * sizeof(real_T));
        }

        for (aoffset = 0; aoffset < 6; aoffset++) {
          // Merge: '<S213>/Merge' incorporates:
          //   SignalConversion generated from: '<S216>/BLKest'
          //   UnitDelay: '<S216>/Unit Delay1'

          GNC2026W_B.Merge_k[aoffset] = GNC2026W_DW.UnitDelay1_DSTATE[aoffset];
        }

        // End of Outputs for SubSystem: '<S213>/UKF'
      } else if (GNC2026W_P.fNum == 2.0) {
        // Outputs for IfAction SubSystem: '<S213>/MEKF' incorporates:
        //   ActionPort: '<S215>/Action Port'

        // MATLAB Function: '<S225>/MATLAB Function' incorporates:
        //   DataStoreRead: '<S215>/Data Store Read'
        //   Delay: '<S225>/Delay'
        //   Delay: '<S225>/Delay1'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_j, GNC2026W_DW.Delay1_DSTATE_d,
          &GNC2026W_DW.Delay1_DSTATE_d, &GNC2026W_DW.Delay_DSTATE_j);

        // MATLAB Function: '<S215>/Camera to Inertial Frame' incorporates:
        //   DataStoreRead: '<S215>/Data Store Read'
        //   DataStoreRead: '<S215>/Data Store Read1'
        //   Delay: '<S225>/Delay1'

        GNC2026W_CameratoInertialFrame(&GNC2026W_DW.RED_Measured_States[0],
          GNC2026W_DW.Delay1_DSTATE_d, GNC2026W_DW.BLACK_CV_States, BLACK_Path);

        // MATLAB Function: '<S215>/MEKF'
        GNC2026W_DW.x_m[0] += GNC2026W_DW.x_m[2] * GNC2026W_P.baseRate;
        GNC2026W_DW.x_m[1] += GNC2026W_DW.x_m[3] * GNC2026W_P.baseRate;
        BLUE_Path_idx_2 = GNC2026W_DW.x_m[4] * 0.0 * GNC2026W_P.baseRate;
        BLUE_Path_idx_1 = GNC2026W_P.baseRate * GNC2026W_DW.x_m[4];
        if (BLUE_Path_idx_2 == 0.0) {
          BLUE_Path_idx_2 = cos(BLUE_Path_idx_1);
          BLUE_Path_idx_1 = sin(BLUE_Path_idx_1);
        } else if (BLUE_Path_idx_1 == 0.0) {
          BLUE_Path_idx_1 = 0.0;
        } else {
          BLUE_Path_idx_1 = (rtNaN);
        }

        BLUE_Path_idx_0 = GNC2026W_DW.q.re * BLUE_Path_idx_1 + GNC2026W_DW.q.im *
          BLUE_Path_idx_2;
        GNC2026W_DW.q.re = GNC2026W_DW.q.re * BLUE_Path_idx_2 - GNC2026W_DW.q.im
          * BLUE_Path_idx_1;
        GNC2026W_DW.q.im = BLUE_Path_idx_0;
        BLUE_Path_idx_0 = rt_hypotd_snf(GNC2026W_DW.q.re, GNC2026W_DW.q.im);
        if (GNC2026W_DW.q.im == 0.0) {
          BLUE_Path_idx_2 = GNC2026W_DW.q.re / BLUE_Path_idx_0;
          BLUE_Path_idx_0 = 0.0;
        } else if (GNC2026W_DW.q.re == 0.0) {
          BLUE_Path_idx_2 = 0.0;
          BLUE_Path_idx_0 = GNC2026W_DW.q.im / BLUE_Path_idx_0;
        } else {
          BLUE_Path_idx_2 = GNC2026W_DW.q.re / BLUE_Path_idx_0;
          BLUE_Path_idx_0 = GNC2026W_DW.q.im / BLUE_Path_idx_0;
        }

        GNC2026W_DW.q.re = BLUE_Path_idx_2;
        GNC2026W_DW.q.im = BLUE_Path_idx_0;
        for (r = 0; r < 36; r++) {
          r2 = cb[r];
          rtb_UnitDelay2[r] = r2;
          phi[r] = r2;
        }

        phi[12] = GNC2026W_P.baseRate;
        phi[19] = GNC2026W_P.baseRate;
        phi[34] = GNC2026W_P.baseRate;
        for (r = 0; r < 6; r++) {
          for (vcol = 0; vcol < 6; vcol++) {
            BLUE_Path_idx_0 = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              BLUE_Path_idx_0 += phi[6 * r2 + vcol] * GNC2026W_DW.P_h[6 * r + r2];
            }

            phi_0[vcol + 6 * r] = BLUE_Path_idx_0;
          }
        }

        for (r = 0; r < 6; r++) {
          for (vcol = 0; vcol < 6; vcol++) {
            rtb_TSamp_e = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              rtb_TSamp_e += phi_0[6 * r2 + r] * phi[6 * r2 + vcol];
            }

            r2 = 6 * vcol + r;
            GNC2026W_DW.P_h[r2] = a_1[r2] * GNC2026W_P.baseRate + rtb_TSamp_e;
          }
        }

        ARM_Path[0] = BLACK_Path[0] - GNC2026W_DW.x_m[0];
        ARM_Path[1] = BLACK_Path[1] - GNC2026W_DW.x_m[1];
        ARM_Path[2] = BLACK_Path[2] - rt_atan2d_snf(GNC2026W_DW.q.im,
          GNC2026W_DW.q.re);
        ARM_Path[2] = rt_atan2d_snf(sin(ARM_Path[2]), cos(ARM_Path[2]));
        for (r = 0; r < 18; r++) {
          Ks_data[r] = e[r];
          P_xy[r] = c_a[r];
        }

        for (r = 0; r < 3; r++) {
          for (vcol = 0; vcol < 6; vcol++) {
            BLUE_Path_idx_0 = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              BLUE_Path_idx_0 += P_xy[3 * r2 + r] * GNC2026W_DW.P_h[6 * vcol +
                r2];
            }

            P_xy_0[r + 3 * vcol] = BLUE_Path_idx_0;
          }

          for (vcol = 0; vcol < 3; vcol++) {
            rtb_TSamp_e = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              rtb_TSamp_e += P_xy_0[3 * r2 + r] * Ks_data[6 * vcol + r2];
            }

            br = 3 * vcol + r;
            P_minus[br] = fb[br] + rtb_TSamp_e;
          }
        }

        memcpy(&F[0], &P_minus[0], 9U * sizeof(real_T));
        r = 0;
        r2 = 1;
        vcol = 2;
        BLUE_Path_idx_2 = fabs(P_minus[0]);
        BLUE_Path_idx_1 = BLUE_Path_idx_2;
        BLUE_Path_idx_0 = fabs(P_minus[1]);
        if (BLUE_Path_idx_0 > BLUE_Path_idx_2) {
          BLUE_Path_idx_1 = BLUE_Path_idx_0;
          r = 1;
          r2 = 0;
        }

        rtb_TSamp_e = fabs(P_minus[2]);
        if (rtb_TSamp_e > BLUE_Path_idx_1) {
          r = 2;
          r2 = 1;
          vcol = 0;
        }

        F[r2] = P_minus[r2] / P_minus[r];
        F[vcol] /= F[r];
        F[r2 + 3] -= F[r + 3] * F[r2];
        F[vcol + 3] -= F[r + 3] * F[vcol];
        F[r2 + 6] -= F[r + 6] * F[r2];
        F[vcol + 6] -= F[r + 6] * F[vcol];
        if (fabs(F[vcol + 3]) > fabs(F[r2 + 3])) {
          aoffset = r2;
          r2 = vcol;
          vcol = aoffset;
        }

        F[vcol + 3] /= F[r2 + 3];
        F[vcol + 6] -= F[vcol + 3] * F[r2 + 6];
        BLACK_Path[r] = ARM_Path[0] / F[r];
        BLACK_Path[r2] = ARM_Path[1] - F[r + 3] * BLACK_Path[r];
        BLACK_Path[vcol] = ARM_Path[2] - F[r + 6] * BLACK_Path[r];
        BLACK_Path[r2] /= F[r2 + 3];
        BLACK_Path[vcol] -= F[r2 + 6] * BLACK_Path[r2];
        BLACK_Path[vcol] /= F[vcol + 6];
        BLACK_Path[r2] -= F[vcol + 3] * BLACK_Path[vcol];
        BLACK_Path[r] -= BLACK_Path[vcol] * F[vcol];
        BLACK_Path[r] -= BLACK_Path[r2] * F[r2];
        if ((BLACK_Path[0] * ARM_Path[0] + BLACK_Path[1] * ARM_Path[1]) +
            BLACK_Path[2] * ARM_Path[2] <= 7.815) {
          for (r = 0; r < 3; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              BLUE_Path_idx_1 = 0.0;
              for (r2 = 0; r2 < 6; r2++) {
                BLUE_Path_idx_1 += GNC2026W_DW.P_h[6 * r2 + vcol] * Ks_data[6 *
                  r + r2];
              }

              P_xy_0[vcol + 6 * r] = BLUE_Path_idx_1;
            }
          }

          r = 0;
          vcol = 1;
          aoffset = 2;
          if (BLUE_Path_idx_0 > BLUE_Path_idx_2) {
            BLUE_Path_idx_2 = BLUE_Path_idx_0;
            r = 1;
            vcol = 0;
          }

          if (rtb_TSamp_e > BLUE_Path_idx_2) {
            r = 2;
            vcol = 1;
            aoffset = 0;
          }

          P_minus[vcol] /= P_minus[r];
          P_minus[aoffset] /= P_minus[r];
          P_minus[vcol + 3] -= P_minus[r + 3] * P_minus[vcol];
          P_minus[aoffset + 3] -= P_minus[r + 3] * P_minus[aoffset];
          P_minus[vcol + 6] -= P_minus[r + 6] * P_minus[vcol];
          P_minus[aoffset + 6] -= P_minus[r + 6] * P_minus[aoffset];
          if (fabs(P_minus[aoffset + 3]) > fabs(P_minus[vcol + 3])) {
            r2 = vcol;
            vcol = aoffset;
            aoffset = r2;
          }

          P_minus[aoffset + 3] /= P_minus[vcol + 3];
          P_minus[aoffset + 6] -= P_minus[aoffset + 3] * P_minus[vcol + 6];
          BLUE_Path_idx_0 = ARM_Path[1];
          BLUE_Path_idx_2 = ARM_Path[0];
          BLUE_Path_idx_1 = ARM_Path[2];
          for (r2 = 0; r2 < 6; r2++) {
            br = 6 * r + r2;
            Ks_data[br] = P_xy_0[r2] / P_minus[r];
            ar = 6 * vcol + r2;
            Ks_data[ar] = P_xy_0[r2 + 6] - P_minus[r + 3] * Ks_data[br];
            boffset = 6 * aoffset + r2;
            Ks_data[boffset] = P_xy_0[r2 + 12] - P_minus[r + 6] * Ks_data[br];
            Ks_data[ar] /= P_minus[vcol + 3];
            Ks_data[boffset] -= P_minus[vcol + 6] * Ks_data[ar];
            Ks_data[boffset] /= P_minus[aoffset + 6];
            Ks_data[ar] -= P_minus[aoffset + 3] * Ks_data[boffset];
            Ks_data[br] -= Ks_data[boffset] * P_minus[aoffset];
            Ks_data[br] -= Ks_data[ar] * P_minus[vcol];
            delta_x[r2] = (Ks_data[r2 + 6] * BLUE_Path_idx_0 + Ks_data[r2] *
                           BLUE_Path_idx_2) + Ks_data[r2 + 12] * BLUE_Path_idx_1;
          }

          GNC2026W_DW.x_m[0] += delta_x[0];
          GNC2026W_DW.x_m[1] += delta_x[1];
          GNC2026W_DW.x_m[2] += delta_x[2];
          GNC2026W_DW.x_m[3] += delta_x[3];
          BLUE_Path_idx_2 = delta_x[4] * 0.0;
          if (BLUE_Path_idx_2 == 0.0) {
            BLUE_Path_idx_2 = cos(delta_x[4]);
            BLUE_Path_idx_1 = sin(delta_x[4]);
          } else if (delta_x[4] == 0.0) {
            BLUE_Path_idx_1 = 0.0;
          } else {
            BLUE_Path_idx_1 = (rtNaN);
          }

          BLUE_Path_idx_0 = GNC2026W_DW.q.re * BLUE_Path_idx_1 +
            GNC2026W_DW.q.im * BLUE_Path_idx_2;
          GNC2026W_DW.q.re = GNC2026W_DW.q.re * BLUE_Path_idx_2 -
            GNC2026W_DW.q.im * BLUE_Path_idx_1;
          GNC2026W_DW.q.im = BLUE_Path_idx_0;
          BLUE_Path_idx_0 = rt_hypotd_snf(GNC2026W_DW.q.re, GNC2026W_DW.q.im);
          if (GNC2026W_DW.q.im == 0.0) {
            BLUE_Path_idx_2 = GNC2026W_DW.q.re / BLUE_Path_idx_0;
            BLUE_Path_idx_0 = 0.0;
          } else if (GNC2026W_DW.q.re == 0.0) {
            BLUE_Path_idx_2 = 0.0;
            BLUE_Path_idx_0 = GNC2026W_DW.q.im / BLUE_Path_idx_0;
          } else {
            BLUE_Path_idx_2 = GNC2026W_DW.q.re / BLUE_Path_idx_0;
            BLUE_Path_idx_0 = GNC2026W_DW.q.im / BLUE_Path_idx_0;
          }

          GNC2026W_DW.q.re = BLUE_Path_idx_2;
          GNC2026W_DW.q.im = BLUE_Path_idx_0;
          GNC2026W_DW.x_m[4] += delta_x[5];
          for (r = 0; r < 6; r++) {
            r2 = static_cast<int32_T>(P_xy[3 * r + 1]);
            aoffset = static_cast<int32_T>(P_xy[3 * r]);
            br = static_cast<int32_T>(P_xy[3 * r + 2]);
            for (vcol = 0; vcol < 6; vcol++) {
              phi[vcol + 6 * r] = (Ks_data[vcol + 6] * static_cast<real_T>(r2) +
                                   static_cast<real_T>(aoffset) * Ks_data[vcol])
                + Ks_data[vcol + 12] * static_cast<real_T>(br);
            }
          }

          for (r = 0; r < 36; r++) {
            rtb_UnitDelay2_0[r] = rtb_UnitDelay2[r] - phi[r];
          }

          for (r = 0; r < 6; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              BLUE_Path_idx_0 = 0.0;
              for (r2 = 0; r2 < 6; r2++) {
                BLUE_Path_idx_0 += rtb_UnitDelay2_0[6 * r2 + r] *
                  GNC2026W_DW.P_h[6 * vcol + r2];
              }

              r2 = 6 * vcol + r;
              phi_1[r2] = BLUE_Path_idx_0;
              phi_0[vcol + 6 * r] = rtb_UnitDelay2[r2] - phi[r2];
            }

            rtb_TSamp = Ks_data[r + 6];
            rtb_TSamp_e = Ks_data[r];
            rtb_TSamp_hx = Ks_data[r + 12];
            for (vcol = 0; vcol < 3; vcol++) {
              P_xy_0[r + 6 * vcol] = (fb[3 * vcol + 1] * rtb_TSamp + fb[3 * vcol]
                * rtb_TSamp_e) + fb[3 * vcol + 2] * rtb_TSamp_hx;
            }
          }

          for (r = 0; r < 6; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              BLUE_Path_idx_0 = 0.0;
              for (r2 = 0; r2 < 6; r2++) {
                BLUE_Path_idx_0 += phi_1[6 * r2 + r] * phi_0[6 * vcol + r2];
              }

              r2 = 6 * vcol + r;
              rtb_UnitDelay2[r2] = BLUE_Path_idx_0;
              phi[r2] = (P_xy_0[r + 6] * Ks_data[vcol + 6] + P_xy_0[r] *
                         Ks_data[vcol]) + P_xy_0[r + 12] * Ks_data[vcol + 12];
            }
          }

          for (r = 0; r < 36; r++) {
            GNC2026W_DW.P_h[r] = rtb_UnitDelay2[r] + phi[r];
          }
        }

        BLUE_Path_idx_0 = rt_atan2d_snf(GNC2026W_DW.q.im, GNC2026W_DW.q.re);
        BLUE_Path_idx_1 = BLUE_Path_idx_0 - GNC2026W_DW.theta_prev_a;
        GNC2026W_DW.theta_cont += rt_atan2d_snf(sin(BLUE_Path_idx_1), cos
          (BLUE_Path_idx_1));
        GNC2026W_DW.theta_prev_a = BLUE_Path_idx_0;

        // Merge: '<S213>/Merge' incorporates:
        //   MATLAB Function: '<S215>/MEKF'
        //   SignalConversion generated from: '<S215>/BLKest'

        GNC2026W_B.Merge_k[0] = GNC2026W_DW.x_m[0];
        GNC2026W_B.Merge_k[1] = GNC2026W_DW.x_m[1];
        GNC2026W_B.Merge_k[2] = GNC2026W_DW.theta_cont;
        GNC2026W_B.Merge_k[3] = GNC2026W_DW.x_m[2];
        GNC2026W_B.Merge_k[4] = GNC2026W_DW.x_m[3];
        GNC2026W_B.Merge_k[5] = GNC2026W_DW.x_m[4];

        // End of Outputs for SubSystem: '<S213>/MEKF'
      } else if (GNC2026W_P.fNum == 3.0) {
        // Outputs for IfAction SubSystem: '<S213>/EKF' incorporates:
        //   ActionPort: '<S214>/Action Port'

        // MATLAB Function: '<S220>/MATLAB Function' incorporates:
        //   DataStoreRead: '<S214>/Data Store Read'
        //   Delay: '<S220>/Delay'
        //   Delay: '<S220>/Delay1'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_c, GNC2026W_DW.Delay1_DSTATE_g0,
          &GNC2026W_DW.Delay1_DSTATE_g0, &GNC2026W_DW.Delay_DSTATE_c);

        // MATLAB Function: '<S214>/Camera to Inertial Frame' incorporates:
        //   DataStoreRead: '<S214>/Data Store Read'
        //   DataStoreRead: '<S214>/Data Store Read1'
        //   Delay: '<S220>/Delay1'

        GNC2026W_CameratoInertialFrame(&GNC2026W_DW.RED_Measured_States[0],
          GNC2026W_DW.Delay1_DSTATE_g0, GNC2026W_DW.BLACK_CV_States, BLACK_Path);

        // MATLAB Function: '<S214>/EKF'
        for (r = 0; r < 36; r++) {
          r2 = cb[r];
          rtb_UnitDelay2[r] = r2;
          phi[r] = r2;
        }

        phi[12] = GNC2026W_P.baseRate;
        phi[19] = GNC2026W_P.baseRate;
        phi[34] = GNC2026W_P.baseRate;
        for (r = 0; r < 6; r++) {
          BLUE_Path_idx_0 = 0.0;
          for (vcol = 0; vcol < 6; vcol++) {
            BLUE_Path_idx_0 += phi[6 * vcol + r] * GNC2026W_DW.x[vcol];
          }

          delta_x[r] = BLUE_Path_idx_0;
        }

        for (r = 0; r < 6; r++) {
          GNC2026W_DW.x[r] = delta_x[r];
          for (vcol = 0; vcol < 6; vcol++) {
            BLUE_Path_idx_0 = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              BLUE_Path_idx_0 += phi[6 * r2 + r] * GNC2026W_DW.P[6 * vcol + r2];
            }

            phi_0[r + 6 * vcol] = BLUE_Path_idx_0;
          }

          rtPrevAction = b_a[r + 6];
          rtAction = b_a[r];
          S_tmp_0 = b_a[r + 12];
          for (vcol = 0; vcol < 3; vcol++) {
            P_xy[r + 6 * vcol] = (a_0[3 * vcol + 1] * GNC2026W_P.baseRate *
                                  static_cast<real_T>(rtPrevAction) + a_0[3 *
                                  vcol] * GNC2026W_P.baseRate *
                                  static_cast<real_T>(rtAction)) + a_0[3 * vcol
              + 2] * GNC2026W_P.baseRate * static_cast<real_T>(S_tmp_0);
          }

          for (vcol = 0; vcol < 6; vcol++) {
            BLUE_Path_idx_0 = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              BLUE_Path_idx_0 += phi_0[6 * r2 + r] * phi[6 * r2 + vcol];
            }

            phi_1[r + 6 * vcol] = BLUE_Path_idx_0;
          }
        }

        for (r = 0; r < 6; r++) {
          rtPrevAction = db[3 * r + 1];
          rtAction = db[3 * r];
          S_tmp_0 = db[3 * r + 2];
          for (vcol = 0; vcol < 6; vcol++) {
            phi[vcol + 6 * r] = (P_xy[vcol + 6] * static_cast<real_T>
                                 (rtPrevAction) + static_cast<real_T>(rtAction) *
                                 P_xy[vcol]) + P_xy[vcol + 12] *
              static_cast<real_T>(S_tmp_0);
          }
        }

        for (r = 0; r < 36; r++) {
          GNC2026W_DW.P[r] = phi_1[r] + phi[r];
        }

        for (r = 0; r < 18; r++) {
          H[r] = 0;
        }

        H[0] = 1;
        H[4] = 1;
        H[14] = 1;
        for (r = 0; r < 18; r++) {
          P_xy[r] = c_a[r];
        }

        for (r = 0; r < 3; r++) {
          rtb_TSamp_e = 0.0;
          for (vcol = 0; vcol < 6; vcol++) {
            r2 = 3 * vcol + r;
            rtb_TSamp_e += P_xy[r2] * GNC2026W_DW.x[vcol];
            BLUE_Path_idx_0 = 0.0;
            for (aoffset = 0; aoffset < 6; aoffset++) {
              BLUE_Path_idx_0 += P_xy[3 * aoffset + r] * GNC2026W_DW.P[6 * vcol
                + aoffset];
            }

            P_xy_0[r2] = BLUE_Path_idx_0;
          }

          ARM_Path[r] = BLACK_Path[r] - rtb_TSamp_e;
          for (vcol = 0; vcol < 3; vcol++) {
            rtb_TSamp_e = 0.0;
            for (r2 = 0; r2 < 6; r2++) {
              rtb_TSamp_e += P_xy_0[3 * r2 + r] * static_cast<real_T>(e[6 * vcol
                + r2]);
            }

            br = 3 * vcol + r;
            P_minus[br] = fb[br] + rtb_TSamp_e;
          }
        }

        BLUE_Path_idx_0 = BLACK_Path[2] - rt_atan2d_snf(sin(GNC2026W_DW.x[4]),
          cos(GNC2026W_DW.x[4]));
        ARM_Path[2] = rt_atan2d_snf(sin(BLUE_Path_idx_0), cos(BLUE_Path_idx_0));
        if (P_minus[0] >= 1.0E-10) {
          rtb_TSamp_e = P_minus[0];
        } else {
          rtb_TSamp_e = 1.0E-10;
        }

        keep[0] = (fabs(ARM_Path[0]) <= 3.0 * sqrt(rtb_TSamp_e));
        if (P_minus[4] >= 1.0E-10) {
          rtb_TSamp_e = P_minus[4];
        } else {
          rtb_TSamp_e = 1.0E-10;
        }

        keep[1] = (fabs(ARM_Path[1]) <= 3.0 * sqrt(rtb_TSamp_e));
        if (P_minus[8] >= 1.0E-10) {
          rtb_TSamp_e = P_minus[8];
        } else {
          rtb_TSamp_e = 1.0E-10;
        }

        keep[2] = (fabs(ARM_Path[2]) <= 3.0 * sqrt(rtb_TSamp_e));
        rEQ0 = false;
        r2 = 0;
        exitg1 = false;
        while ((!exitg1) && (r2 < 3)) {
          if (keep[r2]) {
            rEQ0 = true;
            exitg1 = true;
          } else {
            r2++;
          }
        }

        if (rEQ0) {
          r = 0;
          for (aoffset = 0; aoffset < 3; aoffset++) {
            if (keep[aoffset]) {
              r++;
            }
          }

          tmp_size_idx_0 = r;
          r = 0;
          for (aoffset = 0; aoffset < 3; aoffset++) {
            if (keep[aoffset]) {
              tmp_data[r] = static_cast<int8_T>(aoffset);
              r++;
            }
          }

          if (tmp_size_idx_0 == 1) {
            d_size_idx_0 = 1;
            BLACK_Path[0] = fb[3 * tmp_data[0] + tmp_data[0]];
          } else {
            if (tmp_size_idx_0 > 0) {
              vcol = tmp_size_idx_0;
            } else {
              vcol = 0;
            }

            d_size_idx_0 = vcol;
            for (r2 = 0; r2 < vcol; r2++) {
              r = tmp_data[r2];
              BLACK_Path[r2] = fb[3 * r + r];
            }
          }

          R_new_size[0] = d_size_idx_0;
          R_new_size[1] = d_size_idx_0;
          vcol = d_size_idx_0 * d_size_idx_0;
          if (vcol - 1 >= 0) {
            memset(&F[0], 0, static_cast<uint32_T>(vcol) * sizeof(real_T));
          }

          for (aoffset = 0; aoffset < d_size_idx_0; aoffset++) {
            F[aoffset + d_size_idx_0 * aoffset] = BLACK_Path[aoffset];
          }

          if (tmp_size_idx_0 - 1 >= 0) {
            memcpy(&S_tmp[0], &tmp_data[0], static_cast<uint32_T>(tmp_size_idx_0)
                   * sizeof(int8_T));
          }

          for (br = 0; br < 6; br++) {
            ar = br * tmp_size_idx_0;
            boffset = br * 6;
            for (aoffset = 0; aoffset < tmp_size_idx_0; aoffset++) {
              BLUE_Path_idx_0 = 0.0;
              for (r = 0; r < 6; r++) {
                r2 = r * tmp_size_idx_0 + aoffset;
                BLUE_Path_idx_0 += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(r2) / static_cast<uint32_T>
                  (tmp_size_idx_0)) * 3 + S_tmp[r2 % tmp_size_idx_0]]) *
                  GNC2026W_DW.P[boffset + r];
              }

              P_xy[ar + aoffset] = BLUE_Path_idx_0;
            }
          }

          b_size[0] = tmp_size_idx_0;
          b_size[1] = tmp_size_idx_0;
          b_y_size[0] = 6;
          b_y_size[1] = tmp_size_idx_0;
          for (r = 0; r < tmp_size_idx_0; r++) {
            ar = r * tmp_size_idx_0;
            for (aoffset = 0; aoffset < tmp_size_idx_0; aoffset++) {
              BLUE_Path_idx_0 = 0.0;
              for (br = 0; br < 6; br++) {
                boffset = br * tmp_size_idx_0;
                r2 = boffset + r;
                BLUE_Path_idx_0 += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(r2) / static_cast<uint32_T>
                  (tmp_size_idx_0)) * 3 + S_tmp[r2 % tmp_size_idx_0]]) *
                  P_xy[boffset + aoffset];
              }

              F_0[ar + aoffset] = BLUE_Path_idx_0;
            }

            ar = r * 6;
            for (aoffset = 0; aoffset < 6; aoffset++) {
              BLUE_Path_idx_0 = 0.0;
              for (br = 0; br < 6; br++) {
                boffset = br * tmp_size_idx_0 + r;
                BLUE_Path_idx_0 += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(boffset) / static_cast<uint32_T>
                  (tmp_size_idx_0)) * 3 + S_tmp[boffset % tmp_size_idx_0]]) *
                  GNC2026W_DW.P[br * 6 + aoffset];
              }

              P_xy_0[ar + aoffset] = BLUE_Path_idx_0;
            }
          }

          if (tmp_size_idx_0 == d_size_idx_0) {
            b_size_0[0] = tmp_size_idx_0;
            b_size_0[1] = tmp_size_idx_0;
            aoffset = tmp_size_idx_0 * tmp_size_idx_0;
            for (r = 0; r < aoffset; r++) {
              P_minus[r] = F_0[r] + F[r];
            }

            GNC2026W_mrdiv(P_xy_0, b_y_size, P_minus, b_size_0, Ks_data, Ks_size);
          } else {
            GNC2026W_binary_expand_op(Ks_data, Ks_size, P_xy_0, b_y_size, F_0,
              b_size, F, R_new_size);
          }

          for (r = 0; r < 6; r++) {
            delta_x[r] = 0.0;
          }

          br = Ks_size[1];
          for (r = 0; r < br; r++) {
            aoffset = r * 6;
            for (vcol = 0; vcol < 6; vcol++) {
              delta_x[vcol] += Ks_data[aoffset + vcol] * ARM_Path[tmp_data[r]];
            }
          }

          for (r = 0; r < 6; r++) {
            GNC2026W_DW.x[r] += delta_x[r];
          }

          for (boffset = 0; boffset < d_size_idx_0; boffset++) {
            aoffset = boffset * 6;
            b_boffset = boffset * d_size_idx_0;
            for (r = 0; r < 6; r++) {
              P_xy_0[aoffset + r] = 0.0;
            }

            for (r2 = 0; r2 < br; r2++) {
              r = r2 * 6;
              BLUE_Path_idx_0 = F[b_boffset + r2];
              for (ar = 0; ar < 6; ar++) {
                vcol = aoffset + ar;
                P_xy_0[vcol] += Ks_data[r + ar] * BLUE_Path_idx_0;
              }
            }
          }

          y_size[0] = tmp_size_idx_0;
          y_size[1] = 6;
          for (vcol = 0; vcol < 6; vcol++) {
            boffset = vcol * 6;
            for (r = 0; r < 6; r++) {
              phi[boffset + r] = 0.0;
            }

            for (r = 0; r < d_size_idx_0; r++) {
              r2 = r * 6;
              BLUE_Path_idx_0 = Ks_data[r * 6 + vcol];
              for (br = 0; br < 6; br++) {
                ar = boffset + br;
                phi[ar] += P_xy_0[r2 + br] * BLUE_Path_idx_0;
              }
            }

            for (r = 0; r < tmp_size_idx_0; r++) {
              P_xy[r + tmp_size_idx_0 * vcol] = H[3 * vcol + tmp_data[r]];
            }
          }

          GNC2026W_mtimes(Ks_data, Ks_size, P_xy, y_size, P_tmp);
          for (r = 0; r < 36; r++) {
            rtb_UnitDelay2_0[r] = rtb_UnitDelay2[r] - P_tmp[r];
          }

          for (r = 0; r < 6; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              BLUE_Path_idx_0 = 0.0;
              for (r2 = 0; r2 < 6; r2++) {
                BLUE_Path_idx_0 += rtb_UnitDelay2_0[6 * r2 + r] * GNC2026W_DW.P
                  [6 * vcol + r2];
              }

              r2 = 6 * vcol + r;
              phi_1[r2] = BLUE_Path_idx_0;
              phi_0[vcol + 6 * r] = rtb_UnitDelay2[r2] - P_tmp[r2];
            }
          }

          for (r = 0; r < 6; r++) {
            for (vcol = 0; vcol < 6; vcol++) {
              rtb_TSamp_e = 0.0;
              for (r2 = 0; r2 < 6; r2++) {
                rtb_TSamp_e += phi_1[6 * r2 + r] * phi_0[6 * vcol + r2];
              }

              r2 = 6 * vcol + r;
              GNC2026W_DW.P[r2] = phi[r2] + rtb_TSamp_e;
            }
          }
        }

        if (!GNC2026W_DW.initial_theta) {
          GNC2026W_DW.theta_prev = rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos
            (GNC2026W_DW.x[4]));
          GNC2026W_DW.theta = GNC2026W_DW.theta_prev;
          GNC2026W_DW.initial_theta = true;
        } else {
          rtb_TSamp_e = rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos(GNC2026W_DW.x[4]));
          BLUE_Path_idx_0 = rtb_TSamp_e - GNC2026W_DW.theta_prev;
          GNC2026W_DW.theta += rt_atan2d_snf(sin(BLUE_Path_idx_0), cos
            (BLUE_Path_idx_0));
          GNC2026W_DW.theta_prev = rtb_TSamp_e;
        }

        GNC2026W_DW.x[4] = GNC2026W_DW.theta;

        // Merge: '<S213>/Merge' incorporates:
        //   MATLAB Function: '<S214>/EKF'
        //   SignalConversion generated from: '<S214>/BLKest'

        GNC2026W_B.Merge_k[0] = GNC2026W_DW.x[0];
        GNC2026W_B.Merge_k[1] = GNC2026W_DW.x[1];
        GNC2026W_B.Merge_k[2] = GNC2026W_DW.x[4];
        GNC2026W_B.Merge_k[3] = GNC2026W_DW.x[2];
        GNC2026W_B.Merge_k[4] = GNC2026W_DW.x[3];
        GNC2026W_B.Merge_k[5] = GNC2026W_DW.x[5];

        // End of Outputs for SubSystem: '<S213>/EKF'
      }

      // End of If: '<S213>/If'

      // DataStoreWrite: '<S213>/Data Store Write2'
      for (aoffset = 0; aoffset < 6; aoffset++) {
        GNC2026W_DW.BLACK_Filtered_States[aoffset] = GNC2026W_B.Merge_k[aoffset];
      }

      // End of DataStoreWrite: '<S213>/Data Store Write2'
      // End of Outputs for SubSystem: '<S9>/If Action Subsystem'
    }

    // End of If: '<S9>/Experiment Sub-Phases'

    // If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Constant: '<S240>/Constant'
    //   Constant: '<S248>/Constant3'
    //   Constant: '<S268>/Constant3'
    //   Constant: '<S278>/Constant3'
    //   DataStoreRead: '<S10>/Data Store Read2'
    //   Delay: '<S248>/Delay1'
    //   Delay: '<S268>/Delay1'
    //   Delay: '<S278>/Delay1'
    //   RelationalOperator: '<S240>/Relational Operator'
    //   RelationalOperator: '<S248>/Relational Operator'
    //   RelationalOperator: '<S250>/Relational Operator'
    //   RelationalOperator: '<S268>/Relational Operator'
    //   RelationalOperator: '<S269>/Relational Operator'
    //   RelationalOperator: '<S278>/Relational Operator'
    //   RelationalOperator: '<S279>/Relational Operator'
    //   SignalConversion generated from: '<S264>/Enable'
    //   SignalConversion generated from: '<S266>/Enable'
    //   SignalConversion generated from: '<S274>/Enable'
    //   SignalConversion generated from: '<S276>/Enable'
    //   SignalConversion generated from: '<S284>/Enable'
    //   SignalConversion generated from: '<S286>/Enable'
    //   Sum: '<S248>/Subtract2'
    //   Sum: '<S268>/Subtract2'
    //   Sum: '<S278>/Subtract2'

    rtPrevAction = GNC2026W_DW.Ifperforminganexperimentgrabthe;
    rtAction = -1;
    if (GNC2026W_DW.isSim == 0.0) {
      rtAction = 0;
    } else if (GNC2026W_DW.isSim == 1.0) {
      rtAction = 1;
    }

    GNC2026W_DW.Ifperforminganexperimentgrabthe = rtAction;
    if (rtPrevAction != rtAction) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo, true);
      if (rtPrevAction == 0) {
        // Disable for Enabled SubSystem: '<S251>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_g);
        }

        // End of Disable for SubSystem: '<S251>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S250>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem);
        }

        // End of Disable for SubSystem: '<S250>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S270>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_d);
        }

        // End of Disable for SubSystem: '<S270>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S269>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_l.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_l);
        }

        // End of Disable for SubSystem: '<S269>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S280>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_l1);
        }

        // End of Disable for SubSystem: '<S280>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S279>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_k.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_k);
        }

        // End of Disable for SubSystem: '<S279>/Enabled Subsystem'

        // Disable for If: '<S244>/This IF block determines whether or not to run the BLACK sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;

        // Disable for If: '<S244>/This IF block determines whether or not to run the BLUE sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;

        // Disable for If: '<S244>/This IF block determines whether or not to run the RED sim//exp ' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;
      }
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S235>/Action Port'

      // S-Function (sdspFromNetwork): '<S236>/Receive PhaseSpace Data'
      sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
      samplesRead = 19;
      LibOutputs_Network(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U],
                         &GNC2026W_B.ReceivePhaseSpaceData_o1[0U], &samplesRead);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S236>/Receive PhaseSpace Data'

      // Gain: '<S237>/Convert BLAX from [mm] to [m]'
      GNC2026W_B.ConvertBLAXfrommmtom = GNC2026W_P.ConvertBLAXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[4];

      // Gain: '<S237>/Convert BLAY from [mm] to [m]'
      sampleTime = GNC2026W_P.ConvertBLAYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[5];

      // Trigonometry: '<S252>/Sin'
      BLUE_Path_idx_2 = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[6]);

      // Trigonometry: '<S252>/Cos'
      BLUE_Path_idx_0 = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[6]);

      // DataStoreWrite: '<S237>/RED_Px7' incorporates:
      //   Gain: '<S237>/Convert BLACKVX from [mm] to [m]'
      //   Gain: '<S237>/Convert BLACKVY from [mm] to [m]'
      //   Trigonometry: '<S252>/Atan2'

      GNC2026W_DW.BLACK_Measured_States[2] = rt_atan2d_snf(BLUE_Path_idx_2,
        BLUE_Path_idx_0);
      GNC2026W_DW.BLACK_Measured_States[3] =
        GNC2026W_P.ConvertBLACKVXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[13];
      GNC2026W_DW.BLACK_Measured_States[4] =
        GNC2026W_P.ConvertBLACKVYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[14];

      // Sum: '<S248>/Subtract1' incorporates:
      //   Delay: '<S248>/Delay2'

      BLUE_Path_idx_0 = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE;

      // Outputs for Enabled SubSystem: '<S248>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S253>/Enable'

      if (GNC2026W_B.ConvertBLAXfrommmtom - GNC2026W_DW.Delay1_DSTATE !=
          GNC2026W_P.Constant3_Value_eq) {
        // SignalConversion generated from: '<S253>/y2-y1'
        GNC2026W_B.y2y1_ob = BLUE_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S248>/Enabled Subsystem3'

      // MATLAB Function: '<S248>/MATLAB Function' incorporates:
      //   Constant: '<S248>/Constant'
      //   Constant: '<S248>/Constant3'
      //   Delay: '<S248>/Delay1'
      //   RelationalOperator: '<S248>/Relational Operator'
      //   Sum: '<S248>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1_ob, GNC2026W_P.dataRate,
        &BLUE_Path_idx_0);

      // Sum: '<S251>/Subtract1' incorporates:
      //   Delay: '<S251>/Delay1'

      ARM_Path[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6] -
        GNC2026W_DW.Delay1_DSTATE_g[2];

      // RelationalOperator: '<S251>/Relational Operator' incorporates:
      //   Constant: '<S251>/Constant3'
      //   Delay: '<S251>/Delay1'
      //   Sum: '<S251>/Subtract1'

      keep[0] = (GNC2026W_B.ConvertBLAXfrommmtom - GNC2026W_DW.Delay1_DSTATE_g[0]
                 != GNC2026W_P.Constant3_Value_a);
      keep[1] = (sampleTime - GNC2026W_DW.Delay1_DSTATE_g[1] !=
                 GNC2026W_P.Constant3_Value_a);
      keep[2] = (ARM_Path[2] != GNC2026W_P.Constant3_Value_a);

      // Outputs for Enabled SubSystem: '<S251>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(keep, GNC2026W_B.ConvertBLAXfrommmtom,
        sampleTime, GNC2026W_B.ReceivePhaseSpaceData_o1[6], BLUE_Path_idx_0,
        GNC2026W_B.dy_p, &GNC2026W_B.EnabledSubsystem_g,
        &GNC2026W_DW.EnabledSubsystem_g, &GNC2026W_P.EnabledSubsystem_g);

      // End of Outputs for SubSystem: '<S251>/Enabled Subsystem'

      // RelationalOperator: '<S250>/Relational Operator' incorporates:
      //   Constant: '<S250>/Constant3'
      //   Delay: '<S250>/Delay1'
      //   SignalConversion generated from: '<S266>/Enable'
      //   Sum: '<S250>/Subtract1'

      keep[0] = (GNC2026W_B.dy_p[0] - GNC2026W_DW.Delay1_DSTATE_b[0] !=
                 GNC2026W_P.Constant3_Value_d);
      keep[1] = (GNC2026W_B.dy_p[1] - GNC2026W_DW.Delay1_DSTATE_b[1] !=
                 GNC2026W_P.Constant3_Value_d);
      keep[2] = (GNC2026W_B.dy_p[2] - GNC2026W_DW.Delay1_DSTATE_b[2] !=
                 GNC2026W_P.Constant3_Value_d);

      // Outputs for Enabled SubSystem: '<S250>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(keep, GNC2026W_B.dy_p, BLUE_Path_idx_0,
        GNC2026W_B.dy_g, &GNC2026W_B.EnabledSubsystem,
        &GNC2026W_DW.EnabledSubsystem, &GNC2026W_P.EnabledSubsystem);

      // End of Outputs for SubSystem: '<S250>/Enabled Subsystem'

      // DataStoreWrite: '<S237>/RED_Px7' incorporates:
      //   RelationalOperator: '<S250>/Relational Operator'
      //   SignalConversion generated from: '<S264>/Enable'

      GNC2026W_DW.BLACK_Measured_States[0] = GNC2026W_B.ConvertBLAXfrommmtom;
      GNC2026W_DW.BLACK_Measured_States[1] = sampleTime;
      GNC2026W_DW.BLACK_Measured_States[5] =
        GNC2026W_B.ReceivePhaseSpaceData_o1[15];
      GNC2026W_DW.BLACK_Measured_States[6] = GNC2026W_B.dy_g[0];
      GNC2026W_DW.BLACK_Measured_States[7] = GNC2026W_B.dy_g[1];
      GNC2026W_DW.BLACK_Measured_States[8] = GNC2026W_B.dy_g[2];

      // MATLAB Function: '<S262>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S249>/Data Store Read3'
      //   Delay: '<S262>/Delay'
      //   Delay: '<S262>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_h, GNC2026W_DW.Delay1_DSTATE_f, &GNC2026W_B.y,
        &GNC2026W_B.u_next);

      // SignalConversion generated from: '<S256>/ SFunction ' incorporates:
      //   MATLAB Function: '<S249>/BLK CoM to LAR'

      ARM_Path[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6];

      // MATLAB Function: '<S249>/BLK CoM to LAR'
      BLUE_Path_idx_0 = sin(ARM_Path[2]);
      RED_Path_idx_1 = cos(ARM_Path[2]);

      // MATLAB Function: '<S249>/Inertial to Camera Frame (HARDWARE)' incorporates:
      //   DataStoreRead: '<S249>/Data Store Read3'
      //   MATLAB Function: '<S249>/BLK CoM to LAR'
      //   SignalConversion generated from: '<S256>/ SFunction '
      //   SignalConversion generated from: '<S258>/ SFunction '

      BLUE_Path_idx_2 = sin(GNC2026W_B.y);
      BLUE_Path_idx_1 = cos(GNC2026W_B.y);
      RED_Path_idx_0 = ((RED_Path_idx_1 * 0.145 + -BLUE_Path_idx_0 * 0.0) +
                        GNC2026W_B.ConvertBLAXfrommmtom) -
        GNC2026W_DW.RED_Measured_States[0];
      RED_Path_idx_1 = ((BLUE_Path_idx_0 * 0.145 + RED_Path_idx_1 * 0.0) +
                        sampleTime) - GNC2026W_DW.RED_Measured_States[1];

      // Sum: '<S249>/Sum' incorporates:
      //   DataStoreRead: '<S249>/Data Store Read'
      //   MATLAB Function: '<S249>/BLK CoM to LAR'
      //   MATLAB Function: '<S249>/Inertial to Camera Frame (HARDWARE)'
      //   SignalConversion generated from: '<S258>/ SFunction '

      BLUE_Path_idx_0 = ((BLUE_Path_idx_1 * RED_Path_idx_0 + BLUE_Path_idx_2 *
                          RED_Path_idx_1) - 0.125) + BLACK_Exp_Noise;
      BLUE_Path_idx_1 = ((-BLUE_Path_idx_2 * RED_Path_idx_0 + BLUE_Path_idx_1 *
                          RED_Path_idx_1) - 0.03) + BLACK_Exp_Noise;
      BLUE_Path_idx_2 = (ARM_Path[2] - GNC2026W_B.y) + BLACK_Exp_Noise;

      // MATLAB Function: '<S249>/CV Noise' incorporates:
      //   Sum: '<S249>/Sum'

      if (GNC2026W_rand_a() < 0.5) {
        rtb_TSamp_e = (2.0 * GNC2026W_rand_a() - 1.0) * 0.1;
        BLUE_Path_idx_0 += rtb_TSamp_e;
        BLUE_Path_idx_1 += rtb_TSamp_e;
        BLUE_Path_idx_2 += rtb_TSamp_e;
      }

      BLACK_Exp_Noise = rt_roundd_snf(BLUE_Path_idx_0 / 0.0001) * 0.0001;
      BLUE_Path_idx_1 = rt_roundd_snf(BLUE_Path_idx_1 / 0.0001) * 0.0001;
      RED_Path_idx_0 = rt_roundd_snf(BLUE_Path_idx_2 / 0.0001) * 0.0001;

      // End of MATLAB Function: '<S249>/CV Noise'

      // MATLAB Function: '<S249>/Sample and Hold' incorporates:
      //   DataStoreWrite: '<S249>/Data Store Write'

      if (!GNC2026W_DW.k_not_empty) {
        GNC2026W_DW.k_not_empty = true;
        GNC2026W_DW.y_hold[0] = BLACK_Exp_Noise;
        GNC2026W_DW.y_hold[1] = BLUE_Path_idx_1;
        GNC2026W_DW.y_hold[2] = RED_Path_idx_0;
      }

      BLUE_Path_idx_0 = GNC2026W_P.CVrate / GNC2026W_P.baseRate;
      RED_Path_idx_1 = GNC2026W_DW.k;
      if (BLUE_Path_idx_0 == 0.0) {
        if (GNC2026W_DW.k == 0.0) {
          RED_Path_idx_1 = BLUE_Path_idx_0;
        }
      } else if (rtIsNaN(GNC2026W_DW.k)) {
        RED_Path_idx_1 = (rtNaN);
      } else if (rtIsNaN(BLUE_Path_idx_0)) {
        RED_Path_idx_1 = (rtNaN);
      } else if (rtIsInf(GNC2026W_DW.k)) {
        RED_Path_idx_1 = (rtNaN);
      } else if (GNC2026W_DW.k == 0.0) {
        RED_Path_idx_1 = 0.0 / BLUE_Path_idx_0;
      } else if (rtIsInf(BLUE_Path_idx_0)) {
        if ((BLUE_Path_idx_0 < 0.0) != (GNC2026W_DW.k < 0.0)) {
          RED_Path_idx_1 = BLUE_Path_idx_0;
        }
      } else {
        RED_Path_idx_1 = fmod(GNC2026W_DW.k, BLUE_Path_idx_0);
        rEQ0 = (RED_Path_idx_1 == 0.0);
        if ((!rEQ0) && (BLUE_Path_idx_0 > floor(BLUE_Path_idx_0))) {
          BLUE_Path_idx_2 = fabs(GNC2026W_DW.k / BLUE_Path_idx_0);
          rEQ0 = !(fabs(BLUE_Path_idx_2 - floor(BLUE_Path_idx_2 + 0.5)) >
                   2.2204460492503131E-16 * BLUE_Path_idx_2);
        }

        if (rEQ0) {
          RED_Path_idx_1 = BLUE_Path_idx_0 * 0.0;
        } else if (((RED_Path_idx_1 < 0.0) && (!(BLUE_Path_idx_0 < 0.0))) ||
                   ((!(RED_Path_idx_1 < 0.0)) && (BLUE_Path_idx_0 < 0.0))) {
          RED_Path_idx_1 += BLUE_Path_idx_0;
        }
      }

      if (RED_Path_idx_1 == 0.0) {
        GNC2026W_DW.y_hold[0] = BLACK_Exp_Noise;
        GNC2026W_DW.y_hold[1] = BLUE_Path_idx_1;
        GNC2026W_DW.y_hold[2] = RED_Path_idx_0;
      }

      GNC2026W_DW.BLACK_CV_States[0] = GNC2026W_DW.y_hold[0];
      GNC2026W_DW.BLACK_CV_States[1] = GNC2026W_DW.y_hold[1];
      GNC2026W_DW.BLACK_CV_States[2] = GNC2026W_DW.y_hold[2];
      GNC2026W_DW.k++;

      // End of MATLAB Function: '<S249>/Sample and Hold'

      // If: '<S249>/If' incorporates:
      //   Constant: '<S249>/Constant'

      if (GNC2026W_P.VISinLoop == 0.0) {
        // Outputs for IfAction SubSystem: '<S249>/Artificial isValid Flag' incorporates:
        //   ActionPort: '<S255>/Action Port'

        // MATLAB Function: '<S255>/MATLAB Function1' incorporates:
        //   DataStoreWrite: '<S255>/Data Store Write2'

        GNC2026W_DW.isValid = (GNC2026W_DW.k_h * GNC2026W_P.baseRate > 65.0);
        GNC2026W_DW.k_h++;

        // End of Outputs for SubSystem: '<S249>/Artificial isValid Flag'
      }

      // End of If: '<S249>/If'

      // SignalConversion generated from: '<S251>/Delay1' incorporates:
      //   Delay: '<S251>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_g[0] = GNC2026W_B.ConvertBLAXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_g[1] = sampleTime;
      GNC2026W_DW.Delay1_DSTATE_g[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6];

      // Gain: '<S238>/Convert BLUX from [mm] to [m]'
      GNC2026W_B.ConvertBLUXfrommmtom = GNC2026W_P.ConvertBLUXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[7];

      // Gain: '<S238>/Convert BLUY from [mm] to [m]'
      BLACK_Exp_Noise = GNC2026W_P.ConvertBLUYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[8];

      // Trigonometry: '<S271>/Sin'
      BLUE_Path_idx_2 = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[9]);

      // Trigonometry: '<S271>/Cos'
      BLUE_Path_idx_0 = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[9]);

      // DataStoreWrite: '<S238>/RED_Px7' incorporates:
      //   Gain: '<S238>/Convert BLUEVX from [mm] to [m]'
      //   Gain: '<S238>/Convert BLUEVY from [mm] to [m]'
      //   Trigonometry: '<S271>/Atan2'

      GNC2026W_DW.BLUE_Measured_States[2] = rt_atan2d_snf(BLUE_Path_idx_2,
        BLUE_Path_idx_0);
      GNC2026W_DW.BLUE_Measured_States[3] =
        GNC2026W_P.ConvertBLUEVXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[16];
      GNC2026W_DW.BLUE_Measured_States[4] =
        GNC2026W_P.ConvertBLUEVYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[17];

      // Sum: '<S268>/Subtract1' incorporates:
      //   Delay: '<S268>/Delay2'

      BLUE_Path_idx_0 = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE_l;

      // Outputs for Enabled SubSystem: '<S268>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S272>/Enable'

      if (GNC2026W_B.ConvertBLUXfrommmtom - GNC2026W_DW.Delay1_DSTATE_l !=
          GNC2026W_P.Constant3_Value_o) {
        // SignalConversion generated from: '<S272>/y2-y1'
        GNC2026W_B.y2y1_o = BLUE_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S268>/Enabled Subsystem3'

      // MATLAB Function: '<S268>/MATLAB Function' incorporates:
      //   Constant: '<S268>/Constant'
      //   Constant: '<S268>/Constant3'
      //   Delay: '<S268>/Delay1'
      //   RelationalOperator: '<S268>/Relational Operator'
      //   Sum: '<S268>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1_o, GNC2026W_P.dataRate,
        &BLUE_Path_idx_0);

      // Sum: '<S270>/Subtract1' incorporates:
      //   Delay: '<S270>/Delay1'

      ARM_Path[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[9] -
        GNC2026W_DW.Delay1_DSTATE_m[2];

      // RelationalOperator: '<S270>/Relational Operator' incorporates:
      //   Constant: '<S270>/Constant3'
      //   Delay: '<S270>/Delay1'
      //   Sum: '<S270>/Subtract1'

      keep[0] = (GNC2026W_B.ConvertBLUXfrommmtom - GNC2026W_DW.Delay1_DSTATE_m[0]
                 != GNC2026W_P.Constant3_Value_c);
      keep[1] = (BLACK_Exp_Noise - GNC2026W_DW.Delay1_DSTATE_m[1] !=
                 GNC2026W_P.Constant3_Value_c);
      keep[2] = (ARM_Path[2] != GNC2026W_P.Constant3_Value_c);

      // Outputs for Enabled SubSystem: '<S270>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(keep, GNC2026W_B.ConvertBLUXfrommmtom,
        BLACK_Exp_Noise, GNC2026W_B.ReceivePhaseSpaceData_o1[9], BLUE_Path_idx_0,
        GNC2026W_B.dy_c, &GNC2026W_B.EnabledSubsystem_d,
        &GNC2026W_DW.EnabledSubsystem_d, &GNC2026W_P.EnabledSubsystem_d);

      // End of Outputs for SubSystem: '<S270>/Enabled Subsystem'

      // RelationalOperator: '<S269>/Relational Operator' incorporates:
      //   Constant: '<S269>/Constant3'
      //   Delay: '<S269>/Delay1'
      //   SignalConversion generated from: '<S276>/Enable'
      //   Sum: '<S269>/Subtract1'

      keep[0] = (GNC2026W_B.dy_c[0] - GNC2026W_DW.Delay1_DSTATE_lv[0] !=
                 GNC2026W_P.Constant3_Value_ke);
      keep[1] = (GNC2026W_B.dy_c[1] - GNC2026W_DW.Delay1_DSTATE_lv[1] !=
                 GNC2026W_P.Constant3_Value_ke);
      keep[2] = (GNC2026W_B.dy_c[2] - GNC2026W_DW.Delay1_DSTATE_lv[2] !=
                 GNC2026W_P.Constant3_Value_ke);

      // Outputs for Enabled SubSystem: '<S269>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(keep, GNC2026W_B.dy_c, BLUE_Path_idx_0,
        GNC2026W_B.dy_d, &GNC2026W_B.EnabledSubsystem_l,
        &GNC2026W_DW.EnabledSubsystem_l, &GNC2026W_P.EnabledSubsystem_l);

      // End of Outputs for SubSystem: '<S269>/Enabled Subsystem'

      // DataStoreWrite: '<S238>/RED_Px7' incorporates:
      //   RelationalOperator: '<S269>/Relational Operator'
      //   SignalConversion generated from: '<S274>/Enable'

      GNC2026W_DW.BLUE_Measured_States[0] = GNC2026W_B.ConvertBLUXfrommmtom;
      GNC2026W_DW.BLUE_Measured_States[1] = BLACK_Exp_Noise;
      GNC2026W_DW.BLUE_Measured_States[5] = GNC2026W_B.ReceivePhaseSpaceData_o1
        [18];
      GNC2026W_DW.BLUE_Measured_States[6] = GNC2026W_B.dy_d[0];
      GNC2026W_DW.BLUE_Measured_States[7] = GNC2026W_B.dy_d[1];
      GNC2026W_DW.BLUE_Measured_States[8] = GNC2026W_B.dy_d[2];

      // SignalConversion generated from: '<S270>/Delay1' incorporates:
      //   Delay: '<S270>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_m[0] = GNC2026W_B.ConvertBLUXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_m[1] = BLACK_Exp_Noise;
      GNC2026W_DW.Delay1_DSTATE_m[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[9];

      // Gain: '<S239>/Convert REDX from [mm] to [m]'
      GNC2026W_B.ConvertREDXfrommmtom = GNC2026W_P.ConvertREDXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[1];

      // Gain: '<S239>/Convert REDY from [mm] to [m]'
      BLACK_Exp_Noise = GNC2026W_P.ConvertREDYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[2];

      // Trigonometry: '<S281>/Sin'
      BLUE_Path_idx_2 = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[3]);

      // Trigonometry: '<S281>/Cos'
      BLUE_Path_idx_0 = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[3]);

      // DataStoreWrite: '<S239>/RED_Px7' incorporates:
      //   Gain: '<S239>/Convert REDVX from [mm] to [m]'
      //   Gain: '<S239>/Convert REDVY from [mm] to [m]'
      //   Trigonometry: '<S281>/Atan2'

      GNC2026W_DW.RED_Measured_States[2] = rt_atan2d_snf(BLUE_Path_idx_2,
        BLUE_Path_idx_0);
      GNC2026W_DW.RED_Measured_States[3] = GNC2026W_P.ConvertREDVXfrommmtom_Gain
        * GNC2026W_B.ReceivePhaseSpaceData_o1[10];
      GNC2026W_DW.RED_Measured_States[4] = GNC2026W_P.ConvertREDVYfrommmtom_Gain
        * GNC2026W_B.ReceivePhaseSpaceData_o1[11];

      // Sum: '<S278>/Subtract1' incorporates:
      //   Delay: '<S278>/Delay2'

      BLUE_Path_idx_0 = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE_l0;

      // Outputs for Enabled SubSystem: '<S278>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S282>/Enable'

      if (GNC2026W_B.ConvertREDXfrommmtom - GNC2026W_DW.Delay1_DSTATE_ld !=
          GNC2026W_P.Constant3_Value_f) {
        // SignalConversion generated from: '<S282>/y2-y1'
        GNC2026W_B.y2y1 = BLUE_Path_idx_0;
      }

      // End of Outputs for SubSystem: '<S278>/Enabled Subsystem3'

      // MATLAB Function: '<S278>/MATLAB Function' incorporates:
      //   Constant: '<S278>/Constant'
      //   Constant: '<S278>/Constant3'
      //   Delay: '<S278>/Delay1'
      //   RelationalOperator: '<S278>/Relational Operator'
      //   Sum: '<S278>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1, GNC2026W_P.dataRate,
        &BLUE_Path_idx_0);

      // Sum: '<S280>/Subtract1' incorporates:
      //   Delay: '<S280>/Delay1'

      ARM_Path[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[3] -
        GNC2026W_DW.Delay1_DSTATE_c[2];

      // RelationalOperator: '<S280>/Relational Operator' incorporates:
      //   Constant: '<S280>/Constant3'
      //   Delay: '<S280>/Delay1'
      //   Sum: '<S280>/Subtract1'

      keep[0] = (GNC2026W_B.ConvertREDXfrommmtom - GNC2026W_DW.Delay1_DSTATE_c[0]
                 != GNC2026W_P.Constant3_Value_dh);
      keep[1] = (BLACK_Exp_Noise - GNC2026W_DW.Delay1_DSTATE_c[1] !=
                 GNC2026W_P.Constant3_Value_dh);
      keep[2] = (ARM_Path[2] != GNC2026W_P.Constant3_Value_dh);

      // Outputs for Enabled SubSystem: '<S280>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(keep, GNC2026W_B.ConvertREDXfrommmtom,
        BLACK_Exp_Noise, GNC2026W_B.ReceivePhaseSpaceData_o1[3], BLUE_Path_idx_0,
        GNC2026W_B.dy, &GNC2026W_B.EnabledSubsystem_l1,
        &GNC2026W_DW.EnabledSubsystem_l1, &GNC2026W_P.EnabledSubsystem_l1);

      // End of Outputs for SubSystem: '<S280>/Enabled Subsystem'

      // RelationalOperator: '<S279>/Relational Operator' incorporates:
      //   Constant: '<S279>/Constant3'
      //   Delay: '<S279>/Delay1'
      //   SignalConversion generated from: '<S286>/Enable'
      //   Sum: '<S279>/Subtract1'

      keep[0] = (GNC2026W_B.dy[0] - GNC2026W_DW.Delay1_DSTATE_cq[0] !=
                 GNC2026W_P.Constant3_Value_dz);
      keep[1] = (GNC2026W_B.dy[1] - GNC2026W_DW.Delay1_DSTATE_cq[1] !=
                 GNC2026W_P.Constant3_Value_dz);
      keep[2] = (GNC2026W_B.dy[2] - GNC2026W_DW.Delay1_DSTATE_cq[2] !=
                 GNC2026W_P.Constant3_Value_dz);

      // Outputs for Enabled SubSystem: '<S279>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(keep, GNC2026W_B.dy, BLUE_Path_idx_0,
        GNC2026W_B.dy_h, &GNC2026W_B.EnabledSubsystem_k,
        &GNC2026W_DW.EnabledSubsystem_k, &GNC2026W_P.EnabledSubsystem_k);

      // End of Outputs for SubSystem: '<S279>/Enabled Subsystem'

      // DataStoreWrite: '<S239>/RED_Px7' incorporates:
      //   RelationalOperator: '<S279>/Relational Operator'
      //   SignalConversion generated from: '<S284>/Enable'

      GNC2026W_DW.RED_Measured_States[0] = GNC2026W_B.ConvertREDXfrommmtom;
      GNC2026W_DW.RED_Measured_States[1] = BLACK_Exp_Noise;
      GNC2026W_DW.RED_Measured_States[5] = GNC2026W_B.ReceivePhaseSpaceData_o1
        [12];
      GNC2026W_DW.RED_Measured_States[6] = GNC2026W_B.dy_h[0];
      GNC2026W_DW.RED_Measured_States[7] = GNC2026W_B.dy_h[1];
      GNC2026W_DW.RED_Measured_States[8] = GNC2026W_B.dy_h[2];

      // S-Function (sdspFromNetwork): '<S240>/UDP Receive (RED Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
      samplesRead_2 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveREDClock_o1, &samplesRead_2);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S240>/UDP Receive (RED Clock)'

      // S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLACK Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
      samplesRead_3 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveBLACKClock_o1, &samplesRead_3);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLACK Clock)' 

      // S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLUE Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
      samplesRead_4 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveBLUEClock_o1, &samplesRead_4);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLUE Clock)'

      // MATLAB Function: '<S240>/MATLAB Function1'
      ARM_Path[0] = GNC2026W_B.UDPReceiveREDClock_o1;
      ARM_Path[1] = GNC2026W_B.UDPReceiveBLACKClock_o1;
      ARM_Path[2] = GNC2026W_B.UDPReceiveBLUEClock_o1;

      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      for (aoffset = 0; aoffset < 3; aoffset++) {
        // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
        //   ActionPort: '<S235>/Action Port'

        if (ARM_Path[aoffset] == 0.0) {
          ARM_Path[aoffset] = (rtNaN);
        }

        // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      }

      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S235>/Action Port'

      // MATLAB Function: '<S240>/MATLAB Function1'
      if (!rtIsNaN(ARM_Path[0])) {
        r = 1;
      } else {
        r = 0;
        r2 = 2;
        exitg1 = false;
        while ((!exitg1) && (r2 < 4)) {
          if (!rtIsNaN(ARM_Path[r2 - 1])) {
            r = r2;
            exitg1 = true;
          } else {
            r2++;
          }
        }
      }

      if (r == 0) {
        BLUE_Path_idx_2 = ARM_Path[0];
      } else {
        BLUE_Path_idx_2 = ARM_Path[r - 1];
        for (r2 = r + 1; r2 < 4; r2++) {
          BLUE_Path_idx_0 = ARM_Path[r2 - 1];
          if (BLUE_Path_idx_2 > BLUE_Path_idx_0) {
            BLUE_Path_idx_2 = BLUE_Path_idx_0;
          }
        }
      }

      // MATLAB Function: '<S240>/MATLAB Function'
      r = 0;
      if (GNC2026W_P.platformSelection == 1.0) {
        r = (GNC2026W_B.UDPReceiveREDClock_o1 != 0.0);
      } else if (GNC2026W_P.platformSelection == 2.0) {
        r = (GNC2026W_B.UDPReceiveBLACKClock_o1 != 0.0);
      } else if (GNC2026W_P.platformSelection == 3.0) {
        r = ((GNC2026W_B.UDPReceiveREDClock_o1 != 0.0) &&
             (GNC2026W_B.UDPReceiveBLACKClock_o1 != 0.0));
      } else if (GNC2026W_P.platformSelection == 4.0) {
        r = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 5.0) {
        r = (GNC2026W_B.UDPReceiveREDClock_o1 != 1.0);
      } else if (GNC2026W_P.platformSelection == 6.0) {
        r = (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0);
      } else if (GNC2026W_P.platformSelection == 7.0) {
        r = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 8.0) {
        r = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 9.0) {
        r = ((GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 10.0) {
        r = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 11.0) {
        r = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0) &&
             (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      }

      // End of MATLAB Function: '<S240>/MATLAB Function'

      // Outputs for Enabled SubSystem: '<S240>/Enabled Subsystem2' incorporates:
      //   EnablePort: '<S241>/Enable'

      if (r == GNC2026W_P.Constant_Value_i) {
        // SignalConversion generated from: '<S241>/In1'
        GNC2026W_B.In1_g20 = BLUE_Path_idx_2;
      }

      // End of Outputs for SubSystem: '<S240>/Enabled Subsystem2'

      // DataStoreWrite: '<S239>/Universal_Time' incorporates:
      //   Constant: '<S240>/Constant'
      //   RelationalOperator: '<S240>/Relational Operator'

      GNC2026W_DW.Univ_Time = GNC2026W_B.In1_g20;

      // SignalConversion generated from: '<S280>/Delay1' incorporates:
      //   Delay: '<S280>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_c[0] = GNC2026W_B.ConvertREDXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_c[1] = BLACK_Exp_Noise;
      GNC2026W_DW.Delay1_DSTATE_c[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[3];

      // If: '<S244>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   DataStoreRead: '<S244>/Data Store Read'
      //   DataStoreRead: '<S244>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;
      if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhether_ch = 0;
      }

      // End of If: '<S244>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S244>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   DataStoreRead: '<S244>/Data Store Read'
      //   DataStoreRead: '<S244>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;
      if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhether_cs = 0;
      }

      // End of If: '<S244>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S244>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   DataStoreRead: '<S244>/Data Store Read'
      //   DataStoreRead: '<S244>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;
      if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhethero_d = 0;
      }

      // End of If: '<S244>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S10>/Initialize Universal Time (Simulation)' incorporates:
      //   ActionPort: '<S234>/Action Port'

      // Clock: '<S234>/Set Universal Time (If this is a simulation)' incorporates:
      //   DataStoreWrite: '<S234>/Universal_Time'

      GNC2026W_DW.Univ_Time = GNC2026W_M->Timing.t[0];

      // End of Outputs for SubSystem: '<S10>/Initialize Universal Time (Simulation)' 
      break;
    }

    // End of If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // If: '<S13>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S11>/Data Store Read1'
    //   If: '<S11>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'
    //   If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S11>/Subsystem' incorporates:
      //   ActionPort: '<S288>/Action Port'

      // MATLABSystem: '<S288>/WhoAmI' incorporates:
      //   DataStoreWrite: '<S288>/Data Store Write'

      if (GNC2026W_DW.obj_dk.SampleTime != GNC2026W_P.baseRate) {
        if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate)))
            || rtIsInf(GNC2026W_P.baseRate)) {
          sampleTime_0 = GNC2026W_P.baseRate;
        }

        GNC2026W_DW.obj_dk.SampleTime = sampleTime_0;
      }

      //         %% Define output properties
      //  Call C-function implementing device output
      GNC2026W_DW.WhoAmI = WhoAmI();

      // End of MATLABSystem: '<S288>/WhoAmI'
      // End of Outputs for SubSystem: '<S11>/Subsystem'

      // Outputs for IfAction SubSystem: '<S12>/CV UDP' incorporates:
      //   ActionPort: '<S289>/Action Port'

      // S-Function (sdspFromNetwork): '<S289>/UDP Receive'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
      samplesRead_0 = 4;
      LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U],
                         &GNC2026W_B.UDPReceive_o1_a[0U], &samplesRead_0);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S289>/UDP Receive'

      // DataStoreWrite: '<S289>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S289>/Cast To Double'

      GNC2026W_DW.VIS_LAR_States[0] = GNC2026W_B.UDPReceive_o1_a[1];

      // DataTypeConversion: '<S289>/Cast To Double1'
      sampleTime_0 = GNC2026W_B.UDPReceive_o1_a[2];

      // DataStoreWrite: '<S289>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S289>/Cast To Double2'
      //   Gain: '<S289>/Gain'

      GNC2026W_DW.VIS_LAR_States[2] = GNC2026W_B.UDPReceive_o1_a[3];
      GNC2026W_DW.VIS_LAR_States[1] = GNC2026W_P.Gain_Gain_k * sampleTime_0;

      // DataTypeConversion: '<S289>/Cast To Double3'
      sampleTime_0 = GNC2026W_B.UDPReceive_o1_a[0];

      // If: '<S289>/If' incorporates:
      //   Constant: '<S289>/Constant'

      if (GNC2026W_P.VISinLoop == 1.0) {
        // Outputs for IfAction SubSystem: '<S289>/Reading isValid' incorporates:
        //   ActionPort: '<S290>/Action Port'

        // DataStoreWrite: '<S290>/Data Store Write2'
        GNC2026W_DW.isValid = sampleTime_0;

        // End of Outputs for SubSystem: '<S289>/Reading isValid'
      }

      // End of If: '<S289>/If'
      // End of Outputs for SubSystem: '<S12>/CV UDP'

      // Outputs for IfAction SubSystem: '<S13>/Subsystem' incorporates:
      //   ActionPort: '<S291>/Action Port'

      // S-Function (sdspFromNetwork): '<S291>/UDP Receive'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
      samplesRead_1 = 4;
      LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib[0U],
                         &GNC2026W_B.UDPReceive_o1[0U], &samplesRead_1);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S291>/UDP Receive'

      // DataStoreWrite: '<S291>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S291>/Cast To Double'
      //   DataTypeConversion: '<S291>/Cast To Double1'
      //   DataTypeConversion: '<S291>/Cast To Double2'

      GNC2026W_DW.VIS_Measured_States[0] = GNC2026W_B.UDPReceive_o1[0];
      GNC2026W_DW.VIS_Measured_States[1] = GNC2026W_B.UDPReceive_o1[1];
      GNC2026W_DW.VIS_Measured_States[2] = GNC2026W_B.UDPReceive_o1[2];

      // DataTypeConversion: '<S291>/Cast To Double3' incorporates:
      //   DataStoreWrite: '<S291>/Data Store Write1'

      GNC2026W_DW.VIS_Confidence = GNC2026W_B.UDPReceive_o1[3];

      // End of Outputs for SubSystem: '<S13>/Subsystem'
    }

    // End of If: '<S13>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S14>/Data Store Read'
    //   DataStoreRead: '<S14>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S14>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S292>/Action Port'

      // MATLABSystem: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' incorporates:
      //   DataStoreRead: '<S292>/Arm Control Mode'
      //   DataStoreWrite: '<S3>/Data Store Write9'

      if (GNC2026W_DW.obj.POSITION_P_GAIN !=
          GNC2026W_P.ControlDynamixelActuatorsineith) {
        GNC2026W_DW.obj.POSITION_P_GAIN =
          GNC2026W_P.ControlDynamixelActuatorsineith;
      }

      if (GNC2026W_DW.obj.POSITION_I_GAIN !=
          GNC2026W_P.ControlDynamixelActuatorsinei_b) {
        GNC2026W_DW.obj.POSITION_I_GAIN =
          GNC2026W_P.ControlDynamixelActuatorsinei_b;
      }

      if (GNC2026W_DW.obj.POSITION_D_GAIN !=
          GNC2026W_P.ControlDynamixelActuatorsinei_h) {
        GNC2026W_DW.obj.POSITION_D_GAIN =
          GNC2026W_P.ControlDynamixelActuatorsinei_h;
      }

      if (GNC2026W_DW.obj.MAX_POSITION !=
          GNC2026W_P.ControlDynamixelActuatorsinei_j) {
        GNC2026W_DW.obj.MAX_POSITION =
          GNC2026W_P.ControlDynamixelActuatorsinei_j;
      }

      if (GNC2026W_DW.obj.MIN_POSITION !=
          GNC2026W_P.ControlDynamixelActuatorsinei_m) {
        GNC2026W_DW.obj.MIN_POSITION =
          GNC2026W_P.ControlDynamixelActuatorsinei_m;
      }

      if (GNC2026W_DW.obj.MOVE_TIME !=
          GNC2026W_P.ControlDynamixelActuatorsine_hy) {
        GNC2026W_DW.obj.MOVE_TIME = GNC2026W_P.ControlDynamixelActuatorsine_hy;
      }

      if (GNC2026W_DW.obj.CURRENT_LIMIT !=
          GNC2026W_P.ControlDynamixelActuatorsinei_i) {
        GNC2026W_DW.obj.CURRENT_LIMIT =
          GNC2026W_P.ControlDynamixelActuatorsinei_i;
      }

      if (GNC2026W_DW.obj.SPEED_P_GAIN !=
          GNC2026W_P.ControlDynamixelActuatorsinei_g) {
        GNC2026W_DW.obj.SPEED_P_GAIN =
          GNC2026W_P.ControlDynamixelActuatorsinei_g;
      }

      if (GNC2026W_DW.obj.SPEED_I_GAIN !=
          GNC2026W_P.ControlDynamixelActuatorsine_g3) {
        GNC2026W_DW.obj.SPEED_I_GAIN =
          GNC2026W_P.ControlDynamixelActuatorsine_g3;
      }

      if (GNC2026W_DW.obj.VELOCITY_LIMIT !=
          GNC2026W_P.ControlDynamixelActuatorsine_bf) {
        GNC2026W_DW.obj.VELOCITY_LIMIT =
          GNC2026W_P.ControlDynamixelActuatorsine_bf;
      }

      if (GNC2026W_DW.obj.ACCELERATION_TIME !=
          GNC2026W_P.ControlDynamixelActuatorsinei_l) {
        GNC2026W_DW.obj.ACCELERATION_TIME =
          GNC2026W_P.ControlDynamixelActuatorsinei_l;
      }

      if (GNC2026W_DW.obj.SampleTime != GNC2026W_P.baseRate) {
        if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate)))
            || rtIsInf(GNC2026W_P.baseRate)) {
          sampleTime_1 = GNC2026W_P.baseRate;
        }

        GNC2026W_DW.obj.SampleTime = sampleTime_1;
      }

      //         %% Define input properties
      //  Call C-function implementing device output
      //  include the dynamicel functions
      //  Run the main controller code. If the switch state is
      //  true then this code will initialize the parameters and
      //  then start the actuator, and THEN run the command. If the
      //  switch state is false, it will not reinitialize the
      //  motor
      dynamixel_controller(GNC2026W_DW.ARM_Control_Mode,
                           GNC2026W_DW.obj.POSITION_P_GAIN,
                           GNC2026W_DW.obj.POSITION_I_GAIN,
                           GNC2026W_DW.obj.POSITION_D_GAIN,
                           GNC2026W_DW.obj.MAX_POSITION,
                           GNC2026W_DW.obj.MIN_POSITION,
                           GNC2026W_DW.obj.MOVE_TIME,
                           rtb_TmpSignalConversionAtSFun_b[0],
                           rtb_TmpSignalConversionAtSFun_b[1],
                           rtb_TmpSignalConversionAtSFun_b[2],
                           GNC2026W_DW.obj.CURRENT_LIMIT,
                           rtb_TmpSignalConversionAtSFun_b[0],
                           rtb_TmpSignalConversionAtSFun_b[1],
                           rtb_TmpSignalConversionAtSFun_b[2],
                           GNC2026W_DW.obj.SPEED_P_GAIN,
                           GNC2026W_DW.obj.SPEED_I_GAIN,
                           GNC2026W_DW.obj.VELOCITY_LIMIT,
                           rtb_TmpSignalConversionAtSFun_b[0],
                           rtb_TmpSignalConversionAtSFun_b[1],
                           rtb_TmpSignalConversionAtSFun_b[2],
                           GNC2026W_DW.obj.ACCELERATION_TIME);

      // End of MATLABSystem: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
      // End of Outputs for SubSystem: '<S14>/Change ARM Behavior'
    }

    // End of If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S15>/Data Store Read1'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S15>/Subsystem' incorporates:
      //   ActionPort: '<S293>/Action Port'

      // SignalConversion generated from: '<S293>/UDP Send' incorporates:
      //   DataStoreRead: '<S293>/BLACK States'
      //   DataStoreRead: '<S293>/BLUE States'
      //   DataStoreRead: '<S293>/RED States'
      //   DataStoreRead: '<S293>/Time'

      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[0] = GNC2026W_DW.Univ_Time;
      for (aoffset = 0; aoffset < 9; aoffset++) {
        GNC2026W_B.TmpSignalConversionAtUDPSendI_o[aoffset + 1] =
          GNC2026W_DW.RED_Measured_States[aoffset];
        GNC2026W_B.TmpSignalConversionAtUDPSendI_o[aoffset + 10] =
          GNC2026W_DW.BLACK_Measured_States[aoffset];
        GNC2026W_B.TmpSignalConversionAtUDPSendI_o[aoffset + 19] =
          GNC2026W_DW.BLUE_Measured_States[aoffset];
      }

      // Update for S-Function (sdspToNetwork): '<S293>/UDP Send' incorporates:
      //   SignalConversion generated from: '<S293>/UDP Send'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib_m[0U],
                        &GNC2026W_B.TmpSignalConversionAtUDPSendI_o[0U], 28);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S293>/UDP Send'
      // End of Outputs for SubSystem: '<S15>/Subsystem'
    }

    // End of If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S18>/Data Store Read'
    //   DataStoreRead: '<S18>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhetherorn = -1;
    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhetherorn = 0;

      // Outputs for IfAction SubSystem: '<S18>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S333>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M,
        &GNC2026W_B.ChangeBLACKBehavior_i);

      // End of Outputs for SubSystem: '<S18>/Change BLACK Behavior'
    }

    // End of If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S18>/Data Store Read'
    //   DataStoreRead: '<S18>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhethero_b = -1;
    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhethero_b = 0;

      // Outputs for IfAction SubSystem: '<S18>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S334>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M,
        &GNC2026W_B.ChangeBLUEBehavior_e);

      // End of Outputs for SubSystem: '<S18>/Change BLUE Behavior'
    }

    // End of If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S18>/Data Store Read'
    //   DataStoreRead: '<S18>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhethero_c = -1;
    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhethero_c = 0;

      // Outputs for IfAction SubSystem: '<S18>/Change RED Behavior' incorporates:
      //   ActionPort: '<S335>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M, &GNC2026W_B.ChangeREDBehavior_h);

      // End of Outputs for SubSystem: '<S18>/Change RED Behavior'
    }

    // End of If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  {
    char_T *sErr;

    // Update for RandomNumber: '<Root>/Gaussian Noise'
    GNC2026W_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&GNC2026W_DW.RandSeed) *
      GNC2026W_P.GaussianNoise_StdDev + GNC2026W_P.GaussianNoise_Mean;

    // Update for S-Function (sdspToNetwork): '<S17>/UDP Send' incorporates:
    //   SignalConversion generated from: '<S17>/UDP Send'

    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib[0U],
                      &GNC2026W_B.TmpSignalConversionAtUDPSendInp[0U], 10);
    if (*sErr != 0) {
      GNC2026W_M->setErrorStatus(sErr);
      GNC2026W_M->setStopRequested(1);
    }

    // End of Update for S-Function (sdspToNetwork): '<S17>/UDP Send'

    // Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    if (GNC2026W_DW.Ifperforminganexperimentgrabthe == 0) {
      // Update for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S235>/Action Port'

      // Update for Delay: '<S248>/Delay2'
      GNC2026W_DW.Delay2_DSTATE = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S248>/Delay1'
      GNC2026W_DW.Delay1_DSTATE = GNC2026W_B.ConvertBLAXfrommmtom;

      // Update for Enabled SubSystem: '<S251>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_g,
        &GNC2026W_DW.EnabledSubsystem_g);

      // End of Update for SubSystem: '<S251>/Enabled Subsystem'

      // Update for Delay: '<S250>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_b[0] = GNC2026W_B.dy_p[0];
      GNC2026W_DW.Delay1_DSTATE_b[1] = GNC2026W_B.dy_p[1];
      GNC2026W_DW.Delay1_DSTATE_b[2] = GNC2026W_B.dy_p[2];

      // Update for Enabled SubSystem: '<S250>/Enabled Subsystem'
      GNC2026_EnabledSubsystem_Update(&GNC2026W_B.EnabledSubsystem,
        &GNC2026W_DW.EnabledSubsystem);

      // End of Update for SubSystem: '<S250>/Enabled Subsystem'

      // Update for Delay: '<S262>/Delay'
      GNC2026W_DW.Delay_DSTATE_h = GNC2026W_B.u_next;

      // Update for Delay: '<S262>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_f = GNC2026W_B.y;

      // Update for Delay: '<S268>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_l = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S268>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_l = GNC2026W_B.ConvertBLUXfrommmtom;

      // Update for Enabled SubSystem: '<S270>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_d,
        &GNC2026W_DW.EnabledSubsystem_d);

      // End of Update for SubSystem: '<S270>/Enabled Subsystem'

      // Update for Delay: '<S269>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_lv[0] = GNC2026W_B.dy_c[0];
      GNC2026W_DW.Delay1_DSTATE_lv[1] = GNC2026W_B.dy_c[1];
      GNC2026W_DW.Delay1_DSTATE_lv[2] = GNC2026W_B.dy_c[2];

      // Update for Enabled SubSystem: '<S269>/Enabled Subsystem'
      GNC2026_EnabledSubsystem_Update(&GNC2026W_B.EnabledSubsystem_l,
        &GNC2026W_DW.EnabledSubsystem_l);

      // End of Update for SubSystem: '<S269>/Enabled Subsystem'

      // Update for Delay: '<S278>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_l0 = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S278>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_ld = GNC2026W_B.ConvertREDXfrommmtom;

      // Update for Enabled SubSystem: '<S280>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_l1,
        &GNC2026W_DW.EnabledSubsystem_l1);

      // End of Update for SubSystem: '<S280>/Enabled Subsystem'

      // Update for Delay: '<S279>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_cq[0] = GNC2026W_B.dy[0];
      GNC2026W_DW.Delay1_DSTATE_cq[1] = GNC2026W_B.dy[1];
      GNC2026W_DW.Delay1_DSTATE_cq[2] = GNC2026W_B.dy[2];

      // Update for Enabled SubSystem: '<S279>/Enabled Subsystem'
      GNC2026_EnabledSubsystem_Update(&GNC2026W_B.EnabledSubsystem_k,
        &GNC2026W_DW.EnabledSubsystem_k);

      // End of Update for SubSystem: '<S279>/Enabled Subsystem'

      // Update for If: '<S244>/This IF block determines whether or not to run the BLACK sim//exp' 
      if (GNC2026W_DW.ThisIFblockdetermineswhether_ch == 0) {
        // Update for IfAction SubSystem: '<S244>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S245>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeBLACKBehavior_e);

        // End of Update for SubSystem: '<S244>/Change BLACK Behavior'
      }

      // End of Update for If: '<S244>/This IF block determines whether or not to run the BLACK sim//exp' 

      // Update for If: '<S244>/This IF block determines whether or not to run the BLUE sim//exp' 
      if (GNC2026W_DW.ThisIFblockdetermineswhether_cs == 0) {
        // Update for IfAction SubSystem: '<S244>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S246>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeBLUEBehavior_f);

        // End of Update for SubSystem: '<S244>/Change BLUE Behavior'
      }

      // End of Update for If: '<S244>/This IF block determines whether or not to run the BLUE sim//exp' 

      // Update for If: '<S244>/This IF block determines whether or not to run the RED sim//exp ' 
      if (GNC2026W_DW.ThisIFblockdetermineswhethero_d == 0) {
        // Update for IfAction SubSystem: '<S244>/Change RED Behavior' incorporates:
        //   ActionPort: '<S247>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeREDBehavior_d);

        // End of Update for SubSystem: '<S244>/Change RED Behavior'
      }

      // End of Update for If: '<S244>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Update for SubSystem: '<S10>/Use Hardware to Obtain States'
    }

    // End of Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // Update for If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' 
    if (GNC2026W_DW.ThisIFblockdetermineswhetherorn == 0) {
      // Update for IfAction SubSystem: '<S18>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S333>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeBLACKBehavior_i, &GNC2026W_DW.ChangeBLACKBehavior_i);

      // End of Update for SubSystem: '<S18>/Change BLACK Behavior'
    }

    // End of Update for If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' 

    // Update for If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' 
    if (GNC2026W_DW.ThisIFblockdetermineswhethero_b == 0) {
      // Update for IfAction SubSystem: '<S18>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S334>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeBLUEBehavior_e, &GNC2026W_DW.ChangeBLUEBehavior_e);

      // End of Update for SubSystem: '<S18>/Change BLUE Behavior'
    }

    // End of Update for If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' 

    // Update for If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' 
    if (GNC2026W_DW.ThisIFblockdetermineswhethero_c == 0) {
      // Update for IfAction SubSystem: '<S18>/Change RED Behavior' incorporates:
      //   ActionPort: '<S335>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeREDBehavior_h, &GNC2026W_DW.ChangeREDBehavior_h);

      // End of Update for SubSystem: '<S18>/Change RED Behavior'
    }

    // End of Update for If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  GNC2026W_M->Timing.t[0] =
    ((time_T)(++GNC2026W_M->Timing.clockTick0)) * GNC2026W_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    GNC2026W_M->Timing.clockTick1++;
  }
}

// Model initialize function
void GNC2026W_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&GNC2026W_M->solverInfo,
                          &GNC2026W_M->Timing.simTimeStep);
    rtsiSetTPtr(&GNC2026W_M->solverInfo, GNC2026W_M->getTPtrPtr());
    rtsiSetStepSizePtr(&GNC2026W_M->solverInfo, &GNC2026W_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&GNC2026W_M->solverInfo, GNC2026W_M->getErrorStatusPtr
                          ());
    rtsiSetRTModelPtr(&GNC2026W_M->solverInfo, GNC2026W_M);
  }

  rtsiSetSimTimeStep(&GNC2026W_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&GNC2026W_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&GNC2026W_M->solverInfo, false);
  rtsiSetSolverName(&GNC2026W_M->solverInfo,"FixedStepDiscrete");
  GNC2026W_M->setTPtr(&GNC2026W_M->Timing.tArray[0]);
  GNC2026W_M->Timing.stepSize0 = 0.05;

  {
    real_T sampleTime;
    real_T sampleTime_0;
    real_T sampleTime_1;
    real_T tmp;
    int32_T i;
    int32_T t;
    uint32_T seed;
    char_T *sErr;
    static const real_T b[6] = { 1.0, 1.0, 0.05, 0.05, 0.1, 0.05 };

    static const real_T b_0[6] = { 1.0, 1.0, 0.05, 0.05, 1.0, 0.05 };

    static const uint32_T tmp_0[625] = { 5489U, 1301868182U, 2938499221U,
      2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U,
      219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U,
      3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U,
      2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U,
      431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U,
      1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U,
      3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U,
      1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U,
      3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U,
      1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
      699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
      1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U,
      3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U,
      2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U,
      2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U,
      1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U,
      619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U,
      4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U,
      3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U,
      3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
      3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U,
      2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U,
      3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U,
      819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U,
      1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U,
      2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U,
      2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U,
      2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U,
      1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U,
      3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U,
      1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U,
      1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U,
      2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U,
      1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
      3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
      3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
      354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
      1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U,
      1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U,
      171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U,
      1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U,
      136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U,
      341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U,
      297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U,
      894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U,
      1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U,
      3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U,
      3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U,
      3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U,
      3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
      3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
      2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U,
      1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U,
      903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U,
      2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U,
      732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U,
      2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U,
      2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U,
      3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
      3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U,
      686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U,
      4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U,
      1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U,
      2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U,
      1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U,
      3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
      4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U,
      1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U,
      422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U,
      1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U,
      539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U,
      2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U,
      3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U,
      818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U,
      232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U,
      3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U,
      3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U,
      3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U,
      3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
      4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U,
      1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U,
      3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U,
      2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U,
      171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U,
      1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U,
      3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U,
      1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U,
      326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U,
      880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U,
      2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U,
      879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U,
      975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U,
      2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U,
      3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U,
      2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
      2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
      643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U,
      3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U,
      3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U,
      1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U,
      828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U,
      1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U,
      1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U,
      831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U,
      4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U,
      3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
      2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
      453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U,
      3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U,
      1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U,
      705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U,
      2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U,
      1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };

    // Start for S-Function (sdspToNetwork): '<S17>/UDP Send'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "127.0.0.1", GNC2026W_P.UDPSend_Port_h, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S17>/UDP Send'

    // Start for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    GNC2026W_DW.Ifperforminganexperimentgrabthe = -1;

    // Start for If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhetherorn = -1;

    // Start for If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_b = -1;

    // Start for If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_c = -1;

    // Start for DataStoreMemory: '<Root>/Data Store Memory'
    GNC2026W_DW.L0 = GNC2026W_P.DataStoreMemory_InitialValue;

    // Start for DataStoreMemory: '<Root>/Data Store Memory2'
    GNC2026W_DW.thRel = GNC2026W_P.DataStoreMemory2_InitialValue;

    // Start for DataStoreMemory: '<Root>/Data Store Memory3'
    GNC2026W_DW.lambda[0] = GNC2026W_P.DataStoreMemory3_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Data Store Memory4'
    GNC2026W_DW.lambdaFirstOrder[0] = GNC2026W_P.DataStoreMemory4_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Data Store Memory3'
    GNC2026W_DW.lambda[1] = GNC2026W_P.DataStoreMemory3_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Data Store Memory4'
    GNC2026W_DW.lambdaFirstOrder[1] = GNC2026W_P.DataStoreMemory4_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Data Store Memory3'
    GNC2026W_DW.lambda[2] = GNC2026W_P.DataStoreMemory3_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Data Store Memory4'
    GNC2026W_DW.lambdaFirstOrder[2] = GNC2026W_P.DataStoreMemory4_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/RED_Tz1'
    GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.RED_Tz1_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz15'
    GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.RED_Tz15_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz20'
    GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.RED_Tz20_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz25'
    GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.RED_Tz25_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz3'
    strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.RED_Tz3_InitialValue[0],
            255U);
    GNC2026W_DW.RED_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz38'
    GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.RED_Tz38_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz4'
    strncpy(&GNC2026W_DW.BLACK_Logger[0], &GNC2026W_P.RED_Tz4_InitialValue[0],
            255U);
    GNC2026W_DW.BLACK_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz5'
    strncpy(&GNC2026W_DW.BLUE_Logger[0], &GNC2026W_P.RED_Tz5_InitialValue[0],
            255U);
    GNC2026W_DW.BLUE_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz7'
    GNC2026W_DW.Float_State = GNC2026W_P.RED_Tz7_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz8'
    GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.RED_Tz8_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time'
    GNC2026W_DW.Univ_Time = GNC2026W_P.Universal_Time_InitialValue;

    // Start for DataStoreMemory: '<Root>/Data Store Memory1'
    memcpy(&GNC2026W_DW.RED_desired[0],
           &GNC2026W_P.DataStoreMemory1_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time10'
    memcpy(&GNC2026W_DW.BLACK_Measured_States[0],
           &GNC2026W_P.Universal_Time10_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time19'
    GNC2026W_DW.WhoAmI = GNC2026W_P.Universal_Time19_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time20'
    GNC2026W_DW.isSim = GNC2026W_P.Universal_Time20_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    GNC2026W_DW.BLUE_Desired_States[0] =
      GNC2026W_P.Universal_Time13_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    GNC2026W_DW.BLACK_Saturated_Controls[0] =
      GNC2026W_P.Universal_Time15_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time21'
    GNC2026W_DW.BLACK_CV_States[0] = GNC2026W_P.Universal_Time21_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    GNC2026W_DW.VIS_Measured_States[0] =
      GNC2026W_P.Universal_Time22_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    GNC2026W_DW.BLUE_Desired_States[1] =
      GNC2026W_P.Universal_Time13_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    GNC2026W_DW.BLACK_Saturated_Controls[1] =
      GNC2026W_P.Universal_Time15_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time21'
    GNC2026W_DW.BLACK_CV_States[1] = GNC2026W_P.Universal_Time21_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    GNC2026W_DW.VIS_Measured_States[1] =
      GNC2026W_P.Universal_Time22_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    GNC2026W_DW.BLUE_Desired_States[2] =
      GNC2026W_P.Universal_Time13_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    GNC2026W_DW.BLACK_Saturated_Controls[2] =
      GNC2026W_P.Universal_Time15_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time21'
    GNC2026W_DW.BLACK_CV_States[2] = GNC2026W_P.Universal_Time21_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    GNC2026W_DW.VIS_Measured_States[2] =
      GNC2026W_P.Universal_Time22_InitialValue[2];
    for (i = 0; i < 6; i++) {
      // Start for DataStoreMemory: '<Root>/Universal_Time23'
      GNC2026W_DW.BLACK_Filtered_States[i] =
        GNC2026W_P.Universal_Time23_InitialValue[i];

      // Start for DataStoreMemory: '<Root>/Universal_Time24'
      GNC2026W_DW.ARM_Measured_States[i] =
        GNC2026W_P.Universal_Time24_InitialValue[i];
    }

    // Start for DataStoreMemory: '<Root>/Universal_Time25'
    GNC2026W_DW.BLACK_Desired_States[0] =
      GNC2026W_P.Universal_Time25_InitialValue[0];
    GNC2026W_DW.BLACK_Desired_States[1] =
      GNC2026W_P.Universal_Time25_InitialValue[1];
    GNC2026W_DW.BLACK_Desired_States[2] =
      GNC2026W_P.Universal_Time25_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    GNC2026W_DW.RED_Saturated_Controls[0] =
      GNC2026W_P.Universal_Time28_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    GNC2026W_DW.RED_Desired_States[0] =
      GNC2026W_P.Universal_Time29_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time31'
    GNC2026W_DW.RED_IMU_Measurements[0] =
      GNC2026W_P.Universal_Time31_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time33'
    GNC2026W_DW.BLACK_IMU_Measurements[0] =
      GNC2026W_P.Universal_Time33_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time34'
    GNC2026W_DW.BLUE_IMU_Measurements[0] =
      GNC2026W_P.Universal_Time34_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time36'
    GNC2026W_DW.VIS_LAR_States[0] = GNC2026W_P.Universal_Time36_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time37'
    GNC2026W_DW.sigma3[0] = GNC2026W_P.Universal_Time37_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    GNC2026W_DW.RED_Saturated_Controls[1] =
      GNC2026W_P.Universal_Time28_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    GNC2026W_DW.RED_Desired_States[1] =
      GNC2026W_P.Universal_Time29_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time31'
    GNC2026W_DW.RED_IMU_Measurements[1] =
      GNC2026W_P.Universal_Time31_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time33'
    GNC2026W_DW.BLACK_IMU_Measurements[1] =
      GNC2026W_P.Universal_Time33_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time34'
    GNC2026W_DW.BLUE_IMU_Measurements[1] =
      GNC2026W_P.Universal_Time34_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time36'
    GNC2026W_DW.VIS_LAR_States[1] = GNC2026W_P.Universal_Time36_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time37'
    GNC2026W_DW.sigma3[1] = GNC2026W_P.Universal_Time37_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    GNC2026W_DW.RED_Saturated_Controls[2] =
      GNC2026W_P.Universal_Time28_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    GNC2026W_DW.RED_Desired_States[2] =
      GNC2026W_P.Universal_Time29_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time31'
    GNC2026W_DW.RED_IMU_Measurements[2] =
      GNC2026W_P.Universal_Time31_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time33'
    GNC2026W_DW.BLACK_IMU_Measurements[2] =
      GNC2026W_P.Universal_Time33_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time34'
    GNC2026W_DW.BLUE_IMU_Measurements[2] =
      GNC2026W_P.Universal_Time34_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time36'
    GNC2026W_DW.VIS_LAR_States[2] = GNC2026W_P.Universal_Time36_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time37'
    GNC2026W_DW.sigma3[2] = GNC2026W_P.Universal_Time37_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time38'
    GNC2026W_DW.isValid = GNC2026W_P.Universal_Time38_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time26'
    memcpy(&GNC2026W_DW.RED_Measured_States[0],
           &GNC2026W_P.Universal_Time26_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time4'
    memcpy(&GNC2026W_DW.BLUE_Measured_States[0],
           &GNC2026W_P.Universal_Time4_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time40'
    GNC2026W_DW.filterConfidence = GNC2026W_P.Universal_Time40_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    GNC2026W_DW.BLUE_Saturated_Controls[0] =
      GNC2026W_P.Universal_Time6_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Universal_Time8_InitialValue
      [0];

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    GNC2026W_DW.BLUE_Saturated_Controls[1] =
      GNC2026W_P.Universal_Time6_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Universal_Time8_InitialValue
      [1];

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    GNC2026W_DW.BLUE_Saturated_Controls[2] =
      GNC2026W_P.Universal_Time6_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Universal_Time8_InitialValue
      [2];

    // Start for DataStoreMemory: '<Root>/Universal_Time9'
    GNC2026W_DW.VIS_Confidence = GNC2026W_P.Universal_Time9_InitialValue;

    // InitializeConditions for RandomNumber: '<Root>/Gaussian Noise'
    tmp = floor(GNC2026W_P.GaussianNoise_Seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    seed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    i = static_cast<int32_T>(seed >> 16U);
    t = static_cast<int32_T>(seed & 32768U);
    GNC2026W_DW.RandSeed = ((((seed - (static_cast<uint32_T>(i) << 16U)) +
      static_cast<uint32_T>(t)) << 16U) + static_cast<uint32_T>(t)) +
      static_cast<uint32_T>(i);
    if (GNC2026W_DW.RandSeed < 1U) {
      GNC2026W_DW.RandSeed = 1144108930U;
    } else if (GNC2026W_DW.RandSeed > 2147483646U) {
      GNC2026W_DW.RandSeed = 2147483646U;
    }

    GNC2026W_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&GNC2026W_DW.RandSeed) *
      GNC2026W_P.GaussianNoise_StdDev + GNC2026W_P.GaussianNoise_Mean;

    // End of InitializeConditions for RandomNumber: '<Root>/Gaussian Noise'

    // SystemInitialize for IfAction SubSystem: '<S2>/Custom PPL (RED)'
    // InitializeConditions for Delay: '<S137>/Delay'
    GNC2026W_DW.Delay_DSTATE_h0 = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S137>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lo = GNC2026W_P.init_states_BLACK[2];

    // End of SystemInitialize for SubSystem: '<S2>/Custom PPL (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S187>/UD'
    //
    //  Block description for '<S187>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_eh = GNC2026W_P.DiscreteDerivative_ICPrevScal_p;

    // InitializeConditions for UnitDelay: '<S188>/UD'
    //
    //  Block description for '<S188>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hv = GNC2026W_P.DiscreteDerivative1_ICPrevSca_m;

    // InitializeConditions for UnitDelay: '<S189>/UD'
    //
    //  Block description for '<S189>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_kv = GNC2026W_P.DiscreteDerivative2_ICPrevSca_a;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLACK)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S164>/UD'
    //
    //  Block description for '<S164>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_j = GNC2026W_P.DiscreteDerivative_ICPrevScal_d;

    // InitializeConditions for UnitDelay: '<S165>/UD'
    //
    //  Block description for '<S165>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_c = GNC2026W_P.DiscreteDerivative1_ICPrevSca_i;

    // InitializeConditions for UnitDelay: '<S166>/UD'
    //
    //  Block description for '<S166>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_d = GNC2026W_P.DiscreteDerivative2_ICPrevSc_oo;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLACK)' 

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S192>/UD'
    //
    //  Block description for '<S192>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_o = GNC2026W_P.DiscreteDerivative_ICPrevSca_pf;

    // InitializeConditions for UnitDelay: '<S193>/UD'
    //
    //  Block description for '<S193>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_n = GNC2026W_P.DiscreteDerivative1_ICPrevSca_l;

    // InitializeConditions for UnitDelay: '<S194>/UD'
    //
    //  Block description for '<S194>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hu = GNC2026W_P.DiscreteDerivative2_ICPrevSc_on;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLUE)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S169>/UD'
    //
    //  Block description for '<S169>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_l = GNC2026W_P.DiscreteDerivative_ICPrevScal_n;

    // InitializeConditions for UnitDelay: '<S170>/UD'
    //
    //  Block description for '<S170>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_k = GNC2026W_P.DiscreteDerivative1_ICPrevSca_f;

    // InitializeConditions for UnitDelay: '<S171>/UD'
    //
    //  Block description for '<S171>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_h = GNC2026W_P.DiscreteDerivative2_ICPrevSca_g;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLUE)'

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[0] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[0] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[1] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[1] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[2] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[2] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD (ARM)'
    // SystemInitialize for IfAction SubSystem: '<S148>/Simulated Position Controller' 
    // InitializeConditions for UnitDelay: '<S183>/UD'
    //
    //  Block description for '<S183>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE = GNC2026W_P.DiscreteDerivative1_ICPrevSca_j;

    // InitializeConditions for UnitDelay: '<S184>/UD'
    //
    //  Block description for '<S184>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_e = GNC2026W_P.DiscreteDerivative1_ICPrevSca_a;

    // InitializeConditions for UnitDelay: '<S185>/UD'
    //
    //  Block description for '<S185>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_a = GNC2026W_P.DiscreteDerivative1_ICPrevSca_k;

    // End of SystemInitialize for SubSystem: '<S148>/Simulated Position Controller' 
    // End of SystemInitialize for SubSystem: '<S3>/Default PD (ARM)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (RED)'
    // InitializeConditions for UnitDelay: '<S197>/UD'
    //
    //  Block description for '<S197>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_eg = GNC2026W_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for UnitDelay: '<S198>/UD'
    //
    //  Block description for '<S198>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_cd = GNC2026W_P.DiscreteDerivative1_ICPrevScale;

    // InitializeConditions for UnitDelay: '<S199>/UD'
    //
    //  Block description for '<S199>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hd = GNC2026W_P.DiscreteDerivative2_ICPrevScale;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (RED)' 
    // InitializeConditions for UnitDelay: '<S174>/UD'
    //
    //  Block description for '<S174>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_aq = GNC2026W_P.DiscreteDerivative_ICPrevScal_i;

    // InitializeConditions for UnitDelay: '<S175>/UD'
    //
    //  Block description for '<S175>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_p = GNC2026W_P.DiscreteDerivative1_ICPrevSca_e;

    // InitializeConditions for UnitDelay: '<S176>/UD'
    //
    //  Block description for '<S176>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_pr = GNC2026W_P.DiscreteDerivative2_ICPrevSca_o;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Custom Control (RED)'
    // InitializeConditions for Delay: '<S160>/Delay'
    GNC2026W_DW.Delay_DSTATE_l = GNC2026W_P.init_states_RED[2];

    // InitializeConditions for Delay: '<S160>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ba = GNC2026W_P.init_states_RED[2];

    // InitializeConditions for Delay: '<S159>/Delay'
    GNC2026W_DW.Delay_DSTATE_c5 = GNC2026W_P.init_states_RED[2];

    // InitializeConditions for Delay: '<S159>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ag = GNC2026W_P.init_states_RED[2];

    // End of SystemInitialize for SubSystem: '<S3>/Custom Control (RED)'

    // SystemInitialize for Merge: '<S3>/Merge'
    GNC2026W_B.Merge[0] = GNC2026W_P.Merge_InitialOutput_e;
    GNC2026W_B.Merge[1] = GNC2026W_P.Merge_InitialOutput_e;
    GNC2026W_B.Merge[2] = GNC2026W_P.Merge_InitialOutput_e;

    // SystemInitialize for IfAction SubSystem: '<S17>/Change RED Behavior'
    // InitializeConditions for Delay: '<S323>/Delay'
    GNC2026W_DW.Delay_DSTATE = GNC2026W_P.Delay_InitialCondition_p;

    // SystemInitialize for Enabled SubSystem: '<S323>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S328>/In1' incorporates:
    //   Outport: '<S328>/Out1'

    GNC2026W_B.In1 = GNC2026W_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S323>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S323>/Enabled Subsystem1'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for SignalConversion generated from: '<S329>/ThrustPer_Final' incorporates:
      //   Outport: '<S329>/Out1'

      GNC2026W_B.ThrustPer_Final[i] = GNC2026W_P.Out1_Y0_d;
    }

    // End of SystemInitialize for SubSystem: '<S323>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1_pn);

    // End of SystemInitialize for SubSystem: '<S17>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S17>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S299>/Delay'
    GNC2026W_DW.Delay_DSTATE_kz = GNC2026W_P.Delay_InitialCondition_i;

    // SystemInitialize for Enabled SubSystem: '<S299>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S304>/In1' incorporates:
    //   Outport: '<S304>/Out1'

    GNC2026W_B.In1_g2 = GNC2026W_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S299>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S299>/Enabled Subsystem1'
    // SystemInitialize for IfAction SubSystem: '<S17>/Change RED Behavior'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for Outport: '<S296>/RED DC'
      GNC2026W_B.duty_cycles[i] = GNC2026W_P.REDDC_Y0;

      // SystemInitialize for SignalConversion generated from: '<S305>/ThrustPer_Final' incorporates:
      //   Outport: '<S305>/Out1'

      GNC2026W_B.ThrustPer_Final_h5[i] = GNC2026W_P.Out1_Y0_j;
    }

    // End of SystemInitialize for SubSystem: '<S17>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S299>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1);

    // End of SystemInitialize for SubSystem: '<S17>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S17>/Change BLUE Behavior'
    // InitializeConditions for Delay: '<S311>/Delay'
    GNC2026W_DW.Delay_DSTATE_k = GNC2026W_P.Delay_InitialCondition_n;

    // SystemInitialize for Enabled SubSystem: '<S311>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S316>/In1' incorporates:
    //   Outport: '<S316>/Out1'

    GNC2026W_B.In1_g = GNC2026W_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S311>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S311>/Enabled Subsystem1'
    // SystemInitialize for IfAction SubSystem: '<S17>/Change BLACK Behavior'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for Outport: '<S294>/BLACK DC'
      GNC2026W_B.duty_cycles_m[i] = GNC2026W_P.BLACKDC_Y0;

      // SystemInitialize for SignalConversion generated from: '<S317>/ThrustPer_Final' incorporates:
      //   Outport: '<S317>/Out1'

      GNC2026W_B.ThrustPer_Final_h[i] = GNC2026W_P.Out1_Y0_js;
    }

    // End of SystemInitialize for SubSystem: '<S17>/Change BLACK Behavior'
    // End of SystemInitialize for SubSystem: '<S311>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1_p);

    // SystemInitialize for Outport: '<S295>/BLUE DC'
    for (i = 0; i < 8; i++) {
      GNC2026W_B.duty_cycles_j[i] = GNC2026W_P.BLUEDC_Y0;
    }

    // End of SystemInitialize for Outport: '<S295>/BLUE DC'
    // End of SystemInitialize for SubSystem: '<S17>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change BLACK Behavior'
    GNC202_ChangeBLACKBehavior_Init(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior,
      &GNC2026W_P.ChangeBLACKBehavior);

    // End of SystemInitialize for SubSystem: '<S4>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change BLUE Behavior'
    GNC202_ChangeBLACKBehavior_Init(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior,
      &GNC2026W_P.ChangeBLUEBehavior);

    // End of SystemInitialize for SubSystem: '<S4>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change RED Behavior'
    GNC202_ChangeBLACKBehavior_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior,
      &GNC2026W_P.ChangeREDBehavior);

    // End of SystemInitialize for SubSystem: '<S4>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change BLACK Behavior'
    // Start for S-Function (sdspToNetwork): '<S208>/UDP Send1'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend1_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "255.255.255.255", GNC2026W_P.UDPSend1_Port, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S208>/UDP Send1'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change BLUE Behavior'
    // Start for S-Function (sdspToNetwork): '<S209>/UDP Send2'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend2_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "255.255.255.255", GNC2026W_P.UDPSend2_Port, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S209>/UDP Send2'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change RED Behavior'
    // Start for S-Function (sdspToNetwork): '<S210>/UDP Send3'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend3_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "255.255.255.255", GNC2026W_P.UDPSend3_Port, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S210>/UDP Send3'
    // End of SystemInitialize for SubSystem: '<S6>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S7>/Enable Pucks'
    // Start for MATLABSystem: '<S211>/GPIO Write1'
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    GNC2026W_DW.obj_l.matlabCodegenIsDeleted = false;
    GNC2026W_DW.obj_l.gpioPin = GNC2026W_P.GPIOWrite1_gpioPin;
    GNC2026W_DW.obj_l.pinDirection = GNC2026W_P.GPIOWrite1_pinDirection;
    GNC2026W_DW.obj_l.isInitialized = 1;

    //         %% Define input properties
    //  Call C-function implementing device initialization
    export_gpio(GNC2026W_DW.obj_l.gpioPin);
    set_pin_direction(GNC2026W_DW.obj_l.gpioPin, GNC2026W_DW.obj_l.pinDirection);
    GNC2026W_DW.obj_l.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S7>/Enable Pucks'

    // SystemInitialize for IfAction SubSystem: '<S8>/Change ARM Behavior'
    // InitializeConditions for Delay: '<S212>/Delay'
    GNC2026W_DW.Delay_DSTATE_o = GNC2026W_P.Delay_InitialCondition;

    // InitializeConditions for Delay: '<S212>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cg = GNC2026W_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S212>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_h = GNC2026W_P.Delay2_InitialCondition;

    // Start for MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders' 
    GNC2026W_DW.obj_d.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate))) ||
        rtIsInf(GNC2026W_P.baseRate)) {
      sampleTime = GNC2026W_P.baseRate;
    }

    GNC2026W_DW.obj_d.SampleTime = sampleTime;
    GNC2026W_DW.obj_d.isInitialized = 1;

    //         %% Define input properties
    //  Call C-function implementing device initialization
    GNC2026W_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders' 
    // End of SystemInitialize for SubSystem: '<S8>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem'
    // SystemInitialize for IfAction SubSystem: '<S213>/UKF'
    // InitializeConditions for UnitDelay: '<S216>/Unit Delay1'
    for (i = 0; i < 6; i++) {
      GNC2026W_DW.UnitDelay1_DSTATE[i] =
        GNC2026W_P.UnitDelay1_InitialCondition[i];
    }

    // End of InitializeConditions for UnitDelay: '<S216>/Unit Delay1'

    // InitializeConditions for Delay: '<S232>/Delay'
    GNC2026W_DW.Delay_DSTATE_b = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S232>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_a = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for Merge: '<S216>/Merge'
    GNC2026W_B.Merge_b[0] = GNC2026W_P.Merge_InitialOutput;
    GNC2026W_B.Merge_b[1] = GNC2026W_P.Merge_InitialOutput;
    GNC2026W_B.Merge_b[2] = GNC2026W_P.Merge_InitialOutput;

    // End of SystemInitialize for SubSystem: '<S213>/UKF'

    // SystemInitialize for IfAction SubSystem: '<S213>/MEKF'
    // InitializeConditions for Delay: '<S225>/Delay'
    GNC2026W_DW.Delay_DSTATE_j = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S225>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_d = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for MATLAB Function: '<S215>/MEKF'
    GNC2026W_DW.q.re = 1.0;
    GNC2026W_DW.q.im = 0.0;

    // SystemInitialize for IfAction SubSystem: '<S213>/UKF'
    for (i = 0; i < 36; i++) {
      // InitializeConditions for UnitDelay: '<S216>/Unit Delay2'
      GNC2026W_DW.UnitDelay2_DSTATE[i] =
        GNC2026W_P.UnitDelay2_InitialCondition[i];

      // SystemInitialize for MATLAB Function: '<S215>/MEKF'
      GNC2026W_DW.P_h[i] = 0.0;
    }

    // End of SystemInitialize for SubSystem: '<S213>/UKF'
    // End of SystemInitialize for SubSystem: '<S213>/MEKF'

    // SystemInitialize for IfAction SubSystem: '<S213>/EKF'
    // InitializeConditions for Delay: '<S220>/Delay'
    GNC2026W_DW.Delay_DSTATE_c = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S220>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g0 = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for IfAction SubSystem: '<S213>/MEKF'
    for (i = 0; i < 6; i++) {
      // SystemInitialize for MATLAB Function: '<S215>/MEKF'
      GNC2026W_DW.P_h[i + 6 * i] = b[i];
    }

    // End of SystemInitialize for SubSystem: '<S213>/MEKF'

    // SystemInitialize for MATLAB Function: '<S214>/EKF'
    memset(&GNC2026W_DW.P[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      GNC2026W_DW.P[i + 6 * i] = b_0[i];

      // SystemInitialize for Merge: '<S213>/Merge'
      GNC2026W_B.Merge_k[i] = GNC2026W_P.Merge_InitialOutput_b;
    }

    // End of SystemInitialize for MATLAB Function: '<S214>/EKF'
    // End of SystemInitialize for SubSystem: '<S213>/EKF'
    // End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' 
    // Start for S-Function (sdspFromNetwork): '<S236>/Receive PhaseSpace Data'
    sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
    CreateUDPInterface(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U], 0,
                        "0.0.0.0", GNC2026W_P.ReceivePhaseSpaceData_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S236>/Receive PhaseSpace Data' 

    // Start for S-Function (sdspFromNetwork): '<S240>/UDP Receive (RED Clock)'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U], 0,
                        "0.0.0.0", GNC2026W_P.UDPReceiveREDClock_Port, "0.0.0.0",
                        -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S240>/UDP Receive (RED Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLACK Clock)' 
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U], 0,
                        "0.0.0.0", GNC2026W_P.UDPReceiveBLACKClock_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLACK Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLUE Clock)' 
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U], 0,
                        "0.0.0.0", GNC2026W_P.UDPReceiveBLUEClock_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLUE Clock)' 

    // Start for If: '<S244>/This IF block determines whether or not to run the BLACK sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;

    // Start for If: '<S244>/This IF block determines whether or not to run the BLUE sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;

    // Start for If: '<S244>/This IF block determines whether or not to run the RED sim//exp ' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;

    // InitializeConditions for Delay: '<S248>/Delay2'
    GNC2026W_DW.Delay2_DSTATE = GNC2026W_P.Delay2_InitialCondition_e;

    // InitializeConditions for Delay: '<S248>/Delay1'
    GNC2026W_DW.Delay1_DSTATE = GNC2026W_P.Delay1_InitialCondition_m;

    // InitializeConditions for Delay: '<S262>/Delay'
    GNC2026W_DW.Delay_DSTATE_h = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S262>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_f = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S268>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_l = GNC2026W_P.Delay2_InitialCondition_a;

    // InitializeConditions for Delay: '<S268>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_l = GNC2026W_P.Delay1_InitialCondition_i3;

    // InitializeConditions for Delay: '<S278>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_l0 = GNC2026W_P.Delay2_InitialCondition_m;

    // InitializeConditions for Delay: '<S278>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ld = GNC2026W_P.Delay1_InitialCondition_l;

    // InitializeConditions for Delay: '<S251>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[0] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S250>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[0] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S270>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[0] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S269>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[0] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S280>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[0] = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S279>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[0] = GNC2026W_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S251>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[1] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S250>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[1] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S270>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[1] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S269>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[1] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S280>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[1] = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S279>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[1] = GNC2026W_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S251>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[2] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S250>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[2] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S270>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[2] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S269>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[2] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S280>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[2] = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S279>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[2] = GNC2026W_P.Delay1_InitialCondition_c;

    // SystemInitialize for Enabled SubSystem: '<S248>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S253>/y2-y1' incorporates:
    //   Outport: '<S253>/dy(t)//dt'

    GNC2026W_B.y2y1_ob = GNC2026W_P.dytdt_Y0;

    // End of SystemInitialize for SubSystem: '<S248>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S251>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy_p,
      &GNC2026W_DW.EnabledSubsystem_g, &GNC2026W_P.EnabledSubsystem_g);

    // End of SystemInitialize for SubSystem: '<S251>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S250>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_g,
      &GNC2026W_DW.EnabledSubsystem, &GNC2026W_P.EnabledSubsystem);

    // End of SystemInitialize for SubSystem: '<S250>/Enabled Subsystem'

    // SystemInitialize for MATLAB Function: '<S249>/CV Noise'
    memcpy(&GNC2026W_DW.state_j[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.method = 7U;
    GNC2026W_DW.state = 1144108930U;
    GNC2026W_DW.state_g[0] = 362436069U;
    GNC2026W_DW.state_g[1] = 521288629U;

    // SystemInitialize for Enabled SubSystem: '<S268>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S272>/y2-y1' incorporates:
    //   Outport: '<S272>/dy(t)//dt'

    GNC2026W_B.y2y1_o = GNC2026W_P.dytdt_Y0_j;

    // End of SystemInitialize for SubSystem: '<S268>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S270>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy_c,
      &GNC2026W_DW.EnabledSubsystem_d, &GNC2026W_P.EnabledSubsystem_d);

    // End of SystemInitialize for SubSystem: '<S270>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S269>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_d,
      &GNC2026W_DW.EnabledSubsystem_l, &GNC2026W_P.EnabledSubsystem_l);

    // End of SystemInitialize for SubSystem: '<S269>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S278>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S282>/y2-y1' incorporates:
    //   Outport: '<S282>/dy(t)//dt'

    GNC2026W_B.y2y1 = GNC2026W_P.dytdt_Y0_d;

    // End of SystemInitialize for SubSystem: '<S278>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S280>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy,
      &GNC2026W_DW.EnabledSubsystem_l1, &GNC2026W_P.EnabledSubsystem_l1);

    // End of SystemInitialize for SubSystem: '<S280>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S279>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_h,
      &GNC2026W_DW.EnabledSubsystem_k, &GNC2026W_P.EnabledSubsystem_k);

    // End of SystemInitialize for SubSystem: '<S279>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S240>/Enabled Subsystem2'
    // SystemInitialize for SignalConversion generated from: '<S241>/In1' incorporates:
    //   Outport: '<S241>/Universal Time'

    GNC2026W_B.In1_g20 = GNC2026W_P.UniversalTime_Y0;

    // End of SystemInitialize for SubSystem: '<S240>/Enabled Subsystem2'

    // SystemInitialize for IfAction SubSystem: '<S244>/Change BLACK Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLACKBehavior_e, &GNC2026W_P.ChangeBLACKBehavior_e);

    // End of SystemInitialize for SubSystem: '<S244>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S244>/Change BLUE Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLUEBehavior_f, &GNC2026W_P.ChangeBLUEBehavior_f);

    // End of SystemInitialize for SubSystem: '<S244>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S244>/Change RED Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_d,
      &GNC2026W_P.ChangeREDBehavior_d);

    // End of SystemInitialize for SubSystem: '<S244>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S10>/Use Hardware to Obtain States' 

    // SystemInitialize for IfAction SubSystem: '<S11>/Subsystem'
    // Start for MATLABSystem: '<S288>/WhoAmI'
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    GNC2026W_DW.obj_dk.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate))) ||
        rtIsInf(GNC2026W_P.baseRate)) {
      sampleTime_0 = GNC2026W_P.baseRate;
    }

    GNC2026W_DW.obj_dk.SampleTime = sampleTime_0;
    GNC2026W_DW.obj_dk.isInitialized = 1;

    //         %% Define output properties
    //  Call C-function implementing device initialization
    GNC2026W_DW.obj_dk.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S288>/WhoAmI'
    // End of SystemInitialize for SubSystem: '<S11>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S12>/CV UDP'
    // Start for S-Function (sdspFromNetwork): '<S289>/UDP Receive'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U], 0, "0.0.0.0",
                        GNC2026W_P.UDPReceive_Port, "0.0.0.0", -1, 8192, 4, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S289>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S12>/CV UDP'

    // SystemInitialize for IfAction SubSystem: '<S13>/Subsystem'
    // Start for S-Function (sdspFromNetwork): '<S291>/UDP Receive'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceive_NetworkLib[0U], 0, "0.0.0.0",
                        GNC2026W_P.UDPReceive_Port_a, "0.0.0.0", -1, 8192, 4, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S291>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S13>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S14>/Change ARM Behavior'
    // Start for MATLABSystem: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    GNC2026W_DW.obj.matlabCodegenIsDeleted = false;
    GNC2026W_DW.obj.POSITION_P_GAIN = GNC2026W_P.ControlDynamixelActuatorsineith;
    GNC2026W_DW.obj.POSITION_I_GAIN = GNC2026W_P.ControlDynamixelActuatorsinei_b;
    GNC2026W_DW.obj.POSITION_D_GAIN = GNC2026W_P.ControlDynamixelActuatorsinei_h;
    GNC2026W_DW.obj.MAX_POSITION = GNC2026W_P.ControlDynamixelActuatorsinei_j;
    GNC2026W_DW.obj.MIN_POSITION = GNC2026W_P.ControlDynamixelActuatorsinei_m;
    GNC2026W_DW.obj.MOVE_TIME = GNC2026W_P.ControlDynamixelActuatorsine_hy;
    GNC2026W_DW.obj.CURRENT_LIMIT = GNC2026W_P.ControlDynamixelActuatorsinei_i;
    GNC2026W_DW.obj.SPEED_P_GAIN = GNC2026W_P.ControlDynamixelActuatorsinei_g;
    GNC2026W_DW.obj.SPEED_I_GAIN = GNC2026W_P.ControlDynamixelActuatorsine_g3;
    GNC2026W_DW.obj.VELOCITY_LIMIT = GNC2026W_P.ControlDynamixelActuatorsine_bf;
    GNC2026W_DW.obj.ACCELERATION_TIME =
      GNC2026W_P.ControlDynamixelActuatorsinei_l;
    if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate))) ||
        rtIsInf(GNC2026W_P.baseRate)) {
      sampleTime_1 = GNC2026W_P.baseRate;
    }

    GNC2026W_DW.obj.SampleTime = sampleTime_1;
    GNC2026W_DW.obj.isInitialized = 1;

    //         %% Define input properties
    initialize_dynamixel();
    GNC2026W_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
    // End of SystemInitialize for SubSystem: '<S14>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S15>/Subsystem'
    // Start for S-Function (sdspToNetwork): '<S293>/UDP Send'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend_NetworkLib_m[0U], 1, "0.0.0.0", -1,
                        "192.168.1.115", GNC2026W_P.UDPSend_Port, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S293>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S15>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S18>/Change BLACK Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLACKBehavior_i, &GNC2026W_P.ChangeBLACKBehavior_i);

    // End of SystemInitialize for SubSystem: '<S18>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S18>/Change BLUE Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLUEBehavior_e, &GNC2026W_P.ChangeBLUEBehavior_e);

    // End of SystemInitialize for SubSystem: '<S18>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S18>/Change RED Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_h,
      &GNC2026W_P.ChangeREDBehavior_h);

    // End of SystemInitialize for SubSystem: '<S18>/Change RED Behavior'

    // Start for MATLABSystem: '<Root>/Dropped Frames'
    GNC2026W_DW.state_b = 7U;
    memcpy(&GNC2026W_DW.state_d[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.state_jw[0] = 362436069U;
    GNC2026W_DW.state_jw[1] = 521288629U;
    GNC2026W_DW.method_e = 1144108930U;
    GNC2026W_SystemCore_setup(&GNC2026W_DW.obj_fv, &seed);

    // Start for MATLABSystem: '<S204>/MATLAB System'
    //  Constructor
    //  Support name-value pair arguments when constructing the object.
    GNC2026W_DW.obj_f.matlabCodegenIsDeleted = false;
    GNC2026W_DW.obj_f.isInitialized = 1;

    //         %% Define input properties
    //  Call C-function implementing device initialization
    createFile();
    GNC2026W_DW.obj_f.isSetupComplete = true;
  }
}

// Model terminate function
void GNC2026W_terminate(void)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S17>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S17>/UDP Send'

  // Terminate for IfAction SubSystem: '<S4>/Change BLACK Behavior'
  GNC202_ChangeBLACKBehavior_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior);

  // End of Terminate for SubSystem: '<S4>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S4>/Change BLUE Behavior'
  GNC202_ChangeBLACKBehavior_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior);

  // End of Terminate for SubSystem: '<S4>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S4>/Change RED Behavior'
  GNC202_ChangeBLACKBehavior_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior);

  // End of Terminate for SubSystem: '<S4>/Change RED Behavior'

  // Terminate for MATLABSystem: '<S204>/MATLAB System'
  if (!GNC2026W_DW.obj_f.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S204>/MATLAB System'

  // Terminate for IfAction SubSystem: '<S6>/Change BLACK Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S208>/UDP Send1'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend1_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S208>/UDP Send1'
  // End of Terminate for SubSystem: '<S6>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change BLUE Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S209>/UDP Send2'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend2_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S209>/UDP Send2'
  // End of Terminate for SubSystem: '<S6>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change RED Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S210>/UDP Send3'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend3_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S210>/UDP Send3'
  // End of Terminate for SubSystem: '<S6>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S7>/Enable Pucks'
  // Terminate for MATLABSystem: '<S211>/GPIO Write1'
  if (!GNC2026W_DW.obj_l.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((GNC2026W_DW.obj_l.isInitialized == 1) &&
        GNC2026W_DW.obj_l.isSetupComplete) {
      //  Call C-function implementing device termination
      change_gpio_value(GNC2026W_DW.obj_l.gpioPin, 0.0);
      unexport_gpio(GNC2026W_DW.obj_l.gpioPin);
    }
  }

  // End of Terminate for MATLABSystem: '<S211>/GPIO Write1'
  // End of Terminate for SubSystem: '<S7>/Enable Pucks'

  // Terminate for IfAction SubSystem: '<S8>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders' 
  if (!GNC2026W_DW.obj_d.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S212>/Read Joint Positions using  Dynamixel Encoders' 
  // End of Terminate for SubSystem: '<S8>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S10>/Use Hardware to Obtain States'
  // Terminate for S-Function (sdspFromNetwork): '<S236>/Receive PhaseSpace Data' 
  sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  LibTerminate(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S236>/Receive PhaseSpace Data' 

  // Terminate for S-Function (sdspFromNetwork): '<S240>/UDP Receive (RED Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S240>/UDP Receive (RED Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLACK Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLACK Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLUE Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S240>/UDP Receive (BLUE Clock)' 

  // Terminate for IfAction SubSystem: '<S244>/Change BLACK Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior_e);

  // End of Terminate for SubSystem: '<S244>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S244>/Change BLUE Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior_f);

  // End of Terminate for SubSystem: '<S244>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S244>/Change RED Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_d);

  // End of Terminate for SubSystem: '<S244>/Change RED Behavior'
  // End of Terminate for SubSystem: '<S10>/Use Hardware to Obtain States'

  // Terminate for IfAction SubSystem: '<S11>/Subsystem'
  // Terminate for MATLABSystem: '<S288>/WhoAmI'
  if (!GNC2026W_DW.obj_dk.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_dk.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S288>/WhoAmI'
  // End of Terminate for SubSystem: '<S11>/Subsystem'

  // Terminate for IfAction SubSystem: '<S12>/CV UDP'
  // Terminate for S-Function (sdspFromNetwork): '<S289>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S289>/UDP Receive'
  // End of Terminate for SubSystem: '<S12>/CV UDP'

  // Terminate for IfAction SubSystem: '<S13>/Subsystem'
  // Terminate for S-Function (sdspFromNetwork): '<S291>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S291>/UDP Receive'
  // End of Terminate for SubSystem: '<S13>/Subsystem'

  // Terminate for IfAction SubSystem: '<S14>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  if (!GNC2026W_DW.obj.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj.matlabCodegenIsDeleted = true;
    if ((GNC2026W_DW.obj.isInitialized == 1) && GNC2026W_DW.obj.isSetupComplete)
    {
      terminate_dynamixel();
    }
  }

  // End of Terminate for MATLABSystem: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  // End of Terminate for SubSystem: '<S14>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S15>/Subsystem'
  // Terminate for S-Function (sdspToNetwork): '<S293>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib_m[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S293>/UDP Send'
  // End of Terminate for SubSystem: '<S15>/Subsystem'

  // Terminate for IfAction SubSystem: '<S18>/Change BLACK Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior_i);

  // End of Terminate for SubSystem: '<S18>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S18>/Change BLUE Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior_e);

  // End of Terminate for SubSystem: '<S18>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S18>/Change RED Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_h);

  // End of Terminate for SubSystem: '<S18>/Change RED Behavior'
}

time_T** RT_MODEL_GNC2026W_T::getTPtrPtr()
{
  return &(Timing.t);
}

boolean_T RT_MODEL_GNC2026W_T::getStopRequested() const
{
  return (Timing.stopRequestedFlag);
}

void RT_MODEL_GNC2026W_T::setStopRequested(boolean_T aStopRequested)
{
  (Timing.stopRequestedFlag = aStopRequested);
}

const char_T* RT_MODEL_GNC2026W_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_GNC2026W_T::setErrorStatus(const char_T* const aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

time_T* RT_MODEL_GNC2026W_T::getTPtr() const
{
  return (Timing.t);
}

void RT_MODEL_GNC2026W_T::setTPtr(time_T* aTPtr)
{
  (Timing.t = aTPtr);
}

boolean_T* RT_MODEL_GNC2026W_T::getStopRequestedPtr()
{
  return (&(Timing.stopRequestedFlag));
}

const char_T** RT_MODEL_GNC2026W_T::getErrorStatusPtr()
{
  return &errorStatus;
}

boolean_T RT_MODEL_GNC2026W_T::isMajorTimeStep() const
{
  return ((Timing.simTimeStep) == MAJOR_TIME_STEP);
}

boolean_T RT_MODEL_GNC2026W_T::isMinorTimeStep() const
{
  return ((Timing.simTimeStep) == MINOR_TIME_STEP);
}

//
// File trailer for generated code.
//
// [EOF]
//
