//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.h
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1542
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Jan 26 10:17:37 2026
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
  real_T UDPSend_NetworkLib[137];      // '<S215>/UDP Send'
};

// Block states (default storage) for system '<S237>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_l_T {
  real_T UDPSendGUI_NetworkLib[137];   // '<S238>/UDP Send (GUI)'
};

// Block signals for system '<S243>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_T {
  real_T Delay[3];                     // '<S255>/Delay'
  real_T ema[3];                       // '<S255>/MATLAB Function'
};

// Block states (default storage) for system '<S243>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026W_T {
  real_T Delay_DSTATE[3];              // '<S255>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S243>/Enabled Subsystem'
};

// Block signals for system '<S244>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_h_T {
  real_T Delay[3];                     // '<S257>/Delay'
  real_T ema[3];                       // '<S257>/MATLAB Function'
};

// Block states (default storage) for system '<S244>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_c_T {
  real_T Delay_DSTATE[3];              // '<S257>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S244>/Enabled Subsystem'
};

// Block signals for system '<S290>/Pseudoinverse1'
struct B_Pseudoinverse1_GNC2026W_T {
  real_T Pseudoinverse1[24];           // '<S290>/Pseudoinverse1'
};

// Block states (default storage) for system '<S290>/Pseudoinverse1'
struct DW_Pseudoinverse1_GNC2026W_T {
  dsp_simulink_Pseudoinverse_GN_T obj; // '<S290>/Pseudoinverse1'
  boolean_T objisempty;                // '<S290>/Pseudoinverse1'
};

// Block signals for system '<S17>/Change BLACK Behavior'
struct B_ChangeBLACKBehavior_GNC20_m_T {
  real_T Clock1;                       // '<S323>/Clock1'
};

// Block states (default storage) for system '<S17>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_g_T {
  real_T UDPSendClock_NetworkLib[137]; // '<S323>/UDP Send (Clock)'
};

// Block signals (default storage)
struct B_GNC2026W_T {
  real_T Merge1[3];                    // '<S3>/Merge1'
  real_T Merge2[3];                    // '<S3>/Merge2'
  real_T Merge[3];                     // '<S3>/Merge'
  real_T TmpSignalConversionAtUDPSendInp[10];
  real_T duty_cycles[8];               // '<S311>/MATLAB Function5'
  real_T ThrustPer_Final[8];           // '<S319>/ThrustPer_Final'
  real_T In1;                          // '<S318>/In1'
  real_T duty_cycles_j[8];             // '<S299>/MATLAB Function5'
  real_T ThrustPer_Final_h[8];         // '<S307>/ThrustPer_Final'
  real_T In1_g;                        // '<S306>/In1'
  real_T duty_cycles_m[8];             // '<S287>/MATLAB Function5'
  real_T ThrustPer_Final_h5[8];        // '<S295>/ThrustPer_Final'
  real_T In1_g2;                       // '<S294>/In1'
  real_T TmpSignalConversionAtUDPSendI_o[28];
  real_T ReceivePhaseSpaceData_o1[19]; // '<S229>/Receive PhaseSpace Data'
  real_T ConvertBLAXfrommmtom;        // '<S230>/Convert BLAX from [mm] to [m]'
  real_T ConvertBLUXfrommmtom;        // '<S231>/Convert BLUX from [mm] to [m]'
  real_T ConvertREDXfrommmtom;        // '<S232>/Convert REDX from [mm] to [m]'
  real_T UDPReceiveREDClock_o1;        // '<S233>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_o1;      // '<S233>/UDP Receive (BLACK Clock)'
  real_T UDPReceiveBLUEClock_o1;       // '<S233>/UDP Receive (BLUE Clock)'
  real_T dy[3];                        // '<S277>/MATLAB Function'
  real_T dy_h[3];                      // '<S275>/MATLAB Function'
  real_T y2y1;                         // '<S273>/y2-y1'
  real_T dy_c[3];                      // '<S267>/MATLAB Function'
  real_T dy_d[3];                      // '<S265>/MATLAB Function'
  real_T y2y1_o;                       // '<S263>/y2-y1'
  real_T dy_p[3];                      // '<S257>/MATLAB Function'
  real_T dy_g[3];                      // '<S255>/MATLAB Function'
  real_T y;                            // '<S253>/MATLAB Function'
  real_T u_next;                       // '<S253>/MATLAB Function'
  real_T y2y1_ob;                      // '<S246>/y2-y1'
  real_T In1_g20;                      // '<S234>/In1'
  real_T Merge_k[6];                   // '<S130>/Merge'
  real32_T UDPReceive_o1[4];           // '<S281>/UDP Receive'
  real32_T UDPReceive_o1_a[4];         // '<S280>/UDP Receive'
  uint8_T StringtoASCII[31];           // '<S224>/String to ASCII'
  uint8_T StringtoASCII2[31];          // '<S223>/String to ASCII2'
  uint8_T StringtoASCII1[31];          // '<S222>/String to ASCII1'
  B_ChangeBLACKBehavior_GNC20_m_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S290>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S290>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S290>/Pseudoinverse1'
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_l1;// '<S271>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S270>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_d;// '<S261>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S260>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_g;// '<S244>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S243>/Enabled Subsystem'
};

