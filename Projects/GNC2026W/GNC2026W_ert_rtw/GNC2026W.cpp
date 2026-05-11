//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.cpp
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.2484
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon May 11 15:28:53 2026
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
  // DataStoreWrite: '<S20>/Data Store Write2' incorporates:
  //   Constant: '<S20>/Constant1'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant1_Value;

  // DataStoreWrite: '<S20>/Data Store Write3' incorporates:
  //   Constant: '<S20>/Constant2'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant2_Value;

  // DataStoreWrite: '<S20>/Data Store Write7' incorporates:
  //   Constant: '<S20>/Constant3'

  *rtd_RED_Path_Planner_Selection = localP->Constant3_Value;

  // DataStoreWrite: '<S20>/Data Store Write8' incorporates:
  //   Constant: '<S20>/Constant4'

  *rtd_ARM_Path_Planner_Selection = localP->Constant4_Value;

  // DataStoreWrite: '<S20>/Data Store Write' incorporates:
  //   Constant: '<S20>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S20>/Data Store Write6' incorporates:
  //   Constant: '<S20>/Constant6'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant6_Value;

  // DataStoreWrite: '<S20>/Data Store Write5' incorporates:
  //   Constant: '<S20>/Constant7'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant7_Value;

  // DataStoreWrite: '<S20>/Data Store Write9' incorporates:
  //   Constant: '<S20>/Constant8'

  *rtd_ARM_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S20>/String Constant' incorporates:
  //   DataStoreWrite: '<S20>/Data Store Write1'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // StringConstant: '<S20>/String Constant1' incorporates:
  //   DataStoreWrite: '<S20>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S20>/String Constant2' incorporates:
  //   DataStoreWrite: '<S20>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S20>/Data Store Write4' incorporates:
  //   Constant: '<S20>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for action system:
//    '<S58>/Hold position till the filter converges'
//    '<S58>/Initiate filter'
//    '<S58>/Start moving after convergence'
//    '<S58>/Reset counter and hold position'
//    '<S58>/Hold position if frame drops before convergence'
//    '<S58>/Keep moving if frame drops after convergence'
//    '<S58>/Hold position for berthing'
//
void Holdpositiontillthefilterconver(real_T *rtd_RED_Control_Law_Enabler, real_T
  *rtd_RED_Path_Planner_Selection, P_Holdpositiontillthefilterco_T *localP)
{
  // DataStoreWrite: '<S89>/Data Store Write3' incorporates:
  //   Constant: '<S89>/Constant'

  *rtd_RED_Control_Law_Enabler = localP->Constant_Value;

  // DataStoreWrite: '<S89>/Data Store Write24' incorporates:
  //   Constant: '<S89>/Constant1'

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
  // DataStoreWrite: '<S24>/Data Store Write24' incorporates:
  //   Constant: '<S24>/Constant11'

  *rtd_RED_Path_Planner_Selection = localP->Constant11_Value;

  // DataStoreWrite: '<S24>/Data Store Write3' incorporates:
  //   Constant: '<S24>/Constant12'

  *rtd_ARM_Path_Planner_Selection = localP->Constant12_Value;

  // DataStoreWrite: '<S24>/Data Store Write23' incorporates:
  //   Constant: '<S24>/Constant14'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant14_Value;

  // DataStoreWrite: '<S24>/Data Store Write22' incorporates:
  //   Constant: '<S24>/Constant15'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant15_Value;

  // DataStoreWrite: '<S24>/Data Store Write4' incorporates:
  //   Constant: '<S24>/Constant18'

  *rtd_ARM_Control_Law_Enabler = localP->Constant18_Value;

  // DataStoreWrite: '<S24>/Data Store Write5' incorporates:
  //   Constant: '<S24>/Constant4'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant4_Value;

  // DataStoreWrite: '<S24>/Data Store Write8' incorporates:
  //   Constant: '<S24>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S24>/Data Store Write7' incorporates:
  //   Constant: '<S24>/Constant6'

  *rtd_Float_State = localP->Constant6_Value;

  // DataStoreWrite: '<S24>/Data Store Write16' incorporates:
  //   Constant: '<S24>/Constant8'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S24>/String Constant1' incorporates:
  //   DataStoreWrite: '<S24>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S24>/String Constant2' incorporates:
  //   DataStoreWrite: '<S24>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S24>/Data Store Write13' incorporates:
  //   Constant: '<S129>/Constant1'
  //   Constant: '<S129>/Constant2'
  //   Constant: '<S129>/Constant3'

  rtd_ARM_Desired_States[0] = localP->Constant3_Value;
  rtd_ARM_Desired_States[1] = localP->Constant1_Value;
  rtd_ARM_Desired_States[2] = localP->Constant2_Value;

  // StringConstant: '<S24>/String Constant' incorporates:
  //   DataStoreWrite: '<S24>/Data Store Write2'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // DataStoreWrite: '<S24>/Data Store Write18' incorporates:
  //   Constant: '<S131>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[0] = GNC2026W_P.home_states_BLUE[0];

  // DataStoreWrite: '<S24>/Data Store Write6' incorporates:
  //   Constant: '<S130>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[0] = GNC2026W_P.home_states_BLACK[0];

  // DataStoreWrite: '<S24>/Data Store Write9' incorporates:
  //   Constant: '<S132>/Constant2'

  rtd_RED_Desired_States[0] = GNC2026W_P.home_states_RED[0];

  // DataStoreWrite: '<S24>/Data Store Write18' incorporates:
  //   Constant: '<S131>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[1] = GNC2026W_P.home_states_BLUE[1];

  // DataStoreWrite: '<S24>/Data Store Write6' incorporates:
  //   Constant: '<S130>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[1] = GNC2026W_P.home_states_BLACK[1];

  // DataStoreWrite: '<S24>/Data Store Write9' incorporates:
  //   Constant: '<S132>/Constant2'

  rtd_RED_Desired_States[1] = GNC2026W_P.home_states_RED[1];

  // DataStoreWrite: '<S24>/Data Store Write18' incorporates:
  //   Constant: '<S131>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[2] = GNC2026W_P.home_states_BLUE[2];

  // DataStoreWrite: '<S24>/Data Store Write6' incorporates:
  //   Constant: '<S130>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[2] = GNC2026W_P.home_states_BLACK[2];

  // DataStoreWrite: '<S24>/Data Store Write9' incorporates:
  //   Constant: '<S132>/Constant2'

  rtd_RED_Desired_States[2] = GNC2026W_P.home_states_RED[2];
}

//
// Output and update for atomic system:
//    '<S154>/MATLAB Function'
//    '<S237>/MATLAB Function'
//    '<S231>/MATLAB Function'
//    '<S278>/MATLAB Function'
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
//    '<S207>/MATLAB Function'
//    '<S184>/MATLAB Function'
//    '<S197>/MATLAB Function'
//    '<S202>/MATLAB Function'
//    '<S179>/MATLAB Function'
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
  // SignalConversion generated from: '<S172>/u' incorporates:
  //   Constant: '<S172>/Zero'

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
  // SignalConversion generated from: '<S170>/Out1' incorporates:
  //   Constant: '<S170>/Zero'

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

  // Start for S-Function (sdspToNetwork): '<S212>/UDP Send'
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

  // End of Start for S-Function (sdspToNetwork): '<S212>/UDP Send'
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

  // Update for S-Function (sdspToNetwork): '<S212>/UDP Send' incorporates:
  //   Constant: '<S212>/Constant1'

  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSend_NetworkLib[0U], &localP->Constant1_Value,
                    1);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S212>/UDP Send'
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

  // Terminate for S-Function (sdspToNetwork): '<S212>/UDP Send'
  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S212>/UDP Send'
}

//
// Output and update for action system:
//    '<S244>/Experimental VIS States'
//    '<S236>/Experimental VIS States'
//
void GNC2026W_ExperimentalVISStates(real_T rty_Out1[3], const real_T
  rtd_BLACK_CV_States[3], const real_T rtd_VIS_LAR_States[3], const real_T
  *rtd_isSim)
{
  // If: '<S246>/If' incorporates:
  //   DataStoreRead: '<S246>/Data Store Read1'

  if (*rtd_isSim == 1.0) {
    // Outputs for IfAction SubSystem: '<S246>/If Action Subsystem' incorporates:
    //   ActionPort: '<S247>/Action Port'

    // Outputs for IfAction SubSystem: '<S246>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S248>/Action Port'

    // DataStoreRead: '<S247>/Data Store Read1' incorporates:
    //   DataStoreRead: '<S248>/Data Store Read'

    rty_Out1[0] = rtd_BLACK_CV_States[0];
    rty_Out1[1] = rtd_BLACK_CV_States[1];
    rty_Out1[2] = rtd_BLACK_CV_States[2];

    // End of Outputs for SubSystem: '<S246>/If Action Subsystem1'
    // End of Outputs for SubSystem: '<S246>/If Action Subsystem'
  } else {
    // Outputs for IfAction SubSystem: '<S246>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S248>/Action Port'

    // Outputs for IfAction SubSystem: '<S246>/If Action Subsystem' incorporates:
    //   ActionPort: '<S247>/Action Port'

    // DataStoreRead: '<S248>/Data Store Read' incorporates:
    //   DataStoreRead: '<S247>/Data Store Read1'

    rty_Out1[0] = rtd_VIS_LAR_States[0];
    rty_Out1[1] = rtd_VIS_LAR_States[1];
    rty_Out1[2] = rtd_VIS_LAR_States[2];

    // End of Outputs for SubSystem: '<S246>/If Action Subsystem'
    // End of Outputs for SubSystem: '<S246>/If Action Subsystem1'
  }

  // End of If: '<S246>/If'
}

//
// Output and update for atomic system:
//    '<S226>/Camera to Inertial Frame'
//    '<S225>/Camera to Inertial Frame'
//
void GNC2026W_CameratoInertialFrame(const real_T rtu_r_C_I[2], real_T
  rtu_r_C_I_a, const real_T rtu_r_REL_C[3], real_T rty_r_T_I[3])
{
  real_T th_T;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;

  // SignalConversion generated from: '<S233>/ SFunction '
  th_T = rtu_r_C_I_a + rtu_r_REL_C[2];
  tmp = sin(rtu_r_C_I_a);
  tmp_0 = cos(rtu_r_C_I_a);
  tmp_1 = sin(th_T);
  tmp_2 = cos(th_T);

  // SignalConversion generated from: '<S233>/ SFunction '
  rty_r_T_I[0] = (((rtu_r_REL_C[0] + 0.125) * tmp_0 + (rtu_r_REL_C[1] + 0.03) *
                   -tmp) + rtu_r_C_I[0]) - (tmp_2 * 0.145 + -tmp_1 * 0.0);
  rty_r_T_I[1] = (((rtu_r_REL_C[0] + 0.125) * tmp + (rtu_r_REL_C[1] + 0.03) *
                   tmp_0) + rtu_r_C_I[1]) - (tmp_1 * 0.145 + tmp_2 * 0.0);
  rty_r_T_I[2] = th_T;
}

//
// System initialize for action system:
//    '<S259>/Change BLACK Behavior'
//    '<S259>/Change BLUE Behavior'
//    '<S259>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_j_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_l_T *localDW, P_ChangeBLACKBehavior_GNC20_p_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S260>/UDP Send (GUI)'
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

  // End of Start for S-Function (sdspToNetwork): '<S260>/UDP Send (GUI)'
}

//
// Update for action system:
//    '<S259>/Change BLACK Behavior'
//    '<S259>/Change BLUE Behavior'
//    '<S259>/Change RED Behavior'
//
void GN_ChangeBLACKBehavior_p_Update(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_GNC2_l_T *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S260>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendGUI_NetworkLib[0U], &rtu_UniversalTime, 1);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S260>/UDP Send (GUI)'
}

//
// Termination for action system:
//    '<S259>/Change BLACK Behavior'
//    '<S259>/Change BLUE Behavior'
//    '<S259>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_j_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_l_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S260>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendGUI_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSendGUI_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendGUI_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S260>/UDP Send (GUI)'
}

//
// Output and update for atomic system:
//    '<S263>/MATLAB Function'
//    '<S284>/MATLAB Function'
//    '<S294>/MATLAB Function'
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
//    '<S265>/Enabled Subsystem'
//    '<S285>/Enabled Subsystem'
//    '<S295>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026W_T *localDW, P_EnabledSubsystem_GNC2026W_T *localP)
{
  // InitializeConditions for Delay: '<S280>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S280>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S280>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S280>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S280>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S280>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S265>/Enabled Subsystem'
//    '<S285>/Enabled Subsystem'
//    '<S295>/Enabled Subsystem'
//
void GNC202_EnabledSubsystem_Disable(DW_EnabledSubsystem_GNC2026W_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S265>/Enabled Subsystem'
//    '<S285>/Enabled Subsystem'
//    '<S295>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem(const boolean_T rtu_Enable[3], const real_T
  rtu_y[3], real_T rtu_dt, real_T rty_dydt[3], B_EnabledSubsystem_GNC2026W_T
  *localB, DW_EnabledSubsystem_GNC2026W_T *localDW,
  P_EnabledSubsystem_GNC2026W_T *localP)
{
  real_T Delay;
  real_T ema;
  real_T x;

  // Outputs for Enabled SubSystem: '<S265>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S280>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    GNC202_EnabledSubsystem_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Constant: '<S280>/Constant2'

    x = exp(-rtu_dt / localP->Constant2_Value);

    // Delay: '<S280>/Delay'
    Delay = localDW->Delay_DSTATE[0];
    localB->Delay[0] = Delay;

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Delay: '<S280>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[0];
    localB->ema[0] = ema;

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Delay: '<S280>/Delay'

    rty_dydt[0] = (ema - Delay) / rtu_dt;

    // Delay: '<S280>/Delay'
    Delay = localDW->Delay_DSTATE[1];
    localB->Delay[1] = Delay;

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Delay: '<S280>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[1];
    localB->ema[1] = ema;

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Delay: '<S280>/Delay'

    rty_dydt[1] = (ema - Delay) / rtu_dt;

    // Delay: '<S280>/Delay'
    Delay = localDW->Delay_DSTATE[2];
    localB->Delay[2] = Delay;

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Delay: '<S280>/Delay'

    ema = (1.0 - (1.0 - x)) * Delay + (1.0 - x) * rtu_y[2];
    localB->ema[2] = ema;

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Delay: '<S280>/Delay'

    rty_dydt[2] = (ema - Delay) / rtu_dt;
  }

  // End of Outputs for SubSystem: '<S265>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S265>/Enabled Subsystem'
//    '<S285>/Enabled Subsystem'
//    '<S295>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_Update(B_EnabledSubsystem_GNC2026W_T *localB,
  DW_EnabledSubsystem_GNC2026W_T *localDW)
{
  // Update for Enabled SubSystem: '<S265>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S280>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S280>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S265>/Enabled Subsystem'
}

