//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W_data.cpp
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
#include "GNC2026W.h"

// Block parameters (default storage)
P_GNC2026W_T GNC2026W_P = {
  // Variable: A_c
  //  Referenced by: '<S149>/Constant7'

  { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 },

  // Variable: CVrate
  //  Referenced by:
  //    '<S219>/EKF'
  //    '<S220>/MEKF'
  //    '<S221>/Unscented Kalman Filter'
  //    '<S261>/Sample and Hold'

  0.2,

  // Variable: F_red_X_nominal
  //  Referenced by:
  //    '<S314>/MATLAB Function5'
  //    '<S326>/MATLAB Function5'
  //    '<S338>/MATLAB Function5'

  0.2825,

  // Variable: F_red_Y_nominal
  //  Referenced by:
  //    '<S314>/MATLAB Function5'
  //    '<S326>/MATLAB Function5'
  //    '<S338>/MATLAB Function5'

  0.2825,

  // Variable: F_thrusters_BLACK
  //  Referenced by: '<S317>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_BLUE
  //  Referenced by: '<S329>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_RED
  //  Referenced by: '<S341>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_u
  //  Referenced by: '<S149>/Constant3'

  { 0.0, 0.0, 0.0 },

  // Variable: K_BLACK
  //  Referenced by: '<S150>/Constant2'

  { 0.40261011025699511, -3.4287825942218297E-15, -7.6568971511887352E-15,
    4.896176968930996E-15, 0.40261011025700855, -3.7902115134773985E-15,
    -3.8648663400066327E-16, -9.1036478180055036E-16, 0.0815549644322501,
    3.395465184953931, 2.0360842460827311E-14, -6.3325920292291945E-14,
    -7.0448446123140753E-14, 3.3954651849541753, -6.212171373874009E-15,
    -7.5643673053589907E-16, -7.9653463685425227E-16, 0.40690949597934273 },

  // Variable: K_BLUE
  //  Referenced by: '<S151>/Constant2'

  { 0.40261011025701493, 1.2206182528119487E-14, -1.4639288893715909E-15,
    -9.4230274216387939E-15, 0.40261011025700266, 4.1197784005288409E-15,
    -1.485297024747621E-15, 1.4061593822592103E-15, 0.0814074262630697,
    3.3954651849543733, 2.0981480441939482E-14, -9.2588841052682911E-15,
    -5.4540211878191527E-14, 3.3954651849542157, -4.1164164779134136E-14,
    -6.4042550040150137E-16, 3.4893935173859177E-16, 0.40554915553132265 },

  // Variable: K_RED
  //  Referenced by: '<S152>/Constant2'

  { 0.40256594667683754, 2.0662088914679269E-14, -1.7996031327371092E-15,
    2.6520865059578737E-16, 0.40256594667684487, 1.2018851384452491E-14,
    -9.46796434292776E-16, 1.4460895348381485E-16, 0.081495906381188726,
    3.3752746856917519, 8.1934459217336553E-14, 1.8840564859297624E-15,
    1.603907055206163E-14, 3.3752746856917333, 5.301322954957635E-14,
    -5.8460770909695588E-17, 4.1601121670017965E-17, 0.40636232022479712 },

  // Variable: Kd_elarm
  //  Referenced by: '<S185>/kd_elarm'

  0.8,

  // Variable: Kd_sharm
  //  Referenced by: '<S186>/kd_sharm'

  1.0,

  // Variable: Kd_tb
  //  Referenced by: '<S154>/Gain5'

  1.8,

  // Variable: Kd_tblue
  //  Referenced by: '<S155>/Gain5'

  1.8,

  // Variable: Kd_tr
  //  Referenced by: '<S156>/Gain5'

  1.8,

  // Variable: Kd_wrarm
  //  Referenced by: '<S187>/kd_wrarm'

  0.6,

  // Variable: Kd_xb
  //  Referenced by: '<S154>/Gain3'

  3.6,

  // Variable: Kd_xblue
  //  Referenced by: '<S155>/Gain3'

  3.6,

  // Variable: Kd_xr
  //  Referenced by: '<S156>/Gain3'

  3.6,

  // Variable: Kd_yb
  //  Referenced by: '<S154>/Gain4'

  3.6,

  // Variable: Kd_yblue
  //  Referenced by: '<S155>/Gain4'

  3.6,

  // Variable: Kd_yr
  //  Referenced by: '<S156>/Gain4'

  3.6,

  // Variable: Kp_elarm
  //  Referenced by: '<S185>/kp_elarm'

  1.2,

  // Variable: Kp_sharm
  //  Referenced by: '<S186>/kp_sharm'

  1.5,

  // Variable: Kp_tb
  //  Referenced by: '<S154>/Gain2'

  0.5,

  // Variable: Kp_tblue
  //  Referenced by: '<S155>/Gain2'

  0.5,

  // Variable: Kp_tr
  //  Referenced by: '<S156>/Gain2'

  0.5,

  // Variable: Kp_wrarm
  //  Referenced by: '<S187>/kp_wrarm'

  1.0,

  // Variable: Kp_xb
  //  Referenced by: '<S154>/Gain'

  1.0,

  // Variable: Kp_xblue
  //  Referenced by: '<S155>/Gain'

  1.0,

  // Variable: Kp_xr
  //  Referenced by: '<S156>/Gain'

  1.0,

  // Variable: Kp_yb
  //  Referenced by: '<S154>/Gain1'

  1.0,

  // Variable: Kp_yblue
  //  Referenced by: '<S155>/Gain1'

  1.0,

  // Variable: Kp_yr
  //  Referenced by: '<S156>/Gain1'

  1.0,

  // Variable: Mc_inv
  //  Referenced by: '<S149>/MATLAB Function3'

  { 0.082392683529702554, 0.0, 0.0, 0.0, 0.082392683529702554, 0.0, 0.0, 0.0,
    5.0463923588119766 },

  // Variable: PWMFreq
  //  Referenced by:
  //    '<S18>/PWM Frequency'
  //    '<S314>/MATLAB Function1'
  //    '<S326>/MATLAB Function1'
  //    '<S338>/MATLAB Function8'
  //    '<S316>/Constant1'
  //    '<S328>/Constant1'
  //    '<S340>/Constant1'

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
  //    '<S46>/Constant2'
  //    '<S68>/Constant2'
  //    '<S94>/Constant2'
  //    '<S98>/Constant2'
  //    '<S110>/Constant2'
  //    '<S114>/Constant2'
  //    '<S42>/Constant1'
  //    '<S43>/Constant1'
  //    '<S44>/Constant1'
  //    '<S64>/Constant1'
  //    '<S65>/Constant1'
  //    '<S66>/Constant1'
  //    '<S90>/Constant1'
  //    '<S91>/Constant1'
  //    '<S92>/Constant1'
  //    '<S108>/Constant1'

  55.0,

  // Variable: Phase3_End
  //  Referenced by: '<S1>/Constant2'

  235.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by:
  //    '<S9>/Constant4'
  //    '<S23>/Constant4'

  55.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by: '<S23>/Constant1'

  135.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by: '<S23>/Constant2'

  235.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by: '<S23>/Constant3'

  235.0,

  // Variable: Phase4_End
  //  Referenced by: '<S1>/Constant3'

  265.0,

  // Variable: Phase5_End
  //  Referenced by: '<S1>/Constant6'

  285.0,

  // Variable: R
  //  Referenced by: '<S221>/Unscented Kalman Filter'

  { 2.5E-5, 0.0, 0.0, 0.0, 2.5E-5, 0.0, 0.0, 0.0, 2.5E-5 },

  // Variable: Tz_lim_elarm
  //  Referenced by: '<S184>/Saturation1'

  0.1,

  // Variable: Tz_lim_sharm
  //  Referenced by: '<S184>/Saturation'

  0.1,

  // Variable: Tz_lim_wrarm
  //  Referenced by: '<S184>/Saturation3'

  0.1,

  // Variable: VISinLoop
  //  Referenced by:
  //    '<S302>/Constant'
  //    '<S230>/Constant'
  //    '<S239>/Constant'
  //    '<S261>/Constant'

  1.0,

  // Variable: X1_blk
  //  Referenced by: '<S40>/Desired X-Position (BLACK)'

  0.4,

  // Variable: X2_blk
  //  Referenced by: '<S62>/Desired X-Position (BLACK)'

  0.4,

  // Variable: X3_blk
  //  Referenced by: '<S88>/Desired X-Position (BLACK)'

  0.4,

  // Variable: Y1_blk
  //  Referenced by: '<S40>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: Y2_blk
  //  Referenced by: '<S62>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: Y3_blk
  //  Referenced by: '<S88>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: a
  //  Referenced by: '<S221>/Unscented Kalman Filter'

  1.0,

  // Variable: alpha
  //  Referenced by: '<S149>/MATLAB Function3'

  { 2.0, 0.0, 0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 2.0 },

  // Variable: b
  //  Referenced by: '<S221>/Unscented Kalman Filter'

  2.0,

  // Variable: baseRate
  //  Referenced by:
  //    '<S149>/MATLAB Function2'
  //    '<S217>/Read Joint Positions using  Dynamixel Encoders'
  //    '<S301>/WhoAmI'
  //    '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
  //    '<S219>/EKF'
  //    '<S220>/MEKF'
  //    '<S221>/Unscented Kalman Filter'
  //    '<S261>/Sample and Hold'
  //    '<S267>/MATLAB Function1'

  0.05,

  // Variable: dataRate
  //  Referenced by:
  //    '<S260>/Constant'
  //    '<S281>/Constant'
  //    '<S291>/Constant'

  0.1,

  // Variable: dt
  //  Referenced by: '<S221>/Unscented Kalman Filter'

  0.05,

  // Variable: fNum
  //  Referenced by: '<S218>/Constant'

  1.0,

  // Variable: gamma
  //  Referenced by: '<S149>/MATLAB Function3'

  { 0.1, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.5 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S119>/Desired States (BLACK)'
  //    '<S123>/Desired States (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S120>/Desired States (BLUE)'
  //    '<S124>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S121>/Constant2'
  //    '<S125>/Constant2'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: init_states_BLACK
  //  Referenced by:
  //    '<S28>/Desired States (BLACK)'
  //    '<S142>/Delay'
  //    '<S142>/Delay1'
  //    '<S225>/Delay'
  //    '<S225>/Delay1'
  //    '<S231>/Delay'
  //    '<S231>/Delay1'
  //    '<S240>/Delay'
  //    '<S240>/Delay1'
  //    '<S275>/Delay'
  //    '<S275>/Delay1'

  { 0.4, 0.4, -0.78539816339744828 },

  // Variable: init_states_BLUE
  //  Referenced by: '<S29>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S30>/Constant2'
  //    '<S164>/Delay'
  //    '<S164>/Delay1'
  //    '<S38>/Constant2'
  //    '<S58>/Constant2'
  //    '<S165>/Delay'
  //    '<S165>/Delay1'

  { 2.0, 1.5, 3.1415926535897931 },

  // Variable: k
  //  Referenced by: '<S221>/Unscented Kalman Filter'

  5.0,

  // Variable: platformSelection
  //  Referenced by: '<S252>/MATLAB Function'

  3.0,

  // Variable: sep1
  //  Referenced by: '<S38>/Separation'

  0.6,

  // Variable: sep2
  //  Referenced by: '<S58>/Separation'

  0.3,

  // Variable: sep3
  //  Referenced by: '<S86>/Separation'

  0.3,

  // Variable: simMode
  //  Referenced by: '<S17>/Constant'

  0.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by: '<S317>/MATLAB Function'

  { 73.881766499134855, -64.118233500865131, 56.874845513718384,
    -84.6251544862816, 64.118233500865131, -66.281766499134861, 79.1251544862816,
    -49.874845513718391 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by: '<S329>/MATLAB Function'

  { 73.815115806582682, -64.1848841934173, 57.054043071921981, -84.445956928078,
    64.1848841934173, -66.215115806582673, 78.945956928078, -50.054043071921988
  },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S314>/MATLAB Function5'
  //    '<S326>/MATLAB Function5'
  //    '<S338>/MATLAB Function5'
  //    '<S341>/MATLAB Function'

  { 71.579508939606143, -60.420491060393836, 60.451141138666884,
    -84.0488588613331, 63.420491060393836, -70.579508939606143, 76.5488588613331,
    -52.951141138666891 },

  // Variable: xLength
  //  Referenced by:
  //    '<S103>/Desired X-Position (BLACK)'
  //    '<S45>/Constant1'
  //    '<S67>/Constant1'
  //    '<S93>/Constant1'
  //    '<S97>/Constant1'
  //    '<S109>/Constant1'
  //    '<S113>/Constant1'

  3.51155,

  // Variable: yLength
  //  Referenced by:
  //    '<S103>/Desired Y-Position (BLACK)'
  //    '<S45>/Constant2'
  //    '<S67>/Constant2'
  //    '<S93>/Constant2'
  //    '<S97>/Constant2'
  //    '<S109>/Constant2'
  //    '<S113>/Constant2'

  2.41935,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S202>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevScale
  //  Referenced by: '<S203>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevScale
  //  Referenced by: '<S204>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_i
  //  Referenced by: '<S179>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
  //  Referenced by: '<S180>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
  //  Referenced by: '<S181>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_p
  //  Referenced by: '<S192>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
  //  Referenced by: '<S193>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
  //  Referenced by: '<S194>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_d
  //  Referenced by: '<S169>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
  //  Referenced by: '<S170>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
  //  Referenced by: '<S171>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
  //  Referenced by: '<S197>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
  //  Referenced by: '<S198>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
  //  Referenced by: '<S199>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_n
  //  Referenced by: '<S174>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
  //  Referenced by: '<S175>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
  //  Referenced by: '<S176>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
  //  Referenced by: '<S188>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
  //  Referenced by: '<S189>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
  //  Referenced by: '<S190>/UD'

  0.0,

  // Mask Parameter: MATLABFunction5_max_iters
  //  Referenced by: '<S314>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_b
  //  Referenced by: '<S326>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_e
  //  Referenced by: '<S338>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_tol
  //  Referenced by: '<S314>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_j
  //  Referenced by: '<S326>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_g
  //  Referenced by: '<S338>/MATLAB Function5'

  1.0E-6,

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
  //  Referenced by: '<S27>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S27>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S27>/Constant2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S31>/Constant11'

  2.0,

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
  //  Referenced by: '<S35>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S35>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S35>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S37>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S45>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S45>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S40>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S40>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S39>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.3
  //  Referenced by: '<S51>/Constant'

  0.3,

  // Expression: 0
  //  Referenced by: '<S32>/Constant12'

  0.0,

  // Expression: 0
  //  Referenced by: '<S32>/Constant15'

  0.0,

  // Expression: 0
  //  Referenced by: '<S32>/Constant18'

  0.0,

  // Expression: 1
  //  Referenced by: '<S32>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S32>/Constant8'

  2.0,

  // Expression: pi/2
  //  Referenced by: '<S55>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S55>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S55>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S57>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S67>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S67>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S62>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S62>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S61>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.3
  //  Referenced by: '<S73>/Constant'

  0.3,

  // Expression: 0
  //  Referenced by: '<S54>/Constant14'

  0.0,

  // Expression: 1
  //  Referenced by: '<S33>/Constant11'

  1.0,

  // Expression: 0
  //  Referenced by: '<S33>/Constant12'

  0.0,

  // Expression: 0
  //  Referenced by: '<S33>/Constant14'

  0.0,

  // Expression: 0
  //  Referenced by: '<S33>/Constant15'

  0.0,

  // Expression: 0
  //  Referenced by: '<S33>/Constant18'

  0.0,

  // Expression: 2
  //  Referenced by: '<S33>/Constant4'

  2.0,

  // Expression: 3
  //  Referenced by: '<S33>/Constant5'

  3.0,

  // Expression: 1
  //  Referenced by: '<S33>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S33>/Constant8'

  2.0,

  // Expression: pi/2
  //  Referenced by: '<S83>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S83>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S83>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S85>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S93>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S93>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S88>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S88>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S87>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S86>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S97>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S97>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S86>/Constant'

  3.1515926535897929,

  // Expression: 0.3
  //  Referenced by: '<S99>/Constant'

  0.3,

  // Expression: 1
  //  Referenced by: '<S34>/Constant11'

  1.0,

  // Expression: 0
  //  Referenced by: '<S34>/Constant12'

  0.0,

  // Expression: 0
  //  Referenced by: '<S34>/Constant14'

  0.0,

  // Expression: 0
  //  Referenced by: '<S34>/Constant15'

  0.0,

  // Expression: 0
  //  Referenced by: '<S34>/Constant18'

  0.0,

  // Expression: 2
  //  Referenced by: '<S34>/Constant4'

  2.0,

  // Expression: 3
  //  Referenced by: '<S34>/Constant5'

  3.0,

  // Expression: 1
  //  Referenced by: '<S34>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S34>/Constant8'

  2.0,

  // Expression: 0
  //  Referenced by: '<S102>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S102>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S102>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S104>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S109>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S109>/Gain1'

  -0.85,

  // Expression: 0.03490659
  //  Referenced by: '<S106>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S105>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S113>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S113>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S105>/Constant'

  3.1515926535897929,

  // Expression: 0.30
  //  Referenced by: '<S105>/Separation'

  0.3,

  // Expression: 0.3
  //  Referenced by: '<S115>/Constant'

  0.3,

  // Computed Parameter: Path_Y0
  //  Referenced by: '<S141>/Path'

  0.0,

  // Expression: zeros(6,1)
  //  Referenced by: '<S137>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S137>/Switch'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S202>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S203>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S204>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S156>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S156>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S156>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_h
  //  Referenced by: '<S179>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_e
  //  Referenced by: '<S180>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S181>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S192>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_hr
  //  Referenced by: '<S193>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ca
  //  Referenced by: '<S194>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S154>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S154>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S154>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_nd
  //  Referenced by: '<S169>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_co
  //  Referenced by: '<S170>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_no
  //  Referenced by: '<S171>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S197>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S198>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_px
  //  Referenced by: '<S199>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S155>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S155>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S155>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_ft
  //  Referenced by: '<S174>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_eh
  //  Referenced by: '<S175>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ii
  //  Referenced by: '<S176>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_pu
  //  Referenced by: '<S188>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f0
  //  Referenced by: '<S189>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_nz
  //  Referenced by: '<S190>/TSamp'

  20.0,

  // Expression: 1
  //  Referenced by: '<S153>/Constant7'

  1.0,

  // Computed Parameter: Merge3_InitialOutput
  //  Referenced by: '<S153>/Merge3'

  0.0,

  // Computed Parameter: Merge4_InitialOutput
  //  Referenced by: '<S153>/Merge4'

  0.0,

  // Computed Parameter: Merge5_InitialOutput
  //  Referenced by: '<S153>/Merge5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S157>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S157>/Zero'

  0.0,

  // Expression: 428
  //  Referenced by: '<S216>/GPIO Write1'

  428.0,

  // Expression: 1
  //  Referenced by: '<S216>/GPIO Write1'

  1.0,

  // Expression: 0.0
  //  Referenced by: '<S217>/Delay'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S217>/Delay1'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S217>/Delay2'

  0.0,

  // Computed Parameter: Merge_InitialOutput
  //  Referenced by: '<S239>/Merge'

  0.0,

  // Computed Parameter: Merge_InitialOutput_p
  //  Referenced by: '<S230>/Merge'

  0.0,

  // Computed Parameter: Merge_InitialOutput_b
  //  Referenced by: '<S218>/Merge'

  0.0,

  // Computed Parameter: UniversalTime_Y0
  //  Referenced by: '<S253>/Universal Time'

  0.0,

  // Computed Parameter: dytdt_Y0
  //  Referenced by: '<S265>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_j
  //  Referenced by: '<S285>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_d
  //  Referenced by: '<S295>/dy(t)//dt'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S249>/Convert BLAX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S249>/Convert BLAY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S249>/Convert BLACKVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S249>/Convert BLACKVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S260>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S260>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S260>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S263>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S263>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S262>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S262>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLUX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLUY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLUEVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLUEVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S281>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S281>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S281>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S283>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S283>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S282>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S282>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert REDX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert REDY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert REDVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert REDVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S291>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S291>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S291>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S293>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S293>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S292>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S292>/Constant3'

  0.0,

  // Expression: 1
  //  Referenced by: '<S252>/Constant'

  1.0,

  // Expression: -1
  //  Referenced by: '<S302>/Gain'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S305>/Constant'

  0.0,

  // Expression: 140
  //  Referenced by: '<S305>/Step'

  140.0,

  // Expression: 0
  //  Referenced by: '<S305>/Step'

  0.0,

  // Expression: 1
  //  Referenced by: '<S305>/Step'

  1.0,

  // Expression: 400
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 0
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 200
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  200.0,

  // Expression: 3072
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  3072.0,

  // Expression: 1024
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  1024.0,

  // Expression: 0
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 850
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  850.0,

  // Expression: 400
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 100
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  100.0,

  // Expression: 20
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  20.0,

  // Expression: 0
  //  Referenced by: '<S306>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S321>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S322>/Out1'

  0.0,

  // Computed Parameter: BLACKDC_Y0
  //  Referenced by: '<S311>/BLACK DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S316>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S316>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S333>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_js
  //  Referenced by: '<S334>/Out1'

  0.0,

  // Computed Parameter: BLUEDC_Y0
  //  Referenced by: '<S312>/BLUE DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S328>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S328>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S345>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S346>/Out1'

  0.0,

  // Computed Parameter: REDDC_Y0
  //  Referenced by: '<S313>/RED DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S340>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S340>/Constant2'

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

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time39'

  0.0,

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
  //  Referenced by: '<S18>/Safety Number'

  568471.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain1'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain2'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain3'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain4'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain5'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain6'

  100.0,

  // Expression: 100
  //  Referenced by: '<S18>/Gain7'

  100.0,

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory'

  0.0,

  // Expression: zeros(9,1)
  //  Referenced by: '<Root>/Data Store Memory1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory2'

  0.0,

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Data Store Memory3'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Data Store Memory4'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory5'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory7'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory8'

  0.0,

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

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time40'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time41'

  0.0,

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
  //  Referenced by: '<S22>/String Constant1'

  "Target: Running Phase 2",

  // Expression: "Obstacle: Running Phase 2"
  //  Referenced by: '<S22>/String Constant2'

  "Obstacle: Running Phase 2",

  // Expression: "Chaser: Running Phase 2"
  //  Referenced by: '<S22>/String Constant'

  "Chaser: Running Phase 2",

  // Expression: "Target: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S31>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 1",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S31>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 1",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S31>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 1",

  // Expression: "Target: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S32>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 2",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S32>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 2",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S32>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 2",

  // Expression: "Target: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S33>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 3",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S33>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 3",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S33>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 3",

  // Expression: "Target: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S34>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 4",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S34>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 4",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S34>/String Constant'

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
  //  Referenced by: '<S213>/UDP Send1'

  55000,

  // Computed Parameter: UDPSend2_Port
  //  Referenced by: '<S214>/UDP Send2'

  55000,

  // Computed Parameter: UDPSend3_Port
  //  Referenced by: '<S215>/UDP Send3'

  55000,

  // Computed Parameter: ReceivePhaseSpaceData_Port
  //  Referenced by: '<S248>/Receive PhaseSpace Data'

  31534,

  // Computed Parameter: UDPReceiveREDClock_Port
  //  Referenced by: '<S252>/UDP Receive (RED Clock)'

  48740,

  // Computed Parameter: UDPReceiveBLACKClock_Port
  //  Referenced by: '<S252>/UDP Receive (BLACK Clock)'

  48741,

  // Computed Parameter: UDPReceiveBLUEClock_Port
  //  Referenced by: '<S252>/UDP Receive (BLUE Clock)'

  48742,

  // Computed Parameter: UDPReceive_Port
  //  Referenced by: '<S302>/UDP Receive'

  50005,

  // Computed Parameter: UDPReceive_Port_g
  //  Referenced by: '<S304>/UDP Receive'

  13761,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<S307>/UDP Send'

  46875,

  // Computed Parameter: UDPSend_Port_b
  //  Referenced by: '<S308>/UDP Send'

  10294,

  // Computed Parameter: UDPSend_Port_h
  //  Referenced by: '<S18>/UDP Send'

  48291,

  // Computed Parameter: ManualSwitch_CurrentSetting
  //  Referenced by: '<S305>/Manual Switch'

  0U,

  // Start of '<S19>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S352>/UDP Send (Clock)'

    48740
  }
  ,

  // End of '<S19>/Change RED Behavior'

  // Start of '<S19>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S351>/UDP Send (Clock)'

    48742
  }
  ,

  // End of '<S19>/Change BLUE Behavior'

  // Start of '<S19>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S350>/UDP Send (Clock)'

    48741
  }
  ,

  // End of '<S19>/Change BLACK Behavior'

  // Start of '<S293>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S299>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S299>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S299>/Delay'

    0.0
  }
  ,

  // End of '<S293>/Enabled Subsystem'

  // Start of '<S292>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S297>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S297>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S297>/Delay'

    0.0
  }
  ,

  // End of '<S292>/Enabled Subsystem'

  // Start of '<S283>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S289>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S289>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S289>/Delay'

    0.0
  }
  ,

  // End of '<S283>/Enabled Subsystem'

  // Start of '<S282>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S287>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S287>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S287>/Delay'

    0.0
  }
  ,

  // End of '<S282>/Enabled Subsystem'

  // Start of '<S263>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S279>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S279>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S279>/Delay'

    0.0
  }
  ,

  // End of '<S263>/Enabled Subsystem'

  // Start of '<S262>/Enabled Subsystem'
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

  // End of '<S262>/Enabled Subsystem'

  // Start of '<S256>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S259>/UDP Send (GUI)'

    48720
  }
  ,

  // End of '<S256>/Change RED Behavior'

  // Start of '<S256>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S258>/UDP Send (GUI)'

    48722
  }
  ,

  // End of '<S256>/Change BLUE Behavior'

  // Start of '<S256>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S257>/UDP Send (GUI)'

    48721
  }
  ,

  // End of '<S256>/Change BLACK Behavior'

  // Start of '<S4>/Change RED Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S208>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S208>/UDP Send'

    33001
  }
  ,

  // End of '<S4>/Change RED Behavior'

  // Start of '<S4>/Change BLUE Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S207>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S207>/UDP Send'

    33003
  }
  ,

  // End of '<S4>/Change BLUE Behavior'

  // Start of '<S4>/Change BLACK Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S206>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S206>/UDP Send'

    33002
  }
  ,

  // End of '<S4>/Change BLACK Behavior'

  // Start of '<S3>/Custom Control (ARM)'
  {
    // Expression: 0
    //  Referenced by: '<S148>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Custom Control (ARM)'

  // Start of '<S3>/Disable Thrusters (BLUE)'
  {
    // Expression: 0
    //  Referenced by: '<S159>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLUE)'

  // Start of '<S3>/Disable Thrusters (BLACK)'
  {
    // Expression: 0
    //  Referenced by: '<S158>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLACK)'

  // Start of '<S3>/Disable Thrusters (RED)'
  {
    // Expression: 0
    //  Referenced by: '<S160>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (RED)'

  // Start of '<S1>/Phase #6: Clean Shutdown'
  {
    // Expression: 0
    //  Referenced by: '<S26>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant8'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Puck State'

    0.0,

    // Expression: "Chaser: End of Experiment Reached"
    //  Referenced by: '<S26>/String Constant'

    "Chaser: End of Experiment Reached",

    // Expression: "Target: End of Experiment Reached"
    //  Referenced by: '<S26>/String Constant1'

    "Target: End of Experiment Reached",

    // Expression: "Obstacle: End of Experiment Reached"
    //  Referenced by: '<S26>/String Constant2'

    "Obstacle: End of Experiment Reached"
  }
  ,

  // End of '<S1>/Phase #6: Clean Shutdown'

  // Start of '<S1>/Phase #5: Hold Home'
  {
    // Expression: 0
    //  Referenced by: '<S25>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S25>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S25>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S25>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S25>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S25>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S25>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S25>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S25>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S122>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S122>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S122>/Constant2'

    0.0,

    // Expression: "Target: Running Phase 5"
    //  Referenced by: '<S25>/String Constant1'

    "Target: Running Phase 5",

    // Expression: "Obstacle: Running Phase 5"
    //  Referenced by: '<S25>/String Constant2'

    "Obstacle: Running Phase 5",

    // Expression: "Chaser: Running Phase 5"
    //  Referenced by: '<S25>/String Constant'

    "Chaser: Running Phase 5"
  }
  ,

  // End of '<S1>/Phase #5: Hold Home'

  // Start of '<S1>/Phase #4: Return Home'
  {
    // Expression: 0
    //  Referenced by: '<S24>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S24>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S24>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S24>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S24>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S24>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S118>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S118>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S118>/Constant2'

    0.0,

    // Expression: "Target: Running Phase 4"
    //  Referenced by: '<S24>/String Constant1'

    "Target: Running Phase 4",

    // Expression: "Obstacle: Running Phase 4"
    //  Referenced by: '<S24>/String Constant2'

    "Obstacle: Running Phase 4",

    // Expression: "Chaser: Running Phase 4"
    //  Referenced by: '<S24>/String Constant'

    "Chaser: Running Phase 4"
  }
  ,

  // End of '<S1>/Phase #4: Return Home'

  // Start of '<S59>/If Action Subsystem5'
  {
    // Expression: 3
    //  Referenced by: '<S82>/Constant'

    3.0,

    // Expression: 1
    //  Referenced by: '<S82>/Constant1'

    1.0
  }
  ,

  // End of '<S59>/If Action Subsystem5'

  // Start of '<S59>/If Action Subsystem4'
  {
    // Expression: 2
    //  Referenced by: '<S81>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S81>/Constant1'

    2.0
  }
  ,

  // End of '<S59>/If Action Subsystem4'

  // Start of '<S59>/If Action Subsystem3'
  {
    // Expression: 2
    //  Referenced by: '<S80>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S80>/Constant1'

    2.0
  }
  ,

  // End of '<S59>/If Action Subsystem3'

  // Start of '<S59>/If Action Subsystem2'
  {
    // Expression: 3
    //  Referenced by: '<S79>/Constant'

    3.0,

    // Expression: 1
    //  Referenced by: '<S79>/Constant1'

    1.0
  }
  ,

  // End of '<S59>/If Action Subsystem2'

  // Start of '<S59>/If Action Subsystem1'
  {
    // Expression: 2
    //  Referenced by: '<S78>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S78>/Constant1'

    2.0
  }
  ,

  // End of '<S59>/If Action Subsystem1'

  // Start of '<S59>/If Action Subsystem'
  {
    // Expression: 2
    //  Referenced by: '<S77>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S77>/Constant1'

    2.0
  }
  ,

  // End of '<S59>/If Action Subsystem'

  // Start of '<S1>/Phase #1: Start Floating '
  {
    // Expression: 0
    //  Referenced by: '<S21>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S21>/Constant8'

    0.0,

    // Expression: 1
    //  Referenced by: '<S21>/Puck State'

    1.0,

    // Expression: "Chaser: Running Phase 1"
    //  Referenced by: '<S21>/String Constant'

    "Chaser: Running Phase 1",

    // Expression: "Target: Running Phase 1"
    //  Referenced by: '<S21>/String Constant1'

    "Target: Running Phase 1",

    // Expression: "Obstacle: Running Phase 1"
    //  Referenced by: '<S21>/String Constant2'

    "Obstacle: Running Phase 1"
  }
  ,

  // End of '<S1>/Phase #1: Start Floating '

  // Start of '<S1>/Phase #0: Synchronization'
  {
    // Expression: 0
    //  Referenced by: '<S20>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Constant8'

    0.0,

    // Expression: 0
    //  Referenced by: '<S20>/Puck State'

    0.0,

    // Expression: "Chaser: Running Phase 0"
    //  Referenced by: '<S20>/String Constant'

    "Chaser: Running Phase 0",

    // Expression: "Target: Running Phase 0"
    //  Referenced by: '<S20>/String Constant1'

    "Target: Running Phase 0",

    // Expression: "Obstacle: Running Phase 0"
    //  Referenced by: '<S20>/String Constant2'

    "Obstacle: Running Phase 0"
  }
  // End of '<S1>/Phase #0: Synchronization'
};

//
// File trailer for generated code.
//
// [EOF]
//
