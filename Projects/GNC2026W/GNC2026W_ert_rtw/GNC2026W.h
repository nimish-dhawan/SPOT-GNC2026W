//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.h
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1519
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Fri Jan 30 11:42:43 2026
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
#include "rtw_continuous.h"
#include "rtw_solver.h"
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

#include <stddef.h>

// Block states (default storage) for system '<S4>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC202_T {
  real_T UDPSend_NetworkLib[137];      // '<S211>/UDP Send'
};

// Block states (default storage) for system '<S233>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_l_T {
  real_T UDPSendGUI_NetworkLib[137];   // '<S234>/UDP Send (GUI)'
};

// Block signals for system '<S239>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_T {
  real_T Delay[3];                     // '<S252>/Delay'
  real_T ema[3];                       // '<S252>/MATLAB Function'
};

// Block states (default storage) for system '<S239>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026W_T {
  real_T Delay_DSTATE[3];              // '<S252>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S239>/Enabled Subsystem'
};

// Block signals for system '<S240>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_h_T {
  real_T Delay[3];                     // '<S254>/Delay'
  real_T ema[3];                       // '<S254>/MATLAB Function'
};

// Block states (default storage) for system '<S240>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_c_T {
  real_T Delay_DSTATE[3];              // '<S254>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S240>/Enabled Subsystem'
};

// Block signals for system '<S292>/Pseudoinverse1'
struct B_Pseudoinverse1_GNC2026W_T {
  real_T Pseudoinverse1[24];           // '<S292>/Pseudoinverse1'
};

// Block states (default storage) for system '<S292>/Pseudoinverse1'
struct DW_Pseudoinverse1_GNC2026W_T {
  dsp_simulink_Pseudoinverse_GN_T obj; // '<S292>/Pseudoinverse1'
  boolean_T objisempty;                // '<S292>/Pseudoinverse1'
};

// Block signals for system '<S18>/Change BLACK Behavior'
struct B_ChangeBLACKBehavior_GNC20_m_T {
  real_T Clock1;                       // '<S325>/Clock1'
};

// Block states (default storage) for system '<S18>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_g_T {
  real_T UDPSendClock_NetworkLib[137]; // '<S325>/UDP Send (Clock)'
};

// Block signals (default storage)
struct B_GNC2026W_T {
  real_T Merge1[3];                    // '<S3>/Merge1'
  real_T Merge2[3];                    // '<S3>/Merge2'
  real_T Merge[3];                     // '<S3>/Merge'
  real_T TmpSignalConversionAtUDPSendInp[10];
  real_T duty_cycles[8];               // '<S313>/MATLAB Function5'
  real_T ThrustPer_Final[8];           // '<S321>/ThrustPer_Final'
  real_T In1;                          // '<S320>/In1'
  real_T duty_cycles_j[8];             // '<S301>/MATLAB Function5'
  real_T ThrustPer_Final_h[8];         // '<S309>/ThrustPer_Final'
  real_T In1_g;                        // '<S308>/In1'
  real_T duty_cycles_m[8];             // '<S289>/MATLAB Function5'
  real_T ThrustPer_Final_h5[8];        // '<S297>/ThrustPer_Final'
  real_T In1_g2;                       // '<S296>/In1'
  real_T TmpSignalConversionAtUDPSendI_o[4];
  real_T TmpSignalConversionAtUDPSend_og[28];
  real_T ReceivePhaseSpaceData_o1[19]; // '<S225>/Receive PhaseSpace Data'
  real_T ConvertBLAXfrommmtom;        // '<S226>/Convert BLAX from [mm] to [m]'
  real_T ConvertBLUXfrommmtom;        // '<S227>/Convert BLUX from [mm] to [m]'
  real_T ConvertREDXfrommmtom;        // '<S228>/Convert REDX from [mm] to [m]'
  real_T UDPReceiveREDClock_o1;        // '<S229>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_o1;      // '<S229>/UDP Receive (BLACK Clock)'
  real_T UDPReceiveBLUEClock_o1;       // '<S229>/UDP Receive (BLUE Clock)'
  real_T dy[3];                        // '<S274>/MATLAB Function'
  real_T dy_h[3];                      // '<S272>/MATLAB Function'
  real_T y2y1;                         // '<S270>/y2-y1'
  real_T dy_c[3];                      // '<S264>/MATLAB Function'
  real_T dy_d[3];                      // '<S262>/MATLAB Function'
  real_T y2y1_o;                       // '<S260>/y2-y1'
  real_T dy_p[3];                      // '<S254>/MATLAB Function'
  real_T dy_g[3];                      // '<S252>/MATLAB Function'
  real_T y;                            // '<S250>/MATLAB Function'
  real_T u_next;                       // '<S250>/MATLAB Function'
  real_T y2y1_ob;                      // '<S242>/y2-y1'
  real_T In1_g20;                      // '<S230>/In1'
  real_T Merge_k[6];                   // '<S129>/Merge'
  real32_T UDPReceive_o1[4];           // '<S278>/UDP Receive'
  real32_T UDPReceive_o1_a[4];         // '<S277>/UDP Receive'
  uint8_T StringtoASCII[31];           // '<S220>/String to ASCII'
  uint8_T StringtoASCII2[31];          // '<S219>/String to ASCII2'
  uint8_T StringtoASCII1[31];          // '<S218>/String to ASCII1'
  B_ChangeBLACKBehavior_GNC20_m_T ChangeREDBehavior_h;// '<S18>/Change RED Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLUEBehavior_e;// '<S18>/Change BLUE Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLACKBehavior_i;// '<S18>/Change BLACK Behavior' 
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S292>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S292>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S292>/Pseudoinverse1'
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_l1;// '<S268>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S267>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_d;// '<S258>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S257>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_g;// '<S240>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S239>/Enabled Subsystem'
};

