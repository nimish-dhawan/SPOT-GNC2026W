//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DefaultExperiment_types.h
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
#ifndef DefaultExperiment_types_h_
#define DefaultExperiment_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"
#ifndef struct_dsp_simulink_Pseudoinverse_De_T
#define struct_dsp_simulink_Pseudoinverse_De_T

struct dsp_simulink_Pseudoinverse_De_T
{
  int32_T isInitialized;
};

#endif                                // struct_dsp_simulink_Pseudoinverse_De_T

#ifndef struct_CustomDataLogger_DefaultExper_T
#define struct_CustomDataLogger_DefaultExper_T

struct CustomDataLogger_DefaultExper_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_CustomDataLogger_DefaultExper_T

#ifndef struct_GPIO_Write_DefaultExperiment_T
#define struct_GPIO_Write_DefaultExperiment_T

struct GPIO_Write_DefaultExperiment_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T gpioPin;
  real_T pinDirection;
};

#endif                                 // struct_GPIO_Write_DefaultExperiment_T

// Custom Type definition for MATLABSystem: '<S177>/Gyroscope//Accelerometer'
#include "MW_SVD.h"
#include "coder_posix_time.h"
#ifndef struct_e_codertarget_jetson_sensors__T
#define struct_e_codertarget_jetson_sensors__T

struct e_codertarget_jetson_sensors__T
{
  real_T currentTime;
};

#endif                                // struct_e_codertarget_jetson_sensors__T

#ifndef struct_e_matlabshared_devicedrivers__T
#define struct_e_matlabshared_devicedrivers__T

struct e_matlabshared_devicedrivers__T
{
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                // struct_e_matlabshared_devicedrivers__T

#ifndef struct_e_matlabshared_sensors_coder__T
#define struct_e_matlabshared_sensors_coder__T

struct e_matlabshared_sensors_coder__T
{
  uint8_T Bus;
  uint8_T DeviceAddress;
  e_matlabshared_devicedrivers__T *InterfaceObj;
  e_matlabshared_devicedrivers__T _pobj0;
};

#endif                                // struct_e_matlabshared_sensors_coder__T

#ifndef struct_f_matlabshared_sensors_coder__T
#define struct_f_matlabshared_sensors_coder__T

struct f_matlabshared_sensors_coder__T
{
  int32_T isInitialized;
  e_matlabshared_sensors_coder__T Device;
  real_T BusI2CDriver;
  real_T Bus;
};

#endif                                // struct_f_matlabshared_sensors_coder__T

#ifndef struct_b_bmi160_DefaultExperiment_T
#define struct_b_bmi160_DefaultExperiment_T

struct b_bmi160_DefaultExperiment_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  e_codertarget_jetson_sensors__T *Parent;
  f_matlabshared_sensors_coder__T *Device;
  f_matlabshared_sensors_coder__T _pobj0;
};

#endif                                 // struct_b_bmi160_DefaultExperiment_T

#ifndef struct_f_matlabshared_sensors_simuli_T
#define struct_f_matlabshared_sensors_simuli_T

struct f_matlabshared_sensors_simuli_T
{
  int32_T __dummy;
};

#endif                                // struct_f_matlabshared_sensors_simuli_T

#ifndef struct_g_matlabshared_sensors_simuli_T
#define struct_g_matlabshared_sensors_simuli_T

struct g_matlabshared_sensors_simuli_T
{
  int32_T __dummy;
};

#endif                                // struct_g_matlabshared_sensors_simuli_T

#ifndef struct_hb_cell_DefaultExperiment_T
#define struct_hb_cell_DefaultExperiment_T

struct hb_cell_DefaultExperiment_T
{
  f_matlabshared_sensors_simuli_T *f1;
  g_matlabshared_sensors_simuli_T *f2;
};

#endif                                 // struct_hb_cell_DefaultExperiment_T

#ifndef struct_nvidiacoder_sensors_BMI160Blo_T
#define struct_nvidiacoder_sensors_BMI160Blo_T

struct nvidiacoder_sensors_BMI160Blo_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  real_T SampleTime;
  e_codertarget_jetson_sensors__T *HwUtilityObject;
  b_bmi160_DefaultExperiment_T *SensorObject;
  hb_cell_DefaultExperiment_T OutputModules;
  boolean_T __OutputModules_AssignmentSentinel;
  g_matlabshared_sensors_simuli_T _pobj0;
  f_matlabshared_sensors_simuli_T _pobj1;
  b_bmi160_DefaultExperiment_T _pobj2;
  e_codertarget_jetson_sensors__T _pobj3;
};

#endif                                // struct_nvidiacoder_sensors_BMI160Blo_T

#ifndef struct_ReadArm_Position_Rates_Defaul_T
#define struct_ReadArm_Position_Rates_Defaul_T

struct ReadArm_Position_Rates_Defaul_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                // struct_ReadArm_Position_Rates_Defaul_T

#ifndef struct_IdentifyPlatform_DefaultExper_T
#define struct_IdentifyPlatform_DefaultExper_T

struct IdentifyPlatform_DefaultExper_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                // struct_IdentifyPlatform_DefaultExper_T

#ifndef struct_Dynamixel_Controller_DefaultE_T
#define struct_Dynamixel_Controller_DefaultE_T

struct Dynamixel_Controller_DefaultE_T
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

#endif                                // struct_Dynamixel_Controller_DefaultE_T

// Parameters for system: '<S1>/Phase #0: Synchronization'
typedef struct P_Phase0Synchronization_Defau_T_ P_Phase0Synchronization_Defau_T;

// Parameters for system: '<S21>/Sub-Phase #1'
typedef struct P_SubPhase1_DefaultExperiment_T_ P_SubPhase1_DefaultExperiment_T;

// Parameters for system: '<S1>/Phase #4: Return Home'
typedef struct P_Phase4ReturnHome_DefaultExp_T_ P_Phase4ReturnHome_DefaultExp_T;

// Parameters for system: '<S3>/Custom Control (RED)'
typedef struct P_CustomControlRED_DefaultExp_T_ P_CustomControlRED_DefaultExp_T;

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
typedef struct P_DisableThrustersBLACK_Defau_T_ P_DisableThrustersBLACK_Defau_T;

// Parameters for system: '<S4>/Change BLACK Behavior'
typedef struct P_ChangeBLACKBehavior_Default_T_ P_ChangeBLACKBehavior_Default_T;

// Parameters for system: '<S190>/Change BLACK Behavior'
typedef struct P_ChangeBLACKBehavior_Defau_p_T_ P_ChangeBLACKBehavior_Defau_p_T;

// Parameters for system: '<S195>/Enabled Subsystem'
typedef struct P_EnabledSubsystem_DefaultExp_T_ P_EnabledSubsystem_DefaultExp_T;

// Parameters for system: '<S196>/Enabled Subsystem'
typedef struct P_EnabledSubsystem_DefaultE_c_T_ P_EnabledSubsystem_DefaultE_c_T;

// Parameters for system: '<S17>/Change BLACK Behavior'
typedef struct P_ChangeBLACKBehavior_Defau_b_T_ P_ChangeBLACKBehavior_Defau_b_T;

// Parameters (default storage)
typedef struct P_DefaultExperiment_T_ P_DefaultExperiment_T;

// Forward declaration for rtModel
typedef struct tag_RTM_DefaultExperiment_T RT_MODEL_DefaultExperiment_T;

#endif                                 // DefaultExperiment_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
