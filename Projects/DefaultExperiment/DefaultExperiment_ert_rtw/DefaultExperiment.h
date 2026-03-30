//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DefaultExperiment.h
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
#ifndef DefaultExperiment_h_
#define DefaultExperiment_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "DAHostLib_Network.h"
#include "custom_data_logger.h"
#include "gpio_control.h"
#include "MW_I2C.h"
#include "dynamixel_functions.h"
#include "dynamixel_sdk.h"
#include "resource_headers.h"
#include "DefaultExperiment_types.h"

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
struct DW_ChangeBLACKBehavior_Defaul_T {
  real_T UDPSend_NetworkLib[137];      // '<S168>/UDP Send'
};

// Block states (default storage) for system '<S190>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_Defa_l_T {
  real_T UDPSendGUI_NetworkLib[137];   // '<S191>/UDP Send (GUI)'
};

// Block signals for system '<S195>/Enabled Subsystem'
struct B_EnabledSubsystem_DefaultExp_T {
  real_T Delay[3];                     // '<S200>/Delay'
  real_T ema[3];                       // '<S200>/MATLAB Function'
};

// Block states (default storage) for system '<S195>/Enabled Subsystem'
struct DW_EnabledSubsystem_DefaultEx_T {
  real_T Delay_DSTATE[3];              // '<S200>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S195>/Enabled Subsystem'
};

// Block signals for system '<S196>/Enabled Subsystem'
struct B_EnabledSubsystem_DefaultE_h_T {
  real_T Delay[3];                     // '<S202>/Delay'
  real_T ema[3];                       // '<S202>/MATLAB Function'
};

// Block states (default storage) for system '<S196>/Enabled Subsystem'
struct DW_EnabledSubsystem_Default_c_T {
  real_T Delay_DSTATE[3];              // '<S202>/Delay'
  boolean_T EnabledSubsystem_MODE;     // '<S196>/Enabled Subsystem'
};

// Block signals for system '<S234>/Pseudoinverse1'
struct B_Pseudoinverse1_DefaultExper_T {
  real_T Pseudoinverse1[24];           // '<S234>/Pseudoinverse1'
};

// Block states (default storage) for system '<S234>/Pseudoinverse1'
struct DW_Pseudoinverse1_DefaultExpe_T {
  dsp_simulink_Pseudoinverse_De_T obj; // '<S234>/Pseudoinverse1'
  boolean_T objisempty;                // '<S234>/Pseudoinverse1'
};

// Block signals for system '<S17>/Change BLACK Behavior'
struct B_ChangeBLACKBehavior_Defau_m_T {
  real_T Clock1;                       // '<S267>/Clock1'
};

// Block states (default storage) for system '<S17>/Change BLACK Behavior'
struct DW_ChangeBLACKBehavior_Defa_g_T {
  real_T UDPSendClock_NetworkLib[137]; // '<S267>/UDP Send (Clock)'
};

// Block signals (default storage)
struct B_DefaultExperiment_T {
  real_T Merge1[3];                    // '<S3>/Merge1'
  real_T Merge2[3];                    // '<S3>/Merge2'
  real_T Merge[3];                     // '<S3>/Merge'
  real_T TmpSignalConversionAtUDPSendInp[10];
  real_T duty_cycles[8];               // '<S255>/MATLAB Function5'
  real_T ThrustPer_Final[8];           // '<S263>/ThrustPer_Final'
  real_T In1;                          // '<S262>/In1'
  real_T duty_cycles_j[8];             // '<S243>/MATLAB Function5'
  real_T ThrustPer_Final_h[8];         // '<S251>/ThrustPer_Final'
  real_T In1_g;                        // '<S250>/In1'
  real_T duty_cycles_m[8];             // '<S231>/MATLAB Function5'
  real_T ThrustPer_Final_h5[8];        // '<S239>/ThrustPer_Final'
  real_T In1_g2;                       // '<S238>/In1'
  real_T TmpSignalConversionAtUDPSendI_o[28];
  real_T ReceivePhaseSpaceData_o1[19]; // '<S182>/Receive PhaseSpace Data'
  real_T ConvertBLAXfrommmtom;        // '<S183>/Convert BLAX from [mm] to [m]'
  real_T ConvertBLUXfrommmtom;        // '<S184>/Convert BLUX from [mm] to [m]'
  real_T ConvertREDXfrommmtom;        // '<S185>/Convert REDX from [mm] to [m]'
  real_T UDPReceiveREDClock_o1;        // '<S186>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_o1;      // '<S186>/UDP Receive (BLACK Clock)'
  real_T UDPReceiveBLUEClock_o1;       // '<S186>/UDP Receive (BLUE Clock)'
  real_T dy[3];                        // '<S222>/MATLAB Function'
  real_T dy_h[3];                      // '<S220>/MATLAB Function'
  real_T y2y1;                         // '<S218>/y2-y1'
  real_T dy_c[3];                      // '<S212>/MATLAB Function'
  real_T dy_d[3];                      // '<S210>/MATLAB Function'
  real_T y2y1_o;                       // '<S208>/y2-y1'
  real_T dy_p[3];                      // '<S202>/MATLAB Function'
  real_T dy_g[3];                      // '<S200>/MATLAB Function'
  real_T y2y1_ob;                      // '<S198>/y2-y1'
  real_T In1_g20;                      // '<S187>/In1'
  real32_T UDPReceive_o1[4];           // '<S225>/UDP Receive'
  uint8_T StringtoASCII[31];           // '<S175>/String to ASCII'
  uint8_T StringtoASCII2[31];          // '<S174>/String to ASCII2'
  uint8_T StringtoASCII1[31];          // '<S173>/String to ASCII1'
  B_ChangeBLACKBehavior_Defau_m_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  B_ChangeBLACKBehavior_Defau_m_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  B_ChangeBLACKBehavior_Defau_m_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  B_Pseudoinverse1_DefaultExper_T Pseudoinverse1_pn;// '<S234>/Pseudoinverse1'
  B_Pseudoinverse1_DefaultExper_T Pseudoinverse1_p;// '<S234>/Pseudoinverse1'
  B_Pseudoinverse1_DefaultExper_T Pseudoinverse1;// '<S234>/Pseudoinverse1'
  B_EnabledSubsystem_DefaultE_h_T EnabledSubsystem_l1;// '<S216>/Enabled Subsystem' 
  B_EnabledSubsystem_DefaultExp_T EnabledSubsystem_k;// '<S215>/Enabled Subsystem' 
  B_EnabledSubsystem_DefaultE_h_T EnabledSubsystem_d;// '<S206>/Enabled Subsystem' 
  B_EnabledSubsystem_DefaultExp_T EnabledSubsystem_l;// '<S205>/Enabled Subsystem' 
  B_EnabledSubsystem_DefaultE_h_T EnabledSubsystem_g;// '<S196>/Enabled Subsystem' 
  B_EnabledSubsystem_DefaultExp_T EnabledSubsystem;// '<S195>/Enabled Subsystem' 
};

