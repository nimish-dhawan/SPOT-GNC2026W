//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W_private.h
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
#ifndef GNC2026W_private_h_
#define GNC2026W_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "GNC2026W.h"
#include "GNC2026W_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);
extern void GNC2026W_Phase0Synchronization(real_T *rtd_ARM_Control_Law_Enabler,
  real_T *rtd_ARM_Path_Planner_Selection, real_T *rtd_BLACK_Control_Law_Enabler,
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, char_T rtd_BLUE_Logger[256], real_T
  *rtd_BLUE_Path_Planner_Selection, real_T *rtd_Float_State, real_T
  *rtd_RED_Control_Law_Enabler, char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase0Synchronization_GNC20_T *localP);
extern void GNC2026W_IfActionSubsystem(real_T *rtd_RED_Control_Law_Enabler,
  real_T *rtd_RED_Path_Planner_Selection, P_IfActionSubsystem_GNC2026W_T *localP);
extern void GNC2026W_Phase4ReturnHome(real_T *rtd_ARM_Control_Law_Enabler,
  real_T rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection,
  real_T *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3],
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase4ReturnHome_GNC2026W_T *localP);
extern void GNC2026W_MATLABFunction_Init(DW_MATLABFunction_GNC2026W_T *localDW);
extern void GNC2026W_MATLABFunction(real_T rtu_u, real_T rtu_u_pre, real_T
  rtu_y_pre, real_T *rty_y, real_T *rty_u_next, DW_MATLABFunction_GNC2026W_T
  *localDW);
extern void GNC2026W_MATLABFunction_i_Init(DW_MATLABFunction_GNC2026W_i_T
  *localDW);
extern void GNC2026W_MATLABFunction_n(real_T rtu_Rz_path, real_T rtu_Rz_measured,
  real_T *rty_Rz_error, DW_MATLABFunction_GNC2026W_i_T *localDW);
extern void GNC2026W_DisableThrustersRED(real_T rty_u[3],
  P_DisableThrustersRED_GNC2026_T *localP);
extern void GNC2026W_DisableThrustersBLACK(real_T rty_Out1[3],
  P_DisableThrustersBLACK_GNC20_T *localP);
extern void GNC202_ChangeBLACKBehavior_Init(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, DW_ChangeBLACKBehavior_GNC202_T *localDW,
  P_ChangeBLACKBehavior_GNC2026_T *localP);
extern void GNC2026W_ChangeBLACKBehavior(RT_MODEL_GNC2026W_T * const GNC2026W_M,
  DW_ChangeBLACKBehavior_GNC202_T *localDW, P_ChangeBLACKBehavior_GNC2026_T
  *localP);
extern void GNC2026W_MATLABFunction_c_Init(DW_MATLABFunction_GNC2026W_l_T
  *localDW);
extern void GNC2026W_MATLABFunction_o(const real_T rtu_y[3], real_T rtu_dt,
  real_T rtu_tau, const real_T rtu_ema_prev[3], real_T rty_dy[3], real_T
  rty_ema[3], DW_MATLABFunction_GNC2026W_l_T *localDW);
extern void GNC2026W_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026W_T *localDW, P_EnabledSubsystem_GNC2026W_T *localP);
extern void GNC2026W_EnabledSubsystem(const boolean_T rtu_Enable[3], const
  real_T rtu_y[3], real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_GNC2026W_T *localB, DW_EnabledSubsystem_GNC2026W_T *localDW,
  P_EnabledSubsystem_GNC2026W_T *localP);
extern void GNC2026_EnabledSubsystem_i_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_g_T *localDW, P_EnabledSubsystem_GNC2026W_m_T
  *localP);
extern void GNC2026W_EnabledSubsystem_b(const boolean_T rtu_Enable[3], const
  real_T rtu_y[3], real_T rtu_dt, real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_g_T *localDW, P_EnabledSubsystem_GNC2026W_m_T
  *localP);
extern void GNC2026W_MATLABFunction_p_Init(DW_MATLABFunction_GNC2026W_o_T
  *localDW);
extern void GNC2026W_MATLABFunction_oy(real_T rtu_dt, real_T rtu_dataRate,
  real_T *rty_dt_out, DW_MATLABFunction_GNC2026W_o_T *localDW);
extern void GNC2026W_ExperimentalVISStates(real_T rty_Out1[3], const real_T
  rtd_BLACK_CV_States[3], const real_T rtd_VIS_LAR_States[3], const real_T
  *rtd_isSim, DW_ExperimentalVISStates_GNC2_T *localDW);
extern void GNC2_ChangeBLACKBehavior_j_Init(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, DW_ChangeBLACKBehavior_GNC2_l_T *localDW,
  P_ChangeBLACKBehavior_GNC20_p_T *localP);
