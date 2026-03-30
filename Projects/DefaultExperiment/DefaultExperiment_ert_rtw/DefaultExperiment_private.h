//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DefaultExperiment_private.h
//
// Code generated for Simulink model 'DefaultExperiment'.
//
// Model version                  : 4.656
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Mar 30 08:43:11 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef DefaultExperiment_private_h_
#define DefaultExperiment_private_h_
#include "rtwtypes.h"
#include "DefaultExperiment.h"
#include "DefaultExperiment_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern void DefaultEx_Phase0Synchronization(real_T *rtd_ARM_Control_Law_Enabler,
  real_T *rtd_ARM_Path_Planner_Selection, real_T *rtd_BLACK_Control_Law_Enabler,
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, char_T rtd_BLUE_Logger[256], real_T
  *rtd_BLUE_Path_Planner_Selection, real_T *rtd_Float_State, real_T
  *rtd_RED_Control_Law_Enabler, char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase0Synchronization_Defau_T *localP);
extern void DefaultExperiment_SubPhase1(real_T *rtd_ARM_Control_Law_Enabler,
  real_T rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection,
  real_T *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3],
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, const real_T *rtd_Univ_Time,
  P_SubPhase1_DefaultExperiment_T *localP);
extern void DefaultExperim_Phase4ReturnHome(real_T *rtd_ARM_Control_Law_Enabler,
  real_T rtd_ARM_Desired_States[3], real_T *rtd_ARM_Path_Planner_Selection,
  real_T *rtd_BLACK_Control_Law_Enabler, real_T rtd_BLACK_Desired_States[3],
  char_T rtd_BLACK_Logger[256], real_T *rtd_BLACK_Path_Planner_Selectio, real_T *
  rtd_BLUE_Control_Law_Enabler, real_T rtd_BLUE_Desired_States[3], char_T
  rtd_BLUE_Logger[256], real_T *rtd_BLUE_Path_Planner_Selection, real_T
  *rtd_Float_State, real_T *rtd_RED_Control_Law_Enabler, real_T
  rtd_RED_Desired_States[3], char_T rtd_RED_Logger[256], real_T
  *rtd_RED_Path_Planner_Selection, P_Phase4ReturnHome_DefaultExp_T *localP);
extern void DefaultExperimen_MATLABFunction(real_T rtu_Rz_path, real_T
  rtu_Rz_measured, real_T *rty_Rz_error);
extern void DefaultExperim_CustomControlRED(real_T rty_u[3],
  P_CustomControlRED_DefaultExp_T *localP);
extern void DefaultEx_DisableThrustersBLACK(real_T rty_Out1[3],
  P_DisableThrustersBLACK_Defau_T *localP);
extern void Defaul_ChangeBLACKBehavior_Init(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defaul_T *localDW,
  P_ChangeBLACKBehavior_Default_T *localP);
extern void DefaultExpe_ChangeBLACKBehavior(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defaul_T *localDW,
  P_ChangeBLACKBehavior_Default_T *localP);
extern void Defa_ChangeBLACKBehavior_j_Init(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defa_l_T *localDW,
  P_ChangeBLACKBehavior_Defau_p_T *localP);
extern void De_ChangeBLACKBehavior_d_Update(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, real_T rtu_UniversalTime, DW_ChangeBLACKBehavior_Defa_l_T
  *localDW);
extern void DefaultExperim_MATLABFunction_j(real_T rtu_dt, real_T rtu_dataRate,
  real_T *rty_dt_out);
extern void DefaultEx_EnabledSubsystem_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_DefaultEx_T *localDW, P_EnabledSubsystem_DefaultExp_T
  *localP);
extern void Defaul_EnabledSubsystem_Disable(DW_EnabledSubsystem_DefaultEx_T
  *localDW);
extern void Default_EnabledSubsystem_Update(B_EnabledSubsystem_DefaultExp_T
  *localB, DW_EnabledSubsystem_DefaultEx_T *localDW);
extern void DefaultExperim_EnabledSubsystem(const boolean_T rtu_Enable[3], const
  real_T rtu_y[3], real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_DefaultExp_T *localB, DW_EnabledSubsystem_DefaultEx_T
  *localDW, P_EnabledSubsystem_DefaultExp_T *localP);
extern void Default_EnabledSubsystem_e_Init(real_T rty_dydt[3],
  DW_EnabledSubsystem_Default_c_T *localDW, P_EnabledSubsystem_DefaultE_c_T
  *localP);
extern void Defa_EnabledSubsystem_c_Disable(DW_EnabledSubsystem_Default_c_T
  *localDW);
extern void Defau_EnabledSubsystem_m_Update(B_EnabledSubsystem_DefaultE_h_T
  *localB, DW_EnabledSubsystem_Default_c_T *localDW);
extern void DefaultExper_EnabledSubsystem_g(const boolean_T rtu_Enable[3],
  real_T rtu_y, real_T rtu_y_c, real_T rtu_y_k, real_T rtu_dt, real_T rty_dydt[3],
  B_EnabledSubsystem_DefaultE_h_T *localB, DW_EnabledSubsystem_Default_c_T
  *localDW, P_EnabledSubsystem_DefaultE_c_T *localP);
extern void DefaultExpe_Pseudoinverse1_Init(DW_Pseudoinverse1_DefaultExpe_T
  *localDW);
extern void DefaultExperimen_Pseudoinverse1(const real_T rtu_0[24],
  B_Pseudoinverse1_DefaultExper_T *localB);
extern void DefaultExperime_MATLABFunction1(const real_T rtu_ThrustPer[8],
  real_T rty_ThrustPer_Final[8]);
extern void DefaultExperime_MATLABFunction5(const real_T rtu_u_desired[3], const
  real_T rtu_x0[8], real_T rty_H_final[24], real_T rty_duty_cycles[8], real_T
  rtp_max_iters, real_T rtp_tol);
extern void DefaultExp_CreateRotationMatrix(real_T rtu_Rz, real_T rty_C_Ib[4]);
extern void DefaultE_CreateRotationMatrix_a(real_T rtu_Rz, real_T rty_C_bI[4]);
extern void Defa_ChangeBLACKBehavior_a_Init(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defa_g_T *localDW,
  P_ChangeBLACKBehavior_Defau_b_T *localP);
extern void De_ChangeBLACKBehavior_f_Update(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, B_ChangeBLACKBehavior_Defau_m_T *localB,
  DW_ChangeBLACKBehavior_Defa_g_T *localDW);
extern void DefaultEx_ChangeBLACKBehavior_i(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, B_ChangeBLACKBehavior_Defau_m_T *localB);
extern void Defaul_ChangeBLACKBehavior_Term(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defaul_T *localDW);
extern void Defa_ChangeBLACKBehavior_h_Term(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defa_l_T *localDW);
extern void Defa_ChangeBLACKBehavior_l_Term(RT_MODEL_DefaultExperiment_T * const
  DefaultExperiment_M, DW_ChangeBLACKBehavior_Defa_g_T *localDW);

#endif                                 // DefaultExperiment_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
