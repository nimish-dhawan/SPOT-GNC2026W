//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: GNC2026W_data.cpp
//
// Code generated for Simulink model 'GNC2026W'.
//
// Model version                  : 4.2484
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon May 11 15:28:53 2026
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
  //  Referenced by: '<S161>/MATLAB Function3'

  { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 },

  // Variable: CVrate
  //  Referenced by:
  //    '<S225>/EKF'
  //    '<S226>/MEKF'
  //    '<S264>/Sample and Hold'

  0.2,

  // Variable: F_red_X_nominal
  //  Referenced by:
  //    '<S322>/MATLAB Function5'
  //    '<S334>/MATLAB Function5'
  //    '<S346>/MATLAB Function5'

  0.2825,

  // Variable: F_red_Y_nominal
  //  Referenced by:
  //    '<S322>/MATLAB Function5'
  //    '<S334>/MATLAB Function5'
  //    '<S346>/MATLAB Function5'

  0.2825,

  // Variable: F_thrusters_BLACK
  //  Referenced by: '<S325>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_BLUE
  //  Referenced by: '<S337>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_thrusters_RED
  //  Referenced by: '<S349>/MATLAB Function'

  { 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825, 0.2825 },

  // Variable: F_u
  //  Referenced by: '<S161>/MATLAB Function3'

  { 0.0, 0.0, 0.0 },

  // Variable: K_BLACK
  //  Referenced by: '<S162>/Constant2'

  { 0.40261011025699939, -2.1251860503017542E-14, 1.4770022700627181E-14,
    8.8457400274839944E-15, 0.40261011025699978, -1.1455916664438154E-14,
    9.5418674601579925E-16, 7.8225785921996507E-16, 0.0815549644322504,
    3.3954651849541908, -1.3921099667149069E-13, 1.4107922987593133E-13,
    1.2652463325120827E-13, 3.3954651849541242, -1.000737474880611E-14,
    5.6727681697776994E-16, 7.5504355450318081E-16, 0.40690949597934284 },

  // Variable: K_BLUE
  //  Referenced by: '<S163>/Constant2'

  { 0.40261011025705806, 1.6882762549075281E-14, 6.9779842312346469E-16,
    -5.6903687103381662E-15, 0.40261011025699617, -8.5220546158598028E-15,
    1.6551761182005559E-15, -3.9285531168703788E-17, 0.081407426263067,
    3.3954651849546749, -5.2012164710560313E-16, -1.9306509866501756E-16,
    -3.4346018919906035E-14, 3.3954651849541921, -5.8799365601751057E-14,
    2.7487306668900692E-16, -7.6517841478141782E-17, 0.40554915553132148 },

  // Variable: K_RED
  //  Referenced by: '<S164>/Constant2'

  { 0.40256594667682971, 2.7992795962835558E-14, 6.8437593315155406E-15,
    -2.6292661835736527E-14, 0.40256594667684792, 5.2118979213926934E-15,
    8.2060913834578629E-16, 2.4458204518271547E-16, 0.081495906381191932,
    3.3752746856917168, 7.2384095779649147E-14, 7.5835679617637772E-14,
    -1.1068994689945835E-13, 3.375274685691807, -2.0572319091073253E-14,
    5.3449247414549757E-16, 2.440024842799439E-18, 0.40636232022479918 },

  // Variable: Kd_elarm
  //  Referenced by: '<S191>/kd_elarm'

  0.8,

  // Variable: Kd_sharm
  //  Referenced by: '<S192>/kd_sharm'

  1.0,

  // Variable: Kd_tb
  //  Referenced by: '<S166>/Gain5'

  1.8,

  // Variable: Kd_tblue
  //  Referenced by: '<S167>/Gain5'

  1.8,

  // Variable: Kd_tr
  //  Referenced by: '<S168>/Gain5'

  1.8,

  // Variable: Kd_wrarm
  //  Referenced by: '<S193>/kd_wrarm'

  0.6,

  // Variable: Kd_xb
  //  Referenced by: '<S166>/Gain3'

  3.6,

  // Variable: Kd_xblue
  //  Referenced by: '<S167>/Gain3'

  3.6,

  // Variable: Kd_xr
  //  Referenced by: '<S168>/Gain3'

  3.6,

  // Variable: Kd_yb
  //  Referenced by: '<S166>/Gain4'

  3.6,

  // Variable: Kd_yblue
  //  Referenced by: '<S167>/Gain4'

  3.6,

  // Variable: Kd_yr
  //  Referenced by: '<S168>/Gain4'

  3.6,

  // Variable: Kp_elarm
  //  Referenced by: '<S191>/kp_elarm'

  1.2,

  // Variable: Kp_sharm
  //  Referenced by: '<S192>/kp_sharm'

  1.5,

  // Variable: Kp_tb
  //  Referenced by: '<S166>/Gain2'

  0.5,

  // Variable: Kp_tblue
  //  Referenced by: '<S167>/Gain2'

  0.5,

  // Variable: Kp_tr
  //  Referenced by: '<S168>/Gain2'

  0.5,

  // Variable: Kp_wrarm
  //  Referenced by: '<S193>/kp_wrarm'

  1.0,

  // Variable: Kp_xb
  //  Referenced by: '<S166>/Gain'

  1.0,

  // Variable: Kp_xblue
  //  Referenced by: '<S167>/Gain'

  1.0,

  // Variable: Kp_xr
  //  Referenced by: '<S168>/Gain'

  1.0,

  // Variable: Kp_yb
  //  Referenced by: '<S166>/Gain1'

  1.0,

  // Variable: Kp_yblue
  //  Referenced by: '<S167>/Gain1'

  1.0,

  // Variable: Kp_yr
  //  Referenced by: '<S168>/Gain1'

  1.0,

  // Variable: Mc_inv
  //  Referenced by: '<S161>/MATLAB Function3'

  { 0.082392683529702554, 0.0, 0.0, 0.0, 0.082392683529702554, 0.0, 0.0, 0.0,
    5.0463923588119766 },

  // Variable: P0
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  { 0.20050000000156251, 0.0, 0.0, 0.010000000062500002, 0.0, 0.0, 0.0,
    0.20050000000156251, 0.0, 0.0, 0.010000000062500002, 0.0, 0.0, 0.0,
    0.20050000000156251, 0.0, 0.0, 0.010000000062500002, 0.010000000062500002,
    0.0, 0.0, 0.20000000250000002, 0.0, 0.0, 0.0, 0.010000000062500002, 0.0, 0.0,
    0.20000000250000002, 0.0, 0.0, 0.0, 0.010000000062500002, 0.0, 0.0,
    0.20000000250000002 },

  // Variable: PWMFreq
  //  Referenced by:
  //    '<S18>/PWM Frequency'
  //    '<S322>/MATLAB Function1'
  //    '<S334>/MATLAB Function1'
  //    '<S346>/MATLAB Function8'
  //    '<S324>/Constant1'
  //    '<S336>/Constant1'
  //    '<S348>/Constant1'

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
  //    '<S80>/Constant2'
  //    '<S106>/Constant2'
  //    '<S110>/Constant2'
  //    '<S121>/Constant2'
  //    '<S125>/Constant2'
  //    '<S42>/Constant1'
  //    '<S43>/Constant1'
  //    '<S44>/Constant1'
  //    '<S102>/Constant1'
  //    '<S103>/Constant1'
  //    '<S104>/Constant1'
  //    '<S119>/Constant1'
  //    '<S66>/Constant1'
  //    '<S67>/Constant1'
  //    '<S68>/Constant1'
  //    '<S72>/Constant1'
  //    '<S73>/Constant1'
  //    '<S74>/Constant1'
  //    '<S78>/Constant1'

  55.0,

  // Variable: Phase3_End
  //  Referenced by: '<S1>/Constant2'

  415.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by:
  //    '<S9>/Constant4'
  //    '<S23>/Constant4'

  55.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by: '<S23>/Constant1'

  415.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by: '<S23>/Constant2'

  415.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by: '<S23>/Constant3'

  415.0,

  // Variable: Phase4_End
  //  Referenced by: '<S1>/Constant3'

  445.0,

  // Variable: Phase5_End
  //  Referenced by: '<S1>/Constant6'

  465.0,

  // Variable: Q
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  { 1.5625000000000007E-12, 0.0, 0.0, 6.25E-11, 0.0, 0.0, 0.0,
    1.5625000000000007E-12, 0.0, 0.0, 6.25E-11, 0.0, 0.0, 0.0,
    1.5625000000000007E-12, 0.0, 0.0, 6.25E-11, 6.2500000000000017E-11, 0.0, 0.0,
    2.5E-9, 0.0, 0.0, 0.0, 6.2500000000000017E-11, 0.0, 0.0, 2.5E-9, 0.0, 0.0,
    0.0, 6.2500000000000017E-11, 0.0, 0.0, 2.5E-9 },

  // Variable: R
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  { 1.0E-6, 0.0, 0.0, 0.0, 1.0E-6, 0.0, 0.0, 0.0, 0.0001 },

  // Variable: Tz_lim_elarm
  //  Referenced by: '<S190>/Saturation1'

  0.1,

  // Variable: Tz_lim_sharm
  //  Referenced by: '<S190>/Saturation'

  0.1,

  // Variable: Tz_lim_wrarm
  //  Referenced by: '<S190>/Saturation3'

  0.1,

  // Variable: VISinLoop
  //  Referenced by:
  //    '<S305>/Constant'
  //    '<S236>/Constant'
  //    '<S244>/Constant'
  //    '<S264>/Constant'

  1.0,

  // Variable: X0_blk
  //  Referenced by:
  //    '<S40>/Desired X-Position (BLACK)'
  //    '<S100>/Desired X-Position (BLACK)'

  1.76,

  // Variable: Y0_blk
  //  Referenced by:
  //    '<S40>/Desired Y-Position (BLACK)'
  //    '<S100>/Desired Y-Position (BLACK)'

  1.21,

  // Variable: a
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  1.0,

  // Variable: alpha
  //  Referenced by: '<S161>/MATLAB Function3'

  { 2.0, 0.0, 0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 2.0 },

  // Variable: b
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  2.0,

  // Variable: baseRate
  //  Referenced by:
  //    '<S140>/Error Calculation'
  //    '<S223>/Read Joint Positions using  Dynamixel Encoders'
  //    '<S304>/WhoAmI'
  //    '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'
  //    '<S225>/EKF'
  //    '<S226>/MEKF'
  //    '<S264>/Sample and Hold'
  //    '<S270>/MATLAB Function1'

  0.05,

  // Variable: dataRate
  //  Referenced by:
  //    '<S263>/Constant'
  //    '<S284>/Constant'
  //    '<S294>/Constant'

  0.1,

  // Variable: dt
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  0.05,

  // Variable: fNum
  //  Referenced by: '<S224>/Constant'

  1.0,

  // Variable: gamma
  //  Referenced by: '<S161>/MATLAB Function3'

  { 0.1, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.5 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S130>/Desired States (BLACK)'
  //    '<S134>/Desired States (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S131>/Desired States (BLUE)'
  //    '<S135>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S132>/Constant2'
  //    '<S136>/Constant2'

  { 2.655775, 1.209675, 3.1415926535897931 },

  // Variable: init_states_BLACK
  //  Referenced by:
  //    '<S28>/Desired States (BLACK)'
  //    '<S154>/Delay'
  //    '<S154>/Delay1'
  //    '<S231>/Delay'
  //    '<S231>/Delay1'
  //    '<S237>/Delay'
  //    '<S237>/Delay1'
  //    '<S64>/Desired X-Position (BLACK)1'
  //    '<S64>/Desired Y-Position (BLACK)1'
  //    '<S69>/Desired Y-Position (BLACK)'
  //    '<S70>/Desired X-Position (BLACK)'
  //    '<S70>/Desired Y-Position (BLACK)'
  //    '<S75>/Desired Y-Position (BLACK)'
  //    '<S76>/Desired X-Position (BLACK)'
  //    '<S76>/Desired Y-Position (BLACK)'
  //    '<S278>/Delay'
  //    '<S278>/Delay1'

  { 1.76, 1.21, -1.5707963267948966 },

  // Variable: init_states_BLUE
  //  Referenced by: '<S29>/Desired States (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S30>/Constant2'
  //    '<S38>/Constant2'
  //    '<S84>/Constant2'

  { 3.0, 2.0, 3.9269908169872414 },

  // Variable: k
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  3355.0,

  // Variable: platformSelection
  //  Referenced by: '<S255>/MATLAB Function'

  3.0,

  // Variable: scenario
  //  Referenced by: '<S55>/Constant'

  3.0,

  // Variable: simMode
  //  Referenced by: '<S17>/Constant'

  0.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by: '<S325>/MATLAB Function'

  { 73.881766499134855, -64.118233500865131, 56.874845513718384,
    -84.6251544862816, 64.118233500865131, -66.281766499134861, 79.1251544862816,
    -49.874845513718391 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by: '<S337>/MATLAB Function'

  { 73.815115806582682, -64.1848841934173, 57.054043071921981, -84.445956928078,
    64.1848841934173, -66.215115806582673, 78.945956928078, -50.054043071921988
  },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S322>/MATLAB Function5'
  //    '<S334>/MATLAB Function5'
  //    '<S346>/MATLAB Function5'
  //    '<S349>/MATLAB Function'

  { 71.579508939606143, -60.420491060393836, 60.451141138666884,
    -84.0488588613331, 63.420491060393836, -70.579508939606143, 76.5488588613331,
    -52.951141138666891 },

  // Variable: x0
  //  Referenced by: '<S227>/Unscented Kalman Filter'

  { 1.9360000000000002, 1.331, 198.00000000000003, 0.0, 0.0, 0.0 },

  // Variable: xLength
  //  Referenced by:
  //    '<S114>/Desired X-Position (BLACK)'
  //    '<S45>/Constant1'
  //    '<S79>/Constant1'
  //    '<S105>/Constant1'
  //    '<S109>/Constant1'
  //    '<S120>/Constant1'
  //    '<S124>/Constant1'

  3.51155,

  // Variable: yLength
  //  Referenced by:
  //    '<S114>/Desired Y-Position (BLACK)'
  //    '<S45>/Constant2'
  //    '<S79>/Constant2'
  //    '<S105>/Constant2'
  //    '<S109>/Constant2'
  //    '<S120>/Constant2'
  //    '<S124>/Constant2'

  2.41935,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S208>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevScale
  //  Referenced by: '<S209>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevScale
  //  Referenced by: '<S210>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_i
  //  Referenced by: '<S185>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_e
  //  Referenced by: '<S186>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_o
  //  Referenced by: '<S187>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_p
  //  Referenced by: '<S198>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_m
  //  Referenced by: '<S199>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_a
  //  Referenced by: '<S200>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_d
  //  Referenced by: '<S175>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_i
  //  Referenced by: '<S176>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_oo
  //  Referenced by: '<S177>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevSca_pf
  //  Referenced by: '<S203>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_l
  //  Referenced by: '<S204>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSc_on
  //  Referenced by: '<S205>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScal_n
  //  Referenced by: '<S180>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_f
  //  Referenced by: '<S181>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative2_ICPrevSca_g
  //  Referenced by: '<S182>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_j
  //  Referenced by: '<S194>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_a
  //  Referenced by: '<S195>/UD'

  0.0,

  // Mask Parameter: DiscreteDerivative1_ICPrevSca_k
  //  Referenced by: '<S196>/UD'

  0.0,

  // Mask Parameter: MATLABFunction5_max_iters
  //  Referenced by: '<S322>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_b
  //  Referenced by: '<S334>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_max_iters_e
  //  Referenced by: '<S346>/MATLAB Function5'

  20.0,

  // Mask Parameter: MATLABFunction5_tol
  //  Referenced by: '<S322>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_j
  //  Referenced by: '<S334>/MATLAB Function5'

  1.0E-6,

  // Mask Parameter: MATLABFunction5_tol_g
  //  Referenced by: '<S346>/MATLAB Function5'

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

  // Expression: 0.03490659
  //  Referenced by: '<S63>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.01/2
  //  Referenced by: '<S64>/Constant1'

  0.005,

  // Expression: 0.005/2
  //  Referenced by: '<S64>/Constant'

  0.0025,

  // Expression: 0.03490659
  //  Referenced by: '<S69>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.01/2
  //  Referenced by: '<S70>/Constant1'

  0.005,

  // Expression: -0.005/2
  //  Referenced by: '<S70>/Constant'

  -0.0025,

  // Expression: 0.03490659
  //  Referenced by: '<S75>/Desired Rate (BLACK)'

  0.03490659,

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
  //  Referenced by: '<S54>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S54>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S54>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S56>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S79>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S79>/Gain1'

  -0.85,

  // Computed Parameter: Merge_InitialOutput
  //  Referenced by: '<S55>/Merge'

  0.0,

  // Expression: 0.42
  //  Referenced by: '<S57>/Separation'

  0.42,

  // Expression: 0.3
  //  Referenced by: '<S85>/Constant'

  0.3,

  // Expression: 0
  //  Referenced by: '<S53>/Constant14'

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
  //  Referenced by: '<S95>/Constant3'

  1.5707963267948966,

  // Expression: pi/2
  //  Referenced by: '<S95>/Constant1'

  1.5707963267948966,

  // Expression: 0
  //  Referenced by: '<S95>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S97>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S105>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S105>/Gain1'

  -0.85,

  // Expression: 0.01
  //  Referenced by: '<S100>/Constant1'

  0.01,

  // Expression: 0.005
  //  Referenced by: '<S100>/Constant'

  0.005,

  // Expression: 0.03490659
  //  Referenced by: '<S99>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S98>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S109>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S109>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S98>/Constant'

  3.1515926535897929,

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
  //  Referenced by: '<S113>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S113>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S113>/Constant2'

  0.0,

  // Expression: 0.03490659
  //  Referenced by: '<S115>/Desired Rate '

  0.03490659,

  // Expression: -0.85
  //  Referenced by: '<S120>/Gain'

  -0.85,

  // Expression: -0.85
  //  Referenced by: '<S120>/Gain1'

  -0.85,

  // Expression: 0.03490659
  //  Referenced by: '<S117>/Desired Rate (BLACK)'

  0.03490659,

  // Expression: 0.03490659
  //  Referenced by: '<S116>/Desired Rate '

  0.03490659,

  // Expression: 0.85
  //  Referenced by: '<S124>/Gain'

  0.85,

  // Expression: 0.85
  //  Referenced by: '<S124>/Gain1'

  0.85,

  // Expression: pi+0.01
  //  Referenced by: '<S116>/Constant'

  3.1515926535897929,

  // Expression: 0.30
  //  Referenced by: '<S116>/Separation'

  0.3,

  // Expression: 0.3
  //  Referenced by: '<S126>/Constant'

  0.3,

  // Computed Parameter: Path_Y0
  //  Referenced by: '<S153>/Path'

  0.0,

  // Expression: zeros(6,1)
  //  Referenced by: '<S149>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S149>/Switch'

  0.0,

  // Expression: zeros(9,1)
  //  Referenced by: '<S140>/Unit Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S208>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S209>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S210>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S168>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S168>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S168>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_h
  //  Referenced by: '<S185>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_e
  //  Referenced by: '<S186>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S187>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S198>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_hr
  //  Referenced by: '<S199>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ca
  //  Referenced by: '<S200>/TSamp'

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

  // Computed Parameter: TSamp_WtEt_nd
  //  Referenced by: '<S175>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_co
  //  Referenced by: '<S176>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_no
  //  Referenced by: '<S177>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S203>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S204>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_px
  //  Referenced by: '<S205>/TSamp'

  20.0,

  // Expression: -1
  //  Referenced by: '<S167>/Gain6'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S167>/Gain7'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S167>/Gain8'

  -1.0,

  // Computed Parameter: TSamp_WtEt_ft
  //  Referenced by: '<S180>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_eh
  //  Referenced by: '<S181>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_ii
  //  Referenced by: '<S182>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_pu
  //  Referenced by: '<S194>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_f0
  //  Referenced by: '<S195>/TSamp'

  20.0,

  // Computed Parameter: TSamp_WtEt_nz
  //  Referenced by: '<S196>/TSamp'

  20.0,

  // Expression: 1
  //  Referenced by: '<S165>/Constant7'

  1.0,

  // Computed Parameter: Merge3_InitialOutput
  //  Referenced by: '<S165>/Merge3'

  0.0,

  // Computed Parameter: Merge4_InitialOutput
  //  Referenced by: '<S165>/Merge4'

  0.0,

  // Computed Parameter: Merge5_InitialOutput
  //  Referenced by: '<S165>/Merge5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S169>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S169>/Zero'

  0.0,

  // Expression: 428
  //  Referenced by: '<S222>/GPIO Write1'

  428.0,

  // Expression: 1
  //  Referenced by: '<S222>/GPIO Write1'

  1.0,

  // Expression: 0.0
  //  Referenced by: '<S223>/Delay'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S223>/Delay1'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S223>/Delay2'

  0.0,

  // Computed Parameter: Merge_InitialOutput_e
  //  Referenced by: '<S244>/Merge'

  0.0,

  // Computed Parameter: Merge_InitialOutput_p
  //  Referenced by: '<S236>/Merge'

  0.0,

  // Computed Parameter: Merge_InitialOutput_b
  //  Referenced by: '<S224>/Merge'

  0.0,

  // Computed Parameter: UniversalTime_Y0
  //  Referenced by: '<S256>/Universal Time'

  0.0,

  // Computed Parameter: dytdt_Y0
  //  Referenced by: '<S268>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_j
  //  Referenced by: '<S288>/dy(t)//dt'

  0.0,

  // Computed Parameter: dytdt_Y0_d
  //  Referenced by: '<S298>/dy(t)//dt'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert BLAX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert BLAY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert BLACKVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S252>/Convert BLACKVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S263>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S263>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S263>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S266>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S266>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S265>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S265>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S253>/Convert BLUX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S253>/Convert BLUY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S253>/Convert BLUEVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S253>/Convert BLUEVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S284>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S284>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S284>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S286>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S286>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S285>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S285>/Constant3'

  0.0,

  // Expression: 1/1000
  //  Referenced by: '<S254>/Convert REDX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S254>/Convert REDY from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S254>/Convert REDVX from [mm] to [m]'

  0.001,

  // Expression: 1/1000
  //  Referenced by: '<S254>/Convert REDVY from [mm] to [m]'

  0.001,

  // Expression: 0
  //  Referenced by: '<S294>/Delay2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S294>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S294>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S296>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S296>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S295>/Delay1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S295>/Constant3'

  0.0,

  // Expression: 1
  //  Referenced by: '<S255>/Constant'

  1.0,

  // Expression: -1
  //  Referenced by: '<S305>/Gain'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S308>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S308>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S308>/Constant'

  0.0,

  // Expression: 180
  //  Referenced by: '<S308>/Step'

  180.0,

  // Expression: 0
  //  Referenced by: '<S308>/Step'

  0.0,

  // Expression: 1
  //  Referenced by: '<S308>/Step'

  1.0,

  // Expression: 100
  //  Referenced by: '<S308>/Step1'

  100.0,

  // Expression: 0
  //  Referenced by: '<S308>/Step1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S308>/Step1'

  1.0,

  // Expression: 180
  //  Referenced by: '<S308>/Step2'

  180.0,

  // Expression: 0
  //  Referenced by: '<S308>/Step2'

  0.0,

  // Expression: 1
  //  Referenced by: '<S308>/Step2'

  1.0,

  // Expression: 400
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 0
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 200
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  200.0,

  // Expression: 3072
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  3072.0,

  // Expression: 1024
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  1024.0,

  // Expression: 0
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Expression: 850
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  850.0,

  // Expression: 400
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  400.0,

  // Expression: 100
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  100.0,

  // Expression: 20
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  20.0,

  // Expression: 0
  //  Referenced by: '<S312>/Control Dynamixel Actuators in  either Position, Current, or Speed  Control Modes'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S329>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S330>/Out1'

  0.0,

  // Computed Parameter: BLACKDC_Y0
  //  Referenced by: '<S319>/BLACK DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S324>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S324>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S341>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_js
  //  Referenced by: '<S342>/Out1'

  0.0,

  // Computed Parameter: BLUEDC_Y0
  //  Referenced by: '<S320>/BLUE DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S336>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S336>/Constant2'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S353>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S354>/Out1'

  0.0,

  // Computed Parameter: REDDC_Y0
  //  Referenced by: '<S321>/RED DC'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S348>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S348>/Constant2'

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

  // Computed Parameter: Merge_InitialOutput_el
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

  // Expression: zeros(3,1)
  //  Referenced by: '<Root>/Data Store Memory6'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory7'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Data Store Memory8'

  0.0,

  // Expression: zeros(9,1)
  //  Referenced by: '<Root>/Data Store Memory9'

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

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time42'

  0.0,

  // Expression: zeros(6,6)
  //  Referenced by: '<Root>/Universal_Time43'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(3,1)
  //  Referenced by: '<Root>/Universal_Time44'

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time45'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time46'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time47'

  0.0,

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time48'

  { 0.0, 0.0, 0.0 },

  // Expression: zeros(2,1)
  //  Referenced by: '<Root>/Universal_Time49'

  { 0.0, 0.0 },

  // Expression: [0;0;0]
  //  Referenced by: '<Root>/Universal_Time5'

  { 0.0, 0.0, 0.0 },

  // Expression: zeros(2,1)
  //  Referenced by: '<Root>/Universal_Time50'

  { 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time51'

  0.0,

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
  //  Referenced by: '<S219>/UDP Send1'

  55000,

  // Computed Parameter: UDPSend2_Port
  //  Referenced by: '<S220>/UDP Send2'

  55000,

  // Computed Parameter: UDPSend3_Port
  //  Referenced by: '<S221>/UDP Send3'

  55000,

  // Computed Parameter: ReceivePhaseSpaceData_Port
  //  Referenced by: '<S251>/Receive PhaseSpace Data'

  31534,

  // Computed Parameter: UDPReceiveREDClock_Port
  //  Referenced by: '<S255>/UDP Receive (RED Clock)'

  48740,

  // Computed Parameter: UDPReceiveBLACKClock_Port
  //  Referenced by: '<S255>/UDP Receive (BLACK Clock)'

  48741,

  // Computed Parameter: UDPReceiveBLUEClock_Port
  //  Referenced by: '<S255>/UDP Receive (BLUE Clock)'

  48742,

  // Computed Parameter: UDPReceive_Port
  //  Referenced by: '<S305>/UDP Receive'

  50005,

  // Computed Parameter: UDPReceive_Port_k
  //  Referenced by: '<S309>/UDP Receive'

  29854,

  // Computed Parameter: UDPReceive_Port_g
  //  Referenced by: '<S311>/UDP Receive'

  13761,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<S311>/UDP Send'

  29854,

  // Computed Parameter: UDPSend_Port_d
  //  Referenced by: '<S313>/UDP Send'

  46875,

  // Computed Parameter: UDPSend_Port_b
  //  Referenced by: '<S315>/UDP Send'

  10294,

  // Computed Parameter: UDPSend_Port_h
  //  Referenced by: '<S18>/UDP Send'

  48291,

  // Computed Parameter: ManualSwitch_CurrentSetting
  //  Referenced by: '<S308>/Manual Switch'

  0U,

  // Computed Parameter: ManualSwitch1_CurrentSetting
  //  Referenced by: '<S308>/Manual Switch1'

  0U,

  // Computed Parameter: ManualSwitch2_CurrentSetting
  //  Referenced by: '<S308>/Manual Switch2'

  0U,

  // Start of '<S19>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S360>/UDP Send (Clock)'

    48740
  }
  ,

  // End of '<S19>/Change RED Behavior'

  // Start of '<S19>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S359>/UDP Send (Clock)'

    48742
  }
  ,

  // End of '<S19>/Change BLUE Behavior'

  // Start of '<S19>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendClock_Port
    //  Referenced by: '<S358>/UDP Send (Clock)'

    48741
  }
  ,

  // End of '<S19>/Change BLACK Behavior'

  // Start of '<S296>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S302>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S302>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S302>/Delay'

    0.0
  }
  ,

  // End of '<S296>/Enabled Subsystem'

  // Start of '<S295>/Enabled Subsystem'
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

  // End of '<S295>/Enabled Subsystem'

  // Start of '<S286>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S292>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S292>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S292>/Delay'

    0.0
  }
  ,

  // End of '<S286>/Enabled Subsystem'

  // Start of '<S285>/Enabled Subsystem'
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

  // End of '<S285>/Enabled Subsystem'

  // Start of '<S266>/Enabled Subsystem'
  {
    // Computed Parameter: dydt_Y0
    //  Referenced by: '<S282>/dy//dt'

    0.0,

    // Expression: 0.1
    //  Referenced by: '<S282>/Constant2'

    0.1,

    // Expression: 0.0
    //  Referenced by: '<S282>/Delay'

    0.0
  }
  ,

  // End of '<S266>/Enabled Subsystem'

  // Start of '<S265>/Enabled Subsystem'
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

  // End of '<S265>/Enabled Subsystem'

  // Start of '<S259>/Change RED Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S262>/UDP Send (GUI)'

    48720
  }
  ,

  // End of '<S259>/Change RED Behavior'

  // Start of '<S259>/Change BLUE Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S261>/UDP Send (GUI)'

    48722
  }
  ,

  // End of '<S259>/Change BLUE Behavior'

  // Start of '<S259>/Change BLACK Behavior'
  {
    // Computed Parameter: UDPSendGUI_Port
    //  Referenced by: '<S260>/UDP Send (GUI)'

    48721
  }
  ,

  // End of '<S259>/Change BLACK Behavior'

  // Start of '<S4>/Change RED Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S214>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S214>/UDP Send'

    33001
  }
  ,

  // End of '<S4>/Change RED Behavior'

  // Start of '<S4>/Change BLUE Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S213>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S213>/UDP Send'

    33003
  }
  ,

  // End of '<S4>/Change BLUE Behavior'

  // Start of '<S4>/Change BLACK Behavior'
  {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<S212>/Constant1'

    1,

    // Computed Parameter: UDPSend_Port
    //  Referenced by: '<S212>/UDP Send'

    33002
  }
  ,

  // End of '<S4>/Change BLACK Behavior'

  // Start of '<S3>/Custom Control (ARM)'
  {
    // Expression: 0
    //  Referenced by: '<S160>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Custom Control (ARM)'

  // Start of '<S3>/Disable Thrusters (BLUE)'
  {
    // Expression: 0
    //  Referenced by: '<S171>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLUE)'

  // Start of '<S3>/Disable Thrusters (BLACK)'
  {
    // Expression: 0
    //  Referenced by: '<S170>/Zero'

    0.0
  }
  ,

  // End of '<S3>/Disable Thrusters (BLACK)'

  // Start of '<S3>/Disable Thrusters (RED)'
  {
    // Expression: 0
    //  Referenced by: '<S172>/Zero'

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
    //  Referenced by: '<S133>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S133>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S133>/Constant2'

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
    //  Referenced by: '<S129>/Constant3'

    1.5707963267948966,

    // Expression: pi/2
    //  Referenced by: '<S129>/Constant1'

    1.5707963267948966,

    // Expression: 0
    //  Referenced by: '<S129>/Constant2'

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

  // Start of '<S58>/Hold position for berthing'
  {
    // Expression: 2
    //  Referenced by: '<S87>/Constant'

    2.0,

    // Expression: 0
    //  Referenced by: '<S87>/Constant1'

    0.0
  }
  ,

  // End of '<S58>/Hold position for berthing'

  // Start of '<S58>/Keep moving if frame drops after convergence'
  {
    // Expression: 3
    //  Referenced by: '<S91>/Constant'

    3.0,

    // Expression: 1
    //  Referenced by: '<S91>/Constant1'

    1.0
  }
  ,

  // End of '<S58>/Keep moving if frame drops after convergence'

  // Start of '<S58>/Hold position if frame drops before convergence'
  {
    // Expression: 2
    //  Referenced by: '<S88>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S88>/Constant1'

    2.0
  }
  ,

  // End of '<S58>/Hold position if frame drops before convergence'

  // Start of '<S58>/Reset counter and hold position'
  {
    // Expression: 2
    //  Referenced by: '<S93>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S93>/Constant1'

    2.0
  }
  ,

  // End of '<S58>/Reset counter and hold position'

  // Start of '<S58>/Start moving after convergence'
  {
    // Expression: 3
    //  Referenced by: '<S94>/Constant'

    3.0,

    // Expression: 1
    //  Referenced by: '<S94>/Constant1'

    1.0
  }
  ,

  // End of '<S58>/Start moving after convergence'

  // Start of '<S58>/Initiate filter'
  {
    // Expression: 2
    //  Referenced by: '<S90>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S90>/Constant1'

    2.0
  }
  ,

  // End of '<S58>/Initiate filter'

  // Start of '<S58>/Hold position till the filter converges'
  {
    // Expression: 2
    //  Referenced by: '<S89>/Constant'

    2.0,

    // Expression: 2
    //  Referenced by: '<S89>/Constant1'

    2.0
  }
  ,

  // End of '<S58>/Hold position till the filter converges'

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
