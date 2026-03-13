//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.cpp
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1884
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Fri Mar 13 18:31:11 2026
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
#include "GNC2026W_dt.h"

// Named constants for MATLAB Function: '<S143>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT = -1;

// Named constants for MATLAB Function: '<S202>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT_i = -1;

// Named constants for MATLAB Function: '<S323>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT_b = -1;

// Named constants for MATLAB Function: '<S325>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT_g = -1;

// Named constants for MATLAB Function: '<S330>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT_br = -1;

// Named constants for MATLAB Function: '<S261>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT_j = -1;

// Named constants for MATLAB Function: '<S280>/MATLAB Function'
const int32_T GNC2026W_CALL_EVENT_e = -1;

// Named constants for MATLAB Function: '<S414>/MATLAB Function1'
const int32_T GNC2026W_CALL_EVENT_o = -1;

// Named constants for MATLAB Function: '<S414>/MATLAB Function5'
const int32_T GNC2026W_CALL_EVENT_a = -1;

// Named constants for MATLAB Function: '<S420>/Create Rotation Matrix'
const int32_T GNC2026W_CALL_EVENT_bv = -1;

// Named constants for MATLAB Function: '<S415>/Create Rotation Matrix'
const int32_T GNC2026W_CALL_EVENT_d = -1;

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
static real_T GNC2026W_rand_e(void);
static real_T GNC2026W_xzlangeM_g(const real_T x[36]);
static void GNC2026W_xzlascl_d(real_T cfrom, real_T cto, real_T A[36]);
static real_T GNC2026W_xnrm2_l(int32_T n, const real_T x[36], int32_T ix0);
static real_T GNC2026W_xdotc_a(int32_T n, const real_T x[36], int32_T ix0, const
  real_T y[36], int32_T iy0);
static void GNC2026W_xaxpy_b(int32_T n, real_T a, int32_T ix0, real_T y[36],
  int32_T iy0);
static real_T GNC2026W_xnrm2_lu(int32_T n, const real_T x[6], int32_T ix0);
static void GNC2026W_xaxpy_ba(int32_T n, real_T a, const real_T x[36], int32_T
  ix0, real_T y[6], int32_T iy0);
static void GNC2026W_xaxpy_baj(int32_T n, real_T a, const real_T x[6], int32_T
  ix0, real_T y[36], int32_T iy0);
static void GNC2026W_xzlascl_dc(real_T cfrom, real_T cto, real_T A[6]);
static void GNC2026W_xswap_i(real_T x[36], int32_T ix0, int32_T iy0);
static void GNC2026W_xrot_i(real_T x[36], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static void GNC2026W_svd_l(const real_T A[36], real_T U[36], real_T s[6], real_T
  V[36]);
static void GNC2026W_chol(real_T A[36]);
static void GNC2026W_inv(const real_T x[9], real_T y[9]);
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
  // DataStoreWrite: '<S21>/Data Store Write2' incorporates:
  //   Constant: '<S21>/Constant1'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant1_Value;

  // DataStoreWrite: '<S21>/Data Store Write3' incorporates:
  //   Constant: '<S21>/Constant2'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant2_Value;

  // DataStoreWrite: '<S21>/Data Store Write7' incorporates:
  //   Constant: '<S21>/Constant3'

  *rtd_RED_Path_Planner_Selection = localP->Constant3_Value;

  // DataStoreWrite: '<S21>/Data Store Write8' incorporates:
  //   Constant: '<S21>/Constant4'

  *rtd_ARM_Path_Planner_Selection = localP->Constant4_Value;

  // DataStoreWrite: '<S21>/Data Store Write' incorporates:
  //   Constant: '<S21>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S21>/Data Store Write6' incorporates:
  //   Constant: '<S21>/Constant6'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant6_Value;

  // DataStoreWrite: '<S21>/Data Store Write5' incorporates:
  //   Constant: '<S21>/Constant7'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant7_Value;

  // DataStoreWrite: '<S21>/Data Store Write9' incorporates:
  //   Constant: '<S21>/Constant8'

  *rtd_ARM_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S21>/String Constant' incorporates:
  //   DataStoreWrite: '<S21>/Data Store Write1'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // StringConstant: '<S21>/String Constant1' incorporates:
  //   DataStoreWrite: '<S21>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S21>/String Constant2' incorporates:
  //   DataStoreWrite: '<S21>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S21>/Data Store Write4' incorporates:
  //   Constant: '<S21>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for action system:
//    '<S60>/If Action Subsystem'
//    '<S60>/If Action Subsystem1'
//    '<S60>/If Action Subsystem2'
//    '<S60>/If Action Subsystem3'
//    '<S60>/If Action Subsystem4'
//    '<S60>/If Action Subsystem5'
//
void GNC2026W_IfActionSubsystem(real_T *rtd_RED_Control_Law_Enabler, real_T
  *rtd_RED_Path_Planner_Selection, P_IfActionSubsystem_GNC2026W_T *localP)
{
  // DataStoreWrite: '<S78>/Data Store Write3' incorporates:
  //   Constant: '<S78>/Constant'

  *rtd_RED_Control_Law_Enabler = localP->Constant_Value;

  // DataStoreWrite: '<S78>/Data Store Write24' incorporates:
  //   Constant: '<S78>/Constant1'

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
  // DataStoreWrite: '<S25>/Data Store Write24' incorporates:
  //   Constant: '<S25>/Constant11'

  *rtd_RED_Path_Planner_Selection = localP->Constant11_Value;

  // DataStoreWrite: '<S25>/Data Store Write3' incorporates:
  //   Constant: '<S25>/Constant12'

  *rtd_ARM_Path_Planner_Selection = localP->Constant12_Value;

  // DataStoreWrite: '<S25>/Data Store Write23' incorporates:
  //   Constant: '<S25>/Constant14'

  *rtd_BLACK_Path_Planner_Selectio = localP->Constant14_Value;

  // DataStoreWrite: '<S25>/Data Store Write22' incorporates:
  //   Constant: '<S25>/Constant15'

  *rtd_BLUE_Path_Planner_Selection = localP->Constant15_Value;

  // DataStoreWrite: '<S25>/Data Store Write4' incorporates:
  //   Constant: '<S25>/Constant18'

  *rtd_ARM_Control_Law_Enabler = localP->Constant18_Value;

  // DataStoreWrite: '<S25>/Data Store Write5' incorporates:
  //   Constant: '<S25>/Constant4'

  *rtd_BLACK_Control_Law_Enabler = localP->Constant4_Value;

  // DataStoreWrite: '<S25>/Data Store Write8' incorporates:
  //   Constant: '<S25>/Constant5'

  *rtd_RED_Control_Law_Enabler = localP->Constant5_Value;

  // DataStoreWrite: '<S25>/Data Store Write7' incorporates:
  //   Constant: '<S25>/Constant6'

  *rtd_Float_State = localP->Constant6_Value;

  // DataStoreWrite: '<S25>/Data Store Write16' incorporates:
  //   Constant: '<S25>/Constant8'

  *rtd_BLUE_Control_Law_Enabler = localP->Constant8_Value;

  // StringConstant: '<S25>/String Constant1' incorporates:
  //   DataStoreWrite: '<S25>/Data Store Write10'

  strncpy(&rtd_BLACK_Logger[0], &localP->StringConstant1_String[0], 255U);
  rtd_BLACK_Logger[255] = '\x00';

  // StringConstant: '<S25>/String Constant2' incorporates:
  //   DataStoreWrite: '<S25>/Data Store Write11'

  strncpy(&rtd_BLUE_Logger[0], &localP->StringConstant2_String[0], 255U);
  rtd_BLUE_Logger[255] = '\x00';

  // DataStoreWrite: '<S25>/Data Store Write13' incorporates:
  //   Constant: '<S119>/Constant1'
  //   Constant: '<S119>/Constant2'
  //   Constant: '<S119>/Constant3'

  rtd_ARM_Desired_States[0] = localP->Constant3_Value;
  rtd_ARM_Desired_States[1] = localP->Constant1_Value;
  rtd_ARM_Desired_States[2] = localP->Constant2_Value;

  // StringConstant: '<S25>/String Constant' incorporates:
  //   DataStoreWrite: '<S25>/Data Store Write2'

  strncpy(&rtd_RED_Logger[0], &localP->StringConstant_String[0], 255U);
  rtd_RED_Logger[255] = '\x00';

  // DataStoreWrite: '<S25>/Data Store Write18' incorporates:
  //   Constant: '<S121>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[0] = GNC2026W_P.home_states_BLUE[0];

  // DataStoreWrite: '<S25>/Data Store Write6' incorporates:
  //   Constant: '<S120>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[0] = GNC2026W_P.home_states_BLACK[0];

  // DataStoreWrite: '<S25>/Data Store Write9' incorporates:
  //   Constant: '<S122>/Constant2'

  rtd_RED_Desired_States[0] = GNC2026W_P.home_states_RED[0];

  // DataStoreWrite: '<S25>/Data Store Write18' incorporates:
  //   Constant: '<S121>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[1] = GNC2026W_P.home_states_BLUE[1];

  // DataStoreWrite: '<S25>/Data Store Write6' incorporates:
  //   Constant: '<S120>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[1] = GNC2026W_P.home_states_BLACK[1];

  // DataStoreWrite: '<S25>/Data Store Write9' incorporates:
  //   Constant: '<S122>/Constant2'

  rtd_RED_Desired_States[1] = GNC2026W_P.home_states_RED[1];

  // DataStoreWrite: '<S25>/Data Store Write18' incorporates:
  //   Constant: '<S121>/Desired States (BLUE)'

  rtd_BLUE_Desired_States[2] = GNC2026W_P.home_states_BLUE[2];

  // DataStoreWrite: '<S25>/Data Store Write6' incorporates:
  //   Constant: '<S120>/Desired States (BLACK)'

  rtd_BLACK_Desired_States[2] = GNC2026W_P.home_states_BLACK[2];

  // DataStoreWrite: '<S25>/Data Store Write9' incorporates:
  //   Constant: '<S122>/Constant2'

  rtd_RED_Desired_States[2] = GNC2026W_P.home_states_RED[2];
}

//
// System initialize for atomic system:
//    '<S143>/MATLAB Function'
//    '<S166>/MATLAB Function'
//    '<S165>/MATLAB Function'
//    '<S341>/MATLAB Function'
//    '<S241>/MATLAB Function'
//    '<S232>/MATLAB Function'
//    '<S226>/MATLAB Function'
//    '<S276>/MATLAB Function'
//
void GNC2026W_MATLABFunction_Init(DW_MATLABFunction_GNC2026W_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT;
}

//
// Output and update for atomic system:
//    '<S143>/MATLAB Function'
//    '<S166>/MATLAB Function'
//    '<S165>/MATLAB Function'
//    '<S341>/MATLAB Function'
//    '<S241>/MATLAB Function'
//    '<S232>/MATLAB Function'
//    '<S226>/MATLAB Function'
//    '<S276>/MATLAB Function'
//
void GNC2026W_MATLABFunction(real_T rtu_u, real_T rtu_u_pre, real_T rtu_y_pre,
  real_T *rty_y, real_T *rty_u_next, DW_MATLABFunction_GNC2026W_T *localDW)
{
  real_T q;
  real_T r;
  localDW->sfEvent = GNC2026W_CALL_EVENT;
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
// System initialize for atomic system:
//    '<S202>/MATLAB Function'
//    '<S179>/MATLAB Function'
//    '<S192>/MATLAB Function'
//    '<S169>/MATLAB Function'
//    '<S197>/MATLAB Function'
//    '<S174>/MATLAB Function'
//
void GNC2026W_MATLABFunction_i_Init(DW_MATLABFunction_GNC2026W_i_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_i;
}

//
// Output and update for atomic system:
//    '<S202>/MATLAB Function'
//    '<S179>/MATLAB Function'
//    '<S192>/MATLAB Function'
//    '<S169>/MATLAB Function'
//    '<S197>/MATLAB Function'
//    '<S174>/MATLAB Function'
//
void GNC2026W_MATLABFunction_n(real_T rtu_Rz_path, real_T rtu_Rz_measured,
  real_T *rty_Rz_error, DW_MATLABFunction_GNC2026W_i_T *localDW)
{
  real_T q;
  real_T r;
  localDW->sfEvent = GNC2026W_CALL_EVENT_i;
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
  // SignalConversion generated from: '<S161>/u' incorporates:
  //   Constant: '<S161>/Zero'

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
  // SignalConversion generated from: '<S159>/Out1' incorporates:
  //   Constant: '<S159>/Zero'

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

  // Start for S-Function (sdspToNetwork): '<S207>/UDP Send'
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
      rtmSetErrorStatus(GNC2026W_M, sErr);
      rtmSetStopRequested(GNC2026W_M, 1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S207>/UDP Send'
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

  // Update for S-Function (sdspToNetwork): '<S207>/UDP Send' incorporates:
  //   Constant: '<S207>/Constant1'

  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSend_NetworkLib[0U], &localP->Constant1_Value,
                    1);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S207>/UDP Send'
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

  // Terminate for S-Function (sdspToNetwork): '<S207>/UDP Send'
  sErr = GetErrorBuffer(&localDW->UDPSend_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&localDW->UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S207>/UDP Send'
}

//
// System initialize for atomic system:
//    '<S323>/MATLAB Function'
//    '<S351>/MATLAB Function'
//    '<S378>/MATLAB Function'
//    '<S398>/MATLAB Function'
//    '<S278>/MATLAB Function'
//    '<S288>/MATLAB Function'
//    '<S298>/MATLAB Function'
//
void GNC2026W_MATLABFunction_c_Init(DW_MATLABFunction_GNC2026W_l_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_b;
}

//
// Output and update for atomic system:
//    '<S323>/MATLAB Function'
//    '<S351>/MATLAB Function'
//    '<S378>/MATLAB Function'
//    '<S398>/MATLAB Function'
//    '<S278>/MATLAB Function'
//    '<S288>/MATLAB Function'
//    '<S298>/MATLAB Function'
//
void GNC2026W_MATLABFunction_o(const real_T rtu_y[3], real_T rtu_dt, real_T
  rtu_tau, const real_T rtu_ema_prev[3], real_T rty_dy[3], real_T rty_ema[3],
  DW_MATLABFunction_GNC2026W_l_T *localDW)
{
  real_T rty_ema_0;
  real_T x;
  localDW->sfEvent = GNC2026W_CALL_EVENT_b;
  x = exp(-rtu_dt / rtu_tau);
  rty_ema_0 = (1.0 - (1.0 - x)) * rtu_ema_prev[0] + (1.0 - x) * rtu_y[0];
  rty_ema[0] = rty_ema_0;
  rty_dy[0] = (rty_ema_0 - rtu_ema_prev[0]) / rtu_dt;
  rty_ema_0 = (1.0 - (1.0 - x)) * rtu_ema_prev[1] + (1.0 - x) * rtu_y[1];
  rty_ema[1] = rty_ema_0;
  rty_dy[1] = (rty_ema_0 - rtu_ema_prev[1]) / rtu_dt;
  rty_ema_0 = (1.0 - (1.0 - x)) * rtu_ema_prev[2] + (1.0 - x) * rtu_y[2];
  rty_ema[2] = rty_ema_0;
  rty_dy[2] = (rty_ema_0 - rtu_ema_prev[2]) / rtu_dt;
}

//
// System initialize for enable system:
//    '<S320>/Enabled Subsystem'
//    '<S348>/Enabled Subsystem'
//    '<S373>/Enabled Subsystem'
//    '<S395>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026W_T *localDW, P_EnabledSubsystem_GNC2026W_T *localP)
{
  // InitializeConditions for Delay: '<S323>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for MATLAB Function: '<S323>/MATLAB Function'
  GNC2026W_MATLABFunction_c_Init(&localDW->sf_MATLABFunction);

  // SystemInitialize for Outport: '<S323>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;
  rty_dydt[1] = localP->dydt_Y0;
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Output and update for enable system:
//    '<S320>/Enabled Subsystem'
//    '<S348>/Enabled Subsystem'
//    '<S373>/Enabled Subsystem'
//    '<S395>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem(const boolean_T rtu_Enable[3], const real_T
  rtu_y[3], real_T rtu_dt, real_T rty_dydt[3], B_EnabledSubsystem_GNC2026W_T
  *localB, DW_EnabledSubsystem_GNC2026W_T *localDW,
  P_EnabledSubsystem_GNC2026W_T *localP)
{
  // Outputs for Enabled SubSystem: '<S320>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S323>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    // MATLAB Function: '<S323>/MATLAB Function' incorporates:
    //   Constant: '<S323>/Constant2'
    //   Delay: '<S323>/Delay'

    GNC2026W_MATLABFunction_o(rtu_y, rtu_dt, localP->Constant2_Value,
      localDW->Delay_DSTATE, rty_dydt, localB->ema, &localDW->sf_MATLABFunction);

    // Update for Delay: '<S323>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S320>/Enabled Subsystem'
}

//
// System initialize for enable system:
//    '<S321>/Enabled Subsystem'
//    '<S349>/Enabled Subsystem'
//    '<S372>/Enabled Subsystem'
//    '<S396>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_i_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_g_T *localDW, P_EnabledSubsystem_GNC2026W_m_T
  *localP)
{
  // SystemInitialize for MATLAB Function: '<S325>/MATLAB Function'
  localDW->sfEvent = GNC2026W_CALL_EVENT_g;

  // InitializeConditions for Delay: '<S325>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S325>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S325>/Delay'
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S325>/dy//dt'
  rty_dydt[1] = localP->dydt_Y0;

  // InitializeConditions for Delay: '<S325>/Delay'
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for Outport: '<S325>/dy//dt'
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Output and update for enable system:
//    '<S321>/Enabled Subsystem'
//    '<S349>/Enabled Subsystem'
//    '<S372>/Enabled Subsystem'
//    '<S396>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_b(const boolean_T rtu_Enable[3], const real_T
  rtu_y[3], real_T rtu_dt, real_T rty_dydt[3], DW_EnabledSubsystem_GNC2026_g_T
  *localDW, P_EnabledSubsystem_GNC2026W_m_T *localP)
{
  // Outputs for Enabled SubSystem: '<S321>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S325>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    real_T Delay_DSTATE;
    real_T ema;
    real_T x;

    // MATLAB Function: '<S325>/MATLAB Function' incorporates:
    //   Constant: '<S325>/Constant2'
    //   Delay: '<S325>/Delay'

    localDW->sfEvent = GNC2026W_CALL_EVENT_g;
    x = exp(-rtu_dt / localP->Constant2_Value);
    Delay_DSTATE = localDW->Delay_DSTATE[0];
    ema = (1.0 - (1.0 - x)) * Delay_DSTATE + (1.0 - x) * rtu_y[0];
    rty_dydt[0] = (ema - Delay_DSTATE) / rtu_dt;

    // Update for Delay: '<S325>/Delay'
    localDW->Delay_DSTATE[0] = ema;

    // MATLAB Function: '<S325>/MATLAB Function' incorporates:
    //   Delay: '<S325>/Delay'

    Delay_DSTATE = localDW->Delay_DSTATE[1];
    ema = (1.0 - (1.0 - x)) * Delay_DSTATE + (1.0 - x) * rtu_y[1];
    rty_dydt[1] = (ema - Delay_DSTATE) / rtu_dt;

    // Update for Delay: '<S325>/Delay'
    localDW->Delay_DSTATE[1] = ema;

    // MATLAB Function: '<S325>/MATLAB Function' incorporates:
    //   Delay: '<S325>/Delay'

    Delay_DSTATE = localDW->Delay_DSTATE[2];
    ema = (1.0 - (1.0 - x)) * Delay_DSTATE + (1.0 - x) * rtu_y[2];
    rty_dydt[2] = (ema - Delay_DSTATE) / rtu_dt;

    // Update for Delay: '<S325>/Delay'
    localDW->Delay_DSTATE[2] = ema;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S321>/Enabled Subsystem'
}

//
// System initialize for atomic system:
//    '<S330>/MATLAB Function'
//    '<S358>/MATLAB Function'
//    '<S386>/MATLAB Function'
//    '<S405>/MATLAB Function'
//
void GNC2026W_MATLABFunction_p_Init(DW_MATLABFunction_GNC2026W_o_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_br;
}

//
// Output and update for atomic system:
//    '<S330>/MATLAB Function'
//    '<S358>/MATLAB Function'
//    '<S386>/MATLAB Function'
//    '<S405>/MATLAB Function'
//
void GNC2026W_MATLABFunction_oy(real_T rtu_dt, real_T rtu_dataRate, real_T
  *rty_dt_out, DW_MATLABFunction_GNC2026W_o_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_br;
  if (rtu_dt <= 0.0) {
    *rty_dt_out = rtu_dataRate;
  } else {
    *rty_dt_out = rtu_dt;
  }
}

//
// Output and update for action system:
//    '<S240>/Experimental VIS States'
//    '<S231>/Experimental VIS States'
//
void GNC2026W_ExperimentalVISStates(real_T rty_Out1[3], const real_T
  rtd_BLACK_CV_States[3], const real_T rtd_VIS_LAR_States[3], const real_T
  *rtd_isSim, DW_ExperimentalVISStates_GNC2_T *localDW)
{
  // If: '<S244>/If' incorporates:
  //   DataStoreRead: '<S244>/Data Store Read1'

  if (*rtd_isSim == 1.0) {
    // Outputs for IfAction SubSystem: '<S244>/If Action Subsystem' incorporates:
    //   ActionPort: '<S245>/Action Port'

    // DataStoreRead: '<S245>/Data Store Read1'
    rty_Out1[0] = rtd_BLACK_CV_States[0];
    rty_Out1[1] = rtd_BLACK_CV_States[1];
    rty_Out1[2] = rtd_BLACK_CV_States[2];

    // End of Outputs for SubSystem: '<S244>/If Action Subsystem'

    // Update for IfAction SubSystem: '<S244>/If Action Subsystem' incorporates:
    //   ActionPort: '<S245>/Action Port'

    // Update for If: '<S244>/If'
    srUpdateBC(localDW->IfActionSubsystem_SubsysRanBC);

    // End of Update for SubSystem: '<S244>/If Action Subsystem'
  } else {
    // Outputs for IfAction SubSystem: '<S244>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S246>/Action Port'

    // DataStoreRead: '<S246>/Data Store Read'
    rty_Out1[0] = rtd_VIS_LAR_States[0];
    rty_Out1[1] = rtd_VIS_LAR_States[1];
    rty_Out1[2] = rtd_VIS_LAR_States[2];

    // End of Outputs for SubSystem: '<S244>/If Action Subsystem1'

    // Update for IfAction SubSystem: '<S244>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S246>/Action Port'

    // Update for If: '<S244>/If'
    srUpdateBC(localDW->IfActionSubsystem1_SubsysRanBC);

    // End of Update for SubSystem: '<S244>/If Action Subsystem1'
  }

  // End of If: '<S244>/If'
}

//
// System initialize for action system:
//    '<S257>/Change BLACK Behavior'
//    '<S257>/Change BLUE Behavior'
//    '<S257>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_j_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_l_T *localDW, P_ChangeBLACKBehavior_GNC20_p_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S258>/UDP Send (GUI)'
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
      rtmSetErrorStatus(GNC2026W_M, sErr);
      rtmSetStopRequested(GNC2026W_M, 1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S258>/UDP Send (GUI)'
}

//
// Update for action system:
//    '<S257>/Change BLACK Behavior'
//    '<S257>/Change BLUE Behavior'
//    '<S257>/Change RED Behavior'
//
void GN_ChangeBLACKBehavior_p_Update(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_GNC2_l_T *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S258>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendGUI_NetworkLib[0U], &rtu_UniversalTime, 1);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S258>/UDP Send (GUI)'
}

//
// Termination for action system:
//    '<S257>/Change BLACK Behavior'
//    '<S257>/Change BLUE Behavior'
//    '<S257>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_j_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_l_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S258>/UDP Send (GUI)'
  sErr = GetErrorBuffer(&localDW->UDPSendGUI_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendGUI_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&localDW->UDPSendGUI_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendGUI_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S258>/UDP Send (GUI)'
}

//
// System initialize for atomic system:
//    '<S261>/MATLAB Function'
//    '<S282>/MATLAB Function'
//    '<S292>/MATLAB Function'
//
void GNC2026W_MATLABFunction_d_Init(DW_MATLABFunction_GNC2026W_o3_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_j;
}

//
// Output and update for atomic system:
//    '<S261>/MATLAB Function'
//    '<S282>/MATLAB Function'
//    '<S292>/MATLAB Function'
//
void GNC2026W_MATLABFunction_j(real_T rtu_dt, real_T rtu_dataRate, real_T
  *rty_dt_out, DW_MATLABFunction_GNC2026W_o3_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_j;
  if (rtu_dt <= 0.0) {
    *rty_dt_out = rtu_dataRate;
  } else {
    *rty_dt_out = rtu_dt;
  }
}

//
// System initialize for enable system:
//    '<S263>/Enabled Subsystem'
//    '<S283>/Enabled Subsystem'
//    '<S293>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_b_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_b_T *localDW, P_EnabledSubsystem_GNC2026W_o_T
  *localP)
{
  // InitializeConditions for Delay: '<S278>/Delay'
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;
  localDW->Delay_DSTATE[2] = localP->Delay_InitialCondition;

  // SystemInitialize for MATLAB Function: '<S278>/MATLAB Function'
  GNC2026W_MATLABFunction_c_Init(&localDW->sf_MATLABFunction);

  // SystemInitialize for Outport: '<S278>/dy//dt'
  rty_dydt[0] = localP->dydt_Y0;
  rty_dydt[1] = localP->dydt_Y0;
  rty_dydt[2] = localP->dydt_Y0;
}

//
// Disable for enable system:
//    '<S263>/Enabled Subsystem'
//    '<S283>/Enabled Subsystem'
//    '<S293>/Enabled Subsystem'
//
void GNC202_EnabledSubsystem_Disable(DW_EnabledSubsystem_GNC2026_b_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S263>/Enabled Subsystem'
//    '<S283>/Enabled Subsystem'
//    '<S293>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_i(const boolean_T rtu_Enable[3], const real_T
  rtu_y[3], real_T rtu_dt, real_T rty_dydt[3], B_EnabledSubsystem_GNC2026W_j_T
  *localB, DW_EnabledSubsystem_GNC2026_b_T *localDW,
  P_EnabledSubsystem_GNC2026W_o_T *localP)
{
  // Outputs for Enabled SubSystem: '<S263>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S278>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    GNC202_EnabledSubsystem_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // Delay: '<S278>/Delay'
    localB->Delay[0] = localDW->Delay_DSTATE[0];
    localB->Delay[1] = localDW->Delay_DSTATE[1];
    localB->Delay[2] = localDW->Delay_DSTATE[2];

    // MATLAB Function: '<S278>/MATLAB Function' incorporates:
    //   Constant: '<S278>/Constant2'

    GNC2026W_MATLABFunction_o(rtu_y, rtu_dt, localP->Constant2_Value,
      localB->Delay, rty_dydt, localB->ema, &localDW->sf_MATLABFunction);
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S263>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S263>/Enabled Subsystem'
//    '<S283>/Enabled Subsystem'
//    '<S293>/Enabled Subsystem'
//
void GNC20_EnabledSubsystem_d_Update(B_EnabledSubsystem_GNC2026W_j_T *localB,
  DW_EnabledSubsystem_GNC2026_b_T *localDW)
{
  // Update for Enabled SubSystem: '<S263>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S278>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S278>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S263>/Enabled Subsystem'
}

//
// System initialize for enable system:
//    '<S264>/Enabled Subsystem'
//    '<S284>/Enabled Subsystem'
//    '<S294>/Enabled Subsystem'
//
void GNC2026_EnabledSubsystem_f_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_c_T *localDW, P_EnabledSubsystem_GNC2026W_c_T
  *localP)
{
  // SystemInitialize for MATLAB Function: '<S280>/MATLAB Function'
  localDW->sfEvent = GNC2026W_CALL_EVENT_e;

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
//    '<S264>/Enabled Subsystem'
//    '<S284>/Enabled Subsystem'
//    '<S294>/Enabled Subsystem'
//
void GNC2_EnabledSubsystem_p_Disable(DW_EnabledSubsystem_GNC2026_c_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

//
// Outputs for enable system:
//    '<S264>/Enabled Subsystem'
//    '<S284>/Enabled Subsystem'
//    '<S294>/Enabled Subsystem'
//
void GNC2026W_EnabledSubsystem_g(const boolean_T rtu_Enable[3], real_T rtu_y,
  real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_GNC2026W_h_T *localB, DW_EnabledSubsystem_GNC2026_c_T
  *localDW, P_EnabledSubsystem_GNC2026W_c_T *localP)
{
  real_T x;

  // Outputs for Enabled SubSystem: '<S264>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S280>/Enable'

  if (rtu_Enable[0] || rtu_Enable[1] || rtu_Enable[2]) {
    localDW->EnabledSubsystem_MODE = true;
  } else if (localDW->EnabledSubsystem_MODE) {
    GNC2_EnabledSubsystem_p_Disable(localDW);
  }

  if (localDW->EnabledSubsystem_MODE) {
    // Delay: '<S280>/Delay'
    localB->Delay[0] = localDW->Delay_DSTATE[0];
    localB->Delay[1] = localDW->Delay_DSTATE[1];
    localB->Delay[2] = localDW->Delay_DSTATE[2];

    // MATLAB Function: '<S280>/MATLAB Function' incorporates:
    //   Constant: '<S280>/Constant2'
    //   Delay: '<S280>/Delay'
    //   SignalConversion generated from: '<S281>/ SFunction '

    localDW->sfEvent = GNC2026W_CALL_EVENT_e;
    x = exp(-rtu_dt / localP->Constant2_Value);
    localB->ema[0] = (1.0 - (1.0 - x)) * localB->Delay[0] + (1.0 - x) * rtu_y;
    localB->ema[1] = (1.0 - (1.0 - x)) * localB->Delay[1] + (1.0 - x) * rtu_y_c;
    localB->ema[2] = (1.0 - (1.0 - x)) * localB->Delay[2] + (1.0 - x) * rtu_y_k;
    rty_dydt[0] = (localB->ema[0] - localB->Delay[0]) / rtu_dt;
    rty_dydt[1] = (localB->ema[1] - localB->Delay[1]) / rtu_dt;
    rty_dydt[2] = (localB->ema[2] - localB->Delay[2]) / rtu_dt;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S264>/Enabled Subsystem'
}

//
// Update for enable system:
//    '<S264>/Enabled Subsystem'
//    '<S284>/Enabled Subsystem'
//    '<S294>/Enabled Subsystem'
//
void GNC20_EnabledSubsystem_a_Update(B_EnabledSubsystem_GNC2026W_h_T *localB,
  DW_EnabledSubsystem_GNC2026_c_T *localDW)
{
  // Update for Enabled SubSystem: '<S264>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S280>/Enable'

  if (localDW->EnabledSubsystem_MODE) {
    // Update for Delay: '<S280>/Delay'
    localDW->Delay_DSTATE[0] = localB->ema[0];
    localDW->Delay_DSTATE[1] = localB->ema[1];
    localDW->Delay_DSTATE[2] = localB->ema[2];
  }

  // End of Update for SubSystem: '<S264>/Enabled Subsystem'
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

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
}

static real_T GNC2026W_xnrm2(int32_T n, const real_T x[24], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
  return scale * sqrt(y);
}

static real_T GNC2026W_xdotc(int32_T n, const real_T x[24], int32_T ix0, const
  real_T y[24], int32_T iy0)
{
  real_T d;
  int32_T b;
  d = 0.0;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  b = static_cast<uint8_T>(n);
  for (int32_T k = 0; k < b; k++) {
    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }

  return d;
}

static void GNC2026W_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[24],
  int32_T iy0)
{
  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += y[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
}

static real_T GNC2026W_xdotc_o(const real_T x[9], const real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  return y[iy0 - 1] * x[1] + x[2] * y[iy0];
}

static void GNC2026W_xaxpy_gop(real_T a, real_T y[9], int32_T iy0)
{
  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  if (!(a == 0.0)) {
    y[iy0 - 1] += a * y[1];
    y[iy0] += a * y[2];
  }

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
}

static real_T GNC2026W_xnrm2_p(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
  return scale * sqrt(y);
}

static void GNC2026W_xaxpy_g(int32_T n, real_T a, const real_T x[24], int32_T
  ix0, real_T y[8], int32_T iy0)
{
  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
}

static void GNC2026W_xaxpy_go(int32_T n, real_T a, const real_T x[8], int32_T
  ix0, real_T y[24], int32_T iy0)
{
  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
}

static void GNC2026W_xzlascl_i(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // End of Start for MATLABSystem: '<S417>/Pseudoinverse1'
}

static void GNC2026W_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b, real_T *
  c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  roe = b;
  absa = fabs(a);
  absb = fabs(b);
  if (absa > absb) {
    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    *b_a = sqrt(ads * ads + bds * bds) * scale;
    if (roe < 0.0) {
      *b_a = -*b_a;
    }

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    *c = a / *b_a;
    *s = b / *b_a;
    if (absa > absb) {
      *b_b = *s;
    } else if (*c != 0.0) {
      // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    temp_tmp_tmp = (iy0 + k) - 1;
    temp_tmp = x[temp_tmp_tmp];

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    temp_tmp_tmp_0 = (ix0 + k) - 1;
    temp_tmp_0 = x[temp_tmp_tmp_0];

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    x[temp_tmp_tmp] = temp_tmp * c - temp_tmp_0 * s;
    x[temp_tmp_tmp_0] = temp_tmp_0 * c + temp_tmp * s;
  }
}

static void GNC2026W_xswap_dj(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    temp_tmp = (ix0 + k) - 1;
    temp = x[temp_tmp];

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  anrm = GNC2026W_xzlangeM(A);
  cscale = anrm;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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
    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    qp1 = i + 2;
    qq_tmp_tmp = i << 3;

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    colqp1 = qq_tmp_tmp + i;
    qq = colqp1 + 1;
    apply_transform = false;

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
    nrm = GNC2026W_xnrm2(8 - i, A_0, colqp1 + 1);
    if (nrm > 0.0) {
      apply_transform = true;

      // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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
      // Start for MATLABSystem: '<S417>/Pseudoinverse1'
      qjj = (((qq - 1) << 3) + i) + 1;
      if (apply_transform) {
        // Start for MATLABSystem: '<S417>/Pseudoinverse1'
        GNC2026W_xaxpy(8 - i, -(GNC2026W_xdotc(8 - i, A_0, colqp1 + 1, A_0, qjj)
          / A_0[colqp1]), colqp1 + 1, A_0, qjj);
      }

      e[qq - 1] = A_0[qjj - 1];
    }

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  i = 2;
  e[1] = A_0[17];
  e[2] = 0.0;

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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
      // Start for MATLABSystem: '<S417>/Pseudoinverse1'
      nrm = fabs(r);
      r /= nrm;
      s_0[qp1] = nrm;

      // Start for MATLABSystem: '<S417>/Pseudoinverse1'
      if (qp1 + 1 < 3) {
        e[qp1] /= r;
      }

      qq = qp1 << 3;

      // Start for MATLABSystem: '<S417>/Pseudoinverse1'
      for (qjj = qq + 1; qjj <= qq + 8; qjj++) {
        U[qjj - 1] *= r;
      }
    }

    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  ztest = fabs(s_0[0]);
  nrm = fabs(e[0]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(nrm <= 0.0)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  ztest = fabs(s_0[1]);
  nrm = fabs(e[1]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
  ztest = fabs(s_0[2]);
  nrm = fabs(e[2]);
  if ((ztest >= nrm) || rtIsNaN(nrm)) {
    nrm = ztest;
  }

  if ((!(r >= nrm)) && (!rtIsNaN(nrm))) {
    r = nrm;
  }

  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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
    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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
  // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // MATLABSystem: '<S417>/Pseudoinverse1'
  for (i = 0; i < 24; i++) {
    // Start for MATLABSystem: '<S417>/Pseudoinverse1'
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

  // End of MATLABSystem: '<S417>/Pseudoinverse1'
}

// Function for MATLAB Function: '<S414>/MATLAB Function1'
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
// System initialize for atomic system:
//    '<S414>/MATLAB Function1'
//    '<S426>/MATLAB Function1'
//    '<S438>/MATLAB Function8'
//
void GNC2026W_MATLABFunction1_Init(DW_MATLABFunction1_GNC2026W_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_o;
}

//
// Output and update for atomic system:
//    '<S414>/MATLAB Function1'
//    '<S426>/MATLAB Function1'
//    '<S438>/MATLAB Function8'
//
void GNC2026W_MATLABFunction1(const real_T rtu_ThrustPer[8], real_T
  rty_ThrustPer_Final[8], DW_MATLABFunction1_GNC2026W_T *localDW)
{
  real_T TControl;
  real_T ThrustPer_Sat;
  real_T maxval;
  int32_T i;
  localDW->sfEvent = GNC2026W_CALL_EVENT_o;
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

// Function for MATLAB Function: '<S414>/MATLAB Function5'
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

// Function for MATLAB Function: '<S414>/MATLAB Function5'
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
// System initialize for atomic system:
//    '<S414>/MATLAB Function5'
//    '<S426>/MATLAB Function5'
//    '<S438>/MATLAB Function5'
//
void GNC2026W_MATLABFunction5_Init(DW_MATLABFunction5_GNC2026W_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_a;
}

//
// Output and update for atomic system:
//    '<S414>/MATLAB Function5'
//    '<S426>/MATLAB Function5'
//    '<S438>/MATLAB Function5'
//
void GNC2026W_MATLABFunction5(const real_T rtu_u_desired[3], const real_T
  rtu_x0[8], real_T rty_H_final[24], real_T rty_duty_cycles[8], real_T
  rtp_max_iters, real_T rtp_tol, DW_MATLABFunction5_GNC2026W_T *localDW)
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
  localDW->sfEvent = GNC2026W_CALL_EVENT_a;
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
// System initialize for atomic system:
//    '<S420>/Create Rotation Matrix'
//    '<S432>/Create Rotation Matrix'
//    '<S444>/Create Rotation Matrix'
//
void GNC20_CreateRotationMatrix_Init(DW_CreateRotationMatrix_GNC20_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_bv;
}

//
// Output and update for atomic system:
//    '<S420>/Create Rotation Matrix'
//    '<S432>/Create Rotation Matrix'
//    '<S444>/Create Rotation Matrix'
//
void GNC2026W_CreateRotationMatrix(real_T rtu_Rz, real_T rty_C_Ib[4],
  DW_CreateRotationMatrix_GNC20_T *localDW)
{
  real_T x_tmp;
  real_T x_tmp_0;
  localDW->sfEvent = GNC2026W_CALL_EVENT_bv;
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
// System initialize for atomic system:
//    '<S415>/Create Rotation Matrix'
//    '<S427>/Create Rotation Matrix'
//    '<S439>/Create Rotation Matrix'
//
void GNC_CreateRotationMatrix_c_Init(DW_CreateRotationMatrix_GNC_j_T *localDW)
{
  localDW->sfEvent = GNC2026W_CALL_EVENT_d;
}

//
// Output and update for atomic system:
//    '<S415>/Create Rotation Matrix'
//    '<S427>/Create Rotation Matrix'
//    '<S439>/Create Rotation Matrix'
//
void GNC2026W_CreateRotationMatrix_a(real_T rtu_Rz, real_T rty_C_bI[4],
  DW_CreateRotationMatrix_GNC_j_T *localDW)
{
  real_T tmp;
  real_T tmp_0;
  localDW->sfEvent = GNC2026W_CALL_EVENT_d;
  tmp = sin(rtu_Rz);
  tmp_0 = cos(rtu_Rz);
  rty_C_bI[0] = tmp_0;
  rty_C_bI[2] = tmp;
  rty_C_bI[1] = -tmp;
  rty_C_bI[3] = tmp_0;
}

//
// System initialize for action system:
//    '<S20>/Change BLACK Behavior'
//    '<S20>/Change BLUE Behavior'
//    '<S20>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_e_Init(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW, P_ChangeBLACKBehavior_GNC20_b_T
  *localP)
{
  char_T *sErr;

  // Start for S-Function (sdspToNetwork): '<S450>/UDP Send (Clock)'
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
      rtmSetErrorStatus(GNC2026W_M, sErr);
      rtmSetStopRequested(GNC2026W_M, 1);
    }
  }

  // End of Start for S-Function (sdspToNetwork): '<S450>/UDP Send (Clock)'
}

//
// Outputs for action system:
//    '<S20>/Change BLACK Behavior'
//    '<S20>/Change BLUE Behavior'
//    '<S20>/Change RED Behavior'
//
void GNC2026W_ChangeBLACKBehavior_i(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  B_ChangeBLACKBehavior_GNC20_m_T *localB)
{
  // Clock: '<S450>/Clock1'
  localB->Clock1 = GNC2026W_M->Timing.t[0];
}

//
// Update for action system:
//    '<S20>/Change BLACK Behavior'
//    '<S20>/Change BLUE Behavior'
//    '<S20>/Change RED Behavior'
//
void GN_ChangeBLACKBehavior_n_Update(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  B_ChangeBLACKBehavior_GNC20_m_T *localB, DW_ChangeBLACKBehavior_GNC2_g_T
  *localDW)
{
  char_T *sErr;

  // Update for S-Function (sdspToNetwork): '<S450>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibUpdate_Network(&localDW->UDPSendClock_NetworkLib[0U], &localB->Clock1, 1);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  // End of Update for S-Function (sdspToNetwork): '<S450>/UDP Send (Clock)'
}

//
// Termination for action system:
//    '<S20>/Change BLACK Behavior'
//    '<S20>/Change BLUE Behavior'
//    '<S20>/Change RED Behavior'
//
void GNC2_ChangeBLACKBehavior_f_Term(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<S450>/UDP Send (Clock)'
  sErr = GetErrorBuffer(&localDW->UDPSendClock_NetworkLib[0U]);
  LibTerminate(&localDW->UDPSendClock_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&localDW->UDPSendClock_NetworkLib[0U], 1);
  DestroyUDPInterface(&localDW->UDPSendClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S450>/UDP Send (Clock)'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S150>/MATLAB Function3'
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

// Function for MATLAB Function: '<S319>/CV Noise'
static real_T GNC2026W_rand_e(void)
{
  real_T r;
  uint32_T b_u[2];
  switch (GNC2026W_DW.method_b) {
   case 4U:
    {
      int32_T k;
      uint32_T mti;
      uint32_T y;
      k = static_cast<int32_T>(GNC2026W_DW.state_e / 127773U);
      mti = (GNC2026W_DW.state_e - static_cast<uint32_T>(k) * 127773U) * 16807U;
      y = 2836U * static_cast<uint32_T>(k);
      if (mti < y) {
        GNC2026W_DW.state_e = ~(y - mti) & 2147483647U;
      } else {
        GNC2026W_DW.state_e = mti - y;
      }

      r = static_cast<real_T>(GNC2026W_DW.state_e) * 4.6566128752457969E-10;
    }
    break;

   case 5U:
    {
      uint32_T mti;
      uint32_T y;
      mti = 69069U * GNC2026W_DW.state_a[0] + 1234567U;
      y = GNC2026W_DW.state_a[1] << 13 ^ GNC2026W_DW.state_a[1];
      y ^= y >> 17;
      y ^= y << 5;
      GNC2026W_DW.state_a[0] = mti;
      GNC2026W_DW.state_a[1] = y;
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
          mti = GNC2026W_DW.state_kg[624] + 1U;
          if (GNC2026W_DW.state_kg[624] + 1U >= 625U) {
            for (int32_T kk = 0; kk < 227; kk++) {
              mti = (GNC2026W_DW.state_kg[kk + 1] & 2147483647U) |
                (GNC2026W_DW.state_kg[kk] & 2147483648U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              GNC2026W_DW.state_kg[kk] = GNC2026W_DW.state_kg[kk + 397] ^ mti;
            }

            for (int32_T kk = 0; kk < 396; kk++) {
              mti = (GNC2026W_DW.state_kg[kk + 227] & 2147483648U) |
                (GNC2026W_DW.state_kg[kk + 228] & 2147483647U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              GNC2026W_DW.state_kg[kk + 227] = GNC2026W_DW.state_kg[kk] ^ mti;
            }

            mti = (GNC2026W_DW.state_kg[623] & 2147483648U) |
              (GNC2026W_DW.state_kg[0] & 2147483647U);
            if ((mti & 1U) == 0U) {
              mti >>= 1U;
            } else {
              mti = mti >> 1U ^ 2567483615U;
            }

            GNC2026W_DW.state_kg[623] = GNC2026W_DW.state_kg[396] ^ mti;
            mti = 1U;
          }

          y = GNC2026W_DW.state_kg[static_cast<int32_T>(mti) - 1];
          GNC2026W_DW.state_kg[624] = mti;
          y ^= y >> 11U;
          y ^= y << 7U & 2636928640U;
          y ^= y << 15U & 4022730752U;
          b_u[k] = y >> 18U ^ y;
        }

        mti = b_u[0] >> 5U;
        y = b_u[1] >> 6U;
        if ((mti == 0U) && (y == 0U)) {
          boolean_T b_isvalid;
          b_isvalid = ((GNC2026W_DW.state_kg[624] >= 1U) &&
                       (GNC2026W_DW.state_kg[624] < 625U));
          if (b_isvalid) {
            boolean_T exitg2;
            b_isvalid = false;
            k = 1;
            exitg2 = false;
            while ((!exitg2) && (k < 625)) {
              if (GNC2026W_DW.state_kg[k - 1] == 0U) {
                k++;
              } else {
                b_isvalid = true;
                exitg2 = true;
              }
            }
          }

          if (!b_isvalid) {
            mti = 5489U;
            GNC2026W_DW.state_kg[0] = 5489U;
            for (k = 0; k < 623; k++) {
              mti = ((mti >> 30U ^ mti) * 1812433253U + static_cast<uint32_T>(k))
                + 1U;
              GNC2026W_DW.state_kg[k + 1] = mti;
            }

            GNC2026W_DW.state_kg[624] = 624U;
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

// Function for MATLAB Function: '<S363>/Dynamics Model'
static real_T GNC2026W_xzlangeM_g(const real_T x[36])
{
  real_T y;
  int32_T k;
  boolean_T exitg1;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 36)) {
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

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xzlascl_d(real_T cfrom, real_T cto, real_T A[36])
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

    for (int32_T i = 0; i < 36; i++) {
      A[i] *= mul;
    }
  }
}

// Function for MATLAB Function: '<S363>/Dynamics Model'
static real_T GNC2026W_xnrm2_l(int32_T n, const real_T x[36], int32_T ix0)
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

// Function for MATLAB Function: '<S363>/Dynamics Model'
static real_T GNC2026W_xdotc_a(int32_T n, const real_T x[36], int32_T ix0, const
  real_T y[36], int32_T iy0)
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

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xaxpy_b(int32_T n, real_T a, int32_T ix0, real_T y[36],
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

// Function for MATLAB Function: '<S363>/Dynamics Model'
static real_T GNC2026W_xnrm2_lu(int32_T n, const real_T x[6], int32_T ix0)
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

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xaxpy_ba(int32_T n, real_T a, const real_T x[36], int32_T
  ix0, real_T y[6], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }
}

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xaxpy_baj(int32_T n, real_T a, const real_T x[6], int32_T
  ix0, real_T y[36], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }
}

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xzlascl_dc(real_T cfrom, real_T cto, real_T A[6])
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

    for (int32_T i = 0; i < 6; i++) {
      A[i] *= mul;
    }
  }
}

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xswap_i(real_T x[36], int32_T ix0, int32_T iy0)
{
  for (int32_T k = 0; k < 6; k++) {
    real_T temp;
    int32_T temp_tmp;
    int32_T tmp;
    temp_tmp = (ix0 + k) - 1;
    temp = x[temp_tmp];
    tmp = (iy0 + k) - 1;
    x[temp_tmp] = x[tmp];
    x[tmp] = temp;
  }
}

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_xrot_i(real_T x[36], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
{
  for (int32_T k = 0; k < 6; k++) {
    real_T temp_tmp;
    real_T temp_tmp_0;
    int32_T temp_tmp_tmp;
    int32_T temp_tmp_tmp_0;
    temp_tmp_tmp = (iy0 + k) - 1;
    temp_tmp = x[temp_tmp_tmp];
    temp_tmp_tmp_0 = (ix0 + k) - 1;
    temp_tmp_0 = x[temp_tmp_tmp_0];
    x[temp_tmp_tmp] = temp_tmp * c - temp_tmp_0 * s;
    x[temp_tmp_tmp_0] = temp_tmp_0 * c + temp_tmp * s;
  }
}

// Function for MATLAB Function: '<S363>/Dynamics Model'
static void GNC2026W_svd_l(const real_T A[36], real_T U[36], real_T s[6], real_T
  V[36])
{
  real_T b_A[36];
  real_T b_s[6];
  real_T e[6];
  real_T work[6];
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
  int32_T i;
  int32_T qjj;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T doscale;
  boolean_T exitg1;
  memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    b_s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  memset(&U[0], 0, 36U * sizeof(real_T));
  memset(&V[0], 0, 36U * sizeof(real_T));
  doscale = false;
  anrm = GNC2026W_xzlangeM_g(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    GNC2026W_xzlascl_d(anrm, cscale, b_A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    GNC2026W_xzlascl_d(anrm, cscale, b_A);
  }

  for (i = 0; i < 5; i++) {
    qp1 = i + 2;
    qs = 6 * i + i;
    qq = qs + 1;
    apply_transform = false;
    nrm = GNC2026W_xnrm2_l(6 - i, b_A, qs + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qs] < 0.0) {
        nrm = -nrm;
      }

      b_s[i] = nrm;
      if (fabs(nrm) >= 1.0020841800044864E-292) {
        nrm = 1.0 / nrm;
        qjj = (qs - i) + 6;
        for (e_k = qq; e_k <= qjj; e_k++) {
          b_A[e_k - 1] *= nrm;
        }
      } else {
        qjj = (qs - i) + 6;
        for (e_k = qq; e_k <= qjj; e_k++) {
          b_A[e_k - 1] /= b_s[i];
        }
      }

      b_A[qs]++;
      b_s[i] = -b_s[i];
    } else {
      b_s[i] = 0.0;
    }

    for (qq = qp1; qq < 7; qq++) {
      qjj = (qq - 1) * 6 + i;
      if (apply_transform) {
        GNC2026W_xaxpy_b(6 - i, -(GNC2026W_xdotc_a(6 - i, b_A, qs + 1, b_A, qjj
          + 1) / b_A[qs]), qs + 1, b_A, qjj + 1);
      }

      e[qq - 1] = b_A[qjj];
    }

    for (qq = i + 1; qq < 7; qq++) {
      qs = (6 * i + qq) - 1;
      U[qs] = b_A[qs];
    }

    if (i + 1 <= 4) {
      nrm = GNC2026W_xnrm2_lu(5 - i, e, i + 2);
      if (nrm == 0.0) {
        e[i] = 0.0;
      } else {
        if (e[i + 1] < 0.0) {
          e[i] = -nrm;
        } else {
          e[i] = nrm;
        }

        nrm = e[i];
        if (fabs(e[i]) >= 1.0020841800044864E-292) {
          nrm = 1.0 / e[i];
          for (qq = qp1; qq < 7; qq++) {
            e[qq - 1] *= nrm;
          }
        } else {
          for (qq = qp1; qq < 7; qq++) {
            e[qq - 1] /= nrm;
          }
        }

        e[i + 1]++;
        e[i] = -e[i];
        for (qq = qp1; qq < 7; qq++) {
          work[qq - 1] = 0.0;
        }

        for (qq = qp1; qq < 7; qq++) {
          GNC2026W_xaxpy_ba(5 - i, e[qq - 1], b_A, (i + 6 * (qq - 1)) + 2, work,
                            i + 2);
        }

        for (qq = qp1; qq < 7; qq++) {
          GNC2026W_xaxpy_baj(5 - i, -e[qq - 1] / e[i + 1], work, i + 2, b_A, (i
            + 6 * (qq - 1)) + 2);
        }
      }

      for (qq = qp1; qq < 7; qq++) {
        V[(qq + 6 * i) - 1] = e[qq - 1];
      }
    }
  }

  i = 4;
  b_s[5] = b_A[35];
  e[4] = b_A[34];
  e[5] = 0.0;
  for (qp1 = 0; qp1 < 6; qp1++) {
    U[qp1 + 30] = 0.0;
  }

  U[35] = 1.0;
  for (qp1 = 4; qp1 >= 0; qp1--) {
    qq = 6 * qp1 + qp1;
    if (b_s[qp1] != 0.0) {
      for (qs = qp1 + 2; qs < 7; qs++) {
        qjj = ((qs - 1) * 6 + qp1) + 1;
        GNC2026W_xaxpy_b(6 - qp1, -(GNC2026W_xdotc_a(6 - qp1, U, qq + 1, U, qjj)
          / U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1 + 1; qjj < 7; qjj++) {
        qs = (6 * qp1 + qjj) - 1;
        U[qs] = -U[qs];
      }

      U[qq]++;
      for (qq = 0; qq < qp1; qq++) {
        U[qq + 6 * qp1] = 0.0;
      }
    } else {
      for (qs = 0; qs < 6; qs++) {
        U[qs + 6 * qp1] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (qp1 = 5; qp1 >= 0; qp1--) {
    if ((qp1 + 1 <= 4) && (e[qp1] != 0.0)) {
      qq = (6 * qp1 + qp1) + 2;
      for (qs = qp1 + 2; qs < 7; qs++) {
        qjj = ((qs - 1) * 6 + qp1) + 2;
        GNC2026W_xaxpy_b(5 - qp1, -(GNC2026W_xdotc_a(5 - qp1, V, qq, V, qjj) /
          V[qq - 1]), qq, V, qjj);
      }
    }

    for (qq = 0; qq < 6; qq++) {
      V[qq + 6 * qp1] = 0.0;
    }

    V[qp1 + 6 * qp1] = 1.0;
  }

  qp1 = 0;
  nrm = 0.0;
  for (qq = 0; qq < 6; qq++) {
    r = b_s[qq];
    if (r != 0.0) {
      rt = fabs(r);
      r /= rt;
      b_s[qq] = rt;
      if (qq + 1 < 6) {
        e[qq] /= r;
      }

      qs = 6 * qq + 1;
      for (qjj = qs; qjj <= qs + 5; qjj++) {
        U[qjj - 1] *= r;
      }
    }

    if (qq + 1 < 6) {
      r = e[qq];
      if (r != 0.0) {
        rt = fabs(r);
        r = rt / r;
        e[qq] = rt;
        b_s[qq + 1] *= r;
        qs = (qq + 1) * 6 + 1;
        for (qjj = qs; qjj <= qs + 5; qjj++) {
          V[qjj - 1] *= r;
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

  while ((i + 2 > 0) && (qp1 < 75)) {
    qq = i + 1;
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

    if (i + 1 == qq) {
      qjj = 4;
    } else {
      qs = i + 2;
      qjj = i + 2;
      exitg1 = false;
      while ((!exitg1) && (qjj >= qq)) {
        qs = qjj;
        if (qjj == qq) {
          exitg1 = true;
        } else {
          rt = 0.0;
          if (qjj < i + 2) {
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
      } else if (i + 2 == qs) {
        qjj = 1;
      } else {
        qjj = 2;
        qq = qs;
      }
    }

    switch (qjj) {
     case 1:
      rt = e[i];
      e[i] = 0.0;
      for (qs = i + 1; qs >= qq + 1; qs--) {
        GNC2026W_xrotg_b(&b_s[qs - 1], &rt, &sqds, &smm1);
        if (qs > qq + 1) {
          r = e[qs - 2];
          rt = -smm1 * r;
          e[qs - 2] = r * sqds;
        }

        GNC2026W_xrot_i(V, 6 * (qs - 1) + 1, 6 * (i + 1) + 1, sqds, smm1);
      }
      break;

     case 2:
      rt = e[qq - 1];
      e[qq - 1] = 0.0;
      for (qs = qq + 1; qs <= i + 2; qs++) {
        GNC2026W_xrotg_b(&b_s[qs - 1], &rt, &sqds, &smm1);
        r = e[qs - 1];
        rt = -smm1 * r;
        e[qs - 1] = r * sqds;
        GNC2026W_xrot_i(U, 6 * (qs - 1) + 1, 6 * (qq - 1) + 1, sqds, smm1);
      }
      break;

     case 3:
      sqds = b_s[i + 1];
      r = fabs(sqds);
      rt = fabs(b_s[i]);
      if ((r >= rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[i]);
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
      smm1 = b_s[i] / r;
      emm1 = e[i] / r;
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
      for (e_k = qq + 1; e_k <= i + 1; e_k++) {
        GNC2026W_xrotg_b(&rt, &r, &sqds, &smm1);
        if (e_k > qq + 1) {
          e[e_k - 2] = rt;
        }

        r = e[e_k - 1];
        emm1 = b_s[e_k - 1];
        e[e_k - 1] = r * sqds - emm1 * smm1;
        rt = smm1 * b_s[e_k];
        b_s[e_k] *= sqds;
        qs = (e_k - 1) * 6 + 1;
        qjj = 6 * e_k + 1;
        GNC2026W_xrot_i(V, qs, qjj, sqds, smm1);
        b_s[e_k - 1] = emm1 * sqds + r * smm1;
        GNC2026W_xrotg_b(&b_s[e_k - 1], &rt, &sqds, &smm1);
        emm1 = e[e_k - 1];
        rt = emm1 * sqds + smm1 * b_s[e_k];
        b_s[e_k] = emm1 * -smm1 + sqds * b_s[e_k];
        r = smm1 * e[e_k];
        e[e_k] *= sqds;
        GNC2026W_xrot_i(U, qs, qjj, sqds, smm1);
      }

      e[i] = rt;
      qp1++;
      break;

     default:
      if (b_s[qq] < 0.0) {
        b_s[qq] = -b_s[qq];
        qp1 = 6 * qq + 1;
        for (qs = qp1; qs <= qp1 + 5; qs++) {
          V[qs - 1] = -V[qs - 1];
        }
      }

      qp1 = qq + 1;
      while ((qq + 1 < 6) && (b_s[qq] < b_s[qp1])) {
        rt = b_s[qq];
        b_s[qq] = b_s[qp1];
        b_s[qp1] = rt;
        qs = 6 * qq + 1;
        qjj = (qq + 1) * 6 + 1;
        GNC2026W_xswap_i(V, qs, qjj);
        GNC2026W_xswap_i(U, qs, qjj);
        qq = qp1;
        qp1++;
      }

      qp1 = 0;
      i--;
      break;
    }
  }

  for (i = 0; i < 6; i++) {
    s[i] = b_s[i];
  }

  if (doscale) {
    GNC2026W_xzlascl_dc(cscale, anrm, s);
  }
}

// Function for MATLAB Function: '<S222>/Unscented Kalman Filter'
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

// Function for MATLAB Function: '<S222>/Unscented Kalman Filter'
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

// Function for MATLAB Function: '<S220>/EKF'
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

// Function for MATLAB Function: '<S220>/EKF'
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

// Function for MATLAB Function: '<S220>/EKF'
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
  //   ActionPort: '<S219>/Action Port'

  // Outputs for IfAction SubSystem: '<S219>/EKF' incorporates:
  //   ActionPort: '<S220>/Action Port'

  // If: '<S219>/If' incorporates:
  //   If: '<S9>/Experiment Sub-Phases'
  //   MATLAB Function: '<S220>/EKF'

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

  // End of If: '<S219>/If'
  // End of Outputs for SubSystem: '<S219>/EKF'
  // End of Outputs for SubSystem: '<S9>/If Action Subsystem'
}

// Function for MATLAB Function: '<S220>/EKF'
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

// Function for MATLAB Function: '<S262>/CV Noise'
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
      mti = 69069U * GNC2026W_DW.state_j[0] + 1234567U;
      y = GNC2026W_DW.state_j[1] << 13 ^ GNC2026W_DW.state_j[1];
      y ^= y >> 17;
      y ^= y << 5;
      GNC2026W_DW.state_j[0] = mti;
      GNC2026W_DW.state_j[1] = y;
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
          mti = GNC2026W_DW.state_k[624] + 1U;
          if (GNC2026W_DW.state_k[624] + 1U >= 625U) {
            for (int32_T kk = 0; kk < 227; kk++) {
              mti = (GNC2026W_DW.state_k[kk + 1] & 2147483647U) |
                (GNC2026W_DW.state_k[kk] & 2147483648U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              GNC2026W_DW.state_k[kk] = GNC2026W_DW.state_k[kk + 397] ^ mti;
            }

            for (int32_T kk = 0; kk < 396; kk++) {
              mti = (GNC2026W_DW.state_k[kk + 227] & 2147483648U) |
                (GNC2026W_DW.state_k[kk + 228] & 2147483647U);
              if ((mti & 1U) == 0U) {
                mti >>= 1U;
              } else {
                mti = mti >> 1U ^ 2567483615U;
              }

              GNC2026W_DW.state_k[kk + 227] = GNC2026W_DW.state_k[kk] ^ mti;
            }

            mti = (GNC2026W_DW.state_k[623] & 2147483648U) |
              (GNC2026W_DW.state_k[0] & 2147483647U);
            if ((mti & 1U) == 0U) {
              mti >>= 1U;
            } else {
              mti = mti >> 1U ^ 2567483615U;
            }

            GNC2026W_DW.state_k[623] = GNC2026W_DW.state_k[396] ^ mti;
            mti = 1U;
          }

          y = GNC2026W_DW.state_k[static_cast<int32_T>(mti) - 1];
          GNC2026W_DW.state_k[624] = mti;
          y ^= y >> 11U;
          y ^= y << 7U & 2636928640U;
          y ^= y << 15U & 4022730752U;
          b_u[k] = y >> 18U ^ y;
        }

        mti = b_u[0] >> 5U;
        y = b_u[1] >> 6U;
        if ((mti == 0U) && (y == 0U)) {
          boolean_T b_isvalid;
          b_isvalid = ((GNC2026W_DW.state_k[624] >= 1U) && (GNC2026W_DW.state_k
            [624] < 625U));
          if (b_isvalid) {
            boolean_T exitg2;
            b_isvalid = false;
            k = 1;
            exitg2 = false;
            while ((!exitg2) && (k < 625)) {
              if (GNC2026W_DW.state_k[k - 1] == 0U) {
                k++;
              } else {
                b_isvalid = true;
                exitg2 = true;
              }
            }
          }

          if (!b_isvalid) {
            mti = 5489U;
            GNC2026W_DW.state_k[0] = 5489U;
            for (k = 0; k < 623; k++) {
              mti = ((mti >> 30U ^ mti) * 1812433253U + static_cast<uint32_T>(k))
                + 1U;
              GNC2026W_DW.state_k[k + 1] = mti;
            }

            GNC2026W_DW.state_k[624] = 624U;
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

  {
    real_T b_u1[151];
    real_T Fi[78];
    real_T Xi_pre[78];
    real_T y[64];
    real_T h[39];
    real_T InertiaS[36];
    real_T InertiaS_0[36];
    real_T InertiaS_1[36];
    real_T S_minus[36];
    real_T S_pre[36];
    real_T V_0[36];
    real_T b_0[24];
    real_T rtb_H[24];
    real_T K_0[18];
    real_T K_1[18];
    real_T Ks_data[18];
    real_T P_xy[18];
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
    real_T AccelerationtoVelocity_g[6];
    real_T tmp[6];
    real_T tmp_0[6];
    real_T C_Ib[4];
    real_T C_bI[4];
    real_T K[3];
    real_T LARstates_REL[3];
    real_T rtb_TmpSignalConversionAtSFu_fp[3];
    real_T x_minus[3];
    real_T BLACK_Exp_Noise;
    real_T absx;
    real_T q;
    real_T rtb_TSamp_ao;
    real_T rtb_TSamp_dm;
    real_T rtb_TSamp_eu;
    real_T rtb_TSamp_of;
    real_T sampleTime;
    real_T sampleTime_0;
    real_T sampleTime_1;
    real_T t105;
    real_T t106;
    real_T t110;
    real_T t111;
    real_T t112;
    real_T t113;
    real_T t115;
    real_T t116;
    real_T t12;
    real_T t122;
    real_T t128;
    real_T t14;
    real_T t15;
    real_T t16;
    real_T t17;
    real_T t2;
    real_T t21;
    real_T t22;
    real_T t23;
    real_T t24;
    real_T t25;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t30;
    real_T t33;
    real_T t34;
    real_T t35;
    real_T t37;
    real_T t45;
    real_T t46;
    real_T t50;
    real_T t56;
    real_T t59;
    real_T t61;
    real_T t63;
    real_T t64;
    real_T t65;
    real_T t66;
    real_T t68;
    real_T t71;
    real_T t72;
    real_T t74;
    real_T t75;
    real_T t76;
    real_T t79;
    real_T t80;
    real_T t81;
    real_T t82;
    real_T t87_tmp;
    real_T t97;
    real_T t99;
    int32_T ar;
    int32_T b_boffset;
    int32_T br;
    int32_T c;
    int32_T e_coffset;
    int32_T i;
    int32_T newMeas;
    int32_T r;
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
    boolean_T rtb_RelationalOperator_lm[3];
    boolean_T rEQ0;
    static const int8_T a[3] = { 1, 0, 0 };

    static const real_T c_0[9] = { 0.001, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0,
      0.001 };

    static const int8_T b_1[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

    static const int8_T c_1[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

    static const int8_T cb[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

    static const int8_T db[18] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,
      0, 0, 1 };

    static const int8_T b_a[18] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
      0, 0, 1 };

    static const real_T a_0[9] = { 1.0E-8, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0,
      1.0E-8 };

    static const real_T Q[36] = { 1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-10,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-10, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0E-10 };

    static const int8_T c_a[18] = { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
      0, 0, 0 };

    static const real_T a_1[36] = { 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-8
    };

    static const int8_T eb[18] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
      0, 1, 0 };

    static const real_T fb[9] = { 0.005, 0.0, 0.0, 0.0, 0.005, 0.0, 0.0, 0.0,
      0.005 };

    static const int8_T c_2[6] = { 0, 0, 1, 0, 0, 0 };

    static const real_T b_b[9] = { 0.0001, 0.0, 0.0, 0.0, 0.0001, 0.0, 0.0, 0.0,
      0.005 };

    real_T q_tmp;
    real_T rtb_TSamp_jy_tmp;
    real_T rtb_TSamp_jy_tmp_0;
    real_T t113_tmp;
    real_T t115_tmp;
    real_T t12_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T t15_tmp_0;
    real_T t22_tmp;
    real_T t2_tmp;
    real_T t50_tmp;
    real_T t50_tmp_tmp;
    real_T t59_tmp;
    real_T t61_tmp;
    real_T t63_tmp;
    real_T t97_tmp;
    real_T t97_tmp_0;
    real_T t97_tmp_1;
    real_T t99_tmp;
    real_T t99_tmp_0;
    real_T t99_tmp_1;
    real_T t99_tmp_2;
    real_T t99_tmp_3;
    real_T t99_tmp_4;
    int32_T Ks_size[2];
    int32_T R_new_size[2];
    int32_T b_size[2];
    int32_T b_size_0[2];
    int32_T b_y_size[2];
    int32_T y_size[2];
    int32_T d_size_idx_0;
    boolean_T exitg1;

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.Phase0Synchronization.Phase0Synchronization_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.Phase2InitialPosition_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SubPhase1_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.IfActionSubsystem_a.IfActionSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SubPhase2_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SubPhase3_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SubPhase4_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.Phase3Experiment_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.Phase4ReturnHome.Phase4ReturnHome_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_o);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.CustomPPLRED_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisablePPLRED_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.CustomPPLBLACK_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisablePPLBLACK_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.CustomPPLBLUE_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisablePPLBLUE_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.CustomPPLARM_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisablePPLARM_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultPDControlRED_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultLQRControlRED_SubsysRanB);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.CustomControlRED_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisableThrustersRED.DisableThrustersRED_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultPDControlBLACK_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultLQRControlBLACK_SubsysRa);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisableThrustersBLACK.DisableThrustersBLACK_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultPDControlBLUE_SubsysRanB);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultLQRControlBLUE_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SimulatedPositionController_Sub);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.PassthroughforExperiment_Subsys);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DefaultPDARM_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.DisableControlARM_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLACKBehavior.ChangeBLACKBehavior_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLACKBehavior_SubsysRan_p);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLUEBehavior_SubsysRanB_l);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeREDBehavior_SubsysRanBC_m);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnablePucks_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_m.EnabledSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_b.EnabledSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_c);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_bo);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_p);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_b);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_d);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_h);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_l);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanB_g4);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_b);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanB_bb);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.REDARM_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_p);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_n);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanB_mm);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.REDOnly_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SimulatePlantDynamics_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeARMBehavior_SubsysRanBC_b);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ArtificialVISStates_SubsysRan_g);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ExperimentalVISStates.IfActionSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ExperimentalVISStates.IfActionSubsystem1_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ExperimentalVISStates.ExperimentalVISStates_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.UKF_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ArtificialVISStates_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.MEKF_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EKF_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.IfActionSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem2_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLACKBehavior_e.ChangeBLACKBehavior_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanB_gf);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ArtificialisValidFlag_SubsysRan);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_g);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.UseHardwaretoObtainStates_Subsy);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.InitializeUniversalTimeSimulati);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.Subsystem_SubsysRanBC_d);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ReadingisValid_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.CVUDP_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ROBUDP_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SimulatedFlag_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeARMBehavior_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.Subsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.SENDROBUDP_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_m);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_m);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_c);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_b);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeREDBehavior_SubsysRanBC);

    // Reset subsysRan breadcrumbs
    srClearBC(GNC2026W_DW.ChangeBLACKBehavior_i.ChangeBLACKBehavior_SubsysRanBC);

    // RandomNumber: '<Root>/Gaussian Noise' incorporates:
    //   DataStoreWrite: '<Root>/Data Store Write'

    BLACK_Exp_Noise = GNC2026W_DW.NextOutput;

    // MATLABSystem: '<Root>/Dropped Frames'
    if (GNC2026W_DW.obj_fv.TunablePropsChanged) {
      GNC2026W_DW.obj_fv.TunablePropsChanged = false;
    }

    GNC2026W_rand();

    // End of MATLABSystem: '<Root>/Dropped Frames'

    // If: '<S2>/If3' incorporates:
    //   DataStoreRead: '<S2>/Data Store Read2'

    if (GNC2026W_DW.ARM_Path_Planner_Selection == 2.0) {
      // Update for IfAction SubSystem: '<S2>/Custom PPL (ARM)' incorporates:
      //   ActionPort: '<S127>/Action Port'

      // Update for If: '<S2>/If3'
      srUpdateBC(GNC2026W_DW.CustomPPLARM_SubsysRanBC);

      // End of Update for SubSystem: '<S2>/Custom PPL (ARM)'
    } else {
      // Update for IfAction SubSystem: '<S2>/Disable PPL (ARM)' incorporates:
      //   ActionPort: '<S131>/Action Port'

      // Update for If: '<S2>/If3'
      srUpdateBC(GNC2026W_DW.DisablePPLARM_SubsysRanBC);

      // End of Update for SubSystem: '<S2>/Disable PPL (ARM)'
    }

    // End of If: '<S2>/If3'

    // If: '<S2>/If1' incorporates:
    //   DataStoreRead: '<S2>/Data Store Read1'

    if (GNC2026W_DW.BLACK_Path_Planner_Selection == 1.0) {
      // Update for IfAction SubSystem: '<S2>/Custom PPL (BLACK)' incorporates:
      //   ActionPort: '<S128>/Action Port'

      // Update for If: '<S2>/If1'
      srUpdateBC(GNC2026W_DW.CustomPPLBLACK_SubsysRanBC);

      // End of Update for SubSystem: '<S2>/Custom PPL (BLACK)'
    } else {
      // Update for IfAction SubSystem: '<S2>/Disable PPL (BLACK)' incorporates:
      //   ActionPort: '<S132>/Action Port'

      // Update for If: '<S2>/If1'
      srUpdateBC(GNC2026W_DW.DisablePPLBLACK_SubsysRanBC);

      // End of Update for SubSystem: '<S2>/Disable PPL (BLACK)'
    }

    // End of If: '<S2>/If1'

    // If: '<S2>/If2' incorporates:
    //   DataStoreRead: '<S2>/Data Store Read3'

    if (GNC2026W_DW.BLUE_Path_Planner_Selection == 2.0) {
      // Update for IfAction SubSystem: '<S2>/Custom PPL (BLUE)' incorporates:
      //   ActionPort: '<S129>/Action Port'

      // Update for If: '<S2>/If2'
      srUpdateBC(GNC2026W_DW.CustomPPLBLUE_SubsysRanBC);

      // End of Update for SubSystem: '<S2>/Custom PPL (BLUE)'
    } else {
      // Update for IfAction SubSystem: '<S2>/Disable PPL (BLUE)' incorporates:
      //   ActionPort: '<S133>/Action Port'

      // Update for If: '<S2>/If2'
      srUpdateBC(GNC2026W_DW.DisablePPLBLUE_SubsysRanBC);

      // End of Update for SubSystem: '<S2>/Disable PPL (BLUE)'
    }

    // End of If: '<S2>/If2'

    // If: '<S2>/If' incorporates:
    //   DataStoreRead: '<S138>/Data Store Read1'
    //   DataStoreRead: '<S2>/Data Store Read'
    //   Logic: '<S138>/NOT'

    if (GNC2026W_DW.RED_Path_Planner_Selection == 1.0) {
      // Outputs for IfAction SubSystem: '<S2>/Custom PPL (RED)' incorporates:
      //   ActionPort: '<S130>/Action Port'

      // MATLAB Function: '<S130>/MATLAB Function4' incorporates:
      //   DataStoreRead: '<S130>/Data Store Read'
      //   DataStoreRead: '<S130>/Data Store Read5'
      //   MATLAB Function: '<S130>/LOS Calculation'

      rtb_TSamp_dm = cos(GNC2026W_DW.BLACK_Filtered_States[2]);
      GNC2026W_B.q_des[0] = GNC2026W_DW.L0 * rtb_TSamp_dm +
        GNC2026W_DW.BLACK_Filtered_States[0];
      q = sin(GNC2026W_DW.BLACK_Filtered_States[2]);
      GNC2026W_B.q_des[1] = GNC2026W_DW.L0 * q +
        GNC2026W_DW.BLACK_Filtered_States[1];
      GNC2026W_B.q_des[2] = GNC2026W_DW.BLACK_Filtered_States[2] +
        3.1415926535897931;
      rtb_TSamp_of = GNC2026W_DW.L0 * GNC2026W_DW.BLACK_Filtered_States[5];
      GNC2026W_B.q_des[3] = GNC2026W_DW.BLACK_Filtered_States[3] - rtb_TSamp_of *
        q;
      GNC2026W_B.q_des[4] = rtb_TSamp_of * rtb_TSamp_dm +
        GNC2026W_DW.BLACK_Filtered_States[4];
      GNC2026W_B.q_des[5] = GNC2026W_DW.BLACK_Filtered_States[5];
      rtb_TSamp_of = GNC2026W_DW.BLACK_Filtered_States[5] *
        GNC2026W_DW.BLACK_Filtered_States[5] * GNC2026W_DW.L0;
      GNC2026W_B.q_des[6] = (0.0 - 0.0 * GNC2026W_DW.L0 * q) - rtb_TSamp_of *
        rtb_TSamp_dm;
      GNC2026W_B.q_des[7] = 0.0 * GNC2026W_DW.L0 * rtb_TSamp_dm - rtb_TSamp_of *
        q;
      GNC2026W_B.q_des[8] = 0.0;

      // Outputs for Enabled SubSystem: '<S138>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S142>/Enable'

      if (!(GNC2026W_DW.ARM_Grab_Complete != 0.0)) {
        // SignalConversion generated from: '<S142>/In1'
        GNC2026W_B.In1_g20asdtg[0] = GNC2026W_B.q_des[0];
        GNC2026W_B.In1_g20asdtg[1] = GNC2026W_B.q_des[1];
        GNC2026W_B.In1_g20asdtg[2] = GNC2026W_B.q_des[2];
        srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_o);
      }

      // End of Outputs for SubSystem: '<S138>/Enabled Subsystem'

      // DataStoreWrite: '<S130>/Data Store Write' incorporates:
      //   DataStoreRead: '<S138>/Data Store Read1'
      //   Logic: '<S138>/NOT'

      GNC2026W_DW.RED_desired[0] = GNC2026W_B.In1_g20asdtg[0];
      GNC2026W_DW.RED_desired[1] = GNC2026W_B.In1_g20asdtg[1];
      GNC2026W_DW.RED_desired[2] = GNC2026W_B.In1_g20asdtg[2];
      for (i = 0; i < 6; i++) {
        // Switch: '<S138>/Switch' incorporates:
        //   Constant: '<S138>/Constant'

        if (GNC2026W_DW.ARM_Grab_Complete > GNC2026W_P.Switch_Threshold) {
          GNC2026W_DW.RED_desired[i + 3] = GNC2026W_P.Constant_Value_a5[i];
        } else {
          GNC2026W_DW.RED_desired[i + 3] = GNC2026W_B.q_des[i + 3];
        }

        // End of Switch: '<S138>/Switch'
      }

      // End of DataStoreWrite: '<S130>/Data Store Write'

      // MATLAB Function: '<S143>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S130>/Data Store Read3'
      //   Delay: '<S143>/Delay'
      //   Delay: '<S143>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_h0, GNC2026W_DW.Delay1_DSTATE_lo,
        &GNC2026W_DW.Delay1_DSTATE_lo, &GNC2026W_DW.Delay_DSTATE_h0,
        &GNC2026W_DW.sf_MATLABFunction_n);

      // SignalConversion generated from: '<S139>/ SFunction ' incorporates:
      //   DataStoreRead: '<S130>/Data Store Read3'
      //   Delay: '<S143>/Delay1'
      //   MATLAB Function: '<S130>/LOS Calculation'

      rtb_TmpSignalConversionAtSFu_fp[0] = GNC2026W_DW.RED_Measured_States[0];
      rtb_TmpSignalConversionAtSFu_fp[1] = GNC2026W_DW.RED_Measured_States[1];
      rtb_TmpSignalConversionAtSFu_fp[2] = GNC2026W_DW.Delay1_DSTATE_lo;

      // MATLAB Function: '<S130>/LOS Calculation' incorporates:
      //   DataStoreRead: '<S130>/Data Store Read2'
      //   DataStoreRead: '<S130>/Data Store Read3'
      //   DataStoreWrite: '<S130>/Data Store Write1'
      //   Delay: '<S143>/Delay1'
      //   SignalConversion generated from: '<S139>/ SFunction '

      rtb_TSamp_of = sin(GNC2026W_DW.Delay1_DSTATE_lo);
      rtb_TSamp_ao = cos(GNC2026W_DW.Delay1_DSTATE_lo);
      rtb_TSamp_eu = ((rtb_TSamp_dm * 0.145 + -q * 0.0) +
                      GNC2026W_DW.BLACK_Filtered_States[0]) -
        GNC2026W_DW.RED_Measured_States[0];
      rtb_TSamp_dm = ((q * 0.145 + rtb_TSamp_dm * 0.0) +
                      GNC2026W_DW.BLACK_Filtered_States[1]) -
        GNC2026W_DW.RED_Measured_States[1];
      GNC2026W_DW.LOS_Angle = (-rtb_TSamp_of * rtb_TSamp_eu + rtb_TSamp_ao *
        rtb_TSamp_dm) / (rtb_TSamp_ao * rtb_TSamp_eu + rtb_TSamp_of *
                         rtb_TSamp_dm);
      GNC2026W_DW.LOS_Angle = atan(GNC2026W_DW.LOS_Angle);

      // DataStoreWrite: '<S2>/Data Store Write' incorporates:
      //   Merge: '<S3>/Merge6'
      //   SignalConversion generated from: '<S130>/Path'
      //   SignalConversion generated from: '<S142>/In1'

      GNC2026W_B.DataStoreRead3[0] = GNC2026W_B.In1_g20asdtg[0];
      GNC2026W_B.DataStoreRead3[1] = GNC2026W_B.In1_g20asdtg[1];
      GNC2026W_B.DataStoreRead3[2] = GNC2026W_B.In1_g20asdtg[2];
      srUpdateBC(GNC2026W_DW.CustomPPLRED_SubsysRanBC);

      // End of Outputs for SubSystem: '<S2>/Custom PPL (RED)'
    } else {
      // Outputs for IfAction SubSystem: '<S2>/Disable PPL (RED)' incorporates:
      //   ActionPort: '<S134>/Action Port'

      // DataStoreWrite: '<S2>/Data Store Write' incorporates:
      //   DataStoreRead: '<S148>/RED_Px'
      //   Merge: '<S3>/Merge6'

      GNC2026W_B.DataStoreRead3[0] = GNC2026W_DW.RED_Desired_States[0];
      GNC2026W_B.DataStoreRead3[1] = GNC2026W_DW.RED_Desired_States[1];
      GNC2026W_B.DataStoreRead3[2] = GNC2026W_DW.RED_Desired_States[2];
      srUpdateBC(GNC2026W_DW.DisablePPLRED_SubsysRanBC);

      // End of Outputs for SubSystem: '<S2>/Disable PPL (RED)'
    }

    // End of If: '<S2>/If'

    // If: '<S3>/If1' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read3'

    if (GNC2026W_DW.BLACK_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' incorporates:
      //   ActionPort: '<S155>/Action Port'

      // MATLAB Function: '<S192>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read1'
      //   DataStoreRead: '<S155>/Data Store Read13'

      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLACK_Desired_States[2],
        GNC2026W_DW.BLACK_Measured_States[2], &rtb_TSamp_of,
        &GNC2026W_DW.sf_MATLABFunction_de);

      // SampleTimeMath: '<S193>/TSamp' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read1'
      //
      //  About '<S193>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ao = GNC2026W_DW.BLACK_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_i;

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

      GNC2026W_DW.UD_DSTATE_eh = rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_eh;

      // SampleTimeMath: '<S194>/TSamp' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read1'
      //
      //  About '<S194>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_eu = GNC2026W_DW.BLACK_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_hr;

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

      GNC2026W_DW.UD_DSTATE_hv = rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_hv;

      // SampleTimeMath: '<S195>/TSamp' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read1'
      //
      //  About '<S195>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_dm = GNC2026W_DW.BLACK_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_ca;

      // Sum: '<S195>/Diff' incorporates:
      //   UnitDelay: '<S195>/UD'
      //
      //  Block description for '<S195>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S195>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = rtb_TSamp_dm - GNC2026W_DW.UD_DSTATE_kv;

      // Sum: '<S155>/Subtract7' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read13'
      //   UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = GNC2026W_DW.BLACK_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_eh;

      // Sum: '<S155>/Subtract6' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read13'
      //   UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = GNC2026W_DW.BLACK_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_hv;

      // Sum: '<S155>/Subtract8' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read13'
      //   UnitDelay: '<S195>/UD'
      //
      //  Block description for '<S195>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = GNC2026W_DW.BLACK_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_kv;

      // Gain: '<S155>/Gain6' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read1'
      //   DataStoreRead: '<S155>/Data Store Read13'
      //   Gain: '<S155>/Gain'
      //   Gain: '<S155>/Gain3'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S155>/Subtract5'
      //   Sum: '<S155>/Sum'
      //   UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[0] = ((GNC2026W_DW.BLACK_Measured_States[0] -
        GNC2026W_DW.BLACK_Desired_States[0]) * GNC2026W_P.Kp_xb +
        GNC2026W_P.Kd_xb * GNC2026W_DW.UD_DSTATE_eh) * GNC2026W_P.Gain6_Gain_g;

      // Gain: '<S155>/Gain7' incorporates:
      //   DataStoreRead: '<S155>/Data Store Read1'
      //   DataStoreRead: '<S155>/Data Store Read13'
      //   Gain: '<S155>/Gain1'
      //   Gain: '<S155>/Gain4'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S155>/Subtract4'
      //   Sum: '<S155>/Sum1'
      //   UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[1] = ((GNC2026W_DW.BLACK_Measured_States[1] -
        GNC2026W_DW.BLACK_Desired_States[1]) * GNC2026W_P.Kp_yb +
        GNC2026W_P.Kd_yb * GNC2026W_DW.UD_DSTATE_hv) * GNC2026W_P.Gain7_Gain_b;

      // Gain: '<S155>/Gain8' incorporates:
      //   Gain: '<S155>/Gain2'
      //   Gain: '<S155>/Gain5'
      //   Merge: '<S3>/Merge1'
      //   Sum: '<S155>/Sum2'
      //   UnitDelay: '<S195>/UD'
      //
      //  Block description for '<S195>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge1[2] = (GNC2026W_P.Kp_tb * rtb_TSamp_of + GNC2026W_P.Kd_tb
        * GNC2026W_DW.UD_DSTATE_kv) * GNC2026W_P.Gain8_Gain_m;

      // Update for UnitDelay: '<S193>/UD'
      //
      //  Block description for '<S193>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eh = rtb_TSamp_ao;

      // Update for UnitDelay: '<S194>/UD'
      //
      //  Block description for '<S194>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hv = rtb_TSamp_eu;

      // Update for UnitDelay: '<S195>/UD'
      //
      //  Block description for '<S195>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_kv = rtb_TSamp_dm;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLACK)'

      // Update for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' incorporates:
      //   ActionPort: '<S155>/Action Port'

      // Update for If: '<S3>/If1'
      srUpdateBC(GNC2026W_DW.DefaultPDControlBLACK_SubsysRan);

      // End of Update for SubSystem: '<S3>/Default PD Control (BLACK)'
    } else if (GNC2026W_DW.BLACK_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' incorporates:
      //   ActionPort: '<S151>/Action Port'

      // Product: '<S151>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   MATLAB Function: '<S169>/MATLAB Function'

      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLACK_Desired_States[2],
        GNC2026W_DW.BLACK_Measured_States[2], &AccelerationtoVelocity_g[2],
        &GNC2026W_DW.sf_MATLABFunction_c);

      // SampleTimeMath: '<S170>/TSamp' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //
      //  About '<S170>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_of = GNC2026W_DW.BLACK_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_nd;

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

      GNC2026W_DW.UD_DSTATE_j = rtb_TSamp_of - GNC2026W_DW.UD_DSTATE_j;

      // SampleTimeMath: '<S171>/TSamp' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //
      //  About '<S171>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ao = GNC2026W_DW.BLACK_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_co;

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

      GNC2026W_DW.UD_DSTATE_c = rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_c;

      // SampleTimeMath: '<S172>/TSamp' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //
      //  About '<S172>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_eu = GNC2026W_DW.BLACK_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_no;

      // Sum: '<S172>/Diff' incorporates:
      //   UnitDelay: '<S172>/UD'
      //
      //  Block description for '<S172>/Diff':
      //
      //   Add in CPU
      //
      //  Block description for '<S172>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_dk = rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_dk;

      // Sum: '<S151>/Subtract7' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   UnitDelay: '<S170>/UD'
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_j = GNC2026W_DW.BLACK_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_j;

      // Sum: '<S151>/Subtract6' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   UnitDelay: '<S171>/UD'
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_c = GNC2026W_DW.BLACK_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_c;

      // Sum: '<S151>/Subtract8' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   UnitDelay: '<S172>/UD'
      //
      //  Block description for '<S172>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_dk = GNC2026W_DW.BLACK_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_dk;
      for (newMeas = 0; newMeas < 18; newMeas++) {
        // Product: '<S151>/Matrix Multiply' incorporates:
        //   Constant: '<S151>/Constant2'

        P_xy[newMeas] = -GNC2026W_P.K_BLACK[newMeas];
      }

      // Product: '<S151>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S151>/Data Store Read1'
      //   DataStoreRead: '<S151>/Data Store Read13'
      //   Reshape: '<S151>/Reshape1'
      //   Reshape: '<S151>/Reshape3'
      //   Sum: '<S151>/Subtract4'
      //   Sum: '<S151>/Subtract5'
      //   UnitDelay: '<S170>/UD'
      //   UnitDelay: '<S171>/UD'
      //   UnitDelay: '<S172>/UD'
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM
      //
      //  Block description for '<S172>/UD':
      //
      //   Store in Global RAM

      AccelerationtoVelocity_g[0] = GNC2026W_DW.BLACK_Measured_States[0] -
        GNC2026W_DW.BLACK_Desired_States[0];
      AccelerationtoVelocity_g[1] = GNC2026W_DW.BLACK_Measured_States[1] -
        GNC2026W_DW.BLACK_Desired_States[1];
      AccelerationtoVelocity_g[3] = GNC2026W_DW.UD_DSTATE_j;
      AccelerationtoVelocity_g[4] = GNC2026W_DW.UD_DSTATE_c;
      AccelerationtoVelocity_g[5] = GNC2026W_DW.UD_DSTATE_dk;
      for (newMeas = 0; newMeas < 3; newMeas++) {
        // Product: '<S151>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge1'

        rtb_TSamp_dm = 0.0;
        for (i = 0; i < 6; i++) {
          // Merge: '<S3>/Merge1' incorporates:
          //   Product: '<S151>/Matrix Multiply'
          //   Reshape: '<S151>/Reshape4'

          rtb_TSamp_dm += P_xy[3 * i + newMeas] * AccelerationtoVelocity_g[i];
        }

        // Merge: '<S3>/Merge1' incorporates:
        //   Product: '<S151>/Matrix Multiply'

        GNC2026W_B.Merge1[newMeas] = rtb_TSamp_dm;
      }

      // Update for UnitDelay: '<S170>/UD'
      //
      //  Block description for '<S170>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_j = rtb_TSamp_of;

      // Update for UnitDelay: '<S171>/UD'
      //
      //  Block description for '<S171>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_c = rtb_TSamp_ao;

      // Update for UnitDelay: '<S172>/UD'
      //
      //  Block description for '<S172>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_dk = rtb_TSamp_eu;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLACK)'

      // Update for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' incorporates:
      //   ActionPort: '<S151>/Action Port'

      // Update for If: '<S3>/If1'
      srUpdateBC(GNC2026W_DW.DefaultLQRControlBLACK_SubsysRa);

      // End of Update for SubSystem: '<S3>/Default LQR Control (BLACK)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLACK)' incorporates:
      //   ActionPort: '<S159>/Action Port'

      GNC2026W_DisableThrustersBLACK(GNC2026W_B.Merge1,
        &GNC2026W_P.DisableThrustersBLACK);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLACK)'
    }

    // End of If: '<S3>/If1'

    // If: '<S3>/If2' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read2'

    if (GNC2026W_DW.BLUE_Control_Law_Enabler == 1.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' incorporates:
      //   ActionPort: '<S156>/Action Port'

      // MATLAB Function: '<S197>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read1'
      //   DataStoreRead: '<S156>/Data Store Read2'

      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLUE_Desired_States[2],
        GNC2026W_DW.BLUE_Measured_States[2], &rtb_TSamp_of,
        &GNC2026W_DW.sf_MATLABFunction_cj);

      // SampleTimeMath: '<S198>/TSamp' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read1'
      //
      //  About '<S198>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ao = GNC2026W_DW.BLUE_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_p;

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

      GNC2026W_DW.UD_DSTATE_o = rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_o;

      // SampleTimeMath: '<S199>/TSamp' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read1'
      //
      //  About '<S199>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_eu = GNC2026W_DW.BLUE_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_o;

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

      GNC2026W_DW.UD_DSTATE_n = rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_n;

      // SampleTimeMath: '<S200>/TSamp' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read1'
      //
      //  About '<S200>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_dm = GNC2026W_DW.BLUE_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_px;

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

      GNC2026W_DW.UD_DSTATE_hu = rtb_TSamp_dm - GNC2026W_DW.UD_DSTATE_hu;

      // Sum: '<S156>/Subtract7' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read2'
      //   UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = GNC2026W_DW.BLUE_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_o;

      // Sum: '<S156>/Subtract6' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read2'
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = GNC2026W_DW.BLUE_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_n;

      // Sum: '<S156>/Subtract8' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read2'
      //   UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = GNC2026W_DW.BLUE_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_hu;

      // Gain: '<S156>/Gain6' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read1'
      //   DataStoreRead: '<S156>/Data Store Read2'
      //   Gain: '<S156>/Gain'
      //   Gain: '<S156>/Gain3'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S156>/Subtract5'
      //   Sum: '<S156>/Sum'
      //   UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[0] = ((GNC2026W_DW.BLUE_Measured_States[0] -
        GNC2026W_DW.BLUE_Desired_States[0]) * GNC2026W_P.Kp_xblue +
        GNC2026W_P.Kd_xblue * GNC2026W_DW.UD_DSTATE_o) * GNC2026W_P.Gain6_Gain_a;

      // Gain: '<S156>/Gain7' incorporates:
      //   DataStoreRead: '<S156>/Data Store Read1'
      //   DataStoreRead: '<S156>/Data Store Read2'
      //   Gain: '<S156>/Gain1'
      //   Gain: '<S156>/Gain4'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S156>/Subtract4'
      //   Sum: '<S156>/Sum1'
      //   UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[1] = ((GNC2026W_DW.BLUE_Measured_States[1] -
        GNC2026W_DW.BLUE_Desired_States[1]) * GNC2026W_P.Kp_yblue +
        GNC2026W_P.Kd_yblue * GNC2026W_DW.UD_DSTATE_n) * GNC2026W_P.Gain7_Gain_e;

      // Gain: '<S156>/Gain8' incorporates:
      //   Gain: '<S156>/Gain2'
      //   Gain: '<S156>/Gain5'
      //   Merge: '<S3>/Merge2'
      //   Sum: '<S156>/Sum2'
      //   UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge2[2] = (GNC2026W_P.Kp_tblue * rtb_TSamp_of +
        GNC2026W_P.Kd_tblue * GNC2026W_DW.UD_DSTATE_hu) *
        GNC2026W_P.Gain8_Gain_g;

      // Update for UnitDelay: '<S198>/UD'
      //
      //  Block description for '<S198>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_o = rtb_TSamp_ao;

      // Update for UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_n = rtb_TSamp_eu;

      // Update for UnitDelay: '<S200>/UD'
      //
      //  Block description for '<S200>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hu = rtb_TSamp_dm;

      // End of Outputs for SubSystem: '<S3>/Default PD Control (BLUE)'

      // Update for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' incorporates:
      //   ActionPort: '<S156>/Action Port'

      // Update for If: '<S3>/If2'
      srUpdateBC(GNC2026W_DW.DefaultPDControlBLUE_SubsysRanB);

      // End of Update for SubSystem: '<S3>/Default PD Control (BLUE)'
    } else if (GNC2026W_DW.BLUE_Control_Law_Enabler == 2.0) {
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' incorporates:
      //   ActionPort: '<S152>/Action Port'

      // Product: '<S152>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read1'
      //   DataStoreRead: '<S152>/Data Store Read2'
      //   MATLAB Function: '<S174>/MATLAB Function'

      GNC2026W_MATLABFunction_n(GNC2026W_DW.BLUE_Desired_States[2],
        GNC2026W_DW.BLUE_Measured_States[2], &tmp[2],
        &GNC2026W_DW.sf_MATLABFunction_k);

      // SampleTimeMath: '<S175>/TSamp' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read1'
      //
      //  About '<S175>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_of = GNC2026W_DW.BLUE_Desired_States[0] *
        GNC2026W_P.TSamp_WtEt_ft;

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

      GNC2026W_DW.UD_DSTATE_ld = rtb_TSamp_of - GNC2026W_DW.UD_DSTATE_ld;

      // SampleTimeMath: '<S176>/TSamp' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read1'
      //
      //  About '<S176>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ao = GNC2026W_DW.BLUE_Desired_States[1] *
        GNC2026W_P.TSamp_WtEt_eh;

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

      GNC2026W_DW.UD_DSTATE_k = rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_k;

      // SampleTimeMath: '<S177>/TSamp' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read1'
      //
      //  About '<S177>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_eu = GNC2026W_DW.BLUE_Desired_States[2] *
        GNC2026W_P.TSamp_WtEt_ii;

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

      GNC2026W_DW.UD_DSTATE_h = rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_h;

      // Sum: '<S152>/Subtract7' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read2'
      //   UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_ld = GNC2026W_DW.BLUE_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_ld;

      // Sum: '<S152>/Subtract6' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read2'
      //   UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = GNC2026W_DW.BLUE_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_k;

      // Sum: '<S152>/Subtract8' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read2'
      //   UnitDelay: '<S177>/UD'
      //
      //  Block description for '<S177>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = GNC2026W_DW.BLUE_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_h;
      for (newMeas = 0; newMeas < 18; newMeas++) {
        // Product: '<S152>/Matrix Multiply' incorporates:
        //   Constant: '<S152>/Constant2'

        P_xy[newMeas] = -GNC2026W_P.K_BLUE[newMeas];
      }

      // Product: '<S152>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S152>/Data Store Read1'
      //   DataStoreRead: '<S152>/Data Store Read2'
      //   Reshape: '<S152>/Reshape1'
      //   Reshape: '<S152>/Reshape2'
      //   Sum: '<S152>/Subtract4'
      //   Sum: '<S152>/Subtract5'
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

      tmp[0] = GNC2026W_DW.BLUE_Measured_States[0] -
        GNC2026W_DW.BLUE_Desired_States[0];
      tmp[1] = GNC2026W_DW.BLUE_Measured_States[1] -
        GNC2026W_DW.BLUE_Desired_States[1];
      tmp[3] = GNC2026W_DW.UD_DSTATE_ld;
      tmp[4] = GNC2026W_DW.UD_DSTATE_k;
      tmp[5] = GNC2026W_DW.UD_DSTATE_h;
      for (newMeas = 0; newMeas < 3; newMeas++) {
        // Product: '<S152>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge2'

        rtb_TSamp_dm = 0.0;
        for (i = 0; i < 6; i++) {
          // Merge: '<S3>/Merge2' incorporates:
          //   Product: '<S152>/Matrix Multiply'
          //   Reshape: '<S152>/Reshape4'

          rtb_TSamp_dm += P_xy[3 * i + newMeas] * tmp[i];
        }

        // Merge: '<S3>/Merge2' incorporates:
        //   Product: '<S152>/Matrix Multiply'

        GNC2026W_B.Merge2[newMeas] = rtb_TSamp_dm;
      }

      // Update for UnitDelay: '<S175>/UD'
      //
      //  Block description for '<S175>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_ld = rtb_TSamp_of;

      // Update for UnitDelay: '<S176>/UD'
      //
      //  Block description for '<S176>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_k = rtb_TSamp_ao;

      // Update for UnitDelay: '<S177>/UD'
      //
      //  Block description for '<S177>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_h = rtb_TSamp_eu;

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (BLUE)'

      // Update for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' incorporates:
      //   ActionPort: '<S152>/Action Port'

      // Update for If: '<S3>/If2'
      srUpdateBC(GNC2026W_DW.DefaultLQRControlBLUE_SubsysRan);

      // End of Update for SubSystem: '<S3>/Default LQR Control (BLUE)'
    } else {
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (BLUE)' incorporates:
      //   ActionPort: '<S160>/Action Port'

      GNC2026W_DisableThrustersBLACK(GNC2026W_B.Merge2,
        &GNC2026W_P.DisableThrustersBLUE);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (BLUE)'
    }

    // End of If: '<S3>/If2'

    // If: '<S3>/If3' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read5'

    if (GNC2026W_DW.ARM_Control_Law_Enabler == 1.0) {
      rtAction = 0;
    } else if (GNC2026W_DW.ARM_Control_Law_Enabler == 2.0) {
      rtAction = 1;
    } else {
      rtAction = 2;
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S3>/Default PD (ARM)' incorporates:
      //   ActionPort: '<S154>/Action Port'

      // DataStoreWrite: '<S154>/Data Store Write12' incorporates:
      //   Constant: '<S154>/Constant7'

      GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.Constant7_Value;

      // If: '<S154>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
      //   DataStoreRead: '<S154>/Data Store Read4'

      if (GNC2026W_DW.isSim == 1.0) {
        // Outputs for IfAction SubSystem: '<S154>/Simulated Position Controller' incorporates:
        //   ActionPort: '<S185>/Action Port'

        // Sum: '<S185>/Subtract3' incorporates:
        //   DataStoreRead: '<S154>/Data Store Read2'
        //   DataStoreRead: '<S185>/Data Store Read2'

        rtb_TSamp_dm = GNC2026W_DW.ARM_Desired_States[1] -
          GNC2026W_DW.ARM_Measured_States[1];

        // SampleTimeMath: '<S189>/TSamp'
        //
        //  About '<S189>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_of = rtb_TSamp_dm * GNC2026W_P.TSamp_WtEt_pu;

        // Sum: '<S186>/Sum3' incorporates:
        //   Gain: '<S186>/kd_elarm'
        //   Gain: '<S186>/kp_elarm'
        //   Sum: '<S189>/Diff'
        //   UnitDelay: '<S189>/UD'
        //
        //  Block description for '<S189>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S189>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_d = (rtb_TSamp_of - GNC2026W_DW.UD_DSTATE_d) *
          GNC2026W_P.Kd_elarm + GNC2026W_P.Kp_elarm * rtb_TSamp_dm;

        // Sum: '<S185>/Subtract2' incorporates:
        //   DataStoreRead: '<S154>/Data Store Read2'
        //   DataStoreRead: '<S185>/Data Store Read2'

        rtb_TSamp_dm = GNC2026W_DW.ARM_Desired_States[0] -
          GNC2026W_DW.ARM_Measured_States[0];

        // SampleTimeMath: '<S190>/TSamp'
        //
        //  About '<S190>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_ao = rtb_TSamp_dm * GNC2026W_P.TSamp_WtEt_f0;

        // Sum: '<S187>/Sum3' incorporates:
        //   Gain: '<S187>/kd_sharm'
        //   Gain: '<S187>/kp_sharm'
        //   Sum: '<S190>/Diff'
        //   UnitDelay: '<S190>/UD'
        //
        //  Block description for '<S190>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S190>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_el = (rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_el) *
          GNC2026W_P.Kd_sharm + GNC2026W_P.Kp_sharm * rtb_TSamp_dm;

        // Sum: '<S185>/Subtract4' incorporates:
        //   DataStoreRead: '<S154>/Data Store Read2'
        //   DataStoreRead: '<S185>/Data Store Read2'

        rtb_TSamp_dm = GNC2026W_DW.ARM_Desired_States[2] -
          GNC2026W_DW.ARM_Measured_States[2];

        // SampleTimeMath: '<S191>/TSamp'
        //
        //  About '<S191>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_eu = rtb_TSamp_dm * GNC2026W_P.TSamp_WtEt_nz;

        // Sum: '<S188>/Sum3' incorporates:
        //   Gain: '<S188>/kd_wrarm'
        //   Gain: '<S188>/kp_wrarm'
        //   Sum: '<S191>/Diff'
        //   UnitDelay: '<S191>/UD'
        //
        //  Block description for '<S191>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S191>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_aa = (rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_aa) *
          GNC2026W_P.Kd_wrarm + GNC2026W_P.Kp_wrarm * rtb_TSamp_dm;

        // Saturate: '<S185>/Saturation' incorporates:
        //   UnitDelay: '<S190>/UD'
        //
        //  Block description for '<S190>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_el > GNC2026W_P.Tz_lim_sharm) {
          // Merge: '<S154>/Merge3'
          GNC2026W_B.Merge3 = GNC2026W_P.Tz_lim_sharm;
        } else if (GNC2026W_DW.UD_DSTATE_el < -GNC2026W_P.Tz_lim_sharm) {
          // Merge: '<S154>/Merge3'
          GNC2026W_B.Merge3 = -GNC2026W_P.Tz_lim_sharm;
        } else {
          // Merge: '<S154>/Merge3'
          GNC2026W_B.Merge3 = GNC2026W_DW.UD_DSTATE_el;
        }

        // End of Saturate: '<S185>/Saturation'

        // Saturate: '<S185>/Saturation1' incorporates:
        //   UnitDelay: '<S189>/UD'
        //
        //  Block description for '<S189>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_d > GNC2026W_P.Tz_lim_elarm) {
          // Merge: '<S154>/Merge4'
          GNC2026W_B.Merge4 = GNC2026W_P.Tz_lim_elarm;
        } else if (GNC2026W_DW.UD_DSTATE_d < -GNC2026W_P.Tz_lim_elarm) {
          // Merge: '<S154>/Merge4'
          GNC2026W_B.Merge4 = -GNC2026W_P.Tz_lim_elarm;
        } else {
          // Merge: '<S154>/Merge4'
          GNC2026W_B.Merge4 = GNC2026W_DW.UD_DSTATE_d;
        }

        // End of Saturate: '<S185>/Saturation1'

        // Saturate: '<S185>/Saturation3' incorporates:
        //   UnitDelay: '<S191>/UD'
        //
        //  Block description for '<S191>/UD':
        //
        //   Store in Global RAM

        if (GNC2026W_DW.UD_DSTATE_aa > GNC2026W_P.Tz_lim_wrarm) {
          // Merge: '<S154>/Merge5'
          GNC2026W_B.Merge5 = GNC2026W_P.Tz_lim_wrarm;
        } else if (GNC2026W_DW.UD_DSTATE_aa < -GNC2026W_P.Tz_lim_wrarm) {
          // Merge: '<S154>/Merge5'
          GNC2026W_B.Merge5 = -GNC2026W_P.Tz_lim_wrarm;
        } else {
          // Merge: '<S154>/Merge5'
          GNC2026W_B.Merge5 = GNC2026W_DW.UD_DSTATE_aa;
        }

        // End of Saturate: '<S185>/Saturation3'

        // Update for UnitDelay: '<S189>/UD'
        //
        //  Block description for '<S189>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_d = rtb_TSamp_of;

        // Update for UnitDelay: '<S190>/UD'
        //
        //  Block description for '<S190>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_el = rtb_TSamp_ao;

        // Update for UnitDelay: '<S191>/UD'
        //
        //  Block description for '<S191>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_aa = rtb_TSamp_eu;

        // End of Outputs for SubSystem: '<S154>/Simulated Position Controller'

        // Update for IfAction SubSystem: '<S154>/Simulated Position Controller' incorporates:
        //   ActionPort: '<S185>/Action Port'

        // Update for If: '<S154>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
        srUpdateBC(GNC2026W_DW.SimulatedPositionController_Sub);

        // End of Update for SubSystem: '<S154>/Simulated Position Controller'
      } else {
        // Outputs for IfAction SubSystem: '<S154>/Passthrough for Experiment' incorporates:
        //   ActionPort: '<S184>/Action Port'

        // Merge: '<S154>/Merge3' incorporates:
        //   DataStoreRead: '<S154>/Data Store Read2'
        //   SignalConversion generated from: '<S184>/q1_desired'

        GNC2026W_B.Merge3 = GNC2026W_DW.ARM_Desired_States[0];

        // Merge: '<S154>/Merge4' incorporates:
        //   DataStoreRead: '<S154>/Data Store Read2'
        //   SignalConversion generated from: '<S184>/q2_desired'

        GNC2026W_B.Merge4 = GNC2026W_DW.ARM_Desired_States[1];

        // Merge: '<S154>/Merge5' incorporates:
        //   DataStoreRead: '<S154>/Data Store Read2'
        //   SignalConversion generated from: '<S184>/q3_desired'

        GNC2026W_B.Merge5 = GNC2026W_DW.ARM_Desired_States[2];

        // End of Outputs for SubSystem: '<S154>/Passthrough for Experiment'

        // Update for IfAction SubSystem: '<S154>/Passthrough for Experiment' incorporates:
        //   ActionPort: '<S184>/Action Port'

        // Update for If: '<S154>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
        srUpdateBC(GNC2026W_DW.PassthroughforExperiment_Subsys);

        // End of Update for SubSystem: '<S154>/Passthrough for Experiment'
      }

      // End of If: '<S154>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      // Merge: '<S3>/Merge6' incorporates:
      //   SignalConversion generated from: '<S154>/u'

      rtb_TmpSignalConversionAtSFu_fp[0] = GNC2026W_B.Merge3;
      rtb_TmpSignalConversionAtSFu_fp[1] = GNC2026W_B.Merge4;
      rtb_TmpSignalConversionAtSFu_fp[2] = GNC2026W_B.Merge5;
      srUpdateBC(GNC2026W_DW.DefaultPDARM_SubsysRanBC);

      // End of Outputs for SubSystem: '<S3>/Default PD (ARM)'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (ARM)' incorporates:
      //   ActionPort: '<S149>/Action Port'

      GNC2026W_DisableThrustersRED(rtb_TmpSignalConversionAtSFu_fp,
        &GNC2026W_P.CustomControlARM);
      srUpdateBC(GNC2026W_DW.CustomControlARM.DisableThrustersRED_SubsysRanBC);

      // End of Outputs for SubSystem: '<S3>/Custom Control (ARM)'
      break;

     default:
      // Outputs for IfAction SubSystem: '<S3>/Disable Control (ARM)' incorporates:
      //   ActionPort: '<S158>/Action Port'

      // DataStoreWrite: '<S158>/Data Store Write12' incorporates:
      //   Constant: '<S158>/Constant7'

      GNC2026W_DW.ARM_Control_Mode = GNC2026W_P.Constant7_Value_h;

      // Merge: '<S3>/Merge6' incorporates:
      //   Constant: '<S158>/Zero'
      //   SignalConversion generated from: '<S158>/Out1'

      rtb_TmpSignalConversionAtSFu_fp[0] = GNC2026W_P.Zero_Value;
      rtb_TmpSignalConversionAtSFu_fp[1] = GNC2026W_P.Zero_Value;
      rtb_TmpSignalConversionAtSFu_fp[2] = GNC2026W_P.Zero_Value;
      srUpdateBC(GNC2026W_DW.DisableControlARM_SubsysRanBC);

      // End of Outputs for SubSystem: '<S3>/Disable Control (ARM)'
      break;
    }

    // End of If: '<S3>/If3'

    // If: '<S3>/If' incorporates:
    //   DataStoreRead: '<S3>/Data Store Read1'
    //   MATLAB Function: '<S150>/MATLAB Function2'

    if (GNC2026W_DW.RED_Control_Law_Enabler == 1.0) {
      rtAction = 0;
    } else if (GNC2026W_DW.RED_Control_Law_Enabler == 2.0) {
      rtAction = 1;
    } else if (GNC2026W_DW.RED_Control_Law_Enabler == 3.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S3>/Default PD Control (RED)' incorporates:
      //   ActionPort: '<S157>/Action Port'

      // MATLAB Function: '<S202>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read1'
      //   DataStoreRead: '<S157>/Data Store Read13'

      GNC2026W_MATLABFunction_n(GNC2026W_B.DataStoreRead3[2],
        GNC2026W_DW.RED_Measured_States[2], &rtb_TSamp_of,
        &GNC2026W_DW.sf_MATLABFunction_n2);

      // SampleTimeMath: '<S203>/TSamp' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read1'
      //
      //  About '<S203>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ao = GNC2026W_B.DataStoreRead3[0] * GNC2026W_P.TSamp_WtEt;

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

      GNC2026W_DW.UD_DSTATE_eg = rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_eg;

      // SampleTimeMath: '<S204>/TSamp' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read1'
      //
      //  About '<S204>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_eu = GNC2026W_B.DataStoreRead3[1] * GNC2026W_P.TSamp_WtEt_f;

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

      GNC2026W_DW.UD_DSTATE_cd = rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_cd;

      // SampleTimeMath: '<S205>/TSamp' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read1'
      //
      //  About '<S205>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_dm = GNC2026W_B.DataStoreRead3[2] * GNC2026W_P.TSamp_WtEt_c;

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

      GNC2026W_DW.UD_DSTATE_hd = rtb_TSamp_dm - GNC2026W_DW.UD_DSTATE_hd;

      // Sum: '<S157>/Subtract7' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read13'
      //   UnitDelay: '<S203>/UD'
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = GNC2026W_DW.RED_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_eg;

      // Sum: '<S157>/Subtract6' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read13'
      //   UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = GNC2026W_DW.RED_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_cd;

      // Sum: '<S157>/Subtract8' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read13'
      //   UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = GNC2026W_DW.RED_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_hd;

      // Gain: '<S157>/Gain6' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read1'
      //   DataStoreRead: '<S157>/Data Store Read13'
      //   Gain: '<S157>/Gain'
      //   Gain: '<S157>/Gain3'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S157>/Subtract5'
      //   Sum: '<S157>/Sum'
      //   UnitDelay: '<S203>/UD'
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[0] = ((GNC2026W_DW.RED_Measured_States[0] -
        GNC2026W_B.DataStoreRead3[0]) * GNC2026W_P.Kp_xr + GNC2026W_P.Kd_xr *
        GNC2026W_DW.UD_DSTATE_eg) * GNC2026W_P.Gain6_Gain;

      // Gain: '<S157>/Gain7' incorporates:
      //   DataStoreRead: '<S157>/Data Store Read1'
      //   DataStoreRead: '<S157>/Data Store Read13'
      //   Gain: '<S157>/Gain1'
      //   Gain: '<S157>/Gain4'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S157>/Subtract4'
      //   Sum: '<S157>/Sum1'
      //   UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[1] = ((GNC2026W_DW.RED_Measured_States[1] -
        GNC2026W_B.DataStoreRead3[1]) * GNC2026W_P.Kp_yr + GNC2026W_P.Kd_yr *
        GNC2026W_DW.UD_DSTATE_cd) * GNC2026W_P.Gain7_Gain;

      // Gain: '<S157>/Gain8' incorporates:
      //   Gain: '<S157>/Gain2'
      //   Gain: '<S157>/Gain5'
      //   Merge: '<S3>/Merge'
      //   Sum: '<S157>/Sum2'
      //   UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_B.Merge[2] = (GNC2026W_P.Kp_tr * rtb_TSamp_of + GNC2026W_P.Kd_tr *
        GNC2026W_DW.UD_DSTATE_hd) * GNC2026W_P.Gain8_Gain;

      // Update for UnitDelay: '<S203>/UD'
      //
      //  Block description for '<S203>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_eg = rtb_TSamp_ao;

      // Update for UnitDelay: '<S204>/UD'
      //
      //  Block description for '<S204>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_cd = rtb_TSamp_eu;

      // Update for UnitDelay: '<S205>/UD'
      //
      //  Block description for '<S205>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_hd = rtb_TSamp_dm;
      srUpdateBC(GNC2026W_DW.DefaultPDControlRED_SubsysRanBC);

      // End of Outputs for SubSystem: '<S3>/Default PD Control (RED)'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S3>/Default LQR Control (RED)' incorporates:
      //   ActionPort: '<S153>/Action Port'

      // Product: '<S153>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read1'
      //   DataStoreRead: '<S153>/Data Store Read13'
      //   MATLAB Function: '<S179>/MATLAB Function'

      GNC2026W_MATLABFunction_n(GNC2026W_B.DataStoreRead3[2],
        GNC2026W_DW.RED_Measured_States[2], &tmp_0[2],
        &GNC2026W_DW.sf_MATLABFunction_h);

      // SampleTimeMath: '<S180>/TSamp' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read1'
      //
      //  About '<S180>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_of = GNC2026W_B.DataStoreRead3[0] * GNC2026W_P.TSamp_WtEt_h;

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

      GNC2026W_DW.UD_DSTATE_aq = rtb_TSamp_of - GNC2026W_DW.UD_DSTATE_aq;

      // SampleTimeMath: '<S181>/TSamp' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read1'
      //
      //  About '<S181>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_ao = GNC2026W_B.DataStoreRead3[1] * GNC2026W_P.TSamp_WtEt_e;

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

      GNC2026W_DW.UD_DSTATE_pr = rtb_TSamp_ao - GNC2026W_DW.UD_DSTATE_pr;

      // SampleTimeMath: '<S182>/TSamp' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read1'
      //
      //  About '<S182>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //
      rtb_TSamp_eu = GNC2026W_B.DataStoreRead3[2] * GNC2026W_P.TSamp_WtEt_n;

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

      GNC2026W_DW.UD_DSTATE_prk = rtb_TSamp_eu - GNC2026W_DW.UD_DSTATE_prk;

      // Sum: '<S153>/Subtract7' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read13'
      //   UnitDelay: '<S180>/UD'
      //
      //  Block description for '<S180>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = GNC2026W_DW.RED_Measured_States[3] -
        GNC2026W_DW.UD_DSTATE_aq;

      // Sum: '<S153>/Subtract6' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read13'
      //   UnitDelay: '<S181>/UD'
      //
      //  Block description for '<S181>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = GNC2026W_DW.RED_Measured_States[4] -
        GNC2026W_DW.UD_DSTATE_pr;

      // Sum: '<S153>/Subtract8' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read13'
      //   UnitDelay: '<S182>/UD'
      //
      //  Block description for '<S182>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_prk = GNC2026W_DW.RED_Measured_States[5] -
        GNC2026W_DW.UD_DSTATE_prk;
      for (newMeas = 0; newMeas < 18; newMeas++) {
        // Product: '<S153>/Matrix Multiply' incorporates:
        //   Constant: '<S153>/Constant2'

        P_xy[newMeas] = -GNC2026W_P.K_RED[newMeas];
      }

      // Product: '<S153>/Matrix Multiply' incorporates:
      //   DataStoreRead: '<S153>/Data Store Read1'
      //   DataStoreRead: '<S153>/Data Store Read13'
      //   Reshape: '<S153>/Reshape2'
      //   Reshape: '<S153>/Reshape3'
      //   Sum: '<S153>/Subtract4'
      //   Sum: '<S153>/Subtract5'
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

      tmp_0[0] = GNC2026W_DW.RED_Measured_States[0] - GNC2026W_B.DataStoreRead3
        [0];
      tmp_0[1] = GNC2026W_DW.RED_Measured_States[1] - GNC2026W_B.DataStoreRead3
        [1];
      tmp_0[3] = GNC2026W_DW.UD_DSTATE_aq;
      tmp_0[4] = GNC2026W_DW.UD_DSTATE_pr;
      tmp_0[5] = GNC2026W_DW.UD_DSTATE_prk;
      for (newMeas = 0; newMeas < 3; newMeas++) {
        // Product: '<S153>/Matrix Multiply' incorporates:
        //   Merge: '<S3>/Merge'

        rtb_TSamp_dm = 0.0;
        for (i = 0; i < 6; i++) {
          // Merge: '<S3>/Merge' incorporates:
          //   Product: '<S153>/Matrix Multiply'
          //   Reshape: '<S153>/Reshape4'

          rtb_TSamp_dm += P_xy[3 * i + newMeas] * tmp_0[i];
        }

        // Merge: '<S3>/Merge' incorporates:
        //   Product: '<S153>/Matrix Multiply'

        GNC2026W_B.Merge[newMeas] = rtb_TSamp_dm;
      }

      // Update for UnitDelay: '<S180>/UD'
      //
      //  Block description for '<S180>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_aq = rtb_TSamp_of;

      // Update for UnitDelay: '<S181>/UD'
      //
      //  Block description for '<S181>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_pr = rtb_TSamp_ao;

      // Update for UnitDelay: '<S182>/UD'
      //
      //  Block description for '<S182>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_prk = rtb_TSamp_eu;
      srUpdateBC(GNC2026W_DW.DefaultLQRControlRED_SubsysRanB);

      // End of Outputs for SubSystem: '<S3>/Default LQR Control (RED)'
      break;

     case 2:
      // Outputs for IfAction SubSystem: '<S3>/Custom Control (RED)' incorporates:
      //   ActionPort: '<S150>/Action Port'

      // Update for Delay: '<S166>/Delay' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read'
      //   Delay: '<S166>/Delay1'
      //   MATLAB Function: '<S166>/MATLAB Function'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_lx, GNC2026W_DW.Delay1_DSTATE_ba, &rtb_TSamp_of,
        &GNC2026W_DW.Delay_DSTATE_lx, &GNC2026W_DW.sf_MATLABFunction_i);

      // Update for Delay: '<S165>/Delay' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read4'
      //   Delay: '<S165>/Delay1'
      //   MATLAB Function: '<S165>/MATLAB Function'

      GNC2026W_MATLABFunction(GNC2026W_DW.LOS_Angle, GNC2026W_DW.Delay_DSTATE_c5,
        GNC2026W_DW.Delay1_DSTATE_ag, &rtb_TSamp_eu,
        &GNC2026W_DW.Delay_DSTATE_c5, &GNC2026W_DW.sf_MATLABFunction_d);

      // MATLAB Function: '<S150>/MATLAB Function2'
      if (!GNC2026W_DW.x_not_empty_k) {
        GNC2026W_DW.x_l[0] = rtb_TSamp_eu;
        GNC2026W_DW.x_l[1] = 0.0;
        GNC2026W_DW.x_l[2] = 0.0;
        GNC2026W_DW.x_not_empty_k = true;
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
      rtb_TSamp_ao = 0.0;
      for (i = 0; i < 3; i++) {
        rtb_TSamp_dm = 0.0;
        for (newMeas = 0; newMeas < 3; newMeas++) {
          r = 3 * newMeas + i;
          rtb_TSamp_dm += F[r] * GNC2026W_DW.x_l[newMeas];
          F_0[r] = (GNC2026W_DW.P_l[3 * newMeas + 1] * F[i + 3] +
                    GNC2026W_DW.P_l[3 * newMeas] * F[i]) + GNC2026W_DW.P_l[3 *
            newMeas + 2] * F[i + 6];
        }

        x_minus[i] = rtb_TSamp_dm;
        q = F_0[i + 3];
        t15 = F_0[i];
        t12 = F_0[i + 6];
        for (newMeas = 0; newMeas < 3; newMeas++) {
          r = 3 * newMeas + i;
          P_minus[r] = ((F[newMeas + 3] * q + t15 * F[newMeas]) + F[newMeas + 6]
                        * t12) + c_0[r];
        }

        r = a[i];
        LARstates_REL[i] = r;
        rtb_TSamp_ao += static_cast<real_T>(r) * rtb_TSamp_dm;
        S_tmp[i] = a[i];
      }

      rtb_TSamp_dm = rtb_TSamp_eu - rtb_TSamp_ao;
      rtb_TSamp_ao = 0.0;
      r = static_cast<int32_T>(LARstates_REL[1]);
      i = static_cast<int32_T>(LARstates_REL[0]);
      br = static_cast<int32_T>(LARstates_REL[2]);
      for (newMeas = 0; newMeas < 3; newMeas++) {
        rtb_TSamp_ao += ((P_minus[3 * newMeas + 1] * static_cast<real_T>(r) +
                          P_minus[3 * newMeas] * static_cast<real_T>(i)) +
                         P_minus[3 * newMeas + 2] * static_cast<real_T>(br)) *
          static_cast<real_T>(S_tmp[newMeas]);
      }

      rtAction = S_tmp[1];
      rtPrevAction = S_tmp[0];
      S_tmp_0 = S_tmp[2];
      for (i = 0; i < 3; i++) {
        t17 = ((P_minus[i + 3] * static_cast<real_T>(rtAction) + P_minus[i] *
                static_cast<real_T>(rtPrevAction)) + P_minus[i + 6] *
               static_cast<real_T>(S_tmp_0)) / rtb_TSamp_ao;
        K[i] = t17;
        GNC2026W_DW.x_l[i] = t17 * rtb_TSamp_dm + x_minus[i];
      }

      memset(&F[0], 0, 9U * sizeof(real_T));
      F[0] = 1.0;
      F[4] = 1.0;
      F[8] = 1.0;
      t17 = K[0];
      rtb_TSamp_ao = K[1];
      rtb_TSamp_dm = K[2];
      for (newMeas = 0; newMeas < 3; newMeas++) {
        r = static_cast<int32_T>(LARstates_REL[newMeas]);
        F_0[3 * newMeas] = F[3 * newMeas] - t17 * static_cast<real_T>(r);
        i = 3 * newMeas + 1;
        F_0[i] = F[i] - rtb_TSamp_ao * static_cast<real_T>(r);
        i = 3 * newMeas + 2;
        F_0[i] = F[i] - rtb_TSamp_dm * static_cast<real_T>(r);
      }

      for (newMeas = 0; newMeas < 3; newMeas++) {
        rtb_TSamp_ao = P_minus[3 * newMeas + 1];
        rtb_TSamp_dm = P_minus[3 * newMeas];
        q = P_minus[3 * newMeas + 2];
        for (i = 0; i < 3; i++) {
          GNC2026W_DW.P_l[i + 3 * newMeas] = (F_0[i + 3] * rtb_TSamp_ao +
            rtb_TSamp_dm * F_0[i]) + F_0[i + 6] * q;
        }
      }

      // Reshape: '<S164>/Reshape' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read'

      F[0] = GNC2026W_DW.RED_Measured_States[0];
      F[1] = GNC2026W_DW.RED_Measured_States[1];
      F[2] = rtb_TSamp_of;
      for (newMeas = 0; newMeas < 6; newMeas++) {
        F[newMeas + 3] = GNC2026W_DW.RED_Measured_States[newMeas + 3];

        // MATLAB Function: '<S150>/MATLAB Function2' incorporates:
        //   DataStoreRead: '<S150>/Data Store Read1'

        P_minus[newMeas] = F[newMeas] - GNC2026W_DW.RED_desired[newMeas];
      }

      // End of Reshape: '<S164>/Reshape'

      // MATLAB Function: '<S150>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read1'

      P_minus[2] = -GNC2026W_DW.x_l[0];
      P_minus[5] = -GNC2026W_DW.x_l[1];
      GNC2026W_B.lambdaFirstOrder[0] = rtb_TSamp_eu;
      GNC2026W_B.lambdaFirstOrder[1] = (rtb_TSamp_eu - GNC2026W_DW.l1) /
        GNC2026W_P.baseRate;
      GNC2026W_B.lambdaFirstOrder[2] = ((rtb_TSamp_eu - 2.0 * GNC2026W_DW.l1) +
        GNC2026W_DW.l2) / GNC2026W_P.baseRate;
      GNC2026W_DW.l2 = GNC2026W_DW.l1;
      GNC2026W_DW.l1 = rtb_TSamp_eu;
      P_minus[6] = -GNC2026W_DW.RED_desired[6];
      GNC2026W_B.lambda[0] = GNC2026W_DW.x_l[0];

      // DataStoreWrite: '<S150>/Data Store Write1' incorporates:
      //   MATLAB Function: '<S150>/MATLAB Function2'

      GNC2026W_DW.lambdaFirstOrder[0] = GNC2026W_B.lambdaFirstOrder[0];

      // DataStoreWrite: '<S150>/Data Store Write2' incorporates:
      //   MATLAB Function: '<S150>/MATLAB Function2'

      GNC2026W_DW.lambda[0] = GNC2026W_DW.x_l[0];

      // MATLAB Function: '<S150>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S150>/Data Store Read1'

      P_minus[7] = -GNC2026W_DW.RED_desired[7];
      GNC2026W_B.lambda[1] = GNC2026W_DW.x_l[1];

      // DataStoreWrite: '<S150>/Data Store Write1' incorporates:
      //   MATLAB Function: '<S150>/MATLAB Function2'

      GNC2026W_DW.lambdaFirstOrder[1] = GNC2026W_B.lambdaFirstOrder[1];

      // DataStoreWrite: '<S150>/Data Store Write2' incorporates:
      //   MATLAB Function: '<S150>/MATLAB Function2'

      GNC2026W_DW.lambda[1] = GNC2026W_DW.x_l[1];
      GNC2026W_B.lambda[2] = GNC2026W_DW.x_l[2];

      // DataStoreWrite: '<S150>/Data Store Write1' incorporates:
      //   MATLAB Function: '<S150>/MATLAB Function2'

      GNC2026W_DW.lambdaFirstOrder[2] = GNC2026W_B.lambdaFirstOrder[2];

      // DataStoreWrite: '<S150>/Data Store Write2' incorporates:
      //   MATLAB Function: '<S150>/MATLAB Function2'

      GNC2026W_DW.lambda[2] = GNC2026W_DW.x_l[2];

      // MATLAB Function: '<S150>/MATLAB Function2'
      P_minus[8] = -GNC2026W_DW.x_l[2];

      // MATLAB Function: '<S150>/MATLAB Function3' incorporates:
      //   Constant: '<S150>/Constant3'
      //   Constant: '<S150>/Constant7'
      //   MATLAB Function: '<S150>/MATLAB Function2'

      for (newMeas = 0; newMeas < 3; newMeas++) {
        for (i = 0; i < 3; i++) {
          r = 3 * i + newMeas;
          F_0[i + 3 * newMeas] = GNC2026W_P.A_c[r];
          A_tmp[r] = (GNC2026W_P.Mc_inv[3 * i + 1] * GNC2026W_P.A_c[newMeas + 3]
                      + GNC2026W_P.Mc_inv[3 * i] * GNC2026W_P.A_c[newMeas]) +
            GNC2026W_P.Mc_inv[3 * i + 2] * GNC2026W_P.A_c[newMeas + 6];
        }
      }

      for (newMeas = 0; newMeas < 3; newMeas++) {
        rtb_TSamp_ao = F_0[3 * newMeas + 1];
        rtb_TSamp_dm = F_0[3 * newMeas];
        q = F_0[3 * newMeas + 2];
        for (i = 0; i < 3; i++) {
          F[i + 3 * newMeas] = (A_tmp[i + 3] * rtb_TSamp_ao + rtb_TSamp_dm *
                                A_tmp[i]) + A_tmp[i + 6] * q;
        }
      }

      rEQ0 = true;
      for (newMeas = 0; newMeas < 9; newMeas++) {
        b[newMeas] = 0.0;
        if (rEQ0) {
          q = F[newMeas];
          if (rtIsInf(q) || rtIsNaN(q)) {
            rEQ0 = false;
          }
        }
      }

      if (!rEQ0) {
        for (newMeas = 0; newMeas < 9; newMeas++) {
          b[newMeas] = (rtNaN);
        }
      } else {
        GNC2026W_svd_n(F, U, LARstates_REL, V);
        absx = fabs(LARstates_REL[0]);
        if (rtIsInf(absx) || rtIsNaN(absx)) {
          absx = (rtNaN);
        } else if (absx < 4.4501477170144028E-308) {
          absx = 4.94065645841247E-324;
        } else {
          frexp(absx, &vcol);
          absx = ldexp(1.0, vcol - 53);
        }

        absx *= 3.0;
        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i < 3)) {
          if (rtIsInf(LARstates_REL[i]) || rtIsNaN(LARstates_REL[i])) {
            absx = 1.7976931348623157E+308;
            exitg1 = true;
          } else {
            i++;
          }
        }

        r = -1;
        newMeas = 0;
        while ((newMeas < 3) && (LARstates_REL[newMeas] > absx)) {
          r++;
          newMeas++;
        }

        if (r + 1 > 0) {
          vcol = 1;
          for (newMeas = 0; newMeas <= r; newMeas++) {
            rtb_TSamp_ao = 1.0 / LARstates_REL[newMeas];
            for (i = vcol; i <= vcol + 2; i++) {
              V[i - 1] *= rtb_TSamp_ao;
            }

            vcol += 3;
          }

          for (newMeas = 0; newMeas <= 6; newMeas += 3) {
            for (i = newMeas + 1; i <= newMeas + 3; i++) {
              b[i - 1] = 0.0;
            }
          }

          br = 0;
          for (newMeas = 0; newMeas <= 6; newMeas += 3) {
            ar = -1;
            br++;
            c = 3 * r + br;
            for (i = br; i <= c; i += 3) {
              for (vcol = newMeas + 1; vcol <= newMeas + 3; vcol++) {
                b[vcol - 1] += V[(ar + vcol) - newMeas] * U[i - 1];
              }

              ar += 3;
            }
          }
        }
      }

      for (newMeas = 0; newMeas < 3; newMeas++) {
        absx = 0.0;
        rtb_TSamp_ao = F_0[newMeas + 3];
        rtb_TSamp_dm = F_0[newMeas];
        q = F_0[newMeas + 6];
        for (i = 0; i < 3; i++) {
          r = 3 * i + newMeas;
          F[r] = (b[3 * i + 1] * rtb_TSamp_ao + b[3 * i] * rtb_TSamp_dm) + b[3 *
            i + 2] * q;
          absx += A_tmp[r] * GNC2026W_P.F_u[i];
        }

        K[newMeas] = ((-P_minus[newMeas + 6] - ((GNC2026W_P.alpha[newMeas + 3] *
          P_minus[4] + GNC2026W_P.alpha[newMeas] * P_minus[3]) +
          GNC2026W_P.alpha[newMeas + 6] * P_minus[5])) -
                      ((GNC2026W_P.gamma[newMeas + 3] * P_minus[1] +
                        GNC2026W_P.gamma[newMeas] * P_minus[0]) +
                       GNC2026W_P.gamma[newMeas + 6] * P_minus[2])) - absx;
      }

      rtb_TSamp_ao = K[1];
      rtb_TSamp_dm = K[0];
      q = K[2];
      for (newMeas = 0; newMeas < 3; newMeas++) {
        // Merge: '<S3>/Merge' incorporates:
        //   MATLAB Function: '<S150>/MATLAB Function3'

        GNC2026W_B.Merge[newMeas] = (F[newMeas + 3] * rtb_TSamp_ao + F[newMeas] *
          rtb_TSamp_dm) + F[newMeas + 6] * q;
      }

      // Update for Delay: '<S166>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_ba = rtb_TSamp_of;

      // Update for Delay: '<S165>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_ag = rtb_TSamp_eu;
      srUpdateBC(GNC2026W_DW.CustomControlRED_SubsysRanBC);

      // End of Outputs for SubSystem: '<S3>/Custom Control (RED)'
      break;

     default:
      // Outputs for IfAction SubSystem: '<S3>/Disable Thrusters (RED)' incorporates:
      //   ActionPort: '<S161>/Action Port'

      GNC2026W_DisableThrustersRED(GNC2026W_B.Merge,
        &GNC2026W_P.DisableThrustersRED);
      srUpdateBC(GNC2026W_DW.DisableThrustersRED.DisableThrustersRED_SubsysRanBC);

      // End of Outputs for SubSystem: '<S3>/Disable Thrusters (RED)'
      break;
    }

    // End of If: '<S3>/If'

    // MATLAB Function: '<S211>/MATLAB Function' incorporates:
    //   DataStoreRead: '<S211>/Data Store Read31'
    //   DataStoreRead: '<S211>/Data Store Read32'

    rtb_TSamp_ao = GNC2026W_DW.RED_Measured_States[1] -
      GNC2026W_DW.BLACK_Measured_States[1];
    absx = GNC2026W_DW.RED_Measured_States[0] -
      GNC2026W_DW.BLACK_Measured_States[0];
    GNC2026W_B.L = rtb_TSamp_ao * rtb_TSamp_ao + absx * absx;
    GNC2026W_B.L = sqrt(GNC2026W_B.L);

    // DataStoreWrite: '<S5>/Data Store Write2'
    rtb_TSamp_of = GNC2026W_B.L;

    // DataStoreRead: '<S5>/Data Store Read4'
    GNC2026W_B.Time_s = GNC2026W_DW.Univ_Time;

    // DataStoreRead: '<S5>/Data Store Read5' incorporates:
    //   DataStoreWrite: '<S3>/RED Controls'

    GNC2026W_B.DataStoreRead5[0] = GNC2026W_B.Merge[0];

    // DataStoreRead: '<S5>/Data Store Read1'
    GNC2026W_B.DataStoreRead1[0] = GNC2026W_DW.RED_Saturated_Controls[0];

    // DataStoreRead: '<S5>/Data Store Read5' incorporates:
    //   DataStoreWrite: '<S3>/RED Controls'

    GNC2026W_B.DataStoreRead5[1] = GNC2026W_B.Merge[1];

    // DataStoreRead: '<S5>/Data Store Read1'
    GNC2026W_B.DataStoreRead1[1] = GNC2026W_DW.RED_Saturated_Controls[1];

    // DataStoreRead: '<S5>/Data Store Read5' incorporates:
    //   DataStoreWrite: '<S3>/RED Controls'

    GNC2026W_B.DataStoreRead5[2] = GNC2026W_B.Merge[2];

    // DataStoreRead: '<S5>/Data Store Read1'
    GNC2026W_B.DataStoreRead1[2] = GNC2026W_DW.RED_Saturated_Controls[2];

    // DataStoreRead: '<S5>/Data Store Read6'
    memcpy(&GNC2026W_B.DataStoreRead6[0], &GNC2026W_DW.RED_Measured_States[0],
           9U * sizeof(real_T));

    // DataStoreRead: '<S5>/Data Store Read7'
    GNC2026W_B.DataStoreRead7[0] = GNC2026W_DW.RED_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read8'
    GNC2026W_B.DataStoreRead8[0] = GNC2026W_DW.RED_IMU_Measurements[0];

    // DataStoreRead: '<S5>/Data Store Read7'
    GNC2026W_B.DataStoreRead7[1] = GNC2026W_DW.RED_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read8'
    GNC2026W_B.DataStoreRead8[1] = GNC2026W_DW.RED_IMU_Measurements[1];

    // DataStoreRead: '<S5>/Data Store Read7'
    GNC2026W_B.DataStoreRead7[2] = GNC2026W_DW.RED_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read8'
    GNC2026W_B.DataStoreRead8[2] = GNC2026W_DW.RED_IMU_Measurements[2];

    // DataStoreRead: '<S5>/Data Store Read25'
    memcpy(&GNC2026W_B.RED_Duty_Cycle[0], &GNC2026W_DW.RED_Duty_Cycle[0], sizeof
           (real_T) << 3U);

    // DataStoreRead: '<S5>/Data Store Read37'
    GNC2026W_B.RED_Control_Law_Enabler = GNC2026W_DW.RED_Control_Law_Enabler;

    // DataStoreRead: '<S5>/Data Store Read23'
    GNC2026W_B.ARM_Control_Mode = GNC2026W_DW.ARM_Control_Mode;

    // DataStoreRead: '<S5>/Data Store Read21' incorporates:
    //   DataStoreWrite: '<S3>/Data Store Write9'

    GNC2026W_B.DataStoreRead21[0] = rtb_TmpSignalConversionAtSFu_fp[0];
    GNC2026W_B.DataStoreRead21[1] = rtb_TmpSignalConversionAtSFu_fp[1];
    GNC2026W_B.DataStoreRead21[2] = rtb_TmpSignalConversionAtSFu_fp[2];
    for (i = 0; i < 6; i++) {
      // DataStoreRead: '<S5>/Data Store Read20'
      GNC2026W_B.DataStoreRead20[i] = GNC2026W_DW.ARM_Measured_States[i];
    }

    // DataStoreRead: '<S5>/Data Store Read30'
    GNC2026W_B.DataStoreRead30[0] = GNC2026W_DW.ARM_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read22' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read30'

    GNC2026W_B.DataStoreRead22[0] = GNC2026W_DW.ARM_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read24' incorporates:
    //   DataStoreWrite: '<S3>/BLACK Controls'

    GNC2026W_B.DataStoreRead24[0] = GNC2026W_B.Merge1[0];

    // DataStoreRead: '<S5>/Data Store Read9'
    GNC2026W_B.DataStoreRead9[0] = GNC2026W_DW.BLACK_Saturated_Controls[0];

    // DataStoreRead: '<S5>/Data Store Read30'
    GNC2026W_B.DataStoreRead30[1] = GNC2026W_DW.ARM_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read22' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read30'

    GNC2026W_B.DataStoreRead22[1] = GNC2026W_DW.ARM_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read24' incorporates:
    //   DataStoreWrite: '<S3>/BLACK Controls'

    GNC2026W_B.DataStoreRead24[1] = GNC2026W_B.Merge1[1];

    // DataStoreRead: '<S5>/Data Store Read9'
    GNC2026W_B.DataStoreRead9[1] = GNC2026W_DW.BLACK_Saturated_Controls[1];

    // DataStoreRead: '<S5>/Data Store Read30'
    GNC2026W_B.DataStoreRead30[2] = GNC2026W_DW.ARM_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read22' incorporates:
    //   DataStoreRead: '<S5>/Data Store Read30'

    GNC2026W_B.DataStoreRead22[2] = GNC2026W_DW.ARM_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read24' incorporates:
    //   DataStoreWrite: '<S3>/BLACK Controls'

    GNC2026W_B.DataStoreRead24[2] = GNC2026W_B.Merge1[2];

    // DataStoreRead: '<S5>/Data Store Read9'
    GNC2026W_B.DataStoreRead9[2] = GNC2026W_DW.BLACK_Saturated_Controls[2];

    // DataStoreRead: '<S5>/Data Store Read10'
    memcpy(&GNC2026W_B.DataStoreRead10[0], &GNC2026W_DW.BLACK_Measured_States[0],
           9U * sizeof(real_T));

    // DataStoreRead: '<S5>/Data Store Read11'
    GNC2026W_B.DataStoreRead11[0] = GNC2026W_DW.BLACK_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read12'
    GNC2026W_B.DataStoreRead12[0] = GNC2026W_DW.BLACK_IMU_Measurements[0];

    // DataStoreRead: '<S5>/Data Store Read11'
    GNC2026W_B.DataStoreRead11[1] = GNC2026W_DW.BLACK_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read12'
    GNC2026W_B.DataStoreRead12[1] = GNC2026W_DW.BLACK_IMU_Measurements[1];

    // DataStoreRead: '<S5>/Data Store Read11'
    GNC2026W_B.DataStoreRead11[2] = GNC2026W_DW.BLACK_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read12'
    GNC2026W_B.DataStoreRead12[2] = GNC2026W_DW.BLACK_IMU_Measurements[2];

    // DataStoreRead: '<S5>/Data Store Read26'
    memcpy(&GNC2026W_B.BLACK_Duty_Cycle[0], &GNC2026W_DW.BLACK_Duty_Cycles[0],
           sizeof(real_T) << 3U);

    // DataStoreRead: '<S5>/Data Store Read60'
    GNC2026W_B.BLACK_Control_Law_Enabler = GNC2026W_DW.BLACK_Control_Law_Enabler;

    // DataStoreRead: '<S5>/Data Store Read19'
    GNC2026W_B.DataStoreRead19[0] = GNC2026W_DW.BLACK_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read18' incorporates:
    //   DataStoreWrite: '<S3>/BLUE Controls'

    GNC2026W_B.DataStoreRead18[0] = GNC2026W_B.Merge2[0];

    // DataStoreRead: '<S5>/Data Store Read16'
    GNC2026W_B.DataStoreRead16[0] = GNC2026W_DW.BLUE_Saturated_Controls[0];

    // DataStoreRead: '<S5>/Data Store Read19'
    GNC2026W_B.DataStoreRead19[1] = GNC2026W_DW.BLACK_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read18' incorporates:
    //   DataStoreWrite: '<S3>/BLUE Controls'

    GNC2026W_B.DataStoreRead18[1] = GNC2026W_B.Merge2[1];

    // DataStoreRead: '<S5>/Data Store Read16'
    GNC2026W_B.DataStoreRead16[1] = GNC2026W_DW.BLUE_Saturated_Controls[1];

    // DataStoreRead: '<S5>/Data Store Read19'
    GNC2026W_B.DataStoreRead19[2] = GNC2026W_DW.BLACK_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read18' incorporates:
    //   DataStoreWrite: '<S3>/BLUE Controls'

    GNC2026W_B.DataStoreRead18[2] = GNC2026W_B.Merge2[2];

    // DataStoreRead: '<S5>/Data Store Read16'
    GNC2026W_B.DataStoreRead16[2] = GNC2026W_DW.BLUE_Saturated_Controls[2];

    // DataStoreRead: '<S5>/Data Store Read13'
    memcpy(&GNC2026W_B.DataStoreRead13[0], &GNC2026W_DW.BLUE_Measured_States[0],
           9U * sizeof(real_T));

    // DataStoreRead: '<S5>/Data Store Read14'
    GNC2026W_B.DataStoreRead14[0] = GNC2026W_DW.BLUE_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read15'
    GNC2026W_B.DataStoreRead15[0] = GNC2026W_DW.BLUE_IMU_Measurements[0];

    // DataStoreRead: '<S5>/Data Store Read14'
    GNC2026W_B.DataStoreRead14[1] = GNC2026W_DW.BLUE_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read15'
    GNC2026W_B.DataStoreRead15[1] = GNC2026W_DW.BLUE_IMU_Measurements[1];

    // DataStoreRead: '<S5>/Data Store Read14'
    GNC2026W_B.DataStoreRead14[2] = GNC2026W_DW.BLUE_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read15'
    GNC2026W_B.DataStoreRead15[2] = GNC2026W_DW.BLUE_IMU_Measurements[2];

    // DataStoreRead: '<S5>/Data Store Read27'
    memcpy(&GNC2026W_B.BLUE_Duty_Cycle[0], &GNC2026W_DW.BLUE_Duty_Cycles[0],
           sizeof(real_T) << 3U);

    // DataStoreRead: '<S5>/Data Store Read83'
    GNC2026W_B.BLUE_Control_Law_Enabler = GNC2026W_DW.BLUE_Control_Law_Enabler;

    // DataStoreRead: '<S5>/Data Store Read84'
    GNC2026W_B.Float_State = GNC2026W_DW.Float_State;

    // DataStoreRead: '<S5>/Data Store Read85'
    GNC2026W_B.Platform_Identification = GNC2026W_DW.WhoAmI;

    // DataStoreRead: '<S5>/Data Store Read86'
    GNC2026W_B.Simulation_Flag = GNC2026W_DW.isSim;

    // DataStoreRead: '<S5>/Data Store Read2'
    GNC2026W_B.VIS_Confidence = GNC2026W_DW.VIS_Confidence;

    // DataStoreRead: '<S5>/Data Store Read17'
    GNC2026W_B.DataStoreRead17[0] = GNC2026W_DW.BLUE_Desired_States[0];

    // DataStoreRead: '<S5>/Data Store Read'
    GNC2026W_B.VIS_Measured_States[0] = GNC2026W_DW.VIS_Measured_States[0];

    // DataStoreRead: '<S5>/Data Store Read28'
    GNC2026W_B.DataStoreRead28[0] = GNC2026W_DW.BLACK_CV_States[0];

    // DataStoreRead: '<S5>/Data Store Read17'
    GNC2026W_B.DataStoreRead17[1] = GNC2026W_DW.BLUE_Desired_States[1];

    // DataStoreRead: '<S5>/Data Store Read'
    GNC2026W_B.VIS_Measured_States[1] = GNC2026W_DW.VIS_Measured_States[1];

    // DataStoreRead: '<S5>/Data Store Read28'
    GNC2026W_B.DataStoreRead28[1] = GNC2026W_DW.BLACK_CV_States[1];

    // DataStoreRead: '<S5>/Data Store Read17'
    GNC2026W_B.DataStoreRead17[2] = GNC2026W_DW.BLUE_Desired_States[2];

    // DataStoreRead: '<S5>/Data Store Read'
    GNC2026W_B.VIS_Measured_States[2] = GNC2026W_DW.VIS_Measured_States[2];

    // DataStoreRead: '<S5>/Data Store Read28'
    GNC2026W_B.DataStoreRead28[2] = GNC2026W_DW.BLACK_CV_States[2];
    for (i = 0; i < 6; i++) {
      // DataStoreRead: '<S5>/Data Store Read29'
      GNC2026W_B.DataStoreRead29[i] = GNC2026W_DW.BLACK_Filtered_States[i];
    }

    // DataStoreRead: '<S5>/Data Store Read31'
    GNC2026W_B.Desired_Separation_m = GNC2026W_DW.L0;

    // DataStoreRead: '<S5>/Data Store Read34'
    GNC2026W_B.isValid = GNC2026W_DW.isValid;

    // DataStoreRead: '<S5>/Data Store Read35'
    GNC2026W_B.filterConfidence = GNC2026W_DW.filterConfidence;

    // MATLABSystem: '<S210>/MATLAB System' incorporates:
    //   SignalConversion generated from: '<S210>/MATLAB System'

    //         %% Define input properties
    //  Call C-function implementing device output
    b_u1[0] = GNC2026W_B.Time_s;

    // DataStoreRead: '<S5>/Data Store Read32'
    GNC2026W_B.DataStoreRead32[0] = GNC2026W_DW.VIS_LAR_States[0];

    // DataStoreRead: '<S5>/Data Store Read33'
    GNC2026W_B.sigma3[0] = GNC2026W_DW.sigma3[0];

    // DataStoreRead: '<S5>/Data Store Read36'
    GNC2026W_B.DataStoreRead36[0] = GNC2026W_DW.lambda[0];

    // DataStoreRead: '<S5>/Data Store Read38'
    GNC2026W_B.DataStoreRead38[0] = GNC2026W_DW.lambdaFirstOrder[0];

    // DataStoreRead: '<S5>/Data Store Read39'
    GNC2026W_B.DataStoreRead39[0] = GNC2026W_DW.ARM_Joint_Angles_rad[0];

    // MATLABSystem: '<S210>/MATLAB System' incorporates:
    //   SignalConversion generated from: '<S210>/MATLAB System'

    b_u1[1] = GNC2026W_B.DataStoreRead5[0];
    b_u1[4] = GNC2026W_B.DataStoreRead1[0];

    // DataStoreRead: '<S5>/Data Store Read32'
    GNC2026W_B.DataStoreRead32[1] = GNC2026W_DW.VIS_LAR_States[1];

    // DataStoreRead: '<S5>/Data Store Read33'
    GNC2026W_B.sigma3[1] = GNC2026W_DW.sigma3[1];

    // DataStoreRead: '<S5>/Data Store Read36'
    GNC2026W_B.DataStoreRead36[1] = GNC2026W_DW.lambda[1];

    // DataStoreRead: '<S5>/Data Store Read38'
    GNC2026W_B.DataStoreRead38[1] = GNC2026W_DW.lambdaFirstOrder[1];

    // DataStoreRead: '<S5>/Data Store Read39'
    GNC2026W_B.DataStoreRead39[1] = GNC2026W_DW.ARM_Joint_Angles_rad[1];

    // MATLABSystem: '<S210>/MATLAB System' incorporates:
    //   SignalConversion generated from: '<S210>/MATLAB System'

    b_u1[2] = GNC2026W_B.DataStoreRead5[1];
    b_u1[5] = GNC2026W_B.DataStoreRead1[1];

    // DataStoreRead: '<S5>/Data Store Read32'
    GNC2026W_B.DataStoreRead32[2] = GNC2026W_DW.VIS_LAR_States[2];

    // DataStoreRead: '<S5>/Data Store Read33'
    GNC2026W_B.sigma3[2] = GNC2026W_DW.sigma3[2];

    // DataStoreRead: '<S5>/Data Store Read36'
    GNC2026W_B.DataStoreRead36[2] = GNC2026W_DW.lambda[2];

    // DataStoreRead: '<S5>/Data Store Read38'
    GNC2026W_B.DataStoreRead38[2] = GNC2026W_DW.lambdaFirstOrder[2];

    // DataStoreRead: '<S5>/Data Store Read39'
    GNC2026W_B.DataStoreRead39[2] = GNC2026W_DW.ARM_Joint_Angles_rad[2];

    // MATLABSystem: '<S210>/MATLAB System' incorporates:
    //   MATLAB Function: '<S210>/MATLAB Function'
    //   SignalConversion generated from: '<S210>/MATLAB System'

    b_u1[3] = GNC2026W_B.DataStoreRead5[2];
    b_u1[6] = GNC2026W_B.DataStoreRead1[2];
    memcpy(&b_u1[7], &GNC2026W_B.DataStoreRead6[0], 9U * sizeof(real_T));
    b_u1[16] = GNC2026W_B.DataStoreRead7[0];
    b_u1[19] = GNC2026W_B.DataStoreRead8[0];
    b_u1[17] = GNC2026W_B.DataStoreRead7[1];
    b_u1[20] = GNC2026W_B.DataStoreRead8[1];
    b_u1[18] = GNC2026W_B.DataStoreRead7[2];
    b_u1[21] = GNC2026W_B.DataStoreRead8[2];
    memcpy(&b_u1[22], &GNC2026W_B.RED_Duty_Cycle[0], sizeof(real_T) << 3U);
    b_u1[30] = GNC2026W_B.RED_Control_Law_Enabler;
    b_u1[34] = GNC2026W_B.ARM_Control_Mode;
    b_u1[31] = GNC2026W_B.DataStoreRead3[0];
    b_u1[35] = GNC2026W_B.DataStoreRead21[0];
    b_u1[32] = GNC2026W_B.DataStoreRead3[1];
    b_u1[36] = GNC2026W_B.DataStoreRead21[1];
    b_u1[33] = GNC2026W_B.DataStoreRead3[2];
    b_u1[37] = GNC2026W_B.DataStoreRead21[2];
    for (i = 0; i < 6; i++) {
      b_u1[i + 38] = GNC2026W_B.DataStoreRead20[i];
    }

    b_u1[44] = GNC2026W_B.DataStoreRead30[0];
    b_u1[47] = GNC2026W_B.DataStoreRead22[0];
    b_u1[50] = GNC2026W_B.DataStoreRead24[0];
    b_u1[53] = GNC2026W_B.DataStoreRead9[0];
    b_u1[45] = GNC2026W_B.DataStoreRead30[1];
    b_u1[48] = GNC2026W_B.DataStoreRead22[1];
    b_u1[51] = GNC2026W_B.DataStoreRead24[1];
    b_u1[54] = GNC2026W_B.DataStoreRead9[1];
    b_u1[46] = GNC2026W_B.DataStoreRead30[2];
    b_u1[49] = GNC2026W_B.DataStoreRead22[2];
    b_u1[52] = GNC2026W_B.DataStoreRead24[2];
    b_u1[55] = GNC2026W_B.DataStoreRead9[2];
    memcpy(&b_u1[56], &GNC2026W_B.DataStoreRead10[0], 9U * sizeof(real_T));
    b_u1[65] = GNC2026W_B.DataStoreRead11[0];
    b_u1[68] = GNC2026W_B.DataStoreRead12[0];
    b_u1[66] = GNC2026W_B.DataStoreRead11[1];
    b_u1[69] = GNC2026W_B.DataStoreRead12[1];
    b_u1[67] = GNC2026W_B.DataStoreRead11[2];
    b_u1[70] = GNC2026W_B.DataStoreRead12[2];
    memcpy(&b_u1[71], &GNC2026W_B.BLACK_Duty_Cycle[0], sizeof(real_T) << 3U);
    b_u1[79] = GNC2026W_B.BLACK_Control_Law_Enabler;
    b_u1[80] = GNC2026W_B.DataStoreRead19[0];
    b_u1[83] = GNC2026W_B.DataStoreRead18[0];
    b_u1[86] = GNC2026W_B.DataStoreRead16[0];
    b_u1[81] = GNC2026W_B.DataStoreRead19[1];
    b_u1[84] = GNC2026W_B.DataStoreRead18[1];
    b_u1[87] = GNC2026W_B.DataStoreRead16[1];
    b_u1[82] = GNC2026W_B.DataStoreRead19[2];
    b_u1[85] = GNC2026W_B.DataStoreRead18[2];
    b_u1[88] = GNC2026W_B.DataStoreRead16[2];
    memcpy(&b_u1[89], &GNC2026W_B.DataStoreRead13[0], 9U * sizeof(real_T));
    b_u1[98] = GNC2026W_B.DataStoreRead14[0];
    b_u1[101] = GNC2026W_B.DataStoreRead15[0];
    b_u1[99] = GNC2026W_B.DataStoreRead14[1];
    b_u1[102] = GNC2026W_B.DataStoreRead15[1];
    b_u1[100] = GNC2026W_B.DataStoreRead14[2];
    b_u1[103] = GNC2026W_B.DataStoreRead15[2];
    memcpy(&b_u1[104], &GNC2026W_B.BLUE_Duty_Cycle[0], sizeof(real_T) << 3U);
    b_u1[112] = GNC2026W_B.BLUE_Control_Law_Enabler;
    b_u1[116] = GNC2026W_B.Float_State;
    b_u1[117] = GNC2026W_B.Platform_Identification;
    b_u1[118] = GNC2026W_B.Simulation_Flag;
    b_u1[122] = GNC2026W_B.VIS_Confidence;
    b_u1[113] = GNC2026W_B.DataStoreRead17[0];
    b_u1[119] = GNC2026W_B.VIS_Measured_States[0];
    b_u1[123] = GNC2026W_B.DataStoreRead28[0];
    b_u1[114] = GNC2026W_B.DataStoreRead17[1];
    b_u1[120] = GNC2026W_B.VIS_Measured_States[1];
    b_u1[124] = GNC2026W_B.DataStoreRead28[1];
    b_u1[115] = GNC2026W_B.DataStoreRead17[2];
    b_u1[121] = GNC2026W_B.VIS_Measured_States[2];
    b_u1[125] = GNC2026W_B.DataStoreRead28[2];
    for (i = 0; i < 6; i++) {
      b_u1[i + 126] = GNC2026W_B.DataStoreRead29[i];
    }

    b_u1[135] = GNC2026W_B.L;
    b_u1[136] = GNC2026W_B.Desired_Separation_m;
    b_u1[140] = GNC2026W_B.isValid;
    b_u1[141] = GNC2026W_B.filterConfidence;
    b_u1[132] = GNC2026W_B.DataStoreRead32[0];
    b_u1[137] = GNC2026W_B.sigma3[0];
    b_u1[142] = GNC2026W_B.DataStoreRead36[0];
    b_u1[145] = GNC2026W_B.DataStoreRead38[0];
    b_u1[148] = GNC2026W_B.DataStoreRead39[0];
    b_u1[133] = GNC2026W_B.DataStoreRead32[1];
    b_u1[138] = GNC2026W_B.sigma3[1];
    b_u1[143] = GNC2026W_B.DataStoreRead36[1];
    b_u1[146] = GNC2026W_B.DataStoreRead38[1];
    b_u1[149] = GNC2026W_B.DataStoreRead39[1];
    b_u1[134] = GNC2026W_B.DataStoreRead32[2];
    b_u1[139] = GNC2026W_B.sigma3[2];
    b_u1[144] = GNC2026W_B.DataStoreRead36[2];
    b_u1[147] = GNC2026W_B.DataStoreRead38[2];
    b_u1[150] = GNC2026W_B.DataStoreRead39[2];
    appendDataToFile(&b_u1[0], 151.0);

    // DataStoreWrite: '<S18>/Data Store Write' incorporates:
    //   Constant: '<S18>/Constant'

    GNC2026W_DW.isSim = GNC2026W_P.simMode;

    // If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S440>/Constant1'
    //   Constant: '<S440>/Constant2'
    //   DataStoreRead: '<S19>/Data Store Read'
    //   DataStoreRead: '<S19>/Data Store Read1'
    //   Delay: '<S440>/Delay'
    //   RelationalOperator: '<S440>/Relational Operator1'
    //   RelationalOperator: '<S440>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 1.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S19>/Change RED Behavior' incorporates:
      //   ActionPort: '<S413>/Action Port'

      // MATLAB Function: '<S444>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S413>/Data Store Read1'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.RED_Measured_States[2], C_Ib,
        &GNC2026W_DW.sf_CreateRotationMatrix_i);

      // MATLAB Function: '<S439>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S413>/Data Store Read1'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.RED_Measured_States[2], C_bI,
        &GNC2026W_DW.sf_CreateRotationMatrix_e);

      // Product: '<S439>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      rtb_TSamp_ao = C_bI[0] * GNC2026W_B.Merge[0] + GNC2026W_B.Merge[1] * C_bI
        [2];

      // SignalConversion generated from: '<S441>/Product3' incorporates:
      //   Product: '<S439>/Rotate F_I to F_b'

      LARstates_REL[0] = rtb_TSamp_ao;

      // Product: '<S439>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      t15 = GNC2026W_B.Merge[0] * C_bI[1] + GNC2026W_B.Merge[1] * C_bI[3];

      // SignalConversion generated from: '<S441>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/RED Controls'

      LARstates_REL[1] = t15;
      LARstates_REL[2] = GNC2026W_B.Merge[2];

      // MATLAB Function: '<S441>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3[i] = GNC2026W_P.F_thrusters_RED[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (newMeas = 0; newMeas < 8; newMeas++) {
        y[newMeas + (newMeas << 3)] = rtb_Product3[newMeas];
        b_0[3 * newMeas] = b_1[newMeas];
        b_0[3 * newMeas + 1] = c_1[newMeas];
        b_0[3 * newMeas + 2] = GNC2026W_P.thruster_dist2CG_RED[newMeas] / 1000.0;
      }

      for (newMeas = 0; newMeas < 8; newMeas++) {
        for (i = 0; i < 3; i++) {
          rtb_TSamp_dm = 0.0;
          for (vcol = 0; vcol < 8; vcol++) {
            rtb_TSamp_dm += b_0[3 * vcol + i] * y[(newMeas << 3) + vcol];
          }

          rtb_H[i + 3 * newMeas] = rtb_TSamp_dm;
        }
      }

      // End of MATLAB Function: '<S441>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1_pn);
      for (newMeas = 0; newMeas < 8; newMeas++) {
        // Product: '<S441>/Product3' incorporates:
        //   MATLABSystem: '<S441>/Pseudoinverse1'
        //   Product: '<S439>/Rotate F_I to F_b'

        rtb_Product3[newMeas] =
          (GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[newMeas + 8] * t15 +
           GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[newMeas] * rtb_TSamp_ao)
          + GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1[newMeas + 16] *
          LARstates_REL[2];
      }

      // MATLAB Function: '<S438>/MATLAB Function5' incorporates:
      //   Reshape: '<S438>/Reshape'

      GNC2026W_MATLABFunction5(LARstates_REL, rtb_Product3, GNC2026W_B.H_final,
        GNC2026W_B.duty_cycles, GNC2026W_P.MATLABFunction5_max_iters_e,
        GNC2026W_P.MATLABFunction5_tol_g, &GNC2026W_DW.sf_MATLABFunction5_e);

      // MATLAB Function: '<S438>/MATLAB Function8'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles, rtb_Product3,
        &GNC2026W_DW.sf_MATLABFunction8);

      // Outputs for Enabled SubSystem: '<S440>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S445>/Enable'

      if (GNC2026W_DW.Delay_DSTATE >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S445>/In1' incorporates:
        //   DataStoreRead: '<S440>/Data Store Read'

        GNC2026W_B.In1 = GNC2026W_DW.Univ_Time;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC);
      }

      // End of Outputs for SubSystem: '<S440>/Enabled Subsystem'

      // Sum: '<S440>/Subtract' incorporates:
      //   Constant: '<S440>/Constant1'
      //   DataStoreRead: '<S440>/Data Store Read'
      //   Delay: '<S440>/Delay'
      //   RelationalOperator: '<S440>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE = GNC2026W_DW.Univ_Time - GNC2026W_B.In1;

      // Outputs for Enabled SubSystem: '<S440>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S446>/Enable'

      if (GNC2026W_DW.Delay_DSTATE == GNC2026W_P.Constant2_Value_eq) {
        // SignalConversion generated from: '<S446>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h[0], &rtb_Product3[0], sizeof(real_T)
               << 3U);
        srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC);
      }

      // End of Outputs for SubSystem: '<S440>/Enabled Subsystem1'

      // Product: '<S438>/Product1' incorporates:
      //   Constant: '<S440>/Constant2'
      //   Delay: '<S440>/Delay'
      //   RelationalOperator: '<S440>/Relational Operator2'

      for (newMeas = 0; newMeas < 3; newMeas++) {
        rtb_TSamp_ao = 0.0;
        for (i = 0; i < 8; i++) {
          rtb_TSamp_ao += GNC2026W_B.H_final[3 * i + newMeas] *
            GNC2026W_B.ThrustPer_Final_h[i];
        }

        LARstates_REL[newMeas] = rtb_TSamp_ao;
      }

      // End of Product: '<S438>/Product1'

      // DataStoreWrite: '<S413>/Data Store Write1' incorporates:
      //   Product: '<S444>/Rotate F_b to F_I'

      GNC2026W_DW.RED_Saturated_Controls[0] = C_Ib[0] * LARstates_REL[0] +
        LARstates_REL[1] * C_Ib[2];
      GNC2026W_DW.RED_Saturated_Controls[1] = LARstates_REL[0] * C_Ib[1] +
        LARstates_REL[1] * C_Ib[3];
      GNC2026W_DW.RED_Saturated_Controls[2] = LARstates_REL[2];

      // End of Outputs for SubSystem: '<S19>/Change RED Behavior'

      // Update for IfAction SubSystem: '<S19>/Change RED Behavior' incorporates:
      //   ActionPort: '<S413>/Action Port'

      // Update for If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' 
      srUpdateBC(GNC2026W_DW.ChangeREDBehavior_SubsysRanBC);

      // End of Update for SubSystem: '<S19>/Change RED Behavior'
    }

    // End of If: '<S19>/This IF block determines whether or not to run the RED sim//exp ' 

    // DataStoreWrite: '<S19>/Data Store Write'
    memcpy(&GNC2026W_DW.RED_Duty_Cycle[0], &GNC2026W_B.duty_cycles[0], sizeof
           (real_T) << 3U);

    // If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   Constant: '<S416>/Constant1'
    //   Constant: '<S416>/Constant2'
    //   DataStoreRead: '<S19>/Data Store Read'
    //   DataStoreRead: '<S19>/Data Store Read1'
    //   Delay: '<S416>/Delay'
    //   RelationalOperator: '<S416>/Relational Operator1'
    //   RelationalOperator: '<S416>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 2.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S19>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S411>/Action Port'

      // MATLAB Function: '<S420>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S411>/BLACK States'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.BLACK_Measured_States[2], C_Ib,
        &GNC2026W_DW.sf_CreateRotationMatrix);

      // MATLAB Function: '<S415>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S411>/BLACK States'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.BLACK_Measured_States[2], C_bI,
        &GNC2026W_DW.sf_CreateRotationMatrix_a);

      // Product: '<S415>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      rtb_TSamp_ao = C_bI[0] * GNC2026W_B.Merge1[0] + GNC2026W_B.Merge1[1] *
        C_bI[2];

      // SignalConversion generated from: '<S417>/Product3' incorporates:
      //   Product: '<S415>/Rotate F_I to F_b'

      LARstates_REL[0] = rtb_TSamp_ao;

      // Product: '<S415>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      t15 = GNC2026W_B.Merge1[0] * C_bI[1] + GNC2026W_B.Merge1[1] * C_bI[3];

      // SignalConversion generated from: '<S417>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLACK Controls'

      LARstates_REL[1] = t15;
      LARstates_REL[2] = GNC2026W_B.Merge1[2];

      // MATLAB Function: '<S417>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3[i] = GNC2026W_P.F_thrusters_BLACK[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (newMeas = 0; newMeas < 8; newMeas++) {
        y[newMeas + (newMeas << 3)] = rtb_Product3[newMeas];
        b_0[3 * newMeas] = b_1[newMeas];
        b_0[3 * newMeas + 1] = c_1[newMeas];
        b_0[3 * newMeas + 2] = GNC2026W_P.thruster_dist2CG_BLACK[newMeas] /
          1000.0;
      }

      for (newMeas = 0; newMeas < 8; newMeas++) {
        for (i = 0; i < 3; i++) {
          rtb_TSamp_dm = 0.0;
          for (vcol = 0; vcol < 8; vcol++) {
            rtb_TSamp_dm += b_0[3 * vcol + i] * y[(newMeas << 3) + vcol];
          }

          rtb_H[i + 3 * newMeas] = rtb_TSamp_dm;
        }
      }

      // End of MATLAB Function: '<S417>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1);
      for (newMeas = 0; newMeas < 8; newMeas++) {
        // Product: '<S417>/Product3' incorporates:
        //   MATLABSystem: '<S417>/Pseudoinverse1'
        //   Product: '<S415>/Rotate F_I to F_b'

        rtb_Product3[newMeas] =
          (GNC2026W_B.Pseudoinverse1.Pseudoinverse1[newMeas + 8] * t15 +
           GNC2026W_B.Pseudoinverse1.Pseudoinverse1[newMeas] * rtb_TSamp_ao) +
          GNC2026W_B.Pseudoinverse1.Pseudoinverse1[newMeas + 16] *
          LARstates_REL[2];
      }

      // MATLAB Function: '<S414>/MATLAB Function5' incorporates:
      //   Reshape: '<S414>/Reshape'

      GNC2026W_MATLABFunction5(LARstates_REL, rtb_Product3, rtb_H_final,
        GNC2026W_B.duty_cycles_m, GNC2026W_P.MATLABFunction5_max_iters,
        GNC2026W_P.MATLABFunction5_tol, &GNC2026W_DW.sf_MATLABFunction5);

      // MATLAB Function: '<S414>/MATLAB Function1'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles_m, rtb_Product3,
        &GNC2026W_DW.sf_MATLABFunction1_l);

      // Outputs for Enabled SubSystem: '<S416>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S421>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_kz >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S421>/In1' incorporates:
        //   DataStoreRead: '<S416>/Data Store Read'

        GNC2026W_B.In1_g2 = GNC2026W_DW.Univ_Time;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_m);
      }

      // End of Outputs for SubSystem: '<S416>/Enabled Subsystem'

      // Sum: '<S416>/Subtract' incorporates:
      //   Constant: '<S416>/Constant1'
      //   DataStoreRead: '<S416>/Data Store Read'
      //   Delay: '<S416>/Delay'
      //   RelationalOperator: '<S416>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_kz = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g2;

      // Outputs for Enabled SubSystem: '<S416>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S422>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_kz == GNC2026W_P.Constant2_Value_h) {
        // SignalConversion generated from: '<S422>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h5j[0], &rtb_Product3[0], sizeof
               (real_T) << 3U);
        srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_m);
      }

      // End of Outputs for SubSystem: '<S416>/Enabled Subsystem1'

      // Product: '<S414>/Product1' incorporates:
      //   Constant: '<S416>/Constant2'
      //   Delay: '<S416>/Delay'
      //   RelationalOperator: '<S416>/Relational Operator2'

      for (newMeas = 0; newMeas < 3; newMeas++) {
        rtb_TSamp_ao = 0.0;
        for (i = 0; i < 8; i++) {
          rtb_TSamp_ao += rtb_H_final[3 * i + newMeas] *
            GNC2026W_B.ThrustPer_Final_h5j[i];
        }

        LARstates_REL[newMeas] = rtb_TSamp_ao;
      }

      // End of Product: '<S414>/Product1'

      // DataStoreWrite: '<S411>/Data Store Write2' incorporates:
      //   Product: '<S420>/Rotate F_b to F_I'

      GNC2026W_DW.BLACK_Saturated_Controls[0] = C_Ib[0] * LARstates_REL[0] +
        LARstates_REL[1] * C_Ib[2];
      GNC2026W_DW.BLACK_Saturated_Controls[1] = LARstates_REL[0] * C_Ib[1] +
        LARstates_REL[1] * C_Ib[3];
      GNC2026W_DW.BLACK_Saturated_Controls[2] = LARstates_REL[2];

      // End of Outputs for SubSystem: '<S19>/Change BLACK Behavior'

      // Update for IfAction SubSystem: '<S19>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S411>/Action Port'

      // Update for If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' 
      srUpdateBC(GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC);

      // End of Update for SubSystem: '<S19>/Change BLACK Behavior'
    }

    // End of If: '<S19>/This IF block determines whether or not to run the BLACK sim//exp' 

    // DataStoreWrite: '<S19>/Data Store Write1'
    memcpy(&GNC2026W_DW.BLACK_Duty_Cycles[0], &GNC2026W_B.duty_cycles_m[0],
           sizeof(real_T) << 3U);

    // If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   Constant: '<S428>/Constant1'
    //   Constant: '<S428>/Constant2'
    //   DataStoreRead: '<S19>/Data Store Read'
    //   DataStoreRead: '<S19>/Data Store Read1'
    //   Delay: '<S428>/Delay'
    //   RelationalOperator: '<S428>/Relational Operator1'
    //   RelationalOperator: '<S428>/Relational Operator2'

    if ((GNC2026W_DW.WhoAmI == 3.0) || (GNC2026W_DW.isSim == 1.0)) {
      // Outputs for IfAction SubSystem: '<S19>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S412>/Action Port'

      // MATLAB Function: '<S432>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S412>/Data Store Read1'

      GNC2026W_CreateRotationMatrix(GNC2026W_DW.BLUE_Measured_States[2], C_Ib,
        &GNC2026W_DW.sf_CreateRotationMatrix_c);

      // MATLAB Function: '<S427>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S412>/Data Store Read1'

      GNC2026W_CreateRotationMatrix_a(GNC2026W_DW.BLUE_Measured_States[2], C_bI,
        &GNC2026W_DW.sf_CreateRotationMatrix_n);

      // Product: '<S427>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      rtb_TSamp_ao = C_bI[0] * GNC2026W_B.Merge2[0] + GNC2026W_B.Merge2[1] *
        C_bI[2];

      // SignalConversion generated from: '<S429>/Product3' incorporates:
      //   Product: '<S427>/Rotate F_I to F_b'

      LARstates_REL[0] = rtb_TSamp_ao;

      // Product: '<S427>/Rotate F_I to F_b' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      t15 = GNC2026W_B.Merge2[0] * C_bI[1] + GNC2026W_B.Merge2[1] * C_bI[3];

      // SignalConversion generated from: '<S429>/Product3' incorporates:
      //   DataStoreWrite: '<S3>/BLUE Controls'

      LARstates_REL[1] = t15;
      LARstates_REL[2] = GNC2026W_B.Merge2[2];

      // MATLAB Function: '<S429>/MATLAB Function'
      for (i = 0; i < 8; i++) {
        rtb_Product3[i] = GNC2026W_P.F_thrusters_BLUE[i] / 2.0;
      }

      memset(&y[0], 0, sizeof(real_T) << 6U);
      for (newMeas = 0; newMeas < 8; newMeas++) {
        y[newMeas + (newMeas << 3)] = rtb_Product3[newMeas];
        b_0[3 * newMeas] = b_1[newMeas];
        b_0[3 * newMeas + 1] = c_1[newMeas];
        b_0[3 * newMeas + 2] = GNC2026W_P.thruster_dist2CG_BLUE[newMeas] /
          1000.0;
      }

      for (newMeas = 0; newMeas < 8; newMeas++) {
        for (i = 0; i < 3; i++) {
          rtb_TSamp_dm = 0.0;
          for (vcol = 0; vcol < 8; vcol++) {
            rtb_TSamp_dm += b_0[3 * vcol + i] * y[(newMeas << 3) + vcol];
          }

          rtb_H[i + 3 * newMeas] = rtb_TSamp_dm;
        }
      }

      // End of MATLAB Function: '<S429>/MATLAB Function'
      GNC2026W_Pseudoinverse1(rtb_H, &GNC2026W_B.Pseudoinverse1_p);
      for (newMeas = 0; newMeas < 8; newMeas++) {
        // Product: '<S429>/Product3' incorporates:
        //   MATLABSystem: '<S429>/Pseudoinverse1'
        //   Product: '<S427>/Rotate F_I to F_b'

        rtb_Product3[newMeas] =
          (GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[newMeas + 8] * t15 +
           GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[newMeas] * rtb_TSamp_ao) +
          GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1[newMeas + 16] *
          LARstates_REL[2];
      }

      // MATLAB Function: '<S426>/MATLAB Function5' incorporates:
      //   Reshape: '<S426>/Reshape'

      GNC2026W_MATLABFunction5(LARstates_REL, rtb_Product3, GNC2026W_B.H_final_j,
        GNC2026W_B.duty_cycles_j, GNC2026W_P.MATLABFunction5_max_iters_b,
        GNC2026W_P.MATLABFunction5_tol_j, &GNC2026W_DW.sf_MATLABFunction5_i);

      // MATLAB Function: '<S426>/MATLAB Function1'
      GNC2026W_MATLABFunction1(GNC2026W_B.duty_cycles_j, rtb_Product3,
        &GNC2026W_DW.sf_MATLABFunction1_i);

      // Outputs for Enabled SubSystem: '<S428>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S433>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_k >= 1.0 / GNC2026W_P.PWMFreq) {
        // SignalConversion generated from: '<S433>/In1' incorporates:
        //   DataStoreRead: '<S428>/Data Store Read'

        GNC2026W_B.In1_g = GNC2026W_DW.Univ_Time;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_c);
      }

      // End of Outputs for SubSystem: '<S428>/Enabled Subsystem'

      // Sum: '<S428>/Subtract' incorporates:
      //   Constant: '<S428>/Constant1'
      //   DataStoreRead: '<S428>/Data Store Read'
      //   Delay: '<S428>/Delay'
      //   RelationalOperator: '<S428>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_k = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g;

      // Outputs for Enabled SubSystem: '<S428>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S434>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_k == GNC2026W_P.Constant2_Value_fq) {
        // SignalConversion generated from: '<S434>/ThrustPer_Final'
        memcpy(&GNC2026W_B.ThrustPer_Final_h5[0], &rtb_Product3[0], sizeof
               (real_T) << 3U);
        srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_b);
      }

      // End of Outputs for SubSystem: '<S428>/Enabled Subsystem1'

      // Product: '<S426>/Product1' incorporates:
      //   Constant: '<S428>/Constant2'
      //   Delay: '<S428>/Delay'
      //   RelationalOperator: '<S428>/Relational Operator2'

      for (newMeas = 0; newMeas < 3; newMeas++) {
        rtb_TSamp_ao = 0.0;
        for (i = 0; i < 8; i++) {
          rtb_TSamp_ao += GNC2026W_B.H_final_j[3 * i + newMeas] *
            GNC2026W_B.ThrustPer_Final_h5[i];
        }

        LARstates_REL[newMeas] = rtb_TSamp_ao;
      }

      // End of Product: '<S426>/Product1'

      // DataStoreWrite: '<S412>/Data Store Write3' incorporates:
      //   Product: '<S432>/Rotate F_b to F_I'

      GNC2026W_DW.BLUE_Saturated_Controls[0] = C_Ib[0] * LARstates_REL[0] +
        LARstates_REL[1] * C_Ib[2];
      GNC2026W_DW.BLUE_Saturated_Controls[1] = LARstates_REL[0] * C_Ib[1] +
        LARstates_REL[1] * C_Ib[3];
      GNC2026W_DW.BLUE_Saturated_Controls[2] = LARstates_REL[2];

      // End of Outputs for SubSystem: '<S19>/Change BLUE Behavior'

      // Update for IfAction SubSystem: '<S19>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S412>/Action Port'

      // Update for If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' 
      srUpdateBC(GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC);

      // End of Update for SubSystem: '<S19>/Change BLUE Behavior'
    }

    // End of If: '<S19>/This IF block determines whether or not to run the BLUE sim//exp' 

    // DataStoreWrite: '<S19>/Data Store Write2'
    memcpy(&GNC2026W_DW.BLUE_Duty_Cycles[0], &GNC2026W_B.duty_cycles_j[0],
           sizeof(real_T) << 3U);

    // SignalConversion generated from: '<S19>/UDP Send' incorporates:
    //   Constant: '<S19>/PWM Frequency'
    //   Constant: '<S19>/Safety Number'
    //   Gain: '<S19>/Gain'
    //   Gain: '<S19>/Gain1'
    //   Gain: '<S19>/Gain2'
    //   Gain: '<S19>/Gain3'
    //   Gain: '<S19>/Gain4'
    //   Gain: '<S19>/Gain5'
    //   Gain: '<S19>/Gain6'
    //   Gain: '<S19>/Gain7'
    //   Sum: '<S19>/Sum'
    //   Sum: '<S19>/Sum1'
    //   Sum: '<S19>/Sum2'
    //   Sum: '<S19>/Sum3'
    //   Sum: '<S19>/Sum4'
    //   Sum: '<S19>/Sum5'
    //   Sum: '<S19>/Sum6'
    //   Sum: '<S19>/Sum7'

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

    // If: '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   Constant: '<S317>/Constant1'
    //   Constant: '<S317>/Constant2'
    //   Constant: '<S330>/Constant3'
    //   Constant: '<S346>/Constant1'
    //   Constant: '<S346>/Constant2'
    //   Constant: '<S358>/Constant3'
    //   DataStoreRead: '<Root>/Data Store Read1'
    //   Delay: '<S317>/Delay'
    //   Delay: '<S330>/Delay1'
    //   Delay: '<S346>/Delay'
    //   Delay: '<S358>/Delay1'
    //   RelationalOperator: '<S317>/Relational Operator1'
    //   RelationalOperator: '<S317>/Relational Operator2'
    //   RelationalOperator: '<S330>/Relational Operator'
    //   RelationalOperator: '<S346>/Relational Operator1'
    //   RelationalOperator: '<S346>/Relational Operator2'
    //   RelationalOperator: '<S358>/Relational Operator'
    //   Sum: '<S330>/Subtract2'
    //   Sum: '<S358>/Subtract2'

    if (GNC2026W_DW.isSim == 1.0) {
      // Outputs for IfAction SubSystem: '<Root>/Simulate Plant Dynamics' incorporates:
      //   ActionPort: '<S17>/Action Port'

      // MATLAB Function: '<S318>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S312>/Saturated Control  Commands for BLACK'

      GNC2026W_B.x_ddot_n[0] = GNC2026W_DW.BLACK_Saturated_Controls[0] /
        GNC2026W_P.mBLACK;
      GNC2026W_B.x_ddot_n[1] = GNC2026W_DW.BLACK_Saturated_Controls[1] /
        GNC2026W_P.mBLACK;
      GNC2026W_B.x_ddot_n[2] = GNC2026W_DW.BLACK_Saturated_Controls[2] /
        GNC2026W_P.IBLACK;

      // DiscreteIntegrator: '<S318>/Acceleration  to Velocity'
      rtb_TSamp_ao = GNC2026W_P.AccelerationtoVelocity_gainva_h *
        GNC2026W_B.x_ddot_n[0] + GNC2026W_DW.AccelerationtoVelocity_DSTATE[0];
      GNC2026W_DW.AccelerationtoVelocity_DSTATE[0] = rtb_TSamp_ao;

      // DiscreteIntegrator: '<S318>/Velocity to Position'
      GNC2026W_DW.VelocitytoPosition_DSTATE[0] +=
        GNC2026W_P.VelocitytoPosition_gainval_d * rtb_TSamp_ao;

      // DiscreteIntegrator: '<S318>/Acceleration  to Velocity'
      rtb_TSamp_ao = GNC2026W_P.AccelerationtoVelocity_gainva_h *
        GNC2026W_B.x_ddot_n[1] + GNC2026W_DW.AccelerationtoVelocity_DSTATE[1];
      GNC2026W_DW.AccelerationtoVelocity_DSTATE[1] = rtb_TSamp_ao;

      // DiscreteIntegrator: '<S318>/Velocity to Position'
      GNC2026W_DW.VelocitytoPosition_DSTATE[1] +=
        GNC2026W_P.VelocitytoPosition_gainval_d * rtb_TSamp_ao;

      // DiscreteIntegrator: '<S318>/Acceleration  to Velocity'
      rtb_TSamp_ao = GNC2026W_P.AccelerationtoVelocity_gainva_h *
        GNC2026W_B.x_ddot_n[2] + GNC2026W_DW.AccelerationtoVelocity_DSTATE[2];
      GNC2026W_DW.AccelerationtoVelocity_DSTATE[2] = rtb_TSamp_ao;

      // DiscreteIntegrator: '<S318>/Velocity to Position'
      GNC2026W_DW.VelocitytoPosition_DSTATE[2] +=
        GNC2026W_P.VelocitytoPosition_gainval_d * rtb_TSamp_ao;

      // Outputs for Enabled SubSystem: '<S317>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S331>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_f >= GNC2026W_P.dataRate) {
        // SignalConversion generated from: '<S331>/In1' incorporates:
        //   DataStoreRead: '<S317>/Data Store Read'

        GNC2026W_B.In1_g20asdt = GNC2026W_DW.Univ_Time;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_bo);
      }

      // End of Outputs for SubSystem: '<S317>/Enabled Subsystem'

      // Sum: '<S317>/Subtract' incorporates:
      //   Constant: '<S317>/Constant1'
      //   DataStoreRead: '<S317>/Data Store Read'
      //   Delay: '<S317>/Delay'
      //   RelationalOperator: '<S317>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_f = GNC2026W_DW.Univ_Time -
        GNC2026W_B.In1_g20asdt;

      // Outputs for Enabled SubSystem: '<S317>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S332>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_f == GNC2026W_P.Constant2_Value_e) {
        // SignalConversion generated from: '<S332>/ThrustPer_Final' incorporates:
        //   RandomNumber: '<S312>/Add Noise'
        //   Sum: '<S312>/Sum'

        GNC2026W_B.ThrustPer_Final_h5jzayd[0] = GNC2026W_DW.NextOutput_f +
          GNC2026W_DW.VelocitytoPosition_DSTATE[0];
        GNC2026W_B.ThrustPer_Final_h5jzayd[1] = GNC2026W_DW.NextOutput_f +
          GNC2026W_DW.VelocitytoPosition_DSTATE[1];
        GNC2026W_B.ThrustPer_Final_h5jzayd[2] = GNC2026W_DW.NextOutput_f +
          GNC2026W_DW.VelocitytoPosition_DSTATE[2];
        srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_p);
      }

      // End of Outputs for SubSystem: '<S317>/Enabled Subsystem1'

      // Outputs for Enabled SubSystem: '<S330>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S333>/Enable'

      if (GNC2026W_B.ThrustPer_Final_h5jzayd[0] - GNC2026W_DW.Delay1_DSTATE_h !=
          GNC2026W_P.Constant3_Value_h) {
        // SignalConversion generated from: '<S333>/y2-y1' incorporates:
        //   Delay: '<S330>/Delay2'
        //   Sum: '<S330>/Subtract1'

        GNC2026W_B.y2y1_ob4jq5 = GNC2026W_B.In1_g20asdt -
          GNC2026W_DW.Delay2_DSTATE_i;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_c);
      }

      // End of Outputs for SubSystem: '<S330>/Enabled Subsystem3'

      // MATLAB Function: '<S330>/MATLAB Function' incorporates:
      //   Constant: '<S317>/Constant1'
      //   Constant: '<S317>/Constant2'
      //   Constant: '<S330>/Constant3'
      //   Delay: '<S317>/Delay'
      //   Delay: '<S330>/Delay1'
      //   RelationalOperator: '<S317>/Relational Operator2'
      //   RelationalOperator: '<S330>/Relational Operator'
      //   Sum: '<S330>/Subtract2'

      GNC2026W_MATLABFunction_oy(GNC2026W_B.y2y1_ob4jq5, GNC2026W_P.dataRate,
        &rtb_TSamp_ao, &GNC2026W_DW.sf_MATLABFunction_o);

      // RelationalOperator: '<S321>/Relational Operator' incorporates:
      //   Constant: '<S321>/Constant3'
      //   Delay: '<S321>/Delay1'
      //   Sum: '<S321>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.ThrustPer_Final_h5jzayd[0] -
        GNC2026W_DW.Delay1_DSTATE_p[0] != GNC2026W_P.Constant3_Value_it);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.ThrustPer_Final_h5jzayd[1] -
        GNC2026W_DW.Delay1_DSTATE_p[1] != GNC2026W_P.Constant3_Value_it);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.ThrustPer_Final_h5jzayd[2] -
        GNC2026W_DW.Delay1_DSTATE_p[2] != GNC2026W_P.Constant3_Value_it);

      // Outputs for Enabled SubSystem: '<S321>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_b(rtb_RelationalOperator_lm,
        GNC2026W_B.ThrustPer_Final_h5jzayd, rtb_TSamp_ao, GNC2026W_B.dy_cg,
        &GNC2026W_DW.EnabledSubsystem_b, &GNC2026W_P.EnabledSubsystem_b);

      // End of Outputs for SubSystem: '<S321>/Enabled Subsystem'

      // RelationalOperator: '<S320>/Relational Operator' incorporates:
      //   Constant: '<S320>/Constant3'
      //   Delay: '<S320>/Delay1'
      //   Sum: '<S320>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy_cg[0] -
        GNC2026W_DW.Delay1_DSTATE_k[0] != GNC2026W_P.Constant3_Value_os);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy_cg[1] -
        GNC2026W_DW.Delay1_DSTATE_k[1] != GNC2026W_P.Constant3_Value_os);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy_cg[2] -
        GNC2026W_DW.Delay1_DSTATE_k[2] != GNC2026W_P.Constant3_Value_os);

      // Outputs for Enabled SubSystem: '<S320>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(rtb_RelationalOperator_lm, GNC2026W_B.dy_cg,
        rtb_TSamp_ao, GNC2026W_B.dy_pi, &GNC2026W_B.EnabledSubsystem_m,
        &GNC2026W_DW.EnabledSubsystem_m, &GNC2026W_P.EnabledSubsystem_m);

      // End of Outputs for SubSystem: '<S320>/Enabled Subsystem'

      // DataStoreWrite: '<S315>/Measured States for BLACK' incorporates:
      //   Trigonometry: '<S322>/Atan2'
      //   Trigonometry: '<S322>/Cos'
      //   Trigonometry: '<S322>/Sin'

      GNC2026W_DW.BLACK_Measured_States[0] = GNC2026W_B.ThrustPer_Final_h5jzayd
        [0];
      GNC2026W_DW.BLACK_Measured_States[1] = GNC2026W_B.ThrustPer_Final_h5jzayd
        [1];
      GNC2026W_DW.BLACK_Measured_States[2] = rt_atan2d_snf(sin
        (GNC2026W_B.ThrustPer_Final_h5jzayd[2]), cos
        (GNC2026W_B.ThrustPer_Final_h5jzayd[2]));
      GNC2026W_DW.BLACK_Measured_States[3] = GNC2026W_B.dy_cg[0];
      GNC2026W_DW.BLACK_Measured_States[6] = GNC2026W_B.dy_pi[0];
      GNC2026W_DW.BLACK_Measured_States[4] = GNC2026W_B.dy_cg[1];
      GNC2026W_DW.BLACK_Measured_States[7] = GNC2026W_B.dy_pi[1];
      GNC2026W_DW.BLACK_Measured_States[5] = GNC2026W_B.dy_cg[2];
      GNC2026W_DW.BLACK_Measured_States[8] = GNC2026W_B.dy_pi[2];

      // Update for Delay: '<S341>/Delay' incorporates:
      //   DataStoreRead: '<S319>/Data Store Read3'
      //   Delay: '<S341>/Delay1'
      //   MATLAB Function: '<S341>/MATLAB Function'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_p, GNC2026W_DW.Delay1_DSTATE_pv, &rtb_TSamp_ao,
        &GNC2026W_DW.Delay_DSTATE_p, &GNC2026W_DW.sf_MATLABFunction_l2);

      // MATLAB Function: '<S319>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S319>/Data Store Read3'
      //   SignalConversion generated from: '<S337>/ SFunction '

      rtb_TSamp_eu = sin(rtb_TSamp_ao);
      rtb_TSamp_dm = cos(rtb_TSamp_ao);
      P_minus[0] = rtb_TSamp_dm;
      P_minus[3] = rtb_TSamp_eu;
      P_minus[6] = 0.0;
      P_minus[1] = -rtb_TSamp_eu;
      P_minus[4] = rtb_TSamp_dm;
      P_minus[7] = 0.0;
      P_minus[2] = 0.0;
      P_minus[5] = 0.0;
      P_minus[8] = 1.0;
      q = GNC2026W_B.ThrustPer_Final_h5jzayd[2] - rtb_TSamp_ao;
      K[0] = ((cos(q) * 0.145 - GNC2026W_DW.RED_Measured_States[0] *
               rtb_TSamp_dm) - GNC2026W_DW.RED_Measured_States[1] * rtb_TSamp_eu)
        - 0.125;
      K[1] = ((sin(q) * 0.145 + GNC2026W_DW.RED_Measured_States[0] *
               rtb_TSamp_eu) - GNC2026W_DW.RED_Measured_States[1] * rtb_TSamp_dm)
        - 0.03;
      K[2] = -rtb_TSamp_ao;
      rtb_TSamp_eu = GNC2026W_B.ThrustPer_Final_h5jzayd[1];
      rtb_TSamp_dm = GNC2026W_B.ThrustPer_Final_h5jzayd[0];
      q = GNC2026W_B.ThrustPer_Final_h5jzayd[2];
      for (i = 0; i < 3; i++) {
        t15 = ((P_minus[i + 3] * rtb_TSamp_eu + P_minus[i] * rtb_TSamp_dm) +
               P_minus[i + 6] * q) + K[i];
        GNC2026W_B.r_LAR_cam_k[i] = t15;

        // Sum: '<S319>/Sum' incorporates:
        //   RandomNumber: '<Root>/Gaussian Noise'

        x_minus[i] = t15 + GNC2026W_DW.NextOutput;
      }

      // End of MATLAB Function: '<S319>/MATLAB Function'

      // MATLAB Function: '<S319>/Sample and Hold' incorporates:
      //   Sum: '<S319>/Sum'

      if (!GNC2026W_DW.k_not_empty_i) {
        GNC2026W_DW.k_not_empty_i = true;
        GNC2026W_DW.y_hold_i[0] = x_minus[0];
        GNC2026W_DW.y_hold_i[1] = x_minus[1];
        GNC2026W_DW.y_hold_i[2] = x_minus[2];
      }

      rtb_TSamp_eu = GNC2026W_P.CVrate / GNC2026W_P.baseRate;
      rtb_TSamp_dm = GNC2026W_DW.k_g;
      if (rtb_TSamp_eu == 0.0) {
        if (GNC2026W_DW.k_g == 0.0) {
          rtb_TSamp_dm = rtb_TSamp_eu;
        }
      } else if (rtIsNaN(GNC2026W_DW.k_g)) {
        rtb_TSamp_dm = (rtNaN);
      } else if (rtIsNaN(rtb_TSamp_eu)) {
        rtb_TSamp_dm = (rtNaN);
      } else if (rtIsInf(GNC2026W_DW.k_g)) {
        rtb_TSamp_dm = (rtNaN);
      } else if (GNC2026W_DW.k_g == 0.0) {
        rtb_TSamp_dm = 0.0 / rtb_TSamp_eu;
      } else if (rtIsInf(rtb_TSamp_eu)) {
        if ((rtb_TSamp_eu < 0.0) != (GNC2026W_DW.k_g < 0.0)) {
          rtb_TSamp_dm = rtb_TSamp_eu;
        }
      } else {
        rtb_TSamp_dm = fmod(GNC2026W_DW.k_g, rtb_TSamp_eu);
        rEQ0 = (rtb_TSamp_dm == 0.0);
        if ((!rEQ0) && (rtb_TSamp_eu > floor(rtb_TSamp_eu))) {
          q = fabs(GNC2026W_DW.k_g / rtb_TSamp_eu);
          rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
        }

        if (rEQ0) {
          rtb_TSamp_dm = rtb_TSamp_eu * 0.0;
        } else if (((rtb_TSamp_dm < 0.0) && (!(rtb_TSamp_eu < 0.0))) ||
                   ((!(rtb_TSamp_dm < 0.0)) && (rtb_TSamp_eu < 0.0))) {
          rtb_TSamp_dm += rtb_TSamp_eu;
        }
      }

      if (rtb_TSamp_dm == 0.0) {
        GNC2026W_DW.y_hold_i[0] = x_minus[0];
        GNC2026W_DW.y_hold_i[1] = x_minus[1];
        GNC2026W_DW.y_hold_i[2] = x_minus[2];
      }

      GNC2026W_DW.k_g++;

      // MATLAB Function: '<S319>/MATLAB Function1'
      GNC2026W_B.isValid_b = 1.0;
      GNC2026W_DW.k_hf++;

      // MATLAB Function: '<S319>/Sample and Hold' incorporates:
      //   DataStoreWrite: '<S319>/Data Store Write'

      GNC2026W_DW.BLACK_CV_States[0] = GNC2026W_DW.y_hold_i[0];

      // MATLAB Function: '<S319>/MATLAB Function1'
      GNC2026W_B.data[0] = 0.0;

      // MATLAB Function: '<S319>/Sample and Hold' incorporates:
      //   DataStoreWrite: '<S319>/Data Store Write'

      GNC2026W_DW.BLACK_CV_States[1] = GNC2026W_DW.y_hold_i[1];

      // MATLAB Function: '<S319>/MATLAB Function1'
      GNC2026W_B.data[1] = 0.0;

      // MATLAB Function: '<S319>/Sample and Hold' incorporates:
      //   DataStoreWrite: '<S319>/Data Store Write'

      GNC2026W_DW.BLACK_CV_States[2] = GNC2026W_DW.y_hold_i[2];

      // MATLAB Function: '<S319>/MATLAB Function1'
      GNC2026W_B.data[2] = 0.0;

      // DataStoreWrite: '<S319>/Data Store Write2'
      GNC2026W_DW.isValid = GNC2026W_B.isValid_b;

      // MATLAB Function: '<S319>/CV Noise'
      if (GNC2026W_rand_e() < 0.5) {
        GNC2026W_rand_e();
      }

      // End of MATLAB Function: '<S319>/CV Noise'

      // MATLAB Function: '<S343>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S313>/Saturated Control  Commands for BLUE'

      GNC2026W_B.x_ddot_b[0] = GNC2026W_DW.BLUE_Saturated_Controls[0] /
        GNC2026W_P.mBLUE;
      GNC2026W_B.x_ddot_b[1] = GNC2026W_DW.BLUE_Saturated_Controls[1] /
        GNC2026W_P.mBLUE;
      GNC2026W_B.x_ddot_b[2] = GNC2026W_DW.BLUE_Saturated_Controls[2] /
        GNC2026W_P.IBLUE;

      // DiscreteIntegrator: '<S343>/Acceleration  to Velocity'
      rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainva_a *
        GNC2026W_B.x_ddot_b[0] + GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[0];
      GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[0] = rtb_TSamp_eu;

      // DiscreteIntegrator: '<S343>/Velocity to Position'
      GNC2026W_DW.VelocitytoPosition_DSTATE_f[0] +=
        GNC2026W_P.VelocitytoPosition_gainval_dt * rtb_TSamp_eu;

      // DiscreteIntegrator: '<S343>/Acceleration  to Velocity'
      rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainva_a *
        GNC2026W_B.x_ddot_b[1] + GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[1];
      GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[1] = rtb_TSamp_eu;

      // DiscreteIntegrator: '<S343>/Velocity to Position'
      GNC2026W_DW.VelocitytoPosition_DSTATE_f[1] +=
        GNC2026W_P.VelocitytoPosition_gainval_dt * rtb_TSamp_eu;

      // DiscreteIntegrator: '<S343>/Acceleration  to Velocity'
      rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainva_a *
        GNC2026W_B.x_ddot_b[2] + GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[2];
      GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[2] = rtb_TSamp_eu;

      // DiscreteIntegrator: '<S343>/Velocity to Position'
      GNC2026W_DW.VelocitytoPosition_DSTATE_f[2] +=
        GNC2026W_P.VelocitytoPosition_gainval_dt * rtb_TSamp_eu;

      // Outputs for Enabled SubSystem: '<S346>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S359>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_l >= GNC2026W_P.dataRate) {
        // SignalConversion generated from: '<S359>/In1' incorporates:
        //   DataStoreRead: '<S346>/Data Store Read'

        GNC2026W_B.In1_g20asd = GNC2026W_DW.Univ_Time;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_d);
      }

      // End of Outputs for SubSystem: '<S346>/Enabled Subsystem'

      // Sum: '<S346>/Subtract' incorporates:
      //   Constant: '<S346>/Constant1'
      //   DataStoreRead: '<S346>/Data Store Read'
      //   Delay: '<S346>/Delay'
      //   RelationalOperator: '<S346>/Relational Operator1'

      GNC2026W_DW.Delay_DSTATE_l = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g20asd;

      // Outputs for Enabled SubSystem: '<S346>/Enabled Subsystem1' incorporates:
      //   EnablePort: '<S360>/Enable'

      if (GNC2026W_DW.Delay_DSTATE_l == GNC2026W_P.Constant2_Value_kh) {
        // SignalConversion generated from: '<S360>/ThrustPer_Final' incorporates:
        //   RandomNumber: '<S313>/Add Noise'
        //   Sum: '<S313>/Sum1'

        GNC2026W_B.ThrustPer_Final_h5jzay[0] = GNC2026W_DW.NextOutput_m +
          GNC2026W_DW.VelocitytoPosition_DSTATE_f[0];
        GNC2026W_B.ThrustPer_Final_h5jzay[1] = GNC2026W_DW.NextOutput_m +
          GNC2026W_DW.VelocitytoPosition_DSTATE_f[1];
        GNC2026W_B.ThrustPer_Final_h5jzay[2] = GNC2026W_DW.NextOutput_m +
          GNC2026W_DW.VelocitytoPosition_DSTATE_f[2];
        srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_h);
      }

      // End of Outputs for SubSystem: '<S346>/Enabled Subsystem1'

      // Outputs for Enabled SubSystem: '<S358>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S361>/Enable'

      if (GNC2026W_B.ThrustPer_Final_h5jzay[0] - GNC2026W_DW.Delay1_DSTATE_dx !=
          GNC2026W_P.Constant3_Value_bf) {
        // SignalConversion generated from: '<S361>/y2-y1' incorporates:
        //   Delay: '<S358>/Delay2'
        //   Sum: '<S358>/Subtract1'

        GNC2026W_B.y2y1_ob4jq = GNC2026W_B.In1_g20asd -
          GNC2026W_DW.Delay2_DSTATE_hf;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_b);
      }

      // End of Outputs for SubSystem: '<S358>/Enabled Subsystem3'

      // MATLAB Function: '<S358>/MATLAB Function' incorporates:
      //   Constant: '<S346>/Constant1'
      //   Constant: '<S346>/Constant2'
      //   Constant: '<S358>/Constant3'
      //   Delay: '<S346>/Delay'
      //   Delay: '<S358>/Delay1'
      //   RelationalOperator: '<S346>/Relational Operator2'
      //   RelationalOperator: '<S358>/Relational Operator'
      //   Sum: '<S358>/Subtract2'

      GNC2026W_MATLABFunction_oy(GNC2026W_B.y2y1_ob4jq, GNC2026W_P.dataRate,
        &rtb_TSamp_eu, &GNC2026W_DW.sf_MATLABFunction_g);

      // RelationalOperator: '<S349>/Relational Operator' incorporates:
      //   Constant: '<S349>/Constant3'
      //   Delay: '<S349>/Delay1'
      //   Sum: '<S349>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.ThrustPer_Final_h5jzay[0] -
        GNC2026W_DW.Delay1_DSTATE_hq[0] != GNC2026W_P.Constant3_Value_o2);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.ThrustPer_Final_h5jzay[1] -
        GNC2026W_DW.Delay1_DSTATE_hq[1] != GNC2026W_P.Constant3_Value_o2);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.ThrustPer_Final_h5jzay[2] -
        GNC2026W_DW.Delay1_DSTATE_hq[2] != GNC2026W_P.Constant3_Value_o2);

      // Outputs for Enabled SubSystem: '<S349>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_b(rtb_RelationalOperator_lm,
        GNC2026W_B.ThrustPer_Final_h5jzay, rtb_TSamp_eu, GNC2026W_B.dy_b,
        &GNC2026W_DW.EnabledSubsystem_i, &GNC2026W_P.EnabledSubsystem_i);

      // End of Outputs for SubSystem: '<S349>/Enabled Subsystem'

      // RelationalOperator: '<S348>/Relational Operator' incorporates:
      //   Constant: '<S348>/Constant3'
      //   Delay: '<S348>/Delay1'
      //   Sum: '<S348>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy_b[0] -
        GNC2026W_DW.Delay1_DSTATE_di[0] != GNC2026W_P.Constant3_Value_f4);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy_b[1] -
        GNC2026W_DW.Delay1_DSTATE_di[1] != GNC2026W_P.Constant3_Value_f4);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy_b[2] -
        GNC2026W_DW.Delay1_DSTATE_di[2] != GNC2026W_P.Constant3_Value_f4);

      // Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem(rtb_RelationalOperator_lm, GNC2026W_B.dy_b,
        rtb_TSamp_eu, GNC2026W_B.dy_hq, &GNC2026W_B.EnabledSubsystem_k,
        &GNC2026W_DW.EnabledSubsystem_k, &GNC2026W_P.EnabledSubsystem_k);

      // End of Outputs for SubSystem: '<S348>/Enabled Subsystem'

      // DataStoreWrite: '<S344>/Measured States for BLUE' incorporates:
      //   Trigonometry: '<S350>/Atan2'
      //   Trigonometry: '<S350>/Cos'
      //   Trigonometry: '<S350>/Sin'

      GNC2026W_DW.BLUE_Measured_States[0] = GNC2026W_B.ThrustPer_Final_h5jzay[0];
      GNC2026W_DW.BLUE_Measured_States[1] = GNC2026W_B.ThrustPer_Final_h5jzay[1];
      GNC2026W_DW.BLUE_Measured_States[2] = rt_atan2d_snf(sin
        (GNC2026W_B.ThrustPer_Final_h5jzay[2]), cos
        (GNC2026W_B.ThrustPer_Final_h5jzay[2]));
      GNC2026W_DW.BLUE_Measured_States[3] = GNC2026W_B.dy_b[0];
      GNC2026W_DW.BLUE_Measured_States[6] = GNC2026W_B.dy_hq[0];
      GNC2026W_DW.BLUE_Measured_States[4] = GNC2026W_B.dy_b[1];
      GNC2026W_DW.BLUE_Measured_States[7] = GNC2026W_B.dy_hq[1];
      GNC2026W_DW.BLUE_Measured_States[5] = GNC2026W_B.dy_b[2];
      GNC2026W_DW.BLUE_Measured_States[8] = GNC2026W_B.dy_hq[2];

      // If: '<S314>/If' incorporates:
      //   Constant: '<S314>/Constant'
      //   Constant: '<S368>/Constant1'
      //   Constant: '<S368>/Constant2'
      //   Constant: '<S374>/Constant3'
      //   Constant: '<S386>/Constant3'
      //   Constant: '<S393>/Constant1'
      //   Constant: '<S393>/Constant2'
      //   Constant: '<S405>/Constant3'
      //   Delay: '<S368>/Delay'
      //   Delay: '<S374>/Delay1'
      //   Delay: '<S386>/Delay1'
      //   Delay: '<S393>/Delay'
      //   Delay: '<S405>/Delay1'
      //   RelationalOperator: '<S368>/Relational Operator1'
      //   RelationalOperator: '<S368>/Relational Operator2'
      //   RelationalOperator: '<S374>/Relational Operator'
      //   RelationalOperator: '<S386>/Relational Operator'
      //   RelationalOperator: '<S393>/Relational Operator1'
      //   RelationalOperator: '<S393>/Relational Operator2'
      //   RelationalOperator: '<S405>/Relational Operator'
      //   SignalConversion generated from: '<S388>/ThrustPer_Final'
      //   Sum: '<S374>/Subtract1'
      //   Sum: '<S386>/Subtract2'
      //   Sum: '<S405>/Subtract2'

      if ((GNC2026W_P.platformSelection == 4.0) || (GNC2026W_P.platformSelection
           == 5.0) || (GNC2026W_P.platformSelection == 10.0) ||
          (GNC2026W_P.platformSelection == 11.0)) {
        // Outputs for IfAction SubSystem: '<S314>/RED + ARM' incorporates:
        //   ActionPort: '<S363>/Action Port'

        // MATLAB Function: '<S363>/Inertia Function 1' incorporates:
        //   Delay: '<S363>/Delay'
        //   MATLAB Function: '<S363>/Coriolis Function1'

        t2_tmp = GNC2026W_P.a1 + GNC2026W_P.b1;
        q_tmp = GNC2026W_DW.Delay_DSTATE_fb[2] + GNC2026W_DW.Delay_DSTATE_fb[3];
        absx = cos(q_tmp);
        t15 = GNC2026W_P.a1 * GNC2026W_P.mPROX;
        rtb_TSamp_eu = (GNC2026W_P.mDIST * t2_tmp + t15) + GNC2026W_P.mEE *
          t2_tmp;
        t29 = GNC2026W_P.a2 * GNC2026W_P.mDIST;
        t12_tmp = q_tmp + GNC2026W_DW.Delay_DSTATE_fb[4];
        t2 = cos(t12_tmp);
        t14_tmp = GNC2026W_P.a2 + GNC2026W_P.b2;
        t14 = t14_tmp * GNC2026W_P.mEE + t29;
        t15_tmp_0 = t12_tmp + GNC2026W_DW.Delay_DSTATE_fb[5];
        t16 = cos(t15_tmp_0);
        t17 = ((GNC2026W_P.mRED + GNC2026W_P.mPROX) + GNC2026W_P.mDIST) +
          GNC2026W_P.mEE;
        t27 = (GNC2026W_P.b0 * GNC2026W_P.mPROX + GNC2026W_P.b0 *
               GNC2026W_P.mDIST) + GNC2026W_P.b0 * GNC2026W_P.mEE;
        t22_tmp = (1.5707963267948966 - GNC2026W_P.Phi) +
          GNC2026W_DW.Delay_DSTATE_fb[2];
        t23 = sin(q_tmp);
        t24 = sin(t12_tmp);
        t25 = sin(t15_tmp_0);
        t28 = (GNC2026W_P.a2 * GNC2026W_P.mEE + t29) + GNC2026W_P.b2 *
          GNC2026W_P.mEE;
        t87_tmp = t2 * t14;
        rtb_TSamp_jy_tmp = GNC2026W_P.a3 * GNC2026W_P.mEE;
        rtb_TSamp_jy_tmp_0 = rtb_TSamp_jy_tmp * t16;
        t82 = (-(absx * rtb_TSamp_eu) - t87_tmp) - rtb_TSamp_jy_tmp_0;
        t30 = t82 - t27 * sin(t22_tmp);
        q = rtb_TSamp_eu * t23;
        t14 *= t24;
        t15_tmp = rtb_TSamp_jy_tmp * t25;
        t33 = ((t27 * cos(t22_tmp) - q) - t14) - t15_tmp;
        t34 = GNC2026W_P.a1 * GNC2026W_P.a1;
        t35 = GNC2026W_P.a2 * GNC2026W_P.a2;
        t12 = GNC2026W_P.b0 * GNC2026W_P.b0;
        t37 = GNC2026W_P.b1 * GNC2026W_P.b1;
        t45 = cos(GNC2026W_DW.Delay_DSTATE_fb[4]);
        t115 = GNC2026W_P.a1 * GNC2026W_P.a2;
        t113 = GNC2026W_P.a2 * GNC2026W_P.b1;
        t110 = t115 * GNC2026W_P.mDIST;
        t115 *= GNC2026W_P.mEE;
        t112 = t113 * GNC2026W_P.mDIST;
        t122 = GNC2026W_P.a1 * GNC2026W_P.b2 * GNC2026W_P.mEE;
        t113 *= GNC2026W_P.mEE;
        t128 = GNC2026W_P.b1 * GNC2026W_P.b2 * GNC2026W_P.mEE;
        t46 = (((((t110 * 2.0 + t115 * 2.0) + t112 * 2.0) + t122 * 2.0) + t113 *
                2.0) + t128 * 2.0) * t45;
        t50 = cos(GNC2026W_DW.Delay_DSTATE_fb[5]);
        t79 = GNC2026W_P.a2 * GNC2026W_P.a3 * GNC2026W_P.mEE;
        t80 = GNC2026W_P.a3 * GNC2026W_P.b2 * GNC2026W_P.mEE;
        t21 = (t79 * 2.0 + t80 * 2.0) * t50;
        t81 = GNC2026W_DW.Delay_DSTATE_fb[4] + GNC2026W_DW.Delay_DSTATE_fb[5];
        t56 = cos(t81);
        t106 = GNC2026W_P.a1 * GNC2026W_P.a3 * GNC2026W_P.mEE;
        t105 = GNC2026W_P.a3 * GNC2026W_P.b1 * GNC2026W_P.mEE;
        t22 = (t106 * 2.0 + t105 * 2.0) * t56;
        t59_tmp = (1.5707963267948966 - GNC2026W_P.Phi) -
          GNC2026W_DW.Delay_DSTATE_fb[3];
        t59 = sin(t59_tmp);
        t61_tmp = (-(1.5707963267948966 - GNC2026W_P.Phi) +
                   GNC2026W_DW.Delay_DSTATE_fb[3]) +
          GNC2026W_DW.Delay_DSTATE_fb[4];
        t61 = sin(t61_tmp);
        t63_tmp = t61_tmp + GNC2026W_DW.Delay_DSTATE_fb[5];
        t63 = sin(t63_tmp);
        t64 = GNC2026W_P.mPROX * t34;
        t65 = GNC2026W_P.mDIST * t34;
        t66 = GNC2026W_P.mEE * t34;
        t34 = GNC2026W_P.mDIST * t35;
        t68 = GNC2026W_P.mEE * t35;
        t35 = GNC2026W_P.a3 * GNC2026W_P.a3 * GNC2026W_P.mEE;
        t71 = GNC2026W_P.mDIST * t37;
        t72 = GNC2026W_P.mEE * t37;
        t74 = GNC2026W_P.b2 * GNC2026W_P.b2 * GNC2026W_P.mEE;
        t37 = GNC2026W_P.a1 * GNC2026W_P.b1;
        t75 = t37 * GNC2026W_P.mDIST * 2.0;
        t76 = t37 * GNC2026W_P.mEE * 2.0;
        t37 = GNC2026W_P.a2 * GNC2026W_P.b2 * GNC2026W_P.mEE * 2.0;
        t56 *= t106 + t105;
        t97_tmp = GNC2026W_P.a2 * GNC2026W_P.b0;
        t97_tmp_0 = t97_tmp * GNC2026W_P.mDIST;
        t97_tmp *= GNC2026W_P.mEE;
        t97_tmp_1 = GNC2026W_P.b0 * GNC2026W_P.b2 * GNC2026W_P.mEE;
        t97 = ((t97_tmp_0 + t97_tmp) + t97_tmp_1) * t61;
        rtb_TSamp_dm = GNC2026W_P.a3 * GNC2026W_P.b0 * GNC2026W_P.mEE;
        t113_tmp = rtb_TSamp_dm * t63;
        t99_tmp = GNC2026W_P.a1 * GNC2026W_P.b0;
        t99_tmp_0 = GNC2026W_P.b0 * GNC2026W_P.b1;
        t99_tmp_1 = t99_tmp * GNC2026W_P.mPROX;
        t99_tmp_2 = t99_tmp * GNC2026W_P.mDIST;
        t99_tmp *= GNC2026W_P.mEE;
        t99_tmp_3 = t99_tmp_0 * GNC2026W_P.mDIST;
        t99_tmp_0 *= GNC2026W_P.mEE;
        t99_tmp_4 = ((((((((((((((((GNC2026W_P.IPROX + GNC2026W_P.IDIST) +
          GNC2026W_P.IEE) + t46) + t21) + t22) + t64) + t65) + t66) + t34) + t68)
                          + t35) + t71) + t72) + t74) + t75) + t76) + t37;
        t99 = ((((((t99_tmp_1 + t99_tmp_2) + t99_tmp) + t99_tmp_3) + t99_tmp_0) *
                t59 + t99_tmp_4) - t97) - t113_tmp;
        t45 *= ((((t110 + t115) + t112) + t122) + t113) + t128;
        t111 = (t79 + t80) * t50;
        t50_tmp_tmp = ((((((GNC2026W_P.IDIST + GNC2026W_P.IEE) + t21) + t34) +
                         t68) + t35) + t74) + t37;
        t50_tmp = (t50_tmp_tmp + t56) + t45;
        t50 = GNC2026W_P.IEE + t35;
        t115_tmp = (t50 + t56) + t111;
        t116 = t50 + t111;
        InertiaS[0] = t17;
        InertiaS[1] = 0.0;
        InertiaS[2] = t30;
        InertiaS[3] = t82;
        InertiaS[4] = -rtb_TSamp_jy_tmp_0 - t2 * t28;
        InertiaS[5] = -rtb_TSamp_jy_tmp_0;
        InertiaS[6] = 0.0;
        InertiaS[7] = t17;
        InertiaS[8] = t33;
        InertiaS[9] = (-q - t14) - t15_tmp;
        InertiaS[10] = -t15_tmp - t24 * t28;
        InertiaS[11] = -t15_tmp;
        InertiaS[12] = t30;
        InertiaS[13] = t33;
        InertiaS[14] = (((((((((((((((((((((((GNC2026W_P.IRED + GNC2026W_P.IPROX)
          + GNC2026W_P.IDIST) + GNC2026W_P.IEE) + t46) + t21) + t22) + t64) +
          t65) + t66) + t34) + t68) + t35) + t71) + t72) + t74) + t75) + t76) +
                             t37) + ((((t99_tmp_1 * 2.0 + t99_tmp_2 * 2.0) +
          t99_tmp * 2.0) + t99_tmp_3 * 2.0) + t99_tmp_0 * 2.0) * t59) +
                           GNC2026W_P.mPROX * t12) + GNC2026W_P.mDIST * t12) +
                         GNC2026W_P.mEE * t12) - ((t97_tmp_0 * 2.0 + t97_tmp *
          2.0) + t97_tmp_1 * 2.0) * t61) - t113_tmp * 2.0;
        InertiaS[15] = t99;
        InertiaS[16] = (t50_tmp - t97) - t113_tmp;
        InertiaS[17] = t115_tmp - t113_tmp;
        InertiaS[18] = (-absx * rtb_TSamp_eu - t87_tmp) - rtb_TSamp_jy_tmp_0;
        InertiaS[19] = (-rtb_TSamp_eu * t23 - t14) - t15_tmp;
        InertiaS[20] = t99;
        InertiaS[21] = t99_tmp_4;
        InertiaS[22] = t50_tmp;
        InertiaS[23] = t115_tmp;
        InertiaS[24] = -t2 * t28 - rtb_TSamp_jy_tmp_0;
        InertiaS[25] = -t24 * t28 - t15_tmp;
        InertiaS[26] = ((((((((((GNC2026W_P.IDIST + GNC2026W_P.IEE) + t21) + t34)
                              + t68) + t35) + t74) + t37) + t56) + t45) - t97) -
          GNC2026W_P.a3 * GNC2026W_P.b0 * GNC2026W_P.mEE * t63;
        InertiaS[27] = t50_tmp;
        InertiaS[28] = t50_tmp_tmp;
        InertiaS[29] = t116;
        rtb_TSamp_eu = -GNC2026W_P.a3 * GNC2026W_P.mEE;
        InertiaS[30] = rtb_TSamp_eu * t16;
        InertiaS[31] = rtb_TSamp_eu * t25;
        InertiaS[32] = (((GNC2026W_P.IEE + t35) + t56) + t111) - GNC2026W_P.a3 *
          GNC2026W_P.b0 * GNC2026W_P.mEE * t63;
        InertiaS[33] = t115_tmp;
        InertiaS[34] = t116;
        InertiaS[35] = t50;

        // MATLAB Function: '<S363>/Coriolis Function1' incorporates:
        //   Delay: '<S363>/Delay'

        q = (GNC2026W_P.mDIST * t2_tmp + t15) + GNC2026W_P.mEE * t2_tmp;
        t15 = GNC2026W_P.mEE * t14_tmp + t29;
        t16 = GNC2026W_DW.Delay_DSTATE_fb[8] * q + GNC2026W_DW.Delay_DSTATE_fb[9]
          * q;
        t21 = cos(t12_tmp + 1.5707963267948966);
        t22 = (GNC2026W_DW.Delay_DSTATE_fb[8] * t15 +
               GNC2026W_DW.Delay_DSTATE_fb[9] * t15) +
          GNC2026W_DW.Delay_DSTATE_fb[10] * t15;
        t29 = ((rtb_TSamp_jy_tmp * GNC2026W_DW.Delay_DSTATE_fb[8] +
                rtb_TSamp_jy_tmp * GNC2026W_DW.Delay_DSTATE_fb[9]) +
               rtb_TSamp_jy_tmp * GNC2026W_DW.Delay_DSTATE_fb[10]) +
          rtb_TSamp_jy_tmp * GNC2026W_DW.Delay_DSTATE_fb[11];
        t12 = sin(t12_tmp + 1.5707963267948966);
        t12_tmp = (GNC2026W_DW.Delay_DSTATE_fb[8] + GNC2026W_DW.Delay_DSTATE_fb
                   [9]) + GNC2026W_DW.Delay_DSTATE_fb[10];
        t23 = t12_tmp + GNC2026W_DW.Delay_DSTATE_fb[11];
        t46 = cos(t59_tmp);
        t25 = cos(t61_tmp);
        t59 = cos(t63_tmp);
        t66 = sin(GNC2026W_DW.Delay_DSTATE_fb[4]);
        t28 = ((((t112 * GNC2026W_DW.Delay_DSTATE_fb[10] + t122 *
                  GNC2026W_DW.Delay_DSTATE_fb[10]) + t113 *
                 GNC2026W_DW.Delay_DSTATE_fb[10]) + t128 *
                GNC2026W_DW.Delay_DSTATE_fb[10]) + t110 *
               GNC2026W_DW.Delay_DSTATE_fb[10]) + t115 *
          GNC2026W_DW.Delay_DSTATE_fb[10];
        t35 = sin(GNC2026W_DW.Delay_DSTATE_fb[5]);
        t71 = t80 * GNC2026W_DW.Delay_DSTATE_fb[11] + t79 *
          GNC2026W_DW.Delay_DSTATE_fb[11];
        t37 = sin(t81);
        t87_tmp = ((t105 * GNC2026W_DW.Delay_DSTATE_fb[10] + t105 *
                    GNC2026W_DW.Delay_DSTATE_fb[11]) + t106 *
                   GNC2026W_DW.Delay_DSTATE_fb[10]) + t106 *
          GNC2026W_DW.Delay_DSTATE_fb[11];
        t79 = t97_tmp_0 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t80 = t97_tmp * GNC2026W_DW.Delay_DSTATE_fb[8];
        t81 = t97_tmp_1 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t97_tmp = ((((t97_tmp_0 * GNC2026W_DW.Delay_DSTATE_fb[9] + t97_tmp_0 *
                      GNC2026W_DW.Delay_DSTATE_fb[10]) + t97_tmp *
                     GNC2026W_DW.Delay_DSTATE_fb[9]) + t97_tmp *
                    GNC2026W_DW.Delay_DSTATE_fb[10]) + t97_tmp_1 *
                   GNC2026W_DW.Delay_DSTATE_fb[9]) + t97_tmp_1 *
          GNC2026W_DW.Delay_DSTATE_fb[10];
        t82 = ((t97_tmp + t79) + t80) + t81;
        t30 = rtb_TSamp_dm * GNC2026W_DW.Delay_DSTATE_fb[8];
        t61 = (rtb_TSamp_dm * GNC2026W_DW.Delay_DSTATE_fb[9] + rtb_TSamp_dm *
               GNC2026W_DW.Delay_DSTATE_fb[10]) + rtb_TSamp_dm *
          GNC2026W_DW.Delay_DSTATE_fb[11];
        t56 = t99_tmp_1 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t63 = t99_tmp_2 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t64 = t99_tmp * GNC2026W_DW.Delay_DSTATE_fb[8];
        rtb_TSamp_dm = t99_tmp_3 * GNC2026W_DW.Delay_DSTATE_fb[8];
        q = t99_tmp_0 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t65 = t112 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t15 = t122 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t68 = t112 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t72 = t113 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t74 = t122 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t75 = t113 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t76 = t128 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t97 = t128 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t113 = t110 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t99 = t110 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t45 = t115 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t111 = t115 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t115 = t105 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t116 = t105 * GNC2026W_DW.Delay_DSTATE_fb[9];
        t105 = t106 * GNC2026W_DW.Delay_DSTATE_fb[8];
        t106 *= GNC2026W_DW.Delay_DSTATE_fb[9];
        t110 = t59 * t30;
        t112 = (((((((((((t65 + t15) + t68) + t72) + t74) + t75) + t76) + t97) +
                   t113) + t99) + t45) + t111) * t66;
        t50 = (((t115 + t116) + t105) + t106) * t37;
        t122 = (((((GNC2026W_P.a2 * GNC2026W_DW.Delay_DSTATE_fb[8] +
                    GNC2026W_P.a2 * GNC2026W_DW.Delay_DSTATE_fb[9]) +
                   GNC2026W_P.a2 * GNC2026W_DW.Delay_DSTATE_fb[10]) +
                  GNC2026W_P.b2 * GNC2026W_DW.Delay_DSTATE_fb[8]) +
                 GNC2026W_P.b2 * GNC2026W_DW.Delay_DSTATE_fb[9]) + GNC2026W_P.b2
                * GNC2026W_DW.Delay_DSTATE_fb[10]) * (rtb_TSamp_jy_tmp * t35);
        t128 = (((GNC2026W_P.a1 * GNC2026W_DW.Delay_DSTATE_fb[8] + GNC2026W_P.a1
                  * GNC2026W_DW.Delay_DSTATE_fb[9]) + GNC2026W_P.b1 *
                 GNC2026W_DW.Delay_DSTATE_fb[8]) + GNC2026W_P.b1 *
                GNC2026W_DW.Delay_DSTATE_fb[9]) * (rtb_TSamp_jy_tmp * t37);

        // MATLAB Function: '<S363>/Dynamics Model'
        rEQ0 = true;
        for (newMeas = 0; newMeas < 36; newMeas++) {
          S_pre[newMeas] = 0.0;
          if (rEQ0) {
            absx = InertiaS[newMeas];
            if (rtIsInf(absx) || rtIsNaN(absx)) {
              rEQ0 = false;
            }
          }
        }

        if (!rEQ0) {
          for (newMeas = 0; newMeas < 36; newMeas++) {
            S_pre[newMeas] = (rtNaN);
          }
        } else {
          GNC2026W_svd_l(InertiaS, S_minus, AccelerationtoVelocity_g, V_0);
          absx = fabs(AccelerationtoVelocity_g[0]);
          if (rtIsInf(absx) || rtIsNaN(absx)) {
            absx = (rtNaN);
          } else if (absx < 4.4501477170144028E-308) {
            absx = 4.94065645841247E-324;
          } else {
            frexp(absx, &e_coffset);
            absx = ldexp(1.0, e_coffset - 53);
          }

          absx *= 6.0;
          i = 0;
          exitg1 = false;
          while ((!exitg1) && (i < 6)) {
            if (rtIsInf(AccelerationtoVelocity_g[i]) || rtIsNaN
                (AccelerationtoVelocity_g[i])) {
              absx = 1.7976931348623157E+308;
              exitg1 = true;
            } else {
              i++;
            }
          }

          r = -1;
          newMeas = 0;
          while ((newMeas < 6) && (AccelerationtoVelocity_g[newMeas] > absx)) {
            r++;
            newMeas++;
          }

          if (r + 1 > 0) {
            vcol = 1;
            for (newMeas = 0; newMeas <= r; newMeas++) {
              absx = 1.0 / AccelerationtoVelocity_g[newMeas];
              for (i = vcol; i <= vcol + 5; i++) {
                V_0[i - 1] *= absx;
              }

              vcol += 6;
            }

            for (newMeas = 0; newMeas <= 30; newMeas += 6) {
              for (i = newMeas + 1; i <= newMeas + 6; i++) {
                S_pre[i - 1] = 0.0;
              }
            }

            br = 0;
            for (newMeas = 0; newMeas <= 30; newMeas += 6) {
              ar = -1;
              br++;
              e_coffset = 6 * r + br;
              for (i = br; i <= e_coffset; i += 6) {
                for (vcol = newMeas + 1; vcol <= newMeas + 6; vcol++) {
                  S_pre[vcol - 1] += V_0[(ar + vcol) - newMeas] * S_minus[i - 1];
                }

                ar += 6;
              }
            }
          }
        }

        for (newMeas = 0; newMeas < 6; newMeas++) {
          // DiscreteIntegrator: '<S363>/Velocity to Position' incorporates:
          //   Delay: '<S363>/Delay'
          //   MATLAB Function: '<S363>/Dynamics Model'

          GNC2026W_DW.VelocitytoPosition_DSTATE_ff[newMeas] +=
            GNC2026W_DW.Delay_DSTATE_fb[newMeas + 6] *
            GNC2026W_P.VelocitytoPosition_gainval;
        }

        // Outputs for Enabled SubSystem: '<S368>/Enabled Subsystem' incorporates:
        //   EnablePort: '<S387>/Enable'

        if (GNC2026W_DW.Delay_DSTATE_g >= GNC2026W_P.dataRate) {
          // SignalConversion generated from: '<S387>/In1' incorporates:
          //   DataStoreRead: '<S368>/Data Store Read'

          GNC2026W_B.In1_g20as = GNC2026W_DW.Univ_Time;
          srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_b);
        }

        // End of Outputs for SubSystem: '<S368>/Enabled Subsystem'

        // Sum: '<S368>/Subtract' incorporates:
        //   Constant: '<S368>/Constant1'
        //   DataStoreRead: '<S368>/Data Store Read'
        //   Delay: '<S368>/Delay'
        //   RelationalOperator: '<S368>/Relational Operator1'

        GNC2026W_DW.Delay_DSTATE_g = GNC2026W_DW.Univ_Time -
          GNC2026W_B.In1_g20as;

        // Outputs for Enabled SubSystem: '<S368>/Enabled Subsystem1' incorporates:
        //   EnablePort: '<S388>/Enable'

        if (GNC2026W_DW.Delay_DSTATE_g == GNC2026W_P.Constant2_Value_n) {
          for (i = 0; i < 6; i++) {
            // SignalConversion generated from: '<S388>/ThrustPer_Final' incorporates:
            //   RandomNumber: '<S363>/Add Noise'
            //   Sum: '<S363>/Sum'

            GNC2026W_B.ThrustPer_Final_h5jza[i] = GNC2026W_DW.NextOutput_p +
              GNC2026W_DW.VelocitytoPosition_DSTATE_ff[i];
          }

          srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanB_bb);
        }

        // End of Outputs for SubSystem: '<S368>/Enabled Subsystem1'

        // Outputs for Enabled SubSystem: '<S386>/Enabled Subsystem3' incorporates:
        //   EnablePort: '<S389>/Enable'

        if (GNC2026W_B.ThrustPer_Final_h5jza[0] - GNC2026W_DW.Delay1_DSTATE_e !=
            GNC2026W_P.Constant3_Value_n) {
          // SignalConversion generated from: '<S389>/y2-y1' incorporates:
          //   Delay: '<S386>/Delay2'
          //   Sum: '<S386>/Subtract1'

          GNC2026W_B.y2y1_ob4j = GNC2026W_B.In1_g20as -
            GNC2026W_DW.Delay2_DSTATE_n;
          srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanB_g4);
        }

        // End of Outputs for SubSystem: '<S386>/Enabled Subsystem3'

        // MATLAB Function: '<S386>/MATLAB Function' incorporates:
        //   Constant: '<S368>/Constant1'
        //   Constant: '<S368>/Constant2'
        //   Constant: '<S386>/Constant3'
        //   Delay: '<S386>/Delay1'
        //   RelationalOperator: '<S368>/Relational Operator2'
        //   RelationalOperator: '<S386>/Relational Operator'
        //   Sum: '<S386>/Subtract2'

        GNC2026W_MATLABFunction_oy(GNC2026W_B.y2y1_ob4j, GNC2026W_P.dataRate,
          &absx, &GNC2026W_DW.sf_MATLABFunction_m);

        // Outputs for Enabled SubSystem: '<S374>/Enabled Subsystem' incorporates:
        //   EnablePort: '<S380>/Enable'

        if ((GNC2026W_B.ThrustPer_Final_h5jza[3] - GNC2026W_DW.Delay1_DSTATE_ff
             [0] != GNC2026W_P.Constant3_Value_f) ||
            (GNC2026W_B.ThrustPer_Final_h5jza[4] - GNC2026W_DW.Delay1_DSTATE_ff
             [1] != GNC2026W_P.Constant3_Value_f) ||
            (GNC2026W_B.ThrustPer_Final_h5jza[5] - GNC2026W_DW.Delay1_DSTATE_ff
             [2] != GNC2026W_P.Constant3_Value_f)) {
          // MATLAB Function: '<S380>/MATLAB Function' incorporates:
          //   Constant: '<S380>/Constant2'
          //   Delay: '<S380>/Delay'

          t97_tmp_0 = exp(-absx / GNC2026W_P.Constant2_Value_k);
          t14 = GNC2026W_DW.Delay_DSTATE_bq[0];
          t17 = (1.0 - (1.0 - t97_tmp_0)) * t14 + (1.0 - t97_tmp_0) *
            GNC2026W_B.ThrustPer_Final_h5jza[3];
          GNC2026W_B.dy_pu[0] = (t17 - t14) / absx;

          // Update for Delay: '<S380>/Delay'
          GNC2026W_DW.Delay_DSTATE_bq[0] = t17;

          // MATLAB Function: '<S380>/MATLAB Function' incorporates:
          //   Delay: '<S380>/Delay'

          t14 = GNC2026W_DW.Delay_DSTATE_bq[1];
          t17 = (1.0 - (1.0 - t97_tmp_0)) * t14 + (1.0 - t97_tmp_0) *
            GNC2026W_B.ThrustPer_Final_h5jza[4];
          GNC2026W_B.dy_pu[1] = (t17 - t14) / absx;

          // Update for Delay: '<S380>/Delay'
          GNC2026W_DW.Delay_DSTATE_bq[1] = t17;

          // MATLAB Function: '<S380>/MATLAB Function' incorporates:
          //   Delay: '<S380>/Delay'

          t14 = GNC2026W_DW.Delay_DSTATE_bq[2];
          t17 = (1.0 - (1.0 - t97_tmp_0)) * t14 + (1.0 - t97_tmp_0) *
            GNC2026W_B.ThrustPer_Final_h5jza[5];
          GNC2026W_B.dy_pu[2] = (t17 - t14) / absx;

          // Update for Delay: '<S380>/Delay'
          GNC2026W_DW.Delay_DSTATE_bq[2] = t17;
          srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_l);
        }

        // End of Outputs for SubSystem: '<S374>/Enabled Subsystem'

        // DataStoreWrite: '<S365>/Data Store Write3' incorporates:
        //   Constant: '<S374>/Constant3'
        //   Delay: '<S374>/Delay1'
        //   RelationalOperator: '<S374>/Relational Operator'
        //   Sum: '<S374>/Subtract1'

        GNC2026W_DW.ARM_Measured_States[0] = GNC2026W_B.ThrustPer_Final_h5jza[3];
        GNC2026W_DW.ARM_Measured_States[3] = GNC2026W_B.dy_pu[0];

        // RelationalOperator: '<S372>/Relational Operator' incorporates:
        //   Constant: '<S372>/Constant3'
        //   Delay: '<S372>/Delay1'
        //   Sum: '<S372>/Subtract1'

        rtb_RelationalOperator_lm[0] = (GNC2026W_B.ThrustPer_Final_h5jza[0] -
          GNC2026W_DW.Delay1_DSTATE_a1[0] != GNC2026W_P.Constant3_Value_o);

        // DataStoreWrite: '<S365>/Data Store Write3'
        GNC2026W_DW.ARM_Measured_States[1] = GNC2026W_B.ThrustPer_Final_h5jza[4];
        GNC2026W_DW.ARM_Measured_States[4] = GNC2026W_B.dy_pu[1];

        // RelationalOperator: '<S372>/Relational Operator' incorporates:
        //   Constant: '<S372>/Constant3'
        //   Delay: '<S372>/Delay1'
        //   Sum: '<S372>/Subtract1'

        rtb_RelationalOperator_lm[1] = (GNC2026W_B.ThrustPer_Final_h5jza[1] -
          GNC2026W_DW.Delay1_DSTATE_a1[1] != GNC2026W_P.Constant3_Value_o);

        // DataStoreWrite: '<S365>/Data Store Write3'
        GNC2026W_DW.ARM_Measured_States[2] = GNC2026W_B.ThrustPer_Final_h5jza[5];
        GNC2026W_DW.ARM_Measured_States[5] = GNC2026W_B.dy_pu[2];

        // RelationalOperator: '<S372>/Relational Operator' incorporates:
        //   Constant: '<S372>/Constant3'
        //   Delay: '<S372>/Delay1'
        //   Sum: '<S372>/Subtract1'

        rtb_RelationalOperator_lm[2] = (GNC2026W_B.ThrustPer_Final_h5jza[2] -
          GNC2026W_DW.Delay1_DSTATE_a1[2] != GNC2026W_P.Constant3_Value_o);

        // Outputs for Enabled SubSystem: '<S372>/Enabled Subsystem'
        GNC2026W_EnabledSubsystem_b(rtb_RelationalOperator_lm,
          &GNC2026W_B.ThrustPer_Final_h5jza[0], absx, GNC2026W_B.dy_dj,
          &GNC2026W_DW.EnabledSubsystem_l, &GNC2026W_P.EnabledSubsystem_l);

        // End of Outputs for SubSystem: '<S372>/Enabled Subsystem'

        // RelationalOperator: '<S373>/Relational Operator' incorporates:
        //   Constant: '<S373>/Constant3'
        //   Delay: '<S373>/Delay1'
        //   SignalConversion generated from: '<S388>/ThrustPer_Final'
        //   Sum: '<S373>/Subtract1'

        rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy_dj[0] -
          GNC2026W_DW.Delay1_DSTATE_bc[0] != GNC2026W_P.Constant3_Value_l);
        rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy_dj[1] -
          GNC2026W_DW.Delay1_DSTATE_bc[1] != GNC2026W_P.Constant3_Value_l);
        rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy_dj[2] -
          GNC2026W_DW.Delay1_DSTATE_bc[2] != GNC2026W_P.Constant3_Value_l);

        // Outputs for Enabled SubSystem: '<S373>/Enabled Subsystem'
        GNC2026W_EnabledSubsystem(rtb_RelationalOperator_lm, GNC2026W_B.dy_dj,
          absx, GNC2026W_B.dy_m, &GNC2026W_B.EnabledSubsystem_kx,
          &GNC2026W_DW.EnabledSubsystem_kx, &GNC2026W_P.EnabledSubsystem_kx);

        // End of Outputs for SubSystem: '<S373>/Enabled Subsystem'

        // DataStoreWrite: '<S365>/True States for RED' incorporates:
        //   Trigonometry: '<S375>/Atan2'
        //   Trigonometry: '<S375>/Cos'
        //   Trigonometry: '<S375>/Sin'

        GNC2026W_DW.RED_Measured_States[0] = GNC2026W_B.ThrustPer_Final_h5jza[0];
        GNC2026W_DW.RED_Measured_States[1] = GNC2026W_B.ThrustPer_Final_h5jza[1];
        GNC2026W_DW.RED_Measured_States[2] = rt_atan2d_snf(sin
          (GNC2026W_B.ThrustPer_Final_h5jza[2]), cos
          (GNC2026W_B.ThrustPer_Final_h5jza[2]));
        GNC2026W_DW.RED_Measured_States[3] = GNC2026W_B.dy_dj[0];
        GNC2026W_DW.RED_Measured_States[6] = GNC2026W_B.dy_m[0];
        GNC2026W_DW.RED_Measured_States[4] = GNC2026W_B.dy_dj[1];
        GNC2026W_DW.RED_Measured_States[7] = GNC2026W_B.dy_m[1];
        GNC2026W_DW.RED_Measured_States[5] = GNC2026W_B.dy_dj[2];
        GNC2026W_DW.RED_Measured_States[8] = GNC2026W_B.dy_m[2];

        // Stop: '<S363>/Stop Simulation' incorporates:
        //   Constant: '<S370>/Constant'
        //   Constant: '<S370>/Constant1'
        //   Constant: '<S370>/Constant2'
        //   Constant: '<S370>/Constant3'
        //   Logic: '<S370>/Logical Operator'
        //   Logic: '<S370>/Logical Operator1'
        //   Logic: '<S370>/Logical Operator2'
        //   RelationalOperator: '<S370>/Relational Operator'
        //   RelationalOperator: '<S370>/Relational Operator1'
        //   RelationalOperator: '<S370>/Relational Operator2'
        //   RelationalOperator: '<S370>/Relational Operator3'

        if ((GNC2026W_DW.VelocitytoPosition_DSTATE_ff[0] >= GNC2026W_P.xLength) ||
            (GNC2026W_DW.VelocitytoPosition_DSTATE_ff[0] <
             GNC2026W_P.Constant1_Value_k) ||
            ((GNC2026W_DW.VelocitytoPosition_DSTATE_ff[1] >= GNC2026W_P.yLength)
             || (GNC2026W_DW.VelocitytoPosition_DSTATE_ff[1] <
                 GNC2026W_P.Constant3_Value_e5))) {
          rtmSetStopRequested(GNC2026W_M, 1);
        }

        // End of Stop: '<S363>/Stop Simulation'

        // MATLAB Function: '<S363>/Coriolis Function1' incorporates:
        //   Delay: '<S363>/Delay'

        memset(&InertiaS[0], 0, 12U * sizeof(real_T));
        absx = cos(t15_tmp_0 + 1.5707963267948966) * t29;
        t17 = (-cos(q_tmp + 1.5707963267948966) * t16 - t21 * t22) - absx;
        t14 = GNC2026W_DW.Delay_DSTATE_fb[8] * t27;
        InertiaS[12] = t17 - t14 * cos(t22_tmp);
        t27 = sin(t15_tmp_0 + 1.5707963267948966) * t29;
        t16 = (sin(q_tmp + 1.5707963267948966) * -t16 - t22 * t12) - t27;
        InertiaS[13] = t16 - t14 * sin(t22_tmp);
        t33 = t35 * t71;
        t34 = t37 * t87_tmp;
        t14 = -t66 * t28;
        t29 = (((t99_tmp_1 * GNC2026W_DW.Delay_DSTATE_fb[9] + t99_tmp_2 *
                 GNC2026W_DW.Delay_DSTATE_fb[9]) + t99_tmp *
                GNC2026W_DW.Delay_DSTATE_fb[9]) + t99_tmp_3 *
               GNC2026W_DW.Delay_DSTATE_fb[9]) + t99_tmp_0 *
          GNC2026W_DW.Delay_DSTATE_fb[9];
        t97_tmp_0 = (t14 - t33) - t34;
        InertiaS[14] = ((t97_tmp_0 - t29 * t46) - t61 * t59) - t97_tmp * t25;
        t79 = ((t79 + t80) + t81) * t25 + t110;
        InertiaS[15] = ((((t56 + t63) + t64) + rtb_TSamp_dm) + q) * t46 + (((t79
          - t66 * t28) - t33) - t34);
        InertiaS[16] = ((t79 + t112) + t50) - t33;
        InertiaS[17] = (t110 + t122) + t128;
        InertiaS[18] = t17;
        InertiaS[19] = t16;
        t17 = (t61 + t30) * t59;
        InertiaS[20] = ((((t14 - t25 * t82) - t33) - t17) - t34) - (((((t29 +
          t56) + t63) + t64) + rtb_TSamp_dm) + q) * t46;
        InertiaS[21] = t97_tmp_0;
        InertiaS[22] = (t112 + t50) - t33;
        InertiaS[23] = t122 + t128;
        InertiaS[24] = -t21 * t22 - absx;
        InertiaS[25] = -t22 * t12 - t27;
        absx = ((((((((((((t28 + t65) + t15) + t68) + t72) + t74) + t75) + t76)
                    + t97) + t113) + t99) + t45) + t111) * t66;
        t27 = ((((t87_tmp + t115) + t116) + t105) + t106) * t37;
        InertiaS[26] = (((-t25 * t82 - t33) - t17) - absx) - t27;
        InertiaS[27] = (-t35 * t71 - absx) - t27;
        InertiaS[28] = rtb_TSamp_eu * GNC2026W_DW.Delay_DSTATE_fb[11] * t14_tmp *
          t35;
        t14 = rtb_TSamp_jy_tmp * t14_tmp;
        InertiaS[29] = t14 * t35 * t12_tmp;
        InertiaS[30] = rtb_TSamp_jy_tmp * t23 * sin(t15_tmp_0);
        InertiaS[31] = rtb_TSamp_eu * t23 * cos(t15_tmp_0);
        q = rtb_TSamp_jy_tmp * t2_tmp * t23 * t37;
        InertiaS[32] = (-GNC2026W_P.a3 * GNC2026W_P.b0 * GNC2026W_P.mEE * t23 *
                        t59 - t14 * t23 * t35) - q;
        rtb_TSamp_eu = rtb_TSamp_eu * t14_tmp * t23 * t35;
        InertiaS[33] = rtb_TSamp_eu - q;
        InertiaS[34] = rtb_TSamp_eu;
        InertiaS[35] = 0.0;

        // SignalConversion generated from: '<S369>/ SFunction ' incorporates:
        //   DataStoreRead: '<S363>/Saturated Control  Commands for RED'
        //   DataStoreWrite: '<S3>/Data Store Write9'
        //   MATLAB Function: '<S363>/Dynamics Model'

        AccelerationtoVelocity_g[0] = GNC2026W_DW.RED_Saturated_Controls[0];
        AccelerationtoVelocity_g[3] = rtb_TmpSignalConversionAtSFu_fp[0];
        AccelerationtoVelocity_g[1] = GNC2026W_DW.RED_Saturated_Controls[1];
        AccelerationtoVelocity_g[4] = rtb_TmpSignalConversionAtSFu_fp[1];
        AccelerationtoVelocity_g[2] = GNC2026W_DW.RED_Saturated_Controls[2];
        AccelerationtoVelocity_g[5] = rtb_TmpSignalConversionAtSFu_fp[2];

        // MATLAB Function: '<S363>/Dynamics Model' incorporates:
        //   Delay: '<S363>/Delay'

        tmp[0] = 0.0;
        tmp[1] = 0.0;
        tmp[2] = 0.0;
        tmp[3] = ((tanh(GNC2026W_P.Gamma2_sh * GNC2026W_DW.Delay_DSTATE_fb[9]) -
                   tanh(GNC2026W_P.Gamma3_sh * GNC2026W_DW.Delay_DSTATE_fb[9])) *
                  GNC2026W_P.Gamma1_sh + tanh(GNC2026W_P.Gamma5_sh *
                   GNC2026W_DW.Delay_DSTATE_fb[9]) * GNC2026W_P.Gamma4_sh) +
          GNC2026W_P.Gamma6_sh * GNC2026W_DW.Delay_DSTATE_fb[9];
        tmp[4] = ((tanh(GNC2026W_P.Gamma2_el * GNC2026W_DW.Delay_DSTATE_fb[10])
                   - tanh(GNC2026W_P.Gamma3_el * GNC2026W_DW.Delay_DSTATE_fb[10]))
                  * GNC2026W_P.Gamma1_el + tanh(GNC2026W_P.Gamma5_el *
                   GNC2026W_DW.Delay_DSTATE_fb[10]) * GNC2026W_P.Gamma4_el) +
          GNC2026W_P.Gamma6_el * GNC2026W_DW.Delay_DSTATE_fb[10];
        tmp[5] = ((tanh(GNC2026W_P.Gamma2_wr * GNC2026W_DW.Delay_DSTATE_fb[11])
                   - tanh(GNC2026W_P.Gamma3_wr * GNC2026W_DW.Delay_DSTATE_fb[11]))
                  * GNC2026W_P.Gamma1_wr + tanh(GNC2026W_P.Gamma5_wr *
                   GNC2026W_DW.Delay_DSTATE_fb[11]) * GNC2026W_P.Gamma4_wr) +
          GNC2026W_P.Gamma6_wr * GNC2026W_DW.Delay_DSTATE_fb[11];
        for (newMeas = 0; newMeas < 6; newMeas++) {
          absx = 0.0;
          for (i = 0; i < 6; i++) {
            absx += InertiaS[6 * i + newMeas] * GNC2026W_DW.Delay_DSTATE_fb[i +
              6];
          }

          tmp_0[newMeas] = (AccelerationtoVelocity_g[newMeas] - absx) -
            tmp[newMeas];
        }

        // Update for RandomNumber: '<S363>/Add Noise'
        GNC2026W_DW.NextOutput_p = rt_nrand_Upu32_Yd_f_pw_snf
          (&GNC2026W_DW.RandSeed_e) * GNC2026W_P.AddNoise_StdDev +
          GNC2026W_P.AddNoise_Mean;

        // Update for Delay: '<S386>/Delay2'
        GNC2026W_DW.Delay2_DSTATE_n = GNC2026W_B.In1_g20as;

        // Update for Delay: '<S386>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_e = GNC2026W_B.ThrustPer_Final_h5jza[0];

        // Update for Delay: '<S374>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_ff[0] = GNC2026W_B.ThrustPer_Final_h5jza[3];

        // Update for Delay: '<S372>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_a1[0] = GNC2026W_B.ThrustPer_Final_h5jza[0];

        // Update for Delay: '<S373>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_bc[0] = GNC2026W_B.dy_dj[0];

        // Update for UnitDelay: '<S382>/UD' incorporates:
        //   SampleTimeMath: '<S382>/TSamp'
        //
        //  About '<S382>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //    *
        //  Block description for '<S382>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_l[0] = GNC2026W_DW.VelocitytoPosition_DSTATE_ff[0]
          * GNC2026W_P.TSamp_WtEt_ck;

        // Update for Delay: '<S374>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_ff[1] = GNC2026W_B.ThrustPer_Final_h5jza[4];

        // Update for Delay: '<S372>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_a1[1] = GNC2026W_B.ThrustPer_Final_h5jza[1];

        // Update for Delay: '<S373>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_bc[1] = GNC2026W_B.dy_dj[1];

        // Update for UnitDelay: '<S382>/UD' incorporates:
        //   SampleTimeMath: '<S382>/TSamp'
        //
        //  About '<S382>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //    *
        //  Block description for '<S382>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_l[1] = GNC2026W_DW.VelocitytoPosition_DSTATE_ff[1]
          * GNC2026W_P.TSamp_WtEt_ck;

        // Update for Delay: '<S374>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_ff[2] = GNC2026W_B.ThrustPer_Final_h5jza[5];

        // Update for Delay: '<S372>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_a1[2] = GNC2026W_B.ThrustPer_Final_h5jza[2];

        // Update for Delay: '<S373>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_bc[2] = GNC2026W_B.dy_dj[2];

        // Update for UnitDelay: '<S382>/UD' incorporates:
        //   SampleTimeMath: '<S382>/TSamp'
        //
        //  About '<S382>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //    *
        //  Block description for '<S382>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_l[2] = GNC2026W_DW.VelocitytoPosition_DSTATE_ff[2]
          * GNC2026W_P.TSamp_WtEt_ck;
        for (i = 0; i < 6; i++) {
          // MATLAB Function: '<S363>/Dynamics Model'
          rtb_TSamp_eu = 0.0;
          for (newMeas = 0; newMeas < 6; newMeas++) {
            rtb_TSamp_eu += S_pre[6 * newMeas + i] * tmp_0[newMeas];
          }

          // DiscreteIntegrator: '<S363>/Acceleration to Velocity' incorporates:
          //   MATLAB Function: '<S363>/Dynamics Model'

          rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainval *
            rtb_TSamp_eu + GNC2026W_DW.AccelerationtoVelocity_DSTATE_c[i];

          // SignalConversion generated from: '<S363>/Delay' incorporates:
          //   Delay: '<S363>/Delay'

          GNC2026W_DW.Delay_DSTATE_fb[i] =
            GNC2026W_DW.VelocitytoPosition_DSTATE_ff[i];
          GNC2026W_DW.Delay_DSTATE_fb[i + 6] = rtb_TSamp_eu;

          // Update for DiscreteIntegrator: '<S363>/Acceleration to Velocity'
          GNC2026W_DW.AccelerationtoVelocity_DSTATE_c[i] = rtb_TSamp_eu;
        }

        srUpdateBC(GNC2026W_DW.REDARM_SubsysRanBC);

        // End of Outputs for SubSystem: '<S314>/RED + ARM'
      } else {
        // Outputs for IfAction SubSystem: '<S314>/RED Only' incorporates:
        //   ActionPort: '<S364>/Action Port'

        // MATLAB Function: '<S394>/MATLAB Function' incorporates:
        //   DataStoreRead: '<S364>/Saturated Control  Commands for RED'

        GNC2026W_B.x_ddot[0] = GNC2026W_DW.RED_Saturated_Controls[0] /
          GNC2026W_P.mRED;
        GNC2026W_B.x_ddot[1] = GNC2026W_DW.RED_Saturated_Controls[1] /
          GNC2026W_P.mRED;
        GNC2026W_B.x_ddot[2] = GNC2026W_DW.RED_Saturated_Controls[2] /
          GNC2026W_P.IRED;

        // DiscreteIntegrator: '<S394>/Acceleration  to Velocity'
        rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainva_e *
          GNC2026W_B.x_ddot[0] + GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[0];
        GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[0] = rtb_TSamp_eu;

        // DiscreteIntegrator: '<S394>/Velocity to Position'
        GNC2026W_B.VelocitytoPosition_e[0] =
          GNC2026W_P.VelocitytoPosition_gainval_m * rtb_TSamp_eu +
          GNC2026W_DW.VelocitytoPosition_DSTATE_e[0];

        // DiscreteIntegrator: '<S394>/Acceleration  to Velocity'
        rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainva_e *
          GNC2026W_B.x_ddot[1] + GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[1];
        GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[1] = rtb_TSamp_eu;

        // DiscreteIntegrator: '<S394>/Velocity to Position'
        GNC2026W_B.VelocitytoPosition_e[1] =
          GNC2026W_P.VelocitytoPosition_gainval_m * rtb_TSamp_eu +
          GNC2026W_DW.VelocitytoPosition_DSTATE_e[1];

        // DiscreteIntegrator: '<S394>/Acceleration  to Velocity'
        rtb_TSamp_eu = GNC2026W_P.AccelerationtoVelocity_gainva_e *
          GNC2026W_B.x_ddot[2] + GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[2];
        GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[2] = rtb_TSamp_eu;

        // DiscreteIntegrator: '<S394>/Velocity to Position'
        GNC2026W_B.VelocitytoPosition_e[2] =
          GNC2026W_P.VelocitytoPosition_gainval_m * rtb_TSamp_eu +
          GNC2026W_DW.VelocitytoPosition_DSTATE_e[2];

        // Outputs for Enabled SubSystem: '<S393>/Enabled Subsystem' incorporates:
        //   EnablePort: '<S406>/Enable'

        if (GNC2026W_DW.Delay_DSTATE_n >= GNC2026W_P.dataRate) {
          // SignalConversion generated from: '<S406>/In1' incorporates:
          //   DataStoreRead: '<S393>/Data Store Read'

          GNC2026W_B.In1_g20a = GNC2026W_DW.Univ_Time;
          srUpdateBC(GNC2026W_DW.EnabledSubsystem_SubsysRanBC_n);
        }

        // End of Outputs for SubSystem: '<S393>/Enabled Subsystem'

        // Sum: '<S393>/Subtract' incorporates:
        //   Constant: '<S393>/Constant1'
        //   DataStoreRead: '<S393>/Data Store Read'
        //   Delay: '<S393>/Delay'
        //   RelationalOperator: '<S393>/Relational Operator1'

        GNC2026W_DW.Delay_DSTATE_n = GNC2026W_DW.Univ_Time - GNC2026W_B.In1_g20a;

        // Outputs for Enabled SubSystem: '<S393>/Enabled Subsystem1' incorporates:
        //   EnablePort: '<S407>/Enable'

        if (GNC2026W_DW.Delay_DSTATE_n == GNC2026W_P.Constant2_Value_fs) {
          // SignalConversion generated from: '<S407>/ThrustPer_Final' incorporates:
          //   RandomNumber: '<S364>/Add Noise'
          //   Sum: '<S364>/Sum'

          GNC2026W_B.ThrustPer_Final_h5jz[0] = GNC2026W_DW.NextOutput_a +
            GNC2026W_B.VelocitytoPosition_e[0];
          GNC2026W_B.ThrustPer_Final_h5jz[1] = GNC2026W_DW.NextOutput_a +
            GNC2026W_B.VelocitytoPosition_e[1];
          GNC2026W_B.ThrustPer_Final_h5jz[2] = GNC2026W_DW.NextOutput_a +
            GNC2026W_B.VelocitytoPosition_e[2];
          srUpdateBC(GNC2026W_DW.EnabledSubsystem1_SubsysRanB_mm);
        }

        // End of Outputs for SubSystem: '<S393>/Enabled Subsystem1'

        // Outputs for Enabled SubSystem: '<S405>/Enabled Subsystem3' incorporates:
        //   EnablePort: '<S408>/Enable'

        if (GNC2026W_B.ThrustPer_Final_h5jz[0] - GNC2026W_DW.Delay1_DSTATE_k3 !=
            GNC2026W_P.Constant3_Value_c) {
          // SignalConversion generated from: '<S408>/y2-y1' incorporates:
          //   Delay: '<S405>/Delay2'
          //   Sum: '<S405>/Subtract1'

          GNC2026W_B.y2y1_ob4 = GNC2026W_B.In1_g20a -
            GNC2026W_DW.Delay2_DSTATE_hi;
          srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_p);
        }

        // End of Outputs for SubSystem: '<S405>/Enabled Subsystem3'

        // MATLAB Function: '<S405>/MATLAB Function' incorporates:
        //   Constant: '<S393>/Constant1'
        //   Constant: '<S393>/Constant2'
        //   Constant: '<S405>/Constant3'
        //   Delay: '<S393>/Delay'
        //   Delay: '<S405>/Delay1'
        //   RelationalOperator: '<S393>/Relational Operator2'
        //   RelationalOperator: '<S405>/Relational Operator'
        //   Sum: '<S405>/Subtract2'

        GNC2026W_MATLABFunction_oy(GNC2026W_B.y2y1_ob4, GNC2026W_P.dataRate,
          &rtb_TSamp_eu, &GNC2026W_DW.sf_MATLABFunction_iu);

        // RelationalOperator: '<S396>/Relational Operator' incorporates:
        //   Constant: '<S396>/Constant3'
        //   Delay: '<S396>/Delay1'
        //   Sum: '<S396>/Subtract1'

        rtb_RelationalOperator_lm[0] = (GNC2026W_B.ThrustPer_Final_h5jz[0] -
          GNC2026W_DW.Delay1_DSTATE_dim[0] != GNC2026W_P.Constant3_Value_i);
        rtb_RelationalOperator_lm[1] = (GNC2026W_B.ThrustPer_Final_h5jz[1] -
          GNC2026W_DW.Delay1_DSTATE_dim[1] != GNC2026W_P.Constant3_Value_i);
        rtb_RelationalOperator_lm[2] = (GNC2026W_B.ThrustPer_Final_h5jz[2] -
          GNC2026W_DW.Delay1_DSTATE_dim[2] != GNC2026W_P.Constant3_Value_i);

        // Outputs for Enabled SubSystem: '<S396>/Enabled Subsystem'
        GNC2026W_EnabledSubsystem_b(rtb_RelationalOperator_lm,
          GNC2026W_B.ThrustPer_Final_h5jz, rtb_TSamp_eu, GNC2026W_B.dy_f,
          &GNC2026W_DW.EnabledSubsystem_h, &GNC2026W_P.EnabledSubsystem_h);

        // End of Outputs for SubSystem: '<S396>/Enabled Subsystem'

        // RelationalOperator: '<S395>/Relational Operator' incorporates:
        //   Constant: '<S395>/Constant3'
        //   Delay: '<S395>/Delay1'
        //   Sum: '<S395>/Subtract1'

        rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy_f[0] -
          GNC2026W_DW.Delay1_DSTATE_ft[0] != GNC2026W_P.Constant3_Value_n4);
        rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy_f[1] -
          GNC2026W_DW.Delay1_DSTATE_ft[1] != GNC2026W_P.Constant3_Value_n4);
        rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy_f[2] -
          GNC2026W_DW.Delay1_DSTATE_ft[2] != GNC2026W_P.Constant3_Value_n4);

        // Outputs for Enabled SubSystem: '<S395>/Enabled Subsystem'
        GNC2026W_EnabledSubsystem(rtb_RelationalOperator_lm, GNC2026W_B.dy_f,
          rtb_TSamp_eu, GNC2026W_B.dy_j, &GNC2026W_B.EnabledSubsystem_p,
          &GNC2026W_DW.EnabledSubsystem_p, &GNC2026W_P.EnabledSubsystem_p);

        // End of Outputs for SubSystem: '<S395>/Enabled Subsystem'

        // DataStoreWrite: '<S391>/Measured States for RED' incorporates:
        //   Trigonometry: '<S397>/Atan2'
        //   Trigonometry: '<S397>/Cos'
        //   Trigonometry: '<S397>/Sin'

        GNC2026W_DW.RED_Measured_States[0] = GNC2026W_B.ThrustPer_Final_h5jz[0];
        GNC2026W_DW.RED_Measured_States[1] = GNC2026W_B.ThrustPer_Final_h5jz[1];
        GNC2026W_DW.RED_Measured_States[2] = rt_atan2d_snf(sin
          (GNC2026W_B.ThrustPer_Final_h5jz[2]), cos
          (GNC2026W_B.ThrustPer_Final_h5jz[2]));
        GNC2026W_DW.RED_Measured_States[3] = GNC2026W_B.dy_f[0];
        GNC2026W_DW.RED_Measured_States[6] = GNC2026W_B.dy_j[0];
        GNC2026W_DW.RED_Measured_States[4] = GNC2026W_B.dy_f[1];
        GNC2026W_DW.RED_Measured_States[7] = GNC2026W_B.dy_j[1];
        GNC2026W_DW.RED_Measured_States[5] = GNC2026W_B.dy_f[2];
        GNC2026W_DW.RED_Measured_States[8] = GNC2026W_B.dy_j[2];

        // Trigonometry: '<S404>/Atan2' incorporates:
        //   Trigonometry: '<S404>/Cos'
        //   Trigonometry: '<S404>/Sin'

        GNC2026W_B.Atan2 = rt_atan2d_snf(sin(GNC2026W_B.VelocitytoPosition_e[2]),
          cos(GNC2026W_B.VelocitytoPosition_e[2]));

        // Update for RandomNumber: '<S364>/Add Noise'
        GNC2026W_DW.NextOutput_a = rt_nrand_Upu32_Yd_f_pw_snf
          (&GNC2026W_DW.RandSeed_m) * GNC2026W_P.AddNoise_StdDev_m +
          GNC2026W_P.AddNoise_Mean_d;

        // Update for Delay: '<S405>/Delay2'
        GNC2026W_DW.Delay2_DSTATE_hi = GNC2026W_B.In1_g20a;

        // Update for Delay: '<S405>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_k3 = GNC2026W_B.ThrustPer_Final_h5jz[0];

        // Update for DiscreteIntegrator: '<S394>/Velocity to Position'
        GNC2026W_DW.VelocitytoPosition_DSTATE_e[0] =
          GNC2026W_B.VelocitytoPosition_e[0];

        // Update for Delay: '<S396>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_dim[0] = GNC2026W_B.ThrustPer_Final_h5jz[0];

        // Update for Delay: '<S395>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_ft[0] = GNC2026W_B.dy_f[0];

        // Update for UnitDelay: '<S402>/UD' incorporates:
        //   SampleTimeMath: '<S402>/TSamp'
        //
        //  About '<S402>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //    *
        //  Block description for '<S402>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_p[0] = GNC2026W_B.VelocitytoPosition_e[0] *
          GNC2026W_P.TSamp_WtEt_k;

        // Update for DiscreteIntegrator: '<S394>/Velocity to Position'
        GNC2026W_DW.VelocitytoPosition_DSTATE_e[1] =
          GNC2026W_B.VelocitytoPosition_e[1];

        // Update for Delay: '<S396>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_dim[1] = GNC2026W_B.ThrustPer_Final_h5jz[1];

        // Update for Delay: '<S395>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_ft[1] = GNC2026W_B.dy_f[1];

        // Update for UnitDelay: '<S402>/UD' incorporates:
        //   SampleTimeMath: '<S402>/TSamp'
        //
        //  About '<S402>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //    *
        //  Block description for '<S402>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_p[1] = GNC2026W_B.VelocitytoPosition_e[1] *
          GNC2026W_P.TSamp_WtEt_k;

        // Update for DiscreteIntegrator: '<S394>/Velocity to Position'
        GNC2026W_DW.VelocitytoPosition_DSTATE_e[2] =
          GNC2026W_B.VelocitytoPosition_e[2];

        // Update for Delay: '<S396>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_dim[2] = GNC2026W_B.ThrustPer_Final_h5jz[2];

        // Update for Delay: '<S395>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_ft[2] = GNC2026W_B.dy_f[2];

        // Update for UnitDelay: '<S402>/UD' incorporates:
        //   SampleTimeMath: '<S402>/TSamp'
        //
        //  About '<S402>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //    *
        //  Block description for '<S402>/UD':
        //
        //   Store in Global RAM

        GNC2026W_DW.UD_DSTATE_p[2] = GNC2026W_B.VelocitytoPosition_e[2] *
          GNC2026W_P.TSamp_WtEt_k;
        srUpdateBC(GNC2026W_DW.REDOnly_SubsysRanBC);

        // End of Outputs for SubSystem: '<S314>/RED Only'
      }

      // End of If: '<S314>/If'

      // Update for RandomNumber: '<S312>/Add Noise'
      GNC2026W_DW.NextOutput_f = rt_nrand_Upu32_Yd_f_pw_snf
        (&GNC2026W_DW.RandSeed_a) * GNC2026W_P.AddNoise_StdDev_l +
        GNC2026W_P.AddNoise_Mean_i;

      // Update for Delay: '<S330>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_i = GNC2026W_B.In1_g20asdt;

      // Update for Delay: '<S330>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_h = GNC2026W_B.ThrustPer_Final_h5jzayd[0];

      // Update for Delay: '<S341>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_pv = rtb_TSamp_ao;

      // Update for RandomNumber: '<S313>/Add Noise'
      GNC2026W_DW.NextOutput_m = rt_nrand_Upu32_Yd_f_pw_snf
        (&GNC2026W_DW.RandSeed_o) * GNC2026W_P.AddNoise_StdDev_j +
        GNC2026W_P.AddNoise_Mean_j;

      // Update for Delay: '<S358>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_hf = GNC2026W_B.In1_g20asd;

      // Update for Delay: '<S358>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_dx = GNC2026W_B.ThrustPer_Final_h5jzay[0];

      // Update for Delay: '<S321>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_p[0] = GNC2026W_B.ThrustPer_Final_h5jzayd[0];

      // Update for Delay: '<S320>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_k[0] = GNC2026W_B.dy_cg[0];

      // Update for UnitDelay: '<S327>/UD' incorporates:
      //   SampleTimeMath: '<S327>/TSamp'
      //
      //  About '<S327>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //    *
      //  Block description for '<S327>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE[0] = GNC2026W_DW.VelocitytoPosition_DSTATE[0] *
        GNC2026W_P.TSamp_WtEt_a;

      // Update for Delay: '<S349>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_hq[0] = GNC2026W_B.ThrustPer_Final_h5jzay[0];

      // Update for Delay: '<S348>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_di[0] = GNC2026W_B.dy_b[0];

      // Update for UnitDelay: '<S355>/UD' incorporates:
      //   SampleTimeMath: '<S355>/TSamp'
      //
      //  About '<S355>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //    *
      //  Block description for '<S355>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_f[0] = GNC2026W_DW.VelocitytoPosition_DSTATE_f[0] *
        GNC2026W_P.TSamp_WtEt_cs;

      // Update for Delay: '<S321>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_p[1] = GNC2026W_B.ThrustPer_Final_h5jzayd[1];

      // Update for Delay: '<S320>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_k[1] = GNC2026W_B.dy_cg[1];

      // Update for UnitDelay: '<S327>/UD' incorporates:
      //   SampleTimeMath: '<S327>/TSamp'
      //
      //  About '<S327>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //    *
      //  Block description for '<S327>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE[1] = GNC2026W_DW.VelocitytoPosition_DSTATE[1] *
        GNC2026W_P.TSamp_WtEt_a;

      // Update for Delay: '<S349>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_hq[1] = GNC2026W_B.ThrustPer_Final_h5jzay[1];

      // Update for Delay: '<S348>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_di[1] = GNC2026W_B.dy_b[1];

      // Update for UnitDelay: '<S355>/UD' incorporates:
      //   SampleTimeMath: '<S355>/TSamp'
      //
      //  About '<S355>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //    *
      //  Block description for '<S355>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_f[1] = GNC2026W_DW.VelocitytoPosition_DSTATE_f[1] *
        GNC2026W_P.TSamp_WtEt_cs;

      // Update for Delay: '<S321>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_p[2] = GNC2026W_B.ThrustPer_Final_h5jzayd[2];

      // Update for Delay: '<S320>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_k[2] = GNC2026W_B.dy_cg[2];

      // Update for UnitDelay: '<S327>/UD' incorporates:
      //   SampleTimeMath: '<S327>/TSamp'
      //
      //  About '<S327>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //    *
      //  Block description for '<S327>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE[2] = GNC2026W_DW.VelocitytoPosition_DSTATE[2] *
        GNC2026W_P.TSamp_WtEt_a;

      // Update for Delay: '<S349>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_hq[2] = GNC2026W_B.ThrustPer_Final_h5jzay[2];

      // Update for Delay: '<S348>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_di[2] = GNC2026W_B.dy_b[2];

      // Update for UnitDelay: '<S355>/UD' incorporates:
      //   SampleTimeMath: '<S355>/TSamp'
      //
      //  About '<S355>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      //    *
      //  Block description for '<S355>/UD':
      //
      //   Store in Global RAM

      GNC2026W_DW.UD_DSTATE_f[2] = GNC2026W_DW.VelocitytoPosition_DSTATE_f[2] *
        GNC2026W_P.TSamp_WtEt_cs;
      srUpdateBC(GNC2026W_DW.SimulatePlantDynamics_SubsysRan);

      // End of Outputs for SubSystem: '<Root>/Simulate Plant Dynamics'
    }

    // End of If: '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S1>/Separate Phases' incorporates:
    //   Constant: '<S1>/Constant'
    //   Constant: '<S1>/Constant1'
    //   Constant: '<S1>/Constant2'
    //   Constant: '<S1>/Constant3'
    //   Constant: '<S1>/Constant4'
    //   Constant: '<S1>/Constant6'
    //   DataStoreRead: '<S1>/Universal_Time25'
    //   DataStoreWrite: '<S23>/Data Store Write10'
    //   DataStoreWrite: '<S23>/Data Store Write11'
    //   DataStoreWrite: '<S23>/Data Store Write2'
    //   StringConstant: '<S23>/String Constant'
    //   StringConstant: '<S23>/String Constant1'
    //   StringConstant: '<S23>/String Constant2'

    rtAction = -1;
    if (GNC2026W_DW.Univ_Time < GNC2026W_P.Phase0_End) {
      rtAction = 0;
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase1_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase0_End)) {
      rtAction = 1;
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase2_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase1_End)) {
      rtAction = 2;
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase2_End)) {
      rtAction = 3;
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase4_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_End)) {
      rtAction = 4;
    } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase5_End) &&
               (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase4_End)) {
      rtAction = 5;
    } else if (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase5_End) {
      rtAction = 6;
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S1>/Phase #0: Synchronization' incorporates:
      //   ActionPort: '<S21>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &GNC2026W_DW.ARM_Path_Planner_Selection,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Logger,
        &GNC2026W_DW.BLACK_Path_Planner_Selection,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &GNC2026W_DW.BLUE_Path_Planner_Selection, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection,
        &GNC2026W_P.Phase0Synchronization);
      srUpdateBC
        (GNC2026W_DW.Phase0Synchronization.Phase0Synchronization_SubsysRan);

      // End of Outputs for SubSystem: '<S1>/Phase #0: Synchronization'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S1>/Phase #1: Start Floating ' incorporates:
      //   ActionPort: '<S22>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &GNC2026W_DW.ARM_Path_Planner_Selection,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Logger,
        &GNC2026W_DW.BLACK_Path_Planner_Selection,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &GNC2026W_DW.BLUE_Path_Planner_Selection, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase1StartFloating);
      srUpdateBC(GNC2026W_DW.Phase1StartFloating.Phase0Synchronization_SubsysRan);

      // End of Outputs for SubSystem: '<S1>/Phase #1: Start Floating '
      break;

     case 2:
      // Outputs for IfAction SubSystem: '<S1>/Phase #2: Initial Position' incorporates:
      //   ActionPort: '<S23>/Action Port'

      // DataStoreWrite: '<S23>/Data Store Write24' incorporates:
      //   Constant: '<S23>/Constant11'

      GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value;

      // DataStoreWrite: '<S23>/Data Store Write26' incorporates:
      //   Constant: '<S23>/Constant12'

      GNC2026W_DW.ARM_Path_Planner_Selection = GNC2026W_P.Constant12_Value;

      // DataStoreWrite: '<S23>/Data Store Write23' incorporates:
      //   Constant: '<S23>/Constant14'

      GNC2026W_DW.BLACK_Path_Planner_Selection = GNC2026W_P.Constant14_Value;

      // DataStoreWrite: '<S23>/Data Store Write22' incorporates:
      //   Constant: '<S23>/Constant15'

      GNC2026W_DW.BLUE_Path_Planner_Selection = GNC2026W_P.Constant15_Value;

      // DataStoreWrite: '<S23>/Data Store Write27' incorporates:
      //   Constant: '<S23>/Constant18'

      GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value;

      // DataStoreWrite: '<S23>/Data Store Write4' incorporates:
      //   Constant: '<S23>/Constant4'

      GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value;

      // DataStoreWrite: '<S23>/Data Store Write8' incorporates:
      //   Constant: '<S23>/Constant5'

      GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value;

      // DataStoreWrite: '<S23>/Data Store Write7' incorporates:
      //   Constant: '<S23>/Constant6'

      GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value;

      // DataStoreWrite: '<S23>/Data Store Write16' incorporates:
      //   Constant: '<S23>/Constant8'

      GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value;
      strncpy(&GNC2026W_DW.BLACK_Logger[0], &GNC2026W_P.StringConstant1_String[0],
              255U);
      GNC2026W_DW.BLACK_Logger[255] = '\x00';
      strncpy(&GNC2026W_DW.BLUE_Logger[0], &GNC2026W_P.StringConstant2_String[0],
              255U);
      GNC2026W_DW.BLUE_Logger[255] = '\x00';

      // DataStoreWrite: '<S23>/Data Store Write13' incorporates:
      //   Constant: '<S28>/Constant1'
      //   Constant: '<S28>/Constant2'
      //   Constant: '<S28>/Constant3'
      //   DataStoreWrite: '<S23>/Data Store Write10'
      //   DataStoreWrite: '<S23>/Data Store Write11'
      //   StringConstant: '<S23>/String Constant1'
      //   StringConstant: '<S23>/String Constant2'

      GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value;
      GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value;
      GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value;
      strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String[0],
              255U);
      GNC2026W_DW.RED_Logger[255] = '\x00';

      // DataStoreWrite: '<S23>/Data Store Write1' incorporates:
      //   Constant: '<S29>/Desired States (BLACK)'
      //   DataStoreWrite: '<S23>/Data Store Write2'
      //   StringConstant: '<S23>/String Constant'

      GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_P.init_states_BLACK[0];

      // DataStoreWrite: '<S23>/Data Store Write18' incorporates:
      //   Constant: '<S30>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.init_states_BLUE[0];

      // DataStoreWrite: '<S23>/Data Store Write9' incorporates:
      //   Constant: '<S31>/Constant2'

      GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];

      // DataStoreWrite: '<S23>/Data Store Write1' incorporates:
      //   Constant: '<S29>/Desired States (BLACK)'

      GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_P.init_states_BLACK[1];

      // DataStoreWrite: '<S23>/Data Store Write18' incorporates:
      //   Constant: '<S30>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.init_states_BLUE[1];

      // DataStoreWrite: '<S23>/Data Store Write9' incorporates:
      //   Constant: '<S31>/Constant2'

      GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];

      // DataStoreWrite: '<S23>/Data Store Write1' incorporates:
      //   Constant: '<S29>/Desired States (BLACK)'

      GNC2026W_DW.BLACK_Desired_States[2] = GNC2026W_P.init_states_BLACK[2];

      // DataStoreWrite: '<S23>/Data Store Write18' incorporates:
      //   Constant: '<S30>/Desired States (BLUE)'

      GNC2026W_DW.BLUE_Desired_States[2] = GNC2026W_P.init_states_BLUE[2];

      // DataStoreWrite: '<S23>/Data Store Write9' incorporates:
      //   Constant: '<S31>/Constant2'

      GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];
      srUpdateBC(GNC2026W_DW.Phase2InitialPosition_SubsysRan);

      // End of Outputs for SubSystem: '<S1>/Phase #2: Initial Position'
      break;

     case 3:
      // Outputs for IfAction SubSystem: '<S1>/Phase #3: Experiment' incorporates:
      //   ActionPort: '<S24>/Action Port'

      // If: '<S24>/Experiment Sub-Phases' incorporates:
      //   Constant: '<S24>/Constant1'
      //   Constant: '<S24>/Constant2'
      //   Constant: '<S24>/Constant3'
      //   Constant: '<S24>/Constant4'
      //   DataStoreRead: '<S24>/Universal_Time'
      //   DataStoreWrite: '<S32>/Data Store Write10'
      //   DataStoreWrite: '<S32>/Data Store Write11'
      //   DataStoreWrite: '<S32>/Data Store Write6'
      //   DataStoreWrite: '<S33>/Data Store Write10'
      //   DataStoreWrite: '<S33>/Data Store Write11'
      //   DataStoreWrite: '<S33>/Data Store Write6'
      //   DataStoreWrite: '<S34>/Data Store Write10'
      //   DataStoreWrite: '<S34>/Data Store Write11'
      //   DataStoreWrite: '<S34>/Data Store Write6'
      //   DataStoreWrite: '<S35>/Data Store Write10'
      //   DataStoreWrite: '<S35>/Data Store Write11'
      //   DataStoreWrite: '<S35>/Data Store Write6'
      //   StringConstant: '<S32>/String Constant'
      //   StringConstant: '<S32>/String Constant1'
      //   StringConstant: '<S32>/String Constant2'
      //   StringConstant: '<S33>/String Constant'
      //   StringConstant: '<S33>/String Constant1'
      //   StringConstant: '<S33>/String Constant2'
      //   StringConstant: '<S34>/String Constant'
      //   StringConstant: '<S34>/String Constant1'
      //   StringConstant: '<S34>/String Constant2'
      //   StringConstant: '<S35>/String Constant'
      //   StringConstant: '<S35>/String Constant1'
      //   StringConstant: '<S35>/String Constant2'

      rtAction = -1;
      if (GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase1_End) {
        rtAction = 0;
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase2_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase1_End)) {
        rtAction = 1;
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase3_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase2_End)) {
        rtAction = 2;
      } else if ((GNC2026W_DW.Univ_Time < GNC2026W_P.Phase3_SubPhase4_End) &&
                 (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase3_End)) {
        rtAction = 3;
      }

      switch (rtAction) {
       case 0:
        // Outputs for IfAction SubSystem: '<S24>/Sub-Phase #1' incorporates:
        //   ActionPort: '<S32>/Action Port'

        // DataStoreWrite: '<S32>/Data Store Write24' incorporates:
        //   Constant: '<S32>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_e;

        // DataStoreWrite: '<S32>/Data Store Write1' incorporates:
        //   Constant: '<S32>/Constant12'

        GNC2026W_DW.ARM_Path_Planner_Selection = GNC2026W_P.Constant12_Value_g;

        // DataStoreWrite: '<S32>/Data Store Write23' incorporates:
        //   Constant: '<S32>/Constant14'

        GNC2026W_DW.BLACK_Path_Planner_Selection = GNC2026W_P.Constant14_Value_f;

        // DataStoreWrite: '<S32>/Data Store Write22' incorporates:
        //   Constant: '<S32>/Constant15'

        GNC2026W_DW.BLUE_Path_Planner_Selection = GNC2026W_P.Constant15_Value_o;

        // DataStoreWrite: '<S32>/Data Store Write2' incorporates:
        //   Constant: '<S32>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_m;

        // DataStoreWrite: '<S32>/Data Store Write4' incorporates:
        //   Constant: '<S32>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_g;

        // DataStoreWrite: '<S32>/Data Store Write3' incorporates:
        //   Constant: '<S32>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_o;

        // DataStoreWrite: '<S32>/Data Store Write7' incorporates:
        //   Constant: '<S32>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_i;

        // DataStoreWrite: '<S32>/Data Store Write16' incorporates:
        //   Constant: '<S32>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_m;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_k[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_p[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S32>/Data Store Write13' incorporates:
        //   Constant: '<S36>/Constant1'
        //   Constant: '<S36>/Constant2'
        //   Constant: '<S36>/Constant3'
        //   DataStoreWrite: '<S32>/Data Store Write10'
        //   DataStoreWrite: '<S32>/Data Store Write11'
        //   StringConstant: '<S32>/String Constant1'
        //   StringConstant: '<S32>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_b;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_o;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_f;

        // Sum: '<S47>/Subtract3' incorporates:
        //   Constant: '<S47>/Constant2'
        //   DataStoreRead: '<S49>/Universal_Time'
        //   Sum: '<S43>/Subtract'

        t15 = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S38>/Product' incorporates:
        //   Constant: '<S38>/Desired Rate '
        //   Sum: '<S47>/Subtract3'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRate_Value;

        // Trigonometry: '<S46>/Sin' incorporates:
        //   Trigonometry: '<S48>/Sin'

        rtb_TSamp_ao = sin(rtb_TSamp_eu);

        // Trigonometry: '<S46>/Cos' incorporates:
        //   Trigonometry: '<S48>/Cos'

        rtb_TSamp_eu = cos(rtb_TSamp_eu);

        // DataStoreWrite: '<S32>/Data Store Write18' incorporates:
        //   Constant: '<S46>/Constant1'
        //   Constant: '<S46>/Constant2'
        //   Gain: '<S46>/Gain'
        //   Gain: '<S46>/Gain1'
        //   Sum: '<S46>/Sum1'
        //   Sum: '<S46>/Sum2'
        //   Trigonometry: '<S46>/Cos'
        //   Trigonometry: '<S46>/Sin'
        //   Trigonometry: '<S48>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain * rtb_TSamp_eu
          + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain *
          rtb_TSamp_ao + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_ao,
          rtb_TSamp_eu);

        // Product: '<S40>/Product' incorporates:
        //   Constant: '<S40>/Desired Rate (BLACK)'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRateBLACK_Value;

        // Sum: '<S45>/Subtract' incorporates:
        //   Constant: '<S45>/Constant1'
        //   DataStoreRead: '<S45>/Universal_Time'
        //   Sum: '<S44>/Subtract'

        rtb_TSamp_ao = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // DataStoreWrite: '<S32>/Data Store Write5' incorporates:
        //   Constant: '<S41>/Constant'
        //   Constant: '<S41>/Constant1'
        //   Constant: '<S41>/Desired X-Position (BLACK)'
        //   Constant: '<S41>/Desired Y-Position (BLACK)'
        //   Product: '<S41>/Matrix Multiply'
        //   Product: '<S41>/Matrix Multiply1'
        //   Sum: '<S41>/Sum'
        //   Sum: '<S41>/Sum1'
        //   Sum: '<S45>/Subtract'
        //   Trigonometry: '<S42>/Atan2'
        //   Trigonometry: '<S42>/Cos'
        //   Trigonometry: '<S42>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = rtb_TSamp_ao *
          GNC2026W_P.Constant1_Value_n + GNC2026W_P.X1_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = rtb_TSamp_ao *
          GNC2026W_P.Constant_Value + GNC2026W_P.Y1_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_eu),
          cos(rtb_TSamp_eu));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_b
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // DataStoreWrite: '<S32>/Data Store Write9' incorporates:
        //   Constant: '<S39>/Constant2'
        //   DataStoreWrite: '<S32>/Data Store Write6'
        //   StringConstant: '<S32>/String Constant'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];
        GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

        // Sum: '<S52>/Sum' incorporates:
        //   Constant: '<S39>/Separation'
        //   Constant: '<S52>/Constant'
        //   DataStoreWrite: '<S39>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.sep1 + GNC2026W_P.Constant_Value_n;
        srUpdateBC(GNC2026W_DW.SubPhase1_SubsysRanBC);

        // End of Outputs for SubSystem: '<S24>/Sub-Phase #1'
        break;

       case 1:
        // Outputs for IfAction SubSystem: '<S24>/Sub-Phase #2 ' incorporates:
        //   ActionPort: '<S33>/Action Port'

        // DataStoreWrite: '<S33>/Data Store Write1' incorporates:
        //   Constant: '<S33>/Constant12'

        GNC2026W_DW.ARM_Path_Planner_Selection = GNC2026W_P.Constant12_Value_k;

        // DataStoreWrite: '<S33>/Data Store Write22' incorporates:
        //   Constant: '<S33>/Constant15'

        GNC2026W_DW.BLUE_Path_Planner_Selection = GNC2026W_P.Constant15_Value_o1;

        // DataStoreWrite: '<S33>/Data Store Write2' incorporates:
        //   Constant: '<S33>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_n;

        // DataStoreWrite: '<S33>/Data Store Write7' incorporates:
        //   Constant: '<S33>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_p;

        // DataStoreWrite: '<S33>/Data Store Write16' incorporates:
        //   Constant: '<S33>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_o;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_e[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_e[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S33>/Data Store Write13' incorporates:
        //   Constant: '<S56>/Constant1'
        //   Constant: '<S56>/Constant2'
        //   Constant: '<S56>/Constant3'
        //   DataStoreWrite: '<S33>/Data Store Write10'
        //   DataStoreWrite: '<S33>/Data Store Write11'
        //   StringConstant: '<S33>/String Constant1'
        //   StringConstant: '<S33>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_p;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_m;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_p;

        // Sum: '<S69>/Subtract3' incorporates:
        //   Constant: '<S69>/Constant2'
        //   DataStoreRead: '<S71>/Universal_Time'
        //   Sum: '<S65>/Subtract'
        //   Sum: '<S66>/Subtract'
        //   Sum: '<S67>/Subtract'

        t15 = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S58>/Product' incorporates:
        //   Constant: '<S58>/Desired Rate '
        //   Sum: '<S69>/Subtract3'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRate_Value_h;

        // Trigonometry: '<S68>/Sin' incorporates:
        //   Trigonometry: '<S70>/Sin'

        rtb_TSamp_ao = sin(rtb_TSamp_eu);

        // Trigonometry: '<S68>/Cos' incorporates:
        //   Trigonometry: '<S70>/Cos'

        rtb_TSamp_eu = cos(rtb_TSamp_eu);

        // DataStoreWrite: '<S33>/Data Store Write18' incorporates:
        //   Constant: '<S68>/Constant1'
        //   Constant: '<S68>/Constant2'
        //   Gain: '<S68>/Gain'
        //   Gain: '<S68>/Gain1'
        //   Sum: '<S68>/Sum1'
        //   Sum: '<S68>/Sum2'
        //   Trigonometry: '<S68>/Cos'
        //   Trigonometry: '<S68>/Sin'
        //   Trigonometry: '<S70>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_h *
          rtb_TSamp_eu + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_c *
          rtb_TSamp_ao + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_ao,
          rtb_TSamp_eu);

        // Product: '<S62>/Product' incorporates:
        //   Constant: '<S62>/Desired Rate (BLACK)'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRateBLACK_Value_k;

        // DataStoreWrite: '<S33>/Data Store Write5' incorporates:
        //   Constant: '<S63>/Constant'
        //   Constant: '<S63>/Constant1'
        //   Constant: '<S63>/Desired X-Position (BLACK)'
        //   Constant: '<S63>/Desired Y-Position (BLACK)'
        //   Product: '<S63>/Matrix Multiply'
        //   Product: '<S63>/Matrix Multiply1'
        //   Sum: '<S63>/Sum'
        //   Sum: '<S63>/Sum1'
        //   Trigonometry: '<S64>/Atan2'
        //   Trigonometry: '<S64>/Cos'
        //   Trigonometry: '<S64>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = t15 * GNC2026W_P.Constant1_Value_f
          + GNC2026W_P.X2_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = t15 * GNC2026W_P.Constant_Value_f
          + GNC2026W_P.Y2_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_eu),
          cos(rtb_TSamp_eu));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_c
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // DataStoreWrite: '<S33>/Data Store Write9' incorporates:
        //   Constant: '<S59>/Constant2'
        //   DataStoreWrite: '<S33>/Data Store Write6'
        //   StringConstant: '<S33>/String Constant'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.init_states_RED[0];
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.init_states_RED[1];
        GNC2026W_DW.RED_Desired_States[2] = GNC2026W_P.init_states_RED[2];

        // Sum: '<S74>/Sum' incorporates:
        //   Constant: '<S59>/Separation'
        //   Constant: '<S74>/Constant'
        //   DataStoreWrite: '<S59>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.Separation_Value +
          GNC2026W_P.Constant_Value_e;

        // DataStoreWrite: '<S55>/Data Store Write23' incorporates:
        //   Constant: '<S55>/Constant14'

        GNC2026W_DW.BLACK_Path_Planner_Selection = GNC2026W_P.Constant14_Value_j;

        // MATLAB Function: '<S55>/First Fit Detector' incorporates:
        //   DataStoreRead: '<S55>/Data Store Read'

        GNC2026W_B.BLACK_Control_Law_Enabler_j = 2.0;
        if (GNC2026W_DW.ARM_Grab_Complete == 1.0) {
          GNC2026W_B.BLACK_Control_Law_Enabler_j = 0.0;
        }

        // End of MATLAB Function: '<S55>/First Fit Detector'

        // DataStoreWrite: '<S55>/Data Store Write4'
        GNC2026W_DW.BLACK_Control_Law_Enabler =
          GNC2026W_B.BLACK_Control_Law_Enabler_j;

        // DataStoreRead: '<S60>/Data Store Read'
        GNC2026W_B.DataStoreRead = GNC2026W_DW.isValid;

        // MATLAB Function: '<S60>/First Fit Detector' incorporates:
        //   DataStoreRead: '<S60>/Data Store Read4'

        if ((GNC2026W_B.DataStoreRead == 1.0) && (GNC2026W_DW.firstfit == 0.0))
        {
          GNC2026W_DW.firstfit = 1.0;
        }

        if ((GNC2026W_DW.firstfit == 1.0) && (GNC2026W_B.DataStoreRead == 1.0) &&
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

        GNC2026W_DW.prev = GNC2026W_B.DataStoreRead;
        GNC2026W_B.cmd = GNC2026W_DW.phase;

        // End of MATLAB Function: '<S60>/First Fit Detector'

        // If: '<S60>/If'
        if (GNC2026W_B.cmd == 0.0) {
          // Outputs for IfAction SubSystem: '<S60>/If Action Subsystem' incorporates:
          //   ActionPort: '<S78>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem_a);

          // End of Outputs for SubSystem: '<S60>/If Action Subsystem'
        } else if (GNC2026W_B.cmd == 1.0) {
          // Outputs for IfAction SubSystem: '<S60>/If Action Subsystem1' incorporates:
          //   ActionPort: '<S79>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem1);

          // End of Outputs for SubSystem: '<S60>/If Action Subsystem1'
        } else if (GNC2026W_B.cmd == 2.0) {
          // Outputs for IfAction SubSystem: '<S60>/If Action Subsystem2' incorporates:
          //   ActionPort: '<S80>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem2);

          // End of Outputs for SubSystem: '<S60>/If Action Subsystem2'
        } else if (GNC2026W_B.cmd == 3.0) {
          // Outputs for IfAction SubSystem: '<S60>/If Action Subsystem3' incorporates:
          //   ActionPort: '<S81>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem3);

          // End of Outputs for SubSystem: '<S60>/If Action Subsystem3'
        } else if (GNC2026W_B.cmd == 4.0) {
          // Outputs for IfAction SubSystem: '<S60>/If Action Subsystem4' incorporates:
          //   ActionPort: '<S82>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem4);

          // End of Outputs for SubSystem: '<S60>/If Action Subsystem4'
        } else if (GNC2026W_B.cmd == 5.0) {
          // Outputs for IfAction SubSystem: '<S60>/If Action Subsystem5' incorporates:
          //   ActionPort: '<S83>/Action Port'

          GNC2026W_IfActionSubsystem(&GNC2026W_DW.RED_Control_Law_Enabler,
            &GNC2026W_DW.RED_Path_Planner_Selection,
            &GNC2026W_P.IfActionSubsystem5);

          // End of Outputs for SubSystem: '<S60>/If Action Subsystem5'
        }

        // End of If: '<S60>/If'
        srUpdateBC(GNC2026W_DW.SubPhase2_SubsysRanBC);

        // End of Outputs for SubSystem: '<S24>/Sub-Phase #2 '
        break;

       case 2:
        // Outputs for IfAction SubSystem: '<S24>/Sub-Phase #3 ' incorporates:
        //   ActionPort: '<S34>/Action Port'

        // DataStoreWrite: '<S34>/Data Store Write24' incorporates:
        //   Constant: '<S34>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_b;

        // DataStoreWrite: '<S34>/Data Store Write1' incorporates:
        //   Constant: '<S34>/Constant12'

        GNC2026W_DW.ARM_Path_Planner_Selection = GNC2026W_P.Constant12_Value_ku;

        // DataStoreWrite: '<S34>/Data Store Write23' incorporates:
        //   Constant: '<S34>/Constant14'

        GNC2026W_DW.BLACK_Path_Planner_Selection = GNC2026W_P.Constant14_Value_n;

        // DataStoreWrite: '<S34>/Data Store Write22' incorporates:
        //   Constant: '<S34>/Constant15'

        GNC2026W_DW.BLUE_Path_Planner_Selection = GNC2026W_P.Constant15_Value_o2;

        // DataStoreWrite: '<S34>/Data Store Write2' incorporates:
        //   Constant: '<S34>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_l;

        // DataStoreWrite: '<S34>/Data Store Write4' incorporates:
        //   Constant: '<S34>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_b;

        // DataStoreWrite: '<S34>/Data Store Write3' incorporates:
        //   Constant: '<S34>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_n;

        // DataStoreWrite: '<S34>/Data Store Write7' incorporates:
        //   Constant: '<S34>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_n;

        // DataStoreWrite: '<S34>/Data Store Write16' incorporates:
        //   Constant: '<S34>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_f;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_j[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_b[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S34>/Data Store Write13' incorporates:
        //   Constant: '<S84>/Constant1'
        //   Constant: '<S84>/Constant2'
        //   Constant: '<S84>/Constant3'
        //   DataStoreWrite: '<S34>/Data Store Write10'
        //   DataStoreWrite: '<S34>/Data Store Write11'
        //   StringConstant: '<S34>/String Constant1'
        //   StringConstant: '<S34>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_e;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_p;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_c;

        // Sum: '<S95>/Subtract3' incorporates:
        //   Constant: '<S95>/Constant2'
        //   DataStoreRead: '<S97>/Universal_Time'
        //   Sum: '<S91>/Subtract'

        t15 = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S86>/Product' incorporates:
        //   Constant: '<S86>/Desired Rate '
        //   Sum: '<S95>/Subtract3'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRate_Value_l;

        // Trigonometry: '<S94>/Sin' incorporates:
        //   Trigonometry: '<S96>/Sin'

        rtb_TSamp_ao = sin(rtb_TSamp_eu);

        // Trigonometry: '<S94>/Cos' incorporates:
        //   Trigonometry: '<S96>/Cos'

        rtb_TSamp_eu = cos(rtb_TSamp_eu);

        // DataStoreWrite: '<S34>/Data Store Write18' incorporates:
        //   Constant: '<S94>/Constant1'
        //   Constant: '<S94>/Constant2'
        //   Gain: '<S94>/Gain'
        //   Gain: '<S94>/Gain1'
        //   Sum: '<S94>/Sum1'
        //   Sum: '<S94>/Sum2'
        //   Trigonometry: '<S94>/Cos'
        //   Trigonometry: '<S94>/Sin'
        //   Trigonometry: '<S96>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_b *
          rtb_TSamp_eu + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_k *
          rtb_TSamp_ao + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_ao,
          rtb_TSamp_eu);

        // Product: '<S88>/Product' incorporates:
        //   Constant: '<S88>/Desired Rate (BLACK)'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRateBLACK_Value_kf;

        // Sum: '<S93>/Subtract' incorporates:
        //   Constant: '<S93>/Constant1'
        //   DataStoreRead: '<S93>/Universal_Time'
        //   Sum: '<S92>/Subtract'
        //   Sum: '<S99>/Subtract3'

        rtb_TSamp_ao = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // DataStoreWrite: '<S34>/Data Store Write5' incorporates:
        //   Constant: '<S89>/Constant'
        //   Constant: '<S89>/Constant1'
        //   Constant: '<S89>/Desired X-Position (BLACK)'
        //   Constant: '<S89>/Desired Y-Position (BLACK)'
        //   Product: '<S89>/Matrix Multiply'
        //   Product: '<S89>/Matrix Multiply1'
        //   Sum: '<S89>/Sum'
        //   Sum: '<S89>/Sum1'
        //   Sum: '<S93>/Subtract'
        //   Trigonometry: '<S90>/Atan2'
        //   Trigonometry: '<S90>/Cos'
        //   Trigonometry: '<S90>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = rtb_TSamp_ao *
          GNC2026W_P.Constant1_Value_g + GNC2026W_P.X3_blk;
        GNC2026W_DW.BLACK_Desired_States[1] = rtb_TSamp_ao *
          GNC2026W_P.Constant_Value_d + GNC2026W_P.Y3_blk;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_eu),
          cos(rtb_TSamp_eu));
        strncpy(&GNC2026W_DW.RED_Logger[0],
                &GNC2026W_P.StringConstant_String_ca[0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // Product: '<S87>/Product' incorporates:
        //   Constant: '<S87>/Desired Rate '
        //   DataStoreWrite: '<S34>/Data Store Write6'
        //   StringConstant: '<S34>/String Constant'

        rtb_TSamp_ao *= GNC2026W_P.DesiredRate_Value_d;

        // Gain: '<S98>/Gain' incorporates:
        //   Trigonometry: '<S98>/Cos'

        rtb_TSamp_eu = GNC2026W_P.Gain_Gain_ho * cos(rtb_TSamp_ao);

        // Gain: '<S98>/Gain1' incorporates:
        //   Trigonometry: '<S98>/Sin'

        rtb_TSamp_dm = GNC2026W_P.Gain1_Gain_d * sin(rtb_TSamp_ao);

        // Sum: '<S87>/Sum' incorporates:
        //   Constant: '<S87>/Constant'

        rtb_TSamp_ao += GNC2026W_P.Constant_Value_h;

        // DataStoreWrite: '<S34>/Data Store Write9' incorporates:
        //   Constant: '<S98>/Constant1'
        //   Constant: '<S98>/Constant2'
        //   Sum: '<S98>/Sum1'
        //   Sum: '<S98>/Sum2'
        //   Trigonometry: '<S101>/Atan2'
        //   Trigonometry: '<S101>/Cos'
        //   Trigonometry: '<S101>/Sin'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.xLength / 2.0 +
          rtb_TSamp_eu;
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.yLength / 2.0 +
          rtb_TSamp_dm;
        GNC2026W_DW.RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_ao), cos
          (rtb_TSamp_ao));

        // Sum: '<S100>/Sum' incorporates:
        //   Constant: '<S100>/Constant'
        //   Constant: '<S87>/Separation'
        //   DataStoreWrite: '<S87>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.sep3 + GNC2026W_P.Constant_Value_a;
        srUpdateBC(GNC2026W_DW.SubPhase3_SubsysRanBC);

        // End of Outputs for SubSystem: '<S24>/Sub-Phase #3 '
        break;

       case 3:
        // Outputs for IfAction SubSystem: '<S24>/Sub-Phase #4' incorporates:
        //   ActionPort: '<S35>/Action Port'

        // DataStoreWrite: '<S35>/Data Store Write24' incorporates:
        //   Constant: '<S35>/Constant11'

        GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.Constant11_Value_p;

        // DataStoreWrite: '<S35>/Data Store Write1' incorporates:
        //   Constant: '<S35>/Constant12'

        GNC2026W_DW.ARM_Path_Planner_Selection = GNC2026W_P.Constant12_Value_n;

        // DataStoreWrite: '<S35>/Data Store Write23' incorporates:
        //   Constant: '<S35>/Constant14'

        GNC2026W_DW.BLACK_Path_Planner_Selection =
          GNC2026W_P.Constant14_Value_f2;

        // DataStoreWrite: '<S35>/Data Store Write22' incorporates:
        //   Constant: '<S35>/Constant15'

        GNC2026W_DW.BLUE_Path_Planner_Selection = GNC2026W_P.Constant15_Value_n;

        // DataStoreWrite: '<S35>/Data Store Write2' incorporates:
        //   Constant: '<S35>/Constant18'

        GNC2026W_DW.ARM_Control_Law_Enabler = GNC2026W_P.Constant18_Value_e;

        // DataStoreWrite: '<S35>/Data Store Write4' incorporates:
        //   Constant: '<S35>/Constant4'

        GNC2026W_DW.BLACK_Control_Law_Enabler = GNC2026W_P.Constant4_Value_l;

        // DataStoreWrite: '<S35>/Data Store Write3' incorporates:
        //   Constant: '<S35>/Constant5'

        GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.Constant5_Value_p;

        // DataStoreWrite: '<S35>/Data Store Write7' incorporates:
        //   Constant: '<S35>/Constant6'

        GNC2026W_DW.Float_State = GNC2026W_P.Constant6_Value_m;

        // DataStoreWrite: '<S35>/Data Store Write16' incorporates:
        //   Constant: '<S35>/Constant8'

        GNC2026W_DW.BLUE_Control_Law_Enabler = GNC2026W_P.Constant8_Value_j;
        strncpy(&GNC2026W_DW.BLACK_Logger[0],
                &GNC2026W_P.StringConstant1_String_p[0], 255U);
        GNC2026W_DW.BLACK_Logger[255] = '\x00';
        strncpy(&GNC2026W_DW.BLUE_Logger[0],
                &GNC2026W_P.StringConstant2_String_l[0], 255U);
        GNC2026W_DW.BLUE_Logger[255] = '\x00';

        // DataStoreWrite: '<S35>/Data Store Write13' incorporates:
        //   Constant: '<S103>/Constant1'
        //   Constant: '<S103>/Constant2'
        //   Constant: '<S103>/Constant3'
        //   DataStoreWrite: '<S35>/Data Store Write10'
        //   DataStoreWrite: '<S35>/Data Store Write11'
        //   StringConstant: '<S35>/String Constant1'
        //   StringConstant: '<S35>/String Constant2'

        GNC2026W_DW.ARM_Desired_States[0] = GNC2026W_P.Constant3_Value_k;
        GNC2026W_DW.ARM_Desired_States[1] = GNC2026W_P.Constant1_Value_b;
        GNC2026W_DW.ARM_Desired_States[2] = GNC2026W_P.Constant2_Value_g;

        // Sum: '<S111>/Subtract3' incorporates:
        //   Constant: '<S111>/Constant2'
        //   DataStoreRead: '<S113>/Universal_Time'
        //   Sum: '<S109>/Subtract'

        t15 = GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End;

        // Product: '<S105>/Product' incorporates:
        //   Constant: '<S105>/Desired Rate '
        //   Sum: '<S111>/Subtract3'

        rtb_TSamp_eu = t15 * GNC2026W_P.DesiredRate_Value_ha;

        // Trigonometry: '<S110>/Sin' incorporates:
        //   Trigonometry: '<S112>/Sin'

        rtb_TSamp_ao = sin(rtb_TSamp_eu);

        // Trigonometry: '<S110>/Cos' incorporates:
        //   Trigonometry: '<S112>/Cos'

        rtb_TSamp_eu = cos(rtb_TSamp_eu);

        // DataStoreWrite: '<S35>/Data Store Write18' incorporates:
        //   Constant: '<S110>/Constant1'
        //   Constant: '<S110>/Constant2'
        //   Gain: '<S110>/Gain'
        //   Gain: '<S110>/Gain1'
        //   Sum: '<S110>/Sum1'
        //   Sum: '<S110>/Sum2'
        //   Trigonometry: '<S110>/Cos'
        //   Trigonometry: '<S110>/Sin'
        //   Trigonometry: '<S112>/Atan2'

        GNC2026W_DW.BLUE_Desired_States[0] = GNC2026W_P.Gain_Gain_o *
          rtb_TSamp_eu + GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[1] = GNC2026W_P.Gain1_Gain_b *
          rtb_TSamp_ao + GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLUE_Desired_States[2] = rt_atan2d_snf(rtb_TSamp_ao,
          rtb_TSamp_eu);

        // Product: '<S107>/Product' incorporates:
        //   Constant: '<S107>/Desired Rate (BLACK)'

        rtb_TSamp_ao = t15 * GNC2026W_P.DesiredRateBLACK_Value_i;

        // DataStoreWrite: '<S35>/Data Store Write5' incorporates:
        //   Constant: '<S104>/Desired X-Position (BLACK)'
        //   Constant: '<S104>/Desired Y-Position (BLACK)'
        //   Trigonometry: '<S108>/Atan2'
        //   Trigonometry: '<S108>/Cos'
        //   Trigonometry: '<S108>/Sin'

        GNC2026W_DW.BLACK_Desired_States[0] = GNC2026W_P.xLength / 2.0;
        GNC2026W_DW.BLACK_Desired_States[1] = GNC2026W_P.yLength / 2.0;
        GNC2026W_DW.BLACK_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_ao),
          cos(rtb_TSamp_ao));
        strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.StringConstant_String_e
                [0], 255U);
        GNC2026W_DW.RED_Logger[255] = '\x00';

        // Product: '<S106>/Product' incorporates:
        //   Constant: '<S106>/Desired Rate '
        //   Constant: '<S115>/Constant2'
        //   DataStoreRead: '<S118>/Universal_Time'
        //   DataStoreWrite: '<S35>/Data Store Write6'
        //   StringConstant: '<S35>/String Constant'
        //   Sum: '<S115>/Subtract3'

        rtb_TSamp_ao = (GNC2026W_DW.Univ_Time - GNC2026W_P.Phase2_End) *
          GNC2026W_P.DesiredRate_Value_n;

        // Gain: '<S114>/Gain' incorporates:
        //   Trigonometry: '<S114>/Cos'

        rtb_TSamp_eu = GNC2026W_P.Gain_Gain_ox * cos(rtb_TSamp_ao);

        // Gain: '<S114>/Gain1' incorporates:
        //   Trigonometry: '<S114>/Sin'

        rtb_TSamp_dm = GNC2026W_P.Gain1_Gain_e * sin(rtb_TSamp_ao);

        // Sum: '<S106>/Sum' incorporates:
        //   Constant: '<S106>/Constant'

        rtb_TSamp_ao += GNC2026W_P.Constant_Value_h1;

        // DataStoreWrite: '<S35>/Data Store Write9' incorporates:
        //   Constant: '<S114>/Constant1'
        //   Constant: '<S114>/Constant2'
        //   Sum: '<S114>/Sum1'
        //   Sum: '<S114>/Sum2'
        //   Trigonometry: '<S117>/Atan2'
        //   Trigonometry: '<S117>/Cos'
        //   Trigonometry: '<S117>/Sin'

        GNC2026W_DW.RED_Desired_States[0] = GNC2026W_P.xLength / 2.0 +
          rtb_TSamp_eu;
        GNC2026W_DW.RED_Desired_States[1] = GNC2026W_P.yLength / 2.0 +
          rtb_TSamp_dm;
        GNC2026W_DW.RED_Desired_States[2] = rt_atan2d_snf(sin(rtb_TSamp_ao), cos
          (rtb_TSamp_ao));

        // Sum: '<S116>/Sum' incorporates:
        //   Constant: '<S106>/Separation'
        //   Constant: '<S116>/Constant'
        //   DataStoreWrite: '<S106>/Data Store Write'

        GNC2026W_DW.L0 = GNC2026W_P.Separation_Value_d +
          GNC2026W_P.Constant_Value_c;
        srUpdateBC(GNC2026W_DW.SubPhase4_SubsysRanBC);

        // End of Outputs for SubSystem: '<S24>/Sub-Phase #4'
        break;
      }

      // End of If: '<S24>/Experiment Sub-Phases'
      srUpdateBC(GNC2026W_DW.Phase3Experiment_SubsysRanBC);

      // End of Outputs for SubSystem: '<S1>/Phase #3: Experiment'
      break;

     case 4:
      // Outputs for IfAction SubSystem: '<S1>/Phase #4: Return Home' incorporates:
      //   ActionPort: '<S25>/Action Port'

      GNC2026W_Phase4ReturnHome(&GNC2026W_DW.ARM_Control_Law_Enabler,
        GNC2026W_DW.ARM_Desired_States, &GNC2026W_DW.ARM_Path_Planner_Selection,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Desired_States,
        GNC2026W_DW.BLACK_Logger, &GNC2026W_DW.BLACK_Path_Planner_Selection,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Desired_States,
        GNC2026W_DW.BLUE_Logger, &GNC2026W_DW.BLUE_Path_Planner_Selection,
        &GNC2026W_DW.Float_State, &GNC2026W_DW.RED_Control_Law_Enabler,
        GNC2026W_DW.RED_Desired_States, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase4ReturnHome);
      srUpdateBC(GNC2026W_DW.Phase4ReturnHome.Phase4ReturnHome_SubsysRanBC);

      // End of Outputs for SubSystem: '<S1>/Phase #4: Return Home'
      break;

     case 5:
      // Outputs for IfAction SubSystem: '<S1>/Phase #5: Hold Home' incorporates:
      //   ActionPort: '<S26>/Action Port'

      GNC2026W_Phase4ReturnHome(&GNC2026W_DW.ARM_Control_Law_Enabler,
        GNC2026W_DW.ARM_Desired_States, &GNC2026W_DW.ARM_Path_Planner_Selection,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Desired_States,
        GNC2026W_DW.BLACK_Logger, &GNC2026W_DW.BLACK_Path_Planner_Selection,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Desired_States,
        GNC2026W_DW.BLUE_Logger, &GNC2026W_DW.BLUE_Path_Planner_Selection,
        &GNC2026W_DW.Float_State, &GNC2026W_DW.RED_Control_Law_Enabler,
        GNC2026W_DW.RED_Desired_States, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase5HoldHome);
      srUpdateBC(GNC2026W_DW.Phase5HoldHome.Phase4ReturnHome_SubsysRanBC);

      // End of Outputs for SubSystem: '<S1>/Phase #5: Hold Home'
      break;

     case 6:
      // Outputs for IfAction SubSystem: '<S1>/Phase #6: Clean Shutdown' incorporates:
      //   ActionPort: '<S27>/Action Port'

      GNC2026W_Phase0Synchronization(&GNC2026W_DW.ARM_Control_Law_Enabler,
        &GNC2026W_DW.ARM_Path_Planner_Selection,
        &GNC2026W_DW.BLACK_Control_Law_Enabler, GNC2026W_DW.BLACK_Logger,
        &GNC2026W_DW.BLACK_Path_Planner_Selection,
        &GNC2026W_DW.BLUE_Control_Law_Enabler, GNC2026W_DW.BLUE_Logger,
        &GNC2026W_DW.BLUE_Path_Planner_Selection, &GNC2026W_DW.Float_State,
        &GNC2026W_DW.RED_Control_Law_Enabler, GNC2026W_DW.RED_Logger,
        &GNC2026W_DW.RED_Path_Planner_Selection, &GNC2026W_P.Phase6CleanShutdown);
      srUpdateBC(GNC2026W_DW.Phase6CleanShutdown.Phase0Synchronization_SubsysRan);

      // End of Outputs for SubSystem: '<S1>/Phase #6: Clean Shutdown'
      break;
    }

    // End of If: '<S1>/Separate Phases'

    // If: '<S4>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S4>/Data Store Read'
    //   DataStoreRead: '<S4>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S4>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S207>/Action Port'

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
      //   ActionPort: '<S208>/Action Port'

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
      //   ActionPort: '<S209>/Action Port'

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
      //   ActionPort: '<S214>/Action Port'

      // StringToASCII: '<S214>/String to ASCII1' incorporates:
      //   DataStoreRead: '<S214>/Data Store Read2'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII1[0],
              &GNC2026W_DW.BLACK_Logger[0], 31U);

      // Update for S-Function (sdspToNetwork): '<S214>/UDP Send1' incorporates:
      //   StringToASCII: '<S214>/String to ASCII1'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend1_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII1[0U], 31);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S214>/UDP Send1'
      // End of Outputs for SubSystem: '<S6>/Change BLACK Behavior'

      // Update for IfAction SubSystem: '<S6>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S214>/Action Port'

      // Update for If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' 
      srUpdateBC(GNC2026W_DW.ChangeBLACKBehavior_SubsysRan_p);

      // End of Update for SubSystem: '<S6>/Change BLACK Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S215>/Action Port'

      // StringToASCII: '<S215>/String to ASCII2' incorporates:
      //   DataStoreRead: '<S215>/Data Store Read'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII2[0], &GNC2026W_DW.BLUE_Logger
              [0], 31U);

      // Update for S-Function (sdspToNetwork): '<S215>/UDP Send2' incorporates:
      //   StringToASCII: '<S215>/String to ASCII2'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend2_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII2[0U], 31);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S215>/UDP Send2'
      // End of Outputs for SubSystem: '<S6>/Change BLUE Behavior'

      // Update for IfAction SubSystem: '<S6>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S215>/Action Port'

      // Update for If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' 
      srUpdateBC(GNC2026W_DW.ChangeBLUEBehavior_SubsysRanB_l);

      // End of Update for SubSystem: '<S6>/Change BLUE Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S6>/Data Store Read'
    //   DataStoreRead: '<S6>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S6>/Change RED Behavior' incorporates:
      //   ActionPort: '<S216>/Action Port'

      // StringToASCII: '<S216>/String to ASCII' incorporates:
      //   DataStoreRead: '<S216>/Data Store Read'

      strncpy((char_T *)&GNC2026W_B.StringtoASCII[0], &GNC2026W_DW.RED_Logger[0],
              31U);

      // Update for S-Function (sdspToNetwork): '<S216>/UDP Send3' incorporates:
      //   StringToASCII: '<S216>/String to ASCII'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend3_NetworkLib[0U],
                        &GNC2026W_B.StringtoASCII[0U], 31);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S216>/UDP Send3'
      // End of Outputs for SubSystem: '<S6>/Change RED Behavior'

      // Update for IfAction SubSystem: '<S6>/Change RED Behavior' incorporates:
      //   ActionPort: '<S216>/Action Port'

      // Update for If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' 
      srUpdateBC(GNC2026W_DW.ChangeREDBehavior_SubsysRanBC_m);

      // End of Update for SubSystem: '<S6>/Change RED Behavior'
    }

    // End of If: '<S6>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S7>/This IF block determines whether or not to run the exp code' incorporates:
    //   DataStoreRead: '<S7>/Data Store Read'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S7>/Enable Pucks' incorporates:
      //   ActionPort: '<S217>/Action Port'

      // MATLABSystem: '<S217>/GPIO Write1' incorporates:
      //   DataStoreRead: '<S217>/Data Store Read1'

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

      // End of MATLABSystem: '<S217>/GPIO Write1'
      // End of Outputs for SubSystem: '<S7>/Enable Pucks'

      // Update for IfAction SubSystem: '<S7>/Enable Pucks' incorporates:
      //   ActionPort: '<S217>/Action Port'

      // Update for If: '<S7>/This IF block determines whether or not to run the exp code' 
      srUpdateBC(GNC2026W_DW.EnablePucks_SubsysRanBC);

      // End of Update for SubSystem: '<S7>/Enable Pucks'
    }

    // End of If: '<S7>/This IF block determines whether or not to run the exp code' 

    // If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S8>/Data Store Read1'
    //   DataStoreRead: '<S8>/Data Store Read2'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S8>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S218>/Action Port'

      // MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders'
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
      rtb_TSamp_ao = 0.0;
      rtb_TSamp_eu = 0.0;

      // DataStoreWrite: '<S218>/Data Store Write' incorporates:
      //   Delay: '<S218>/Delay'
      //   Delay: '<S218>/Delay1'
      //   Delay: '<S218>/Delay2'
      //   MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders'

      GNC2026W_DW.ARM_Measured_States[3] = 0.0;
      GNC2026W_DW.ARM_Measured_States[4] = 0.0;
      GNC2026W_DW.ARM_Measured_States[5] = 0.0;
      read_dynamixel_position(&sampleTime, &rtb_TSamp_ao, &rtb_TSamp_eu,
        &GNC2026W_DW.ARM_Measured_States[3], &GNC2026W_DW.ARM_Measured_States[4],
        &GNC2026W_DW.ARM_Measured_States[5], GNC2026W_DW.Delay_DSTATE_o,
        GNC2026W_DW.Delay1_DSTATE_cg, GNC2026W_DW.Delay2_DSTATE_h);

      // MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders' incorporates:
      //   Delay: '<S218>/Delay'
      //   Delay: '<S218>/Delay1'
      //   Delay: '<S218>/Delay2'

      GNC2026W_DW.Delay_DSTATE_o = sampleTime;
      GNC2026W_DW.Delay1_DSTATE_cg = rtb_TSamp_ao;
      GNC2026W_DW.Delay2_DSTATE_h = rtb_TSamp_eu;

      // DataStoreWrite: '<S218>/Data Store Write' incorporates:
      //   Delay: '<S218>/Delay'
      //   Delay: '<S218>/Delay1'
      //   Delay: '<S218>/Delay2'

      GNC2026W_DW.ARM_Measured_States[0] = GNC2026W_DW.Delay_DSTATE_o;
      GNC2026W_DW.ARM_Measured_States[1] = GNC2026W_DW.Delay1_DSTATE_cg;
      GNC2026W_DW.ARM_Measured_States[2] = GNC2026W_DW.Delay2_DSTATE_h;

      // End of Outputs for SubSystem: '<S8>/Change ARM Behavior'

      // Update for IfAction SubSystem: '<S8>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S218>/Action Port'

      // Update for If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' 
      srUpdateBC(GNC2026W_DW.ChangeARMBehavior_SubsysRanBC_b);

      // End of Update for SubSystem: '<S8>/Change ARM Behavior'
    }

    // End of If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S9>/Experiment Sub-Phases' incorporates:
    //   Constant: '<S9>/Constant4'
    //   DataStoreRead: '<S9>/Universal_Time'

    if (GNC2026W_DW.Univ_Time >= GNC2026W_P.Phase3_SubPhase1_End) {
      // Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
      //   ActionPort: '<S219>/Action Port'

      // If: '<S219>/If' incorporates:
      //   Constant: '<S219>/Constant'

      rtAction = -1;
      if (GNC2026W_P.fNum == 1.0) {
        rtAction = 0;
      } else if (GNC2026W_P.fNum == 2.0) {
        rtAction = 1;
      } else if (GNC2026W_P.fNum == 3.0) {
        rtAction = 2;
      }

      switch (rtAction) {
       case 0:
        // Outputs for IfAction SubSystem: '<S219>/UKF' incorporates:
        //   ActionPort: '<S222>/Action Port'

        // If: '<S240>/If' incorporates:
        //   Constant: '<S240>/Constant'

        if (GNC2026W_P.VISinLoop == 0.0) {
          // Outputs for IfAction SubSystem: '<S240>/Artificial VIS States' incorporates:
          //   ActionPort: '<S243>/Action Port'

          // Merge: '<S240>/Merge' incorporates:
          //   DataStoreRead: '<S243>/Data Store Read1'

          GNC2026W_B.Merge_b[0] = GNC2026W_DW.BLACK_CV_States[0];
          GNC2026W_B.Merge_b[1] = GNC2026W_DW.BLACK_CV_States[1];
          GNC2026W_B.Merge_b[2] = GNC2026W_DW.BLACK_CV_States[2];

          // End of Outputs for SubSystem: '<S240>/Artificial VIS States'

          // Update for IfAction SubSystem: '<S240>/Artificial VIS States' incorporates:
          //   ActionPort: '<S243>/Action Port'

          // Update for If: '<S240>/If'
          srUpdateBC(GNC2026W_DW.ArtificialVISStates_SubsysRan_g);

          // End of Update for SubSystem: '<S240>/Artificial VIS States'
        } else if (GNC2026W_P.VISinLoop == 1.0) {
          // Outputs for IfAction SubSystem: '<S240>/Experimental VIS States' incorporates:
          //   ActionPort: '<S244>/Action Port'

          GNC2026W_ExperimentalVISStates(GNC2026W_B.Merge_b,
            GNC2026W_DW.BLACK_CV_States, GNC2026W_DW.VIS_LAR_States,
            &GNC2026W_DW.isSim, &GNC2026W_DW.ExperimentalVISStates);

          // End of Outputs for SubSystem: '<S240>/Experimental VIS States'
        }

        // End of If: '<S240>/If'

        // Update for Delay: '<S241>/Delay' incorporates:
        //   DataStoreRead: '<S222>/Data Store Read3'
        //   Delay: '<S241>/Delay1'
        //   MATLAB Function: '<S241>/MATLAB Function'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_b, GNC2026W_DW.Delay1_DSTATE_a, &sampleTime,
          &GNC2026W_DW.Delay_DSTATE_b, &GNC2026W_DW.sf_MATLABFunction_n5);

        // MATLAB Function: '<S222>/Unscented Kalman Filter' incorporates:
        //   DataStoreRead: '<S222>/Data Store Read2'
        //   DataStoreRead: '<S222>/Data Store Read3'
        //   DataStoreWrite: '<S222>/Data Store Write2'
        //   SignalConversion generated from: '<S238>/ SFunction '

        t59 = GNC2026W_P.a * GNC2026W_P.a;
        rtb_TSamp_ao = (GNC2026W_P.k + 6.0) * t59 - 6.0;
        q = GNC2026W_DW.RED_Measured_States[0];
        t15 = GNC2026W_DW.RED_Measured_States[1];
        rtb_TSamp_eu = sin(sampleTime);
        rtb_TSamp_dm = cos(sampleTime);
        for (i = 0; i < 13; i++) {
          if (i + 1 == 1) {
            t12 = rtb_TSamp_ao / (rtb_TSamp_ao + 6.0);
            wi_m[i] = t12;
            wi_c[i] = ((t12 + 1.0) - t59) + GNC2026W_P.b;
          } else {
            t12 = 1.0 / ((rtb_TSamp_ao + 6.0) * 2.0);
            wi_m[i] = t12;
            wi_c[i] = t12;
          }
        }

        memset(&InertiaS[0], 0, 36U * sizeof(real_T));
        GNC2026W_chol(GNC2026W_DW.P_g);
        for (i = 0; i < 6; i++) {
          GNC2026W_B.Merge_k[i] = 0.0;
          for (newMeas = 0; newMeas < 6; newMeas++) {
            S_pre[newMeas + 6 * i] = GNC2026W_DW.P_g[6 * newMeas + i];
          }
        }

        for (i = 0; i < 13; i++) {
          if (i + 1 == 1) {
            for (newMeas = 0; newMeas < 6; newMeas++) {
              Xi_pre[newMeas + 6 * i] = GNC2026W_DW.x_h[newMeas];
            }
          } else if ((i + 1 > 1) && (i + 1 <= 7)) {
            t12 = sqrt(rtb_TSamp_ao + 6.0);
            for (newMeas = 0; newMeas < 6; newMeas++) {
              Xi_pre[newMeas + 6 * i] = S_pre[(i - 1) * 6 + newMeas] * t12 +
                GNC2026W_DW.x_h[newMeas];
            }
          } else {
            absx = sqrt(rtb_TSamp_ao + 6.0);
            for (newMeas = 0; newMeas < 6; newMeas++) {
              Xi_pre[newMeas + 6 * i] = GNC2026W_DW.x_h[newMeas] - S_pre[(i - 7)
                * 6 + newMeas] * absx;
            }
          }

          newMeas = 6 * i + 3;
          t12 = Xi_pre[newMeas];
          Fi[6 * i] = Xi_pre[6 * i] + GNC2026W_P.dt * t12;
          Fi[newMeas] = GNC2026W_P.dt * 0.0 + t12;
          newMeas = 6 * i + 4;
          t12 = Xi_pre[newMeas];
          vcol = 6 * i + 1;
          Fi[vcol] = GNC2026W_P.dt * t12 + Xi_pre[vcol];
          Fi[newMeas] = GNC2026W_P.dt * 0.0 + t12;
          newMeas = 6 * i + 5;
          t12 = Xi_pre[newMeas];
          vcol = 6 * i + 2;
          Fi[vcol] = GNC2026W_P.dt * t12 + Xi_pre[vcol];
          Fi[newMeas] = GNC2026W_P.dt * 0.0 + t12;
          t12 = wi_m[i];
          for (newMeas = 0; newMeas < 6; newMeas++) {
            GNC2026W_B.Merge_k[newMeas] += Fi[6 * i + newMeas] * t12;
          }
        }

        for (vcol = 0; vcol < 13; vcol++) {
          for (newMeas = 0; newMeas < 6; newMeas++) {
            AccelerationtoVelocity_g[newMeas] = Fi[6 * vcol + newMeas] -
              GNC2026W_B.Merge_k[newMeas];
          }

          t12 = wi_c[vcol];
          for (newMeas = 0; newMeas < 6; newMeas++) {
            for (i = 0; i < 6; i++) {
              r = 6 * newMeas + i;
              InertiaS[r] += t12 * AccelerationtoVelocity_g[i] *
                AccelerationtoVelocity_g[newMeas] + Q[r];
            }
          }
        }

        x_minus[0] = 0.0;
        x_minus[1] = 0.0;
        x_minus[2] = 0.0;
        memset(&P_xy[0], 0, 18U * sizeof(real_T));
        memset(&F[0], 0, 9U * sizeof(real_T));
        memcpy(&S_pre[0], &InertiaS[0], 36U * sizeof(real_T));
        GNC2026W_chol(S_pre);
        for (newMeas = 0; newMeas < 6; newMeas++) {
          for (i = 0; i < 6; i++) {
            S_minus[i + 6 * newMeas] = S_pre[6 * i + newMeas];
          }
        }

        K[2] = -sampleTime;
        for (vcol = 0; vcol < 13; vcol++) {
          if (vcol + 1 == 1) {
            for (newMeas = 0; newMeas < 6; newMeas++) {
              Xi_pre[newMeas + 6 * vcol] = GNC2026W_B.Merge_k[newMeas];
            }
          } else if ((vcol + 1 > 1) && (vcol + 1 <= 7)) {
            t12 = sqrt(rtb_TSamp_ao + 6.0);
            for (newMeas = 0; newMeas < 6; newMeas++) {
              Xi_pre[newMeas + 6 * vcol] = S_minus[(vcol - 1) * 6 + newMeas] *
                t12 + GNC2026W_B.Merge_k[newMeas];
            }
          } else {
            t12 = sqrt(rtb_TSamp_ao + 6.0);
            for (newMeas = 0; newMeas < 6; newMeas++) {
              Xi_pre[newMeas + 6 * vcol] = GNC2026W_B.Merge_k[newMeas] -
                S_minus[(vcol - 7) * 6 + newMeas] * t12;
            }
          }

          K_0[0] = rtb_TSamp_dm;
          K_0[3] = rtb_TSamp_eu;
          K_0[6] = 0.0;
          K_0[9] = 0.0;
          K_0[12] = 0.0;
          K_0[15] = 0.0;
          K_0[1] = -rtb_TSamp_eu;
          K_0[4] = rtb_TSamp_dm;
          K_0[7] = 0.0;
          K_0[10] = 0.0;
          K_0[13] = 0.0;
          K_0[16] = 0.0;
          for (newMeas = 0; newMeas < 6; newMeas++) {
            K_0[3 * newMeas + 2] = c_2[newMeas];
          }

          absx = Xi_pre[6 * vcol + 2] - sampleTime;
          K[0] = ((cos(absx) * 0.145 - q * rtb_TSamp_dm) - t15 * rtb_TSamp_eu) -
            0.125;
          K[1] = ((sin(absx) * 0.145 + q * rtb_TSamp_eu) - t15 * rtb_TSamp_dm) -
            0.03;
          t12 = wi_m[vcol];
          for (newMeas = 0; newMeas < 3; newMeas++) {
            t46 = 0.0;
            for (i = 0; i < 6; i++) {
              t46 += K_0[3 * i + newMeas] * Xi_pre[6 * vcol + i];
            }

            t46 += K[newMeas];
            h[newMeas + 3 * vcol] = t46;
            x_minus[newMeas] += t12 * t46;
          }
        }

        rtb_TSamp_ao = 3.3121686421112381E-170;
        GNC2026W_B.r[0] = GNC2026W_B.Merge_b[0] - x_minus[0];
        rtb_TSamp_dm = fabs(GNC2026W_B.r[0]);
        if (rtb_TSamp_dm > 3.3121686421112381E-170) {
          rtb_TSamp_eu = 1.0;
          rtb_TSamp_ao = rtb_TSamp_dm;
        } else {
          q = rtb_TSamp_dm / 3.3121686421112381E-170;
          rtb_TSamp_eu = q * q;
        }

        GNC2026W_B.r[1] = GNC2026W_B.Merge_b[1] - x_minus[1];
        rtb_TSamp_dm = fabs(GNC2026W_B.r[1]);
        if (rtb_TSamp_dm > rtb_TSamp_ao) {
          q = rtb_TSamp_ao / rtb_TSamp_dm;
          rtb_TSamp_eu = rtb_TSamp_eu * q * q + 1.0;
          rtb_TSamp_ao = rtb_TSamp_dm;
        } else {
          q = rtb_TSamp_dm / rtb_TSamp_ao;
          rtb_TSamp_eu += q * q;
        }

        GNC2026W_B.r[2] = GNC2026W_B.Merge_b[2] - x_minus[2];
        rtb_TSamp_dm = fabs(GNC2026W_B.r[2]);
        if (rtb_TSamp_dm > rtb_TSamp_ao) {
          q = rtb_TSamp_ao / rtb_TSamp_dm;
          rtb_TSamp_eu = rtb_TSamp_eu * q * q + 1.0;
          rtb_TSamp_ao = rtb_TSamp_dm;
        } else {
          q = rtb_TSamp_dm / rtb_TSamp_ao;
          rtb_TSamp_eu += q * q;
        }

        rtb_TSamp_eu = rtb_TSamp_ao * sqrt(rtb_TSamp_eu);
        if (rtb_TSamp_eu < 0.05) {
          GNC2026W_DW.converge = 1.0;
        }

        GNC2026W_DW.filterConfidence = GNC2026W_DW.converge;
        for (vcol = 0; vcol < 13; vcol++) {
          LARstates_REL[0] = h[3 * vcol] - x_minus[0];
          LARstates_REL[1] = h[3 * vcol + 1] - x_minus[1];
          LARstates_REL[2] = h[3 * vcol + 2] - x_minus[2];
          t12 = wi_c[vcol];
          for (newMeas = 0; newMeas < 3; newMeas++) {
            F[3 * newMeas] = (t12 * LARstates_REL[0] * LARstates_REL[newMeas] +
                              F[3 * newMeas]) + GNC2026W_P.R[3 * newMeas];
            i = 3 * newMeas + 1;
            F[i] = (t12 * LARstates_REL[1] * LARstates_REL[newMeas] + F[i]) +
              GNC2026W_P.R[i];
            i = 3 * newMeas + 2;
            F[i] = (t12 * LARstates_REL[2] * LARstates_REL[newMeas] + F[i]) +
              GNC2026W_P.R[i];
          }

          for (newMeas = 0; newMeas < 6; newMeas++) {
            AccelerationtoVelocity_g[newMeas] = (Xi_pre[6 * vcol + newMeas] -
              GNC2026W_B.Merge_k[newMeas]) * t12;
          }

          for (newMeas = 0; newMeas < 3; newMeas++) {
            for (i = 0; i < 6; i++) {
              e_coffset = 6 * newMeas + i;
              P_xy[e_coffset] += AccelerationtoVelocity_g[i] *
                LARstates_REL[newMeas];
            }
          }
        }

        GNC2026W_inv(F, P_minus);
        for (newMeas = 0; newMeas < 6; newMeas++) {
          rtb_TSamp_ao = P_xy[newMeas + 6];
          rtb_TSamp_eu = P_xy[newMeas];
          rtb_TSamp_dm = P_xy[newMeas + 12];
          for (i = 0; i < 3; i++) {
            K_0[newMeas + 6 * i] = (P_minus[3 * i + 1] * rtb_TSamp_ao + P_minus
              [3 * i] * rtb_TSamp_eu) + P_minus[3 * i + 2] * rtb_TSamp_dm;
          }

          t17 = K_0[newMeas + 6];
          rtb_TSamp_ao = K_0[newMeas];
          rtb_TSamp_dm = K_0[newMeas + 12];
          for (i = 0; i < 3; i++) {
            K_1[newMeas + 6 * i] = (F[3 * i + 1] * t17 + F[3 * i] * rtb_TSamp_ao)
              + F[3 * i + 2] * rtb_TSamp_dm;
          }
        }

        for (newMeas = 0; newMeas < 6; newMeas++) {
          t17 = K_1[newMeas + 6];
          rtb_TSamp_ao = K_1[newMeas];
          rtb_TSamp_dm = K_1[newMeas + 12];
          for (i = 0; i < 6; i++) {
            vcol = 6 * i + newMeas;
            GNC2026W_DW.P_g[vcol] = InertiaS[vcol] - ((K_0[i + 6] * t17 +
              rtb_TSamp_ao * K_0[i]) + K_0[i + 12] * rtb_TSamp_dm);
          }

          AccelerationtoVelocity_g[newMeas] = ((K_0[newMeas + 6] * GNC2026W_B.r
            [1] + K_0[newMeas] * GNC2026W_B.r[0]) + K_0[newMeas + 12] *
            GNC2026W_B.r[2]) + GNC2026W_B.Merge_k[newMeas];
        }

        absx = 0.0;
        for (newMeas = 0; newMeas < 3; newMeas++) {
          absx += ((P_minus[3 * newMeas + 1] * GNC2026W_B.r[1] + P_minus[3 *
                    newMeas] * GNC2026W_B.r[0]) + P_minus[3 * newMeas + 2] *
                   GNC2026W_B.r[2]) * GNC2026W_B.r[newMeas];
        }

        if (sqrt(absx) > 13.931422665512077) {
          memcpy(&GNC2026W_DW.P_g[0], &InertiaS[0], 36U * sizeof(real_T));
          for (i = 0; i < 6; i++) {
            AccelerationtoVelocity_g[i] = GNC2026W_B.Merge_k[i];
          }
        }

        newMeas = 0;
        rtb_TSamp_ao = GNC2026W_P.CVrate / GNC2026W_P.baseRate;
        rtb_TSamp_dm = GNC2026W_DW.k_f;
        if (rtb_TSamp_ao == 0.0) {
          if (GNC2026W_DW.k_f == 0.0) {
            rtb_TSamp_dm = rtb_TSamp_ao;
          }
        } else if (rtIsNaN(GNC2026W_DW.k_f)) {
          rtb_TSamp_dm = (rtNaN);
        } else if (rtIsNaN(rtb_TSamp_ao)) {
          rtb_TSamp_dm = (rtNaN);
        } else if (rtIsInf(GNC2026W_DW.k_f)) {
          rtb_TSamp_dm = (rtNaN);
        } else if (GNC2026W_DW.k_f == 0.0) {
          rtb_TSamp_dm = 0.0 / rtb_TSamp_ao;
        } else if (rtIsInf(rtb_TSamp_ao)) {
          if ((rtb_TSamp_ao < 0.0) != (GNC2026W_DW.k_f < 0.0)) {
            rtb_TSamp_dm = rtb_TSamp_ao;
          }
        } else {
          rtb_TSamp_dm = fmod(GNC2026W_DW.k_f, rtb_TSamp_ao);
          rEQ0 = (rtb_TSamp_dm == 0.0);
          if ((!rEQ0) && (rtb_TSamp_ao > floor(rtb_TSamp_ao))) {
            q = fabs(GNC2026W_DW.k_f / rtb_TSamp_ao);
            rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
          }

          if (rEQ0) {
            rtb_TSamp_dm = rtb_TSamp_ao * 0.0;
          } else if (((rtb_TSamp_dm < 0.0) && (!(rtb_TSamp_ao < 0.0))) ||
                     ((!(rtb_TSamp_dm < 0.0)) && (rtb_TSamp_ao < 0.0))) {
            rtb_TSamp_dm += rtb_TSamp_ao;
          }
        }

        if (rtb_TSamp_dm == 0.0) {
          newMeas = 1;
        }

        GNC2026W_DW.k_f++;
        if ((GNC2026W_DW.isValid == 1.0) && (newMeas == 1)) {
          for (i = 0; i < 6; i++) {
            GNC2026W_B.Merge_k[i] = AccelerationtoVelocity_g[i];
          }
        } else {
          memcpy(&GNC2026W_DW.P_g[0], &InertiaS[0], 36U * sizeof(real_T));
        }

        for (i = 0; i < 6; i++) {
          GNC2026W_DW.x_h[i] = GNC2026W_B.Merge_k[i];
        }

        // End of MATLAB Function: '<S222>/Unscented Kalman Filter'
        // Update for Delay: '<S241>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_a = sampleTime;
        srUpdateBC(GNC2026W_DW.UKF_SubsysRanBC);

        // End of Outputs for SubSystem: '<S219>/UKF'
        break;

       case 1:
        // Outputs for IfAction SubSystem: '<S219>/MEKF' incorporates:
        //   ActionPort: '<S221>/Action Port'

        // Update for Delay: '<S232>/Delay' incorporates:
        //   DataStoreRead: '<S221>/Data Store Read'
        //   Delay: '<S232>/Delay1'
        //   MATLAB Function: '<S232>/MATLAB Function'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_j, GNC2026W_DW.Delay1_DSTATE_d, &sampleTime,
          &GNC2026W_DW.Delay_DSTATE_j, &GNC2026W_DW.sf_MATLABFunction_p);

        // If: '<S231>/If' incorporates:
        //   Constant: '<S231>/Constant'

        if (GNC2026W_P.VISinLoop == 0.0) {
          // Outputs for IfAction SubSystem: '<S231>/Artificial VIS States' incorporates:
          //   ActionPort: '<S234>/Action Port'

          // Merge: '<S231>/Merge' incorporates:
          //   DataStoreRead: '<S234>/Data Store Read1'

          GNC2026W_B.Merge_d[0] = GNC2026W_DW.BLACK_CV_States[0];
          GNC2026W_B.Merge_d[1] = GNC2026W_DW.BLACK_CV_States[1];
          GNC2026W_B.Merge_d[2] = GNC2026W_DW.BLACK_CV_States[2];

          // End of Outputs for SubSystem: '<S231>/Artificial VIS States'

          // Update for IfAction SubSystem: '<S231>/Artificial VIS States' incorporates:
          //   ActionPort: '<S234>/Action Port'

          // Update for If: '<S231>/If'
          srUpdateBC(GNC2026W_DW.ArtificialVISStates_SubsysRanBC);

          // End of Update for SubSystem: '<S231>/Artificial VIS States'
        } else if (GNC2026W_P.VISinLoop == 1.0) {
          // Outputs for IfAction SubSystem: '<S231>/Experimental VIS States' incorporates:
          //   ActionPort: '<S235>/Action Port'

          GNC2026W_ExperimentalVISStates(GNC2026W_B.Merge_d,
            GNC2026W_DW.BLACK_CV_States, GNC2026W_DW.VIS_LAR_States,
            &GNC2026W_DW.isSim, &GNC2026W_DW.ExperimentalVISStates_a);

          // End of Outputs for SubSystem: '<S231>/Experimental VIS States'
        }

        // End of If: '<S231>/If'

        // MATLAB Function: '<S221>/Camera to Inertial Frame' incorporates:
        //   SignalConversion generated from: '<S228>/ SFunction '

        rtb_TSamp_ao = sampleTime + GNC2026W_B.Merge_d[2];
        rtb_TSamp_dm = sin(sampleTime);
        q = cos(sampleTime);
        t15 = sin(rtb_TSamp_ao);
        t12 = cos(rtb_TSamp_ao);

        // MATLAB Function: '<S221>/MEKF' incorporates:
        //   DataStoreRead: '<S221>/Data Store Read'
        //   MATLAB Function: '<S221>/Camera to Inertial Frame'
        //   SignalConversion generated from: '<S228>/ SFunction '

        GNC2026W_DW.x_b[0] += GNC2026W_DW.x_b[2] * GNC2026W_P.baseRate;
        GNC2026W_DW.x_b[1] += GNC2026W_DW.x_b[3] * GNC2026W_P.baseRate;
        t46 = GNC2026W_DW.x_b[4] * 0.0 * GNC2026W_P.baseRate;
        t59 = GNC2026W_P.baseRate * GNC2026W_DW.x_b[4];
        if (t46 == 0.0) {
          t46 = cos(t59);
          t59 = sin(t59);
        } else if (t59 == 0.0) {
          t59 = 0.0;
        } else {
          t59 = (rtNaN);
        }

        rtb_TSamp_eu = GNC2026W_DW.q.re * t59 + GNC2026W_DW.q.im * t46;
        GNC2026W_DW.q.re = GNC2026W_DW.q.re * t46 - GNC2026W_DW.q.im * t59;
        GNC2026W_DW.q.im = rtb_TSamp_eu;
        rtb_TSamp_eu = rt_hypotd_snf(GNC2026W_DW.q.re, GNC2026W_DW.q.im);
        if (GNC2026W_DW.q.im == 0.0) {
          t46 = GNC2026W_DW.q.re / rtb_TSamp_eu;
          rtb_TSamp_eu = 0.0;
        } else if (GNC2026W_DW.q.re == 0.0) {
          t46 = 0.0;
          rtb_TSamp_eu = GNC2026W_DW.q.im / rtb_TSamp_eu;
        } else {
          t46 = GNC2026W_DW.q.re / rtb_TSamp_eu;
          rtb_TSamp_eu = GNC2026W_DW.q.im / rtb_TSamp_eu;
        }

        GNC2026W_DW.q.re = t46;
        GNC2026W_DW.q.im = rtb_TSamp_eu;
        for (newMeas = 0; newMeas < 36; newMeas++) {
          i = cb[newMeas];
          InertiaS[newMeas] = i;
          S_pre[newMeas] = i;
        }

        S_pre[12] = GNC2026W_P.baseRate;
        S_pre[19] = GNC2026W_P.baseRate;
        S_pre[34] = GNC2026W_P.baseRate;
        for (newMeas = 0; newMeas < 6; newMeas++) {
          for (i = 0; i < 6; i++) {
            rtb_TSamp_eu = 0.0;
            for (vcol = 0; vcol < 6; vcol++) {
              rtb_TSamp_eu += S_pre[6 * vcol + i] * GNC2026W_DW.P_j[6 * newMeas
                + vcol];
            }

            V_0[i + 6 * newMeas] = rtb_TSamp_eu;
          }
        }

        for (newMeas = 0; newMeas < 6; newMeas++) {
          for (i = 0; i < 6; i++) {
            absx = 0.0;
            for (vcol = 0; vcol < 6; vcol++) {
              absx += V_0[6 * vcol + newMeas] * S_pre[6 * vcol + i];
            }

            vcol = 6 * i + newMeas;
            GNC2026W_DW.P_j[vcol] = a_1[vcol] * GNC2026W_P.baseRate + absx;
          }
        }

        e_coffset = 0;
        rtb_TSamp_eu = rt_roundd_snf(GNC2026W_P.CVrate / GNC2026W_P.baseRate);
        absx = GNC2026W_DW.k_j;
        if (rtb_TSamp_eu == 0.0) {
          if (GNC2026W_DW.k_j == 0.0) {
            absx = rtb_TSamp_eu;
          }
        } else if (rtIsNaN(GNC2026W_DW.k_j)) {
          absx = (rtNaN);
        } else if (rtIsNaN(rtb_TSamp_eu)) {
          absx = (rtNaN);
        } else if (rtIsInf(GNC2026W_DW.k_j)) {
          absx = (rtNaN);
        } else if (GNC2026W_DW.k_j == 0.0) {
          absx = 0.0 / rtb_TSamp_eu;
        } else if (rtIsInf(rtb_TSamp_eu)) {
          if ((rtb_TSamp_eu < 0.0) != (GNC2026W_DW.k_j < 0.0)) {
            absx = rtb_TSamp_eu;
          }
        } else {
          absx = fmod(GNC2026W_DW.k_j, rtb_TSamp_eu);
          if (absx == 0.0) {
            absx = rtb_TSamp_eu * 0.0;
          } else if (((absx < 0.0) && (!(rtb_TSamp_eu < 0.0))) || ((!(absx < 0.0))
                      && (rtb_TSamp_eu < 0.0))) {
            absx += rtb_TSamp_eu;
          }
        }

        if (absx == 0.0) {
          e_coffset = 1;
        }

        GNC2026W_DW.k_j++;
        if (e_coffset == 1) {
          LARstates_REL[0] = ((((GNC2026W_B.Merge_d[0] + 0.125) * q +
                                (GNC2026W_B.Merge_d[1] + 0.03) * -rtb_TSamp_dm)
                               + GNC2026W_DW.RED_Measured_States[0]) - (t12 *
            0.145 + -t15 * 0.0)) - GNC2026W_DW.x_b[0];
          LARstates_REL[1] = ((((GNC2026W_B.Merge_d[0] + 0.125) * rtb_TSamp_dm +
                                (GNC2026W_B.Merge_d[1] + 0.03) * q) +
                               GNC2026W_DW.RED_Measured_States[1]) - (t15 *
            0.145 + t12 * 0.0)) - GNC2026W_DW.x_b[1];
          LARstates_REL[2] = rtb_TSamp_ao - rt_atan2d_snf(GNC2026W_DW.q.im,
            GNC2026W_DW.q.re);
          LARstates_REL[2] = rt_atan2d_snf(sin(LARstates_REL[2]), cos
            (LARstates_REL[2]));
          for (newMeas = 0; newMeas < 18; newMeas++) {
            K_0[newMeas] = eb[newMeas];
            P_xy[newMeas] = c_a[newMeas];
          }

          for (newMeas = 0; newMeas < 3; newMeas++) {
            for (i = 0; i < 6; i++) {
              rtb_TSamp_ao = 0.0;
              for (vcol = 0; vcol < 6; vcol++) {
                rtb_TSamp_ao += P_xy[3 * vcol + newMeas] * GNC2026W_DW.P_j[6 * i
                  + vcol];
              }

              K_1[newMeas + 3 * i] = rtb_TSamp_ao;
            }

            for (i = 0; i < 3; i++) {
              absx = 0.0;
              for (vcol = 0; vcol < 6; vcol++) {
                absx += K_1[3 * vcol + newMeas] * K_0[6 * i + vcol];
              }

              r = 3 * i + newMeas;
              P_minus[r] = b_b[r] + absx;
            }
          }

          memcpy(&F[0], &P_minus[0], 9U * sizeof(real_T));
          newMeas = 0;
          i = 1;
          vcol = 2;
          rtb_TSamp_eu = fabs(P_minus[0]);
          rtb_TSamp_dm = rtb_TSamp_eu;
          rtb_TSamp_ao = fabs(P_minus[1]);
          if (rtb_TSamp_ao > rtb_TSamp_eu) {
            rtb_TSamp_dm = rtb_TSamp_ao;
            newMeas = 1;
            i = 0;
          }

          absx = fabs(P_minus[2]);
          if (absx > rtb_TSamp_dm) {
            newMeas = 2;
            i = 1;
            vcol = 0;
          }

          F[i] = P_minus[i] / P_minus[newMeas];
          F[vcol] /= F[newMeas];
          F[i + 3] -= F[newMeas + 3] * F[i];
          F[vcol + 3] -= F[newMeas + 3] * F[vcol];
          F[i + 6] -= F[newMeas + 6] * F[i];
          F[vcol + 6] -= F[newMeas + 6] * F[vcol];
          if (fabs(F[vcol + 3]) > fabs(F[i + 3])) {
            r = i;
            i = vcol;
            vcol = r;
          }

          F[vcol + 3] /= F[i + 3];
          F[vcol + 6] -= F[vcol + 3] * F[i + 6];
          x_minus[newMeas] = LARstates_REL[0] / F[newMeas];
          x_minus[i] = LARstates_REL[1] - F[newMeas + 3] * x_minus[newMeas];
          x_minus[vcol] = LARstates_REL[2] - F[newMeas + 6] * x_minus[newMeas];
          x_minus[i] /= F[i + 3];
          x_minus[vcol] -= F[i + 6] * x_minus[i];
          x_minus[vcol] /= F[vcol + 6];
          x_minus[i] -= F[vcol + 3] * x_minus[vcol];
          x_minus[newMeas] -= x_minus[vcol] * F[vcol];
          x_minus[newMeas] -= x_minus[i] * F[i];
          if ((x_minus[0] * LARstates_REL[0] + x_minus[1] * LARstates_REL[1]) +
              x_minus[2] * LARstates_REL[2] <= 7.815) {
            for (newMeas = 0; newMeas < 3; newMeas++) {
              for (i = 0; i < 6; i++) {
                rtb_TSamp_dm = 0.0;
                for (vcol = 0; vcol < 6; vcol++) {
                  rtb_TSamp_dm += GNC2026W_DW.P_j[6 * vcol + i] * K_0[6 *
                    newMeas + vcol];
                }

                K_1[i + 6 * newMeas] = rtb_TSamp_dm;
              }
            }

            i = 0;
            vcol = 1;
            r = 2;
            if (rtb_TSamp_ao > rtb_TSamp_eu) {
              rtb_TSamp_eu = rtb_TSamp_ao;
              i = 1;
              vcol = 0;
            }

            if (absx > rtb_TSamp_eu) {
              i = 2;
              vcol = 1;
              r = 0;
            }

            P_minus[vcol] /= P_minus[i];
            P_minus[r] /= P_minus[i];
            P_minus[vcol + 3] -= P_minus[i + 3] * P_minus[vcol];
            P_minus[r + 3] -= P_minus[i + 3] * P_minus[r];
            P_minus[vcol + 6] -= P_minus[i + 6] * P_minus[vcol];
            P_minus[r + 6] -= P_minus[i + 6] * P_minus[r];
            if (fabs(P_minus[r + 3]) > fabs(P_minus[vcol + 3])) {
              newMeas = vcol;
              vcol = r;
              r = newMeas;
            }

            P_minus[r + 3] /= P_minus[vcol + 3];
            P_minus[r + 6] -= P_minus[r + 3] * P_minus[vcol + 6];
            rtb_TSamp_ao = LARstates_REL[1];
            rtb_TSamp_eu = LARstates_REL[0];
            rtb_TSamp_dm = LARstates_REL[2];
            for (newMeas = 0; newMeas < 6; newMeas++) {
              br = 6 * i + newMeas;
              K_0[br] = K_1[newMeas] / P_minus[i];
              ar = 6 * vcol + newMeas;
              K_0[ar] = K_1[newMeas + 6] - P_minus[i + 3] * K_0[br];
              c = 6 * r + newMeas;
              K_0[c] = K_1[newMeas + 12] - P_minus[i + 6] * K_0[br];
              K_0[ar] /= P_minus[vcol + 3];
              K_0[c] -= P_minus[vcol + 6] * K_0[ar];
              K_0[c] /= P_minus[r + 6];
              K_0[ar] -= P_minus[r + 3] * K_0[c];
              K_0[br] -= K_0[c] * P_minus[r];
              K_0[br] -= K_0[ar] * P_minus[vcol];
              AccelerationtoVelocity_g[newMeas] = (K_0[newMeas + 6] *
                rtb_TSamp_ao + K_0[newMeas] * rtb_TSamp_eu) + K_0[newMeas + 12] *
                rtb_TSamp_dm;
            }

            GNC2026W_DW.x_b[0] += AccelerationtoVelocity_g[0];
            GNC2026W_DW.x_b[1] += AccelerationtoVelocity_g[1];
            GNC2026W_DW.x_b[2] += AccelerationtoVelocity_g[2];
            GNC2026W_DW.x_b[3] += AccelerationtoVelocity_g[3];
            t46 = AccelerationtoVelocity_g[4] * 0.0;
            if (t46 == 0.0) {
              t46 = cos(AccelerationtoVelocity_g[4]);
              t59 = sin(AccelerationtoVelocity_g[4]);
            } else if (AccelerationtoVelocity_g[4] == 0.0) {
              t59 = 0.0;
            } else {
              t59 = (rtNaN);
            }

            rtb_TSamp_eu = GNC2026W_DW.q.re * t59 + GNC2026W_DW.q.im * t46;
            GNC2026W_DW.q.re = GNC2026W_DW.q.re * t46 - GNC2026W_DW.q.im * t59;
            GNC2026W_DW.q.im = rtb_TSamp_eu;
            rtb_TSamp_eu = rt_hypotd_snf(GNC2026W_DW.q.re, GNC2026W_DW.q.im);
            if (GNC2026W_DW.q.im == 0.0) {
              t46 = GNC2026W_DW.q.re / rtb_TSamp_eu;
              rtb_TSamp_eu = 0.0;
            } else if (GNC2026W_DW.q.re == 0.0) {
              t46 = 0.0;
              rtb_TSamp_eu = GNC2026W_DW.q.im / rtb_TSamp_eu;
            } else {
              t46 = GNC2026W_DW.q.re / rtb_TSamp_eu;
              rtb_TSamp_eu = GNC2026W_DW.q.im / rtb_TSamp_eu;
            }

            GNC2026W_DW.q.re = t46;
            GNC2026W_DW.q.im = rtb_TSamp_eu;
            GNC2026W_DW.x_b[4] += AccelerationtoVelocity_g[5];
            for (newMeas = 0; newMeas < 6; newMeas++) {
              vcol = static_cast<int32_T>(P_xy[3 * newMeas + 1]);
              r = static_cast<int32_T>(P_xy[3 * newMeas]);
              br = static_cast<int32_T>(P_xy[3 * newMeas + 2]);
              for (i = 0; i < 6; i++) {
                S_pre[i + 6 * newMeas] = (K_0[i + 6] * static_cast<real_T>(vcol)
                  + static_cast<real_T>(r) * K_0[i]) + K_0[i + 12] *
                  static_cast<real_T>(br);
              }
            }

            for (newMeas = 0; newMeas < 36; newMeas++) {
              InertiaS_0[newMeas] = InertiaS[newMeas] - S_pre[newMeas];
            }

            for (newMeas = 0; newMeas < 6; newMeas++) {
              for (i = 0; i < 6; i++) {
                absx = 0.0;
                for (vcol = 0; vcol < 6; vcol++) {
                  absx += InertiaS_0[6 * vcol + newMeas] * GNC2026W_DW.P_j[6 * i
                    + vcol];
                }

                r = 6 * i + newMeas;
                V_0[r] = absx;
                InertiaS_1[i + 6 * newMeas] = InertiaS[r] - S_pre[r];
              }

              t17 = K_0[newMeas + 6];
              rtb_TSamp_ao = K_0[newMeas];
              rtb_TSamp_dm = K_0[newMeas + 12];
              for (i = 0; i < 3; i++) {
                K_1[newMeas + 6 * i] = (b_b[3 * i + 1] * t17 + b_b[3 * i] *
                  rtb_TSamp_ao) + b_b[3 * i + 2] * rtb_TSamp_dm;
              }
            }

            for (newMeas = 0; newMeas < 6; newMeas++) {
              for (i = 0; i < 6; i++) {
                absx = 0.0;
                for (vcol = 0; vcol < 6; vcol++) {
                  absx += V_0[6 * vcol + newMeas] * InertiaS_1[6 * i + vcol];
                }

                r = 6 * i + newMeas;
                InertiaS[r] = absx;
                S_pre[r] = (K_1[newMeas + 6] * K_0[i + 6] + K_1[newMeas] * K_0[i])
                  + K_1[newMeas + 12] * K_0[i + 12];
              }
            }

            for (newMeas = 0; newMeas < 36; newMeas++) {
              GNC2026W_DW.P_j[newMeas] = InertiaS[newMeas] + S_pre[newMeas];
            }
          }
        }

        rtb_TSamp_ao = rt_atan2d_snf(GNC2026W_DW.q.im, GNC2026W_DW.q.re);
        q = rtb_TSamp_ao - GNC2026W_DW.theta_prev_j;
        GNC2026W_DW.theta_cont += rt_atan2d_snf(sin(q), cos(q));
        GNC2026W_DW.theta_prev_j = rtb_TSamp_ao;
        GNC2026W_B.pose_n[0] = GNC2026W_DW.x_b[0];
        GNC2026W_B.pose_n[1] = GNC2026W_DW.x_b[1];
        GNC2026W_B.pose_n[2] = GNC2026W_DW.theta_cont;
        GNC2026W_B.newMeasurement = e_coffset;

        // DataStoreWrite: '<S221>/Data Store Write2'
        GNC2026W_DW.filterConfidence = GNC2026W_B.newMeasurement;

        // Merge: '<S219>/Merge' incorporates:
        //   MATLAB Function: '<S221>/MEKF'
        //   SignalConversion generated from: '<S221>/BLKest'

        GNC2026W_B.Merge_k[0] = GNC2026W_B.pose_n[0];
        GNC2026W_B.Merge_k[1] = GNC2026W_B.pose_n[1];
        GNC2026W_B.Merge_k[2] = GNC2026W_B.pose_n[2];
        GNC2026W_B.Merge_k[3] = GNC2026W_DW.x_b[2];
        GNC2026W_B.Merge_k[4] = GNC2026W_DW.x_b[3];
        GNC2026W_B.Merge_k[5] = GNC2026W_DW.x_b[4];

        // Update for Delay: '<S232>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_d = sampleTime;
        srUpdateBC(GNC2026W_DW.MEKF_SubsysRanBC);

        // End of Outputs for SubSystem: '<S219>/MEKF'
        break;

       case 2:
        // Outputs for IfAction SubSystem: '<S219>/EKF' incorporates:
        //   ActionPort: '<S220>/Action Port'

        // Update for Delay: '<S226>/Delay' incorporates:
        //   DataStoreRead: '<S220>/Data Store Read'
        //   Delay: '<S226>/Delay1'
        //   MATLAB Function: '<S226>/MATLAB Function'

        GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
          GNC2026W_DW.Delay_DSTATE_c, GNC2026W_DW.Delay1_DSTATE_g0, &sampleTime,
          &GNC2026W_DW.Delay_DSTATE_c, &GNC2026W_DW.sf_MATLABFunction_nq);

        // MATLAB Function: '<S220>/Camera to Inertial Frame' incorporates:
        //   DataStoreRead: '<S220>/Data Store Read'
        //   DataStoreRead: '<S220>/Data Store Read1'
        //   SignalConversion generated from: '<S223>/ SFunction '

        rtb_TSamp_ao = sampleTime + GNC2026W_DW.BLACK_CV_States[2];
        rtb_TSamp_eu = sin(sampleTime);
        rtb_TSamp_dm = cos(sampleTime);
        q = sin(rtb_TSamp_ao);
        t15 = cos(rtb_TSamp_ao);
        GNC2026W_B.r_T_I[0] = (((GNC2026W_DW.BLACK_CV_States[0] + 0.125) *
          rtb_TSamp_dm + (GNC2026W_DW.BLACK_CV_States[1] + 0.03) * -rtb_TSamp_eu)
          + GNC2026W_DW.RED_Measured_States[0]) - (t15 * 0.145 + -q * 0.0);
        GNC2026W_B.r_T_I[1] = (((GNC2026W_DW.BLACK_CV_States[0] + 0.125) *
          rtb_TSamp_eu + (GNC2026W_DW.BLACK_CV_States[1] + 0.03) * rtb_TSamp_dm)
          + GNC2026W_DW.RED_Measured_States[1]) - (q * 0.145 + t15 * 0.0);
        GNC2026W_B.r_T_I[2] = rtb_TSamp_ao;

        // MATLAB Function: '<S220>/EKF'
        for (newMeas = 0; newMeas < 36; newMeas++) {
          i = cb[newMeas];
          InertiaS[newMeas] = i;
          S_pre[newMeas] = i;
        }

        S_pre[12] = GNC2026W_P.baseRate;
        S_pre[19] = GNC2026W_P.baseRate;
        S_pre[34] = GNC2026W_P.baseRate;
        for (newMeas = 0; newMeas < 6; newMeas++) {
          rtb_TSamp_eu = 0.0;
          for (i = 0; i < 6; i++) {
            rtb_TSamp_eu += S_pre[6 * i + newMeas] * GNC2026W_DW.x[i];
          }

          AccelerationtoVelocity_g[newMeas] = rtb_TSamp_eu;
        }

        for (newMeas = 0; newMeas < 6; newMeas++) {
          GNC2026W_DW.x[newMeas] = AccelerationtoVelocity_g[newMeas];
          for (i = 0; i < 6; i++) {
            rtb_TSamp_eu = 0.0;
            for (vcol = 0; vcol < 6; vcol++) {
              rtb_TSamp_eu += S_pre[6 * vcol + newMeas] * GNC2026W_DW.P[6 * i +
                vcol];
            }

            V_0[newMeas + 6 * i] = rtb_TSamp_eu;
          }

          rtAction = b_a[newMeas + 6];
          rtPrevAction = b_a[newMeas];
          S_tmp_0 = b_a[newMeas + 12];
          for (i = 0; i < 3; i++) {
            P_xy[newMeas + 6 * i] = (a_0[3 * i + 1] * GNC2026W_P.baseRate *
              static_cast<real_T>(rtAction) + a_0[3 * i] * GNC2026W_P.baseRate *
              static_cast<real_T>(rtPrevAction)) + a_0[3 * i + 2] *
              GNC2026W_P.baseRate * static_cast<real_T>(S_tmp_0);
          }

          for (i = 0; i < 6; i++) {
            rtb_TSamp_eu = 0.0;
            for (vcol = 0; vcol < 6; vcol++) {
              rtb_TSamp_eu += V_0[6 * vcol + newMeas] * S_pre[6 * vcol + i];
            }

            S_minus[newMeas + 6 * i] = rtb_TSamp_eu;
          }
        }

        for (newMeas = 0; newMeas < 6; newMeas++) {
          rtAction = db[3 * newMeas + 1];
          rtPrevAction = db[3 * newMeas];
          S_tmp_0 = db[3 * newMeas + 2];
          for (i = 0; i < 6; i++) {
            S_pre[i + 6 * newMeas] = (P_xy[i + 6] * static_cast<real_T>(rtAction)
              + static_cast<real_T>(rtPrevAction) * P_xy[i]) + P_xy[i + 12] *
              static_cast<real_T>(S_tmp_0);
          }
        }

        for (newMeas = 0; newMeas < 36; newMeas++) {
          GNC2026W_DW.P[newMeas] = S_minus[newMeas] + S_pre[newMeas];
        }

        for (newMeas = 0; newMeas < 18; newMeas++) {
          H[newMeas] = 0;
        }

        H[0] = 1;
        H[4] = 1;
        H[14] = 1;
        for (newMeas = 0; newMeas < 18; newMeas++) {
          K_0[newMeas] = c_a[newMeas];
        }

        for (newMeas = 0; newMeas < 3; newMeas++) {
          absx = 0.0;
          for (i = 0; i < 6; i++) {
            vcol = 3 * i + newMeas;
            absx += K_0[vcol] * GNC2026W_DW.x[i];
            t17 = 0.0;
            for (e_coffset = 0; e_coffset < 6; e_coffset++) {
              t17 += K_0[3 * e_coffset + newMeas] * GNC2026W_DW.P[6 * i +
                e_coffset];
            }

            K_1[vcol] = t17;
          }

          LARstates_REL[newMeas] = GNC2026W_B.r_T_I[newMeas] - absx;
          for (i = 0; i < 3; i++) {
            absx = 0.0;
            for (vcol = 0; vcol < 6; vcol++) {
              absx += K_1[3 * vcol + newMeas] * static_cast<real_T>(eb[6 * i +
                vcol]);
            }

            r = 3 * i + newMeas;
            P_minus[r] = fb[r] + absx;
          }
        }

        rtb_TSamp_ao = GNC2026W_B.r_T_I[2] - rt_atan2d_snf(sin(GNC2026W_DW.x[4]),
          cos(GNC2026W_DW.x[4]));
        LARstates_REL[2] = rt_atan2d_snf(sin(rtb_TSamp_ao), cos(rtb_TSamp_ao));
        if (P_minus[0] >= 1.0E-10) {
          absx = P_minus[0];
        } else {
          absx = 1.0E-10;
        }

        rtb_RelationalOperator_lm[0] = (fabs(LARstates_REL[0]) <= 3.0 * sqrt
          (absx));
        if (P_minus[4] >= 1.0E-10) {
          absx = P_minus[4];
        } else {
          absx = 1.0E-10;
        }

        rtb_RelationalOperator_lm[1] = (fabs(LARstates_REL[1]) <= 3.0 * sqrt
          (absx));
        if (P_minus[8] >= 1.0E-10) {
          absx = P_minus[8];
        } else {
          absx = 1.0E-10;
        }

        rtb_RelationalOperator_lm[2] = (fabs(LARstates_REL[2]) <= 3.0 * sqrt
          (absx));
        rEQ0 = false;
        newMeas = 0;
        exitg1 = false;
        while ((!exitg1) && (newMeas < 3)) {
          if (rtb_RelationalOperator_lm[newMeas]) {
            rEQ0 = true;
            exitg1 = true;
          } else {
            newMeas++;
          }
        }

        if (rEQ0) {
          newMeas = 0;
          for (i = 0; i < 3; i++) {
            if (rtb_RelationalOperator_lm[i]) {
              newMeas++;
            }
          }

          r = newMeas;
          newMeas = 0;
          for (i = 0; i < 3; i++) {
            if (rtb_RelationalOperator_lm[i]) {
              tmp_data[newMeas] = static_cast<int8_T>(i);
              newMeas++;
            }
          }

          if (r == 1) {
            d_size_idx_0 = 1;
            x_minus[0] = fb[3 * tmp_data[0] + tmp_data[0]];
          } else {
            if (r > 0) {
              vcol = r;
            } else {
              vcol = 0;
            }

            d_size_idx_0 = vcol;
            for (i = 0; i < vcol; i++) {
              newMeas = tmp_data[i];
              x_minus[i] = fb[3 * newMeas + newMeas];
            }
          }

          R_new_size[0] = d_size_idx_0;
          R_new_size[1] = d_size_idx_0;
          e_coffset = d_size_idx_0 * d_size_idx_0;
          if (e_coffset - 1 >= 0) {
            memset(&F[0], 0, static_cast<uint32_T>(e_coffset) * sizeof(real_T));
          }

          for (newMeas = 0; newMeas < d_size_idx_0; newMeas++) {
            F[newMeas + d_size_idx_0 * newMeas] = x_minus[newMeas];
          }

          if (r - 1 >= 0) {
            memcpy(&S_tmp[0], &tmp_data[0], static_cast<uint32_T>(r) * sizeof
                   (int8_T));
          }

          for (vcol = 0; vcol < 6; vcol++) {
            br = vcol * r;
            ar = vcol * 6;
            for (i = 0; i < r; i++) {
              rtb_TSamp_ao = 0.0;
              for (newMeas = 0; newMeas < 6; newMeas++) {
                c = newMeas * r + i;
                rtb_TSamp_ao += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(c) / static_cast<uint32_T>(r)) * 3 +
                  S_tmp[c % r]]) * GNC2026W_DW.P[ar + newMeas];
              }

              P_xy[br + i] = rtb_TSamp_ao;
            }
          }

          b_size[0] = r;
          b_size[1] = r;
          b_y_size[0] = 6;
          b_y_size[1] = r;
          for (newMeas = 0; newMeas < r; newMeas++) {
            br = newMeas * r;
            for (i = 0; i < r; i++) {
              rtb_TSamp_ao = 0.0;
              for (vcol = 0; vcol < 6; vcol++) {
                ar = vcol * r;
                c = ar + newMeas;
                rtb_TSamp_ao += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(c) / static_cast<uint32_T>(r)) * 3 +
                  S_tmp[c % r]]) * P_xy[ar + i];
              }

              P_minus[br + i] = rtb_TSamp_ao;
            }

            br = newMeas * 6;
            for (i = 0; i < 6; i++) {
              rtb_TSamp_ao = 0.0;
              for (vcol = 0; vcol < 6; vcol++) {
                ar = vcol * r + newMeas;
                rtb_TSamp_ao += static_cast<real_T>(H[static_cast<int32_T>(
                  static_cast<uint32_T>(ar) / static_cast<uint32_T>(r)) * 3 +
                  S_tmp[ar % r]]) * GNC2026W_DW.P[vcol * 6 + i];
              }

              K_0[br + i] = rtb_TSamp_ao;
            }
          }

          if (r == d_size_idx_0) {
            b_size_0[0] = r;
            b_size_0[1] = r;
            i = r * r;
            for (newMeas = 0; newMeas < i; newMeas++) {
              F_0[newMeas] = P_minus[newMeas] + F[newMeas];
            }

            GNC2026W_mrdiv(K_0, b_y_size, F_0, b_size_0, Ks_data, Ks_size);
          } else {
            GNC2026W_binary_expand_op(Ks_data, Ks_size, K_0, b_y_size, P_minus,
              b_size, F, R_new_size);
          }

          for (newMeas = 0; newMeas < 6; newMeas++) {
            AccelerationtoVelocity_g[newMeas] = 0.0;
          }

          c = Ks_size[1];
          for (newMeas = 0; newMeas < c; newMeas++) {
            i = newMeas * 6;
            for (vcol = 0; vcol < 6; vcol++) {
              AccelerationtoVelocity_g[vcol] += Ks_data[i + vcol] *
                LARstates_REL[tmp_data[newMeas]];
            }
          }

          for (newMeas = 0; newMeas < 6; newMeas++) {
            GNC2026W_DW.x[newMeas] += AccelerationtoVelocity_g[newMeas];
          }

          for (e_coffset = 0; e_coffset < d_size_idx_0; e_coffset++) {
            ar = e_coffset * 6;
            b_boffset = e_coffset * d_size_idx_0;
            for (newMeas = 0; newMeas < 6; newMeas++) {
              K_0[ar + newMeas] = 0.0;
            }

            for (br = 0; br < c; br++) {
              newMeas = br * 6;
              rtb_TSamp_ao = F[b_boffset + br];
              for (vcol = 0; vcol < 6; vcol++) {
                i = ar + vcol;
                K_0[i] += Ks_data[newMeas + vcol] * rtb_TSamp_ao;
              }
            }
          }

          y_size[0] = r;
          y_size[1] = 6;
          for (i = 0; i < 6; i++) {
            e_coffset = i * 6;
            for (newMeas = 0; newMeas < 6; newMeas++) {
              S_pre[e_coffset + newMeas] = 0.0;
            }

            for (newMeas = 0; newMeas < d_size_idx_0; newMeas++) {
              br = newMeas * 6;
              rtb_TSamp_ao = Ks_data[newMeas * 6 + i];
              for (vcol = 0; vcol < 6; vcol++) {
                c = e_coffset + vcol;
                S_pre[c] += K_0[br + vcol] * rtb_TSamp_ao;
              }
            }

            for (newMeas = 0; newMeas < r; newMeas++) {
              P_xy[newMeas + r * i] = H[3 * i + tmp_data[newMeas]];
            }
          }

          GNC2026W_mtimes(Ks_data, Ks_size, P_xy, y_size, S_minus);
          for (newMeas = 0; newMeas < 36; newMeas++) {
            InertiaS_0[newMeas] = InertiaS[newMeas] - S_minus[newMeas];
          }

          for (newMeas = 0; newMeas < 6; newMeas++) {
            for (i = 0; i < 6; i++) {
              absx = 0.0;
              for (vcol = 0; vcol < 6; vcol++) {
                absx += InertiaS_0[6 * vcol + newMeas] * GNC2026W_DW.P[6 * i +
                  vcol];
              }

              r = 6 * i + newMeas;
              V_0[r] = absx;
              InertiaS_1[i + 6 * newMeas] = InertiaS[r] - S_minus[r];
            }
          }

          for (newMeas = 0; newMeas < 6; newMeas++) {
            for (i = 0; i < 6; i++) {
              absx = 0.0;
              for (vcol = 0; vcol < 6; vcol++) {
                absx += V_0[6 * vcol + newMeas] * InertiaS_1[6 * i + vcol];
              }

              vcol = 6 * i + newMeas;
              GNC2026W_DW.P[vcol] = S_pre[vcol] + absx;
            }
          }
        }

        if (!GNC2026W_DW.initial_theta) {
          GNC2026W_DW.theta_prev = rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos
            (GNC2026W_DW.x[4]));
          GNC2026W_DW.theta = GNC2026W_DW.theta_prev;
          GNC2026W_DW.initial_theta = true;
        } else {
          rtb_TSamp_ao = rt_atan2d_snf(sin(GNC2026W_DW.x[4]), cos(GNC2026W_DW.x
            [4]));
          q = rtb_TSamp_ao - GNC2026W_DW.theta_prev;
          GNC2026W_DW.theta += rt_atan2d_snf(sin(q), cos(q));
          GNC2026W_DW.theta_prev = rtb_TSamp_ao;
        }

        GNC2026W_DW.x[4] = GNC2026W_DW.theta;

        // Merge: '<S219>/Merge' incorporates:
        //   MATLAB Function: '<S220>/EKF'
        //   SignalConversion generated from: '<S220>/BLKest'

        GNC2026W_B.Merge_k[0] = GNC2026W_DW.x[0];
        GNC2026W_B.Merge_k[1] = GNC2026W_DW.x[1];
        GNC2026W_B.Merge_k[2] = GNC2026W_DW.x[4];
        GNC2026W_B.Merge_k[3] = GNC2026W_DW.x[2];
        GNC2026W_B.Merge_k[4] = GNC2026W_DW.x[3];
        GNC2026W_B.Merge_k[5] = GNC2026W_DW.x[5];

        // Update for Delay: '<S226>/Delay1'
        GNC2026W_DW.Delay1_DSTATE_g0 = sampleTime;
        srUpdateBC(GNC2026W_DW.EKF_SubsysRanBC);

        // End of Outputs for SubSystem: '<S219>/EKF'
        break;
      }

      // End of If: '<S219>/If'

      // DataStoreWrite: '<S219>/Data Store Write2'
      for (i = 0; i < 6; i++) {
        GNC2026W_DW.BLACK_Filtered_States[i] = GNC2026W_B.Merge_k[i];
      }

      // End of DataStoreWrite: '<S219>/Data Store Write2'
      srUpdateBC(GNC2026W_DW.IfActionSubsystem_SubsysRanBC);

      // End of Outputs for SubSystem: '<S9>/If Action Subsystem'
    }

    // End of If: '<S9>/Experiment Sub-Phases'

    // If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Constant: '<S253>/Constant'
    //   Constant: '<S261>/Constant3'
    //   Constant: '<S282>/Constant3'
    //   Constant: '<S292>/Constant3'
    //   DataStoreRead: '<S10>/Data Store Read2'
    //   Delay: '<S261>/Delay1'
    //   Delay: '<S282>/Delay1'
    //   Delay: '<S292>/Delay1'
    //   MATLAB Function: '<S262>/Sample and Hold'
    //   RelationalOperator: '<S253>/Relational Operator'
    //   RelationalOperator: '<S261>/Relational Operator'
    //   RelationalOperator: '<S263>/Relational Operator'
    //   RelationalOperator: '<S282>/Relational Operator'
    //   RelationalOperator: '<S283>/Relational Operator'
    //   RelationalOperator: '<S292>/Relational Operator'
    //   RelationalOperator: '<S293>/Relational Operator'
    //   SignalConversion generated from: '<S278>/Enable'
    //   SignalConversion generated from: '<S280>/Enable'
    //   SignalConversion generated from: '<S288>/Enable'
    //   SignalConversion generated from: '<S290>/Enable'
    //   SignalConversion generated from: '<S298>/Enable'
    //   SignalConversion generated from: '<S300>/Enable'
    //   Sum: '<S261>/Subtract2'
    //   Sum: '<S282>/Subtract2'
    //   Sum: '<S292>/Subtract2'

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
        // Disable for Enabled SubSystem: '<S264>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_g);
        }

        // End of Disable for SubSystem: '<S264>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S263>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_it);
        }

        // End of Disable for SubSystem: '<S263>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S284>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_d);
        }

        // End of Disable for SubSystem: '<S284>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S283>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_lw);
        }

        // End of Disable for SubSystem: '<S283>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S294>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_MODE) {
          GNC2_EnabledSubsystem_p_Disable(&GNC2026W_DW.EnabledSubsystem_l1);
        }

        // End of Disable for SubSystem: '<S294>/Enabled Subsystem'

        // Disable for Enabled SubSystem: '<S293>/Enabled Subsystem'
        if (GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_MODE) {
          GNC202_EnabledSubsystem_Disable(&GNC2026W_DW.EnabledSubsystem_kh);
        }

        // End of Disable for SubSystem: '<S293>/Enabled Subsystem'

        // Disable for If: '<S257>/This IF block determines whether or not to run the BLACK sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;

        // Disable for If: '<S257>/This IF block determines whether or not to run the BLUE sim//exp' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;

        // Disable for If: '<S257>/This IF block determines whether or not to run the RED sim//exp ' 
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GNC2026W_M->solverInfo,
          true);
        GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;
      }
    }

    switch (rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S248>/Action Port'

      // S-Function (sdspFromNetwork): '<S249>/Receive PhaseSpace Data'
      sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
      samplesRead = 19;
      LibOutputs_Network(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U],
                         &GNC2026W_B.ReceivePhaseSpaceData_o1[0U], &samplesRead);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of S-Function (sdspFromNetwork): '<S249>/Receive PhaseSpace Data'

      // Gain: '<S250>/Convert BLAX from [mm] to [m]'
      GNC2026W_B.ConvertBLAXfrommmtom = GNC2026W_P.ConvertBLAXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[4];

      // Gain: '<S250>/Convert BLAY from [mm] to [m]'
      sampleTime = GNC2026W_P.ConvertBLAYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[5];

      // Trigonometry: '<S265>/Sin'
      rtb_TSamp_eu = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[6]);

      // Trigonometry: '<S265>/Cos'
      rtb_TSamp_ao = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[6]);

      // DataStoreWrite: '<S250>/RED_Px7' incorporates:
      //   Gain: '<S250>/Convert BLACKVX from [mm] to [m]'
      //   Gain: '<S250>/Convert BLACKVY from [mm] to [m]'
      //   Trigonometry: '<S265>/Atan2'

      GNC2026W_DW.BLACK_Measured_States[2] = rt_atan2d_snf(rtb_TSamp_eu,
        rtb_TSamp_ao);
      GNC2026W_DW.BLACK_Measured_States[3] =
        GNC2026W_P.ConvertBLACKVXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[13];
      GNC2026W_DW.BLACK_Measured_States[4] =
        GNC2026W_P.ConvertBLACKVYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[14];

      // Sum: '<S261>/Subtract1' incorporates:
      //   Delay: '<S261>/Delay2'

      rtb_TSamp_ao = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE;

      // Outputs for Enabled SubSystem: '<S261>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S266>/Enable'

      if (GNC2026W_B.ConvertBLAXfrommmtom - GNC2026W_DW.Delay1_DSTATE !=
          GNC2026W_P.Constant3_Value_eq) {
        // SignalConversion generated from: '<S266>/y2-y1'
        GNC2026W_B.y2y1_ob = rtb_TSamp_ao;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanB_gf);
      }

      // End of Outputs for SubSystem: '<S261>/Enabled Subsystem3'

      // MATLAB Function: '<S261>/MATLAB Function' incorporates:
      //   Constant: '<S261>/Constant'
      //   Constant: '<S261>/Constant3'
      //   Delay: '<S261>/Delay1'
      //   RelationalOperator: '<S261>/Relational Operator'
      //   Sum: '<S261>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1_ob, GNC2026W_P.dataRate,
        &rtb_TSamp_ao, &GNC2026W_DW.sf_MATLABFunction_j);

      // Sum: '<S264>/Subtract1' incorporates:
      //   Delay: '<S264>/Delay1'

      LARstates_REL[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6] -
        GNC2026W_DW.Delay1_DSTATE_g[2];

      // RelationalOperator: '<S264>/Relational Operator' incorporates:
      //   Constant: '<S264>/Constant3'
      //   Delay: '<S264>/Delay1'
      //   Sum: '<S264>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.ConvertBLAXfrommmtom -
        GNC2026W_DW.Delay1_DSTATE_g[0] != GNC2026W_P.Constant3_Value_a);
      rtb_RelationalOperator_lm[1] = (sampleTime - GNC2026W_DW.Delay1_DSTATE_g[1]
        != GNC2026W_P.Constant3_Value_a);
      rtb_RelationalOperator_lm[2] = (LARstates_REL[2] !=
        GNC2026W_P.Constant3_Value_a);

      // Outputs for Enabled SubSystem: '<S264>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(rtb_RelationalOperator_lm,
        GNC2026W_B.ConvertBLAXfrommmtom, sampleTime,
        GNC2026W_B.ReceivePhaseSpaceData_o1[6], rtb_TSamp_ao, GNC2026W_B.dy_p,
        &GNC2026W_B.EnabledSubsystem_g, &GNC2026W_DW.EnabledSubsystem_g,
        &GNC2026W_P.EnabledSubsystem_g);

      // End of Outputs for SubSystem: '<S264>/Enabled Subsystem'

      // RelationalOperator: '<S263>/Relational Operator' incorporates:
      //   Constant: '<S263>/Constant3'
      //   Delay: '<S263>/Delay1'
      //   SignalConversion generated from: '<S280>/Enable'
      //   Sum: '<S263>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy_p[0] -
        GNC2026W_DW.Delay1_DSTATE_b[0] != GNC2026W_P.Constant3_Value_d);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy_p[1] -
        GNC2026W_DW.Delay1_DSTATE_b[1] != GNC2026W_P.Constant3_Value_d);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy_p[2] -
        GNC2026W_DW.Delay1_DSTATE_b[2] != GNC2026W_P.Constant3_Value_d);

      // Outputs for Enabled SubSystem: '<S263>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_i(rtb_RelationalOperator_lm, GNC2026W_B.dy_p,
        rtb_TSamp_ao, GNC2026W_B.dy_g, &GNC2026W_B.EnabledSubsystem_it,
        &GNC2026W_DW.EnabledSubsystem_it, &GNC2026W_P.EnabledSubsystem_it);

      // End of Outputs for SubSystem: '<S263>/Enabled Subsystem'

      // DataStoreWrite: '<S250>/RED_Px7' incorporates:
      //   RelationalOperator: '<S263>/Relational Operator'
      //   SignalConversion generated from: '<S278>/Enable'

      GNC2026W_DW.BLACK_Measured_States[0] = GNC2026W_B.ConvertBLAXfrommmtom;
      GNC2026W_DW.BLACK_Measured_States[1] = sampleTime;
      GNC2026W_DW.BLACK_Measured_States[5] =
        GNC2026W_B.ReceivePhaseSpaceData_o1[15];
      GNC2026W_DW.BLACK_Measured_States[6] = GNC2026W_B.dy_g[0];
      GNC2026W_DW.BLACK_Measured_States[7] = GNC2026W_B.dy_g[1];
      GNC2026W_DW.BLACK_Measured_States[8] = GNC2026W_B.dy_g[2];

      // MATLAB Function: '<S276>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S262>/Data Store Read3'
      //   Delay: '<S276>/Delay'
      //   Delay: '<S276>/Delay1'

      GNC2026W_MATLABFunction(GNC2026W_DW.RED_Measured_States[2],
        GNC2026W_DW.Delay_DSTATE_h, GNC2026W_DW.Delay1_DSTATE_f, &GNC2026W_B.y_o,
        &GNC2026W_B.u_next, &GNC2026W_DW.sf_MATLABFunction_gq);

      // SignalConversion generated from: '<S269>/ SFunction ' incorporates:
      //   MATLAB Function: '<S262>/BLK CoM to LAR'

      LARstates_REL[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6];

      // MATLAB Function: '<S262>/BLK CoM to LAR' incorporates:
      //   MATLAB Function: '<S262>/MATLAB Function'

      x_minus[2] = LARstates_REL[2];
      rtb_TSamp_ao = sin(LARstates_REL[2]);
      t15 = cos(LARstates_REL[2]);

      // MATLAB Function: '<S262>/Inertial to Camera Frame (HARDWARE)' incorporates:
      //   DataStoreRead: '<S262>/Data Store Read3'
      //   MATLAB Function: '<S262>/BLK CoM to LAR'
      //   SignalConversion generated from: '<S269>/ SFunction '
      //   SignalConversion generated from: '<S271>/ SFunction '

      rtb_TSamp_eu = sin(GNC2026W_B.y_o);
      rtb_TSamp_dm = cos(GNC2026W_B.y_o);
      q = ((t15 * 0.145 + -rtb_TSamp_ao * 0.0) + GNC2026W_B.ConvertBLAXfrommmtom)
        - GNC2026W_DW.RED_Measured_States[0];
      t12 = ((rtb_TSamp_ao * 0.145 + t15 * 0.0) + sampleTime) -
        GNC2026W_DW.RED_Measured_States[1];
      GNC2026W_B.r_REL[2] = LARstates_REL[2] - GNC2026W_B.y_o;
      GNC2026W_B.r_REL[0] = (rtb_TSamp_dm * q + rtb_TSamp_eu * t12) - 0.125;
      GNC2026W_B.r_REL[1] = (-rtb_TSamp_eu * q + rtb_TSamp_dm * t12) - 0.03;

      // MATLAB Function: '<S262>/CV Noise' incorporates:
      //   DataStoreRead: '<S262>/Data Store Read'
      //   Sum: '<S262>/Sum'

      GNC2026W_B.y_mo[0] = GNC2026W_B.r_REL[0] + BLACK_Exp_Noise;
      GNC2026W_B.y_mo[1] = GNC2026W_B.r_REL[1] + BLACK_Exp_Noise;
      GNC2026W_B.y_mo[2] = GNC2026W_B.r_REL[2] + BLACK_Exp_Noise;
      if (GNC2026W_rand_a() < 0.5) {
        absx = (2.0 * GNC2026W_rand_a() - 1.0) * 0.1;
        GNC2026W_B.y_mo[0] += absx;
        GNC2026W_B.y_mo[1] += absx;
        GNC2026W_B.y_mo[2] += absx;
      }

      GNC2026W_B.y_mo[0] /= 0.0001;
      GNC2026W_B.y_mo[0] = rt_roundd_snf(GNC2026W_B.y_mo[0]);
      GNC2026W_B.y_mo[0] *= 0.0001;
      GNC2026W_B.y_mo[1] /= 0.0001;
      GNC2026W_B.y_mo[1] = rt_roundd_snf(GNC2026W_B.y_mo[1]);
      GNC2026W_B.y_mo[1] *= 0.0001;
      GNC2026W_B.y_mo[2] /= 0.0001;
      GNC2026W_B.y_mo[2] = rt_roundd_snf(GNC2026W_B.y_mo[2]);
      GNC2026W_B.y_mo[2] *= 0.0001;

      // End of MATLAB Function: '<S262>/CV Noise'

      // MATLAB Function: '<S262>/Sample and Hold'
      if (!GNC2026W_DW.k_not_empty) {
        GNC2026W_DW.k_not_empty = true;
        GNC2026W_DW.y_hold[0] = GNC2026W_B.y_mo[0];
        GNC2026W_DW.y_hold[1] = GNC2026W_B.y_mo[1];
        GNC2026W_DW.y_hold[2] = GNC2026W_B.y_mo[2];
      }

      rtb_TSamp_eu = GNC2026W_P.CVrate / GNC2026W_P.baseRate;
      rtb_TSamp_dm = GNC2026W_DW.k;
      if (rtb_TSamp_eu == 0.0) {
        if (GNC2026W_DW.k == 0.0) {
          rtb_TSamp_dm = rtb_TSamp_eu;
        }
      } else if (rtIsNaN(GNC2026W_DW.k)) {
        rtb_TSamp_dm = (rtNaN);
      } else if (rtIsNaN(rtb_TSamp_eu)) {
        rtb_TSamp_dm = (rtNaN);
      } else if (rtIsInf(GNC2026W_DW.k)) {
        rtb_TSamp_dm = (rtNaN);
      } else if (GNC2026W_DW.k == 0.0) {
        rtb_TSamp_dm = 0.0 / rtb_TSamp_eu;
      } else if (rtIsInf(rtb_TSamp_eu)) {
        if ((rtb_TSamp_eu < 0.0) != (GNC2026W_DW.k < 0.0)) {
          rtb_TSamp_dm = rtb_TSamp_eu;
        }
      } else {
        rtb_TSamp_dm = fmod(GNC2026W_DW.k, rtb_TSamp_eu);
        rEQ0 = (rtb_TSamp_dm == 0.0);
        if ((!rEQ0) && (rtb_TSamp_eu > floor(rtb_TSamp_eu))) {
          q = fabs(GNC2026W_DW.k / rtb_TSamp_eu);
          rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
        }

        if (rEQ0) {
          rtb_TSamp_dm = rtb_TSamp_eu * 0.0;
        } else if (((rtb_TSamp_dm < 0.0) && (!(rtb_TSamp_eu < 0.0))) ||
                   ((!(rtb_TSamp_dm < 0.0)) && (rtb_TSamp_eu < 0.0))) {
          rtb_TSamp_dm += rtb_TSamp_eu;
        }
      }

      if (rtb_TSamp_dm == 0.0) {
        GNC2026W_DW.y_hold[0] = GNC2026W_B.y_mo[0];
        GNC2026W_DW.y_hold[1] = GNC2026W_B.y_mo[1];
        GNC2026W_DW.y_hold[2] = GNC2026W_B.y_mo[2];
      }

      GNC2026W_DW.k++;
      GNC2026W_B.y_m[0] = GNC2026W_DW.y_hold[0];

      // DataStoreWrite: '<S262>/Data Store Write' incorporates:
      //   MATLAB Function: '<S262>/Sample and Hold'

      GNC2026W_DW.BLACK_CV_States[0] = GNC2026W_DW.y_hold[0];
      GNC2026W_B.y_m[1] = GNC2026W_DW.y_hold[1];

      // DataStoreWrite: '<S262>/Data Store Write' incorporates:
      //   MATLAB Function: '<S262>/Sample and Hold'

      GNC2026W_DW.BLACK_CV_States[1] = GNC2026W_DW.y_hold[1];
      GNC2026W_B.y_m[2] = GNC2026W_DW.y_hold[2];

      // DataStoreWrite: '<S262>/Data Store Write' incorporates:
      //   MATLAB Function: '<S262>/Sample and Hold'

      GNC2026W_DW.BLACK_CV_States[2] = GNC2026W_DW.y_hold[2];

      // MATLAB Function: '<S262>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S262>/Data Store Read3'
      //   SignalConversion generated from: '<S272>/ SFunction '

      P_minus[0] = t15;
      P_minus[3] = -rtb_TSamp_ao;
      P_minus[6] = 0.0;
      P_minus[1] = rtb_TSamp_ao;
      P_minus[4] = t15;
      P_minus[7] = 0.0;
      P_minus[2] = 0.0;
      P_minus[5] = 0.0;
      P_minus[8] = 1.0;
      q = GNC2026W_B.y_o + x_minus[2];
      K[0] = cos(q) * 0.145 - 0.125;
      K[1] = sin(q) * 0.145 - 0.03;
      K[2] = -x_minus[2];
      rtb_TSamp_ao = GNC2026W_DW.RED_Measured_States[1];
      rtb_TSamp_eu = GNC2026W_DW.RED_Measured_States[0];
      for (newMeas = 0; newMeas < 3; newMeas++) {
        GNC2026W_B.r_LAR_cam[newMeas] = ((P_minus[newMeas + 3] * rtb_TSamp_ao +
          P_minus[newMeas] * rtb_TSamp_eu) + P_minus[newMeas + 6] *
          GNC2026W_B.y_o) + K[newMeas];
      }

      // If: '<S262>/If' incorporates:
      //   Constant: '<S262>/Constant'

      if (GNC2026W_P.VISinLoop == 0.0) {
        // Outputs for IfAction SubSystem: '<S262>/Artificial isValid Flag' incorporates:
        //   ActionPort: '<S268>/Action Port'

        // MATLAB Function: '<S268>/MATLAB Function1'
        GNC2026W_B.isValue = (GNC2026W_DW.k_h * GNC2026W_P.baseRate > 65.0);
        GNC2026W_DW.k_h++;

        // DataStoreWrite: '<S268>/Data Store Write2'
        GNC2026W_DW.isValid = GNC2026W_B.isValue;
        srUpdateBC(GNC2026W_DW.ArtificialisValidFlag_SubsysRan);

        // End of Outputs for SubSystem: '<S262>/Artificial isValid Flag'
      }

      // End of If: '<S262>/If'

      // SignalConversion generated from: '<S264>/Delay1' incorporates:
      //   Delay: '<S264>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_g[0] = GNC2026W_B.ConvertBLAXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_g[1] = sampleTime;
      GNC2026W_DW.Delay1_DSTATE_g[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[6];

      // Gain: '<S251>/Convert BLUX from [mm] to [m]'
      GNC2026W_B.ConvertBLUXfrommmtom = GNC2026W_P.ConvertBLUXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[7];

      // Gain: '<S251>/Convert BLUY from [mm] to [m]'
      BLACK_Exp_Noise = GNC2026W_P.ConvertBLUYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[8];

      // Trigonometry: '<S285>/Sin'
      sampleTime = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[9]);

      // Trigonometry: '<S285>/Cos'
      rtb_TSamp_ao = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[9]);

      // DataStoreWrite: '<S251>/RED_Px7' incorporates:
      //   Gain: '<S251>/Convert BLUEVX from [mm] to [m]'
      //   Gain: '<S251>/Convert BLUEVY from [mm] to [m]'
      //   Trigonometry: '<S285>/Atan2'

      GNC2026W_DW.BLUE_Measured_States[2] = rt_atan2d_snf(sampleTime,
        rtb_TSamp_ao);
      GNC2026W_DW.BLUE_Measured_States[3] =
        GNC2026W_P.ConvertBLUEVXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[16];
      GNC2026W_DW.BLUE_Measured_States[4] =
        GNC2026W_P.ConvertBLUEVYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[17];

      // Sum: '<S282>/Subtract1' incorporates:
      //   Delay: '<S282>/Delay2'

      sampleTime = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE_l;

      // Outputs for Enabled SubSystem: '<S282>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S286>/Enable'

      if (GNC2026W_B.ConvertBLUXfrommmtom - GNC2026W_DW.Delay1_DSTATE_l !=
          GNC2026W_P.Constant3_Value_oi) {
        // SignalConversion generated from: '<S286>/y2-y1'
        GNC2026W_B.y2y1_o = sampleTime;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_g);
      }

      // End of Outputs for SubSystem: '<S282>/Enabled Subsystem3'

      // MATLAB Function: '<S282>/MATLAB Function' incorporates:
      //   Constant: '<S282>/Constant'
      //   Constant: '<S282>/Constant3'
      //   Delay: '<S282>/Delay1'
      //   RelationalOperator: '<S282>/Relational Operator'
      //   Sum: '<S282>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1_o, GNC2026W_P.dataRate,
        &sampleTime, &GNC2026W_DW.sf_MATLABFunction_es);

      // Sum: '<S284>/Subtract1' incorporates:
      //   Delay: '<S284>/Delay1'

      LARstates_REL[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[9] -
        GNC2026W_DW.Delay1_DSTATE_m[2];

      // RelationalOperator: '<S284>/Relational Operator' incorporates:
      //   Constant: '<S284>/Constant3'
      //   Delay: '<S284>/Delay1'
      //   Sum: '<S284>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.ConvertBLUXfrommmtom -
        GNC2026W_DW.Delay1_DSTATE_m[0] != GNC2026W_P.Constant3_Value_cz);
      rtb_RelationalOperator_lm[1] = (BLACK_Exp_Noise -
        GNC2026W_DW.Delay1_DSTATE_m[1] != GNC2026W_P.Constant3_Value_cz);
      rtb_RelationalOperator_lm[2] = (LARstates_REL[2] !=
        GNC2026W_P.Constant3_Value_cz);

      // Outputs for Enabled SubSystem: '<S284>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(rtb_RelationalOperator_lm,
        GNC2026W_B.ConvertBLUXfrommmtom, BLACK_Exp_Noise,
        GNC2026W_B.ReceivePhaseSpaceData_o1[9], sampleTime, GNC2026W_B.dy_c,
        &GNC2026W_B.EnabledSubsystem_d, &GNC2026W_DW.EnabledSubsystem_d,
        &GNC2026W_P.EnabledSubsystem_d);

      // End of Outputs for SubSystem: '<S284>/Enabled Subsystem'

      // RelationalOperator: '<S283>/Relational Operator' incorporates:
      //   Constant: '<S283>/Constant3'
      //   Delay: '<S283>/Delay1'
      //   SignalConversion generated from: '<S290>/Enable'
      //   Sum: '<S283>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy_c[0] -
        GNC2026W_DW.Delay1_DSTATE_lv[0] != GNC2026W_P.Constant3_Value_ke);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy_c[1] -
        GNC2026W_DW.Delay1_DSTATE_lv[1] != GNC2026W_P.Constant3_Value_ke);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy_c[2] -
        GNC2026W_DW.Delay1_DSTATE_lv[2] != GNC2026W_P.Constant3_Value_ke);

      // Outputs for Enabled SubSystem: '<S283>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_i(rtb_RelationalOperator_lm, GNC2026W_B.dy_c,
        sampleTime, GNC2026W_B.dy_d, &GNC2026W_B.EnabledSubsystem_lw,
        &GNC2026W_DW.EnabledSubsystem_lw, &GNC2026W_P.EnabledSubsystem_lw);

      // End of Outputs for SubSystem: '<S283>/Enabled Subsystem'

      // DataStoreWrite: '<S251>/RED_Px7' incorporates:
      //   RelationalOperator: '<S283>/Relational Operator'
      //   SignalConversion generated from: '<S288>/Enable'

      GNC2026W_DW.BLUE_Measured_States[0] = GNC2026W_B.ConvertBLUXfrommmtom;
      GNC2026W_DW.BLUE_Measured_States[1] = BLACK_Exp_Noise;
      GNC2026W_DW.BLUE_Measured_States[5] = GNC2026W_B.ReceivePhaseSpaceData_o1
        [18];
      GNC2026W_DW.BLUE_Measured_States[6] = GNC2026W_B.dy_d[0];
      GNC2026W_DW.BLUE_Measured_States[7] = GNC2026W_B.dy_d[1];
      GNC2026W_DW.BLUE_Measured_States[8] = GNC2026W_B.dy_d[2];

      // SignalConversion generated from: '<S284>/Delay1' incorporates:
      //   Delay: '<S284>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_m[0] = GNC2026W_B.ConvertBLUXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_m[1] = BLACK_Exp_Noise;
      GNC2026W_DW.Delay1_DSTATE_m[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[9];

      // Gain: '<S252>/Convert REDX from [mm] to [m]'
      GNC2026W_B.ConvertREDXfrommmtom = GNC2026W_P.ConvertREDXfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[1];

      // Gain: '<S252>/Convert REDY from [mm] to [m]'
      BLACK_Exp_Noise = GNC2026W_P.ConvertREDYfrommmtom_Gain *
        GNC2026W_B.ReceivePhaseSpaceData_o1[2];

      // Trigonometry: '<S295>/Sin'
      sampleTime = sin(GNC2026W_B.ReceivePhaseSpaceData_o1[3]);

      // Trigonometry: '<S295>/Cos'
      rtb_TSamp_ao = cos(GNC2026W_B.ReceivePhaseSpaceData_o1[3]);

      // DataStoreWrite: '<S252>/RED_Px7' incorporates:
      //   Gain: '<S252>/Convert REDVX from [mm] to [m]'
      //   Gain: '<S252>/Convert REDVY from [mm] to [m]'
      //   Trigonometry: '<S295>/Atan2'

      GNC2026W_DW.RED_Measured_States[2] = rt_atan2d_snf(sampleTime,
        rtb_TSamp_ao);
      GNC2026W_DW.RED_Measured_States[3] = GNC2026W_P.ConvertREDVXfrommmtom_Gain
        * GNC2026W_B.ReceivePhaseSpaceData_o1[10];
      GNC2026W_DW.RED_Measured_States[4] = GNC2026W_P.ConvertREDVYfrommmtom_Gain
        * GNC2026W_B.ReceivePhaseSpaceData_o1[11];

      // Sum: '<S292>/Subtract1' incorporates:
      //   Delay: '<S292>/Delay2'

      sampleTime = GNC2026W_B.ReceivePhaseSpaceData_o1[0] -
        GNC2026W_DW.Delay2_DSTATE_l0;

      // Outputs for Enabled SubSystem: '<S292>/Enabled Subsystem3' incorporates:
      //   EnablePort: '<S296>/Enable'

      if (GNC2026W_B.ConvertREDXfrommmtom - GNC2026W_DW.Delay1_DSTATE_ld !=
          GNC2026W_P.Constant3_Value_fy) {
        // SignalConversion generated from: '<S296>/y2-y1'
        GNC2026W_B.y2y1 = sampleTime;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem3_SubsysRanBC);
      }

      // End of Outputs for SubSystem: '<S292>/Enabled Subsystem3'

      // MATLAB Function: '<S292>/MATLAB Function' incorporates:
      //   Constant: '<S292>/Constant'
      //   Constant: '<S292>/Constant3'
      //   Delay: '<S292>/Delay1'
      //   RelationalOperator: '<S292>/Relational Operator'
      //   Sum: '<S292>/Subtract2'

      GNC2026W_MATLABFunction_j(GNC2026W_B.y2y1, GNC2026W_P.dataRate,
        &sampleTime, &GNC2026W_DW.sf_MATLABFunction_kd);

      // Sum: '<S294>/Subtract1' incorporates:
      //   Delay: '<S294>/Delay1'

      LARstates_REL[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[3] -
        GNC2026W_DW.Delay1_DSTATE_c[2];

      // RelationalOperator: '<S294>/Relational Operator' incorporates:
      //   Constant: '<S294>/Constant3'
      //   Delay: '<S294>/Delay1'
      //   Sum: '<S294>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.ConvertREDXfrommmtom -
        GNC2026W_DW.Delay1_DSTATE_c[0] != GNC2026W_P.Constant3_Value_dh);
      rtb_RelationalOperator_lm[1] = (BLACK_Exp_Noise -
        GNC2026W_DW.Delay1_DSTATE_c[1] != GNC2026W_P.Constant3_Value_dh);
      rtb_RelationalOperator_lm[2] = (LARstates_REL[2] !=
        GNC2026W_P.Constant3_Value_dh);

      // Outputs for Enabled SubSystem: '<S294>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_g(rtb_RelationalOperator_lm,
        GNC2026W_B.ConvertREDXfrommmtom, BLACK_Exp_Noise,
        GNC2026W_B.ReceivePhaseSpaceData_o1[3], sampleTime, GNC2026W_B.dy,
        &GNC2026W_B.EnabledSubsystem_l1, &GNC2026W_DW.EnabledSubsystem_l1,
        &GNC2026W_P.EnabledSubsystem_l1);

      // End of Outputs for SubSystem: '<S294>/Enabled Subsystem'

      // RelationalOperator: '<S293>/Relational Operator' incorporates:
      //   Constant: '<S293>/Constant3'
      //   Delay: '<S293>/Delay1'
      //   SignalConversion generated from: '<S300>/Enable'
      //   Sum: '<S293>/Subtract1'

      rtb_RelationalOperator_lm[0] = (GNC2026W_B.dy[0] -
        GNC2026W_DW.Delay1_DSTATE_cq[0] != GNC2026W_P.Constant3_Value_dz);
      rtb_RelationalOperator_lm[1] = (GNC2026W_B.dy[1] -
        GNC2026W_DW.Delay1_DSTATE_cq[1] != GNC2026W_P.Constant3_Value_dz);
      rtb_RelationalOperator_lm[2] = (GNC2026W_B.dy[2] -
        GNC2026W_DW.Delay1_DSTATE_cq[2] != GNC2026W_P.Constant3_Value_dz);

      // Outputs for Enabled SubSystem: '<S293>/Enabled Subsystem'
      GNC2026W_EnabledSubsystem_i(rtb_RelationalOperator_lm, GNC2026W_B.dy,
        sampleTime, GNC2026W_B.dy_h, &GNC2026W_B.EnabledSubsystem_kh,
        &GNC2026W_DW.EnabledSubsystem_kh, &GNC2026W_P.EnabledSubsystem_kh);

      // End of Outputs for SubSystem: '<S293>/Enabled Subsystem'

      // DataStoreWrite: '<S252>/RED_Px7' incorporates:
      //   RelationalOperator: '<S293>/Relational Operator'
      //   SignalConversion generated from: '<S298>/Enable'

      GNC2026W_DW.RED_Measured_States[0] = GNC2026W_B.ConvertREDXfrommmtom;
      GNC2026W_DW.RED_Measured_States[1] = BLACK_Exp_Noise;
      GNC2026W_DW.RED_Measured_States[5] = GNC2026W_B.ReceivePhaseSpaceData_o1
        [12];
      GNC2026W_DW.RED_Measured_States[6] = GNC2026W_B.dy_h[0];
      GNC2026W_DW.RED_Measured_States[7] = GNC2026W_B.dy_h[1];
      GNC2026W_DW.RED_Measured_States[8] = GNC2026W_B.dy_h[2];

      // S-Function (sdspFromNetwork): '<S253>/UDP Receive (RED Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
      samplesRead_2 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveREDClock_o1, &samplesRead_2);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of S-Function (sdspFromNetwork): '<S253>/UDP Receive (RED Clock)'

      // S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLACK Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
      samplesRead_3 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveBLACKClock_o1, &samplesRead_3);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLACK Clock)' 

      // S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLUE Clock)'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
      samplesRead_4 = 1;
      LibOutputs_Network(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U],
                         &GNC2026W_B.UDPReceiveBLUEClock_o1, &samplesRead_4);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLUE Clock)'

      // MATLAB Function: '<S253>/MATLAB Function1'
      LARstates_REL[0] = GNC2026W_B.UDPReceiveREDClock_o1;
      LARstates_REL[1] = GNC2026W_B.UDPReceiveBLACKClock_o1;
      LARstates_REL[2] = GNC2026W_B.UDPReceiveBLUEClock_o1;

      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      for (i = 0; i < 3; i++) {
        // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
        //   ActionPort: '<S248>/Action Port'

        if (LARstates_REL[i] == 0.0) {
          LARstates_REL[i] = (rtNaN);
        }

        // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      }

      // Outputs for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S248>/Action Port'

      // MATLAB Function: '<S253>/MATLAB Function1'
      if (!rtIsNaN(LARstates_REL[0])) {
        vcol = 1;
      } else {
        vcol = 0;
        newMeas = 2;
        exitg1 = false;
        while ((!exitg1) && (newMeas < 4)) {
          if (!rtIsNaN(LARstates_REL[newMeas - 1])) {
            vcol = newMeas;
            exitg1 = true;
          } else {
            newMeas++;
          }
        }
      }

      if (vcol == 0) {
        sampleTime = LARstates_REL[0];
      } else {
        sampleTime = LARstates_REL[vcol - 1];
        for (i = vcol + 1; i < 4; i++) {
          rtb_TSamp_ao = LARstates_REL[i - 1];
          if (sampleTime > rtb_TSamp_ao) {
            sampleTime = rtb_TSamp_ao;
          }
        }
      }

      // MATLAB Function: '<S253>/MATLAB Function'
      newMeas = 0;
      if (GNC2026W_P.platformSelection == 1.0) {
        newMeas = (GNC2026W_B.UDPReceiveREDClock_o1 != 0.0);
      } else if (GNC2026W_P.platformSelection == 2.0) {
        newMeas = (GNC2026W_B.UDPReceiveBLACKClock_o1 != 0.0);
      } else if (GNC2026W_P.platformSelection == 3.0) {
        newMeas = ((GNC2026W_B.UDPReceiveREDClock_o1 != 0.0) &&
                   (GNC2026W_B.UDPReceiveBLACKClock_o1 != 0.0));
      } else if (GNC2026W_P.platformSelection == 4.0) {
        newMeas = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 5.0) {
        newMeas = (GNC2026W_B.UDPReceiveREDClock_o1 != 1.0);
      } else if (GNC2026W_P.platformSelection == 6.0) {
        newMeas = (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0);
      } else if (GNC2026W_P.platformSelection == 7.0) {
        newMeas = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 8.0) {
        newMeas = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 9.0) {
        newMeas = ((GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 10.0) {
        newMeas = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      } else if (GNC2026W_P.platformSelection == 11.0) {
        newMeas = ((GNC2026W_B.UDPReceiveREDClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLACKClock_o1 != 1.0) &&
                   (GNC2026W_B.UDPReceiveBLUEClock_o1 != 1.0));
      }

      // End of MATLAB Function: '<S253>/MATLAB Function'

      // Outputs for Enabled SubSystem: '<S253>/Enabled Subsystem2' incorporates:
      //   EnablePort: '<S254>/Enable'

      if (newMeas == GNC2026W_P.Constant_Value_i) {
        // SignalConversion generated from: '<S254>/In1'
        GNC2026W_B.In1_g20 = sampleTime;
        srUpdateBC(GNC2026W_DW.EnabledSubsystem2_SubsysRanBC);
      }

      // End of Outputs for SubSystem: '<S253>/Enabled Subsystem2'

      // DataStoreWrite: '<S252>/Universal_Time' incorporates:
      //   Constant: '<S253>/Constant'
      //   RelationalOperator: '<S253>/Relational Operator'

      GNC2026W_DW.Univ_Time = GNC2026W_B.In1_g20;

      // SignalConversion generated from: '<S294>/Delay1' incorporates:
      //   Delay: '<S294>/Delay1'

      GNC2026W_DW.Delay1_DSTATE_c[0] = GNC2026W_B.ConvertREDXfrommmtom;
      GNC2026W_DW.Delay1_DSTATE_c[1] = BLACK_Exp_Noise;
      GNC2026W_DW.Delay1_DSTATE_c[2] = GNC2026W_B.ReceivePhaseSpaceData_o1[3];

      // If: '<S257>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   DataStoreRead: '<S257>/Data Store Read'
      //   DataStoreRead: '<S257>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;
      if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhether_ch = 0;
        srUpdateBC
          (GNC2026W_DW.ChangeBLACKBehavior_e.ChangeBLACKBehavior_SubsysRanBC);

        // End of Outputs for SubSystem: '<S257>/Change BLACK Behavior'
      }

      // End of If: '<S257>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S257>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   DataStoreRead: '<S257>/Data Store Read'
      //   DataStoreRead: '<S257>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;
      if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhether_cs = 0;
        srUpdateBC
          (GNC2026W_DW.ChangeBLUEBehavior_f.ChangeBLACKBehavior_SubsysRanBC);

        // End of Outputs for SubSystem: '<S257>/Change BLUE Behavior'
      }

      // End of If: '<S257>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S257>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   DataStoreRead: '<S257>/Data Store Read'
      //   DataStoreRead: '<S257>/Data Store Read2'

      GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;
      if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
        GNC2026W_DW.ThisIFblockdetermineswhethero_d = 0;
        srUpdateBC
          (GNC2026W_DW.ChangeREDBehavior_d.ChangeBLACKBehavior_SubsysRanBC);

        // End of Outputs for SubSystem: '<S257>/Change RED Behavior'
      }

      // End of If: '<S257>/This IF block determines whether or not to run the RED sim//exp ' 
      srUpdateBC(GNC2026W_DW.UseHardwaretoObtainStates_Subsy);

      // End of Outputs for SubSystem: '<S10>/Use Hardware to Obtain States'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S10>/Initialize Universal Time (Simulation)' incorporates:
      //   ActionPort: '<S247>/Action Port'

      // Clock: '<S247>/Set Universal Time (If this is a simulation)' incorporates:
      //   DataStoreWrite: '<S247>/Universal_Time'

      GNC2026W_DW.Univ_Time = GNC2026W_M->Timing.t[0];
      srUpdateBC(GNC2026W_DW.InitializeUniversalTimeSimulati);

      // End of Outputs for SubSystem: '<S10>/Initialize Universal Time (Simulation)' 
      break;
    }

    // End of If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S11>/Data Store Read1'
    //   If: '<S11>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S11>/Subsystem' incorporates:
      //   ActionPort: '<S302>/Action Port'

      // MATLABSystem: '<S302>/WhoAmI' incorporates:
      //   DataStoreWrite: '<S302>/Data Store Write'

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

      // End of MATLABSystem: '<S302>/WhoAmI'
      // End of Outputs for SubSystem: '<S11>/Subsystem'

      // Update for IfAction SubSystem: '<S11>/Subsystem' incorporates:
      //   ActionPort: '<S302>/Action Port'

      // Update for If: '<S11>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      srUpdateBC(GNC2026W_DW.Subsystem_SubsysRanBC_d);

      // End of Update for SubSystem: '<S11>/Subsystem'

      // Outputs for IfAction SubSystem: '<S12>/CV UDP' incorporates:
      //   ActionPort: '<S303>/Action Port'

      // S-Function (sdspFromNetwork): '<S303>/UDP Receive'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
      samplesRead_0 = 4;
      LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U],
                         &GNC2026W_B.UDPReceive_o1_a[0U], &samplesRead_0);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of S-Function (sdspFromNetwork): '<S303>/UDP Receive'

      // DataStoreWrite: '<S303>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S303>/Cast To Double'

      GNC2026W_DW.VIS_LAR_States[0] = GNC2026W_B.UDPReceive_o1_a[1];

      // DataTypeConversion: '<S303>/Cast To Double1'
      sampleTime_0 = GNC2026W_B.UDPReceive_o1_a[2];

      // DataStoreWrite: '<S303>/Data Store Write' incorporates:
      //   DataTypeConversion: '<S303>/Cast To Double2'
      //   Gain: '<S303>/Gain'

      GNC2026W_DW.VIS_LAR_States[2] = GNC2026W_B.UDPReceive_o1_a[3];
      GNC2026W_DW.VIS_LAR_States[1] = GNC2026W_P.Gain_Gain_k * sampleTime_0;

      // DataTypeConversion: '<S303>/Cast To Double3'
      sampleTime_0 = GNC2026W_B.UDPReceive_o1_a[0];

      // If: '<S303>/If' incorporates:
      //   Constant: '<S303>/Constant'

      if (GNC2026W_P.VISinLoop == 1.0) {
        // Outputs for IfAction SubSystem: '<S303>/Reading isValid' incorporates:
        //   ActionPort: '<S304>/Action Port'

        // DataStoreWrite: '<S304>/Data Store Write2'
        GNC2026W_DW.isValid = sampleTime_0;

        // End of Outputs for SubSystem: '<S303>/Reading isValid'

        // Update for IfAction SubSystem: '<S303>/Reading isValid' incorporates:
        //   ActionPort: '<S304>/Action Port'

        // Update for If: '<S303>/If'
        srUpdateBC(GNC2026W_DW.ReadingisValid_SubsysRanBC);

        // End of Update for SubSystem: '<S303>/Reading isValid'
      }

      // End of If: '<S303>/If'
      // End of Outputs for SubSystem: '<S12>/CV UDP'

      // Update for IfAction SubSystem: '<S12>/CV UDP' incorporates:
      //   ActionPort: '<S303>/Action Port'

      // Update for If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      srUpdateBC(GNC2026W_DW.CVUDP_SubsysRanBC);

      // End of Update for SubSystem: '<S12>/CV UDP'
    }

    // End of If: '<S12>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S13>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S13>/Data Store Read1'
    //   ManualSwitch: '<S306>/Manual Switch'

    if (GNC2026W_DW.isSim == 1.0) {
      // Outputs for IfAction SubSystem: '<S13>/ROB UDP' incorporates:
      //   ActionPort: '<S305>/Action Port'

      // S-Function (sdspFromNetwork): '<S305>/UDP Receive'
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
      samplesRead_1 = 5;
      LibOutputs_Network(&GNC2026W_DW.UDPReceive_NetworkLib[0U],
                         &GNC2026W_B.UDPReceive_o1[0U], &samplesRead_1);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of S-Function (sdspFromNetwork): '<S305>/UDP Receive'

      // DataStoreWrite: '<S305>/Data Store Write1' incorporates:
      //   DataTypeConversion: '<S305>/Cast To Double2'
      //   DataTypeConversion: '<S305>/Cast To Double3'
      //   DataTypeConversion: '<S305>/Cast To Double4'

      GNC2026W_DW.ARM_Joint_Angles_rad[0] = GNC2026W_B.UDPReceive_o1[2];
      GNC2026W_DW.ARM_Joint_Angles_rad[1] = GNC2026W_B.UDPReceive_o1[3];
      GNC2026W_DW.ARM_Joint_Angles_rad[2] = GNC2026W_B.UDPReceive_o1[4];

      // DataTypeConversion: '<S305>/Cast To Double'
      GNC2026W_B.CastToDouble = GNC2026W_B.UDPReceive_o1[0];

      // DataStoreWrite: '<S305>/Data Store Write2'
      GNC2026W_DW.ARM_Grab_Complete = GNC2026W_B.CastToDouble;

      // DataTypeConversion: '<S305>/Cast To Double1'
      GNC2026W_B.CastToDouble1 = GNC2026W_B.UDPReceive_o1[1];
      srUpdateBC(GNC2026W_DW.ROBUDP_SubsysRanBC);

      // End of Outputs for SubSystem: '<S13>/ROB UDP'
    } else {
      // Outputs for IfAction SubSystem: '<S13>/Simulated Flag' incorporates:
      //   ActionPort: '<S306>/Action Port'

      if (GNC2026W_P.ManualSwitch_CurrentSetting == 1) {
        // Step: '<S306>/Step'
        if (((GNC2026W_M->Timing.clockTick1) * 0.05) < GNC2026W_P.Step_Time) {
          // ManualSwitch: '<S306>/Manual Switch'
          GNC2026W_B.ManualSwitch = GNC2026W_P.Step_Y0;
        } else {
          // ManualSwitch: '<S306>/Manual Switch'
          GNC2026W_B.ManualSwitch = GNC2026W_P.Step_YFinal;
        }

        // End of Step: '<S306>/Step'
      } else {
        // ManualSwitch: '<S306>/Manual Switch' incorporates:
        //   Constant: '<S306>/Constant'

        GNC2026W_B.ManualSwitch = GNC2026W_P.Constant_Value_n1;
      }

      // DataStoreWrite: '<S306>/Data Store Write1'
      GNC2026W_DW.ARM_Grab_Complete = GNC2026W_B.ManualSwitch;
      srUpdateBC(GNC2026W_DW.SimulatedFlag_SubsysRanBC);

      // End of Outputs for SubSystem: '<S13>/Simulated Flag'
    }

    // End of If: '<S13>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S14>/Data Store Read'
    //   DataStoreRead: '<S14>/Data Store Read1'

    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      // Outputs for IfAction SubSystem: '<S14>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S307>/Action Port'

      // MATLABSystem: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' incorporates:
      //   DataStoreRead: '<S307>/Arm Control Mode'
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
                           rtb_TmpSignalConversionAtSFu_fp[0],
                           rtb_TmpSignalConversionAtSFu_fp[1],
                           rtb_TmpSignalConversionAtSFu_fp[2],
                           GNC2026W_DW.obj.CURRENT_LIMIT,
                           rtb_TmpSignalConversionAtSFu_fp[0],
                           rtb_TmpSignalConversionAtSFu_fp[1],
                           rtb_TmpSignalConversionAtSFu_fp[2],
                           GNC2026W_DW.obj.SPEED_P_GAIN,
                           GNC2026W_DW.obj.SPEED_I_GAIN,
                           GNC2026W_DW.obj.VELOCITY_LIMIT,
                           rtb_TmpSignalConversionAtSFu_fp[0],
                           rtb_TmpSignalConversionAtSFu_fp[1],
                           rtb_TmpSignalConversionAtSFu_fp[2],
                           GNC2026W_DW.obj.ACCELERATION_TIME);

      // End of MATLABSystem: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
      // End of Outputs for SubSystem: '<S14>/Change ARM Behavior'

      // Update for IfAction SubSystem: '<S14>/Change ARM Behavior' incorporates:
      //   ActionPort: '<S307>/Action Port'

      // Update for If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' 
      srUpdateBC(GNC2026W_DW.ChangeARMBehavior_SubsysRanBC);

      // End of Update for SubSystem: '<S14>/Change ARM Behavior'
    }

    // End of If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S15>/Data Store Read1'

    if (GNC2026W_DW.isSim == 0.0) {
      // Outputs for IfAction SubSystem: '<S15>/Subsystem' incorporates:
      //   ActionPort: '<S308>/Action Port'

      // SignalConversion generated from: '<S308>/UDP Send' incorporates:
      //   DataStoreRead: '<S308>/BLACK States'
      //   DataStoreRead: '<S308>/BLUE States'
      //   DataStoreRead: '<S308>/RED States'
      //   DataStoreRead: '<S308>/Time'

      GNC2026W_B.TmpSignalConversionAtUDPSend_og[0] = GNC2026W_DW.Univ_Time;
      for (i = 0; i < 9; i++) {
        GNC2026W_B.TmpSignalConversionAtUDPSend_og[i + 1] =
          GNC2026W_DW.RED_Measured_States[i];
        GNC2026W_B.TmpSignalConversionAtUDPSend_og[i + 10] =
          GNC2026W_DW.BLACK_Measured_States[i];
        GNC2026W_B.TmpSignalConversionAtUDPSend_og[i + 19] =
          GNC2026W_DW.BLUE_Measured_States[i];
      }

      // Update for S-Function (sdspToNetwork): '<S308>/UDP Send' incorporates:
      //   SignalConversion generated from: '<S308>/UDP Send'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib_m[0U],
                        &GNC2026W_B.TmpSignalConversionAtUDPSend_og[0U], 28);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S308>/UDP Send'
      // End of Outputs for SubSystem: '<S15>/Subsystem'

      // Update for IfAction SubSystem: '<S15>/Subsystem' incorporates:
      //   ActionPort: '<S308>/Action Port'

      // Update for If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 
      srUpdateBC(GNC2026W_DW.Subsystem_SubsysRanBC);

      // End of Update for SubSystem: '<S15>/Subsystem'
    }

    // End of If: '<S15>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S16>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' incorporates:
    //   DataStoreRead: '<S16>/Data Store Read1'

    if (GNC2026W_DW.isSim == 1.0) {
      // Outputs for IfAction SubSystem: '<S16>/SEND ROB UDP' incorporates:
      //   ActionPort: '<S309>/Action Port'

      // MATLAB Function: '<S309>/MATLAB Function' incorporates:
      //   DataStoreRead: '<S309>/Data Store Read1'
      //   DataStoreRead: '<S309>/Data Store Read2'
      //   DataStoreRead: '<S309>/Time1'

      if ((fabs(rtb_TSamp_of - GNC2026W_DW.L0) <= 0.03) &&
          (GNC2026W_DW.Univ_Time > 1.0)) {
        GNC2026W_DW.set = 1.0;
      }

      GNC2026W_B.y = GNC2026W_DW.set;

      // End of MATLAB Function: '<S309>/MATLAB Function'

      // DataTypeConversion: '<S309>/Data Type Conversion'
      GNC2026W_B.DataTypeConversion = GNC2026W_B.y;

      // MATLAB Function: '<S309>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S309>/Data Store Read5'

      GNC2026W_B.BeginBirth = (GNC2026W_DW.ARM_Grab_Complete == 1.0);

      // DataTypeConversion: '<S309>/Data Type Conversion1'
      GNC2026W_B.DataTypeConversion1 = GNC2026W_B.BeginBirth;

      // SignalConversion generated from: '<S309>/UDP Send'
      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[0] =
        GNC2026W_B.DataTypeConversion;
      GNC2026W_B.TmpSignalConversionAtUDPSendI_o[1] =
        GNC2026W_B.DataTypeConversion1;

      // Update for S-Function (sdspToNetwork): '<S309>/UDP Send' incorporates:
      //   SignalConversion generated from: '<S309>/UDP Send'
      //
      sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
      LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib_f[0U],
                        &GNC2026W_B.TmpSignalConversionAtUDPSendI_o[0U], 2);
      if (*sErr != 0) {
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }

      // End of Update for S-Function (sdspToNetwork): '<S309>/UDP Send'
      srUpdateBC(GNC2026W_DW.SENDROBUDP_SubsysRanBC);

      // End of Outputs for SubSystem: '<S16>/SEND ROB UDP'
    }

    // End of If: '<S16>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' 

    // If: '<S20>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   DataStoreRead: '<S20>/Data Store Read'
    //   DataStoreRead: '<S20>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhetherorn = -1;
    if ((GNC2026W_DW.WhoAmI == 2.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhetherorn = 0;

      // Outputs for IfAction SubSystem: '<S20>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S450>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M,
        &GNC2026W_B.ChangeBLACKBehavior_i);
      srUpdateBC
        (GNC2026W_DW.ChangeBLACKBehavior_i.ChangeBLACKBehavior_SubsysRanBC);

      // End of Outputs for SubSystem: '<S20>/Change BLACK Behavior'
    }

    // End of If: '<S20>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S20>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   DataStoreRead: '<S20>/Data Store Read'
    //   DataStoreRead: '<S20>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhethero_b = -1;
    if ((GNC2026W_DW.WhoAmI == 3.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhethero_b = 0;

      // Outputs for IfAction SubSystem: '<S20>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S451>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M,
        &GNC2026W_B.ChangeBLUEBehavior_e);
      srUpdateBC
        (GNC2026W_DW.ChangeBLUEBehavior_e.ChangeBLACKBehavior_SubsysRanBC);

      // End of Outputs for SubSystem: '<S20>/Change BLUE Behavior'
    }

    // End of If: '<S20>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S20>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   DataStoreRead: '<S20>/Data Store Read'
    //   DataStoreRead: '<S20>/Data Store Read2'

    GNC2026W_DW.ThisIFblockdetermineswhethero_c = -1;
    if ((GNC2026W_DW.WhoAmI == 1.0) && (GNC2026W_DW.isSim == 0.0)) {
      GNC2026W_DW.ThisIFblockdetermineswhethero_c = 0;

      // Outputs for IfAction SubSystem: '<S20>/Change RED Behavior' incorporates:
      //   ActionPort: '<S452>/Action Port'

      GNC2026W_ChangeBLACKBehavior_i(GNC2026W_M, &GNC2026W_B.ChangeREDBehavior_h);
      srUpdateBC(GNC2026W_DW.ChangeREDBehavior_h.ChangeBLACKBehavior_SubsysRanBC);

      // End of Outputs for SubSystem: '<S20>/Change RED Behavior'
    }

    // End of If: '<S20>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  {
    char_T *sErr;

    // Update for RandomNumber: '<Root>/Gaussian Noise'
    GNC2026W_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&GNC2026W_DW.RandSeed) *
      GNC2026W_P.GaussianNoise_StdDev + GNC2026W_P.GaussianNoise_Mean;

    // Update for S-Function (sdspToNetwork): '<S19>/UDP Send' incorporates:
    //   SignalConversion generated from: '<S19>/UDP Send'

    sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&GNC2026W_DW.UDPSend_NetworkLib[0U],
                      &GNC2026W_B.TmpSignalConversionAtUDPSendInp[0U], 10);
    if (*sErr != 0) {
      rtmSetErrorStatus(GNC2026W_M, sErr);
      rtmSetStopRequested(GNC2026W_M, 1);
    }

    // End of Update for S-Function (sdspToNetwork): '<S19>/UDP Send'

    // Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    if (GNC2026W_DW.Ifperforminganexperimentgrabthe == 0) {
      // Update for IfAction SubSystem: '<S10>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S248>/Action Port'

      // Update for Delay: '<S261>/Delay2'
      GNC2026W_DW.Delay2_DSTATE = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S261>/Delay1'
      GNC2026W_DW.Delay1_DSTATE = GNC2026W_B.ConvertBLAXfrommmtom;

      // Update for Enabled SubSystem: '<S264>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_g,
        &GNC2026W_DW.EnabledSubsystem_g);

      // End of Update for SubSystem: '<S264>/Enabled Subsystem'

      // Update for Delay: '<S263>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_b[0] = GNC2026W_B.dy_p[0];
      GNC2026W_DW.Delay1_DSTATE_b[1] = GNC2026W_B.dy_p[1];
      GNC2026W_DW.Delay1_DSTATE_b[2] = GNC2026W_B.dy_p[2];

      // Update for Enabled SubSystem: '<S263>/Enabled Subsystem'
      GNC20_EnabledSubsystem_d_Update(&GNC2026W_B.EnabledSubsystem_it,
        &GNC2026W_DW.EnabledSubsystem_it);

      // End of Update for SubSystem: '<S263>/Enabled Subsystem'

      // Update for Delay: '<S276>/Delay'
      GNC2026W_DW.Delay_DSTATE_h = GNC2026W_B.u_next;

      // Update for Delay: '<S276>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_f = GNC2026W_B.y_o;

      // Update for Delay: '<S282>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_l = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S282>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_l = GNC2026W_B.ConvertBLUXfrommmtom;

      // Update for Enabled SubSystem: '<S284>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_d,
        &GNC2026W_DW.EnabledSubsystem_d);

      // End of Update for SubSystem: '<S284>/Enabled Subsystem'

      // Update for Delay: '<S283>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_lv[0] = GNC2026W_B.dy_c[0];
      GNC2026W_DW.Delay1_DSTATE_lv[1] = GNC2026W_B.dy_c[1];
      GNC2026W_DW.Delay1_DSTATE_lv[2] = GNC2026W_B.dy_c[2];

      // Update for Enabled SubSystem: '<S283>/Enabled Subsystem'
      GNC20_EnabledSubsystem_d_Update(&GNC2026W_B.EnabledSubsystem_lw,
        &GNC2026W_DW.EnabledSubsystem_lw);

      // End of Update for SubSystem: '<S283>/Enabled Subsystem'

      // Update for Delay: '<S292>/Delay2'
      GNC2026W_DW.Delay2_DSTATE_l0 = GNC2026W_B.ReceivePhaseSpaceData_o1[0];

      // Update for Delay: '<S292>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_ld = GNC2026W_B.ConvertREDXfrommmtom;

      // Update for Enabled SubSystem: '<S294>/Enabled Subsystem'
      GNC20_EnabledSubsystem_a_Update(&GNC2026W_B.EnabledSubsystem_l1,
        &GNC2026W_DW.EnabledSubsystem_l1);

      // End of Update for SubSystem: '<S294>/Enabled Subsystem'

      // Update for Delay: '<S293>/Delay1'
      GNC2026W_DW.Delay1_DSTATE_cq[0] = GNC2026W_B.dy[0];
      GNC2026W_DW.Delay1_DSTATE_cq[1] = GNC2026W_B.dy[1];
      GNC2026W_DW.Delay1_DSTATE_cq[2] = GNC2026W_B.dy[2];

      // Update for Enabled SubSystem: '<S293>/Enabled Subsystem'
      GNC20_EnabledSubsystem_d_Update(&GNC2026W_B.EnabledSubsystem_kh,
        &GNC2026W_DW.EnabledSubsystem_kh);

      // End of Update for SubSystem: '<S293>/Enabled Subsystem'

      // Update for If: '<S257>/This IF block determines whether or not to run the BLACK sim//exp' 
      if (GNC2026W_DW.ThisIFblockdetermineswhether_ch == 0) {
        // Update for IfAction SubSystem: '<S257>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S258>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeBLACKBehavior_e);

        // End of Update for SubSystem: '<S257>/Change BLACK Behavior'
      }

      // End of Update for If: '<S257>/This IF block determines whether or not to run the BLACK sim//exp' 

      // Update for If: '<S257>/This IF block determines whether or not to run the BLUE sim//exp' 
      if (GNC2026W_DW.ThisIFblockdetermineswhether_cs == 0) {
        // Update for IfAction SubSystem: '<S257>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S259>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeBLUEBehavior_f);

        // End of Update for SubSystem: '<S257>/Change BLUE Behavior'
      }

      // End of Update for If: '<S257>/This IF block determines whether or not to run the BLUE sim//exp' 

      // Update for If: '<S257>/This IF block determines whether or not to run the RED sim//exp ' 
      if (GNC2026W_DW.ThisIFblockdetermineswhethero_d == 0) {
        // Update for IfAction SubSystem: '<S257>/Change RED Behavior' incorporates:
        //   ActionPort: '<S260>/Action Port'

        GN_ChangeBLACKBehavior_p_Update(GNC2026W_M, GNC2026W_B.In1_g20,
          &GNC2026W_DW.ChangeREDBehavior_d);

        // End of Update for SubSystem: '<S257>/Change RED Behavior'
      }

      // End of Update for If: '<S257>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Update for SubSystem: '<S10>/Use Hardware to Obtain States'
    }

    // End of Update for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // Update for If: '<S20>/This IF block determines whether or not to run the BLACK sim//exp' 
    if (GNC2026W_DW.ThisIFblockdetermineswhetherorn == 0) {
      // Update for IfAction SubSystem: '<S20>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S450>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeBLACKBehavior_i, &GNC2026W_DW.ChangeBLACKBehavior_i);

      // End of Update for SubSystem: '<S20>/Change BLACK Behavior'
    }

    // End of Update for If: '<S20>/This IF block determines whether or not to run the BLACK sim//exp' 

    // Update for If: '<S20>/This IF block determines whether or not to run the BLUE sim//exp' 
    if (GNC2026W_DW.ThisIFblockdetermineswhethero_b == 0) {
      // Update for IfAction SubSystem: '<S20>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S451>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeBLUEBehavior_e, &GNC2026W_DW.ChangeBLUEBehavior_e);

      // End of Update for SubSystem: '<S20>/Change BLUE Behavior'
    }

    // End of Update for If: '<S20>/This IF block determines whether or not to run the BLUE sim//exp' 

    // Update for If: '<S20>/This IF block determines whether or not to run the RED sim//exp ' 
    if (GNC2026W_DW.ThisIFblockdetermineswhethero_c == 0) {
      // Update for IfAction SubSystem: '<S20>/Change RED Behavior' incorporates:
      //   ActionPort: '<S452>/Action Port'

      GN_ChangeBLACKBehavior_n_Update(GNC2026W_M,
        &GNC2026W_B.ChangeREDBehavior_h, &GNC2026W_DW.ChangeREDBehavior_h);

      // End of Update for SubSystem: '<S20>/Change RED Behavior'
    }

    // End of Update for If: '<S20>/This IF block determines whether or not to run the RED sim//exp ' 
  }

  // External mode
  rtExtModeUploadCheckTrigger(2);

  {                                    // Sample time: [0.0s, 0.0s]
    rtExtModeUpload(0, (real_T)GNC2026W_M->Timing.t[0]);
  }

  {                                    // Sample time: [0.05s, 0.0s]
    rtExtModeUpload(1, (real_T)((GNC2026W_M->Timing.clockTick1) * 0.05));
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.0s, 0.0s]
    if ((rtmGetTFinal(GNC2026W_M)!=-1) &&
        !((rtmGetTFinal(GNC2026W_M)-GNC2026W_M->Timing.t[0]) >
          GNC2026W_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(GNC2026W_M, "Simulation finished");
    }

    if (rtmGetStopRequested(GNC2026W_M)) {
      rtmSetErrorStatus(GNC2026W_M, "Simulation finished");
    }
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
    rtsiSetTPtr(&GNC2026W_M->solverInfo, &rtmGetTPtr(GNC2026W_M));
    rtsiSetStepSizePtr(&GNC2026W_M->solverInfo, &GNC2026W_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&GNC2026W_M->solverInfo, (&rtmGetErrorStatus
      (GNC2026W_M)));
    rtsiSetRTModelPtr(&GNC2026W_M->solverInfo, GNC2026W_M);
  }

  rtsiSetSimTimeStep(&GNC2026W_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&GNC2026W_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&GNC2026W_M->solverInfo, false);
  rtsiSetSolverName(&GNC2026W_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(GNC2026W_M, &GNC2026W_M->Timing.tArray[0]);
  rtmSetTFinal(GNC2026W_M, 285.0);
  GNC2026W_M->Timing.stepSize0 = 0.05;

  // External mode info
  GNC2026W_M->Sizes.checksums[0] = (1976089299U);
  GNC2026W_M->Sizes.checksums[1] = (4280913788U);
  GNC2026W_M->Sizes.checksums[2] = (780036792U);
  GNC2026W_M->Sizes.checksums[3] = (3114255876U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[217];
    GNC2026W_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &GNC2026W_DW.Phase0Synchronization.Phase0Synchronization_SubsysRan;
    systemRan[2] = (sysRanDType *)
      &GNC2026W_DW.Phase1StartFloating.Phase0Synchronization_SubsysRan;
    systemRan[3] = (sysRanDType *)&GNC2026W_DW.Phase2InitialPosition_SubsysRan;
    systemRan[4] = (sysRanDType *)&GNC2026W_DW.SubPhase1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&GNC2026W_DW.SubPhase2_SubsysRanBC;
    systemRan[6] = (sysRanDType *)&GNC2026W_DW.SubPhase2_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &GNC2026W_DW.IfActionSubsystem_a.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &GNC2026W_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &GNC2026W_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &GNC2026W_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &GNC2026W_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &GNC2026W_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[13] = (sysRanDType *)&GNC2026W_DW.SubPhase2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)&GNC2026W_DW.SubPhase3_SubsysRanBC;
    systemRan[15] = (sysRanDType *)&GNC2026W_DW.SubPhase4_SubsysRanBC;
    systemRan[16] = (sysRanDType *)&GNC2026W_DW.Phase3Experiment_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &GNC2026W_DW.Phase4ReturnHome.Phase4ReturnHome_SubsysRanBC;
    systemRan[18] = (sysRanDType *)
      &GNC2026W_DW.Phase5HoldHome.Phase4ReturnHome_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &GNC2026W_DW.Phase6CleanShutdown.Phase0Synchronization_SubsysRan;
    systemRan[20] = (sysRanDType *)&GNC2026W_DW.CustomPPLARM_SubsysRanBC;
    systemRan[21] = (sysRanDType *)&GNC2026W_DW.CustomPPLBLACK_SubsysRanBC;
    systemRan[22] = (sysRanDType *)&GNC2026W_DW.CustomPPLBLUE_SubsysRanBC;
    systemRan[23] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_o;
    systemRan[24] = (sysRanDType *)&GNC2026W_DW.CustomPPLRED_SubsysRanBC;
    systemRan[25] = (sysRanDType *)&GNC2026W_DW.CustomPPLRED_SubsysRanBC;
    systemRan[26] = (sysRanDType *)&GNC2026W_DW.CustomPPLRED_SubsysRanBC;
    systemRan[27] = (sysRanDType *)&GNC2026W_DW.CustomPPLRED_SubsysRanBC;
    systemRan[28] = (sysRanDType *)&GNC2026W_DW.CustomPPLRED_SubsysRanBC;
    systemRan[29] = (sysRanDType *)&GNC2026W_DW.DisablePPLARM_SubsysRanBC;
    systemRan[30] = (sysRanDType *)&GNC2026W_DW.DisablePPLBLACK_SubsysRanBC;
    systemRan[31] = (sysRanDType *)&GNC2026W_DW.DisablePPLBLUE_SubsysRanBC;
    systemRan[32] = (sysRanDType *)&GNC2026W_DW.DisablePPLRED_SubsysRanBC;
    systemRan[33] = (sysRanDType *)
      &GNC2026W_DW.CustomControlARM.DisableThrustersRED_SubsysRanBC;
    systemRan[34] = (sysRanDType *)&GNC2026W_DW.CustomControlRED_SubsysRanBC;
    systemRan[35] = (sysRanDType *)&GNC2026W_DW.CustomControlRED_SubsysRanBC;
    systemRan[36] = (sysRanDType *)&GNC2026W_DW.CustomControlRED_SubsysRanBC;
    systemRan[37] = (sysRanDType *)&GNC2026W_DW.CustomControlRED_SubsysRanBC;
    systemRan[38] = (sysRanDType *)&GNC2026W_DW.CustomControlRED_SubsysRanBC;
    systemRan[39] = (sysRanDType *)&GNC2026W_DW.DefaultLQRControlBLACK_SubsysRa;
    systemRan[40] = (sysRanDType *)&GNC2026W_DW.DefaultLQRControlBLACK_SubsysRa;
    systemRan[41] = (sysRanDType *)&GNC2026W_DW.DefaultLQRControlBLUE_SubsysRan;
    systemRan[42] = (sysRanDType *)&GNC2026W_DW.DefaultLQRControlBLUE_SubsysRan;
    systemRan[43] = (sysRanDType *)&GNC2026W_DW.DefaultLQRControlRED_SubsysRanB;
    systemRan[44] = (sysRanDType *)&GNC2026W_DW.DefaultLQRControlRED_SubsysRanB;
    systemRan[45] = (sysRanDType *)&GNC2026W_DW.PassthroughforExperiment_Subsys;
    systemRan[46] = (sysRanDType *)&GNC2026W_DW.SimulatedPositionController_Sub;
    systemRan[47] = (sysRanDType *)&GNC2026W_DW.DefaultPDARM_SubsysRanBC;
    systemRan[48] = (sysRanDType *)&GNC2026W_DW.DefaultPDControlBLACK_SubsysRan;
    systemRan[49] = (sysRanDType *)&GNC2026W_DW.DefaultPDControlBLACK_SubsysRan;
    systemRan[50] = (sysRanDType *)&GNC2026W_DW.DefaultPDControlBLUE_SubsysRanB;
    systemRan[51] = (sysRanDType *)&GNC2026W_DW.DefaultPDControlBLUE_SubsysRanB;
    systemRan[52] = (sysRanDType *)&GNC2026W_DW.DefaultPDControlRED_SubsysRanBC;
    systemRan[53] = (sysRanDType *)&GNC2026W_DW.DefaultPDControlRED_SubsysRanBC;
    systemRan[54] = (sysRanDType *)&GNC2026W_DW.DisableControlARM_SubsysRanBC;
    systemRan[55] = (sysRanDType *)
      &GNC2026W_DW.DisableThrustersBLACK.DisableThrustersBLACK_SubsysRan;
    systemRan[56] = (sysRanDType *)
      &GNC2026W_DW.DisableThrustersBLUE.DisableThrustersBLACK_SubsysRan;
    systemRan[57] = (sysRanDType *)
      &GNC2026W_DW.DisableThrustersRED.DisableThrustersRED_SubsysRanBC;
    systemRan[58] = (sysRanDType *)
      &GNC2026W_DW.ChangeBLACKBehavior.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[59] = (sysRanDType *)
      &GNC2026W_DW.ChangeBLUEBehavior.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[60] = (sysRanDType *)
      &GNC2026W_DW.ChangeREDBehavior.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[61] = &rtAlwaysEnabled;
    systemRan[62] = &rtAlwaysEnabled;
    systemRan[63] = &rtAlwaysEnabled;
    systemRan[64] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRan_p;
    systemRan[65] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanB_l;
    systemRan[66] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC_m;
    systemRan[67] = &rtAlwaysEnabled;
    systemRan[68] = (sysRanDType *)&GNC2026W_DW.EnablePucks_SubsysRanBC;
    systemRan[69] = (sysRanDType *)&GNC2026W_DW.EnablePucks_SubsysRanBC;
    systemRan[70] = (sysRanDType *)&GNC2026W_DW.ChangeARMBehavior_SubsysRanBC_b;
    systemRan[71] = (sysRanDType *)&GNC2026W_DW.ChangeARMBehavior_SubsysRanBC_b;
    systemRan[72] = (sysRanDType *)&GNC2026W_DW.EKF_SubsysRanBC;
    systemRan[73] = (sysRanDType *)&GNC2026W_DW.EKF_SubsysRanBC;
    systemRan[74] = (sysRanDType *)&GNC2026W_DW.EKF_SubsysRanBC;
    systemRan[75] = (sysRanDType *)&GNC2026W_DW.EKF_SubsysRanBC;
    systemRan[76] = (sysRanDType *)&GNC2026W_DW.MEKF_SubsysRanBC;
    systemRan[77] = (sysRanDType *)&GNC2026W_DW.MEKF_SubsysRanBC;
    systemRan[78] = (sysRanDType *)&GNC2026W_DW.MEKF_SubsysRanBC;
    systemRan[79] = (sysRanDType *)&GNC2026W_DW.ArtificialVISStates_SubsysRanBC;
    systemRan[80] = (sysRanDType *)
      &GNC2026W_DW.ExperimentalVISStates_a.IfActionSubsystem_SubsysRanBC;
    systemRan[81] = (sysRanDType *)
      &GNC2026W_DW.ExperimentalVISStates_a.IfActionSubsystem1_SubsysRanBC;
    systemRan[82] = (sysRanDType *)
      &GNC2026W_DW.ExperimentalVISStates_a.ExperimentalVISStates_SubsysRan;
    systemRan[83] = (sysRanDType *)&GNC2026W_DW.MEKF_SubsysRanBC;
    systemRan[84] = (sysRanDType *)&GNC2026W_DW.UKF_SubsysRanBC;
    systemRan[85] = (sysRanDType *)&GNC2026W_DW.UKF_SubsysRanBC;
    systemRan[86] = (sysRanDType *)&GNC2026W_DW.ArtificialVISStates_SubsysRan_g;
    systemRan[87] = (sysRanDType *)
      &GNC2026W_DW.ExperimentalVISStates.IfActionSubsystem_SubsysRanBC;
    systemRan[88] = (sysRanDType *)
      &GNC2026W_DW.ExperimentalVISStates.IfActionSubsystem1_SubsysRanBC;
    systemRan[89] = (sysRanDType *)
      &GNC2026W_DW.ExperimentalVISStates.ExperimentalVISStates_SubsysRan;
    systemRan[90] = (sysRanDType *)&GNC2026W_DW.UKF_SubsysRanBC;
    systemRan[91] = (sysRanDType *)&GNC2026W_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[92] = (sysRanDType *)&GNC2026W_DW.InitializeUniversalTimeSimulati;
    systemRan[93] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem2_SubsysRanBC;
    systemRan[94] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[95] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[96] = (sysRanDType *)
      &GNC2026W_DW.ChangeBLACKBehavior_e.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[97] = (sysRanDType *)
      &GNC2026W_DW.ChangeBLUEBehavior_f.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[98] = (sysRanDType *)
      &GNC2026W_DW.ChangeREDBehavior_d.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[99] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanB_gf;
    systemRan[100] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[101] = (sysRanDType *)&GNC2026W_DW.ArtificialisValidFlag_SubsysRan;
    systemRan[102] = (sysRanDType *)&GNC2026W_DW.ArtificialisValidFlag_SubsysRan;
    systemRan[103] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[104] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[105] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[106] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[107] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[108] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[109] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_SubsysRanBC;
    systemRan[110] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_SubsysRanBC;
    systemRan[111] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC;
    systemRan[112] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC;
    systemRan[113] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_g;
    systemRan[114] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[115] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_SubsysRanBC;
    systemRan[116] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_SubsysRanBC;
    systemRan[117] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC;
    systemRan[118] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC;
    systemRan[119] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanBC;
    systemRan[120] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[121] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_SubsysRanBC;
    systemRan[122] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_SubsysRanBC;
    systemRan[123] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_SubsysRanBC;
    systemRan[124] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_SubsysRanBC;
    systemRan[125] = (sysRanDType *)&GNC2026W_DW.UseHardwaretoObtainStates_Subsy;
    systemRan[126] = (sysRanDType *)&GNC2026W_DW.Subsystem_SubsysRanBC_d;
    systemRan[127] = (sysRanDType *)&GNC2026W_DW.Subsystem_SubsysRanBC_d;
    systemRan[128] = (sysRanDType *)&GNC2026W_DW.ReadingisValid_SubsysRanBC;
    systemRan[129] = (sysRanDType *)&GNC2026W_DW.CVUDP_SubsysRanBC;
    systemRan[130] = (sysRanDType *)&GNC2026W_DW.ROBUDP_SubsysRanBC;
    systemRan[131] = (sysRanDType *)&GNC2026W_DW.SimulatedFlag_SubsysRanBC;
    systemRan[132] = (sysRanDType *)&GNC2026W_DW.SimulatedFlag_SubsysRanBC;
    systemRan[133] = (sysRanDType *)&GNC2026W_DW.ChangeARMBehavior_SubsysRanBC;
    systemRan[134] = (sysRanDType *)&GNC2026W_DW.ChangeARMBehavior_SubsysRanBC;
    systemRan[135] = (sysRanDType *)&GNC2026W_DW.Subsystem_SubsysRanBC;
    systemRan[136] = (sysRanDType *)&GNC2026W_DW.SENDROBUDP_SubsysRanBC;
    systemRan[137] = (sysRanDType *)&GNC2026W_DW.SENDROBUDP_SubsysRanBC;
    systemRan[138] = (sysRanDType *)&GNC2026W_DW.SENDROBUDP_SubsysRanBC;
    systemRan[139] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_m.EnabledSubsystem_SubsysRanBC;
    systemRan[140] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_m.EnabledSubsystem_SubsysRanBC;
    systemRan[141] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_b.EnabledSubsystem_SubsysRanBC;
    systemRan[142] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_b.EnabledSubsystem_SubsysRanBC;
    systemRan[143] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_c;
    systemRan[144] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[145] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_bo;
    systemRan[146] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_p;
    systemRan[147] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[148] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[149] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[150] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[151] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[152] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[153] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[154] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_k.EnabledSubsystem_SubsysRanBC;
    systemRan[155] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_k.EnabledSubsystem_SubsysRanBC;
    systemRan[156] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_i.EnabledSubsystem_SubsysRanBC;
    systemRan[157] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_i.EnabledSubsystem_SubsysRanBC;
    systemRan[158] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_b;
    systemRan[159] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[160] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_d;
    systemRan[161] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_h;
    systemRan[162] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_l.EnabledSubsystem_SubsysRanBC;
    systemRan[163] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_l.EnabledSubsystem_SubsysRanBC;
    systemRan[164] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_kx.EnabledSubsystem_SubsysRanBC;
    systemRan[165] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_kx.EnabledSubsystem_SubsysRanBC;
    systemRan[166] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_l;
    systemRan[167] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_l;
    systemRan[168] = (sysRanDType *)&GNC2026W_DW.REDARM_SubsysRanBC;
    systemRan[169] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanB_g4;
    systemRan[170] = (sysRanDType *)&GNC2026W_DW.REDARM_SubsysRanBC;
    systemRan[171] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_b;
    systemRan[172] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanB_bb;
    systemRan[173] = (sysRanDType *)&GNC2026W_DW.REDARM_SubsysRanBC;
    systemRan[174] = (sysRanDType *)&GNC2026W_DW.REDARM_SubsysRanBC;
    systemRan[175] = (sysRanDType *)&GNC2026W_DW.REDARM_SubsysRanBC;
    systemRan[176] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC;
    systemRan[177] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC;
    systemRan[178] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_h.EnabledSubsystem_SubsysRanBC;
    systemRan[179] = (sysRanDType *)
      &GNC2026W_DW.EnabledSubsystem_h.EnabledSubsystem_SubsysRanBC;
    systemRan[180] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_p;
    systemRan[181] = (sysRanDType *)&GNC2026W_DW.REDOnly_SubsysRanBC;
    systemRan[182] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_n;
    systemRan[183] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanB_mm;
    systemRan[184] = (sysRanDType *)&GNC2026W_DW.REDOnly_SubsysRanBC;
    systemRan[185] = (sysRanDType *)&GNC2026W_DW.REDOnly_SubsysRanBC;
    systemRan[186] = (sysRanDType *)&GNC2026W_DW.SimulatePlantDynamics_SubsysRan;
    systemRan[187] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_m;
    systemRan[188] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_m;
    systemRan[189] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[190] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[191] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[192] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[193] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[194] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[195] = (sysRanDType *)&GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[196] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC_c;
    systemRan[197] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_b;
    systemRan[198] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[199] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[200] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[201] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[202] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[203] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[204] = (sysRanDType *)&GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[205] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[206] = (sysRanDType *)&GNC2026W_DW.EnabledSubsystem1_SubsysRanBC;
    systemRan[207] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[208] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[209] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[210] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[211] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[212] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[213] = (sysRanDType *)&GNC2026W_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[214] = (sysRanDType *)
      &GNC2026W_DW.ChangeBLACKBehavior_i.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[215] = (sysRanDType *)
      &GNC2026W_DW.ChangeBLUEBehavior_e.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[216] = (sysRanDType *)
      &GNC2026W_DW.ChangeREDBehavior_h.ChangeBLACKBehavior_SubsysRanBC;
    rteiSetModelMappingInfoPtr(GNC2026W_M->extModeInfo,
      &GNC2026W_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(GNC2026W_M->extModeInfo, GNC2026W_M->Sizes.checksums);
    rteiSetTPtr(GNC2026W_M->extModeInfo, rtmGetTPtr(GNC2026W_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    GNC2026W_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 32;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    real_T sampleTime;
    real_T sampleTime_0;
    real_T sampleTime_1;
    real_T tmp;
    int32_T i;
    int32_T t;
    uint32_T seed;
    char_T *sErr;
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

    static const real_T c[6] = { 1.0, 1.0, 0.05, 1.0, 1.0, 0.05 };

    static const real_T b[6] = { 0.5, 0.5, 1.0, 1.0, 0.5, 0.5 };

    static const real_T b_0[6] = { 1.0, 1.0, 0.05, 0.05, 1.0, 0.05 };

    // Start for S-Function (sdspToNetwork): '<S19>/UDP Send'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S19>/UDP Send'

    // Start for If: '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    GNC2026W_DW.Ifperforminganexperimentgrabthe = -1;

    // Start for If: '<S20>/This IF block determines whether or not to run the BLACK sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhetherorn = -1;

    // Start for If: '<S20>/This IF block determines whether or not to run the BLUE sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_b = -1;

    // Start for If: '<S20>/This IF block determines whether or not to run the RED sim//exp ' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_c = -1;

    // Start for DataStoreMemory: '<Root>/Data Store Memory'
    GNC2026W_DW.L0 = GNC2026W_P.DataStoreMemory_InitialValue;

    // Start for DataStoreMemory: '<Root>/Data Store Memory2'
    GNC2026W_DW.LOS_Angle = GNC2026W_P.DataStoreMemory2_InitialValue;

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

    // Start for DataStoreMemory: '<Root>/RED_Tz2'
    GNC2026W_DW.BLUE_Path_Planner_Selection = GNC2026W_P.RED_Tz2_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz20'
    GNC2026W_DW.RED_Control_Law_Enabler = GNC2026W_P.RED_Tz20_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz25'
    GNC2026W_DW.RED_Path_Planner_Selection = GNC2026W_P.RED_Tz25_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz3'
    strncpy(&GNC2026W_DW.RED_Logger[0], &GNC2026W_P.RED_Tz3_InitialValue[0],
            255U);
    GNC2026W_DW.RED_Logger[255] = '\x00';

    // Start for DataStoreMemory: '<Root>/RED_Tz37'
    GNC2026W_DW.ARM_Path_Planner_Selection = GNC2026W_P.RED_Tz37_InitialValue;

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

    // Start for DataStoreMemory: '<Root>/RED_Tz9'
    GNC2026W_DW.BLACK_Path_Planner_Selection = GNC2026W_P.RED_Tz9_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time'
    GNC2026W_DW.Univ_Time = GNC2026W_P.Universal_Time_InitialValue;

    // Start for DataStoreMemory: '<Root>/Data Store Memory1'
    memcpy(&GNC2026W_DW.RED_desired[0],
           &GNC2026W_P.DataStoreMemory1_InitialValue[0], 9U * sizeof(real_T));

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
    // InitializeConditions for Delay: '<S143>/Delay'
    GNC2026W_DW.Delay_DSTATE_h0 = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S143>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lo = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for Enabled SubSystem: '<S138>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S142>/In1' incorporates:
    //   Outport: '<S142>/Path'

    GNC2026W_B.In1_g20asdtg[0] = GNC2026W_P.Path_Y0;
    GNC2026W_B.In1_g20asdtg[1] = GNC2026W_P.Path_Y0;
    GNC2026W_B.In1_g20asdtg[2] = GNC2026W_P.Path_Y0;

    // End of SystemInitialize for SubSystem: '<S138>/Enabled Subsystem'

    // SystemInitialize for MATLAB Function: '<S143>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_n);

    // End of SystemInitialize for SubSystem: '<S2>/Custom PPL (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S193>/UD'
    //
    //  Block description for '<S193>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_eh = GNC2026W_P.DiscreteDerivative_ICPrevScal_p;

    // InitializeConditions for UnitDelay: '<S194>/UD'
    //
    //  Block description for '<S194>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hv = GNC2026W_P.DiscreteDerivative1_ICPrevSca_m;

    // InitializeConditions for UnitDelay: '<S195>/UD'
    //
    //  Block description for '<S195>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_kv = GNC2026W_P.DiscreteDerivative2_ICPrevSca_a;

    // SystemInitialize for MATLAB Function: '<S192>/MATLAB Function'
    GNC2026W_MATLABFunction_i_Init(&GNC2026W_DW.sf_MATLABFunction_de);

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLACK)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLACK)' 
    // InitializeConditions for UnitDelay: '<S170>/UD'
    //
    //  Block description for '<S170>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_j = GNC2026W_P.DiscreteDerivative_ICPrevScal_d;

    // InitializeConditions for UnitDelay: '<S171>/UD'
    //
    //  Block description for '<S171>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_c = GNC2026W_P.DiscreteDerivative1_ICPrevSca_i;

    // InitializeConditions for UnitDelay: '<S172>/UD'
    //
    //  Block description for '<S172>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_dk = GNC2026W_P.DiscreteDerivative2_ICPrevSc_oo;

    // SystemInitialize for MATLAB Function: '<S169>/MATLAB Function'
    GNC2026W_MATLABFunction_i_Init(&GNC2026W_DW.sf_MATLABFunction_c);

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLACK)' 

    // SystemInitialize for Merge: '<S3>/Merge1'
    GNC2026W_B.Merge1[0] = GNC2026W_P.Merge1_InitialOutput;
    GNC2026W_B.Merge1[1] = GNC2026W_P.Merge1_InitialOutput;
    GNC2026W_B.Merge1[2] = GNC2026W_P.Merge1_InitialOutput;

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S198>/UD'
    //
    //  Block description for '<S198>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_o = GNC2026W_P.DiscreteDerivative_ICPrevSca_pf;

    // InitializeConditions for UnitDelay: '<S199>/UD'
    //
    //  Block description for '<S199>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_n = GNC2026W_P.DiscreteDerivative1_ICPrevSca_l;

    // InitializeConditions for UnitDelay: '<S200>/UD'
    //
    //  Block description for '<S200>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hu = GNC2026W_P.DiscreteDerivative2_ICPrevSc_on;

    // SystemInitialize for MATLAB Function: '<S197>/MATLAB Function'
    GNC2026W_MATLABFunction_i_Init(&GNC2026W_DW.sf_MATLABFunction_cj);

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (BLUE)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (BLUE)' 
    // InitializeConditions for UnitDelay: '<S175>/UD'
    //
    //  Block description for '<S175>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_ld = GNC2026W_P.DiscreteDerivative_ICPrevScal_n;

    // InitializeConditions for UnitDelay: '<S176>/UD'
    //
    //  Block description for '<S176>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_k = GNC2026W_P.DiscreteDerivative1_ICPrevSca_f;

    // InitializeConditions for UnitDelay: '<S177>/UD'
    //
    //  Block description for '<S177>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_h = GNC2026W_P.DiscreteDerivative2_ICPrevSca_g;

    // SystemInitialize for MATLAB Function: '<S174>/MATLAB Function'
    GNC2026W_MATLABFunction_i_Init(&GNC2026W_DW.sf_MATLABFunction_k);

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (BLUE)'

    // SystemInitialize for Merge: '<S3>/Merge2'
    GNC2026W_B.Merge2[0] = GNC2026W_P.Merge2_InitialOutput;
    GNC2026W_B.Merge2[1] = GNC2026W_P.Merge2_InitialOutput;
    GNC2026W_B.Merge2[2] = GNC2026W_P.Merge2_InitialOutput;

    // SystemInitialize for IfAction SubSystem: '<S154>/Simulated Position Controller' 
    // InitializeConditions for UnitDelay: '<S189>/UD'
    //
    //  Block description for '<S189>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_d = GNC2026W_P.DiscreteDerivative1_ICPrevSca_j;

    // InitializeConditions for UnitDelay: '<S190>/UD'
    //
    //  Block description for '<S190>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_el = GNC2026W_P.DiscreteDerivative1_ICPrevSca_a;

    // InitializeConditions for UnitDelay: '<S191>/UD'
    //
    //  Block description for '<S191>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_aa = GNC2026W_P.DiscreteDerivative1_ICPrevSca_k;

    // End of SystemInitialize for SubSystem: '<S154>/Simulated Position Controller' 

    // SystemInitialize for Merge: '<S154>/Merge3'
    GNC2026W_B.Merge3 = GNC2026W_P.Merge3_InitialOutput;

    // SystemInitialize for Merge: '<S154>/Merge4'
    GNC2026W_B.Merge4 = GNC2026W_P.Merge4_InitialOutput;

    // SystemInitialize for Merge: '<S154>/Merge5'
    GNC2026W_B.Merge5 = GNC2026W_P.Merge5_InitialOutput;

    // End of SystemInitialize for SubSystem: '<S3>/Default PD (ARM)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default PD Control (RED)'
    // InitializeConditions for UnitDelay: '<S203>/UD'
    //
    //  Block description for '<S203>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_eg = GNC2026W_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for UnitDelay: '<S204>/UD'
    //
    //  Block description for '<S204>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_cd = GNC2026W_P.DiscreteDerivative1_ICPrevScale;

    // InitializeConditions for UnitDelay: '<S205>/UD'
    //
    //  Block description for '<S205>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_hd = GNC2026W_P.DiscreteDerivative2_ICPrevScale;

    // SystemInitialize for MATLAB Function: '<S202>/MATLAB Function'
    GNC2026W_MATLABFunction_i_Init(&GNC2026W_DW.sf_MATLABFunction_n2);

    // End of SystemInitialize for SubSystem: '<S3>/Default PD Control (RED)'

    // SystemInitialize for IfAction SubSystem: '<S3>/Default LQR Control (RED)' 
    // InitializeConditions for UnitDelay: '<S180>/UD'
    //
    //  Block description for '<S180>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_aq = GNC2026W_P.DiscreteDerivative_ICPrevScal_i;

    // InitializeConditions for UnitDelay: '<S181>/UD'
    //
    //  Block description for '<S181>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_pr = GNC2026W_P.DiscreteDerivative1_ICPrevSca_e;

    // InitializeConditions for UnitDelay: '<S182>/UD'
    //
    //  Block description for '<S182>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_prk = GNC2026W_P.DiscreteDerivative2_ICPrevSca_o;

    // SystemInitialize for MATLAB Function: '<S179>/MATLAB Function'
    GNC2026W_MATLABFunction_i_Init(&GNC2026W_DW.sf_MATLABFunction_h);

    // End of SystemInitialize for SubSystem: '<S3>/Default LQR Control (RED)'

    // InitializeConditions for Delay: '<S166>/Delay'
    GNC2026W_DW.Delay_DSTATE_lx = GNC2026W_P.init_states_RED[2];

    // InitializeConditions for Delay: '<S166>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ba = GNC2026W_P.init_states_RED[2];

    // InitializeConditions for Delay: '<S165>/Delay'
    GNC2026W_DW.Delay_DSTATE_c5 = GNC2026W_P.init_states_RED[2];

    // InitializeConditions for Delay: '<S165>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ag = GNC2026W_P.init_states_RED[2];

    // SystemInitialize for MATLAB Function: '<S166>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_i);

    // SystemInitialize for MATLAB Function: '<S165>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_d);

    // End of SystemInitialize for SubSystem: '<S3>/Custom Control (RED)'

    // SystemInitialize for Merge: '<S3>/Merge'
    GNC2026W_B.Merge[0] = GNC2026W_P.Merge_InitialOutput_e;
    GNC2026W_B.Merge[1] = GNC2026W_P.Merge_InitialOutput_e;
    GNC2026W_B.Merge[2] = GNC2026W_P.Merge_InitialOutput_e;

    // SystemInitialize for IfAction SubSystem: '<S19>/Change RED Behavior'
    // InitializeConditions for Delay: '<S440>/Delay'
    GNC2026W_DW.Delay_DSTATE = GNC2026W_P.Delay_InitialCondition_p;

    // SystemInitialize for MATLAB Function: '<S444>/Create Rotation Matrix'
    GNC20_CreateRotationMatrix_Init(&GNC2026W_DW.sf_CreateRotationMatrix_i);

    // SystemInitialize for MATLAB Function: '<S439>/Create Rotation Matrix'
    GNC_CreateRotationMatrix_c_Init(&GNC2026W_DW.sf_CreateRotationMatrix_e);

    // SystemInitialize for MATLAB Function: '<S438>/MATLAB Function5'
    GNC2026W_MATLABFunction5_Init(&GNC2026W_DW.sf_MATLABFunction5_e);

    // SystemInitialize for MATLAB Function: '<S438>/MATLAB Function8'
    GNC2026W_MATLABFunction1_Init(&GNC2026W_DW.sf_MATLABFunction8);

    // SystemInitialize for Enabled SubSystem: '<S440>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S445>/In1' incorporates:
    //   Outport: '<S445>/Out1'

    GNC2026W_B.In1 = GNC2026W_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S440>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S440>/Enabled Subsystem1'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for SignalConversion generated from: '<S446>/ThrustPer_Final' incorporates:
      //   Outport: '<S446>/Out1'

      GNC2026W_B.ThrustPer_Final_h[i] = GNC2026W_P.Out1_Y0_d;
    }

    // End of SystemInitialize for SubSystem: '<S440>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1_pn);

    // SystemInitialize for Outport: '<S413>/RED DC'
    for (i = 0; i < 8; i++) {
      GNC2026W_B.duty_cycles[i] = GNC2026W_P.REDDC_Y0;
    }

    // End of SystemInitialize for Outport: '<S413>/RED DC'
    // End of SystemInitialize for SubSystem: '<S19>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S19>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S416>/Delay'
    GNC2026W_DW.Delay_DSTATE_kz = GNC2026W_P.Delay_InitialCondition_i;

    // SystemInitialize for MATLAB Function: '<S420>/Create Rotation Matrix'
    GNC20_CreateRotationMatrix_Init(&GNC2026W_DW.sf_CreateRotationMatrix);

    // SystemInitialize for MATLAB Function: '<S415>/Create Rotation Matrix'
    GNC_CreateRotationMatrix_c_Init(&GNC2026W_DW.sf_CreateRotationMatrix_a);

    // SystemInitialize for MATLAB Function: '<S414>/MATLAB Function5'
    GNC2026W_MATLABFunction5_Init(&GNC2026W_DW.sf_MATLABFunction5);

    // SystemInitialize for MATLAB Function: '<S414>/MATLAB Function1'
    GNC2026W_MATLABFunction1_Init(&GNC2026W_DW.sf_MATLABFunction1_l);

    // SystemInitialize for Enabled SubSystem: '<S416>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S421>/In1' incorporates:
    //   Outport: '<S421>/Out1'

    GNC2026W_B.In1_g2 = GNC2026W_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S416>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S416>/Enabled Subsystem1'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for SignalConversion generated from: '<S422>/ThrustPer_Final' incorporates:
      //   Outport: '<S422>/Out1'

      GNC2026W_B.ThrustPer_Final_h5j[i] = GNC2026W_P.Out1_Y0_jx;
    }

    // End of SystemInitialize for SubSystem: '<S416>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1);

    // SystemInitialize for Outport: '<S411>/BLACK DC'
    for (i = 0; i < 8; i++) {
      GNC2026W_B.duty_cycles_m[i] = GNC2026W_P.BLACKDC_Y0;
    }

    // End of SystemInitialize for Outport: '<S411>/BLACK DC'
    // End of SystemInitialize for SubSystem: '<S19>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S19>/Change BLUE Behavior'
    // InitializeConditions for Delay: '<S428>/Delay'
    GNC2026W_DW.Delay_DSTATE_k = GNC2026W_P.Delay_InitialCondition_n;

    // SystemInitialize for MATLAB Function: '<S432>/Create Rotation Matrix'
    GNC20_CreateRotationMatrix_Init(&GNC2026W_DW.sf_CreateRotationMatrix_c);

    // SystemInitialize for MATLAB Function: '<S427>/Create Rotation Matrix'
    GNC_CreateRotationMatrix_c_Init(&GNC2026W_DW.sf_CreateRotationMatrix_n);

    // SystemInitialize for MATLAB Function: '<S426>/MATLAB Function5'
    GNC2026W_MATLABFunction5_Init(&GNC2026W_DW.sf_MATLABFunction5_i);

    // SystemInitialize for MATLAB Function: '<S426>/MATLAB Function1'
    GNC2026W_MATLABFunction1_Init(&GNC2026W_DW.sf_MATLABFunction1_i);

    // SystemInitialize for Enabled SubSystem: '<S428>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S433>/In1' incorporates:
    //   Outport: '<S433>/Out1'

    GNC2026W_B.In1_g = GNC2026W_P.Out1_Y0_nw;

    // End of SystemInitialize for SubSystem: '<S428>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S428>/Enabled Subsystem1'
    for (i = 0; i < 8; i++) {
      // SystemInitialize for SignalConversion generated from: '<S434>/ThrustPer_Final' incorporates:
      //   Outport: '<S434>/Out1'

      GNC2026W_B.ThrustPer_Final_h5[i] = GNC2026W_P.Out1_Y0_js;
    }

    // End of SystemInitialize for SubSystem: '<S428>/Enabled Subsystem1'
    GNC2026W_Pseudoinverse1_Init(&GNC2026W_DW.Pseudoinverse1_p);

    // SystemInitialize for Outport: '<S412>/BLUE DC'
    for (i = 0; i < 8; i++) {
      GNC2026W_B.duty_cycles_j[i] = GNC2026W_P.BLUEDC_Y0;
    }

    // End of SystemInitialize for Outport: '<S412>/BLUE DC'
    // End of SystemInitialize for SubSystem: '<S19>/Change BLUE Behavior'
    // InitializeConditions for RandomNumber: '<S312>/Add Noise'
    tmp = floor(GNC2026W_P.AddNoise_Seed_c);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    seed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>(static_cast<
      uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    i = static_cast<int32_T>(seed >> 16U);
    t = static_cast<int32_T>(seed & 32768U);
    GNC2026W_DW.RandSeed_a = ((((seed - (static_cast<uint32_T>(i) << 16U)) +
      static_cast<uint32_T>(t)) << 16U) + static_cast<uint32_T>(t)) +
      static_cast<uint32_T>(i);
    if (GNC2026W_DW.RandSeed_a < 1U) {
      GNC2026W_DW.RandSeed_a = 1144108930U;
    } else if (GNC2026W_DW.RandSeed_a > 2147483646U) {
      GNC2026W_DW.RandSeed_a = 2147483646U;
    }

    GNC2026W_DW.NextOutput_f = rt_nrand_Upu32_Yd_f_pw_snf
      (&GNC2026W_DW.RandSeed_a) * GNC2026W_P.AddNoise_StdDev_l +
      GNC2026W_P.AddNoise_Mean_i;

    // End of InitializeConditions for RandomNumber: '<S312>/Add Noise'

    // InitializeConditions for Delay: '<S317>/Delay'
    GNC2026W_DW.Delay_DSTATE_f = GNC2026W_P.Delay_InitialCondition_o;

    // InitializeConditions for Delay: '<S330>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_i = GNC2026W_P.Delay2_InitialCondition_h;

    // InitializeConditions for Delay: '<S330>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_h = GNC2026W_P.Delay1_InitialCondition_k;

    // InitializeConditions for DiscreteIntegrator: '<S318>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTATE[0] =
      GNC2026W_P.AccelerationtoVelocity_IC_a;

    // InitializeConditions for DiscreteIntegrator: '<S318>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE[0] = GNC2026W_P.drop_states_BLACK[0];

    // InitializeConditions for Delay: '<S321>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_p[0] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S320>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_k[0] = GNC2026W_P.Delay1_InitialCondition_hf;

    // InitializeConditions for UnitDelay: '<S327>/UD'
    //
    //  Block description for '<S327>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE[0] = GNC2026W_P.DiscreteDerivative_ICPrevScal_k;

    // InitializeConditions for DiscreteIntegrator: '<S318>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTATE[1] =
      GNC2026W_P.AccelerationtoVelocity_IC_a;

    // InitializeConditions for DiscreteIntegrator: '<S318>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE[1] = GNC2026W_P.drop_states_BLACK[1];

    // InitializeConditions for Delay: '<S321>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_p[1] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S320>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_k[1] = GNC2026W_P.Delay1_InitialCondition_hf;

    // InitializeConditions for UnitDelay: '<S327>/UD'
    //
    //  Block description for '<S327>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE[1] = GNC2026W_P.DiscreteDerivative_ICPrevScal_k;

    // InitializeConditions for DiscreteIntegrator: '<S318>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTATE[2] =
      GNC2026W_P.AccelerationtoVelocity_IC_a;

    // InitializeConditions for DiscreteIntegrator: '<S318>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE[2] = GNC2026W_P.drop_states_BLACK[2];

    // InitializeConditions for Delay: '<S321>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_p[2] = GNC2026W_P.Delay1_InitialCondition_j;

    // InitializeConditions for Delay: '<S320>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_k[2] = GNC2026W_P.Delay1_InitialCondition_hf;

    // InitializeConditions for UnitDelay: '<S327>/UD'
    //
    //  Block description for '<S327>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE[2] = GNC2026W_P.DiscreteDerivative_ICPrevScal_k;

    // InitializeConditions for Delay: '<S341>/Delay'
    GNC2026W_DW.Delay_DSTATE_p = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S341>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_pv = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for RandomNumber: '<S313>/Add Noise'
    tmp = floor(GNC2026W_P.AddNoise_Seed_k);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    seed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    i = static_cast<int32_T>(seed >> 16U);
    t = static_cast<int32_T>(seed & 32768U);
    GNC2026W_DW.RandSeed_o = ((((seed - (static_cast<uint32_T>(i) << 16U)) +
      static_cast<uint32_T>(t)) << 16U) + static_cast<uint32_T>(t)) +
      static_cast<uint32_T>(i);
    if (GNC2026W_DW.RandSeed_o < 1U) {
      GNC2026W_DW.RandSeed_o = 1144108930U;
    } else if (GNC2026W_DW.RandSeed_o > 2147483646U) {
      GNC2026W_DW.RandSeed_o = 2147483646U;
    }

    GNC2026W_DW.NextOutput_m = rt_nrand_Upu32_Yd_f_pw_snf
      (&GNC2026W_DW.RandSeed_o) * GNC2026W_P.AddNoise_StdDev_j +
      GNC2026W_P.AddNoise_Mean_j;

    // End of InitializeConditions for RandomNumber: '<S313>/Add Noise'

    // InitializeConditions for Delay: '<S346>/Delay'
    GNC2026W_DW.Delay_DSTATE_l = GNC2026W_P.Delay_InitialCondition_d;

    // InitializeConditions for Delay: '<S358>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_hf = GNC2026W_P.Delay2_InitialCondition_j;

    // InitializeConditions for Delay: '<S358>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_dx = GNC2026W_P.Delay1_InitialCondition_o;

    // SystemInitialize for Enabled SubSystem: '<S317>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S331>/In1' incorporates:
    //   Outport: '<S331>/Out1'

    GNC2026W_B.In1_g20asdt = GNC2026W_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S317>/Enabled Subsystem'

    // InitializeConditions for DiscreteIntegrator: '<S343>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[0] =
      GNC2026W_P.AccelerationtoVelocity_IC_e;

    // InitializeConditions for DiscreteIntegrator: '<S343>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE_f[0] = GNC2026W_P.drop_states_BLUE[0];

    // InitializeConditions for Delay: '<S349>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_hq[0] = GNC2026W_P.Delay1_InitialCondition_hw;

    // InitializeConditions for Delay: '<S348>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_di[0] = GNC2026W_P.Delay1_InitialCondition_o4;

    // InitializeConditions for UnitDelay: '<S355>/UD'
    //
    //  Block description for '<S355>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_f[0] = GNC2026W_P.DiscreteDerivative_ICPrevScal_a;

    // SystemInitialize for Enabled SubSystem: '<S317>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S332>/ThrustPer_Final' incorporates:
    //   Outport: '<S332>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jzayd[0] = GNC2026W_P.Out1_Y0_l;

    // End of SystemInitialize for SubSystem: '<S317>/Enabled Subsystem1'

    // InitializeConditions for DiscreteIntegrator: '<S343>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[1] =
      GNC2026W_P.AccelerationtoVelocity_IC_e;

    // InitializeConditions for DiscreteIntegrator: '<S343>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE_f[1] = GNC2026W_P.drop_states_BLUE[1];

    // InitializeConditions for Delay: '<S349>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_hq[1] = GNC2026W_P.Delay1_InitialCondition_hw;

    // InitializeConditions for Delay: '<S348>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_di[1] = GNC2026W_P.Delay1_InitialCondition_o4;

    // InitializeConditions for UnitDelay: '<S355>/UD'
    //
    //  Block description for '<S355>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_f[1] = GNC2026W_P.DiscreteDerivative_ICPrevScal_a;

    // SystemInitialize for Enabled SubSystem: '<S317>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S332>/ThrustPer_Final' incorporates:
    //   Outport: '<S332>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jzayd[1] = GNC2026W_P.Out1_Y0_l;

    // End of SystemInitialize for SubSystem: '<S317>/Enabled Subsystem1'

    // InitializeConditions for DiscreteIntegrator: '<S343>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTATE_g[2] =
      GNC2026W_P.AccelerationtoVelocity_IC_e;

    // InitializeConditions for DiscreteIntegrator: '<S343>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE_f[2] = GNC2026W_P.drop_states_BLUE[2];

    // InitializeConditions for Delay: '<S349>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_hq[2] = GNC2026W_P.Delay1_InitialCondition_hw;

    // InitializeConditions for Delay: '<S348>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_di[2] = GNC2026W_P.Delay1_InitialCondition_o4;

    // InitializeConditions for UnitDelay: '<S355>/UD'
    //
    //  Block description for '<S355>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_f[2] = GNC2026W_P.DiscreteDerivative_ICPrevScal_a;

    // SystemInitialize for Enabled SubSystem: '<S317>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S332>/ThrustPer_Final' incorporates:
    //   Outport: '<S332>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jzayd[2] = GNC2026W_P.Out1_Y0_l;

    // End of SystemInitialize for SubSystem: '<S317>/Enabled Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S330>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S333>/y2-y1' incorporates:
    //   Outport: '<S333>/dy(t)//dt'

    GNC2026W_B.y2y1_ob4jq5 = GNC2026W_P.dytdt_Y0;

    // End of SystemInitialize for SubSystem: '<S330>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S330>/MATLAB Function'
    GNC2026W_MATLABFunction_p_Init(&GNC2026W_DW.sf_MATLABFunction_o);

    // SystemInitialize for Enabled SubSystem: '<S321>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_i_Init(GNC2026W_B.dy_cg,
      &GNC2026W_DW.EnabledSubsystem_b, &GNC2026W_P.EnabledSubsystem_b);

    // End of SystemInitialize for SubSystem: '<S321>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S320>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_pi,
      &GNC2026W_DW.EnabledSubsystem_m, &GNC2026W_P.EnabledSubsystem_m);

    // End of SystemInitialize for SubSystem: '<S320>/Enabled Subsystem'

    // SystemInitialize for MATLAB Function: '<S341>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_l2);

    // SystemInitialize for MATLAB Function: '<S319>/CV Noise'
    memcpy(&GNC2026W_DW.state_kg[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.method_b = 7U;
    GNC2026W_DW.state_e = 1144108930U;
    GNC2026W_DW.state_a[0] = 362436069U;
    GNC2026W_DW.state_a[1] = 521288629U;

    // SystemInitialize for Enabled SubSystem: '<S346>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S359>/In1' incorporates:
    //   Outport: '<S359>/Out1'

    GNC2026W_B.In1_g20asd = GNC2026W_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S346>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S346>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S360>/ThrustPer_Final' incorporates:
    //   Outport: '<S360>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jzay[0] = GNC2026W_P.Out1_Y0_o;
    GNC2026W_B.ThrustPer_Final_h5jzay[1] = GNC2026W_P.Out1_Y0_o;
    GNC2026W_B.ThrustPer_Final_h5jzay[2] = GNC2026W_P.Out1_Y0_o;

    // End of SystemInitialize for SubSystem: '<S346>/Enabled Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S358>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S361>/y2-y1' incorporates:
    //   Outport: '<S361>/dy(t)//dt'

    GNC2026W_B.y2y1_ob4jq = GNC2026W_P.dytdt_Y0_f;

    // End of SystemInitialize for SubSystem: '<S358>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S358>/MATLAB Function'
    GNC2026W_MATLABFunction_p_Init(&GNC2026W_DW.sf_MATLABFunction_g);

    // SystemInitialize for Enabled SubSystem: '<S349>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_i_Init(GNC2026W_B.dy_b,
      &GNC2026W_DW.EnabledSubsystem_i, &GNC2026W_P.EnabledSubsystem_i);

    // End of SystemInitialize for SubSystem: '<S349>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S348>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_hq,
      &GNC2026W_DW.EnabledSubsystem_k, &GNC2026W_P.EnabledSubsystem_k);

    // End of SystemInitialize for SubSystem: '<S348>/Enabled Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S314>/RED + ARM'
    // InitializeConditions for RandomNumber: '<S363>/Add Noise'
    tmp = floor(GNC2026W_P.AddNoise_Seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    seed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    i = static_cast<int32_T>(seed >> 16U);
    t = static_cast<int32_T>(seed & 32768U);
    GNC2026W_DW.RandSeed_e = ((((seed - (static_cast<uint32_T>(i) << 16U)) +
      static_cast<uint32_T>(t)) << 16U) + static_cast<uint32_T>(t)) +
      static_cast<uint32_T>(i);
    if (GNC2026W_DW.RandSeed_e < 1U) {
      GNC2026W_DW.RandSeed_e = 1144108930U;
    } else if (GNC2026W_DW.RandSeed_e > 2147483646U) {
      GNC2026W_DW.RandSeed_e = 2147483646U;
    }

    GNC2026W_DW.NextOutput_p = rt_nrand_Upu32_Yd_f_pw_snf
      (&GNC2026W_DW.RandSeed_e) * GNC2026W_P.AddNoise_StdDev +
      GNC2026W_P.AddNoise_Mean;

    // End of InitializeConditions for RandomNumber: '<S363>/Add Noise'

    // InitializeConditions for Delay: '<S363>/Delay'
    for (i = 0; i < 12; i++) {
      GNC2026W_DW.Delay_DSTATE_fb[i] = GNC2026W_P.Delay_InitialCondition_a;
    }

    // End of InitializeConditions for Delay: '<S363>/Delay'

    // InitializeConditions for Sum: '<S368>/Subtract' incorporates:
    //   Delay: '<S368>/Delay'

    GNC2026W_DW.Delay_DSTATE_g = GNC2026W_P.Delay_InitialCondition_h;

    // InitializeConditions for Delay: '<S386>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_n = GNC2026W_P.Delay2_InitialCondition;

    // InitializeConditions for Delay: '<S386>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_e = GNC2026W_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S374>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ff[0] = GNC2026W_P.Delay1_InitialCondition_f;

    // InitializeConditions for Delay: '<S372>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_a1[0] = GNC2026W_P.Delay1_InitialCondition_fy;

    // InitializeConditions for Delay: '<S373>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_bc[0] = GNC2026W_P.Delay1_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S382>/UD'
    //
    //  Block description for '<S382>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_l[0] = GNC2026W_P.DiscreteDerivative_ICPrevScal_h;

    // InitializeConditions for Delay: '<S374>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ff[1] = GNC2026W_P.Delay1_InitialCondition_f;

    // InitializeConditions for Delay: '<S372>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_a1[1] = GNC2026W_P.Delay1_InitialCondition_fy;

    // InitializeConditions for Delay: '<S373>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_bc[1] = GNC2026W_P.Delay1_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S382>/UD'
    //
    //  Block description for '<S382>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_l[1] = GNC2026W_P.DiscreteDerivative_ICPrevScal_h;

    // InitializeConditions for Delay: '<S374>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ff[2] = GNC2026W_P.Delay1_InitialCondition_f;

    // InitializeConditions for Delay: '<S372>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_a1[2] = GNC2026W_P.Delay1_InitialCondition_fy;

    // InitializeConditions for Delay: '<S373>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_bc[2] = GNC2026W_P.Delay1_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S382>/UD'
    //
    //  Block description for '<S382>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_l[2] = GNC2026W_P.DiscreteDerivative_ICPrevScal_h;

    // SystemInitialize for Enabled SubSystem: '<S368>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S387>/In1' incorporates:
    //   Outport: '<S387>/Out1'

    GNC2026W_B.In1_g20as = GNC2026W_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S368>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S368>/Enabled Subsystem1'
    for (i = 0; i < 6; i++) {
      // InitializeConditions for DiscreteIntegrator: '<S363>/Velocity to Position' 
      GNC2026W_DW.VelocitytoPosition_DSTATE_ff[i] =
        GNC2026W_P.VelocitytoPosition_IC[i];

      // InitializeConditions for DiscreteIntegrator: '<S363>/Acceleration to Velocity' 
      GNC2026W_DW.AccelerationtoVelocity_DSTATE_c[i] =
        GNC2026W_P.AccelerationtoVelocity_IC[i];

      // SystemInitialize for SignalConversion generated from: '<S388>/ThrustPer_Final' incorporates:
      //   Outport: '<S388>/Out1'

      GNC2026W_B.ThrustPer_Final_h5jza[i] = GNC2026W_P.Out1_Y0_m;
    }

    // End of SystemInitialize for SubSystem: '<S368>/Enabled Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S386>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S389>/y2-y1' incorporates:
    //   Outport: '<S389>/dy(t)//dt'

    GNC2026W_B.y2y1_ob4j = GNC2026W_P.dytdt_Y0_n;

    // End of SystemInitialize for SubSystem: '<S386>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S386>/MATLAB Function'
    GNC2026W_MATLABFunction_p_Init(&GNC2026W_DW.sf_MATLABFunction_m);

    // SystemInitialize for Enabled SubSystem: '<S374>/Enabled Subsystem'
    // InitializeConditions for Delay: '<S380>/Delay'
    GNC2026W_DW.Delay_DSTATE_bq[0] = GNC2026W_P.Delay_InitialCondition;

    // SystemInitialize for Outport: '<S380>/dy//dt'
    GNC2026W_B.dy_pu[0] = GNC2026W_P.dydt_Y0;

    // InitializeConditions for Delay: '<S380>/Delay'
    GNC2026W_DW.Delay_DSTATE_bq[1] = GNC2026W_P.Delay_InitialCondition;

    // SystemInitialize for Outport: '<S380>/dy//dt'
    GNC2026W_B.dy_pu[1] = GNC2026W_P.dydt_Y0;

    // InitializeConditions for Delay: '<S380>/Delay'
    GNC2026W_DW.Delay_DSTATE_bq[2] = GNC2026W_P.Delay_InitialCondition;

    // SystemInitialize for Outport: '<S380>/dy//dt'
    GNC2026W_B.dy_pu[2] = GNC2026W_P.dydt_Y0;

    // End of SystemInitialize for SubSystem: '<S374>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S372>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_i_Init(GNC2026W_B.dy_dj,
      &GNC2026W_DW.EnabledSubsystem_l, &GNC2026W_P.EnabledSubsystem_l);

    // End of SystemInitialize for SubSystem: '<S372>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S373>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_m,
      &GNC2026W_DW.EnabledSubsystem_kx, &GNC2026W_P.EnabledSubsystem_kx);

    // End of SystemInitialize for SubSystem: '<S373>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S314>/RED + ARM'

    // InitializeConditions for RandomNumber: '<S364>/Add Noise'
    tmp = floor(GNC2026W_P.AddNoise_Seed_j);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    seed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    i = static_cast<int32_T>(seed >> 16U);
    t = static_cast<int32_T>(seed & 32768U);
    GNC2026W_DW.RandSeed_m = ((((seed - (static_cast<uint32_T>(i) << 16U)) +
      static_cast<uint32_T>(t)) << 16U) + static_cast<uint32_T>(t)) +
      static_cast<uint32_T>(i);
    if (GNC2026W_DW.RandSeed_m < 1U) {
      GNC2026W_DW.RandSeed_m = 1144108930U;
    } else if (GNC2026W_DW.RandSeed_m > 2147483646U) {
      GNC2026W_DW.RandSeed_m = 2147483646U;
    }

    GNC2026W_DW.NextOutput_a = rt_nrand_Upu32_Yd_f_pw_snf
      (&GNC2026W_DW.RandSeed_m) * GNC2026W_P.AddNoise_StdDev_m +
      GNC2026W_P.AddNoise_Mean_d;

    // End of InitializeConditions for RandomNumber: '<S364>/Add Noise'

    // InitializeConditions for Delay: '<S393>/Delay'
    GNC2026W_DW.Delay_DSTATE_n = GNC2026W_P.Delay_InitialCondition_f;

    // InitializeConditions for Delay: '<S405>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_hi = GNC2026W_P.Delay2_InitialCondition_g;

    // InitializeConditions for Delay: '<S405>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_k3 = GNC2026W_P.Delay1_InitialCondition_a;

    // SystemInitialize for Enabled SubSystem: '<S393>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S406>/In1' incorporates:
    //   Outport: '<S406>/Out1'

    GNC2026W_B.In1_g20a = GNC2026W_P.Out1_Y0_j;

    // End of SystemInitialize for SubSystem: '<S393>/Enabled Subsystem'

    // InitializeConditions for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[0] =
      GNC2026W_P.AccelerationtoVelocity_IC_g;

    // InitializeConditions for DiscreteIntegrator: '<S394>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE_e[0] = GNC2026W_P.drop_states_RED[0];

    // InitializeConditions for Delay: '<S396>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_dim[0] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S395>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ft[0] = GNC2026W_P.Delay1_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S402>/UD'
    //
    //  Block description for '<S402>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_p[0] = GNC2026W_P.DiscreteDerivative_ICPrevScal_c;

    // SystemInitialize for Enabled SubSystem: '<S393>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S407>/ThrustPer_Final' incorporates:
    //   Outport: '<S407>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jz[0] = GNC2026W_P.Out1_Y0_nj;

    // End of SystemInitialize for SubSystem: '<S393>/Enabled Subsystem1'

    // InitializeConditions for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[1] =
      GNC2026W_P.AccelerationtoVelocity_IC_g;

    // InitializeConditions for DiscreteIntegrator: '<S394>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE_e[1] = GNC2026W_P.drop_states_RED[1];

    // InitializeConditions for Delay: '<S396>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_dim[1] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S395>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ft[1] = GNC2026W_P.Delay1_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S402>/UD'
    //
    //  Block description for '<S402>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_p[1] = GNC2026W_P.DiscreteDerivative_ICPrevScal_c;

    // SystemInitialize for Enabled SubSystem: '<S393>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S407>/ThrustPer_Final' incorporates:
    //   Outport: '<S407>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jz[1] = GNC2026W_P.Out1_Y0_nj;

    // End of SystemInitialize for SubSystem: '<S393>/Enabled Subsystem1'

    // InitializeConditions for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' 
    GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw[2] =
      GNC2026W_P.AccelerationtoVelocity_IC_g;

    // InitializeConditions for DiscreteIntegrator: '<S394>/Velocity to Position' 
    GNC2026W_DW.VelocitytoPosition_DSTATE_e[2] = GNC2026W_P.drop_states_RED[2];

    // InitializeConditions for Delay: '<S396>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_dim[2] = GNC2026W_P.Delay1_InitialCondition_h;

    // InitializeConditions for Delay: '<S395>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ft[2] = GNC2026W_P.Delay1_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S402>/UD'
    //
    //  Block description for '<S402>/UD':
    //
    //   Store in Global RAM

    GNC2026W_DW.UD_DSTATE_p[2] = GNC2026W_P.DiscreteDerivative_ICPrevScal_c;

    // SystemInitialize for Enabled SubSystem: '<S393>/Enabled Subsystem1'
    // SystemInitialize for SignalConversion generated from: '<S407>/ThrustPer_Final' incorporates:
    //   Outport: '<S407>/Out1'

    GNC2026W_B.ThrustPer_Final_h5jz[2] = GNC2026W_P.Out1_Y0_nj;

    // End of SystemInitialize for SubSystem: '<S393>/Enabled Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S405>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S408>/y2-y1' incorporates:
    //   Outport: '<S408>/dy(t)//dt'

    GNC2026W_B.y2y1_ob4 = GNC2026W_P.dytdt_Y0_ne;

    // End of SystemInitialize for SubSystem: '<S405>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S405>/MATLAB Function'
    GNC2026W_MATLABFunction_p_Init(&GNC2026W_DW.sf_MATLABFunction_iu);

    // SystemInitialize for Enabled SubSystem: '<S396>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_i_Init(GNC2026W_B.dy_f,
      &GNC2026W_DW.EnabledSubsystem_h, &GNC2026W_P.EnabledSubsystem_h);

    // End of SystemInitialize for SubSystem: '<S396>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S395>/Enabled Subsystem'
    GNC2026W_EnabledSubsystem_Init(GNC2026W_B.dy_j,
      &GNC2026W_DW.EnabledSubsystem_p, &GNC2026W_P.EnabledSubsystem_p);

    // End of SystemInitialize for SubSystem: '<S395>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S314>/RED Only'
    // End of SystemInitialize for SubSystem: '<Root>/Simulate Plant Dynamics'

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
    // Start for S-Function (sdspToNetwork): '<S214>/UDP Send1'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S214>/UDP Send1'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change BLUE Behavior'
    // Start for S-Function (sdspToNetwork): '<S215>/UDP Send2'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S215>/UDP Send2'
    // End of SystemInitialize for SubSystem: '<S6>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S6>/Change RED Behavior'
    // Start for S-Function (sdspToNetwork): '<S216>/UDP Send3'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S216>/UDP Send3'
    // End of SystemInitialize for SubSystem: '<S6>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S7>/Enable Pucks'
    // Start for MATLABSystem: '<S217>/GPIO Write1'
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
    // InitializeConditions for Delay: '<S218>/Delay'
    GNC2026W_DW.Delay_DSTATE_o = GNC2026W_P.Delay_InitialCondition_o2;

    // InitializeConditions for Delay: '<S218>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cg = GNC2026W_P.Delay1_InitialCondition_l;

    // InitializeConditions for Delay: '<S218>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_h = GNC2026W_P.Delay2_InitialCondition_jo;

    // Start for MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders' 
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

    // End of Start for MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders' 
    // End of SystemInitialize for SubSystem: '<S8>/Change ARM Behavior'
    // InitializeConditions for Delay: '<S241>/Delay'
    GNC2026W_DW.Delay_DSTATE_b = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S241>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_a = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for Merge: '<S240>/Merge'
    GNC2026W_B.Merge_b[0] = GNC2026W_P.Merge_InitialOutput;
    GNC2026W_B.Merge_b[1] = GNC2026W_P.Merge_InitialOutput;
    GNC2026W_B.Merge_b[2] = GNC2026W_P.Merge_InitialOutput;

    // SystemInitialize for MATLAB Function: '<S241>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_n5);

    // SystemInitialize for MATLAB Function: '<S222>/Unscented Kalman Filter'
    memset(&GNC2026W_DW.P_g[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      GNC2026W_DW.P_g[i + 6 * i] = c[i];
    }

    // End of SystemInitialize for MATLAB Function: '<S222>/Unscented Kalman Filter' 
    // End of SystemInitialize for SubSystem: '<S219>/UKF'
    // InitializeConditions for Delay: '<S232>/Delay'
    GNC2026W_DW.Delay_DSTATE_j = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S232>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_d = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for MATLAB Function: '<S232>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_p);

    // SystemInitialize for Merge: '<S231>/Merge'
    GNC2026W_B.Merge_d[0] = GNC2026W_P.Merge_InitialOutput_p;
    GNC2026W_B.Merge_d[1] = GNC2026W_P.Merge_InitialOutput_p;
    GNC2026W_B.Merge_d[2] = GNC2026W_P.Merge_InitialOutput_p;

    // SystemInitialize for MATLAB Function: '<S221>/MEKF'
    GNC2026W_DW.q.re = 1.0;
    GNC2026W_DW.q.im = 0.0;
    memset(&GNC2026W_DW.P_j[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      GNC2026W_DW.P_j[i + 6 * i] = b[i];
    }

    // End of SystemInitialize for MATLAB Function: '<S221>/MEKF'
    // End of SystemInitialize for SubSystem: '<S219>/MEKF'
    // InitializeConditions for Delay: '<S226>/Delay'
    GNC2026W_DW.Delay_DSTATE_c = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S226>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g0 = GNC2026W_P.init_states_BLACK[2];

    // SystemInitialize for MATLAB Function: '<S226>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_nq);

    // SystemInitialize for MATLAB Function: '<S220>/EKF'
    memset(&GNC2026W_DW.P[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      GNC2026W_DW.P[i + 6 * i] = b_0[i];

      // SystemInitialize for Merge: '<S219>/Merge'
      GNC2026W_B.Merge_k[i] = GNC2026W_P.Merge_InitialOutput_b;
    }

    // End of SystemInitialize for MATLAB Function: '<S220>/EKF'
    // End of SystemInitialize for SubSystem: '<S219>/EKF'
    // End of SystemInitialize for SubSystem: '<S9>/If Action Subsystem'
    // Start for S-Function (sdspFromNetwork): '<S249>/Receive PhaseSpace Data'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S249>/Receive PhaseSpace Data' 

    // Start for S-Function (sdspFromNetwork): '<S253>/UDP Receive (RED Clock)'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S253>/UDP Receive (RED Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLACK Clock)' 
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLACK Clock)' 

    // Start for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLUE Clock)' 
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLUE Clock)' 

    // Start for If: '<S257>/This IF block determines whether or not to run the BLACK sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhether_ch = -1;

    // Start for If: '<S257>/This IF block determines whether or not to run the BLUE sim//exp' 
    GNC2026W_DW.ThisIFblockdetermineswhether_cs = -1;

    // Start for If: '<S257>/This IF block determines whether or not to run the RED sim//exp ' 
    GNC2026W_DW.ThisIFblockdetermineswhethero_d = -1;

    // InitializeConditions for Delay: '<S261>/Delay2'
    GNC2026W_DW.Delay2_DSTATE = GNC2026W_P.Delay2_InitialCondition_e;

    // InitializeConditions for Delay: '<S261>/Delay1'
    GNC2026W_DW.Delay1_DSTATE = GNC2026W_P.Delay1_InitialCondition_m;

    // InitializeConditions for Delay: '<S276>/Delay'
    GNC2026W_DW.Delay_DSTATE_h = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S276>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_f = GNC2026W_P.init_states_BLACK[2];

    // InitializeConditions for Delay: '<S282>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_l = GNC2026W_P.Delay2_InitialCondition_a;

    // InitializeConditions for Delay: '<S282>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_l = GNC2026W_P.Delay1_InitialCondition_i3;

    // InitializeConditions for Delay: '<S292>/Delay2'
    GNC2026W_DW.Delay2_DSTATE_l0 = GNC2026W_P.Delay2_InitialCondition_m;

    // InitializeConditions for Delay: '<S292>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_ld = GNC2026W_P.Delay1_InitialCondition_lm;

    // InitializeConditions for Delay: '<S264>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[0] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S263>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[0] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S284>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[0] = GNC2026W_P.Delay1_InitialCondition_hb;

    // InitializeConditions for Delay: '<S283>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[0] = GNC2026W_P.Delay1_InitialCondition_ja;

    // InitializeConditions for Delay: '<S294>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[0] = GNC2026W_P.Delay1_InitialCondition_kq;

    // InitializeConditions for Delay: '<S293>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[0] = GNC2026W_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S264>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[1] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S263>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[1] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S284>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[1] = GNC2026W_P.Delay1_InitialCondition_hb;

    // InitializeConditions for Delay: '<S283>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[1] = GNC2026W_P.Delay1_InitialCondition_ja;

    // InitializeConditions for Delay: '<S294>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[1] = GNC2026W_P.Delay1_InitialCondition_kq;

    // InitializeConditions for Delay: '<S293>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[1] = GNC2026W_P.Delay1_InitialCondition_c;

    // InitializeConditions for Delay: '<S264>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_g[2] = GNC2026W_P.Delay1_InitialCondition_i;

    // InitializeConditions for Delay: '<S263>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_b[2] = GNC2026W_P.Delay1_InitialCondition_it;

    // InitializeConditions for Delay: '<S284>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_m[2] = GNC2026W_P.Delay1_InitialCondition_hb;

    // InitializeConditions for Delay: '<S283>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_lv[2] = GNC2026W_P.Delay1_InitialCondition_ja;

    // InitializeConditions for Delay: '<S294>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_c[2] = GNC2026W_P.Delay1_InitialCondition_kq;

    // InitializeConditions for Delay: '<S293>/Delay1'
    GNC2026W_DW.Delay1_DSTATE_cq[2] = GNC2026W_P.Delay1_InitialCondition_c;

    // SystemInitialize for Enabled SubSystem: '<S261>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S266>/y2-y1' incorporates:
    //   Outport: '<S266>/dy(t)//dt'

    GNC2026W_B.y2y1_ob = GNC2026W_P.dytdt_Y0_c;

    // End of SystemInitialize for SubSystem: '<S261>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S261>/MATLAB Function'
    GNC2026W_MATLABFunction_d_Init(&GNC2026W_DW.sf_MATLABFunction_j);

    // SystemInitialize for Enabled SubSystem: '<S264>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy_p,
      &GNC2026W_DW.EnabledSubsystem_g, &GNC2026W_P.EnabledSubsystem_g);

    // End of SystemInitialize for SubSystem: '<S264>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S263>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_b_Init(GNC2026W_B.dy_g,
      &GNC2026W_DW.EnabledSubsystem_it, &GNC2026W_P.EnabledSubsystem_it);

    // End of SystemInitialize for SubSystem: '<S263>/Enabled Subsystem'

    // SystemInitialize for MATLAB Function: '<S276>/MATLAB Function'
    GNC2026W_MATLABFunction_Init(&GNC2026W_DW.sf_MATLABFunction_gq);

    // SystemInitialize for MATLAB Function: '<S262>/CV Noise'
    memcpy(&GNC2026W_DW.state_k[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.method = 7U;
    GNC2026W_DW.state = 1144108930U;
    GNC2026W_DW.state_j[0] = 362436069U;
    GNC2026W_DW.state_j[1] = 521288629U;

    // SystemInitialize for Enabled SubSystem: '<S282>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S286>/y2-y1' incorporates:
    //   Outport: '<S286>/dy(t)//dt'

    GNC2026W_B.y2y1_o = GNC2026W_P.dytdt_Y0_j;

    // End of SystemInitialize for SubSystem: '<S282>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S282>/MATLAB Function'
    GNC2026W_MATLABFunction_d_Init(&GNC2026W_DW.sf_MATLABFunction_es);

    // SystemInitialize for Enabled SubSystem: '<S284>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy_c,
      &GNC2026W_DW.EnabledSubsystem_d, &GNC2026W_P.EnabledSubsystem_d);

    // End of SystemInitialize for SubSystem: '<S284>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S283>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_b_Init(GNC2026W_B.dy_d,
      &GNC2026W_DW.EnabledSubsystem_lw, &GNC2026W_P.EnabledSubsystem_lw);

    // End of SystemInitialize for SubSystem: '<S283>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S292>/Enabled Subsystem3'
    // SystemInitialize for SignalConversion generated from: '<S296>/y2-y1' incorporates:
    //   Outport: '<S296>/dy(t)//dt'

    GNC2026W_B.y2y1 = GNC2026W_P.dytdt_Y0_d;

    // End of SystemInitialize for SubSystem: '<S292>/Enabled Subsystem3'

    // SystemInitialize for MATLAB Function: '<S292>/MATLAB Function'
    GNC2026W_MATLABFunction_d_Init(&GNC2026W_DW.sf_MATLABFunction_kd);

    // SystemInitialize for Enabled SubSystem: '<S294>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_f_Init(GNC2026W_B.dy,
      &GNC2026W_DW.EnabledSubsystem_l1, &GNC2026W_P.EnabledSubsystem_l1);

    // End of SystemInitialize for SubSystem: '<S294>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S293>/Enabled Subsystem'
    GNC2026_EnabledSubsystem_b_Init(GNC2026W_B.dy_h,
      &GNC2026W_DW.EnabledSubsystem_kh, &GNC2026W_P.EnabledSubsystem_kh);

    // End of SystemInitialize for SubSystem: '<S293>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S253>/Enabled Subsystem2'
    // SystemInitialize for SignalConversion generated from: '<S254>/In1' incorporates:
    //   Outport: '<S254>/Universal Time'

    GNC2026W_B.In1_g20 = GNC2026W_P.UniversalTime_Y0;

    // End of SystemInitialize for SubSystem: '<S253>/Enabled Subsystem2'

    // SystemInitialize for IfAction SubSystem: '<S257>/Change BLACK Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLACKBehavior_e, &GNC2026W_P.ChangeBLACKBehavior_e);

    // End of SystemInitialize for SubSystem: '<S257>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S257>/Change BLUE Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLUEBehavior_f, &GNC2026W_P.ChangeBLUEBehavior_f);

    // End of SystemInitialize for SubSystem: '<S257>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S257>/Change RED Behavior'
    GNC2_ChangeBLACKBehavior_j_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_d,
      &GNC2026W_P.ChangeREDBehavior_d);

    // End of SystemInitialize for SubSystem: '<S257>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<S10>/Use Hardware to Obtain States' 

    // SystemInitialize for IfAction SubSystem: '<S11>/Subsystem'
    // Start for MATLABSystem: '<S302>/WhoAmI'
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

    // End of Start for MATLABSystem: '<S302>/WhoAmI'
    // End of SystemInitialize for SubSystem: '<S11>/Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S12>/CV UDP'
    // Start for S-Function (sdspFromNetwork): '<S303>/UDP Receive'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S303>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S12>/CV UDP'
    // Start for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
    // End of SystemInitialize for SubSystem: '<S13>/ROB UDP'
    // SystemInitialize for IfAction SubSystem: '<S14>/Change ARM Behavior'
    // Start for MATLABSystem: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
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

    // End of Start for MATLABSystem: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
    // End of SystemInitialize for SubSystem: '<S14>/Change ARM Behavior'

    // SystemInitialize for IfAction SubSystem: '<S15>/Subsystem'
    // Start for S-Function (sdspToNetwork): '<S308>/UDP Send'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S308>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S15>/Subsystem'
    // Start for S-Function (sdspToNetwork): '<S309>/UDP Send'
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
        rtmSetErrorStatus(GNC2026W_M, sErr);
        rtmSetStopRequested(GNC2026W_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S309>/UDP Send'
    // End of SystemInitialize for SubSystem: '<S16>/SEND ROB UDP'

    // SystemInitialize for IfAction SubSystem: '<S20>/Change BLACK Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLACKBehavior_i, &GNC2026W_P.ChangeBLACKBehavior_i);

    // End of SystemInitialize for SubSystem: '<S20>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S20>/Change BLUE Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M,
      &GNC2026W_DW.ChangeBLUEBehavior_e, &GNC2026W_P.ChangeBLUEBehavior_e);

    // End of SystemInitialize for SubSystem: '<S20>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S20>/Change RED Behavior'
    GNC2_ChangeBLACKBehavior_e_Init(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_h,
      &GNC2026W_P.ChangeREDBehavior_h);

    // End of SystemInitialize for SubSystem: '<S20>/Change RED Behavior'

    // Start for MATLABSystem: '<Root>/Dropped Frames'
    GNC2026W_DW.state_b = 7U;
    memcpy(&GNC2026W_DW.state_d[0], &tmp_0[0], 625U * sizeof(uint32_T));
    GNC2026W_DW.state_jw[0] = 362436069U;
    GNC2026W_DW.state_jw[1] = 521288629U;
    GNC2026W_DW.method_e = 1144108930U;
    GNC2026W_SystemCore_setup(&GNC2026W_DW.obj_fv, &seed);

    // Start for MATLABSystem: '<S210>/MATLAB System'
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

  // Terminate for MATLABSystem: '<S210>/MATLAB System'
  if (!GNC2026W_DW.obj_f.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S210>/MATLAB System'

  // Terminate for S-Function (sdspToNetwork): '<S19>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S19>/UDP Send'

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
  // Terminate for S-Function (sdspToNetwork): '<S214>/UDP Send1'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend1_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend1_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S214>/UDP Send1'
  // End of Terminate for SubSystem: '<S6>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change BLUE Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S215>/UDP Send2'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend2_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend2_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S215>/UDP Send2'
  // End of Terminate for SubSystem: '<S6>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S6>/Change RED Behavior'
  // Terminate for S-Function (sdspToNetwork): '<S216>/UDP Send3'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend3_NetworkLib[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend3_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S216>/UDP Send3'
  // End of Terminate for SubSystem: '<S6>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S7>/Enable Pucks'
  // Terminate for MATLABSystem: '<S217>/GPIO Write1'
  if (!GNC2026W_DW.obj_l.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((GNC2026W_DW.obj_l.isInitialized == 1) &&
        GNC2026W_DW.obj_l.isSetupComplete) {
      //  Call C-function implementing device termination
      change_gpio_value(GNC2026W_DW.obj_l.gpioPin, 0.0);
      unexport_gpio(GNC2026W_DW.obj_l.gpioPin);
    }
  }

  // End of Terminate for MATLABSystem: '<S217>/GPIO Write1'
  // End of Terminate for SubSystem: '<S7>/Enable Pucks'

  // Terminate for IfAction SubSystem: '<S8>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders' 
  if (!GNC2026W_DW.obj_d.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S218>/Read Joint Positions using  Dynamixel Encoders' 
  // End of Terminate for SubSystem: '<S8>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S10>/Use Hardware to Obtain States'
  // Terminate for S-Function (sdspFromNetwork): '<S249>/Receive PhaseSpace Data' 
  sErr = GetErrorBuffer(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  LibTerminate(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S249>/Receive PhaseSpace Data' 

  // Terminate for S-Function (sdspFromNetwork): '<S253>/UDP Receive (RED Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveREDClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S253>/UDP Receive (RED Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLACK Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLACK Clock)' 

  // Terminate for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLUE Clock)' 
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S253>/UDP Receive (BLUE Clock)' 

  // Terminate for IfAction SubSystem: '<S257>/Change BLACK Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior_e);

  // End of Terminate for SubSystem: '<S257>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S257>/Change BLUE Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior_f);

  // End of Terminate for SubSystem: '<S257>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S257>/Change RED Behavior'
  GNC2_ChangeBLACKBehavior_j_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_d);

  // End of Terminate for SubSystem: '<S257>/Change RED Behavior'
  // End of Terminate for SubSystem: '<S10>/Use Hardware to Obtain States'

  // Terminate for IfAction SubSystem: '<S11>/Subsystem'
  // Terminate for MATLABSystem: '<S302>/WhoAmI'
  if (!GNC2026W_DW.obj_dk.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj_dk.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S302>/WhoAmI'
  // End of Terminate for SubSystem: '<S11>/Subsystem'

  // Terminate for IfAction SubSystem: '<S12>/CV UDP'
  // Terminate for S-Function (sdspFromNetwork): '<S303>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib_i[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S303>/UDP Receive'
  // End of Terminate for SubSystem: '<S12>/CV UDP'

  // Terminate for IfAction SubSystem: '<S13>/ROB UDP'
  // Terminate for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&GNC2026W_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S305>/UDP Receive'
  // End of Terminate for SubSystem: '<S13>/ROB UDP'

  // Terminate for IfAction SubSystem: '<S14>/Change ARM Behavior'
  // Terminate for MATLABSystem: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  if (!GNC2026W_DW.obj.matlabCodegenIsDeleted) {
    GNC2026W_DW.obj.matlabCodegenIsDeleted = true;
    if ((GNC2026W_DW.obj.isInitialized == 1) && GNC2026W_DW.obj.isSetupComplete)
    {
      terminate_dynamixel();
    }
  }

  // End of Terminate for MATLABSystem: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  // End of Terminate for SubSystem: '<S14>/Change ARM Behavior'

  // Terminate for IfAction SubSystem: '<S15>/Subsystem'
  // Terminate for S-Function (sdspToNetwork): '<S308>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib_m[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_m[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S308>/UDP Send'
  // End of Terminate for SubSystem: '<S15>/Subsystem'

  // Terminate for IfAction SubSystem: '<S16>/SEND ROB UDP'
  // Terminate for S-Function (sdspToNetwork): '<S309>/UDP Send'
  sErr = GetErrorBuffer(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
  LibTerminate(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(GNC2026W_M, sErr);
    rtmSetStopRequested(GNC2026W_M, 1);
  }

  LibDestroy(&GNC2026W_DW.UDPSend_NetworkLib_f[0U], 1);
  DestroyUDPInterface(&GNC2026W_DW.UDPSend_NetworkLib_f[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S309>/UDP Send'
  // End of Terminate for SubSystem: '<S16>/SEND ROB UDP'

  // Terminate for IfAction SubSystem: '<S20>/Change BLACK Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLACKBehavior_i);

  // End of Terminate for SubSystem: '<S20>/Change BLACK Behavior'

  // Terminate for IfAction SubSystem: '<S20>/Change BLUE Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeBLUEBehavior_e);

  // End of Terminate for SubSystem: '<S20>/Change BLUE Behavior'

  // Terminate for IfAction SubSystem: '<S20>/Change RED Behavior'
  GNC2_ChangeBLACKBehavior_f_Term(GNC2026W_M, &GNC2026W_DW.ChangeREDBehavior_h);

  // End of Terminate for SubSystem: '<S20>/Change RED Behavior'
}

//
// File trailer for generated code.
//
// [EOF]
//
