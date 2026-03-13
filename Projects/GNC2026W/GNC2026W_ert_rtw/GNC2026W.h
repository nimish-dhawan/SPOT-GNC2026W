//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.h
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
#ifndef GNC2026W_h_
#define GNC2026W_h_
#include <ctime>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "DAHostLib_Network.h"
#include "custom_data_logger.h"
#include "gpio_control.h"
#include "dynamixel_functions.h"
#include "dynamixel_sdk.h"
#include "resource_headers.h"
#include "GNC2026W_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <float.h>
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Block states (default storage) for system '<S1>/Phase #0: Synchronization'
struct DW_Phase0Synchronization_GNC2_T {
  int8_T Phase0Synchronization_SubsysRan;// '<S1>/Phase #0: Synchronization'
};

// Block states (default storage) for system '<S60>/If Action Subsystem'
struct DW_IfActionSubsystem_GNC2026W_T {
  int8_T IfActionSubsystem_SubsysRanBC;// '<S60>/If Action Subsystem'
};

// Block states (default storage) for system '<S1>/Phase #4: Return Home'
struct DW_Phase4ReturnHome_GNC2026W_T {
  int8_T Phase4ReturnHome_SubsysRanBC; // '<S1>/Phase #4: Return Home'
};

// Block states (default storage) for system '<S143>/MATLAB Function'
struct DW_MATLABFunction_GNC2026W_T {
  int32_T sfEvent;                     // '<S143>/MATLAB Function'
  boolean_T doneDoubleBufferReInit;    // '<S143>/MATLAB Function'
};

// Block states (default storage) for system '<S202>/MATLAB Function'
struct DW_MATLABFunction_GNC2026W_i_T {
  int32_T sfEvent;                     // '<S202>/MATLAB Function'
  boolean_T doneDoubleBufferReInit;    // '<S202>/MATLAB Function'
};

// Block states (default storage) for system '<S3>/Disable Thrusters (RED)'
struct DW_DisableThrustersRED_GNC202_T {
  int8_T DisableThrustersRED_SubsysRanBC;// '<S3>/Disable Thrusters (RED)'
};

// Block states (default storage) for system '<S3>/Disable Thrusters (BLACK)'
struct DW_DisableThrustersBLACK_GNC2_T {
  int8_T DisableThrustersBLACK_SubsysRan;// '<S3>/Disable Thrusters (BLACK)'
};

// Block states (default storage) for system '<S4>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC202_T {
  real_T UDPSend_NetworkLib[137];      // '<S207>/UDP Send'
  int8_T ChangeBLACKBehavior_SubsysRanBC;// '<S4>/Change BLACK Behavior'
};

// Block states (default storage) for system '<S323>/MATLAB Function'
struct DW_MATLABFunction_GNC2026W_l_T {
  int32_T sfEvent;                     // '<S323>/MATLAB Function'
  boolean_T doneDoubleBufferReInit;    // '<S323>/MATLAB Function'
};

// Block signals for system '<S320>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_T {
  real_T ema[3];                       // '<S323>/MATLAB Function'
};

// Block states (default storage) for system '<S320>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026W_T {
  real_T Delay_DSTATE[3];              // '<S323>/Delay'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S320>/Enabled Subsystem'
  DW_MATLABFunction_GNC2026W_l_T sf_MATLABFunction;// '<S323>/MATLAB Function'
};

// Block states (default storage) for system '<S321>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_g_T {
  real_T Delay_DSTATE[3];              // '<S325>/Delay'
  int32_T sfEvent;                     // '<S325>/MATLAB Function'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S321>/Enabled Subsystem'
  boolean_T doneDoubleBufferReInit;    // '<S325>/MATLAB Function'
};

// Block states (default storage) for system '<S330>/MATLAB Function'
struct DW_MATLABFunction_GNC2026W_o_T {
  int32_T sfEvent;                     // '<S330>/MATLAB Function'
  boolean_T doneDoubleBufferReInit;    // '<S330>/MATLAB Function'
};

// Block states (default storage) for system '<S240>/Experimental VIS States'
struct DW_ExperimentalVISStates_GNC2_T {
  int8_T ExperimentalVISStates_SubsysRan;// '<S240>/Experimental VIS States'
  int8_T IfActionSubsystem1_SubsysRanBC;// '<S244>/If Action Subsystem1'
  int8_T IfActionSubsystem_SubsysRanBC;// '<S244>/If Action Subsystem'
};

// Block states (default storage) for system '<S257>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_l_T {
  real_T UDPSendGUI_NetworkLib[137];   // '<S258>/UDP Send (GUI)'
  int8_T ChangeBLACKBehavior_SubsysRanBC;// '<S257>/Change BLACK Behavior'
};

// Block states (default storage) for system '<S261>/MATLAB Function'
struct DW_MATLABFunction_GNC2026W_o3_T {
  int32_T sfEvent;                     // '<S261>/MATLAB Function'
  boolean_T doneDoubleBufferReInit;    // '<S261>/MATLAB Function'
};

// Block signals for system '<S263>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_j_T {
  real_T Delay[3];                     // '<S278>/Delay'
  real_T ema[3];                       // '<S278>/MATLAB Function'
};

// Block states (default storage) for system '<S263>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_b_T {
  real_T Delay_DSTATE[3];              // '<S278>/Delay'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S263>/Enabled Subsystem'
  boolean_T EnabledSubsystem_MODE;     // '<S263>/Enabled Subsystem'
  DW_MATLABFunction_GNC2026W_l_T sf_MATLABFunction;// '<S278>/MATLAB Function'
};

// Block signals for system '<S264>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_h_T {
  real_T Delay[3];                     // '<S280>/Delay'
  real_T ema[3];                       // '<S280>/MATLAB Function'
};

// Block states (default storage) for system '<S264>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_c_T {
  real_T Delay_DSTATE[3];              // '<S280>/Delay'
  int32_T sfEvent;                     // '<S280>/MATLAB Function'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S264>/Enabled Subsystem'
  boolean_T doneDoubleBufferReInit;    // '<S280>/MATLAB Function'
  boolean_T EnabledSubsystem_MODE;     // '<S264>/Enabled Subsystem'
};

// Block signals for system '<S417>/Pseudoinverse1'
struct B_Pseudoinverse1_GNC2026W_T {
  real_T Pseudoinverse1[24];           // '<S417>/Pseudoinverse1'
};

// Block states (default storage) for system '<S417>/Pseudoinverse1'
struct DW_Pseudoinverse1_GNC2026W_T {
  dsp_simulink_Pseudoinverse_GN_T obj; // '<S417>/Pseudoinverse1'
  boolean_T objisempty;                // '<S417>/Pseudoinverse1'
};

// Block states (default storage) for system '<S414>/MATLAB Function1'
struct DW_MATLABFunction1_GNC2026W_T {
  int32_T sfEvent;                     // '<S414>/MATLAB Function1'
  boolean_T doneDoubleBufferReInit;    // '<S414>/MATLAB Function1'
};

// Block states (default storage) for system '<S414>/MATLAB Function5'
struct DW_MATLABFunction5_GNC2026W_T {
  int32_T sfEvent;                     // '<S414>/MATLAB Function5'
  boolean_T doneDoubleBufferReInit;    // '<S414>/MATLAB Function5'
};

// Block states (default storage) for system '<S420>/Create Rotation Matrix'
struct DW_CreateRotationMatrix_GNC20_T {
  int32_T sfEvent;                     // '<S420>/Create Rotation Matrix'
  boolean_T doneDoubleBufferReInit;    // '<S420>/Create Rotation Matrix'
};

// Block states (default storage) for system '<S415>/Create Rotation Matrix'
struct DW_CreateRotationMatrix_GNC_j_T {
  int32_T sfEvent;                     // '<S415>/Create Rotation Matrix'
  boolean_T doneDoubleBufferReInit;    // '<S415>/Create Rotation Matrix'
};

// Block signals for system '<S20>/Change BLACK Behavior'
struct B_ChangeBLACKBehavior_GNC20_m_T {
  real_T Clock1;                       // '<S450>/Clock1'
};

// Block states (default storage) for system '<S20>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_g_T {
  real_T UDPSendClock_NetworkLib[137]; // '<S450>/UDP Send (Clock)'
  int8_T ChangeBLACKBehavior_SubsysRanBC;// '<S20>/Change BLACK Behavior'
};

// Block signals (default storage)
struct B_GNC2026W_T {
  real_T Merge1[3];                    // '<S3>/Merge1'
  real_T Merge2[3];                    // '<S3>/Merge2'
  real_T Merge[3];                     // '<S3>/Merge'
  real_T Time_s;                       // '<S5>/Data Store Read4'
  real_T DataStoreRead5[3];            // '<S5>/Data Store Read5'
  real_T DataStoreRead1[3];            // '<S5>/Data Store Read1'
  real_T DataStoreRead6[9];            // '<S5>/Data Store Read6'
  real_T DataStoreRead7[3];            // '<S5>/Data Store Read7'
  real_T DataStoreRead8[3];            // '<S5>/Data Store Read8'
  real_T RED_Duty_Cycle[8];            // '<S5>/Data Store Read25'
  real_T RED_Control_Law_Enabler;      // '<S5>/Data Store Read37'
  real_T DataStoreRead3[3];            // '<S5>/Data Store Read3'
  real_T ARM_Control_Mode;             // '<S5>/Data Store Read23'
  real_T DataStoreRead21[3];           // '<S5>/Data Store Read21'
  real_T DataStoreRead20[6];           // '<S5>/Data Store Read20'
  real_T DataStoreRead30[3];           // '<S5>/Data Store Read30'
  real_T DataStoreRead22[3];           // '<S5>/Data Store Read22'
  real_T DataStoreRead24[3];           // '<S5>/Data Store Read24'
  real_T DataStoreRead9[3];            // '<S5>/Data Store Read9'
  real_T DataStoreRead10[9];           // '<S5>/Data Store Read10'
  real_T DataStoreRead11[3];           // '<S5>/Data Store Read11'
  real_T DataStoreRead12[3];           // '<S5>/Data Store Read12'
  real_T BLACK_Duty_Cycle[8];          // '<S5>/Data Store Read26'
  real_T BLACK_Control_Law_Enabler;    // '<S5>/Data Store Read60'
  real_T DataStoreRead19[3];           // '<S5>/Data Store Read19'
  real_T DataStoreRead18[3];           // '<S5>/Data Store Read18'
  real_T DataStoreRead16[3];           // '<S5>/Data Store Read16'
  real_T DataStoreRead13[9];           // '<S5>/Data Store Read13'
  real_T DataStoreRead14[3];           // '<S5>/Data Store Read14'
  real_T DataStoreRead15[3];           // '<S5>/Data Store Read15'
  real_T BLUE_Duty_Cycle[8];           // '<S5>/Data Store Read27'
  real_T BLUE_Control_Law_Enabler;     // '<S5>/Data Store Read83'
  real_T DataStoreRead17[3];           // '<S5>/Data Store Read17'
  real_T Float_State;                  // '<S5>/Data Store Read84'
  real_T Platform_Identification;      // '<S5>/Data Store Read85'
  real_T Simulation_Flag;              // '<S5>/Data Store Read86'
  real_T VIS_Measured_States[3];       // '<S5>/Data Store Read'
  real_T VIS_Confidence;               // '<S5>/Data Store Read2'
  real_T DataStoreRead28[3];           // '<S5>/Data Store Read28'
  real_T DataStoreRead29[6];           // '<S5>/Data Store Read29'
  real_T DataStoreRead32[3];           // '<S5>/Data Store Read32'
  real_T Desired_Separation_m;         // '<S5>/Data Store Read31'
  real_T sigma3[3];                    // '<S5>/Data Store Read33'
  real_T isValid;                      // '<S5>/Data Store Read34'
  real_T filterConfidence;             // '<S5>/Data Store Read35'
  real_T DataStoreRead36[3];           // '<S5>/Data Store Read36'
  real_T DataStoreRead38[3];           // '<S5>/Data Store Read38'
  real_T DataStoreRead39[3];           // '<S5>/Data Store Read39'
  real_T TmpSignalConversionAtUDPSendInp[10];
  real_T H_final[24];                  // '<S438>/MATLAB Function5'
  real_T duty_cycles[8];               // '<S438>/MATLAB Function5'
  real_T ThrustPer_Final_h[8];         // '<S446>/ThrustPer_Final'
  real_T In1;                          // '<S445>/In1'
  real_T H_final_j[24];                // '<S426>/MATLAB Function5'
  real_T duty_cycles_j[8];             // '<S426>/MATLAB Function5'
  real_T ThrustPer_Final_h5[8];        // '<S434>/ThrustPer_Final'
  real_T In1_g;                        // '<S433>/In1'
  real_T duty_cycles_m[8];             // '<S414>/MATLAB Function5'
  real_T ThrustPer_Final_h5j[8];       // '<S422>/ThrustPer_Final'
  real_T In1_g2;                       // '<S421>/In1'
  real_T DataTypeConversion;           // '<S309>/Data Type Conversion'
  real_T DataTypeConversion1;          // '<S309>/Data Type Conversion1'
  real_T TmpSignalConversionAtUDPSendI_o[2];
  real_T BeginBirth;                   // '<S309>/MATLAB Function2'
  real_T y;                            // '<S309>/MATLAB Function'
  real_T TmpSignalConversionAtUDPSend_og[28];
  real_T ManualSwitch;                 // '<S306>/Manual Switch'
  real_T CastToDouble;                 // '<S305>/Cast To Double'
  real_T CastToDouble1;                // '<S305>/Cast To Double1'
  real_T ReceivePhaseSpaceData_o1[19]; // '<S249>/Receive PhaseSpace Data'
  real_T ConvertBLAXfrommmtom;        // '<S250>/Convert BLAX from [mm] to [m]'
  real_T ConvertBLUXfrommmtom;        // '<S251>/Convert BLUX from [mm] to [m]'
  real_T ConvertREDXfrommmtom;        // '<S252>/Convert REDX from [mm] to [m]'
  real_T UDPReceiveREDClock_o1;        // '<S253>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_o1;      // '<S253>/UDP Receive (BLACK Clock)'
  real_T UDPReceiveBLUEClock_o1;       // '<S253>/UDP Receive (BLUE Clock)'
  real_T dy[3];                        // '<S300>/MATLAB Function'
  real_T dy_h[3];                      // '<S298>/MATLAB Function'
  real_T y2y1;                         // '<S296>/y2-y1'
  real_T dy_c[3];                      // '<S290>/MATLAB Function'
  real_T dy_d[3];                      // '<S288>/MATLAB Function'
  real_T y2y1_o;                       // '<S286>/y2-y1'
  real_T dy_p[3];                      // '<S280>/MATLAB Function'
  real_T dy_g[3];                      // '<S278>/MATLAB Function'
  real_T y_o;                          // '<S276>/MATLAB Function'
  real_T u_next;                       // '<S276>/MATLAB Function'
  real_T y_m[3];                       // '<S262>/Sample and Hold'
  real_T r_LAR_cam[3];                 // '<S262>/MATLAB Function'
  real_T r_REL[3];              // '<S262>/Inertial to Camera Frame (HARDWARE)'
  real_T isValue;                      // '<S268>/MATLAB Function1'
  real_T y_mo[3];                      // '<S262>/CV Noise'
  real_T y2y1_ob;                      // '<S266>/y2-y1'
  real_T In1_g20;                      // '<S254>/In1'
  real_T Merge_k[6];                   // '<S219>/Merge'
  real_T r_T_I[3];                     // '<S220>/Camera to Inertial Frame'
  real_T Merge_d[3];                   // '<S231>/Merge'
  real_T pose_n[3];                    // '<S221>/MEKF'
  real_T newMeasurement;               // '<S221>/MEKF'
  real_T Merge_b[3];                   // '<S240>/Merge'
  real_T r[3];                         // '<S222>/Unscented Kalman Filter'
  real_T VelocitytoPosition_e[3];      // '<S394>/Velocity to Position'
  real_T Atan2;                        // '<S404>/Atan2'
  real_T x_ddot[3];                    // '<S394>/MATLAB Function'
  real_T ThrustPer_Final_h5jz[3];      // '<S407>/ThrustPer_Final'
  real_T In1_g20a;                     // '<S406>/In1'
  real_T y2y1_ob4;                     // '<S408>/y2-y1'
  real_T dy_f[3];                      // '<S400>/MATLAB Function'
  real_T dy_j[3];                      // '<S398>/MATLAB Function'
  real_T ThrustPer_Final_h5jza[6];     // '<S388>/ThrustPer_Final'
  real_T In1_g20as;                    // '<S387>/In1'
  real_T y2y1_ob4j;                    // '<S389>/y2-y1'
  real_T dy_pu[3];                     // '<S380>/MATLAB Function'
  real_T dy_m[3];                      // '<S378>/MATLAB Function'
  real_T dy_dj[3];                     // '<S376>/MATLAB Function'
  real_T ThrustPer_Final_h5jzay[3];    // '<S360>/ThrustPer_Final'
  real_T In1_g20asd;                   // '<S359>/In1'
  real_T y2y1_ob4jq;                   // '<S361>/y2-y1'
  real_T dy_b[3];                      // '<S353>/MATLAB Function'
  real_T dy_hq[3];                     // '<S351>/MATLAB Function'
  real_T x_ddot_b[3];                  // '<S343>/MATLAB Function'
  real_T data[3];                      // '<S319>/MATLAB Function1'
  real_T isValid_b;                    // '<S319>/MATLAB Function1'
  real_T r_LAR_cam_k[3];               // '<S319>/MATLAB Function'
  real_T x_ddot_n[3];                  // '<S318>/MATLAB Function'
  real_T ThrustPer_Final_h5jzayd[3];   // '<S332>/ThrustPer_Final'
  real_T In1_g20asdt;                  // '<S331>/In1'
  real_T y2y1_ob4jq5;                  // '<S333>/y2-y1'
  real_T dy_cg[3];                     // '<S325>/MATLAB Function'
  real_T dy_pi[3];                     // '<S323>/MATLAB Function'
  real_T L;                            // '<S211>/MATLAB Function'
  real_T Merge3;                       // '<S154>/Merge3'
  real_T Merge4;                       // '<S154>/Merge4'
  real_T Merge5;                       // '<S154>/Merge5'
  real_T lambda[3];                    // '<S150>/MATLAB Function2'
  real_T lambdaFirstOrder[3];          // '<S150>/MATLAB Function2'
  real_T q_des[9];                     // '<S130>/MATLAB Function4'
  real_T In1_g20asdtg[3];              // '<S142>/In1'
  real_T DataStoreRead;                // '<S60>/Data Store Read'
  real_T cmd;                          // '<S60>/First Fit Detector'
  real_T BLACK_Control_Law_Enabler_j;  // '<S55>/First Fit Detector'
  real32_T UDPReceive_o1[5];           // '<S305>/UDP Receive'
  real32_T UDPReceive_o1_a[4];         // '<S303>/UDP Receive'
  uint8_T StringtoASCII[31];           // '<S216>/String to ASCII'
  uint8_T StringtoASCII2[31];          // '<S215>/String to ASCII2'
  uint8_T StringtoASCII1[31];          // '<S214>/String to ASCII1'
  B_ChangeBLACKBehavior_GNC20_m_T ChangeREDBehavior_h;// '<S20>/Change RED Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLUEBehavior_e;// '<S20>/Change BLUE Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLACKBehavior_i;// '<S20>/Change BLACK Behavior' 
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S417>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S417>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S417>/Pseudoinverse1'
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_l1;// '<S294>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_j_T EnabledSubsystem_kh;// '<S293>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_d;// '<S284>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_j_T EnabledSubsystem_lw;// '<S283>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_g;// '<S264>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_j_T EnabledSubsystem_it;// '<S263>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_p;// '<S395>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_kx;// '<S373>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S348>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_m;// '<S320>/Enabled Subsystem' 
};