// Block states (default storage) for system '<Root>'
struct DW_GNC2026W_T {
  Dynamixel_Controller_GNC2026W_T obj;
  // '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  GPIO_Write_GNC2026W_T obj_l;         // '<S225>/GPIO Write1'
  ReadArm_Position_Rates_GNC202_T obj_d;
                     // '<S226>/Read Joint Positions using  Dynamixel Encoders'
  IdentifyPlatform_GNC2026W_T obj_dk;  // '<S279>/WhoAmI'
  CustomDataLogger_GNC2026W_T obj_f;   // '<S218>/MATLAB System'
  real_T Delay_DSTATE;                 // '<S313>/Delay'
  real_T Delay_DSTATE_k;               // '<S301>/Delay'
  real_T Delay_DSTATE_kz;              // '<S289>/Delay'
  real_T Delay2_DSTATE;                // '<S241>/Delay2'
  real_T Delay1_DSTATE;                // '<S241>/Delay1'
  real_T Delay1_DSTATE_g[3];           // '<S244>/Delay1'
  real_T Delay1_DSTATE_b[3];           // '<S243>/Delay1'
  real_T Delay_DSTATE_h;               // '<S253>/Delay'
  real_T Delay1_DSTATE_f;              // '<S253>/Delay1'
  real_T Delay2_DSTATE_l;              // '<S259>/Delay2'
  real_T Delay1_DSTATE_l;              // '<S259>/Delay1'
  real_T Delay1_DSTATE_m[3];           // '<S261>/Delay1'
  real_T Delay1_DSTATE_lv[3];          // '<S260>/Delay1'
  real_T Delay2_DSTATE_l0;             // '<S269>/Delay2'
  real_T Delay1_DSTATE_ld;             // '<S269>/Delay1'
  real_T Delay1_DSTATE_c[3];           // '<S271>/Delay1'
  real_T Delay1_DSTATE_cq[3];          // '<S270>/Delay1'
  real_T Delay_DSTATE_o;               // '<S226>/Delay'
  real_T Delay1_DSTATE_cg;             // '<S226>/Delay1'
  real_T Delay2_DSTATE_h;              // '<S226>/Delay2'
  real_T UD_DSTATE;                    // '<S197>/UD'
  real_T UD_DSTATE_e;                  // '<S198>/UD'
  real_T UD_DSTATE_a;                  // '<S199>/UD'
  real_T UD_DSTATE_l;                  // '<S183>/UD'
  real_T UD_DSTATE_k;                  // '<S184>/UD'
  real_T UD_DSTATE_h;                  // '<S185>/UD'
  real_T UD_DSTATE_o;                  // '<S206>/UD'
  real_T UD_DSTATE_n;                  // '<S207>/UD'
  real_T UD_DSTATE_hu;                 // '<S208>/UD'
  real_T UD_DSTATE_j;                  // '<S178>/UD'
  real_T UD_DSTATE_c;                  // '<S179>/UD'
  real_T UD_DSTATE_d;                  // '<S180>/UD'
  real_T UD_DSTATE_eh;                 // '<S201>/UD'
  real_T UD_DSTATE_hv;                 // '<S202>/UD'
  real_T UD_DSTATE_kv;                 // '<S203>/UD'
  real_T Delay_DSTATE_l;               // '<S175>/Delay'
  real_T Delay1_DSTATE_ba;             // '<S175>/Delay1'
  real_T UD_DSTATE_aq;                 // '<S188>/UD'
  real_T UD_DSTATE_p;                  // '<S189>/UD'
  real_T UD_DSTATE_pr;                 // '<S190>/UD'
  real_T UD_DSTATE_eg;                 // '<S211>/UD'
  real_T UD_DSTATE_cd;                 // '<S212>/UD'
  real_T UD_DSTATE_hd;                 // '<S213>/UD'
  real_T Delay_DSTATE_h0;              // '<S153>/Delay'
  real_T Delay1_DSTATE_lo;             // '<S153>/Delay1'
  real_T Delay_DSTATE_ol;              // '<S151>/Delay'
  real_T Delay1_DSTATE_e;              // '<S151>/Delay1'
  real_T Delay_DSTATE_c;               // '<S139>/Delay'
  real_T Delay1_DSTATE_g0;             // '<S139>/Delay1'
  real_T Delay_DSTATE_j;               // '<S144>/Delay'
  real_T Delay1_DSTATE_d;              // '<S144>/Delay1'
  real_T Delay_DSTATE_b;               // '<S149>/Delay'
  real_T Delay1_DSTATE_a;              // '<S149>/Delay1'
  real_T UnitDelay1_DSTATE[6];         // '<S135>/Unit Delay1'
  real_T UnitDelay2_DSTATE[36];        // '<S135>/Unit Delay2'
  creal_T q;                           // '<S134>/MEKF'
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
  real_T UDPSend_NetworkLib_m[137];    // '<S283>/UDP Send'
  real_T UDPReceive_NetworkLib[137];   // '<S281>/UDP Receive'
  real_T UDPReceive_NetworkLib_i[137]; // '<S280>/UDP Receive'
  real_T ReceivePhaseSpaceData_NetworkLi[137];// '<S229>/Receive PhaseSpace Data' 
  real_T UDPReceiveREDClock_NetworkLib[137];// '<S233>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_NetworkLib[137];// '<S233>/UDP Receive (BLACK Clock)' 
  real_T UDPReceiveBLUEClock_NetworkLib[137];// '<S233>/UDP Receive (BLUE Clock)' 
  real_T k;                            // '<S242>/Sample and Hold'
  real_T y_hold[3];                    // '<S242>/Sample and Hold'
  real_T UDPSend3_NetworkLib[137];     // '<S224>/UDP Send3'
  real_T UDPSend2_NetworkLib[137];     // '<S223>/UDP Send2'
  real_T UDPSend1_NetworkLib[137];     // '<S222>/UDP Send1'
  real_T x[6];                         // '<S133>/EKF'
  real_T P[36];                        // '<S133>/EKF'
  real_T theta;                        // '<S133>/EKF'
  real_T theta_prev;                   // '<S133>/EKF'
  real_T x_m[5];                       // '<S134>/MEKF'
  real_T P_h[36];                      // '<S134>/MEKF'
  real_T theta_prev_a;                 // '<S134>/MEKF'
  real_T theta_cont;                   // '<S134>/MEKF'
  real_T k_h;                          // '<S135>/Unscented Kalman Filter'
  real_T counter;                      // '<S56>/First Fit Detector'
  real_T firstfit;                     // '<S56>/First Fit Detector'
  real_T prev;                         // '<S56>/First Fit Detector'
  char_T RED_Logger[256];              // '<Root>/RED_Tz3'
  char_T BLACK_Logger[256];            // '<Root>/RED_Tz4'
  char_T BLUE_Logger[256];             // '<Root>/RED_Tz5'
  comm_internal_BernoulliBinary_T obj_fv;// '<Root>/Dropped Frames'
  uint32_T RandSeed;                   // '<Root>/Gaussian Noise'
  uint32_T method;                     // '<S242>/CV Noise'
  uint32_T state;                      // '<S242>/CV Noise'
  uint32_T state_g[2];                 // '<S242>/CV Noise'
  uint32_T state_j[625];               // '<S242>/CV Noise'
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
  // '<S237>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhether_cs;
  // '<S237>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_d;
  // '<S237>/This IF block determines whether or not to run the RED sim//exp '
  boolean_T k_not_empty;               // '<S242>/Sample and Hold'
  boolean_T initial_theta;             // '<S133>/EKF'
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S290>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S290>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S290>/Pseudoinverse1'
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_l1;// '<S271>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S270>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_d;// '<S261>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S260>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_g;// '<S244>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S243>/Enabled Subsystem'
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeREDBehavior_d;// '<S237>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLUEBehavior_f;// '<S237>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLACKBehavior_e;// '<S237>/Change BLACK Behavior' 
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
                                          //  Referenced by: '<S109>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S109>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S109>/Constant2'

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
                                          //  Referenced by: '<S171>/Zero'

};

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
struct P_DisableThrustersBLACK_GNC20_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S169>/Zero'

};

