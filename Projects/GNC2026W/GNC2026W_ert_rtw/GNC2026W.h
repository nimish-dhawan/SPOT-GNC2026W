//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.h
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1460
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Thu Jan 15 17:02:55 2026
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
  real_T UDPSend_NetworkLib[137];      // '<S199>/UDP Send'
};

// Block states (default storage) for system '<S221>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_l_T {
  real_T UDPSendGUI_NetworkLib[137];   // '<S222>/UDP Send (GUI)'
};

// Block signals for system '<S227>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_T {
  real_T Delay[3];                     // '<S239>/Delay'
  real_T ema[3];                       // '<S239>/MATLAB Function'
};

// Block states (default storage) for system '<S227>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026W_T {
  real_T Delay_DSTATE[3];              // '<S239>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S227>/Enabled Subsystem'
};

// Block signals for system '<S228>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_h_T {
  real_T Delay[3];                     // '<S241>/Delay'
  real_T ema[3];                       // '<S241>/MATLAB Function'
};

// Block states (default storage) for system '<S228>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_c_T {
  real_T Delay_DSTATE[3];              // '<S241>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S228>/Enabled Subsystem'
};

// Block signals for system '<S277>/Pseudoinverse1'
struct B_Pseudoinverse1_GNC2026W_T {
  real_T Pseudoinverse1[24];           // '<S277>/Pseudoinverse1'
};

// Block states (default storage) for system '<S277>/Pseudoinverse1'
struct DW_Pseudoinverse1_GNC2026W_T {
  dsp_simulink_Pseudoinverse_GN_T obj; // '<S277>/Pseudoinverse1'
  boolean_T objisempty;                // '<S277>/Pseudoinverse1'
};

// Block signals for system '<S17>/Change BLACK Behavior'
struct B_ChangeBLACKBehavior_GNC20_m_T {
  real_T Clock1;                       // '<S310>/Clock1'
};

// Block states (default storage) for system '<S17>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_g_T {
  real_T UDPSendClock_NetworkLib[137]; // '<S310>/UDP Send (Clock)'
};

// Block signals (default storage)
struct B_GNC2026W_T {
  real_T Merge1[3];                    // '<S3>/Merge1'
  real_T Merge2[3];                    // '<S3>/Merge2'
  real_T Merge[3];                     // '<S3>/Merge'
  real_T TmpSignalConversionAtUDPSendInp[10];
  real_T duty_cycles[8];               // '<S298>/MATLAB Function5'
  real_T ThrustPer_Final[8];           // '<S306>/ThrustPer_Final'
  real_T In1;                          // '<S305>/In1'
  real_T duty_cycles_j[8];             // '<S286>/MATLAB Function5'
  real_T ThrustPer_Final_h[8];         // '<S294>/ThrustPer_Final'
  real_T In1_g;                        // '<S293>/In1'
  real_T duty_cycles_m[8];             // '<S274>/MATLAB Function5'
  real_T ThrustPer_Final_h5[8];        // '<S282>/ThrustPer_Final'
  real_T In1_g2;                       // '<S281>/In1'
  real_T TmpSignalConversionAtUDPSendI_o[28];
  real_T ReceivePhaseSpaceData_o1[19]; // '<S213>/Receive PhaseSpace Data'
  real_T ConvertBLAXfrommmtom;        // '<S214>/Convert BLAX from [mm] to [m]'
  real_T ConvertBLUXfrommmtom;        // '<S215>/Convert BLUX from [mm] to [m]'
  real_T ConvertREDXfrommmtom;        // '<S216>/Convert REDX from [mm] to [m]'
  real_T UDPReceiveREDClock_o1;        // '<S217>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_o1;      // '<S217>/UDP Receive (BLACK Clock)'
  real_T UDPReceiveBLUEClock_o1;       // '<S217>/UDP Receive (BLUE Clock)'
  real_T dy[3];                        // '<S261>/MATLAB Function'
  real_T dy_h[3];                      // '<S259>/MATLAB Function'
  real_T y2y1;                         // '<S257>/y2-y1'
  real_T dy_c[3];                      // '<S251>/MATLAB Function'
  real_T dy_d[3];                      // '<S249>/MATLAB Function'
  real_T y2y1_o;                       // '<S247>/y2-y1'
  real_T dy_p[3];                      // '<S241>/MATLAB Function'
  real_T dy_g[3];                      // '<S239>/MATLAB Function'
  real_T y;                            // '<S237>/MATLAB Function'
  real_T u_next;                       // '<S237>/MATLAB Function'
  real_T y2y1_ob;                      // '<S230>/y2-y1'
  real_T In1_g20;                      // '<S218>/In1'
  real32_T UDPReceive_o1[4];           // '<S268>/UDP Receive'
  real32_T UDPReceive_o1_a[4];         // '<S264>/UDP Receive'
  uint8_T StringtoASCII[31];           // '<S208>/String to ASCII'
  uint8_T StringtoASCII2[31];          // '<S207>/String to ASCII2'
  uint8_T StringtoASCII1[31];          // '<S206>/String to ASCII1'
  B_ChangeBLACKBehavior_GNC20_m_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S277>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S277>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S277>/Pseudoinverse1'
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_l1;// '<S255>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S254>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_d;// '<S245>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S244>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_g;// '<S228>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S227>/Enabled Subsystem'
};

