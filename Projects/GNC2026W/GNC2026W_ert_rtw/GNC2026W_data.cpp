//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W_data.cpp
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
#include "GNC2026W.h"

// Block parameters (default storage)
P_GNC2026W_T GNC2026W_P = {
  // Variable: A_c
  //  Referenced by: '<S150>/Constant7'

  { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 },

  // Variable: CVrate
  //  Referenced by:
  //    '<S220>/EKF'
  //    '<S221>/MEKF'
  //    '<S222>/Unscented Kalman Filter'
  //    '<S319>/Sample and Hold'
  //    '<S262>/Sample and Hold'

  0.2,

  // Variable: F_red_X_nominal
  //  Referenced by:
  //    '<S414>/MATLAB Function5'
  //    '<S426>/MATLAB Function5'
  //    '<S438>/MATLAB Function5'

  0.2825,

  // Variable: F_red_Y_nominal
  //  Referenced by:
  //    '<S414>/MATLAB Function5'
  //    '<S426>/MATLAB Function5'
  //    '<S438>/MATLAB Function5'

  0.2825,

  // Variable: F_thrusters_BLACK
  //  Referenced by: '<S417>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_BLUE
  //  Referenced by: '<S429>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_RED
  //  Referenced by: '<S441>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_u
  //  Referenced by: '<S150>/Constant3'

  { 0.0, 0.0, 0.0 },

  // Variable: Gamma1_el
  //  Referenced by: '<S363>/Dynamics Model'

  0.12,

  // Variable: Gamma1_sh
  //  Referenced by: '<S363>/Dynamics Model'

  0.005,

  // Variable: Gamma1_wr
  //  Referenced by: '<S363>/Dynamics Model'

  0.025,

  // Variable: Gamma2_el
  //  Referenced by: '<S363>/Dynamics Model'

  5.0,

  // Variable: Gamma2_sh
  //  Referenced by: '<S363>/Dynamics Model'

  5.0,

  // Variable: Gamma2_wr
  //  Referenced by: '<S363>/Dynamics Model'

  5.0,

  // Variable: Gamma3_el
  //  Referenced by: '<S363>/Dynamics Model'

  10.0,

  // Variable: Gamma3_sh
  //  Referenced by: '<S363>/Dynamics Model'

  40.0,

  // Variable: Gamma3_wr
  //  Referenced by: '<S363>/Dynamics Model'

  40.0,

  // Variable: Gamma4_el
  //  Referenced by: '<S363>/Dynamics Model'

  0.039,

  // Variable: Gamma4_sh
  //  Referenced by: '<S363>/Dynamics Model'

  0.015,

  // Variable: Gamma4_wr
  //  Referenced by: '<S363>/Dynamics Model'

  0.029,

  // Variable: Gamma5_el
  //  Referenced by: '<S363>/Dynamics Model'

  800.0,

  // Variable: Gamma5_sh
  //  Referenced by: '<S363>/Dynamics Model'

  800.0,

  // Variable: Gamma5_wr
  //  Referenced by: '<S363>/Dynamics Model'

  800.0,

  // Variable: Gamma6_el
  //  Referenced by: '<S363>/Dynamics Model'

  1.0E-6,

  // Variable: Gamma6_sh
  //  Referenced by: '<S363>/Dynamics Model'

  0.005,

  // Variable: Gamma6_wr
  //  Referenced by: '<S363>/Dynamics Model'

  0.02,

  // Variable: IBLACK
  //  Referenced by: '<S318>/MATLAB Function'

  0.19956537087503129,

  // Variable: IBLUE
  //  Referenced by: '<S343>/MATLAB Function'

  0.19609228544737417,

  // Variable: IDIST
  //  Referenced by: '<S363>/Inertia Function 1'

  0.003506,

  // Variable: IEE
  //  Referenced by: '<S363>/Inertia Function 1'

  0.000106,

  // Variable: IPROX
  //  Referenced by: '<S363>/Inertia Function 1'

  0.003704,

  // Variable: IRED
  //  Referenced by:
  //    '<S363>/Inertia Function 1'
  //    '<S394>/MATLAB Function'

  0.19816136536704418,

  // Variable: K_BLACK
  //  Referenced by: '<S151>/Constant2'

  { 0.40261011025699511, -3.4287825942218297E-15, -7.6568971511887352E-15,
    4.896176968930996E-15, 0.40261011025700855, -3.7902115134773985E-15,
    -3.8648663400066327E-16, -9.1036478180055036E-16, 0.0815549644322501,
    3.395465184953931, 2.0360842460827311E-14, -6.3325920292291945E-14,
    -7.0448446123140753E-14, 3.3954651849541753, -6.212171373874009E-15,
    -7.5643673053589907E-16, -7.9653463685425227E-16, 0.40690949597934273 },

  // Variable: K_BLUE
  //  Referenced by: '<S152>/Constant2'

  { 0.40261011025701493, 1.2206182528119487E-14, -1.4639288893715909E-15,
    -9.4230274216387939E-15, 0.40261011025700266, 4.1197784005288409E-15,
    -1.485297024747621E-15, 1.4061593822592103E-15, 0.0814074262630697,
    3.3954651849543733, 2.0981480441939482E-14, -9.2588841052682911E-15,
    -5.4540211878191527E-14, 3.3954651849542157, -4.1164164779134136E-14,
    -6.4042550040150137E-16, 3.4893935173859177E-16, 0.40554915553132265 },

  // Variable: K_RED
  //  Referenced by: '<S153>/Constant2'

  { 0.40256594667683754, 2.0662088914679269E-14, -1.7996031327371092E-15,
    2.6520865059578737E-16, 0.40256594667684487, 1.2018851384452491E-14,
    -9.46796434292776E-16, 1.4460895348381485E-16, 0.081495906381188726,
    3.3752746856917519, 8.1934459217336553E-14, 1.8840564859297624E-15,
    1.603907055206163E-14, 3.3752746856917333, 5.301322954957635E-14,
    -5.8460770909695588E-17, 4.1601121670017965E-17, 0.40636232022479712 },

  // Variable: Kd_elarm
  //  Referenced by: '<S186>/kd_elarm'

  0.8,

  // Variable: Kd_sharm
  //  Referenced by: '<S187>/kd_sharm'

  1.0,

  // Variable: Kd_tb
  //  Referenced by: '<S155>/Gain5'

  1.8,

  // Variable: Kd_tblue
  //  Referenced by: '<S156>/Gain5'

  1.8,

  // Variable: Kd_tr
  //  Referenced by: '<S157>/Gain5'

  1.8,

  // Variable: Kd_wrarm
  //  Referenced by: '<S188>/kd_wrarm'

  0.6,

  // Variable: Kd_xb
  //  Referenced by: '<S155>/Gain3'

  3.6,

  // Variable: Kd_xblue
  //  Referenced by: '<S156>/Gain3'

  3.6,

  // Variable: Kd_xr
  //  Referenced by: '<S157>/Gain3'

  3.6,

  // Variable: Kd_yb
  //  Referenced by: '<S155>/Gain4'

  3.6,

  // Variable: Kd_yblue
  //  Referenced by: '<S156>/Gain4'

  3.6,

  // Variable: Kd_yr
  //  Referenced by: '<S157>/Gain4'

  3.6,

  // Variable: Kp_elarm
  //  Referenced by: '<S186>/kp_elarm'

  1.2,

  // Variable: Kp_sharm
  //  Referenced by: '<S187>/kp_sharm'

  1.5,

  // Variable: Kp_tb
  //  Referenced by: '<S155>/Gain2'

  0.5,

  // Variable: Kp_tblue
  //  Referenced by: '<S156>/Gain2'

  0.5,

  // Variable: Kp_tr
  //  Referenced by: '<S157>/Gain2'

  0.5,

  // Variable: Kp_wrarm
  //  Referenced by: '<S188>/kp_wrarm'

  1.0,

  // Variable: Kp_xb
  //  Referenced by: '<S155>/Gain'

  1.0,

  // Variable: Kp_xblue
  //  Referenced by: '<S156>/Gain'

  1.0,

  // Variable: Kp_xr
  //  Referenced by: '<S157>/Gain'

  1.0,

  // Variable: Kp_yb
  //  Referenced by: '<S155>/Gain1'

  1.0,

  // Variable: Kp_yblue
  //  Referenced by: '<S156>/Gain1'

  1.0,

  // Variable: Kp_yr
  //  Referenced by: '<S157>/Gain1'

  1.0,

  // Variable: Mc_inv
  //  Referenced by: '<S150>/MATLAB Function3'

  { 0.082392683529702554, 0.0, 0.0, 0.0, 0.082392683529702554, 0.0, 0.0, 0.0,
    5.0463923588119766 },

  // Variable: PWMFreq
  //  Referenced by:
  //    '<S19>/PWM Frequency'
  //    '<S414>/MATLAB Function1'
  //    '<S426>/MATLAB Function1'
  //    '<S438>/MATLAB Function8'
  //    '<S416>/Constant1'
  //    '<S428>/Constant1'
  //    '<S440>/Constant1'

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

  55.0,

  // Variable: Phase3_End
  //  Referenced by: '<S1>/Constant2'

  235.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by:
  //    '<S9>/Constant4'
  //    '<S24>/Constant4'

  55.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by: '<S24>/Constant1'

  235.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by: '<S24>/Constant2'

  235.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by: '<S24>/Constant3'

  235.0,

  // Variable: Phase4_End
  //  Referenced by: '<S1>/Constant3'

  265.0,

  // Variable: Phase5_End
  //  Referenced by: '<S1>/Constant6'

  285.0,

  // Variable: Phi
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  1.2788882640695929,

  // Variable: R
  //  Referenced by: '<S222>/Unscented Kalman Filter'

  { 0.05, 0.0, 0.0, 0.0, 0.05, 0.0, 0.0, 0.0, 0.05 },

  // Variable: Tz_lim_elarm
  //  Referenced by: '<S185>/Saturation1'

  0.1,

  // Variable: Tz_lim_sharm
  //  Referenced by: '<S185>/Saturation'

  0.1,

  // Variable: Tz_lim_wrarm
  //  Referenced by: '<S185>/Saturation3'

  0.1,

  // Variable: VISinLoop
  //  Referenced by:
  //    '<S303>/Constant'
  //    '<S231>/Constant'
  //    '<S240>/Constant'
  //    '<S262>/Constant'

  1.0,

  // Variable: X1_blk
  //  Referenced by: '<S41>/Desired X-Position (BLACK)'

  0.4,

  // Variable: X2_blk
  //  Referenced by: '<S63>/Desired X-Position (BLACK)'

  0.4,

  // Variable: X3_blk
  //  Referenced by: '<S89>/Desired X-Position (BLACK)'

  0.4,

  // Variable: Y1_blk
  //  Referenced by: '<S41>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: Y2_blk
  //  Referenced by: '<S63>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: Y3_blk
  //  Referenced by: '<S89>/Desired Y-Position (BLACK)'

  0.4,

  // Variable: a
  //  Referenced by: '<S222>/Unscented Kalman Filter'

  1.0,

  // Variable: a1
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.196822,

  // Variable: a2
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.198152,

  // Variable: a3
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.062097,

  // Variable: alpha
  //  Referenced by: '<S150>/MATLAB Function3'

  { 2.0, 0.0, 0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 2.0 },

  // Variable: b
  //  Referenced by: '<S222>/Unscented Kalman Filter'

  2.0,

  // Variable: b0
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.25,

  // Variable: b1
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.107678,

  // Variable: b2
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.106348,

  // Variable: b3
  //  Referenced by: '<S363>/Inertia Function 1'

  0.025153,

  // Variable: baseRate
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

  0.05,

  // Variable: dataRate
  //  Referenced by:
  //    '<S317>/Constant1'
  //    '<S346>/Constant1'
  //    '<S261>/Constant'
  //    '<S282>/Constant'
  //    '<S292>/Constant'
  //    '<S368>/Constant1'
  //    '<S393>/Constant1'

  0.1,

  // Variable: drop_states_BLACK
  //  Referenced by: '<S318>/Velocity to Position'

  { 1.755775, 1.209675, 0.0 },

  // Variable: drop_states_BLUE
  //  Referenced by: '<S343>/Velocity to Position'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: drop_states_RED
  //  Referenced by: '<S394>/Velocity to Position'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: dt
  //  Referenced by: '<S222>/Unscented Kalman Filter'

  0.05,

  // Variable: fNum
  //  Referenced by: '<S219>/Constant'

  1.0,

  // Variable: gamma
  //  Referenced by: '<S150>/MATLAB Function3'

  { 0.1, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.5 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S120>/Desired States (BLACK)'
  //    '<S124>/Desired States (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S121>/Desired States (BLUE)'
  //    '<S125>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S122>/Constant2'
  //    '<S126>/Constant2'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: init_states_BLACK
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

  { 0.4, 0.4, -0.78539816339744828 },

  // Variable: init_states_BLUE
  //  Referenced by: '<S30>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S31>/Constant2'
  //    '<S165>/Delay'
  //    '<S165>/Delay1'
  //    '<S39>/Constant2'
  //    '<S59>/Constant2'
  //    '<S166>/Delay'
  //    '<S166>/Delay1'

  { 2.0, 1.5, 3.1415926535897931 },

  // Variable: k
  //  Referenced by: '<S222>/Unscented Kalman Filter'

  5.0,

  // Variable: mBLACK
  //  Referenced by: '<S318>/MATLAB Function'

  12.305,

  // Variable: mBLUE
  //  Referenced by: '<S343>/MATLAB Function'

  12.305,

  // Variable: mDIST
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.335,

  // Variable: mEE
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.111,

  // Variable: mPROX
  //  Referenced by:
  //    '<S363>/Coriolis Function1'
  //    '<S363>/Inertia Function 1'

  0.345,

  // Variable: mRED
  //  Referenced by:
  //    '<S363>/Inertia Function 1'
  //    '<S394>/MATLAB Function'

  12.137,

  // Variable: platformSelection
  //  Referenced by:
  //    '<S314>/Constant'
  //    '<S253>/MATLAB Function'

  3.0,

  // Variable: sep1
  //  Referenced by: '<S39>/Separation'

  0.6,

  // Variable: sep3
  //  Referenced by: '<S87>/Separation'

  0.3,

  // Variable: simMode
  //  Referenced by: '<S18>/Constant'

  1.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by: '<S417>/MATLAB Function'

  { 73.881766499134855, -64.118233500865131, 56.874845513718384,
    -84.6251544862816, 64.118233500865131, -66.281766499134861, 79.1251544862816,
    -49.874845513718391 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by: '<S429>/MATLAB Function'

  { 73.815115806582682, -64.1848841934173, 57.054043071921981, -84.445956928078,
    64.1848841934173, -66.215115806582673, 78.945956928078, -50.054043071921988
  },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S414>/MATLAB Function5'
  //    '<S426>/MATLAB Function5'
  //    '<S438>/MATLAB Function5'
  //    '<S441>/MATLAB Function'

  { 71.579508939606143, -60.420491060393836, 60.451141138666884,
    -84.0488588613331, 63.420491060393836, -70.579508939606143, 76.5488588613331,
    -52.951141138666891 },

  // Variable: xLength
  //  Referenced by:
  //    '<S104>/Desired X-Position (BLACK)'
  //    '<S370>/Constant'
  //    '<S46>/Constant1'
  //    '<S68>/Constant1'
  //    '<S94>/Constant1'
  //    '<S98>/Constant1'
  //    '<S110>/Constant1'
  //    '<S114>/Constant1'

  3.51155,

  // Variable: yLength
  //  Referenced by:
  //    '<S104>/Desired Y-Position (BLACK)'
  //    '<S370>/Constant2'
  //    '<S46>/Constant2'
  //    '<S68>/Constant2'
  //    '<S94>/Constant2'
  //    '<S98>/Constant2'
  //    '<S110>/Constant2'
  //    '<S114>/Constant2'

  2.41935,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S203>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevScale
  //  Referenced by: '<S204>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevScale
  //  Referenced by: '<S205>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_i
  //  Referenced by: '<S180>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
  //  Referenced by: '<S181>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
  //  Referenced by: '<S182>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_p
  //  Referenced by: '<S193>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
  //  Referenced by: '<S194>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
  //  Referenced by: '<S195>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_d
  //  Referenced by: '<S170>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
  //  Referenced by: '<S171>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
  //  Referenced by: '<S172>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
  //  Referenced by: '<S198>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
  //  Referenced by: '<S199>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
  //  Referenced by: '<S200>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_n
  //  Referenced by: '<S175>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
  //  Referenced by: '<S176>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
  //  Referenced by: '<S177>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
  //  Referenced by: '<S189>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
  //  Referenced by: '<S190>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
  //  Referenced by: '<S191>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_m
  //  Referenced by: '<S384>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_h
  //  Referenced by: '<S382>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSc_lm
  //  Referenced by: '<S383>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_c
  //  Referenced by: '<S402>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSc_lh
  //  Referenced by: '<S403>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_k
  //  Referenced by: '<S327>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSc_fs
  //  Referenced by: '<S328>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_a
  //  Referenced by: '<S355>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_g
  //  Referenced by: '<S356>/UD'

  0.0,

  // Mask Parameter: MATLABFunction5_max_iters
  //  Referenced by: '<S414>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_b
  //  Referenced by: '<S426>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_e
  //  Referenced by: '<S438>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_tol
  //  Referenced by: '<S414>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_j
  //  Referenced by: '<S426>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_g
  //  Referenced by: '<S438>/MATLAB Function5'

  1.0E-6,

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
  //  Referenced by: '<S28>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S28>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S28>/Constant2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S32>/Constant11'

  2.0,

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

  // Expression: pi/2
  //  Referenced by: '<S36>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S36>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S36>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S38>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S46>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S46>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S41>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S41>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S40>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.3
  //  Referenced by: '<S52>/Constant'

  0.3,

  // Expression: 0
  //  Referenced by: '<S33>/Constant12'

  0.0,

  // Expression: 0
  //  Referenced by: '<S33>/Constant15'

  0.0,

  // Expression: 0
  //  Referenced by: '<S33>/Constant18'

  0.0,

  // Expression: 1
  //  Referenced by: '<S33>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S33>/Constant8'

  2.0,

  // Expression: pi/2
  //  Referenced by: '<S56>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S56>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S56>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S58>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S68>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S68>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S63>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S63>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S62>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.48
  //  Referenced by: '<S59>/Separation'

  0.48,

  // Expression: 0.3
  //  Referenced by: '<S74>/Constant'

  0.3,

  // Expression: 0
  //  Referenced by: '<S55>/Constant14'

  0.0,

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

  // Expression: pi/2
  //  Referenced by: '<S84>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S84>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S84>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S86>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S94>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S94>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S89>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S89>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S88>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S87>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S98>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S98>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S87>/Constant'

  3.1515926535897929,

  // Expression: 0.3
  //  Referenced by: '<S100>/Constant'

  0.3,

  // Expression: 1
  //  Referenced by: '<S35>/Constant11'

  1.0,

  // Expression: 0
  //  Referenced by: '<S35>/Constant12'

  0.0,

  // Expression: 0
  //  Referenced by: '<S35>/Constant14'

  0.0,

  // Expression: 0
  //  Referenced by: '<S35>/Constant15'

  0.0,

  // Expression: 0
  //  Referenced by: '<S35>/Constant18'

  0.0,

  // Expression: 2
  //  Referenced by: '<S35>/Constant4'

  2.0,

  // Expression: 3
  //  Referenced by: '<S35>/Constant5'

  3.0,

  // Expression: 1
  //  Referenced by: '<S35>/Constant6'

  1.0,

  // Expression: 2
  //  Referenced by: '<S35>/Constant8'

  2.0,

  // Expression: 0
  //  Referenced by: '<S103>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S103>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S103>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S105>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S110>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S110>/Gain1'

  -0.85,

  // Expression: 0.03490659
  //  Referenced by: '<S107>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S106>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S114>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S114>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S106>/Constant'

  3.1515926535897929,

  // Expression: 0.30
  //  Referenced by: '<S106>/Separation'

  0.3,

  // Expression: 0.3
  //  Referenced by: '<S116>/Constant'

  0.3,

  // Computed Parameter: Path_Y0
  //  Referenced by: '<S142>/Path'

  0.0,

  // Expression: zeros(6,1)
  //  Referenced by: '<S138>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S138>/Switch'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S203>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S204>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S205>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S157>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S157>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S157>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_h
  //  Referenced by: '<S180>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_e
  //  Referenced by: '<S181>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S182>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S193>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_hr
  //  Referenced by: '<S194>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ca
  //  Referenced by: '<S195>/TSamp'

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

  // Computed Parameter: TSamp_WtEt_nd
  //  Referenced by: '<S170>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_co
  //  Referenced by: '<S171>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_no
  //  Referenced by: '<S172>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S198>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S199>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_px
  //  Referenced by: '<S200>/TSamp'

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

  // Computed Parameter: TSamp_WtEt_ft
  //  Referenced by: '<S175>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_eh
  //  Referenced by: '<S176>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ii
  //  Referenced by: '<S177>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_pu
  //  Referenced by: '<S189>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f0
  //  Referenced by: '<S190>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_nz
  //  Referenced by: '<S191>/TSamp'

  20.0,

  // Expression: 1
  //  Referenced by: '<S154>/Constant7'

  1.0,

  // Computed Parameter: Merge3_InitialOutput
  //  Referenced by: '<S154>/Merge3'

  0.0,

  // Computed Parameter: Merge4_InitialOutput
  //  Referenced by: '<S154>/Merge4'

  0.0,

  // Computed Parameter: Merge5_InitialOutput
  //  Referenced by: '<S154>/Merge5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/Zero'

  0.0,

  // Expression: 428
  //  Referenced by: '<S217>/GPIO Write1'

  428.0,

  // Expression: 1
  //  Referenced by: '<S217>/GPIO Write1'

  1.0,

  // Computed Parameter: dytdt_Y0
  //  Referenced by: '<S333>/dy(t)//dt'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S331>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_l
  //  Referenced by: '<S332>/Out1'

  0.0,

  // Computed Parameter: dytdt_Y0_f
  //  Referenced by: '<S361>/dy(t)//dt'

  0.0,

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S359>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S360>/Out1'

  0.0,

  // Computed Parameter: dydt_Y0
  //  Referenced by: '<S380>/dy//dt'

  0.0,

  // Expression: 0.1
  //  Referenced by: '<S380>/Constant2'

  0.1,

  // Expression: 0.0
  //  Referenced by: '<S380>/Delay'

  0.0,

  // Computed Parameter: dytdt_Y0_n
  //  Referenced by: '<S389>/dy(t)//dt'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S387>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_m
  //  Referenced by: '<S388>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S363>/Add Noise'

  0.0,

  // Computed Parameter: AddNoise_StdDev
  //  Referenced by: '<S363>/Add Noise'

  3.1622776601683795E-5,

  // Expression: 0
  //  Referenced by: '<S363>/Add Noise'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S363>/Delay'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval
  //  Referenced by: '<S363>/Velocity to Position'

  0.05,

  // Expression: [drop_states_RED,drop_states_ARM]
  //  Referenced by: '<S363>/Velocity to Position'

  { 2.655775, 1.209675, 3.1415926535897931, 1.5707963267948966,
    1.5707963267948966, 0.0 },

  // Expression: 0.0
  //  Referenced by: '<S368>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S368>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S386>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S386>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S386>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S374>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S374>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S372>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S372>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S373>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S373>/Constant3'

  0.0,

  // Computed Parameter: TSamp_WtEt_d
  //  Referenced by: '<S384>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ck
  //  Referenced by: '<S382>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_l
  //  Referenced by: '<S383>/TSamp'

  20.0,

  // Expression: 0
  //  Referenced by: '<S370>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S370>/Constant3'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainval
  //  Referenced by: '<S363>/Acceleration to Velocity'

  0.05,

  // Expression: [0;0;0;0;0;0]
  //  Referenced by: '<S363>/Acceleration to Velocity'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Computed Parameter: dytdt_Y0_ne
  //  Referenced by: '<S408>/dy(t)//dt'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S406>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_nj
  //  Referenced by: '<S407>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S364>/Add Noise'

  0.0,

  // Computed Parameter: AddNoise_StdDev_m
  //  Referenced by: '<S364>/Add Noise'

  3.1622776601683795E-5,

  // Expression: 0
  //  Referenced by: '<S364>/Add Noise'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_e
  //  Referenced by: '<S394>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S394>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_m
  //  Referenced by: '<S394>/Velocity to Position'

  0.05,

  // Expression: 0.0
  //  Referenced by: '<S393>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S405>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S405>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S405>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S396>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S396>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S395>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S395>/Constant3'

  0.0,

  // Computed Parameter: TSamp_WtEt_k
  //  Referenced by: '<S402>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_m
  //  Referenced by: '<S403>/TSamp'

  20.0,

  // Expression: 0
  //  Referenced by: '<S312>/Add Noise'

  0.0,

  // Computed Parameter: AddNoise_StdDev_l
  //  Referenced by: '<S312>/Add Noise'

  3.1622776601683795E-5,

  // Expression: 0
  //  Referenced by: '<S312>/Add Noise'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_h
  //  Referenced by: '<S318>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S318>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_d
  //  Referenced by: '<S318>/Velocity to Position'

  0.05,

  // Expression: 0.0
  //  Referenced by: '<S317>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S317>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S330>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S330>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S330>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S321>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S321>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S320>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S320>/Constant3'

  0.0,

  // Computed Parameter: TSamp_WtEt_a
  //  Referenced by: '<S327>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_g
  //  Referenced by: '<S328>/TSamp'

  20.0,

  // Expression: 0
  //  Referenced by: '<S313>/Add Noise'

  0.0,

  // Computed Parameter: AddNoise_StdDev_j
  //  Referenced by: '<S313>/Add Noise'

  3.1622776601683795E-5,

  // Expression: 0
  //  Referenced by: '<S313>/Add Noise'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_a
  //  Referenced by: '<S343>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S343>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_dt
  //  Referenced by: '<S343>/Velocity to Position'

  0.05,

  // Expression: 0.0
  //  Referenced by: '<S346>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S346>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S358>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S358>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S358>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S349>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S349>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S348>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S348>/Constant3'

  0.0,

  // Computed Parameter: TSamp_WtEt_cs
  //  Referenced by: '<S355>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_k0
  //  Referenced by: '<S356>/TSamp'

  20.0,

  // Expression: 0.0
  //  Referenced by: '<S218>/Delay'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S218>/Delay1'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S218>/Delay2'

  0.0,

  // Computed Parameter: Merge_InitialOutput
  //  Referenced by: '<S240>/Merge'

  0.0,

  // Computed Parameter: Merge_InitialOutput_p
  //  Referenced by: '<S231>/Merge'

  0.0,

  // Computed Parameter: Merge_InitialOutput_b
  //  Referenced by: '<S219>/Merge'

  0.0,

  // Computed Parameter: UniversalTime_Y0
  //  Referenced by: '<S254>/Universal Time'

  0.0,

  // Computed Parameter: dytdt_Y0_c
  //  Referenced by: '<S266>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_j
  //  Referenced by: '<S286>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_d
  //  Referenced by: '<S296>/dy(t)//dt'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLAX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLAY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLACKVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S250>/Convert BLACKVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S261>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S261>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S261>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S264>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S264>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S263>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S263>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert BLUX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert BLUY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert BLUEVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S251>/Convert BLUEVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S282>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S282>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S282>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S284>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S284>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S283>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S283>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert REDX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert REDY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert REDVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert REDVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S292>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S292>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S292>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S294>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S294>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S293>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S293>/Constant3'

  0.0,

  // Expression: 1
  //  Referenced by: '<S253>/Constant'

  1.0,

  // Expression: -1
  //  Referenced by: '<S303>/Gain'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S306>/Constant'

  0.0,

  // Expression: 140
  //  Referenced by: '<S306>/Step'

  140.0,

  // Expression: 0
  //  Referenced by: '<S306>/Step'

  0.0,

  // Expression: 1
  //  Referenced by: '<S306>/Step'

  1.0,

  // Expression: 400
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 0
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 200
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  200.0,

  // Expression: 3072
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  3072.0,

  // Expression: 1024
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  1024.0,

  // Expression: 0
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 850
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  850.0,

  // Expression: 400
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 100
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  100.0,

  // Expression: 20
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  20.0,

  // Expression: 0
  //  Referenced by: '<S307>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S421>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_jx
  //  Referenced by: '<S422>/Out1'

  0.0,

  // Computed Parameter: BLACKDC_Y0
  //  Referenced by: '<S411>/BLACK DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S416>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S416>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_nw
  //  Referenced by: '<S433>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_js
  //  Referenced by: '<S434>/Out1'

  0.0,

  // Computed Parameter: BLUEDC_Y0
  //  Referenced by: '<S412>/BLUE DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S428>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S428>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S445>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S446>/Out1'

  0.0,

  // Computed Parameter: REDDC_Y0
  //  Referenced by: '<S413>/RED DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S440>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S440>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time39'

  0.0,

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
  //  Referenced by: '<S19>/Safety Number'

  568471.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain1'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain2'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain3'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain4'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain5'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain6'

  100.0,

  // Expression: 100
  //  Referenced by: '<S19>/Gain7'

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

  // Expression: zeros(3,1)
  //  Referenced by: '<Root>/Data Store Memory6'

  { 0.0, 0.0, 0.0 },

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
  //  Referenced by: '<Root>/Universal_Time1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time10'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time11'

  { 0.0, 0.0, 0.0 },

  // Expression: [0;0;0;0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time12'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

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

  // Expression: [0;0;0;0;0;0]
  //  Referenced by: '<Root>/Universal_Time7'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time8'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time9'

  0.0,

  // Expression: "Target: Running Phase 2"
  //  Referenced by: '<S23>/String Constant1'

  "Target: Running Phase 2",

  // Expression: "Obstacle: Running Phase 2"
  //  Referenced by: '<S23>/String Constant2'

  "Obstacle: Running Phase 2",

  // Expression: "Chaser: Running Phase 2"
  //  Referenced by: '<S23>/String Constant'

  "Chaser: Running Phase 2",

  // Expression: "Target: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S32>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 1",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S32>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 1",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 1"
  //  Referenced by: '<S32>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 1",

  // Expression: "Target: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S33>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 2",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S33>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 2",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 2"
  //  Referenced by: '<S33>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 2",

  // Expression: "Target: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S34>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 3",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S34>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 3",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 3"
  //  Referenced by: '<S34>/String Constant'

  "Chaser: Running Phase 3 Sub-Phase 3",

  // Expression: "Target: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S35>/String Constant1'

  "Target: Running Phase 3 Sub-Phase 4",

  // Expression: "Obstacle: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S35>/String Constant2'

  "Obstacle: Running Phase 3 Sub-Phase 4",

  // Expression: "Chaser: Running Phase 3 Sub-Phase 4"
  //  Referenced by: '<S35>/String Constant'

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
  //  Referenced by: '<S214>/UDP Send1'

  55000,

  // Computed Parameter: UDPSend2_Port
  //  Referenced by: '<S215>/UDP Send2'

  55000,

  // Computed Parameter: UDPSend3_Port
  //  Referenced by: '<S216>/UDP Send3'

  55000,

  // Computed Parameter: ReceivePhaseSpaceData_Port
  //  Referenced by: '<S249>/Receive PhaseSpace Data'

  31534,

  // Computed Parameter: UDPReceiveREDClock_Port
  //  Referenced by: '<S253>/UDP Receive (RED Clock)'

  48740,

  // Computed Parameter: UDPReceiveBLACKClock_Port
  //  Referenced by: '<S253>/UDP Receive (BLACK Clock)'

  48741,

  // Computed Parameter: UDPReceiveBLUEClock_Port
  //  Referenced by: '<S253>/UDP Receive (BLUE Clock)'

  48742,

  // Computed Parameter: UDPReceive_Port
  //  Referenced by: '<S303>/UDP Receive'

  50005,

  // Computed Parameter: UDPReceive_Port_g
  //  Referenced by: '<S305>/UDP Receive'

  13761,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<S308>/UDP Send'

  46875,

  // Computed Parameter: UDPSend_Port_b
  //  Referenced by: '<S309>/UDP Send'

  10294,

  // Computed Parameter: UDPSend_Port_h
  //  Referenced by: '<S19>/UDP Send'

  48291,

  // Computed Parameter: ManualSwitch_CurrentSetting
  //  Referenced by: '<S306>/Manual Switch'

  0U,

  // Start of '<S20>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S452>/UDP Send (Clock)'

    48740
  }
  ,

  // End of '<S20>/Change RED Behavior'

  // Start of '<S20>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S451>/UDP Send (Clock)'

    48742
  }
  ,

  // End of '<S20>/Change BLUE Behavior'

  // Start of '<S20>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S450>/UDP Send (Clock)'

    48741
  }
  ,

  // End of '<S20>/Change BLACK Behavior'

  // Start of '<S294>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S300>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S300>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S300>/Delay'

    0.0
  }
  ,

  // End of '<S294>/Enabled Subsystem'

  // Start of '<S293>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S298>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S298>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S298>/Delay'

    0.0
  }
  ,

  // End of '<S293>/Enabled Subsystem'

  // Start of '<S284>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S290>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S290>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S290>/Delay'

    0.0
  }
  ,

  // End of '<S284>/Enabled Subsystem'

  // Start of '<S283>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S288>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S288>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S288>/Delay'

    0.0
  }
  ,

  // End of '<S283>/Enabled Subsystem'

  // Start of '<S264>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S280>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S280>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S280>/Delay'

    0.0
  }
  ,

  // End of '<S264>/Enabled Subsystem'

  // Start of '<S263>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S278>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S278>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S278>/Delay'

    0.0
  }
  ,

  // End of '<S263>/Enabled Subsystem'

  // Start of '<S257>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S260>/UDP Send (GUI)'

    48720
  }
  ,

  // End of '<S257>/Change RED Behavior'

  // Start of '<S257>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S259>/UDP Send (GUI)'

    48722
  }
  ,

  // End of '<S257>/Change BLUE Behavior'

  // Start of '<S257>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S258>/UDP Send (GUI)'

    48721
  }
  ,

  // End of '<S257>/Change BLACK Behavior'

  // Start of '<S396>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S400>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S400>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S400>/Delay'

    0.0
  }
  ,

  // End of '<S396>/Enabled Subsystem'

  // Start of '<S395>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S398>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S398>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S398>/Delay'

    0.0
  }
  ,

  // End of '<S395>/Enabled Subsystem'

  // Start of '<S373>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S378>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S378>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S378>/Delay'

    0.0
  }
  ,

  // End of '<S373>/Enabled Subsystem'

  // Start of '<S372>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S376>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S376>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S376>/Delay'

    0.0
  }
  ,

  // End of '<S372>/Enabled Subsystem'

  // Start of '<S349>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S353>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S353>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S353>/Delay'

    0.0
  }
  ,

  // End of '<S349>/Enabled Subsystem'

  // Start of '<S348>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S351>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S351>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S351>/Delay'

    0.0
  }
  ,

  // End of '<S348>/Enabled Subsystem'

  // Start of '<S321>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S325>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S325>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S325>/Delay'

    0.0
  }
  ,

  // End of '<S321>/Enabled Subsystem'

  // Start of '<S320>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S323>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S323>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S323>/Delay'

    0.0
  }
  ,

  // End of '<S320>/Enabled Subsystem'

  // Start of '<S4>/Change RED Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S209>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S209>/UDP Send'

    33001
  }
  ,

  // End of '<S4>/Change RED Behavior'

  // Start of '<S4>/Change BLUE Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S208>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S208>/UDP Send'

    33003
  }
  ,

  // End of '<S4>/Change BLUE Behavior'

  // Start of '<S4>/Change BLACK Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S207>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S207>/UDP Send'

    33002
  }
  ,

  // End of '<S4>/Change BLACK Behavior'

  // Start of '<S3>/Custom Control (ARM)'
  {
    // Expression: 0
    //  Referenced by: '<S149>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Custom Control (ARM)'

  // Start of '<S3>/Disable Thrusters (BLUE)'
  {
    // Expression: 0
    //  Referenced by: '<S160>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLUE)'

  // Start of '<S3>/Disable Thrusters (BLACK)'
  {
    // Expression: 0
    //  Referenced by: '<S159>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLACK)'

  // Start of '<S3>/Disable Thrusters (RED)'
  {
    // Expression: 0
    //  Referenced by: '<S161>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (RED)'

  // Start of '<S1>/Phase #6: Clean Shutdown'
  {
    // Expression: 0
    //  Referenced by: '<S27>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Constant8'

    0.0,

    // Expression: 0
    //  Referenced by: '<S27>/Puck State'

    0.0,

    // Expression: "Chaser: End of Experiment Reached"
    //  Referenced by: '<S27>/String Constant'

    "Chaser: End of Experiment Reached",

    // Expression: "Target: End of Experiment Reached"
    //  Referenced by: '<S27>/String Constant1'

    "Target: End of Experiment Reached",

    // Expression: "Obstacle: End of Experiment Reached"
    //  Referenced by: '<S27>/String Constant2'

    "Obstacle: End of Experiment Reached"
  }
  ,

  // End of '<S1>/Phase #6: Clean Shutdown'

  // Start of '<S1>/Phase #5: Hold Home'
  {
    // Expression: 0
    //  Referenced by: '<S26>/Constant11'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant12'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant14'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant15'

    0.0,

    // Expression: 0
    //  Referenced by: '<S26>/Constant18'

    0.0,

    // Expression: 2
    //  Referenced by: '<S26>/Constant4'

    2.0,

    // Expression: 2
    //  Referenced by: '<S26>/Constant5'

    2.0,

    // Expression: 1
    //  Referenced by: '<S26>/Constant6'

    1.0,

    // Expression: 2
    //  Referenced by: '<S26>/Constant8'

    2.0,

    // Expression: pi/2
    //  Referenced by: '<S123>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S123>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S123>/Constant2'

    0.0,

    // Expression: "Target: Running Phase 5"
    //  Referenced by: '<S26>/String Constant1'

    "Target: Running Phase 5",

    // Expression: "Obstacle: Running Phase 5"
    //  Referenced by: '<S26>/String Constant2'

    "Obstacle: Running Phase 5",

    // Expression: "Chaser: Running Phase 5"
    //  Referenced by: '<S26>/String Constant'

    "Chaser: Running Phase 5"
  }
  ,

  // End of '<S1>/Phase #5: Hold Home'

  // Start of '<S1>/Phase #4: Return Home'
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
    //  Referenced by: '<S119>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S119>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S119>/Constant2'

    0.0,

    // Expression: "Target: Running Phase 4"
    //  Referenced by: '<S25>/String Constant1'

    "Target: Running Phase 4",

    // Expression: "Obstacle: Running Phase 4"
    //  Referenced by: '<S25>/String Constant2'

    "Obstacle: Running Phase 4",

    // Expression: "Chaser: Running Phase 4"
    //  Referenced by: '<S25>/String Constant'

    "Chaser: Running Phase 4"
  }
  ,

  // End of '<S1>/Phase #4: Return Home'

  // Start of '<S60>/If Action Subsystem5'
  {
    // Expression: 3
    //  Referenced by: '<S83>/Constant'

    3.0,

    // Expression: 1
    //  Referenced by: '<S83>/Constant1'

    1.0
  }
  ,

  // End of '<S60>/If Action Subsystem5'

  // Start of '<S60>/If Action Subsystem4'
  {
    // Expression: 2
    //  Referenced by: '<S82>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S82>/Constant1'

    2.0
  }
  ,

  // End of '<S60>/If Action Subsystem4'

  // Start of '<S60>/If Action Subsystem3'
  {
    // Expression: 2
    //  Referenced by: '<S81>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S81>/Constant1'

    2.0
  }
  ,

  // End of '<S60>/If Action Subsystem3'

  // Start of '<S60>/If Action Subsystem2'
  {
    // Expression: 3
    //  Referenced by: '<S80>/Constant'

    3.0,

    // Expression: 1
    //  Referenced by: '<S80>/Constant1'

    1.0
  }
  ,

  // End of '<S60>/If Action Subsystem2'

  // Start of '<S60>/If Action Subsystem1'
  {
    // Expression: 2
    //  Referenced by: '<S79>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S79>/Constant1'

    2.0
  }
  ,

  // End of '<S60>/If Action Subsystem1'

  // Start of '<S60>/If Action Subsystem'
  {
    // Expression: 2
    //  Referenced by: '<S78>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S78>/Constant1'

    2.0
  }
  ,

  // End of '<S60>/If Action Subsystem'

  // Start of '<S1>/Phase #1: Start Floating '
  {
    // Expression: 0
    //  Referenced by: '<S22>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant7'

    0.0,

    // Expression: 0
    //  Referenced by: '<S22>/Constant8'

    0.0,

    // Expression: 1
    //  Referenced by: '<S22>/Puck State'

    1.0,

    // Expression: "Chaser: Running Phase 1"
    //  Referenced by: '<S22>/String Constant'

    "Chaser: Running Phase 1",

    // Expression: "Target: Running Phase 1"
    //  Referenced by: '<S22>/String Constant1'

    "Target: Running Phase 1",

    // Expression: "Obstacle: Running Phase 1"
    //  Referenced by: '<S22>/String Constant2'

    "Obstacle: Running Phase 1"
  }
  ,

  // End of '<S1>/Phase #1: Start Floating '

  // Start of '<S1>/Phase #0: Synchronization'
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

    // Expression: 0
    //  Referenced by: '<S21>/Puck State'

    0.0,

    // Expression: "Chaser: Running Phase 0"
    //  Referenced by: '<S21>/String Constant'

    "Chaser: Running Phase 0",

    // Expression: "Target: Running Phase 0"
    //  Referenced by: '<S21>/String Constant1'

    "Target: Running Phase 0",

    // Expression: "Obstacle: Running Phase 0"
    //  Referenced by: '<S21>/String Constant2'

    "Obstacle: Running Phase 0"
  }
  // End of '<S1>/Phase #0: Synchronization'
};

//
// File trailer for generated code.
//
// [EOF]
//