//
// System initialize for enable system:
//    '<S266>/Enabled Subsystem'
//    '<S286>/Enabled Subsystem'
//    '<S296>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_f_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_c_T *localDW, P_EnabledSubsystem_GNC2026W_c_T
  *localP)
{
  // InitializeConditions for Delay: '<S282>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S282>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S282>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S282>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S282>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S282>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S266>/Enabled Subsystem'
//    '<S286>/Enabled Subsystem'
//    '<S296>/Enabled Subsystem'
//
void GNC2_EnabledSubsystem_p_Disable(DW_EnabledSubsystem_GNC2026_c_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S266>/Enabled Subsystem'
//    '<S286>/Enabled Subsystem'
//    '<S296>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_g(const boolean_T rtu_Enable[3], real_T rtu_y,
  real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_GNC2026W_h_T *localB, DW_EnabledSubsystem_GNC2026_c_T
  *localDW, P_EnabledSubsystem_GNC2026W_c_T *localP)
{
  real_T x;

  // Outputs for Enabled SubSystem: '<S266>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S282>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    GNC2_EnabledSubsystem_p_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // Delay: '<S282>/Delay'
    localB->Delay[0] = localDW->Delay_DSTATE[0];
    localB->Delay[1] = localDW->Delay_DSTATE[1];
    localB->Delay[2] = localDW->Delay_DSTATE[2];

    // MATLAB Function: '<S282>/MATLAB Function' incorporates:
    //   Constant: '<S282>/Constant2'
    //   Delay: '<S282>/Delay'
    //   SignalConversion generated from: '<S283>/ SFunction '

    x = exp(-rtu_dt / localP->Constant2_Value);
    localB->ema[0] = (1.0 - (1.0 - x)) * localB->Delay[0] + (1.0 - x) * rtu_y;
    localB->ema[1] = (1.0 - (1.0 - x)) * localB->Delay[1] + (1.0 - x) * rtu_y_c;
    localB->ema[2] = (1.0 - (1.0 - x)) * localB->Delay[2] + (1.0 - x) * rtu_y_k;
    rty_dydt[0] = (localB->ema[0] - localB->Delay[0]) / rtu_dt;
    rty_dydt[1] = (localB->ema[1] - localB->Delay[1]) / rtu_dt;
    rty_dydt[2] = (localB->ema[2] - localB->Delay[2]) / rtu_dt;
  }

  // End of Outputs for SubSystem: '<S266>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S266>/Enabled Subsystem'
//    '<S286>/Enabled Subsystem'
//    '<S296>/Enabled Subsystem'
//
void GNC20_EnabledSubsystem_a_Update(B_EnabledSubsystem_GNC2026W_h_T *localB,
  DW_EnabledSubsystem_GNC2026_c_T *localDW)
{
  // Update for Enabled SubSystem: '<S266>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S282>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S282>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S266>/Enabled Subsystem'
}

//
// Output and update for atomic system:
//    '<S315>/MATLAB Function'
//    '<S314>/MATLAB Function'
//
void GNC2026W_MATLABFunction_e(real_T rtu_L_act, real_T rtu_L0, real_T
  rtu_Univ_Time, real_T *rty_y, DW_MATLABFunction_GNC2026W_l_T *localDW)
{
  if ((fabs(rtu_L_act - rtu_L0) <= 0.03) && (rtu_Univ_Time > 1.0)) {
    localDW->set = 1.0;
  }

  *rty_y = localDW->set;
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

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S325>/Pseudoinverse1'
}

static real_T GNC2026W_xnrm2(int32_T n, const real_T x[24], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
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

  y = scale * sqrt(y);

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  if (rtIsNaN(y)) {
    k = ix0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= kend) {
        if (rtIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static real_T GNC2026W_xdotc(int32_T n, const real_T x[24], int32_T ix0, const
  real_T y[24], int32_T iy0)
{
  real_T d;
  int32_T b;
  d = 0.0;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  b = static_cast<uint8_T>(n);
  for (int32_T k = 0; k < b; k++) {
    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }

  return d;
}

static void GNC2026W_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[24],
  int32_T iy0)
{
  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += y[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S325>/Pseudoinverse1'
}

static real_T GNC2026W_xdotc_o(const real_T x[9], const real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  return y[iy0 - 1] * x[1] + x[2] * y[iy0];
}

static void GNC2026W_xaxpy_gop(real_T a, real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  if (!(a == 0.0)) {
    y[iy0 - 1] += a * y[1];
    y[iy0] += a * y[2];
  }

  // End of Start for MATLABSystem: '<S325>/Pseudoinverse1'
}

static real_T GNC2026W_xnrm2_p(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  for (k = ix0; k <= ix0 + 1; k++) {
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

  y = scale * sqrt(y);

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  if (rtIsNaN(y)) {
    k = ix0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= ix0 + 1) {
        if (rtIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static void GNC2026W_xaxpy_g(int32_T n, real_T a, const real_T x[24], int32_T
  ix0, real_T y[8], int32_T iy0)
{
  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S325>/Pseudoinverse1'
}

static void GNC2026W_xaxpy_go(int32_T n, real_T a, const real_T x[8], int32_T
  ix0, real_T y[24], int32_T iy0)
{
  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S325>/Pseudoinverse1'
}

static void GNC2026W_xzlascl_i(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S325>/Pseudoinverse1'
}

static void GNC2026W_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b, real_T *
  c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  roe = b;
  absa = fabs(a);
  absb = fabs(b);
  if (absa > absb) {
    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    *b_a = sqrt(ads * ads + bds * bds) * scale;
    if (roe < 0.0) {
      *b_a = -*b_a;
    }

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    *c = a / *b_a;
    *s = b / *b_a;
    if (absa > absb) {
      *b_b = *s;
    } else if (*c != 0.0) {
      // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    temp_tmp_tmp = (iy0 + k) - 1;
    temp_tmp = x[temp_tmp_tmp];

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    temp_tmp_tmp_0 = (ix0 + k) - 1;
    temp_tmp_0 = x[temp_tmp_tmp_0];

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    x[temp_tmp_tmp] = temp_tmp * c - temp_tmp_0 * s;
    x[temp_tmp_tmp_0] = temp_tmp_0 * c + temp_tmp * s;
  }
}

static void GNC2026W_xswap_dj(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    temp_tmp = (ix0 + k) - 1;
    temp = x[temp_tmp];

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  anrm = GNC2026W_xzlangeM(A);
  cscale = anrm;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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
    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    qp1 = i + 2;
    qq_tmp_tmp = i << 3;

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    colqp1 = qq_tmp_tmp + i;
    qq = colqp1 + 1;
    apply_transform = false;

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
    nrm = GNC2026W_xnrm2(8 - i, A_0, colqp1 + 1);
    if (nrm > 0.0) {
      apply_transform = true;

      // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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
      // Start for MATLABSystem: '<S325>/Pseudoinverse1'
      qjj = (((qq - 1) << 3) + i) + 1;
      if (apply_transform) {
        // Start for MATLABSystem: '<S325>/Pseudoinverse1'
        GNC2026W_xaxpy(8 - i, -(GNC2026W_xdotc(8 - i, A_0, colqp1 + 1, A_0, qjj)
          / A_0[colqp1]), colqp1 + 1, A_0, qjj);
      }

      e[qq - 1] = A_0[qjj - 1];
    }

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  i = 2;
  e[1] = A_0[17];
  e[2] = 0.0;

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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
      // Start for MATLABSystem: '<S325>/Pseudoinverse1'
      nrm = fabs(r);
      r /= nrm;
      s_0[qp1] = nrm;

      // Start for MATLABSystem: '<S325>/Pseudoinverse1'
      if (qp1 + 1 < 3) {
        e[qp1] /= r;
      }

      qq = qp1 << 3;

      // Start for MATLABSystem: '<S325>/Pseudoinverse1'
      for (qjj = qq + 1; qjj <= qq + 8; qjj++) {
        U[qjj - 1] *= r;
      }
    }

    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  ztest = fabs(s_0[0]);
  nrm = fabs(e[0]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(nrm <= 0.0)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  ztest = fabs(s_0[1]);
  nrm = fabs(e[1]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
  ztest = fabs(s_0[2]);
  nrm = fabs(e[2]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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
    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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
  // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // MATLABSystem: '<S325>/Pseudoinverse1'
  for (i = 0; i < 24; i++) {
    // Start for MATLABSystem: '<S325>/Pseudoinverse1'
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

  // End of MATLABSystem: '<S325>/Pseudoinverse1'
}

// Function for MATLAB Function: '<S322>/MATLAB Function1'
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
//    '<S322>/MATLAB Function1'
//    '<S334>/MATLAB Function1'
//    '<S346>/MATLAB Function8'
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

// Function for MATLAB Function: '<S322>/MATLAB Function5'
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

// Function for MATLAB Function: '<S322>/MATLAB Function5'
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

  y = scale * sqrt(y);
  if (rtIsNaN(y)) {
    int32_T b_k;
    b_k = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_k < 3) {
        if (rtIsNaN(x[b_k])) {
          exitg1 = 1;
        } else {
          b_k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

//
// Output and update for atomic system:
//    '<S322>/MATLAB Function5'
//    '<S334>/MATLAB Function5'
//    '<S346>/MATLAB Function5'
//
void GNC2026W_MATLABFunction5(const real_T rtu_u_desired[3], const real_T
  rtu_x0[8], real_T rty_H_final[24], real_T rty_duty_cycles[8], real_T
  rtp_max_iters, real_T rtp_tol)
{
  real_T HtH[64];
  real_T H[24];
  real_T HtH_tmp[24];
  real_T c[24];
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
  static const int8_T c_0[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

  static const int8_T d[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

  int32_T exitg1;
  int32_T exitg4;
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
        c[3 * i] = c_0[i];
        c[3 * i + 1] = d[i];
        c[3 * i + 2] = GNC2026W_P.thruster_dist2CG_RED[i] / 1000.0;
      }

      for (i = 0; i < 3; i++) {
        for (nz = 0; nz < 8; nz++) {
          thrust_decay_factor = 0.0;
          for (b_iter = 0; b_iter < 8; b_iter++) {
            thrust_decay_factor += c[3 * b_iter + i] * HtH[(nz << 3) + b_iter];
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
        if (rtIsNaN(absx)) {
          i = 0;
          do {
            exitg4 = 0;
            if (i < 8) {
              if (rtIsNaN(rty_duty_cycles[i])) {
                exitg4 = 1;
              } else {
                i++;
              }
            } else {
              absx = (rtInf);
              exitg4 = 1;
            }
          } while (exitg4 == 0);
        }

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
              new_obj += c[3 * b_iter + nz] * HtH[(i << 3) + b_iter];
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
        c[3 * iter] = c_0[iter];
        c[3 * iter + 1] = d[iter];
        c[3 * iter + 2] = GNC2026W_P.thruster_dist2CG_RED[iter] / 1000.0;
      }

      for (i = 0; i < 8; i++) {
        for (nz = 0; nz < 3; nz++) {
          new_obj = 0.0;
          for (b_iter = 0; b_iter < 8; b_iter++) {
            new_obj += c[3 * b_iter + nz] * HtH[(i << 3) + b_iter];
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
//    '<S328>/Create Rotation Matrix'
//    '<S340>/Create Rotation Matrix'
//    '<S352>/Create Rotation Matrix'
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
//    '<S323>/Create Rotation Matrix'
//    '<S335>/Create Rotation Matrix'
//    '<S347>/Create Rotation Matrix'
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
//    '<S19>/Change BLACK Behavior'
//    '<S19>/Change BLUE Behavior'
//    '<S19>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_e_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW, P_ChangeBLACKBehavior_GNC20_b_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S358>/UDP Send (Clock)'
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

  // End of Start for S-Function (sdspToNetwork): '<S358>/UDP Send (Clock)'
}

//
// Outputs for action system:
//    '<S19>/Change BLACK Behavior'
//    '<S19>/Change BLUE Behavior'
//    '<S19>/Change RED Behavior'
//
void GNC2026W_ChangeBLACKBehavior_i(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  B_ChangeBLACKBehavior_GNC20_m_T *localB)
{
  // Clock: '<S358>/Clock1'
  localB->Clock1 = GNC2026W_M->Timing.t[0];
}

//
// Update for action system:
//    '<S19>/Change BLACK Behavior'
//    '<S19>/Change BLUE Behavior'
//    '<S19>/Change RED Behavior'
//
void GN_ChangeBLACKBehavior_n_Update(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  B_ChangeBLACKBehavior_GNC20_m_T *localB, DW_ChangeBLACKBehavior_GNC2_g_T
  *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S358>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendClock_NetworkLib[0U], &localB->Clock1, 1);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S358>/UDP Send (Clock)'
}

//
// Termination for action system:
//    '<S19>/Change BLACK Behavior'
//    '<S19>/Change BLUE Behavior'
//    '<S19>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_f_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S358>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&localDW->UDPSendClock_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S358>/UDP Send (Clock)'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
static real_T GNC2026W_xnrm2_g(int32_T n, const real_T x[9], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
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

  y = scale * sqrt(y);
  if (rtIsNaN(y)) {
    k = ix0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= kend) {
        if (rtIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
static real_T GNC2026W_xnrm2_g1(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
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

  y = scale * sqrt(y);
  if (rtIsNaN(y)) {
    k = ix0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= ix0 + 1) {
        if (rtIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S161>/MATLAB Function3'
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

// Function for MATLAB Function: '<S225>/EKF'
static real_T GNC2026W_xnrm2_h(int32_T n, const real_T x_data[], int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      real_T scale;
      int32_T k;
      int32_T kend;
      scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
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
      if (rtIsNaN(y)) {
        k = ix0;
        int32_T exitg1;
        do {
          exitg1 = 0;
          if (k <= kend) {
            if (rtIsNaN(x_data[k - 1])) {
              exitg1 = 1;
            } else {
              k++;
            }
          } else {
            y = (rtInf);
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
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

// Function for MATLAB Function: '<S225>/EKF'
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

// Function for MATLAB Function: '<S225>/EKF'
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
  //   ActionPort: '<S224>/Action Port'

  // Outputs for IfAction SubSystem: '<S224>/EKF' incorporates:
  //   ActionPort: '<S225>/Action Port'

  // If: '<S224>/If' incorporates:
  //   If: '<S9>/Experiment Sub-Phases'
  //   MATLAB Function: '<S225>/EKF'

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

  // End of If: '<S224>/If'
  // End of Outputs for SubSystem: '<S224>/EKF'
  // End of Outputs for SubSystem: '<S9>/If Action Subsystem'
}

// Function for MATLAB Function: '<S225>/EKF'
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

// Function for MATLAB Function: '<S227>/Unscented Kalman Filter'
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

// Function for MATLAB Function: '<S227>/Unscented Kalman Filter'
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

// Function for MATLAB Function: '<S264>/CV Noise'
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
    real_T b_u1[170];
    real_T Fi[78];
    real_T Xi_pre[78];
    real_T y[64];
    real_T h[39];
    real_T P_minus[36];
    real_T P_minus_0[36];
    real_T S_minus[36];
    real_T phi_0[36];
    real_T phi_2[36];
    real_T phi_3[36];
    real_T b[24];
    real_T rtb_H[24];
    real_T Ks_data[18];
    real_T P_xy[18];
    real_T P_xy_0[18];
    real_T wi_c[13];
    real_T wi_m[13];
    real_T Fdt[9];
    real_T V[9];
    real_T phi[9];
    real_T phi_1[9];
    real_T phi_tmp[9];
    real_T rtb_q_des[9];
    real_T rtb_Product3[8];
    real_T r_T[6];
    real_T rtb_Switch[6];
    real_T tmp[6];
    real_T rtb_C_Ib[4];
    real_T K[3];
    real_T RED_Path[3];
    real_T ik[3];
    real_T rtb_TmpSignalConversionAtSFun_b[3];
    real_T diff[2];
    real_T BLACK_Exp_Noise;
    real_T LOS_Angle;
    real_T absxk;
    real_T avg_idx_0;
    real_T avg_idx_1;
    real_T rtb_TSamp_m2;
    real_T sampleTime;
    real_T sampleTime_0;
    real_T sampleTime_1;
    real_T sc;
    real_T scale;
    real_T t;
    real_T th_c;
    int32_T aoffset;
    int32_T ar;
    int32_T boffset;
    int32_T br;
    int32_T c_aoffset;
    int32_T d_coffset;
    int32_T i;
    int32_T r;
    int32_T samplesRead;
    int32_T samplesRead_0;
    int32_T samplesRead_1;
    int32_T samplesRead_2;
    int32_T samplesRead_3;
    int32_T samplesRead_4;
    int32_T samplesRead_5;
    char_T *sErr;
    int8_T H[18];
    int8_T b_I[9];
    int8_T S_tmp[3];
    int8_T tmp_data[3];
    int8_T S_tmp_0;
    int8_T rtAction;
    int8_T rtPrevAction;
    boolean_T keep[3];
    boolean_T rtb_NOT;
    static const int8_T a[9] = { 0, 0, 0, 1, 0, 0, 0, 1, 0 };

    static const int8_T b_a[3] = { 1, 0, 0 };

    static const real_T c[9] = { 0.001, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0,
      0.001 };

    static const int8_T b_0[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

    static const int8_T c_0[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

    static const int8_T cb[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

    static const int8_T db[18] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,
      0, 0, 1 };

    static const int8_T b_a_0[18] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
      0, 0, 0, 1 };

    static const real_T a_0[9] = { 1.0E-8, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0,
      1.0E-8 };

    static const int8_T c_a[18] = { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0 };

    static const int8_T f_a[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

    static const real_T a_1[36] = { 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8
    };

    static const int8_T eb[18] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
      0, 1, 0 };

    static const real_T fb[9] = { 0.005, 0.0, 0.0, 0.0, 0.005, 0.0, 0.0, 0.0,
      0.005 };

    static const int8_T c_1[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0,
      0, 0, 1 };

    static const real_T b_b[9] = { 0.0001, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0,
      0.005 };

    static const int8_T d[6] = { 0, 0, 1, 0, 0, 0 };

    int32_T Ks_size[2];
    int32_T R_new_size[2];
    int32_T b_size[2];
    int32_T b_size_0[2];
    int32_T b_y_size[2];
    int32_T y_size[2];
    int32_T d_size_idx_0;
    int32_T exitg1;
    int32_T tmp_size_idx_0;
    boolean_T exitg2;

    // RandomNumber: '<Root>/Gaussian Noise' incorporates:
    //   DataStoreWrite: '<Root>/Data Store Write'

    BLACK_Exp_Noise = GNC2026W_DW.NextOutput;

    // MATLABSystem: '<Root>/Dropped Frames'
    if (GNC2026W_DW.obj_fv.TunablePropsChanged) {
      GNC2026W_DW.obj_fv.TunablePropsChanged = false;
    }

    GNC2026W_rand();

    // End of MATLABSystem: '<Root>/Dropped Frames'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S2>/Data Store Read'

    if (GNC2026W_DW.RED_Path_Planner_Selection == 1.0) {
      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S140>/Action Port'

      // MATLAB Function: '<S140>/Path Planning' incorporates:
      //   DataStoreRead: '<S140>/Data Store Read'
      //   DataStoreRead: '<S140>/Data Store Read5'
      //   MATLAB Function: '<S140>/LOS Calculation'

      sc = cos(GNC2026W_DW.BLACK_Filtered_States[2]);
      rtb_q_des[0] = GNC2026W_DW.L0 * sc + GNC2026W_DW.BLACK_Filtered_States[0];
      scale = sin(GNC2026W_DW.BLACK_Filtered_States[2]);
      rtb_q_des[1] = GNC2026W_DW.L0 * scale + GNC2026W_DW.BLACK_Filtered_States
        [1];
      rtb_q_des[2] = GNC2026W_DW.BLACK_Filtered_States[2] + 3.1415926535897931;
      LOS_Angle = GNC2026W_DW.L0 * GNC2026W_DW.BLACK_Filtered_States[5];
      rtb_q_des[3] = GNC2026W_DW.BLACK_Filtered_States[3] - LOS_Angle * scale;
      rtb_q_des[4] = LOS_Angle * sc + GNC2026W_DW.BLACK_Filtered_States[4];
      rtb_q_des[5] = GNC2026W_DW.BLACK_Filtered_States[5];
      LOS_Angle = GNC2026W_DW.BLACK_Filtered_States[5] *
        GNC2026W_DW.BLACK_Filtered_States[5] * GNC2026W_DW.L0;
      rtb_q_des[6] = (0.0 - 0.0 * GNC2026W_DW.L0 * scale) - LOS_Angle * sc;
      rtb_q_des[7] = 0.0 * GNC2026W_DW.L0 * sc - LOS_Angle * scale;
      rtb_q_des[8] = 0.0;

      // Logic: '<S149>/NOT' incorporates:
      //   DataStoreRead: '<S149>/Data Store Read1'

      rtb_NOT = !(GNC2026W_DW.ARM_Grab_Complete != 0.0);

      // Outputs for Enabled SubSystem: '<S149>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S153>/Enable'

      if (rtb_NOT) {
        // SignalConversion generated from: '<S153>/In1' incorporates:
        //   DataStoreRead: '<S140>/Data Store Read'
        //   MATLAB Function: '<S140>/Path Planning'

        GNC2026W_B.In1_g20a[0] = rtb_q_des[0];
        GNC2026W_B.In1_g20a[1] = rtb_q_des[1];
        GNC2026W_B.In1_g20a[2] = GNC2026W_DW.BLACK_Filtered_States[2] +
          3.1415926535897931;
      }

      // End of Outputs for SubSystem: '<S149>/Enabled Subsystem'

      // Switch: '<S149>/Switch' incorporates:
      //   Constant: '<S149>/Constant'
      //   DataStoreRead: '<S149>/Data Store Read1'

      for (i = 0; i < 6; i++) {
        if (GNC2026W_DW.ARM_Grab_Complete > GNC2026W_P.Switch_Threshold) {
          rtb_Switch[i] = GNC2026W_P.Constant_Value_a[i];
        } else {
          rtb_Switch[i] = rtb_q_des[i + 3];
        }
      }

      // End of Switch: '<S149>/Switch'

      // MATLAB Function: '<S154>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S140>/Data Store Read3'
      //   Delay: '<S154>/Delay'
      //   Delay: '<S154>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_h0, GNC2026W_DW.Delay1_DSTATE_lo,
        &GNC2026W_DW.Delay1_DSTATE_lo, &GNC2026W_DW.Delay_DSTATE_h0);

      // MATLAB Function: '<S140>/LOS Calculation' incorporates:
      //   DataStoreRead: '<S140>/Data Store Read1'
      //   DataStoreRead: '<S140>/Data Store Read2'
      //   DataStoreRead: '<S140>/Data Store Read3'
      //   DataStoreWrite: '<S140>/Data Store Write1'
      //   DataStoreWrite: '<S140>/Data Store Write2'
      //   Delay: '<S154>/Delay1'
      //   SignalConversion generated from: '<S150>/ SFunction '
      //   UnitDelay: '<S140>/Unit Delay'

      GNC2026W_DW.EE_Goal[0] = 0.0;
      GNC2026W_DW.EE_Goal[1] = 0.0;
      GNC2026W_DW.EE_Goal[2] = 0.0;
      avg_idx_0 = 0.0;
      avg_idx_1 = 0.0;
      th_c = sin(GNC2026W_DW.Delay1_DSTATE_lo);
      LOS_Angle = cos(GNC2026W_DW.Delay1_DSTATE_lo);
      rtb_TSamp_m2 = ((sc * 0.145 + -scale * 0.0) +
                      GNC2026W_DW.BLACK_Filtered_States[0]) -
        GNC2026W_DW.RED_Measured_States[0];
      scale = ((scale * 0.145 + sc * 0.0) + GNC2026W_DW.BLACK_Filtered_States[1])
        - GNC2026W_DW.RED_Measured_States[1];
      sc = LOS_Angle * rtb_TSamp_m2 + th_c * scale;
      diff[0] = GNC2026W_DW.UnitDelay_DSTATE[0] - GNC2026W_DW.errPrev[0];
      GNC2026W_DW.errPrev[0] = GNC2026W_DW.UnitDelay_DSTATE[0];
      th_c = -th_c * rtb_TSamp_m2 + LOS_Angle * scale;
      diff[1] = GNC2026W_DW.UnitDelay_DSTATE[1] - GNC2026W_DW.errPrev[1];
      GNC2026W_DW.errPrev[1] = GNC2026W_DW.UnitDelay_DSTATE[1];
      LOS_Angle = atan(th_c / sc);
      if (GNC2026W_DW.Grab_Location_Reached == 1.0) {
        scale = 3.3121686421112381E-170;
        absxk = fabs(diff[0]);
        if (absxk > 3.3121686421112381E-170) {
          rtb_TSamp_m2 = 1.0;
          scale = absxk;
        } else {
          t = absxk / 3.3121686421112381E-170;
          rtb_TSamp_m2 = t * t;
        }

        absxk = fabs(diff[1]);
        if (absxk > scale) {
          t = scale / absxk;
          rtb_TSamp_m2 = rtb_TSamp_m2 * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          rtb_TSamp_m2 += t * t;
        }

        rtb_TSamp_m2 = scale * sqrt(rtb_TSamp_m2);
        if (rtIsNaN(rtb_TSamp_m2)) {
          aoffset = 0;
          do {
            exitg1 = 0;
            if (aoffset < 2) {
              if (rtIsNaN(diff[aoffset])) {
                exitg1 = 1;
              } else {
                aoffset++;
              }
            } else {
              rtb_TSamp_m2 = (rtInf);
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (rtb_TSamp_m2 < 0.005) {
          GNC2026W_DW.sendPacket = 1.0;
        }
      }

      if (GNC2026W_DW.sendPacket == 1.0) {
        if (GNC2026W_DW.packetSent == 0.0) {
          GNC2026W_DW.EE_Goal[0] = 0.0;
          GNC2026W_DW.EE_Goal[1] = 0.0;
          GNC2026W_DW.EE_Goal[2] = 0.0;
          GNC2026W_DW.packetSent = 1.0;
        } else if (GNC2026W_DW.k_p < 200.0) {
          GNC2026W_DW.k_p++;
          aoffset = (static_cast<int32_T>(GNC2026W_DW.k_p) - 1) << 1;
          GNC2026W_DW.store[aoffset] = sc - 0.07;
          GNC2026W_DW.store[aoffset + 1] = th_c + 0.125;
        } else {
          for (i = 0; i < 200; i++) {
            r = i << 1;
            avg_idx_0 += GNC2026W_DW.store[r];
            avg_idx_1 += GNC2026W_DW.store[r + 1];
          }

          GNC2026W_DW.EE_Goal[0] = 1.0;
          GNC2026W_DW.EE_Goal[1] = avg_idx_0 / GNC2026W_DW.k_p;
          GNC2026W_DW.EE_Goal[2] = avg_idx_1 / GNC2026W_DW.k_p;
        }
      }

      // SignalConversion generated from: '<S148>/ SFunction ' incorporates:
      //   MATLAB Function: '<S140>/Error Calculation'

      rtb_q_des[0] = GNC2026W_B.In1_g20a[0];
      rtb_q_des[1] = GNC2026W_B.In1_g20a[1];
      rtb_q_des[2] = GNC2026W_B.In1_g20a[2];
      for (i = 0; i < 6; i++) {
        rtb_q_des[i + 3] = rtb_Switch[i];
      }

      // End of SignalConversion generated from: '<S148>/ SFunction '

      // MATLAB Function: '<S140>/Error Calculation' incorporates:
      //   DataStoreRead: '<S140>/Data Store Read4'
      //   DataStoreWrite: '<S140>/Data Store Write1'
      //   DataStoreWrite: '<S140>/Data Store Write3'
      //   DataStoreWrite: '<S140>/Data Store Write4'
      //   SignalConversion generated from: '<S148>/ SFunction '
      //   UnitDelay: '<S140>/Unit Delay'

      if (!GNC2026W_DW.x_not_empty) {
        GNC2026W_DW.x_k[0] = LOS_Angle;
        GNC2026W_DW.x_k[1] = 0.0;
        GNC2026W_DW.x_k[2] = 0.0;
        GNC2026W_DW.x_not_empty = true;
      }

      for (r = 0; r < 9; r++) {
        Fdt[r] = static_cast<real_T>(a[r]) * GNC2026W_P.baseRate;
        b_I[r] = 0;
      }

      for (aoffset = 0; aoffset < 3; aoffset++) {
        b_I[aoffset + 3 * aoffset] = 1;
        for (r = 0; r < 3; r++) {
          phi_tmp[aoffset + 3 * r] = (Fdt[3 * r + 1] * Fdt[aoffset + 3] + Fdt[3 *
            r] * Fdt[aoffset]) + Fdt[3 * r + 2] * Fdt[aoffset + 6];
        }
      }

      for (r = 0; r < 3; r++) {
        rtb_TSamp_m2 = 0.0;
        for (aoffset = 0; aoffset < 3; aoffset++) {
          br = 3 * aoffset + r;
          avg_idx_0 = ((phi_tmp[3 * aoffset + 1] * Fdt[r + 3] + phi_tmp[3 *
                        aoffset] * Fdt[r]) + phi_tmp[3 * aoffset + 2] * Fdt[r +
                       6]) / 6.0 + ((static_cast<real_T>(b_I[br]) + Fdt[br]) +
            phi_tmp[br] / 2.0);
          phi[br] = avg_idx_0;
          rtb_TSamp_m2 += avg_idx_0 * GNC2026W_DW.x_k[aoffset];
        }

        rtb_TmpSignalConversionAtSFun_b[r] = rtb_TSamp_m2;
        avg_idx_0 = phi[r + 3];
        avg_idx_1 = phi[r];
        th_c = phi[r + 6];
        for (aoffset = 0; aoffset < 3; aoffset++) {
          phi_1[r + 3 * aoffset] = (GNC2026W_DW.P_i[3 * aoffset + 1] * avg_idx_0
            + GNC2026W_DW.P_i[3 * aoffset] * avg_idx_1) + GNC2026W_DW.P_i[3 *
            aoffset + 2] * th_c;
        }
      }

      rtb_TSamp_m2 = 0.0;
      for (i = 0; i < 3; i++) {
        avg_idx_0 = phi_1[i + 3];
        avg_idx_1 = phi_1[i];
        th_c = phi_1[i + 6];
        for (r = 0; r < 3; r++) {
          br = 3 * r + i;
          Fdt[br] = ((phi[r + 3] * avg_idx_0 + avg_idx_1 * phi[r]) + phi[r + 6] *
                     th_c) + c[br];
        }

        aoffset = b_a[i];
        RED_Path[i] = aoffset;
        rtb_TSamp_m2 += static_cast<real_T>(aoffset) *
          rtb_TmpSignalConversionAtSFun_b[i];
        S_tmp[i] = b_a[i];
      }

      rtb_TSamp_m2 = LOS_Angle - rtb_TSamp_m2;
      avg_idx_1 = rt_atan2d_snf(sin(rtb_TSamp_m2), cos(rtb_TSamp_m2));
      rtb_TSamp_m2 = 0.0;
      aoffset = static_cast<int32_T>(RED_Path[1]);
      i = static_cast<int32_T>(RED_Path[0]);
      br = static_cast<int32_T>(RED_Path[2]);
      for (r = 0; r < 3; r++) {
        rtb_TSamp_m2 += ((Fdt[3 * r + 1] * static_cast<real_T>(aoffset) + Fdt[3 *
                          r] * static_cast<real_T>(i)) + Fdt[3 * r + 2] *
                         static_cast<real_T>(br)) * static_cast<real_T>(S_tmp[r]);
      }

      rtPrevAction = S_tmp[1];
      rtAction = S_tmp[0];
      S_tmp_0 = S_tmp[2];
      for (i = 0; i < 3; i++) {
        avg_idx_0 = ((Fdt[i + 3] * static_cast<real_T>(rtPrevAction) + Fdt[i] *
                      static_cast<real_T>(rtAction)) + Fdt[i + 6] * static_cast<
                     real_T>(S_tmp_0)) / (rtb_TSamp_m2 + 1.0E-6);
        K[i] = avg_idx_0;
        GNC2026W_DW.x_k[i] = avg_idx_0 * avg_idx_1 +
          rtb_TmpSignalConversionAtSFun_b[i];
      }

      for (r = 0; r < 9; r++) {
        b_I[r] = 0;
      }

      b_I[0] = 1;
      b_I[4] = 1;
      b_I[8] = 1;
      avg_idx_0 = K[0];
      th_c = K[1];
      sc = K[2];
      for (r = 0; r < 3; r++) {
        aoffset = static_cast<int32_T>(RED_Path[r]);
        phi_tmp[3 * r] = static_cast<real_T>(b_I[3 * r]) - avg_idx_0 *
          static_cast<real_T>(aoffset);
        i = 3 * r + 1;
        phi_tmp[i] = static_cast<real_T>(b_I[i]) - th_c * static_cast<real_T>
          (aoffset);
        i = 3 * r + 2;
        phi_tmp[i] = static_cast<real_T>(b_I[i]) - sc * static_cast<real_T>
          (aoffset);
      }

      for (r = 0; r < 3; r++) {
        avg_idx_1 = Fdt[3 * r + 1];
        th_c = Fdt[3 * r];
        sc = Fdt[3 * r + 2];
        for (aoffset = 0; aoffset < 3; aoffset++) {
          GNC2026W_DW.P_i[aoffset + 3 * r] = (phi_tmp[aoffset + 3] * avg_idx_1 +
            th_c * phi_tmp[aoffset]) + phi_tmp[aoffset + 6] * sc;
        }
      }

      for (i = 0; i < 6; i++) {
        GNC2026W_DW.UnitDelay_DSTATE[i] = GNC2026W_DW.RED_Measured_States[i] -
          rtb_q_des[i];
      }

      GNC2026W_DW.UnitDelay_DSTATE[2] = -GNC2026W_DW.x_k[0];
      GNC2026W_DW.UnitDelay_DSTATE[5] = -GNC2026W_DW.x_k[1];
      GNC2026W_DW.lambdaFirstOrder[0] = LOS_Angle;
      GNC2026W_DW.lambdaFirstOrder[1] = (LOS_Angle - GNC2026W_DW.l1) /
        GNC2026W_P.baseRate;
      GNC2026W_DW.lambdaFirstOrder[2] = ((LOS_Angle - 2.0 * GNC2026W_DW.l1) +
        GNC2026W_DW.l2) / GNC2026W_P.baseRate;
      GNC2026W_DW.l2 = GNC2026W_DW.l1;
      GNC2026W_DW.l1 = LOS_Angle;
      GNC2026W_DW.UnitDelay_DSTATE[6] = 0.0 - rtb_q_des[6];
      GNC2026W_DW.lambda[0] = GNC2026W_DW.x_k[0];
      GNC2026W_DW.UnitDelay_DSTATE[7] = 0.0 - rtb_q_des[7];
      GNC2026W_DW.lambda[1] = GNC2026W_DW.x_k[1];
      GNC2026W_DW.lambda[2] = GNC2026W_DW.x_k[2];
      GNC2026W_DW.UnitDelay_DSTATE[8] = -GNC2026W_DW.x_k[2];

      // DataStoreWrite: '<S140>/Data Store Write5' incorporates:
      //   UnitDelay: '<S140>/Unit Delay'

      memcpy(&GNC2026W_DW.error[0], &GNC2026W_DW.UnitDelay_DSTATE[0], 9U *
             sizeof(real_T));

      // DataStoreWrite: '<S2>/Data Store Write' incorporates:
      //   Merge: '<S3>/Merge6'
      //   SignalConversion generated from: '<S140>/Path'
      //   SignalConversion generated from: '<S153>/In1'

      RED_Path[0] = GNC2026W_B.In1_g20a[0];
      RED_Path[1] = GNC2026W_B.In1_g20a[1];
      RED_Path[2] = GNC2026W_B.In1_g20a[2];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'
    } else {
      // Outputs for IfAction SubSystem: '<S2>/Disable PPL (RED)' incorporates:
      //   ActionPort: '<S144>/Action Port'

      // DataStoreWrite: '<S2>/Data Store Write' incorporates:
      //   DataStoreRead: '<S159>/RED_Px'
      //   Merge: '<S3>/Merge6'

      RED_Path[0] = GNC2026W_DW.RED_Desired_States[0];
      RED_Path[1] = GNC2026W_DW.RED_Desired_States[1];
      RED_Path[2] = GNC2026W_DW.RED_Desired_States[2];

      // End of Outputs for SubSystem: '<S2>/Disable PPL (RED)'
    }

    // End of If: '<S2>/If'

    // If: '<S3>/If1' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read3'

    if (GNC2026W_DW.BLACK_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' incorporates:
      //   ActionPort: '<S166>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   DataStoreRead: '<S166>/Data Store Read13'
      //   MATLAB Function: '<S197>/MATLAB Function'
      //   SampleTimeMath: '<S198>/TSamp'
      //
      //  About '<S198>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLACK_Desired_States[2],
        GNC2026W_DW.BLACK_Measured_States[2], &LOS_Angle);
      rtb_TSamp_m2 = GNC2026W_DW.BLACK_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_i;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_eh = rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE_eh;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   SampleTimeMath: '<S199>/TSamp'
      //
      //  About '<S199>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_0 = GNC2026W_DW.BLACK_Desired_States[1] * GNC2026W_P.TSamp_WtEt_hr;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_hv = avg_idx_0 - GNC2026W_DW.UD_DSTATE_hv;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   SampleTimeMath: '<S200>/TSamp'
      //
      //  About '<S200>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_1 = GNC2026W_DW.BLACK_Desired_States[2] * GNC2026W_P.TSamp_WtEt_ca;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S200>/Diff' incorporates:
      //   UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = avg_idx_1 - GNC2026W_DW.UD_DSTATE_kv;

      // Sum: '<S166>/Subtract7' incorporates:
      //   DataStoreRead: '<S166>/Data Store Read13'
      //   UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = GNC2026W_DW.BLACK_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_eh;

      // Sum: '<S166>/Subtract6' incorporates:
      //   DataStoreRead: '<S166>/Data Store Read13'
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = GNC2026W_DW.BLACK_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_hv;

      // Sum: '<S166>/Subtract8' incorporates:
      //   DataStoreRead: '<S166>/Data Store Read13'
      //   UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = GNC2026W_DW.BLACK_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_kv;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   DataStoreRead: '<S166>/Data Store Read13'
      //   Gain: '<S166>/Gain'
      //   Gain: '<S166>/Gain1'
      //   Gain: '<S166>/Gain3'
      //   Gain: '<S166>/Gain4'
      //   Gain: '<S166>/Gain6'
      //   Gain: '<S166>/Gain7'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S166>/Subtract4'
      //   Sum: '<S166>/Subtract5'
      //   Sum: '<S166>/Sum'
      //   Sum: '<S166>/Sum1'
      //   UnitDelay: '<S198>/UD'
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[0] = ((GNC2026W_DW.BLACK_Measured_States[0] -
        GNC2026W_DW.BLACK_Desired_States[0]) * GNC2026W_P.Kp_xb +
        GNC2026W_P.Kd_xb * GNC2026W_DW.UD_DSTATE_eh) * GNC2026W_P.Gain6_Gain_g;
      GNC2026W_B.Merge1[1] = ((GNC2026W_DW.BLACK_Measured_States[1] -
        GNC2026W_DW.BLACK_Desired_States[1]) * GNC2026W_P.Kp_yb +
        GNC2026W_P.Kd_yb * GNC2026W_DW.UD_DSTATE_hv) * GNC2026W_P.Gain7_Gain_b;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Gain: '<S166>/Gain8' incorporates:
      //   Gain: '<S166>/Gain2'
      //   Gain: '<S166>/Gain5'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S166>/Sum2'
      //   UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[2] = (GNC2026W_P.Kp_tb * LOS_Angle + GNC2026W_P.Kd_tb *
        GNC2026W_DW.UD_DSTATE_kv) * GNC2026W_P.Gain8_Gain_m;

      // Update for UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = rtb_TSamp_m2;

      // Update for UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = avg_idx_0;

      // Update for UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = avg_idx_1;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLACK)'
    } else if (GNC2026W_DW.BLACK_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' incorporates:
      //   ActionPort: '<S162>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   DataStoreRead: '<S162>/Data Store Read13'
      //   MATLAB Function: '<S174>/MATLAB Function'

      rtb_TSamp_m2 = (GNC2026W_DW.BLACK_Measured_States[2] -
                      GNC2026W_DW.BLACK_Desired_States[2]) + 3.1415926535897931;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // MATLAB Function: '<S174>/MATLAB Function'
      if (rtIsNaN(rtb_TSamp_m2)) {
        avg_idx_1 = (rtNaN);
      } else if (rtIsInf(rtb_TSamp_m2)) {
        avg_idx_1 = (rtNaN);
      } else if (rtb_TSamp_m2 == 0.0) {
        avg_idx_1 = 0.0;
      } else {
        avg_idx_1 = fmod(rtb_TSamp_m2, 6.2831853071795862);
        rtb_NOT = (avg_idx_1 == 0.0);
        if (!rtb_NOT) {
          scale = fabs(rtb_TSamp_m2 / 6.2831853071795862);
          rtb_NOT = !(fabs(scale - floor(scale + 0.5)) > 2.2204460492503131E-16 *
                      scale);
        }

        if (rtb_NOT) {
          avg_idx_1 = 0.0;
        } else if (avg_idx_1 < 0.0) {
          avg_idx_1 += 6.2831853071795862;
        }
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   SampleTimeMath: '<S175>/TSamp'
      //
      //  About '<S175>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      LOS_Angle = GNC2026W_DW.BLACK_Desired_States[0] * GNC2026W_P.TSamp_WtEt_nd;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_j = LOS_Angle - GNC2026W_DW.UD_DSTATE_j;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   SampleTimeMath: '<S176>/TSamp'
      //
      //  About '<S176>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_m2 = GNC2026W_DW.BLACK_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_co;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

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

      GNC2026W_DW.UD_DSTATE_c = rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE_c;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   SampleTimeMath: '<S177>/TSamp'
      //
      //  About '<S177>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_0 = GNC2026W_DW.BLACK_Desired_States[2] * GNC2026W_P.TSamp_WtEt_no;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Sum: '<S177>/Diff' incorporates:
      //   UnitDelay: '<S177>/UD'
      //
      //  Block description for '<S177>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S177>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_d = avg_idx_0 - GNC2026W_DW.UD_DSTATE_d;

      // Sum: '<S162>/Subtract7' incorporates:
      //   DataStoreRead: '<S162>/Data Store Read13'
      //   UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_j = GNC2026W_DW.BLACK_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_j;

      // Sum: '<S162>/Subtract6' incorporates:
      //   DataStoreRead: '<S162>/Data Store Read13'
      //   UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_c = GNC2026W_DW.BLACK_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_c;

      // Sum: '<S162>/Subtract8' incorporates:
      //   DataStoreRead: '<S162>/Data Store Read13'
      //   UnitDelay: '<S177>/UD'
      //
      //  Block description for '<S177>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_d = GNC2026W_DW.BLACK_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_d;
      for (r = 0; r < 18; r++) {
        // Product: '<S162>/Matrix Multiply' incorporates:
        //   Constant: '<S162>/Constant2'

        P_xy[r] = -GNC2026W_P.K_BLACK[r];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S138>/Action Port'

      // If: '<S2>/If1' incorporates:
      //   DataStoreRead: '<S146>/BLACK_Px'
      //   DataStoreRead: '<S162>/Data Store Read13'
      //   Product: '<S162>/Matrix Multiply'
      //   Reshape: '<S162>/Reshape1'
      //   Sum: '<S162>/Subtract4'
      //   Sum: '<S162>/Subtract5'

      rtb_Switch[0] = GNC2026W_DW.BLACK_Measured_States[0] -
        GNC2026W_DW.BLACK_Desired_States[0];
      rtb_Switch[1] = GNC2026W_DW.BLACK_Measured_States[1] -
        GNC2026W_DW.BLACK_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

      // Product: '<S162>/Matrix Multiply' incorporates:
      //   MATLAB Function: '<S174>/MATLAB Function'
      //   Reshape: '<S162>/Reshape1'
      //   Reshape: '<S162>/Reshape3'
      //   UnitDelay: '<S175>/UD'
      //   UnitDelay: '<S176>/UD'
      //   UnitDelay: '<S177>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S177>/UD':
      //
      //   Store in Global RAM

      rtb_Switch[2] = avg_idx_1 - 3.1415926535897931;
      rtb_Switch[3] = GNC2026W_DW.UD_DSTATE_j;
      rtb_Switch[4] = GNC2026W_DW.UD_DSTATE_c;
      rtb_Switch[5] = GNC2026W_DW.UD_DSTATE_d;
      for (r = 0; r < 3; r++) {
        // Product: '<S162>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge1'

        avg_idx_1 = 0.0;
        for (aoffset = 0; aoffset < 6; aoffset++) {
          // Merge: '<S3>/Merge1' incorporates:
          //   Product: '<S162>/Matrix Multiply'
          //   Reshape: '<S162>/Reshape4'

          avg_idx_1 += P_xy[3 * aoffset + r] * rtb_Switch[aoffset];
        }

        // Merge: '<S3>/Merge1' incorporates:
        //   Product: '<S162>/Matrix Multiply'

        GNC2026W_B.Merge1[r] = avg_idx_1;
      }

      // Update for UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_j = LOS_Angle;

      // Update for UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_c = rtb_TSamp_m2;

      // Update for UnitDelay: '<S177>/UD'
      //
      //  Block description for '<S177>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_d = avg_idx_0;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLACK)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLACK)' incorporates:
      //   ActionPort: '<S170>/Action Port'

      GNC2026W_DisableThrustersBLACK(GNC2026W_B.Merge1,
        &GNC2026W_P.DisableThrustersBLACK);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLACK)'
    }

    // End of If: '<S3>/If1'

    // If: '<S3>/If2' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read2'

    if (GNC2026W_DW.BLUE_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' incorporates:
      //   ActionPort: '<S167>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   DataStoreRead: '<S167>/Data Store Read2'
      //   MATLAB Function: '<S202>/MATLAB Function'
      //   SampleTimeMath: '<S203>/TSamp'
      //
      //  About '<S203>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLUE_Desired_States[2],
        GNC2026W_DW.BLUE_Measured_States[2], &LOS_Angle);
      rtb_TSamp_m2 = GNC2026W_DW.BLUE_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_p;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S203>/Diff' incorporates:
      //   UnitDelay: '<S203>/UD'
      //
      //  Block description for '<S203>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE_o;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   SampleTimeMath: '<S204>/TSamp'
      //
      //  About '<S204>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_0 = GNC2026W_DW.BLUE_Desired_States[1] * GNC2026W_P.TSamp_WtEt_o;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S204>/Diff' incorporates:
      //   UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S204>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = avg_idx_0 - GNC2026W_DW.UD_DSTATE_n;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   SampleTimeMath: '<S205>/TSamp'
      //
      //  About '<S205>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_1 = GNC2026W_DW.BLUE_Desired_States[2] * GNC2026W_P.TSamp_WtEt_px;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S205>/Diff' incorporates:
      //   UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = avg_idx_1 - GNC2026W_DW.UD_DSTATE_hu;

      // Sum: '<S167>/Subtract7' incorporates:
      //   DataStoreRead: '<S167>/Data Store Read2'
      //   UnitDelay: '<S203>/UD'
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = GNC2026W_DW.BLUE_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_o;

      // Sum: '<S167>/Subtract6' incorporates:
      //   DataStoreRead: '<S167>/Data Store Read2'
      //   UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = GNC2026W_DW.BLUE_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_n;

      // Sum: '<S167>/Subtract8' incorporates:
      //   DataStoreRead: '<S167>/Data Store Read2'
      //   UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = GNC2026W_DW.BLUE_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_hu;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   DataStoreRead: '<S167>/Data Store Read2'
      //   Gain: '<S167>/Gain'
      //   Gain: '<S167>/Gain1'
      //   Gain: '<S167>/Gain3'
      //   Gain: '<S167>/Gain4'
      //   Gain: '<S167>/Gain6'
      //   Gain: '<S167>/Gain7'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S167>/Subtract4'
      //   Sum: '<S167>/Subtract5'
      //   Sum: '<S167>/Sum'
      //   Sum: '<S167>/Sum1'
      //   UnitDelay: '<S203>/UD'
      //   UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[0] = ((GNC2026W_DW.BLUE_Measured_States[0] -
        GNC2026W_DW.BLUE_Desired_States[0]) * GNC2026W_P.Kp_xblue +
        GNC2026W_P.Kd_xblue * GNC2026W_DW.UD_DSTATE_o) * GNC2026W_P.Gain6_Gain_a;
      GNC2026W_B.Merge2[1] = ((GNC2026W_DW.BLUE_Measured_States[1] -
        GNC2026W_DW.BLUE_Desired_States[1]) * GNC2026W_P.Kp_yblue +
        GNC2026W_P.Kd_yblue * GNC2026W_DW.UD_DSTATE_n) * GNC2026W_P.Gain7_Gain_e;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Gain: '<S167>/Gain8' incorporates:
      //   Gain: '<S167>/Gain2'
      //   Gain: '<S167>/Gain5'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S167>/Sum2'
      //   UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[2] = (GNC2026W_P.Kp_tblue * LOS_Angle +
        GNC2026W_P.Kd_tblue * GNC2026W_DW.UD_DSTATE_hu) *
        GNC2026W_P.Gain8_Gain_g;

      // Update for UnitDelay: '<S203>/UD'
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = rtb_TSamp_m2;

      // Update for UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = avg_idx_0;

      // Update for UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = avg_idx_1;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLUE)'
    } else if (GNC2026W_DW.BLUE_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' incorporates:
      //   ActionPort: '<S163>/Action Port'

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   DataStoreRead: '<S163>/Data Store Read2'
      //   MATLAB Function: '<S179>/MATLAB Function'
      //   Product: '<S163>/Matrix Multiply'
      //   SampleTimeMath: '<S180>/TSamp'
      //
      //  About '<S180>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLUE_Desired_States[2],
        GNC2026W_DW.BLUE_Measured_States[2], &r_T[2]);
      LOS_Angle = GNC2026W_DW.BLUE_Desired_States[0] * GNC2026W_P.TSamp_WtEt_ft;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S180>/Diff' incorporates:
      //   UnitDelay: '<S180>/UD'
      //
      //  Block description for '<S180>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S180>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_l = LOS_Angle - GNC2026W_DW.UD_DSTATE_l;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   SampleTimeMath: '<S181>/TSamp'
      //
      //  About '<S181>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_m2 = GNC2026W_DW.BLUE_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_eh;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S181>/Diff' incorporates:
      //   UnitDelay: '<S181>/UD'
      //
      //  Block description for '<S181>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S181>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE_k;

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   SampleTimeMath: '<S182>/TSamp'
      //
      //  About '<S182>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_0 = GNC2026W_DW.BLUE_Desired_States[2] * GNC2026W_P.TSamp_WtEt_ii;

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Sum: '<S182>/Diff' incorporates:
      //   UnitDelay: '<S182>/UD'
      //
      //  Block description for '<S182>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S182>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = avg_idx_0 - GNC2026W_DW.UD_DSTATE_h;

      // Sum: '<S163>/Subtract7' incorporates:
      //   DataStoreRead: '<S163>/Data Store Read2'
      //   UnitDelay: '<S180>/UD'
      //
      //  Block description for '<S180>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_l = GNC2026W_DW.BLUE_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_l;

      // Sum: '<S163>/Subtract6' incorporates:
      //   DataStoreRead: '<S163>/Data Store Read2'
      //   UnitDelay: '<S181>/UD'
      //
      //  Block description for '<S181>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = GNC2026W_DW.BLUE_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_k;

      // Sum: '<S163>/Subtract8' incorporates:
      //   DataStoreRead: '<S163>/Data Store Read2'
      //   UnitDelay: '<S182>/UD'
      //
      //  Block description for '<S182>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = GNC2026W_DW.BLUE_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_h;
      for (r = 0; r < 18; r++) {
        // Product: '<S163>/Matrix Multiply' incorporates:
        //   Constant: '<S163>/Constant2'

        P_xy[r] = -GNC2026W_P.K_BLUE[r];
      }

      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S139>/Action Port'

      // If: '<S2>/If2' incorporates:
      //   DataStoreRead: '<S147>/Data Store Read4'
      //   DataStoreRead: '<S163>/Data Store Read2'
      //   Product: '<S163>/Matrix Multiply'
      //   Reshape: '<S163>/Reshape1'
      //   Sum: '<S163>/Subtract4'
      //   Sum: '<S163>/Subtract5'

      r_T[0] = GNC2026W_DW.BLUE_Measured_States[0] -
        GNC2026W_DW.BLUE_Desired_States[0];
      r_T[1] = GNC2026W_DW.BLUE_Measured_States[1] -
        GNC2026W_DW.BLUE_Desired_States[1];

      // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

      // Product: '<S163>/Matrix Multiply' incorporates:
      //   Reshape: '<S163>/Reshape2'
      //   UnitDelay: '<S180>/UD'
      //   UnitDelay: '<S181>/UD'
      //   UnitDelay: '<S182>/UD'
      //
      //  Block description for '<S180>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S181>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S182>/UD':
      //
      //   Store in Global RAM

      r_T[3] = GNC2026W_DW.UD_DSTATE_l;
      r_T[4] = GNC2026W_DW.UD_DSTATE_k;
      r_T[5] = GNC2026W_DW.UD_DSTATE_h;
      for (r = 0; r < 3; r++) {
        // Product: '<S163>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge2'

        avg_idx_1 = 0.0;
        for (aoffset = 0; aoffset < 6; aoffset++) {
          // Merge: '<S3>/Merge2' incorporates:
          //   Product: '<S163>/Matrix Multiply'
          //   Reshape: '<S163>/Reshape4'

          avg_idx_1 += P_xy[3 * aoffset + r] * r_T[aoffset];
        }

        // Merge: '<S3>/Merge2' incorporates:
        //   Product: '<S163>/Matrix Multiply'

        GNC2026W_B.Merge2[r] = avg_idx_1;
      }

      // Update for UnitDelay: '<S180>/UD'
      //
      //  Block description for '<S180>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_l = LOS_Angle;

      // Update for UnitDelay: '<S181>/UD'
      //
      //  Block description for '<S181>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = rtb_TSamp_m2;

      // Update for UnitDelay: '<S182>/UD'
      //
      //  Block description for '<S182>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = avg_idx_0;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLUE)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLUE)' incorporates:
      //   ActionPort: '<S171>/Action Port'

      GNC2026W_DisableThrustersBLACK(GNC2026W_B.Merge2,
        &GNC2026W_P.DisableThrustersBLUE);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLUE)'
    }

    // End of If: '<S3>/If2'

    // If: '<S3>/If3' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read5'

    if (GNC2026W_DW.ARM_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD (ARM)' incorporates:
      //   ActionPort: '<S165>/Action Port'

      // DataStoreWrite: '<S165>/Data Store Write12' incorporates:
      //   Constant: '<S165>/Constant7'

      GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.Constant7_Value;

      // If: '<S165>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
      //   DataStoreRead: '<S165>/Data Store Read4'

      if (GNC2026W_DW.isSim == 1.0) {
        // Outputs for IfAction SubSystem: '<S165>/Simulated Position Controller' incorporates:
        //   ActionPort: '<S190>/Action Port'

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S137>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S145>/Data Store Read'
        //   DataStoreRead: '<S190>/Data Store Read2'
        //   Sum: '<S190>/Subtract3'

        LOS_Angle = GNC2026W_DW.ARM_Desired_States[1] -
          GNC2026W_DW.ARM_Measured_States[1];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S194>/TSamp'
        //
        //  About '<S194>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_m2 = LOS_Angle * GNC2026W_P.TSamp_WtEt_pu;

        // Sum: '<S191>/Sum3' incorporates:
        //   Gain: '<S191>/kd_elarm'
        //   Gain: '<S191>/kp_elarm'
        //   Sum: '<S194>/Diff'
        //   UnitDelay: '<S194>/UD'
        //
        //  Block description for '<S194>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S194>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE = (rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE) *
          GNC2026W_P.Kd_elarm + GNC2026W_P.Kp_elarm * LOS_Angle;

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S137>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S145>/Data Store Read'
        //   DataStoreRead: '<S190>/Data Store Read2'
        //   Sum: '<S190>/Subtract2'

        LOS_Angle = GNC2026W_DW.ARM_Desired_States[0] -
          GNC2026W_DW.ARM_Measured_States[0];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S195>/TSamp'
        //
        //  About '<S195>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        avg_idx_0 = LOS_Angle * GNC2026W_P.TSamp_WtEt_f0;

        // Sum: '<S192>/Sum3' incorporates:
        //   Gain: '<S192>/kd_sharm'
        //   Gain: '<S192>/kp_sharm'
        //   Sum: '<S195>/Diff'
        //   UnitDelay: '<S195>/UD'
        //
        //  Block description for '<S195>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S195>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_e = (avg_idx_0 - GNC2026W_DW.UD_DSTATE_e) *
          GNC2026W_P.Kd_sharm + GNC2026W_P.Kp_sharm * LOS_Angle;

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S137>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S145>/Data Store Read'
        //   DataStoreRead: '<S190>/Data Store Read2'
        //   Sum: '<S190>/Subtract4'

        LOS_Angle = GNC2026W_DW.ARM_Desired_States[2] -
          GNC2026W_DW.ARM_Measured_States[2];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

        // SampleTimeMath: '<S196>/TSamp'
        //
        //  About '<S196>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        avg_idx_1 = LOS_Angle * GNC2026W_P.TSamp_WtEt_nz;

        // Sum: '<S193>/Sum3' incorporates:
        //   Gain: '<S193>/kd_wrarm'
        //   Gain: '<S193>/kp_wrarm'
        //   Sum: '<S196>/Diff'
        //   UnitDelay: '<S196>/UD'
        //
        //  Block description for '<S196>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S196>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_a = (avg_idx_1 - GNC2026W_DW.UD_DSTATE_a) *
          GNC2026W_P.Kd_wrarm + GNC2026W_P.Kp_wrarm * LOS_Angle;

        // Saturate: '<S190>/Saturation' incorporates:
        //   UnitDelay: '<S195>/UD'
        //
        //  Block description for '<S195>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_e > GNC2026W_P.Tz_lim_sharm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge3'

          rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_P.Tz_lim_sharm;
        } else if (GNC2026W_DW.UD_DSTATE_e < -GNC2026W_P.Tz_lim_sharm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge3'

          rtb_TmpSignalConversionAtSFun_b[0] = -GNC2026W_P.Tz_lim_sharm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge3'

          rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_DW.UD_DSTATE_e;
        }

        // End of Saturate: '<S190>/Saturation'

        // Saturate: '<S190>/Saturation1' incorporates:
        //   UnitDelay: '<S194>/UD'
        //
        //  Block description for '<S194>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE > GNC2026W_P.Tz_lim_elarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge4'

          rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_P.Tz_lim_elarm;
        } else if (GNC2026W_DW.UD_DSTATE < -GNC2026W_P.Tz_lim_elarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge4'

          rtb_TmpSignalConversionAtSFun_b[1] = -GNC2026W_P.Tz_lim_elarm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge4'

          rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_DW.UD_DSTATE;
        }

        // End of Saturate: '<S190>/Saturation1'

        // Saturate: '<S190>/Saturation3' incorporates:
        //   UnitDelay: '<S196>/UD'
        //
        //  Block description for '<S196>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_a > GNC2026W_P.Tz_lim_wrarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge5'

          rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_P.Tz_lim_wrarm;
        } else if (GNC2026W_DW.UD_DSTATE_a < -GNC2026W_P.Tz_lim_wrarm) {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge5'

          rtb_TmpSignalConversionAtSFun_b[2] = -GNC2026W_P.Tz_lim_wrarm;
        } else {
          // Merge: '<S3>/Merge6' incorporates:
          //   Merge: '<S165>/Merge5'

          rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_DW.UD_DSTATE_a;
        }

        // End of Saturate: '<S190>/Saturation3'

        // Update for UnitDelay: '<S194>/UD'
        //
        //  Block description for '<S194>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE = rtb_TSamp_m2;

        // Update for UnitDelay: '<S195>/UD'
        //
        //  Block description for '<S195>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_e = avg_idx_0;

        // Update for UnitDelay: '<S196>/UD'
        //
        //  Block description for '<S196>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_a = avg_idx_1;

        // End of Outputs for SubSystem: '<S165>/Simulated Position Controller'
      } else {
        // Outputs for IfAction SubSystem: '<S165>/Passthrough for Experiment' incorporates:
        //   ActionPort: '<S189>/Action Port'

        // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
        //   ActionPort: '<S137>/Action Port'

        // If: '<S2>/If3' incorporates:
        //   DataStoreRead: '<S145>/Data Store Read'
        //   Merge: '<S165>/Merge3'
        //   Merge: '<S165>/Merge4'
        //   Merge: '<S165>/Merge5'
        //   Merge: '<S3>/Merge6'
        //   SignalConversion generated from: '<S189>/q1_desired'
        //   SignalConversion generated from: '<S189>/q2_desired'
        //   SignalConversion generated from: '<S189>/q3_desired'

        rtb_TmpSignalConversionAtSFun_b[0] = GNC2026W_DW.ARM_Desired_States[0];
        rtb_TmpSignalConversionAtSFun_b[1] = GNC2026W_DW.ARM_Desired_States[1];
        rtb_TmpSignalConversionAtSFun_b[2] = GNC2026W_DW.ARM_Desired_States[2];

        // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'
        // End of Outputs for SubSystem: '<S165>/Passthrough for Experiment'
      }

      // End of If: '<S165>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      // End of Outputs for SubSystem: '<S3>/Default PD (ARM)'
    } else if (GNC2026W_DW.ARM_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (ARM)' incorporates:
      //   ActionPort: '<S160>/Action Port'

      GNC2026W_DisableThrustersRED(rtb_TmpSignalConversionAtSFun_b,
        &GNC2026W_P.CustomControlARM);

      // End of Outputs for SubSystem: '<S3>/Custom Control (ARM)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Control (ARM)' incorporates:
      //   ActionPort: '<S169>/Action Port'

      // DataStoreWrite: '<S169>/Data Store Write12' incorporates:
      //   Constant: '<S169>/Constant7'

      GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.Constant7_Value_h;

      // Merge: '<S3>/Merge6' incorporates:
      //   Constant: '<S169>/Zero'
      //   SignalConversion generated from: '<S169>/Out1'

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
      //   ActionPort: '<S168>/Action Port'

      // MATLAB Function: '<S207>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read1'
      //   DataStoreRead: '<S168>/Data Store Read13'

      GNC2026W_MATLABFunction_n(RED_Path[2], GNC2026W_DW.RED_Measured_States[2],
        &LOS_Angle);

      // SampleTimeMath: '<S208>/TSamp' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read1'
      //
      //  About '<S208>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_m2 = RED_Path[0] * GNC2026W_P.TSamp_WtEt;

      // Sum: '<S208>/Diff' incorporates:
      //   UnitDelay: '<S208>/UD'
      //
      //  Block description for '<S208>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S208>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE_eg;

      // SampleTimeMath: '<S209>/TSamp' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read1'
      //
      //  About '<S209>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_0 = RED_Path[1] * GNC2026W_P.TSamp_WtEt_f;

      // Sum: '<S209>/Diff' incorporates:
      //   UnitDelay: '<S209>/UD'
      //
      //  Block description for '<S209>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S209>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = avg_idx_0 - GNC2026W_DW.UD_DSTATE_cd;

      // SampleTimeMath: '<S210>/TSamp' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read1'
      //
      //  About '<S210>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_1 = RED_Path[2] * GNC2026W_P.TSamp_WtEt_c;

      // Sum: '<S210>/Diff' incorporates:
      //   UnitDelay: '<S210>/UD'
      //
      //  Block description for '<S210>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S210>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = avg_idx_1 - GNC2026W_DW.UD_DSTATE_hd;

      // Sum: '<S168>/Subtract7' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read13'
      //   UnitDelay: '<S208>/UD'
      //
      //  Block description for '<S208>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = GNC2026W_DW.RED_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_eg;

      // Sum: '<S168>/Subtract6' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read13'
      //   UnitDelay: '<S209>/UD'
      //
      //  Block description for '<S209>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = GNC2026W_DW.RED_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_cd;

      // Sum: '<S168>/Subtract8' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read13'
      //   UnitDelay: '<S210>/UD'
      //
      //  Block description for '<S210>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = GNC2026W_DW.RED_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_hd;

      // Gain: '<S168>/Gain6' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read1'
      //   DataStoreRead: '<S168>/Data Store Read13'
      //   Gain: '<S168>/Gain'
      //   Gain: '<S168>/Gain3'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S168>/Subtract5'
      //   Sum: '<S168>/Sum'
      //   UnitDelay: '<S208>/UD'
      //
      //  Block description for '<S208>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[0] = ((GNC2026W_DW.RED_Measured_States[0] - RED_Path[0]) *
        GNC2026W_P.Kp_xr + GNC2026W_P.Kd_xr * GNC2026W_DW.UD_DSTATE_eg) *
        GNC2026W_P.Gain6_Gain;

      // Gain: '<S168>/Gain7' incorporates:
      //   DataStoreRead: '<S168>/Data Store Read1'
      //   DataStoreRead: '<S168>/Data Store Read13'
      //   Gain: '<S168>/Gain1'
      //   Gain: '<S168>/Gain4'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S168>/Subtract4'
      //   Sum: '<S168>/Sum1'
      //   UnitDelay: '<S209>/UD'
      //
      //  Block description for '<S209>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[1] = ((GNC2026W_DW.RED_Measured_States[1] - RED_Path[1]) *
        GNC2026W_P.Kp_yr + GNC2026W_P.Kd_yr * GNC2026W_DW.UD_DSTATE_cd) *
        GNC2026W_P.Gain7_Gain;

      // Gain: '<S168>/Gain8' incorporates:
      //   Gain: '<S168>/Gain2'
      //   Gain: '<S168>/Gain5'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S168>/Sum2'
      //   UnitDelay: '<S210>/UD'
      //
      //  Block description for '<S210>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[2] = (GNC2026W_P.Kp_tr * LOS_Angle + GNC2026W_P.Kd_tr *
        GNC2026W_DW.UD_DSTATE_hd) * GNC2026W_P.Gain8_Gain;

      // Update for UnitDelay: '<S208>/UD'
      //
      //  Block description for '<S208>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = rtb_TSamp_m2;

      // Update for UnitDelay: '<S209>/UD'
      //
      //  Block description for '<S209>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = avg_idx_0;

      // Update for UnitDelay: '<S210>/UD'
      //
      //  Block description for '<S210>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = avg_idx_1;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (RED)'
    } else if (GNC2026W_DW.RED_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (RED)' incorporates:
      //   ActionPort: '<S164>/Action Port'

      // Product: '<S164>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read1'
      //   DataStoreRead: '<S164>/Data Store Read13'
      //   MATLAB Function: '<S184>/MATLAB Function'

      GNC2026W_MATLABFunction_n(RED_Path[2], GNC2026W_DW.RED_Measured_States[2],
        &tmp[2]);

      // SampleTimeMath: '<S185>/TSamp' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read1'
      //
      //  About '<S185>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      LOS_Angle = RED_Path[0] * GNC2026W_P.TSamp_WtEt_h;

      // Sum: '<S185>/Diff' incorporates:
      //   UnitDelay: '<S185>/UD'
      //
      //  Block description for '<S185>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S185>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = LOS_Angle - GNC2026W_DW.UD_DSTATE_aq;

      // SampleTimeMath: '<S186>/TSamp' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read1'
      //
      //  About '<S186>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_m2 = RED_Path[1] * GNC2026W_P.TSamp_WtEt_e;

      // Sum: '<S186>/Diff' incorporates:
      //   UnitDelay: '<S186>/UD'
      //
      //  Block description for '<S186>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S186>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_p = rtb_TSamp_m2 - GNC2026W_DW.UD_DSTATE_p;

      // SampleTimeMath: '<S187>/TSamp' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read1'
      //
      //  About '<S187>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      avg_idx_0 = RED_Path[2] * GNC2026W_P.TSamp_WtEt_n;

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

      GNC2026W_DW.UD_DSTATE_pr = avg_idx_0 - GNC2026W_DW.UD_DSTATE_pr;

      // Sum: '<S164>/Subtract7' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read13'
      //   UnitDelay: '<S185>/UD'
      //
      //  Block description for '<S185>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = GNC2026W_DW.RED_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_aq;

      // Sum: '<S164>/Subtract6' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read13'
      //   UnitDelay: '<S186>/UD'
      //
      //  Block description for '<S186>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_p = GNC2026W_DW.RED_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_p;

      // Sum: '<S164>/Subtract8' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read13'
      //   UnitDelay: '<S187>/UD'
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = GNC2026W_DW.RED_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_pr;
      for (r = 0; r < 18; r++) {
        // Product: '<S164>/Matrix Multiply' incorporates:
        //   Constant: '<S164>/Constant2'

        P_xy[r] = -GNC2026W_P.K_RED[r];
      }

      // Product: '<S164>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S164>/Data Store Read1'
      //   DataStoreRead: '<S164>/Data Store Read13'
      //   Reshape: '<S164>/Reshape2'
      //   Reshape: '<S164>/Reshape3'
      //   Sum: '<S164>/Subtract4'
      //   Sum: '<S164>/Subtract5'
      //   UnitDelay: '<S185>/UD'
      //   UnitDelay: '<S186>/UD'
      //   UnitDelay: '<S187>/UD'
      //
      //  Block description for '<S185>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S186>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM

      tmp[0] = GNC2026W_DW.RED_Measured_States[0] - RED_Path[0];
      tmp[1] = GNC2026W_DW.RED_Measured_States[1] - RED_Path[1];
      tmp[3] = GNC2026W_DW.UD_DSTATE_aq;
      tmp[4] = GNC2026W_DW.UD_DSTATE_p;
      tmp[5] = GNC2026W_DW.UD_DSTATE_pr;
      for (r = 0; r < 3; r++) {
        // Product: '<S164>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge'

        avg_idx_1 = 0.0;
        for (aoffset = 0; aoffset < 6; aoffset++) {
          // Merge: '<S3>/Merge' incorporates:
          //   Product: '<S164>/Matrix Multiply'
          //   Reshape: '<S164>/Reshape4'

          avg_idx_1 += P_xy[3 * aoffset + r] * tmp[aoffset];
        }

        // Merge: '<S3>/Merge' incorporates:
        //   Product: '<S164>/Matrix Multiply'

        GNC2026W_B.Merge[r] = avg_idx_1;
      }

      // Update for UnitDelay: '<S185>/UD'
      //
      //  Block description for '<S185>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = LOS_Angle;

      // Update for UnitDelay: '<S186>/UD'
      //
      //  Block description for '<S186>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_p = rtb_TSamp_m2;

      // Update for UnitDelay: '<S187>/UD'
      //
      //  Block description for '<S187>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = avg_idx_0;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (RED)'
    } else if (GNC2026W_DW.RED_Control_Law_Enabler == 3.0) {
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (RED)' incorporates:
      //   ActionPort: '<S161>/Action Port'

      // MATLAB Function: '<S161>/MATLAB Function3' incorporates:
      //   DataStoreRead: '<S161>/Data Store Read5'

      for (r = 0; r < 3; r++) {
        for (aoffset = 0; aoffset < 3; aoffset++) {
          br = 3 * aoffset + r;
          Fdt[aoffset + 3 * r] = GNC2026W_P.A_c[br];
          phi_tmp[br] = (GNC2026W_P.Mc_inv[3 * aoffset + 1] * GNC2026W_P.A_c[r +
                         3] + GNC2026W_P.Mc_inv[3 * aoffset] * GNC2026W_P.A_c[r])
            + GNC2026W_P.Mc_inv[3 * aoffset + 2] * GNC2026W_P.A_c[r + 6];
        }
      }

      for (r = 0; r < 3; r++) {
        avg_idx_1 = Fdt[3 * r + 1];
        th_c = Fdt[3 * r];
        sc = Fdt[3 * r + 2];
        for (aoffset = 0; aoffset < 3; aoffset++) {
          rtb_q_des[aoffset + 3 * r] = (phi_tmp[aoffset + 3] * avg_idx_1 + th_c *
            phi_tmp[aoffset]) + phi_tmp[aoffset + 6] * sc;
        }
      }

      rtb_NOT = true;
      for (r = 0; r < 9; r++) {
        phi[r] = 0.0;
        if (rtb_NOT) {
          LOS_Angle = rtb_q_des[r];
          if (rtIsInf(LOS_Angle) || rtIsNaN(LOS_Angle)) {
            rtb_NOT = false;
          }
        }
      }

      if (!rtb_NOT) {
        for (r = 0; r < 9; r++) {
          phi[r] = (rtNaN);
        }
      } else {
        GNC2026W_svd_n(rtb_q_des, phi_1, K, V);
        LOS_Angle = fabs(K[0]);
        if (rtIsInf(LOS_Angle) || rtIsNaN(LOS_Angle)) {
          avg_idx_0 = (rtNaN);
        } else if (LOS_Angle < 4.4501477170144028E-308) {
          avg_idx_0 = 4.94065645841247E-324;
        } else {
          frexp(LOS_Angle, &d_coffset);
          avg_idx_0 = ldexp(1.0, d_coffset - 53);
        }

        LOS_Angle = 3.0 * avg_idx_0;
        i = 0;
        exitg2 = false;
        while ((!exitg2) && (i < 3)) {
          if (rtIsInf(K[i]) || rtIsNaN(K[i])) {
            LOS_Angle = 1.7976931348623157E+308;
            exitg2 = true;
          } else {
            i++;
          }
        }

        r = -1;
        aoffset = 0;
        while ((aoffset < 3) && (K[aoffset] > LOS_Angle)) {
          r++;
          aoffset++;
        }

        if (r + 1 > 0) {
          i = 1;
          for (d_coffset = 0; d_coffset <= r; d_coffset++) {
            LOS_Angle = 1.0 / K[d_coffset];
            for (aoffset = i; aoffset <= i + 2; aoffset++) {
              V[aoffset - 1] *= LOS_Angle;
            }

            i += 3;
          }

          for (d_coffset = 0; d_coffset <= 6; d_coffset += 3) {
            for (aoffset = d_coffset + 1; aoffset <= d_coffset + 3; aoffset++) {
              phi[aoffset - 1] = 0.0;
            }
          }

          br = 0;
          for (d_coffset = 0; d_coffset <= 6; d_coffset += 3) {
            ar = -1;
            br++;
            boffset = 3 * r + br;
            for (aoffset = br; aoffset <= boffset; aoffset += 3) {
              for (i = d_coffset + 1; i <= d_coffset + 3; i++) {
                phi[i - 1] += V[(ar + i) - d_coffset] * phi_1[aoffset - 1];
              }

              ar += 3;
            }
          }
        }
      }

      for (r = 0; r < 3; r++) {
        rtb_TSamp_m2 = 0.0;
        avg_idx_0 = 0.0;
        LOS_Angle = 0.0;
        avg_idx_1 = Fdt[r + 3];
        th_c = Fdt[r];
        sc = Fdt[r + 6];
        for (aoffset = 0; aoffset < 3; aoffset++) {
          i = 3 * aoffset + r;
          rtb_TSamp_m2 += GNC2026W_DW.error[aoffset + 3] * GNC2026W_P.alpha[i];
          LOS_Angle += GNC2026W_P.gamma[i] * GNC2026W_DW.error[aoffset];
          rtb_q_des[i] = (phi[3 * aoffset + 1] * avg_idx_1 + phi[3 * aoffset] *
                          th_c) + phi[3 * aoffset + 2] * sc;
          avg_idx_0 += phi_tmp[i] * GNC2026W_P.F_u[aoffset];
        }

        K[r] = ((-GNC2026W_DW.error[r + 6] - rtb_TSamp_m2) - LOS_Angle) -
          avg_idx_0;
      }

      rtb_TSamp_m2 = K[1];
      avg_idx_0 = K[0];
      LOS_Angle = K[2];
      for (r = 0; r < 3; r++) {
        // Merge: '<S3>/Merge' incorporates:
        //   Reshape: '<S161>/Reshape1'

        GNC2026W_B.Merge[r] = (rtb_q_des[r + 3] * rtb_TSamp_m2 + rtb_q_des[r] *
          avg_idx_0) + rtb_q_des[r + 6] * LOS_Angle;
      }

      // End of MATLAB Function: '<S161>/MATLAB Function3'
      // End of Outputs for SubSystem: '<S3>/Custom Control (RED)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (RED)' incorporates:
      //   ActionPort: '<S172>/Action Port'

      GNC2026W_DisableThrustersRED(GNC2026W_B.Merge,
        &GNC2026W_P.DisableThrustersRED);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (RED)'
    }

    // End of If: '<S3>/If'

    // MATLAB Function: '<S216>/MATLAB Function' incorporates:
    //   DataStoreRead: '<S216>/Data Store Read31'
    //   DataStoreRead: '<S216>/Data Store Read32'
    //   DataStoreWrite: '<S5>/Data Store Write2'

    LOS_Angle = GNC2026W_DW.RED_Measured_States[1] -
      GNC2026W_DW.BLACK_Measured_States[1];
    rtb_TSamp_m2 = GNC2026W_DW.RED_Measured_States[0] -
      GNC2026W_DW.BLACK_Measured_States[0];
    LOS_Angle = sqrt(LOS_Angle * LOS_Angle + rtb_TSamp_m2 * rtb_TSamp_m2);

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read1'
    //   DataStoreRead: '<S5>/Data Store Read20'
    //   DataStoreRead: '<S5>/Data Store Read23'
    //   DataStoreRead: '<S5>/Data Store Read25'
    //   DataStoreRead: '<S5>/Data Store Read3'
    //   DataStoreRead: '<S5>/Data Store Read37'
    //   DataStoreRead: '<S5>/Data Store Read4'
    //   DataStoreRead: '<S5>/Data Store Read6'
    //   DataStoreRead: '<S5>/Data Store Read7'
    //   DataStoreRead: '<S5>/Data Store Read8'
    //   DataStoreWrite: '<S3>/Data Store Write9'
    //   DataStoreWrite: '<S3>/RED Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[0] = GNC2026W_DW.Univ_Time;
    b_u1[1] = GNC2026W_B.Merge[0];
    b_u1[4] = GNC2026W_DW.RED_Saturated_Controls[0];
    b_u1[2] = GNC2026W_B.Merge[1];
    b_u1[5] = GNC2026W_DW.RED_Saturated_Controls[1];
    b_u1[3] = GNC2026W_B.Merge[2];
    b_u1[6] = GNC2026W_DW.RED_Saturated_Controls[2];
    memcpy(&b_u1[7], &GNC2026W_DW.RED_Measured_States[0], 9U * sizeof(real_T));
    b_u1[16] = GNC2026W_DW.RED_Desired_States[0];
    b_u1[19] = GNC2026W_DW.RED_IMU_Measurements[0];
    b_u1[17] = GNC2026W_DW.RED_Desired_States[1];
    b_u1[20] = GNC2026W_DW.RED_IMU_Measurements[1];
    b_u1[18] = GNC2026W_DW.RED_Desired_States[2];
    b_u1[21] = GNC2026W_DW.RED_IMU_Measurements[2];
    memcpy(&b_u1[22], &GNC2026W_DW.RED_Duty_Cycle[0], sizeof(real_T) << 3U);
    b_u1[30] = GNC2026W_DW.RED_Control_Law_Enabler;
    b_u1[34] = GNC2026W_DW.ARM_Control_Mode;
    b_u1[31] = RED_Path[0];
    b_u1[35] = rtb_TmpSignalConversionAtSFun_b[0];
    b_u1[32] = RED_Path[1];
    b_u1[36] = rtb_TmpSignalConversionAtSFun_b[1];
    b_u1[33] = RED_Path[2];
    b_u1[37] = rtb_TmpSignalConversionAtSFun_b[2];
    for (i = 0; i < 6; i++) {
      b_u1[i + 38] = GNC2026W_DW.ARM_Measured_States[i];
    }

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S137>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S145>/Data Store Read'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[44] = GNC2026W_DW.ARM_Desired_States[0];
    b_u1[47] = GNC2026W_DW.ARM_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read9'
    //   DataStoreWrite: '<S3>/BLACK Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[50] = GNC2026W_B.Merge1[0];
    b_u1[53] = GNC2026W_DW.BLACK_Saturated_Controls[0];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S137>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S145>/Data Store Read'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[45] = GNC2026W_DW.ARM_Desired_States[1];
    b_u1[48] = GNC2026W_DW.ARM_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read9'
    //   DataStoreWrite: '<S3>/BLACK Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[51] = GNC2026W_B.Merge1[1];
    b_u1[54] = GNC2026W_DW.BLACK_Saturated_Controls[1];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
    //   ActionPort: '<S137>/Action Port'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S145>/Data Store Read'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[46] = GNC2026W_DW.ARM_Desired_States[2];
    b_u1[49] = GNC2026W_DW.ARM_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (ARM)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read10'
    //   DataStoreRead: '<S5>/Data Store Read11'
    //   DataStoreRead: '<S5>/Data Store Read12'
    //   DataStoreRead: '<S5>/Data Store Read26'
    //   DataStoreRead: '<S5>/Data Store Read60'
    //   DataStoreRead: '<S5>/Data Store Read9'
    //   DataStoreWrite: '<S3>/BLACK Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[52] = GNC2026W_B.Merge1[2];
    b_u1[55] = GNC2026W_DW.BLACK_Saturated_Controls[2];
    memcpy(&b_u1[56], &GNC2026W_DW.BLACK_Measured_States[0], 9U * sizeof(real_T));
    b_u1[65] = GNC2026W_DW.BLACK_Desired_States[0];
    b_u1[68] = GNC2026W_DW.BLACK_IMU_Measurements[0];
    b_u1[66] = GNC2026W_DW.BLACK_Desired_States[1];
    b_u1[69] = GNC2026W_DW.BLACK_IMU_Measurements[1];
    b_u1[67] = GNC2026W_DW.BLACK_Desired_States[2];
    b_u1[70] = GNC2026W_DW.BLACK_IMU_Measurements[2];
    memcpy(&b_u1[71], &GNC2026W_DW.BLACK_Duty_Cycles[0], sizeof(real_T) << 3U);
    b_u1[79] = GNC2026W_DW.BLACK_Control_Law_Enabler;

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S138>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S146>/BLACK_Px'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[80] = GNC2026W_DW.BLACK_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read16'
    //   DataStoreWrite: '<S3>/BLUE Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[83] = GNC2026W_B.Merge2[0];
    b_u1[86] = GNC2026W_DW.BLUE_Saturated_Controls[0];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S138>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S146>/BLACK_Px'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[81] = GNC2026W_DW.BLACK_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read16'
    //   DataStoreWrite: '<S3>/BLUE Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[84] = GNC2026W_B.Merge2[1];
    b_u1[87] = GNC2026W_DW.BLUE_Saturated_Controls[1];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
    //   ActionPort: '<S138>/Action Port'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S146>/BLACK_Px'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[82] = GNC2026W_DW.BLACK_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLACK)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read13'
    //   DataStoreRead: '<S5>/Data Store Read14'
    //   DataStoreRead: '<S5>/Data Store Read15'
    //   DataStoreRead: '<S5>/Data Store Read16'
    //   DataStoreRead: '<S5>/Data Store Read2'
    //   DataStoreRead: '<S5>/Data Store Read27'
    //   DataStoreRead: '<S5>/Data Store Read83'
    //   DataStoreRead: '<S5>/Data Store Read84'
    //   DataStoreRead: '<S5>/Data Store Read85'
    //   DataStoreRead: '<S5>/Data Store Read86'
    //   DataStoreWrite: '<S3>/BLUE Controls'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[85] = GNC2026W_B.Merge2[2];
    b_u1[88] = GNC2026W_DW.BLUE_Saturated_Controls[2];
    memcpy(&b_u1[89], &GNC2026W_DW.BLUE_Measured_States[0], 9U * sizeof(real_T));
    b_u1[98] = GNC2026W_DW.BLUE_Desired_States[0];
    b_u1[101] = GNC2026W_DW.BLUE_IMU_Measurements[0];
    b_u1[99] = GNC2026W_DW.BLUE_Desired_States[1];
    b_u1[102] = GNC2026W_DW.BLUE_IMU_Measurements[1];
    b_u1[100] = GNC2026W_DW.BLUE_Desired_States[2];
    b_u1[103] = GNC2026W_DW.BLUE_IMU_Measurements[2];
    memcpy(&b_u1[104], &GNC2026W_DW.BLUE_Duty_Cycles[0], sizeof(real_T) << 3U);
    b_u1[112] = GNC2026W_DW.BLUE_Control_Law_Enabler;
    b_u1[116] = GNC2026W_DW.Float_State;
    b_u1[117] = GNC2026W_DW.WhoAmI;
    b_u1[118] = GNC2026W_DW.isSim;
    b_u1[122] = GNC2026W_DW.VIS_Confidence;

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S139>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S147>/Data Store Read4'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[113] = GNC2026W_DW.BLUE_Desired_States[0];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read'
    //   DataStoreRead: '<S5>/Data Store Read28'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[119] = GNC2026W_DW.VIS_Measured_States[0];
    b_u1[123] = GNC2026W_DW.BLACK_CV_States[0];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S139>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S147>/Data Store Read4'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[114] = GNC2026W_DW.BLUE_Desired_States[1];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read'
    //   DataStoreRead: '<S5>/Data Store Read28'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[120] = GNC2026W_DW.VIS_Measured_States[1];
    b_u1[124] = GNC2026W_DW.BLACK_CV_States[1];

    // Outputs for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
    //   ActionPort: '<S139>/Action Port'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S147>/Data Store Read4'
    //   MATLABSystem: '<S215>/MATLAB System'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[115] = GNC2026W_DW.BLUE_Desired_States[2];

    // End of Outputs for SubSystem: '<S2>/Custom PPL (BLUE)'

    // MATLABSystem: '<S215>/MATLAB System' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read'
    //   DataStoreRead: '<S5>/Data Store Read28'
    //   DataStoreRead: '<S5>/Data Store Read29'
    //   DataStoreRead: '<S5>/Data Store Read31'
    //   DataStoreRead: '<S5>/Data Store Read32'
    //   DataStoreRead: '<S5>/Data Store Read33'
    //   DataStoreRead: '<S5>/Data Store Read34'
    //   DataStoreRead: '<S5>/Data Store Read35'
    //   DataStoreRead: '<S5>/Data Store Read36'
    //   DataStoreRead: '<S5>/Data Store Read38'
    //   DataStoreRead: '<S5>/Data Store Read39'
    //   DataStoreRead: '<S5>/Data Store Read40'
    //   DataStoreRead: '<S5>/Data Store Read41'
    //   DataStoreRead: '<S5>/Data Store Read42'
    //   DataStoreRead: '<S5>/Data Store Read43'
    //   DataStoreRead: '<S5>/Data Store Read44'
    //   DataStoreRead: '<S5>/Data Store Read45'
    //   DataStoreRead: '<S5>/Data Store Read46'
    //   DataStoreRead: '<S5>/Data Store Read47'
    //   DataStoreRead: '<S5>/Data Store Read48'
    //   DataStoreRead: '<S5>/Data Store Read49'
    //   DataStoreRead: '<S5>/Data Store Read50'
    //   DataStoreWrite: '<S5>/Data Store Write2'
    //   MATLAB Function: '<S215>/MATLAB Function'
    //   SignalConversion generated from: '<S215>/MATLAB System'

    b_u1[121] = GNC2026W_DW.VIS_Measured_States[2];
    b_u1[125] = GNC2026W_DW.BLACK_CV_States[2];
    for (i = 0; i < 6; i++) {
      b_u1[i + 126] = GNC2026W_DW.BLACK_Filtered_States[i];
    }

    b_u1[135] = LOS_Angle;
    b_u1[136] = GNC2026W_DW.L0;
    b_u1[140] = GNC2026W_DW.isValid;
    b_u1[141] = GNC2026W_DW.filterConfidence;
    b_u1[151] = GNC2026W_DW.ARM_Grab_Complete;
    b_u1[152] = GNC2026W_DW.ARM_Extend;
    b_u1[159] = GNC2026W_DW.Begin_Grab;
    b_u1[160] = GNC2026W_DW.Begin_Berth;
    b_u1[132] = GNC2026W_DW.VIS_LAR_States[0];
    b_u1[137] = GNC2026W_DW.sigma3[0];
    b_u1[142] = GNC2026W_DW.lambda[0];
    b_u1[145] = GNC2026W_DW.lambdaFirstOrder[0];
    b_u1[148] = GNC2026W_DW.ARM_Joint_Angles_rad[0];
    b_u1[153] = GNC2026W_DW.residual[0];
    b_u1[156] = GNC2026W_DW.error[0];
    b_u1[161] = GNC2026W_DW.EE_Goal[0];
    b_u1[133] = GNC2026W_DW.VIS_LAR_States[1];
    b_u1[138] = GNC2026W_DW.sigma3[1];
    b_u1[143] = GNC2026W_DW.lambda[1];
    b_u1[146] = GNC2026W_DW.lambdaFirstOrder[1];
    b_u1[149] = GNC2026W_DW.ARM_Joint_Angles_rad[1];
    b_u1[154] = GNC2026W_DW.residual[1];
    b_u1[157] = GNC2026W_DW.error[1];
    b_u1[162] = GNC2026W_DW.EE_Goal[1];
    b_u1[134] = GNC2026W_DW.VIS_LAR_States[2];
    b_u1[139] = GNC2026W_DW.sigma3[2];
    b_u1[144] = GNC2026W_DW.lambda[2];
    b_u1[147] = GNC2026W_DW.lambdaFirstOrder[2];
    b_u1[150] = GNC2026W_DW.ARM_Joint_Angles_rad[2];
    b_u1[155] = GNC2026W_DW.residual[2];
    b_u1[158] = GNC2026W_DW.error[2];
    b_u1[163] = GNC2026W_DW.EE_Goal[2];
    b_u1[164] = GNC2026W_DW.Grab_Location_Reached;
    b_u1[165] = GNC2026W_DW.EE_Path[0];
    b_u1[167] = GNC2026W_DW.EE_Desired[0];
    b_u1[166] = GNC2026W_DW.EE_Path[1];
    b_u1[168] = GNC2026W_DW.EE_Desired[1];
    b_u1[169] = GNC2026W_DW.detumble;

    //         %% Define input properties
    //  Call C-function implementing device output
    appendDataToFile(&b_u1[0], 170.0);

    // DataStoreWrite: '<S17>/Data Store Write' incorporates:
    //   Constant: '<S17>/Constant'

    GNC2026W_DW.isSim = GNC2026W_P.simMode;

    // If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S348>/Constant1'
    //   Constant: '<S348>/Constant2'
    //   DataStoreRead: '<S18>/Data Store Read'
    //   DataStoreRead: '<S18>/Data Store Read1'
    //   Delay: '<S348>/Delay'
    //   RelationalOperator: '<S348>/Relational Operator1'
    //   RelationalOperator: '<S348>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 1.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S18>/Change RED Behavior' incorporates:
      //   ActionPort: '<S321>/Action Port'

      // MATLAB Function: '<S352>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S321>/Data Store Read1'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.RED_Measured_States[2], rtb_C_Ib);

      // MATLAB Function: '<S347>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S321>/Data Store Read1'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.RED_Measured_States[2],
        &rtb_ThrustPer_Final_p[0]);

      // Product: '<S347>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_TSamp_m2 = rtb_ThrustPer_Final_p[0] * GNC2026W_B.Merge[0] +
        GNC2026W_B.Merge[1] * rtb_ThrustPer_Final_p[2];

      // SignalConversion generated from: '<S349>/Product3' incorporates:
      //   Product: '<S347>/Rotate F_I to F_b'

      RED_Path[0] = rtb_TSamp_m2;

      // Product: '<S347>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      avg_idx_0 = GNC2026W_B.Merge[0] * rtb_ThrustPer_Final_p[1] +
        GNC2026W_B.Merge[1] * rtb_ThrustPer_Final_p[3];

      // SignalConversion generated from: '<S349>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      RED_Path[1] = avg_idx_0;
      RED_Path[2] = GNC2026W_B.Merge[2];

      // MATLAB Function: '<S349>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3[i] = GNC2026W_P.F_thrusters_RED[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (d_coffset = 0; d_coffset < 8; d_coffset++) {
        y[d_coffset + (d_coffset << 3)] = rtb_Product3[d_coffset];
        b[3 * d_coffset] = b_0[d_coffset];
        b[3 * d_coffset + 1] = c_0[d_coffset];
        b[3 * d_coffset + 2] = GNC2026W_P.thruster_dist2CG_RED[d_coffset] /
          1000.0;
      }

      for (r = 0; r < 8; r++) {
        for (aoffset = 0; aoffset < 3; aoffset++) {
          avg_idx_1 = 0.0;
          for (i = 0; i < 8; i++) {
            avg_idx_1 += b[3 * i + aoffset] * y[(r << 3) + i];
          }

          rtb_H[aoffset + 3 * r] = avg_idx_1;
        }
      }

      // End of MATLAB Function: '<S349>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1_pn);
      for (r = 0; r < 8; r++) {
        // Product: '<S349>/Product3' incorporates:
        //   MATLABSystem: '<S349>/Pseudoinverse1'
        //   Product: '<S347>/Rotate F_I to F_b'

        rtb_Product3[r] = (GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[r + 8] *
                           avg_idx_0 +
                           GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[r] *
                           rtb_TSamp_m2) +
          GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[r + 16] * RED_Path[2];
      }

      // MATLAB Function: '<S346>/MATLAB Function5' incorporates:
      //   Reshape: '<S346>/Reshape'

      GNC2026W_MATLABFunction5(RED_Path, rtb_Product3, rtb_H_final,
        GNC2026W_B.duty_cycles, GNC2026W_P.MATLABFunction5_max_iters_e,
        GNC2026W_P.MATLABFunction5_tol_g);

      // MATLAB Function: '<S346>/MATLAB Function8'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles, rtb_ThrustPer_Final_p);

      // Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S353>/Enable'

      if (GNC2026W_DW.Delay_DSTATE >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S353>/In1' incorporates:
        //   DataStoreRead: '<S348>/Data Store Read'

        GNC2026W_B.In1 = GNC2026W_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S348>/Enabled Subsystem'

      // Sum: '<S348>/Subtract' incorporates:
      //   Constant: '<S348>/Constant1'
      //   DataStoreRead: '<S348>/Data Store Read'
      //   Delay: '<S348>/Delay'
      //   RelationalOperator: '<S348>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE = GNC2026W_DW.Univ_Time - GNC2026W_B.In1;

      // Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S354>/Enable'

      if (GNC2026W_DW.Delay_DSTATE == GNC2026W_P.Constant2_Value_e) {
        // SignalConversion generated from: '<S354>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final[0], &rtb_ThrustPer_Final_p[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S348>/Enabled Subsystem1'

      // Product: '<S346>/Product1' incorporates:
      //   Constant: '<S348>/Constant2'
      //   Delay: '<S348>/Delay'
      //   RelationalOperator: '<S348>/Relational Operator2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp_m2 = 0.0;
        for (aoffset = 0; aoffset < 8; aoffset++) {
          rtb_TSamp_m2 += rtb_H_final[3 * aoffset + r] *
            GNC2026W_B.ThrustPer_Final[aoffset];
        }

        RED_Path[r] = rtb_TSamp_m2;
      }

      // End of Product: '<S346>/Product1'

      // DataStoreWrite: '<S321>/Data Store Write1' incorporates:
      //   Product: '<S352>/Rotate F_b to F_I'

      GNC2026W_DW.RED_Saturated_Controls[0] = rtb_C_Ib[0] * RED_Path[0] +
        RED_Path[1] * rtb_C_Ib[2];
      GNC2026W_DW.RED_Saturated_Controls[1] = RED_Path[0] * rtb_C_Ib[1] +
        RED_Path[1] * rtb_C_Ib[3];
      GNC2026W_DW.RED_Saturated_Controls[2] = RED_Path[2];

      // End of Outputs for SubSystem: '<S18>/Change RED Behavior'
    }

    // End of If: '<S18>/This IF block determines whether or not to run the RED sim//exp ' 

    // DataStoreWrite: '<S18>/Data Store Write'
    memcpy(&GNC2026W_DW.RED_Duty_Cycle[0], &GNC2026W_B.duty_cycles[0], sizeof
           (real_T) << 3U);

    // If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   Constant: '<S324>/Constant1'
    //   Constant: '<S324>/Constant2'
    //   DataStoreRead: '<S18>/Data Store Read'
    //   DataStoreRead: '<S18>/Data Store Read1'
    //   Delay: '<S324>/Delay'
    //   RelationalOperator: '<S324>/Relational Operator1'
    //   RelationalOperator: '<S324>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 2.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S18>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S319>/Action Port'

      // MATLAB Function: '<S328>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S319>/BLACK States'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.BLACK_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S323>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S319>/BLACK States'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.BLACK_Measured_States[2],
        &rtb_H_final_g[0]);

      // Product: '<S323>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_TSamp_m2 = rtb_H_final_g[0] * GNC2026W_B.Merge1[0] +
        GNC2026W_B.Merge1[1] * rtb_H_final_g[2];

      // SignalConversion generated from: '<S325>/Product3' incorporates:
      //   Product: '<S323>/Rotate F_I to F_b'

      RED_Path[0] = rtb_TSamp_m2;

      // Product: '<S323>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      avg_idx_0 = GNC2026W_B.Merge1[0] * rtb_H_final_g[1] + GNC2026W_B.Merge1[1]
        * rtb_H_final_g[3];

      // SignalConversion generated from: '<S325>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      RED_Path[1] = avg_idx_0;
      RED_Path[2] = GNC2026W_B.Merge1[2];

      // MATLAB Function: '<S325>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3[i] = GNC2026W_P.F_thrusters_BLACK[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (d_coffset = 0; d_coffset < 8; d_coffset++) {
        y[d_coffset + (d_coffset << 3)] = rtb_Product3[d_coffset];
        b[3 * d_coffset] = b_0[d_coffset];
        b[3 * d_coffset + 1] = c_0[d_coffset];
        b[3 * d_coffset + 2] = GNC2026W_P.thruster_dist2CG_BLACK[d_coffset] /
          1000.0;
      }

      for (r = 0; r < 8; r++) {
        for (aoffset = 0; aoffset < 3; aoffset++) {
          avg_idx_1 = 0.0;
          for (i = 0; i < 8; i++) {
            avg_idx_1 += b[3 * i + aoffset] * y[(r << 3) + i];
          }

          rtb_H[aoffset + 3 * r] = avg_idx_1;
        }
      }

      // End of MATLAB Function: '<S325>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1);
      for (r = 0; r < 8; r++) {
        // Product: '<S325>/Product3' incorporates:
        //   MATLABSystem: '<S325>/Pseudoinverse1'
        //   Product: '<S323>/Rotate F_I to F_b'

        rtb_Product3[r] = (GNC2026W_B.Pseudoinverse1.Pseudoinverse1[r + 8] *
                           avg_idx_0 +
                           GNC2026W_B.Pseudoinverse1.Pseudoinverse1[r] *
                           rtb_TSamp_m2) +
          GNC2026W_B.Pseudoinverse1.Pseudoinverse1[r + 16] * RED_Path[2];
      }

      // MATLAB Function: '<S322>/MATLAB Function5' incorporates:
      //   Reshape: '<S322>/Reshape'

      GNC2026W_MATLABFunction5(RED_Path, rtb_Product3, rtb_H_final_g,
        GNC2026W_B.duty_cycles_m, GNC2026W_P.MATLABFunction5_max_iters,
        GNC2026W_P.MATLABFunction5_tol);

      // MATLAB Function: '<S322>/MATLAB Function1'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles_m, rtb_Product3);

      // Outputs for Enabled SubSystem: '<S324>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S329>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_kz >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S329>/In1' incorporates:
        //   DataStoreRead: '<S324>/Data Store Read'

        GNC2026W_B.In1_g2 = GNC2026W_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S324>/Enabled Subsystem'

      // Sum: '<S324>/Subtract' incorporates:
      //   Constant: '<S324>/Constant1'
      //   DataStoreRead: '<S324>/Data Store Read'
      //   Delay: '<S324>/Delay'
      //   RelationalOperator: '<S324>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_kz = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g2;

      // Outputs for Enabled SubSystem: '<S324>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S330>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_kz == GNC2026W_P.Constant2_Value_h) {
        // SignalConversion generated from: '<S330>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h5[0], &rtb_Product3[0], sizeof
               (real_T) << 3U);
      }

      // End of Outputs for SubSystem: '<S324>/Enabled Subsystem1'

      // Product: '<S322>/Product1' incorporates:
      //   Constant: '<S324>/Constant2'
      //   Delay: '<S324>/Delay'
      //   RelationalOperator: '<S324>/Relational Operator2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp_m2 = 0.0;
        for (aoffset = 0; aoffset < 8; aoffset++) {
          rtb_TSamp_m2 += rtb_H_final_g[3 * aoffset + r] *
            GNC2026W_B.ThrustPer_Final_h5[aoffset];
        }

        RED_Path[r] = rtb_TSamp_m2;
      }

      // End of Product: '<S322>/Product1'

      // DataStoreWrite: '<S319>/Data Store Write2' incorporates:
      //   Product: '<S328>/Rotate F_b to F_I'

      GNC2026W_DW.BLACK_Saturated_Controls[0] = rtb_C_Ib[0] * RED_Path[0] +
        RED_Path[1] * rtb_C_Ib[2];
      GNC2026W_DW.BLACK_Saturated_Controls[1] = RED_Path[0] * rtb_C_Ib[1] +
        RED_Path[1] * rtb_C_Ib[3];
      GNC2026W_DW.BLACK_Saturated_Controls[2] = RED_Path[2];

      // End of Outputs for SubSystem: '<S18>/Change BLACK Behavior'
    }

    // End of If: '<S18>/This IF block determines whether or not to run the BLACK sim//exp' 

    // DataStoreWrite: '<S18>/Data Store Write1'
    memcpy(&GNC2026W_DW.BLACK_Duty_Cycles[0], &GNC2026W_B.duty_cycles_m[0],
           sizeof(real_T) << 3U);

    // If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   Constant: '<S336>/Constant1'
    //   Constant: '<S336>/Constant2'
    //   DataStoreRead: '<S18>/Data Store Read'
    //   DataStoreRead: '<S18>/Data Store Read1'
    //   Delay: '<S336>/Delay'
    //   RelationalOperator: '<S336>/Relational Operator1'
    //   RelationalOperator: '<S336>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 3.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S18>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S320>/Action Port'

      // MATLAB Function: '<S340>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S320>/Data Store Read1'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.BLUE_Measured_States[2],
        rtb_C_Ib);

      // MATLAB Function: '<S335>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S320>/Data Store Read1'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.BLUE_Measured_States[2],
        &rtb_H_final_j[0]);

      // Product: '<S335>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_TSamp_m2 = rtb_H_final_j[0] * GNC2026W_B.Merge2[0] +
        GNC2026W_B.Merge2[1] * rtb_H_final_j[2];

      // SignalConversion generated from: '<S337>/Product3' incorporates:
      //   Product: '<S335>/Rotate F_I to F_b'

      RED_Path[0] = rtb_TSamp_m2;

      // Product: '<S335>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      avg_idx_0 = GNC2026W_B.Merge2[0] * rtb_H_final_j[1] + GNC2026W_B.Merge2[1]
        * rtb_H_final_j[3];

      // SignalConversion generated from: '<S337>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      RED_Path[1] = avg_idx_0;
      RED_Path[2] = GNC2026W_B.Merge2[2];

      // MATLAB Function: '<S337>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3[i] = GNC2026W_P.F_thrusters_BLUE[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (d_coffset = 0; d_coffset < 8; d_coffset++) {
        y[d_coffset + (d_coffset << 3)] = rtb_Product3[d_coffset];
        b[3 * d_coffset] = b_0[d_coffset];
        b[3 * d_coffset + 1] = c_0[d_coffset];
        b[3 * d_coffset + 2] = GNC2026W_P.thruster_dist2CG_BLUE[d_coffset] /
          1000.0;
      }

      for (r = 0; r < 8; r++) {
        for (aoffset = 0; aoffset < 3; aoffset++) {
          avg_idx_1 = 0.0;
          for (i = 0; i < 8; i++) {
            avg_idx_1 += b[3 * i + aoffset] * y[(r << 3) + i];
          }

          rtb_H[aoffset + 3 * r] = avg_idx_1;
        }
      }

      // End of MATLAB Function: '<S337>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1_p);
      for (r = 0; r < 8; r++) {
        // Product: '<S337>/Product3' incorporates:
        //   MATLABSystem: '<S337>/Pseudoinverse1'
        //   Product: '<S335>/Rotate F_I to F_b'

        rtb_Product3[r] = (GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[r + 8] *
                           avg_idx_0 +
                           GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[r] *
                           rtb_TSamp_m2) +
          GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[r + 16] * RED_Path[2];
      }

      // MATLAB Function: '<S334>/MATLAB Function5' incorporates:
      //   Reshape: '<S334>/Reshape'

      GNC2026W_MATLABFunction5(RED_Path, rtb_Product3, rtb_H_final_j,
        GNC2026W_B.duty_cycles_j, GNC2026W_P.MATLABFunction5_max_iters_b,
        GNC2026W_P.MATLABFunction5_tol_j);

      // MATLAB Function: '<S334>/MATLAB Function1'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles_j, rtb_Product3);

      // Outputs for Enabled SubSystem: '<S336>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S341>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_k >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S341>/In1' incorporates:
        //   DataStoreRead: '<S336>/Data Store Read'

        GNC2026W_B.In1_g = GNC2026W_DW.Univ_Time;
      }

      // End of Outputs for SubSystem: '<S336>/Enabled Subsystem'

      // Sum: '<S336>/Subtract' incorporates:
      //   Constant: '<S336>/Constant1'
      //   DataStoreRead: '<S336>/Data Store Read'
      //   Delay: '<S336>/Delay'
      //   RelationalOperator: '<S336>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_k = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g;

      // Outputs for Enabled SubSystem: '<S336>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S342>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_k == GNC2026W_P.Constant2_Value_fq) {
        // SignalConversion generated from: '<S342>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h[0], &rtb_Product3[0], sizeof(real_T)
               << 3U);
      }

      // End of Outputs for SubSystem: '<S336>/Enabled Subsystem1'

      // Product: '<S334>/Product1' incorporates:
      //   Constant: '<S336>/Constant2'
      //   Delay: '<S336>/Delay'
      //   RelationalOperator: '<S336>/Relational Operator2'

      for (r = 0; r < 3; r++) {
        rtb_TSamp_m2 = 0.0;
        for (aoffset = 0; aoffset < 8; aoffset++) {
          rtb_TSamp_m2 += rtb_H_final_j[3 * aoffset + r] *
            GNC2026W_B.ThrustPer_Final_h[aoffset];
        }

        RED_Path[r] = rtb_TSamp_m2;
      }

      // End of Product: '<S334>/Product1'

      // DataStoreWrite: '<S320>/Data Store Write3' incorporates:
      //   Product: '<S340>/Rotate F_b to F_I'

      GNC2026W_DW.BLUE_Saturated_Controls[0] = rtb_C_Ib[0] * RED_Path[0] +
        RED_Path[1] * rtb_C_Ib[2];
      GNC2026W_DW.BLUE_Saturated_Controls[1] = RED_Path[0] * rtb_C_Ib[1] +
        RED_Path[1] * rtb_C_Ib[3];
      GNC2026W_DW.BLUE_Saturated_Controls[2] = RED_Path[2];

      // End of Outputs for SubSystem: '<S18>/Change BLUE Behavior'
    }

    // End of If: '<S18>/This IF block determines whether or not to run the BLUE sim//exp' 

    // DataStoreWrite: '<S18>/Data Store Write2'
    memcpy(&GNC2026W_DW.BLUE_Duty_Cycles[0], &GNC2026W_B.duty_cycles_j[0],
           sizeof(real_T) << 3U);

    // SignalConversion generated from: '<S18>/UDP Send' incorporates:
    //   Constant: '<S18>/PWM Frequency'
    //   Constant: '<S18>/Safety Number'
    //   Gain: '<S18>/Gain'
    //   Gain: '<S18>/Gain1'
    //   Gain: '<S18>/Gain2'
    //   Gain: '<S18>/Gain3'
    //   Gain: '<S18>/Gain4'
    //   Gain: '<S18>/Gain5'
    //   Gain: '<S18>/Gain6'
    //   Gain: '<S18>/Gain7'
    //   Sum: '<S18>/Sum'
    //   Sum: '<S18>/Sum1'
    //   Sum: '<S18>/Sum2'
    //   Sum: '<S18>/Sum3'
    //   Sum: '<S18>/Sum4'
    //   Sum: '<S18>/Sum5'
    //   Sum: '<S18>/Sum6'
    //   Sum: '<S18>/Sum7'

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
    //   DataStoreWrite: '<S22>/Data Store Write10'
    //   DataStoreWrite: '<S22>/Data Store Write11'
    //   DataStoreWrite: '<S22>/Data Store Write2'
    //   StringConstant: '<S22>/String Constant'
    //   StringConstant: '<S22>/String Constant1'
    //   StringConstant: '<S22>/String Constant2'

    if (GNC2026W_DW.Univ_Time < GNC2026W_P.Phase0_End) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #0: Synchronization' incorporates:
      //   ActionPort: '<S20>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_m2, &GNC2026W_DW.BLACK_Control_Law_Enabler,
        GNC2026W_DW.BLACK_Logger, &avg_idx_0,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &avg_idx_1, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase0Synchronization);

      // End of Outputs for SubSystem: '<S1>/Phase #0: Synchronization'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase1_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase0_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #1: Start Floating ' incorporates:
      //   ActionPort: '<S21>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_m2, &GNC2026W_DW.BLACK_Control_Law_Enabler,
        GNC2026W_DW.BLACK_Logger, &avg_idx_0,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &avg_idx_1, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase1StartFloating);

      // End of Outputs for SubSystem: '<S1>/Phase #1: Start Floating '
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase2_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase1_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #2: Initial Position' incorporates:
      //   ActionPort: '<S22>/Action Port'

      // DataStoreWrite: '<S22>/Data Store Write24' incorporates:
      //   Constant: '<S22>/Constant11'

      GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value;

      // DataStoreWrite: '<S22>/Data Store Write27' incorporates:
      //   Constant: '<S22>/Constant18'

      GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value;

      // DataStoreWrite: '<S22>/Data Store Write4' incorporates:
      //   Constant: '<S22>/Constant4'

      GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value;

      // DataStoreWrite: '<S22>/Data Store Write8' incorporates:
      //   Constant: '<S22>/Constant5'

      GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value;

      // DataStoreWrite: '<S22>/Data Store Write7' incorporates:
      //   Constant: '<S22>/Constant6'

      GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value;

      // DataStoreWrite: '<S22>/Data Store Write16' incorporates:
      //   Constant: '<S22>/Constant8'

      GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value;
      strncpy(&GNC2026W_DW.BLACK_Logger[0], &GNC2026W_P.StringConstant1_String[0],
              255U);
      GNC2026W_DW.BLACK_Logger[255] = '\x00';
      strncpy(&GNC2026W_DW.BLUE_Logger[0], &GNC2026W_P.StringConstant2_String[0],
              255U);
      GNC2026W_DW.BLUE_Logger[255] = '\x00';

      // DataStoreWrite: '<S22>/Data Store Write13' incorporates:
      //   Constant: '<S27>/Constant1'
      //   Constant: '<S27>/Constant2'
      //   Constant: '<S27>/Constant3'
      //   DataStoreWrite: '<S22>/Data Store Write10'
      //   DataStoreWrite: '<S22>/Data Store Write11'
      //   StringConstant: '<S22>/String Constant1'
      //   StringConstant: '<S22>/String Constant2'

      GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value;
      GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value;
      GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value;
      strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String[0],
              255U);
      GNC2026W_DW.RED_Logger[255] = '\x00';

      // DataStoreWrite: '<S22>/Data Store Write1' incorporates:
      //   Constant: '<S28>/Desired States (BLACK)'
      //   DataStoreWrite: '<S22>/Data Store Write2'
      //   StringConstant: '<S22>/String Constant'

      GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_P.init_states_BLACK[0];

      // DataStoreWrite: '<S22>/Data Store Write18' incorporates:
      //   Constant: '<S29>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.init_states_BLUE[0];

      // DataStoreWrite: '<S22>/Data Store Write9' incorporates:
      //   Constant: '<S30>/Constant2'

      GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];

      // DataStoreWrite: '<S22>/Data Store Write1' incorporates:
      //   Constant: '<S28>/Desired States (BLACK)'

      GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_P.init_states_BLACK[1];

      // DataStoreWrite: '<S22>/Data Store Write18' incorporates:
      //   Constant: '<S29>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.init_states_BLUE[1];

      // DataStoreWrite: '<S22>/Data Store Write9' incorporates:
      //   Constant: '<S30>/Constant2'

      GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];

      // DataStoreWrite: '<S22>/Data Store Write1' incorporates:
      //   Constant: '<S28>/Desired States (BLACK)'

      GNC2026W_DW.BLACK_Desired_States[2] = GNC2026W_P.init_states_BLACK[2];

      // DataStoreWrite: '<S22>/Data Store Write18' incorporates:
      //   Constant: '<S29>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[2] = GNC2026W_P.init_states_BLUE[2];

      // DataStoreWrite: '<S22>/Data Store Write9' incorporates:
      //   Constant: '<S30>/Constant2'

      GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

      // End of Outputs for SubSystem: '<S1>/Phase #2: Initial Position'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase2_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #3: Experiment' incorporates:
      //   ActionPort: '<S23>/Action Port'

      // If: '<S23>/Experiment Sub-Phases' incorporates:
      //   Constant: '<S23>/Constant1'
      //   Constant: '<S23>/Constant2'
      //   Constant: '<S23>/Constant3'
      //   Constant: '<S23>/Constant4'
      //   DataStoreRead: '<S23>/Universal_Time'
      //   DataStoreWrite: '<S31>/Data Store Write10'
      //   DataStoreWrite: '<S31>/Data Store Write11'
      //   DataStoreWrite: '<S31>/Data Store Write6'
      //   DataStoreWrite: '<S32>/Data Store Write10'
      //   DataStoreWrite: '<S32>/Data Store Write11'
      //   DataStoreWrite: '<S32>/Data Store Write6'
      //   DataStoreWrite: '<S33>/Data Store Write10'
      //   DataStoreWrite: '<S33>/Data Store Write11'
      //   DataStoreWrite: '<S33>/Data Store Write6'
      //   DataStoreWrite: '<S34>/Data Store Write10'
      //   DataStoreWrite: '<S34>/Data Store Write11'
      //   DataStoreWrite: '<S34>/Data Store Write6'
      //   StringConstant: '<S31>/String Constant'
      //   StringConstant: '<S31>/String Constant1'
      //   StringConstant: '<S31>/String Constant2'
      //   StringConstant: '<S32>/String Constant'
      //   StringConstant: '<S32>/String Constant1'
      //   StringConstant: '<S32>/String Constant2'
      //   StringConstant: '<S33>/String Constant'
      //   StringConstant: '<S33>/String Constant1'
      //   StringConstant: '<S33>/String Constant2'
      //   StringConstant: '<S34>/String Constant'
      //   StringConstant: '<S34>/String Constant1'
      //   StringConstant: '<S34>/String Constant2'

      if (GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase1_End) {
        // Outputs for IfAction SubSystem: '<S23>/Sub-Phase #1' incorporates:
        //   ActionPort: '<S31>/Action Port'

        // DataStoreWrite: '<S31>/Data Store Write24' incorporates:
        //   Constant: '<S31>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_e;

        // DataStoreWrite: '<S31>/Data Store Write2' incorporates:
        //   Constant: '<S31>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_m;

        // DataStoreWrite: '<S31>/Data Store Write4' incorporates:
        //   Constant: '<S31>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_g;

        // DataStoreWrite: '<S31>/Data Store Write3' incorporates:
        //   Constant: '<S31>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_o;

        // DataStoreWrite: '<S31>/Data Store Write7' incorporates:
        //   Constant: '<S31>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_i;

        // DataStoreWrite: '<S31>/Data Store Write16' incorporates:
        //   Constant: '<S31>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_m;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_k[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_p[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S31>/Data Store Write13' incorporates:
        //   Constant: '<S35>/Constant1'
        //   Constant: '<S35>/Constant2'
        //   Constant: '<S35>/Constant3'
        //   DataStoreWrite: '<S31>/Data Store Write10'
        //   DataStoreWrite: '<S31>/Data Store Write11'
        //   StringConstant: '<S31>/String Constant1'
        //   StringConstant: '<S31>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_b;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_o;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_f;

        // Sum: '<S46>/Subtract3' incorporates:
        //   Constant: '<S46>/Constant2'
        //   DataStoreRead: '<S48>/Universal_Time'
        //   Sum: '<S42>/Subtract'
        //   Sum: '<S43>/Subtract'
        //   Sum: '<S44>/Subtract'

        sc = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S37>/Product' incorporates:
        //   Constant: '<S37>/Desired Rate '
        //   Sum: '<S46>/Subtract3'

        avg_idx_0 = sc * GNC2026W_P.DesiredRate_Value;

        // Trigonometry: '<S45>/Sin' incorporates:
        //   Trigonometry: '<S47>/Sin'

        rtb_TSamp_m2 = sin(avg_idx_0);

        // Trigonometry: '<S45>/Cos' incorporates:
        //   Trigonometry: '<S47>/Cos'

        avg_idx_0 = cos(avg_idx_0);

        // DataStoreWrite: '<S31>/Data Store Write18' incorporates:
        //   Constant: '<S45>/Constant1'
        //   Constant: '<S45>/Constant2'
        //   Gain: '<S45>/Gain'
        //   Gain: '<S45>/Gain1'
        //   Sum: '<S45>/Sum1'
        //   Sum: '<S45>/Sum2'
        //   Trigonometry: '<S45>/Cos'
        //   Trigonometry: '<S45>/Sin'
        //   Trigonometry: '<S47>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain * avg_idx_0 +
          GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain *
          rtb_TSamp_m2 + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_m2,
          avg_idx_0);

        // Product: '<S39>/Product' incorporates:
        //   Constant: '<S39>/Desired Rate (BLACK)'

        avg_idx_0 = sc * GNC2026W_P.DesiredRateBLACK_Value;

        // DataStoreWrite: '<S31>/Data Store Write5' incorporates:
        //   Constant: '<S40>/Constant'
        //   Constant: '<S40>/Constant1'
        //   Constant: '<S40>/Desired X-Position (BLACK)'
        //   Constant: '<S40>/Desired Y-Position (BLACK)'
        //   Product: '<S40>/Matrix Multiply'
        //   Product: '<S40>/Matrix Multiply1'
        //   Sum: '<S40>/Sum'
        //   Sum: '<S40>/Sum1'
        //   Trigonometry: '<S41>/Atan2'
        //   Trigonometry: '<S41>/Cos'
        //   Trigonometry: '<S41>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = sc * GNC2026W_P.Constant1_Value_n
          + GNC2026W_P.X0_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = sc * GNC2026W_P.Constant_Value +
          GNC2026W_P.Y0_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(avg_idx_0), cos
          (avg_idx_0));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_b
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // DataStoreWrite: '<S31>/Data Store Write9' incorporates:
        //   Constant: '<S38>/Constant2'
        //   DataStoreWrite: '<S31>/Data Store Write6'
        //   StringConstant: '<S31>/String Constant'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];
        GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

        // End of Outputs for SubSystem: '<S23>/Sub-Phase #1'
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase2_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase1_End)) {
        // Outputs for IfAction SubSystem: '<S23>/Sub-Phase #2 ' incorporates:
        //   ActionPort: '<S32>/Action Port'

        // DataStoreWrite: '<S32>/Data Store Write2' incorporates:
        //   Constant: '<S32>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_n;

        // DataStoreWrite: '<S32>/Data Store Write7' incorporates:
        //   Constant: '<S32>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_p;

        // DataStoreWrite: '<S32>/Data Store Write16' incorporates:
        //   Constant: '<S32>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_o;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_e[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_e[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S32>/Data Store Write13' incorporates:
        //   Constant: '<S54>/Constant1'
        //   Constant: '<S54>/Constant2'
        //   Constant: '<S54>/Constant3'
        //   DataStoreWrite: '<S32>/Data Store Write10'
        //   DataStoreWrite: '<S32>/Data Store Write11'
        //   StringConstant: '<S32>/String Constant1'
        //   StringConstant: '<S32>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_p;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_m;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_p;

        // Outputs for IfAction SubSystem: '<S55>/Scenario 2' incorporates:
        //   ActionPort: '<S61>/Action Port'

        // Outputs for IfAction SubSystem: '<S55>/Scenario 1' incorporates:
        //   ActionPort: '<S60>/Action Port'

        // Outputs for IfAction SubSystem: '<S55>/Scenario 3' incorporates:
        //   ActionPort: '<S62>/Action Port'

        // If: '<S55>/If' incorporates:
        //   Constant: '<S80>/Constant2'
        //   DataStoreRead: '<S82>/Universal_Time'
        //   Sum: '<S66>/Subtract'
        //   Sum: '<S67>/Subtract'
        //   Sum: '<S68>/Subtract'
        //   Sum: '<S72>/Subtract'
        //   Sum: '<S73>/Subtract'
        //   Sum: '<S74>/Subtract'
        //   Sum: '<S78>/Subtract'
        //   Sum: '<S80>/Subtract3'

        sc = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // End of Outputs for SubSystem: '<S55>/Scenario 3'
        // End of Outputs for SubSystem: '<S55>/Scenario 1'
        // End of Outputs for SubSystem: '<S55>/Scenario 2'

        // Product: '<S56>/Product' incorporates:
        //   Constant: '<S56>/Desired Rate '
        //   Sum: '<S80>/Subtract3'

        avg_idx_0 = sc * GNC2026W_P.DesiredRate_Value_h;

        // Trigonometry: '<S79>/Sin' incorporates:
        //   Trigonometry: '<S81>/Sin'

        rtb_TSamp_m2 = sin(avg_idx_0);

        // Trigonometry: '<S79>/Cos' incorporates:
        //   Trigonometry: '<S81>/Cos'

        avg_idx_0 = cos(avg_idx_0);

        // DataStoreWrite: '<S32>/Data Store Write18' incorporates:
        //   Constant: '<S79>/Constant1'
        //   Constant: '<S79>/Constant2'
        //   Gain: '<S79>/Gain'
        //   Gain: '<S79>/Gain1'
        //   Sum: '<S79>/Sum1'
        //   Sum: '<S79>/Sum2'
        //   Trigonometry: '<S79>/Cos'
        //   Trigonometry: '<S79>/Sin'
        //   Trigonometry: '<S81>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_h * avg_idx_0
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_c *
          rtb_TSamp_m2 + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_m2,
          avg_idx_0);

        // If: '<S55>/If' incorporates:
        //   Constant: '<S55>/Constant'
        //   Constant: '<S76>/Desired X-Position (BLACK)'
        //   Constant: '<S76>/Desired Y-Position (BLACK)'
        //   Merge: '<S55>/Merge'

        if (GNC2026W_P.scenario == 1.0) {
          // Outputs for IfAction SubSystem: '<S55>/Scenario 1' incorporates:
          //   ActionPort: '<S60>/Action Port'

          // Product: '<S63>/Product' incorporates:
          //   Constant: '<S63>/Desired Rate (BLACK)'

          rtb_TSamp_m2 = sc * GNC2026W_P.DesiredRateBLACK_Value_k;

          // Sum: '<S64>/Sum1' incorporates:
          //   Constant: '<S64>/Constant1'
          //   Constant: '<S64>/Desired X-Position (BLACK)1'
          //   Merge: '<S55>/Merge'
          //   Product: '<S64>/Matrix Multiply'

          GNC2026W_B.Merge_h[0] = sc * GNC2026W_P.Constant1_Value_f +
            GNC2026W_P.init_states_BLACK[0];

          // Sum: '<S64>/Sum' incorporates:
          //   Constant: '<S64>/Constant'
          //   Constant: '<S64>/Desired Y-Position (BLACK)1'
          //   Merge: '<S55>/Merge'
          //   Product: '<S64>/Matrix Multiply1'

          GNC2026W_B.Merge_h[1] = sc * GNC2026W_P.Constant_Value_f +
            GNC2026W_P.init_states_BLACK[1];

          // Trigonometry: '<S65>/Atan2' incorporates:
          //   Merge: '<S55>/Merge'
          //   Trigonometry: '<S65>/Cos'
          //   Trigonometry: '<S65>/Sin'

          GNC2026W_B.Merge_h[2] = rt_atan2d_snf(sin(rtb_TSamp_m2), cos
            (rtb_TSamp_m2));

          // End of Outputs for SubSystem: '<S55>/Scenario 1'
        } else if (GNC2026W_P.scenario == 2.0) {
          // Outputs for IfAction SubSystem: '<S55>/Scenario 2' incorporates:
          //   ActionPort: '<S61>/Action Port'

          // Sum: '<S69>/Sum' incorporates:
          //   Constant: '<S69>/Desired Rate (BLACK)'
          //   Constant: '<S69>/Desired Y-Position (BLACK)'
          //   Product: '<S69>/Product'

          rtb_TSamp_m2 = sc * GNC2026W_P.DesiredRateBLACK_Value_b +
            GNC2026W_P.init_states_BLACK[2];

          // Merge: '<S55>/Merge' incorporates:
          //   Constant: '<S70>/Constant'
          //   Constant: '<S70>/Constant1'
          //   Constant: '<S70>/Desired X-Position (BLACK)'
          //   Constant: '<S70>/Desired Y-Position (BLACK)'
          //   Product: '<S70>/Matrix Multiply'
          //   Product: '<S70>/Matrix Multiply1'
          //   SignalConversion generated from: '<S61>/Out1'
          //   Sum: '<S70>/Sum'
          //   Sum: '<S70>/Sum1'
          //   Trigonometry: '<S71>/Atan2'
          //   Trigonometry: '<S71>/Cos'
          //   Trigonometry: '<S71>/Sin'

          GNC2026W_B.Merge_h[0] = sc * GNC2026W_P.Constant1_Value_h +
            GNC2026W_P.init_states_BLACK[0];
          GNC2026W_B.Merge_h[1] = sc * GNC2026W_P.Constant_Value_l +
            GNC2026W_P.init_states_BLACK[1];
          GNC2026W_B.Merge_h[2] = rt_atan2d_snf(sin(rtb_TSamp_m2), cos
            (rtb_TSamp_m2));

          // End of Outputs for SubSystem: '<S55>/Scenario 2'
        } else if (GNC2026W_P.scenario == 3.0) {
          // Outputs for IfAction SubSystem: '<S55>/Scenario 3' incorporates:
          //   ActionPort: '<S62>/Action Port'

          // Sum: '<S75>/Sum' incorporates:
          //   Constant: '<S75>/Desired Rate (BLACK)'
          //   Constant: '<S75>/Desired Y-Position (BLACK)'
          //   Product: '<S75>/Product'

          rtb_TSamp_m2 = sc * GNC2026W_P.DesiredRateBLACK_Value_f +
            GNC2026W_P.init_states_BLACK[2];
          GNC2026W_B.Merge_h[0] = GNC2026W_P.init_states_BLACK[0];
          GNC2026W_B.Merge_h[1] = GNC2026W_P.init_states_BLACK[1];

          // Trigonometry: '<S77>/Atan2' incorporates:
          //   Constant: '<S76>/Desired X-Position (BLACK)'
          //   Constant: '<S76>/Desired Y-Position (BLACK)'
          //   Merge: '<S55>/Merge'
          //   Trigonometry: '<S77>/Cos'
          //   Trigonometry: '<S77>/Sin'

          GNC2026W_B.Merge_h[2] = rt_atan2d_snf(sin(rtb_TSamp_m2), cos
            (rtb_TSamp_m2));

          // End of Outputs for SubSystem: '<S55>/Scenario 3'
        }

        // DataStoreWrite: '<S32>/Data Store Write5'
        GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_B.Merge_h[0];
        GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_B.Merge_h[1];
        GNC2026W_DW.BLACK_Desired_States[2] = GNC2026W_B.Merge_h[2];
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_c
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // If: '<S57>/If' incorporates:
        //   DataStoreRead: '<S57>/Data Store Read1'
        //   DataStoreWrite: '<S32>/Data Store Write6'
        //   StringConstant: '<S32>/String Constant'

        if (GNC2026W_DW.ARM_Grab_Complete == 1.0) {
          // Outputs for IfAction SubSystem: '<S57>/Grab logic' incorporates:
          //   ActionPort: '<S83>/Action Port'

          // MATLAB Function: '<S83>/MATLAB Function' incorporates:
          //   DataStoreRead: '<S83>/Data Store Read'

          if (GNC2026W_DW.Hold == 0.0) {
            GNC2026W_DW.location[0] = GNC2026W_DW.RED_Measured_States[0];
            GNC2026W_DW.location[1] = GNC2026W_DW.RED_Measured_States[1];
            GNC2026W_DW.location[2] = GNC2026W_DW.RED_Measured_States[2];
            GNC2026W_DW.Hold = 1.0;
          }

          // DataStoreWrite: '<S32>/Data Store Write9' incorporates:
          //   MATLAB Function: '<S83>/MATLAB Function'
          //   SignalConversion generated from: '<S83>/y'

          GNC2026W_DW.RED_Desired_States[0] = GNC2026W_DW.location[0];
          GNC2026W_DW.RED_Desired_States[1] = GNC2026W_DW.location[1];
          GNC2026W_DW.RED_Desired_States[2] = GNC2026W_DW.location[2];

          // End of Outputs for SubSystem: '<S57>/Grab logic'
        } else {
          // Outputs for IfAction SubSystem: '<S57>/Initial condition' incorporates:
          //   ActionPort: '<S84>/Action Port'

          // DataStoreWrite: '<S32>/Data Store Write9' incorporates:
          //   Constant: '<S84>/Constant2'
          //   SignalConversion generated from: '<S84>/Out1'

          GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];
          GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];
          GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

          // End of Outputs for SubSystem: '<S57>/Initial condition'
        }

        // End of If: '<S57>/If'

        // Sum: '<S85>/Sum' incorporates:
        //   Constant: '<S57>/Separation'
        //   Constant: '<S85>/Constant'
        //   DataStoreWrite: '<S57>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.Separation_Value +
          GNC2026W_P.Constant_Value_e;

        // MATLAB Function: '<S53>/First Fit Detector' incorporates:
        //   DataStoreRead: '<S53>/Data Store Read'
        //   DataStoreWrite: '<S53>/Data Store Write4'

        if (GNC2026W_DW.ARM_Grab_Complete == 1.0) {
          GNC2026W_DW.mode = 3.0;
        }

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_DW.mode;

        // End of MATLAB Function: '<S53>/First Fit Detector'

        // MATLAB Function: '<S58>/Red Control Logic' incorporates:
        //   DataStoreRead: '<S58>/Data Store Read'
        //   DataStoreRead: '<S58>/Data Store Read1'
        //   DataStoreRead: '<S58>/Data Store Read4'

        if ((GNC2026W_DW.isValid != 0.0) && (GNC2026W_DW.firstfit == 0.0)) {
          GNC2026W_DW.firstfit = 1.0;
        }

        if ((GNC2026W_DW.firstfit == 1.0) && (GNC2026W_DW.isValid != 0.0) &&
            (GNC2026W_DW.prev != 0.0)) {
          if (GNC2026W_DW.counter < 10.0) {
            GNC2026W_DW.phase = 0.0;
          } else if ((GNC2026W_DW.counter > 10.0) &&
                     (GNC2026W_DW.filterConfidence == 0.0)) {
            GNC2026W_DW.phase = 1.0;
          } else if ((GNC2026W_DW.counter > 10.0) &&
                     (GNC2026W_DW.filterConfidence == 1.0)) {
            GNC2026W_DW.phase = 2.0;
          }

          GNC2026W_DW.counter++;
        } else if (GNC2026W_DW.counter < 10.0) {
          GNC2026W_DW.phase = 3.0;
          GNC2026W_DW.counter = 0.0;
        } else if ((GNC2026W_DW.counter > 10.0) && (GNC2026W_DW.filterConfidence
                    == 0.0)) {
          GNC2026W_DW.phase = 4.0;
        } else if ((GNC2026W_DW.counter > 10.0) && (GNC2026W_DW.filterConfidence
                    == 1.0)) {
          GNC2026W_DW.phase = 5.0;
        }

        if (GNC2026W_DW.ARM_Grab_Complete == 1.0) {
          GNC2026W_DW.phase = 6.0;
        }

        GNC2026W_DW.prev = GNC2026W_DW.isValid;

        // If: '<S58>/If' incorporates:
        //   MATLAB Function: '<S58>/Red Control Logic'

        if (GNC2026W_DW.phase == 0.0) {
          // Outputs for IfAction SubSystem: '<S58>/Hold position till the filter converges' incorporates:
          //   ActionPort: '<S89>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.Holdpositiontillthefilterconv_a);

          // End of Outputs for SubSystem: '<S58>/Hold position till the filter converges' 
        } else if (GNC2026W_DW.phase == 1.0) {
          // Outputs for IfAction SubSystem: '<S58>/Initiate filter' incorporates:
          //   ActionPort: '<S90>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Initiatefilter);

          // End of Outputs for SubSystem: '<S58>/Initiate filter'
        } else if (GNC2026W_DW.phase == 2.0) {
          // Outputs for IfAction SubSystem: '<S58>/Start moving after convergence' incorporates:
          //   ActionPort: '<S94>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.Startmovingafterconvergence);

          // End of Outputs for SubSystem: '<S58>/Start moving after convergence' 
        } else if (GNC2026W_DW.phase == 3.0) {
          // Outputs for IfAction SubSystem: '<S58>/Reset counter and hold position' incorporates:
          //   ActionPort: '<S93>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.Resetcounterandholdposition);

          // End of Outputs for SubSystem: '<S58>/Reset counter and hold position' 
        } else if (GNC2026W_DW.phase == 4.0) {
          // Outputs for IfAction SubSystem: '<S58>/Hold position if frame drops before convergence' incorporates:
          //   ActionPort: '<S88>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.Holdpositionifframedropsbeforec);

          // End of Outputs for SubSystem: '<S58>/Hold position if frame drops before convergence' 
        } else if (GNC2026W_DW.phase == 5.0) {
          // Outputs for IfAction SubSystem: '<S58>/Keep moving if frame drops after convergence' incorporates:
          //   ActionPort: '<S91>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.Keepmovingifframedropsafterconv);

          // End of Outputs for SubSystem: '<S58>/Keep moving if frame drops after convergence' 
        } else if (GNC2026W_DW.phase == 6.0) {
          // Outputs for IfAction SubSystem: '<S58>/Hold position for berthing' incorporates:
          //   ActionPort: '<S87>/Action Port'

          Holdpositiontillthefilterconver(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.Holdpositionforberthing);

          // End of Outputs for SubSystem: '<S58>/Hold position for berthing'
        }

        // End of If: '<S58>/If'
        // End of Outputs for SubSystem: '<S23>/Sub-Phase #2 '
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase3_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase2_End)) {
        // Outputs for IfAction SubSystem: '<S23>/Sub-Phase #3 ' incorporates:
        //   ActionPort: '<S33>/Action Port'

        // DataStoreWrite: '<S33>/Data Store Write24' incorporates:
        //   Constant: '<S33>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_b;

        // DataStoreWrite: '<S33>/Data Store Write2' incorporates:
        //   Constant: '<S33>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_l;

        // DataStoreWrite: '<S33>/Data Store Write4' incorporates:
        //   Constant: '<S33>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_b;

        // DataStoreWrite: '<S33>/Data Store Write3' incorporates:
        //   Constant: '<S33>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_n;

        // DataStoreWrite: '<S33>/Data Store Write7' incorporates:
        //   Constant: '<S33>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_n;

        // DataStoreWrite: '<S33>/Data Store Write16' incorporates:
        //   Constant: '<S33>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_f;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_j[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_b[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S33>/Data Store Write13' incorporates:
        //   Constant: '<S95>/Constant1'
        //   Constant: '<S95>/Constant2'
        //   Constant: '<S95>/Constant3'
        //   DataStoreWrite: '<S33>/Data Store Write10'
        //   DataStoreWrite: '<S33>/Data Store Write11'
        //   StringConstant: '<S33>/String Constant1'
        //   StringConstant: '<S33>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_e;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_p;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_c;

        // Sum: '<S106>/Subtract3' incorporates:
        //   Constant: '<S106>/Constant2'
        //   DataStoreRead: '<S108>/Universal_Time'
        //   Sum: '<S102>/Subtract'
        //   Sum: '<S103>/Subtract'
        //   Sum: '<S104>/Subtract'

        sc = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S97>/Product' incorporates:
        //   Constant: '<S97>/Desired Rate '
        //   Sum: '<S106>/Subtract3'

        avg_idx_0 = sc * GNC2026W_P.DesiredRate_Value_l;

        // Trigonometry: '<S105>/Sin' incorporates:
        //   Trigonometry: '<S107>/Sin'

        rtb_TSamp_m2 = sin(avg_idx_0);

        // Trigonometry: '<S105>/Cos' incorporates:
        //   Trigonometry: '<S107>/Cos'

        avg_idx_0 = cos(avg_idx_0);

        // DataStoreWrite: '<S33>/Data Store Write18' incorporates:
        //   Constant: '<S105>/Constant1'
        //   Constant: '<S105>/Constant2'
        //   Gain: '<S105>/Gain'
        //   Gain: '<S105>/Gain1'
        //   Sum: '<S105>/Sum1'
        //   Sum: '<S105>/Sum2'
        //   Trigonometry: '<S105>/Cos'
        //   Trigonometry: '<S105>/Sin'
        //   Trigonometry: '<S107>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_b * avg_idx_0
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_k *
          rtb_TSamp_m2 + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_m2,
          avg_idx_0);

        // Product: '<S99>/Product' incorporates:
        //   Constant: '<S99>/Desired Rate (BLACK)'

        avg_idx_0 = sc * GNC2026W_P.DesiredRateBLACK_Value_kf;

        // DataStoreWrite: '<S33>/Data Store Write5' incorporates:
        //   Constant: '<S100>/Constant'
        //   Constant: '<S100>/Constant1'
        //   Constant: '<S100>/Desired X-Position (BLACK)'
        //   Constant: '<S100>/Desired Y-Position (BLACK)'
        //   Product: '<S100>/Matrix Multiply'
        //   Product: '<S100>/Matrix Multiply1'
        //   Sum: '<S100>/Sum'
        //   Sum: '<S100>/Sum1'
        //   Trigonometry: '<S101>/Atan2'
        //   Trigonometry: '<S101>/Cos'
        //   Trigonometry: '<S101>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = sc * GNC2026W_P.Constant1_Value_g
          + GNC2026W_P.X0_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = sc * GNC2026W_P.Constant_Value_d +
          GNC2026W_P.Y0_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(avg_idx_0), cos
          (avg_idx_0));
        strncpy(&GNC2026W_DW.RED_Logger[0],
                &GNC2026W_P.StringConstant_String_ca[0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // Product: '<S98>/Product' incorporates:
        //   Constant: '<S110>/Constant2'
        //   Constant: '<S98>/Desired Rate '
        //   DataStoreRead: '<S112>/Universal_Time'
        //   DataStoreWrite: '<S33>/Data Store Write6'
        //   StringConstant: '<S33>/String Constant'
        //   Sum: '<S110>/Subtract3'

        rtb_TSamp_m2 = (GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End) *
          GNC2026W_P.DesiredRate_Value_d;

        // Gain: '<S109>/Gain' incorporates:
        //   Trigonometry: '<S109>/Cos'

        avg_idx_0 = GNC2026W_P.Gain_Gain_ho * cos(rtb_TSamp_m2);

        // Gain: '<S109>/Gain1' incorporates:
        //   Trigonometry: '<S109>/Sin'

        avg_idx_1 = GNC2026W_P.Gain1_Gain_d * sin(rtb_TSamp_m2);

        // Sum: '<S98>/Sum' incorporates:
        //   Constant: '<S98>/Constant'

        rtb_TSamp_m2 += GNC2026W_P.Constant_Value_h;

        // DataStoreWrite: '<S33>/Data Store Write9' incorporates:
        //   Constant: '<S109>/Constant1'
        //   Constant: '<S109>/Constant2'
        //   Sum: '<S109>/Sum1'
        //   Sum: '<S109>/Sum2'
        //   Trigonometry: '<S111>/Atan2'
        //   Trigonometry: '<S111>/Cos'
        //   Trigonometry: '<S111>/Sin'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.xLength / 2.0 + avg_idx_0;
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.yLength / 2.0 + avg_idx_1;
        GNC2026W_DW.RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_m2), cos
          (rtb_TSamp_m2));

        // End of Outputs for SubSystem: '<S23>/Sub-Phase #3 '
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase4_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase3_End)) {
        // Outputs for IfAction SubSystem: '<S23>/Sub-Phase #4' incorporates:
        //   ActionPort: '<S34>/Action Port'

        // DataStoreWrite: '<S34>/Data Store Write24' incorporates:
        //   Constant: '<S34>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_p;

        // DataStoreWrite: '<S34>/Data Store Write2' incorporates:
        //   Constant: '<S34>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_e;

        // DataStoreWrite: '<S34>/Data Store Write4' incorporates:
        //   Constant: '<S34>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_l;

        // DataStoreWrite: '<S34>/Data Store Write3' incorporates:
        //   Constant: '<S34>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_p;

        // DataStoreWrite: '<S34>/Data Store Write7' incorporates:
        //   Constant: '<S34>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_m;

        // DataStoreWrite: '<S34>/Data Store Write16' incorporates:
        //   Constant: '<S34>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_j;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_p[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_l[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S34>/Data Store Write13' incorporates:
        //   Constant: '<S113>/Constant1'
        //   Constant: '<S113>/Constant2'
        //   Constant: '<S113>/Constant3'
        //   DataStoreWrite: '<S34>/Data Store Write10'
        //   DataStoreWrite: '<S34>/Data Store Write11'
        //   StringConstant: '<S34>/String Constant1'
        //   StringConstant: '<S34>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_k;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_b;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_g;

        // Sum: '<S121>/Subtract3' incorporates:
        //   Constant: '<S121>/Constant2'
        //   DataStoreRead: '<S123>/Universal_Time'
        //   Sum: '<S119>/Subtract'

        sc = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S115>/Product' incorporates:
        //   Constant: '<S115>/Desired Rate '
        //   Sum: '<S121>/Subtract3'

        avg_idx_0 = sc * GNC2026W_P.DesiredRate_Value_ha;

        // Trigonometry: '<S120>/Sin' incorporates:
        //   Trigonometry: '<S122>/Sin'

        rtb_TSamp_m2 = sin(avg_idx_0);

        // Trigonometry: '<S120>/Cos' incorporates:
        //   Trigonometry: '<S122>/Cos'

        avg_idx_0 = cos(avg_idx_0);

        // DataStoreWrite: '<S34>/Data Store Write18' incorporates:
        //   Constant: '<S120>/Constant1'
        //   Constant: '<S120>/Constant2'
        //   Gain: '<S120>/Gain'
        //   Gain: '<S120>/Gain1'
        //   Sum: '<S120>/Sum1'
        //   Sum: '<S120>/Sum2'
        //   Trigonometry: '<S120>/Cos'
        //   Trigonometry: '<S120>/Sin'
        //   Trigonometry: '<S122>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_o * avg_idx_0
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_b *
          rtb_TSamp_m2 + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_m2,
          avg_idx_0);

        // Product: '<S117>/Product' incorporates:
        //   Constant: '<S117>/Desired Rate (BLACK)'

        rtb_TSamp_m2 = sc * GNC2026W_P.DesiredRateBLACK_Value_i;

        // DataStoreWrite: '<S34>/Data Store Write5' incorporates:
        //   Constant: '<S114>/Desired X-Position (BLACK)'
        //   Constant: '<S114>/Desired Y-Position (BLACK)'
        //   Trigonometry: '<S118>/Atan2'
        //   Trigonometry: '<S118>/Cos'
        //   Trigonometry: '<S118>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_m2),
          cos(rtb_TSamp_m2));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_e
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // Product: '<S116>/Product' incorporates:
        //   Constant: '<S116>/Desired Rate '
        //   Constant: '<S125>/Constant2'
        //   DataStoreRead: '<S128>/Universal_Time'
        //   DataStoreWrite: '<S34>/Data Store Write6'
        //   StringConstant: '<S34>/String Constant'
        //   Sum: '<S125>/Subtract3'

        rtb_TSamp_m2 = (GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End) *
          GNC2026W_P.DesiredRate_Value_n;

        // Gain: '<S124>/Gain' incorporates:
        //   Trigonometry: '<S124>/Cos'

        avg_idx_0 = GNC2026W_P.Gain_Gain_ox * cos(rtb_TSamp_m2);

        // Gain: '<S124>/Gain1' incorporates:
        //   Trigonometry: '<S124>/Sin'

        avg_idx_1 = GNC2026W_P.Gain1_Gain_e * sin(rtb_TSamp_m2);

        // Sum: '<S116>/Sum' incorporates:
        //   Constant: '<S116>/Constant'

        rtb_TSamp_m2 += GNC2026W_P.Constant_Value_h1;

        // DataStoreWrite: '<S34>/Data Store Write9' incorporates:
        //   Constant: '<S124>/Constant1'
        //   Constant: '<S124>/Constant2'
        //   Sum: '<S124>/Sum1'
        //   Sum: '<S124>/Sum2'
        //   Trigonometry: '<S127>/Atan2'
        //   Trigonometry: '<S127>/Cos'
        //   Trigonometry: '<S127>/Sin'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.xLength / 2.0 + avg_idx_0;
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.yLength / 2.0 + avg_idx_1;
        GNC2026W_DW.RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_m2), cos
          (rtb_TSamp_m2));

        // Sum: '<S126>/Sum' incorporates:
        //   Constant: '<S116>/Separation'
        //   Constant: '<S126>/Constant'
        //   DataStoreWrite: '<S116>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.Separation_Value_d +
          GNC2026W_P.Constant_Value_c;

        // End of Outputs for SubSystem: '<S23>/Sub-Phase #4'
      }

      // End of If: '<S23>/Experiment Sub-Phases'
      // End of Outputs for SubSystem: '<S1>/Phase #3: Experiment'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase4_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #4: Return Home' incorporates:
      //   ActionPort: '<S24>/Action Port'

      GNC2026W_Phase4ReturnHome(&GNC2026W_DW.ARM_Control_Law_Enabler,
        GNC2026W_DW.ARM_Desired_States, &rtb_TSamp_m2,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Desired_States,
        GNC2026W_DW.BLACK_Logger, &avg_idx_0,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Desired_States,
        GNC2026W_DW.BLUE_Logger, &avg_idx_1, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Desired_States,
        GNC2026W_DW.RED_Logger, &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase4ReturnHome);

      // End of Outputs for SubSystem: '<S1>/Phase #4: Return Home'
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase5_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase4_End)) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #5: Hold Home' incorporates:
      //   ActionPort: '<S25>/Action Port'

      GNC2026W_Phase4ReturnHome(&GNC2026W_DW.ARM_Control_Law_Enabler,
        GNC2026W_DW.ARM_Desired_States, &rtb_TSamp_m2,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Desired_States,
        GNC2026W_DW.BLACK_Logger, &avg_idx_0,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Desired_States,
        GNC2026W_DW.BLUE_Logger, &avg_idx_1, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Desired_States,
        GNC2026W_DW.RED_Logger, &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase5HoldHome);

      // End of Outputs for SubSystem: '<S1>/Phase #5: Hold Home'
    } else if (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase5_End) {
      // Outputs for IfAction SubSystem: '<S1>/Phase #6: Clean Shutdown' incorporates:
      //   ActionPort: '<S26>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &rtb_TSamp_m2, &GNC2026W_DW.BLACK_Control_Law_Enabler,
        GNC2026W_DW.BLACK_Logger, &avg_idx_0,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &avg_idx_1, &GNC2026W_DW.Float_State,
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
      //   ActionPort: '<S212>/Action Port'

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
      //   ActionPort: '<S213>/Action Port'

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
      //   ActionPort: '<S214>/Action Port'

      GNC2026W_ChangeBLACKBehavior(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior,
        &GNC2026W_P.ChangeREDBehavior);

      // End of Outputs for SubSystem: '<S4>/Change RED Behavior'
    }

    // End of If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S219>/Action Port'

      // StringToASCII: '<S219>/String to ASCII1' incorporates:
      //   DataStoreRead: '<S219>/Data Store Read2'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII1[0],
              &GNC2026W_DW.BLACK_Logger[0], 31U);

      // Update for S-Function (sdspToNetwork): '<S219>/UDP Send1' incorporates:
      //   StringToASCII: '<S219>/String to ASCII1'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend1_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII1[0U], 31);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S219>/UDP Send1'
      // End of Outputs for SubSystem: '<S6>/Change BLACK Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S220>/Action Port'

      // StringToASCII: '<S220>/String to ASCII2' incorporates:
      //   DataStoreRead: '<S220>/Data Store Read'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII2[0], &GNC2026W_DW.BLUE_Logger
              [0], 31U);

      // Update for S-Function (sdspToNetwork): '<S220>/UDP Send2' incorporates:
      //   StringToASCII: '<S220>/String to ASCII2'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend2_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII2[0U], 31);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S220>/UDP Send2'
      // End of Outputs for SubSystem: '<S6>/Change BLUE Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change RED Behavior' incorporates:
      //   ActionPort: '<S221>/Action Port'

      // StringToASCII: '<S221>/String to ASCII' incorporates:
      //   DataStoreRead: '<S221>/Data Store Read'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII[0], &GNC2026W_DW.RED_Logger[0],
              31U);

      // Update for S-Function (sdspToNetwork): '<S221>/UDP Send3' incorporates:
      //   StringToASCII: '<S221>/String to ASCII'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend3_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII[0U], 31);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S221>/UDP Send3'
      // End of Outputs for SubSystem: '<S6>/Change RED Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S7>/This IF block determines whether or not to run the exp code' incorporates:
    //   DataStoreRead: '<S7>/Data Store Read'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S7>/Enable Pucks' incorporates:
      //   ActionPort: '<S222>/Action Port'

      // MATLABSystem: '<S222>/GPIO Write1' incorporates:
      //   DataStoreRead: '<S222>/Data Store Read1'

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

      // End of MATLABSystem: '<S222>/GPIO Write1'
      // End of Outputs for SubSystem: '<S7>/Enable Pucks'
    }

    // End of If: '<S7>/This IF block determines whether or not to run the exp code' 

    // If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S8>/Data Store Read1'
    //   DataStoreRead: '<S8>/Data Store Read2'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S8>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S223>/Action Port'

      // MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders'
      if (GNC2026W_DW.obj_d.SampleTime != GNC2026W_P.baseRate) {
        if (((!rtIsInf(GNC2026W_P.baseRate)) && (!rtIsNaN(GNC2026W_P.baseRate)))
            || rtIsInf(GNC2026W_P.baseRate)) {
          sampleTime = GNC2026W_P.baseRate;
        }

        GNC2026W_DW.obj_d.SampleTime = sampleTime;
      }

      //         %% Define input properties
      //         %% Define output properties
      sampleTime = 0.0;
      rtb_TSamp_m2 = 0.0;
      avg_idx_0 = 0.0;

      // DataStoreWrite: '<S223>/Data Store Write' incorporates:
      //   Delay: '<S223>/Delay'
      //   Delay: '<S223>/Delay1'
      //   Delay: '<S223>/Delay2'
      //   MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders'

      GNC2026W_DW.ARM_Measured_States[3] = 0.0;
      GNC2026W_DW.ARM_Measured_States[4] = 0.0;
      GNC2026W_DW.ARM_Measured_States[5] = 0.0;
      read_dynamixel_position(&sampleTime, &rtb_TSamp_m2, &avg_idx_0,
        &GNC2026W_DW.ARM_Measured_States[3], &GNC2026W_DW.ARM_Measured_States[4],
        &GNC2026W_DW.ARM_Measured_States[5], GNC2026W_DW.Delay_DSTATE_o,
        GNC2026W_DW.Delay1_DSTATE_cg, GNC2026W_DW.Delay2_DSTATE_h);

      // MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders' incorporates:
      //   Delay: '<S223>/Delay'
      //   Delay: '<S223>/Delay1'
      //   Delay: '<S223>/Delay2'

      GNC2026W_DW.Delay_DSTATE_o = sampleTime;
      GNC2026W_DW.Delay1_DSTATE_cg = rtb_TSamp_m2;
      GNC2026W_DW.Delay2_DSTATE_h = avg_idx_0;

      // DataStoreWrite: '<S223>/Data Store Write' incorporates:
      //   Delay: '<S223>/Delay'
      //   Delay: '<S223>/Delay1'
      //   Delay: '<S223>/Delay2'

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
      //   ActionPort: '<S224>/Action Port'

      // If: '<S224>/If' incorporates:
      //   Constant: '<S224>/Constant'

      if (GNC2026W_P.fNum == 1.0) {
        // Outputs for IfAction SubSystem: '<S224>/UKF' incorporates:
        //   ActionPort: '<S227>/Action Port'

        // If: '<S244>/If' incorporates:
        //   Constant: '<S244>/Constant'

        if (GNC2026W_P.VISinLoop == 0.0) {
          // Outputs for IfAction SubSystem: '<S244>/Artificial VIS States' incorporates:
          //   ActionPort: '<S245>/Action Port'

          // Merge: '<S244>/Merge' incorporates:
          //   DataStoreRead: '<S245>/Data Store Read1'

          GNC2026W_B.Merge_b[0] = GNC2026W_DW.BLACK_CV_States[0];
          GNC2026W_B.Merge_b[1] = GNC2026W_DW.BLACK_CV_States[1];
          GNC2026W_B.Merge_b[2] = GNC2026W_DW.BLACK_CV_States[2];

          // End of Outputs for SubSystem: '<S244>/Artificial VIS States'
        } else if (GNC2026W_P.VISinLoop == 1.0) {
          // Outputs for IfAction SubSystem: '<S244>/Experimental VIS States' incorporates:
          //   ActionPort: '<S246>/Action Port'

          GNC2026W_ExperimentalVISStates(GNC2026W_B.Merge_b,
            GNC2026W_DW.BLACK_CV_States, GNC2026W_DW.VIS_LAR_States,
            &GNC2026W_DW.isSim);

          // End of Outputs for SubSystem: '<S244>/Experimental VIS States'
        }

        // End of If: '<S244>/If'

        // MATLAB Function: '<S227>/Unscented Kalman Filter' incorporates:
        //   DataStoreRead: '<S227>/Data Store Read2'
        //   DataStoreRead: '<S227>/Data Store Read3'
        //   DataStoreWrite: '<S227>/Data Store Write2'

        if (!GNC2026W_DW.converge_not_empty) {
          GNC2026W_DW.converge_not_empty = true;
          for (i = 0; i < 6; i++) {
            GNC2026W_DW.x_c[i] = GNC2026W_P.x0[i];
          }

          memcpy(&GNC2026W_DW.P_d[0], &GNC2026W_P.P0[0], 36U * sizeof(real_T));
        }

        absxk = GNC2026W_P.a * GNC2026W_P.a;
        sampleTime = (GNC2026W_P.k + 6.0) * absxk - 6.0;
        memset(&P_minus[0], 0, 36U * sizeof(real_T));
        for (i = 0; i < 6; i++) {
          rtb_Switch[i] = 0.0;
        }

        RED_Path[0] = 0.0;
        RED_Path[1] = 0.0;
        RED_Path[2] = 0.0;
        memset(&P_xy[0], 0, 18U * sizeof(real_T));
        memset(&rtb_q_des[0], 0, 9U * sizeof(real_T));
        avg_idx_0 = GNC2026W_DW.RED_Measured_States[0];
        avg_idx_1 = GNC2026W_DW.RED_Measured_States[1];
        th_c = GNC2026W_DW.RED_Measured_States[2];
        sc = sin(GNC2026W_DW.RED_Measured_States[2]);
        scale = cos(GNC2026W_DW.RED_Measured_States[2]);
        for (i = 0; i < 13; i++) {
          if (i + 1 == 1) {
            rtb_TSamp_m2 = sampleTime / (sampleTime + 6.0);
            wi_m[i] = rtb_TSamp_m2;
            wi_c[i] = ((rtb_TSamp_m2 + 1.0) - absxk) + GNC2026W_P.b;
          } else {
            rtb_TSamp_m2 = 1.0 / ((sampleTime + 6.0) * 2.0);
            wi_m[i] = rtb_TSamp_m2;
            wi_c[i] = rtb_TSamp_m2;
          }
        }

        GNC2026W_chol(GNC2026W_DW.P_d);
        for (r = 0; r < 6; r++) {
          for (aoffset = 0; aoffset < 6; aoffset++) {
            phi_0[aoffset + 6 * r] = GNC2026W_DW.P_d[6 * aoffset + r];
          }
        }

        for (r = 0; r < 9; r++) {
          Fdt[r] = f_a[r];
        }

        for (i = 0; i < 13; i++) {
          if (i + 1 == 1) {
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * i] = GNC2026W_DW.x_c[r];
            }
          } else if ((i + 1 > 1) && (i + 1 <= 7)) {
            rtb_TSamp_m2 = sqrt(sampleTime + 6.0);
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * i] = phi_0[(i - 1) * 6 + r] * rtb_TSamp_m2 +
                GNC2026W_DW.x_c[r];
            }
          } else {
            rtb_TSamp_m2 = sqrt(sampleTime + 6.0);
            for (r = 0; r < 6; r++) {
              Xi_pre[r + 6 * i] = GNC2026W_DW.x_c[r] - phi_0[(i - 7) * 6 + r] *
                rtb_TSamp_m2;
            }
          }

          for (r = 0; r < 3; r++) {
            d_coffset = static_cast<int32_T>(Fdt[3 * r]);
            phi_3[6 * r] = d_coffset;
            br = (r + 3) * 6;
            phi_3[br] = static_cast<real_T>(d_coffset) * GNC2026W_P.dt;
            d_coffset = static_cast<int32_T>(Fdt[3 * r + 1]);
            phi_3[6 * r + 1] = d_coffset;
            phi_3[br + 1] = static_cast<real_T>(d_coffset) * GNC2026W_P.dt;
            d_coffset = static_cast<int32_T>(Fdt[3 * r + 2]);
            phi_3[6 * r + 2] = d_coffset;
            phi_3[br + 2] = static_cast<real_T>(d_coffset) * GNC2026W_P.dt;
          }

          for (r = 0; r < 6; r++) {
            phi_3[6 * r + 3] = c_1[3 * r];
            phi_3[6 * r + 4] = c_1[3 * r + 1];
            phi_3[6 * r + 5] = c_1[3 * r + 2];
          }

          rtb_TSamp_m2 = wi_m[i];
          for (r = 0; r < 6; r++) {
            absxk = 0.0;
            for (aoffset = 0; aoffset < 6; aoffset++) {
              absxk += phi_3[6 * aoffset + r] * Xi_pre[6 * i + aoffset];
            }

            Fi[r + 6 * i] = absxk;
            rtb_Switch[r] += rtb_TSamp_m2 * absxk;
          }
        }

        for (d_coffset = 0; d_coffset < 13; d_coffset++) {
          for (r = 0; r < 6; r++) {
            r_T[r] = Fi[6 * d_coffset + r] - rtb_Switch[r];
          }

          rtb_TSamp_m2 = wi_c[d_coffset];
          for (r = 0; r < 6; r++) {
            for (aoffset = 0; aoffset < 6; aoffset++) {
              i = 6 * r + aoffset;
              P_minus[i] += rtb_TSamp_m2 * r_T[aoffset] * r_T[r];
            }
          }
        }

        for (r = 0; r < 36; r++) {
          P_minus[r] += GNC2026W_P.Q[r];
        }

        if (GNC2026W_DW.isValid != 0.0) {
          r = (GNC2026W_DW.isValid - GNC2026W_DW.isValid_pre != 0.0);
          GNC2026W_DW.isValid_pre = GNC2026W_DW.isValid;
        } else {
          r = 0;
        }

        if ((GNC2026W_DW.isValid != 0.0) && (r == 1)) {
          memcpy(&phi_0[0], &P_minus[0], 36U * sizeof(real_T));
          GNC2026W_chol(phi_0);
          for (r = 0; r < 6; r++) {
            for (aoffset = 0; aoffset < 6; aoffset++) {
              S_minus[aoffset + 6 * r] = phi_0[6 * aoffset + r];
            }
          }

          K[2] = -GNC2026W_DW.RED_Measured_States[2];
          for (i = 0; i < 13; i++) {
            if (i + 1 == 1) {
              for (r = 0; r < 6; r++) {
                Xi_pre[r + 6 * i] = rtb_Switch[r];
              }
            } else if ((i + 1 > 1) && (i + 1 <= 7)) {
              rtb_TSamp_m2 = sqrt(sampleTime + 6.0);
              for (r = 0; r < 6; r++) {
                Xi_pre[r + 6 * i] = S_minus[(i - 1) * 6 + r] * rtb_TSamp_m2 +
                  rtb_Switch[r];
              }
            } else {
              rtb_TSamp_m2 = sqrt(sampleTime + 6.0);
              for (r = 0; r < 6; r++) {
                Xi_pre[r + 6 * i] = rtb_Switch[r] - S_minus[(i - 7) * 6 + r] *
                  rtb_TSamp_m2;
              }
            }

            Ks_data[0] = scale;
            Ks_data[3] = sc;
            Ks_data[6] = 0.0;
            Ks_data[9] = 0.0;
            Ks_data[12] = 0.0;
            Ks_data[15] = 0.0;
            Ks_data[1] = -sc;
            Ks_data[4] = scale;
            Ks_data[7] = 0.0;
            Ks_data[10] = 0.0;
            Ks_data[13] = 0.0;
            Ks_data[16] = 0.0;
            for (r = 0; r < 6; r++) {
              Ks_data[3 * r + 2] = d[r];
            }

            rtb_TSamp_m2 = Xi_pre[6 * i + 2] - th_c;
            K[0] = ((cos(rtb_TSamp_m2) * 0.145 - avg_idx_0 * scale) - avg_idx_1 *
                    sc) - 0.125;
            K[1] = ((sin(rtb_TSamp_m2) * 0.145 + avg_idx_0 * sc) - avg_idx_1 *
                    scale) - 0.03;
            rtb_TSamp_m2 = wi_m[i];
            for (r = 0; r < 3; r++) {
              absxk = 0.0;
              for (aoffset = 0; aoffset < 6; aoffset++) {
                absxk += Ks_data[3 * aoffset + r] * Xi_pre[6 * i + aoffset];
              }

              absxk += K[r];
              h[r + 3 * i] = absxk;
              RED_Path[r] += rtb_TSamp_m2 * absxk;
            }
          }

          scale = 3.3121686421112381E-170;
          avg_idx_0 = GNC2026W_B.Merge_b[0] - RED_Path[0];
          sampleTime = rt_atan2d_snf(sin(avg_idx_0), cos(avg_idx_0));
          ik[0] = sampleTime;
          absxk = fabs(sampleTime);
          if (absxk > 3.3121686421112381E-170) {
            rtb_TSamp_m2 = 1.0;
            scale = absxk;
          } else {
            t = absxk / 3.3121686421112381E-170;
            rtb_TSamp_m2 = t * t;
          }

          avg_idx_0 = GNC2026W_B.Merge_b[1] - RED_Path[1];
          sampleTime = rt_atan2d_snf(sin(avg_idx_0), cos(avg_idx_0));
          ik[1] = sampleTime;
          absxk = fabs(sampleTime);
          if (absxk > scale) {
            t = scale / absxk;
            rtb_TSamp_m2 = rtb_TSamp_m2 * t * t + 1.0;
            scale = absxk;
          } else {
            t = absxk / scale;
            rtb_TSamp_m2 += t * t;
          }

          avg_idx_0 = GNC2026W_B.Merge_b[2] - RED_Path[2];
          sampleTime = rt_atan2d_snf(sin(avg_idx_0), cos(avg_idx_0));
          ik[2] = sampleTime;
          absxk = fabs(sampleTime);
          if (absxk > scale) {
            t = scale / absxk;
            rtb_TSamp_m2 = rtb_TSamp_m2 * t * t + 1.0;
            scale = absxk;
          } else {
            t = absxk / scale;
            rtb_TSamp_m2 += t * t;
          }

          rtb_TSamp_m2 = scale * sqrt(rtb_TSamp_m2);
          if (rtIsNaN(rtb_TSamp_m2)) {
            r = 0;
            do {
              exitg1 = 0;
              if (r < 3) {
                if (rtIsNaN(ik[r])) {
                  exitg1 = 1;
                } else {
                  r++;
                }
              } else {
                rtb_TSamp_m2 = (rtInf);
                exitg1 = 1;
              }
            } while (exitg1 == 0);
          }

          if (rtb_TSamp_m2 < 0.05) {
            GNC2026W_DW.converge = 1.0;
          }

          for (ar = 0; ar < 13; ar++) {
            K[0] = h[3 * ar] - RED_Path[0];
            K[1] = h[3 * ar + 1] - RED_Path[1];
            K[2] = h[3 * ar + 2] - RED_Path[2];
            rtb_TSamp_m2 = wi_c[ar];
            for (r = 0; r < 3; r++) {
              rtb_q_des[3 * r] += rtb_TSamp_m2 * K[0] * K[r];
              d_coffset = 3 * r + 1;
              rtb_q_des[d_coffset] += rtb_TSamp_m2 * K[1] * K[r];
              d_coffset = 3 * r + 2;
              rtb_q_des[d_coffset] += rtb_TSamp_m2 * K[2] * K[r];
            }

            for (r = 0; r < 6; r++) {
              r_T[r] = (Xi_pre[6 * ar + r] - rtb_Switch[r]) * rtb_TSamp_m2;
            }

            for (r = 0; r < 3; r++) {
              for (aoffset = 0; aoffset < 6; aoffset++) {
                d_coffset = 6 * r + aoffset;
                P_xy[d_coffset] += r_T[aoffset] * K[r];
              }
            }
          }

          for (r = 0; r < 9; r++) {
            rtb_q_des[r] += GNC2026W_P.R[r];
          }

          GNC2026W_inv(rtb_q_des, Fdt);
          for (r = 0; r < 6; r++) {
            avg_idx_0 = P_xy[r + 6];
            rtb_TSamp_m2 = P_xy[r];
            avg_idx_1 = P_xy[r + 12];
            for (aoffset = 0; aoffset < 3; aoffset++) {
              Ks_data[r + 6 * aoffset] = (Fdt[3 * aoffset + 1] * avg_idx_0 +
                Fdt[3 * aoffset] * rtb_TSamp_m2) + Fdt[3 * aoffset + 2] *
                avg_idx_1;
            }

            avg_idx_0 = Ks_data[r + 6];
            th_c = Ks_data[r];
            sc = Ks_data[r + 12];
            for (aoffset = 0; aoffset < 3; aoffset++) {
              P_xy_0[r + 6 * aoffset] = (rtb_q_des[3 * aoffset + 1] * avg_idx_0
                + rtb_q_des[3 * aoffset] * th_c) + rtb_q_des[3 * aoffset + 2] *
                sc;
            }
          }

          for (r = 0; r < 6; r++) {
            avg_idx_0 = P_xy_0[r + 6];
            th_c = P_xy_0[r];
            sc = P_xy_0[r + 12];
            for (aoffset = 0; aoffset < 6; aoffset++) {
              d_coffset = 6 * aoffset + r;
              GNC2026W_DW.P_d[d_coffset] = P_minus[d_coffset] -
                ((Ks_data[aoffset + 6] * avg_idx_0 + th_c * Ks_data[aoffset]) +
                 Ks_data[aoffset + 12] * sc);
            }

            GNC2026W_DW.x_c[r] = ((Ks_data[r + 6] * ik[1] + Ks_data[r] * ik[0])
                                  + Ks_data[r + 12] * sampleTime) + rtb_Switch[r];
          }

          GNC2026W_DW.x_c[2] = rt_atan2d_snf(sin(GNC2026W_DW.x_c[2]), cos
            (GNC2026W_DW.x_c[2]));
        } else {
          ik[0] = 0.0;
          ik[1] = 0.0;
          ik[2] = 0.0;
          for (i = 0; i < 6; i++) {
            GNC2026W_DW.x_c[i] = rtb_Switch[i];
          }

          memcpy(&GNC2026W_DW.P_d[0], &P_minus[0], 36U * sizeof(real_T));
        }

        GNC2026W_DW.filterConfidence = GNC2026W_DW.converge;

        // DataStoreWrite: '<S227>/Data Store Write3'
        GNC2026W_DW.residual[0] = ik[0];
        GNC2026W_DW.residual[1] = ik[1];
        GNC2026W_DW.residual[2] = ik[2];
        for (r = 0; r < 6; r++) {
          // Merge: '<S224>/Merge' incorporates:
          //   MATLAB Function: '<S227>/Unscented Kalman Filter'
          //   SignalConversion generated from: '<S227>/BLKest'

          GNC2026W_B.Merge_k[r] = GNC2026W_DW.x_c[r];
        }

        // End of Outputs for SubSystem: '<S224>/UKF'
      } else if (GNC2026W_P.fNum == 2.0) {
        // Outputs for IfAction SubSystem: '<S224>/MEKF' incorporates:
        //   ActionPort: '<S226>/Action Port'

        // MATLAB Function: '<S237>/MATLAB Function' incorporates:
        //   DataStoreRead: '<S226>/Data Store Read'
        //   Delay: '<S237>/Delay'
        //   Delay: '<S237>/Delay1'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_j, GNC2026W_DW.Delay1_DSTATE_d,
          &GNC2026W_DW.Delay1_DSTATE_d, &GNC2026W_DW.Delay_DSTATE_j);

        // If: '<S236>/If' incorporates:
        //   Constant: '<S236>/Constant'

        if (GNC2026W_P.VISinLoop == 0.0) {
          // Outputs for IfAction SubSystem: '<S236>/Artificial VIS States' incorporates:
          //   ActionPort: '<S239>/Action Port'

          // Merge: '<S236>/Merge' incorporates:
          //   DataStoreRead: '<S239>/Data Store Read1'

          GNC2026W_B.Merge_d[0] = GNC2026W_DW.BLACK_CV_States[0];
          GNC2026W_B.Merge_d[1] = GNC2026W_DW.BLACK_CV_States[1];
          GNC2026W_B.Merge_d[2] = GNC2026W_DW.BLACK_CV_States[2];

          // End of Outputs for SubSystem: '<S236>/Artificial VIS States'
        } else if (GNC2026W_P.VISinLoop == 1.0) {
          // Outputs for IfAction SubSystem: '<S236>/Experimental VIS States' incorporates:
          //   ActionPort: '<S240>/Action Port'

          GNC2026W_ExperimentalVISStates(GNC2026W_B.Merge_d,
            GNC2026W_DW.BLACK_CV_States, GNC2026W_DW.VIS_LAR_States,
            &GNC2026W_DW.isSim);

          // End of Outputs for SubSystem: '<S236>/Experimental VIS States'
        }

        // End of If: '<S236>/If'

        // MATLAB Function: '<S226>/Camera to Inertial Frame' incorporates:
        //   DataStoreRead: '<S226>/Data Store Read'
        //   Delay: '<S237>/Delay1'

        GNC2026W_CameratoInertialFrame(&GNC2026W_DW.RED_Measured_States[0],
          GNC2026W_DW.Delay1_DSTATE_d, GNC2026W_B.Merge_d, RED_Path);

        // MATLAB Function: '<S226>/MEKF' incorporates:
        //   DataStoreWrite: '<S226>/Data Store Write2'

        GNC2026W_DW.x_m[0] += GNC2026W_DW.x_m[2] * GNC2026W_P.baseRate;
        GNC2026W_DW.x_m[1] += GNC2026W_DW.x_m[3] * GNC2026W_P.baseRate;
        rtb_TSamp_m2 = GNC2026W_DW.x_m[4] * 0.0 * GNC2026W_P.baseRate;
        avg_idx_0 = GNC2026W_P.baseRate * GNC2026W_DW.x_m[4];
        if (rtb_TSamp_m2 == 0.0) {
          rtb_TSamp_m2 = cos(avg_idx_0);
          avg_idx_0 = sin(avg_idx_0);
        } else if (avg_idx_0 == 0.0) {
          avg_idx_0 = 0.0;
        } else {
          avg_idx_0 = (rtNaN);
        }

        sampleTime = GNC2026W_DW.q.re * avg_idx_0 + GNC2026W_DW.q.im *
          rtb_TSamp_m2;
        GNC2026W_DW.q.re = GNC2026W_DW.q.re * rtb_TSamp_m2 - GNC2026W_DW.q.im *
          avg_idx_0;
        GNC2026W_DW.q.im = sampleTime;
        sampleTime = rt_hypotd_snf(GNC2026W_DW.q.re, GNC2026W_DW.q.im);
        if (GNC2026W_DW.q.im == 0.0) {
          rtb_TSamp_m2 = GNC2026W_DW.q.re / sampleTime;
          sampleTime = 0.0;
        } else if (GNC2026W_DW.q.re == 0.0) {
          rtb_TSamp_m2 = 0.0;
          sampleTime = GNC2026W_DW.q.im / sampleTime;
        } else {
          rtb_TSamp_m2 = GNC2026W_DW.q.re / sampleTime;
          sampleTime = GNC2026W_DW.q.im / sampleTime;
        }

        GNC2026W_DW.q.re = rtb_TSamp_m2;
        GNC2026W_DW.q.im = sampleTime;
        for (r = 0; r < 36; r++) {
          d_coffset = cb[r];
          P_minus[r] = d_coffset;
          phi_0[r] = d_coffset;
        }

        phi_0[12] = GNC2026W_P.baseRate;
        phi_0[19] = GNC2026W_P.baseRate;
        phi_0[34] = GNC2026W_P.baseRate;
        for (r = 0; r < 6; r++) {
          for (aoffset = 0; aoffset < 6; aoffset++) {
            avg_idx_0 = 0.0;
            for (i = 0; i < 6; i++) {
              avg_idx_0 += phi_0[6 * i + aoffset] * GNC2026W_DW.P_h[6 * r + i];
            }

            phi_2[aoffset + 6 * r] = avg_idx_0;
          }
        }

        for (r = 0; r < 6; r++) {
          for (aoffset = 0; aoffset < 6; aoffset++) {
            rtb_TSamp_m2 = 0.0;
            for (i = 0; i < 6; i++) {
              rtb_TSamp_m2 += phi_2[6 * i + r] * phi_0[6 * i + aoffset];
            }

            d_coffset = 6 * aoffset + r;
            GNC2026W_DW.P_h[d_coffset] = a_1[d_coffset] * GNC2026W_P.baseRate +
              rtb_TSamp_m2;
          }
        }

        d_coffset = 0;
        rtb_TSamp_m2 = rt_roundd_snf(GNC2026W_P.CVrate / GNC2026W_P.baseRate);
        avg_idx_0 = GNC2026W_DW.k_g;
        if (rtb_TSamp_m2 == 0.0) {
          if (GNC2026W_DW.k_g == 0.0) {
            avg_idx_0 = rtb_TSamp_m2;
          }
        } else if (rtIsNaN(GNC2026W_DW.k_g)) {
          avg_idx_0 = (rtNaN);
        } else if (rtIsNaN(rtb_TSamp_m2)) {
          avg_idx_0 = (rtNaN);
        } else if (rtIsInf(GNC2026W_DW.k_g)) {
          avg_idx_0 = (rtNaN);
        } else if (GNC2026W_DW.k_g == 0.0) {
          avg_idx_0 = 0.0 / rtb_TSamp_m2;
        } else if (rtIsInf(rtb_TSamp_m2)) {
          if ((rtb_TSamp_m2 < 0.0) != (GNC2026W_DW.k_g < 0.0)) {
            avg_idx_0 = rtb_TSamp_m2;
          }
        } else {
          avg_idx_0 = fmod(GNC2026W_DW.k_g, rtb_TSamp_m2);
          if (avg_idx_0 == 0.0) {
            avg_idx_0 = rtb_TSamp_m2 * 0.0;
          } else if (((avg_idx_0 < 0.0) && (!(rtb_TSamp_m2 < 0.0))) ||
                     ((!(avg_idx_0 < 0.0)) && (rtb_TSamp_m2 < 0.0))) {
            avg_idx_0 += rtb_TSamp_m2;
          }
        }

        if (avg_idx_0 == 0.0) {
          d_coffset = 1;
        }

        GNC2026W_DW.k_g++;
        if (d_coffset == 1) {
          ik[0] = RED_Path[0] - GNC2026W_DW.x_m[0];
          ik[1] = RED_Path[1] - GNC2026W_DW.x_m[1];
          ik[2] = RED_Path[2] - rt_atan2d_snf(GNC2026W_DW.q.im, GNC2026W_DW.q.re);
          ik[2] = rt_atan2d_snf(sin(ik[2]), cos(ik[2]));
          for (r = 0; r < 18; r++) {
            Ks_data[r] = eb[r];
            P_xy[r] = c_a[r];
          }

          for (r = 0; r < 3; r++) {
            for (aoffset = 0; aoffset < 6; aoffset++) {
              avg_idx_0 = 0.0;
              for (i = 0; i < 6; i++) {
                avg_idx_0 += P_xy[3 * i + r] * GNC2026W_DW.P_h[6 * aoffset + i];
              }

              P_xy_0[r + 3 * aoffset] = avg_idx_0;
            }

            for (aoffset = 0; aoffset < 3; aoffset++) {
              rtb_TSamp_m2 = 0.0;
              for (i = 0; i < 6; i++) {
                rtb_TSamp_m2 += P_xy_0[3 * i + r] * Ks_data[6 * aoffset + i];
              }

              br = 3 * aoffset + r;
              Fdt[br] = b_b[br] + rtb_TSamp_m2;
            }
          }

          memcpy(&rtb_q_des[0], &Fdt[0], 9U * sizeof(real_T));
          r = 0;
          aoffset = 1;
          i = 2;
          avg_idx_0 = fabs(Fdt[0]);
          avg_idx_1 = avg_idx_0;
          sampleTime = fabs(Fdt[1]);
          if (sampleTime > avg_idx_0) {
            avg_idx_1 = sampleTime;
            r = 1;
            aoffset = 0;
          }

          rtb_TSamp_m2 = fabs(Fdt[2]);
          if (rtb_TSamp_m2 > avg_idx_1) {
            r = 2;
            aoffset = 1;
            i = 0;
          }

          rtb_q_des[aoffset] = Fdt[aoffset] / Fdt[r];
          rtb_q_des[i] /= rtb_q_des[r];
          rtb_q_des[aoffset + 3] -= rtb_q_des[r + 3] * rtb_q_des[aoffset];
          rtb_q_des[i + 3] -= rtb_q_des[r + 3] * rtb_q_des[i];
          rtb_q_des[aoffset + 6] -= rtb_q_des[r + 6] * rtb_q_des[aoffset];
          rtb_q_des[i + 6] -= rtb_q_des[r + 6] * rtb_q_des[i];
          if (fabs(rtb_q_des[i + 3]) > fabs(rtb_q_des[aoffset + 3])) {
            br = aoffset;
            aoffset = i;
            i = br;
          }

          rtb_q_des[i + 3] /= rtb_q_des[aoffset + 3];
          rtb_q_des[i + 6] -= rtb_q_des[i + 3] * rtb_q_des[aoffset + 6];
          RED_Path[r] = ik[0] / rtb_q_des[r];
          RED_Path[aoffset] = ik[1] - rtb_q_des[r + 3] * RED_Path[r];
          RED_Path[i] = ik[2] - rtb_q_des[r + 6] * RED_Path[r];
          RED_Path[aoffset] /= rtb_q_des[aoffset + 3];
          RED_Path[i] -= rtb_q_des[aoffset + 6] * RED_Path[aoffset];
          RED_Path[i] /= rtb_q_des[i + 6];
          RED_Path[aoffset] -= rtb_q_des[i + 3] * RED_Path[i];
          RED_Path[r] -= RED_Path[i] * rtb_q_des[i];
          RED_Path[r] -= RED_Path[aoffset] * rtb_q_des[aoffset];
          if ((RED_Path[0] * ik[0] + RED_Path[1] * ik[1]) + RED_Path[2] * ik[2] <=
              7.815) {
            for (r = 0; r < 3; r++) {
              for (aoffset = 0; aoffset < 6; aoffset++) {
                avg_idx_1 = 0.0;
                for (i = 0; i < 6; i++) {
                  avg_idx_1 += GNC2026W_DW.P_h[6 * i + aoffset] * Ks_data[6 * r
                    + i];
                }

                P_xy_0[aoffset + 6 * r] = avg_idx_1;
              }
            }

            r = 0;
            i = 1;
            br = 2;
            if (sampleTime > avg_idx_0) {
              avg_idx_0 = sampleTime;
              r = 1;
              i = 0;
            }

            if (rtb_TSamp_m2 > avg_idx_0) {
              r = 2;
              i = 1;
              br = 0;
            }

            Fdt[i] /= Fdt[r];
            Fdt[br] /= Fdt[r];
            Fdt[i + 3] -= Fdt[r + 3] * Fdt[i];
            Fdt[br + 3] -= Fdt[r + 3] * Fdt[br];
            Fdt[i + 6] -= Fdt[r + 6] * Fdt[i];
            Fdt[br + 6] -= Fdt[r + 6] * Fdt[br];
            if (fabs(Fdt[br + 3]) > fabs(Fdt[i + 3])) {
              aoffset = i;
              i = br;
              br = aoffset;
            }

            Fdt[br + 3] /= Fdt[i + 3];
            Fdt[br + 6] -= Fdt[br + 3] * Fdt[i + 6];
            sampleTime = ik[1];
            rtb_TSamp_m2 = ik[0];
            avg_idx_0 = ik[2];
            for (aoffset = 0; aoffset < 6; aoffset++) {
              ar = 6 * r + aoffset;
              Ks_data[ar] = P_xy_0[aoffset] / Fdt[r];
              boffset = 6 * i + aoffset;
              Ks_data[boffset] = P_xy_0[aoffset + 6] - Fdt[r + 3] * Ks_data[ar];
              c_aoffset = 6 * br + aoffset;
              Ks_data[c_aoffset] = P_xy_0[aoffset + 12] - Fdt[r + 6] *
                Ks_data[ar];
              Ks_data[boffset] /= Fdt[i + 3];
              Ks_data[c_aoffset] -= Fdt[i + 6] * Ks_data[boffset];
              Ks_data[c_aoffset] /= Fdt[br + 6];
              Ks_data[boffset] -= Fdt[br + 3] * Ks_data[c_aoffset];
              Ks_data[ar] -= Ks_data[c_aoffset] * Fdt[br];
              Ks_data[ar] -= Ks_data[boffset] * Fdt[i];
              rtb_Switch[aoffset] = (Ks_data[aoffset + 6] * sampleTime +
                Ks_data[aoffset] * rtb_TSamp_m2) + Ks_data[aoffset + 12] *
                avg_idx_0;
            }

            GNC2026W_DW.x_m[0] += rtb_Switch[0];
            GNC2026W_DW.x_m[1] += rtb_Switch[1];
            GNC2026W_DW.x_m[2] += rtb_Switch[2];
            GNC2026W_DW.x_m[3] += rtb_Switch[3];
            rtb_TSamp_m2 = rtb_Switch[4] * 0.0;
            if (rtb_TSamp_m2 == 0.0) {
              rtb_TSamp_m2 = cos(rtb_Switch[4]);
              avg_idx_0 = sin(rtb_Switch[4]);
            } else if (rtb_Switch[4] == 0.0) {
              avg_idx_0 = 0.0;
            } else {
              avg_idx_0 = (rtNaN);
            }

            sampleTime = GNC2026W_DW.q.re * avg_idx_0 + GNC2026W_DW.q.im *
              rtb_TSamp_m2;
            GNC2026W_DW.q.re = GNC2026W_DW.q.re * rtb_TSamp_m2 -
              GNC2026W_DW.q.im * avg_idx_0;
            GNC2026W_DW.q.im = sampleTime;
            sampleTime = rt_hypotd_snf(GNC2026W_DW.q.re, GNC2026W_DW.q.im);
            if (GNC2026W_DW.q.im == 0.0) {
              rtb_TSamp_m2 = GNC2026W_DW.q.re / sampleTime;
              sampleTime = 0.0;
            } else if (GNC2026W_DW.q.re == 0.0) {
              rtb_TSamp_m2 = 0.0;
              sampleTime = GNC2026W_DW.q.im / sampleTime;
            } else {
              rtb_TSamp_m2 = GNC2026W_DW.q.re / sampleTime;
              sampleTime = GNC2026W_DW.q.im / sampleTime;
            }

            GNC2026W_DW.q.re = rtb_TSamp_m2;
            GNC2026W_DW.q.im = sampleTime;
            GNC2026W_DW.x_m[4] += rtb_Switch[5];
            for (r = 0; r < 6; r++) {
              i = static_cast<int32_T>(P_xy[3 * r + 1]);
              br = static_cast<int32_T>(P_xy[3 * r]);
              ar = static_cast<int32_T>(P_xy[3 * r + 2]);
              for (aoffset = 0; aoffset < 6; aoffset++) {
                phi_0[aoffset + 6 * r] = (Ks_data[aoffset + 6] *
                  static_cast<real_T>(i) + static_cast<real_T>(br) *
                  Ks_data[aoffset]) + Ks_data[aoffset + 12] * static_cast<real_T>
                  (ar);
              }
            }

            for (r = 0; r < 36; r++) {
              P_minus_0[r] = P_minus[r] - phi_0[r];
            }

            for (r = 0; r < 6; r++) {
              for (aoffset = 0; aoffset < 6; aoffset++) {
                sampleTime = 0.0;
                for (i = 0; i < 6; i++) {
                  sampleTime += P_minus_0[6 * i + r] * GNC2026W_DW.P_h[6 *
                    aoffset + i];
                }

                i = 6 * aoffset + r;
                phi_3[i] = sampleTime;
                phi_2[aoffset + 6 * r] = P_minus[i] - phi_0[i];
              }

              avg_idx_0 = Ks_data[r + 6];
              th_c = Ks_data[r];
              sc = Ks_data[r + 12];
              for (aoffset = 0; aoffset < 3; aoffset++) {
                P_xy_0[r + 6 * aoffset] = (b_b[3 * aoffset + 1] * avg_idx_0 +
                  b_b[3 * aoffset] * th_c) + b_b[3 * aoffset + 2] * sc;
              }
            }

            for (r = 0; r < 6; r++) {
              for (aoffset = 0; aoffset < 6; aoffset++) {
                sampleTime = 0.0;
                for (i = 0; i < 6; i++) {
                  sampleTime += phi_3[6 * i + r] * phi_2[6 * aoffset + i];
                }

                i = 6 * aoffset + r;
                P_minus[i] = sampleTime;
                phi_0[i] = (P_xy_0[r + 6] * Ks_data[aoffset + 6] + P_xy_0[r] *
                            Ks_data[aoffset]) + P_xy_0[r + 12] * Ks_data[aoffset
                  + 12];
              }
            }

            for (r = 0; r < 36; r++) {
              GNC2026W_DW.P_h[r] = P_minus[r] + phi_0[r];
            }
          }
        }

        sampleTime = rt_atan2d_snf(GNC2026W_DW.q.im, GNC2026W_DW.q.re);
        rtb_TSamp_m2 = sampleTime - GNC2026W_DW.theta_prev_a;
        GNC2026W_DW.theta_cont += rt_atan2d_snf(sin(rtb_TSamp_m2), cos
          (rtb_TSamp_m2));
        GNC2026W_DW.theta_prev_a = sampleTime;
        GNC2026W_DW.filterConfidence = d_coffset;

        // Merge: '<S224>/Merge' incorporates:
        //   MATLAB Function: '<S226>/MEKF'
        //   SignalConversion generated from: '<S226>/BLKest'

        GNC2026W_B.Merge_k[0] = GNC2026W_DW.x_m[0];
        GNC2026W_B.Merge_k[1] = GNC2026W_DW.x_m[1];
        GNC2026W_B.Merge_k[2] = GNC2026W_DW.theta_cont;
        GNC2026W_B.Merge_k[3] = GNC2026W_DW.x_m[2];
        GNC2026W_B.Merge_k[4] = GNC2026W_DW.x_m[3];
        GNC2026W_B.Merge_k[5] = GNC2026W_DW.x_m[4];

        // End of Outputs for SubSystem: '<S224>/MEKF'
      } else if (GNC2026W_P.fNum == 3.0) {
        // Outputs for IfAction SubSystem: '<S224>/EKF' incorporates:
        //   ActionPort: '<S225>/Action Port'

        // MATLAB Function: '<S231>/MATLAB Function' incorporates:
        //   DataStoreRead: '<S225>/Data Store Read'
        //   Delay: '<S231>/Delay'
        //   Delay: '<S231>/Delay1'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_c, GNC2026W_DW.Delay1_DSTATE_g0,
          &GNC2026W_DW.Delay1_DSTATE_g0, &GNC2026W_DW.Delay_DSTATE_c);

        // MATLAB Function: '<S225>/Camera to Inertial Frame' incorporates:
        //   DataStoreRead: '<S225>/Data Store Read'
        //   DataStoreRead: '<S225>/Data Store Read1'
        //   Delay: '<S231>/Delay1'

        GNC2026W_CameratoInertialFrame(&GNC2026W_DW.RED_Measured_States[0],
          GNC2026W_DW.Delay1_DSTATE_g0, GNC2026W_DW.BLACK_CV_States, RED_Path);

        // MATLAB Function: '<S225>/EKF'
        for (r = 0; r < 36; r++) {
          d_coffset = cb[r];
          P_minus[r] = d_coffset;
          phi_0[r] = d_coffset;
        }

        phi_0[12] = GNC2026W_P.baseRate;
        phi_0[19] = GNC2026W_P.baseRate;
        phi_0[34] = GNC2026W_P.baseRate;
        for (r = 0; r < 6; r++) {
          avg_idx_0 = 0.0;
          for (aoffset = 0; aoffset < 6; aoffset++) {
            avg_idx_0 += phi_0[6 * aoffset + r] * GNC2026W_DW.x[aoffset];
          }

          rtb_Switch[r] = avg_idx_0;
        }

        for (r = 0; r < 6; r++) {
          GNC2026W_DW.x[r] = rtb_Switch[r];
          for (aoffset = 0; aoffset < 6; aoffset++) {
            avg_idx_0 = 0.0;
            for (i = 0; i < 6; i++) {
              avg_idx_0 += phi_0[6 * i + r] * GNC2026W_DW.P[6 * aoffset + i];
            }

            phi_2[r + 6 * aoffset] = avg_idx_0;
          }

          rtPrevAction = b_a_0[r + 6];
          rtAction = b_a_0[r];
          S_tmp_0 = b_a_0[r + 12];
          for (aoffset = 0; aoffset < 3; aoffset++) {
            P_xy[r + 6 * aoffset] = (a_0[3 * aoffset + 1] * GNC2026W_P.baseRate *
              static_cast<real_T>(rtPrevAction) + a_0[3 * aoffset] *
              GNC2026W_P.baseRate * static_cast<real_T>(rtAction)) + a_0[3 *
              aoffset + 2] * GNC2026W_P.baseRate * static_cast<real_T>(S_tmp_0);
          }

          for (aoffset = 0; aoffset < 6; aoffset++) {
            avg_idx_0 = 0.0;
            for (i = 0; i < 6; i++) {
              avg_idx_0 += phi_2[6 * i + r] * phi_0[6 * i + aoffset];
            }

            phi_3[r + 6 * aoffset] = avg_idx_0;
          }
        }

        for (r = 0; r < 6; r++) {
          rtPrevAction = db[3 * r + 1];
          rtAction = db[3 * r];
          S_tmp_0 = db[3 * r + 2];
          for (aoffset = 0; aoffset < 6; aoffset++) {
            phi_0[aoffset + 6 * r] = (P_xy[aoffset + 6] * static_cast<real_T>
              (rtPrevAction) + static_cast<real_T>(rtAction) * P_xy[aoffset]) +
              P_xy[aoffset + 12] * static_cast<real_T>(S_tmp_0);
          }
        }

        for (r = 0; r < 36; r++) {
          GNC2026W_DW.P[r] = phi_3[r] + phi_0[r];
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
          rtb_TSamp_m2 = 0.0;
          for (aoffset = 0; aoffset < 6; aoffset++) {
            i = 3 * aoffset + r;
            rtb_TSamp_m2 += P_xy[i] * GNC2026W_DW.x[aoffset];
            avg_idx_0 = 0.0;
            for (d_coffset = 0; d_coffset < 6; d_coffset++) {
              avg_idx_0 += P_xy[3 * d_coffset + r] * GNC2026W_DW.P[6 * aoffset +
                d_coffset];
            }

            P_xy_0[i] = avg_idx_0;
          }

          ik[r] = RED_Path[r] - rtb_TSamp_m2;
          for (aoffset = 0; aoffset < 3; aoffset++) {
            rtb_TSamp_m2 = 0.0;
            for (i = 0; i < 6; i++) {
              rtb_TSamp_m2 += P_xy_0[3 * i + r] * static_cast<real_T>(eb[6 *
                aoffset + i]);
            }

            br = 3 * aoffset + r;
            Fdt[br] = fb[br] + rtb_TSamp_m2;
          }
        }

        sampleTime = RED_Path[2] - rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos
          (GNC2026W_DW.x[4]));
        ik[2] = rt_atan2d_snf(sin(sampleTime), cos(sampleTime));
        if (Fdt[0] >= 1.0E-10) {
          rtb_TSamp_m2 = Fdt[0];
        } else {
          rtb_TSamp_m2 = 1.0E-10;
        }

        keep[0] = (fabs(ik[0]) <= 3.0 * sqrt(rtb_TSamp_m2));
        if (Fdt[4] >= 1.0E-10) {
          rtb_TSamp_m2 = Fdt[4];
        } else {
          rtb_TSamp_m2 = 1.0E-10;
        }

        keep[1] = (fabs(ik[1]) <= 3.0 * sqrt(rtb_TSamp_m2));
        if (Fdt[8] >= 1.0E-10) {
          rtb_TSamp_m2 = Fdt[8];
        } else {
          rtb_TSamp_m2 = 1.0E-10;
        }

        keep[2] = (fabs(ik[2]) <= 3.0 * sqrt(rtb_TSamp_m2));
        rtb_NOT = false;
        aoffset = 0;
        exitg2 = false;
        while ((!exitg2) && (aoffset < 3)) {
          if (keep[aoffset]) {
            rtb_NOT = true;
            exitg2 = true;
          } else {
            aoffset++;
          }
        }

        if (rtb_NOT) {
          r = 0;
          for (i = 0; i < 3; i++) {
            if (keep[i]) {
              r++;
            }
          }

          tmp_size_idx_0 = r;
          r = 0;
          for (i = 0; i < 3; i++) {
            if (keep[i]) {
              tmp_data[r] = static_cast<int8_T>(i);
              r++;
            }
          }

          if (tmp_size_idx_0 == 1) {
            d_size_idx_0 = 1;
            RED_Path[0] = fb[3 * tmp_data[0] + tmp_data[0]];
          } else {
            if (tmp_size_idx_0 > 0) {
              d_coffset = tmp_size_idx_0;
            } else {
              d_coffset = 0;
            }

            d_size_idx_0 = d_coffset;
            for (aoffset = 0; aoffset < d_coffset; aoffset++) {
              r = tmp_data[aoffset];
              RED_Path[aoffset] = fb[3 * r + r];
            }
          }

          R_new_size[0] = d_size_idx_0;
          R_new_size[1] = d_size_idx_0;
          aoffset = d_size_idx_0 * d_size_idx_0;
          if (aoffset - 1 >= 0) {
            memset(&rtb_q_des[0], 0, static_cast<uint32_T>(aoffset) * sizeof
                   (real_T));
          }

          for (d_coffset = 0; d_coffset < d_size_idx_0; d_coffset++) {
            rtb_q_des[d_coffset + d_size_idx_0 * d_coffset] = RED_Path[d_coffset];
          }

          if (tmp_size_idx_0 - 1 >= 0) {
            memcpy(&S_tmp[0], &tmp_data[0], static_cast<uint32_T>(tmp_size_idx_0)
                   * sizeof(int8_T));
          }

          for (br = 0; br < 6; br++) {
            ar = br * tmp_size_idx_0;
            boffset = br * 6;
            for (i = 0; i < tmp_size_idx_0; i++) {
              sampleTime = 0.0;
              for (r = 0; r < 6; r++) {
                c_aoffset = r * tmp_size_idx_0 + i;
                sampleTime += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(c_aoffset) / static_cast<uint32_T>
                  (tmp_size_idx_0)) * 3 + S_tmp[c_aoffset % tmp_size_idx_0]]) *
                  GNC2026W_DW.P[boffset + r];
              }

              P_xy[ar + i] = sampleTime;
            }
          }

          b_size[0] = tmp_size_idx_0;
          b_size[1] = tmp_size_idx_0;
          b_y_size[0] = 6;
          b_y_size[1] = tmp_size_idx_0;
          for (r = 0; r < tmp_size_idx_0; r++) {
            ar = r * tmp_size_idx_0;
            for (i = 0; i < tmp_size_idx_0; i++) {
              sampleTime = 0.0;
              for (br = 0; br < 6; br++) {
                boffset = br * tmp_size_idx_0;
                c_aoffset = boffset + r;
                sampleTime += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(c_aoffset) / static_cast<uint32_T>
                  (tmp_size_idx_0)) * 3 + S_tmp[c_aoffset % tmp_size_idx_0]]) *
                  P_xy[boffset + i];
              }

              Fdt[ar + i] = sampleTime;
            }

            ar = r * 6;
            for (i = 0; i < 6; i++) {
              sampleTime = 0.0;
              for (br = 0; br < 6; br++) {
                boffset = br * tmp_size_idx_0 + r;
                sampleTime += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(boffset) / static_cast<uint32_T>
                  (tmp_size_idx_0)) * 3 + S_tmp[boffset % tmp_size_idx_0]]) *
                  GNC2026W_DW.P[br * 6 + i];
              }

              P_xy_0[ar + i] = sampleTime;
            }
          }

          if (tmp_size_idx_0 == d_size_idx_0) {
            b_size_0[0] = tmp_size_idx_0;
            b_size_0[1] = tmp_size_idx_0;
            i = tmp_size_idx_0 * tmp_size_idx_0;
            for (r = 0; r < i; r++) {
              phi_tmp[r] = Fdt[r] + rtb_q_des[r];
            }

            GNC2026W_mrdiv(P_xy_0, b_y_size, phi_tmp, b_size_0, Ks_data, Ks_size);
          } else {
            GNC2026W_binary_expand_op(Ks_data, Ks_size, P_xy_0, b_y_size, Fdt,
              b_size, rtb_q_des, R_new_size);
          }

          for (r = 0; r < 6; r++) {
            rtb_Switch[r] = 0.0;
          }

          br = Ks_size[1];
          for (r = 0; r < br; r++) {
            aoffset = r * 6;
            for (i = 0; i < 6; i++) {
              rtb_Switch[i] += Ks_data[aoffset + i] * ik[tmp_data[r]];
            }
          }

          for (r = 0; r < 6; r++) {
            GNC2026W_DW.x[r] += rtb_Switch[r];
          }

          for (boffset = 0; boffset < d_size_idx_0; boffset++) {
            d_coffset = boffset * 6;
            i = boffset * d_size_idx_0;
            for (r = 0; r < 6; r++) {
              P_xy_0[d_coffset + r] = 0.0;
            }

            for (c_aoffset = 0; c_aoffset < br; c_aoffset++) {
              r = c_aoffset * 6;
              sampleTime = rtb_q_des[i + c_aoffset];
              for (ar = 0; ar < 6; ar++) {
                aoffset = d_coffset + ar;
                P_xy_0[aoffset] += Ks_data[r + ar] * sampleTime;
              }
            }
          }

          y_size[0] = tmp_size_idx_0;
          y_size[1] = 6;
          for (aoffset = 0; aoffset < 6; aoffset++) {
            boffset = aoffset * 6;
            for (r = 0; r < 6; r++) {
              phi_0[boffset + r] = 0.0;
            }

            for (r = 0; r < d_size_idx_0; r++) {
              c_aoffset = r * 6;
              sampleTime = Ks_data[r * 6 + aoffset];
              for (ar = 0; ar < 6; ar++) {
                br = boffset + ar;
                phi_0[br] += P_xy_0[c_aoffset + ar] * sampleTime;
              }
            }

            for (r = 0; r < tmp_size_idx_0; r++) {
              P_xy[r + tmp_size_idx_0 * aoffset] = H[3 * aoffset + tmp_data[r]];
            }
          }

          GNC2026W_mtimes(Ks_data, Ks_size, P_xy, y_size, S_minus);
          for (r = 0; r < 36; r++) {
            P_minus_0[r] = P_minus[r] - S_minus[r];
          }

          for (r = 0; r < 6; r++) {
            for (aoffset = 0; aoffset < 6; aoffset++) {
              sampleTime = 0.0;
              for (i = 0; i < 6; i++) {
                sampleTime += P_minus_0[6 * i + r] * GNC2026W_DW.P[6 * aoffset +
                  i];
              }

              i = 6 * aoffset + r;
              phi_3[i] = sampleTime;
              phi_2[aoffset + 6 * r] = P_minus[i] - S_minus[i];
            }
          }

          for (r = 0; r < 6; r++) {
            for (aoffset = 0; aoffset < 6; aoffset++) {
              rtb_TSamp_m2 = 0.0;
              for (i = 0; i < 6; i++) {
                rtb_TSamp_m2 += phi_3[6 * i + r] * phi_2[6 * aoffset + i];
              }

              d_coffset = 6 * aoffset + r;
              GNC2026W_DW.P[d_coffset] = phi_0[d_coffset] + rtb_TSamp_m2;
            }
          }
        }

        if (!GNC2026W_DW.initial_theta) {
          GNC2026W_DW.theta_prev = rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos
            (GNC2026W_DW.x[4]));
          GNC2026W_DW.theta = GNC2026W_DW.theta_prev;
          GNC2026W_DW.initial_theta = true;
        } else {
          rtb_TSamp_m2 = rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos(GNC2026W_DW.x
            [4]));
          sampleTime = rtb_TSamp_m2 - GNC2026W_DW.theta_prev;
          GNC2026W_DW.theta += rt_atan2d_snf(sin(sampleTime), cos(sampleTime));
          GNC2026W_DW.theta_prev = rtb_TSamp_m2;
        }

        GNC2026W_DW.x[4] = GNC2026W_DW.theta;

        // Merge: '<S224>/Merge' incorporates:
        //   MATLAB Function: '<S225>/EKF'
        //   SignalConversion generated from: '<S225>/BLKest'

        GNC2026W_B.Merge_k[0] = GNC2026W_DW.x[0];
        GNC2026W_B.Merge_k[1] = GNC2026W_DW.x[1];
        GNC2026W_B.Merge_k[2] = GNC2026W_DW.x[4];
        GNC2026W_B.Merge_k[3] = GNC2026W_DW.x[2];
        GNC2026W_B.Merge_k[4] = GNC2026W_DW.x[3];
        GNC2026W_B.Merge_k[5] = GNC2026W_DW.x[5];

        // End of Outputs for SubSystem: '<S224>/EKF'
      }

      // End of If: '<S224>/If'

      // DataStoreWrite: '<S224>/Data Store Write2'
      for (i = 0; i < 6; i++) {
        GNC2026W_DW.BLACK_Filtered_States[i] = GNC2026W_B.Merge_k[i];
      }

      // End of DataStoreWrite: '<S224>/Data Store Write2'
      // End of Outputs for SubSystem: '<S9>/If Action Subsystem'
    }

    // End of If: '<S9>/Experiment Sub-Phases'

    // If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Constant: '<S255>/Constant'
    //   Constant: '<S263>/Constant3'
    //   Constant: '<S284>/Constant3'
    //   Constant: '<S294>/Constant3'
    //   DataStoreRead: '<S10>/Data Store Read2'
    //   Delay: '<S263>/Delay1'
    //   Delay: '<S284>/Delay1'
    //   Delay: '<S294>/Delay1'
    //   RelationalOperator: '<S255>/Relational Operator'
    //   RelationalOperator: '<S263>/Relational Operator'
    //   RelationalOperator: '<S265>/Relational Operator'
    //   RelationalOperator: '<S284>/Relational Operator'
    //   RelationalOperator: '<S285>/Relational Operator'
    //   RelationalOperator: '<S294>/Relational Operator'
    //   RelationalOperator: '<S295>/Relational Operator'
    //   SignalConversion generated from: '<S280>/Enable'
    //   SignalConversion generated from: '<S282>/Enable'
    //   SignalConversion generated from: '<S290>/Enable'
    //   SignalConversion generated from: '<S292>/Enable'
    //   SignalConversion generated from: '<S300>/Enable'
    //   SignalConversion generated from: '<S302>/Enable'
    //   Sum: '<S263>/Subtract2'
    //   Sum: '<S284>/Subtract2'
    //   Sum: '<S294>/Subtract2'

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
        // Disable for Enabled SubSystem: '<S266>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_g);
        }

        // End of Disable for SubSystem: '<S266>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S265>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_i.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_i);
        }

        // End of Disable for SubSystem: '<S265>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S286>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_d);
        }

        // End of Disable for SubSystem: '<S286>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S285>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_l.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_l);
        }

        // End of Disable for SubSystem: '<S285>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S296>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_l1);
        }

        // End of Disable for SubSystem: '<S296>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S295>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_k.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_k);
        }

        // End of Disable for SubSystem: '<S295>/Enabled Subsystem'

        // Disable for If: '<S259>/This IF block determines whether or not to run the BLACK sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;

        // Disable for If: '<S259>/This IF block determines whether or not to run the BLUE sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;

        // Disable for If: '<S259>/This IF block determines whether or not to run the RED sim//exp ' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;
      }
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S250>/Action Port'

      // S-Function (sdspFromNetwork): '<S251>/Receive PhaseSpace Data'
      sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
      samplesRead = 19;
      LibOutputs_Network(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U],
                         &GNC2026W_B.ReceivePhaseSpaceData_o1[0U], &samplesRead);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S251>/Receive PhaseSpace Data'

      // Gain: '<S252>/Convert BLAX from [mm] to [m]'
      GNC2026W_B.ConvertBLAXfrommmtom = GNC2026W_P.ConvertBLAXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[4];

      // Gain: '<S252>/Convert BLAY from [mm] to [m]'
      sampleTime = GNC2026W_P.ConvertBLAYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[5];

      // Trigonometry: '<S267>/Sin'
      avg_idx_0 = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[6]);

      // Trigonometry: '<S267>/Cos'
      rtb_TSamp_m2 = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[6]);

      // DataStoreWrite: '<S252>/RED_Px7' incorporates:
      //   Gain: '<S252>/Convert BLACKVX from [mm] to [m]'
      //   Gain: '<S252>/Convert BLACKVY from [mm] to [m]'
      //   Trigonometry: '<S267>/Atan2'

      GNC2026W_DW.BLACK_Measured_States[2] = rt_atan2d_snf(avg_idx_0,
        rtb_TSamp_m2);
      GNC2026W_DW.BLACK_Measured_States[3] =
        GNC2026W_P.ConvertBLACKVXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[13];
      GNC2026W_DW.BLACK_Measured_States[4] =
        GNC2026W_P.ConvertBLACKVYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[14];

      // Sum: '<S263>/Subtract1' incorporates:
      //   Delay: '<S263>/Delay2'

      rtb_TSamp_m2 = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE;

      // Outputs for Enabled SubSystem: '<S263>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S268>/Enable'

      if (GNC2026W_B.ConvertBLAXfrommmtom - GNC2026W_DW.Delay1_DSTATE !=
          GNC2026W_P.Constant3_Value_eq) {
        // SignalConversion generated from: '<S268>/y2-y1'
        GNC2026W_B.y2y1_ob = rtb_TSamp_m2;
      }

      // End of Outputs for SubSystem: '<S263>/Enabled Subsystem3'

      // MATLAB Function: '<S263>/MATLAB Function' incorporates:
      //   Constant: '<S263>/Constant'
      //   Constant: '<S263>/Constant3'
      //   Delay: '<S263>/Delay1'
      //   RelationalOperator: '<S263>/Relational Operator'
      //   Sum: '<S263>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1_ob, GNC2026W_P.dataRate,
        &rtb_TSamp_m2);

      // Sum: '<S266>/Subtract1' incorporates:
      //   Delay: '<S266>/Delay1'

      ik[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6] -
        GNC2026W_DW.Delay1_DSTATE_g[2];

      // RelationalOperator: '<S266>/Relational Operator' incorporates:
      //   Constant: '<S266>/Constant3'
      //   Delay: '<S266>/Delay1'
      //   Sum: '<S266>/Subtract1'

      keep[0] = (GNC2026W_B.ConvertBLAXfrommmtom - GNC2026W_DW.Delay1_DSTATE_g[0]
                 != GNC2026W_P.Constant3_Value_a);
      keep[1] = (sampleTime - GNC2026W_DW.Delay1_DSTATE_g[1] !=
                 GNC2026W_P.Constant3_Value_a);
      keep[2] = (ik[2] != GNC2026W_P.Constant3_Value_a);

      // Outputs for Enabled SubSystem: '<S266>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(keep, GNC2026W_B.ConvertBLAXfrommmtom,
        sampleTime, GNC2026W_B.ReceivePhaseSpaceData_o1[6], rtb_TSamp_m2,
        GNC2026W_B.dy_p, &GNC2026W_B.EnabledSubsystem_g,
        &GNC2026W_DW.EnabledSubsystem_g, &GNC2026W_P.EnabledSubsystem_g);

      // End of Outputs for SubSystem: '<S266>/Enabled Subsystem'

      // RelationalOperator: '<S265>/Relational Operator' incorporates:
      //   Constant: '<S265>/Constant3'
      //   Delay: '<S265>/Delay1'
      //   SignalConversion generated from: '<S282>/Enable'
      //   Sum: '<S265>/Subtract1'

      keep[0] = (GNC2026W_B.dy_p[0] - GNC2026W_DW.Delay1_DSTATE_b[0] !=
                 GNC2026W_P.Constant3_Value_d);
      keep[1] = (GNC2026W_B.dy_p[1] - GNC2026W_DW.Delay1_DSTATE_b[1] !=
                 GNC2026W_P.Constant3_Value_d);
      keep[2] = (GNC2026W_B.dy_p[2] - GNC2026W_DW.Delay1_DSTATE_b[2] !=
                 GNC2026W_P.Constant3_Value_d);

      // Outputs for Enabled SubSystem: '<S265>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(keep, GNC2026W_B.dy_p, rtb_TSamp_m2,
        GNC2026W_B.dy_g, &GNC2026W_B.EnabledSubsystem_i,
        &GNC2026W_DW.EnabledSubsystem_i, &GNC2026W_P.EnabledSubsystem_i);

      // End of Outputs for SubSystem: '<S265>/Enabled Subsystem'

      // DataStoreWrite: '<S252>/RED_Px7' incorporates:
      //   RelationalOperator: '<S265>/Relational Operator'
      //   SignalConversion generated from: '<S280>/Enable'

      GNC2026W_DW.BLACK_Measured_States[0] = GNC2026W_B.ConvertBLAXfrommmtom;
      GNC2026W_DW.BLACK_Measured_States[1] = sampleTime;
      GNC2026W_DW.BLACK_Measured_States[5] =
        GNC2026W_B.ReceivePhaseSpaceData_o1[15];
      GNC2026W_DW.BLACK_Measured_States[6] = GNC2026W_B.dy_g[0];
      GNC2026W_DW.BLACK_Measured_States[7] = GNC2026W_B.dy_g[1];
      GNC2026W_DW.BLACK_Measured_States[8] = GNC2026W_B.dy_g[2];

      // MATLAB Function: '<S278>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S264>/Data Store Read3'
      //   Delay: '<S278>/Delay'
      //   Delay: '<S278>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_h, GNC2026W_DW.Delay1_DSTATE_f, &GNC2026W_B.y,
        &GNC2026W_B.u_next);

      // SignalConversion generated from: '<S271>/ SFunction ' incorporates:
      //   MATLAB Function: '<S264>/BLK CoM to LAR'

      ik[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6];

      // MATLAB Function: '<S264>/BLK CoM to LAR'
      th_c = sin(ik[2]);
      sc = cos(ik[2]);

      // MATLAB Function: '<S264>/Inertial to Camera Frame (HARDWARE)' incorporates:
      //   DataStoreRead: '<S264>/Data Store Read3'
      //   MATLAB Function: '<S264>/BLK CoM to LAR'
      //   SignalConversion generated from: '<S271>/ SFunction '
      //   SignalConversion generated from: '<S273>/ SFunction '

      rtb_TSamp_m2 = sin(GNC2026W_B.y);
      avg_idx_0 = cos(GNC2026W_B.y);
      avg_idx_1 = ((sc * 0.145 + -th_c * 0.0) + GNC2026W_B.ConvertBLAXfrommmtom)
        - GNC2026W_DW.RED_Measured_States[0];
      th_c = ((th_c * 0.145 + sc * 0.0) + sampleTime) -
        GNC2026W_DW.RED_Measured_States[1];

      // Sum: '<S264>/Sum' incorporates:
      //   DataStoreRead: '<S264>/Data Store Read'
      //   MATLAB Function: '<S264>/BLK CoM to LAR'
      //   MATLAB Function: '<S264>/Inertial to Camera Frame (HARDWARE)'
      //   SignalConversion generated from: '<S273>/ SFunction '

      K[0] = ((avg_idx_0 * avg_idx_1 + rtb_TSamp_m2 * th_c) - 0.125) +
        BLACK_Exp_Noise;
      K[1] = ((-rtb_TSamp_m2 * avg_idx_1 + avg_idx_0 * th_c) - 0.03) +
        BLACK_Exp_Noise;
      K[2] = (ik[2] - GNC2026W_B.y) + BLACK_Exp_Noise;

      // MATLAB Function: '<S264>/CV Noise' incorporates:
      //   Sum: '<S264>/Sum'

      if (GNC2026W_rand_a() < 0.5) {
        rtb_TSamp_m2 = (2.0 * GNC2026W_rand_a() - 1.0) * 0.1;
        K[0] += rtb_TSamp_m2;
        K[1] += rtb_TSamp_m2;
        K[2] += rtb_TSamp_m2;
      }

      avg_idx_0 = rt_roundd_snf(K[0] / 0.0001) * 0.0001;
      th_c = rt_roundd_snf(K[1] / 0.0001) * 0.0001;
      sc = rt_roundd_snf(K[2] / 0.0001) * 0.0001;

      // End of MATLAB Function: '<S264>/CV Noise'

      // MATLAB Function: '<S264>/Sample and Hold' incorporates:
      //   DataStoreWrite: '<S264>/Data Store Write'

      if (!GNC2026W_DW.k_not_empty) {
        GNC2026W_DW.k_not_empty = true;
        GNC2026W_DW.y_hold[0] = avg_idx_0;
        GNC2026W_DW.y_hold[1] = th_c;
        GNC2026W_DW.y_hold[2] = sc;
      }

      rtb_TSamp_m2 = GNC2026W_P.CVrate / GNC2026W_P.baseRate;
      avg_idx_1 = GNC2026W_DW.k;
      if (rtb_TSamp_m2 == 0.0) {
        if (GNC2026W_DW.k == 0.0) {
          avg_idx_1 = rtb_TSamp_m2;
        }
      } else if (rtIsNaN(GNC2026W_DW.k)) {
        avg_idx_1 = (rtNaN);
      } else if (rtIsNaN(rtb_TSamp_m2)) {
        avg_idx_1 = (rtNaN);
      } else if (rtIsInf(GNC2026W_DW.k)) {
        avg_idx_1 = (rtNaN);
      } else if (GNC2026W_DW.k == 0.0) {
        avg_idx_1 = 0.0 / rtb_TSamp_m2;
      } else if (rtIsInf(rtb_TSamp_m2)) {
        if ((rtb_TSamp_m2 < 0.0) != (GNC2026W_DW.k < 0.0)) {
          avg_idx_1 = rtb_TSamp_m2;
        }
      } else {
        avg_idx_1 = fmod(GNC2026W_DW.k, rtb_TSamp_m2);
        rtb_NOT = (avg_idx_1 == 0.0);
        if ((!rtb_NOT) && (rtb_TSamp_m2 > floor(rtb_TSamp_m2))) {
          scale = fabs(GNC2026W_DW.k / rtb_TSamp_m2);
          rtb_NOT = !(fabs(scale - floor(scale + 0.5)) > 2.2204460492503131E-16 *
                      scale);
        }

        if (rtb_NOT) {
          avg_idx_1 = rtb_TSamp_m2 * 0.0;
        } else if (((avg_idx_1 < 0.0) && (!(rtb_TSamp_m2 < 0.0))) ||
                   ((!(avg_idx_1 < 0.0)) && (rtb_TSamp_m2 < 0.0))) {
          avg_idx_1 += rtb_TSamp_m2;
        }
      }

      if (avg_idx_1 == 0.0) {
        GNC2026W_DW.y_hold[0] = avg_idx_0;
        GNC2026W_DW.y_hold[1] = th_c;
        GNC2026W_DW.y_hold[2] = sc;
      }

      GNC2026W_DW.BLACK_CV_States[0] = GNC2026W_DW.y_hold[0];
      GNC2026W_DW.BLACK_CV_States[1] = GNC2026W_DW.y_hold[1];
      GNC2026W_DW.BLACK_CV_States[2] = GNC2026W_DW.y_hold[2];
      GNC2026W_DW.k++;

      // End of MATLAB Function: '<S264>/Sample and Hold'

      // If: '<S264>/If' incorporates:
      //   Constant: '<S264>/Constant'

      if (GNC2026W_P.VISinLoop == 0.0) {
        // Outputs for IfAction SubSystem: '<S264>/Artificial isValid Flag' incorporates:
        //   ActionPort: '<S270>/Action Port'

        // MATLAB Function: '<S270>/MATLAB Function1' incorporates:
        //   DataStoreWrite: '<S270>/Data Store Write2'

        GNC2026W_DW.isValid = (GNC2026W_DW.k_h * GNC2026W_P.baseRate > 65.0);
        GNC2026W_DW.k_h++;

        // End of Outputs for SubSystem: '<S264>/Artificial isValid Flag'
      }

      // End of If: '<S264>/If'

      // SignalConversion generated from: '<S266>/Delay1' incorporates:
      //   Delay: '<S266>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_g[0] = GNC2026W_B.ConvertBLAXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_g[1] = sampleTime;
      GNC2026W_DW.Delay1_DSTATE_g[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6];

      // Gain: '<S253>/Convert BLUX from [mm] to [m]'
      GNC2026W_B.ConvertBLUXfrommmtom = GNC2026W_P.ConvertBLUXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[7];

      // Gain: '<S253>/Convert BLUY from [mm] to [m]'
      BLACK_Exp_Noise = GNC2026W_P.ConvertBLUYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[8];

      // Trigonometry: '<S287>/Sin'
      sampleTime = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[9]);

      // Trigonometry: '<S287>/Cos'
      rtb_TSamp_m2 = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[9]);

      // DataStoreWrite: '<S253>/RED_Px7' incorporates:
      //   Gain: '<S253>/Convert BLUEVX from [mm] to [m]'
      //   Gain: '<S253>/Convert BLUEVY from [mm] to [m]'
      //   Trigonometry: '<S287>/Atan2'

      GNC2026W_DW.BLUE_Measured_States[2] = rt_atan2d_snf(sampleTime,
        rtb_TSamp_m2);
      GNC2026W_DW.BLUE_Measured_States[3] =
        GNC2026W_P.ConvertBLUEVXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[16];
      GNC2026W_DW.BLUE_Measured_States[4] =
        GNC2026W_P.ConvertBLUEVYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[17];

      // Sum: '<S284>/Subtract1' incorporates:
      //   Delay: '<S284>/Delay2'

      sampleTime = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE_l;

      // Outputs for Enabled SubSystem: '<S284>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S288>/Enable'

      if (GNC2026W_B.ConvertBLUXfrommmtom - GNC2026W_DW.Delay1_DSTATE_l !=
          GNC2026W_P.Constant3_Value_o) {
        // SignalConversion generated from: '<S288>/y2-y1'
        GNC2026W_B.y2y1_o = sampleTime;
      }

      // End of Outputs for SubSystem: '<S284>/Enabled Subsystem3'

      // MATLAB Function: '<S284>/MATLAB Function' incorporates:
      //   Constant: '<S284>/Constant'
      //   Constant: '<S284>/Constant3'
      //   Delay: '<S284>/Delay1'
      //   RelationalOperator: '<S284>/Relational Operator'
      //   Sum: '<S284>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1_o, GNC2026W_P.dataRate,
        &rtb_TSamp_m2);

      // Sum: '<S286>/Subtract1' incorporates:
      //   Delay: '<S286>/Delay1'

      ik[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[9] -
        GNC2026W_DW.Delay1_DSTATE_m[2];

      // RelationalOperator: '<S286>/Relational Operator' incorporates:
      //   Constant: '<S286>/Constant3'
      //   Delay: '<S286>/Delay1'
      //   Sum: '<S286>/Subtract1'

      keep[0] = (GNC2026W_B.ConvertBLUXfrommmtom - GNC2026W_DW.Delay1_DSTATE_m[0]
                 != GNC2026W_P.Constant3_Value_c);
      keep[1] = (BLACK_Exp_Noise - GNC2026W_DW.Delay1_DSTATE_m[1] !=
                 GNC2026W_P.Constant3_Value_c);
      keep[2] = (ik[2] != GNC2026W_P.Constant3_Value_c);

      // Outputs for Enabled SubSystem: '<S286>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(keep, GNC2026W_B.ConvertBLUXfrommmtom,
        BLACK_Exp_Noise, GNC2026W_B.ReceivePhaseSpaceData_o1[9], rtb_TSamp_m2,
        GNC2026W_B.dy_c, &GNC2026W_B.EnabledSubsystem_d,
        &GNC2026W_DW.EnabledSubsystem_d, &GNC2026W_P.EnabledSubsystem_d);

      // End of Outputs for SubSystem: '<S286>/Enabled Subsystem'

      // RelationalOperator: '<S285>/Relational Operator' incorporates:
      //   Constant: '<S285>/Constant3'
      //   Delay: '<S285>/Delay1'
      //   SignalConversion generated from: '<S292>/Enable'
      //   Sum: '<S285>/Subtract1'

      keep[0] = (GNC2026W_B.dy_c[0] - GNC2026W_DW.Delay1_DSTATE_lv[0] !=
                 GNC2026W_P.Constant3_Value_ke);
      keep[1] = (GNC2026W_B.dy_c[1] - GNC2026W_DW.Delay1_DSTATE_lv[1] !=
                 GNC2026W_P.Constant3_Value_ke);
      keep[2] = (GNC2026W_B.dy_c[2] - GNC2026W_DW.Delay1_DSTATE_lv[2] !=
                 GNC2026W_P.Constant3_Value_ke);

      // Outputs for Enabled SubSystem: '<S285>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(keep, GNC2026W_B.dy_c, rtb_TSamp_m2,
        GNC2026W_B.dy_d, &GNC2026W_B.EnabledSubsystem_l,
        &GNC2026W_DW.EnabledSubsystem_l, &GNC2026W_P.EnabledSubsystem_l);

      // End of Outputs for SubSystem: '<S285>/Enabled Subsystem'

      // DataStoreWrite: '<S253>/RED_Px7' incorporates:
      //   RelationalOperator: '<S285>/Relational Operator'
      //   SignalConversion generated from: '<S290>/Enable'

      GNC2026W_DW.BLUE_Measured_States[0] = GNC2026W_B.ConvertBLUXfrommmtom;
      GNC2026W_DW.BLUE_Measured_States[1] = BLACK_Exp_Noise;
      GNC2026W_DW.BLUE_Measured_States[5] = GNC2026W_B.ReceivePhaseSpaceData_o1
        [18];
      GNC2026W_DW.BLUE_Measured_States[6] = GNC2026W_B.dy_d[0];
      GNC2026W_DW.BLUE_Measured_States[7] = GNC2026W_B.dy_d[1];
      GNC2026W_DW.BLUE_Measured_States[8] = GNC2026W_B.dy_d[2];

      // SignalConversion generated from: '<S286>/Delay1' incorporates:
      //   Delay: '<S286>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_m[0] = GNC2026W_B.ConvertBLUXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_m[1] = BLACK_Exp_Noise;
      GNC2026W_DW.Delay1_DSTATE_m[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[9];

      // Gain: '<S254>/Convert REDX from [mm] to [m]'
      GNC2026W_B.ConvertREDXfrommmtom = GNC2026W_P.ConvertREDXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[1];

      // Gain: '<S254>/Convert REDY from [mm] to [m]'
      BLACK_Exp_Noise = GNC2026W_P.ConvertREDYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[2];

      // Trigonometry: '<S297>/Sin'
      sampleTime = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[3]);

      // Trigonometry: '<S297>/Cos'
      rtb_TSamp_m2 = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[3]);

      // DataStoreWrite: '<S254>/RED_Px7' incorporates:
      //   Gain: '<S254>/Convert REDVX from [mm] to [m]'
      //   Gain: '<S254>/Convert REDVY from [mm] to [m]'
      //   Trigonometry: '<S297>/Atan2'

      GNC2026W_DW.RED_Measured_States[2] = rt_atan2d_snf(sampleTime,
        rtb_TSamp_m2);
      GNC2026W_DW.RED_Measured_States[3] = GNC2026W_P.ConvertREDVXfrommmtom_Gain
        * GNC2026W_B.ReceivePhaseSpaceData_o1[10];
      GNC2026W_DW.RED_Measured_States[4] = GNC2026W_P.ConvertREDVYfrommmtom_Gain
        * GNC2026W_B.ReceivePhaseSpaceData_o1[11];

      // Sum: '<S294>/Subtract1' incorporates:
      //   Delay: '<S294>/Delay2'

      sampleTime = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE_l0;

      // Outputs for Enabled SubSystem: '<S294>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S298>/Enable'

      if (GNC2026W_B.ConvertREDXfrommmtom - GNC2026W_DW.Delay1_DSTATE_ld !=
          GNC2026W_P.Constant3_Value_f) {
        // SignalConversion generated from: '<S298>/y2-y1'
        GNC2026W_B.y2y1 = sampleTime;
      }

      // End of Outputs for SubSystem: '<S294>/Enabled Subsystem3'

      // MATLAB Function: '<S294>/MATLAB Function' incorporates:
      //   Constant: '<S294>/Constant'
      //   Constant: '<S294>/Constant3'
      //   Delay: '<S294>/Delay1'
      //   RelationalOperator: '<S294>/Relational Operator'
      //   Sum: '<S294>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1, GNC2026W_P.dataRate,
        &rtb_TSamp_m2);

      // Sum: '<S296>/Subtract1' incorporates:
      //   Delay: '<S296>/Delay1'

      ik[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[3] -
        GNC2026W_DW.Delay1_DSTATE_c[2];

      // RelationalOperator: '<S296>/Relational Operator' incorporates:
      //   Constant: '<S296>/Constant3'
      //   Delay: '<S296>/Delay1'
      //   Sum: '<S296>/Subtract1'

      keep[0] = (GNC2026W_B.ConvertREDXfrommmtom - GNC2026W_DW.Delay1_DSTATE_c[0]
                 != GNC2026W_P.Constant3_Value_dh);
      keep[1] = (BLACK_Exp_Noise - GNC2026W_DW.Delay1_DSTATE_c[1] !=
                 GNC2026W_P.Constant3_Value_dh);
      keep[2] = (ik[2] != GNC2026W_P.Constant3_Value_dh);

      // Outputs for Enabled SubSystem: '<S296>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(keep, GNC2026W_B.ConvertREDXfrommmtom,
        BLACK_Exp_Noise, GNC2026W_B.ReceivePhaseSpaceData_o1[3], rtb_TSamp_m2,
        GNC2026W_B.dy, &GNC2026W_B.EnabledSubsystem_l1,
        &GNC2026W_DW.EnabledSubsystem_l1, &GNC2026W_P.EnabledSubsystem_l1);

      // End of Outputs for SubSystem: '<S296>/Enabled Subsystem'

      // RelationalOperator: '<S295>/Relational Operator' incorporates:
      //   Constant: '<S295>/Constant3'
      //   Delay: '<S295>/Delay1'
      //   SignalConversion generated from: '<S302>/Enable'
      //   Sum: '<S295>/Subtract1'

      keep[0] = (GNC2026W_B.dy[0] - GNC2026W_DW.Delay1_DSTATE_cq[0] !=
                 GNC2026W_P.Constant3_Value_dz);
      keep[1] = (GNC2026W_B.dy[1] - GNC2026W_DW.Delay1_DSTATE_cq[1] !=
                 GNC2026W_P.Constant3_Value_dz);
      keep[2] = (GNC2026W_B.dy[2] - GNC2026W_DW.Delay1_DSTATE_cq[2] !=
                 GNC2026W_P.Constant3_Value_dz);

      // Outputs for Enabled SubSystem: '<S295>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(keep, GNC2026W_B.dy, rtb_TSamp_m2,
        GNC2026W_B.dy_h, &GNC2026W_B.EnabledSubsystem_k,
        &GNC2026W_DW.EnabledSubsystem_k, &GNC2026W_P.EnabledSubsystem_k);

      // End of Outputs for SubSystem: '<S295>/Enabled Subsystem'

      // DataStoreWrite: '<S254>/RED_Px7' incorporates:
      //   RelationalOperator: '<S295>/Relational Operator'
      //   SignalConversion generated from: '<S300>/Enable'

      GNC2026W_DW.RED_Measured_States[0] = GNC2026W_B.ConvertREDXfrommmtom;
      GNC2026W_DW.RED_Measured_States[1] = BLACK_Exp_Noise;
      GNC2026W_DW.RED_Measured_States[5] = GNC2026W_B.ReceivePhaseSpaceData_o1
        [12];
      GNC2026W_DW.RED_Measured_States[6] = GNC2026W_B.dy_h[0];
      GNC2026W_DW.RED_Measured_States[7] = GNC2026W_B.dy_h[1];
      GNC2026W_DW.RED_Measured_States[8] = GNC2026W_B.dy_h[2];

      // S-Function (sdspFromNetwork): '<S255>/UDP Receive (RED Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
      samplesRead_1 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveREDClock_o1, &samplesRead_1);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S255>/UDP Receive (RED Clock)'

      // S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLACK Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
      samplesRead_2 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveBLACKClock_o1, &samplesRead_2);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLACK Clock)' 

      // S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLUE Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
      samplesRead_3 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveBLUEClock_o1, &samplesRead_3);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLUE Clock)'

      // MATLAB Function: '<S255>/MATLAB Function1'
      ik[0] = GNC2026W_B.UDPReceiveREDClock_o1;
      ik[1] = GNC2026W_B.UDPReceiveBLACKClock_o1;
      ik[2] = GNC2026W_B.UDPReceiveBLUEClock_o1;

      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      for (i = 0; i < 3; i++) {
        // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
        //   ActionPort: '<S250>/Action Port'

        if (ik[i] == 0.0) {
          ik[i] = (rtNaN);
        }

        // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      }

      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S250>/Action Port'

      // MATLAB Function: '<S255>/MATLAB Function1'
      if (!rtIsNaN(ik[0])) {
        r = 1;
      } else {
        r = 0;
        aoffset = 2;
        exitg2 = false;
        while ((!exitg2) && (aoffset < 4)) {
          if (!rtIsNaN(ik[aoffset - 1])) {
            r = aoffset;
            exitg2 = true;
          } else {
            aoffset++;
          }
        }
      }

      if (r == 0) {
        rtb_TSamp_m2 = ik[0];
      } else {
        rtb_TSamp_m2 = ik[r - 1];
        for (aoffset = r + 1; aoffset < 4; aoffset++) {
          sampleTime = ik[aoffset - 1];
          if (rtb_TSamp_m2 > sampleTime) {
            rtb_TSamp_m2 = sampleTime;
          }
        }
      }

      // MATLAB Function: '<S255>/MATLAB Function'
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

      // End of MATLAB Function: '<S255>/MATLAB Function'

      // Outputs for Enabled SubSystem: '<S255>/Enabled Subsystem2' incorporates:
      //   EnablePort: '<S256>/Enable'

      if (r == GNC2026W_P.Constant_Value_i) {
        // SignalConversion generated from: '<S256>/In1'
        GNC2026W_B.In1_g20 = rtb_TSamp_m2;
      }

      // End of Outputs for SubSystem: '<S255>/Enabled Subsystem2'

      // DataStoreWrite: '<S254>/Universal_Time' incorporates:
      //   Constant: '<S255>/Constant'
      //   RelationalOperator: '<S255>/Relational Operator'

      GNC2026W_DW.Univ_Time = GNC2026W_B.In1_g20;

      // SignalConversion generated from: '<S296>/Delay1' incorporates:
      //   Delay: '<S296>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_c[0] = GNC2026W_B.ConvertREDXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_c[1] = BLACK_Exp_Noise;
      GNC2026W_DW.Delay1_DSTATE_c[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[3];

      // If: '<S259>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   DataStoreRead: '<S259>/Data Store Read'
      //   DataStoreRead: '<S259>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;
      if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhether_ch = 0;
      }

      // End of If: '<S259>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S259>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   DataStoreRead: '<S259>/Data Store Read'
      //   DataStoreRead: '<S259>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;
      if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhether_cs = 0;
      }

      // End of If: '<S259>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S259>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   DataStoreRead: '<S259>/Data Store Read'
      //   DataStoreRead: '<S259>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;
      if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhethero_d = 0;
      }

      // End of If: '<S259>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S10>/Initialize Universal Time (Simulation)' incorporates:
      //   ActionPort: '<S249>/Action Port'

      // Clock: '<S249>/Set Universal Time (If this is a simulation)' incorporates:
      //   DataStoreWrite: '<S249>/Universal_Time'

      GNC2026W_DW.Univ_Time = GNC2026W_M->Timing.t[0];

      // End of Outputs for SubSystem: '<S10>/Initialize Universal Time (Simulation)' 
      break;
    }

    // End of If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S11>/Data Store Read1'
    //   If: '<S11>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'
    //   If: '<S13>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'
    //   ManualSwitch: '<S308>/Manual Switch'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S11>/Subsystem' incorporates:
      //   ActionPort: '<S304>/Action Port'

      // MATLABSystem: '<S304>/WhoAmI' incorporates:
      //   DataStoreWrite: '<S304>/Data Store Write'

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

      // End of MATLABSystem: '<S304>/WhoAmI'
      // End of Outputs for SubSystem: '<S11>/Subsystem'

      // Outputs for IfAction SubSystem: '<S12>/CV UDP' incorporates:
      //   ActionPort: '<S305>/Action Port'

      // S-Function (sdspFromNetwork): '<S305>/UDP Receive'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
      samplesRead_0 = 4;
      LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U],
                         &GNC2026W_B.UDPReceive_o1_a[0U], &samplesRead_0);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of S-Function (sdspFromNetwork): '<S305>/UDP Receive'

      // DataStoreWrite: '<S305>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S305>/Cast To Double'

      GNC2026W_DW.VIS_LAR_States[0] = GNC2026W_B.UDPReceive_o1_a[1];

      // DataTypeConversion: '<S305>/Cast To Double1'
      sampleTime_0 = GNC2026W_B.UDPReceive_o1_a[2];

      // DataStoreWrite: '<S305>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S305>/Cast To Double2'
      //   Gain: '<S305>/Gain'

      GNC2026W_DW.VIS_LAR_States[2] = GNC2026W_B.UDPReceive_o1_a[3];
      GNC2026W_DW.VIS_LAR_States[1] = GNC2026W_P.Gain_Gain_k * sampleTime_0;

      // DataTypeConversion: '<S305>/Cast To Double3'
      sampleTime_0 = GNC2026W_B.UDPReceive_o1_a[0];

      // If: '<S305>/If' incorporates:
      //   Constant: '<S305>/Constant'

      if (GNC2026W_P.VISinLoop == 1.0) {
        // Outputs for IfAction SubSystem: '<S305>/Reading isValid' incorporates:
        //   ActionPort: '<S306>/Action Port'

        // DataStoreWrite: '<S306>/Data Store Write2'
        GNC2026W_DW.isValid = sampleTime_0;

        // End of Outputs for SubSystem: '<S305>/Reading isValid'
      }

      // End of If: '<S305>/If'
      // End of Outputs for SubSystem: '<S12>/CV UDP'

      // Outputs for IfAction SubSystem: '<S13>/ROB UDP' incorporates:
      //   ActionPort: '<S307>/Action Port'

      // If: '<S307>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   DataStoreRead: '<S307>/Data Store Read'
      //   DataStoreRead: '<S307>/Data Store Read1'

      if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
        // Outputs for IfAction SubSystem: '<S307>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S309>/Action Port'

        // S-Function (sdspFromNetwork): '<S309>/UDP Receive'
        sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
        samplesRead_4 = 1;
        LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U],
                           &GNC2026W_B.UDPReceive_o1, &samplesRead_4);
        if (*sErr != 0) {
          GNC2026W_M->setErrorStatus(sErr);
          GNC2026W_M->setStopRequested(1);
        }

        // End of S-Function (sdspFromNetwork): '<S309>/UDP Receive'

        // DataStoreWrite: '<S309>/Data Store Write'
        GNC2026W_DW.ARM_Grab_Complete = GNC2026W_B.UDPReceive_o1;

        // End of Outputs for SubSystem: '<S307>/Change BLACK Behavior'
      }

      // End of If: '<S307>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S307>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   DataStoreRead: '<S307>/Data Store Read'
      //   DataStoreRead: '<S307>/Data Store Read1'

      if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
        // Outputs for IfAction SubSystem: '<S307>/Change RED Behavior' incorporates:
        //   ActionPort: '<S311>/Action Port'

        // S-Function (sdspFromNetwork): '<S311>/UDP Receive'
        sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
        samplesRead_5 = 10;
        LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib[0U],
                           &GNC2026W_B.UDPReceive_o1_o[0U], &samplesRead_5);
        if (*sErr != 0) {
          GNC2026W_M->setErrorStatus(sErr);
          GNC2026W_M->setStopRequested(1);
        }

        // End of S-Function (sdspFromNetwork): '<S311>/UDP Receive'

        // DataStoreWrite: '<S311>/Data Store Write1' incorporates:
        //   DataTypeConversion: '<S311>/Cast To Double2'
        //   DataTypeConversion: '<S311>/Cast To Double3'
        //   DataTypeConversion: '<S311>/Cast To Double4'

        GNC2026W_DW.ARM_Joint_Angles_rad[0] = GNC2026W_B.UDPReceive_o1_o[3];
        GNC2026W_DW.ARM_Joint_Angles_rad[1] = GNC2026W_B.UDPReceive_o1_o[4];
        GNC2026W_DW.ARM_Joint_Angles_rad[2] = GNC2026W_B.UDPReceive_o1_o[5];

        // DataTypeConversion: '<S311>/Cast To Double' incorporates:
        //   DataStoreWrite: '<S311>/Data Store Write2'

        GNC2026W_DW.ARM_Grab_Complete = GNC2026W_B.UDPReceive_o1_o[1];

        // DataTypeConversion: '<S311>/Cast To Double5' incorporates:
        //   DataStoreWrite: '<S311>/Data Store Write3'

        GNC2026W_DW.Grab_Location_Reached = GNC2026W_B.UDPReceive_o1_o[0];

        // DataStoreWrite: '<S311>/Data Store Write4' incorporates:
        //   DataTypeConversion: '<S311>/Cast To Double8'
        //   DataTypeConversion: '<S311>/Cast To Double9'

        GNC2026W_DW.EE_Desired[0] = GNC2026W_B.UDPReceive_o1_o[8];
        GNC2026W_DW.EE_Desired[1] = GNC2026W_B.UDPReceive_o1_o[9];

        // DataStoreWrite: '<S311>/Data Store Write5' incorporates:
        //   DataTypeConversion: '<S311>/Cast To Double6'
        //   DataTypeConversion: '<S311>/Cast To Double7'

        GNC2026W_DW.EE_Path[0] = GNC2026W_B.UDPReceive_o1_o[6];
        GNC2026W_DW.EE_Path[1] = GNC2026W_B.UDPReceive_o1_o[7];

        // DataTypeConversion: '<S311>/Cast To Double1' incorporates:
        //   DataStoreWrite: '<S311>/Data Store Write6'

        GNC2026W_DW.detumble = GNC2026W_B.UDPReceive_o1_o[2];

        // Update for S-Function (sdspToNetwork): '<S311>/UDP Send' incorporates:
        //   DataStoreWrite: '<S311>/Data Store Write2'

        sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
        LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib_g[0U],
                          &GNC2026W_DW.ARM_Grab_Complete, 1);
        if (*sErr != 0) {
          GNC2026W_M->setErrorStatus(sErr);
          GNC2026W_M->setStopRequested(1);
        }

        // End of Update for S-Function (sdspToNetwork): '<S311>/UDP Send'
        // End of Outputs for SubSystem: '<S307>/Change RED Behavior'
      }

      // End of If: '<S307>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<S13>/ROB UDP'
    } else {
      // Outputs for IfAction SubSystem: '<S13>/Simulated Flag' incorporates:
      //   ActionPort: '<S308>/Action Port'

      if (GNC2026W_P.ManualSwitch_CurrentSetting == 1) {
        // Step: '<S308>/Step'
        if (((GNC2026W_M->Timing.clockTick1) * 0.05) < GNC2026W_P.Step_Time) {
          // ManualSwitch: '<S308>/Manual Switch' incorporates:
          //   DataStoreWrite: '<S308>/Data Store Write1'

          GNC2026W_DW.ARM_Grab_Complete = GNC2026W_P.Step_Y0;
        } else {
          // ManualSwitch: '<S308>/Manual Switch' incorporates:
          //   DataStoreWrite: '<S308>/Data Store Write1'

          GNC2026W_DW.ARM_Grab_Complete = GNC2026W_P.Step_YFinal;
        }

        // End of Step: '<S308>/Step'
      } else {
        // ManualSwitch: '<S308>/Manual Switch' incorporates:
        //   Constant: '<S308>/Constant'
        //   DataStoreWrite: '<S308>/Data Store Write1'

        GNC2026W_DW.ARM_Grab_Complete = GNC2026W_P.Constant_Value_n;
      }

      // ManualSwitch: '<S308>/Manual Switch1' incorporates:
      //   Constant: '<S308>/Constant1'
      //   DataStoreWrite: '<S308>/Data Store Write2'

      if (GNC2026W_P.ManualSwitch1_CurrentSetting == 1) {
        // Step: '<S308>/Step1' incorporates:
        //   DataStoreWrite: '<S308>/Data Store Write2'

        if (((GNC2026W_M->Timing.clockTick1) * 0.05) < GNC2026W_P.Step1_Time) {
          GNC2026W_DW.Grab_Location_Reached = GNC2026W_P.Step1_Y0;
        } else {
          GNC2026W_DW.Grab_Location_Reached = GNC2026W_P.Step1_YFinal;
        }

        // End of Step: '<S308>/Step1'
      } else {
        GNC2026W_DW.Grab_Location_Reached = GNC2026W_P.Constant1_Value_go;
      }

      // End of ManualSwitch: '<S308>/Manual Switch1'

      // ManualSwitch: '<S308>/Manual Switch2' incorporates:
      //   Constant: '<S308>/Constant2'
      //   DataStoreWrite: '<S308>/Data Store Write3'

      if (GNC2026W_P.ManualSwitch2_CurrentSetting == 1) {
        // Step: '<S308>/Step2' incorporates:
        //   DataStoreWrite: '<S308>/Data Store Write3'

        if (((GNC2026W_M->Timing.clockTick1) * 0.05) < GNC2026W_P.Step2_Time) {
          GNC2026W_DW.detumble = GNC2026W_P.Step2_Y0;
        } else {
          GNC2026W_DW.detumble = GNC2026W_P.Step2_YFinal;
        }

        // End of Step: '<S308>/Step2'
      } else {
        GNC2026W_DW.detumble = GNC2026W_P.Constant2_Value_k;
      }

      // End of ManualSwitch: '<S308>/Manual Switch2'
      // End of Outputs for SubSystem: '<S13>/Simulated Flag'
    }

    // End of If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S14>/Data Store Read'
    //   DataStoreRead: '<S14>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S14>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S312>/Action Port'

      // MATLABSystem: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' incorporates:
      //   DataStoreRead: '<S312>/Arm Control Mode'
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

      // End of MATLABSystem: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
      // End of Outputs for SubSystem: '<S14>/Change ARM Behavior'
    }

    // End of If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S15>/Data Store Read1'
    //   If: '<S16>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S15>/Subsystem' incorporates:
      //   ActionPort: '<S313>/Action Port'

      // SignalConversion generated from: '<S313>/UDP Send' incorporates:
      //   DataStoreRead: '<S313>/BLACK States'
      //   DataStoreRead: '<S313>/BLUE States'
      //   DataStoreRead: '<S313>/RED States'
      //   DataStoreRead: '<S313>/Time'

      GNC2026W_B.TmpSignalConversionAtUDPSend_og[0] = GNC2026W_DW.Univ_Time;
      for (i = 0; i < 9; i++) {
        GNC2026W_B.TmpSignalConversionAtUDPSend_og[i + 1] =
          GNC2026W_DW.RED_Measured_States[i];
        GNC2026W_B.TmpSignalConversionAtUDPSend_og[i + 10] =
          GNC2026W_DW.BLACK_Measured_States[i];
        GNC2026W_B.TmpSignalConversionAtUDPSend_og[i + 19] =
          GNC2026W_DW.BLUE_Measured_States[i];
      }

      // Update for S-Function (sdspToNetwork): '<S313>/UDP Send' incorporates:
      //   SignalConversion generated from: '<S313>/UDP Send'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib_m[0U],
                        &GNC2026W_B.TmpSignalConversionAtUDPSend_og[0U], 28);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S313>/UDP Send'
      // End of Outputs for SubSystem: '<S15>/Subsystem'

      // Outputs for IfAction SubSystem: '<S16>/SEND ROB UDP' incorporates:
      //   ActionPort: '<S315>/Action Port'

      // Sum: '<S315>/Subtract' incorporates:
      //   DataStoreRead: '<S315>/Data Store Read1'
      //   DataStoreRead: '<S315>/Data Store Read2'

      GNC2026W_DW.ARM_Extend = LOS_Angle - GNC2026W_DW.L0;

      // MATLAB Function: '<S315>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S315>/Data Store Read1'
      //   DataStoreRead: '<S315>/Data Store Read2'
      //   DataStoreRead: '<S315>/Time1'

      GNC2026W_MATLABFunction_e(LOS_Angle, GNC2026W_DW.L0, GNC2026W_DW.Univ_Time,
        &GNC2026W_DW.ARM_Extend, &GNC2026W_DW.sf_MATLABFunction_ec);

      // MATLAB Function: '<S315>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S315>/Data Store Read5'
      //   DataStoreWrite: '<S315>/Data Store Write4'

      GNC2026W_DW.Begin_Berth = (GNC2026W_DW.ARM_Grab_Complete == 1.0);

      // SignalConversion generated from: '<S315>/UDP Send' incorporates:
      //   DataStoreRead: '<S315>/Data Store Read6'
      //   DataStoreWrite: '<S315>/Data Store Write4'

      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[0] = GNC2026W_DW.ARM_Extend;
      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[1] = GNC2026W_DW.EE_Goal[0];
      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[2] = GNC2026W_DW.Begin_Berth;
      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[3] = GNC2026W_DW.EE_Goal[1];
      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[4] = GNC2026W_DW.EE_Goal[2];

      // Update for S-Function (sdspToNetwork): '<S315>/UDP Send' incorporates:
      //   SignalConversion generated from: '<S315>/UDP Send'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib_f[0U],
                        &GNC2026W_B.TmpSignalConversionAtUDPSendI_o[0U], 5);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S315>/UDP Send'
      // End of Outputs for SubSystem: '<S16>/SEND ROB UDP'
    } else {
      // Outputs for IfAction SubSystem: '<S16>/Extend Arm in SIM' incorporates:
      //   ActionPort: '<S314>/Action Port'

      // DataStoreWrite: '<S314>/Data Store Write2' incorporates:
      //   DataStoreRead: '<S314>/Data Store Read1'
      //   DataStoreRead: '<S314>/Data Store Read2'
      //   DataStoreRead: '<S314>/Time1'
      //   MATLAB Function: '<S314>/MATLAB Function'
      //   Sum: '<S314>/Subtract'

      GNC2026W_DW.ARM_Extend = LOS_Angle - GNC2026W_DW.L0;
      GNC2026W_MATLABFunction_e(LOS_Angle, GNC2026W_DW.L0, GNC2026W_DW.Univ_Time,
        &GNC2026W_DW.ARM_Extend, &GNC2026W_DW.sf_MATLABFunction_cy);

      // End of Outputs for SubSystem: '<S16>/Extend Arm in SIM'
    }

    // End of If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S19>/Data Store Read'
    //   DataStoreRead: '<S19>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhetherorn = -1;
    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhetherorn = 0;

      // Outputs for IfAction SubSystem: '<S19>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S358>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M,
        &GNC2026W_B.ChangeBLACKBehavior_i);

      // End of Outputs for SubSystem: '<S19>/Change BLACK Behavior'
    }

    // End of If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S19>/Data Store Read'
    //   DataStoreRead: '<S19>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhethero_b = -1;
    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhethero_b = 0;

      // Outputs for IfAction SubSystem: '<S19>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S359>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M,
        &GNC2026W_B.ChangeBLUEBehavior_e);

      // End of Outputs for SubSystem: '<S19>/Change BLUE Behavior'
    }

    // End of If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S19>/Data Store Read'
    //   DataStoreRead: '<S19>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhethero_c = -1;
    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhethero_c = 0;

      // Outputs for IfAction SubSystem: '<S19>/Change RED Behavior' incorporates:
      //   ActionPort: '<S360>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M, &GNC2026W_B.ChangeREDBehavior_h);

      // End of Outputs for SubSystem: '<S19>/Change RED Behavior'
    }

    // End of If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  {
    char_T *sErr;

    // Update for RandomNumber: '<Root>/Gaussian Noise'
    GNC2026W_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&GNC2026W_DW.RandSeed) *
      GNC2026W_P.GaussianNoise_StdDev + GNC2026W_P.GaussianNoise_Mean;

    // Update for S-Function (sdspToNetwork): '<S18>/UDP Send' incorporates:
    //   SignalConversion generated from: '<S18>/UDP Send'

    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib[0U],
                      &GNC2026W_B.TmpSignalConversionAtUDPSendInp[0U], 10);
    if (*sErr != 0) {
      GNC2026W_M->setErrorStatus(sErr);
      GNC2026W_M->setStopRequested(1);
    }

    // End of Update for S-Function (sdspToNetwork): '<S18>/UDP Send'

    // Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    if (GNC2026W_DW.Ifperforminganexperimentgrabthe == 0) {
      // Update for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S250>/Action Port'

      // Update for Delay: '<S263>/Delay2'
      GNC2026W_DW.Delay2_DSTATE = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S263>/Delay1'
      GNC2026W_DW.Delay1_DSTATE = GNC2026W_B.ConvertBLAXfrommmtom;

      // Update for Enabled SubSystem: '<S266>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_g,
        &GNC2026W_DW.EnabledSubsystem_g);

      // End of Update for SubSystem: '<S266>/Enabled Subsystem'

      // Update for Delay: '<S265>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_b[0] = GNC2026W_B.dy_p[0];
      GNC2026W_DW.Delay1_DSTATE_b[1] = GNC2026W_B.dy_p[1];
      GNC2026W_DW.Delay1_DSTATE_b[2] = GNC2026W_B.dy_p[2];

      // Update for Enabled SubSystem: '<S265>/Enabled Subsystem'
      GNC2026_EnabledSubsystem_Update(&GNC2026W_B.EnabledSubsystem_i,
        &GNC2026W_DW.EnabledSubsystem_i);

      // End of Update for SubSystem: '<S265>/Enabled Subsystem'

      // Update for Delay: '<S278>/Delay'
      GNC2026W_DW.Delay_DSTATE_h = GNC2026W_B.u_next;

      // Update for Delay: '<S278>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_f = GNC2026W_B.y;

      // Update for Delay: '<S284>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_l = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S284>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_l = GNC2026W_B.ConvertBLUXfrommmtom;

      // Update for Enabled SubSystem: '<S286>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_d,
        &GNC2026W_DW.EnabledSubsystem_d);

      // End of Update for SubSystem: '<S286>/Enabled Subsystem'

      // Update for Delay: '<S285>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_lv[0] = GNC2026W_B.dy_c[0];
      GNC2026W_DW.Delay1_DSTATE_lv[1] = GNC2026W_B.dy_c[1];
      GNC2026W_DW.Delay1_DSTATE_lv[2] = GNC2026W_B.dy_c[2];

      // Update for Enabled SubSystem: '<S285>/Enabled Subsystem'
      GNC2026_EnabledSubsystem_Update(&GNC2026W_B.EnabledSubsystem_l,
        &GNC2026W_DW.EnabledSubsystem_l);

      // End of Update for SubSystem: '<S285>/Enabled Subsystem'

      // Update for Delay: '<S294>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_l0 = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S294>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_ld = GNC2026W_B.ConvertREDXfrommmtom;

      // Update for Enabled SubSystem: '<S296>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_l1,
        &GNC2026W_DW.EnabledSubsystem_l1);

      // End of Update for SubSystem: '<S296>/Enabled Subsystem'

      // Update for Delay: '<S295>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_cq[0] = GNC2026W_B.dy[0];
      GNC2026W_DW.Delay1_DSTATE_cq[1] = GNC2026W_B.dy[1];
      GNC2026W_DW.Delay1_DSTATE_cq[2] = GNC2026W_B.dy[2];

      // Update for Enabled SubSystem: '<S295>/Enabled Subsystem'
      GNC2026_EnabledSubsystem_Update(&GNC2026W_B.EnabledSubsystem_k,
        &GNC2026W_DW.EnabledSubsystem_k);

      // End of Update for SubSystem: '<S295>/Enabled Subsystem'

      // Update for If: '<S259>/This IF block determines whether or not to run the BLACK sim//exp' 
      if (GNC2026W_DW.ThisIFblockdetermineswhether_ch == 0) {
        // Update for IfAction SubSystem: '<S259>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S260>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeBLACKBehavior_e);

        // End of Update for SubSystem: '<S259>/Change BLACK Behavior'
      }

      // End of Update for If: '<S259>/This IF block determines whether or not to run the BLACK sim//exp' 

      // Update for If: '<S259>/This IF block determines whether or not to run the BLUE sim//exp' 
      if (GNC2026W_DW.ThisIFblockdetermineswhether_cs == 0) {
        // Update for IfAction SubSystem: '<S259>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S261>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeBLUEBehavior_f);

        // End of Update for SubSystem: '<S259>/Change BLUE Behavior'
      }

      // End of Update for If: '<S259>/This IF block determines whether or not to run the BLUE sim//exp' 

      // Update for If: '<S259>/This IF block determines whether or not to run the RED sim//exp ' 
      if (GNC2026W_DW.ThisIFblockdetermineswhethero_d == 0) {
        // Update for IfAction SubSystem: '<S259>/Change RED Behavior' incorporates:
        //   ActionPort: '<S262>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeREDBehavior_d);

        // End of Update for SubSystem: '<S259>/Change RED Behavior'
      }

      // End of Update for If: '<S259>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Update for SubSystem: '<S10>/Use Hardware to Obtain States'
    }

    // End of Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // Update for If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' 
    if (GNC2026W_DW.ThisIFblockdetermineswhetherorn == 0) {
      // Update for IfAction SubSystem: '<S19>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S358>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeBLACKBehavior_i, &GNC2026W_DW.ChangeBLACKBehavior_i);

      // End of Update for SubSystem: '<S19>/Change BLACK Behavior'
    }

    // End of Update for If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' 

    // Update for If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' 
    if (GNC2026W_DW.ThisIFblockdetermineswhethero_b == 0) {
      // Update for IfAction SubSystem: '<S19>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S359>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeBLUEBehavior_e, &GNC2026W_DW.ChangeBLUEBehavior_e);

      // End of Update for SubSystem: '<S19>/Change BLUE Behavior'
    }

    // End of Update for If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' 

    // Update for If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' 
    if (GNC2026W_DW.ThisIFblockdetermineswhethero_c == 0) {
      // Update for IfAction SubSystem: '<S19>/Change RED Behavior' incorporates:
      //   ActionPort: '<S360>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeREDBehavior_h, &GNC2026W_DW.ChangeREDBehavior_h);

      // End of Update for SubSystem: '<S19>/Change RED Behavior'
    }

    // End of Update for If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' 
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
    static const real_T b[6] = { 0.5, 0.5, 1.0, 1.0, 0.5, 0.5 };

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

    // Start for S-Function (sdspToNetwork): '<S18>/UDP Send'
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

    // End of Start for S-Function (sdspToNetwork): '<S18>/UDP Send'

    // Start for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    GNC2026W_DW.Ifperforminganexperimentgrabthe = -1;

    // Start for If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhetherorn = -1;

    // Start for If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_b = -1;

    // Start for If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_c = -1;

    // Start for DataStoreMemory: '<Root>/Data Store Memory'
    GNC2026W_DW.L0 = GNC2026W_P.DataStoreMemory_InitialValue;

    // Start for DataStoreMemory: '<Root>/Data Store Memory3'
    GNC2026W_DW.lambda[0] = GNC2026W_P.DataStoreMemory3_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Data Store Memory4'
    GNC2026W_DW.lambdaFirstOrder[0] = GNC2026W_P.DataStoreMemory4_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Data Store Memory6'
    GNC2026W_DW.ARM_Joint_Angles_rad[0] =
      GNC2026W_P.DataStoreMemory6_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Data Store Memory3'
    GNC2026W_DW.lambda[1] = GNC2026W_P.DataStoreMemory3_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Data Store Memory4'
    GNC2026W_DW.lambdaFirstOrder[1] = GNC2026W_P.DataStoreMemory4_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Data Store Memory6'
    GNC2026W_DW.ARM_Joint_Angles_rad[1] =
      GNC2026W_P.DataStoreMemory6_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Data Store Memory3'
    GNC2026W_DW.lambda[2] = GNC2026W_P.DataStoreMemory3_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Data Store Memory4'
    GNC2026W_DW.lambdaFirstOrder[2] = GNC2026W_P.DataStoreMemory4_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Data Store Memory6'
    GNC2026W_DW.ARM_Joint_Angles_rad[2] =
      GNC2026W_P.DataStoreMemory6_InitialValue[2];

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

    // Start for DataStoreMemory: '<Root>/Data Store Memory9'
    memcpy(&GNC2026W_DW.error[0], &GNC2026W_P.DataStoreMemory9_InitialValue[0],
           9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time10'
    memcpy(&GNC2026W_DW.BLACK_Measured_States[0],
           &GNC2026W_P.Universal_Time10_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time13'
    GNC2026W_DW.BLUE_Desired_States[0] =
      GNC2026W_P.Universal_Time13_InitialValue[0];
    GNC2026W_DW.BLUE_Desired_States[1] =
      GNC2026W_P.Universal_Time13_InitialValue[1];
    GNC2026W_DW.BLUE_Desired_States[2] =
      GNC2026W_P.Universal_Time13_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time15'
    GNC2026W_DW.BLACK_Saturated_Controls[0] =
      GNC2026W_P.Universal_Time15_InitialValue[0];
    GNC2026W_DW.BLACK_Saturated_Controls[1] =
      GNC2026W_P.Universal_Time15_InitialValue[1];
    GNC2026W_DW.BLACK_Saturated_Controls[2] =
      GNC2026W_P.Universal_Time15_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time14'
    memcpy(&GNC2026W_DW.BLUE_Duty_Cycles[0],
           &GNC2026W_P.Universal_Time14_InitialValue[0], sizeof(real_T) << 3U);

    // Start for DataStoreMemory: '<Root>/Universal_Time16'
    memcpy(&GNC2026W_DW.RED_Duty_Cycle[0],
           &GNC2026W_P.Universal_Time16_InitialValue[0], sizeof(real_T) << 3U);

    // Start for DataStoreMemory: '<Root>/Universal_Time19'
    GNC2026W_DW.WhoAmI = GNC2026W_P.Universal_Time19_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time20'
    GNC2026W_DW.isSim = GNC2026W_P.Universal_Time20_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time21'
    GNC2026W_DW.BLACK_CV_States[0] = GNC2026W_P.Universal_Time21_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    GNC2026W_DW.VIS_Measured_States[0] =
      GNC2026W_P.Universal_Time22_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time21'
    GNC2026W_DW.BLACK_CV_States[1] = GNC2026W_P.Universal_Time21_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time22'
    GNC2026W_DW.VIS_Measured_States[1] =
      GNC2026W_P.Universal_Time22_InitialValue[1];

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

    // Start for DataStoreMemory: '<Root>/Universal_Time26'
    memcpy(&GNC2026W_DW.RED_Measured_States[0],
           &GNC2026W_P.Universal_Time26_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    GNC2026W_DW.RED_Saturated_Controls[0] =
      GNC2026W_P.Universal_Time28_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    GNC2026W_DW.RED_Desired_States[0] =
      GNC2026W_P.Universal_Time29_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    GNC2026W_DW.RED_Saturated_Controls[1] =
      GNC2026W_P.Universal_Time28_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    GNC2026W_DW.RED_Desired_States[1] =
      GNC2026W_P.Universal_Time29_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time28'
    GNC2026W_DW.RED_Saturated_Controls[2] =
      GNC2026W_P.Universal_Time28_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time29'
    GNC2026W_DW.RED_Desired_States[2] =
      GNC2026W_P.Universal_Time29_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time3'
    memcpy(&GNC2026W_DW.BLACK_Duty_Cycles[0],
           &GNC2026W_P.Universal_Time3_InitialValue[0], sizeof(real_T) << 3U);

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

    // Start for DataStoreMemory: '<Root>/Universal_Time4'
    memcpy(&GNC2026W_DW.BLUE_Measured_States[0],
           &GNC2026W_P.Universal_Time4_InitialValue[0], 9U * sizeof(real_T));

    // Start for DataStoreMemory: '<Root>/Universal_Time40'
    GNC2026W_DW.filterConfidence = GNC2026W_P.Universal_Time40_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time41'
    GNC2026W_DW.ARM_Grab_Complete = GNC2026W_P.Universal_Time41_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time42'
    GNC2026W_DW.ARM_Extend = GNC2026W_P.Universal_Time42_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time45'
    GNC2026W_DW.Grab_Location_Reached = GNC2026W_P.Universal_Time45_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time46'
    GNC2026W_DW.Begin_Grab = GNC2026W_P.Universal_Time46_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time47'
    GNC2026W_DW.Begin_Berth = GNC2026W_P.Universal_Time47_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time44'
    GNC2026W_DW.residual[0] = GNC2026W_P.Universal_Time44_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time48'
    GNC2026W_DW.EE_Goal[0] = GNC2026W_P.Universal_Time48_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time44'
    GNC2026W_DW.residual[1] = GNC2026W_P.Universal_Time44_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time48'
    GNC2026W_DW.EE_Goal[1] = GNC2026W_P.Universal_Time48_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time44'
    GNC2026W_DW.residual[2] = GNC2026W_P.Universal_Time44_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time48'
    GNC2026W_DW.EE_Goal[2] = GNC2026W_P.Universal_Time48_InitialValue[2];

    // Start for DataStoreMemory: '<Root>/Universal_Time49'
    GNC2026W_DW.EE_Path[0] = GNC2026W_P.Universal_Time49_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time50'
    GNC2026W_DW.EE_Desired[0] = GNC2026W_P.Universal_Time50_InitialValue[0];

    // Start for DataStoreMemory: '<Root>/Universal_Time49'
    GNC2026W_DW.EE_Path[1] = GNC2026W_P.Universal_Time49_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time50'
    GNC2026W_DW.EE_Desired[1] = GNC2026W_P.Universal_Time50_InitialValue[1];

    // Start for DataStoreMemory: '<Root>/Universal_Time51'
    GNC2026W_DW.detumble = GNC2026W_P.Universal_Time51_InitialValue;

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
    // InitializeConditions for Delay: '<S154>/Delay'
    GNC2026W_DW.Delay_DSTATE_h0 = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S154>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lo = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay'
    memcpy(&GNC2026W_DW.UnitDelay_DSTATE[0],
           &GNC2026W_P.UnitDelay_InitialCondition[0], 9U * sizeof(real_T));

    // SystemInitialize for Enabled SubSystem: '<S149>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S153>/In1' incorporates:
    //   Outport: '<S153>/Path'

    GNC2026W_B.In1_g20a[0] = GNC2026W_P.Path_Y0;
    GNC2026W_B.In1_g20a[1] = GNC2026W_P.Path_Y0;
    GNC2026W_B.In1_g20a[2] = GNC2026W_P.Path_Y0;

    // End of SystemInitialize for SubSystem: '<S149>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S2>/Custom PPL (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S198>/UD'
    //
    //  Block description for '<S198>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_eh = GNC2026W_P.DiscreteDerivative_ICPrevScal_p;

    // InitializeConditions for UnitDelay: '<S199>/UD'
    //
    //  Block description for '<S199>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hv = GNC2026W_P.DiscreteDerivative1_ICPrevSca_m;

    // InitializeConditions for UnitDelay: '<S200>/UD'
    //
    //  Block description for '<S200>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_kv = GNC2026W_P.DiscreteDerivative2_ICPrevSca_a;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLACK)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S175>/UD'
    //
    //  Block description for '<S175>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_j = GNC2026W_P.DiscreteDerivative_ICPrevScal_d;

    // InitializeConditions for UnitDelay: '<S176>/UD'
    //
    //  Block description for '<S176>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_c = GNC2026W_P.DiscreteDerivative1_ICPrevSca_i;

    // InitializeConditions for UnitDelay: '<S177>/UD'
    //
    //  Block description for '<S177>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_d = GNC2026W_P.DiscreteDerivative2_ICPrevSc_oo;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLACK)' 

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S203>/UD'
    //
    //  Block description for '<S203>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_o = GNC2026W_P.DiscreteDerivative_ICPrevSca_pf;

    // InitializeConditions for UnitDelay: '<S204>/UD'
    //
    //  Block description for '<S204>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_n = GNC2026W_P.DiscreteDerivative1_ICPrevSca_l;

    // InitializeConditions for UnitDelay: '<S205>/UD'
    //
    //  Block description for '<S205>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hu = GNC2026W_P.DiscreteDerivative2_ICPrevSc_on;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLUE)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S180>/UD'
    //
    //  Block description for '<S180>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_l = GNC2026W_P.DiscreteDerivative_ICPrevScal_n;

    // InitializeConditions for UnitDelay: '<S181>/UD'
    //
    //  Block description for '<S181>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_k = GNC2026W_P.DiscreteDerivative1_ICPrevSca_f;

    // InitializeConditions for UnitDelay: '<S182>/UD'
    //
    //  Block description for '<S182>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_h = GNC2026W_P.DiscreteDerivative2_ICPrevSca_g;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLUE)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD (ARM)'
    // SystemInitialize for IfAction SubSystem: '<S165>/Simulated Position Controller' 
    // InitializeConditions for UnitDelay: '<S194>/UD'
    //
    //  Block description for '<S194>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE = GNC2026W_P.DiscreteDerivative1_ICPrevSca_j;

    // InitializeConditions for UnitDelay: '<S195>/UD'
    //
    //  Block description for '<S195>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_e = GNC2026W_P.DiscreteDerivative1_ICPrevSca_a;

    // InitializeConditions for UnitDelay: '<S196>/UD'
    //
    //  Block description for '<S196>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_a = GNC2026W_P.DiscreteDerivative1_ICPrevSca_k;

    // End of SystemInitialize for SubSystem: '<S165>/Simulated Position Controller' 
    // End of SystemInitialize for SubSystem: '<S3>/Default PD (ARM)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (RED)'
    // InitializeConditions for UnitDelay: '<S208>/UD'
    //
    //  Block description for '<S208>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_eg = GNC2026W_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for UnitDelay: '<S209>/UD'
    //
    //  Block description for '<S209>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_cd = GNC2026W_P.DiscreteDerivative1_ICPrevScale;

    // InitializeConditions for UnitDelay: '<S210>/UD'
    //
    //  Block description for '<S210>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hd = GNC2026W_P.DiscreteDerivative2_ICPrevScale;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (RED)' 
    // InitializeConditions for UnitDelay: '<S185>/UD'
    //
    //  Block description for '<S185>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_aq = GNC2026W_P.DiscreteDerivative_ICPrevScal_i;

    // InitializeConditions for UnitDelay: '<S186>/UD'
    //
    //  Block description for '<S186>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_p = GNC2026W_P.DiscreteDerivative1_ICPrevSca_e;

    // InitializeConditions for UnitDelay: '<S187>/UD'
    //
    //  Block description for '<S187>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_pr = GNC2026W_P.DiscreteDerivative2_ICPrevSca_o;

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (RED)'

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[0] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[0] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge'
    GNC2026W_B.Merge[0] = GNC2026W_P.Merge_InitialOutput_el;

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[1] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[1] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge'
    GNC2026W_B.Merge[1] = GNC2026W_P.Merge_InitialOutput_el;

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[2] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[2] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for Merge: '<S3>/Merge'
    GNC2026W_B.Merge[2] = GNC2026W_P.Merge_InitialOutput_el;

    // SystemInitialize for IfAction SubSystem: '<S18>/Change RED Behavior'
    // InitializeConditions for Delay: '<S348>/Delay'
    GNC2026W_DW.Delay_DSTATE = GNC2026W_P.Delay_InitialCondition_p;

    // SystemInitialize for Enabled SubSystem: '<S348>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S353>/In1' incorporates:
    //   Outport: '<S353>/Out1'

    GNC2026W_B.In1 = GNC2026W_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S348>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S348>/Enabled Subsystem1'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for SignalConversion generated from: '<S354>/ThrustPer_Final' incorporates:
      //   Outport: '<S354>/Out1'

      GNC2026W_B.ThrustPer_Final[i] = GNC2026W_P.Out1_Y0_d;
    }

    // End of SystemInitialize for SubSystem: '<S348>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1_pn);

    // End of SystemInitialize for SubSystem: '<S18>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S18>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S324>/Delay'
    GNC2026W_DW.Delay_DSTATE_kz = GNC2026W_P.Delay_InitialCondition_i;

    // SystemInitialize for Enabled SubSystem: '<S324>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S329>/In1' incorporates:
    //   Outport: '<S329>/Out1'

    GNC2026W_B.In1_g2 = GNC2026W_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S324>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S324>/Enabled Subsystem1'
    // SystemInitialize for IfAction SubSystem: '<S18>/Change RED Behavior'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for Outport: '<S321>/RED DC'
      GNC2026W_B.duty_cycles[i] = GNC2026W_P.REDDC_Y0;

      // SystemInitialize for SignalConversion generated from: '<S330>/ThrustPer_Final' incorporates:
      //   Outport: '<S330>/Out1'

      GNC2026W_B.ThrustPer_Final_h5[i] = GNC2026W_P.Out1_Y0_j;
    }

    // End of SystemInitialize for SubSystem: '<S18>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S324>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1);

    // End of SystemInitialize for SubSystem: '<S18>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S18>/Change BLUE Behavior'
    // InitializeConditions for Delay: '<S336>/Delay'
    GNC2026W_DW.Delay_DSTATE_k = GNC2026W_P.Delay_InitialCondition_n;

    // SystemInitialize for Enabled SubSystem: '<S336>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S341>/In1' incorporates:
    //   Outport: '<S341>/Out1'

    GNC2026W_B.In1_g = GNC2026W_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S336>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S336>/Enabled Subsystem1'
    // SystemInitialize for IfAction SubSystem: '<S18>/Change BLACK Behavior'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for Outport: '<S319>/BLACK DC'
      GNC2026W_B.duty_cycles_m[i] = GNC2026W_P.BLACKDC_Y0;

      // SystemInitialize for SignalConversion generated from: '<S342>/ThrustPer_Final' incorporates:
      //   Outport: '<S342>/Out1'

      GNC2026W_B.ThrustPer_Final_h[i] = GNC2026W_P.Out1_Y0_js;
    }

    // End of SystemInitialize for SubSystem: '<S18>/Change BLACK Behavior'
    // End of SystemInitialize for SubSystem: '<S336>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1_p);

    // SystemInitialize for Outport: '<S320>/BLUE DC'
    for (i = 0; i < 8; i++) {
      GNC2026W_B.duty_cycles_j[i] = GNC2026W_P.BLUEDC_Y0;
    }

    // End of SystemInitialize for Outport: '<S320>/BLUE DC'
    // End of SystemInitialize for SubSystem: '<S18>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S1>/Phase #3: Experiment'
    // SystemInitialize for IfAction SubSystem: '<S23>/Sub-Phase #2 '
    // SystemInitialize for Merge: '<S55>/Merge'
    GNC2026W_B.Merge_h[0] = GNC2026W_P.Merge_InitialOutput;
    GNC2026W_B.Merge_h[1] = GNC2026W_P.Merge_InitialOutput;
    GNC2026W_B.Merge_h[2] = GNC2026W_P.Merge_InitialOutput;

    // SystemInitialize for MATLAB Function: '<S53>/First Fit Detector'
    GNC2026W_DW.mode = 2.0;

    // End of SystemInitialize for SubSystem: '<S23>/Sub-Phase #2 '
    // End of SystemInitialize for SubSystem: '<S1>/Phase #3: Experiment'

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
    // Start for S-Function (sdspToNetwork): '<S219>/UDP Send1'
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

    // End of Start for S-Function (sdspToNetwork): '<S219>/UDP Send1'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change BLUE Behavior'
    // Start for S-Function (sdspToNetwork): '<S220>/UDP Send2'
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

    // End of Start for S-Function (sdspToNetwork): '<S220>/UDP Send2'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change RED Behavior'
    // Start for S-Function (sdspToNetwork): '<S221>/UDP Send3'
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

    // End of Start for S-Function (sdspToNetwork): '<S221>/UDP Send3'
    // End of SystemInitialize for SubSystem: '<S6>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S7>/Enable Pucks'
    // Start for MATLABSystem: '<S222>/GPIO Write1'
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
    // InitializeConditions for Delay: '<S223>/Delay'
    GNC2026W_DW.Delay_DSTATE_o = GNC2026W_P.Delay_InitialCondition;

    // InitializeConditions for Delay: '<S223>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cg = GNC2026W_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S223>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_h = GNC2026W_P.Delay2_InitialCondition;

    // Start for MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders' 
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

    // End of Start for MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders' 
    // End of SystemInitialize for SubSystem: '<S8>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S9>/If Action Subsystem'
    // SystemInitialize for IfAction SubSystem: '<S224>/MEKF'
    // InitializeConditions for Delay: '<S237>/Delay'
    GNC2026W_DW.Delay_DSTATE_j = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S237>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_d = GNC2026W_P.init_states_BLACK[2];

    // End of SystemInitialize for SubSystem: '<S224>/MEKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/UKF'
    // SystemInitialize for Merge: '<S244>/Merge'
    GNC2026W_B.Merge_b[0] = GNC2026W_P.Merge_InitialOutput_e;

    // End of SystemInitialize for SubSystem: '<S224>/UKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/MEKF'
    // SystemInitialize for Merge: '<S236>/Merge'
    GNC2026W_B.Merge_d[0] = GNC2026W_P.Merge_InitialOutput_p;

    // End of SystemInitialize for SubSystem: '<S224>/MEKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/UKF'
    // SystemInitialize for Merge: '<S244>/Merge'
    GNC2026W_B.Merge_b[1] = GNC2026W_P.Merge_InitialOutput_e;

    // End of SystemInitialize for SubSystem: '<S224>/UKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/MEKF'
    // SystemInitialize for Merge: '<S236>/Merge'
    GNC2026W_B.Merge_d[1] = GNC2026W_P.Merge_InitialOutput_p;

    // End of SystemInitialize for SubSystem: '<S224>/MEKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/UKF'
    // SystemInitialize for Merge: '<S244>/Merge'
    GNC2026W_B.Merge_b[2] = GNC2026W_P.Merge_InitialOutput_e;

    // End of SystemInitialize for SubSystem: '<S224>/UKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/MEKF'
    // SystemInitialize for Merge: '<S236>/Merge'
    GNC2026W_B.Merge_d[2] = GNC2026W_P.Merge_InitialOutput_p;

    // SystemInitialize for MATLAB Function: '<S226>/MEKF'
    GNC2026W_DW.q.re = 1.0;
    GNC2026W_DW.q.im = 0.0;
    memset(&GNC2026W_DW.P_h[0], 0, 36U * sizeof(real_T));

    // End of SystemInitialize for SubSystem: '<S224>/MEKF'

    // SystemInitialize for IfAction SubSystem: '<S224>/EKF'
    // InitializeConditions for Delay: '<S231>/Delay'
    GNC2026W_DW.Delay_DSTATE_c = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S231>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g0 = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for IfAction SubSystem: '<S224>/MEKF'
    for (i = 0; i < 6; i++) {
      // SystemInitialize for MATLAB Function: '<S226>/MEKF'
      GNC2026W_DW.P_h[i + 6 * i] = b[i];
    }

    // End of SystemInitialize for SubSystem: '<S224>/MEKF'

    // SystemInitialize for MATLAB Function: '<S225>/EKF'
    memset(&GNC2026W_DW.P[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      GNC2026W_DW.P[i + 6 * i] = b_0[i];

      // SystemInitialize for Merge: '<S224>/Merge'
      GNC2026W_B.Merge_k[i] = GNC2026W_P.Merge_InitialOutput_b;
    }

    // End of SystemInitialize for MATLAB Function: '<S225>/EKF'
    // End of SystemInitialize for SubSystem: '<S224>/EKF'
    // End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' 
    // Start for S-Function (sdspFromNetwork): '<S251>/Receive PhaseSpace Data'
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

    // End of Start for S-Function (sdspFromNetwork): '<S251>/Receive PhaseSpace Data' 

    // Start for S-Function (sdspFromNetwork): '<S255>/UDP Receive (RED Clock)'
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

    // End of Start for S-Function (sdspFromNetwork): '<S255>/UDP Receive (RED Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLACK Clock)' 
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

    // End of Start for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLACK Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLUE Clock)' 
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

    // End of Start for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLUE Clock)' 

    // Start for If: '<S259>/This IF block determines whether or not to run the BLACK sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;

    // Start for If: '<S259>/This IF block determines whether or not to run the BLUE sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;

    // Start for If: '<S259>/This IF block determines whether or not to run the RED sim//exp ' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;

    // InitializeConditions for Delay: '<S263>/Delay2'
    GNC2026W_DW.Delay2_DSTATE = GNC2026W_P.Delay2_InitialCondition_e;

    // InitializeConditions for Delay: '<S263>/Delay1'
    GNC2026W_DW.Delay1_DSTATE = GNC2026W_P.Delay1_InitialCondition_m;

    // InitializeConditions for Delay: '<S278>/Delay'
    GNC2026W_DW.Delay_DSTATE_h = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S278>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_f = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S284>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_l = GNC2026W_P.Delay2_InitialCondition_a;

    // InitializeConditions for Delay: '<S284>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_l = GNC2026W_P.Delay1_InitialCondition_i3;

    // InitializeConditions for Delay: '<S294>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_l0 = GNC2026W_P.Delay2_InitialCondition_m;

    // InitializeConditions for Delay: '<S294>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ld = GNC2026W_P.Delay1_InitialCondition_l;

    // InitializeConditions for Delay: '<S266>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[0] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S265>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[0] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S286>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[0] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S285>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[0] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S296>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[0] = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S295>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[0] = GNC2026W_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S266>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[1] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S265>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[1] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S286>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[1] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S285>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[1] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S296>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[1] = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S295>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[1] = GNC2026W_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S266>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[2] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S265>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[2] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S286>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[2] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S285>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[2] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S296>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[2] = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for Delay: '<S295>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[2] = GNC2026W_P.Delay1_InitialCondition_c;

    // SystemInitialize for Enabled SubSystem: '<S263>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S268>/y2-y1' incorporates:
    //   Outport: '<S268>/dy(t)//dt'

    GNC2026W_B.y2y1_ob = GNC2026W_P.dytdt_Y0;

    // End of SystemInitialize for SubSystem: '<S263>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S266>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy_p,
      &GNC2026W_DW.EnabledSubsystem_g, &GNC2026W_P.EnabledSubsystem_g);

    // End of SystemInitialize for SubSystem: '<S266>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S265>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_g,
      &GNC2026W_DW.EnabledSubsystem_i, &GNC2026W_P.EnabledSubsystem_i);

    // End of SystemInitialize for SubSystem: '<S265>/Enabled Subsystem'

    // SystemInitialize for MATLAB Function: '<S264>/CV Noise'
    memcpy(&GNC2026W_DW.state_j[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.method = 7U;
    GNC2026W_DW.state = 1144108930U;
    GNC2026W_DW.state_g[0] = 362436069U;
    GNC2026W_DW.state_g[1] = 521288629U;

    // SystemInitialize for Enabled SubSystem: '<S284>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S288>/y2-y1' incorporates:
    //   Outport: '<S288>/dy(t)//dt'

    GNC2026W_B.y2y1_o = GNC2026W_P.dytdt_Y0_j;

    // End of SystemInitialize for SubSystem: '<S284>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S286>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy_c,
      &GNC2026W_DW.EnabledSubsystem_d, &GNC2026W_P.EnabledSubsystem_d);

    // End of SystemInitialize for SubSystem: '<S286>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S285>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_d,
      &GNC2026W_DW.EnabledSubsystem_l, &GNC2026W_P.EnabledSubsystem_l);

    // End of SystemInitialize for SubSystem: '<S285>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S294>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S298>/y2-y1' incorporates:
    //   Outport: '<S298>/dy(t)//dt'

    GNC2026W_B.y2y1 = GNC2026W_P.dytdt_Y0_d;

    // End of SystemInitialize for SubSystem: '<S294>/Enabled Subsystem3'

    // SystemInitialize for Enabled SubSystem: '<S296>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy,
      &GNC2026W_DW.EnabledSubsystem_l1, &GNC2026W_P.EnabledSubsystem_l1);

    // End of SystemInitialize for SubSystem: '<S296>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S295>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_h,
      &GNC2026W_DW.EnabledSubsystem_k, &GNC2026W_P.EnabledSubsystem_k);

    // End of SystemInitialize for SubSystem: '<S295>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S255>/Enabled Subsystem2'
    // SystemInitialize for SignalConversion generated from: '<S256>/In1' incorporates:
    //   Outport: '<S256>/Universal Time'

    GNC2026W_B.In1_g20 = GNC2026W_P.UniversalTime_Y0;

    // End of SystemInitialize for SubSystem: '<S255>/Enabled Subsystem2'

    // SystemInitialize for IfAction SubSystem: '<S259>/Change BLACK Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLACKBehavior_e, &GNC2026W_P.ChangeBLACKBehavior_e);

    // End of SystemInitialize for SubSystem: '<S259>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S259>/Change BLUE Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLUEBehavior_f, &GNC2026W_P.ChangeBLUEBehavior_f);

    // End of SystemInitialize for SubSystem: '<S259>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S259>/Change RED Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_d,
      &GNC2026W_P.ChangeREDBehavior_d);

    // End of SystemInitialize for SubSystem: '<S259>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S10>/Use Hardware to Obtain States' 

    // SystemInitialize for IfAction SubSystem: '<S11>/Subsystem'
    // Start for MATLABSystem: '<S304>/WhoAmI'
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

    // End of Start for MATLABSystem: '<S304>/WhoAmI'
    // End of SystemInitialize for SubSystem: '<S11>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S12>/CV UDP'
    // Start for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
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

    // End of Start for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S12>/CV UDP'

    // SystemInitialize for IfAction SubSystem: '<S13>/ROB UDP'
    // SystemInitialize for IfAction SubSystem: '<S307>/Change BLACK Behavior'
    // Start for S-Function (sdspFromNetwork): '<S309>/UDP Receive'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U], 0, "0.0.0.0",
                        GNC2026W_P.UDPReceive_Port_k, "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S309>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S307>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S307>/Change RED Behavior'
    // Start for S-Function (sdspFromNetwork): '<S311>/UDP Receive'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPReceive_NetworkLib[0U], 0, "0.0.0.0",
                        GNC2026W_P.UDPReceive_Port_g, "0.0.0.0", -1, 8192, 4, 0);
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

    // End of Start for S-Function (sdspFromNetwork): '<S311>/UDP Receive'

    // Start for S-Function (sdspToNetwork): '<S311>/UDP Send'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend_NetworkLib_g[0U], 1, "0.0.0.0", -1,
                        "255.255.255.255", GNC2026W_P.UDPSend_Port, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S311>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S307>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S13>/ROB UDP'

    // SystemInitialize for IfAction SubSystem: '<S14>/Change ARM Behavior'
    // Start for MATLABSystem: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
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

    // End of Start for MATLABSystem: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
    // End of SystemInitialize for SubSystem: '<S14>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S15>/Subsystem'
    // Start for S-Function (sdspToNetwork): '<S313>/UDP Send'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend_NetworkLib_m[0U], 1, "0.0.0.0", -1,
                        "192.168.1.115", GNC2026W_P.UDPSend_Port_d, 8192, 8, 0);
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

    // End of Start for S-Function (sdspToNetwork): '<S313>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S15>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S16>/SEND ROB UDP'
    // Start for S-Function (sdspToNetwork): '<S315>/UDP Send'
    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
    CreateUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&GNC2026W_DW.UDPSend_NetworkLib_f[0U], 1, "0.0.0.0", -1,
                        "192.168.1.110", GNC2026W_P.UDPSend_Port_b, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
      if (*sErr != 0) {
        GNC2026W_M->setErrorStatus(sErr);
        GNC2026W_M->setStopRequested(1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S315>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S16>/SEND ROB UDP'

    // SystemInitialize for IfAction SubSystem: '<S19>/Change BLACK Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLACKBehavior_i, &GNC2026W_P.ChangeBLACKBehavior_i);

    // End of SystemInitialize for SubSystem: '<S19>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S19>/Change BLUE Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLUEBehavior_e, &GNC2026W_P.ChangeBLUEBehavior_e);

    // End of SystemInitialize for SubSystem: '<S19>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S19>/Change RED Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_h,
      &GNC2026W_P.ChangeREDBehavior_h);

    // End of SystemInitialize for SubSystem: '<S19>/Change RED Behavior'

    // Start for MATLABSystem: '<Root>/Dropped Frames'
    GNC2026W_DW.state_b = 7U;
    memcpy(&GNC2026W_DW.state_d[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.state_jw[0] = 362436069U;
    GNC2026W_DW.state_jw[1] = 521288629U;
    GNC2026W_DW.method_e = 1144108930U;
    GNC2026W_SystemCore_setup(&GNC2026W_DW.obj_fv, &seed);

    // Start for MATLABSystem: '<S215>/MATLAB System'
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

  // Terminate for MATLABSystem: '<S215>/MATLAB System'
  if (!GNC2026W_DW.obj_f.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S215>/MATLAB System'

  // Terminate for S-Function (sdspToNetwork): '<S18>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S18>/UDP Send'

  // Terminate for IfAction SubSystem: '<S4>/Change BLACK Behavior'
  GNC202_ChangeBLACKBehavior_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior);

  // End of Terminate for SubSystem: '<S4>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S4>/Change BLUE Behavior'
  GNC202_ChangeBLACKBehavior_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior);

  // End of Terminate for SubSystem: '<S4>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S4>/Change RED Behavior'
  GNC202_ChangeBLACKBehavior_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior);

  // End of Terminate for SubSystem: '<S4>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change BLACK Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S219>/UDP Send1'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend1_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S219>/UDP Send1'
  // End of Terminate for SubSystem: '<S6>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change BLUE Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S220>/UDP Send2'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend2_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S220>/UDP Send2'
  // End of Terminate for SubSystem: '<S6>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change RED Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S221>/UDP Send3'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend3_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S221>/UDP Send3'
  // End of Terminate for SubSystem: '<S6>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S7>/Enable Pucks'
  // Terminate for MATLABSystem: '<S222>/GPIO Write1'
  if (!GNC2026W_DW.obj_l.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((GNC2026W_DW.obj_l.isInitialized == 1) &&
        GNC2026W_DW.obj_l.isSetupComplete) {
      //  Call C-function implementing device termination
      change_gpio_value(GNC2026W_DW.obj_l.gpioPin, 0.0);
      unexport_gpio(GNC2026W_DW.obj_l.gpioPin);
    }
  }

  // End of Terminate for MATLABSystem: '<S222>/GPIO Write1'
  // End of Terminate for SubSystem: '<S7>/Enable Pucks'

  // Terminate for IfAction SubSystem: '<S8>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders' 
  if (!GNC2026W_DW.obj_d.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S223>/Read Joint Positions using  Dynamixel Encoders' 
  // End of Terminate for SubSystem: '<S8>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S10>/Use Hardware to Obtain States'
  // Terminate for S-Function (sdspFromNetwork): '<S251>/Receive PhaseSpace Data' 
  sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  LibTerminate(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S251>/Receive PhaseSpace Data' 

  // Terminate for S-Function (sdspFromNetwork): '<S255>/UDP Receive (RED Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S255>/UDP Receive (RED Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLACK Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLACK Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLUE Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S255>/UDP Receive (BLUE Clock)' 

  // Terminate for IfAction SubSystem: '<S259>/Change BLACK Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior_e);

  // End of Terminate for SubSystem: '<S259>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S259>/Change BLUE Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior_f);

  // End of Terminate for SubSystem: '<S259>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S259>/Change RED Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_d);

  // End of Terminate for SubSystem: '<S259>/Change RED Behavior'
  // End of Terminate for SubSystem: '<S10>/Use Hardware to Obtain States'

  // Terminate for IfAction SubSystem: '<S11>/Subsystem'
  // Terminate for MATLABSystem: '<S304>/WhoAmI'
  if (!GNC2026W_DW.obj_dk.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_dk.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S304>/WhoAmI'
  // End of Terminate for SubSystem: '<S11>/Subsystem'

  // Terminate for IfAction SubSystem: '<S12>/CV UDP'
  // Terminate for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
  // End of Terminate for SubSystem: '<S12>/CV UDP'

  // Terminate for IfAction SubSystem: '<S13>/ROB UDP'
  // Terminate for IfAction SubSystem: '<S307>/Change BLACK Behavior'
  // Terminate for S-Function (sdspFromNetwork): '<S309>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_d[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S309>/UDP Receive'
  // End of Terminate for SubSystem: '<S307>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S307>/Change RED Behavior'
  // Terminate for S-Function (sdspFromNetwork): '<S311>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S311>/UDP Receive'

  // Terminate for S-Function (sdspToNetwork): '<S311>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib_g[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_g[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S311>/UDP Send'
  // End of Terminate for SubSystem: '<S307>/Change RED Behavior'
  // End of Terminate for SubSystem: '<S13>/ROB UDP'

  // Terminate for IfAction SubSystem: '<S14>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  if (!GNC2026W_DW.obj.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj.matlabCodegenIsDeleted = true;
    if ((GNC2026W_DW.obj.isInitialized == 1) && GNC2026W_DW.obj.isSetupComplete)
    {
      terminate_dynamixel();
    }
  }

  // End of Terminate for MATLABSystem: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  // End of Terminate for SubSystem: '<S14>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S15>/Subsystem'
  // Terminate for S-Function (sdspToNetwork): '<S313>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib_m[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S313>/UDP Send'
  // End of Terminate for SubSystem: '<S15>/Subsystem'

  // Terminate for IfAction SubSystem: '<S16>/SEND ROB UDP'
  // Terminate for S-Function (sdspToNetwork): '<S315>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
  if (*sErr != 0) {
    GNC2026W_M->setErrorStatus(sErr);
    GNC2026W_M->setStopRequested(1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib_f[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S315>/UDP Send'
  // End of Terminate for SubSystem: '<S16>/SEND ROB UDP'

  // Terminate for IfAction SubSystem: '<S19>/Change BLACK Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior_i);

  // End of Terminate for SubSystem: '<S19>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S19>/Change BLUE Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior_e);

  // End of Terminate for SubSystem: '<S19>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S19>/Change RED Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_h);

  // End of Terminate for SubSystem: '<S19>/Change RED Behavior'
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