// Block states (default storage) for system '<Root>'
struct DW_DefaultExperiment_T {
  nvidiacoder_sensors_BMI160Blo_T obj; // '<S177>/Gyroscope//Accelerometer'
  Dynamixel_Controller_DefaultE_T obj_n;
  // '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes' 
  GPIO_Write_DefaultExperiment_T obj_l;// '<S176>/GPIO Write1'
  ReadArm_Position_Rates_Defaul_T obj_d;
                     // '<S179>/Read Joint Positions using  Dynamixel Encoders'
  IdentifyPlatform_DefaultExper_T obj_dk;// '<S224>/WhoAmI'
  CustomDataLogger_DefaultExper_T obj_f;// '<S171>/MATLAB System'
  real_T Delay_DSTATE;                 // '<S257>/Delay'
  real_T Delay_DSTATE_k;               // '<S245>/Delay'
  real_T Delay_DSTATE_kz;              // '<S233>/Delay'
  real_T Delay2_DSTATE;                // '<S194>/Delay2'
  real_T Delay1_DSTATE;                // '<S194>/Delay1'
  real_T Delay1_DSTATE_g[3];           // '<S196>/Delay1'
  real_T Delay1_DSTATE_b[3];           // '<S195>/Delay1'
  real_T Delay2_DSTATE_l;              // '<S204>/Delay2'
  real_T Delay1_DSTATE_l;              // '<S204>/Delay1'
  real_T Delay1_DSTATE_m[3];           // '<S206>/Delay1'
  real_T Delay1_DSTATE_lv[3];          // '<S205>/Delay1'
  real_T Delay2_DSTATE_l0;             // '<S214>/Delay2'
  real_T Delay1_DSTATE_ld;             // '<S214>/Delay1'
  real_T Delay1_DSTATE_c[3];           // '<S216>/Delay1'
  real_T Delay1_DSTATE_cq[3];          // '<S215>/Delay1'
  real_T Delay_DSTATE_o;               // '<S179>/Delay'
  real_T Delay1_DSTATE_cg;             // '<S179>/Delay1'
  real_T Delay2_DSTATE_h;              // '<S179>/Delay2'
  real_T UD_DSTATE;                    // '<S150>/UD'
  real_T UD_DSTATE_e;                  // '<S151>/UD'
  real_T UD_DSTATE_a;                  // '<S152>/UD'
  real_T UD_DSTATE_l;                  // '<S136>/UD'
  real_T UD_DSTATE_k;                  // '<S137>/UD'
  real_T UD_DSTATE_h;                  // '<S138>/UD'
  real_T UD_DSTATE_o;                  // '<S159>/UD'
  real_T UD_DSTATE_n;                  // '<S160>/UD'
  real_T UD_DSTATE_hu;                 // '<S161>/UD'
  real_T UD_DSTATE_j;                  // '<S131>/UD'
  real_T UD_DSTATE_c;                  // '<S132>/UD'
  real_T UD_DSTATE_d;                  // '<S133>/UD'
  real_T UD_DSTATE_eh;                 // '<S154>/UD'
  real_T UD_DSTATE_hv;                 // '<S155>/UD'
  real_T UD_DSTATE_kv;                 // '<S156>/UD'
  real_T UD_DSTATE_aq;                 // '<S141>/UD'
  real_T UD_DSTATE_p;                  // '<S142>/UD'
  real_T UD_DSTATE_pr;                 // '<S143>/UD'
  real_T UD_DSTATE_eg;                 // '<S164>/UD'
  real_T UD_DSTATE_cd;                 // '<S165>/UD'
  real_T UD_DSTATE_hd;                 // '<S166>/UD'
  real_T UDPSend_NetworkLib[137];      // '<S16>/UDP Send'
  real_T BLUE_Control_Law_Enabler;     // '<Root>/RED_Tz1'
  real_T ARM_Control_Mode;             // '<Root>/RED_Tz15'
  real_T RED_Control_Law_Enabler;      // '<Root>/RED_Tz20'
  real_T ARM_Control_Law_Enabler;      // '<Root>/RED_Tz38'
  real_T Float_State;                  // '<Root>/RED_Tz7'
  real_T BLACK_Control_Law_Enabler;    // '<Root>/RED_Tz8'
  real_T Univ_Time;                    // '<Root>/Universal_Time'
  real_T BLACK_Measured_States[9];     // '<Root>/Universal_Time10'
  real_T BLUE_Desired_States[3];       // '<Root>/Universal_Time13'
  real_T BLACK_Saturated_Controls[3];  // '<Root>/Universal_Time15'
  real_T WhoAmI;                       // '<Root>/Universal_Time19'
  real_T isSim;                        // '<Root>/Universal_Time20'
  real_T VIS_Measured_States[3];       // '<Root>/Universal_Time22'
  real_T ARM_Measured_States[6];       // '<Root>/Universal_Time24'
  real_T BLACK_Desired_States[3];      // '<Root>/Universal_Time25'
  real_T RED_Measured_States[9];       // '<Root>/Universal_Time26'
  real_T RED_Saturated_Controls[3];    // '<Root>/Universal_Time28'
  real_T RED_Desired_States[3];        // '<Root>/Universal_Time29'
  real_T RED_IMU_Measurements[3];      // '<Root>/Universal_Time31'
  real_T BLACK_IMU_Measurements[3];    // '<Root>/Universal_Time33'
  real_T BLUE_IMU_Measurements[3];     // '<Root>/Universal_Time34'
  real_T BLUE_Measured_States[9];      // '<Root>/Universal_Time4'
  real_T BLUE_Saturated_Controls[3];   // '<Root>/Universal_Time6'
  real_T ARM_Desired_States[3];        // '<Root>/Universal_Time8'
  real_T VIS_Confidence;               // '<Root>/Universal_Time9'
  real_T UDPSend_NetworkLib_m[137];    // '<S227>/UDP Send'
  real_T UDPReceive_NetworkLib[137];   // '<S225>/UDP Receive'
  real_T ReceivePhaseSpaceData_NetworkLi[137];// '<S182>/Receive PhaseSpace Data' 
  real_T UDPReceiveREDClock_NetworkLib[137];// '<S186>/UDP Receive (RED Clock)'
  real_T UDPReceiveBLACKClock_NetworkLib[137];// '<S186>/UDP Receive (BLACK Clock)' 
  real_T UDPReceiveBLUEClock_NetworkLib[137];// '<S186>/UDP Receive (BLUE Clock)' 
  real_T UDPSend3_NetworkLib[137];     // '<S175>/UDP Send3'
  real_T UDPSend2_NetworkLib[137];     // '<S174>/UDP Send2'
  real_T UDPSend1_NetworkLib[137];     // '<S173>/UDP Send1'
  char_T RED_Logger[256];              // '<Root>/RED_Tz3'
  char_T BLACK_Logger[256];            // '<Root>/RED_Tz4'
  char_T BLUE_Logger[256];             // '<Root>/RED_Tz5'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S10>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S17>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_b;
    // '<S17>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_c;
    // '<S17>/This IF block determines whether or not to run the RED sim//exp '
  int8_T ThisIFblockdetermineswhether_ch;
  // '<S190>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhether_cs;
  // '<S190>/This IF block determines whether or not to run the BLUE sim//exp'
  int8_T ThisIFblockdetermineswhethero_d;
  // '<S190>/This IF block determines whether or not to run the RED sim//exp '
  uint8_T pauseState;                  // '<S177>/Gyroscope//Accelerometer'
  DW_ChangeBLACKBehavior_Defa_g_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_Defa_g_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_Defa_g_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  DW_Pseudoinverse1_DefaultExpe_T Pseudoinverse1_pn;// '<S234>/Pseudoinverse1'
  DW_Pseudoinverse1_DefaultExpe_T Pseudoinverse1_p;// '<S234>/Pseudoinverse1'
  DW_Pseudoinverse1_DefaultExpe_T Pseudoinverse1;// '<S234>/Pseudoinverse1'
  DW_EnabledSubsystem_Default_c_T EnabledSubsystem_l1;// '<S216>/Enabled Subsystem' 
  DW_EnabledSubsystem_DefaultEx_T EnabledSubsystem_k;// '<S215>/Enabled Subsystem' 
  DW_EnabledSubsystem_Default_c_T EnabledSubsystem_d;// '<S206>/Enabled Subsystem' 
  DW_EnabledSubsystem_DefaultEx_T EnabledSubsystem_l;// '<S205>/Enabled Subsystem' 
  DW_EnabledSubsystem_Default_c_T EnabledSubsystem_g;// '<S196>/Enabled Subsystem' 
  DW_EnabledSubsystem_DefaultEx_T EnabledSubsystem;// '<S195>/Enabled Subsystem' 
  DW_ChangeBLACKBehavior_Defa_l_T ChangeREDBehavior_d;// '<S190>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_Defa_l_T ChangeBLUEBehavior_f;// '<S190>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_Defa_l_T ChangeBLACKBehavior_e;// '<S190>/Change BLACK Behavior' 
  DW_ChangeBLACKBehavior_Defaul_T ChangeREDBehavior;// '<S4>/Change RED Behavior' 
  DW_ChangeBLACKBehavior_Defaul_T ChangeBLUEBehavior;// '<S4>/Change BLUE Behavior' 
  DW_ChangeBLACKBehavior_Defaul_T ChangeBLACKBehavior;// '<S4>/Change BLACK Behavior' 
};

// Parameters for system: '<S1>/Phase #0: Synchronization'
struct P_Phase0Synchronization_Defau_T_ {
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

// Parameters for system: '<S21>/Sub-Phase #1'
struct P_SubPhase1_DefaultExperiment_T_ {
  real_T Constant11_Value;             // Expression: 0
                                          //  Referenced by: '<S29>/Constant11'