// Block states (default storage) for system '<Root>'
struct DW_GNC2026W_T {
  Dynamixel_Controller_GNC2026W_T obj;
  // '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  GPIO_Write_GNC2026W_T obj_l;         // '<S209>/GPIO Write1'
  ReadArm_Position_Rates_GNC202_T obj_d;
                     // '<S210>/Read Joint Positions using  Dynamixel Encoders'
  IdentifyPlatform_GNC2026W_T obj_dk;  // '<S263>/WhoAmI'
  CustomDataLogger_GNC2026W_T obj_f;   // '<S202>/MATLAB System'
  real_T Delay_DSTATE;                 // '<S300>/Delay'
  real_T Delay_DSTATE_k;               // '<S288>/Delay'
  real_T Delay_DSTATE_kz;              // '<S276>/Delay'
  real_T Delay_DSTATE_f;               // '<S266>/Delay'
  real_T Delay1_DSTATE;                // '<S266>/Delay1'
  real_T Delay2_DSTATE;                // '<S225>/Delay2'
  real_T Delay1_DSTATE_i;              // '<S225>/Delay1'
  real_T Delay1_DSTATE_g[3];           // '<S228>/Delay1'
  real_T Delay1_DSTATE_b[3];           // '<S227>/Delay1'
  real_T Delay_DSTATE_h;               // '<S237>/Delay'
  real_T Delay1_DSTATE_f;              // '<S237>/Delay1'
  real_T Delay2_DSTATE_l;              // '<S243>/Delay2'
  real_T Delay1_DSTATE_l;              // '<S243>/Delay1'
  real_T Delay1_DSTATE_m[3];           // '<S245>/Delay1'
  real_T Delay1_DSTATE_lv[3];          // '<S244>/Delay1'
  real_T Delay2_DSTATE_l0;             // '<S253>/Delay2'
  real_T Delay1_DSTATE_ld;             // '<S253>/Delay1'
  real_T Delay1_DSTATE_c[3];           // '<S255>/Delay1'
  real_T Delay1_DSTATE_cq[3];          // '<S254>/Delay1'
  real_T Delay_DSTATE_o;               // '<S210>/Delay'
  real_T Delay1_DSTATE_cg;             // '<S210>/Delay1'
  real_T Delay2_DSTATE_h;              // '<S210>/Delay2'
  real_T UD_DSTATE;                    // '<S181>/UD'
  real_T UD_DSTATE_e;                  // '<S182>/UD'
  real_T UD_DSTATE_a;                  // '<S183>/UD'
  real_T UD_DSTATE_l;                  // '<S167>/UD'
  real_T UD_DSTATE_k;                  // '<S168>/UD'
  real_T UD_DSTATE_h;                  // '<S169>/UD'
  real_T UD_DSTATE_o;                  // '<S190>/UD'
  real_T UD_DSTATE_n;                  // '<S191>/UD'
  real_T UD_DSTATE_hu;                 // '<S192>/UD'
  real_T UD_DSTATE_j;                  // '<S162>/UD'
  real_T UD_DSTATE_c;                  // '<S163>/UD'
  real_T UD_DSTATE_d;                  // '<S164>/UD'
  real_T UD_DSTATE_eh;                 // '<S185>/UD'
  real_T UD_DSTATE_hv;                 // '<S186>/UD'
  real_T UD_DSTATE_kv;                 // '<S187>/UD'
  real_T Delay_DSTATE_l;               // '<S159>/Delay'
  real_T Delay1_DSTATE_ba;             // '<S159>/Delay1'
  real_T UD_DSTATE_aq;                 // '<S172>/UD'
  real_T UD_DSTATE_p;                  // '<S173>/UD'
  real_T UD_DSTATE_pr;                 // '<S174>/UD'
  real_T UD_DSTATE_eg;                 // '<S195>/UD'
  real_T UD_DSTATE_cd;                 // '<S196>/UD'
  real_T UD_DSTATE_hd;                 // '<S197>/UD'
  real_T Delay_DSTATE_ol;              // '<S137>/Delay'
  real_T Delay1_DSTATE_e;              // '<S137>/Delay1'
  real_T Delay_DSTATE_b;               // '<S135>/Delay'
  real_T Delay1_DSTATE_a;              // '<S135>/Delay1'
  real_T UnitDelay1_DSTATE[6];         // '<S130>/Unit Delay1'
  real_T UnitDelay2_DSTATE[36];        // '<S130>/Unit Delay2'
  real_T NextOutput;                   // '<Root>/Gaussian Noise'
  real_T UDPSend_NetworkLib[137];      // '<S16>/UDP Send'
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
  real_T UDPSend_NetworkLib_m[137];    // '<S270>/UDP Send'
  real_T UDPReceive_NetworkLib[137];   // '<S268>/UDP Receive'
  real_T UDPReceive_NetworkLib_i[137]; // '<S264>/UDP Receive'
  real_T ReceivePhaseSpaceData_NetworkLi[137];// '<S213>/Receive PhaseSpace Data' 
  real_T UDPReceiveREDClock_NetworkLib[137];// '<S217>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_NetworkLib[137];// '<S217>/UDP Receive (BLACK Clock)' 
  real_T UDPReceiveBLUEClock_NetworkLib[137];// '<S217>/UDP Receive (BLUE Clock)' 
  real_T k;                            // '<S226>/Sample and Hold'
  real_T y_hold[3];                    // '<S226>/Sample and Hold'
  real_T UDPSend3_NetworkLib[137];     // '<S208>/UDP Send3'
  real_T UDPSend2_NetworkLib[137];     // '<S207>/UDP Send2'
  real_T UDPSend1_NetworkLib[137];     // '<S206>/UDP Send1'
  real_T x[6];                         // '<S129>/MEKF'
  real_T P[36];                        // '<S129>/MEKF'
  real_T theta;                        // '<S129>/MEKF'
  real_T theta_prev;                   // '<S129>/MEKF'
  real_T k_h;                          // '<S130>/Unscented Kalman Filter'
  real_T counter;                      // '<S30>/First Fit Detector'
  real_T firstfit;                     // '<S30>/First Fit Detector'
  char_T RED_Logger[256];              // '<Root>/RED_Tz3'
  char_T BLACK_Logger[256];            // '<Root>/RED_Tz4'
  char_T BLUE_Logger[256];             // '<Root>/RED_Tz5'
  comm_internal_BernoulliBinary_T obj_fv;// '<Root>/Dropped Frames'
  uint32_T RandSeed;                   // '<Root>/Gaussian Noise'
  uint32_T method;                     // '<S226>/CV Noise'
  uint32_T state;                      // '<S226>/CV Noise'
  uint32_T state_g[2];                 // '<S226>/CV Noise'
  uint32_T state_j[625];               // '<S226>/CV Noise'
  uint32_T method_e;                   // '<Root>/Dropped Frames'
  uint32_T state_d[625];               // '<Root>/Dropped Frames'
  uint32_T state_jw[2];                // '<Root>/Dropped Frames'
  uint32_T state_b;                    // '<Root>/Dropped Frames'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S9>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S17>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_b;
    // '<S17>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_c;
    // '<S17>/This IF block determines whether or not to run the RED sim//exp '
  int8_T ThisIFblockdetermineswhether_ch;
  // '<S221>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhether_cs;
  // '<S221>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_d;
  // '<S221>/This IF block determines whether or not to run the RED sim//exp '
  boolean_T k_not_empty;               // '<S226>/Sample and Hold'
  boolean_T initial_theta;             // '<S129>/MEKF'
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S277>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S277>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S277>/Pseudoinverse1'
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_l1;// '<S255>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S254>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_d;// '<S245>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S244>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_g;// '<S228>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S227>/Enabled Subsystem'
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeREDBehavior_d;// '<S221>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLUEBehavior_f;// '<S221>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLACKBehavior_e;// '<S221>/Change BLACK Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeREDBehavior;// '<S4>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeBLUEBehavior;// '<S4>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC202_T ChangeBLACKBehavior;// '<S4>/Change BLACK Behavior' 
};

// Parameters for system: '<S1>/Phase #0: Synchronization'
struct P_Phase0Synchronization_GNC20_T_ {
  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Constant8'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S18>/Puck State'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 0"
                                          //  Referenced by: '<S18>/String Constant'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 0"
                                          //  Referenced by: '<S18>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 0"
                                         //  Referenced by: '<S18>/String Constant2'

};

// Parameters for system: '<S1>/Phase #4: Return Home'
struct P_Phase4ReturnHome_GNC2026W_T_ {
  real_T Constant11_Value;             // Expression: 0
                                          //  Referenced by: '<S22>/Constant11'

  real_T Constant12_Value;             // Expression: 0
                                          //  Referenced by: '<S22>/Constant12'

  real_T Constant14_Value;             // Expression: 0
                                          //  Referenced by: '<S22>/Constant14'

  real_T Constant15_Value;             // Expression: 0
                                          //  Referenced by: '<S22>/Constant15'

  real_T Constant18_Value;             // Expression: 0
                                          //  Referenced by: '<S22>/Constant18'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<S22>/Constant4'

  real_T Constant5_Value;              // Expression: 2
                                          //  Referenced by: '<S22>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S22>/Constant6'

  real_T Constant8_Value;              // Expression: 2
                                          //  Referenced by: '<S22>/Constant8'

  real_T Constant3_Value;              // Expression: pi/2
                                          //  Referenced by: '<S107>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S107>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S107>/Constant2'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 4"
                                          //  Referenced by: '<S22>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 4"
                                         //  Referenced by: '<S22>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 4"
                                          //  Referenced by: '<S22>/String Constant'

};

// Parameters for system: '<S3>/Disable Thrusters (RED)'
struct P_DisableThrustersRED_GNC2026_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S155>/Zero'

};

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
struct P_DisableThrustersBLACK_GNC20_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S153>/Zero'

};

// Parameters for system: '<S4>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC2026_T_ {
  int32_T Constant1_Value;             // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S199>/Constant1'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S199>/UDP Send'

};

// Parameters for system: '<S221>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_p_T_ {
  int32_T UDPSendGUI_Port;             // Computed Parameter: UDPSendGUI_Port
                                          //  Referenced by: '<S222>/UDP Send (GUI)'

};

// Parameters for system: '<S227>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S239>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S239>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S239>/Delay'

};

// Parameters for system: '<S228>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_c_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S241>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S241>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S241>/Delay'

};

// Parameters for system: '<S17>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_b_T_ {
  int32_T UDPSendClock_Port;           // Computed Parameter: UDPSendClock_Port
                                          //  Referenced by: '<S310>/UDP Send (Clock)'

};

// Parameters (default storage)
struct P_GNC2026W_T_ {
  real_T A_c[9];                       // Variable: A_c
                                          //  Referenced by: '<S144>/Constant7'

  real_T CVrate;                       // Variable: CVrate
                                          //  Referenced by:
                                          //    '<S30>/First Fit Detector'
                                          //    '<S130>/Unscented Kalman Filter'
                                          //    '<S226>/Sample and Hold'

  real_T F_red_X_nominal;              // Variable: F_red_X_nominal
                                          //  Referenced by:
                                          //    '<S274>/MATLAB Function5'
                                          //    '<S286>/MATLAB Function5'
                                          //    '<S298>/MATLAB Function5'

  real_T F_red_Y_nominal;              // Variable: F_red_Y_nominal
                                          //  Referenced by:
                                          //    '<S274>/MATLAB Function5'
                                          //    '<S286>/MATLAB Function5'
                                          //    '<S298>/MATLAB Function5'

  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by: '<S277>/MATLAB Function'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by: '<S289>/MATLAB Function'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by: '<S301>/MATLAB Function'

  real_T F_u[3];                       // Variable: F_u
                                          //  Referenced by: '<S144>/Constant3'

  real_T K_BLACK[18];                  // Variable: K_BLACK
                                          //  Referenced by: '<S145>/Constant2'

  real_T K_BLUE[18];                   // Variable: K_BLUE
                                          //  Referenced by: '<S146>/Constant2'

  real_T K_RED[18];                    // Variable: K_RED
                                          //  Referenced by: '<S147>/Constant2'

  real_T Kd_elarm;                     // Variable: Kd_elarm
                                          //  Referenced by: '<S178>/kd_elarm'