// Block states (default storage) for system '<Root>'
struct DW_GNC2026W_T {
  Dynamixel_Controller_GNC2026W_T obj;
  // '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  GPIO_Write_GNC2026W_T obj_l;         // '<S221>/GPIO Write1'
  ReadArm_Position_Rates_GNC202_T obj_d;
                     // '<S222>/Read Joint Positions using  Dynamixel Encoders'
  IdentifyPlatform_GNC2026W_T obj_dk;  // '<S276>/WhoAmI'
  CustomDataLogger_GNC2026W_T obj_f;   // '<S214>/MATLAB System'
  real_T Delay_DSTATE;                 // '<S315>/Delay'
  real_T Delay_DSTATE_k;               // '<S303>/Delay'
  real_T Delay_DSTATE_kz;              // '<S291>/Delay'
  real_T Delay_DSTATE_b;               // '<S284>/Delay'
  real_T Delay1_DSTATE;                // '<S284>/Delay1'
  real_T Delay2_DSTATE;                // '<S237>/Delay2'
  real_T Delay1_DSTATE_i;              // '<S237>/Delay1'
  real_T Delay1_DSTATE_g[3];           // '<S240>/Delay1'
  real_T Delay1_DSTATE_b[3];           // '<S239>/Delay1'
  real_T Delay_DSTATE_h;               // '<S250>/Delay'
  real_T Delay1_DSTATE_f;              // '<S250>/Delay1'
  real_T Delay2_DSTATE_l;              // '<S256>/Delay2'
  real_T Delay1_DSTATE_l;              // '<S256>/Delay1'
  real_T Delay1_DSTATE_m[3];           // '<S258>/Delay1'
  real_T Delay1_DSTATE_lv[3];          // '<S257>/Delay1'
  real_T Delay2_DSTATE_l0;             // '<S266>/Delay2'
  real_T Delay1_DSTATE_ld;             // '<S266>/Delay1'
  real_T Delay1_DSTATE_c[3];           // '<S268>/Delay1'
  real_T Delay1_DSTATE_cq[3];          // '<S267>/Delay1'
  real_T Delay_DSTATE_o;               // '<S222>/Delay'
  real_T Delay1_DSTATE_cg;             // '<S222>/Delay1'
  real_T Delay2_DSTATE_h;              // '<S222>/Delay2'
  real_T UD_DSTATE;                    // '<S193>/UD'
  real_T UD_DSTATE_e;                  // '<S194>/UD'
  real_T UD_DSTATE_a;                  // '<S195>/UD'
  real_T UD_DSTATE_l;                  // '<S179>/UD'
  real_T UD_DSTATE_k;                  // '<S180>/UD'
  real_T UD_DSTATE_h;                  // '<S181>/UD'
  real_T UD_DSTATE_o;                  // '<S202>/UD'
  real_T UD_DSTATE_n;                  // '<S203>/UD'
  real_T UD_DSTATE_hu;                 // '<S204>/UD'
  real_T UD_DSTATE_j;                  // '<S174>/UD'
  real_T UD_DSTATE_c;                  // '<S175>/UD'
  real_T UD_DSTATE_d;                  // '<S176>/UD'
  real_T UD_DSTATE_eh;                 // '<S197>/UD'
  real_T UD_DSTATE_hv;                 // '<S198>/UD'
  real_T UD_DSTATE_kv;                 // '<S199>/UD'
  real_T Delay_DSTATE_l;               // '<S171>/Delay'
  real_T Delay1_DSTATE_ba;             // '<S171>/Delay1'
  real_T UD_DSTATE_aq;                 // '<S184>/UD'
  real_T UD_DSTATE_p;                  // '<S185>/UD'
  real_T UD_DSTATE_pr;                 // '<S186>/UD'
  real_T UD_DSTATE_eg;                 // '<S207>/UD'
  real_T UD_DSTATE_cd;                 // '<S208>/UD'
  real_T UD_DSTATE_hd;                 // '<S209>/UD'
  real_T Delay_DSTATE_ol;              // '<S149>/Delay'
  real_T Delay1_DSTATE_e;              // '<S149>/Delay1'
  real_T Delay_DSTATE_c;               // '<S137>/Delay'
  real_T Delay1_DSTATE_g0;             // '<S137>/Delay1'
  real_T Delay_DSTATE_j;               // '<S142>/Delay'
  real_T Delay1_DSTATE_d;              // '<S142>/Delay1'
  real_T Delay_DSTATE_b4;              // '<S147>/Delay'
  real_T Delay1_DSTATE_a;              // '<S147>/Delay1'
  real_T UnitDelay1_DSTATE[6];         // '<S133>/Unit Delay1'
  real_T UnitDelay2_DSTATE[36];        // '<S133>/Unit Delay2'
  creal_T q;                           // '<S132>/MEKF'
  real_T NextOutput;                   // '<Root>/Gaussian Noise'
  real_T UDPSend_NetworkLib[137];      // '<S17>/UDP Send'
  real_T L0;                           // '<Root>/Data Store Memory'
  real_T RED_desired[9];               // '<Root>/Data Store Memory1'
  real_T BLUE_Control_Law_Enabler;     // '<Root>/RED_Tz1'
  real_T ARM_Control_Mode;             // '<Root>/RED_Tz15'
  real_T RED_Control_Law_Enabler;      // '<Root>/RED_Tz20'
  real_T RED_Path_Planner_Selection;   // '<Root>/RED_Tz25'
  real_T ARM_Control_Law_Enabler;      // '<Root>/RED_Tz38'
  real_T Float_State;                  // '<Root>/RED_Tz7'
  real_T BLACK_Control_Law_Enabler;    // '<Root>/RED_Tz8'
  real_T Univ_Time;                    // '<Root>/Universal_Time'
  real_T BLACK_Measured_States[9];     // '<Root>/Universal_Time10'
  real_T BLUE_Desired_States[3];       // '<Root>/Universal_Time13'
  real_T BLACK_Saturated_Controls[3];  // '<Root>/Universal_Time15'
  real_T WhoAmI;                       // '<Root>/Universal_Time19'
  real_T BLACK_True_States[9];         // '<Root>/Universal_Time2'
  real_T isSim;                        // '<Root>/Universal_Time20'
  real_T BLACK_CV_States[3];           // '<Root>/Universal_Time21'
  real_T VIS_Measured_States[3];       // '<Root>/Universal_Time22'
  real_T BLACK_Filtered_States[6];     // '<Root>/Universal_Time23'
  real_T ARM_Measured_States[6];       // '<Root>/Universal_Time24'
  real_T BLACK_Desired_States[3];      // '<Root>/Universal_Time25'
  real_T RED_Measured_States[9];       // '<Root>/Universal_Time26'
  real_T RED_Saturated_Controls[3];    // '<Root>/Universal_Time28'
  real_T RED_Desired_States[3];        // '<Root>/Universal_Time29'
  real_T RED_IMU_Measurements[3];      // '<Root>/Universal_Time31'
  real_T BLACK_IMU_Measurements[3];    // '<Root>/Universal_Time33'
  real_T BLUE_IMU_Measurements[3];     // '<Root>/Universal_Time34'
  real_T VIS_LAR_States[3];            // '<Root>/Universal_Time36'
  real_T sigma3[3];                    // '<Root>/Universal_Time37'
  real_T isValid;                      // '<Root>/Universal_Time38'
  real_T BLUE_Measured_States[9];      // '<Root>/Universal_Time4'
  real_T BLUE_Saturated_Controls[3];   // '<Root>/Universal_Time6'
  real_T ARM_Desired_States[3];        // '<Root>/Universal_Time8'
  real_T VIS_Confidence;               // '<Root>/Universal_Time9'
  real_T UDPSend_NetworkLib_b[137];    // '<S281>/UDP Send'
  real_T UDPSend_NetworkLib_m[137];    // '<S280>/UDP Send'
  real_T UDPReceive_NetworkLib[137];   // '<S278>/UDP Receive'
  real_T UDPReceive_NetworkLib_i[137]; // '<S277>/UDP Receive'
  real_T ReceivePhaseSpaceData_NetworkLi[137];// '<S225>/Receive PhaseSpace Data' 
  real_T UDPReceiveREDClock_NetworkLib[137];// '<S229>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_NetworkLib[137];// '<S229>/UDP Receive (BLACK Clock)' 
  real_T UDPReceiveBLUEClock_NetworkLib[137];// '<S229>/UDP Receive (BLUE Clock)' 
  real_T k;                            // '<S238>/Sample and Hold'
  real_T y_hold[3];                    // '<S238>/Sample and Hold'
  real_T k_h;                          // '<S238>/MATLAB Function1'
  real_T UDPSend3_NetworkLib[137];     // '<S220>/UDP Send3'
  real_T UDPSend2_NetworkLib[137];     // '<S219>/UDP Send2'
  real_T UDPSend1_NetworkLib[137];     // '<S218>/UDP Send1'
  real_T x[6];                         // '<S131>/EKF'
  real_T P[36];                        // '<S131>/EKF'
  real_T theta;                        // '<S131>/EKF'
  real_T theta_prev;                   // '<S131>/EKF'
  real_T x_m[5];                       // '<S132>/MEKF'
  real_T P_h[36];                      // '<S132>/MEKF'
  real_T theta_prev_a;                 // '<S132>/MEKF'
  real_T theta_cont;                   // '<S132>/MEKF'
  real_T k_hq;                         // '<S133>/Unscented Kalman Filter'
  real_T counter;                      // '<S57>/First Fit Detector'
  real_T firstfit;                     // '<S57>/First Fit Detector'
  real_T prev;                         // '<S57>/First Fit Detector'
  char_T RED_Logger[256];              // '<Root>/RED_Tz3'
  char_T BLACK_Logger[256];            // '<Root>/RED_Tz4'
  char_T BLUE_Logger[256];             // '<Root>/RED_Tz5'
  comm_internal_BernoulliBinary_T obj_fv;// '<Root>/Dropped Frames'
  uint32_T RandSeed;                   // '<Root>/Gaussian Noise'
  uint32_T method;                     // '<S238>/CV Noise'
  uint32_T state;                      // '<S238>/CV Noise'
  uint32_T state_g[2];                 // '<S238>/CV Noise'
  uint32_T state_j[625];               // '<S238>/CV Noise'
  uint32_T method_e;                   // '<Root>/Dropped Frames'
  uint32_T state_d[625];               // '<Root>/Dropped Frames'
  uint32_T state_jw[2];                // '<Root>/Dropped Frames'
  uint32_T state_b;                    // '<Root>/Dropped Frames'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S9>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S18>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_b;
    // '<S18>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_c;
    // '<S18>/This IF block determines whether or not to run the RED sim//exp '
  int8_T ThisIFblockdetermineswhether_ch;
  // '<S233>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhether_cs;
  // '<S233>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_d;
  // '<S233>/This IF block determines whether or not to run the RED sim//exp '
  boolean_T k_not_empty;               // '<S238>/Sample and Hold'
  boolean_T initial_theta;             // '<S131>/EKF'
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeREDBehavior_h;// '<S18>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLUEBehavior_e;// '<S18>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLACKBehavior_i;// '<S18>/Change BLACK Behavior' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S292>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S292>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S292>/Pseudoinverse1'
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_l1;// '<S268>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S267>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_d;// '<S258>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S257>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_g;// '<S240>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S239>/Enabled Subsystem'
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeREDBehavior_d;// '<S233>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLUEBehavior_f;// '<S233>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLACKBehavior_e;// '<S233>/Change BLACK Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeREDBehavior;// '<S4>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeBLUEBehavior;// '<S4>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeBLACKBehavior;// '<S4>/Change BLACK Behavior' 
};

// Parameters for system: '<S1>/Phase #0: Synchronization'
struct P_Phase0Synchronization_GNC20_T_ {
  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Constant8'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S19>/Puck State'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 0"
                                          //  Referenced by: '<S19>/String Constant'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 0"
                                          //  Referenced by: '<S19>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 0"
                                         //  Referenced by: '<S19>/String Constant2'

};

// Parameters for system: '<S1>/Phase #4: Return Home'
struct P_Phase4ReturnHome_GNC2026W_T_ {
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
                                          //  Referenced by: '<S109>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S109>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S109>/Constant2'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 4"
                                          //  Referenced by: '<S23>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 4"
                                         //  Referenced by: '<S23>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 4"
                                          //  Referenced by: '<S23>/String Constant'

};

// Parameters for system: '<S3>/Disable Thrusters (RED)'
struct P_DisableThrustersRED_GNC2026_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S167>/Zero'

};

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
struct P_DisableThrustersBLACK_GNC20_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S165>/Zero'

};

// Parameters for system: '<S4>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC2026_T_ {
  int32_T Constant1_Value;             // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S211>/Constant1'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S211>/UDP Send'

};

// Parameters for system: '<S233>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_p_T_ {
  int32_T UDPSendGUI_Port;             // Computed Parameter: UDPSendGUI_Port
                                          //  Referenced by: '<S234>/UDP Send (GUI)'

};

// Parameters for system: '<S239>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S252>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S252>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S252>/Delay'

};

// Parameters for system: '<S240>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_c_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S254>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S254>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S254>/Delay'

};

// Parameters for system: '<S18>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_b_T_ {
  int32_T UDPSendClock_Port;           // Computed Parameter: UDPSendClock_Port
                                          //  Referenced by: '<S325>/UDP Send (Clock)'

};

