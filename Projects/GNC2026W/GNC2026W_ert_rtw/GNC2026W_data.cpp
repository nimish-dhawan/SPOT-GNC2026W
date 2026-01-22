//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W_data.cpp
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.1508
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Thu Jan 22 11:49:54 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "GNC2026W.h"

// Block parameters (default storage)
P_GNC2026W_T GNC2026W_P = {
  // Variable: A_c
  //  Referenced by: '<S159>/Constant7'

  { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 },

  // Variable: CVrate
  //  Referenced by:
  //    '<S132>/EKF'
  //    '<S133>/MEKF'
  //    '<S134>/Unscented Kalman Filter'
  //    '<S241>/Sample and Hold'

  0.2,

  // Variable: F_red_X_nominal
  //  Referenced by:
  //    '<S287>/MATLAB Function5'
  //    '<S299>/MATLAB Function5'
  //    '<S311>/MATLAB Function5'

  0.2825,

  // Variable: F_red_Y_nominal
  //  Referenced by:
  //    '<S287>/MATLAB Function5'
  //    '<S299>/MATLAB Function5'
  //    '<S311>/MATLAB Function5'

  0.2825,

  // Variable: F_thrusters_BLACK
  //  Referenced by: '<S290>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_BLUE
  //  Referenced by: '<S302>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_RED
  //  Referenced by: '<S314>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_u
  //  Referenced by: '<S159>/Constant3'

  { 0.0, 0.0, 0.0 },

  // Variable: K_BLACK
  //  Referenced by: '<S160>/Constant2'

  { 0.40261011025699511, -3.4287825942218297E-15, -7.6568971511887352E-15,
    4.896176968930996E-15, 0.40261011025700855, -3.7902115134773985E-15,
    -3.8648663400066327E-16, -9.1036478180055036E-16, 0.0815549644322501,
    3.395465184953931, 2.0360842460827311E-14, -6.3325920292291945E-14,
    -7.0448446123140753E-14, 3.3954651849541753, -6.212171373874009E-15,
    -7.5643673053589907E-16, -7.9653463685425227E-16, 0.40690949597934273 },

  // Variable: K_BLUE
  //  Referenced by: '<S161>/Constant2'

  { 0.40261011025701493, 1.2206182528119487E-14, -1.4639288893715909E-15,
    -9.4230274216387939E-15, 0.40261011025700266, 4.1197784005288409E-15,
    -1.485297024747621E-15, 1.4061593822592103E-15, 0.0814074262630697,
    3.3954651849543733, 2.0981480441939482E-14, -9.2588841052682911E-15,
    -5.4540211878191527E-14, 3.3954651849542157, -4.1164164779134136E-14,
    -6.4042550040150137E-16, 3.4893935173859177E-16, 0.40554915553132265 },

  // Variable: K_RED
  //  Referenced by: '<S162>/Constant2'

  { 0.40256594667683754, 2.0662088914679269E-14, -1.7996031327371092E-15,
    2.6520865059578737E-16, 0.40256594667684487, 1.2018851384452491E-14,
    -9.46796434292776E-16, 1.4460895348381485E-16, 0.081495906381188726,
    3.3752746856917519, 8.1934459217336553E-14, 1.8840564859297624E-15,
    1.603907055206163E-14, 3.3752746856917333, 5.301322954957635E-14,
    -5.8460770909695588E-17, 4.1601121670017965E-17, 0.40636232022479712 },

  // Variable: Kd_elarm
  //  Referenced by: '<S193>/kd_elarm'

  0.8,

  // Variable: Kd_sharm
  //  Referenced by: '<S194>/kd_sharm'

  1.0,

  // Variable: Kd_tb
  //  Referenced by: '<S164>/Gain5'

  1.8,

  // Variable: Kd_tblue
  //  Referenced by: '<S165>/Gain5'

  1.8,

  // Variable: Kd_tr
  //  Referenced by: '<S166>/Gain5'

  1.8,

  // Variable: Kd_wrarm
  //  Referenced by: '<S195>/kd_wrarm'

  0.6,

  // Variable: Kd_xb
  //  Referenced by: '<S164>/Gain3'

  3.6,

  // Variable: Kd_xblue
  //  Referenced by: '<S165>/Gain3'

  3.6,

  // Variable: Kd_xr
  //  Referenced by: '<S166>/Gain3'

  3.6,

  // Variable: Kd_yb
  //  Referenced by: '<S164>/Gain4'

  3.6,

  // Variable: Kd_yblue
  //  Referenced by: '<S165>/Gain4'

  3.6,

  // Variable: Kd_yr
  //  Referenced by: '<S166>/Gain4'

  3.6,

  // Variable: Kp_elarm
  //  Referenced by: '<S193>/kp_elarm'

  1.2,

  // Variable: Kp_sharm
  //  Referenced by: '<S194>/kp_sharm'

  1.5,

  // Variable: Kp_tb
  //  Referenced by: '<S164>/Gain2'

  0.5,

  // Variable: Kp_tblue
  //  Referenced by: '<S165>/Gain2'

  0.5,

  // Variable: Kp_tr
  //  Referenced by: '<S166>/Gain2'

  0.5,

  // Variable: Kp_wrarm
  //  Referenced by: '<S195>/kp_wrarm'

  1.0,

  // Variable: Kp_xb
  //  Referenced by: '<S164>/Gain'

  1.0,

  // Variable: Kp_xblue
  //  Referenced by: '<S165>/Gain'

  1.0,

  // Variable: Kp_xr
  //  Referenced by: '<S166>/Gain'

  1.0,

  // Variable: Kp_yb
  //  Referenced by: '<S164>/Gain1'

  1.0,

  // Variable: Kp_yblue
  //  Referenced by: '<S165>/Gain1'

  1.0,

  // Variable: Kp_yr
  //  Referenced by: '<S166>/Gain1'

  1.0,

  // Variable: Mc_inv
  //  Referenced by: '<S159>/MATLAB Function3'

  { 0.082392683529702554, 0.0, 0.0, 0.0, 0.082392683529702554, 0.0, 0.0, 0.0,
    5.0463923588119766 },

  // Variable: PWMFreq
  //  Referenced by:
  //    '<S16>/PWM Frequency'
  //    '<S287>/MATLAB Function1'
  //    '<S299>/MATLAB Function1'
  //    '<S311>/MATLAB Function8'
  //    '<S289>/Constant1'
  //    '<S301>/Constant1'
  //    '<S313>/Constant1'

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
  //    '<S44>/Constant2'
  //    '<S64>/Constant2'
  //    '<S84>/Constant2'
  //    '<S88>/Constant2'
  //    '<S100>/Constant2'
  //    '<S104>/Constant2'
  //    '<S40>/Constant1'
  //    '<S41>/Constant1'
  //    '<S42>/Constant1'
  //    '<S60>/Constant1'
  //    '<S61>/Constant1'
  //    '<S62>/Constant1'
  //    '<S80>/Constant1'
  //    '<S81>/Constant1'
  //    '<S82>/Constant1'
  //    '<S98>/Constant1'

  55.0,

  // Variable: Phase3_End
  //  Referenced by: '<S1>/Constant2'

  235.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by: '<S21>/Constant4'

  55.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by: '<S21>/Constant1'

  135.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by: '<S21>/Constant2'

  235.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by: '<S21>/Constant3'

  235.0,

  // Variable: Phase4_End
  //  Referenced by: '<S1>/Constant3'

  265.0,

  // Variable: Phase5_End
  //  Referenced by: '<S1>/Constant6'

  285.0,

  // Variable: R
  //  Referenced by: '<S134>/Unscented Kalman Filter'

  { 0.05, 0.0, 0.0, 0.0, 0.05, 0.0, 0.0, 0.0, 0.05 },

  // Variable: Tz_lim_elarm
  //  Referenced by: '<S192>/Saturation1'

  0.1,

  // Variable: Tz_lim_sharm
  //  Referenced by: '<S192>/Saturation'

  0.1,

  // Variable: Tz_lim_wrarm
  //  Referenced by: '<S192>/Saturation3'

  0.1,

  // Variable: X1_blk
  //  Referenced by: '<S38>/Desired X-Position (BLACK)'

  0.4,

  // Variable: X2_blk
  //  Referenced by: '<S58>/Desired X-Position (BLACK)'

  0.4,

  // Variable: X3_blk
  //  Referenced by: '<S78>/Desired X-Position (BLACK)'

  0.4,

  // Variable: Y1_blk
  //  Referenced by: '<S38>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: Y2_blk
  //  Referenced by: '<S58>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: Y3_blk
  //  Referenced by: '<S78>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: a
  //  Referenced by: '<S134>/Unscented Kalman Filter'

  1.0,

  // Variable: alpha
  //  Referenced by: '<S159>/MATLAB Function3'

  { 2.0, 0.0, 0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 2.0 },

  // Variable: b
  //  Referenced by: '<S134>/Unscented Kalman Filter'

  0.0,

  // Variable: baseRate
  //  Referenced by:
  //    '<S225>/Read Joint Positions using  Dynamixel Encoders'
  //    '<S279>/WhoAmI'
  //    '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
  //    '<S132>/EKF'
  //    '<S133>/MEKF'
  //    '<S134>/Unscented Kalman Filter'
  //    '<S241>/MATLAB Function1'
  //    '<S241>/Sample and Hold'

  0.05,

  // Variable: dataRate
  //  Referenced by:
  //    '<S240>/Constant'
  //    '<S259>/Constant'
  //    '<S269>/Constant'

  0.1,

  // Variable: dt
  //  Referenced by: '<S134>/Unscented Kalman Filter'

  0.05,

  // Variable: fNum
  //  Referenced by: '<S129>/Constant'

  2.0,

  // Variable: gamma
  //  Referenced by: '<S159>/MATLAB Function3'

  { 0.1, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.5 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S109>/Desired States (BLACK)'
  //    '<S113>/Desired States (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S110>/Desired States (BLUE)'
  //    '<S114>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S111>/Constant2'
  //    '<S115>/Constant2'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: init_states_BLACK
  //  Referenced by:
  //    '<S26>/Desired States (BLACK)'
  //    '<S150>/Delay'
  //    '<S150>/Delay1'
  //    '<S152>/Delay'
  //    '<S152>/Delay1'
  //    '<S138>/Delay'
  //    '<S138>/Delay1'
  //    '<S143>/Delay'
  //    '<S143>/Delay1'
  //    '<S148>/Delay'
  //    '<S148>/Delay1'
  //    '<S253>/Delay'
  //    '<S253>/Delay1'

  { 0.4, 0.4, -0.78539816339744828 },

  // Variable: init_states_BLUE
  //  Referenced by: '<S27>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S28>/Constant2'
  //    '<S36>/Constant2'
  //    '<S55>/Constant2'
  //    '<S174>/Delay'
  //    '<S174>/Delay1'

  { 3.0, 1.5, 3.1415926535897931 },

  // Variable: k
  //  Referenced by: '<S134>/Unscented Kalman Filter'

  5.0,

  // Variable: platformSelection
  //  Referenced by: '<S232>/MATLAB Function'

  3.0,

  // Variable: sep1
  //  Referenced by: '<S36>/Separation'

  0.6,

  // Variable: sep2
  //  Referenced by: '<S55>/Separation'

  0.6,

  // Variable: sep3
  //  Referenced by: '<S76>/Separation'

  0.3,

  // Variable: simMode
  //  Referenced by: '<S15>/Constant'

  0.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by: '<S290>/MATLAB Function'

  { 73.881766499134855, -64.118233500865131, 56.874845513718384,
    -84.6251544862816, 64.118233500865131, -66.281766499134861, 79.1251544862816,
    -49.874845513718391 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by: '<S302>/MATLAB Function'

  { 73.815115806582682, -64.1848841934173, 57.054043071921981, -84.445956928078,
    64.1848841934173, -66.215115806582673, 78.945956928078, -50.054043071921988
  },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S287>/MATLAB Function5'
  //    '<S299>/MATLAB Function5'
  //    '<S311>/MATLAB Function5'
  //    '<S314>/MATLAB Function'

  { 71.579508939606143, -60.420491060393836, 60.451141138666884,
    -84.0488588613331, 63.420491060393836, -70.579508939606143, 76.5488588613331,
    -52.951141138666891 },

  // Variable: xLength
  //  Referenced by:
  //    '<S93>/Desired X-Position (BLACK)'
  //    '<S43>/Constant1'
  //    '<S63>/Constant1'
  //    '<S83>/Constant1'
  //    '<S87>/Constant1'
  //    '<S99>/Constant1'
  //    '<S103>/Constant1'

  3.51155,

  // Variable: yLength
  //  Referenced by:
  //    '<S93>/Desired Y-Position (BLACK)'
  //    '<S43>/Constant2'
  //    '<S63>/Constant2'
  //    '<S83>/Constant2'
  //    '<S87>/Constant2'
  //    '<S99>/Constant2'
  //    '<S103>/Constant2'

  2.41935,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S210>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevScale
  //  Referenced by: '<S211>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevScale
  //  Referenced by: '<S212>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_i
  //  Referenced by: '<S187>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
  //  Referenced by: '<S188>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
  //  Referenced by: '<S189>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_p
  //  Referenced by: '<S200>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
  //  Referenced by: '<S201>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
  //  Referenced by: '<S202>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_d
  //  Referenced by: '<S177>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
  //  Referenced by: '<S178>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
  //  Referenced by: '<S179>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
  //  Referenced by: '<S205>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
  //  Referenced by: '<S206>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
  //  Referenced by: '<S207>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_n
  //  Referenced by: '<S182>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
  //  Referenced by: '<S183>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
  //  Referenced by: '<S184>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
  //  Referenced by: '<S196>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
  //  Referenced by: '<S197>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
  //  Referenced by: '<S198>/UD'

  0.0,

  // Mask Parameter: MATLABFunction5_max_iters
  //  Referenced by: '<S287>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_b
  //  Referenced by: '<S299>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_e
  //  Referenced by: '<S311>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_tol
  //  Referenced by: '<S287>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_j
  //  Referenced by: '<S299>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_g
  //  Referenced by: '<S311>/MATLAB Function5'

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

  // Expression: 2
  //  Referenced by: '<S29>/Constant11'

  2.0,

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
  //  Referenced by: '<S43>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S43>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S38>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S38>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S37>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.3
  //  Referenced by: '<S49>/Constant'

  0.3,

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

  // Expression: 1
  //  Referenced by: '<S30>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S30>/Constant8'

  2.0,

  // Expression: pi/2
  //  Referenced by: '<S52>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S52>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S52>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S54>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S63>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S63>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S58>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S58>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S57>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.3
  //  Referenced by: '<S69>/Constant'

  0.3,

  // Expression: 1
  //  Referenced by: '<S31>/Constant11'

  1.0,

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

  // Expression: 3
  //  Referenced by: '<S31>/Constant5'

  3.0,

  // Expression: 1
  //  Referenced by: '<S31>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S31>/Constant8'

  2.0,

  // Expression: pi/2
  //  Referenced by: '<S73>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S73>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S73>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S75>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S83>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S83>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S78>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S78>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S77>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S76>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S87>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S87>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S76>/Constant'

  3.1515926535897929,

  // Expression: 0.3
  //  Referenced by: '<S89>/Constant'

  0.3,

  // Expression: 1
  //  Referenced by: '<S32>/Constant11'

  1.0,

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

  // Expression: 3
  //  Referenced by: '<S32>/Constant5'

  3.0,

  // Expression: 1
  //  Referenced by: '<S32>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S32>/Constant8'

  2.0,

  // Expression: 0
  //  Referenced by: '<S92>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S92>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S92>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S94>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S99>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S99>/Gain1'

  -0.85,

  // Expression: 0.03490659
  //  Referenced by: '<S96>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S95>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S103>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S103>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S95>/Constant'

  3.1515926535897929,

  // Expression: 0.30
  //  Referenced by: '<S95>/Separation'

  0.3,

  // Expression: 0.3
  //  Referenced by: '<S105>/Constant'

  0.3,

  // Expression: zeros(6,1)
  //  Referenced by: '<S134>/Unit Delay1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: diag([1, 1, 0.05, 1, 1, 0.05])
  //  Referenced by: '<S134>/Unit Delay2'

  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.05 },

  // Computed Parameter: Merge_InitialOutput
  //  Referenced by: '<S129>/Merge'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S210>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S211>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S212>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S166>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S166>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S166>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_h
  //  Referenced by: '<S187>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_e
  //  Referenced by: '<S188>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S189>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S200>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_hr
  //  Referenced by: '<S201>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ca
  //  Referenced by: '<S202>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S164>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S164>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S164>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_nd
  //  Referenced by: '<S177>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_co
  //  Referenced by: '<S178>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_no
  //  Referenced by: '<S179>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S205>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S206>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_px
  //  Referenced by: '<S207>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S165>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S165>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S165>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_ft
  //  Referenced by: '<S182>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_eh
  //  Referenced by: '<S183>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ii
  //  Referenced by: '<S184>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_pu
  //  Referenced by: '<S196>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f0
  //  Referenced by: '<S197>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_nz
  //  Referenced by: '<S198>/TSamp'

  20.0,

  // Expression: 1
  //  Referenced by: '<S163>/Constant7'

  1.0,

  // Computed Parameter: Merge3_InitialOutput
  //  Referenced by: '<S163>/Merge3'

  0.0,

  // Computed Parameter: Merge4_InitialOutput
  //  Referenced by: '<S163>/Merge4'

  0.0,

  // Computed Parameter: Merge5_InitialOutput
  //  Referenced by: '<S163>/Merge5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S167>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S167>/Zero'

  0.0,

  // Expression: 428
  //  Referenced by: '<S224>/GPIO Write1'

  428.0,

  // Expression: 1
  //  Referenced by: '<S224>/GPIO Write1'

  1.0,

  // Expression: 0.0
  //  Referenced by: '<S225>/Delay'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S225>/Delay1'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S225>/Delay2'

  0.0,

  // Computed Parameter: UniversalTime_Y0
  //  Referenced by: '<S233>/Universal Time'

  0.0,

  // Computed Parameter: dytdt_Y0
  //  Referenced by: '<S245>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_j
  //  Referenced by: '<S263>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_d
  //  Referenced by: '<S273>/dy(t)//dt'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S229>/Convert BLAX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S229>/Convert BLAY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S229>/Convert BLACKVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S229>/Convert BLACKVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S240>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S240>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S240>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S243>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S243>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S242>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S242>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S230>/Convert BLUX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S230>/Convert BLUY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S230>/Convert BLUEVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S230>/Convert BLUEVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S259>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S259>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S259>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S261>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S261>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S260>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S260>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S231>/Convert REDX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S231>/Convert REDY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S231>/Convert REDVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S231>/Convert REDVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S269>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S269>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S269>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S271>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S271>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S270>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S270>/Constant3'

  0.0,

  // Expression: 1
  //  Referenced by: '<S232>/Constant'

  1.0,

  // Expression: -1
  //  Referenced by: '<S280>/Gain'

  -1.0,

  // Expression: 400
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 0
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 200
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  200.0,

  // Expression: 3072
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  3072.0,

  // Expression: 1024
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  1024.0,

  // Expression: 0
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 850
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  850.0,

  // Expression: 400
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 100
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  100.0,

  // Expression: 20
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  20.0,

  // Expression: 0
  //  Referenced by: '<S282>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S294>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S295>/Out1'

  0.0,

  // Computed Parameter: BLACKDC_Y0
  //  Referenced by: '<S284>/BLACK DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S289>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S289>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S306>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_js
  //  Referenced by: '<S307>/Out1'

  0.0,

  // Computed Parameter: BLUEDC_Y0
  //  Referenced by: '<S285>/BLUE DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S301>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S301>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S318>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S319>/Out1'

  0.0,

  // Computed Parameter: REDDC_Y0
  //  Referenced by: '<S286>/RED DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S313>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S313>/Constant2'

  0.0,

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time12'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time7'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Gaussian Noise'

  0.0,

  // Computed Parameter: GaussianNoise_StdDev
  //  Referenced by: '<Root>/Gaussian Noise'

  3.1622776601683795E-5,

  // Expression: 0
  //  Referenced by: '<Root>/Gaussian Noise'

  0.0,

  // Computed Parameter: Merge1_InitialOutput
  //  Referenced by: '<S3>/Merge1'

  0.0,

  // Computed Parameter: Merge2_InitialOutput
  //  Referenced by: '<S3>/Merge2'

  0.0,

  // Computed Parameter: Merge_InitialOutput_e
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
  //  Referenced by: '<Root>/Data Store Memory'

  0.0,

  // Expression: zeros(9,1)
  //  Referenced by: '<Root>/Data Store Memory1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz10'

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
  //  Referenced by: '<Root>/RED_Tz6'

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

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time2'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time20'

  0.0,

  // Expression: zeros(3,1)
  //  Referenced by: '<Root>/Universal_Time21'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time22'

  { 0.0, 0.0, 0.0 },

  // Expression: zeros(6,1)
  //  Referenced by: '<Root>/Universal_Time23'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

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

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time36'

  { 0.0, 0.0, 0.0 },

  // Expression: zeros(3,1)
  //  Referenced by: '<Root>/Universal_Time37'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time38'

  0.0,

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

  // Expression: "Target: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S29>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 1",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S29>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 1",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S29>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 1",

  // Expression: "Target: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S30>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 2",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S30>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 2",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S30>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 2",

  // Expression: "Target: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S31>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 3",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S31>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 3",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S31>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 3",

  // Expression: "Target: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S32>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 4",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S32>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 4",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S32>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 4",

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
  //  Referenced by: '<S221>/UDP Send1'

  55000,

  // Computed Parameter: UDPSend2_Port
  //  Referenced by: '<S222>/UDP Send2'

  55000,

  // Computed Parameter: UDPSend3_Port
  //  Referenced by: '<S223>/UDP Send3'

  55000,

  // Computed Parameter: ReceivePhaseSpaceData_Port
  //  Referenced by: '<S228>/Receive PhaseSpace Data'

  31534,

  // Computed Parameter: UDPReceiveREDClock_Port
  //  Referenced by: '<S232>/UDP Receive (RED Clock)'

  48740,

  // Computed Parameter: UDPReceiveBLACKClock_Port
  //  Referenced by: '<S232>/UDP Receive (BLACK Clock)'

  48741,

  // Computed Parameter: UDPReceiveBLUEClock_Port
  //  Referenced by: '<S232>/UDP Receive (BLUE Clock)'

  48742,

  // Computed Parameter: UDPReceive_Port
  //  Referenced by: '<S280>/UDP Receive'

  50005,

  // Computed Parameter: UDPReceive_Port_a
  //  Referenced by: '<S281>/UDP Receive'

  36845,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<S283>/UDP Send'

  46875,

  // Computed Parameter: UDPSend_Port_h
  //  Referenced by: '<S16>/UDP Send'

  48291,

  // Computed Parameter: ManualSwitch_CurrentSetting
  //  Referenced by: '<S134>/Manual Switch'

  1U,

  // Start of '<S17>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S325>/UDP Send (Clock)'

    48740
  }
  ,

  // End of '<S17>/Change RED Behavior'

  // Start of '<S17>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S324>/UDP Send (Clock)'

    48742
  }
  ,

  // End of '<S17>/Change BLUE Behavior'

  // Start of '<S17>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S323>/UDP Send (Clock)'

    48741
  }
  ,

  // End of '<S17>/Change BLACK Behavior'

  // Start of '<S271>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S277>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S277>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S277>/Delay'

    0.0
  }
  ,

  // End of '<S271>/Enabled Subsystem'

  // Start of '<S270>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S275>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S275>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S275>/Delay'

    0.0
  }
  ,

  // End of '<S270>/Enabled Subsystem'

  // Start of '<S261>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S267>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S267>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S267>/Delay'

    0.0
  }
  ,

  // End of '<S261>/Enabled Subsystem'

  // Start of '<S260>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S265>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S265>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S265>/Delay'

    0.0
  }
  ,

  // End of '<S260>/Enabled Subsystem'

  // Start of '<S243>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S257>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S257>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S257>/Delay'

    0.0
  }
  ,

  // End of '<S243>/Enabled Subsystem'

  // Start of '<S242>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S255>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S255>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S255>/Delay'

    0.0
  }
  ,

  // End of '<S242>/Enabled Subsystem'

  // Start of '<S236>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S239>/UDP Send (GUI)'

    48720
  }
  ,

  // End of '<S236>/Change RED Behavior'

  // Start of '<S236>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S238>/UDP Send (GUI)'

    48722
  }
  ,

  // End of '<S236>/Change BLUE Behavior'

  // Start of '<S236>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S237>/UDP Send (GUI)'

    48721
  }
  ,

  // End of '<S236>/Change BLACK Behavior'

  // Start of '<S4>/Change RED Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S216>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S216>/UDP Send'

    33001
  }
  ,

  // End of '<S4>/Change RED Behavior'

  // Start of '<S4>/Change BLUE Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S215>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S215>/UDP Send'

    33003
  }
  ,

  // End of '<S4>/Change BLUE Behavior'

  // Start of '<S4>/Change BLACK Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S214>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S214>/UDP Send'

    33002
  }
  ,

  // End of '<S4>/Change BLACK Behavior'

  // Start of '<S3>/Custom Control (ARM)'
  {
    // Expression: 0
    //  Referenced by: '<S158>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Custom Control (ARM)'

  // Start of '<S3>/Disable Thrusters (BLUE)'
  {
    // Expression: 0
    //  Referenced by: '<S169>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLUE)'

  // Start of '<S3>/Disable Thrusters (BLACK)'
  {
    // Expression: 0
    //  Referenced by: '<S168>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLACK)'

  // Start of '<S3>/Disable Thrusters (RED)'
  {
    // Expression: 0
    //  Referenced by: '<S170>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (RED)'

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
    //  Referenced by: '<S112>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S112>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S112>/Constant2'

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
    //  Referenced by: '<S108>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S108>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S108>/Constant2'

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