  real_T Kd_sharm;                     // Variable: Kd_sharm
                                          //  Referenced by: '<S179>/kd_sharm'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by: '<S149>/Gain5'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by: '<S150>/Gain5'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by: '<S151>/Gain5'

  real_T Kd_wrarm;                     // Variable: Kd_wrarm
                                          //  Referenced by: '<S180>/kd_wrarm'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by: '<S149>/Gain3'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by: '<S150>/Gain3'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by: '<S151>/Gain3'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by: '<S149>/Gain4'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by: '<S150>/Gain4'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by: '<S151>/Gain4'

  real_T Kp_elarm;                     // Variable: Kp_elarm
                                          //  Referenced by: '<S178>/kp_elarm'

  real_T Kp_sharm;                     // Variable: Kp_sharm
                                          //  Referenced by: '<S179>/kp_sharm'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by: '<S149>/Gain2'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by: '<S150>/Gain2'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by: '<S151>/Gain2'

  real_T Kp_wrarm;                     // Variable: Kp_wrarm
                                          //  Referenced by: '<S180>/kp_wrarm'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by: '<S149>/Gain'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by: '<S150>/Gain'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by: '<S151>/Gain'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by: '<S149>/Gain1'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by: '<S150>/Gain1'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by: '<S151>/Gain1'

  real_T Mc_inv[9];                    // Variable: Mc_inv
                                          //  Referenced by: '<S144>/Constant6'

  real_T PWMFreq;                      // Variable: PWMFreq
                                          //  Referenced by:
                                          //    '<S16>/PWM Frequency'
                                          //    '<S274>/MATLAB Function1'
                                          //    '<S286>/MATLAB Function1'
                                          //    '<S298>/MATLAB Function8'
                                          //    '<S276>/Constant1'
                                          //    '<S288>/Constant1'
                                          //    '<S300>/Constant1'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<S1>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<S1>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by:
                                          //    '<S1>/Constant1'
                                          //    '<S44>/Constant2'
                                          //    '<S64>/Constant2'
                                          //    '<S83>/Constant2'
                                          //    '<S87>/Constant2'
                                          //    '<S99>/Constant2'
                                          //    '<S103>/Constant2'
                                          //    '<S40>/Constant1'
                                          //    '<S41>/Constant1'
                                          //    '<S42>/Constant1'
                                          //    '<S60>/Constant1'
                                          //    '<S61>/Constant1'
                                          //    '<S62>/Constant1'
                                          //    '<S79>/Constant1'
                                          //    '<S80>/Constant1'
                                          //    '<S81>/Constant1'
                                          //    '<S97>/Constant1'

  real_T Phase3_End;                   // Variable: Phase3_End
                                          //  Referenced by: '<S1>/Constant2'

  real_T Phase3_SubPhase1_End;         // Variable: Phase3_SubPhase1_End
                                          //  Referenced by: '<S21>/Constant4'

  real_T Phase3_SubPhase2_End;         // Variable: Phase3_SubPhase2_End
                                          //  Referenced by: '<S21>/Constant1'

  real_T Phase3_SubPhase3_End;         // Variable: Phase3_SubPhase3_End
                                          //  Referenced by: '<S21>/Constant2'

  real_T Phase3_SubPhase4_End;         // Variable: Phase3_SubPhase4_End
                                          //  Referenced by: '<S21>/Constant3'

  real_T Phase4_End;                   // Variable: Phase4_End
                                          //  Referenced by: '<S1>/Constant3'

  real_T Phase5_End;                   // Variable: Phase5_End
                                          //  Referenced by: '<S1>/Constant6'

  real_T R[9];                         // Variable: R
                                          //  Referenced by: '<S130>/Unscented Kalman Filter'

  real_T Tz_lim_elarm;                 // Variable: Tz_lim_elarm
                                          //  Referenced by: '<S177>/Saturation1'

  real_T Tz_lim_sharm;                 // Variable: Tz_lim_sharm
                                          //  Referenced by: '<S177>/Saturation'

  real_T Tz_lim_wrarm;                 // Variable: Tz_lim_wrarm
                                          //  Referenced by: '<S177>/Saturation3'

  real_T X1_blk;                       // Variable: X1_blk
                                          //  Referenced by: '<S38>/Desired X-Position (BLACK)'

  real_T X2_blk;                       // Variable: X2_blk
                                          //  Referenced by: '<S58>/Desired X-Position (BLACK)'

  real_T X3_blk;                       // Variable: X3_blk
                                          //  Referenced by: '<S77>/Desired X-Position (BLACK)'

  real_T Y1_blk;                       // Variable: Y1_blk
                                          //  Referenced by: '<S38>/Desired Y-Position (BLACK)'

  real_T Y2_blk;                       // Variable: Y2_blk
                                          //  Referenced by: '<S58>/Desired Y-Position (BLACK)'

  real_T Y3_blk;                       // Variable: Y3_blk
                                          //  Referenced by: '<S77>/Desired Y-Position (BLACK)'

  real_T a;                            // Variable: a
                                          //  Referenced by: '<S130>/Unscented Kalman Filter'

  real_T b;                            // Variable: b
                                          //  Referenced by: '<S130>/Unscented Kalman Filter'

  real_T baseRate;                     // Variable: baseRate
                                          //  Referenced by:
                                          //    '<S210>/Read Joint Positions using  Dynamixel Encoders'
                                          //    '<S263>/WhoAmI'
                                          //    '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
                                          //    '<S30>/First Fit Detector'
                                          //    '<S129>/MEKF'
                                          //    '<S130>/Unscented Kalman Filter'
                                          //    '<S226>/Sample and Hold'

  real_T dataRate;                     // Variable: dataRate
                                          //  Referenced by:
                                          //    '<S225>/Constant'
                                          //    '<S243>/Constant'
                                          //    '<S253>/Constant'

  real_T dt;                           // Variable: dt
                                          //  Referenced by: '<S130>/Unscented Kalman Filter'

  real_T fNum;                         // Variable: fNum
                                          //  Referenced by: '<S127>/Constant'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S108>/Desired States (BLACK)'
                                          //    '<S112>/Desired States (BLACK)'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S109>/Desired States (BLUE)'
                                          //    '<S113>/Desired States (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S110>/Constant2'
                                          //    '<S114>/Constant2'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S26>/Desired States (BLACK)'
                                          //    '<S137>/Delay'
                                          //    '<S137>/Delay1'
                                          //    '<S266>/Delay'
                                          //    '<S266>/Delay1'
                                          //    '<S135>/Delay'
                                          //    '<S135>/Delay1'
                                          //    '<S237>/Delay'
                                          //    '<S237>/Delay1'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by: '<S27>/Desired States (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S28>/Constant2'
                                          //    '<S36>/Constant2'
                                          //    '<S55>/Constant2'
                                          //    '<S159>/Delay'
                                          //    '<S159>/Delay1'

  real_T k;                            // Variable: k
                                          //  Referenced by: '<S130>/Unscented Kalman Filter'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S217>/MATLAB Function'

  real_T sep1;                         // Variable: sep1
                                          //  Referenced by: '<S36>/Separation'

  real_T sep2;                         // Variable: sep2
                                          //  Referenced by: '<S55>/Separation'

  real_T sep3;                         // Variable: sep3
                                          //  Referenced by: '<S75>/Separation'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by: '<S15>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by: '<S277>/MATLAB Function'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by: '<S289>/MATLAB Function'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S274>/MATLAB Function5'
                                          //    '<S286>/MATLAB Function5'
                                          //    '<S298>/MATLAB Function5'
                                          //    '<S301>/MATLAB Function'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by:
                                          //    '<S92>/Desired X-Position (BLACK)'
                                          //    '<S43>/Constant1'
                                          //    '<S63>/Constant1'
                                          //    '<S82>/Constant1'
                                          //    '<S86>/Constant1'
                                          //    '<S98>/Constant1'
                                          //    '<S102>/Constant1'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by:
                                          //    '<S92>/Desired Y-Position (BLACK)'
                                          //    '<S43>/Constant2'
                                          //    '<S63>/Constant2'
                                          //    '<S82>/Constant2'
                                          //    '<S86>/Constant2'
                                          //    '<S98>/Constant2'
                                          //    '<S102>/Constant2'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S195>/UD'

  real_T DiscreteDerivative1_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative1_ICPrevScale
                                 //  Referenced by: '<S196>/UD'

  real_T DiscreteDerivative2_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative2_ICPrevScale
                                 //  Referenced by: '<S197>/UD'

  real_T DiscreteDerivative_ICPrevScal_i;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                 //  Referenced by: '<S172>/UD'

  real_T DiscreteDerivative1_ICPrevSca_e;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
                                 //  Referenced by: '<S173>/UD'

  real_T DiscreteDerivative2_ICPrevSca_o;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                 //  Referenced by: '<S174>/UD'