// Block states (default storage) for system '<Root>'
struct DW_GNC2026W_T {
  Dynamixel_Controller_GNC2026W_T obj;
  // '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  GPIO_Write_GNC2026W_T obj_l;         // '<S217>/GPIO Write1'
  ReadArm_Position_Rates_GNC202_T obj_d;
                     // '<S218>/Read Joint Positions using  Dynamixel Encoders'
  IdentifyPlatform_GNC2026W_T obj_dk;  // '<S302>/WhoAmI'
  CustomDataLogger_GNC2026W_T obj_f;   // '<S210>/MATLAB System'
  real_T Delay_DSTATE;                 // '<S440>/Delay'
  real_T Delay_DSTATE_k;               // '<S428>/Delay'
  real_T Delay_DSTATE_kz;              // '<S416>/Delay'
  real_T Delay2_DSTATE;                // '<S261>/Delay2'
  real_T Delay1_DSTATE;                // '<S261>/Delay1'
  real_T Delay1_DSTATE_g[3];           // '<S264>/Delay1'
  real_T Delay1_DSTATE_b[3];           // '<S263>/Delay1'
  real_T Delay_DSTATE_h;               // '<S276>/Delay'
  real_T Delay1_DSTATE_f;              // '<S276>/Delay1'
  real_T Delay2_DSTATE_l;              // '<S282>/Delay2'
  real_T Delay1_DSTATE_l;              // '<S282>/Delay1'
  real_T Delay1_DSTATE_m[3];           // '<S284>/Delay1'
  real_T Delay1_DSTATE_lv[3];          // '<S283>/Delay1'
  real_T Delay2_DSTATE_l0;             // '<S292>/Delay2'
  real_T Delay1_DSTATE_ld;             // '<S292>/Delay1'
  real_T Delay1_DSTATE_c[3];           // '<S294>/Delay1'
  real_T Delay1_DSTATE_cq[3];          // '<S293>/Delay1'
  real_T Delay_DSTATE_c;               // '<S226>/Delay'
  real_T Delay1_DSTATE_g0;             // '<S226>/Delay1'
  real_T Delay_DSTATE_j;               // '<S232>/Delay'
  real_T Delay1_DSTATE_d;              // '<S232>/Delay1'
  real_T Delay_DSTATE_b;               // '<S241>/Delay'
  real_T Delay1_DSTATE_a;              // '<S241>/Delay1'
  real_T Delay_DSTATE_o;               // '<S218>/Delay'
  real_T Delay1_DSTATE_cg;             // '<S218>/Delay1'
  real_T Delay2_DSTATE_h;              // '<S218>/Delay2'
  real_T AccelerationtoVelocity_DSTATE[3];// '<S318>/Acceleration  to Velocity'
  real_T VelocitytoPosition_DSTATE[3]; // '<S318>/Velocity to Position'
  real_T Delay_DSTATE_f;               // '<S317>/Delay'
  real_T Delay2_DSTATE_i;              // '<S330>/Delay2'
  real_T Delay1_DSTATE_h;              // '<S330>/Delay1'
  real_T Delay1_DSTATE_p[3];           // '<S321>/Delay1'
  real_T Delay1_DSTATE_k[3];           // '<S320>/Delay1'
  real_T UD_DSTATE[3];                 // '<S327>/UD'
  real_T Delay_DSTATE_p;               // '<S341>/Delay'
  real_T Delay1_DSTATE_pv;             // '<S341>/Delay1'
  real_T AccelerationtoVelocity_DSTATE_g[3];// '<S343>/Acceleration  to Velocity' 
  real_T VelocitytoPosition_DSTATE_f[3];// '<S343>/Velocity to Position'
  real_T Delay_DSTATE_l;               // '<S346>/Delay'
  real_T Delay2_DSTATE_hf;             // '<S358>/Delay2'
  real_T Delay1_DSTATE_dx;             // '<S358>/Delay1'
  real_T Delay1_DSTATE_hq[3];          // '<S349>/Delay1'
  real_T Delay1_DSTATE_di[3];          // '<S348>/Delay1'
  real_T UD_DSTATE_f[3];               // '<S355>/UD'
  real_T AccelerationtoVelocity_DSTAT_gw[3];// '<S394>/Acceleration  to Velocity' 
  real_T VelocitytoPosition_DSTATE_e[3];// '<S394>/Velocity to Position'
  real_T Delay_DSTATE_n;               // '<S393>/Delay'
  real_T Delay2_DSTATE_hi;             // '<S405>/Delay2'
  real_T Delay1_DSTATE_k3;             // '<S405>/Delay1'
  real_T Delay1_DSTATE_dim[3];         // '<S396>/Delay1'
  real_T Delay1_DSTATE_ft[3];          // '<S395>/Delay1'
  real_T UD_DSTATE_p[3];               // '<S402>/UD'
  real_T Delay_DSTATE_fb[12];          // '<S363>/Delay'
  real_T VelocitytoPosition_DSTATE_ff[6];// '<S363>/Velocity to Position'
  real_T Delay_DSTATE_g;               // '<S368>/Delay'
  real_T Delay2_DSTATE_n;              // '<S386>/Delay2'
  real_T Delay1_DSTATE_e;              // '<S386>/Delay1'
  real_T Delay1_DSTATE_ff[3];          // '<S374>/Delay1'
  real_T Delay1_DSTATE_a1[3];          // '<S372>/Delay1'
  real_T Delay1_DSTATE_bc[3];          // '<S373>/Delay1'
  real_T UD_DSTATE_l[3];               // '<S382>/UD'
  real_T AccelerationtoVelocity_DSTATE_c[6];// '<S363>/Acceleration to Velocity' 
  real_T Delay_DSTATE_bq[3];           // '<S380>/Delay'
  real_T UD_DSTATE_d;                  // '<S189>/UD'
  real_T UD_DSTATE_el;                 // '<S190>/UD'
  real_T UD_DSTATE_aa;                 // '<S191>/UD'
  real_T UD_DSTATE_ld;                 // '<S175>/UD'
  real_T UD_DSTATE_k;                  // '<S176>/UD'
  real_T UD_DSTATE_h;                  // '<S177>/UD'
  real_T UD_DSTATE_o;                  // '<S198>/UD'
  real_T UD_DSTATE_n;                  // '<S199>/UD'
  real_T UD_DSTATE_hu;                 // '<S200>/UD'
  real_T UD_DSTATE_j;                  // '<S170>/UD'
  real_T UD_DSTATE_c;                  // '<S171>/UD'
  real_T UD_DSTATE_dk;                 // '<S172>/UD'
  real_T UD_DSTATE_eh;                 // '<S193>/UD'
  real_T UD_DSTATE_hv;                 // '<S194>/UD'
  real_T UD_DSTATE_kv;                 // '<S195>/UD'
  real_T Delay_DSTATE_lx;              // '<S166>/Delay'
  real_T Delay1_DSTATE_ba;             // '<S166>/Delay1'
  real_T Delay_DSTATE_c5;              // '<S165>/Delay'
  real_T Delay1_DSTATE_ag;             // '<S165>/Delay1'
  real_T UD_DSTATE_aq;                 // '<S180>/UD'
  real_T UD_DSTATE_pr;                 // '<S181>/UD'
  real_T UD_DSTATE_prk;                // '<S182>/UD'
  real_T UD_DSTATE_eg;                 // '<S203>/UD'
  real_T UD_DSTATE_cd;                 // '<S204>/UD'
  real_T UD_DSTATE_hd;                 // '<S205>/UD'
  real_T Delay_DSTATE_h0;              // '<S143>/Delay'
  real_T Delay1_DSTATE_lo;             // '<S143>/Delay1'
  creal_T q;                           // '<S221>/MEKF'
  real_T NextOutput;                   // '<Root>/Gaussian Noise'
  real_T UDPSend_NetworkLib[137];      // '<S19>/UDP Send'
  real_T L0;                           // '<Root>/Data Store Memory'
  real_T RED_desired[9];               // '<Root>/Data Store Memory1'
  real_T LOS_Angle;                    // '<Root>/Data Store Memory2'
  real_T lambda[3];                    // '<Root>/Data Store Memory3'
  real_T lambdaFirstOrder[3];          // '<Root>/Data Store Memory4'
  real_T ARM_Joint_Angles_rad[3];      // '<Root>/Data Store Memory6'
  real_T BLUE_Control_Law_Enabler;     // '<Root>/RED_Tz1'
  real_T ARM_Control_Mode;             // '<Root>/RED_Tz15'
  real_T BLUE_Path_Planner_Selection;  // '<Root>/RED_Tz2'
  real_T RED_Control_Law_Enabler;      // '<Root>/RED_Tz20'
  real_T RED_Path_Planner_Selection;   // '<Root>/RED_Tz25'
  real_T ARM_Path_Planner_Selection;   // '<Root>/RED_Tz37'
  real_T ARM_Control_Law_Enabler;      // '<Root>/RED_Tz38'
  real_T Float_State;                  // '<Root>/RED_Tz7'
  real_T BLACK_Control_Law_Enabler;    // '<Root>/RED_Tz8'
  real_T BLACK_Path_Planner_Selection; // '<Root>/RED_Tz9'
  real_T Univ_Time;                    // '<Root>/Universal_Time'
  real_T BLACK_Measured_States[9];     // '<Root>/Universal_Time10'
  real_T BLUE_Desired_States[3];       // '<Root>/Universal_Time13'
  real_T BLUE_Duty_Cycles[8];          // '<Root>/Universal_Time14'
  real_T BLACK_Saturated_Controls[3];  // '<Root>/Universal_Time15'
  real_T RED_Duty_Cycle[8];            // '<Root>/Universal_Time16'
  real_T WhoAmI;                       // '<Root>/Universal_Time19'
  real_T isSim;                        // '<Root>/Universal_Time20'
  real_T BLACK_CV_States[3];           // '<Root>/Universal_Time21'
  real_T VIS_Measured_States[3];       // '<Root>/Universal_Time22'
  real_T BLACK_Filtered_States[6];     // '<Root>/Universal_Time23'
  real_T ARM_Measured_States[6];       // '<Root>/Universal_Time24'
  real_T BLACK_Desired_States[3];      // '<Root>/Universal_Time25'
  real_T RED_Measured_States[9];       // '<Root>/Universal_Time26'
  real_T RED_Saturated_Controls[3];    // '<Root>/Universal_Time28'
  real_T RED_Desired_States[3];        // '<Root>/Universal_Time29'
  real_T BLACK_Duty_Cycles[8];         // '<Root>/Universal_Time3'
  real_T RED_IMU_Measurements[3];      // '<Root>/Universal_Time31'
  real_T BLACK_IMU_Measurements[3];    // '<Root>/Universal_Time33'
  real_T BLUE_IMU_Measurements[3];     // '<Root>/Universal_Time34'
  real_T VIS_LAR_States[3];            // '<Root>/Universal_Time36'
  real_T sigma3[3];                    // '<Root>/Universal_Time37'
  real_T isValid;                      // '<Root>/Universal_Time38'
  real_T BLUE_Measured_States[9];      // '<Root>/Universal_Time4'
  real_T filterConfidence;             // '<Root>/Universal_Time40'
  real_T ARM_Grab_Complete;            // '<Root>/Universal_Time41'
  real_T BLUE_Saturated_Controls[3];   // '<Root>/Universal_Time6'
  real_T ARM_Desired_States[3];        // '<Root>/Universal_Time8'
  real_T VIS_Confidence;               // '<Root>/Universal_Time9'
  real_T UDPSend_NetworkLib_f[137];    // '<S309>/UDP Send'
  real_T set;                          // '<S309>/MATLAB Function'
  real_T UDPSend_NetworkLib_m[137];    // '<S308>/UDP Send'
  real_T UDPReceive_NetworkLib[137];   // '<S305>/UDP Receive'
  real_T UDPReceive_NetworkLib_i[137]; // '<S303>/UDP Receive'
  real_T ReceivePhaseSpaceData_NetworkLi[137];// '<S249>/Receive PhaseSpace Data' 
  real_T UDPReceiveREDClock_NetworkLib[137];// '<S253>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_NetworkLib[137];// '<S253>/UDP Receive (BLACK Clock)' 
  real_T UDPReceiveBLUEClock_NetworkLib[137];// '<S253>/UDP Receive (BLUE Clock)' 
  real_T k;                            // '<S262>/Sample and Hold'
  real_T y_hold[3];                    // '<S262>/Sample and Hold'
  real_T k_h;                          // '<S268>/MATLAB Function1'
  real_T x[6];                         // '<S220>/EKF'
  real_T P[36];                        // '<S220>/EKF'
  real_T theta;                        // '<S220>/EKF'
  real_T theta_prev;                   // '<S220>/EKF'
  real_T x_b[5];                       // '<S221>/MEKF'
  real_T P_j[36];                      // '<S221>/MEKF'
  real_T theta_prev_j;                 // '<S221>/MEKF'
  real_T theta_cont;                   // '<S221>/MEKF'
  real_T k_j;                          // '<S221>/MEKF'
  real_T converge;                     // '<S222>/Unscented Kalman Filter'
  real_T x_h[6];                       // '<S222>/Unscented Kalman Filter'
  real_T P_g[36];                      // '<S222>/Unscented Kalman Filter'
  real_T k_f;                          // '<S222>/Unscented Kalman Filter'
  real_T NextOutput_f;                 // '<S312>/Add Noise'
  real_T NextOutput_m;                 // '<S313>/Add Noise'
  real_T NextOutput_a;                 // '<S364>/Add Noise'
  real_T NextOutput_p;                 // '<S363>/Add Noise'
  real_T k_g;                          // '<S319>/Sample and Hold'
  real_T y_hold_i[3];                  // '<S319>/Sample and Hold'
  real_T k_hf;                         // '<S319>/MATLAB Function1'
  real_T UDPSend3_NetworkLib[137];     // '<S216>/UDP Send3'
  real_T UDPSend2_NetworkLib[137];     // '<S215>/UDP Send2'
  real_T UDPSend1_NetworkLib[137];     // '<S214>/UDP Send1'
  real_T l1;                           // '<S150>/MATLAB Function2'
  real_T l2;                           // '<S150>/MATLAB Function2'
  real_T x_l[3];                       // '<S150>/MATLAB Function2'
  real_T P_l[9];                       // '<S150>/MATLAB Function2'
  real_T counter;                      // '<S60>/First Fit Detector'
  real_T firstfit;                     // '<S60>/First Fit Detector'
  real_T prev;                         // '<S60>/First Fit Detector'
  real_T phase;                        // '<S60>/First Fit Detector'
  char_T RED_Logger[256];              // '<Root>/RED_Tz3'
  char_T BLACK_Logger[256];            // '<Root>/RED_Tz4'
  char_T BLUE_Logger[256];             // '<Root>/RED_Tz5'
  comm_internal_BernoulliBinary_T obj_fv;// '<Root>/Dropped Frames'
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       // '<S5>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      // '<S309>/Scope1'

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      // '<S309>/Scope2'

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      // '<S309>/Scope4'

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      // '<S309>/Scope5'

  struct {
    void *LoggedData;
  } Scope1_PWORK_g;                    // '<S306>/Scope1'

  struct {
    void *LoggedData;
  } Scope_PWORK_h;                     // '<S305>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK_b;                    // '<S262>/Scope1'

  struct {
    void *LoggedData;
  } Scope2_PWORK_i;                    // '<S262>/Scope2'

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      // '<S262>/Scope3'

  struct {
    void *LoggedData;
  } Scope4_PWORK_m;                    // '<S262>/Scope4'

  struct {
    void *LoggedData;
  } Scope_PWORK_k;                     // '<S268>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK_o;                    // '<S219>/Scope1'

  struct {
    void *LoggedData;
  } Scope_PWORK_j;                     // '<S220>/Scope'

  struct {
    void *LoggedData;
  } Scope_PWORK_l;                     // '<S221>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK_f;                    // '<S221>/Scope1'

  struct {
    void *LoggedData;
  } Scope3_PWORK_e;                    // '<S222>/Scope3'

  struct {
    void *LoggedData;
  } Scope_PWORK_m;                     // '<S319>/Scope'

  struct {
    void *LoggedData;
  } Scope2_PWORK_it;                   // '<S319>/Scope2'

