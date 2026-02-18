//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W.h
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1759
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Wed Feb 18 14:43:45 2026
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
  real_T UDPSend_NetworkLib[137];      // '<S201>/UDP Send'
};

// Block states (default storage) for system '<S244>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_l_T {
  real_T UDPSendGUI_NetworkLib[137];   // '<S245>/UDP Send (GUI)'
};

// Block signals for system '<S250>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_T {
  real_T Delay[3];                     // '<S264>/Delay'
  real_T ema[3];                       // '<S264>/MATLAB Function'
};

// Block states (default storage) for system '<S250>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026W_T {
  real_T Delay_DSTATE[3];              // '<S264>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S250>/Enabled Subsystem'
};

// Block signals for system '<S251>/Enabled Subsystem'
struct B_EnabledSubsystem_GNC2026W_h_T {
  real_T Delay[3];                     // '<S266>/Delay'
  real_T ema[3];                       // '<S266>/MATLAB Function'
};

// Block states (default storage) for system '<S251>/Enabled Subsystem'
struct DW_EnabledSubsystem_GNC2026_c_T {
  real_T Delay_DSTATE[3];              // '<S266>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S251>/Enabled Subsystem'
};

// Block signals for system '<S300>/Pseudoinverse1'
struct B_Pseudoinverse1_GNC2026W_T {
  real_T Pseudoinverse1[24];           // '<S300>/Pseudoinverse1'
};

// Block states (default storage) for system '<S300>/Pseudoinverse1'
struct DW_Pseudoinverse1_GNC2026W_T {
  dsp_simulink_Pseudoinverse_GN_T obj; // '<S300>/Pseudoinverse1'
  boolean_T objisempty;                // '<S300>/Pseudoinverse1'
};

// Block signals for system '<S18>/Change BLACK Behavior'
struct B_ChangeBLACKBehavior_GNC20_m_T {
  real_T Clock1;                       // '<S333>/Clock1'
};

// Block states (default storage) for system '<S18>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_GNC2_g_T {
  real_T UDPSendClock_NetworkLib[137]; // '<S333>/UDP Send (Clock)'
};

// Block signals (default storage)
struct B_GNC2026W_T {
  real_T Merge1[3];                    // '<S3>/Merge1'
  real_T Merge2[3];                    // '<S3>/Merge2'
  real_T Merge[3];                     // '<S3>/Merge'
  real_T TmpSignalConversionAtUDPSendInp[10];
  real_T duty_cycles[8];               // '<S321>/MATLAB Function5'
  real_T ThrustPer_Final[8];           // '<S329>/ThrustPer_Final'
  real_T In1;                          // '<S328>/In1'
  real_T duty_cycles_j[8];             // '<S309>/MATLAB Function5'
  real_T ThrustPer_Final_h[8];         // '<S317>/ThrustPer_Final'
  real_T In1_g;                        // '<S316>/In1'
  real_T duty_cycles_m[8];             // '<S297>/MATLAB Function5'
  real_T ThrustPer_Final_h5[8];        // '<S305>/ThrustPer_Final'
  real_T In1_g2;                       // '<S304>/In1'
  real_T TmpSignalConversionAtUDPSendI_o[28];
  real_T ReceivePhaseSpaceData_o1[19]; // '<S236>/Receive PhaseSpace Data'
  real_T ConvertBLAXfrommmtom;        // '<S237>/Convert BLAX from [mm] to [m]'
  real_T ConvertBLUXfrommmtom;        // '<S238>/Convert BLUX from [mm] to [m]'
  real_T ConvertREDXfrommmtom;        // '<S239>/Convert REDX from [mm] to [m]'
  real_T UDPReceiveREDClock_o1;        // '<S240>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_o1;      // '<S240>/UDP Receive (BLACK Clock)'
  real_T UDPReceiveBLUEClock_o1;       // '<S240>/UDP Receive (BLUE Clock)'
  real_T dy[3];                        // '<S286>/MATLAB Function'
  real_T dy_h[3];                      // '<S284>/MATLAB Function'
  real_T y2y1;                         // '<S282>/y2-y1'
  real_T dy_c[3];                      // '<S276>/MATLAB Function'
  real_T dy_d[3];                      // '<S274>/MATLAB Function'
  real_T y2y1_o;                       // '<S272>/y2-y1'
  real_T dy_p[3];                      // '<S266>/MATLAB Function'
  real_T dy_g[3];                      // '<S264>/MATLAB Function'
  real_T y;                            // '<S262>/MATLAB Function'
  real_T u_next;                       // '<S262>/MATLAB Function'
  real_T y2y1_ob;                      // '<S253>/y2-y1'
  real_T In1_g20;                      // '<S241>/In1'
  real_T Merge_k[6];                   // '<S213>/Merge'
  real_T Merge_b[3];                   // '<S216>/Merge'
  real32_T UDPReceive_o1[4];           // '<S291>/UDP Receive'
  real32_T UDPReceive_o1_a[4];         // '<S289>/UDP Receive'
  uint8_T StringtoASCII[31];           // '<S210>/String to ASCII'
  uint8_T StringtoASCII2[31];          // '<S209>/String to ASCII2'
  uint8_T StringtoASCII1[31];          // '<S208>/String to ASCII1'
  B_ChangeBLACKBehavior_GNC20_m_T ChangeREDBehavior_h;// '<S18>/Change RED Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLUEBehavior_e;// '<S18>/Change BLUE Behavior' 
  B_ChangeBLACKBehavior_GNC20_m_T ChangeBLACKBehavior_i;// '<S18>/Change BLACK Behavior' 
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S300>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S300>/Pseudoinverse1'
  B_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S300>/Pseudoinverse1'
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_l1;// '<S280>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S279>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_d;// '<S270>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S269>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_h_T EnabledSubsystem_g;// '<S251>/Enabled Subsystem' 
  B_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S250>/Enabled Subsystem'
};

