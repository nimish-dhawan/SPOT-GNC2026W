//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DefaultSPOT_data.cpp
//
// Code generated for Simulink model 'DefaultSPOT'.
//
// Model version                  : 4.656
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Mar 16 12:28:00 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "DefaultSPOT.h"

// Block parameters (default storage)
P_DefaultSPOT_T DefaultSPOT_P = {
  // Variable: F_red_X_nominal
  //  Referenced by:
  //    '<S231>/MATLAB Function5'
  //    '<S243>/MATLAB Function5'
  //    '<S255>/MATLAB Function5'

  0.2825,

  // Variable: F_red_Y_nominal
  //  Referenced by:
  //    '<S231>/MATLAB Function5'
  //    '<S243>/MATLAB Function5'
  //    '<S255>/MATLAB Function5'

  0.2825,

  // Variable: F_thrusters_BLACK
  //  Referenced by: '<S234>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_BLUE
  //  Referenced by: '<S246>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_RED
  //  Referenced by: '<S258>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: K_BLACK
  //  Referenced by: '<S119>/Constant2'

  { 0.40261011025699511, -3.4287825942218297E-15, -7.6568971511887352E-15,
    4.896176968930996E-15, 0.40261011025700855, -3.7902115134773985E-15,
    -3.8648663400066327E-16, -9.1036478180055036E-16, 0.0815549644322501,
    3.395465184953931, 2.0360842460827311E-14, -6.3325920292291945E-14,
    -7.0448446123140753E-14, 3.3954651849541753, -6.212171373874009E-15,
    -7.5643673053589907E-16, -7.9653463685425227E-16, 0.40690949597934273 },

  // Variable: K_BLUE
  //  Referenced by: '<S120>/Constant2'

  { 0.40261011025701493, 1.2206182528119487E-14, -1.4639288893715909E-15,
    -9.4230274216387939E-15, 0.40261011025700266, 4.1197784005288409E-15,
    -1.485297024747621E-15, 1.4061593822592103E-15, 0.0814074262630697,
    3.3954651849543733, 2.0981480441939482E-14, -9.2588841052682911E-15,
    -5.4540211878191527E-14, 3.3954651849542157, -4.1164164779134136E-14,
    -6.4042550040150137E-16, 3.4893935173859177E-16, 0.40554915553132265 },

  // Variable: K_RED
  //  Referenced by: '<S121>/Constant2'

  { 0.40256594667683754, 2.0662088914679269E-14, -1.7996031327371092E-15,
    2.6520865059578737E-16, 0.40256594667684487, 1.2018851384452491E-14,
    -9.46796434292776E-16, 1.4460895348381485E-16, 0.081495906381188726,
    3.3752746856917519, 8.1934459217336553E-14, 1.8840564859297624E-15,
    1.603907055206163E-14, 3.3752746856917333, 5.301322954957635E-14,
    -5.8460770909695588E-17, 4.1601121670017965E-17, 0.40636232022479712 },

  // Variable: Kd_elarm
  //  Referenced by: '<S147>/kd_elarm'

  0.8,

  // Variable: Kd_sharm
  //  Referenced by: '<S148>/kd_sharm'

  1.0,

  // Variable: Kd_tb
  //  Referenced by: '<S123>/Gain5'

  1.8,

  // Variable: Kd_tblue
  //  Referenced by: '<S124>/Gain5'

  1.8,

  // Variable: Kd_tr
  //  Referenced by: '<S125>/Gain5'

  1.8,

  // Variable: Kd_wrarm
  //  Referenced by: '<S149>/kd_wrarm'

  0.6,

  // Variable: Kd_xb
  //  Referenced by: '<S123>/Gain3'

  3.6,

  // Variable: Kd_xblue
  //  Referenced by: '<S124>/Gain3'

  3.6,

  // Variable: Kd_xr
  //  Referenced by: '<S125>/Gain3'

  3.6,

  // Variable: Kd_yb
  //  Referenced by: '<S123>/Gain4'

  3.6,

  // Variable: Kd_yblue
  //  Referenced by: '<S124>/Gain4'

  3.6,

  // Variable: Kd_yr
  //  Referenced by: '<S125>/Gain4'

  3.6,

  // Variable: Kp_elarm
  //  Referenced by: '<S147>/kp_elarm'

  1.2,

  // Variable: Kp_sharm
  //  Referenced by: '<S148>/kp_sharm'

  1.5,

  // Variable: Kp_tb
  //  Referenced by: '<S123>/Gain2'

  0.5,

  // Variable: Kp_tblue
  //  Referenced by: '<S124>/Gain2'

  0.5,

  // Variable: Kp_tr
  //  Referenced by: '<S125>/Gain2'

  0.5,

  // Variable: Kp_wrarm
  //  Referenced by: '<S149>/kp_wrarm'

  1.0,

  // Variable: Kp_xb
  //  Referenced by: '<S123>/Gain'

  1.0,

  // Variable: Kp_xblue
  //  Referenced by: '<S124>/Gain'

  1.0,

  // Variable: Kp_xr
  //  Referenced by: '<S125>/Gain'

  1.0,

  // Variable: Kp_yb
  //  Referenced by: '<S123>/Gain1'

  1.0,

  // Variable: Kp_yblue
  //  Referenced by: '<S124>/Gain1'

  1.0,

  // Variable: Kp_yr
  //  Referenced by: '<S125>/Gain1'

  1.0,

  // Variable: PWMFreq
  //  Referenced by:
  //    '<S16>/PWM Frequency'
  //    '<S231>/MATLAB Function1'
  //    '<S243>/MATLAB Function1'
  //    '<S255>/MATLAB Function8'
  //    '<S233>/Constant1'
  //    '<S245>/Constant1'
  //    '<S257>/Constant1'

  5.0,

  // Variable: Phase0_End
  //  Referenced by: '<S1>/Constant4'

  10.0,

  // Variable: Phase1_End
  //  Referenced by: '<S1>/Constant'

  15.0,

  // Variable: Phase2_End
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

  55.0,

  // Variable: Phase3_End
  //  Referenced by: '<S1>/Constant2'

  225.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by: '<S21>/Constant4'

  65.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by: '<S21>/Constant1'

  75.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by: '<S21>/Constant2'

  105.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by: '<S21>/Constant3'

  225.0,

  // Variable: Phase4_End
  //  Referenced by: '<S1>/Constant3'

  255.0,

  // Variable: Phase5_End
  //  Referenced by: '<S1>/Constant6'

  275.0,

  // Variable: Tz_lim_elarm
  //  Referenced by: '<S146>/Saturation1'

  0.1,

  // Variable: Tz_lim_sharm
  //  Referenced by: '<S146>/Saturation'

  0.1,

  // Variable: Tz_lim_wrarm
  //  Referenced by: '<S146>/Saturation3'

  0.1,

  // Variable: baseRate
  //  Referenced by:
  //    '<S179>/Read Joint Positions using  Dynamixel Encoders'
  //    '<S224>/WhoAmI'
  //    '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.05,

  // Variable: dataRate
  //  Referenced by:
  //    '<S194>/Constant'
  //    '<S204>/Constant'
  //    '<S214>/Constant'

  0.1,

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S94>/Desired States (BLACK)'
  //    '<S98>/Desired States (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S95>/Desired States (BLUE)'
  //    '<S99>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S96>/Constant2'
  //    '<S100>/Constant2'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: init_states_BLACK
  //  Referenced by: '<S26>/Desired States (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: init_states_BLUE
  //  Referenced by: '<S27>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by: '<S28>/Constant2'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: platformSelection
  //  Referenced by: '<S186>/MATLAB Function'

  3.0,

  // Variable: simMode
  //  Referenced by: '<S15>/Constant'

  0.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by: '<S234>/MATLAB Function'

  { 73.881766499134855, -64.118233500865131, 56.874845513718384,
    -84.6251544862816, 64.118233500865131, -66.281766499134861, 79.1251544862816,
    -49.874845513718391 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by: '<S246>/MATLAB Function'

  { 73.815115806582682, -64.1848841934173, 57.054043071921981, -84.445956928078,
    64.1848841934173, -66.215115806582673, 78.945956928078, -50.054043071921988
  },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S231>/MATLAB Function5'
  //    '<S243>/MATLAB Function5'
  //    '<S255>/MATLAB Function5'
  //    '<S258>/MATLAB Function'

  { 71.579508939606143, -60.420491060393836, 60.451141138666884,
    -84.0488588613331, 63.420491060393836, -70.579508939606143, 76.5488588613331,
    -52.951141138666891 },

  // Variable: xLength
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

  3.51155,

  // Variable: yLength
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

  2.41935,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S164>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevScale
  //  Referenced by: '<S165>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevScale
  //  Referenced by: '<S166>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_i
  //  Referenced by: '<S141>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
  //  Referenced by: '<S142>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
  //  Referenced by: '<S143>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_p
  //  Referenced by: '<S154>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
  //  Referenced by: '<S155>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
  //  Referenced by: '<S156>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_d
  //  Referenced by: '<S131>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
  //  Referenced by: '<S132>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
  //  Referenced by: '<S133>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
  //  Referenced by: '<S159>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
  //  Referenced by: '<S160>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
  //  Referenced by: '<S161>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_n
  //  Referenced by: '<S136>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
  //  Referenced by: '<S137>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
  //  Referenced by: '<S138>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
  //  Referenced by: '<S150>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
  //  Referenced by: '<S151>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
  //  Referenced by: '<S152>/UD'

  0.0,

  // Mask Parameter: MATLABFunction5_max_iters
  //  Referenced by: '<S231>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_b
  //  Referenced by: '<S243>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_e
  //  Referenced by: '<S255>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_tol
  //  Referenced by: '<S231>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_j
  //  Referenced by: '<S243>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_g
  //  Referenced by: '<S255>/MATLAB Function5'

  1.0E-6,

  // Expression: 0
  //  Referenced by: '<S20>/Constant11'

  0.0,

  // Expression: 0
  //  Referenced by: '<S20>/Constant12'

  0.0,

  // Expression: 0
  //  Referenced by: '<S20>/Constant14'

  0.0,

  // Expression: 0
  //  Referenced by: '<S20>/Constant15'

  0.0,

  // Expression: 0
  //  Referenced by: '<S20>/Constant18'

  0.0,

  // Expression: 2
  //  Referenced by: '<S20>/Constant4'

  2.0,

  // Expression: 2
  //  Referenced by: '<S20>/Constant5'

  2.0,

  // Expression: 1
  //  Referenced by: '<S20>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S20>/Constant8'

  2.0,

  // Expression: pi/2
  //  Referenced by: '<S25>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S25>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S25>/Constant2'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S164>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S165>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S166>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S125>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S125>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S125>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_h
  //  Referenced by: '<S141>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_e
  //  Referenced by: '<S142>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S143>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S154>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_hr
  //  Referenced by: '<S155>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ca
  //  Referenced by: '<S156>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S123>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S123>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S123>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_nd
  //  Referenced by: '<S131>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_co
  //  Referenced by: '<S132>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_no
  //  Referenced by: '<S133>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S159>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S160>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_px
  //  Referenced by: '<S161>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S124>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S124>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S124>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_ft
  //  Referenced by: '<S136>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_eh
  //  Referenced by: '<S137>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ii
  //  Referenced by: '<S138>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_pu
  //  Referenced by: '<S150>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f0
  //  Referenced by: '<S151>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_nz
  //  Referenced by: '<S152>/TSamp'

  20.0,

  // Expression: 1
  //  Referenced by: '<S122>/Constant7'

  1.0,

  // Computed Parameter: Merge3_InitialOutput
  //  Referenced by: '<S122>/Merge3'

  0.0,

  // Computed Parameter: Merge4_InitialOutput
  //  Referenced by: '<S122>/Merge4'

  0.0,

  // Computed Parameter: Merge5_InitialOutput
  //  Referenced by: '<S122>/Merge5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S126>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S126>/Zero'

  0.0,

  // Expression: 428
  //  Referenced by: '<S176>/GPIO Write1'

  428.0,

  // Expression: 1
  //  Referenced by: '<S176>/GPIO Write1'

  1.0,

  // Expression: -1
  //  Referenced by: '<S177>/Gyroscope//Accelerometer'

  -1.0,

  // Expression: 0.0
  //  Referenced by: '<S179>/Delay'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S179>/Delay1'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S179>/Delay2'

  0.0,

  // Computed Parameter: UniversalTime_Y0
  //  Referenced by: '<S187>/Universal Time'

  0.0,

  // Computed Parameter: dytdt_Y0
  //  Referenced by: '<S198>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_j
  //  Referenced by: '<S208>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_d
  //  Referenced by: '<S218>/dy(t)//dt'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S183>/Convert BLAX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S183>/Convert BLAY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S183>/Convert BLACKVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S183>/Convert BLACKVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S194>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S194>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S194>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S196>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S196>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S195>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S195>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S184>/Convert BLUX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S184>/Convert BLUY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S184>/Convert BLUEVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S184>/Convert BLUEVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S204>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S204>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S204>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S206>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S206>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S205>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S205>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S185>/Convert REDX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S185>/Convert REDY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S185>/Convert REDVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S185>/Convert REDVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S214>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S214>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S214>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S216>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S216>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S215>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S215>/Constant3'

  0.0,

  // Expression: 1
  //  Referenced by: '<S186>/Constant'

  1.0,

  // Expression: 400
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 0
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 200
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  200.0,

  // Expression: 3072
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  3072.0,

  // Expression: 1024
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  1024.0,

  // Expression: 0
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 850
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  850.0,

  // Expression: 400
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 100
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  100.0,

  // Expression: 20
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  20.0,

  // Expression: 0
  //  Referenced by: '<S226>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S238>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S239>/Out1'

  0.0,

  // Computed Parameter: BLACKDC_Y0
  //  Referenced by: '<S228>/BLACK DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S233>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S233>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S250>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_js
  //  Referenced by: '<S251>/Out1'

  0.0,

  // Computed Parameter: BLUEDC_Y0
  //  Referenced by: '<S229>/BLUE DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S245>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S245>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S262>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S263>/Out1'

  0.0,

  // Computed Parameter: REDDC_Y0
  //  Referenced by: '<S230>/RED DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S257>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S257>/Constant2'

  0.0,

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time12'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time2'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time7'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Computed Parameter: Merge1_InitialOutput
  //  Referenced by: '<S3>/Merge1'

  0.0,

  // Computed Parameter: Merge2_InitialOutput
  //  Referenced by: '<S3>/Merge2'

  0.0,

  // Computed Parameter: Merge_InitialOutput
  //  Referenced by: '<S3>/Merge'

  0.0,

  // Expression: 568471
  //  Referenced by: '<S16>/Safety Number'

  568471.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain1'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain2'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain3'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain4'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain5'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain6'

  100.0,

  // Expression: 100
  //  Referenced by: '<S16>/Gain7'

  100.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz15'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz20'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz25'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz37'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz38'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz7'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz8'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz9'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time'

  0.0,

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time10'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time11'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time13'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time14'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time15'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time16'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time17'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time18'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time19'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time20'

  0.0,

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time22'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time24'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time25'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time26'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time27'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time28'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time29'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time3'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time30'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time31'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time32'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time33'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time34'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time35'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time4'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time5'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time6'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time8'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time9'

  0.0,

  // Expression: "Target: Running Phase 2"
  //  Referenced by: '<S20>/String Constant1'

  "Target: Running Phase 2",

  // Expression: "Obstacle: Running Phase 2"
  //  Referenced by: '<S20>/String Constant2'

  "Obstacle: Running Phase 2",

  // Expression: "Chaser: Running Phase 2"
  //  Referenced by: '<S20>/String Constant'

  "Chaser: Running Phase 2",

  // Computed Parameter: RED_Tz3_InitialValue
  //  Referenced by: '<Root>/RED_Tz3'

  "",

  // Computed Parameter: RED_Tz4_InitialValue
  //  Referenced by: '<Root>/RED_Tz4'

  "",

  // Computed Parameter: RED_Tz5_InitialValue
  //  Referenced by: '<Root>/RED_Tz5'

  "",

  // Computed Parameter: UDPSend1_Port
  //  Referenced by: '<S173>/UDP Send1'

  55000,

  // Computed Parameter: UDPSend2_Port
  //  Referenced by: '<S174>/UDP Send2'

  55000,

  // Computed Parameter: UDPSend3_Port
  //  Referenced by: '<S175>/UDP Send3'

  55000,

  // Computed Parameter: ReceivePhaseSpaceData_Port
  //  Referenced by: '<S182>/Receive PhaseSpace Data'

  31534,

  // Computed Parameter: UDPReceiveREDClock_Port
  //  Referenced by: '<S186>/UDP Receive (RED Clock)'

  48740,

  // Computed Parameter: UDPReceiveBLACKClock_Port
  //  Referenced by: '<S186>/UDP Receive (BLACK Clock)'

  48741,

  // Computed Parameter: UDPReceiveBLUEClock_Port
  //  Referenced by: '<S186>/UDP Receive (BLUE Clock)'

  48742,

  // Computed Parameter: UDPReceive_Port
  //  Referenced by: '<S225>/UDP Receive'

  36845,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<S227>/UDP Send'

  46875,

  // Computed Parameter: UDPSend_Port_h
  //  Referenced by: '<S16>/UDP Send'

  48291,

  // Start of '<S17>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S269>/UDP Send (Clock)'

    48740
  }
  ,

  // End of '<S17>/Change RED Behavior'

  // Start of '<S17>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S268>/UDP Send (Clock)'

    48742
  }
  ,

  // End of '<S17>/Change BLUE Behavior'

  // Start of '<S17>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S267>/UDP Send (Clock)'

    48741
  }
  ,

  // End of '<S17>/Change BLACK Behavior'

  // Start of '<S216>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S222>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S222>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S222>/Delay'

    0.0
  }
  ,

  // End of '<S216>/Enabled Subsystem'

  // Start of '<S215>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S220>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S220>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S220>/Delay'

    0.0
  }
  ,

  // End of '<S215>/Enabled Subsystem'

  // Start of '<S206>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S212>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S212>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S212>/Delay'

    0.0
  }
  ,

  // End of '<S206>/Enabled Subsystem'

  // Start of '<S205>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S210>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S210>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S210>/Delay'

    0.0
  }
  ,

  // End of '<S205>/Enabled Subsystem'

  // Start of '<S196>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S202>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S202>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S202>/Delay'

    0.0
  }
  ,

  // End of '<S196>/Enabled Subsystem'

  // Start of '<S195>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S200>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S200>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S200>/Delay'

    0.0
  }
  ,

  // End of '<S195>/Enabled Subsystem'

  // Start of '<S190>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S193>/UDP Send (GUI)'

    48720
  }
  ,

  // End of '<S190>/Change RED Behavior'

  // Start of '<S190>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S192>/UDP Send (GUI)'

    48722
  }
  ,

  // End of '<S190>/Change BLUE Behavior'

  // Start of '<S190>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S191>/UDP Send (GUI)'

    48721
  }
  ,

  // End of '<S190>/Change BLACK Behavior'

  // Start of '<S4>/Change RED Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S170>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S170>/UDP Send'

    33001
  }
  ,

  // End of '<S4>/Change RED Behavior'

  // Start of '<S4>/Change BLUE Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S169>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S169>/UDP Send'

    33003
  }
  ,

  // End of '<S4>/Change BLUE Behavior'

  // Start of '<S4>/Change BLACK Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S168>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S168>/UDP Send'

    33002
  }
  ,

  // End of '<S4>/Change BLACK Behavior'

  // Start of '<S3>/Custom Control (ARM)'
  {
    // Expression: 0
    //  Referenced by: '<S117>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Custom Control (ARM)'

  // Start of '<S3>/Disable Thrusters (BLUE)'
  {
    // Expression: 0
    //  Referenced by: '<S128>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLUE)'

  // Start of '<S3>/Disable Thrusters (BLACK)'
  {
    // Expression: 0
    //  Referenced by: '<S127>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLACK)'

  // Start of '<S3>/Disable Thrusters (RED)'
  {
    // Expression: 0
    //  Referenced by: '<S129>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (RED)'

  // Start of '<S3>/Custom Control (RED)'
  {
    // Expression: 0
    //  Referenced by: '<S118>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Custom Control (RED)'

  // Start of '<S1>/Phase #6: Clean Shutdown'
  {
    // Expression: 0
    //  Referenced by: '<S24>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant8'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Puck State'

    0.0,

    // Expression: "Chaser: End of Experiment Reached"
    //  Referenced by: '<S24>/String Constant'

    "Chaser: End of Experiment Reached",

    // Expression: "Target: End of Experiment Reached"
    //  Referenced by: '<S24>/String Constant1'

    "Target: End of Experiment Reached",

    // Expression: "Obstacle: End of Experiment Reached"
    //  Referenced by: '<S24>/String Constant2'

    "Obstacle: End of Experiment Reached"
  }
  ,

  // End of '<S1>/Phase #6: Clean Shutdown'

  // Start of '<S1>/Phase #5: Hold Home'
  {
    // Expression: 0
    //  Referenced by: '<S23>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S23>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S23>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S23>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S23>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S23>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S23>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S23>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S23>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S97>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S97>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S97>/Constant2'

    0.0,

    // Expression: "Target: Running Phase 5"
    //  Referenced by: '<S23>/String Constant1'

    "Target: Running Phase 5",

    // Expression: "Obstacle: Running Phase 5"
    //  Referenced by: '<S23>/String Constant2'

    "Obstacle: Running Phase 5",

    // Expression: "Chaser: Running Phase 5"
    //  Referenced by: '<S23>/String Constant'

    "Chaser: Running Phase 5"
  }
  ,

  // End of '<S1>/Phase #5: Hold Home'

  // Start of '<S1>/Phase #4: Return Home'
  {
    // Expression: 0
    //  Referenced by: '<S22>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S22>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S22>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S22>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S22>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S93>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S93>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S93>/Constant2'

    0.0,

    // Expression: "Target: Running Phase 4"
    //  Referenced by: '<S22>/String Constant1'

    "Target: Running Phase 4",

    // Expression: "Obstacle: Running Phase 4"
    //  Referenced by: '<S22>/String Constant2'

    "Obstacle: Running Phase 4",

    // Expression: "Chaser: Running Phase 4"
    //  Referenced by: '<S22>/String Constant'

    "Chaser: Running Phase 4"
  }
  ,

  // End of '<S1>/Phase #4: Return Home'

  // Start of '<S21>/Sub-Phase #4'
  {
    // Expression: 0
    //  Referenced by: '<S32>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S32>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S32>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S32>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S32>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S32>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S32>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S32>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S32>/Constant8'

    2.0,

    // Expression: 0
    //  Referenced by: '<S78>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S78>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S78>/Constant2'

    0.0,

    // Expression: 0.03490659
    //  Referenced by: '<S80>/Desired Rate '

    0.03490659,

    // Expression: -0.85
    //  Referenced by: '<S85>/Gain'

    -0.85,

    // Expression: -0.85
    //  Referenced by: '<S85>/Gain1'

    -0.85,

    // Expression: 0.03490659
    //  Referenced by: '<S82>/Desired Rate (BLACK)'

    0.03490659,

    // Expression: 0.03490659
    //  Referenced by: '<S81>/Desired Rate '

    0.03490659,

    // Expression: 0.85
    //  Referenced by: '<S89>/Gain'

    0.85,

    // Expression: 0.85
    //  Referenced by: '<S89>/Gain1'

    0.85,

    // Expression: pi+0.01
    //  Referenced by: '<S81>/Constant'

    3.1515926535897929,

    // Expression: "Target: Running Phase 3 Sub-Phase 4"
    //  Referenced by: '<S32>/String Constant1'

    "Target: Running Phase 3 Sub-Phase 4",

    // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
    //  Referenced by: '<S32>/String Constant2'

    "Obstacle: Running Phase 3 Sub-Phase 4",

    // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
    //  Referenced by: '<S32>/String Constant'

    "Chaser: Running Phase 3 Sub-Phase 4"
  }
  ,

  // End of '<S21>/Sub-Phase #4'

  // Start of '<S21>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S31>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S31>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S31>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S31>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S31>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S31>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S31>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S31>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S31>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S63>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S63>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S63>/Constant2'

    0.0,

    // Expression: 0.03490659
    //  Referenced by: '<S65>/Desired Rate '

    0.03490659,

    // Expression: -0.85
    //  Referenced by: '<S70>/Gain'

    -0.85,

    // Expression: -0.85
    //  Referenced by: '<S70>/Gain1'

    -0.85,

    // Expression: 0.03490659
    //  Referenced by: '<S67>/Desired Rate (BLACK)'

    0.03490659,

    // Expression: 0.03490659
    //  Referenced by: '<S66>/Desired Rate '

    0.03490659,

    // Expression: 0.85
    //  Referenced by: '<S74>/Gain'

    0.85,

    // Expression: 0.85
    //  Referenced by: '<S74>/Gain1'

    0.85,

    // Expression: pi+0.01
    //  Referenced by: '<S66>/Constant'

    3.1515926535897929,

    // Expression: "Target: Running Phase 3 Sub-Phase 3"
    //  Referenced by: '<S31>/String Constant1'

    "Target: Running Phase 3 Sub-Phase 3",

    // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
    //  Referenced by: '<S31>/String Constant2'

    "Obstacle: Running Phase 3 Sub-Phase 3",

    // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
    //  Referenced by: '<S31>/String Constant'

    "Chaser: Running Phase 3 Sub-Phase 3"
  }
  ,

  // End of '<S21>/Sub-Phase #3 '

  // Start of '<S21>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S30>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S30>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S30>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S30>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S30>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S30>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S30>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S30>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S30>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S48>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S48>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S48>/Constant2'

    0.0,

    // Expression: 0.03490659
    //  Referenced by: '<S50>/Desired Rate '

    0.03490659,

    // Expression: -0.85
    //  Referenced by: '<S55>/Gain'

    -0.85,

    // Expression: -0.85
    //  Referenced by: '<S55>/Gain1'

    -0.85,

    // Expression: 0.03490659
    //  Referenced by: '<S52>/Desired Rate (BLACK)'

    0.03490659,

    // Expression: 0.03490659
    //  Referenced by: '<S51>/Desired Rate '

    0.03490659,

    // Expression: 0.85
    //  Referenced by: '<S59>/Gain'

    0.85,

    // Expression: 0.85
    //  Referenced by: '<S59>/Gain1'

    0.85,

    // Expression: pi+0.01
    //  Referenced by: '<S51>/Constant'

    3.1515926535897929,

    // Expression: "Target: Running Phase 3 Sub-Phase 2"
    //  Referenced by: '<S30>/String Constant1'

    "Target: Running Phase 3 Sub-Phase 2",

    // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
    //  Referenced by: '<S30>/String Constant2'

    "Obstacle: Running Phase 3 Sub-Phase 2",

    // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
    //  Referenced by: '<S30>/String Constant'

    "Chaser: Running Phase 3 Sub-Phase 2"
  }
  ,

  // End of '<S21>/Sub-Phase #2 '

  // Start of '<S21>/Sub-Phase #1'
  {
    // Expression: 0
    //  Referenced by: '<S29>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S29>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S29>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S29>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S29>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S29>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S29>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S29>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S29>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S33>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S33>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S33>/Constant2'

    0.0,

    // Expression: 0.03490659
    //  Referenced by: '<S35>/Desired Rate '

    0.03490659,

    // Expression: -0.85
    //  Referenced by: '<S40>/Gain'

    -0.85,

    // Expression: -0.85
    //  Referenced by: '<S40>/Gain1'

    -0.85,

    // Expression: 0.03490659
    //  Referenced by: '<S37>/Desired Rate (BLACK)'

    0.03490659,

    // Expression: 0.03490659
    //  Referenced by: '<S36>/Desired Rate '

    0.03490659,

    // Expression: 0.85
    //  Referenced by: '<S44>/Gain'

    0.85,

    // Expression: 0.85
    //  Referenced by: '<S44>/Gain1'

    0.85,

    // Expression: pi+0.01
    //  Referenced by: '<S36>/Constant'

    3.1515926535897929,

    // Expression: "Target: Running Phase 3 Sub-Phase 1"
    //  Referenced by: '<S29>/String Constant1'

    "Target: Running Phase 3 Sub-Phase 1",

    // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
    //  Referenced by: '<S29>/String Constant2'

    "Obstacle: Running Phase 3 Sub-Phase 1",

    // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
    //  Referenced by: '<S29>/String Constant'

    "Chaser: Running Phase 3 Sub-Phase 1"
  }
  ,

  // End of '<S21>/Sub-Phase #1'

  // Start of '<S1>/Phase #1: Start Floating '
  {
    // Expression: 0
    //  Referenced by: '<S19>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S19>/Constant8'

    0.0,

    // Expression: 1
    //  Referenced by: '<S19>/Puck State'

    1.0,

    // Expression: "Chaser: Running Phase 1"
    //  Referenced by: '<S19>/String Constant'

    "Chaser: Running Phase 1",

    // Expression: "Target: Running Phase 1"
    //  Referenced by: '<S19>/String Constant1'

    "Target: Running Phase 1",

    // Expression: "Obstacle: Running Phase 1"
    //  Referenced by: '<S19>/String Constant2'

    "Obstacle: Running Phase 1"
  }
  ,

  // End of '<S1>/Phase #1: Start Floating '

  // Start of '<S1>/Phase #0: Synchronization'
  {
    // Expression: 0
    //  Referenced by: '<S18>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Constant8'

    0.0,

    // Expression: 0
    //  Referenced by: '<S18>/Puck State'

    0.0,

    // Expression: "Chaser: Running Phase 0"
    //  Referenced by: '<S18>/String Constant'

    "Chaser: Running Phase 0",

    // Expression: "Target: Running Phase 0"
    //  Referenced by: '<S18>/String Constant1'

    "Target: Running Phase 0",

    // Expression: "Obstacle: Running Phase 0"
    //  Referenced by: '<S18>/String Constant2'

    "Obstacle: Running Phase 0"
  }
  // End of '<S1>/Phase #0: Synchronization'
};

//
// File trailer for generated code.
//
// [EOF]
//