  real_T Constant12_Value;             // Expression: 0
                                          //  Referenced by: '<S29>/Constant12'

  real_T Constant14_Value;             // Expression: 0
                                          //  Referenced by: '<S29>/Constant14'

  real_T Constant15_Value;             // Expression: 0
                                          //  Referenced by: '<S29>/Constant15'

  real_T Constant18_Value;             // Expression: 0
                                          //  Referenced by: '<S29>/Constant18'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<S29>/Constant4'

  real_T Constant5_Value;              // Expression: 2
                                          //  Referenced by: '<S29>/Constant5'

  real_T Constant6_Value;              // Expression: 1
                                          //  Referenced by: '<S29>/Constant6'

  real_T Constant8_Value;              // Expression: 2
                                          //  Referenced by: '<S29>/Constant8'

  real_T Constant3_Value;              // Expression: pi/2
                                          //  Referenced by: '<S33>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S33>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S33>/Constant2'

  real_T DesiredRate_Value;            // Expression: 0.03490659
                                          //  Referenced by: '<S35>/Desired Rate '

  real_T Gain_Gain;                    // Expression: -0.85
                                          //  Referenced by: '<S40>/Gain'

  real_T Gain1_Gain;                   // Expression: -0.85
                                          //  Referenced by: '<S40>/Gain1'

  real_T DesiredRateBLACK_Value;       // Expression: 0.03490659
                                          //  Referenced by: '<S37>/Desired Rate (BLACK)'

  real_T DesiredRate_Value_b;          // Expression: 0.03490659
                                          //  Referenced by: '<S36>/Desired Rate '

  real_T Gain_Gain_n;                  // Expression: 0.85
                                          //  Referenced by: '<S44>/Gain'

  real_T Gain1_Gain_k;                 // Expression: 0.85
                                          //  Referenced by: '<S44>/Gain1'

  real_T Constant_Value;               // Expression: pi+0.01
                                          //  Referenced by: '<S36>/Constant'

  char_T StringConstant1_String[256];
                            // Expression: "Target: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S29>/String Constant1'

  char_T StringConstant2_String[256];
                          // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
                             //  Referenced by: '<S29>/String Constant2'

  char_T StringConstant_String[256];
                            // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
                               //  Referenced by: '<S29>/String Constant'

};

// Parameters for system: '<S1>/Phase #4: Return Home'
struct P_Phase4ReturnHome_DefaultExp_T_ {
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
                                          //  Referenced by: '<S93>/Constant3'

  real_T Constant1_Value;              // Expression: pi/2
                                          //  Referenced by: '<S93>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S93>/Constant2'

  char_T StringConstant1_String[256];  // Expression: "Target: Running Phase 4"
                                          //  Referenced by: '<S22>/String Constant1'

  char_T StringConstant2_String[256]; // Expression: "Obstacle: Running Phase 4"
                                         //  Referenced by: '<S22>/String Constant2'

  char_T StringConstant_String[256];   // Expression: "Chaser: Running Phase 4"
                                          //  Referenced by: '<S22>/String Constant'

};

// Parameters for system: '<S3>/Custom Control (RED)'
struct P_CustomControlRED_DefaultExp_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S118>/Zero'

};

// Parameters for system: '<S3>/Disable Thrusters (BLACK)'
struct P_DisableThrustersBLACK_Defau_T_ {
  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S127>/Zero'

};

// Parameters for system: '<S4>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_Default_T_ {
  int32_T Constant1_Value;             // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S168>/Constant1'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S168>/UDP Send'

};

// Parameters for system: '<S190>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_Defau_p_T_ {
  int32_T UDPSendGUI_Port;             // Computed Parameter: UDPSendGUI_Port
                                          //  Referenced by: '<S191>/UDP Send (GUI)'

};

// Parameters for system: '<S195>/Enabled Subsystem'
struct P_EnabledSubsystem_DefaultExp_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S200>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S200>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S200>/Delay'

};

// Parameters for system: '<S196>/Enabled Subsystem'
struct P_EnabledSubsystem_DefaultE_c_T_ {
  real_T dydt_Y0;                      // Computed Parameter: dydt_Y0
                                          //  Referenced by: '<S202>/dy//dt'

  real_T Constant2_Value;              // Expression: 0.1
                                          //  Referenced by: '<S202>/Constant2'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S202>/Delay'

};

// Parameters for system: '<S17>/Change BLACK Behavior'
struct P_ChangeBLACKBehavior_Defau_b_T_ {
  int32_T UDPSendClock_Port;           // Computed Parameter: UDPSendClock_Port
                                          //  Referenced by: '<S267>/UDP Send (Clock)'

};

// Parameters (default storage)
struct P_DefaultExperiment_T_ {
  real_T F_red_X_nominal;              // Variable: F_red_X_nominal
                                          //  Referenced by:
                                          //    '<S231>/MATLAB Function5'
                                          //    '<S243>/MATLAB Function5'
                                          //    '<S255>/MATLAB Function5'

  real_T F_red_Y_nominal;              // Variable: F_red_Y_nominal
                                          //  Referenced by:
                                          //    '<S231>/MATLAB Function5'
                                          //    '<S243>/MATLAB Function5'
                                          //    '<S255>/MATLAB Function5'

  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by: '<S234>/MATLAB Function'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by: '<S246>/MATLAB Function'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by: '<S258>/MATLAB Function'

  real_T K_BLACK[18];                  // Variable: K_BLACK
                                          //  Referenced by: '<S119>/Constant2'

  real_T K_BLUE[18];                   // Variable: K_BLUE
                                          //  Referenced by: '<S120>/Constant2'

  real_T K_RED[18];                    // Variable: K_RED
                                          //  Referenced by: '<S121>/Constant2'

  real_T Kd_elarm;                     // Variable: Kd_elarm
                                          //  Referenced by: '<S147>/kd_elarm'

  real_T Kd_sharm;                     // Variable: Kd_sharm
                                          //  Referenced by: '<S148>/kd_sharm'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by: '<S123>/Gain5'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by: '<S124>/Gain5'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by: '<S125>/Gain5'

  real_T Kd_wrarm;                     // Variable: Kd_wrarm
                                          //  Referenced by: '<S149>/kd_wrarm'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by: '<S123>/Gain3'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by: '<S124>/Gain3'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by: '<S125>/Gain3'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by: '<S123>/Gain4'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by: '<S124>/Gain4'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by: '<S125>/Gain4'

  real_T Kp_elarm;                     // Variable: Kp_elarm
                                          //  Referenced by: '<S147>/kp_elarm'

  real_T Kp_sharm;                     // Variable: Kp_sharm
                                          //  Referenced by: '<S148>/kp_sharm'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by: '<S123>/Gain2'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by: '<S124>/Gain2'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by: '<S125>/Gain2'

  real_T Kp_wrarm;                     // Variable: Kp_wrarm
                                          //  Referenced by: '<S149>/kp_wrarm'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by: '<S123>/Gain'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by: '<S124>/Gain'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by: '<S125>/Gain'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by: '<S123>/Gain1'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by: '<S124>/Gain1'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by: '<S125>/Gain1'

  real_T PWMFreq;                      // Variable: PWMFreq
                                          //  Referenced by:
                                          //    '<S16>/PWM Frequency'
                                          //    '<S231>/MATLAB Function1'
                                          //    '<S243>/MATLAB Function1'
                                          //    '<S255>/MATLAB Function8'
                                          //    '<S233>/Constant1'
                                          //    '<S245>/Constant1'
                                          //    '<S257>/Constant1'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<S1>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<S1>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by:
                                          //    '<S1>/Constant1'
                                          //    '<S41>/Constant2'
                                          //    '<S45>/Constant2'
                                          //    '<S56>/Constant2'
                                          //    '<S60>/Constant2'
                                          //    '<S71>/Constant2'
                                          //    '<S75>/Constant2'
                                          //    '<S86>/Constant2'
                                          //    '<S90>/Constant2'
                                          //    '<S39>/Constant1'
                                          //    '<S54>/Constant1'
                                          //    '<S69>/Constant1'
                                          //    '<S84>/Constant1'

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

  real_T Tz_lim_elarm;                 // Variable: Tz_lim_elarm
                                          //  Referenced by: '<S146>/Saturation1'