// Block states (default storage) for system '<Root>'
struct DW_GNC2026W_T {
  Dynamixel_Controller_GNC2026W_T obj;
  // '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  GPIO_Write_GNC2026W_T obj_l;         // '<S211>/GPIO Write1'
  ReadArm_Position_Rates_GNC202_T obj_d;
                     // '<S212>/Read Joint Positions using  Dynamixel Encoders'
  IdentifyPlatform_GNC2026W_T obj_dk;  // '<S288>/WhoAmI'
  CustomDataLogger_GNC2026W_T obj_f;   // '<S204>/MATLAB System'
  real_T Delay_DSTATE;                 // '<S323>/Delay'
  real_T Delay_DSTATE_k;               // '<S311>/Delay'
  real_T Delay_DSTATE_kz;              // '<S299>/Delay'
  real_T Delay2_DSTATE;                // '<S248>/Delay2'
  real_T Delay1_DSTATE;                // '<S248>/Delay1'
  real_T Delay1_DSTATE_g[3];           // '<S251>/Delay1'
  real_T Delay1_DSTATE_b[3];           // '<S250>/Delay1'
  real_T Delay_DSTATE_h;               // '<S262>/Delay'
  real_T Delay1_DSTATE_f;              // '<S262>/Delay1'
  real_T Delay2_DSTATE_l;              // '<S268>/Delay2'
  real_T Delay1_DSTATE_l;              // '<S268>/Delay1'
  real_T Delay1_DSTATE_m[3];           // '<S270>/Delay1'
  real_T Delay1_DSTATE_lv[3];          // '<S269>/Delay1'
  real_T Delay2_DSTATE_l0;             // '<S278>/Delay2'
  real_T Delay1_DSTATE_ld;             // '<S278>/Delay1'
  real_T Delay1_DSTATE_c[3];           // '<S280>/Delay1'
  real_T Delay1_DSTATE_cq[3];          // '<S279>/Delay1'
  real_T Delay_DSTATE_c;               // '<S220>/Delay'
  real_T Delay1_DSTATE_g0;             // '<S220>/Delay1'
  real_T Delay_DSTATE_j;               // '<S225>/Delay'
  real_T Delay1_DSTATE_d;              // '<S225>/Delay1'
  real_T UnitDelay1_DSTATE[6];         // '<S216>/Unit Delay1'
  real_T Delay_DSTATE_b;               // '<S232>/Delay'
  real_T Delay1_DSTATE_a;              // '<S232>/Delay1'
  real_T UnitDelay2_DSTATE[36];        // '<S216>/Unit Delay2'
  real_T Delay_DSTATE_o;               // '<S212>/Delay'
  real_T Delay1_DSTATE_cg;             // '<S212>/Delay1'
  real_T Delay2_DSTATE_h;              // '<S212>/Delay2'
  real_T UD_DSTATE;                    // '<S183>/UD'
  real_T UD_DSTATE_e;                  // '<S184>/UD'
  real_T UD_DSTATE_a;                  // '<S185>/UD'
  real_T UD_DSTATE_l;                  // '<S169>/UD'
  real_T UD_DSTATE_k;                  // '<S170>/UD'
  real_T UD_DSTATE_h;                  // '<S171>/UD'
  real_T UD_DSTATE_o;                  // '<S192>/UD'
  real_T UD_DSTATE_n;                  // '<S193>/UD'
  real_T UD_DSTATE_hu;                 // '<S194>/UD'
  real_T UD_DSTATE_j;                  // '<S164>/UD'
  real_T UD_DSTATE_c;                  // '<S165>/UD'
  real_T UD_DSTATE_d;                  // '<S166>/UD'
  real_T UD_DSTATE_eh;                 // '<S187>/UD'
  real_T UD_DSTATE_hv;                 // '<S188>/UD'
  real_T UD_DSTATE_kv;                 // '<S189>/UD'
  real_T Delay_DSTATE_l;               // '<S160>/Delay'
  real_T Delay1_DSTATE_ba;             // '<S160>/Delay1'
  real_T Delay_DSTATE_c5;              // '<S159>/Delay'
  real_T Delay1_DSTATE_ag;             // '<S159>/Delay1'
  real_T UD_DSTATE_aq;                 // '<S174>/UD'
  real_T UD_DSTATE_p;                  // '<S175>/UD'
  real_T UD_DSTATE_pr;                 // '<S176>/UD'
  real_T UD_DSTATE_eg;                 // '<S197>/UD'
  real_T UD_DSTATE_cd;                 // '<S198>/UD'
  real_T UD_DSTATE_hd;                 // '<S199>/UD'
  real_T Delay_DSTATE_h0;              // '<S137>/Delay'
  real_T Delay1_DSTATE_lo;             // '<S137>/Delay1'
  creal_T q;                           // '<S215>/MEKF'
  real_T NextOutput;                   // '<Root>/Gaussian Noise'
  real_T UDPSend_NetworkLib[137];      // '<S17>/UDP Send'
  real_T L0;                           // '<Root>/Data Store Memory'
  real_T RED_desired[9];               // '<Root>/Data Store Memory1'
  real_T thRel;                        // '<Root>/Data Store Memory2'
  real_T lambda[3];                    // '<Root>/Data Store Memory3'
  real_T lambdaFirstOrder[3];          // '<Root>/Data Store Memory4'
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
  real_T filterConfidence;             // '<Root>/Universal_Time40'
  real_T BLUE_Saturated_Controls[3];   // '<Root>/Universal_Time6'
  real_T ARM_Desired_States[3];        // '<Root>/Universal_Time8'
  real_T VIS_Confidence;               // '<Root>/Universal_Time9'
  real_T UDPSend_NetworkLib_m[137];    // '<S293>/UDP Send'
  real_T UDPReceive_NetworkLib[137];   // '<S291>/UDP Receive'
  real_T UDPReceive_NetworkLib_i[137]; // '<S289>/UDP Receive'
  real_T ReceivePhaseSpaceData_NetworkLi[137];// '<S236>/Receive PhaseSpace Data' 
  real_T UDPReceiveREDClock_NetworkLib[137];// '<S240>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_NetworkLib[137];// '<S240>/UDP Receive (BLACK Clock)' 
  real_T UDPReceiveBLUEClock_NetworkLib[137];// '<S240>/UDP Receive (BLUE Clock)' 
  real_T k;                            // '<S249>/Sample and Hold'
  real_T y_hold[3];                    // '<S249>/Sample and Hold'
  real_T k_h;                          // '<S255>/MATLAB Function1'
  real_T x[6];                         // '<S214>/EKF'
  real_T P[36];                        // '<S214>/EKF'
  real_T theta;                        // '<S214>/EKF'
  real_T theta_prev;                   // '<S214>/EKF'
  real_T x_m[5];                       // '<S215>/MEKF'
  real_T P_h[36];                      // '<S215>/MEKF'
  real_T theta_prev_a;                 // '<S215>/MEKF'
  real_T theta_cont;                   // '<S215>/MEKF'
  real_T converge;                     // '<S216>/Unscented Kalman Filter'
  real_T k_i;                          // '<S216>/Unscented Kalman Filter'
  real_T UDPSend3_NetworkLib[137];     // '<S210>/UDP Send3'
  real_T UDPSend2_NetworkLib[137];     // '<S209>/UDP Send2'
  real_T UDPSend1_NetworkLib[137];     // '<S208>/UDP Send1'
  real_T l1;                           // '<S144>/MATLAB Function2'
  real_T l2;                           // '<S144>/MATLAB Function2'
  real_T x_k[3];                       // '<S144>/MATLAB Function2'
  real_T P_i[9];                       // '<S144>/MATLAB Function2'
  real_T counter;                      // '<S57>/First Fit Detector'
  real_T firstfit;                     // '<S57>/First Fit Detector'
  real_T prev;                         // '<S57>/First Fit Detector'
  real_T phase;                        // '<S57>/First Fit Detector'
  char_T RED_Logger[256];              // '<Root>/RED_Tz3'
  char_T BLACK_Logger[256];            // '<Root>/RED_Tz4'
  char_T BLUE_Logger[256];             // '<Root>/RED_Tz5'
  comm_internal_BernoulliBinary_T obj_fv;// '<Root>/Dropped Frames'
  uint32_T RandSeed;                   // '<Root>/Gaussian Noise'
  uint32_T method;                     // '<S249>/CV Noise'
  uint32_T state;                      // '<S249>/CV Noise'
  uint32_T state_g[2];                 // '<S249>/CV Noise'
  uint32_T state_j[625];               // '<S249>/CV Noise'
  uint32_T method_e;                   // '<Root>/Dropped Frames'
  uint32_T state_d[625];               // '<Root>/Dropped Frames'
  uint32_T state_jw[2];                // '<Root>/Dropped Frames'
  uint32_T state_b;                    // '<Root>/Dropped Frames'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S18>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_b;
    // '<S18>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_c;
    // '<S18>/This IF block determines whether or not to run the RED sim//exp '
  int8_T ThisIFblockdetermineswhether_ch;
  // '<S244>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhether_cs;
  // '<S244>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_d;
  // '<S244>/This IF block determines whether or not to run the RED sim//exp '
  boolean_T k_not_empty;               // '<S249>/Sample and Hold'
  boolean_T initial_theta;             // '<S214>/EKF'
  boolean_T x_not_empty;               // '<S144>/MATLAB Function2'
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeREDBehavior_h;// '<S18>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLUEBehavior_e;// '<S18>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_g_T ChangeBLACKBehavior_i;// '<S18>/Change BLACK Behavior' 
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_pn;// '<S300>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1_p;// '<S300>/Pseudoinverse1'
  DW_Pseudoinverse1_GNC2026W_T Pseudoinverse1;// '<S300>/Pseudoinverse1'
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_l1;// '<S280>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S279>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_d;// '<S270>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S269>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026_c_T EnabledSubsystem_g;// '<S251>/Enabled Subsystem' 
  DW_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S250>/Enabled Subsystem'
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeREDBehavior_d;// '<S244>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLUEBehavior_f;// '<S244>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_GNC2_l_T ChangeBLACKBehavior_e;// '<S244>/Change BLACK Behavior' 
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

// Parameters for system: '<S57>/If Action Subsystem'
struct P_IfActionSubsystem_GNC2026W_T_ {
  real_T Constant_Value;               // Expression: 2
                                          //  Referenced by: '<S74>/Constant'