// Parameters for system: '<S4>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC2026_T_ {
  int32_T Constant1_Value;             // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S215>/Constant1'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S215>/UDP Send'

};

// Parameters for system: '<S237>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_p_T_ {
  int32_T UDPSendGUI_Port;             // Computed Parameter: UDPSendGUI_Port
                                          //  Referenced by: '<S238>/UDP Send (GUI)'

};

// Parameters for system: '<S243>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S255>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S255>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S255>/Delay'

};

// Parameters for system: '<S244>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_c_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S257>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S257>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S257>/Delay'

};

// Parameters for system: '<S17>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_b_T_ {
  int32_T UDPSendClock_Port;           // Computed Parameter: UDPSendClock_Port
                                          //  Referenced by: '<S323>/UDP Send (Clock)'

};

// Parameters (default storage)
struct P_GNC2026W_T_ {
  real_T A_c[9];                       // Variable: A_c
                                          //  Referenced by: '<S160>/Constant7'

  real_T CVrate;                       // Variable: CVrate
                                          //  Referenced by:
                                          //    '<S133>/EKF'
                                          //    '<S134>/MEKF'
                                          //    '<S135>/Unscented Kalman Filter'
                                          //    '<S242>/Sample and Hold'

  real_T F_red_X_nominal;              // Variable: F_red_X_nominal
                                          //  Referenced by:
                                          //    '<S287>/MATLAB Function5'
                                          //    '<S299>/MATLAB Function5'
                                          //    '<S311>/MATLAB Function5'

  real_T F_red_Y_nominal;              // Variable: F_red_Y_nominal
                                          //  Referenced by:
                                          //    '<S287>/MATLAB Function5'
                                          //    '<S299>/MATLAB Function5'
                                          //    '<S311>/MATLAB Function5'

  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by: '<S290>/MATLAB Function'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by: '<S302>/MATLAB Function'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by: '<S314>/MATLAB Function'

  real_T F_u[3];                       // Variable: F_u
                                          //  Referenced by: '<S160>/Constant3'

  real_T K_BLACK[18];                  // Variable: K_BLACK
                                          //  Referenced by: '<S161>/Constant2'

  real_T K_BLUE[18];                   // Variable: K_BLUE
                                          //  Referenced by: '<S162>/Constant2'

  real_T K_RED[18];                    // Variable: K_RED
                                          //  Referenced by: '<S163>/Constant2'

  real_T Kd_elarm;                     // Variable: Kd_elarm
                                          //  Referenced by: '<S194>/kd_elarm'

  real_T Kd_sharm;                     // Variable: Kd_sharm
                                          //  Referenced by: '<S195>/kd_sharm'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by: '<S165>/Gain5'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by: '<S166>/Gain5'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by: '<S167>/Gain5'

  real_T Kd_wrarm;                     // Variable: Kd_wrarm
                                          //  Referenced by: '<S196>/kd_wrarm'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by: '<S165>/Gain3'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by: '<S166>/Gain3'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by: '<S167>/Gain3'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by: '<S165>/Gain4'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by: '<S166>/Gain4'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by: '<S167>/Gain4'

  real_T Kp_elarm;                     // Variable: Kp_elarm
                                          //  Referenced by: '<S194>/kp_elarm'

  real_T Kp_sharm;                     // Variable: Kp_sharm
                                          //  Referenced by: '<S195>/kp_sharm'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by: '<S165>/Gain2'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by: '<S166>/Gain2'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by: '<S167>/Gain2'

  real_T Kp_wrarm;                     // Variable: Kp_wrarm
                                          //  Referenced by: '<S196>/kp_wrarm'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by: '<S165>/Gain'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by: '<S166>/Gain'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by: '<S167>/Gain'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by: '<S165>/Gain1'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by: '<S166>/Gain1'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by: '<S167>/Gain1'

  real_T Mc_inv[9];                    // Variable: Mc_inv
                                          //  Referenced by: '<S160>/MATLAB Function3'

  real_T PWMFreq;                      // Variable: PWMFreq
                                          //  Referenced by:
                                          //    '<S16>/PWM Frequency'
                                          //    '<S287>/MATLAB Function1'
                                          //    '<S299>/MATLAB Function1'
                                          //    '<S311>/MATLAB Function8'
                                          //    '<S289>/Constant1'
                                          //    '<S301>/Constant1'
                                          //    '<S313>/Constant1'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<S1>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<S1>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by:
                                          //    '<S1>/Constant1'
                                          //    '<S44>/Constant2'
                                          //    '<S64>/Constant2'
                                          //    '<S85>/Constant2'
                                          //    '<S89>/Constant2'
                                          //    '<S101>/Constant2'
                                          //    '<S105>/Constant2'
                                          //    '<S40>/Constant1'
                                          //    '<S41>/Constant1'
                                          //    '<S42>/Constant1'
                                          //    '<S60>/Constant1'
                                          //    '<S61>/Constant1'
                                          //    '<S62>/Constant1'
                                          //    '<S81>/Constant1'
                                          //    '<S82>/Constant1'
                                          //    '<S83>/Constant1'
                                          //    '<S99>/Constant1'

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
                                          //  Referenced by: '<S135>/Unscented Kalman Filter'

  real_T Tz_lim_elarm;                 // Variable: Tz_lim_elarm
                                          //  Referenced by: '<S193>/Saturation1'

  real_T Tz_lim_sharm;                 // Variable: Tz_lim_sharm
                                          //  Referenced by: '<S193>/Saturation'