  real_T Tz_lim_sharm;                 // Variable: Tz_lim_sharm
                                          //  Referenced by: '<S146>/Saturation'

  real_T Tz_lim_wrarm;                 // Variable: Tz_lim_wrarm
                                          //  Referenced by: '<S146>/Saturation3'

  real_T baseRate;                     // Variable: baseRate
                                          //  Referenced by:
                                          //    '<S179>/Read Joint Positions using  Dynamixel Encoders'
                                          //    '<S224>/WhoAmI'
                                          //    '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T dataRate;                     // Variable: dataRate
                                          //  Referenced by:
                                          //    '<S194>/Constant'
                                          //    '<S204>/Constant'
                                          //    '<S214>/Constant'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S94>/Desired States (BLACK)'
                                          //    '<S98>/Desired States (BLACK)'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S95>/Desired States (BLUE)'
                                          //    '<S99>/Desired States (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S96>/Constant2'
                                          //    '<S100>/Constant2'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by: '<S26>/Desired States (BLACK)'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by: '<S27>/Desired States (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by: '<S28>/Constant2'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S186>/MATLAB Function'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by: '<S15>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by: '<S234>/MATLAB Function'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by: '<S246>/MATLAB Function'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S231>/MATLAB Function5'
                                          //    '<S243>/MATLAB Function5'
                                          //    '<S255>/MATLAB Function5'
                                          //    '<S258>/MATLAB Function'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by:
                                          //    '<S34>/Desired X-Position (BLACK)'
                                          //    '<S49>/Desired X-Position (BLACK)'
                                          //    '<S64>/Desired X-Position (BLACK)'
                                          //    '<S79>/Desired X-Position (BLACK)'
                                          //    '<S40>/Constant1'
                                          //    '<S44>/Constant1'
                                          //    '<S55>/Constant1'
                                          //    '<S59>/Constant1'
                                          //    '<S70>/Constant1'
                                          //    '<S74>/Constant1'
                                          //    '<S85>/Constant1'
                                          //    '<S89>/Constant1'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by:
                                          //    '<S34>/Desired Y-Position (BLACK)'
                                          //    '<S49>/Desired Y-Position (BLACK)'
                                          //    '<S64>/Desired Y-Position (BLACK)'
                                          //    '<S79>/Desired Y-Position (BLACK)'
                                          //    '<S40>/Constant2'
                                          //    '<S44>/Constant2'
                                          //    '<S55>/Constant2'
                                          //    '<S59>/Constant2'
                                          //    '<S70>/Constant2'
                                          //    '<S74>/Constant2'
                                          //    '<S85>/Constant2'
                                          //    '<S89>/Constant2'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S164>/UD'

  real_T DiscreteDerivative1_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative1_ICPrevScale
                                 //  Referenced by: '<S165>/UD'

  real_T DiscreteDerivative2_ICPrevScale;
                              // Mask Parameter: DiscreteDerivative2_ICPrevScale
                                 //  Referenced by: '<S166>/UD'

  real_T DiscreteDerivative_ICPrevScal_i;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                 //  Referenced by: '<S141>/UD'

  real_T DiscreteDerivative1_ICPrevSca_e;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
                                 //  Referenced by: '<S142>/UD'

  real_T DiscreteDerivative2_ICPrevSca_o;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                 //  Referenced by: '<S143>/UD'

  real_T DiscreteDerivative_ICPrevScal_p;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_p
                                 //  Referenced by: '<S154>/UD'

  real_T DiscreteDerivative1_ICPrevSca_m;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
                                 //  Referenced by: '<S155>/UD'

  real_T DiscreteDerivative2_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
                                 //  Referenced by: '<S156>/UD'

  real_T DiscreteDerivative_ICPrevScal_d;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_d
                                 //  Referenced by: '<S131>/UD'

  real_T DiscreteDerivative1_ICPrevSca_i;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
                                 //  Referenced by: '<S132>/UD'

  real_T DiscreteDerivative2_ICPrevSc_oo;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
                                 //  Referenced by: '<S133>/UD'

  real_T DiscreteDerivative_ICPrevSca_pf;
                              // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
                                 //  Referenced by: '<S159>/UD'

  real_T DiscreteDerivative1_ICPrevSca_l;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
                                 //  Referenced by: '<S160>/UD'

  real_T DiscreteDerivative2_ICPrevSc_on;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
                                 //  Referenced by: '<S161>/UD'

  real_T DiscreteDerivative_ICPrevScal_n;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_n
                                 //  Referenced by: '<S136>/UD'

  real_T DiscreteDerivative1_ICPrevSca_f;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
                                 //  Referenced by: '<S137>/UD'

  real_T DiscreteDerivative2_ICPrevSca_g;
                              // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                 //  Referenced by: '<S138>/UD'

  real_T DiscreteDerivative1_ICPrevSca_j;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
                                 //  Referenced by: '<S150>/UD'

  real_T DiscreteDerivative1_ICPrevSca_a;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
                                 //  Referenced by: '<S151>/UD'

  real_T DiscreteDerivative1_ICPrevSca_k;
                              // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
                                 //  Referenced by: '<S152>/UD'

  real_T MATLABFunction5_max_iters; // Mask Parameter: MATLABFunction5_max_iters
                                       //  Referenced by: '<S231>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_b;
                                  // Mask Parameter: MATLABFunction5_max_iters_b
                                     //  Referenced by: '<S243>/MATLAB Function5'

  real_T MATLABFunction5_max_iters_e;
                                  // Mask Parameter: MATLABFunction5_max_iters_e
                                     //  Referenced by: '<S255>/MATLAB Function5'

  real_T MATLABFunction5_tol;          // Mask Parameter: MATLABFunction5_tol
                                          //  Referenced by: '<S231>/MATLAB Function5'

  real_T MATLABFunction5_tol_j;        // Mask Parameter: MATLABFunction5_tol_j
                                          //  Referenced by: '<S243>/MATLAB Function5'

  real_T MATLABFunction5_tol_g;        // Mask Parameter: MATLABFunction5_tol_g
                                          //  Referenced by: '<S255>/MATLAB Function5'

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

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S164>/TSamp'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                          //  Referenced by: '<S165>/TSamp'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                          //  Referenced by: '<S166>/TSamp'

  real_T Gain6_Gain;                   // Expression: -1
                                          //  Referenced by: '<S125>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                          //  Referenced by: '<S125>/Gain7'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S125>/Gain8'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                          //  Referenced by: '<S141>/TSamp'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                          //  Referenced by: '<S142>/TSamp'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                          //  Referenced by: '<S143>/TSamp'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S154>/TSamp'

  real_T TSamp_WtEt_hr;                // Computed Parameter: TSamp_WtEt_hr
                                          //  Referenced by: '<S155>/TSamp'

  real_T TSamp_WtEt_ca;                // Computed Parameter: TSamp_WtEt_ca
                                          //  Referenced by: '<S156>/TSamp'

  real_T Gain6_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S123>/Gain6'

  real_T Gain7_Gain_b;                 // Expression: -1
                                          //  Referenced by: '<S123>/Gain7'

  real_T Gain8_Gain_m;                 // Expression: -1
                                          //  Referenced by: '<S123>/Gain8'

  real_T TSamp_WtEt_nd;                // Computed Parameter: TSamp_WtEt_nd
                                          //  Referenced by: '<S131>/TSamp'

  real_T TSamp_WtEt_co;                // Computed Parameter: TSamp_WtEt_co
                                          //  Referenced by: '<S132>/TSamp'

  real_T TSamp_WtEt_no;                // Computed Parameter: TSamp_WtEt_no
                                          //  Referenced by: '<S133>/TSamp'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                          //  Referenced by: '<S159>/TSamp'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                          //  Referenced by: '<S160>/TSamp'

  real_T TSamp_WtEt_px;                // Computed Parameter: TSamp_WtEt_px
                                          //  Referenced by: '<S161>/TSamp'

  real_T Gain6_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S124>/Gain6'

  real_T Gain7_Gain_e;                 // Expression: -1
                                          //  Referenced by: '<S124>/Gain7'

  real_T Gain8_Gain_g;                 // Expression: -1
                                          //  Referenced by: '<S124>/Gain8'

  real_T TSamp_WtEt_ft;                // Computed Parameter: TSamp_WtEt_ft
                                          //  Referenced by: '<S136>/TSamp'