  real_T Constant1_Value;              // Expression: 2
                                          //  Referenced by: '<S74>/Constant1'

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
                                          //  Referenced by: '<S115>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S115>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S115>/Constant2'

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
                                          //  Referenced by: '<S201>/Constant1'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S201>/UDP Send'

};

// Parameters for system: '<S244>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_p_T_ {
  int32_T UDPSendGUI_Port;             // Computed Parameter: UDPSendGUI_Port
                                          //  Referenced by: '<S245>/UDP Send (GUI)'

};

// Parameters for system: '<S250>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S264>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S264>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S264>/Delay'

};

// Parameters for system: '<S251>/Enabled Subsystem'
struct P_EnabledSubsystem_GNC2026W_c_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S266>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S266>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S266>/Delay'

};

// Parameters for system: '<S18>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_GNC20_b_T_ {
  int32_T UDPSendClock_Port;           // Computed Parameter: UDPSendClock_Port
                                          //  Referenced by: '<S333>/UDP Send (Clock)'

};

// Parameters (default storage)
struct P_GNC2026W_T_ {
  real_T A_c[9];                       // Variable: A_c
                                          //  Referenced by: '<S144>/Constant7'

  real_T CVrate;                       // Variable: CVrate
                                          //  Referenced by:
                                          //    '<S214>/EKF'
                                          //    '<S215>/MEKF'
                                          //    '<S216>/Unscented Kalman Filter'
                                          //    '<S249>/Sample and Hold'

  real_T F_red_X_nominal;              // Variable: F_red_X_nominal
                                          //  Referenced by:
                                          //    '<S297>/MATLAB Function5'
                                          //    '<S309>/MATLAB Function5'
                                          //    '<S321>/MATLAB Function5'

  real_T F_red_Y_nominal;              // Variable: F_red_Y_nominal
                                          //  Referenced by:
                                          //    '<S297>/MATLAB Function5'
                                          //    '<S309>/MATLAB Function5'
                                          //    '<S321>/MATLAB Function5'

  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by: '<S300>/MATLAB Function'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by: '<S312>/MATLAB Function'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by: '<S324>/MATLAB Function'

  real_T F_u[3];                       // Variable: F_u
                                          //  Referenced by: '<S144>/Constant3'

  real_T K_BLACK[18];                  // Variable: K_BLACK
                                          //  Referenced by: '<S145>/Constant2'

  real_T K_BLUE[18];                   // Variable: K_BLUE
                                          //  Referenced by: '<S146>/Constant2'

  real_T K_RED[18];                    // Variable: K_RED
                                          //  Referenced by: '<S147>/Constant2'

  real_T Kd_elarm;                     // Variable: Kd_elarm
                                          //  Referenced by: '<S180>/kd_elarm'

  real_T Kd_sharm;                     // Variable: Kd_sharm
                                          //  Referenced by: '<S181>/kd_sharm'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by: '<S149>/Gain5'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by: '<S150>/Gain5'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by: '<S151>/Gain5'

  real_T Kd_wrarm;                     // Variable: Kd_wrarm
                                          //  Referenced by: '<S182>/kd_wrarm'

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
                                          //  Referenced by: '<S180>/kp_elarm'

  real_T Kp_sharm;                     // Variable: Kp_sharm
                                          //  Referenced by: '<S181>/kp_sharm'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by: '<S149>/Gain2'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by: '<S150>/Gain2'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by: '<S151>/Gain2'

  real_T Kp_wrarm;                     // Variable: Kp_wrarm
                                          //  Referenced by: '<S182>/kp_wrarm'

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
                                          //  Referenced by: '<S144>/MATLAB Function3'

  real_T PWMFreq;                      // Variable: PWMFreq
                                          //  Referenced by:
                                          //    '<S17>/PWM Frequency'
                                          //    '<S297>/MATLAB Function1'
                                          //    '<S309>/MATLAB Function1'
                                          //    '<S321>/MATLAB Function8'
                                          //    '<S299>/Constant1'
                                          //    '<S311>/Constant1'
                                          //    '<S323>/Constant1'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<S1>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<S1>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by:
                                          //    '<S1>/Constant1'
                                          //    '<S45>/Constant2'
                                          //    '<S65>/Constant2'
                                          //    '<S91>/Constant2'
                                          //    '<S95>/Constant2'
                                          //    '<S107>/Constant2'
                                          //    '<S111>/Constant2'
                                          //    '<S41>/Constant1'
                                          //    '<S42>/Constant1'
                                          //    '<S43>/Constant1'
                                          //    '<S61>/Constant1'
                                          //    '<S62>/Constant1'
                                          //    '<S63>/Constant1'
                                          //    '<S87>/Constant1'
                                          //    '<S88>/Constant1'
                                          //    '<S89>/Constant1'
                                          //    '<S105>/Constant1'

  real_T Phase3_End;                   // Variable: Phase3_End
                                          //  Referenced by: '<S1>/Constant2'

  real_T Phase3_SubPhase1_End;         // Variable: Phase3_SubPhase1_End
                                          //  Referenced by:
                                          //    '<S9>/Constant4'
                                          //    '<S22>/Constant4'

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
                                          //  Referenced by: '<S216>/Unscented Kalman Filter'

  real_T Tz_lim_elarm;                 // Variable: Tz_lim_elarm
                                          //  Referenced by: '<S179>/Saturation1'

  real_T Tz_lim_sharm;                 // Variable: Tz_lim_sharm
                                          //  Referenced by: '<S179>/Saturation'

  real_T Tz_lim_wrarm;                 // Variable: Tz_lim_wrarm
                                          //  Referenced by: '<S179>/Saturation3'

  real_T VISinLoop;                    // Variable: VISinLoop
                                          //  Referenced by:
                                          //    '<S289>/Constant'
                                          //    '<S216>/Constant'
                                          //    '<S249>/Constant'

  real_T X1_blk;                       // Variable: X1_blk
                                          //  Referenced by: '<S39>/Desired X-Position (BLACK)'

  real_T X2_blk;                       // Variable: X2_blk
                                          //  Referenced by: '<S59>/Desired X-Position (BLACK)'