  real_T DiscreteDerivative_ICPrevScal_p;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_p
                                 //  Referenced by: '<S185>/UD'

  real_T DiscreteDerivative1_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
                                 //  Referenced by: '<S186>/UD'

  real_T DiscreteDerivative2_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
                                 //  Referenced by: '<S187>/UD'

  real_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S162>/UD'

  real_T DiscreteDerivative1_ICPrevSca_i;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
                                 //  Referenced by: '<S163>/UD'

  real_T DiscreteDerivative2_ICPrevSc_oo;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
                                 //  Referenced by: '<S164>/UD'

  real_T DiscreteDerivative_ICPrevSca_pf;
                              // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
                                 //  Referenced by: '<S190>/UD'

  real_T DiscreteDerivative1_ICPrevSca_l;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
                                 //  Referenced by: '<S191>/UD'

  real_T DiscreteDerivative2_ICPrevSc_on;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
                                 //  Referenced by: '<S192>/UD'

  real_T DiscreteDerivative_ICPrevScal_n;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_n
                                 //  Referenced by: '<S167>/UD'

  real_T DiscreteDerivative1_ICPrevSca_f;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
                                 //  Referenced by: '<S168>/UD'

  real_T DiscreteDerivative2_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                 //  Referenced by: '<S169>/UD'

  real_T DiscreteDerivative1_ICPrevSca_j;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
                                 //  Referenced by: '<S181>/UD'

  real_T DiscreteDerivative1_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
                                 //  Referenced by: '<S182>/UD'

  real_T DiscreteDerivative1_ICPrevSca_k;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
                                 //  Referenced by: '<S183>/UD'

  real_T MATLABFunction5_max_iters; // Mask Parameter: MATLABFunction5_max_iters
                                       //  Referenced by: '<S274>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_b;
                                  // Mask Parameter: MATLABFunction5_max_iters_b
                                     //  Referenced by: '<S286>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_e;
                                  // Mask Parameter: MATLABFunction5_max_iters_e
                                     //  Referenced by: '<S298>/MATLAB Function5'

  real_T MATLABFunction5_tol;          // Mask Parameter: MATLABFunction5_tol
                                          //  Referenced by: '<S274>/MATLAB Function5'

  real_T MATLABFunction5_tol_j;        // Mask Parameter: MATLABFunction5_tol_j
                                          //  Referenced by: '<S286>/MATLAB Function5'

  real_T MATLABFunction5_tol_g;        // Mask Parameter: MATLABFunction5_tol_g
                                          //  Referenced by: '<S298>/MATLAB Function5'

  real_T Constant11_Value;             // Expression: 0
                                          //  Referenced by: '<S20>/Constant11'

  real_T Constant12_Value;             // Expression: 0
                                          //  Referenced by: '<S20>/Constant12'

  real_T Constant14_Value;             // Expression: 0
                                          //  Referenced by: '<S20>/Constant14'

  real_T Constant15_Value;             // Expression: 0
                                          //  Referenced by: '<S20>/Constant15'

  real_T Constant18_Value;             // Expression: 0
                                          //  Referenced by: '<S20>/Constant18'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<S20>/Constant4'

  real_T Constant5_Value;              // Expression: 2
                                          //  Referenced by: '<S20>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S20>/Constant6'

  real_T Constant8_Value;              // Expression: 2
                                          //  Referenced by: '<S20>/Constant8'

  real_T Constant3_Value;              // Expression: pi/2
                                          //  Referenced by: '<S25>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S25>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S25>/Constant2'

  real_T Constant11_Value_e;           // Expression: 2
                                          //  Referenced by: '<S29>/Constant11'

  real_T Constant12_Value_g;           // Expression: 0
                                          //  Referenced by: '<S29>/Constant12'

  real_T Constant14_Value_f;           // Expression: 0
                                          //  Referenced by: '<S29>/Constant14'

  real_T Constant15_Value_o;           // Expression: 0
                                          //  Referenced by: '<S29>/Constant15'

  real_T Constant18_Value_m;           // Expression: 0
                                          //  Referenced by: '<S29>/Constant18'

  real_T Constant4_Value_g;            // Expression: 2
                                          //  Referenced by: '<S29>/Constant4'

  real_T Constant5_Value_o;            // Expression: 2
                                          //  Referenced by: '<S29>/Constant5'

  real_T Constant6_Value_i;            // Expression: 1
                                          //  Referenced by: '<S29>/Constant6'

  real_T Constant8_Value_m;            // Expression: 2
                                          //  Referenced by: '<S29>/Constant8'

  real_T Constant3_Value_b;            // Expression: pi/2
                                          //  Referenced by: '<S33>/Constant3'

  real_T Constant1_Value_o;            // Expression: pi/2
                                          //  Referenced by: '<S33>/Constant1'

  real_T Constant2_Value_f;            // Expression: 0
                                          //  Referenced by: '<S33>/Constant2'

  real_T DesiredRate_Value;            // Expression: 0.03490659
                                          //  Referenced by: '<S35>/Desired Rate '

  real_T Gain_Gain;                    // Expression: -0.85
                                          //  Referenced by: '<S43>/Gain'

  real_T Gain1_Gain;                   // Expression: -0.85
                                          //  Referenced by: '<S43>/Gain1'

  real_T Constant1_Value_n;            // Expression: 0.01
                                          //  Referenced by: '<S38>/Constant1'

  real_T Constant_Value;               // Expression: 0.005
                                          //  Referenced by: '<S38>/Constant'

  real_T DesiredRateBLACK_Value;       // Expression: 0.03490659
                                          //  Referenced by: '<S37>/Desired Rate (BLACK)'

  real_T Constant_Value_n;             // Expression: 0.3
                                          //  Referenced by: '<S49>/Constant'

  real_T Constant12_Value_k;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant12'

  real_T Constant14_Value_i;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant14'

  real_T Constant15_Value_o1;          // Expression: 0
                                          //  Referenced by: '<S30>/Constant15'

  real_T Constant18_Value_n;           // Expression: 0
                                          //  Referenced by: '<S30>/Constant18'

  real_T Constant4_Value_a;            // Expression: 2
                                          //  Referenced by: '<S30>/Constant4'

  real_T Constant6_Value_p;            // Expression: 1
                                          //  Referenced by: '<S30>/Constant6'

  real_T Constant8_Value_o;            // Expression: 2
                                          //  Referenced by: '<S30>/Constant8'

  real_T Constant3_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S52>/Constant3'

  real_T Constant1_Value_m;            // Expression: pi/2
                                          //  Referenced by: '<S52>/Constant1'

  real_T Constant2_Value_p;            // Expression: 0
                                          //  Referenced by: '<S52>/Constant2'

  real_T DesiredRate_Value_h;          // Expression: 0.03490659
                                          //  Referenced by: '<S54>/Desired Rate '

  real_T Gain_Gain_h;                  // Expression: -0.85
                                          //  Referenced by: '<S63>/Gain'

  real_T Gain1_Gain_c;                 // Expression: -0.85
                                          //  Referenced by: '<S63>/Gain1'

  real_T Constant1_Value_f;            // Expression: 0.01
                                          //  Referenced by: '<S58>/Constant1'

  real_T Constant_Value_f;             // Expression: 0.005
                                          //  Referenced by: '<S58>/Constant'

  real_T DesiredRateBLACK_Value_k;     // Expression: 0.03490659
                                          //  Referenced by: '<S57>/Desired Rate (BLACK)'

  real_T Constant_Value_e;             // Expression: 0.3
                                          //  Referenced by: '<S69>/Constant'

  real_T Constant11_Value_b;           // Expression: 1
                                          //  Referenced by: '<S31>/Constant11'

  real_T Constant12_Value_ku;          // Expression: 0
                                          //  Referenced by: '<S31>/Constant12'

  real_T Constant14_Value_n;           // Expression: 0
                                          //  Referenced by: '<S31>/Constant14'

  real_T Constant15_Value_o2;          // Expression: 0
                                          //  Referenced by: '<S31>/Constant15'

  real_T Constant18_Value_l;           // Expression: 0
                                          //  Referenced by: '<S31>/Constant18'

  real_T Constant4_Value_b;            // Expression: 2
                                          //  Referenced by: '<S31>/Constant4'

  real_T Constant5_Value_n;            // Expression: 3
                                          //  Referenced by: '<S31>/Constant5'

  real_T Constant6_Value_n;            // Expression: 1
                                          //  Referenced by: '<S31>/Constant6'

  real_T Constant8_Value_f;            // Expression: 2
                                          //  Referenced by: '<S31>/Constant8'

  real_T Constant3_Value_e;            // Expression: pi/2
                                          //  Referenced by: '<S72>/Constant3'

  real_T Constant1_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S72>/Constant1'