  struct {
    void *LoggedData;
  } Scope3_PWORK_p;                    // '<S319>/Scope3'

  struct {
    void *LoggedData;
  } Red_fromdyn_PWORK;                 // '<S391>/Red_fromdyn'

  struct {
    void *LoggedData;
  } Scope_PWORK_kw;                    // '<S392>/Scope'

  struct {
    void *LoggedData;
  } Scope_PWORK_e;                     // '<S154>/Scope'

  struct {
    void *LoggedData;
  } Scope_PWORK_b;                     // '<S150>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK_a;                    // '<S150>/Scope1'

  struct {
    void *LoggedData;
  } Scope_PWORK_o;                     // '<S138>/Scope'

  struct {
    void *LoggedData;
  } Scope_PWORK_em;                    // '<S55>/Scope'

  struct {
    void *LoggedData;
  } Scope_PWORK_c;                     // '<S60>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK_h;                    // '<S60>/Scope1'

  uint32_T RandSeed;                   // '<Root>/Gaussian Noise'
  uint32_T method;                     // '<S262>/CV Noise'
  uint32_T state;                      // '<S262>/CV Noise'
  uint32_T state_j[2];                 // '<S262>/CV Noise'
  uint32_T state_k[625];               // '<S262>/CV Noise'
  uint32_T RandSeed_a;                 // '<S312>/Add Noise'
  uint32_T RandSeed_o;                 // '<S313>/Add Noise'
  uint32_T RandSeed_m;                 // '<S364>/Add Noise'
  uint32_T RandSeed_e;                 // '<S363>/Add Noise'
  uint32_T method_b;                   // '<S319>/CV Noise'
  uint32_T state_e;                    // '<S319>/CV Noise'
  uint32_T state_a[2];                 // '<S319>/CV Noise'
  uint32_T state_kg[625];              // '<S319>/CV Noise'
  uint32_T method_e;                   // '<Root>/Dropped Frames'
  uint32_T state_d[625];               // '<Root>/Dropped Frames'
  uint32_T state_jw[2];                // '<Root>/Dropped Frames'
  uint32_T state_b;                    // '<Root>/Dropped Frames'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S20>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_b;
    // '<S20>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_c;
    // '<S20>/This IF block determines whether or not to run the RED sim//exp '
  int8_T ChangeREDBehavior_SubsysRanBC;// '<S19>/Change RED Behavior'
  int8_T EnabledSubsystem1_SubsysRanBC;// '<S440>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S440>/Enabled Subsystem'
  int8_T ChangeBLUEBehavior_SubsysRanBC;// '<S19>/Change BLUE Behavior'
  int8_T EnabledSubsystem1_SubsysRanBC_b;// '<S428>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC_c;// '<S428>/Enabled Subsystem'
  int8_T ChangeBLACKBehavior_SubsysRanBC;// '<S19>/Change BLACK Behavior'
  int8_T EnabledSubsystem1_SubsysRanBC_m;// '<S416>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC_m;// '<S416>/Enabled Subsystem'
  int8_T SENDROBUDP_SubsysRanBC;       // '<S16>/SEND ROB UDP'
  int8_T Subsystem_SubsysRanBC;        // '<S15>/Subsystem'
  int8_T ChangeARMBehavior_SubsysRanBC;// '<S14>/Change ARM Behavior'
  int8_T SimulatedFlag_SubsysRanBC;    // '<S13>/Simulated Flag'
  int8_T ROBUDP_SubsysRanBC;           // '<S13>/ROB UDP'
  int8_T CVUDP_SubsysRanBC;            // '<S12>/CV UDP'
  int8_T ReadingisValid_SubsysRanBC;   // '<S303>/Reading isValid'
  int8_T Subsystem_SubsysRanBC_d;      // '<S11>/Subsystem'
  int8_T InitializeUniversalTimeSimulati;
                              // '<S10>/Initialize Universal Time (Simulation)'
  int8_T UseHardwaretoObtainStates_Subsy;// '<S10>/Use Hardware to Obtain States' 
  int8_T ThisIFblockdetermineswhether_ch;
  // '<S257>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhether_cs;
  // '<S257>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_d;
  // '<S257>/This IF block determines whether or not to run the RED sim//exp '
  int8_T EnabledSubsystem3_SubsysRanBC;// '<S292>/Enabled Subsystem3'
  int8_T EnabledSubsystem3_SubsysRanBC_g;// '<S282>/Enabled Subsystem3'
  int8_T ArtificialisValidFlag_SubsysRan;// '<S262>/Artificial isValid Flag'
  int8_T EnabledSubsystem3_SubsysRanB_gf;// '<S261>/Enabled Subsystem3'
  int8_T EnabledSubsystem2_SubsysRanBC;// '<S253>/Enabled Subsystem2'
  int8_T IfActionSubsystem_SubsysRanBC;// '<S9>/If Action Subsystem'
  int8_T EKF_SubsysRanBC;              // '<S219>/EKF'
  int8_T MEKF_SubsysRanBC;             // '<S219>/MEKF'
  int8_T ArtificialVISStates_SubsysRanBC;// '<S231>/Artificial VIS States'
  int8_T UKF_SubsysRanBC;              // '<S219>/UKF'
  int8_T ArtificialVISStates_SubsysRan_g;// '<S240>/Artificial VIS States'
  int8_T ChangeARMBehavior_SubsysRanBC_b;// '<S8>/Change ARM Behavior'
  int8_T SimulatePlantDynamics_SubsysRan;// '<Root>/Simulate Plant Dynamics'
  int8_T REDOnly_SubsysRanBC;          // '<S314>/RED Only'
  int8_T EnabledSubsystem1_SubsysRanB_mm;// '<S393>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC_n;// '<S393>/Enabled Subsystem'
  int8_T EnabledSubsystem3_SubsysRanBC_p;// '<S405>/Enabled Subsystem3'
  int8_T REDARM_SubsysRanBC;           // '<S314>/RED + ARM'
  int8_T EnabledSubsystem1_SubsysRanB_bb;// '<S368>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC_b;// '<S368>/Enabled Subsystem'
  int8_T EnabledSubsystem3_SubsysRanB_g4;// '<S386>/Enabled Subsystem3'
  int8_T EnabledSubsystem_SubsysRanBC_l;// '<S374>/Enabled Subsystem'
  int8_T EnabledSubsystem1_SubsysRanBC_h;// '<S346>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC_d;// '<S346>/Enabled Subsystem'
  int8_T EnabledSubsystem3_SubsysRanBC_b;// '<S358>/Enabled Subsystem3'
  int8_T EnabledSubsystem1_SubsysRanBC_p;// '<S317>/Enabled Subsystem1'
  int8_T EnabledSubsystem_SubsysRanBC_bo;// '<S317>/Enabled Subsystem'
  int8_T EnabledSubsystem3_SubsysRanBC_c;// '<S330>/Enabled Subsystem3'
  int8_T EnablePucks_SubsysRanBC;      // '<S7>/Enable Pucks'
  int8_T ChangeREDBehavior_SubsysRanBC_m;// '<S6>/Change RED Behavior'
  int8_T ChangeBLUEBehavior_SubsysRanB_l;// '<S6>/Change BLUE Behavior'
  int8_T ChangeBLACKBehavior_SubsysRan_p;// '<S6>/Change BLACK Behavior'
  int8_T DisableControlARM_SubsysRanBC;// '<S3>/Disable Control (ARM)'
  int8_T DefaultPDARM_SubsysRanBC;     // '<S3>/Default PD (ARM)'
  int8_T PassthroughforExperiment_Subsys;// '<S154>/Passthrough for Experiment'
  int8_T SimulatedPositionController_Sub;
                                      // '<S154>/Simulated Position Controller'
  int8_T DefaultLQRControlBLUE_SubsysRan;// '<S3>/Default LQR Control (BLUE)'
  int8_T DefaultPDControlBLUE_SubsysRanB;// '<S3>/Default PD Control (BLUE)'
  int8_T DefaultLQRControlBLACK_SubsysRa;// '<S3>/Default LQR Control (BLACK)'
  int8_T DefaultPDControlBLACK_SubsysRan;// '<S3>/Default PD Control (BLACK)'
  int8_T CustomControlRED_SubsysRanBC; // '<S3>/Custom Control (RED)'
  int8_T DefaultLQRControlRED_SubsysRanB;// '<S3>/Default LQR Control (RED)'
  int8_T DefaultPDControlRED_SubsysRanBC;// '<S3>/Default PD Control (RED)'
  int8_T DisablePPLARM_SubsysRanBC;    // '<S2>/Disable PPL (ARM)'
  int8_T CustomPPLARM_SubsysRanBC;     // '<S2>/Custom PPL (ARM)'
  int8_T DisablePPLBLUE_SubsysRanBC;   // '<S2>/Disable PPL (BLUE)'
  int8_T CustomPPLBLUE_SubsysRanBC;    // '<S2>/Custom PPL (BLUE)'
  int8_T DisablePPLBLACK_SubsysRanBC;  // '<S2>/Disable PPL (BLACK)'
  int8_T CustomPPLBLACK_SubsysRanBC;   // '<S2>/Custom PPL (BLACK)'
  int8_T DisablePPLRED_SubsysRanBC;    // '<S2>/Disable PPL (RED)'
  int8_T CustomPPLRED_SubsysRanBC;     // '<S2>/Custom PPL (RED)'
  int8_T EnabledSubsystem_SubsysRanBC_o;// '<S138>/Enabled Subsystem'
  int8_T Phase3Experiment_SubsysRanBC; // '<S1>/Phase #3: Experiment'
  int8_T SubPhase4_SubsysRanBC;        // '<S24>/Sub-Phase #4'
  int8_T SubPhase3_SubsysRanBC;        // '<S24>/Sub-Phase #3 '
  int8_T SubPhase2_SubsysRanBC;        // '<S24>/Sub-Phase #2 '
  int8_T SubPhase1_SubsysRanBC;        // '<S24>/Sub-Phase #1'
  int8_T Phase2InitialPosition_SubsysRan;// '<S1>/Phase #2: Initial Position'
  boolean_T k_not_empty;               // '<S262>/Sample and Hold'
  boolean_T initial_theta;             // '<S220>/EKF'
  boolean_T k_not_empty_i;             // '<S319>/Sample and Hold'
  boolean_T x_not_empty_k;             // '<S150>/MATLAB Function2'
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeREDBehavior_h;// '<S20>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLUEBehavior_e;// '<S20>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLACKBehavior_i;// '<S20>/Change BLACK Behavior' 
  DW_CreateRotationMatrix_GNC_j_T sf_CreateRotationMatrix_e;// '<S439>/Create Rotation Matrix' 
  DW_CreateRotationMatrix_GNC20_T sf_CreateRotationMatrix_i;// '<S444>/Create Rotation Matrix' 
  DW_MATLABFunction1_GNC2026W_T sf_MATLABFunction8;// '<S438>/MATLAB Function8'
  DW_MATLABFunction5_GNC2026W_T sf_MATLABFunction5_e;// '<S438>/MATLAB Function5' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S417>/Pseudoinverse1'
  DW_CreateRotationMatrix_GNC_j_T sf_CreateRotationMatrix_n;// '<S427>/Create Rotation Matrix' 
  DW_CreateRotationMatrix_GNC20_T sf_CreateRotationMatrix_c;// '<S432>/Create Rotation Matrix' 
  DW_MATLABFunction5_GNC2026W_T sf_MATLABFunction5_i;// '<S426>/MATLAB Function5' 
  DW_MATLABFunction1_GNC2026W_T sf_MATLABFunction1_i;// '<S426>/MATLAB Function1' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S417>/Pseudoinverse1'
  DW_CreateRotationMatrix_GNC_j_T sf_CreateRotationMatrix_a;// '<S415>/Create Rotation Matrix' 
  DW_CreateRotationMatrix_GNC20_T sf_CreateRotationMatrix;// '<S420>/Create Rotation Matrix' 
  DW_MATLABFunction5_GNC2026W_T sf_MATLABFunction5;// '<S414>/MATLAB Function5'
  DW_MATLABFunction1_GNC2026W_T sf_MATLABFunction1_l;// '<S414>/MATLAB Function1' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S417>/Pseudoinverse1'
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_l1;// '<S294>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_b_T EnabledSubsystem_kh;// '<S293>/Enabled Subsystem' 
  DW_MATLABFunction_GNC2026W_o3_T sf_MATLABFunction_kd;// '<S292>/MATLAB Function' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_d;// '<S284>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_b_T EnabledSubsystem_lw;// '<S283>/Enabled Subsystem' 
  DW_MATLABFunction_GNC2026W_o3_T sf_MATLABFunction_es;// '<S282>/MATLAB Function' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_g;// '<S264>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_b_T EnabledSubsystem_it;// '<S263>/Enabled Subsystem' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_gq;// '<S276>/MATLAB Function'
  DW_MATLABFunction_GNC2026W_o3_T sf_MATLABFunction_j;// '<S261>/MATLAB Function' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeREDBehavior_d;// '<S257>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLUEBehavior_f;// '<S257>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLACKBehavior_e;// '<S257>/Change BLACK Behavior' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_nq;// '<S226>/MATLAB Function'
  DW_ExperimentalVISStates_GNC2_T ExperimentalVISStates_a;// '<S231>/Experimental VIS States' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_p;// '<S232>/MATLAB Function'
  DW_ExperimentalVISStates_GNC2_T ExperimentalVISStates;// '<S240>/Experimental VIS States' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_n5;// '<S241>/MATLAB Function'
  DW_MATLABFunction_GNC2026W_o_T sf_MATLABFunction_iu;// '<S405>/MATLAB Function' 
  DW_EnabledSubsystem_GNC2026_g_T EnabledSubsystem_h;// '<S396>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_p;// '<S395>/Enabled Subsystem' 
  DW_MATLABFunction_GNC2026W_o_T sf_MATLABFunction_m;// '<S386>/MATLAB Function' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_kx;// '<S373>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_g_T EnabledSubsystem_l;// '<S372>/Enabled Subsystem' 
  DW_MATLABFunction_GNC2026W_o_T sf_MATLABFunction_g;// '<S358>/MATLAB Function' 
  DW_EnabledSubsystem_GNC2026_g_T EnabledSubsystem_i;// '<S349>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S348>/Enabled Subsystem' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_l2;// '<S341>/MATLAB Function'
  DW_MATLABFunction_GNC2026W_o_T sf_MATLABFunction_o;// '<S330>/MATLAB Function' 
  DW_EnabledSubsystem_GNC2026_g_T EnabledSubsystem_b;// '<S321>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_m;// '<S320>/Enabled Subsystem' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeREDBehavior;// '<S4>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeBLUEBehavior;// '<S4>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeBLACKBehavior;// '<S4>/Change BLACK Behavior' 
  DW_DisableThrustersRED_GNC202_T CustomControlARM;// '<S3>/Custom Control (ARM)' 
  DW_DisableThrustersBLACK_GNC2_T DisableThrustersBLUE;// '<S3>/Disable Thrusters (BLUE)' 
  DW_MATLABFunction_GNC2026W_i_T sf_MATLABFunction_k;// '<S174>/MATLAB Function' 
  DW_MATLABFunction_GNC2026W_i_T sf_MATLABFunction_cj;// '<S197>/MATLAB Function' 
  DW_DisableThrustersBLACK_GNC2_T DisableThrustersBLACK;// '<S3>/Disable Thrusters (BLACK)' 
  DW_MATLABFunction_GNC2026W_i_T sf_MATLABFunction_c;// '<S169>/MATLAB Function' 
  DW_MATLABFunction_GNC2026W_i_T sf_MATLABFunction_de;// '<S192>/MATLAB Function' 
  DW_DisableThrustersRED_GNC202_T DisableThrustersRED;// '<S3>/Disable Thrusters (RED)' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_d;// '<S165>/MATLAB Function'
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_i;// '<S166>/MATLAB Function'
  DW_MATLABFunction_GNC2026W_i_T sf_MATLABFunction_h;// '<S179>/MATLAB Function' 
  DW_MATLABFunction_GNC2026W_i_T sf_MATLABFunction_n2;// '<S202>/MATLAB Function' 
  DW_MATLABFunction_GNC2026W_T sf_MATLABFunction_n;// '<S143>/MATLAB Function'
  DW_Phase0Synchronization_GNC2_T Phase6CleanShutdown;// '<S1>/Phase #6: Clean Shutdown' 
  DW_Phase4ReturnHome_GNC2026W_T Phase5HoldHome;// '<S1>/Phase #5: Hold Home'
  DW_Phase4ReturnHome_GNC2026W_T Phase4ReturnHome;// '<S1>/Phase #4: Return Home' 
  DW_IfActionSubsystem_GNC2026W_T IfActionSubsystem5;// '<S60>/If Action Subsystem5' 
  DW_IfActionSubsystem_GNC2026W_T IfActionSubsystem4;// '<S60>/If Action Subsystem4' 
  DW_IfActionSubsystem_GNC2026W_T IfActionSubsystem3;// '<S60>/If Action Subsystem3' 
  DW_IfActionSubsystem_GNC2026W_T IfActionSubsystem2;// '<S60>/If Action Subsystem2' 
  DW_IfActionSubsystem_GNC2026W_T IfActionSubsystem1;// '<S60>/If Action Subsystem1' 
  DW_IfActionSubsystem_GNC2026W_T IfActionSubsystem_a;// '<S60>/If Action Subsystem' 
  DW_Phase0Synchronization_GNC2_T Phase1StartFloating;// '<S1>/Phase #1: Start Floating ' 
  DW_Phase0Synchronization_GNC2_T Phase0Synchronization;// '<S1>/Phase #0: Synchronization' 
};

// Parameters for system: '<S1>/Phase #0: Synchronization'
struct P_Phase0Synchronization_GNC20_T_ {
  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Constant8'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S21>/Puck State'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 0"
                                          //  Referenced by: '<S21>/String Constant'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 0"
                                          //  Referenced by: '<S21>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 0"
                                         //  Referenced by: '<S21>/String Constant2'

};