  real_T X3_blk;                       // Variable: X3_blk
                                          //  Referenced by: '<S85>/Desired X-Position (BLACK)'

  real_T Y1_blk;                       // Variable: Y1_blk
                                          //  Referenced by: '<S39>/Desired Y-Position (BLACK)'

  real_T Y2_blk;                       // Variable: Y2_blk
                                          //  Referenced by: '<S59>/Desired Y-Position (BLACK)'

  real_T Y3_blk;                       // Variable: Y3_blk
                                          //  Referenced by: '<S85>/Desired Y-Position (BLACK)'

  real_T a;                            // Variable: a
                                          //  Referenced by: '<S216>/Unscented Kalman Filter'

  real_T alpha;                        // Variable: alpha
                                          //  Referenced by: '<S144>/MATLAB Function3'

  real_T b;                            // Variable: b
                                          //  Referenced by: '<S216>/Unscented Kalman Filter'

  real_T baseRate;                     // Variable: baseRate
                                          //  Referenced by:
                                          //    '<S144>/MATLAB Function2'
                                          //    '<S212>/Read Joint Positions using  Dynamixel Encoders'
                                          //    '<S288>/WhoAmI'
                                          //    '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
                                          //    '<S214>/EKF'
                                          //    '<S215>/MEKF'
                                          //    '<S216>/Unscented Kalman Filter'
                                          //    '<S249>/Sample and Hold'
                                          //    '<S255>/MATLAB Function1'

  real_T dataRate;                     // Variable: dataRate
                                          //  Referenced by:
                                          //    '<S248>/Constant'
                                          //    '<S268>/Constant'
                                          //    '<S278>/Constant'

  real_T dt;                           // Variable: dt
                                          //  Referenced by: '<S216>/Unscented Kalman Filter'

  real_T fNum;                         // Variable: fNum
                                          //  Referenced by: '<S213>/Constant'

  real_T gamma[9];                     // Variable: gamma
                                          //  Referenced by: '<S144>/MATLAB Function3'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S116>/Desired States (BLACK)'
                                          //    '<S120>/Desired States (BLACK)'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S117>/Desired States (BLUE)'
                                          //    '<S121>/Desired States (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S118>/Constant2'
                                          //    '<S122>/Constant2'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S27>/Desired States (BLACK)'
                                          //    '<S137>/Delay'
                                          //    '<S137>/Delay1'
                                          //    '<S220>/Delay'
                                          //    '<S220>/Delay1'
                                          //    '<S225>/Delay'
                                          //    '<S225>/Delay1'
                                          //    '<S232>/Delay'
                                          //    '<S232>/Delay1'
                                          //    '<S262>/Delay'
                                          //    '<S262>/Delay1'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by: '<S28>/Desired States (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S29>/Constant2'
                                          //    '<S159>/Delay'
                                          //    '<S159>/Delay1'
                                          //    '<S37>/Constant2'
                                          //    '<S56>/Constant2'
                                          //    '<S160>/Delay'
                                          //    '<S160>/Delay1'

  real_T k;                            // Variable: k
                                          //  Referenced by: '<S216>/Unscented Kalman Filter'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S240>/MATLAB Function'

  real_T sep1;                         // Variable: sep1
                                          //  Referenced by: '<S37>/Separation'

  real_T sep2;                         // Variable: sep2
                                          //  Referenced by: '<S56>/Separation'

  real_T sep3;                         // Variable: sep3
                                          //  Referenced by: '<S83>/Separation'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by: '<S16>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by: '<S300>/MATLAB Function'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by: '<S312>/MATLAB Function'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S297>/MATLAB Function5'
                                          //    '<S309>/MATLAB Function5'
                                          //    '<S321>/MATLAB Function5'
                                          //    '<S324>/MATLAB Function'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by:
                                          //    '<S100>/Desired X-Position (BLACK)'
                                          //    '<S44>/Constant1'
                                          //    '<S64>/Constant1'
                                          //    '<S90>/Constant1'
                                          //    '<S94>/Constant1'
                                          //    '<S106>/Constant1'
                                          //    '<S110>/Constant1'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by:
                                          //    '<S100>/Desired Y-Position (BLACK)'
                                          //    '<S44>/Constant2'
                                          //    '<S64>/Constant2'
                                          //    '<S90>/Constant2'
                                          //    '<S94>/Constant2'
                                          //    '<S106>/Constant2'
                                          //    '<S110>/Constant2'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S197>/UD'

  real_T DiscreteDerivative1_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative1_ICPrevScale
                                 //  Referenced by: '<S198>/UD'

  real_T DiscreteDerivative2_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative2_ICPrevScale
                                 //  Referenced by: '<S199>/UD'

  real_T DiscreteDerivative_ICPrevScal_i;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                 //  Referenced by: '<S174>/UD'

  real_T DiscreteDerivative1_ICPrevSca_e;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
                                 //  Referenced by: '<S175>/UD'

  real_T DiscreteDerivative2_ICPrevSca_o;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                 //  Referenced by: '<S176>/UD'

  real_T DiscreteDerivative_ICPrevScal_p;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_p
                                 //  Referenced by: '<S187>/UD'

  real_T DiscreteDerivative1_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
                                 //  Referenced by: '<S188>/UD'

  real_T DiscreteDerivative2_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
                                 //  Referenced by: '<S189>/UD'

  real_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S164>/UD'

  real_T DiscreteDerivative1_ICPrevSca_i;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
                                 //  Referenced by: '<S165>/UD'

  real_T DiscreteDerivative2_ICPrevSc_oo;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
                                 //  Referenced by: '<S166>/UD'

  real_T DiscreteDerivative_ICPrevSca_pf;
                              // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
                                 //  Referenced by: '<S192>/UD'

  real_T DiscreteDerivative1_ICPrevSca_l;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
                                 //  Referenced by: '<S193>/UD'

  real_T DiscreteDerivative2_ICPrevSc_on;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
                                 //  Referenced by: '<S194>/UD'

  real_T DiscreteDerivative_ICPrevScal_n;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_n
                                 //  Referenced by: '<S169>/UD'

  real_T DiscreteDerivative1_ICPrevSca_f;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
                                 //  Referenced by: '<S170>/UD'

  real_T DiscreteDerivative2_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                 //  Referenced by: '<S171>/UD'

  real_T DiscreteDerivative1_ICPrevSca_j;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
                                 //  Referenced by: '<S183>/UD'

  real_T DiscreteDerivative1_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
                                 //  Referenced by: '<S184>/UD'

  real_T DiscreteDerivative1_ICPrevSca_k;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
                                 //  Referenced by: '<S185>/UD'

  real_T MATLABFunction5_max_iters; // Mask Parameter: MATLABFunction5_max_iters
                                       //  Referenced by: '<S297>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_b;
                                  // Mask Parameter: MATLABFunction5_max_iters_b
                                     //  Referenced by: '<S309>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_e;
                                  // Mask Parameter: MATLABFunction5_max_iters_e
                                     //  Referenced by: '<S321>/MATLAB Function5'

  real_T MATLABFunction5_tol;          // Mask Parameter: MATLABFunction5_tol
                                          //  Referenced by: '<S297>/MATLAB Function5'

  real_T MATLABFunction5_tol_j;        // Mask Parameter: MATLABFunction5_tol_j
                                          //  Referenced by: '<S309>/MATLAB Function5'

  real_T MATLABFunction5_tol_g;        // Mask Parameter: MATLABFunction5_tol_g
                                          //  Referenced by: '<S321>/MATLAB Function5'

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
                                          //  Referenced by: '<S80>/Constant3'