  real_T Constant2_Value_c;            // Expression: 0
                                          //  Referenced by: '<S72>/Constant2'

  real_T DesiredRate_Value_l;          // Expression: 0.03490659
                                          //  Referenced by: '<S74>/Desired Rate '

  real_T Gain_Gain_b;                  // Expression: -0.85
                                          //  Referenced by: '<S82>/Gain'

  real_T Gain1_Gain_k;                 // Expression: -0.85
                                          //  Referenced by: '<S82>/Gain1'

  real_T Constant1_Value_g;            // Expression: 0.01
                                          //  Referenced by: '<S77>/Constant1'

  real_T Constant_Value_d;             // Expression: 0.005
                                          //  Referenced by: '<S77>/Constant'

  real_T DesiredRateBLACK_Value_kf;    // Expression: 0.03490659
                                          //  Referenced by: '<S76>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_d;          // Expression: 0.03490659
                                          //  Referenced by: '<S75>/Desired Rate '

  real_T Gain_Gain_ho;                 // Expression: 0.85
                                          //  Referenced by: '<S86>/Gain'

  real_T Gain1_Gain_d;                 // Expression: 0.85
                                          //  Referenced by: '<S86>/Gain1'

  real_T Constant_Value_h;             // Expression: pi+0.01
                                          //  Referenced by: '<S75>/Constant'

  real_T Constant_Value_a;             // Expression: 0.3
                                          //  Referenced by: '<S88>/Constant'

  real_T Constant11_Value_p;           // Expression: 1
                                          //  Referenced by: '<S32>/Constant11'

  real_T Constant12_Value_n;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant12'

  real_T Constant14_Value_f2;          // Expression: 0
                                          //  Referenced by: '<S32>/Constant14'

  real_T Constant15_Value_n;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant15'

  real_T Constant18_Value_e;           // Expression: 0
                                          //  Referenced by: '<S32>/Constant18'

  real_T Constant4_Value_l;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant4'

  real_T Constant5_Value_p;            // Expression: 3
                                          //  Referenced by: '<S32>/Constant5'

  real_T Constant6_Value_m;            // Expression: 1
                                          //  Referenced by: '<S32>/Constant6'

  real_T Constant8_Value_j;            // Expression: 2
                                          //  Referenced by: '<S32>/Constant8'

  real_T Constant3_Value_k;            // Expression: 0
                                          //  Referenced by: '<S91>/Constant3'

  real_T Constant1_Value_b;            // Expression: 0
                                          //  Referenced by: '<S91>/Constant1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S91>/Constant2'

  real_T DesiredRate_Value_ha;         // Expression: 0.03490659
                                          //  Referenced by: '<S93>/Desired Rate '

  real_T Gain_Gain_o;                  // Expression: -0.85
                                          //  Referenced by: '<S98>/Gain'

  real_T Gain1_Gain_b;                 // Expression: -0.85
                                          //  Referenced by: '<S98>/Gain1'

  real_T DesiredRateBLACK_Value_i;     // Expression: 0.03490659
                                          //  Referenced by: '<S95>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_n;          // Expression: 0.03490659
                                          //  Referenced by: '<S94>/Desired Rate '

  real_T Gain_Gain_ox;                 // Expression: 0.85
                                          //  Referenced by: '<S102>/Gain'

  real_T Gain1_Gain_e;                 // Expression: 0.85
                                          //  Referenced by: '<S102>/Gain1'

  real_T Constant_Value_h1;            // Expression: pi+0.01
                                          //  Referenced by: '<S94>/Constant'

  real_T Separation_Value;             // Expression: 0.30
                                          //  Referenced by: '<S94>/Separation'

  real_T Constant_Value_c;             // Expression: 0.3
                                          //  Referenced by: '<S104>/Constant'

  real_T UnitDelay1_InitialCondition[6];// Expression: zeros(6,1)
                                           //  Referenced by: '<S130>/Unit Delay1'

  real_T UnitDelay2_InitialCondition[36];
                                   // Expression: diag([1, 1, 0.05, 1, 1, 0.05])
                                      //  Referenced by: '<S130>/Unit Delay2'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S195>/TSamp'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                          //  Referenced by: '<S196>/TSamp'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                          //  Referenced by: '<S197>/TSamp'

  real_T Gain6_Gain;                   // Expression: -1
                                          //  Referenced by: '<S151>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                          //  Referenced by: '<S151>/Gain7'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S151>/Gain8'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                          //  Referenced by: '<S172>/TSamp'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                          //  Referenced by: '<S173>/TSamp'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                          //  Referenced by: '<S174>/TSamp'

  real_T Constant8_Value_e[9];         // Expression: diag(alpha)
                                          //  Referenced by: '<S144>/Constant8'

  real_T Constant9_Value[9];           // Expression: diag(gamma)
                                          //  Referenced by: '<S144>/Constant9'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S185>/TSamp'

  real_T TSamp_WtEt_hr;                // Computed Parameter: TSamp_WtEt_hr
                                          //  Referenced by: '<S186>/TSamp'

  real_T TSamp_WtEt_ca;                // Computed Parameter: TSamp_WtEt_ca
                                          //  Referenced by: '<S187>/TSamp'

  real_T Gain6_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S149>/Gain6'

  real_T Gain7_Gain_b;                 // Expression: -1
                                          //  Referenced by: '<S149>/Gain7'

  real_T Gain8_Gain_m;                 // Expression: -1
                                          //  Referenced by: '<S149>/Gain8'

  real_T TSamp_WtEt_nd;                // Computed Parameter: TSamp_WtEt_nd
                                          //  Referenced by: '<S162>/TSamp'

  real_T TSamp_WtEt_co;                // Computed Parameter: TSamp_WtEt_co
                                          //  Referenced by: '<S163>/TSamp'

  real_T TSamp_WtEt_no;                // Computed Parameter: TSamp_WtEt_no
                                          //  Referenced by: '<S164>/TSamp'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                          //  Referenced by: '<S190>/TSamp'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                          //  Referenced by: '<S191>/TSamp'

  real_T TSamp_WtEt_px;                // Computed Parameter: TSamp_WtEt_px
                                          //  Referenced by: '<S192>/TSamp'

  real_T Gain6_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S150>/Gain6'

  real_T Gain7_Gain_e;                 // Expression: -1
                                          //  Referenced by: '<S150>/Gain7'

  real_T Gain8_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S150>/Gain8'

  real_T TSamp_WtEt_ft;                // Computed Parameter: TSamp_WtEt_ft
                                          //  Referenced by: '<S167>/TSamp'

  real_T TSamp_WtEt_eh;                // Computed Parameter: TSamp_WtEt_eh
                                          //  Referenced by: '<S168>/TSamp'

  real_T TSamp_WtEt_ii;                // Computed Parameter: TSamp_WtEt_ii
                                          //  Referenced by: '<S169>/TSamp'

  real_T TSamp_WtEt_pu;                // Computed Parameter: TSamp_WtEt_pu
                                          //  Referenced by: '<S181>/TSamp'

  real_T TSamp_WtEt_f0;                // Computed Parameter: TSamp_WtEt_f0
                                          //  Referenced by: '<S182>/TSamp'

  real_T TSamp_WtEt_nz;                // Computed Parameter: TSamp_WtEt_nz
                                          //  Referenced by: '<S183>/TSamp'

  real_T Constant7_Value;              // Expression: 1
                                          //  Referenced by: '<S148>/Constant7'

  real_T Merge3_InitialOutput;       // Computed Parameter: Merge3_InitialOutput
                                        //  Referenced by: '<S148>/Merge3'

  real_T Merge4_InitialOutput;       // Computed Parameter: Merge4_InitialOutput
                                        //  Referenced by: '<S148>/Merge4'

  real_T Merge5_InitialOutput;       // Computed Parameter: Merge5_InitialOutput
                                        //  Referenced by: '<S148>/Merge5'

  real_T Constant7_Value_h;            // Expression: 0
                                          //  Referenced by: '<S152>/Constant7'

  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S152>/Zero'

  real_T GPIOWrite1_gpioPin;           // Expression: 428
                                          //  Referenced by: '<S209>/GPIO Write1'

  real_T GPIOWrite1_pinDirection;      // Expression: 1
                                          //  Referenced by: '<S209>/GPIO Write1'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S210>/Delay'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S210>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S210>/Delay2'

  real_T UniversalTime_Y0;             // Computed Parameter: UniversalTime_Y0
                                          //  Referenced by: '<S218>/Universal Time'

  real_T dytdt_Y0;                     // Computed Parameter: dytdt_Y0
                                          //  Referenced by: '<S230>/dy(t)//dt'

  real_T dytdt_Y0_j;                   // Computed Parameter: dytdt_Y0_j
                                          //  Referenced by: '<S247>/dy(t)//dt'