// Parameters for system: '<S60>/If Action Subsystem'
struct P_IfActionSubsystem_GNC2026W_T_ {
  real_T Constant_Value;               // Expression: 2
                                          //  Referenced by: '<S78>/Constant'

  real_T Constant1_Value;              // Expression: 2
                                          //  Referenced by: '<S78>/Constant1'

};

// Parameters for system: '<S1>/Phase #4: Return Home'
struct P_Phase4ReturnHome_GNC2026W_T_ {
  real_T Constant11_Value;             // Expression: 0
                                          //  Referenced by: '<S25>/Constant11'

  real_T Constant12_Value;             // Expression: 0
                                          //  Referenced by: '<S25>/Constant12'

  real_T Constant14_Value;             // Expression: 0
                                          //  Referenced by: '<S25>/Constant14'

  real_T Constant15_Value;             // Expression: 0
                                          //  Referenced by: '<S25>/Constant15'

  real_T Constant18_Value;             // Expression: 0
                                          //  Referenced by: '<S25>/Constant18'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<S25>/Constant4'

  real_T Constant5_Value;              // Expression: 2
                                          //  Referenced by: '<S25>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S25>/Constant6'

  real_T Constant8_Value;              // Expression: 2
                                          //  Referenced by: '<S25>/Constant8'

  real_T Constant3_Value;              // Expression: pi/2
                                          //  Referenced by: '<S119>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S119>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S119>/Constant2'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 4"
                                          //  Referenced by: '<S25>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 4"
                                         //  Referenced by: '<S25>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 4"
                                          //  Referenced by: '<S25>/String Constant'

};

// Parameters for system: '<S3>/Disable Thrusters (RED)'
struct P_DisableThrustersRED_GNC2026_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S161>/Zero'

};

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
struct P_DisableThrustersBLACK_GNC20_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S159>/Zero'

};

// Parameters for system: '<S4>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC2026_T_ {
  int32_T Constant1_Value;             // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S207>/Constant1'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S207>/UDP Send'

};

// Parameters for system: '<S320>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S323>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S323>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S323>/Delay'

};

// Parameters for system: '<S321>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_m_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S325>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S325>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S325>/Delay'

};

// Parameters for system: '<S257>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_p_T_ {
  int32_T UDPSendGUI_Port;             // Computed Parameter: UDPSendGUI_Port
                                          //  Referenced by: '<S258>/UDP Send (GUI)'

};

// Parameters for system: '<S263>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_o_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S278>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S278>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S278>/Delay'

};

// Parameters for system: '<S264>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_c_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S280>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S280>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S280>/Delay'

};

// Parameters for system: '<S20>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_b_T_ {
  int32_T UDPSendClock_Port;           // Computed Parameter: UDPSendClock_Port
                                          //  Referenced by: '<S450>/UDP Send (Clock)'

};

// Parameters (default storage)
struct P_GNC2026W_T_ {
  real_T A_c[9];                       // Variable: A_c
                                          //  Referenced by: '<S150>/Constant7'

  real_T CVrate;                       // Variable: CVrate
                                          //  Referenced by:
                                          //    '<S220>/EKF'
                                          //    '<S221>/MEKF'
                                          //    '<S222>/Unscented Kalman Filter'
                                          //    '<S319>/Sample and Hold'
                                          //    '<S262>/Sample and Hold'

  real_T F_red_X_nominal;              // Variable: F_red_X_nominal
                                          //  Referenced by:
                                          //    '<S414>/MATLAB Function5'
                                          //    '<S426>/MATLAB Function5'
                                          //    '<S438>/MATLAB Function5'

  real_T F_red_Y_nominal;              // Variable: F_red_Y_nominal
                                          //  Referenced by:
                                          //    '<S414>/MATLAB Function5'
                                          //    '<S426>/MATLAB Function5'
                                          //    '<S438>/MATLAB Function5'

  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by: '<S417>/MATLAB Function'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by: '<S429>/MATLAB Function'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by: '<S441>/MATLAB Function'

  real_T F_u[3];                       // Variable: F_u
                                          //  Referenced by: '<S150>/Constant3'

  real_T Gamma1_el;                    // Variable: Gamma1_el
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma1_sh;                    // Variable: Gamma1_sh
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma1_wr;                    // Variable: Gamma1_wr
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma2_el;                    // Variable: Gamma2_el
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma2_sh;                    // Variable: Gamma2_sh
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma2_wr;                    // Variable: Gamma2_wr
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma3_el;                    // Variable: Gamma3_el
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma3_sh;                    // Variable: Gamma3_sh
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma3_wr;                    // Variable: Gamma3_wr
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma4_el;                    // Variable: Gamma4_el
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma4_sh;                    // Variable: Gamma4_sh
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma4_wr;                    // Variable: Gamma4_wr
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma5_el;                    // Variable: Gamma5_el
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma5_sh;                    // Variable: Gamma5_sh
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma5_wr;                    // Variable: Gamma5_wr
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma6_el;                    // Variable: Gamma6_el
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma6_sh;                    // Variable: Gamma6_sh
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T Gamma6_wr;                    // Variable: Gamma6_wr
                                          //  Referenced by: '<S363>/Dynamics Model'

  real_T IBLACK;                       // Variable: IBLACK
                                          //  Referenced by: '<S318>/MATLAB Function'

  real_T IBLUE;                        // Variable: IBLUE
                                          //  Referenced by: '<S343>/MATLAB Function'

  real_T IDIST;                        // Variable: IDIST
                                          //  Referenced by: '<S363>/Inertia Function 1'

  real_T IEE;                          // Variable: IEE
                                          //  Referenced by: '<S363>/Inertia Function 1'

  real_T IPROX;                        // Variable: IPROX
                                          //  Referenced by: '<S363>/Inertia Function 1'

  real_T IRED;                         // Variable: IRED
                                          //  Referenced by:
                                          //    '<S363>/Inertia Function 1'
                                          //    '<S394>/MATLAB Function'

  real_T K_BLACK[18];                  // Variable: K_BLACK
                                          //  Referenced by: '<S151>/Constant2'

  real_T K_BLUE[18];                   // Variable: K_BLUE
                                          //  Referenced by: '<S152>/Constant2'

  real_T K_RED[18];                    // Variable: K_RED
                                          //  Referenced by: '<S153>/Constant2'

  real_T Kd_elarm;                     // Variable: Kd_elarm
                                          //  Referenced by: '<S186>/kd_elarm'

  real_T Kd_sharm;                     // Variable: Kd_sharm
                                          //  Referenced by: '<S187>/kd_sharm'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by: '<S155>/Gain5'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by: '<S156>/Gain5'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by: '<S157>/Gain5'

  real_T Kd_wrarm;                     // Variable: Kd_wrarm
                                          //  Referenced by: '<S188>/kd_wrarm'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by: '<S155>/Gain3'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by: '<S156>/Gain3'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by: '<S157>/Gain3'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by: '<S155>/Gain4'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by: '<S156>/Gain4'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by: '<S157>/Gain4'

  real_T Kp_elarm;                     // Variable: Kp_elarm
                                          //  Referenced by: '<S186>/kp_elarm'

  real_T Kp_sharm;                     // Variable: Kp_sharm
                                          //  Referenced by: '<S187>/kp_sharm'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by: '<S155>/Gain2'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by: '<S156>/Gain2'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by: '<S157>/Gain2'

  real_T Kp_wrarm;                     // Variable: Kp_wrarm
                                          //  Referenced by: '<S188>/kp_wrarm'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by: '<S155>/Gain'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by: '<S156>/Gain'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by: '<S157>/Gain'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by: '<S155>/Gain1'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by: '<S156>/Gain1'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by: '<S157>/Gain1'

  real_T Mc_inv[9];                    // Variable: Mc_inv
                                          //  Referenced by: '<S150>/MATLAB Function3'

  real_T PWMFreq;                      // Variable: PWMFreq
                                          //  Referenced by:
                                          //    '<S19>/PWM Frequency'
                                          //    '<S414>/MATLAB Function1'
                                          //    '<S426>/MATLAB Function1'
                                          //    '<S438>/MATLAB Function8'
                                          //    '<S416>/Constant1'
                                          //    '<S428>/Constant1'
                                          //    '<S440>/Constant1'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<S1>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<S1>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by:
                                          //    '<S1>/Constant1'
                                          //    '<S47>/Constant2'
                                          //    '<S69>/Constant2'
                                          //    '<S95>/Constant2'
                                          //    '<S99>/Constant2'
                                          //    '<S111>/Constant2'
                                          //    '<S115>/Constant2'
                                          //    '<S43>/Constant1'
                                          //    '<S44>/Constant1'
                                          //    '<S45>/Constant1'
                                          //    '<S65>/Constant1'
                                          //    '<S66>/Constant1'
                                          //    '<S67>/Constant1'
                                          //    '<S91>/Constant1'
                                          //    '<S92>/Constant1'
                                          //    '<S93>/Constant1'
                                          //    '<S109>/Constant1'

  real_T Phase3_End;                   // Variable: Phase3_End
                                          //  Referenced by: '<S1>/Constant2'

  real_T Phase3_SubPhase1_End;         // Variable: Phase3_SubPhase1_End
                                          //  Referenced by:
                                          //    '<S9>/Constant4'
                                          //    '<S24>/Constant4'

  real_T Phase3_SubPhase2_End;         // Variable: Phase3_SubPhase2_End
                                          //  Referenced by: '<S24>/Constant1'

  real_T Phase3_SubPhase3_End;         // Variable: Phase3_SubPhase3_End
                                          //  Referenced by: '<S24>/Constant2'

  real_T Phase3_SubPhase4_End;         // Variable: Phase3_SubPhase4_End
                                          //  Referenced by: '<S24>/Constant3'

  real_T Phase4_End;                   // Variable: Phase4_End
                                          //  Referenced by: '<S1>/Constant3'

  real_T Phase5_End;                   // Variable: Phase5_End
                                          //  Referenced by: '<S1>/Constant6'

  real_T Phi;                          // Variable: Phi
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T R[9];                         // Variable: R
                                          //  Referenced by: '<S222>/Unscented Kalman Filter'

  real_T Tz_lim_elarm;                 // Variable: Tz_lim_elarm
                                          //  Referenced by: '<S185>/Saturation1'

  real_T Tz_lim_sharm;                 // Variable: Tz_lim_sharm
                                          //  Referenced by: '<S185>/Saturation'

  real_T Tz_lim_wrarm;                 // Variable: Tz_lim_wrarm
                                          //  Referenced by: '<S185>/Saturation3'

  real_T VISinLoop;                    // Variable: VISinLoop
                                          //  Referenced by:
                                          //    '<S303>/Constant'
                                          //    '<S231>/Constant'
                                          //    '<S240>/Constant'
                                          //    '<S262>/Constant'

  real_T X1_blk;                       // Variable: X1_blk
                                          //  Referenced by: '<S41>/Desired X-Position (BLACK)'

  real_T X2_blk;                       // Variable: X2_blk
                                          //  Referenced by: '<S63>/Desired X-Position (BLACK)'

  real_T X3_blk;                       // Variable: X3_blk
                                          //  Referenced by: '<S89>/Desired X-Position (BLACK)'

  real_T Y1_blk;                       // Variable: Y1_blk
                                          //  Referenced by: '<S41>/Desired Y-Position (BLACK)'

  real_T Y2_blk;                       // Variable: Y2_blk
                                          //  Referenced by: '<S63>/Desired Y-Position (BLACK)'

  real_T Y3_blk;                       // Variable: Y3_blk
                                          //  Referenced by: '<S89>/Desired Y-Position (BLACK)'

  real_T a;                            // Variable: a
                                          //  Referenced by: '<S222>/Unscented Kalman Filter'

  real_T a1;                           // Variable: a1
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T a2;                           // Variable: a2
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T a3;                           // Variable: a3
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T alpha[9];                     // Variable: alpha
                                          //  Referenced by: '<S150>/MATLAB Function3'

  real_T b;                            // Variable: b
                                          //  Referenced by: '<S222>/Unscented Kalman Filter'

  real_T b0;                           // Variable: b0
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T b1;                           // Variable: b1
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T b2;                           // Variable: b2
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T b3;                           // Variable: b3
                                          //  Referenced by: '<S363>/Inertia Function 1'

  real_T baseRate;                     // Variable: baseRate
                                          //  Referenced by:
                                          //    '<S150>/MATLAB Function2'
                                          //    '<S218>/Read Joint Positions using  Dynamixel Encoders'
                                          //    '<S302>/WhoAmI'
                                          //    '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
                                          //    '<S220>/EKF'
                                          //    '<S221>/MEKF'
                                          //    '<S222>/Unscented Kalman Filter'
                                          //    '<S319>/MATLAB Function1'
                                          //    '<S319>/Sample and Hold'
                                          //    '<S262>/Sample and Hold'
                                          //    '<S268>/MATLAB Function1'

  real_T dataRate;                     // Variable: dataRate
                                          //  Referenced by:
                                          //    '<S317>/Constant1'
                                          //    '<S346>/Constant1'
                                          //    '<S261>/Constant'
                                          //    '<S282>/Constant'
                                          //    '<S292>/Constant'
                                          //    '<S368>/Constant1'
                                          //    '<S393>/Constant1'

  real_T drop_states_BLACK[3];         // Variable: drop_states_BLACK
                                          //  Referenced by: '<S318>/Velocity to Position'

  real_T drop_states_BLUE[3];          // Variable: drop_states_BLUE
                                          //  Referenced by: '<S343>/Velocity to Position'

  real_T drop_states_RED[3];           // Variable: drop_states_RED
                                          //  Referenced by: '<S394>/Velocity to Position'

  real_T dt;                           // Variable: dt
                                          //  Referenced by: '<S222>/Unscented Kalman Filter'

  real_T fNum;                         // Variable: fNum
                                          //  Referenced by: '<S219>/Constant'

  real_T gamma[9];                     // Variable: gamma
                                          //  Referenced by: '<S150>/MATLAB Function3'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S120>/Desired States (BLACK)'
                                          //    '<S124>/Desired States (BLACK)'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S121>/Desired States (BLUE)'
                                          //    '<S125>/Desired States (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S122>/Constant2'
                                          //    '<S126>/Constant2'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S29>/Desired States (BLACK)'
                                          //    '<S143>/Delay'
                                          //    '<S143>/Delay1'
                                          //    '<S226>/Delay'
                                          //    '<S226>/Delay1'
                                          //    '<S232>/Delay'
                                          //    '<S232>/Delay1'
                                          //    '<S241>/Delay'
                                          //    '<S241>/Delay1'
                                          //    '<S341>/Delay'
                                          //    '<S341>/Delay1'
                                          //    '<S276>/Delay'
                                          //    '<S276>/Delay1'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by: '<S30>/Desired States (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S31>/Constant2'
                                          //    '<S165>/Delay'
                                          //    '<S165>/Delay1'
                                          //    '<S39>/Constant2'
                                          //    '<S59>/Constant2'
                                          //    '<S166>/Delay'
                                          //    '<S166>/Delay1'

  real_T k;                            // Variable: k
                                          //  Referenced by: '<S222>/Unscented Kalman Filter'

  real_T mBLACK;                       // Variable: mBLACK
                                          //  Referenced by: '<S318>/MATLAB Function'

  real_T mBLUE;                        // Variable: mBLUE
                                          //  Referenced by: '<S343>/MATLAB Function'

  real_T mDIST;                        // Variable: mDIST
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T mEE;                          // Variable: mEE
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T mPROX;                        // Variable: mPROX
                                          //  Referenced by:
                                          //    '<S363>/Coriolis Function1'
                                          //    '<S363>/Inertia Function 1'

  real_T mRED;                         // Variable: mRED
                                          //  Referenced by:
                                          //    '<S363>/Inertia Function 1'
                                          //    '<S394>/MATLAB Function'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by:
                                          //    '<S314>/Constant'
                                          //    '<S253>/MATLAB Function'

  real_T sep1;                         // Variable: sep1
                                          //  Referenced by: '<S39>/Separation'

  real_T sep3;                         // Variable: sep3
                                          //  Referenced by: '<S87>/Separation'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by: '<S18>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by: '<S417>/MATLAB Function'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by: '<S429>/MATLAB Function'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S414>/MATLAB Function5'
                                          //    '<S426>/MATLAB Function5'
                                          //    '<S438>/MATLAB Function5'
                                          //    '<S441>/MATLAB Function'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by:
                                          //    '<S104>/Desired X-Position (BLACK)'
                                          //    '<S370>/Constant'
                                          //    '<S46>/Constant1'
                                          //    '<S68>/Constant1'
                                          //    '<S94>/Constant1'
                                          //    '<S98>/Constant1'
                                          //    '<S110>/Constant1'
                                          //    '<S114>/Constant1'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by:
                                          //    '<S104>/Desired Y-Position (BLACK)'
                                          //    '<S370>/Constant2'
                                          //    '<S46>/Constant2'
                                          //    '<S68>/Constant2'
                                          //    '<S94>/Constant2'
                                          //    '<S98>/Constant2'
                                          //    '<S110>/Constant2'
                                          //    '<S114>/Constant2'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S203>/UD'

  real_T DiscreteDerivative1_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative1_ICPrevScale
                                 //  Referenced by: '<S204>/UD'

  real_T DiscreteDerivative2_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative2_ICPrevScale
                                 //  Referenced by: '<S205>/UD'

  real_T DiscreteDerivative_ICPrevScal_i;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                 //  Referenced by: '<S180>/UD'

  real_T DiscreteDerivative1_ICPrevSca_e;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
                                 //  Referenced by: '<S181>/UD'

  real_T DiscreteDerivative2_ICPrevSca_o;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                 //  Referenced by: '<S182>/UD'

  real_T DiscreteDerivative_ICPrevScal_p;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_p
                                 //  Referenced by: '<S193>/UD'

  real_T DiscreteDerivative1_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
                                 //  Referenced by: '<S194>/UD'

  real_T DiscreteDerivative2_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
                                 //  Referenced by: '<S195>/UD'

  real_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S170>/UD'

  real_T DiscreteDerivative1_ICPrevSca_i;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
                                 //  Referenced by: '<S171>/UD'