  real_T Constant1_Value_p;            // Expression: pi/2
                                          //  Referenced by: '<S80>/Constant1'

  real_T Constant2_Value_c;            // Expression: 0
                                          //  Referenced by: '<S80>/Constant2'

  real_T DesiredRate_Value_l;          // Expression: 0.03490659
                                          //  Referenced by: '<S82>/Desired Rate '

  real_T Gain_Gain_b;                  // Expression: -0.85
                                          //  Referenced by: '<S90>/Gain'

  real_T Gain1_Gain_k;                 // Expression: -0.85
                                          //  Referenced by: '<S90>/Gain1'

  real_T Constant1_Value_g;            // Expression: 0.01
                                          //  Referenced by: '<S85>/Constant1'

  real_T Constant_Value_d;             // Expression: 0.005
                                          //  Referenced by: '<S85>/Constant'

  real_T DesiredRateBLACK_Value_kf;    // Expression: 0.03490659
                                          //  Referenced by: '<S84>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_d;          // Expression: 0.03490659
                                          //  Referenced by: '<S83>/Desired Rate '

  real_T Gain_Gain_ho;                 // Expression: 0.85
                                          //  Referenced by: '<S94>/Gain'

  real_T Gain1_Gain_d;                 // Expression: 0.85
                                          //  Referenced by: '<S94>/Gain1'

  real_T Constant_Value_h;             // Expression: pi+0.01
                                          //  Referenced by: '<S83>/Constant'

  real_T Constant_Value_a;             // Expression: 0.3
                                          //  Referenced by: '<S96>/Constant'

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
                                          //  Referenced by: '<S99>/Constant3'

  real_T Constant1_Value_b;            // Expression: 0
                                          //  Referenced by: '<S99>/Constant1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S99>/Constant2'

  real_T DesiredRate_Value_ha;         // Expression: 0.03490659
                                          //  Referenced by: '<S101>/Desired Rate '

  real_T Gain_Gain_o;                  // Expression: -0.85
                                          //  Referenced by: '<S106>/Gain'

  real_T Gain1_Gain_b;                 // Expression: -0.85
                                          //  Referenced by: '<S106>/Gain1'

  real_T DesiredRateBLACK_Value_i;     // Expression: 0.03490659
                                          //  Referenced by: '<S103>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_n;          // Expression: 0.03490659
                                          //  Referenced by: '<S102>/Desired Rate '

  real_T Gain_Gain_ox;                 // Expression: 0.85
                                          //  Referenced by: '<S110>/Gain'

  real_T Gain1_Gain_e;                 // Expression: 0.85
                                          //  Referenced by: '<S110>/Gain1'

  real_T Constant_Value_h1;            // Expression: pi+0.01
                                          //  Referenced by: '<S102>/Constant'

  real_T Separation_Value;             // Expression: 0.30
                                          //  Referenced by: '<S102>/Separation'

  real_T Constant_Value_c;             // Expression: 0.3
                                          //  Referenced by: '<S112>/Constant'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S197>/TSamp'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                          //  Referenced by: '<S198>/TSamp'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                          //  Referenced by: '<S199>/TSamp'

  real_T Gain6_Gain;                   // Expression: -1
                                          //  Referenced by: '<S151>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                          //  Referenced by: '<S151>/Gain7'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S151>/Gain8'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                          //  Referenced by: '<S174>/TSamp'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                          //  Referenced by: '<S175>/TSamp'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                          //  Referenced by: '<S176>/TSamp'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S187>/TSamp'

  real_T TSamp_WtEt_hr;                // Computed Parameter: TSamp_WtEt_hr
                                          //  Referenced by: '<S188>/TSamp'

  real_T TSamp_WtEt_ca;                // Computed Parameter: TSamp_WtEt_ca
                                          //  Referenced by: '<S189>/TSamp'

  real_T Gain6_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S149>/Gain6'

  real_T Gain7_Gain_b;                 // Expression: -1
                                          //  Referenced by: '<S149>/Gain7'

  real_T Gain8_Gain_m;                 // Expression: -1
                                          //  Referenced by: '<S149>/Gain8'

  real_T TSamp_WtEt_nd;                // Computed Parameter: TSamp_WtEt_nd
                                          //  Referenced by: '<S164>/TSamp'

  real_T TSamp_WtEt_co;                // Computed Parameter: TSamp_WtEt_co
                                          //  Referenced by: '<S165>/TSamp'

  real_T TSamp_WtEt_no;                // Computed Parameter: TSamp_WtEt_no
                                          //  Referenced by: '<S166>/TSamp'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                          //  Referenced by: '<S192>/TSamp'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                          //  Referenced by: '<S193>/TSamp'

  real_T TSamp_WtEt_px;                // Computed Parameter: TSamp_WtEt_px
                                          //  Referenced by: '<S194>/TSamp'

  real_T Gain6_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S150>/Gain6'

  real_T Gain7_Gain_e;                 // Expression: -1
                                          //  Referenced by: '<S150>/Gain7'

  real_T Gain8_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S150>/Gain8'

  real_T TSamp_WtEt_ft;                // Computed Parameter: TSamp_WtEt_ft
                                          //  Referenced by: '<S169>/TSamp'

  real_T TSamp_WtEt_eh;                // Computed Parameter: TSamp_WtEt_eh
                                          //  Referenced by: '<S170>/TSamp'

  real_T TSamp_WtEt_ii;                // Computed Parameter: TSamp_WtEt_ii
                                          //  Referenced by: '<S171>/TSamp'

  real_T TSamp_WtEt_pu;                // Computed Parameter: TSamp_WtEt_pu
                                          //  Referenced by: '<S183>/TSamp'

  real_T TSamp_WtEt_f0;                // Computed Parameter: TSamp_WtEt_f0
                                          //  Referenced by: '<S184>/TSamp'

  real_T TSamp_WtEt_nz;                // Computed Parameter: TSamp_WtEt_nz
                                          //  Referenced by: '<S185>/TSamp'

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
                                          //  Referenced by: '<S211>/GPIO Write1'

  real_T GPIOWrite1_pinDirection;      // Expression: 1
                                          //  Referenced by: '<S211>/GPIO Write1'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S212>/Delay'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S212>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S212>/Delay2'

  real_T UnitDelay1_InitialCondition[6];// Expression: zeros(6,1)
                                           //  Referenced by: '<S216>/Unit Delay1'

  real_T Merge_InitialOutput;         // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S216>/Merge'

  real_T UnitDelay2_InitialCondition[36];
                                   // Expression: diag([1, 1, 0.05, 1, 1, 0.05])
                                      //  Referenced by: '<S216>/Unit Delay2'

  real_T Merge_InitialOutput_b;     // Computed Parameter: Merge_InitialOutput_b
                                       //  Referenced by: '<S213>/Merge'

  real_T UniversalTime_Y0;             // Computed Parameter: UniversalTime_Y0
                                          //  Referenced by: '<S241>/Universal Time'

  real_T dytdt_Y0;                     // Computed Parameter: dytdt_Y0
                                          //  Referenced by: '<S253>/dy(t)//dt'

  real_T dytdt_Y0_j;                   // Computed Parameter: dytdt_Y0_j
                                          //  Referenced by: '<S272>/dy(t)//dt'

  real_T dytdt_Y0_d;                   // Computed Parameter: dytdt_Y0_d
                                          //  Referenced by: '<S282>/dy(t)//dt'