  real_T dytdt_Y0_d;                   // Computed Parameter: dytdt_Y0_d
                                          //  Referenced by: '<S257>/dy(t)//dt'

  real_T ConvertBLAXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S214>/Convert BLAX from [mm] to [m]'

  real_T ConvertBLAYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S214>/Convert BLAY from [mm] to [m]'

  real_T ConvertBLACKVXfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S214>/Convert BLACKVX from [mm] to [m]'

  real_T ConvertBLACKVYfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S214>/Convert BLACKVY from [mm] to [m]'

  real_T Delay2_InitialCondition_e;    // Expression: 0
                                          //  Referenced by: '<S225>/Delay2'

  real_T Delay1_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S225>/Delay1'

  real_T Constant3_Value_eq;           // Expression: 0
                                          //  Referenced by: '<S225>/Constant3'

  real_T Delay1_InitialCondition_i;    // Expression: 0.0
                                          //  Referenced by: '<S228>/Delay1'

  real_T Constant3_Value_a;            // Expression: 0
                                          //  Referenced by: '<S228>/Constant3'

  real_T Delay1_InitialCondition_it;   // Expression: 0.0
                                          //  Referenced by: '<S227>/Delay1'

  real_T Constant3_Value_d;            // Expression: 0
                                          //  Referenced by: '<S227>/Constant3'

  real_T ConvertBLUXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S215>/Convert BLUX from [mm] to [m]'

  real_T ConvertBLUYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S215>/Convert BLUY from [mm] to [m]'

  real_T ConvertBLUEVXfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S215>/Convert BLUEVX from [mm] to [m]'

  real_T ConvertBLUEVYfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S215>/Convert BLUEVY from [mm] to [m]'

  real_T Delay2_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S243>/Delay2'

  real_T Delay1_InitialCondition_i3;   // Expression: 0
                                          //  Referenced by: '<S243>/Delay1'

  real_T Constant3_Value_o;            // Expression: 0
                                          //  Referenced by: '<S243>/Constant3'

  real_T Delay1_InitialCondition_h;    // Expression: 0.0
                                          //  Referenced by: '<S245>/Delay1'

  real_T Constant3_Value_c;            // Expression: 0
                                          //  Referenced by: '<S245>/Constant3'

  real_T Delay1_InitialCondition_j;    // Expression: 0.0
                                          //  Referenced by: '<S244>/Delay1'

  real_T Constant3_Value_ke;           // Expression: 0
                                          //  Referenced by: '<S244>/Constant3'

  real_T ConvertREDXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S216>/Convert REDX from [mm] to [m]'

  real_T ConvertREDYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S216>/Convert REDY from [mm] to [m]'

  real_T ConvertREDVXfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S216>/Convert REDVX from [mm] to [m]'

  real_T ConvertREDVYfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S216>/Convert REDVY from [mm] to [m]'

  real_T Delay2_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S253>/Delay2'

  real_T Delay1_InitialCondition_l;    // Expression: 0
                                          //  Referenced by: '<S253>/Delay1'

  real_T Constant3_Value_f;            // Expression: 0
                                          //  Referenced by: '<S253>/Constant3'

  real_T Delay1_InitialCondition_k;    // Expression: 0.0
                                          //  Referenced by: '<S255>/Delay1'

  real_T Constant3_Value_dh;           // Expression: 0
                                          //  Referenced by: '<S255>/Constant3'

  real_T Delay1_InitialCondition_c;    // Expression: 0.0
                                          //  Referenced by: '<S254>/Delay1'

  real_T Constant3_Value_dz;           // Expression: 0
                                          //  Referenced by: '<S254>/Constant3'

  real_T Constant_Value_i;             // Expression: 1
                                          //  Referenced by: '<S217>/Constant'

  real_T Gain_Gain_k;                  // Expression: -1
                                          //  Referenced by: '<S264>/Gain'

  real_T Gain1_Gain_p;                 // Expression: -1
                                          //  Referenced by: '<S264>/Gain1'

  real_T ControlDynamixelActuatorsineith;// Expression: 400
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_b;// Expression: 0
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_h;// Expression: 200
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_j;// Expression: 3072
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_m;// Expression: 1024
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_hy;// Expression: 0
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_i;// Expression: 850
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_g;// Expression: 400
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_g3;// Expression: 100
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_bf;// Expression: 20
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_l;// Expression: 0
                                            //  Referenced by: '<S269>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S281>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S282>/Out1'

  real_T BLACKDC_Y0;                   // Computed Parameter: BLACKDC_Y0
                                          //  Referenced by: '<S271>/BLACK DC'

  real_T Delay_InitialCondition_i;     // Expression: 0.0
                                          //  Referenced by: '<S276>/Delay'

  real_T Constant2_Value_h;            // Expression: 0
                                          //  Referenced by: '<S276>/Constant2'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S293>/Out1'

  real_T Out1_Y0_js;                   // Computed Parameter: Out1_Y0_js
                                          //  Referenced by: '<S294>/Out1'

  real_T BLUEDC_Y0;                    // Computed Parameter: BLUEDC_Y0
                                          //  Referenced by: '<S272>/BLUE DC'

  real_T Delay_InitialCondition_n;     // Expression: 0.0
                                          //  Referenced by: '<S288>/Delay'

  real_T Constant2_Value_fq;           // Expression: 0
                                          //  Referenced by: '<S288>/Constant2'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S305>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S306>/Out1'

  real_T REDDC_Y0;                     // Computed Parameter: REDDC_Y0
                                          //  Referenced by: '<S273>/RED DC'

  real_T Delay_InitialCondition_p;     // Expression: 0.0
                                          //  Referenced by: '<S300>/Delay'

  real_T Constant2_Value_e;            // Expression: 0
                                          //  Referenced by: '<S300>/Constant2'

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

  real_T Merge_InitialOutput;         // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S3>/Merge'

  real_T SafetyNumber_Value;           // Expression: 568471
                                          //  Referenced by: '<S16>/Safety Number'

  real_T Gain_Gain_oy;                 // Expression: 100
                                          //  Referenced by: '<S16>/Gain'

  real_T Gain1_Gain_em;                // Expression: 100
                                          //  Referenced by: '<S16>/Gain1'

  real_T Gain2_Gain;                   // Expression: 100
                                          //  Referenced by: '<S16>/Gain2'

  real_T Gain3_Gain;                   // Expression: 100
                                          //  Referenced by: '<S16>/Gain3'

  real_T Gain4_Gain;                   // Expression: 100
                                          //  Referenced by: '<S16>/Gain4'

  real_T Gain5_Gain;                   // Expression: 100
                                          //  Referenced by: '<S16>/Gain5'

  real_T Gain6_Gain_c;                 // Expression: 100
                                          //  Referenced by: '<S16>/Gain6'

  real_T Gain7_Gain_l;                 // Expression: 100
                                          //  Referenced by: '<S16>/Gain7'

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
                                          //  Referenced by: '<S20>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 2"
                                         //  Referenced by: '<S20>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 2"
                                          //  Referenced by: '<S20>/String Constant'