  real_T DiscreteDerivative2_ICPrevSc_oo;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
                                 //  Referenced by: '<S172>/UD'

  real_T DiscreteDerivative_ICPrevSca_pf;
                              // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
                                 //  Referenced by: '<S198>/UD'

  real_T DiscreteDerivative1_ICPrevSca_l;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
                                 //  Referenced by: '<S199>/UD'

  real_T DiscreteDerivative2_ICPrevSc_on;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
                                 //  Referenced by: '<S200>/UD'

  real_T DiscreteDerivative_ICPrevScal_n;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_n
                                 //  Referenced by: '<S175>/UD'

  real_T DiscreteDerivative1_ICPrevSca_f;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
                                 //  Referenced by: '<S176>/UD'

  real_T DiscreteDerivative2_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                 //  Referenced by: '<S177>/UD'

  real_T DiscreteDerivative1_ICPrevSca_j;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
                                 //  Referenced by: '<S189>/UD'

  real_T DiscreteDerivative1_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
                                 //  Referenced by: '<S190>/UD'

  real_T DiscreteDerivative1_ICPrevSca_k;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
                                 //  Referenced by: '<S191>/UD'

  real_T DiscreteDerivative2_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_m
                                 //  Referenced by: '<S384>/UD'

  real_T DiscreteDerivative_ICPrevScal_h;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_h
                                 //  Referenced by: '<S382>/UD'

  real_T DiscreteDerivative1_ICPrevSc_lm;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSc_lm
                                 //  Referenced by: '<S383>/UD'

  real_T DiscreteDerivative_ICPrevScal_c;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_c
                                 //  Referenced by: '<S402>/UD'

  real_T DiscreteDerivative1_ICPrevSc_lh;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSc_lh
                                 //  Referenced by: '<S403>/UD'

  real_T DiscreteDerivative_ICPrevScal_k;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_k
                                 //  Referenced by: '<S327>/UD'

  real_T DiscreteDerivative1_ICPrevSc_fs;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSc_fs
                                 //  Referenced by: '<S328>/UD'

  real_T DiscreteDerivative_ICPrevScal_a;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_a
                                 //  Referenced by: '<S355>/UD'

  real_T DiscreteDerivative1_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_g
                                 //  Referenced by: '<S356>/UD'

  real_T MATLABFunction5_max_iters; // Mask Parameter: MATLABFunction5_max_iters
                                       //  Referenced by: '<S414>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_b;
                                  // Mask Parameter: MATLABFunction5_max_iters_b
                                     //  Referenced by: '<S426>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_e;
                                  // Mask Parameter: MATLABFunction5_max_iters_e
                                     //  Referenced by: '<S438>/MATLAB Function5'

  real_T MATLABFunction5_tol;          // Mask Parameter: MATLABFunction5_tol
                                          //  Referenced by: '<S414>/MATLAB Function5'

  real_T MATLABFunction5_tol_j;        // Mask Parameter: MATLABFunction5_tol_j
                                          //  Referenced by: '<S426>/MATLAB Function5'

  real_T MATLABFunction5_tol_g;        // Mask Parameter: MATLABFunction5_tol_g
                                          //  Referenced by: '<S438>/MATLAB Function5'

  real_T Constant11_Value;             // Expression: 0
                                          //  Referenced by: '<S23>/Constant11'

  real_T Constant12_Value;             // Expression: 0
                                          //  Referenced by: '<S23>/Constant12'

  real_T Constant14_Value;             // Expression: 0
                                          //  Referenced by: '<S23>/Constant14'

  real_T Constant15_Value;             // Expression: 0
                                          //  Referenced by: '<S23>/Constant15'

  real_T Constant18_Value;             // Expression: 0
                                          //  Referenced by: '<S23>/Constant18'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<S23>/Constant4'

  real_T Constant5_Value;              // Expression: 2
                                          //  Referenced by: '<S23>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S23>/Constant6'

  real_T Constant8_Value;              // Expression: 2
                                          //  Referenced by: '<S23>/Constant8'

  real_T Constant3_Value;              // Expression: pi/2
                                          //  Referenced by: '<S28>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S28>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S28>/Constant2'

  real_T Constant11_Value_e;           // Expression: 2
                                          //  Referenced by: '<S32>/Constant11'

  real_T Constant12_Value_g;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant12'

  real_T Constant14_Value_f;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant14'

  real_T Constant15_Value_o;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant15'

  real_T Constant18_Value_m;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant18'

  real_T Constant4_Value_g;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant4'

  real_T Constant5_Value_o;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant5'

  real_T Constant6_Value_i;            // Expression: 1
                                          //  Referenced by: '<S32>/Constant6'

  real_T Constant8_Value_m;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant8'

  real_T Constant3_Value_b;            // Expression: pi/2
                                          //  Referenced by: '<S36>/Constant3'

  real_T Constant1_Value_o;            // Expression: pi/2
                                          //  Referenced by: '<S36>/Constant1'

  real_T Constant2_Value_f;            // Expression: 0
                                          //  Referenced by: '<S36>/Constant2'

  real_T DesiredRate_Value;            // Expression: 0.03490659
                                          //  Referenced by: '<S38>/Desired Rate '

  real_T Gain_Gain;                    // Expression: -0.85
                                          //  Referenced by: '<S46>/Gain'

  real_T Gain1_Gain;                   // Expression: -0.85
                                          //  Referenced by: '<S46>/Gain1'

  real_T Constant1_Value_n;            // Expression: 0.01
                                          //  Referenced by: '<S41>/Constant1'

  real_T Constant_Value;               // Expression: 0.005
                                          //  Referenced by: '<S41>/Constant'

  real_T DesiredRateBLACK_Value;       // Expression: 0.03490659
                                          //  Referenced by: '<S40>/Desired Rate (BLACK)'

  real_T Constant_Value_n;             // Expression: 0.3
                                          //  Referenced by: '<S52>/Constant'

  real_T Constant12_Value_k;           // Expression: 0
                                          //  Referenced by: '<S33>/Constant12'

  real_T Constant15_Value_o1;          // Expression: 0
                                          //  Referenced by: '<S33>/Constant15'

  real_T Constant18_Value_n;           // Expression: 0
                                          //  Referenced by: '<S33>/Constant18'

  real_T Constant6_Value_p;            // Expression: 1
                                          //  Referenced by: '<S33>/Constant6'

  real_T Constant8_Value_o;            // Expression: 2
                                          //  Referenced by: '<S33>/Constant8'

  real_T Constant3_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S56>/Constant3'

  real_T Constant1_Value_m;            // Expression: pi/2
                                          //  Referenced by: '<S56>/Constant1'

  real_T Constant2_Value_p;            // Expression: 0
                                          //  Referenced by: '<S56>/Constant2'

  real_T DesiredRate_Value_h;          // Expression: 0.03490659
                                          //  Referenced by: '<S58>/Desired Rate '

  real_T Gain_Gain_h;                  // Expression: -0.85
                                          //  Referenced by: '<S68>/Gain'

  real_T Gain1_Gain_c;                 // Expression: -0.85
                                          //  Referenced by: '<S68>/Gain1'

  real_T Constant1_Value_f;            // Expression: 0.01
                                          //  Referenced by: '<S63>/Constant1'

  real_T Constant_Value_f;             // Expression: 0.005
                                          //  Referenced by: '<S63>/Constant'

  real_T DesiredRateBLACK_Value_k;     // Expression: 0.03490659
                                          //  Referenced by: '<S62>/Desired Rate (BLACK)'

  real_T Separation_Value;             // Expression: 0.48
                                          //  Referenced by: '<S59>/Separation'

  real_T Constant_Value_e;             // Expression: 0.3
                                          //  Referenced by: '<S74>/Constant'

  real_T Constant14_Value_j;           // Expression: 0
                                          //  Referenced by: '<S55>/Constant14'

  real_T Constant11_Value_b;           // Expression: 1
                                          //  Referenced by: '<S34>/Constant11'

  real_T Constant12_Value_ku;          // Expression: 0
                                          //  Referenced by: '<S34>/Constant12'

  real_T Constant14_Value_n;           // Expression: 0
                                          //  Referenced by: '<S34>/Constant14'

  real_T Constant15_Value_o2;          // Expression: 0
                                          //  Referenced by: '<S34>/Constant15'

  real_T Constant18_Value_l;           // Expression: 0
                                          //  Referenced by: '<S34>/Constant18'

  real_T Constant4_Value_b;            // Expression: 2
                                          //  Referenced by: '<S34>/Constant4'

  real_T Constant5_Value_n;            // Expression: 3
                                          //  Referenced by: '<S34>/Constant5'

  real_T Constant6_Value_n;            // Expression: 1
                                          //  Referenced by: '<S34>/Constant6'

  real_T Constant8_Value_f;            // Expression: 2
                                          //  Referenced by: '<S34>/Constant8'

  real_T Constant3_Value_e;            // Expression: pi/2
                                          //  Referenced by: '<S84>/Constant3'

  real_T Constant1_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S84>/Constant1'

  real_T Constant2_Value_c;            // Expression: 0
                                          //  Referenced by: '<S84>/Constant2'

  real_T DesiredRate_Value_l;          // Expression: 0.03490659
                                          //  Referenced by: '<S86>/Desired Rate '

  real_T Gain_Gain_b;                  // Expression: -0.85
                                          //  Referenced by: '<S94>/Gain'

  real_T Gain1_Gain_k;                 // Expression: -0.85
                                          //  Referenced by: '<S94>/Gain1'

  real_T Constant1_Value_g;            // Expression: 0.01
                                          //  Referenced by: '<S89>/Constant1'

  real_T Constant_Value_d;             // Expression: 0.005
                                          //  Referenced by: '<S89>/Constant'

  real_T DesiredRateBLACK_Value_kf;    // Expression: 0.03490659
                                          //  Referenced by: '<S88>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_d;          // Expression: 0.03490659
                                          //  Referenced by: '<S87>/Desired Rate '

  real_T Gain_Gain_ho;                 // Expression: 0.85
                                          //  Referenced by: '<S98>/Gain'

  real_T Gain1_Gain_d;                 // Expression: 0.85
                                          //  Referenced by: '<S98>/Gain1'

  real_T Constant_Value_h;             // Expression: pi+0.01
                                          //  Referenced by: '<S87>/Constant'

  real_T Constant_Value_a;             // Expression: 0.3
                                          //  Referenced by: '<S100>/Constant'

  real_T Constant11_Value_p;           // Expression: 1
                                          //  Referenced by: '<S35>/Constant11'

  real_T Constant12_Value_n;           // Expression: 0
                                          //  Referenced by: '<S35>/Constant12'

  real_T Constant14_Value_f2;          // Expression: 0
                                          //  Referenced by: '<S35>/Constant14'

  real_T Constant15_Value_n;           // Expression: 0
                                          //  Referenced by: '<S35>/Constant15'

  real_T Constant18_Value_e;           // Expression: 0
                                          //  Referenced by: '<S35>/Constant18'

  real_T Constant4_Value_l;            // Expression: 2
                                          //  Referenced by: '<S35>/Constant4'

  real_T Constant5_Value_p;            // Expression: 3
                                          //  Referenced by: '<S35>/Constant5'

  real_T Constant6_Value_m;            // Expression: 1
                                          //  Referenced by: '<S35>/Constant6'

  real_T Constant8_Value_j;            // Expression: 2
                                          //  Referenced by: '<S35>/Constant8'

  real_T Constant3_Value_k;            // Expression: 0
                                          //  Referenced by: '<S103>/Constant3'

  real_T Constant1_Value_b;            // Expression: 0
                                          //  Referenced by: '<S103>/Constant1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S103>/Constant2'

  real_T DesiredRate_Value_ha;         // Expression: 0.03490659
                                          //  Referenced by: '<S105>/Desired Rate '

  real_T Gain_Gain_o;                  // Expression: -0.85
                                          //  Referenced by: '<S110>/Gain'

  real_T Gain1_Gain_b;                 // Expression: -0.85
                                          //  Referenced by: '<S110>/Gain1'

  real_T DesiredRateBLACK_Value_i;     // Expression: 0.03490659
                                          //  Referenced by: '<S107>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_n;          // Expression: 0.03490659
                                          //  Referenced by: '<S106>/Desired Rate '

  real_T Gain_Gain_ox;                 // Expression: 0.85
                                          //  Referenced by: '<S114>/Gain'

  real_T Gain1_Gain_e;                 // Expression: 0.85
                                          //  Referenced by: '<S114>/Gain1'

  real_T Constant_Value_h1;            // Expression: pi+0.01
                                          //  Referenced by: '<S106>/Constant'

  real_T Separation_Value_d;           // Expression: 0.30
                                          //  Referenced by: '<S106>/Separation'

  real_T Constant_Value_c;             // Expression: 0.3
                                          //  Referenced by: '<S116>/Constant'

  real_T Path_Y0;                      // Computed Parameter: Path_Y0
                                          //  Referenced by: '<S142>/Path'

  real_T Constant_Value_a5[6];         // Expression: zeros(6,1)
                                          //  Referenced by: '<S138>/Constant'

  real_T Switch_Threshold;             // Expression: 0
                                          //  Referenced by: '<S138>/Switch'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S203>/TSamp'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                          //  Referenced by: '<S204>/TSamp'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                          //  Referenced by: '<S205>/TSamp'

  real_T Gain6_Gain;                   // Expression: -1
                                          //  Referenced by: '<S157>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                          //  Referenced by: '<S157>/Gain7'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S157>/Gain8'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                          //  Referenced by: '<S180>/TSamp'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                          //  Referenced by: '<S181>/TSamp'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                          //  Referenced by: '<S182>/TSamp'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S193>/TSamp'

  real_T TSamp_WtEt_hr;                // Computed Parameter: TSamp_WtEt_hr
                                          //  Referenced by: '<S194>/TSamp'

  real_T TSamp_WtEt_ca;                // Computed Parameter: TSamp_WtEt_ca
                                          //  Referenced by: '<S195>/TSamp'

  real_T Gain6_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S155>/Gain6'

  real_T Gain7_Gain_b;                 // Expression: -1
                                          //  Referenced by: '<S155>/Gain7'

  real_T Gain8_Gain_m;                 // Expression: -1
                                          //  Referenced by: '<S155>/Gain8'

  real_T TSamp_WtEt_nd;                // Computed Parameter: TSamp_WtEt_nd
                                          //  Referenced by: '<S170>/TSamp'

  real_T TSamp_WtEt_co;                // Computed Parameter: TSamp_WtEt_co
                                          //  Referenced by: '<S171>/TSamp'

  real_T TSamp_WtEt_no;                // Computed Parameter: TSamp_WtEt_no
                                          //  Referenced by: '<S172>/TSamp'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                          //  Referenced by: '<S198>/TSamp'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                          //  Referenced by: '<S199>/TSamp'

  real_T TSamp_WtEt_px;                // Computed Parameter: TSamp_WtEt_px
                                          //  Referenced by: '<S200>/TSamp'

  real_T Gain6_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S156>/Gain6'

  real_T Gain7_Gain_e;                 // Expression: -1
                                          //  Referenced by: '<S156>/Gain7'

  real_T Gain8_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S156>/Gain8'

  real_T TSamp_WtEt_ft;                // Computed Parameter: TSamp_WtEt_ft
                                          //  Referenced by: '<S175>/TSamp'

  real_T TSamp_WtEt_eh;                // Computed Parameter: TSamp_WtEt_eh
                                          //  Referenced by: '<S176>/TSamp'

  real_T TSamp_WtEt_ii;                // Computed Parameter: TSamp_WtEt_ii
                                          //  Referenced by: '<S177>/TSamp'

  real_T TSamp_WtEt_pu;                // Computed Parameter: TSamp_WtEt_pu
                                          //  Referenced by: '<S189>/TSamp'

  real_T TSamp_WtEt_f0;                // Computed Parameter: TSamp_WtEt_f0
                                          //  Referenced by: '<S190>/TSamp'

  real_T TSamp_WtEt_nz;                // Computed Parameter: TSamp_WtEt_nz
                                          //  Referenced by: '<S191>/TSamp'

  real_T Constant7_Value;              // Expression: 1
                                          //  Referenced by: '<S154>/Constant7'

  real_T Merge3_InitialOutput;       // Computed Parameter: Merge3_InitialOutput
                                        //  Referenced by: '<S154>/Merge3'

  real_T Merge4_InitialOutput;       // Computed Parameter: Merge4_InitialOutput
                                        //  Referenced by: '<S154>/Merge4'

  real_T Merge5_InitialOutput;       // Computed Parameter: Merge5_InitialOutput
                                        //  Referenced by: '<S154>/Merge5'

  real_T Constant7_Value_h;            // Expression: 0
                                          //  Referenced by: '<S158>/Constant7'

  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S158>/Zero'

  real_T GPIOWrite1_gpioPin;           // Expression: 428
                                          //  Referenced by: '<S217>/GPIO Write1'

  real_T GPIOWrite1_pinDirection;      // Expression: 1
                                          //  Referenced by: '<S217>/GPIO Write1'

  real_T dytdt_Y0;                     // Computed Parameter: dytdt_Y0
                                          //  Referenced by: '<S333>/dy(t)//dt'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S331>/Out1'

  real_T Out1_Y0_l;                    // Computed Parameter: Out1_Y0_l
                                          //  Referenced by: '<S332>/Out1'

  real_T dytdt_Y0_f;                   // Computed Parameter: dytdt_Y0_f
                                          //  Referenced by: '<S361>/dy(t)//dt'

  real_T Out1_Y0_a;                    // Computed Parameter: Out1_Y0_a
                                          //  Referenced by: '<S359>/Out1'

  real_T Out1_Y0_o;                    // Computed Parameter: Out1_Y0_o
                                          //  Referenced by: '<S360>/Out1'

  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S380>/dy//dt'

  real_T Constant2_Value_k;            // Expression: 0.1
                                          //  Referenced by: '<S380>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S380>/Delay'