  real_T ConvertBLAXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S237>/Convert BLAX from [mm] to [m]'

  real_T ConvertBLAYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S237>/Convert BLAY from [mm] to [m]'

  real_T ConvertBLACKVXfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S237>/Convert BLACKVX from [mm] to [m]'

  real_T ConvertBLACKVYfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S237>/Convert BLACKVY from [mm] to [m]'

  real_T Delay2_InitialCondition_e;    // Expression: 0
                                          //  Referenced by: '<S248>/Delay2'

  real_T Delay1_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S248>/Delay1'

  real_T Constant3_Value_eq;           // Expression: 0
                                          //  Referenced by: '<S248>/Constant3'

  real_T Delay1_InitialCondition_i;    // Expression: 0.0
                                          //  Referenced by: '<S251>/Delay1'

  real_T Constant3_Value_a;            // Expression: 0
                                          //  Referenced by: '<S251>/Constant3'

  real_T Delay1_InitialCondition_it;   // Expression: 0.0
                                          //  Referenced by: '<S250>/Delay1'

  real_T Constant3_Value_d;            // Expression: 0
                                          //  Referenced by: '<S250>/Constant3'

  real_T ConvertBLUXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S238>/Convert BLUX from [mm] to [m]'

  real_T ConvertBLUYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S238>/Convert BLUY from [mm] to [m]'

  real_T ConvertBLUEVXfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S238>/Convert BLUEVX from [mm] to [m]'

  real_T ConvertBLUEVYfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S238>/Convert BLUEVY from [mm] to [m]'

  real_T Delay2_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S268>/Delay2'

  real_T Delay1_InitialCondition_i3;   // Expression: 0
                                          //  Referenced by: '<S268>/Delay1'

  real_T Constant3_Value_o;            // Expression: 0
                                          //  Referenced by: '<S268>/Constant3'

  real_T Delay1_InitialCondition_h;    // Expression: 0.0
                                          //  Referenced by: '<S270>/Delay1'

  real_T Constant3_Value_c;            // Expression: 0
                                          //  Referenced by: '<S270>/Constant3'

  real_T Delay1_InitialCondition_j;    // Expression: 0.0
                                          //  Referenced by: '<S269>/Delay1'

  real_T Constant3_Value_ke;           // Expression: 0
                                          //  Referenced by: '<S269>/Constant3'

  real_T ConvertREDXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S239>/Convert REDX from [mm] to [m]'

  real_T ConvertREDYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S239>/Convert REDY from [mm] to [m]'

  real_T ConvertREDVXfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S239>/Convert REDVX from [mm] to [m]'

  real_T ConvertREDVYfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S239>/Convert REDVY from [mm] to [m]'

  real_T Delay2_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S278>/Delay2'

  real_T Delay1_InitialCondition_l;    // Expression: 0
                                          //  Referenced by: '<S278>/Delay1'

  real_T Constant3_Value_f;            // Expression: 0
                                          //  Referenced by: '<S278>/Constant3'

  real_T Delay1_InitialCondition_k;    // Expression: 0.0
                                          //  Referenced by: '<S280>/Delay1'

  real_T Constant3_Value_dh;           // Expression: 0
                                          //  Referenced by: '<S280>/Constant3'

  real_T Delay1_InitialCondition_c;    // Expression: 0.0
                                          //  Referenced by: '<S279>/Delay1'

  real_T Constant3_Value_dz;           // Expression: 0
                                          //  Referenced by: '<S279>/Constant3'

  real_T Constant_Value_i;             // Expression: 1
                                          //  Referenced by: '<S240>/Constant'

  real_T Gain_Gain_k;                  // Expression: -1
                                          //  Referenced by: '<S289>/Gain'

  real_T ControlDynamixelActuatorsineith;// Expression: 400
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_b;// Expression: 0
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_h;// Expression: 200
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_j;// Expression: 3072
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_m;// Expression: 1024
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_hy;// Expression: 0
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_i;// Expression: 850
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_g;// Expression: 400
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_g3;// Expression: 100
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_bf;// Expression: 20
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_l;// Expression: 0
                                            //  Referenced by: '<S292>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S304>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S305>/Out1'

  real_T BLACKDC_Y0;                   // Computed Parameter: BLACKDC_Y0
                                          //  Referenced by: '<S294>/BLACK DC'

  real_T Delay_InitialCondition_i;     // Expression: 0.0
                                          //  Referenced by: '<S299>/Delay'

  real_T Constant2_Value_h;            // Expression: 0
                                          //  Referenced by: '<S299>/Constant2'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S316>/Out1'

  real_T Out1_Y0_js;                   // Computed Parameter: Out1_Y0_js
                                          //  Referenced by: '<S317>/Out1'

  real_T BLUEDC_Y0;                    // Computed Parameter: BLUEDC_Y0
                                          //  Referenced by: '<S295>/BLUE DC'

  real_T Delay_InitialCondition_n;     // Expression: 0.0
                                          //  Referenced by: '<S311>/Delay'

  real_T Constant2_Value_fq;           // Expression: 0
                                          //  Referenced by: '<S311>/Constant2'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S328>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S329>/Out1'

  real_T REDDC_Y0;                     // Computed Parameter: REDDC_Y0
                                          //  Referenced by: '<S296>/RED DC'

  real_T Delay_InitialCondition_p;     // Expression: 0.0
                                          //  Referenced by: '<S323>/Delay'

  real_T Constant2_Value_e;            // Expression: 0
                                          //  Referenced by: '<S323>/Constant2'

  real_T Universal_Time1_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time1'

  real_T Universal_Time12_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time12'

  real_T Universal_Time2_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time2'

  real_T Universal_Time39_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time39'

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

  real_T DataStoreMemory2_InitialValue;// Expression: 0
                                          //  Referenced by: '<Root>/Data Store Memory2'

  real_T DataStoreMemory3_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Data Store Memory3'

  real_T DataStoreMemory4_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Data Store Memory4'

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
                                          //  Referenced by: '<S208>/UDP Send1'

  int32_T UDPSend2_Port;               // Computed Parameter: UDPSend2_Port
                                          //  Referenced by: '<S209>/UDP Send2'

  int32_T UDPSend3_Port;               // Computed Parameter: UDPSend3_Port
                                          //  Referenced by: '<S210>/UDP Send3'

  int32_T ReceivePhaseSpaceData_Port;
                               // Computed Parameter: ReceivePhaseSpaceData_Port
                                  //  Referenced by: '<S236>/Receive PhaseSpace Data'

  int32_T UDPReceiveREDClock_Port;// Computed Parameter: UDPReceiveREDClock_Port
                                     //  Referenced by: '<S240>/UDP Receive (RED Clock)'

  int32_T UDPReceiveBLACKClock_Port;
                                // Computed Parameter: UDPReceiveBLACKClock_Port
                                   //  Referenced by: '<S240>/UDP Receive (BLACK Clock)'

  int32_T UDPReceiveBLUEClock_Port;
                                 // Computed Parameter: UDPReceiveBLUEClock_Port
                                    //  Referenced by: '<S240>/UDP Receive (BLUE Clock)'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S289>/UDP Receive'

  int32_T UDPReceive_Port_a;           // Computed Parameter: UDPReceive_Port_a
                                          //  Referenced by: '<S291>/UDP Receive'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S293>/UDP Send'

  int32_T UDPSend_Port_h;              // Computed Parameter: UDPSend_Port_h
                                          //  Referenced by: '<S17>/UDP Send'