// Parameters (default storage)
struct P_GNC2026W_T_ {
  real_T A_c[9];                       // Variable: A_c
                                          //  Referenced by: '<S156>/Constant7'

  real_T CVrate;                       // Variable: CVrate
                                          //  Referenced by:
                                          //    '<S131>/EKF'
                                          //    '<S132>/MEKF'
                                          //    '<S133>/Unscented Kalman Filter'
                                          //    '<S238>/Sample and Hold'

  real_T F_red_X_nominal;              // Variable: F_red_X_nominal
                                          //  Referenced by:
                                          //    '<S289>/MATLAB Function5'
                                          //    '<S301>/MATLAB Function5'
                                          //    '<S313>/MATLAB Function5'

  real_T F_red_Y_nominal;              // Variable: F_red_Y_nominal
                                          //  Referenced by:
                                          //    '<S289>/MATLAB Function5'
                                          //    '<S301>/MATLAB Function5'
                                          //    '<S313>/MATLAB Function5'

  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by: '<S292>/MATLAB Function'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by: '<S304>/MATLAB Function'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by: '<S316>/MATLAB Function'

  real_T F_u[3];                       // Variable: F_u
                                          //  Referenced by: '<S156>/Constant3'

  real_T K_BLACK[18];                  // Variable: K_BLACK
                                          //  Referenced by: '<S157>/Constant2'

  real_T K_BLUE[18];                   // Variable: K_BLUE
                                          //  Referenced by: '<S158>/Constant2'

  real_T K_RED[18];                    // Variable: K_RED
                                          //  Referenced by: '<S159>/Constant2'

  real_T Kd_elarm;                     // Variable: Kd_elarm
                                          //  Referenced by: '<S190>/kd_elarm'

  real_T Kd_sharm;                     // Variable: Kd_sharm
                                          //  Referenced by: '<S191>/kd_sharm'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by: '<S161>/Gain5'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by: '<S162>/Gain5'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by: '<S163>/Gain5'

  real_T Kd_wrarm;                     // Variable: Kd_wrarm
                                          //  Referenced by: '<S192>/kd_wrarm'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by: '<S161>/Gain3'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by: '<S162>/Gain3'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by: '<S163>/Gain3'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by: '<S161>/Gain4'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by: '<S162>/Gain4'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by: '<S163>/Gain4'

  real_T Kp_elarm;                     // Variable: Kp_elarm
                                          //  Referenced by: '<S190>/kp_elarm'

  real_T Kp_sharm;                     // Variable: Kp_sharm
                                          //  Referenced by: '<S191>/kp_sharm'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by: '<S161>/Gain2'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by: '<S162>/Gain2'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by: '<S163>/Gain2'

  real_T Kp_wrarm;                     // Variable: Kp_wrarm
                                          //  Referenced by: '<S192>/kp_wrarm'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by: '<S161>/Gain'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by: '<S162>/Gain'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by: '<S163>/Gain'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by: '<S161>/Gain1'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by: '<S162>/Gain1'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by: '<S163>/Gain1'

  real_T Mc_inv[9];                    // Variable: Mc_inv
                                          //  Referenced by: '<S156>/MATLAB Function3'

  real_T PWMFreq;                      // Variable: PWMFreq
                                          //  Referenced by:
                                          //    '<S17>/PWM Frequency'
                                          //    '<S289>/MATLAB Function1'
                                          //    '<S301>/MATLAB Function1'
                                          //    '<S313>/MATLAB Function8'
                                          //    '<S291>/Constant1'
                                          //    '<S303>/Constant1'
                                          //    '<S315>/Constant1'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<S1>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<S1>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by:
                                          //    '<S1>/Constant1'
                                          //    '<S45>/Constant2'
                                          //    '<S65>/Constant2'
                                          //    '<S85>/Constant2'
                                          //    '<S89>/Constant2'
                                          //    '<S101>/Constant2'
                                          //    '<S105>/Constant2'
                                          //    '<S41>/Constant1'
                                          //    '<S42>/Constant1'
                                          //    '<S43>/Constant1'
                                          //    '<S61>/Constant1'
                                          //    '<S62>/Constant1'
                                          //    '<S63>/Constant1'
                                          //    '<S81>/Constant1'
                                          //    '<S82>/Constant1'
                                          //    '<S83>/Constant1'
                                          //    '<S99>/Constant1'

  real_T Phase3_End;                   // Variable: Phase3_End
                                          //  Referenced by: '<S1>/Constant2'

  real_T Phase3_SubPhase1_End;         // Variable: Phase3_SubPhase1_End
                                          //  Referenced by: '<S22>/Constant4'

  real_T Phase3_SubPhase2_End;         // Variable: Phase3_SubPhase2_End
                                          //  Referenced by: '<S22>/Constant1'

  real_T Phase3_SubPhase3_End;         // Variable: Phase3_SubPhase3_End
                                          //  Referenced by: '<S22>/Constant2'

  real_T Phase3_SubPhase4_End;         // Variable: Phase3_SubPhase4_End
                                          //  Referenced by: '<S22>/Constant3'

  real_T Phase4_End;                   // Variable: Phase4_End
                                          //  Referenced by: '<S1>/Constant3'

  real_T Phase5_End;                   // Variable: Phase5_End
                                          //  Referenced by: '<S1>/Constant6'

  real_T R[9];                         // Variable: R
                                          //  Referenced by: '<S133>/Unscented Kalman Filter'

  real_T Tz_lim_elarm;                 // Variable: Tz_lim_elarm
                                          //  Referenced by: '<S189>/Saturation1'

  real_T Tz_lim_sharm;                 // Variable: Tz_lim_sharm
                                          //  Referenced by: '<S189>/Saturation'

  real_T Tz_lim_wrarm;                 // Variable: Tz_lim_wrarm
                                          //  Referenced by: '<S189>/Saturation3'

  real_T X1_blk;                       // Variable: X1_blk
                                          //  Referenced by: '<S39>/Desired X-Position (BLACK)'

  real_T X2_blk;                       // Variable: X2_blk
                                          //  Referenced by: '<S59>/Desired X-Position (BLACK)'

  real_T X3_blk;                       // Variable: X3_blk
                                          //  Referenced by: '<S79>/Desired X-Position (BLACK)'

  real_T Y1_blk;                       // Variable: Y1_blk
                                          //  Referenced by: '<S39>/Desired Y-Position (BLACK)'

  real_T Y2_blk;                       // Variable: Y2_blk
                                          //  Referenced by: '<S59>/Desired Y-Position (BLACK)'

  real_T Y3_blk;                       // Variable: Y3_blk
                                          //  Referenced by: '<S79>/Desired Y-Position (BLACK)'

  real_T a;                            // Variable: a
                                          //  Referenced by: '<S133>/Unscented Kalman Filter'

  real_T alpha[9];                     // Variable: alpha
                                          //  Referenced by: '<S156>/MATLAB Function3'

  real_T b;                            // Variable: b
                                          //  Referenced by: '<S133>/Unscented Kalman Filter'

  real_T baseRate;                     // Variable: baseRate
                                          //  Referenced by:
                                          //    '<S222>/Read Joint Positions using  Dynamixel Encoders'
                                          //    '<S276>/WhoAmI'
                                          //    '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
                                          //    '<S131>/EKF'
                                          //    '<S132>/MEKF'
                                          //    '<S133>/Unscented Kalman Filter'
                                          //    '<S238>/MATLAB Function1'
                                          //    '<S238>/Sample and Hold'

  real_T dataRate;                     // Variable: dataRate
                                          //  Referenced by:
                                          //    '<S237>/Constant'
                                          //    '<S256>/Constant'
                                          //    '<S266>/Constant'

  real_T dt;                           // Variable: dt
                                          //  Referenced by: '<S133>/Unscented Kalman Filter'

  real_T fNum;                         // Variable: fNum
                                          //  Referenced by: '<S129>/Constant'

  real_T gamma[9];                     // Variable: gamma
                                          //  Referenced by: '<S156>/MATLAB Function3'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S110>/Desired States (BLACK)'
                                          //    '<S114>/Desired States (BLACK)'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S111>/Desired States (BLUE)'
                                          //    '<S115>/Desired States (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S112>/Constant2'
                                          //    '<S116>/Constant2'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S27>/Desired States (BLACK)'
                                          //    '<S149>/Delay'
                                          //    '<S149>/Delay1'
                                          //    '<S284>/Delay'
                                          //    '<S284>/Delay1'
                                          //    '<S137>/Delay'
                                          //    '<S137>/Delay1'
                                          //    '<S142>/Delay'
                                          //    '<S142>/Delay1'
                                          //    '<S147>/Delay'
                                          //    '<S147>/Delay1'
                                          //    '<S250>/Delay'
                                          //    '<S250>/Delay1'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by: '<S28>/Desired States (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S29>/Constant2'
                                          //    '<S37>/Constant2'
                                          //    '<S56>/Constant2'
                                          //    '<S171>/Delay'
                                          //    '<S171>/Delay1'

  real_T k;                            // Variable: k
                                          //  Referenced by: '<S133>/Unscented Kalman Filter'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S229>/MATLAB Function'

  real_T sep1;                         // Variable: sep1
                                          //  Referenced by: '<S37>/Separation'

