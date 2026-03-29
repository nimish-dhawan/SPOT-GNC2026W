//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W_types.h
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1859
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sun Mar 29 15:05:57 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef GNC2026W_types_h_
#define GNC2026W_types_h_
#include "rtwtypes.h"
#ifndef struct_dsp_simulink_Pseudoinverse_GN_T
#define struct_dsp_simulink_Pseudoinverse_GN_T

struct dsp_simulink_Pseudoinverse_GN_T
{
  int32_T isInitialized;
};

#endif                                // struct_dsp_simulink_Pseudoinverse_GN_T

#ifndef struct_CustomDataLogger_GNC2026W_T
#define struct_CustomDataLogger_GNC2026W_T

struct CustomDataLogger_GNC2026W_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 // struct_CustomDataLogger_GNC2026W_T

// Custom Type definition for MATLABSystem: '<Root>/Dropped Frames'
#include <ctime>
#include <ctime>
#ifndef struct_comm_internal_BernoulliBinary_T
#define struct_comm_internal_BernoulliBinary_T

struct comm_internal_BernoulliBinary_T
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
};

#endif                                // struct_comm_internal_BernoulliBinary_T

#ifndef struct_GPIO_Write_GNC2026W_T
#define struct_GPIO_Write_GNC2026W_T

struct GPIO_Write_GNC2026W_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T gpioPin;
  real_T pinDirection;
};

#endif                                 // struct_GPIO_Write_GNC2026W_T

#ifndef struct_ReadArm_Position_Rates_GNC202_T
#define struct_ReadArm_Position_Rates_GNC202_T

struct ReadArm_Position_Rates_GNC202_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                // struct_ReadArm_Position_Rates_GNC202_T

#ifndef struct_IdentifyPlatform_GNC2026W_T
#define struct_IdentifyPlatform_GNC2026W_T

struct IdentifyPlatform_GNC2026W_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                 // struct_IdentifyPlatform_GNC2026W_T

#ifndef struct_Dynamixel_Controller_GNC2026W_T
#define struct_Dynamixel_Controller_GNC2026W_T

struct Dynamixel_Controller_GNC2026W_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
  real_T POSITION_P_GAIN;
  real_T POSITION_I_GAIN;
  real_T POSITION_D_GAIN;
  real_T MAX_POSITION;
  real_T MIN_POSITION;
  real_T MOVE_TIME;
  real_T CURRENT_LIMIT;
  real_T SPEED_P_GAIN;
  real_T SPEED_I_GAIN;
  real_T VELOCITY_LIMIT;
  real_T ACCELERATION_TIME;
};

#endif                                // struct_Dynamixel_Controller_GNC2026W_T

// Parameters for system: '<S1>/Phase #0: Synchronization'
typedef struct P_Phase0Synchronization_GNC20_T_ P_Phase0Synchronization_GNC20_T;

// Parameters for system: '<S59>/If Action Subsystem'
typedef struct P_IfActionSubsystem_GNC2026W_T_ P_IfActionSubsystem_GNC2026W_T;

// Parameters for system: '<S1>/Phase #4: Return Home'
typedef struct P_Phase4ReturnHome_GNC2026W_T_ P_Phase4ReturnHome_GNC2026W_T;

// Parameters for system: '<S3>/Disable Thrusters (RED)'
typedef struct P_DisableThrustersRED_GNC2026_T_ P_DisableThrustersRED_GNC2026_T;

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
typedef struct P_DisableThrustersBLACK_GNC20_T_ P_DisableThrustersBLACK_GNC20_T;

// Parameters for system: '<S4>/Change BLACK Behavior'
typedef struct P_ChangeBLACKBehavior_GNC2026_T_ P_ChangeBLACKBehavior_GNC2026_T;

// Parameters for system: '<S256>/Change BLACK Behavior'
typedef struct P_ChangeBLACKBehavior_GNC20_p_T_ P_ChangeBLACKBehavior_GNC20_p_T;

// Parameters for system: '<S262>/Enabled Subsystem'
typedef struct P_EnabledSubsystem_GNC2026W_T_ P_EnabledSubsystem_GNC2026W_T;

// Parameters for system: '<S263>/Enabled Subsystem'
typedef struct P_EnabledSubsystem_GNC2026W_c_T_ P_EnabledSubsystem_GNC2026W_c_T;

// Parameters for system: '<S19>/Change BLACK Behavior'
typedef struct P_ChangeBLACKBehavior_GNC20_b_T_ P_ChangeBLACKBehavior_GNC20_b_T;

// Parameters (default storage)
typedef struct P_GNC2026W_T_ P_GNC2026W_T;

// Forward declaration for rtModel
typedef struct tag_RTM_GNC2026W_T RT_MODEL_GNC2026W_T;

#endif                                 // GNC2026W_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