  P_ChangeBLACKBehavior_GNC20_b_T ChangeREDBehavior_h;// '<S18>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLUEBehavior_e;// '<S18>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_b_T ChangeBLACKBehavior_i;// '<S18>/Change BLACK Behavior' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_l1;// '<S280>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_k;// '<S279>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_d;// '<S270>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem_l;// '<S269>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_c_T EnabledSubsystem_g;// '<S251>/Enabled Subsystem' 
  P_EnabledSubsystem_GNC2026W_T EnabledSubsystem;// '<S250>/Enabled Subsystem'
  P_ChangeBLACKBehavior_GNC20_p_T ChangeREDBehavior_d;// '<S244>/Change RED Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLUEBehavior_f;// '<S244>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_GNC20_p_T ChangeBLACKBehavior_e;// '<S244>/Change BLACK Behavior' 
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
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem5;// '<S57>/If Action Subsystem5' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem4;// '<S57>/If Action Subsystem4' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem3;// '<S57>/If Action Subsystem3' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem2;// '<S57>/If Action Subsystem2' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem1;// '<S57>/If Action Subsystem1' 
  P_IfActionSubsystem_GNC2026W_T IfActionSubsystem_a;// '<S57>/If Action Subsystem' 
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
//  Block '<S57>/Scope' : Unused code path elimination
//  Block '<S57>/Scope1' : Unused code path elimination
//  Block '<S126>/Scope2' : Unused code path elimination
//  Block '<S126>/Scope4' : Unused code path elimination
//  Block '<S144>/Scope' : Unused code path elimination
//  Block '<S144>/Scope1' : Unused code path elimination
//  Block '<S164>/Data Type Duplicate' : Unused code path elimination
//  Block '<S165>/Data Type Duplicate' : Unused code path elimination
//  Block '<S166>/Data Type Duplicate' : Unused code path elimination
//  Block '<S169>/Data Type Duplicate' : Unused code path elimination
//  Block '<S170>/Data Type Duplicate' : Unused code path elimination
//  Block '<S171>/Data Type Duplicate' : Unused code path elimination
//  Block '<S174>/Data Type Duplicate' : Unused code path elimination
//  Block '<S175>/Data Type Duplicate' : Unused code path elimination
//  Block '<S176>/Data Type Duplicate' : Unused code path elimination
//  Block '<S148>/Scope' : Unused code path elimination
//  Block '<S183>/Data Type Duplicate' : Unused code path elimination
//  Block '<S184>/Data Type Duplicate' : Unused code path elimination
//  Block '<S185>/Data Type Duplicate' : Unused code path elimination
//  Block '<S187>/Data Type Duplicate' : Unused code path elimination
//  Block '<S188>/Data Type Duplicate' : Unused code path elimination
//  Block '<S189>/Data Type Duplicate' : Unused code path elimination
//  Block '<S192>/Data Type Duplicate' : Unused code path elimination
//  Block '<S193>/Data Type Duplicate' : Unused code path elimination
//  Block '<S194>/Data Type Duplicate' : Unused code path elimination
//  Block '<S197>/Data Type Duplicate' : Unused code path elimination
//  Block '<S198>/Data Type Duplicate' : Unused code path elimination
//  Block '<S199>/Data Type Duplicate' : Unused code path elimination
//  Block '<S5>/Scope' : Unused code path elimination
//  Block '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' : Unused code path elimination
//  Block '<S214>/Scope' : Unused code path elimination
//  Block '<S213>/Scope1' : Unused code path elimination
//  Block '<S216>/Scope1' : Unused code path elimination
//  Block '<S216>/Scope2' : Unused code path elimination
//  Block '<S255>/Scope' : Unused code path elimination
//  Block '<S249>/Scope1' : Unused code path elimination
//  Block '<S249>/Scope2' : Unused code path elimination
//  Block '<S249>/Scope3' : Unused code path elimination
//  Block '<S208>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S209>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S210>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S236>/Reshape' : Reshape block reduction
//  Block '<S237>/Reshape' : Reshape block reduction
//  Block '<S238>/Reshape' : Reshape block reduction
//  Block '<S239>/Reshape' : Reshape block reduction


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
//  '<S13>'  : 'GNC2026W/Receive Data from Orin'
//  '<S14>'  : 'GNC2026W/Robotic  Arm Code'
//  '<S15>'  : 'GNC2026W/Send Data  to Orin'
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
//  '<S74>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem'
//  '<S75>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem1'
//  '<S76>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem2'
//  '<S77>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem3'
//  '<S78>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem4'
//  '<S79>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Red Control Logic/If Action Subsystem5'
//  '<S80>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Joint Angles RED'
//  '<S81>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK'
//  '<S82>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE'
//  '<S83>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED'
//  '<S84>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S85>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem'
//  '<S86>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Wrap'
//  '<S87>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S88>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem'
//  '<S89>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Subsystem/Subsystem1'
//  '<S90>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S91>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S92>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Wrap'
//  '<S93>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S94>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Circular Tracking'
//  '<S95>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S96>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Stand-off Distance'
//  '<S97>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Wrap'
//  '<S98>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S99>'  : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Joint Angles RED'
//  '<S100>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK'
//  '<S101>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE'
//  '<S102>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED'
//  '<S103>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired'
//  '<S104>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/Wrap'
//  '<S105>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S106>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Circular Tracking'
//  '<S107>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S108>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Wrap'
//  '<S109>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S110>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Circular Tracking'
//  '<S111>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S112>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Stand-off Distance'
//  '<S113>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Wrap'
//  '<S114>' : 'GNC2026W/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S115>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Joint Angles RED'
//  '<S116>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLACK'
//  '<S117>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLUE'
//  '<S118>' : 'GNC2026W/1 - Experiment Logic/Phase #4: Return Home/Desired Position RED'
//  '<S119>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Joint Angles RED'
//  '<S120>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLACK'
//  '<S121>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLUE'
//  '<S122>' : 'GNC2026W/1 - Experiment Logic/Phase #5: Hold Home/Desired Position RED'
//  '<S123>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)'
//  '<S124>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)'
//  '<S125>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)'
//  '<S126>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)'
//  '<S127>' : 'GNC2026W/2 - Guidance/Disable PPL (ARM)'
//  '<S128>' : 'GNC2026W/2 - Guidance/Disable PPL (BLACK)'
//  '<S129>' : 'GNC2026W/2 - Guidance/Disable PPL (BLUE)'
//  '<S130>' : 'GNC2026W/2 - Guidance/Disable PPL (RED)'
//  '<S131>' : 'GNC2026W/2 - Guidance/Custom PPL (ARM)/Desired Position'
//  '<S132>' : 'GNC2026W/2 - Guidance/Custom PPL (BLACK)/Desired Position'
//  '<S133>' : 'GNC2026W/2 - Guidance/Custom PPL (BLUE)/Desired Position'
//  '<S134>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/End Effector Desired'
//  '<S135>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/MATLAB Function4'
//  '<S136>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1'
//  '<S137>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1/Unwrap'
//  '<S138>' : 'GNC2026W/2 - Guidance/Custom PPL (RED)/Unwrap1/Unwrap/MATLAB Function'
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
//  '<S159>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap1'
//  '<S160>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap'
//  '<S161>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap/Unwrap/MATLAB Function'
//  '<S162>' : 'GNC2026W/3 - Control/Custom Control (RED)/Unwrap1/MATLAB Function'
//  '<S163>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error'
//  '<S164>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative'
//  '<S165>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative1'
//  '<S166>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Discrete Derivative2'
//  '<S167>' : 'GNC2026W/3 - Control/Default LQR Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S168>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error'
//  '<S169>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative'
//  '<S170>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative1'
//  '<S171>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Discrete Derivative2'
//  '<S172>' : 'GNC2026W/3 - Control/Default LQR Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S173>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error'
//  '<S174>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative'
//  '<S175>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative1'
//  '<S176>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Discrete Derivative2'
//  '<S177>' : 'GNC2026W/3 - Control/Default LQR Control (RED)/Calculate Error/MATLAB Function'
//  '<S178>' : 'GNC2026W/3 - Control/Default PD (ARM)/Passthrough for Experiment'
//  '<S179>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller'
//  '<S180>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)'
//  '<S181>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)'
//  '<S182>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)'
//  '<S183>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)/Discrete Derivative1'
//  '<S184>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)/Discrete Derivative1'
//  '<S185>' : 'GNC2026W/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)/Discrete Derivative1'
//  '<S186>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error'
//  '<S187>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative'
//  '<S188>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative1'
//  '<S189>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Discrete Derivative2'
//  '<S190>' : 'GNC2026W/3 - Control/Default PD Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S191>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error'
//  '<S192>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative'
//  '<S193>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative1'
//  '<S194>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Discrete Derivative2'
//  '<S195>' : 'GNC2026W/3 - Control/Default PD Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S196>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error'
//  '<S197>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative'
//  '<S198>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative1'
//  '<S199>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Discrete Derivative2'
//  '<S200>' : 'GNC2026W/3 - Control/Default PD Control (RED)/Calculate Error/MATLAB Function'
//  '<S201>' : 'GNC2026W/Check  Connection/Change BLACK Behavior'
//  '<S202>' : 'GNC2026W/Check  Connection/Change BLUE Behavior'
//  '<S203>' : 'GNC2026W/Check  Connection/Change RED Behavior'
//  '<S204>' : 'GNC2026W/Data Logger Subsystem/Data Logger'
//  '<S205>' : 'GNC2026W/Data Logger Subsystem/Separation'
//  '<S206>' : 'GNC2026W/Data Logger Subsystem/Data Logger/MATLAB Function'
//  '<S207>' : 'GNC2026W/Data Logger Subsystem/Separation/MATLAB Function'
//  '<S208>' : 'GNC2026W/Debugger/Change BLACK Behavior'
//  '<S209>' : 'GNC2026W/Debugger/Change BLUE Behavior'
//  '<S210>' : 'GNC2026W/Debugger/Change RED Behavior'
//  '<S211>' : 'GNC2026W/Float Code/Enable Pucks'
//  '<S212>' : 'GNC2026W/Manipulator Encoder Data/Change ARM Behavior'
//  '<S213>' : 'GNC2026W/Navigation Filter/If Action Subsystem'
//  '<S214>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF'
//  '<S215>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF'
//  '<S216>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF'
//  '<S217>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Camera to Inertial Frame'
//  '<S218>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/EKF'
//  '<S219>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Unwrap'
//  '<S220>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Unwrap/Unwrap'
//  '<S221>' : 'GNC2026W/Navigation Filter/If Action Subsystem/EKF/Unwrap/Unwrap/MATLAB Function'
//  '<S222>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Camera to Inertial Frame'
//  '<S223>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/MEKF'
//  '<S224>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Unwrap'
//  '<S225>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Unwrap/Unwrap'
//  '<S226>' : 'GNC2026W/Navigation Filter/If Action Subsystem/MEKF/Unwrap/Unwrap/MATLAB Function'
//  '<S227>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Artificial VIS States'
//  '<S228>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Camera to Inertial Frame'
//  '<S229>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Experimental VIS States'
//  '<S230>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unscented Kalman Filter'
//  '<S231>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unwrap'
//  '<S232>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unwrap/Unwrap'
//  '<S233>' : 'GNC2026W/Navigation Filter/If Action Subsystem/UKF/Unwrap/Unwrap/MATLAB Function'
//  '<S234>' : 'GNC2026W/PhaseSpace Camera Code/Initialize Universal Time (Simulation)'
//  '<S235>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States'
//  '<S236>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data'
//  '<S237>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data'
//  '<S238>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data'
//  '<S239>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data'
//  '<S240>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)'
//  '<S241>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Enabled Subsystem2'
//  '<S242>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function'
//  '<S243>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function1'
//  '<S244>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time'
//  '<S245>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLACK Behavior'
//  '<S246>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLUE Behavior'
//  '<S247>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change RED Behavior'
//  '<S248>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step'
//  '<S249>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)'
//  '<S250>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1'
//  '<S251>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2'
//  '<S252>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Wrap'
//  '<S253>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S254>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/MATLAB Function'
//  '<S255>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Artificial isValid Flag'
//  '<S256>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/BLK CoM to LAR'
//  '<S257>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/CV Noise'
//  '<S258>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Inertial to Camera Frame (HARDWARE)'
//  '<S259>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Sample and Hold'
//  '<S260>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap'
//  '<S261>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Artificial isValid Flag/MATLAB Function1'
//  '<S262>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap'
//  '<S263>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Simulated Noise  (HARDWARE)/Unwrap/Unwrap/MATLAB Function'
//  '<S264>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem'
//  '<S265>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S266>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem'
//  '<S267>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S268>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step'
//  '<S269>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1'
//  '<S270>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2'
//  '<S271>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Wrap'
//  '<S272>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S273>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/MATLAB Function'
//  '<S274>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem'
//  '<S275>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S276>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem'
//  '<S277>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S278>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step'
//  '<S279>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1'
//  '<S280>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2'
//  '<S281>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Wrap'
//  '<S282>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S283>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/MATLAB Function'
//  '<S284>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem'
//  '<S285>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S286>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem'
//  '<S287>' : 'GNC2026W/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S288>' : 'GNC2026W/Platform  Identification/Subsystem'
//  '<S289>' : 'GNC2026W/Receive CV Data/CV UDP'
//  '<S290>' : 'GNC2026W/Receive CV Data/CV UDP/Reading isValid'
//  '<S291>' : 'GNC2026W/Receive Data from Orin/Subsystem'
//  '<S292>' : 'GNC2026W/Robotic  Arm Code/Change ARM Behavior'
//  '<S293>' : 'GNC2026W/Send Data  to Orin/Subsystem'
//  '<S294>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior'
//  '<S295>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior'
//  '<S296>' : 'GNC2026W/Thruster Control Code/Change RED Behavior'
//  '<S297>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle'
//  '<S298>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body'
//  '<S299>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S300>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S301>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S302>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S303>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S304>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S305>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S306>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S307>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S308>' : 'GNC2026W/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S309>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle'
//  '<S310>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body'
//  '<S311>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S312>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S313>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S314>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S315>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S316>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S317>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S318>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S319>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S320>' : 'GNC2026W/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S321>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle'
//  '<S322>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body'
//  '<S323>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S324>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S325>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S326>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function8'
//  '<S327>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S328>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S329>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S330>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S331>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S332>' : 'GNC2026W/Thruster Control Code/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S333>' : 'GNC2026W/Time Sync./Change BLACK Behavior'
//  '<S334>' : 'GNC2026W/Time Sync./Change BLUE Behavior'
//  '<S335>' : 'GNC2026W/Time Sync./Change RED Behavior'

#endif                                 // GNC2026W_h_

//
// File trailer for generated code.
//
// [EOF]
//
