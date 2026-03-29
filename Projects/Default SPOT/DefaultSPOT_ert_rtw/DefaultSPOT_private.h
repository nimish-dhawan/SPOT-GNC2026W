//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DefaultSPOT_private.h
//
// Code generated for Simulink model 'DefaultSPOT'.
//
// Model version                  : 4.662
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sun Mar 29 14:38:06 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef DefaultSPOT_private_h_
#define DefaultSPOT_private_h_
#include "rtwtypes.h"
#include "DefaultSPOT.h"
#include "DefaultSPOT_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern void DefaultSP_Phase0Synchronization(real_T *rtd_ARM_Control_Law_Enabler,
  real_T *rtd_ARM_Path_Planner_Selection, real_T *rtd_BLACK_Control_Law_Enabler,
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, char_T rtd_BLUE_Logger[256], real_T
  *rtd_BLUE_Path_Planner_Selection, real_T *rtd_Float_State, real_T
  *rtd_RED_Control_Law_Enabler, char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase0Synchronization_Defau_T *localP);
extern void DefaultSPOT_SubPhase1(real_T *rtd_ARM_Control_Law_Enabler, real_T
  rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection, real_T
  *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3], char_T
  rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T
  *rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, const real_T *rtd_Univ_Time,
  P_SubPhase1_DefaultSPOT_T *localP);
extern void DefaultSPOT_Phase4ReturnHome(real_T *rtd_ARM_Control_Law_Enabler,
  real_T rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection,
  real_T *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3],
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase4ReturnHome_DefaultSPO_T *localP);
extern void DefaultSPOT_MATLABFunction(real_T rtu_Rz_path, real_T
  rtu_Rz_measured, real_T *rty_Rz_error);
extern void DefaultSPOT_CustomControlRED(real_T rty_u[3],
  P_CustomControlRED_DefaultSPO_T *localP);
extern void DefaultSP_DisableThrustersBLACK(real_T rty_Out1[3],
  P_DisableThrustersBLACK_Defau_T *localP);
extern void Defaul_ChangeBLACKBehavior_Init(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defaul_T *localDW,
  P_ChangeBLACKBehavior_Default_T *localP);
extern void DefaultSPOT_ChangeBLACKBehavior(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defaul_T *localDW,
  P_ChangeBLACKBehavior_Default_T *localP);
extern void Defa_ChangeBLACKBehavior_a_Init(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_l_T *localDW,
  P_ChangeBLACKBehavior_Defau_p_T *localP);
extern void De_ChangeBLACKBehavior_e_Update(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_Defa_l_T
  *localDW);
extern void DefaultSPOT_MATLABFunction_j(real_T rtu_dt, real_T rtu_dataRate,
  real_T *rty_dt_out);
extern void DefaultSP_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_DefaultSP_T *localDW, P_EnabledSubsystem_DefaultSPO_T
  *localP);
extern void Defaul_EnabledSubsystem_Disable(DW_EnabledSubsystem_DefaultSP_T
  *localDW);
extern void Default_EnabledSubsystem_Update(B_EnabledSubsystem_DefaultSPO_T
  *localB, DW_EnabledSubsystem_DefaultSP_T *localDW);
extern void DefaultSPOT_EnabledSubsystem(const boolean_T rtu_Enable[3], const
  real_T rtu_y[3], real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_DefaultSPO_T *localB, DW_EnabledSubsystem_DefaultSP_T
  *localDW, P_EnabledSubsystem_DefaultSPO_T *localP);
extern void Default_EnabledSubsystem_m_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_Default_c_T *localDW, P_EnabledSubsystem_DefaultS_c_T
  *localP);
extern void Defa_EnabledSubsystem_d_Disable(DW_EnabledSubsystem_Default_c_T
  *localDW);
extern void Defau_EnabledSubsystem_d_Update(B_EnabledSubsystem_DefaultS_h_T
  *localB, DW_EnabledSubsystem_Default_c_T *localDW);
extern void DefaultSPOT_EnabledSubsystem_g(const boolean_T rtu_Enable[3], real_T
  rtu_y, real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_DefaultS_h_T *localB, DW_EnabledSubsystem_Default_c_T
  *localDW, P_EnabledSubsystem_DefaultS_c_T *localP);
extern void DefaultSPOT_Pseudoinverse1_Init(DW_Pseudoinverse1_DefaultSPOT_T
  *localDW);
extern void DefaultSPOT_Pseudoinverse1(const real_T rtu_0[24],
  B_Pseudoinverse1_DefaultSPOT_T *localB);
extern void DefaultSPOT_MATLABFunction1(const real_T rtu_ThrustPer[8], real_T
  rty_ThrustPer_Final[8]);
extern void DefaultSPOT_MATLABFunction5(const real_T rtu_u_desired[3], const
  real_T rtu_x0[8], real_T rty_H_final[24], real_T rty_duty_cycles[8], real_T
  rtp_max_iters, real_T rtp_tol);
extern void DefaultSPO_CreateRotationMatrix(real_T rtu_Rz, real_T rty_C_Ib[4]);
extern void DefaultS_CreateRotationMatrix_a(real_T rtu_Rz, real_T rty_C_bI[4]);
extern void Defa_ChangeBLACKBehavior_n_Init(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_g_T *localDW,
  P_ChangeBLACKBehavior_Defau_b_T *localP);
extern void De_ChangeBLACKBehavior_j_Update(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, B_ChangeBLACKBehavior_Defau_m_T *localB,
  DW_ChangeBLACKBehavior_Defa_g_T *localDW);
extern void DefaultSP_ChangeBLACKBehavior_i(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, B_ChangeBLACKBehavior_Defau_m_T *localB);
extern void Defaul_ChangeBLACKBehavior_Term(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defaul_T *localDW);
extern void Defa_ChangeBLACKBehavior_l_Term(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_l_T *localDW);
extern void Defa_ChangeBLACKBehavior_n_Term(RT_MODEL_DefaultSPOT_T * const
  DefaultSPOT_M, DW_ChangeBLACKBehavior_Defa_g_T *localDW);

#endif                                 // DefaultSPOT_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