  real_T TSamp_WtEt_eh;                // Computed Parameter: TSamp_WtEt_eh
                                          //  Referenced by: '<S137>/TSamp'

  real_T TSamp_WtEt_ii;                // Computed Parameter: TSamp_WtEt_ii
                                          //  Referenced by: '<S138>/TSamp'

  real_T TSamp_WtEt_pu;                // Computed Parameter: TSamp_WtEt_pu
                                          //  Referenced by: '<S150>/TSamp'

  real_T TSamp_WtEt_f0;                // Computed Parameter: TSamp_WtEt_f0
                                          //  Referenced by: '<S151>/TSamp'

  real_T TSamp_WtEt_nz;                // Computed Parameter: TSamp_WtEt_nz
                                          //  Referenced by: '<S152>/TSamp'

  real_T Constant7_Value;              // Expression: 1
                                          //  Referenced by: '<S122>/Constant7'

  real_T Merge3_InitialOutput;       // Computed Parameter: Merge3_InitialOutput
                                        //  Referenced by: '<S122>/Merge3'

  real_T Merge4_InitialOutput;       // Computed Parameter: Merge4_InitialOutput
                                        //  Referenced by: '<S122>/Merge4'

  real_T Merge5_InitialOutput;       // Computed Parameter: Merge5_InitialOutput
                                        //  Referenced by: '<S122>/Merge5'

  real_T Constant7_Value_h;            // Expression: 0
                                          //  Referenced by: '<S126>/Constant7'

  real_T Zero_Value;                   // Expression: 0
                                          //  Referenced by: '<S126>/Zero'

  real_T GPIOWrite1_gpioPin;           // Expression: 428
                                          //  Referenced by: '<S176>/GPIO Write1'

  real_T GPIOWrite1_pinDirection;      // Expression: 1
                                          //  Referenced by: '<S176>/GPIO Write1'

  real_T GyroscopeAccelerometer_SampleTi;// Expression: -1
                                            //  Referenced by: '<S177>/Gyroscope//Accelerometer'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S179>/Delay'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S179>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<S179>/Delay2'

  real_T UniversalTime_Y0;             // Computed Parameter: UniversalTime_Y0
                                          //  Referenced by: '<S187>/Universal Time'

  real_T dytdt_Y0;                     // Computed Parameter: dytdt_Y0
                                          //  Referenced by: '<S198>/dy(t)//dt'

  real_T dytdt_Y0_j;                   // Computed Parameter: dytdt_Y0_j
                                          //  Referenced by: '<S208>/dy(t)//dt'

  real_T dytdt_Y0_d;                   // Computed Parameter: dytdt_Y0_d
                                          //  Referenced by: '<S218>/dy(t)//dt'

  real_T ConvertBLAXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S183>/Convert BLAX from [mm] to [m]'

  real_T ConvertBLAYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S183>/Convert BLAY from [mm] to [m]'

  real_T ConvertBLACKVXfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S183>/Convert BLACKVX from [mm] to [m]'

  real_T ConvertBLACKVYfrommmtom_Gain; // Expression: 1/1000
                                          //  Referenced by: '<S183>/Convert BLACKVY from [mm] to [m]'

  real_T Delay2_InitialCondition_e;    // Expression: 0
                                          //  Referenced by: '<S194>/Delay2'

  real_T Delay1_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S194>/Delay1'

  real_T Constant3_Value_e;            // Expression: 0
                                          //  Referenced by: '<S194>/Constant3'

  real_T Delay1_InitialCondition_i;    // Expression: 0.0
                                          //  Referenced by: '<S196>/Delay1'

  real_T Constant3_Value_a;            // Expression: 0
                                          //  Referenced by: '<S196>/Constant3'

  real_T Delay1_InitialCondition_it;   // Expression: 0.0
                                          //  Referenced by: '<S195>/Delay1'

  real_T Constant3_Value_d;            // Expression: 0
                                          //  Referenced by: '<S195>/Constant3'

  real_T ConvertBLUXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S184>/Convert BLUX from [mm] to [m]'

  real_T ConvertBLUYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S184>/Convert BLUY from [mm] to [m]'

  real_T ConvertBLUEVXfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S184>/Convert BLUEVX from [mm] to [m]'

  real_T ConvertBLUEVYfrommmtom_Gain;  // Expression: 1/1000
                                          //  Referenced by: '<S184>/Convert BLUEVY from [mm] to [m]'

  real_T Delay2_InitialCondition_a;    // Expression: 0
                                          //  Referenced by: '<S204>/Delay2'

  real_T Delay1_InitialCondition_i3;   // Expression: 0
                                          //  Referenced by: '<S204>/Delay1'

  real_T Constant3_Value_o;            // Expression: 0
                                          //  Referenced by: '<S204>/Constant3'

  real_T Delay1_InitialCondition_h;    // Expression: 0.0
                                          //  Referenced by: '<S206>/Delay1'

  real_T Constant3_Value_c;            // Expression: 0
                                          //  Referenced by: '<S206>/Constant3'

  real_T Delay1_InitialCondition_j;    // Expression: 0.0
                                          //  Referenced by: '<S205>/Delay1'

  real_T Constant3_Value_k;            // Expression: 0
                                          //  Referenced by: '<S205>/Constant3'

  real_T ConvertREDXfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S185>/Convert REDX from [mm] to [m]'

  real_T ConvertREDYfrommmtom_Gain;    // Expression: 1/1000
                                          //  Referenced by: '<S185>/Convert REDY from [mm] to [m]'

  real_T ConvertREDVXfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S185>/Convert REDVX from [mm] to [m]'

  real_T ConvertREDVYfrommmtom_Gain;   // Expression: 1/1000
                                          //  Referenced by: '<S185>/Convert REDVY from [mm] to [m]'

  real_T Delay2_InitialCondition_m;    // Expression: 0
                                          //  Referenced by: '<S214>/Delay2'

  real_T Delay1_InitialCondition_l;    // Expression: 0
                                          //  Referenced by: '<S214>/Delay1'

  real_T Constant3_Value_f;            // Expression: 0
                                          //  Referenced by: '<S214>/Constant3'

  real_T Delay1_InitialCondition_k;    // Expression: 0.0
                                          //  Referenced by: '<S216>/Delay1'

  real_T Constant3_Value_dh;           // Expression: 0
                                          //  Referenced by: '<S216>/Constant3'

  real_T Delay1_InitialCondition_c;    // Expression: 0.0
                                          //  Referenced by: '<S215>/Delay1'

  real_T Constant3_Value_dz;           // Expression: 0
                                          //  Referenced by: '<S215>/Constant3'

  real_T Constant_Value;               // Expression: 1
                                          //  Referenced by: '<S186>/Constant'

  real_T ControlDynamixelActuatorsineith;// Expression: 400
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_b;// Expression: 0
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_h;// Expression: 200
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_j;// Expression: 3072
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_m;// Expression: 1024
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_hy;// Expression: 0
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_i;// Expression: 850
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_g;// Expression: 400
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_g3;// Expression: 100
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsine_bf;// Expression: 20
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T ControlDynamixelActuatorsinei_l;// Expression: 0
                                            //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S238>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S239>/Out1'

  real_T BLACKDC_Y0;                   // Computed Parameter: BLACKDC_Y0
                                          //  Referenced by: '<S228>/BLACK DC'

  real_T Delay_InitialCondition_i;     // Expression: 0.0
                                          //  Referenced by: '<S233>/Delay'

  real_T Constant2_Value_h;            // Expression: 0
                                          //  Referenced by: '<S233>/Constant2'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S250>/Out1'

  real_T Out1_Y0_js;                   // Computed Parameter: Out1_Y0_js
                                          //  Referenced by: '<S251>/Out1'

  real_T BLUEDC_Y0;                    // Computed Parameter: BLUEDC_Y0
                                          //  Referenced by: '<S229>/BLUE DC'

  real_T Delay_InitialCondition_n;     // Expression: 0.0
                                          //  Referenced by: '<S245>/Delay'

  real_T Constant2_Value_f;            // Expression: 0
                                          //  Referenced by: '<S245>/Constant2'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S262>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S263>/Out1'

  real_T REDDC_Y0;                     // Computed Parameter: REDDC_Y0
                                          //  Referenced by: '<S230>/RED DC'