  real_T dytdt_Y0_n;                   // Computed Parameter: dytdt_Y0_n
                                          //  Referenced by: '<S389>/dy(t)//dt'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S387>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S388>/Out1'

  real_T AddNoise_Mean;                // Expression: 0
                                          //  Referenced by: '<S363>/Add Noise'

  real_T AddNoise_StdDev;              // Computed Parameter: AddNoise_StdDev
                                          //  Referenced by: '<S363>/Add Noise'

  real_T AddNoise_Seed;                // Expression: 0
                                          //  Referenced by: '<S363>/Add Noise'

  real_T Delay_InitialCondition_a;     // Expression: 0.0
                                          //  Referenced by: '<S363>/Delay'

  real_T VelocitytoPosition_gainval;
                               // Computed Parameter: VelocitytoPosition_gainval
                                  //  Referenced by: '<S363>/Velocity to Position'

  real_T VelocitytoPosition_IC[6];
                                // Expression: [drop_states_RED,drop_states_ARM]
                                   //  Referenced by: '<S363>/Velocity to Position'

  real_T Delay_InitialCondition_h;     // Expression: 0.0
                                          //  Referenced by: '<S368>/Delay'

  real_T Constant2_Value_n;            // Expression: 0
                                          //  Referenced by: '<S368>/Constant2'

  real_T Delay2_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<S386>/Delay2'

  real_T Delay1_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<S386>/Delay1'

  real_T Constant3_Value_n;            // Expression: 0
                                          //  Referenced by: '<S386>/Constant3'

  real_T Delay1_InitialCondition_f;    // Expression: 0.0
                                          //  Referenced by: '<S374>/Delay1'

  real_T Constant3_Value_f;            // Expression: 0
                                          //  Referenced by: '<S374>/Constant3'

  real_T Delay1_InitialCondition_fy;   // Expression: 0.0
                                          //  Referenced by: '<S372>/Delay1'

  real_T Constant3_Value_o;            // Expression: 0
                                          //  Referenced by: '<S372>/Constant3'

  real_T Delay1_InitialCondition_b;    // Expression: 0.0
                                          //  Referenced by: '<S373>/Delay1'

  real_T Constant3_Value_l;            // Expression: 0
                                          //  Referenced by: '<S373>/Constant3'

  real_T TSamp_WtEt_d;                 // Computed Parameter: TSamp_WtEt_d
                                          //  Referenced by: '<S384>/TSamp'

  real_T TSamp_WtEt_ck;                // Computed Parameter: TSamp_WtEt_ck
                                          //  Referenced by: '<S382>/TSamp'

  real_T TSamp_WtEt_l;                 // Computed Parameter: TSamp_WtEt_l
                                          //  Referenced by: '<S383>/TSamp'

  real_T Constant1_Value_k;            // Expression: 0
                                          //  Referenced by: '<S370>/Constant1'

  real_T Constant3_Value_e5;           // Expression: 0
                                          //  Referenced by: '<S370>/Constant3'

  real_T AccelerationtoVelocity_gainval;
                           // Computed Parameter: AccelerationtoVelocity_gainval
                              //  Referenced by: '<S363>/Acceleration to Velocity'

  real_T AccelerationtoVelocity_IC[6]; // Expression: [0;0;0;0;0;0]
                                          //  Referenced by: '<S363>/Acceleration to Velocity'

  real_T dytdt_Y0_ne;                  // Computed Parameter: dytdt_Y0_ne
                                          //  Referenced by: '<S408>/dy(t)//dt'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S406>/Out1'

  real_T Out1_Y0_nj;                   // Computed Parameter: Out1_Y0_nj
                                          //  Referenced by: '<S407>/Out1'

  real_T AddNoise_Mean_d;              // Expression: 0
                                          //  Referenced by: '<S364>/Add Noise'

  real_T AddNoise_StdDev_m;            // Computed Parameter: AddNoise_StdDev_m
                                          //  Referenced by: '<S364>/Add Noise'

  real_T AddNoise_Seed_j;              // Expression: 0
                                          //  Referenced by: '<S364>/Add Noise'

  real_T AccelerationtoVelocity_gainva_e;
                          // Computed Parameter: AccelerationtoVelocity_gainva_e
                             //  Referenced by: '<S394>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_g;  // Expression: 0
                                          //  Referenced by: '<S394>/Acceleration  to Velocity'

  real_T VelocitytoPosition_gainval_m;
                             // Computed Parameter: VelocitytoPosition_gainval_m
                                //  Referenced by: '<S394>/Velocity to Position'

  real_T Delay_InitialCondition_f;     // Expression: 0.0
                                          //  Referenced by: '<S393>/Delay'

  real_T Constant2_Value_fs;           // Expression: 0
                                          //  Referenced by: '<S393>/Constant2'

  real_T Delay2_InitialCondition_g;    // Expression: 0
                                          //  Referenced by: '<S405>/Delay2'

  real_T Delay1_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S405>/Delay1'

  real_T Constant3_Value_c;            // Expression: 0
                                          //  Referenced by: '<S405>/Constant3'

  real_T Delay1_InitialCondition_h;    // Expression: 0.0
                                          //  Referenced by: '<S396>/Delay1'

  real_T Constant3_Value_i;            // Expression: 0
                                          //  Referenced by: '<S396>/Constant3'

  real_T Delay1_InitialCondition_d;    // Expression: 0.0
                                          //  Referenced by: '<S395>/Delay1'

  real_T Constant3_Value_n4;           // Expression: 0
                                          //  Referenced by: '<S395>/Constant3'

  real_T TSamp_WtEt_k;                 // Computed Parameter: TSamp_WtEt_k
                                          //  Referenced by: '<S402>/TSamp'

  real_T TSamp_WtEt_m;                 // Computed Parameter: TSamp_WtEt_m
                                          //  Referenced by: '<S403>/TSamp'

  real_T AddNoise_Mean_i;              // Expression: 0
                                          //  Referenced by: '<S312>/Add Noise'

  real_T AddNoise_StdDev_l;            // Computed Parameter: AddNoise_StdDev_l
                                          //  Referenced by: '<S312>/Add Noise'

  real_T AddNoise_Seed_c;              // Expression: 0
                                          //  Referenced by: '<S312>/Add Noise'

  real_T AccelerationtoVelocity_gainva_h;
                          // Computed Parameter: AccelerationtoVelocity_gainva_h
                             //  Referenced by: '<S318>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_a;  // Expression: 0
                                          //  Referenced by: '<S318>/Acceleration  to Velocity'

  real_T VelocitytoPosition_gainval_d;
                             // Computed Parameter: VelocitytoPosition_gainval_d
                                //  Referenced by: '<S318>/Velocity to Position'

  real_T Delay_InitialCondition_o;     // Expression: 0.0
                                          //  Referenced by: '<S317>/Delay'

  real_T Constant2_Value_e;            // Expression: 0
                                          //  Referenced by: '<S317>/Constant2'

  real_T Delay2_InitialCondition_h;    // Expression: 0
                                          //  Referenced by: '<S330>/Delay2'

  real_T Delay1_InitialCondition_k;    // Expression: 0
                                          //  Referenced by: '<S330>/Delay1'

  real_T Constant3_Value_h;            // Expression: 0
                                          //  Referenced by: '<S330>/Constant3'

  real_T Delay1_InitialCondition_j;    // Expression: 0.0
                                          //  Referenced by: '<S321>/Delay1'

  real_T Constant3_Value_it;           // Expression: 0
                                          //  Referenced by: '<S321>/Constant3'

  real_T Delay1_InitialCondition_hf;   // Expression: 0.0
                                          //  Referenced by: '<S320>/Delay1'

  real_T Constant3_Value_os;           // Expression: 0
                                          //  Referenced by: '<S320>/Constant3'

  real_T TSamp_WtEt_a;                 // Computed Parameter: TSamp_WtEt_a
                                          //  Referenced by: '<S327>/TSamp'

  real_T TSamp_WtEt_g;                 // Computed Parameter: TSamp_WtEt_g
                                          //  Referenced by: '<S328>/TSamp'

  real_T AddNoise_Mean_j;              // Expression: 0
                                          //  Referenced by: '<S313>/Add Noise'

  real_T AddNoise_StdDev_j;            // Computed Parameter: AddNoise_StdDev_j
                                          //  Referenced by: '<S313>/Add Noise'

  real_T AddNoise_Seed_k;              // Expression: 0
                                          //  Referenced by: '<S313>/Add Noise'

  real_T AccelerationtoVelocity_gainva_a;
                          // Computed Parameter: AccelerationtoVelocity_gainva_a
                             //  Referenced by: '<S343>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_e;  // Expression: 0
                                          //  Referenced by: '<S343>/Acceleration  to Velocity'

  real_T VelocitytoPosition_gainval_dt;
                            // Computed Parameter: VelocitytoPosition_gainval_dt
                               //  Referenced by: '<S343>/Velocity to Position'

  real_T Delay_InitialCondition_d;     // Expression: 0.0
                                          //  Referenced by: '<S346>/Delay'

  real_T Constant2_Value_kh;           // Expression: 0
                                          //  Referenced by: '<S346>/Constant2'

  real_T Delay2_InitialCondition_j;    // Expression: 0
                                          //  Referenced by: '<S358>/Delay2'

  real_T Delay1_InitialCondition_o;    // Expression: 0
                                          //  Referenced by: '<S358>/Delay1'

  real_T Constant3_Value_bf;           // Expression: 0
                                          //  Referenced by: '<S358>/Constant3'

  real_T Delay1_InitialCondition_hw;   // Expression: 0.0
                                          //  Referenced by: '<S349>/Delay1'

  real_T Constant3_Value_o2;           // Expression: 0
                                          //  Referenced by: '<S349>/Constant3'

  real_T Delay1_InitialCondition_o4;   // Expression: 0.0
                                          //  Referenced by: '<S348>/Delay1'

  real_T Constant3_Value_f4;           // Expression: 0
                                          //  Referenced by: '<S348>/Constant3'

  real_T TSamp_WtEt_cs;                // Computed Parameter: TSamp_WtEt_cs
                                          //  Referenced by: '<S355>/TSamp'

  real_T TSamp_WtEt_k0;                // Computed Parameter: TSamp_WtEt_k0
                                          //  Referenced by: '<S356>/TSamp'

  real_T Delay_InitialCondition_o2;    // Expression: 0.0
                                          //  Referenced by: '<S218>/Delay'

  real_T Delay1_InitialCondition_l;    // Expression: 0.0
                                          //  Referenced by: '<S218>/Delay1'

  real_T Delay2_InitialCondition_jo;   // Expression: 0.0
                                          //  Referenced by: '<S218>/Delay2'

  real_T Merge_InitialOutput;         // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S240>/Merge'

  real_T Merge_InitialOutput_p;     // Computed Parameter: Merge_InitialOutput_p
                                       //  Referenced by: '<S231>/Merge'

  real_T Merge_InitialOutput_b;     // Computed Parameter: Merge_InitialOutput_b
                                       //  Referenced by: '<S219>/Merge'

  real_T UniversalTime_Y0;             // Computed Parameter: UniversalTime_Y0
                                          //  Referenced by: '<S254>/Universal Time'

  real_T dytdt_Y0_c;                   // Computed Parameter: dytdt_Y0_c
                                          //  Referenced by: '<S266>/dy(t)//dt'

  real_T dytdt_Y0_j;                   // Computed Parameter: dytdt_Y0_j
                                          //  Referenced by: '<S286>/dy(t)//dt'

  real_T dytdt_Y0_d;                   // Computed Parameter: dytdt_Y0_d
                                          //  Referenced by: '<S296>/dy(t)//dt'

  real_T ConvertBLAXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S250>/Convert BLAX from [mm] to [m]'

  real_T ConvertBLAYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S250>/Convert BLAY from [mm] to [m]'

  real_T ConvertBLACKVXfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S250>/Convert BLACKVX from [mm] to [m]'

  real_T ConvertBLACKVYfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S250>/Convert BLACKVY from [mm] to [m]'

  real_T Delay2_InitialCondition_e;    // Expression: 0
                                          //  Referenced by: '<S261>/Delay2'

  real_T Delay1_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S261>/Delay1'

  real_T Constant3_Value_eq;           // Expression: 0
                                          //  Referenced by: '<S261>/Constant3'

  real_T Delay1_InitialCondition_i;    // Expression: 0.0
                                          //  Referenced by: '<S264>/Delay1'

  real_T Constant3_Value_a;            // Expression: 0
                                          //  Referenced by: '<S264>/Constant3'

  real_T Delay1_InitialCondition_it;   // Expression: 0.0
                                          //  Referenced by: '<S263>/Delay1'

  real_T Constant3_Value_d;            // Expression: 0
                                          //  Referenced by: '<S263>/Constant3'

  real_T ConvertBLUXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S251>/Convert BLUX from [mm] to [m]'

  real_T ConvertBLUYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S251>/Convert BLUY from [mm] to [m]'

  real_T ConvertBLUEVXfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S251>/Convert BLUEVX from [mm] to [m]'

  real_T ConvertBLUEVYfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S251>/Convert BLUEVY from [mm] to [m]'

  real_T Delay2_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S282>/Delay2'

  real_T Delay1_InitialCondition_i3;   // Expression: 0
                                          //  Referenced by: '<S282>/Delay1'

  real_T Constant3_Value_oi;           // Expression: 0
                                          //  Referenced by: '<S282>/Constant3'

  real_T Delay1_InitialCondition_hb;   // Expression: 0.0
                                          //  Referenced by: '<S284>/Delay1'

  real_T Constant3_Value_cz;           // Expression: 0
                                          //  Referenced by: '<S284>/Constant3'

  real_T Delay1_InitialCondition_ja;   // Expression: 0.0
                                          //  Referenced by: '<S283>/Delay1'

  real_T Constant3_Value_ke;           // Expression: 0
                                          //  Referenced by: '<S283>/Constant3'

  real_T ConvertREDXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S252>/Convert REDX from [mm] to [m]'

  real_T ConvertREDYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S252>/Convert REDY from [mm] to [m]'

  real_T ConvertREDVXfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S252>/Convert REDVX from [mm] to [m]'

  real_T ConvertREDVYfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S252>/Convert REDVY from [mm] to [m]'

  real_T Delay2_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S292>/Delay2'

  real_T Delay1_InitialCondition_lm;   // Expression: 0
                                          //  Referenced by: '<S292>/Delay1'

  real_T Constant3_Value_fy;           // Expression: 0
                                          //  Referenced by: '<S292>/Constant3'

  real_T Delay1_InitialCondition_kq;   // Expression: 0.0
                                          //  Referenced by: '<S294>/Delay1'

  real_T Constant3_Value_dh;           // Expression: 0
                                          //  Referenced by: '<S294>/Constant3'

  real_T Delay1_InitialCondition_c;    // Expression: 0.0
                                          //  Referenced by: '<S293>/Delay1'

  real_T Constant3_Value_dz;           // Expression: 0
                                          //  Referenced by: '<S293>/Constant3'

  real_T Constant_Value_i;             // Expression: 1
                                          //  Referenced by: '<S253>/Constant'

  real_T Gain_Gain_k;                  // Expression: -1
                                          //  Referenced by: '<S303>/Gain'

  real_T Constant_Value_n1;            // Expression: 0
                                          //  Referenced by: '<S306>/Constant'

  real_T Step_Time;                    // Expression: 140
                                          //  Referenced by: '<S306>/Step'

  real_T Step_Y0;                      // Expression: 0
                                          //  Referenced by: '<S306>/Step'

  real_T Step_YFinal;                  // Expression: 1
                                          //  Referenced by: '<S306>/Step'

  real_T ControlDynamixelActuatorsineith;// Expression: 400
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_b;// Expression: 0
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_h;// Expression: 200
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_j;// Expression: 3072
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_m;// Expression: 1024
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_hy;// Expression: 0
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_i;// Expression: 850
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_g;// Expression: 400
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_g3;// Expression: 100
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_bf;// Expression: 20
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_l;// Expression: 0
                                            //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T Out1_Y0_f;                    // Computed Parameter: Out1_Y0_f
                                          //  Referenced by: '<S421>/Out1'

  real_T Out1_Y0_jx;                   // Computed Parameter: Out1_Y0_jx
                                          //  Referenced by: '<S422>/Out1'

  real_T BLACKDC_Y0;                   // Computed Parameter: BLACKDC_Y0
                                          //  Referenced by: '<S411>/BLACK DC'

  real_T Delay_InitialCondition_i;     // Expression: 0.0
                                          //  Referenced by: '<S416>/Delay'

  real_T Constant2_Value_h;            // Expression: 0
                                          //  Referenced by: '<S416>/Constant2'

  real_T Out1_Y0_nw;                   // Computed Parameter: Out1_Y0_nw
                                          //  Referenced by: '<S433>/Out1'

  real_T Out1_Y0_js;                   // Computed Parameter: Out1_Y0_js
                                          //  Referenced by: '<S434>/Out1'

  real_T BLUEDC_Y0;                    // Computed Parameter: BLUEDC_Y0
                                          //  Referenced by: '<S412>/BLUE DC'

  real_T Delay_InitialCondition_n;     // Expression: 0.0
                                          //  Referenced by: '<S428>/Delay'

  real_T Constant2_Value_fq;           // Expression: 0
                                          //  Referenced by: '<S428>/Constant2'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S445>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S446>/Out1'

  real_T REDDC_Y0;                     // Computed Parameter: REDDC_Y0
                                          //  Referenced by: '<S413>/RED DC'

  real_T Delay_InitialCondition_p;     // Expression: 0.0
                                          //  Referenced by: '<S440>/Delay'

  real_T Constant2_Value_eq;           // Expression: 0
                                          //  Referenced by: '<S440>/Constant2'

  real_T Universal_Time39_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time39'

  real_T GaussianNoise_Mean;           // Expression: 0
                                          //  Referenced by: '<Root>/Gaussian Noise'

  real_T GaussianNoise_StdDev;       // Computed Parameter: GaussianNoise_StdDev
                                        //  Referenced by: '<Root>/Gaussian Noise'

  real_T GaussianNoise_Seed;           // Expression: 0
                                          //  Referenced by: '<Root>/Gaussian Noise'