  real_T sep3;                         // Variable: sep3
                                          //  Referenced by: '<S77>/Separation'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by: '<S16>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by: '<S292>/MATLAB Function'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by: '<S304>/MATLAB Function'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S289>/MATLAB Function5'
                                          //    '<S301>/MATLAB Function5'
                                          //    '<S313>/MATLAB Function5'
                                          //    '<S316>/MATLAB Function'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by:
                                          //    '<S94>/Desired X-Position (BLACK)'
                                          //    '<S44>/Constant1'
                                          //    '<S64>/Constant1'
                                          //    '<S84>/Constant1'
                                          //    '<S88>/Constant1'
                                          //    '<S100>/Constant1'
                                          //    '<S104>/Constant1'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by:
                                          //    '<S94>/Desired Y-Position (BLACK)'
                                          //    '<S44>/Constant2'
                                          //    '<S64>/Constant2'
                                          //    '<S84>/Constant2'
                                          //    '<S88>/Constant2'
                                          //    '<S100>/Constant2'
                                          //    '<S104>/Constant2'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S207>/UD'

  real_T DiscreteDerivative1_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative1_ICPrevScale
                                 //  Referenced by: '<S208>/UD'

  real_T DiscreteDerivative2_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative2_ICPrevScale
                                 //  Referenced by: '<S209>/UD'

  real_T DiscreteDerivative_ICPrevScal_i;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                 //  Referenced by: '<S184>/UD'

  real_T DiscreteDerivative1_ICPrevSca_e;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
                                 //  Referenced by: '<S185>/UD'

  real_T DiscreteDerivative2_ICPrevSca_o;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                 //  Referenced by: '<S186>/UD'

  real_T DiscreteDerivative_ICPrevScal_p;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_p
                                 //  Referenced by: '<S197>/UD'

  real_T DiscreteDerivative1_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
                                 //  Referenced by: '<S198>/UD'

  real_T DiscreteDerivative2_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
                                 //  Referenced by: '<S199>/UD'

  real_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S174>/UD'

  real_T DiscreteDerivative1_ICPrevSca_i;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
                                 //  Referenced by: '<S175>/UD'

  real_T DiscreteDerivative2_ICPrevSc_oo;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
                                 //  Referenced by: '<S176>/UD'

  real_T DiscreteDerivative_ICPrevSca_pf;
                              // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
                                 //  Referenced by: '<S202>/UD'

  real_T DiscreteDerivative1_ICPrevSca_l;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
                                 //  Referenced by: '<S203>/UD'

  real_T DiscreteDerivative2_ICPrevSc_on;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
                                 //  Referenced by: '<S204>/UD'

  real_T DiscreteDerivative_ICPrevScal_n;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_n
                                 //  Referenced by: '<S179>/UD'

  real_T DiscreteDerivative1_ICPrevSca_f;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
                                 //  Referenced by: '<S180>/UD'

  real_T DiscreteDerivative2_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                 //  Referenced by: '<S181>/UD'

  real_T DiscreteDerivative1_ICPrevSca_j;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
                                 //  Referenced by: '<S193>/UD'

  real_T DiscreteDerivative1_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
                                 //  Referenced by: '<S194>/UD'

  real_T DiscreteDerivative1_ICPrevSca_k;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
                                 //  Referenced by: '<S195>/UD'

  real_T MATLABFunction5_max_iters; // Mask Parameter: MATLABFunction5_max_iters
                                       //  Referenced by: '<S289>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_b;
                                  // Mask Parameter: MATLABFunction5_max_iters_b
                                     //  Referenced by: '<S301>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_e;
                                  // Mask Parameter: MATLABFunction5_max_iters_e
                                     //  Referenced by: '<S313>/MATLAB Function5'

  real_T MATLABFunction5_tol;          // Mask Parameter: MATLABFunction5_tol
                                          //  Referenced by: '<S289>/MATLAB Function5'

  real_T MATLABFunction5_tol_j;        // Mask Parameter: MATLABFunction5_tol_j
                                          //  Referenced by: '<S301>/MATLAB Function5'

  real_T MATLABFunction5_tol_g;        // Mask Parameter: MATLABFunction5_tol_g
                                          //  Referenced by: '<S313>/MATLAB Function5'

  real_T Constant11_Value;             // Expression: 0
                                          //  Referenced by: '<S21>/Constant11'

  real_T Constant12_Value;             // Expression: 0
                                          //  Referenced by: '<S21>/Constant12'

  real_T Constant14_Value;             // Expression: 0
                                          //  Referenced by: '<S21>/Constant14'

  real_T Constant15_Value;             // Expression: 0
                                          //  Referenced by: '<S21>/Constant15'

  real_T Constant18_Value;             // Expression: 0
                                          //  Referenced by: '<S21>/Constant18'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<S21>/Constant4'

  real_T Constant5_Value;              // Expression: 2
                                          //  Referenced by: '<S21>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S21>/Constant6'

  real_T Constant8_Value;              // Expression: 2
                                          //  Referenced by: '<S21>/Constant8'

  real_T Constant3_Value;              // Expression: pi/2
                                          //  Referenced by: '<S26>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S26>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S26>/Constant2'

  real_T Constant11_Value_e;           // Expression: 2
                                          //  Referenced by: '<S30>/Constant11'

  real_T Constant12_Value_g;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant12'

  real_T Constant14_Value_f;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant14'

  real_T Constant15_Value_o;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant15'

  real_T Constant18_Value_m;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant18'

  real_T Constant4_Value_g;            // Expression: 2
                                          //  Referenced by: '<S30>/Constant4'

  real_T Constant5_Value_o;            // Expression: 2
                                          //  Referenced by: '<S30>/Constant5'

  real_T Constant6_Value_i;            // Expression: 1
                                          //  Referenced by: '<S30>/Constant6'

  real_T Constant8_Value_m;            // Expression: 2
                                          //  Referenced by: '<S30>/Constant8'

  real_T Constant3_Value_b;            // Expression: pi/2
                                          //  Referenced by: '<S34>/Constant3'

  real_T Constant1_Value_o;            // Expression: pi/2
                                          //  Referenced by: '<S34>/Constant1'

  real_T Constant2_Value_f;            // Expression: 0
                                          //  Referenced by: '<S34>/Constant2'

  real_T DesiredRate_Value;            // Expression: 0.03490659
                                          //  Referenced by: '<S36>/Desired Rate '

  real_T Gain_Gain;                    // Expression: -0.85
                                          //  Referenced by: '<S44>/Gain'

  real_T Gain1_Gain;                   // Expression: -0.85
                                          //  Referenced by: '<S44>/Gain1'

  real_T Constant1_Value_n;            // Expression: 0.01
                                          //  Referenced by: '<S39>/Constant1'

  real_T Constant_Value;               // Expression: 0.005
                                          //  Referenced by: '<S39>/Constant'

  real_T DesiredRateBLACK_Value;       // Expression: 0.03490659
                                          //  Referenced by: '<S38>/Desired Rate (BLACK)'

  real_T Constant_Value_n;             // Expression: 0.3
                                          //  Referenced by: '<S50>/Constant'

  real_T Constant12_Value_k;           // Expression: 0
                                          //  Referenced by: '<S31>/Constant12'

  real_T Constant14_Value_i;           // Expression: 0
                                          //  Referenced by: '<S31>/Constant14'

  real_T Constant15_Value_o1;          // Expression: 0
                                          //  Referenced by: '<S31>/Constant15'

  real_T Constant18_Value_n;           // Expression: 0
                                          //  Referenced by: '<S31>/Constant18'

  real_T Constant4_Value_a;            // Expression: 2
                                          //  Referenced by: '<S31>/Constant4'

  real_T Constant6_Value_p;            // Expression: 1
                                          //  Referenced by: '<S31>/Constant6'

  real_T Constant8_Value_o;            // Expression: 2
                                          //  Referenced by: '<S31>/Constant8'

  real_T Constant3_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S53>/Constant3'

  real_T Constant1_Value_m;            // Expression: pi/2
                                          //  Referenced by: '<S53>/Constant1'

  real_T Constant2_Value_p;            // Expression: 0
                                          //  Referenced by: '<S53>/Constant2'

  real_T DesiredRate_Value_h;          // Expression: 0.03490659
                                          //  Referenced by: '<S55>/Desired Rate '

  real_T Gain_Gain_h;                  // Expression: -0.85
                                          //  Referenced by: '<S64>/Gain'

  real_T Gain1_Gain_c;                 // Expression: -0.85
                                          //  Referenced by: '<S64>/Gain1'

  real_T Constant1_Value_f;            // Expression: 0.01
                                          //  Referenced by: '<S59>/Constant1'

  real_T Constant_Value_f;             // Expression: 0.005
                                          //  Referenced by: '<S59>/Constant'

  real_T DesiredRateBLACK_Value_k;     // Expression: 0.03490659
                                          //  Referenced by: '<S58>/Desired Rate (BLACK)'

  real_T Separation_Value;             // Expression: 0.5
                                          //  Referenced by: '<S56>/Separation'

  real_T Constant_Value_e;             // Expression: 0.3
                                          //  Referenced by: '<S70>/Constant'

  real_T Constant11_Value_b;           // Expression: 1
                                          //  Referenced by: '<S32>/Constant11'

  real_T Constant12_Value_ku;          // Expression: 0
                                          //  Referenced by: '<S32>/Constant12'

  real_T Constant14_Value_n;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant14'

  real_T Constant15_Value_o2;          // Expression: 0
                                          //  Referenced by: '<S32>/Constant15'

  real_T Constant18_Value_l;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant18'

  real_T Constant4_Value_b;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant4'

  real_T Constant5_Value_n;            // Expression: 3
                                          //  Referenced by: '<S32>/Constant5'

  real_T Constant6_Value_n;            // Expression: 1
                                          //  Referenced by: '<S32>/Constant6'