  real_T Delay_InitialCondition_p;     // Expression: 0.0
                                          //  Referenced by: '<S257>/Delay'

  real_T Constant2_Value_e;            // Expression: 0
                                          //  Referenced by: '<S257>/Constant2'

  real_T Universal_Time1_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time1'

  real_T Universal_Time12_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time12'

  real_T Universal_Time2_InitialValue[9];// Expression: [0;0;0;0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time2'

  real_T Universal_Time7_InitialValue[6];// Expression: [0;0;0;0;0;0]
                                            //  Referenced by: '<Root>/Universal_Time7'

  real_T Merge1_InitialOutput;       // Computed Parameter: Merge1_InitialOutput
                                        //  Referenced by: '<S3>/Merge1'

  real_T Merge2_InitialOutput;       // Computed Parameter: Merge2_InitialOutput
                                        //  Referenced by: '<S3>/Merge2'

  real_T Merge_InitialOutput;         // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S3>/Merge'

  real_T SafetyNumber_Value;           // Expression: 568471
                                          //  Referenced by: '<S16>/Safety Number'

  real_T Gain_Gain;                    // Expression: 100
                                          //  Referenced by: '<S16>/Gain'

  real_T Gain1_Gain;                   // Expression: 100
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

  real_T RED_Tz1_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz1'

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

  real_T Universal_Time22_InitialValue[3];// Expression: [0;0;0]
                                             //  Referenced by: '<Root>/Universal_Time22'

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

  char_T RED_Tz3_InitialValue[256];  // Computed Parameter: RED_Tz3_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz3'

  char_T RED_Tz4_InitialValue[256];  // Computed Parameter: RED_Tz4_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz4'

  char_T RED_Tz5_InitialValue[256];  // Computed Parameter: RED_Tz5_InitialValue
                                        //  Referenced by: '<Root>/RED_Tz5'

  int32_T UDPSend1_Port;               // Computed Parameter: UDPSend1_Port
                                          //  Referenced by: '<S173>/UDP Send1'

  int32_T UDPSend2_Port;               // Computed Parameter: UDPSend2_Port
                                          //  Referenced by: '<S174>/UDP Send2'

  int32_T UDPSend3_Port;               // Computed Parameter: UDPSend3_Port
                                          //  Referenced by: '<S175>/UDP Send3'

  int32_T ReceivePhaseSpaceData_Port;
                               // Computed Parameter: ReceivePhaseSpaceData_Port
                                  //  Referenced by: '<S182>/Receive PhaseSpace Data'

  int32_T UDPReceiveREDClock_Port;// Computed Parameter: UDPReceiveREDClock_Port
                                     //  Referenced by: '<S186>/UDP Receive (RED Clock)'

  int32_T UDPReceiveBLACKClock_Port;
                                // Computed Parameter: UDPReceiveBLACKClock_Port
                                   //  Referenced by: '<S186>/UDP Receive (BLACK Clock)'

  int32_T UDPReceiveBLUEClock_Port;
                                 // Computed Parameter: UDPReceiveBLUEClock_Port
                                    //  Referenced by: '<S186>/UDP Receive (BLUE Clock)'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S225>/UDP Receive'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S227>/UDP Send'

  int32_T UDPSend_Port_h;              // Computed Parameter: UDPSend_Port_h
                                          //  Referenced by: '<S16>/UDP Send'

  P_ChangeBLACKBehavior_Defau_b_T ChangeREDBehavior_h;// '<S17>/Change RED Behavior' 
  P_ChangeBLACKBehavior_Defau_b_T ChangeBLUEBehavior_e;// '<S17>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_Defau_b_T ChangeBLACKBehavior_i;// '<S17>/Change BLACK Behavior' 
  P_EnabledSubsystem_DefaultE_c_T EnabledSubsystem_l1;// '<S216>/Enabled Subsystem' 
  P_EnabledSubsystem_DefaultExp_T EnabledSubsystem_k;// '<S215>/Enabled Subsystem' 
  P_EnabledSubsystem_DefaultE_c_T EnabledSubsystem_d;// '<S206>/Enabled Subsystem' 
  P_EnabledSubsystem_DefaultExp_T EnabledSubsystem_l;// '<S205>/Enabled Subsystem' 
  P_EnabledSubsystem_DefaultE_c_T EnabledSubsystem_g;// '<S196>/Enabled Subsystem' 
  P_EnabledSubsystem_DefaultExp_T EnabledSubsystem;// '<S195>/Enabled Subsystem' 
  P_ChangeBLACKBehavior_Defau_p_T ChangeREDBehavior_d;// '<S190>/Change RED Behavior' 
  P_ChangeBLACKBehavior_Defau_p_T ChangeBLUEBehavior_f;// '<S190>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_Defau_p_T ChangeBLACKBehavior_e;// '<S190>/Change BLACK Behavior' 
  P_ChangeBLACKBehavior_Default_T ChangeREDBehavior;// '<S4>/Change RED Behavior' 
  P_ChangeBLACKBehavior_Default_T ChangeBLUEBehavior;// '<S4>/Change BLUE Behavior' 
  P_ChangeBLACKBehavior_Default_T ChangeBLACKBehavior;// '<S4>/Change BLACK Behavior' 
  P_CustomControlRED_DefaultExp_T CustomControlARM;// '<S3>/Custom Control (ARM)' 
  P_DisableThrustersBLACK_Defau_T DisableThrustersBLUE;// '<S3>/Disable Thrusters (BLUE)' 
  P_DisableThrustersBLACK_Defau_T DisableThrustersBLACK;// '<S3>/Disable Thrusters (BLACK)' 
  P_CustomControlRED_DefaultExp_T DisableThrustersRED;// '<S3>/Disable Thrusters (RED)' 
  P_CustomControlRED_DefaultExp_T CustomControlRED;// '<S3>/Custom Control (RED)' 
  P_Phase0Synchronization_Defau_T Phase6CleanShutdown;// '<S1>/Phase #6: Clean Shutdown' 
  P_Phase4ReturnHome_DefaultExp_T Phase5HoldHome;// '<S1>/Phase #5: Hold Home'
  P_Phase4ReturnHome_DefaultExp_T Phase4ReturnHome;// '<S1>/Phase #4: Return Home' 
  P_SubPhase1_DefaultExperiment_T SubPhase4;// '<S21>/Sub-Phase #4'
  P_SubPhase1_DefaultExperiment_T SubPhase3;// '<S21>/Sub-Phase #3 '
  P_SubPhase1_DefaultExperiment_T SubPhase2;// '<S21>/Sub-Phase #2 '
  P_SubPhase1_DefaultExperiment_T SubPhase1;// '<S21>/Sub-Phase #1'
  P_Phase0Synchronization_Defau_T Phase1StartFloating;// '<S1>/Phase #1: Start Floating ' 
  P_Phase0Synchronization_Defau_T Phase0Synchronization;// '<S1>/Phase #0: Synchronization' 
};

// Real-time Model Data Structure
struct tag_RTM_DefaultExperiment_T {
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