  real_T Merge1_InitialOutput;       // Computed Parameter: Merge1_InitialOutput
                                        //  Referenced by: '<S3>/Merge1'

  real_T Merge2_InitialOutput;       // Computed Parameter: Merge2_InitialOutput
                                        //  Referenced by: '<S3>/Merge2'

  real_T Merge_InitialOutput_e;     // Computed Parameter: Merge_InitialOutput_e
                                       //  Referenced by: '<S3>/Merge'

  real_T SafetyNumber_Value;           // Expression: 568471
                                          //  Referenced by: '<S19>/Safety Number'

  real_T Gain_Gain_oy;                 // Expression: 100
                                          //  Referenced by: '<S19>/Gain'

  real_T Gain1_Gain_em;                // Expression: 100
                                          //  Referenced by: '<S19>/Gain1'

  real_T Gain2_Gain;                   // Expression: 100
                                          //  Referenced by: '<S19>/Gain2'

  real_T Gain3_Gain;                   // Expression: 100
                                          //  Referenced by: '<S19>/Gain3'

  real_T Gain4_Gain;                   // Expression: 100
                                          //  Referenced by: '<S19>/Gain4'

  real_T Gain5_Gain;                   // Expression: 100
                                          //  Referenced by: '<S19>/Gain5'

  real_T Gain6_Gain_c;                 // Expression: 100
                                          //  Referenced by: '<S19>/Gain6'

  real_T Gain7_Gain_l;                 // Expression: 100
                                          //  Referenced by: '<S19>/Gain7'

  real_T DataStoreMemory_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory'

  real_T DataStoreMemory1_InitialValue[9];// Expression: zeros(9,1)
                                             //  Referenced by: '<Root>/Data Store Memory1'

  real_T DataStoreMemory2_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory2'

  real_T DataStoreMemory3_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Data Store Memory3'

  real_T DataStoreMemory4_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Data Store Memory4'

  real_T DataStoreMemory5_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory5'

  real_T DataStoreMemory6_InitialValue[3];// Expression: zeros(3,1)
                                             //  Referenced by: '<Root>/Data Store Memory6'

  real_T DataStoreMemory7_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory7'

  real_T DataStoreMemory8_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory8'

  real_T RED_Tz1_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz1'

  real_T RED_Tz10_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz10'

  real_T RED_Tz15_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz15'

  real_T RED_Tz2_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz2'

  real_T RED_Tz20_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz20'

  real_T RED_Tz25_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz25'

  real_T RED_Tz37_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz37'

  real_T RED_Tz38_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz38'

  real_T RED_Tz6_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz6'

  real_T RED_Tz7_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz7'

  real_T RED_Tz8_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz8'

  real_T RED_Tz9_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz9'

  real_T Universal_Time_InitialValue;  // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time'

  real_T Universal_Time1_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time1'

  real_T Universal_Time10_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time10'

  real_T Universal_Time11_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time11'

  real_T Universal_Time12_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time12'

  real_T Universal_Time13_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time13'

  real_T Universal_Time14_InitialValue[8];// Expression: [0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time14'

  real_T Universal_Time15_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time15'

  real_T Universal_Time16_InitialValue[8];// Expression: [0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time16'

  real_T Universal_Time17_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time17'

  real_T Universal_Time18_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time18'

  real_T Universal_Time19_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time19'

  real_T Universal_Time2_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time2'

  real_T Universal_Time20_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time20'

  real_T Universal_Time21_InitialValue[3];// Expression: zeros(3,1)
                                             //  Referenced by: '<Root>/Universal_Time21'

  real_T Universal_Time22_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time22'

  real_T Universal_Time23_InitialValue[6];// Expression: zeros(6,1)
                                             //  Referenced by: '<Root>/Universal_Time23'

  real_T Universal_Time24_InitialValue[6];// Expression: [0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time24'

  real_T Universal_Time25_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time25'

  real_T Universal_Time26_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time26'

  real_T Universal_Time27_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time27'

  real_T Universal_Time28_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time28'

  real_T Universal_Time29_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time29'

  real_T Universal_Time3_InitialValue[8];// Expression: [0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time3'

  real_T Universal_Time30_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time30'

  real_T Universal_Time31_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time31'

  real_T Universal_Time32_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time32'

  real_T Universal_Time33_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time33'

  real_T Universal_Time34_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time34'

  real_T Universal_Time35_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time35'

  real_T Universal_Time36_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time36'

  real_T Universal_Time37_InitialValue[3];// Expression: zeros(3,1)
                                             //  Referenced by: '<Root>/Universal_Time37'

  real_T Universal_Time38_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time38'

  real_T Universal_Time4_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time4'

  real_T Universal_Time40_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time40'

  real_T Universal_Time41_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time41'

  real_T Universal_Time5_InitialValue[3];// Expression: [0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time5'

  real_T Universal_Time6_InitialValue[3];// Expression: [0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time6'

  real_T Universal_Time7_InitialValue[6];// Expression: [0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time7'

  real_T Universal_Time8_InitialValue[3];// Expression: [0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time8'

  real_T Universal_Time9_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time9'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 2"
                                          //  Referenced by: '<S23>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 2"
                                         //  Referenced by: '<S23>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 2"
                                          //  Referenced by: '<S23>/String Constant'