  char_T StringConstant1_String_k[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S29>/String Constant1'

  char_T StringConstant2_String_p[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
                             //  Referenced by: '<S29>/String Constant2'

  char_T StringConstant_String_b[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S29>/String Constant'

  char_T StringConstant1_String_e[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 2"
                               //  Referenced by: '<S30>/String Constant1'

  char_T StringConstant2_String_e[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
                             //  Referenced by: '<S30>/String Constant2'

  char_T StringConstant_String_c[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
                               //  Referenced by: '<S30>/String Constant'

  char_T StringConstant1_String_j[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 3"
                               //  Referenced by: '<S31>/String Constant1'

  char_T StringConstant2_String_b[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
                             //  Referenced by: '<S31>/String Constant2'

  char_T StringConstant_String_ca[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
                               //  Referenced by: '<S31>/String Constant'

  char_T StringConstant1_String_p[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 4"
                               //  Referenced by: '<S32>/String Constant1'

  char_T StringConstant2_String_l[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
                             //  Referenced by: '<S32>/String Constant2'

  char_T StringConstant_String_e[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
                               //  Referenced by: '<S32>/String Constant'

  char_T RED_Tz3_InitialValue[256];  // Computed Parameter: RED_Tz3_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz3'

  char_T RED_Tz4_InitialValue[256];  // Computed Parameter: RED_Tz4_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz4'

  char_T RED_Tz5_InitialValue[256];  // Computed Parameter: RED_Tz5_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz5'

  int32_T UDPSend1_Port;               // Computed Parameter: UDPSend1_Port
                                          //  Referenced by: '<S206>/UDP Send1'

  int32_T UDPSend2_Port;               // Computed Parameter: UDPSend2_Port
                                          //  Referenced by: '<S207>/UDP Send2'

  int32_T UDPSend3_Port;               // Computed Parameter: UDPSend3_Port
                                          //  Referenced by: '<S208>/UDP Send3'

  int32_T ReceivePhaseSpaceData_Port;
                               // Computed Parameter: ReceivePhaseSpaceData_Port
                                  //  Referenced by: '<S213>/Receive PhaseSpace Data'

  int32_T UDPReceiveREDClock_Port;// Computed Parameter: UDPReceiveREDClock_Port
                                     //  Referenced by: '<S217>/UDP Receive (RED Clock)'

  int32_T UDPReceiveBLACKClock_Port;
                                // Computed Parameter: UDPReceiveBLACKClock_Port
                                   //  Referenced by: '<S217>/UDP Receive (BLACK Clock)'

  int32_T UDPReceiveBLUEClock_Port;
                                 // Computed Parameter: UDPReceiveBLUEClock_Port
                                    //  Referenced by: '<S217>/UDP Receive (BLUE Clock)'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S264>/UDP Receive'

  int32_T UDPReceive_Port_a;           // Computed Parameter: UDPReceive_Port_a
                                          //  Referenced by: '<S268>/UDP Receive'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S270>/UDP Send'

  int32_T UDPSend_Port_h;              // Computed Parameter: UDPSend_Port_h
                                          //  Referenced by: '<S16>/UDP Send'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<S130>/Manual Switch'

  P_ChangeBLACKBehavior_GNC20_b_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_l1;// '<S255>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S254>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_d;// '<S245>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S244>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_g;// '<S228>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S227>/Enabled Subsystem'
  P_ChangeBLACKBehavior_GNC20_p_T ChangeREDBehavior_d;// '<S221>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLUEBehavior_f;// '<S221>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLACKBehavior_e;// '<S221>/Change BLACK Behavior' 
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
//  Block '<S47>/Constant1' : Unused code path elimination
//  Block '<S47>/Constant2' : Unused code path elimination
//  Block '<S47>/Cos' : Unused code path elimination
//  Block '<S47>/Gain' : Unused code path elimination
//  Block '<S47>/Gain1' : Unused code path elimination
//  Block '<S47>/Sin' : Unused code path elimination
//  Block '<S47>/Sum1' : Unused code path elimination
//  Block '<S47>/Sum2' : Unused code path elimination
//  Block '<S48>/Constant2' : Unused code path elimination
//  Block '<S48>/Subtract3' : Unused code path elimination
//  Block '<S36>/Constant' : Unused code path elimination
//  Block '<S36>/Desired Rate ' : Unused code path elimination
//  Block '<S36>/Product' : Unused code path elimination
//  Block '<S36>/Sum' : Unused code path elimination
//  Block '<S50>/Atan2' : Unused code path elimination
//  Block '<S50>/Cos' : Unused code path elimination
//  Block '<S50>/Sin' : Unused code path elimination
//  Block '<S67>/Constant1' : Unused code path elimination
//  Block '<S67>/Constant2' : Unused code path elimination
//  Block '<S67>/Cos' : Unused code path elimination
//  Block '<S67>/Gain' : Unused code path elimination
//  Block '<S67>/Gain1' : Unused code path elimination
//  Block '<S67>/Sin' : Unused code path elimination
//  Block '<S67>/Sum1' : Unused code path elimination
//  Block '<S67>/Sum2' : Unused code path elimination
//  Block '<S68>/Constant2' : Unused code path elimination
//  Block '<S68>/Subtract3' : Unused code path elimination
//  Block '<S55>/Constant' : Unused code path elimination
//  Block '<S55>/Desired Rate ' : Unused code path elimination
//  Block '<S55>/Product' : Unused code path elimination
//  Block '<S55>/Sum' : Unused code path elimination
//  Block '<S70>/Atan2' : Unused code path elimination
//  Block '<S70>/Cos' : Unused code path elimination
//  Block '<S70>/Sin' : Unused code path elimination
//  Block '<S30>/Scope' : Unused code path elimination
//  Block '<S129>/Scope' : Unused code path elimination
//  Block '<S130>/Scope' : Unused code path elimination
//  Block '<S130>/Scope2' : Unused code path elimination
//  Block '<S118>/Scope1' : Unused code path elimination
//  Block '<S118>/Scope2' : Unused code path elimination
//  Block '<S118>/Scope3' : Unused code path elimination
//  Block '<S118>/Sum' : Unused code path elimination
//  Block '<S162>/Data Type Duplicate' : Unused code path elimination
//  Block '<S163>/Data Type Duplicate' : Unused code path elimination
//  Block '<S164>/Data Type Duplicate' : Unused code path elimination
//  Block '<S167>/Data Type Duplicate' : Unused code path elimination
//  Block '<S168>/Data Type Duplicate' : Unused code path elimination
//  Block '<S169>/Data Type Duplicate' : Unused code path elimination
//  Block '<S172>/Data Type Duplicate' : Unused code path elimination
//  Block '<S173>/Data Type Duplicate' : Unused code path elimination
//  Block '<S174>/Data Type Duplicate' : Unused code path elimination
//  Block '<S148>/Scope' : Unused code path elimination
//  Block '<S181>/Data Type Duplicate' : Unused code path elimination
//  Block '<S182>/Data Type Duplicate' : Unused code path elimination
//  Block '<S183>/Data Type Duplicate' : Unused code path elimination
//  Block '<S185>/Data Type Duplicate' : Unused code path elimination
//  Block '<S186>/Data Type Duplicate' : Unused code path elimination
//  Block '<S187>/Data Type Duplicate' : Unused code path elimination
//  Block '<S190>/Data Type Duplicate' : Unused code path elimination
//  Block '<S191>/Data Type Duplicate' : Unused code path elimination
//  Block '<S192>/Data Type Duplicate' : Unused code path elimination
//  Block '<S195>/Data Type Duplicate' : Unused code path elimination
//  Block '<S196>/Data Type Duplicate' : Unused code path elimination
//  Block '<S197>/Data Type Duplicate' : Unused code path elimination
//  Block '<S5>/Scope' : Unused code path elimination
//  Block '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' : Unused code path elimination
//  Block '<S226>/Scope1' : Unused code path elimination
//  Block '<S226>/Scope2' : Unused code path elimination
//  Block '<S226>/Scope3' : Unused code path elimination
//  Block '<S264>/Scope' : Unused code path elimination
//  Block '<S206>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S207>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S208>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S213>/Reshape' : Reshape block reduction
//  Block '<S214>/Reshape' : Reshape block reduction
//  Block '<S215>/Reshape' : Reshape block reduction
//  Block '<S216>/Reshape' : Reshape block reduction


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
//  '<S15>'  : 'GNC2026W/Simulation  Status'
//  '<S16>'  : 'GNC2026W/Thruster Control Code'
//  '<S17>'  : 'GNC2026W/Time Sync.'
//  '<S18>'  : 'GNC2026W/1 - Experiment Logic/Phase #0: Synchronization'
//  '<S19>'  : 'GNC2026W/1 - Experiment Logic/Phase #1: Start Floating '
//  '<S20>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position'
//  '<S21>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment'
//  '<S22>'  : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home'
//  '<S23>'  : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home'
//  '<S24>'  : 'GNC2026W/1 - Experiment Logic/Phase #6: Clean Shutdown'
//  '<S25>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Joint Angles RED'
//  '<S26>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLACK'
//  '<S27>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLUE'
//  '<S28>'  : 'GNC2026W/1 - Experiment Logic/Phase #2: Initial Position/Desired Position RED'
//  '<S29>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1'
//  '<S30>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 '
//  '<S31>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 '
//  '<S32>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4'
//  '<S33>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Joint Angles RED'
//  '<S34>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK'
//  '<S35>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE'
//  '<S36>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED'
//  '<S37>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired'
//  '<S38>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem'
//  '<S39>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Wrap'
//  '<S40>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S41>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem/Subsystem'
//  '<S42>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Subsystem/Subsystem1'
//  '<S43>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Circular Tracking'
//  '<S44>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S45>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Wrap'
//  '<S46>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S47>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Circular Tracking'
//  '<S48>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S49>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Stand-off Distance'
//  '<S50>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Wrap'
//  '<S51>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S52>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Joint Angles RED'
//  '<S53>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK'
//  '<S54>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE'
//  '<S55>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED'
//  '<S56>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /First Fit Detector'
//  '<S57>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S58>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem'
//  '<S59>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Wrap'
//  '<S60>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S61>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S62>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S63>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S64>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S65>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Wrap'
//  '<S66>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S67>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Circular Tracking'
//  '<S68>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S69>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Stand-off Distance'
//  '<S70>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Wrap'
//  '<S71>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S72>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Joint Angles RED'
//  '<S73>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK'
//  '<S74>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE'
//  '<S75>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED'
//  '<S76>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S77>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem'
//  '<S78>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Wrap'
//  '<S79>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S80>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S81>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S82>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S83>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S84>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Wrap'
//  '<S85>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S86>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Circular Tracking'
//  '<S87>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S88>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Stand-off Distance'
//  '<S89>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Wrap'
//  '<S90>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S91>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Joint Angles RED'
//  '<S92>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK'
//  '<S93>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE'
//  '<S94>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED'
//  '<S95>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired'
//  '<S96>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/Wrap'
//  '<S97>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S98>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Circular Tracking'
//  '<S99>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S100>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Wrap'
//  '<S101>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S102>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Circular Tracking'
//  '<S103>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S104>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Stand-off Distance'
//  '<S105>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Wrap'
//  '<S106>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S107>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Joint Angles RED'
//  '<S108>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLACK'
//  '<S109>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLUE'
//  '<S110>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position RED'
//  '<S111>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Joint Angles RED'
//  '<S112>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLACK'
//  '<S113>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLUE'
//  '<S114>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position RED'
//  '<S115>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)'
//  '<S116>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)'
//  '<S117>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)'
//  '<S118>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)'
//  '<S119>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)'
//  '<S120>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)'
//  '<S121>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)'
//  '<S122>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)'
//  '<S123>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)/Desired Position'
//  '<S124>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)/Desired Position'
//  '<S125>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)/Desired Position'
//  '<S126>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/MATLAB Function4'
//  '<S127>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter'
//  '<S128>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap'
//  '<S129>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF'
//  '<S130>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF'
//  '<S131>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/MEKF'
//  '<S132>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Camera to Inertial Frame'
//  '<S133>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unscented Kalman Filter'
//  '<S134>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap'
//  '<S135>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap/Unwrap'
//  '<S136>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap/Unwrap/MATLAB Function'
//  '<S137>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap/Unwrap'
//  '<S138>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S139>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)/Desired Position'
//  '<S140>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)/Desired Position'
//  '<S141>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)/Desired Position'
//  '<S142>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)/Desired Position'
//  '<S143>' : 'GNC2026W/3 - Control/Custom Control (ARM)'
//  '<S144>' : 'GNC2026W/3 - Control/Custom Control (RED)'
//  '<S145>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)'
//  '<S146>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)'
//  '<S147>' : 'GNC2026W/3 - Control/Default LQR Control (RED)'
//  '<S148>' : 'GNC2026W/3 - Control/Default PD (ARM)'
//  '<S149>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)'
//  '<S150>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)'
//  '<S151>' : 'GNC2026W/3 - Control/Default PD Control (RED)'
//  '<S152>' : 'GNC2026W/3 - Control/Disable Control (ARM)'
//  '<S153>' : 'GNC2026W/3 - Control/Disable Thrusters (BLACK)'
//  '<S154>' : 'GNC2026W/3 - Control/Disable Thrusters (BLUE)'
//  '<S155>' : 'GNC2026W/3 - Control/Disable Thrusters (RED)'
//  '<S156>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function2'
//  '<S157>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function3'
//  '<S158>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap'
//  '<S159>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap'
//  '<S160>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S161>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error'
//  '<S162>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative'
//  '<S163>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative1'
//  '<S164>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative2'
//  '<S165>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S166>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error'
//  '<S167>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative'
//  '<S168>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative1'
//  '<S169>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative2'
//  '<S170>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S171>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error'
//  '<S172>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative'
//  '<S173>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative1'
//  '<S174>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative2'
//  '<S175>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error/MATLAB Function'
//  '<S176>' : 'GNC2026W/3 - Control/Default PD (ARM)/Passthrough for Experiment'
//  '<S177>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller'
//  '<S178>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)'
//  '<S179>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)'
//  '<S180>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)'
//  '<S181>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)/Discrete Derivative1'
//  '<S182>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)/Discrete Derivative1'
//  '<S183>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)/Discrete Derivative1'
//  '<S184>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error'
//  '<S185>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative'
//  '<S186>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative1'
//  '<S187>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative2'
//  '<S188>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S189>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error'
//  '<S190>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative'
//  '<S191>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative1'
//  '<S192>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative2'
//  '<S193>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S194>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error'
//  '<S195>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative'
//  '<S196>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative1'
//  '<S197>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative2'
//  '<S198>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error/MATLAB Function'
//  '<S199>' : 'GNC2026W/Check  Connection/Change BLACK Behavior'
//  '<S200>' : 'GNC2026W/Check  Connection/Change BLUE Behavior'
//  '<S201>' : 'GNC2026W/Check  Connection/Change RED Behavior'
//  '<S202>' : 'GNC2026W/Data Logger Subsystem/Data Logger'
//  '<S203>' : 'GNC2026W/Data Logger Subsystem/Separation'
//  '<S204>' : 'GNC2026W/Data Logger Subsystem/Data Logger/MATLAB Function'
//  '<S205>' : 'GNC2026W/Data Logger Subsystem/Separation/MATLAB Function'
//  '<S206>' : 'GNC2026W/Debugger/Change BLACK Behavior'
//  '<S207>' : 'GNC2026W/Debugger/Change BLUE Behavior'
//  '<S208>' : 'GNC2026W/Debugger/Change RED Behavior'
//  '<S209>' : 'GNC2026W/Float Code/Enable Pucks'
//  '<S210>' : 'GNC2026W/Manipulator Encoder Data/Change ARM Behavior'
//  '<S211>' : 'GNC2026W/PhaseSpace Camera Code/Initialize Universal Time (Simulation)'
//  '<S212>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States'
//  '<S213>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data'
//  '<S214>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data'
//  '<S215>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data'
//  '<S216>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data'
//  '<S217>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)'
//  '<S218>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Enabled Subsystem2'
//  '<S219>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function'
//  '<S220>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function1'
//  '<S221>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time'
//  '<S222>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLACK Behavior'
//  '<S223>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLUE Behavior'
//  '<S224>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change RED Behavior'
//  '<S225>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step'
//  '<S226>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise '
//  '<S227>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1'
//  '<S228>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2'
//  '<S229>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Wrap'
//  '<S230>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S231>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/MATLAB Function'
//  '<S232>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /BLK CoM to LAR'
//  '<S233>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /CV Noise'
//  '<S234>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /Inertial to Camera Frame (HARDWARE)'
//  '<S235>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /Sample and Hold'
//  '<S236>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /Unwrap'
//  '<S237>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /Unwrap/Unwrap'
//  '<S238>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise /Unwrap/Unwrap/MATLAB Function'
//  '<S239>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem'
//  '<S240>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S241>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem'
//  '<S242>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S243>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step'
//  '<S244>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1'
//  '<S245>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2'
//  '<S246>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Wrap'
//  '<S247>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S248>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/MATLAB Function'
//  '<S249>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem'
//  '<S250>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S251>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem'
//  '<S252>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S253>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step'
//  '<S254>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1'
//  '<S255>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2'
//  '<S256>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Wrap'
//  '<S257>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S258>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/MATLAB Function'
//  '<S259>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem'
//  '<S260>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S261>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem'
//  '<S262>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S263>' : 'GNC2026W/Platform  Identification/Subsystem'
//  '<S264>' : 'GNC2026W/Receive CV Data/CV UDP'
//  '<S265>' : 'GNC2026W/Receive CV Data/CV UDP/Unwrap'
//  '<S266>' : 'GNC2026W/Receive CV Data/CV UDP/Unwrap/Unwrap'
//  '<S267>' : 'GNC2026W/Receive CV Data/CV UDP/Unwrap/Unwrap/MATLAB Function'
//  '<S268>' : 'GNC2026W/Receive Data from Orin/Subsystem'
//  '<S269>' : 'GNC2026W/Robotic  Arm Code/Change ARM Behavior'
//  '<S270>' : 'GNC2026W/Send Data  to Orin/Subsystem'
//  '<S271>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior'
//  '<S272>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior'
//  '<S273>' : 'GNC2026W/Thruster Control Code/Change RED Behavior'
//  '<S274>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle'
//  '<S275>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body'
//  '<S276>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S277>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S278>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S279>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S280>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S281>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S282>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S283>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S284>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S285>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S286>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle'
//  '<S287>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body'
//  '<S288>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S289>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S290>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S291>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S292>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S293>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S294>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S295>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S296>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S297>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S298>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle'
//  '<S299>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body'
//  '<S300>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S301>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S302>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S303>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function8'
//  '<S304>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S305>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S306>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S307>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S308>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S309>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S310>' : 'GNC2026W/Time Sync./Change BLACK Behavior'
//  '<S311>' : 'GNC2026W/Time Sync./Change BLUE Behavior'
//  '<S312>' : 'GNC2026W/Time Sync./Change RED Behavior'

#endif                                 // GNC2026W_h_

//
// File trailer for generated code.
//
// [EOF]
//