  real_T Tz_lim_wrarm;                 // Variable: Tz_lim_wrarm
                                          //  Referenced by: '<S193>/Saturation3'

  real_T X1_blk;                       // Variable: X1_blk
                                          //  Referenced by: '<S38>/Desired X-Position (BLACK)'

  real_T X2_blk;                       // Variable: X2_blk
                                          //  Referenced by: '<S58>/Desired X-Position (BLACK)'

  real_T X3_blk;                       // Variable: X3_blk
                                          //  Referenced by: '<S79>/Desired X-Position (BLACK)'

  real_T Y1_blk;                       // Variable: Y1_blk
                                          //  Referenced by: '<S38>/Desired Y-Position (BLACK)'

  real_T Y2_blk;                       // Variable: Y2_blk
                                          //  Referenced by: '<S58>/Desired Y-Position (BLACK)'

  real_T Y3_blk;                       // Variable: Y3_blk
                                          //  Referenced by: '<S79>/Desired Y-Position (BLACK)'

  real_T a;                            // Variable: a
                                          //  Referenced by: '<S135>/Unscented Kalman Filter'

  real_T alpha[9];                     // Variable: alpha
                                          //  Referenced by: '<S160>/MATLAB Function3'

  real_T b;                            // Variable: b
                                          //  Referenced by: '<S135>/Unscented Kalman Filter'

  real_T baseRate;                     // Variable: baseRate
                                          //  Referenced by:
                                          //    '<S226>/Read Joint Positions using  Dynamixel Encoders'
                                          //    '<S279>/WhoAmI'
                                          //    '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
                                          //    '<S133>/EKF'
                                          //    '<S134>/MEKF'
                                          //    '<S135>/Unscented Kalman Filter'
                                          //    '<S242>/Sample and Hold'

  real_T dataRate;                     // Variable: dataRate
                                          //  Referenced by:
                                          //    '<S241>/Constant'
                                          //    '<S259>/Constant'
                                          //    '<S269>/Constant'

  real_T dt;                           // Variable: dt
                                          //  Referenced by: '<S135>/Unscented Kalman Filter'

  real_T fNum;                         // Variable: fNum
                                          //  Referenced by: '<S130>/Constant'

  real_T gamma[9];                     // Variable: gamma
                                          //  Referenced by: '<S160>/MATLAB Function3'

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
                                          //    '<S26>/Desired States (BLACK)'
                                          //    '<S151>/Delay'
                                          //    '<S151>/Delay1'
                                          //    '<S153>/Delay'
                                          //    '<S153>/Delay1'
                                          //    '<S139>/Delay'
                                          //    '<S139>/Delay1'
                                          //    '<S144>/Delay'
                                          //    '<S144>/Delay1'
                                          //    '<S149>/Delay'
                                          //    '<S149>/Delay1'
                                          //    '<S253>/Delay'
                                          //    '<S253>/Delay1'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by: '<S27>/Desired States (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S28>/Constant2'
                                          //    '<S36>/Constant2'
                                          //    '<S55>/Constant2'
                                          //    '<S175>/Delay'
                                          //    '<S175>/Delay1'

  real_T k;                            // Variable: k
                                          //  Referenced by: '<S135>/Unscented Kalman Filter'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S233>/MATLAB Function'

  real_T sep1;                         // Variable: sep1
                                          //  Referenced by: '<S36>/Separation'

  real_T sep2;                         // Variable: sep2
                                          //  Referenced by: '<S55>/Separation'

  real_T sep3;                         // Variable: sep3
                                          //  Referenced by: '<S77>/Separation'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by: '<S15>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by: '<S290>/MATLAB Function'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by: '<S302>/MATLAB Function'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S287>/MATLAB Function5'
                                          //    '<S299>/MATLAB Function5'
                                          //    '<S311>/MATLAB Function5'
                                          //    '<S314>/MATLAB Function'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by:
                                          //    '<S94>/Desired X-Position (BLACK)'
                                          //    '<S43>/Constant1'
                                          //    '<S63>/Constant1'
                                          //    '<S84>/Constant1'
                                          //    '<S88>/Constant1'
                                          //    '<S100>/Constant1'
                                          //    '<S104>/Constant1'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by:
                                          //    '<S94>/Desired Y-Position (BLACK)'
                                          //    '<S43>/Constant2'
                                          //    '<S63>/Constant2'
                                          //    '<S84>/Constant2'
                                          //    '<S88>/Constant2'
                                          //    '<S100>/Constant2'
                                          //    '<S104>/Constant2'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S211>/UD'

  real_T DiscreteDerivative1_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative1_ICPrevScale
                                 //  Referenced by: '<S212>/UD'

  real_T DiscreteDerivative2_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative2_ICPrevScale
                                 //  Referenced by: '<S213>/UD'

  real_T DiscreteDerivative_ICPrevScal_i;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                 //  Referenced by: '<S188>/UD'

  real_T DiscreteDerivative1_ICPrevSca_e;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
                                 //  Referenced by: '<S189>/UD'

  real_T DiscreteDerivative2_ICPrevSca_o;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                 //  Referenced by: '<S190>/UD'

  real_T DiscreteDerivative_ICPrevScal_p;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_p
                                 //  Referenced by: '<S201>/UD'

  real_T DiscreteDerivative1_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
                                 //  Referenced by: '<S202>/UD'

  real_T DiscreteDerivative2_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
                                 //  Referenced by: '<S203>/UD'

  real_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S178>/UD'

  real_T DiscreteDerivative1_ICPrevSca_i;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
                                 //  Referenced by: '<S179>/UD'

  real_T DiscreteDerivative2_ICPrevSc_oo;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
                                 //  Referenced by: '<S180>/UD'

  real_T DiscreteDerivative_ICPrevSca_pf;
                              // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
                                 //  Referenced by: '<S206>/UD'

  real_T DiscreteDerivative1_ICPrevSca_l;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
                                 //  Referenced by: '<S207>/UD'

  real_T DiscreteDerivative2_ICPrevSc_on;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
                                 //  Referenced by: '<S208>/UD'

  real_T DiscreteDerivative_ICPrevScal_n;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_n
                                 //  Referenced by: '<S183>/UD'

  real_T DiscreteDerivative1_ICPrevSca_f;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
                                 //  Referenced by: '<S184>/UD'

  real_T DiscreteDerivative2_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                 //  Referenced by: '<S185>/UD'