  char_T StringConstant1_String_k[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S32>/String Constant1'

  char_T StringConstant2_String_p[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
                             //  Referenced by: '<S32>/String Constant2'

  char_T StringConstant_String_b[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S32>/String Constant'

  char_T StringConstant1_String_e[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 2"
                               //  Referenced by: '<S33>/String Constant1'

  char_T StringConstant2_String_e[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
                             //  Referenced by: '<S33>/String Constant2'

  char_T StringConstant_String_c[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
                               //  Referenced by: '<S33>/String Constant'

  char_T StringConstant1_String_j[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 3"
                               //  Referenced by: '<S34>/String Constant1'

  char_T StringConstant2_String_b[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
                             //  Referenced by: '<S34>/String Constant2'

  char_T StringConstant_String_ca[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
                               //  Referenced by: '<S34>/String Constant'

  char_T StringConstant1_String_p[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 4"
                               //  Referenced by: '<S35>/String Constant1'

  char_T StringConstant2_String_l[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
                             //  Referenced by: '<S35>/String Constant2'

  char_T StringConstant_String_e[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
                               //  Referenced by: '<S35>/String Constant'

  char_T RED_Tz3_InitialValue[256];  // Computed Parameter: RED_Tz3_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz3'

  char_T RED_Tz4_InitialValue[256];  // Computed Parameter: RED_Tz4_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz4'

  char_T RED_Tz5_InitialValue[256];  // Computed Parameter: RED_Tz5_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz5'

  int32_T UDPSend1_Port;               // Computed Parameter: UDPSend1_Port
                                          //  Referenced by: '<S214>/UDP Send1'

  int32_T UDPSend2_Port;               // Computed Parameter: UDPSend2_Port
                                          //  Referenced by: '<S215>/UDP Send2'

  int32_T UDPSend3_Port;               // Computed Parameter: UDPSend3_Port
                                          //  Referenced by: '<S216>/UDP Send3'

  int32_T ReceivePhaseSpaceData_Port;
                               // Computed Parameter: ReceivePhaseSpaceData_Port
                                  //  Referenced by: '<S249>/Receive PhaseSpace Data'

  int32_T UDPReceiveREDClock_Port;// Computed Parameter: UDPReceiveREDClock_Port
                                     //  Referenced by: '<S253>/UDP Receive (RED Clock)'

  int32_T UDPReceiveBLACKClock_Port;
                                // Computed Parameter: UDPReceiveBLACKClock_Port
                                   //  Referenced by: '<S253>/UDP Receive (BLACK Clock)'

  int32_T UDPReceiveBLUEClock_Port;
                                 // Computed Parameter: UDPReceiveBLUEClock_Port
                                    //  Referenced by: '<S253>/UDP Receive (BLUE Clock)'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S303>/UDP Receive'

  int32_T UDPReceive_Port_g;           // Computed Parameter: UDPReceive_Port_g
                                          //  Referenced by: '<S305>/UDP Receive'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S308>/UDP Send'

  int32_T UDPSend_Port_b;              // Computed Parameter: UDPSend_Port_b
                                          //  Referenced by: '<S309>/UDP Send'

  int32_T UDPSend_Port_h;              // Computed Parameter: UDPSend_Port_h
                                          //  Referenced by: '<S19>/UDP Send'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<S306>/Manual Switch'

  P_ChangeBLACKBehavior_GNC20_b_T ChangeREDBehavior_h;// '<S20>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLUEBehavior_e;// '<S20>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLACKBehavior_i;// '<S20>/Change BLACK Behavior' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_l1;// '<S294>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_o_T EnabledSubsystem_kh;// '<S293>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_d;// '<S284>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_o_T EnabledSubsystem_lw;// '<S283>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_g;// '<S264>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_o_T EnabledSubsystem_it;// '<S263>/Enabled Subsystem' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeREDBehavior_d;// '<S257>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLUEBehavior_f;// '<S257>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLACKBehavior_e;// '<S257>/Change BLACK Behavior' 
  P_EnabledSubsystem_GNC2026W_m_T EnabledSubsystem_h;// '<S396>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_p;// '<S395>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_kx;// '<S373>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_m_T EnabledSubsystem_l;// '<S372>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_m_T EnabledSubsystem_i;// '<S349>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S348>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_m_T EnabledSubsystem_b;// '<S321>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_m;// '<S320>/Enabled Subsystem' 
  P_ChangeBLACKBehavior_GNC2026_T ChangeREDBehavior;// '<S4>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC2026_T ChangeBLUEBehavior;// '<S4>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC2026_T ChangeBLACKBehavior;// '<S4>/Change BLACK Behavior' 
  P_DisableThrustersRED_GNC2026_T CustomControlARM;// '<S3>/Custom Control (ARM)' 
  P_DisableThrustersBLACK_GNC20_T DisableThrustersBLUE;// '<S3>/Disable Thrusters (BLUE)' 
  P_DisableThrustersBLACK_GNC20_T DisableThrustersBLACK;// '<S3>/Disable Thrusters (BLACK)' 
  P_DisableThrustersRED_GNC2026_T DisableThrustersRED;// '<S3>/Disable Thrusters (RED)' 
  P_Phase0Synchronization_GNC20_T Phase6CleanShutdown;// '<S1>/Phase #6: Clean Shutdown' 
  P_Phase4ReturnHome_GNC2026W_T Phase5HoldHome;// '<S1>/Phase #5: Hold Home'
  P_Phase4ReturnHome_GNC2026W_T Phase4ReturnHome;// '<S1>/Phase #4: Return Home' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem5;// '<S60>/If Action Subsystem5' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem4;// '<S60>/If Action Subsystem4' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem3;// '<S60>/If Action Subsystem3' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem2;// '<S60>/If Action Subsystem2' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem1;// '<S60>/If Action Subsystem1' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem_a;// '<S60>/If Action Subsystem' 
  P_Phase0Synchronization_GNC20_T Phase1StartFloating;// '<S1>/Phase #1: Start Floating ' 
  P_Phase0Synchronization_GNC20_T Phase0Synchronization;// '<S1>/Phase #0: Synchronization' 
};

// Real-time Model Data Structure
struct tag_RTM_GNC2026W_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_GNC2026W_T GNC2026W_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_GNC2026W_T GNC2026W_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_GNC2026W_T GNC2026W_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void GNC2026W_initialize(void);
  extern void GNC2026W_step(void);
  extern void GNC2026W_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_GNC2026W_T *const GNC2026W_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S50>/Constant1' : Unused code path elimination
//  Block '<S50>/Constant2' : Unused code path elimination
//  Block '<S50>/Cos' : Unused code path elimination
//  Block '<S50>/Gain' : Unused code path elimination
//  Block '<S50>/Gain1' : Unused code path elimination
//  Block '<S50>/Sin' : Unused code path elimination
//  Block '<S50>/Sum1' : Unused code path elimination
//  Block '<S50>/Sum2' : Unused code path elimination
//  Block '<S51>/Constant2' : Unused code path elimination
//  Block '<S51>/Subtract3' : Unused code path elimination
//  Block '<S39>/Constant' : Unused code path elimination
//  Block '<S39>/Desired Rate ' : Unused code path elimination
//  Block '<S39>/Product' : Unused code path elimination
//  Block '<S39>/Sum' : Unused code path elimination
//  Block '<S53>/Atan2' : Unused code path elimination
//  Block '<S53>/Cos' : Unused code path elimination
//  Block '<S53>/Sin' : Unused code path elimination
//  Block '<S72>/Constant1' : Unused code path elimination
//  Block '<S72>/Constant2' : Unused code path elimination
//  Block '<S72>/Cos' : Unused code path elimination
//  Block '<S72>/Gain' : Unused code path elimination
//  Block '<S72>/Gain1' : Unused code path elimination
//  Block '<S72>/Sin' : Unused code path elimination
//  Block '<S72>/Sum1' : Unused code path elimination
//  Block '<S72>/Sum2' : Unused code path elimination
//  Block '<S73>/Constant2' : Unused code path elimination
//  Block '<S73>/Subtract3' : Unused code path elimination
//  Block '<S59>/Constant' : Unused code path elimination
//  Block '<S59>/Desired Rate ' : Unused code path elimination
//  Block '<S59>/Product' : Unused code path elimination
//  Block '<S59>/Sum' : Unused code path elimination
//  Block '<S75>/Atan2' : Unused code path elimination
//  Block '<S75>/Cos' : Unused code path elimination
//  Block '<S75>/Sin' : Unused code path elimination
//  Block '<S170>/Data Type Duplicate' : Unused code path elimination
//  Block '<S171>/Data Type Duplicate' : Unused code path elimination
//  Block '<S172>/Data Type Duplicate' : Unused code path elimination
//  Block '<S175>/Data Type Duplicate' : Unused code path elimination
//  Block '<S176>/Data Type Duplicate' : Unused code path elimination
//  Block '<S177>/Data Type Duplicate' : Unused code path elimination
//  Block '<S180>/Data Type Duplicate' : Unused code path elimination
//  Block '<S181>/Data Type Duplicate' : Unused code path elimination
//  Block '<S182>/Data Type Duplicate' : Unused code path elimination
//  Block '<S189>/Data Type Duplicate' : Unused code path elimination
//  Block '<S190>/Data Type Duplicate' : Unused code path elimination
//  Block '<S191>/Data Type Duplicate' : Unused code path elimination
//  Block '<S193>/Data Type Duplicate' : Unused code path elimination
//  Block '<S194>/Data Type Duplicate' : Unused code path elimination
//  Block '<S195>/Data Type Duplicate' : Unused code path elimination
//  Block '<S198>/Data Type Duplicate' : Unused code path elimination
//  Block '<S199>/Data Type Duplicate' : Unused code path elimination
//  Block '<S200>/Data Type Duplicate' : Unused code path elimination
//  Block '<S203>/Data Type Duplicate' : Unused code path elimination
//  Block '<S204>/Data Type Duplicate' : Unused code path elimination
//  Block '<S205>/Data Type Duplicate' : Unused code path elimination
//  Block '<S327>/Data Type Duplicate' : Unused code path elimination
//  Block '<S328>/Data Type Duplicate' : Unused code path elimination
//  Block '<S355>/Data Type Duplicate' : Unused code path elimination
//  Block '<S356>/Data Type Duplicate' : Unused code path elimination
//  Block '<S382>/Data Type Duplicate' : Unused code path elimination
//  Block '<S383>/Data Type Duplicate' : Unused code path elimination
//  Block '<S384>/Data Type Duplicate' : Unused code path elimination
//  Block '<S402>/Data Type Duplicate' : Unused code path elimination
//  Block '<S403>/Data Type Duplicate' : Unused code path elimination
//  Block '<S214>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S215>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S216>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S249>/Reshape' : Reshape block reduction
//  Block '<S250>/Reshape' : Reshape block reduction
//  Block '<S251>/Reshape' : Reshape block reduction
//  Block '<S252>/Reshape' : Reshape block reduction
//  Block '<S315>/Reshape' : Reshape block reduction
//  Block '<S344>/Reshape' : Reshape block reduction
//  Block '<S365>/Reshape1' : Reshape block reduction
//  Block '<S391>/Reshape' : Reshape block reduction


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'GNC2026W'
//  '<S1>'   : 'GNC2026W/1 - Experiment Logic'
//  '<S2>'   : 'GNC2026W/2 - Guidance'
//  '<S3>'   : 'GNC2026W/3 - Control'
//  '<S4>'   : 'GNC2026W/Check  Connection'
//  '<S5>'   : 'GNC2026W/Data Logger Subsystem'
//  '<S6>'   : 'GNC2026W/Debugger'
//  '<S7>'   : 'GNC2026W/Float Code'
//  '<S8>'   : 'GNC2026W/Manipulator Encoder Data'
//  '<S9>'   : 'GNC2026W/Navigation Filter'
//  '<S10>'  : 'GNC2026W/PhaseSpace Camera Code'
//  '<S11>'  : 'GNC2026W/Platform  Identification'
//  '<S12>'  : 'GNC2026W/Receive CV Data'
//  '<S13>'  : 'GNC2026W/Recieve ROB  Data'
//  '<S14>'  : 'GNC2026W/Robotic  Arm Code'
//  '<S15>'  : 'GNC2026W/Send Data  to Orin'
//  '<S16>'  : 'GNC2026W/Send Data  to ROB'
//  '<S17>'  : 'GNC2026W/Simulate Plant Dynamics'
//  '<S18>'  : 'GNC2026W/Simulation  Status'
//  '<S19>'  : 'GNC2026W/Thruster Control Code'
//  '<S20>'  : 'GNC2026W/Time Sync.'
//  '<S21>'  : 'GNC2026W/1 - Experiment Logic/Phase #0: Synchronization'
//  '<S22>'  : 'GNC2026W/1 - Experiment Logic/Phase #1: Start Floating '
//  '<S23>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position'
//  '<S24>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment'
//  '<S25>'  : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home'
//  '<S26>'  : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home'
//  '<S27>'  : 'GNC2026W/1 - Experiment Logic/Phase #6: Clean Shutdown'
//  '<S28>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Joint Angles RED'
//  '<S29>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLACK'
//  '<S30>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLUE'
//  '<S31>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position RED'
//  '<S32>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1'
//  '<S33>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 '
//  '<S34>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 '
//  '<S35>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4'
//  '<S36>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Joint Angles RED'
//  '<S37>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK'
//  '<S38>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE'
//  '<S39>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED'
//  '<S40>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired'
//  '<S41>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem'
//  '<S42>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Wrap'
//  '<S43>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S44>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem/Subsystem'
//  '<S45>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem/Subsystem1'
//  '<S46>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Circular Tracking'
//  '<S47>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S48>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Wrap'
//  '<S49>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S50>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Circular Tracking'
//  '<S51>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S52>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Stand-off Distance'
//  '<S53>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Wrap'
//  '<S54>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S55>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Black Control Logic'
//  '<S56>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Joint Angles RED'
//  '<S57>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK'
//  '<S58>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE'
//  '<S59>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED'
//  '<S60>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic'
//  '<S61>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Black Control Logic/First Fit Detector'
//  '<S62>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S63>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem'
//  '<S64>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Wrap'
//  '<S65>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S66>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S67>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S68>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S69>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S70>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Wrap'
//  '<S71>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S72>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Circular Tracking'
//  '<S73>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S74>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Stand-off Distance'
//  '<S75>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Wrap'
//  '<S76>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S77>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/First Fit Detector'
//  '<S78>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem'
//  '<S79>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem1'
//  '<S80>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem2'
//  '<S81>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem3'
//  '<S82>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem4'
//  '<S83>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem5'
//  '<S84>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Joint Angles RED'
//  '<S85>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK'
//  '<S86>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE'
//  '<S87>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED'
//  '<S88>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S89>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem'
//  '<S90>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Wrap'
//  '<S91>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S92>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S93>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S94>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S95>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S96>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Wrap'
//  '<S97>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S98>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Circular Tracking'
//  '<S99>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S100>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Stand-off Distance'
//  '<S101>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Wrap'
//  '<S102>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S103>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Joint Angles RED'
//  '<S104>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK'
//  '<S105>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE'
//  '<S106>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED'
//  '<S107>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired'
//  '<S108>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/Wrap'
//  '<S109>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S110>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Circular Tracking'
//  '<S111>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S112>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Wrap'
//  '<S113>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S114>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Circular Tracking'
//  '<S115>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S116>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Stand-off Distance'
//  '<S117>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Wrap'
//  '<S118>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S119>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Joint Angles RED'
//  '<S120>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLACK'
//  '<S121>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLUE'
//  '<S122>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position RED'
//  '<S123>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Joint Angles RED'
//  '<S124>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLACK'
//  '<S125>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLUE'
//  '<S126>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position RED'
//  '<S127>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)'
//  '<S128>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)'
//  '<S129>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)'
//  '<S130>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)'
//  '<S131>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)'
//  '<S132>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)'
//  '<S133>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)'
//  '<S134>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)'
//  '<S135>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)/Desired Position'
//  '<S136>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)/Desired Position'
//  '<S137>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)/Desired Position'
//  '<S138>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Grab Logic'
//  '<S139>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/LOS Calculation'
//  '<S140>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/MATLAB Function4'
//  '<S141>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1'
//  '<S142>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Grab Logic/Enabled Subsystem'
//  '<S143>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1/Unwrap'
//  '<S144>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1/Unwrap/MATLAB Function'
//  '<S145>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)/Desired Position'
//  '<S146>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)/Desired Position'
//  '<S147>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)/Desired Position'
//  '<S148>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)/Desired Position'
//  '<S149>' : 'GNC2026W/3 - Control/Custom Control (ARM)'
//  '<S150>' : 'GNC2026W/3 - Control/Custom Control (RED)'
//  '<S151>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)'
//  '<S152>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)'
//  '<S153>' : 'GNC2026W/3 - Control/Default LQR Control (RED)'
//  '<S154>' : 'GNC2026W/3 - Control/Default PD (ARM)'
//  '<S155>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)'
//  '<S156>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)'
//  '<S157>' : 'GNC2026W/3 - Control/Default PD Control (RED)'
//  '<S158>' : 'GNC2026W/3 - Control/Disable Control (ARM)'
//  '<S159>' : 'GNC2026W/3 - Control/Disable Thrusters (BLACK)'
//  '<S160>' : 'GNC2026W/3 - Control/Disable Thrusters (BLUE)'
//  '<S161>' : 'GNC2026W/3 - Control/Disable Thrusters (RED)'
//  '<S162>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function2'
//  '<S163>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function3'
//  '<S164>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap'
//  '<S165>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap1'
//  '<S166>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap'
//  '<S167>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S168>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap1/MATLAB Function'
//  '<S169>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error'
//  '<S170>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative'
//  '<S171>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative1'
//  '<S172>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative2'
//  '<S173>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S174>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error'
//  '<S175>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative'
//  '<S176>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative1'
//  '<S177>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative2'
//  '<S178>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S179>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error'
//  '<S180>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative'
//  '<S181>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative1'
//  '<S182>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative2'
//  '<S183>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error/MATLAB Function'
//  '<S184>' : 'GNC2026W/3 - Control/Default PD (ARM)/Passthrough for Experiment'
//  '<S185>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller'
//  '<S186>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)'
//  '<S187>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)'
//  '<S188>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)'
//  '<S189>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)/Discrete Derivative1'
//  '<S190>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)/Discrete Derivative1'
//  '<S191>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)/Discrete Derivative1'
//  '<S192>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error'
//  '<S193>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative'
//  '<S194>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative1'
//  '<S195>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative2'
//  '<S196>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S197>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error'
//  '<S198>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative'
//  '<S199>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative1'
//  '<S200>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative2'
//  '<S201>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S202>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error'
//  '<S203>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative'
//  '<S204>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative1'
//  '<S205>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative2'
//  '<S206>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error/MATLAB Function'
//  '<S207>' : 'GNC2026W/Check  Connection/Change BLACK Behavior'
//  '<S208>' : 'GNC2026W/Check  Connection/Change BLUE Behavior'
//  '<S209>' : 'GNC2026W/Check  Connection/Change RED Behavior'
//  '<S210>' : 'GNC2026W/Data Logger Subsystem/Data Logger'
//  '<S211>' : 'GNC2026W/Data Logger Subsystem/Separation'
//  '<S212>' : 'GNC2026W/Data Logger Subsystem/Data Logger/MATLAB Function'
//  '<S213>' : 'GNC2026W/Data Logger Subsystem/Separation/MATLAB Function'
//  '<S214>' : 'GNC2026W/Debugger/Change BLACK Behavior'
//  '<S215>' : 'GNC2026W/Debugger/Change BLUE Behavior'
//  '<S216>' : 'GNC2026W/Debugger/Change RED Behavior'
//  '<S217>' : 'GNC2026W/Float Code/Enable Pucks'
//  '<S218>' : 'GNC2026W/Manipulator Encoder Data/Change ARM Behavior'
//  '<S219>' : 'GNC2026W/Navigation Filter/If Action Subsystem'
//  '<S220>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF'
//  '<S221>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF'
//  '<S222>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF'
//  '<S223>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Camera to Inertial Frame'
//  '<S224>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/EKF'
//  '<S225>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Unwrap'
//  '<S226>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Unwrap/Unwrap'
//  '<S227>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Unwrap/Unwrap/MATLAB Function'
//  '<S228>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Camera to Inertial Frame'
//  '<S229>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/MEKF'
//  '<S230>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Unwrap'
//  '<S231>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/VIS Measured States'
//  '<S232>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Unwrap/Unwrap'
//  '<S233>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Unwrap/Unwrap/MATLAB Function'
//  '<S234>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/VIS Measured States/Artificial VIS States'
//  '<S235>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/VIS Measured States/Experimental VIS States'
//  '<S236>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/VIS Measured States/Experimental VIS States/If Action Subsystem'
//  '<S237>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/VIS Measured States/Experimental VIS States/If Action Subsystem1'
//  '<S238>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unscented Kalman Filter'
//  '<S239>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unwrap'
//  '<S240>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/VIS Measured States'
//  '<S241>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unwrap/Unwrap'
//  '<S242>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unwrap/Unwrap/MATLAB Function'
//  '<S243>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/VIS Measured States/Artificial VIS States'
//  '<S244>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/VIS Measured States/Experimental VIS States'
//  '<S245>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/VIS Measured States/Experimental VIS States/If Action Subsystem'
//  '<S246>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/VIS Measured States/Experimental VIS States/If Action Subsystem1'
//  '<S247>' : 'GNC2026W/PhaseSpace Camera Code/Initialize Universal Time (Simulation)'
//  '<S248>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States'
//  '<S249>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data'
//  '<S250>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data'
//  '<S251>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data'
//  '<S252>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data'
//  '<S253>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)'
//  '<S254>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Enabled Subsystem2'
//  '<S255>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function'
//  '<S256>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function1'
//  '<S257>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time'
//  '<S258>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLACK Behavior'
//  '<S259>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLUE Behavior'
//  '<S260>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change RED Behavior'
//  '<S261>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step'
//  '<S262>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)'
//  '<S263>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1'
//  '<S264>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2'
//  '<S265>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Wrap'
//  '<S266>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S267>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/MATLAB Function'
//  '<S268>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Artificial isValid Flag'
//  '<S269>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/BLK CoM to LAR'
//  '<S270>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/CV Noise'
//  '<S271>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Inertial to Camera Frame (HARDWARE)'
//  '<S272>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/MATLAB Function'
//  '<S273>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Sample and Hold'
//  '<S274>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap'
//  '<S275>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Artificial isValid Flag/MATLAB Function1'
//  '<S276>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap'
//  '<S277>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap/MATLAB Function'
//  '<S278>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem'
//  '<S279>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S280>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem'
//  '<S281>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S282>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step'
//  '<S283>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1'
//  '<S284>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2'
//  '<S285>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Wrap'
//  '<S286>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S287>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/MATLAB Function'
//  '<S288>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem'
//  '<S289>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S290>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem'
//  '<S291>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S292>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step'
//  '<S293>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1'
//  '<S294>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2'
//  '<S295>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Wrap'
//  '<S296>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S297>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/MATLAB Function'
//  '<S298>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem'
//  '<S299>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S300>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem'
//  '<S301>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S302>' : 'GNC2026W/Platform  Identification/Subsystem'
//  '<S303>' : 'GNC2026W/Receive CV Data/CV UDP'
//  '<S304>' : 'GNC2026W/Receive CV Data/CV UDP/Reading isValid'
//  '<S305>' : 'GNC2026W/Recieve ROB  Data/ROB UDP'
//  '<S306>' : 'GNC2026W/Recieve ROB  Data/Simulated Flag'
//  '<S307>' : 'GNC2026W/Robotic  Arm Code/Change ARM Behavior'
//  '<S308>' : 'GNC2026W/Send Data  to Orin/Subsystem'
//  '<S309>' : 'GNC2026W/Send Data  to ROB/SEND ROB UDP'
//  '<S310>' : 'GNC2026W/Send Data  to ROB/SEND ROB UDP/MATLAB Function'
//  '<S311>' : 'GNC2026W/Send Data  to ROB/SEND ROB UDP/MATLAB Function2'
//  '<S312>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics'
//  '<S313>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics'
//  '<S314>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics'
//  '<S315>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States'
//  '<S316>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store True States'
//  '<S317>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Data @ Measurement Rate'
//  '<S318>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Dynamics Model for BLACK'
//  '<S319>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise '
//  '<S320>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Subsystem1'
//  '<S321>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Subsystem2'
//  '<S322>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Wrap2'
//  '<S323>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Subsystem1/Enabled Subsystem'
//  '<S324>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S325>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Subsystem2/Enabled Subsystem'
//  '<S326>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store Measured States/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S327>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store True States/Discrete Derivative'
//  '<S328>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store True States/Discrete Derivative1'
//  '<S329>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Calculated & Store True States/Wrap1'
//  '<S330>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Data @ Measurement Rate/Calculate True  Time Step'
//  '<S331>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Data @ Measurement Rate/Enabled Subsystem'
//  '<S332>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Data @ Measurement Rate/Enabled Subsystem1'
//  '<S333>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Data @ Measurement Rate/Calculate True  Time Step/Enabled Subsystem3'
//  '<S334>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Data @ Measurement Rate/Calculate True  Time Step/MATLAB Function'
//  '<S335>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Dynamics Model for BLACK/MATLAB Function'
//  '<S336>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /CV Noise'
//  '<S337>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /MATLAB Function'
//  '<S338>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /MATLAB Function1'
//  '<S339>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /Sample and Hold'
//  '<S340>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /Unwrap'
//  '<S341>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /Unwrap/Unwrap'
//  '<S342>' : 'GNC2026W/Simulate Plant Dynamics/BLACK Dynamics/Simulated Noise /Unwrap/Unwrap/MATLAB Function'
//  '<S343>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/BLUE  Dynamics Model'
//  '<S344>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States'
//  '<S345>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store True States'
//  '<S346>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Data @ Measurement Rate'
//  '<S347>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/BLUE  Dynamics Model/MATLAB Function'
//  '<S348>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Subsystem1'
//  '<S349>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Subsystem2'
//  '<S350>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Wrap'
//  '<S351>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Subsystem1/Enabled Subsystem'
//  '<S352>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S353>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Subsystem2/Enabled Subsystem'
//  '<S354>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store Measured States/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S355>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store True States/Discrete Derivative'
//  '<S356>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store True States/Discrete Derivative1'
//  '<S357>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Calculated & Store True States/Wrap'
//  '<S358>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Data @ Measurement Rate/Calculate True  Time Step'
//  '<S359>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Data @ Measurement Rate/Enabled Subsystem'
//  '<S360>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Data @ Measurement Rate/Enabled Subsystem1'
//  '<S361>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Data @ Measurement Rate/Calculate True  Time Step/Enabled Subsystem3'
//  '<S362>' : 'GNC2026W/Simulate Plant Dynamics/BLUE Dynamics/Data @ Measurement Rate/Calculate True  Time Step/MATLAB Function'
//  '<S363>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM'
//  '<S364>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only'
//  '<S365>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States'
//  '<S366>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store True States'
//  '<S367>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Coriolis Function1'
//  '<S368>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Data @ Measurement Rate'
//  '<S369>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Dynamics Model'
//  '<S370>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Exceeded Table Limits'
//  '<S371>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Inertia Function 1'
//  '<S372>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem3'
//  '<S373>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem4'
//  '<S374>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem5'
//  '<S375>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Wrap'
//  '<S376>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem3/Enabled Subsystem'
//  '<S377>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem3/Enabled Subsystem/MATLAB Function'
//  '<S378>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem4/Enabled Subsystem'
//  '<S379>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem4/Enabled Subsystem/MATLAB Function'
//  '<S380>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem5/Enabled Subsystem'
//  '<S381>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store Measured States/Subsystem5/Enabled Subsystem/MATLAB Function'
//  '<S382>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store True States/Discrete Derivative'
//  '<S383>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store True States/Discrete Derivative1'
//  '<S384>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store True States/Discrete Derivative2'
//  '<S385>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Calculated & Store True States/Wrap'
//  '<S386>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Data @ Measurement Rate/Calculate True  Time Step'
//  '<S387>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Data @ Measurement Rate/Enabled Subsystem'
//  '<S388>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Data @ Measurement Rate/Enabled Subsystem1'
//  '<S389>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Data @ Measurement Rate/Calculate True  Time Step/Enabled Subsystem3'
//  '<S390>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED + ARM/Data @ Measurement Rate/Calculate True  Time Step/MATLAB Function'
//  '<S391>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States'
//  '<S392>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store True States'
//  '<S393>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Data @ Measurement Rate'
//  '<S394>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Dynamics Model for RED'
//  '<S395>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Subsystem1'
//  '<S396>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Subsystem2'
//  '<S397>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Wrap2'
//  '<S398>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Subsystem1/Enabled Subsystem'
//  '<S399>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S400>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Subsystem2/Enabled Subsystem'
//  '<S401>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store Measured States/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S402>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store True States/Discrete Derivative'
//  '<S403>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store True States/Discrete Derivative1'
//  '<S404>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Calculated & Store True States/Wrap'
//  '<S405>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Data @ Measurement Rate/Calculate True  Time Step'
//  '<S406>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Data @ Measurement Rate/Enabled Subsystem'
//  '<S407>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Data @ Measurement Rate/Enabled Subsystem1'
//  '<S408>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Data @ Measurement Rate/Calculate True  Time Step/Enabled Subsystem3'
//  '<S409>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Data @ Measurement Rate/Calculate True  Time Step/MATLAB Function'
//  '<S410>' : 'GNC2026W/Simulate Plant Dynamics/RED and ARM Dynamics/RED Only/Dynamics Model for RED/MATLAB Function'
//  '<S411>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior'
//  '<S412>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior'
//  '<S413>' : 'GNC2026W/Thruster Control Code/Change RED Behavior'
//  '<S414>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle'
//  '<S415>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body'
//  '<S416>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S417>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S418>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S419>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S420>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S421>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S422>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S423>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S424>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S425>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S426>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle'
//  '<S427>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body'
//  '<S428>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S429>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S430>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S431>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S432>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S433>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S434>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S435>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S436>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S437>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S438>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle'
//  '<S439>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body'
//  '<S440>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S441>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S442>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S443>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function8'
//  '<S444>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S445>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S446>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S447>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S448>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S449>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S450>' : 'GNC2026W/Time Sync./Change BLACK Behavior'
//  '<S451>' : 'GNC2026W/Time Sync./Change BLUE Behavior'
//  '<S452>' : 'GNC2026W/Time Sync./Change RED Behavior'

#endif                                 // GNC2026W_h_

//
// File trailer for generated code.
//
// [EOF]
//