  real_T Constant8_Value_f;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant8'

  real_T Constant3_Value_e;            // Expression: pi/2
                                          //  Referenced by: '<S74>/Constant3'

  real_T Constant1_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S74>/Constant1'

  real_T Constant2_Value_c;            // Expression: 0
                                          //  Referenced by: '<S74>/Constant2'

  real_T DesiredRate_Value_l;          // Expression: 0.03490659
                                          //  Referenced by: '<S76>/Desired Rate '

  real_T Gain_Gain_b;                  // Expression: -0.85
                                          //  Referenced by: '<S84>/Gain'

  real_T Gain1_Gain_k;                 // Expression: -0.85
                                          //  Referenced by: '<S84>/Gain1'

  real_T Constant1_Value_g;            // Expression: 0.01
                                          //  Referenced by: '<S79>/Constant1'

  real_T Constant_Value_d;             // Expression: 0.005
                                          //  Referenced by: '<S79>/Constant'

  real_T DesiredRateBLACK_Value_kf;    // Expression: 0.03490659
                                          //  Referenced by: '<S78>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_d;          // Expression: 0.03490659
                                          //  Referenced by: '<S77>/Desired Rate '

  real_T Gain_Gain_ho;                 // Expression: 0.85
                                          //  Referenced by: '<S88>/Gain'

  real_T Gain1_Gain_d;                 // Expression: 0.85
                                          //  Referenced by: '<S88>/Gain1'

  real_T Constant_Value_h;             // Expression: pi+0.01
                                          //  Referenced by: '<S77>/Constant'

  real_T Constant_Value_a;             // Expression: 0.3
                                          //  Referenced by: '<S90>/Constant'

  real_T Constant11_Value_p;           // Expression: 1
                                          //  Referenced by: '<S33>/Constant11'

  real_T Constant12_Value_n;           // Expression: 0
                                          //  Referenced by: '<S33>/Constant12'

  real_T Constant14_Value_f2;          // Expression: 0
                                          //  Referenced by: '<S33>/Constant14'

  real_T Constant15_Value_n;           // Expression: 0
                                          //  Referenced by: '<S33>/Constant15'

  real_T Constant18_Value_e;           // Expression: 0
                                          //  Referenced by: '<S33>/Constant18'

  real_T Constant4_Value_l;            // Expression: 2
                                          //  Referenced by: '<S33>/Constant4'

  real_T Constant5_Value_p;            // Expression: 3
                                          //  Referenced by: '<S33>/Constant5'

  real_T Constant6_Value_m;            // Expression: 1
                                          //  Referenced by: '<S33>/Constant6'

  real_T Constant8_Value_j;            // Expression: 2
                                          //  Referenced by: '<S33>/Constant8'

  real_T Constant3_Value_k;            // Expression: 0
                                          //  Referenced by: '<S93>/Constant3'

  real_T Constant1_Value_b;            // Expression: 0
                                          //  Referenced by: '<S93>/Constant1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S93>/Constant2'

  real_T DesiredRate_Value_ha;         // Expression: 0.03490659
                                          //  Referenced by: '<S95>/Desired Rate '

  real_T Gain_Gain_o;                  // Expression: -0.85
                                          //  Referenced by: '<S100>/Gain'

  real_T Gain1_Gain_b;                 // Expression: -0.85
                                          //  Referenced by: '<S100>/Gain1'

  real_T DesiredRateBLACK_Value_i;     // Expression: 0.03490659
                                          //  Referenced by: '<S97>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_n;          // Expression: 0.03490659
                                          //  Referenced by: '<S96>/Desired Rate '

  real_T Gain_Gain_ox;                 // Expression: 0.85
                                          //  Referenced by: '<S104>/Gain'

  real_T Gain1_Gain_e;                 // Expression: 0.85
                                          //  Referenced by: '<S104>/Gain1'

  real_T Constant_Value_h1;            // Expression: pi+0.01
                                          //  Referenced by: '<S96>/Constant'

  real_T Separation_Value_d;           // Expression: 0.30
                                          //  Referenced by: '<S96>/Separation'

  real_T Constant_Value_c;             // Expression: 0.3
                                          //  Referenced by: '<S106>/Constant'

  real_T UnitDelay1_InitialCondition[6];// Expression: zeros(6,1)
                                           //  Referenced by: '<S133>/Unit Delay1'

  real_T UnitDelay2_InitialCondition[36];
                                   // Expression: diag([1, 1, 0.05, 1, 1, 0.05])
                                      //  Referenced by: '<S133>/Unit Delay2'

  real_T Merge_InitialOutput;         // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S129>/Merge'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S207>/TSamp'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                          //  Referenced by: '<S208>/TSamp'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                          //  Referenced by: '<S209>/TSamp'

  real_T Gain6_Gain;                   // Expression: -1
                                          //  Referenced by: '<S163>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                          //  Referenced by: '<S163>/Gain7'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S163>/Gain8'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                          //  Referenced by: '<S184>/TSamp'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                          //  Referenced by: '<S185>/TSamp'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                          //  Referenced by: '<S186>/TSamp'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S197>/TSamp'

  real_T TSamp_WtEt_hr;                // Computed Parameter: TSamp_WtEt_hr
                                          //  Referenced by: '<S198>/TSamp'

  real_T TSamp_WtEt_ca;                // Computed Parameter: TSamp_WtEt_ca
                                          //  Referenced by: '<S199>/TSamp'

  real_T Gain6_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S161>/Gain6'

  real_T Gain7_Gain_b;                 // Expression: -1
                                          //  Referenced by: '<S161>/Gain7'

  real_T Gain8_Gain_m;                 // Expression: -1
                                          //  Referenced by: '<S161>/Gain8'

  real_T TSamp_WtEt_nd;                // Computed Parameter: TSamp_WtEt_nd
                                          //  Referenced by: '<S174>/TSamp'

  real_T TSamp_WtEt_co;                // Computed Parameter: TSamp_WtEt_co
                                          //  Referenced by: '<S175>/TSamp'

  real_T TSamp_WtEt_no;                // Computed Parameter: TSamp_WtEt_no
                                          //  Referenced by: '<S176>/TSamp'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                          //  Referenced by: '<S202>/TSamp'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                          //  Referenced by: '<S203>/TSamp'

  real_T TSamp_WtEt_px;                // Computed Parameter: TSamp_WtEt_px
                                          //  Referenced by: '<S204>/TSamp'

  real_T Gain6_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S162>/Gain6'

  real_T Gain7_Gain_e;                 // Expression: -1
                                          //  Referenced by: '<S162>/Gain7'

  real_T Gain8_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S162>/Gain8'

  real_T TSamp_WtEt_ft;                // Computed Parameter: TSamp_WtEt_ft
                                          //  Referenced by: '<S179>/TSamp'

  real_T TSamp_WtEt_eh;                // Computed Parameter: TSamp_WtEt_eh
                                          //  Referenced by: '<S180>/TSamp'

  real_T TSamp_WtEt_ii;                // Computed Parameter: TSamp_WtEt_ii
                                          //  Referenced by: '<S181>/TSamp'

  real_T TSamp_WtEt_pu;                // Computed Parameter: TSamp_WtEt_pu
                                          //  Referenced by: '<S193>/TSamp'

  real_T TSamp_WtEt_f0;                // Computed Parameter: TSamp_WtEt_f0
                                          //  Referenced by: '<S194>/TSamp'

  real_T TSamp_WtEt_nz;                // Computed Parameter: TSamp_WtEt_nz
                                          //  Referenced by: '<S195>/TSamp'

  real_T Constant7_Value;              // Expression: 1
                                          //  Referenced by: '<S160>/Constant7'

  real_T Merge3_InitialOutput;       // Computed Parameter: Merge3_InitialOutput
                                        //  Referenced by: '<S160>/Merge3'

  real_T Merge4_InitialOutput;       // Computed Parameter: Merge4_InitialOutput
                                        //  Referenced by: '<S160>/Merge4'

  real_T Merge5_InitialOutput;       // Computed Parameter: Merge5_InitialOutput
                                        //  Referenced by: '<S160>/Merge5'

  real_T Constant7_Value_h;            // Expression: 0
                                          //  Referenced by: '<S164>/Constant7'

  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S164>/Zero'

  real_T GPIOWrite1_gpioPin;           // Expression: 428
                                          //  Referenced by: '<S221>/GPIO Write1'

  real_T GPIOWrite1_pinDirection;      // Expression: 1
                                          //  Referenced by: '<S221>/GPIO Write1'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S222>/Delay'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S222>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S222>/Delay2'

  real_T UniversalTime_Y0;             // Computed Parameter: UniversalTime_Y0
                                          //  Referenced by: '<S230>/Universal Time'

  real_T dytdt_Y0;                     // Computed Parameter: dytdt_Y0
                                          //  Referenced by: '<S242>/dy(t)//dt'

  real_T dytdt_Y0_j;                   // Computed Parameter: dytdt_Y0_j
                                          //  Referenced by: '<S260>/dy(t)//dt'

  real_T dytdt_Y0_d;                   // Computed Parameter: dytdt_Y0_d
                                          //  Referenced by: '<S270>/dy(t)//dt'

  real_T ConvertBLAXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S226>/Convert BLAX from [mm] to [m]'

  real_T ConvertBLAYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S226>/Convert BLAY from [mm] to [m]'

  real_T ConvertBLACKVXfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S226>/Convert BLACKVX from [mm] to [m]'

  real_T ConvertBLACKVYfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S226>/Convert BLACKVY from [mm] to [m]'