  real_T DiscreteDerivative1_ICPrevSca_j;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
                                 //  Referenced by: '<S197>/UD'

  real_T DiscreteDerivative1_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
                                 //  Referenced by: '<S198>/UD'

  real_T DiscreteDerivative1_ICPrevSca_k;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
                                 //  Referenced by: '<S199>/UD'

  real_T MATLABFunction5_max_iters; // Mask Parameter: MATLABFunction5_max_iters
                                       //  Referenced by: '<S287>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_b;
                                  // Mask Parameter: MATLABFunction5_max_iters_b
                                     //  Referenced by: '<S299>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_e;
                                  // Mask Parameter: MATLABFunction5_max_iters_e
                                     //  Referenced by: '<S311>/MATLAB Function5'

  real_T MATLABFunction5_tol;          // Mask Parameter: MATLABFunction5_tol
                                          //  Referenced by: '<S287>/MATLAB Function5'

  real_T MATLABFunction5_tol_j;        // Mask Parameter: MATLABFunction5_tol_j
                                          //  Referenced by: '<S299>/MATLAB Function5'

  real_T MATLABFunction5_tol_g;        // Mask Parameter: MATLABFunction5_tol_g
                                          //  Referenced by: '<S311>/MATLAB Function5'

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

  real_T Gain_Gain_hy;                 // Expression: 180/pi
                                          //  Referenced by: '<S73>/Gain'

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

  real_T Separation_Value;             // Expression: 0.30
                                          //  Referenced by: '<S96>/Separation'

  real_T Constant_Value_c;             // Expression: 0.3
                                          //  Referenced by: '<S106>/Constant'

  real_T UnitDelay1_InitialCondition[6];// Expression: zeros(6,1)
                                           //  Referenced by: '<S135>/Unit Delay1'

  real_T UnitDelay2_InitialCondition[36];
                                   // Expression: diag([1, 1, 0.05, 1, 1, 0.05])
                                      //  Referenced by: '<S135>/Unit Delay2'

  real_T Merge_InitialOutput;         // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S130>/Merge'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S211>/TSamp'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                          //  Referenced by: '<S212>/TSamp'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                          //  Referenced by: '<S213>/TSamp'

  real_T Gain6_Gain;                   // Expression: -1
                                          //  Referenced by: '<S167>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                          //  Referenced by: '<S167>/Gain7'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S167>/Gain8'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                          //  Referenced by: '<S188>/TSamp'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                          //  Referenced by: '<S189>/TSamp'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                          //  Referenced by: '<S190>/TSamp'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S201>/TSamp'

  real_T TSamp_WtEt_hr;                // Computed Parameter: TSamp_WtEt_hr
                                          //  Referenced by: '<S202>/TSamp'

  real_T TSamp_WtEt_ca;                // Computed Parameter: TSamp_WtEt_ca
                                          //  Referenced by: '<S203>/TSamp'

  real_T Gain6_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S165>/Gain6'

  real_T Gain7_Gain_b;                 // Expression: -1
                                          //  Referenced by: '<S165>/Gain7'

  real_T Gain8_Gain_m;                 // Expression: -1
                                          //  Referenced by: '<S165>/Gain8'

  real_T TSamp_WtEt_nd;                // Computed Parameter: TSamp_WtEt_nd
                                          //  Referenced by: '<S178>/TSamp'

  real_T TSamp_WtEt_co;                // Computed Parameter: TSamp_WtEt_co
                                          //  Referenced by: '<S179>/TSamp'

  real_T TSamp_WtEt_no;                // Computed Parameter: TSamp_WtEt_no
                                          //  Referenced by: '<S180>/TSamp'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                          //  Referenced by: '<S206>/TSamp'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                          //  Referenced by: '<S207>/TSamp'

  real_T TSamp_WtEt_px;                // Computed Parameter: TSamp_WtEt_px
                                          //  Referenced by: '<S208>/TSamp'

  real_T Gain6_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S166>/Gain6'

  real_T Gain7_Gain_e;                 // Expression: -1
                                          //  Referenced by: '<S166>/Gain7'

  real_T Gain8_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S166>/Gain8'

  real_T TSamp_WtEt_ft;                // Computed Parameter: TSamp_WtEt_ft
                                          //  Referenced by: '<S183>/TSamp'

  real_T TSamp_WtEt_eh;                // Computed Parameter: TSamp_WtEt_eh
                                          //  Referenced by: '<S184>/TSamp'

  real_T TSamp_WtEt_ii;                // Computed Parameter: TSamp_WtEt_ii
                                          //  Referenced by: '<S185>/TSamp'

  real_T TSamp_WtEt_pu;                // Computed Parameter: TSamp_WtEt_pu
                                          //  Referenced by: '<S197>/TSamp'

  real_T TSamp_WtEt_f0;                // Computed Parameter: TSamp_WtEt_f0
                                          //  Referenced by: '<S198>/TSamp'

  real_T TSamp_WtEt_nz;                // Computed Parameter: TSamp_WtEt_nz
                                          //  Referenced by: '<S199>/TSamp'

  real_T Constant7_Value;              // Expression: 1
                                          //  Referenced by: '<S164>/Constant7'

  real_T Merge3_InitialOutput;       // Computed Parameter: Merge3_InitialOutput
                                        //  Referenced by: '<S164>/Merge3'

  real_T Merge4_InitialOutput;       // Computed Parameter: Merge4_InitialOutput
                                        //  Referenced by: '<S164>/Merge4'

  real_T Merge5_InitialOutput;       // Computed Parameter: Merge5_InitialOutput
                                        //  Referenced by: '<S164>/Merge5'

  real_T Constant7_Value_h;            // Expression: 0
                                          //  Referenced by: '<S168>/Constant7'

  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S168>/Zero'

  real_T GPIOWrite1_gpioPin;           // Expression: 428
                                          //  Referenced by: '<S225>/GPIO Write1'

  real_T GPIOWrite1_pinDirection;      // Expression: 1
                                          //  Referenced by: '<S225>/GPIO Write1'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S226>/Delay'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S226>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S226>/Delay2'

  real_T UniversalTime_Y0;             // Computed Parameter: UniversalTime_Y0
                                          //  Referenced by: '<S234>/Universal Time'