extern void GN_ChangeBLACKBehavior_p_Update(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_GNC2_l_T *localDW);
extern void GNC2026W_MATLABFunction_d_Init(DW_MATLABFunction_GNC2026W_o3_T
  *localDW);
extern void GNC2026W_MATLABFunction_j(real_T rtu_dt, real_T rtu_dataRate, real_T
  *rty_dt_out, DW_MATLABFunction_GNC2026W_o3_T *localDW);
extern void GNC2026_EnabledSubsystem_b_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_b_T *localDW, P_EnabledSubsystem_GNC2026W_o_T
  *localP);
extern void GNC202_EnabledSubsystem_Disable(DW_EnabledSubsystem_GNC2026_b_T
  *localDW);
extern void GNC20_EnabledSubsystem_d_Update(B_EnabledSubsystem_GNC2026W_j_T
  *localB, DW_EnabledSubsystem_GNC2026_b_T *localDW);
extern void GNC2026W_EnabledSubsystem_i(const boolean_T rtu_Enable[3], const
  real_T rtu_y[3], real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_GNC2026W_j_T *localB, DW_EnabledSubsystem_GNC2026_b_T
  *localDW, P_EnabledSubsystem_GNC2026W_o_T *localP);
extern void GNC2026_EnabledSubsystem_f_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_GNC2026_c_T *localDW, P_EnabledSubsystem_GNC2026W_c_T
  *localP);
extern void GNC2_EnabledSubsystem_p_Disable(DW_EnabledSubsystem_GNC2026_c_T
  *localDW);
extern void GNC20_EnabledSubsystem_a_Update(B_EnabledSubsystem_GNC2026W_h_T
  *localB, DW_EnabledSubsystem_GNC2026_c_T *localDW);
extern void GNC2026W_EnabledSubsystem_g(const boolean_T rtu_Enable[3], real_T
  rtu_y, real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_GNC2026W_h_T *localB, DW_EnabledSubsystem_GNC2026_c_T
  *localDW, P_EnabledSubsystem_GNC2026W_c_T *localP);
extern void GNC2026W_Pseudoinverse1_Init(DW_Pseudoinverse1_GNC2026W_T *localDW);
extern void GNC2026W_Pseudoinverse1(const real_T rtu_0[24],
  B_Pseudoinverse1_GNC2026W_T *localB);
extern void GNC2026W_MATLABFunction1_Init(DW_MATLABFunction1_GNC2026W_T *localDW);
extern void GNC2026W_MATLABFunction1(const real_T rtu_ThrustPer[8], real_T
  rty_ThrustPer_Final[8], DW_MATLABFunction1_GNC2026W_T *localDW);
extern void GNC2026W_MATLABFunction5_Init(DW_MATLABFunction5_GNC2026W_T *localDW);
extern void GNC2026W_MATLABFunction5(const real_T rtu_u_desired[3], const real_T
  rtu_x0[8], real_T rty_H_final[24], real_T rty_duty_cycles[8], real_T
  rtp_max_iters, real_T rtp_tol, DW_MATLABFunction5_GNC2026W_T *localDW);
extern void GNC20_CreateRotationMatrix_Init(DW_CreateRotationMatrix_GNC20_T
  *localDW);
extern void GNC2026W_CreateRotationMatrix(real_T rtu_Rz, real_T rty_C_Ib[4],
  DW_CreateRotationMatrix_GNC20_T *localDW);
extern void GNC_CreateRotationMatrix_c_Init(DW_CreateRotationMatrix_GNC_j_T
  *localDW);
extern void GNC2026W_CreateRotationMatrix_a(real_T rtu_Rz, real_T rty_C_bI[4],
  DW_CreateRotationMatrix_GNC_j_T *localDW);
extern void GNC2_ChangeBLACKBehavior_e_Init(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, DW_ChangeBLACKBehavior_GNC2_g_T *localDW,
  P_ChangeBLACKBehavior_GNC20_b_T *localP);
extern void GN_ChangeBLACKBehavior_n_Update(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, B_ChangeBLACKBehavior_GNC20_m_T *localB,
  DW_ChangeBLACKBehavior_GNC2_g_T *localDW);
extern void GNC2026W_ChangeBLACKBehavior_i(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, B_ChangeBLACKBehavior_GNC20_m_T *localB);
extern void GNC202_ChangeBLACKBehavior_Term(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, DW_ChangeBLACKBehavior_GNC202_T *localDW);
extern void GNC2_ChangeBLACKBehavior_j_Term(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, DW_ChangeBLACKBehavior_GNC2_l_T *localDW);
extern void GNC2_ChangeBLACKBehavior_f_Term(RT_MODEL_GNC2026W_T * const
  GNC2026W_M, DW_ChangeBLACKBehavior_GNC2_g_T *localDW);

#endif                                 // GNC2026W_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