  real_T Delay2_InitialCondition_e;    // Expression: 0
                                          //  Referenced by: '<S237>/Delay2'

  real_T Delay1_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S237>/Delay1'

  real_T Constant3_Value_eq;           // Expression: 0
                                          //  Referenced by: '<S237>/Constant3'

  real_T Delay1_InitialCondition_i;    // Expression: 0.0
                                          //  Referenced by: '<S240>/Delay1'

  real_T Constant3_Value_a;            // Expression: 0
                                          //  Referenced by: '<S240>/Constant3'

  real_T Delay1_InitialCondition_it;   // Expression: 0.0
                                          //  Referenced by: '<S239>/Delay1'

  real_T Constant3_Value_d;            // Expression: 0
                                          //  Referenced by: '<S239>/Constant3'

  real_T ConvertBLUXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S227>/Convert BLUX from [mm] to [m]'

  real_T ConvertBLUYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S227>/Convert BLUY from [mm] to [m]'

  real_T ConvertBLUEVXfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S227>/Convert BLUEVX from [mm] to [m]'

  real_T ConvertBLUEVYfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S227>/Convert BLUEVY from [mm] to [m]'

  real_T Delay2_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S256>/Delay2'

  real_T Delay1_InitialCondition_i3;   // Expression: 0
                                          //  Referenced by: '<S256>/Delay1'

  real_T Constant3_Value_o;            // Expression: 0
                                          //  Referenced by: '<S256>/Constant3'

  real_T Delay1_InitialCondition_h;    // Expression: 0.0
                                          //  Referenced by: '<S258>/Delay1'

  real_T Constant3_Value_c;            // Expression: 0
                                          //  Referenced by: '<S258>/Constant3'

  real_T Delay1_InitialCondition_j;    // Expression: 0.0
                                          //  Referenced by: '<S257>/Delay1'

  real_T Constant3_Value_ke;           // Expression: 0
                                          //  Referenced by: '<S257>/Constant3'

  real_T ConvertREDXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S228>/Convert REDX from [mm] to [m]'

  real_T ConvertREDYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S228>/Convert REDY from [mm] to [m]'

  real_T ConvertREDVXfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S228>/Convert REDVX from [mm] to [m]'

  real_T ConvertREDVYfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S228>/Convert REDVY from [mm] to [m]'

  real_T Delay2_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S266>/Delay2'

  real_T Delay1_InitialCondition_l;    // Expression: 0
                                          //  Referenced by: '<S266>/Delay1'

  real_T Constant3_Value_f;            // Expression: 0
                                          //  Referenced by: '<S266>/Constant3'

  real_T Delay1_InitialCondition_k;    // Expression: 0.0
                                          //  Referenced by: '<S268>/Delay1'

  real_T Constant3_Value_dh;           // Expression: 0
                                          //  Referenced by: '<S268>/Constant3'

  real_T Delay1_InitialCondition_c;    // Expression: 0.0
                                          //  Referenced by: '<S267>/Delay1'

  real_T Constant3_Value_dz;           // Expression: 0
                                          //  Referenced by: '<S267>/Constant3'

  real_T Constant_Value_i;             // Expression: 1
                                          //  Referenced by: '<S229>/Constant'

  real_T Gain_Gain_k;                  // Expression: -1
                                          //  Referenced by: '<S277>/Gain'

  real_T ControlDynamixelActuatorsineith;// Expression: 400
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_b;// Expression: 0
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_h;// Expression: 200
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_j;// Expression: 3072
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_m;// Expression: 1024
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_hy;// Expression: 0
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_i;// Expression: 850
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_g;// Expression: 400
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_g3;// Expression: 100
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_bf;// Expression: 20
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_l;// Expression: 0
                                            //  Referenced by: '<S279>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S296>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S297>/Out1'

  real_T BLACKDC_Y0;                   // Computed Parameter: BLACKDC_Y0
                                          //  Referenced by: '<S286>/BLACK DC'

  real_T Delay_InitialCondition_i;     // Expression: 0.0
                                          //  Referenced by: '<S291>/Delay'

  real_T Constant2_Value_h;            // Expression: 0
                                          //  Referenced by: '<S291>/Constant2'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S308>/Out1'

  real_T Out1_Y0_js;                   // Computed Parameter: Out1_Y0_js
                                          //  Referenced by: '<S309>/Out1'

  real_T BLUEDC_Y0;                    // Computed Parameter: BLUEDC_Y0
                                          //  Referenced by: '<S287>/BLUE DC'

  real_T Delay_InitialCondition_n;     // Expression: 0.0
                                          //  Referenced by: '<S303>/Delay'

  real_T Constant2_Value_fq;           // Expression: 0
                                          //  Referenced by: '<S303>/Constant2'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S320>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S321>/Out1'

  real_T REDDC_Y0;                     // Computed Parameter: REDDC_Y0
                                          //  Referenced by: '<S288>/RED DC'

  real_T Delay_InitialCondition_p;     // Expression: 0.0
                                          //  Referenced by: '<S315>/Delay'

  real_T Constant2_Value_e;            // Expression: 0
                                          //  Referenced by: '<S315>/Constant2'

  real_T Universal_Time1_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time1'

  real_T Universal_Time12_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time12'

  real_T Universal_Time7_InitialValue[6];// Expression: [0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time7'

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
                                          //  Referenced by: '<S17>/Safety Number'

  real_T Gain_Gain_oy;                 // Expression: 100
                                          //  Referenced by: '<S17>/Gain'

  real_T Gain1_Gain_em;                // Expression: 100
                                          //  Referenced by: '<S17>/Gain1'

  real_T Gain2_Gain;                   // Expression: 100
                                          //  Referenced by: '<S17>/Gain2'

  real_T Gain3_Gain;                   // Expression: 100
                                          //  Referenced by: '<S17>/Gain3'

  real_T Gain4_Gain;                   // Expression: 100
                                          //  Referenced by: '<S17>/Gain4'

  real_T Gain5_Gain;                   // Expression: 100
                                          //  Referenced by: '<S17>/Gain5'

  real_T Gain6_Gain_c;                 // Expression: 100
                                          //  Referenced by: '<S17>/Gain6'

  real_T Gain7_Gain_l;                 // Expression: 100
                                          //  Referenced by: '<S17>/Gain7'

  real_T DataStoreMemory_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory'

  real_T DataStoreMemory1_InitialValue[9];// Expression: zeros(9,1)
                                             //  Referenced by: '<Root>/Data Store Memory1'

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

  real_T Universal_Time10_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time10'

  real_T Universal_Time11_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time11'

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

  real_T Universal_Time5_InitialValue[3];// Expression: [0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time5'

  real_T Universal_Time6_InitialValue[3];// Expression: [0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time6'

  real_T Universal_Time8_InitialValue[3];// Expression: [0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time8'

  real_T Universal_Time9_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time9'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 2"
                                          //  Referenced by: '<S21>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 2"
                                         //  Referenced by: '<S21>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 2"
                                          //  Referenced by: '<S21>/String Constant'