  real_T dytdt_Y0;                     // Computed Parameter: dytdt_Y0
                                          //  Referenced by: '<S246>/dy(t)//dt'

  real_T dytdt_Y0_j;                   // Computed Parameter: dytdt_Y0_j
                                          //  Referenced by: '<S263>/dy(t)//dt'

  real_T dytdt_Y0_d;                   // Computed Parameter: dytdt_Y0_d
                                          //  Referenced by: '<S273>/dy(t)//dt'

  real_T ConvertBLAXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S230>/Convert BLAX from [mm] to [m]'

  real_T ConvertBLAYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S230>/Convert BLAY from [mm] to [m]'

  real_T ConvertBLACKVXfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S230>/Convert BLACKVX from [mm] to [m]'

  real_T ConvertBLACKVYfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S230>/Convert BLACKVY from [mm] to [m]'

  real_T Delay2_InitialCondition_e;    // Expression: 0
                                          //  Referenced by: '<S241>/Delay2'

  real_T Delay1_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S241>/Delay1'

  real_T Constant3_Value_eq;           // Expression: 0
                                          //  Referenced by: '<S241>/Constant3'

  real_T Delay1_InitialCondition_i;    // Expression: 0.0
                                          //  Referenced by: '<S244>/Delay1'

  real_T Constant3_Value_a;            // Expression: 0
                                          //  Referenced by: '<S244>/Constant3'

  real_T Delay1_InitialCondition_it;   // Expression: 0.0
                                          //  Referenced by: '<S243>/Delay1'

  real_T Constant3_Value_d;            // Expression: 0
                                          //  Referenced by: '<S243>/Constant3'

  real_T ConvertBLUXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S231>/Convert BLUX from [mm] to [m]'

  real_T ConvertBLUYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S231>/Convert BLUY from [mm] to [m]'

  real_T ConvertBLUEVXfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S231>/Convert BLUEVX from [mm] to [m]'

  real_T ConvertBLUEVYfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S231>/Convert BLUEVY from [mm] to [m]'

  real_T Delay2_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S259>/Delay2'

  real_T Delay1_InitialCondition_i3;   // Expression: 0
                                          //  Referenced by: '<S259>/Delay1'

  real_T Constant3_Value_o;            // Expression: 0
                                          //  Referenced by: '<S259>/Constant3'

  real_T Delay1_InitialCondition_h;    // Expression: 0.0
                                          //  Referenced by: '<S261>/Delay1'

  real_T Constant3_Value_c;            // Expression: 0
                                          //  Referenced by: '<S261>/Constant3'

  real_T Delay1_InitialCondition_j;    // Expression: 0.0
                                          //  Referenced by: '<S260>/Delay1'

  real_T Constant3_Value_ke;           // Expression: 0
                                          //  Referenced by: '<S260>/Constant3'

  real_T ConvertREDXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S232>/Convert REDX from [mm] to [m]'

  real_T ConvertREDYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S232>/Convert REDY from [mm] to [m]'

  real_T ConvertREDVXfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S232>/Convert REDVX from [mm] to [m]'

  real_T ConvertREDVYfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S232>/Convert REDVY from [mm] to [m]'

  real_T Delay2_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S269>/Delay2'

  real_T Delay1_InitialCondition_l;    // Expression: 0
                                          //  Referenced by: '<S269>/Delay1'

  real_T Constant3_Value_f;            // Expression: 0
                                          //  Referenced by: '<S269>/Constant3'

  real_T Delay1_InitialCondition_k;    // Expression: 0.0
                                          //  Referenced by: '<S271>/Delay1'

  real_T Constant3_Value_dh;           // Expression: 0
                                          //  Referenced by: '<S271>/Constant3'

  real_T Delay1_InitialCondition_c;    // Expression: 0.0
                                          //  Referenced by: '<S270>/Delay1'

  real_T Constant3_Value_dz;           // Expression: 0
                                          //  Referenced by: '<S270>/Constant3'

  real_T Constant_Value_i;             // Expression: 1
                                          //  Referenced by: '<S233>/Constant'

  real_T Gain_Gain_k;                  // Expression: -1
                                          //  Referenced by: '<S280>/Gain'

  real_T ControlDynamixelActuatorsineith;// Expression: 400
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_b;// Expression: 0
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_h;// Expression: 200
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_j;// Expression: 3072
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_m;// Expression: 1024
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_hy;// Expression: 0
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_i;// Expression: 850
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_g;// Expression: 400
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_g3;// Expression: 100
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_bf;// Expression: 20
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_l;// Expression: 0
                                            //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S294>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S295>/Out1'

  real_T BLACKDC_Y0;                   // Computed Parameter: BLACKDC_Y0
                                          //  Referenced by: '<S284>/BLACK DC'

  real_T Delay_InitialCondition_i;     // Expression: 0.0
                                          //  Referenced by: '<S289>/Delay'

  real_T Constant2_Value_h;            // Expression: 0
                                          //  Referenced by: '<S289>/Constant2'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S306>/Out1'

  real_T Out1_Y0_js;                   // Computed Parameter: Out1_Y0_js
                                          //  Referenced by: '<S307>/Out1'

  real_T BLUEDC_Y0;                    // Computed Parameter: BLUEDC_Y0
                                          //  Referenced by: '<S285>/BLUE DC'

  real_T Delay_InitialCondition_n;     // Expression: 0.0
                                          //  Referenced by: '<S301>/Delay'

  real_T Constant2_Value_fq;           // Expression: 0
                                          //  Referenced by: '<S301>/Constant2'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S318>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S319>/Out1'

  real_T REDDC_Y0;                     // Computed Parameter: REDDC_Y0
                                          //  Referenced by: '<S286>/RED DC'

  real_T Delay_InitialCondition_p;     // Expression: 0.0
                                          //  Referenced by: '<S313>/Delay'

  real_T Constant2_Value_e;            // Expression: 0
                                          //  Referenced by: '<S313>/Constant2'

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

  real_T DataStoreMemory2_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory2'

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
                                          //  Referenced by: '<S222>/UDP Send1'

  int32_T UDPSend2_Port;               // Computed Parameter: UDPSend2_Port
                                          //  Referenced by: '<S223>/UDP Send2'

  int32_T UDPSend3_Port;               // Computed Parameter: UDPSend3_Port
                                          //  Referenced by: '<S224>/UDP Send3'