  extern P_DefaultExperiment_T DefaultExperiment_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_DefaultExperiment_T DefaultExperiment_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_DefaultExperiment_T DefaultExperiment_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void DefaultExperiment_initialize(void);
  extern void DefaultExperiment_step(void);
  extern void DefaultExperiment_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_DefaultExperiment_T *const DefaultExperiment_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S131>/Data Type Duplicate' : Unused code path elimination
//  Block '<S132>/Data Type Duplicate' : Unused code path elimination
//  Block '<S133>/Data Type Duplicate' : Unused code path elimination
//  Block '<S136>/Data Type Duplicate' : Unused code path elimination
//  Block '<S137>/Data Type Duplicate' : Unused code path elimination
//  Block '<S138>/Data Type Duplicate' : Unused code path elimination
//  Block '<S141>/Data Type Duplicate' : Unused code path elimination
//  Block '<S142>/Data Type Duplicate' : Unused code path elimination
//  Block '<S143>/Data Type Duplicate' : Unused code path elimination
//  Block '<S122>/Scope' : Unused code path elimination
//  Block '<S150>/Data Type Duplicate' : Unused code path elimination
//  Block '<S151>/Data Type Duplicate' : Unused code path elimination
//  Block '<S152>/Data Type Duplicate' : Unused code path elimination
//  Block '<S154>/Data Type Duplicate' : Unused code path elimination
//  Block '<S155>/Data Type Duplicate' : Unused code path elimination
//  Block '<S156>/Data Type Duplicate' : Unused code path elimination
//  Block '<S159>/Data Type Duplicate' : Unused code path elimination
//  Block '<S160>/Data Type Duplicate' : Unused code path elimination
//  Block '<S161>/Data Type Duplicate' : Unused code path elimination
//  Block '<S164>/Data Type Duplicate' : Unused code path elimination
//  Block '<S165>/Data Type Duplicate' : Unused code path elimination
//  Block '<S166>/Data Type Duplicate' : Unused code path elimination
//  Block '<Root>/If 'simMode' set to '1', then this is a simulation and the dynamics will be simulated. Otherwise, this is an experiment, and the simulation will not be run.' : Unused code path elimination
//  Block '<S173>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S174>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S175>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S182>/Reshape' : Reshape block reduction
//  Block '<S183>/Reshape' : Reshape block reduction
//  Block '<S184>/Reshape' : Reshape block reduction
//  Block '<S185>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'DefaultExperiment'
//  '<S1>'   : 'DefaultExperiment/1 - Experiment Logic'
//  '<S2>'   : 'DefaultExperiment/2 - Guidance'
//  '<S3>'   : 'DefaultExperiment/3 - Control'
//  '<S4>'   : 'DefaultExperiment/Check  Connection'
//  '<S5>'   : 'DefaultExperiment/Data Logger Subsystem'
//  '<S6>'   : 'DefaultExperiment/Debugger'
//  '<S7>'   : 'DefaultExperiment/Float Code'
//  '<S8>'   : 'DefaultExperiment/Gyro.//Accel. Code'
//  '<S9>'   : 'DefaultExperiment/Manipulator Encoder Data'
//  '<S10>'  : 'DefaultExperiment/PhaseSpace Camera Code'
//  '<S11>'  : 'DefaultExperiment/Platform  Identification'
//  '<S12>'  : 'DefaultExperiment/Receive Data from Orin'
//  '<S13>'  : 'DefaultExperiment/Robotic  Arm Code'
//  '<S14>'  : 'DefaultExperiment/Send Data  to Orin'
//  '<S15>'  : 'DefaultExperiment/Simulation  Status'
//  '<S16>'  : 'DefaultExperiment/Thruster Control Code'
//  '<S17>'  : 'DefaultExperiment/Time Sync.'
//  '<S18>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #0: Synchronization'
//  '<S19>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #1: Start Floating '
//  '<S20>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #2: Initial Position'
//  '<S21>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment'
//  '<S22>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #4: Return Home'
//  '<S23>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #5: Hold Home'
//  '<S24>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #6: Clean Shutdown'
//  '<S25>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #2: Initial Position/Desired Joint Angles RED'
//  '<S26>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLACK'
//  '<S27>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #2: Initial Position/Desired Position BLUE'
//  '<S28>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #2: Initial Position/Desired Position RED'
//  '<S29>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1'
//  '<S30>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 '
//  '<S31>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 '
//  '<S32>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4'
//  '<S33>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Joint Angles RED'
//  '<S34>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK'
//  '<S35>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE'
//  '<S36>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED'
//  '<S37>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired'
//  '<S38>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/Wrap'
//  '<S39>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S40>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Circular Tracking'
//  '<S41>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S42>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Wrap'
//  '<S43>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S44>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Circular Tracking'
//  '<S45>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S46>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Wrap'
//  '<S47>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #1/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S48>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Joint Angles RED'
//  '<S49>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK'
//  '<S50>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE'
//  '<S51>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED'
//  '<S52>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S53>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/Wrap'
//  '<S54>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S55>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S56>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S57>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Wrap'
//  '<S58>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S59>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Circular Tracking'
//  '<S60>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S61>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Wrap'
//  '<S62>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #2 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S63>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Joint Angles RED'
//  '<S64>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK'
//  '<S65>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE'
//  '<S66>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED'
//  '<S67>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired'
//  '<S68>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/Wrap'
//  '<S69>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S70>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Circular Tracking'
//  '<S71>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S72>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Wrap'
//  '<S73>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S74>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Circular Tracking'
//  '<S75>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S76>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Wrap'
//  '<S77>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #3 /Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S78>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Joint Angles RED'
//  '<S79>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK'
//  '<S80>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE'
//  '<S81>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED'
//  '<S82>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired'
//  '<S83>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/Wrap'
//  '<S84>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLACK/BLACK_Rz Desired/Subsystem'
//  '<S85>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Circular Tracking'
//  '<S86>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start'
//  '<S87>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Wrap'
//  '<S88>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position BLUE/Calculate Time since Phase #3 Start/Subsystem'
//  '<S89>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Circular Tracking'
//  '<S90>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start'
//  '<S91>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Wrap'
//  '<S92>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #3: Experiment/Sub-Phase #4/Desired Position RED/Calculate Time since Phase #3 Start/Subsystem'
//  '<S93>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #4: Return Home/Desired Joint Angles RED'
//  '<S94>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLACK'
//  '<S95>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #4: Return Home/Desired Position BLUE'
//  '<S96>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #4: Return Home/Desired Position RED'
//  '<S97>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #5: Hold Home/Desired Joint Angles RED'
//  '<S98>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLACK'
//  '<S99>'  : 'DefaultExperiment/1 - Experiment Logic/Phase #5: Hold Home/Desired Position BLUE'
//  '<S100>' : 'DefaultExperiment/1 - Experiment Logic/Phase #5: Hold Home/Desired Position RED'
//  '<S101>' : 'DefaultExperiment/2 - Guidance/Custom PPL (ARM)'
//  '<S102>' : 'DefaultExperiment/2 - Guidance/Custom PPL (BLACK)'
//  '<S103>' : 'DefaultExperiment/2 - Guidance/Custom PPL (BLUE)'
//  '<S104>' : 'DefaultExperiment/2 - Guidance/Custom PPL (RED)'
//  '<S105>' : 'DefaultExperiment/2 - Guidance/Disable PPL (ARM)'
//  '<S106>' : 'DefaultExperiment/2 - Guidance/Disable PPL (BLACK)'
//  '<S107>' : 'DefaultExperiment/2 - Guidance/Disable PPL (BLUE)'
//  '<S108>' : 'DefaultExperiment/2 - Guidance/Disable PPL (RED)'
//  '<S109>' : 'DefaultExperiment/2 - Guidance/Custom PPL (ARM)/Desired Position'
//  '<S110>' : 'DefaultExperiment/2 - Guidance/Custom PPL (BLACK)/Desired Position'
//  '<S111>' : 'DefaultExperiment/2 - Guidance/Custom PPL (BLUE)/Desired Position'
//  '<S112>' : 'DefaultExperiment/2 - Guidance/Custom PPL (RED)/Desired Position'
//  '<S113>' : 'DefaultExperiment/2 - Guidance/Disable PPL (ARM)/Desired Position'
//  '<S114>' : 'DefaultExperiment/2 - Guidance/Disable PPL (BLACK)/Desired Position'
//  '<S115>' : 'DefaultExperiment/2 - Guidance/Disable PPL (BLUE)/Desired Position'
//  '<S116>' : 'DefaultExperiment/2 - Guidance/Disable PPL (RED)/Desired Position'
//  '<S117>' : 'DefaultExperiment/3 - Control/Custom Control (ARM)'
//  '<S118>' : 'DefaultExperiment/3 - Control/Custom Control (RED)'
//  '<S119>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLACK)'
//  '<S120>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLUE)'
//  '<S121>' : 'DefaultExperiment/3 - Control/Default LQR Control (RED)'
//  '<S122>' : 'DefaultExperiment/3 - Control/Default PD (ARM)'
//  '<S123>' : 'DefaultExperiment/3 - Control/Default PD Control (BLACK)'
//  '<S124>' : 'DefaultExperiment/3 - Control/Default PD Control (BLUE)'
//  '<S125>' : 'DefaultExperiment/3 - Control/Default PD Control (RED)'
//  '<S126>' : 'DefaultExperiment/3 - Control/Disable Control (ARM)'
//  '<S127>' : 'DefaultExperiment/3 - Control/Disable Thrusters (BLACK)'
//  '<S128>' : 'DefaultExperiment/3 - Control/Disable Thrusters (BLUE)'
//  '<S129>' : 'DefaultExperiment/3 - Control/Disable Thrusters (RED)'
//  '<S130>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLACK)/Calculate Error'
//  '<S131>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLACK)/Discrete Derivative'
//  '<S132>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLACK)/Discrete Derivative1'
//  '<S133>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLACK)/Discrete Derivative2'
//  '<S134>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S135>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLUE)/Calculate Error'
//  '<S136>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLUE)/Discrete Derivative'
//  '<S137>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLUE)/Discrete Derivative1'
//  '<S138>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLUE)/Discrete Derivative2'
//  '<S139>' : 'DefaultExperiment/3 - Control/Default LQR Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S140>' : 'DefaultExperiment/3 - Control/Default LQR Control (RED)/Calculate Error'
//  '<S141>' : 'DefaultExperiment/3 - Control/Default LQR Control (RED)/Discrete Derivative'
//  '<S142>' : 'DefaultExperiment/3 - Control/Default LQR Control (RED)/Discrete Derivative1'
//  '<S143>' : 'DefaultExperiment/3 - Control/Default LQR Control (RED)/Discrete Derivative2'
//  '<S144>' : 'DefaultExperiment/3 - Control/Default LQR Control (RED)/Calculate Error/MATLAB Function'
//  '<S145>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Passthrough for Experiment'
//  '<S146>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller'
//  '<S147>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)'
//  '<S148>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)'
//  '<S149>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)'
//  '<S150>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Elbow)/Discrete Derivative1'
//  '<S151>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Shoulder)/Discrete Derivative1'
//  '<S152>' : 'DefaultExperiment/3 - Control/Default PD (ARM)/Simulated Position Controller/Custom Discrete PD (Wrist)/Discrete Derivative1'
//  '<S153>' : 'DefaultExperiment/3 - Control/Default PD Control (BLACK)/Calculate Error'
//  '<S154>' : 'DefaultExperiment/3 - Control/Default PD Control (BLACK)/Discrete Derivative'
//  '<S155>' : 'DefaultExperiment/3 - Control/Default PD Control (BLACK)/Discrete Derivative1'
//  '<S156>' : 'DefaultExperiment/3 - Control/Default PD Control (BLACK)/Discrete Derivative2'
//  '<S157>' : 'DefaultExperiment/3 - Control/Default PD Control (BLACK)/Calculate Error/MATLAB Function'
//  '<S158>' : 'DefaultExperiment/3 - Control/Default PD Control (BLUE)/Calculate Error'
//  '<S159>' : 'DefaultExperiment/3 - Control/Default PD Control (BLUE)/Discrete Derivative'
//  '<S160>' : 'DefaultExperiment/3 - Control/Default PD Control (BLUE)/Discrete Derivative1'
//  '<S161>' : 'DefaultExperiment/3 - Control/Default PD Control (BLUE)/Discrete Derivative2'
//  '<S162>' : 'DefaultExperiment/3 - Control/Default PD Control (BLUE)/Calculate Error/MATLAB Function'
//  '<S163>' : 'DefaultExperiment/3 - Control/Default PD Control (RED)/Calculate Error'
//  '<S164>' : 'DefaultExperiment/3 - Control/Default PD Control (RED)/Discrete Derivative'
//  '<S165>' : 'DefaultExperiment/3 - Control/Default PD Control (RED)/Discrete Derivative1'
//  '<S166>' : 'DefaultExperiment/3 - Control/Default PD Control (RED)/Discrete Derivative2'
//  '<S167>' : 'DefaultExperiment/3 - Control/Default PD Control (RED)/Calculate Error/MATLAB Function'
//  '<S168>' : 'DefaultExperiment/Check  Connection/Change BLACK Behavior'
//  '<S169>' : 'DefaultExperiment/Check  Connection/Change BLUE Behavior'
//  '<S170>' : 'DefaultExperiment/Check  Connection/Change RED Behavior'
//  '<S171>' : 'DefaultExperiment/Data Logger Subsystem/Data Logger'
//  '<S172>' : 'DefaultExperiment/Data Logger Subsystem/Data Logger/MATLAB Function'
//  '<S173>' : 'DefaultExperiment/Debugger/Change BLACK Behavior'
//  '<S174>' : 'DefaultExperiment/Debugger/Change BLUE Behavior'
//  '<S175>' : 'DefaultExperiment/Debugger/Change RED Behavior'
//  '<S176>' : 'DefaultExperiment/Float Code/Enable Pucks'
//  '<S177>' : 'DefaultExperiment/Gyro.//Accel. Code/Log Gyro//Accel'
//  '<S178>' : 'DefaultExperiment/Gyro.//Accel. Code/Log Gyro//Accel/Parse IMU Data'
//  '<S179>' : 'DefaultExperiment/Manipulator Encoder Data/Change ARM Behavior'
//  '<S180>' : 'DefaultExperiment/PhaseSpace Camera Code/Initialize Universal Time (Simulation)'
//  '<S181>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States'
//  '<S182>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data'
//  '<S183>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data'
//  '<S184>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data'
//  '<S185>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data'
//  '<S186>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)'
//  '<S187>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Enabled Subsystem2'
//  '<S188>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function'
//  '<S189>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/MATLAB Function1'
//  '<S190>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time'
//  '<S191>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLACK Behavior'
//  '<S192>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change BLUE Behavior'
//  '<S193>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Receive and Process Phasespace Data/Check for Sychronization (Updated)/Send Sync. Time/Change RED Behavior'
//  '<S194>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step'
//  '<S195>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1'
//  '<S196>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2'
//  '<S197>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Wrap'
//  '<S198>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S199>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Calculate True  Time Step/MATLAB Function'
//  '<S200>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem'
//  '<S201>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S202>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem'
//  '<S203>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLACK Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S204>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step'
//  '<S205>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1'
//  '<S206>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2'
//  '<S207>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Wrap'
//  '<S208>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S209>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Calculate True  Time Step/MATLAB Function'
//  '<S210>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem'
//  '<S211>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S212>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem'
//  '<S213>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store BLUE Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S214>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step'
//  '<S215>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1'
//  '<S216>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2'
//  '<S217>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Wrap'
//  '<S218>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/Enabled Subsystem3'
//  '<S219>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Calculate True  Time Step/MATLAB Function'
//  '<S220>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem'
//  '<S221>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem1/Enabled Subsystem/MATLAB Function'
//  '<S222>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem'
//  '<S223>' : 'DefaultExperiment/PhaseSpace Camera Code/Use Hardware to Obtain States/Store RED Data/Subsystem2/Enabled Subsystem/MATLAB Function'
//  '<S224>' : 'DefaultExperiment/Platform  Identification/Subsystem'
//  '<S225>' : 'DefaultExperiment/Receive Data from Orin/Subsystem'
//  '<S226>' : 'DefaultExperiment/Robotic  Arm Code/Change ARM Behavior'
//  '<S227>' : 'DefaultExperiment/Send Data  to Orin/Subsystem'
//  '<S228>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior'
//  '<S229>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior'
//  '<S230>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior'
//  '<S231>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle'
//  '<S232>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body'
//  '<S233>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S234>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S235>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S236>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S237>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S238>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S239>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S240>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S241>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S242>' : 'DefaultExperiment/Thruster Control Code/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S243>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle'
//  '<S244>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body'
//  '<S245>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S246>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S247>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function1'
//  '<S248>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S249>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S250>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S251>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S252>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S253>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S254>' : 'DefaultExperiment/Thruster Control Code/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S255>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle'
//  '<S256>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Rotate Forces to Body'
//  '<S257>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM'
//  '<S258>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess'
//  '<S259>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function5'
//  '<S260>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/MATLAB Function8'
//  '<S261>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial'
//  '<S262>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem'
//  '<S263>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Duty Cycle @ PWM/Enabled Subsystem1'
//  '<S264>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Generate Initial Guess/MATLAB Function'
//  '<S265>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Calculate Duty Cycle/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S266>' : 'DefaultExperiment/Thruster Control Code/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S267>' : 'DefaultExperiment/Time Sync./Change BLACK Behavior'
//  '<S268>' : 'DefaultExperiment/Time Sync./Change BLUE Behavior'
//  '<S269>' : 'DefaultExperiment/Time Sync./Change RED Behavior'

#endif                                 // DefaultExperiment_h_

//
// File trailer for generated code.
//
// [EOF]
//