  char_T StringConstant1_String_k[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S30>/String Constant1'

  char_T StringConstant2_String_p[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
                             //  Referenced by: '<S30>/String Constant2'

  char_T StringConstant_String_b[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S30>/String Constant'

  char_T StringConstant1_String_e[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 2"
                               //  Referenced by: '<S31>/String Constant1'

  char_T StringConstant2_String_e[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
                             //  Referenced by: '<S31>/String Constant2'

  char_T StringConstant_String_c[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
                               //  Referenced by: '<S31>/String Constant'

  char_T StringConstant1_String_j[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 3"
                               //  Referenced by: '<S32>/String Constant1'

  char_T StringConstant2_String_b[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
                             //  Referenced by: '<S32>/String Constant2'

  char_T StringConstant_String_ca[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
                               //  Referenced by: '<S32>/String Constant'

  char_T StringConstant1_String_p[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 4"
                               //  Referenced by: '<S33>/String Constant1'

  char_T StringConstant2_String_l[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
                             //  Referenced by: '<S33>/String Constant2'

  char_T StringConstant_String_e[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
                               //  Referenced by: '<S33>/String Constant'

  char_T RED_Tz3_InitialValue[256];  // Computed Parameter: RED_Tz3_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz3'

  char_T RED_Tz4_InitialValue[256];  // Computed Parameter: RED_Tz4_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz4'

  char_T RED_Tz5_InitialValue[256];  // Computed Parameter: RED_Tz5_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz5'

  int32_T UDPSend1_Port;               // Computed Parameter: UDPSend1_Port
                                          //  Referenced by: '<S218>/UDP Send1'

  int32_T UDPSend2_Port;               // Computed Parameter: UDPSend2_Port
                                          //  Referenced by: '<S219>/UDP Send2'

  int32_T UDPSend3_Port;               // Computed Parameter: UDPSend3_Port
                                          //  Referenced by: '<S220>/UDP Send3'

  int32_T ReceivePhaseSpaceData_Port;
                               // Computed Parameter: ReceivePhaseSpaceData_Port
                                  //  Referenced by: '<S225>/Receive PhaseSpace Data'

  int32_T UDPReceiveREDClock_Port;// Computed Parameter: UDPReceiveREDClock_Port
                                     //  Referenced by: '<S229>/UDP Receive (RED Clock)'

  int32_T UDPReceiveBLACKClock_Port;
                                // Computed Parameter: UDPReceiveBLACKClock_Port
                                   //  Referenced by: '<S229>/UDP Receive (BLACK Clock)'

  int32_T UDPReceiveBLUEClock_Port;
                                 // Computed Parameter: UDPReceiveBLUEClock_Port
                                    //  Referenced by: '<S229>/UDP Receive (BLUE Clock)'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S277>/UDP Receive'

  int32_T UDPReceive_Port_a;           // Computed Parameter: UDPReceive_Port_a
                                          //  Referenced by: '<S278>/UDP Receive'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S280>/UDP Send'

  int32_T UDPSend_Port_o;              // Computed Parameter: UDPSend_Port_o
                                          //  Referenced by: '<S281>/UDP Send'

  int32_T UDPSend_Port_h;              // Computed Parameter: UDPSend_Port_h
                                          //  Referenced by: '<S17>/UDP Send'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<S133>/Manual Switch'

  P_ChangeBLACKBehavior_GNC20_b_T ChangeREDBehavior_h;// '<S18>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLUEBehavior_e;// '<S18>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLACKBehavior_i;// '<S18>/Change BLACK Behavior' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_l1;// '<S268>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S267>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_d;// '<S258>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S257>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_g;// '<S240>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S239>/Enabled Subsystem'
  P_ChangeBLACKBehavior_GNC20_p_T ChangeREDBehavior_d;// '<S233>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLUEBehavior_f;// '<S233>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLACKBehavior_e;// '<S233>/Change BLACK Behavior' 
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
  P_Phase0Synchronization_GNC20_T Phase1StartFloating;// '<S1>/Phase #1: Start Floating ' 
  P_Phase0Synchronization_GNC20_T Phase0Synchronization;// '<S1>/Phase #0: Synchronization' 
};

// Real-time Model Data Structure
struct tag_RTM_GNC2026W_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;

  time_T** getTPtrPtr();
  boolean_T getStopRequested() const;
  void setStopRequested(boolean_T aStopRequested);
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const aErrorStatus);
  time_T* getTPtr() const;
  void setTPtr(time_T* aTPtr);
  boolean_T* getStopRequestedPtr();
  const char_T** getErrorStatusPtr();
  boolean_T isMajorTimeStep() const;
  boolean_T isMinorTimeStep() const;
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
//  Block '<S48>/Constant1' : Unused code path elimination
//  Block '<S48>/Constant2' : Unused code path elimination
//  Block '<S48>/Cos' : Unused code path elimination
//  Block '<S48>/Gain' : Unused code path elimination
//  Block '<S48>/Gain1' : Unused code path elimination
//  Block '<S48>/Sin' : Unused code path elimination
//  Block '<S48>/Sum1' : Unused code path elimination
//  Block '<S48>/Sum2' : Unused code path elimination
//  Block '<S49>/Constant2' : Unused code path elimination
//  Block '<S49>/Subtract3' : Unused code path elimination
//  Block '<S37>/Constant' : Unused code path elimination
//  Block '<S37>/Desired Rate ' : Unused code path elimination
//  Block '<S37>/Product' : Unused code path elimination
//  Block '<S37>/Sum' : Unused code path elimination
//  Block '<S51>/Atan2' : Unused code path elimination
//  Block '<S51>/Cos' : Unused code path elimination
//  Block '<S51>/Sin' : Unused code path elimination
//  Block '<S68>/Constant1' : Unused code path elimination
//  Block '<S68>/Constant2' : Unused code path elimination
//  Block '<S68>/Cos' : Unused code path elimination
//  Block '<S68>/Gain' : Unused code path elimination
//  Block '<S68>/Gain1' : Unused code path elimination
//  Block '<S68>/Sin' : Unused code path elimination
//  Block '<S68>/Sum1' : Unused code path elimination
//  Block '<S68>/Sum2' : Unused code path elimination
//  Block '<S69>/Constant2' : Unused code path elimination
//  Block '<S69>/Subtract3' : Unused code path elimination
//  Block '<S56>/Constant' : Unused code path elimination
//  Block '<S56>/Desired Rate ' : Unused code path elimination
//  Block '<S56>/Product' : Unused code path elimination
//  Block '<S56>/Sum' : Unused code path elimination
//  Block '<S71>/Atan2' : Unused code path elimination
//  Block '<S71>/Cos' : Unused code path elimination
//  Block '<S71>/Sin' : Unused code path elimination
//  Block '<S131>/Scope' : Unused code path elimination
//  Block '<S133>/Scope' : Unused code path elimination
//  Block '<S133>/Scope2' : Unused code path elimination
//  Block '<S120>/Scope1' : Unused code path elimination
//  Block '<S120>/Scope2' : Unused code path elimination
//  Block '<S120>/Scope3' : Unused code path elimination
//  Block '<S120>/Sum' : Unused code path elimination
//  Block '<S174>/Data Type Duplicate' : Unused code path elimination
//  Block '<S175>/Data Type Duplicate' : Unused code path elimination
//  Block '<S176>/Data Type Duplicate' : Unused code path elimination
//  Block '<S179>/Data Type Duplicate' : Unused code path elimination
//  Block '<S180>/Data Type Duplicate' : Unused code path elimination
//  Block '<S181>/Data Type Duplicate' : Unused code path elimination
//  Block '<S184>/Data Type Duplicate' : Unused code path elimination
//  Block '<S185>/Data Type Duplicate' : Unused code path elimination
//  Block '<S186>/Data Type Duplicate' : Unused code path elimination
//  Block '<S160>/Scope' : Unused code path elimination
//  Block '<S193>/Data Type Duplicate' : Unused code path elimination
//  Block '<S194>/Data Type Duplicate' : Unused code path elimination
//  Block '<S195>/Data Type Duplicate' : Unused code path elimination
//  Block '<S197>/Data Type Duplicate' : Unused code path elimination
//  Block '<S198>/Data Type Duplicate' : Unused code path elimination
//  Block '<S199>/Data Type Duplicate' : Unused code path elimination
//  Block '<S202>/Data Type Duplicate' : Unused code path elimination
//  Block '<S203>/Data Type Duplicate' : Unused code path elimination
//  Block '<S204>/Data Type Duplicate' : Unused code path elimination
//  Block '<S207>/Data Type Duplicate' : Unused code path elimination
//  Block '<S208>/Data Type Duplicate' : Unused code path elimination
//  Block '<S209>/Data Type Duplicate' : Unused code path elimination
//  Block '<S5>/Scope' : Unused code path elimination
//  Block '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' : Unused code path elimination
//  Block '<S238>/Scope' : Unused code path elimination
//  Block '<S238>/Scope1' : Unused code path elimination
//  Block '<S238>/Scope2' : Unused code path elimination
//  Block '<S238>/Scope3' : Unused code path elimination
//  Block '<S277>/Cast To Double3' : Unused code path elimination
//  Block '<S277>/Scope' : Unused code path elimination
//  Block '<S281>/Scope' : Unused code path elimination
//  Block '<S281>/Scope1' : Unused code path elimination
//  Block '<S218>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S219>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S220>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S225>/Reshape' : Reshape block reduction
//  Block '<S226>/Reshape' : Reshape block reduction
//  Block '<S227>/Reshape' : Reshape block reduction
//  Block '<S228>/Reshape' : Reshape block reduction


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
//  '<S9>'   : 'GNC2026W/PhaseSpace Camera Code'
//  '<S10>'  : 'GNC2026W/Platform  Identification'
//  '<S11>'  : 'GNC2026W/Receive CV Data'
//  '<S12>'  : 'GNC2026W/Receive Data from Orin'
//  '<S13>'  : 'GNC2026W/Robotic  Arm Code'
//  '<S14>'  : 'GNC2026W/Send Data  to Orin'
//  '<S15>'  : 'GNC2026W/Send Data  to ROB'
//  '<S16>'  : 'GNC2026W/Simulation  Status'
//  '<S17>'  : 'GNC2026W/Thruster Control Code'
//  '<S18>'  : 'GNC2026W/Time Sync.'
//  '<S19>'  : 'GNC2026W/1 - Experiment Logic/Phase #0: Synchronization'
//  '<S20>'  : 'GNC2026W/1 - Experiment Logic/Phase #1: Start Floating '
//  '<S21>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position'
//  '<S22>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment'
//  '<S23>'  : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home'
//  '<S24>'  : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home'
//  '<S25>'  : 'GNC2026W/1 - Experiment Logic/Phase #6: Clean Shutdown'
//  '<S26>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Joint Angles RED'
//  '<S27>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLACK'
//  '<S28>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLUE'
//  '<S29>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position RED'
//  '<S30>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1'
//  '<S31>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 '
//  '<S32>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 '
//  '<S33>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4'
//  '<S34>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Joint Angles RED'
//  '<S35>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK'
//  '<S36>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE'
//  '<S37>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED'
//  '<S38>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired'
//  '<S39>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem'
//  '<S40>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Wrap'
//  '<S41>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S42>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem/Subsystem'
//  '<S43>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem/Subsystem1'
//  '<S44>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Circular Tracking'
//  '<S45>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S46>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Wrap'
//  '<S47>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S48>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Circular Tracking'
//  '<S49>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S50>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Stand-off Distance'
//  '<S51>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Wrap'
//  '<S52>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S53>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Joint Angles RED'
//  '<S54>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK'
//  '<S55>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE'
//  '<S56>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED'
//  '<S57>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic'
//  '<S58>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S59>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem'
//  '<S60>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Wrap'
//  '<S61>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S62>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S63>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S64>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S65>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S66>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Wrap'
//  '<S67>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S68>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Circular Tracking'
//  '<S69>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S70>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Stand-off Distance'
//  '<S71>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Wrap'
//  '<S72>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S73>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/First Fit Detector'
//  '<S74>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Joint Angles RED'
//  '<S75>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK'
//  '<S76>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE'
//  '<S77>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED'
//  '<S78>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S79>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem'
//  '<S80>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Wrap'
//  '<S81>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S82>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S83>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S84>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S85>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S86>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Wrap'
//  '<S87>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S88>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Circular Tracking'
//  '<S89>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S90>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Stand-off Distance'
//  '<S91>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Wrap'
//  '<S92>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S93>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Joint Angles RED'
//  '<S94>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK'
//  '<S95>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE'
//  '<S96>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED'
//  '<S97>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired'
//  '<S98>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/Wrap'
//  '<S99>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S100>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Circular Tracking'
//  '<S101>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S102>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Wrap'
//  '<S103>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S104>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Circular Tracking'
//  '<S105>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S106>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Stand-off Distance'
//  '<S107>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Wrap'
//  '<S108>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S109>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Joint Angles RED'
//  '<S110>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLACK'
//  '<S111>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLUE'
//  '<S112>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position RED'
//  '<S113>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Joint Angles RED'
//  '<S114>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLACK'
//  '<S115>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLUE'
//  '<S116>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position RED'
//  '<S117>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)'
//  '<S118>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)'
//  '<S119>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)'
//  '<S120>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)'
//  '<S121>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)'
//  '<S122>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)'
//  '<S123>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)'
//  '<S124>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)'
//  '<S125>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)/Desired Position'
//  '<S126>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)/Desired Position'
//  '<S127>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)/Desired Position'
//  '<S128>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/MATLAB Function4'
//  '<S129>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter'
//  '<S130>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap'
//  '<S131>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF'
//  '<S132>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF'
//  '<S133>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF'
//  '<S134>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Camera to Inertial Frame'
//  '<S135>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/EKF'
//  '<S136>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Unwrap'
//  '<S137>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Unwrap/Unwrap'
//  '<S138>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Unwrap/Unwrap/MATLAB Function'
//  '<S139>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Camera to Inertial Frame'
//  '<S140>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/MEKF'
//  '<S141>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Unwrap'
//  '<S142>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Unwrap/Unwrap'
//  '<S143>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Unwrap/Unwrap/MATLAB Function'
//  '<S144>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Camera to Inertial Frame'
//  '<S145>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unscented Kalman Filter'
//  '<S146>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap'
//  '<S147>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap/Unwrap'
//  '<S148>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap/Unwrap/MATLAB Function'
//  '<S149>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap/Unwrap'
//  '<S150>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S151>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)/Desired Position'
//  '<S152>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)/Desired Position'
//  '<S153>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)/Desired Position'
//  '<S154>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)/Desired Position'
//  '<S155>' : 'GNC2026W/3 - Control/Custom Control (ARM)'
//  '<S156>' : 'GNC2026W/3 - Control/Custom Control (RED)'
//  '<S157>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)'
//  '<S158>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)'
//  '<S159>' : 'GNC2026W/3 - Control/Default LQR Control (RED)'
//  '<S160>' : 'GNC2026W/3 - Control/Default PD (ARM)'
//  '<S161>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)'
//  '<S162>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)'
//  '<S163>' : 'GNC2026W/3 - Control/Default PD Control (RED)'
//  '<S164>' : 'GNC2026W/3 - Control/Disable Control (ARM)'
//  '<S165>' : 'GNC2026W/3 - Control/Disable Thrusters (BLACK)'
//  '<S166>' : 'GNC2026W/3 - Control/Disable Thrusters (BLUE)'
//  '<S167>' : 'GNC2026W/3 - Control/Disable Thrusters (RED)'
//  '<S168>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function2'
//  '<S169>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function3'
//  '<S170>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap'
//  '<S171>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap'
//  '<S172>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S173>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error'
//  '<S174>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative'
//  '<S175>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative1'
//  '<S176>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative2'
//  '<S177>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S178>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error'
//  '<S179>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative'
//  '<S180>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative1'
//  '<S181>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative2'
//  '<S182>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S183>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error'
//  '<S184>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative'
//  '<S185>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative1'
//  '<S186>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative2'
//  '<S187>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error/MATLAB Function'
//  '<S188>' : 'GNC2026W/3 - Control/Default PD (ARM)/Passthrough for Experiment'
//  '<S189>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller'
//  '<S190>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)'
//  '<S191>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)'
//  '<S192>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)'
//  '<S193>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)/Discrete Derivative1'
//  '<S194>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)/Discrete Derivative1'
//  '<S195>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)/Discrete Derivative1'
//  '<S196>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error'
//  '<S197>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative'
//  '<S198>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative1'
//  '<S199>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative2'
//  '<S200>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S201>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error'
//  '<S202>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative'
//  '<S203>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative1'
//  '<S204>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative2'
//  '<S205>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S206>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error'
//  '<S207>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative'
//  '<S208>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative1'
//  '<S209>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative2'
//  '<S210>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error/MATLAB Function'
//  '<S211>' : 'GNC2026W/Check  Connection/Change BLACK Behavior'
//  '<S212>' : 'GNC2026W/Check  Connection/Change BLUE Behavior'
//  '<S213>' : 'GNC2026W/Check  Connection/Change RED Behavior'
//  '<S214>' : 'GNC2026W/Data Logger Subsystem/Data Logger'
//  '<S215>' : 'GNC2026W/Data Logger Subsystem/Separation'
//  '<S216>' : 'GNC2026W/Data Logger Subsystem/Data Logger/MATLAB Function'
//  '<S217>' : 'GNC2026W/Data Logger Subsystem/Separation/MATLAB Function'
//  '<S218>' : 'GNC2026W/Debugger/Change BLACK Behavior'
//  '<S219>' : 'GNC2026W/Debugger/Change BLUE Behavior'
//  '<S220>' : 'GNC2026W/Debugger/Change RED Behavior'
//  '<S221>' : 'GNC2026W/Float Code/Enable Pucks'
//  '<S222>' : 'GNC2026W/Manipulator Encoder Data/Change ARM Behavior'
//  '<S223>' : 'GNC2026W/PhaseSpace Camera Code/Initialize Universal Time (Simulation)'
//  '<S224>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States'
//  '<S225>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data'
//  '<S226>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data'
//  '<S227>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data'
//  '<S228>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data'
//  '<S229>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)'
//  '<S230>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Enabled Subsystem2'
//  '<S231>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function'
//  '<S232>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function1'
//  '<S233>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time'
//  '<S234>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLACK Behavior'
//  '<S235>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLUE Behavior'
//  '<S236>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change RED Behavior'
//  '<S237>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step'
//  '<S238>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)'
//  '<S239>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1'
//  '<S240>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2'
//  '<S241>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Wrap'
//  '<S242>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S243>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/MATLAB Function'
//  '<S244>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/BLK CoM to LAR'
//  '<S245>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/CV Noise'
//  '<S246>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Inertial to Camera Frame (HARDWARE)'
//  '<S247>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/MATLAB Function1'
//  '<S248>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Sample and Hold'
//  '<S249>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap'
//  '<S250>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap'
//  '<S251>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap/MATLAB Function'
//  '<S252>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem'
//  '<S253>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S254>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem'
//  '<S255>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S256>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step'
//  '<S257>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1'
//  '<S258>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2'
//  '<S259>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Wrap'
//  '<S260>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S261>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/MATLAB Function'
//  '<S262>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem'
//  '<S263>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S264>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem'
//  '<S265>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S266>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step'
//  '<S267>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1'
//  '<S268>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2'
//  '<S269>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Wrap'
//  '<S270>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S271>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/MATLAB Function'
//  '<S272>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem'
//  '<S273>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S274>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem'
//  '<S275>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S276>' : 'GNC2026W/Platform  Identification/Subsystem'
//  '<S277>' : 'GNC2026W/Receive CV Data/CV UDP'
//  '<S278>' : 'GNC2026W/Receive Data from Orin/Subsystem'
//  '<S279>' : 'GNC2026W/Robotic  Arm Code/Change ARM Behavior'
//  '<S280>' : 'GNC2026W/Send Data  to Orin/Subsystem'
//  '<S281>' : 'GNC2026W/Send Data  to ROB/Subsystem'
//  '<S282>' : 'GNC2026W/Send Data  to ROB/Subsystem/End Effector Desired'
//  '<S283>' : 'GNC2026W/Send Data  to ROB/Subsystem/Unwrap1'
//  '<S284>' : 'GNC2026W/Send Data  to ROB/Subsystem/Unwrap1/Unwrap'
//  '<S285>' : 'GNC2026W/Send Data  to ROB/Subsystem/Unwrap1/Unwrap/MATLAB Function'
//  '<S286>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior'
//  '<S287>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior'
//  '<S288>' : 'GNC2026W/Thruster Control Code/Change RED Behavior'
//  '<S289>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle'
//  '<S290>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body'
//  '<S291>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S292>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S293>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S294>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S295>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S296>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S297>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S298>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S299>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S300>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S301>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle'
//  '<S302>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body'
//  '<S303>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S304>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S305>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S306>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S307>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S308>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S309>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S310>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S311>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S312>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S313>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle'
//  '<S314>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body'
//  '<S315>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S316>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S317>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S318>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function8'
//  '<S319>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S320>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S321>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S322>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S323>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S324>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S325>' : 'GNC2026W/Time Sync./Change BLACK Behavior'
//  '<S326>' : 'GNC2026W/Time Sync./Change BLUE Behavior'
//  '<S327>' : 'GNC2026W/Time Sync./Change RED Behavior'

#endif                                 // GNC2026W_h_

//
// File trailer for generated code.
//
// [EOF]
//