  int32_T ReceivePhaseSpaceData_Port;
                               // Computed Parameter: ReceivePhaseSpaceData_Port
                                  //  Referenced by: '<S229>/Receive PhaseSpace Data'

  int32_T UDPReceiveREDClock_Port;// Computed Parameter: UDPReceiveREDClock_Port
                                     //  Referenced by: '<S233>/UDP Receive (RED Clock)'

  int32_T UDPReceiveBLACKClock_Port;
                                // Computed Parameter: UDPReceiveBLACKClock_Port
                                   //  Referenced by: '<S233>/UDP Receive (BLACK Clock)'

  int32_T UDPReceiveBLUEClock_Port;
                                 // Computed Parameter: UDPReceiveBLUEClock_Port
                                    //  Referenced by: '<S233>/UDP Receive (BLUE Clock)'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S280>/UDP Receive'

  int32_T UDPReceive_Port_a;           // Computed Parameter: UDPReceive_Port_a
                                          //  Referenced by: '<S281>/UDP Receive'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S283>/UDP Send'

  int32_T UDPSend_Port_h;              // Computed Parameter: UDPSend_Port_h
                                          //  Referenced by: '<S16>/UDP Send'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<S135>/Manual Switch'

  P_ChangeBLACKBehavior_GNC20_b_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_l1;// '<S271>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S270>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_d;// '<S261>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S260>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_g;// '<S244>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S243>/Enabled Subsystem'
  P_ChangeBLACKBehavior_GNC20_p_T ChangeREDBehavior_d;// '<S237>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLUEBehavior_f;// '<S237>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLACKBehavior_e;// '<S237>/Change BLACK Behavior' 
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
//  Block '<S56>/Scope5' : Unused code path elimination
//  Block '<S133>/Scope' : Unused code path elimination
//  Block '<S135>/Scope' : Unused code path elimination
//  Block '<S135>/Scope2' : Unused code path elimination
//  Block '<S120>/Scope1' : Unused code path elimination
//  Block '<S120>/Scope2' : Unused code path elimination
//  Block '<S120>/Scope3' : Unused code path elimination
//  Block '<S120>/Scope4' : Unused code path elimination
//  Block '<S120>/Sum' : Unused code path elimination
//  Block '<S178>/Data Type Duplicate' : Unused code path elimination
//  Block '<S179>/Data Type Duplicate' : Unused code path elimination
//  Block '<S180>/Data Type Duplicate' : Unused code path elimination
//  Block '<S183>/Data Type Duplicate' : Unused code path elimination
//  Block '<S184>/Data Type Duplicate' : Unused code path elimination
//  Block '<S185>/Data Type Duplicate' : Unused code path elimination
//  Block '<S188>/Data Type Duplicate' : Unused code path elimination
//  Block '<S189>/Data Type Duplicate' : Unused code path elimination
//  Block '<S190>/Data Type Duplicate' : Unused code path elimination
//  Block '<S164>/Scope' : Unused code path elimination
//  Block '<S197>/Data Type Duplicate' : Unused code path elimination
//  Block '<S198>/Data Type Duplicate' : Unused code path elimination
//  Block '<S199>/Data Type Duplicate' : Unused code path elimination
//  Block '<S201>/Data Type Duplicate' : Unused code path elimination
//  Block '<S202>/Data Type Duplicate' : Unused code path elimination
//  Block '<S203>/Data Type Duplicate' : Unused code path elimination
//  Block '<S206>/Data Type Duplicate' : Unused code path elimination
//  Block '<S207>/Data Type Duplicate' : Unused code path elimination
//  Block '<S208>/Data Type Duplicate' : Unused code path elimination
//  Block '<S211>/Data Type Duplicate' : Unused code path elimination
//  Block '<S212>/Data Type Duplicate' : Unused code path elimination
//  Block '<S213>/Data Type Duplicate' : Unused code path elimination
//  Block '<S5>/Scope' : Unused code path elimination
//  Block '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' : Unused code path elimination
//  Block '<S242>/Scope1' : Unused code path elimination
//  Block '<S242>/Scope2' : Unused code path elimination
//  Block '<S242>/Scope3' : Unused code path elimination
//  Block '<S280>/Scope' : Unused code path elimination
//  Block '<S222>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S223>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S224>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S229>/Reshape' : Reshape block reduction
//  Block '<S230>/Reshape' : Reshape block reduction
//  Block '<S231>/Reshape' : Reshape block reduction
//  Block '<S232>/Reshape' : Reshape block reduction


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
//  '<S56>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic'
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
//  '<S72>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/First Fit Detector'
//  '<S73>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/Radians to Degrees1'
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
//  '<S128>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/End Effector Desired'
//  '<S129>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/MATLAB Function4'
//  '<S130>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter'
//  '<S131>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap'
//  '<S132>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1'
//  '<S133>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF'
//  '<S134>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF'
//  '<S135>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF'
//  '<S136>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Camera to Inertial Frame'
//  '<S137>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/EKF'
//  '<S138>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Unwrap'
//  '<S139>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Unwrap/Unwrap'
//  '<S140>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/EKF/Unwrap/Unwrap/MATLAB Function'
//  '<S141>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Camera to Inertial Frame'
//  '<S142>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/MEKF'
//  '<S143>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Unwrap'
//  '<S144>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Unwrap/Unwrap'
//  '<S145>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/MEKF/Unwrap/Unwrap/MATLAB Function'
//  '<S146>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Camera to Inertial Frame'
//  '<S147>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unscented Kalman Filter'
//  '<S148>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap'
//  '<S149>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap/Unwrap'
//  '<S150>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Navigation Filter/UKF/Unwrap/Unwrap/MATLAB Function'
//  '<S151>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap/Unwrap'
//  '<S152>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S153>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1/Unwrap'
//  '<S154>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1/Unwrap/MATLAB Function'
//  '<S155>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)/Desired Position'
//  '<S156>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)/Desired Position'
//  '<S157>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)/Desired Position'
//  '<S158>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)/Desired Position'
//  '<S159>' : 'GNC2026W/3 - Control/Custom Control (ARM)'
//  '<S160>' : 'GNC2026W/3 - Control/Custom Control (RED)'
//  '<S161>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)'
//  '<S162>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)'
//  '<S163>' : 'GNC2026W/3 - Control/Default LQR Control (RED)'
//  '<S164>' : 'GNC2026W/3 - Control/Default PD (ARM)'
//  '<S165>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)'
//  '<S166>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)'
//  '<S167>' : 'GNC2026W/3 - Control/Default PD Control (RED)'
//  '<S168>' : 'GNC2026W/3 - Control/Disable Control (ARM)'
//  '<S169>' : 'GNC2026W/3 - Control/Disable Thrusters (BLACK)'
//  '<S170>' : 'GNC2026W/3 - Control/Disable Thrusters (BLUE)'
//  '<S171>' : 'GNC2026W/3 - Control/Disable Thrusters (RED)'
//  '<S172>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function2'
//  '<S173>' : 'GNC2026W/3 - Control/Custom Control (RED)/MATLAB Function3'
//  '<S174>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap'
//  '<S175>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap'
//  '<S176>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S177>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error'
//  '<S178>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative'
//  '<S179>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative1'
//  '<S180>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative2'
//  '<S181>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S182>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error'
//  '<S183>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative'
//  '<S184>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative1'
//  '<S185>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative2'
//  '<S186>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S187>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error'
//  '<S188>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative'
//  '<S189>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative1'
//  '<S190>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative2'
//  '<S191>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error/MATLAB Function'
//  '<S192>' : 'GNC2026W/3 - Control/Default PD (ARM)/Passthrough for Experiment'
//  '<S193>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller'
//  '<S194>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)'
//  '<S195>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)'
//  '<S196>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)'
//  '<S197>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)/Discrete Derivative1'
//  '<S198>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)/Discrete Derivative1'
//  '<S199>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)/Discrete Derivative1'
//  '<S200>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error'
//  '<S201>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative'
//  '<S202>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative1'
//  '<S203>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative2'
//  '<S204>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S205>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error'
//  '<S206>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative'
//  '<S207>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative1'
//  '<S208>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative2'
//  '<S209>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S210>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error'
//  '<S211>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative'
//  '<S212>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative1'
//  '<S213>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative2'
//  '<S214>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error/MATLAB Function'
//  '<S215>' : 'GNC2026W/Check  Connection/Change BLACK Behavior'
//  '<S216>' : 'GNC2026W/Check  Connection/Change BLUE Behavior'
//  '<S217>' : 'GNC2026W/Check  Connection/Change RED Behavior'
//  '<S218>' : 'GNC2026W/Data Logger Subsystem/Data Logger'
//  '<S219>' : 'GNC2026W/Data Logger Subsystem/Separation'
//  '<S220>' : 'GNC2026W/Data Logger Subsystem/Data Logger/MATLAB Function'
//  '<S221>' : 'GNC2026W/Data Logger Subsystem/Separation/MATLAB Function'
//  '<S222>' : 'GNC2026W/Debugger/Change BLACK Behavior'
//  '<S223>' : 'GNC2026W/Debugger/Change BLUE Behavior'
//  '<S224>' : 'GNC2026W/Debugger/Change RED Behavior'
//  '<S225>' : 'GNC2026W/Float Code/Enable Pucks'
//  '<S226>' : 'GNC2026W/Manipulator Encoder Data/Change ARM Behavior'
//  '<S227>' : 'GNC2026W/PhaseSpace Camera Code/Initialize Universal Time (Simulation)'
//  '<S228>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States'
//  '<S229>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data'
//  '<S230>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data'
//  '<S231>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data'
//  '<S232>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data'
//  '<S233>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)'
//  '<S234>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Enabled Subsystem2'
//  '<S235>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function'
//  '<S236>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function1'
//  '<S237>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time'
//  '<S238>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLACK Behavior'
//  '<S239>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLUE Behavior'
//  '<S240>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change RED Behavior'
//  '<S241>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step'
//  '<S242>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)'
//  '<S243>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1'
//  '<S244>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2'
//  '<S245>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Wrap'
//  '<S246>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S247>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/MATLAB Function'
//  '<S248>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/BLK CoM to LAR'
//  '<S249>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/CV Noise'
//  '<S250>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Inertial to Camera Frame (HARDWARE)'
//  '<S251>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Sample and Hold'
//  '<S252>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap'
//  '<S253>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap'
//  '<S254>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap/MATLAB Function'
//  '<S255>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem'
//  '<S256>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S257>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem'
//  '<S258>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S259>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step'
//  '<S260>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1'
//  '<S261>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2'
//  '<S262>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Wrap'
//  '<S263>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S264>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/MATLAB Function'
//  '<S265>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem'
//  '<S266>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S267>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem'
//  '<S268>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S269>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step'
//  '<S270>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1'
//  '<S271>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2'
//  '<S272>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Wrap'
//  '<S273>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S274>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/MATLAB Function'
//  '<S275>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem'
//  '<S276>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S277>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem'
//  '<S278>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S279>' : 'GNC2026W/Platform  Identification/Subsystem'
//  '<S280>' : 'GNC2026W/Receive CV Data/CV UDP'
//  '<S281>' : 'GNC2026W/Receive Data from Orin/Subsystem'
//  '<S282>' : 'GNC2026W/Robotic  Arm Code/Change ARM Behavior'
//  '<S283>' : 'GNC2026W/Send Data  to Orin/Subsystem'
//  '<S284>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior'
//  '<S285>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior'
//  '<S286>' : 'GNC2026W/Thruster Control Code/Change RED Behavior'
//  '<S287>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle'
//  '<S288>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body'
//  '<S289>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S290>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S291>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S292>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S293>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S294>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S295>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S296>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S297>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S298>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S299>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle'
//  '<S300>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body'
//  '<S301>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S302>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S303>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S304>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S305>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S306>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S307>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S308>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S309>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S310>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S311>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle'
//  '<S312>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body'
//  '<S313>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S314>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S315>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S316>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function8'
//  '<S317>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S318>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S319>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S320>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S321>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S322>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S323>' : 'GNC2026W/Time Sync./Change BLACK Behavior'
//  '<S324>' : 'GNC2026W/Time Sync./Change BLUE Behavior'
//  '<S325>' : 'GNC2026W/Time Sync./Change RED Behavior'

#endif                                 // GNC2026W_h_

//
// File trailer for generated code.
//
// [EOF]
//
