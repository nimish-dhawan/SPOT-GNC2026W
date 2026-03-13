    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 47;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (GNC2026W_P)
        ;%
            section.nData     = 536;
            section.data(536)  = dumData; %prealloc

                    ;% GNC2026W_P.A_c
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.CVrate
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 9;

                    ;% GNC2026W_P.F_red_X_nominal
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 10;

                    ;% GNC2026W_P.F_red_Y_nominal
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 11;

                    ;% GNC2026W_P.F_thrusters_BLACK
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% GNC2026W_P.F_thrusters_BLUE
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 20;

                    ;% GNC2026W_P.F_thrusters_RED
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 28;

                    ;% GNC2026W_P.F_u
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 36;

                    ;% GNC2026W_P.Gamma1_el
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 39;

                    ;% GNC2026W_P.Gamma1_sh
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 40;

                    ;% GNC2026W_P.Gamma1_wr
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 41;

                    ;% GNC2026W_P.Gamma2_el
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 42;

                    ;% GNC2026W_P.Gamma2_sh
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 43;

                    ;% GNC2026W_P.Gamma2_wr
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 44;

                    ;% GNC2026W_P.Gamma3_el
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 45;

                    ;% GNC2026W_P.Gamma3_sh
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 46;

                    ;% GNC2026W_P.Gamma3_wr
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 47;

                    ;% GNC2026W_P.Gamma4_el
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 48;

                    ;% GNC2026W_P.Gamma4_sh
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 49;

                    ;% GNC2026W_P.Gamma4_wr
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 50;

                    ;% GNC2026W_P.Gamma5_el
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 51;

                    ;% GNC2026W_P.Gamma5_sh
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 52;

                    ;% GNC2026W_P.Gamma5_wr
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 53;

                    ;% GNC2026W_P.Gamma6_el
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 54;

                    ;% GNC2026W_P.Gamma6_sh
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 55;

                    ;% GNC2026W_P.Gamma6_wr
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 56;

                    ;% GNC2026W_P.IBLACK
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 57;

                    ;% GNC2026W_P.IBLUE
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 58;

                    ;% GNC2026W_P.IDIST
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 59;

                    ;% GNC2026W_P.IEE
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 60;

                    ;% GNC2026W_P.IPROX
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 61;

                    ;% GNC2026W_P.IRED
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 62;

                    ;% GNC2026W_P.K_BLACK
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 63;

                    ;% GNC2026W_P.K_BLUE
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 81;

                    ;% GNC2026W_P.K_RED
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 99;

                    ;% GNC2026W_P.Kd_elarm
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 117;

                    ;% GNC2026W_P.Kd_sharm
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 118;

                    ;% GNC2026W_P.Kd_tb
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 119;

                    ;% GNC2026W_P.Kd_tblue
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 120;

                    ;% GNC2026W_P.Kd_tr
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 121;

                    ;% GNC2026W_P.Kd_wrarm
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 122;

                    ;% GNC2026W_P.Kd_xb
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 123;

                    ;% GNC2026W_P.Kd_xblue
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 124;

                    ;% GNC2026W_P.Kd_xr
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 125;

                    ;% GNC2026W_P.Kd_yb
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 126;

                    ;% GNC2026W_P.Kd_yblue
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 127;

                    ;% GNC2026W_P.Kd_yr
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 128;

                    ;% GNC2026W_P.Kp_elarm
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 129;

                    ;% GNC2026W_P.Kp_sharm
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 130;

                    ;% GNC2026W_P.Kp_tb
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 131;

                    ;% GNC2026W_P.Kp_tblue
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 132;

                    ;% GNC2026W_P.Kp_tr
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 133;

                    ;% GNC2026W_P.Kp_wrarm
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 134;

                    ;% GNC2026W_P.Kp_xb
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 135;

                    ;% GNC2026W_P.Kp_xblue
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 136;

                    ;% GNC2026W_P.Kp_xr
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 137;

                    ;% GNC2026W_P.Kp_yb
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 138;

                    ;% GNC2026W_P.Kp_yblue
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 139;

                    ;% GNC2026W_P.Kp_yr
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 140;

                    ;% GNC2026W_P.Mc_inv
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 141;

                    ;% GNC2026W_P.PWMFreq
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 150;

                    ;% GNC2026W_P.Phase0_End
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 151;

                    ;% GNC2026W_P.Phase1_End
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 152;

                    ;% GNC2026W_P.Phase2_End
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 153;

                    ;% GNC2026W_P.Phase3_End
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 154;

                    ;% GNC2026W_P.Phase3_SubPhase1_End
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 155;

                    ;% GNC2026W_P.Phase3_SubPhase2_End
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 156;

                    ;% GNC2026W_P.Phase3_SubPhase3_End
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 157;

                    ;% GNC2026W_P.Phase3_SubPhase4_End
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 158;

                    ;% GNC2026W_P.Phase4_End
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 159;

                    ;% GNC2026W_P.Phase5_End
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 160;

                    ;% GNC2026W_P.Phi
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 161;

                    ;% GNC2026W_P.R
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 162;

                    ;% GNC2026W_P.Tz_lim_elarm
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 171;

                    ;% GNC2026W_P.Tz_lim_sharm
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 172;

                    ;% GNC2026W_P.Tz_lim_wrarm
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 173;

                    ;% GNC2026W_P.VISinLoop
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 174;

                    ;% GNC2026W_P.X1_blk
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 175;

                    ;% GNC2026W_P.X2_blk
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 176;

                    ;% GNC2026W_P.X3_blk
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 177;

                    ;% GNC2026W_P.Y1_blk
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 178;

                    ;% GNC2026W_P.Y2_blk
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 179;

                    ;% GNC2026W_P.Y3_blk
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 180;

                    ;% GNC2026W_P.a
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 181;

                    ;% GNC2026W_P.a1
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 182;

                    ;% GNC2026W_P.a2
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 183;

                    ;% GNC2026W_P.a3
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 184;

                    ;% GNC2026W_P.alpha
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 185;

                    ;% GNC2026W_P.b
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 194;

                    ;% GNC2026W_P.b0
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 195;

                    ;% GNC2026W_P.b1
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 196;

                    ;% GNC2026W_P.b2
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 197;

                    ;% GNC2026W_P.b3
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 198;

                    ;% GNC2026W_P.baseRate
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 199;

                    ;% GNC2026W_P.dataRate
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 200;

                    ;% GNC2026W_P.drop_states_BLACK
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 201;

                    ;% GNC2026W_P.drop_states_BLUE
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 204;

                    ;% GNC2026W_P.drop_states_RED
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 207;

                    ;% GNC2026W_P.dt
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 210;

                    ;% GNC2026W_P.fNum
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 211;

                    ;% GNC2026W_P.gamma
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 212;

                    ;% GNC2026W_P.home_states_BLACK
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 221;

                    ;% GNC2026W_P.home_states_BLUE
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 224;

                    ;% GNC2026W_P.home_states_RED
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 227;

                    ;% GNC2026W_P.init_states_BLACK
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 230;

                    ;% GNC2026W_P.init_states_BLUE
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 233;

                    ;% GNC2026W_P.init_states_RED
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 236;

                    ;% GNC2026W_P.k
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 239;

                    ;% GNC2026W_P.mBLACK
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 240;

                    ;% GNC2026W_P.mBLUE
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 241;

                    ;% GNC2026W_P.mDIST
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 242;

                    ;% GNC2026W_P.mEE
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 243;

                    ;% GNC2026W_P.mPROX
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 244;

                    ;% GNC2026W_P.mRED
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 245;

                    ;% GNC2026W_P.platformSelection
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 246;

                    ;% GNC2026W_P.sep1
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 247;

                    ;% GNC2026W_P.sep3
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 248;

                    ;% GNC2026W_P.simMode
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 249;

                    ;% GNC2026W_P.thruster_dist2CG_BLACK
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 250;

                    ;% GNC2026W_P.thruster_dist2CG_BLUE
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 258;

                    ;% GNC2026W_P.thruster_dist2CG_RED
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 266;

                    ;% GNC2026W_P.xLength
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 274;

                    ;% GNC2026W_P.yLength
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 275;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScaled
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 276;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevScale
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 277;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevScale
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 278;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_i
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 279;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_e
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 280;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevSca_o
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 281;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_p
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 282;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_m
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 283;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevSca_a
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 284;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_d
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 285;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_i
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 286;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevSc_oo
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 287;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevSca_pf
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 288;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_l
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 289;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevSc_on
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 290;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_n
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 291;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_f
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 292;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevSca_g
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 293;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_j
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 294;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_a
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 295;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_k
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 296;

                    ;% GNC2026W_P.DiscreteDerivative2_ICPrevSca_m
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 297;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_h
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 298;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSc_lm
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 299;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_c
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 300;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSc_lh
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 301;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_k
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 302;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSc_fs
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 303;

                    ;% GNC2026W_P.DiscreteDerivative_ICPrevScal_a
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 304;

                    ;% GNC2026W_P.DiscreteDerivative1_ICPrevSca_g
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 305;

                    ;% GNC2026W_P.MATLABFunction5_max_iters
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 306;

                    ;% GNC2026W_P.MATLABFunction5_max_iters_b
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 307;

                    ;% GNC2026W_P.MATLABFunction5_max_iters_e
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 308;

                    ;% GNC2026W_P.MATLABFunction5_tol
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 309;

                    ;% GNC2026W_P.MATLABFunction5_tol_j
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 310;

                    ;% GNC2026W_P.MATLABFunction5_tol_g
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 311;

                    ;% GNC2026W_P.Constant11_Value
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 312;

                    ;% GNC2026W_P.Constant12_Value
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 313;

                    ;% GNC2026W_P.Constant14_Value
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 314;

                    ;% GNC2026W_P.Constant15_Value
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 315;

                    ;% GNC2026W_P.Constant18_Value
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 316;

                    ;% GNC2026W_P.Constant4_Value
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 317;

                    ;% GNC2026W_P.Constant5_Value
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 318;

                    ;% GNC2026W_P.Constant6_Value
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 319;

                    ;% GNC2026W_P.Constant8_Value
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 320;

                    ;% GNC2026W_P.Constant3_Value
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 321;

                    ;% GNC2026W_P.Constant1_Value
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 322;

                    ;% GNC2026W_P.Constant2_Value
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 323;

                    ;% GNC2026W_P.Constant11_Value_e
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 324;

                    ;% GNC2026W_P.Constant12_Value_g
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 325;

                    ;% GNC2026W_P.Constant14_Value_f
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 326;

                    ;% GNC2026W_P.Constant15_Value_o
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 327;

                    ;% GNC2026W_P.Constant18_Value_m
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 328;

                    ;% GNC2026W_P.Constant4_Value_g
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 329;

                    ;% GNC2026W_P.Constant5_Value_o
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 330;

                    ;% GNC2026W_P.Constant6_Value_i
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 331;

                    ;% GNC2026W_P.Constant8_Value_m
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 332;

                    ;% GNC2026W_P.Constant3_Value_b
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 333;

                    ;% GNC2026W_P.Constant1_Value_o
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 334;

                    ;% GNC2026W_P.Constant2_Value_f
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 335;

                    ;% GNC2026W_P.DesiredRate_Value
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 336;

                    ;% GNC2026W_P.Gain_Gain
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 337;

                    ;% GNC2026W_P.Gain1_Gain
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 338;

                    ;% GNC2026W_P.Constant1_Value_n
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 339;

                    ;% GNC2026W_P.Constant_Value
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 340;

                    ;% GNC2026W_P.DesiredRateBLACK_Value
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 341;

                    ;% GNC2026W_P.Constant_Value_n
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 342;

                    ;% GNC2026W_P.Constant12_Value_k
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 343;

                    ;% GNC2026W_P.Constant15_Value_o1
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 344;

                    ;% GNC2026W_P.Constant18_Value_n
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 345;

                    ;% GNC2026W_P.Constant6_Value_p
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 346;

                    ;% GNC2026W_P.Constant8_Value_o
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 347;

                    ;% GNC2026W_P.Constant3_Value_p
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 348;

                    ;% GNC2026W_P.Constant1_Value_m
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 349;

                    ;% GNC2026W_P.Constant2_Value_p
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 350;

                    ;% GNC2026W_P.DesiredRate_Value_h
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 351;

                    ;% GNC2026W_P.Gain_Gain_h
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 352;

                    ;% GNC2026W_P.Gain1_Gain_c
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 353;

                    ;% GNC2026W_P.Constant1_Value_f
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 354;

                    ;% GNC2026W_P.Constant_Value_f
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 355;

                    ;% GNC2026W_P.DesiredRateBLACK_Value_k
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 356;

                    ;% GNC2026W_P.Separation_Value
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 357;

                    ;% GNC2026W_P.Constant_Value_e
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 358;

                    ;% GNC2026W_P.Constant14_Value_j
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 359;

                    ;% GNC2026W_P.Constant11_Value_b
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 360;

                    ;% GNC2026W_P.Constant12_Value_ku
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 361;

                    ;% GNC2026W_P.Constant14_Value_n
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 362;

                    ;% GNC2026W_P.Constant15_Value_o2
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 363;

                    ;% GNC2026W_P.Constant18_Value_l
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 364;

                    ;% GNC2026W_P.Constant4_Value_b
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 365;

                    ;% GNC2026W_P.Constant5_Value_n
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 366;

                    ;% GNC2026W_P.Constant6_Value_n
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 367;

                    ;% GNC2026W_P.Constant8_Value_f
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 368;

                    ;% GNC2026W_P.Constant3_Value_e
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 369;

                    ;% GNC2026W_P.Constant1_Value_p
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 370;

                    ;% GNC2026W_P.Constant2_Value_c
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 371;

                    ;% GNC2026W_P.DesiredRate_Value_l
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 372;

                    ;% GNC2026W_P.Gain_Gain_b
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 373;

                    ;% GNC2026W_P.Gain1_Gain_k
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 374;

                    ;% GNC2026W_P.Constant1_Value_g
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 375;

                    ;% GNC2026W_P.Constant_Value_d
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 376;

                    ;% GNC2026W_P.DesiredRateBLACK_Value_kf
                    section.data(225).logicalSrcIdx = 224;
                    section.data(225).dtTransOffset = 377;

                    ;% GNC2026W_P.DesiredRate_Value_d
                    section.data(226).logicalSrcIdx = 225;
                    section.data(226).dtTransOffset = 378;

                    ;% GNC2026W_P.Gain_Gain_ho
                    section.data(227).logicalSrcIdx = 226;
                    section.data(227).dtTransOffset = 379;

                    ;% GNC2026W_P.Gain1_Gain_d
                    section.data(228).logicalSrcIdx = 227;
                    section.data(228).dtTransOffset = 380;

                    ;% GNC2026W_P.Constant_Value_h
                    section.data(229).logicalSrcIdx = 228;
                    section.data(229).dtTransOffset = 381;

                    ;% GNC2026W_P.Constant_Value_a
                    section.data(230).logicalSrcIdx = 229;
                    section.data(230).dtTransOffset = 382;

                    ;% GNC2026W_P.Constant11_Value_p
                    section.data(231).logicalSrcIdx = 230;
                    section.data(231).dtTransOffset = 383;

                    ;% GNC2026W_P.Constant12_Value_n
                    section.data(232).logicalSrcIdx = 231;
                    section.data(232).dtTransOffset = 384;

                    ;% GNC2026W_P.Constant14_Value_f2
                    section.data(233).logicalSrcIdx = 232;
                    section.data(233).dtTransOffset = 385;

                    ;% GNC2026W_P.Constant15_Value_n
                    section.data(234).logicalSrcIdx = 233;
                    section.data(234).dtTransOffset = 386;

                    ;% GNC2026W_P.Constant18_Value_e
                    section.data(235).logicalSrcIdx = 234;
                    section.data(235).dtTransOffset = 387;

                    ;% GNC2026W_P.Constant4_Value_l
                    section.data(236).logicalSrcIdx = 235;
                    section.data(236).dtTransOffset = 388;

                    ;% GNC2026W_P.Constant5_Value_p
                    section.data(237).logicalSrcIdx = 236;
                    section.data(237).dtTransOffset = 389;

                    ;% GNC2026W_P.Constant6_Value_m
                    section.data(238).logicalSrcIdx = 237;
                    section.data(238).dtTransOffset = 390;

                    ;% GNC2026W_P.Constant8_Value_j
                    section.data(239).logicalSrcIdx = 238;
                    section.data(239).dtTransOffset = 391;

                    ;% GNC2026W_P.Constant3_Value_k
                    section.data(240).logicalSrcIdx = 239;
                    section.data(240).dtTransOffset = 392;

                    ;% GNC2026W_P.Constant1_Value_b
                    section.data(241).logicalSrcIdx = 240;
                    section.data(241).dtTransOffset = 393;

                    ;% GNC2026W_P.Constant2_Value_g
                    section.data(242).logicalSrcIdx = 241;
                    section.data(242).dtTransOffset = 394;

                    ;% GNC2026W_P.DesiredRate_Value_ha
                    section.data(243).logicalSrcIdx = 242;
                    section.data(243).dtTransOffset = 395;

                    ;% GNC2026W_P.Gain_Gain_o
                    section.data(244).logicalSrcIdx = 243;
                    section.data(244).dtTransOffset = 396;

                    ;% GNC2026W_P.Gain1_Gain_b
                    section.data(245).logicalSrcIdx = 244;
                    section.data(245).dtTransOffset = 397;

                    ;% GNC2026W_P.DesiredRateBLACK_Value_i
                    section.data(246).logicalSrcIdx = 245;
                    section.data(246).dtTransOffset = 398;

                    ;% GNC2026W_P.DesiredRate_Value_n
                    section.data(247).logicalSrcIdx = 246;
                    section.data(247).dtTransOffset = 399;

                    ;% GNC2026W_P.Gain_Gain_ox
                    section.data(248).logicalSrcIdx = 247;
                    section.data(248).dtTransOffset = 400;

                    ;% GNC2026W_P.Gain1_Gain_e
                    section.data(249).logicalSrcIdx = 248;
                    section.data(249).dtTransOffset = 401;

                    ;% GNC2026W_P.Constant_Value_h1
                    section.data(250).logicalSrcIdx = 249;
                    section.data(250).dtTransOffset = 402;

                    ;% GNC2026W_P.Separation_Value_d
                    section.data(251).logicalSrcIdx = 250;
                    section.data(251).dtTransOffset = 403;

                    ;% GNC2026W_P.Constant_Value_c
                    section.data(252).logicalSrcIdx = 251;
                    section.data(252).dtTransOffset = 404;

                    ;% GNC2026W_P.Path_Y0
                    section.data(253).logicalSrcIdx = 252;
                    section.data(253).dtTransOffset = 405;

                    ;% GNC2026W_P.Constant_Value_a5
                    section.data(254).logicalSrcIdx = 253;
                    section.data(254).dtTransOffset = 406;

                    ;% GNC2026W_P.Switch_Threshold
                    section.data(255).logicalSrcIdx = 254;
                    section.data(255).dtTransOffset = 412;

                    ;% GNC2026W_P.TSamp_WtEt
                    section.data(256).logicalSrcIdx = 255;
                    section.data(256).dtTransOffset = 413;

                    ;% GNC2026W_P.TSamp_WtEt_f
                    section.data(257).logicalSrcIdx = 256;
                    section.data(257).dtTransOffset = 414;

                    ;% GNC2026W_P.TSamp_WtEt_c
                    section.data(258).logicalSrcIdx = 257;
                    section.data(258).dtTransOffset = 415;

                    ;% GNC2026W_P.Gain6_Gain
                    section.data(259).logicalSrcIdx = 258;
                    section.data(259).dtTransOffset = 416;

                    ;% GNC2026W_P.Gain7_Gain
                    section.data(260).logicalSrcIdx = 259;
                    section.data(260).dtTransOffset = 417;

                    ;% GNC2026W_P.Gain8_Gain
                    section.data(261).logicalSrcIdx = 260;
                    section.data(261).dtTransOffset = 418;

                    ;% GNC2026W_P.TSamp_WtEt_h
                    section.data(262).logicalSrcIdx = 261;
                    section.data(262).dtTransOffset = 419;

                    ;% GNC2026W_P.TSamp_WtEt_e
                    section.data(263).logicalSrcIdx = 262;
                    section.data(263).dtTransOffset = 420;

                    ;% GNC2026W_P.TSamp_WtEt_n
                    section.data(264).logicalSrcIdx = 263;
                    section.data(264).dtTransOffset = 421;

                    ;% GNC2026W_P.TSamp_WtEt_i
                    section.data(265).logicalSrcIdx = 264;
                    section.data(265).dtTransOffset = 422;

                    ;% GNC2026W_P.TSamp_WtEt_hr
                    section.data(266).logicalSrcIdx = 265;
                    section.data(266).dtTransOffset = 423;

                    ;% GNC2026W_P.TSamp_WtEt_ca
                    section.data(267).logicalSrcIdx = 266;
                    section.data(267).dtTransOffset = 424;

                    ;% GNC2026W_P.Gain6_Gain_g
                    section.data(268).logicalSrcIdx = 267;
                    section.data(268).dtTransOffset = 425;

                    ;% GNC2026W_P.Gain7_Gain_b
                    section.data(269).logicalSrcIdx = 268;
                    section.data(269).dtTransOffset = 426;

                    ;% GNC2026W_P.Gain8_Gain_m
                    section.data(270).logicalSrcIdx = 269;
                    section.data(270).dtTransOffset = 427;

                    ;% GNC2026W_P.TSamp_WtEt_nd
                    section.data(271).logicalSrcIdx = 270;
                    section.data(271).dtTransOffset = 428;

                    ;% GNC2026W_P.TSamp_WtEt_co
                    section.data(272).logicalSrcIdx = 271;
                    section.data(272).dtTransOffset = 429;

                    ;% GNC2026W_P.TSamp_WtEt_no
                    section.data(273).logicalSrcIdx = 272;
                    section.data(273).dtTransOffset = 430;

                    ;% GNC2026W_P.TSamp_WtEt_p
                    section.data(274).logicalSrcIdx = 273;
                    section.data(274).dtTransOffset = 431;

                    ;% GNC2026W_P.TSamp_WtEt_o
                    section.data(275).logicalSrcIdx = 274;
                    section.data(275).dtTransOffset = 432;

                    ;% GNC2026W_P.TSamp_WtEt_px
                    section.data(276).logicalSrcIdx = 275;
                    section.data(276).dtTransOffset = 433;

                    ;% GNC2026W_P.Gain6_Gain_a
                    section.data(277).logicalSrcIdx = 276;
                    section.data(277).dtTransOffset = 434;

                    ;% GNC2026W_P.Gain7_Gain_e
                    section.data(278).logicalSrcIdx = 277;
                    section.data(278).dtTransOffset = 435;

                    ;% GNC2026W_P.Gain8_Gain_g
                    section.data(279).logicalSrcIdx = 278;
                    section.data(279).dtTransOffset = 436;

                    ;% GNC2026W_P.TSamp_WtEt_ft
                    section.data(280).logicalSrcIdx = 279;
                    section.data(280).dtTransOffset = 437;

                    ;% GNC2026W_P.TSamp_WtEt_eh
                    section.data(281).logicalSrcIdx = 280;
                    section.data(281).dtTransOffset = 438;

                    ;% GNC2026W_P.TSamp_WtEt_ii
                    section.data(282).logicalSrcIdx = 281;
                    section.data(282).dtTransOffset = 439;

                    ;% GNC2026W_P.TSamp_WtEt_pu
                    section.data(283).logicalSrcIdx = 282;
                    section.data(283).dtTransOffset = 440;

                    ;% GNC2026W_P.TSamp_WtEt_f0
                    section.data(284).logicalSrcIdx = 283;
                    section.data(284).dtTransOffset = 441;

                    ;% GNC2026W_P.TSamp_WtEt_nz
                    section.data(285).logicalSrcIdx = 284;
                    section.data(285).dtTransOffset = 442;

                    ;% GNC2026W_P.Constant7_Value
                    section.data(286).logicalSrcIdx = 285;
                    section.data(286).dtTransOffset = 443;

                    ;% GNC2026W_P.Merge3_InitialOutput
                    section.data(287).logicalSrcIdx = 286;
                    section.data(287).dtTransOffset = 444;

                    ;% GNC2026W_P.Merge4_InitialOutput
                    section.data(288).logicalSrcIdx = 287;
                    section.data(288).dtTransOffset = 445;

                    ;% GNC2026W_P.Merge5_InitialOutput
                    section.data(289).logicalSrcIdx = 288;
                    section.data(289).dtTransOffset = 446;

                    ;% GNC2026W_P.Constant7_Value_h
                    section.data(290).logicalSrcIdx = 289;
                    section.data(290).dtTransOffset = 447;

                    ;% GNC2026W_P.Zero_Value
                    section.data(291).logicalSrcIdx = 290;
                    section.data(291).dtTransOffset = 448;

                    ;% GNC2026W_P.GPIOWrite1_gpioPin
                    section.data(292).logicalSrcIdx = 291;
                    section.data(292).dtTransOffset = 449;

                    ;% GNC2026W_P.GPIOWrite1_pinDirection
                    section.data(293).logicalSrcIdx = 292;
                    section.data(293).dtTransOffset = 450;

                    ;% GNC2026W_P.dytdt_Y0
                    section.data(294).logicalSrcIdx = 293;
                    section.data(294).dtTransOffset = 451;

                    ;% GNC2026W_P.Out1_Y0
                    section.data(295).logicalSrcIdx = 294;
                    section.data(295).dtTransOffset = 452;

                    ;% GNC2026W_P.Out1_Y0_l
                    section.data(296).logicalSrcIdx = 295;
                    section.data(296).dtTransOffset = 453;

                    ;% GNC2026W_P.dytdt_Y0_f
                    section.data(297).logicalSrcIdx = 296;
                    section.data(297).dtTransOffset = 454;

                    ;% GNC2026W_P.Out1_Y0_a
                    section.data(298).logicalSrcIdx = 297;
                    section.data(298).dtTransOffset = 455;

                    ;% GNC2026W_P.Out1_Y0_o
                    section.data(299).logicalSrcIdx = 298;
                    section.data(299).dtTransOffset = 456;

                    ;% GNC2026W_P.dydt_Y0
                    section.data(300).logicalSrcIdx = 299;
                    section.data(300).dtTransOffset = 457;

                    ;% GNC2026W_P.Constant2_Value_k
                    section.data(301).logicalSrcIdx = 300;
                    section.data(301).dtTransOffset = 458;

                    ;% GNC2026W_P.Delay_InitialCondition
                    section.data(302).logicalSrcIdx = 301;
                    section.data(302).dtTransOffset = 459;

                    ;% GNC2026W_P.dytdt_Y0_n
                    section.data(303).logicalSrcIdx = 302;
                    section.data(303).dtTransOffset = 460;

                    ;% GNC2026W_P.Out1_Y0_n
                    section.data(304).logicalSrcIdx = 303;
                    section.data(304).dtTransOffset = 461;

                    ;% GNC2026W_P.Out1_Y0_m
                    section.data(305).logicalSrcIdx = 304;
                    section.data(305).dtTransOffset = 462;

                    ;% GNC2026W_P.AddNoise_Mean
                    section.data(306).logicalSrcIdx = 305;
                    section.data(306).dtTransOffset = 463;

                    ;% GNC2026W_P.AddNoise_StdDev
                    section.data(307).logicalSrcIdx = 306;
                    section.data(307).dtTransOffset = 464;

                    ;% GNC2026W_P.AddNoise_Seed
                    section.data(308).logicalSrcIdx = 307;
                    section.data(308).dtTransOffset = 465;

                    ;% GNC2026W_P.Delay_InitialCondition_a
                    section.data(309).logicalSrcIdx = 308;
                    section.data(309).dtTransOffset = 466;

                    ;% GNC2026W_P.VelocitytoPosition_gainval
                    section.data(310).logicalSrcIdx = 309;
                    section.data(310).dtTransOffset = 467;

                    ;% GNC2026W_P.VelocitytoPosition_IC
                    section.data(311).logicalSrcIdx = 310;
                    section.data(311).dtTransOffset = 468;

                    ;% GNC2026W_P.Delay_InitialCondition_h
                    section.data(312).logicalSrcIdx = 311;
                    section.data(312).dtTransOffset = 474;

                    ;% GNC2026W_P.Constant2_Value_n
                    section.data(313).logicalSrcIdx = 312;
                    section.data(313).dtTransOffset = 475;

                    ;% GNC2026W_P.Delay2_InitialCondition
                    section.data(314).logicalSrcIdx = 313;
                    section.data(314).dtTransOffset = 476;

                    ;% GNC2026W_P.Delay1_InitialCondition
                    section.data(315).logicalSrcIdx = 314;
                    section.data(315).dtTransOffset = 477;

                    ;% GNC2026W_P.Constant3_Value_n
                    section.data(316).logicalSrcIdx = 315;
                    section.data(316).dtTransOffset = 478;

                    ;% GNC2026W_P.Delay1_InitialCondition_f
                    section.data(317).logicalSrcIdx = 316;
                    section.data(317).dtTransOffset = 479;

                    ;% GNC2026W_P.Constant3_Value_f
                    section.data(318).logicalSrcIdx = 317;
                    section.data(318).dtTransOffset = 480;

                    ;% GNC2026W_P.Delay1_InitialCondition_fy
                    section.data(319).logicalSrcIdx = 318;
                    section.data(319).dtTransOffset = 481;

                    ;% GNC2026W_P.Constant3_Value_o
                    section.data(320).logicalSrcIdx = 319;
                    section.data(320).dtTransOffset = 482;

                    ;% GNC2026W_P.Delay1_InitialCondition_b
                    section.data(321).logicalSrcIdx = 320;
                    section.data(321).dtTransOffset = 483;

                    ;% GNC2026W_P.Constant3_Value_l
                    section.data(322).logicalSrcIdx = 321;
                    section.data(322).dtTransOffset = 484;

                    ;% GNC2026W_P.TSamp_WtEt_d
                    section.data(323).logicalSrcIdx = 322;
                    section.data(323).dtTransOffset = 485;

                    ;% GNC2026W_P.TSamp_WtEt_ck
                    section.data(324).logicalSrcIdx = 323;
                    section.data(324).dtTransOffset = 486;

                    ;% GNC2026W_P.TSamp_WtEt_l
                    section.data(325).logicalSrcIdx = 324;
                    section.data(325).dtTransOffset = 487;

                    ;% GNC2026W_P.Constant1_Value_k
                    section.data(326).logicalSrcIdx = 325;
                    section.data(326).dtTransOffset = 488;

                    ;% GNC2026W_P.Constant3_Value_e5
                    section.data(327).logicalSrcIdx = 326;
                    section.data(327).dtTransOffset = 489;

                    ;% GNC2026W_P.AccelerationtoVelocity_gainval
                    section.data(328).logicalSrcIdx = 327;
                    section.data(328).dtTransOffset = 490;

                    ;% GNC2026W_P.AccelerationtoVelocity_IC
                    section.data(329).logicalSrcIdx = 328;
                    section.data(329).dtTransOffset = 491;

                    ;% GNC2026W_P.dytdt_Y0_ne
                    section.data(330).logicalSrcIdx = 329;
                    section.data(330).dtTransOffset = 497;

                    ;% GNC2026W_P.Out1_Y0_j
                    section.data(331).logicalSrcIdx = 330;
                    section.data(331).dtTransOffset = 498;

                    ;% GNC2026W_P.Out1_Y0_nj
                    section.data(332).logicalSrcIdx = 331;
                    section.data(332).dtTransOffset = 499;

                    ;% GNC2026W_P.AddNoise_Mean_d
                    section.data(333).logicalSrcIdx = 332;
                    section.data(333).dtTransOffset = 500;

                    ;% GNC2026W_P.AddNoise_StdDev_m
                    section.data(334).logicalSrcIdx = 333;
                    section.data(334).dtTransOffset = 501;

                    ;% GNC2026W_P.AddNoise_Seed_j
                    section.data(335).logicalSrcIdx = 334;
                    section.data(335).dtTransOffset = 502;

                    ;% GNC2026W_P.AccelerationtoVelocity_gainva_e
                    section.data(336).logicalSrcIdx = 335;
                    section.data(336).dtTransOffset = 503;

                    ;% GNC2026W_P.AccelerationtoVelocity_IC_g
                    section.data(337).logicalSrcIdx = 336;
                    section.data(337).dtTransOffset = 504;

                    ;% GNC2026W_P.VelocitytoPosition_gainval_m
                    section.data(338).logicalSrcIdx = 337;
                    section.data(338).dtTransOffset = 505;

                    ;% GNC2026W_P.Delay_InitialCondition_f
                    section.data(339).logicalSrcIdx = 338;
                    section.data(339).dtTransOffset = 506;

                    ;% GNC2026W_P.Constant2_Value_fs
                    section.data(340).logicalSrcIdx = 339;
                    section.data(340).dtTransOffset = 507;

                    ;% GNC2026W_P.Delay2_InitialCondition_g
                    section.data(341).logicalSrcIdx = 340;
                    section.data(341).dtTransOffset = 508;

                    ;% GNC2026W_P.Delay1_InitialCondition_a
                    section.data(342).logicalSrcIdx = 341;
                    section.data(342).dtTransOffset = 509;

                    ;% GNC2026W_P.Constant3_Value_c
                    section.data(343).logicalSrcIdx = 342;
                    section.data(343).dtTransOffset = 510;

                    ;% GNC2026W_P.Delay1_InitialCondition_h
                    section.data(344).logicalSrcIdx = 343;
                    section.data(344).dtTransOffset = 511;

                    ;% GNC2026W_P.Constant3_Value_i
                    section.data(345).logicalSrcIdx = 344;
                    section.data(345).dtTransOffset = 512;

                    ;% GNC2026W_P.Delay1_InitialCondition_d
                    section.data(346).logicalSrcIdx = 345;
                    section.data(346).dtTransOffset = 513;

                    ;% GNC2026W_P.Constant3_Value_n4
                    section.data(347).logicalSrcIdx = 346;
                    section.data(347).dtTransOffset = 514;

                    ;% GNC2026W_P.TSamp_WtEt_k
                    section.data(348).logicalSrcIdx = 347;
                    section.data(348).dtTransOffset = 515;

                    ;% GNC2026W_P.TSamp_WtEt_m
                    section.data(349).logicalSrcIdx = 348;
                    section.data(349).dtTransOffset = 516;

                    ;% GNC2026W_P.AddNoise_Mean_i
                    section.data(350).logicalSrcIdx = 349;
                    section.data(350).dtTransOffset = 517;

                    ;% GNC2026W_P.AddNoise_StdDev_l
                    section.data(351).logicalSrcIdx = 350;
                    section.data(351).dtTransOffset = 518;

                    ;% GNC2026W_P.AddNoise_Seed_c
                    section.data(352).logicalSrcIdx = 351;
                    section.data(352).dtTransOffset = 519;

                    ;% GNC2026W_P.AccelerationtoVelocity_gainva_h
                    section.data(353).logicalSrcIdx = 352;
                    section.data(353).dtTransOffset = 520;

                    ;% GNC2026W_P.AccelerationtoVelocity_IC_a
                    section.data(354).logicalSrcIdx = 353;
                    section.data(354).dtTransOffset = 521;

                    ;% GNC2026W_P.VelocitytoPosition_gainval_d
                    section.data(355).logicalSrcIdx = 354;
                    section.data(355).dtTransOffset = 522;

                    ;% GNC2026W_P.Delay_InitialCondition_o
                    section.data(356).logicalSrcIdx = 355;
                    section.data(356).dtTransOffset = 523;

                    ;% GNC2026W_P.Constant2_Value_e
                    section.data(357).logicalSrcIdx = 356;
                    section.data(357).dtTransOffset = 524;

                    ;% GNC2026W_P.Delay2_InitialCondition_h
                    section.data(358).logicalSrcIdx = 357;
                    section.data(358).dtTransOffset = 525;

                    ;% GNC2026W_P.Delay1_InitialCondition_k
                    section.data(359).logicalSrcIdx = 358;
                    section.data(359).dtTransOffset = 526;

                    ;% GNC2026W_P.Constant3_Value_h
                    section.data(360).logicalSrcIdx = 359;
                    section.data(360).dtTransOffset = 527;

                    ;% GNC2026W_P.Delay1_InitialCondition_j
                    section.data(361).logicalSrcIdx = 360;
                    section.data(361).dtTransOffset = 528;

                    ;% GNC2026W_P.Constant3_Value_it
                    section.data(362).logicalSrcIdx = 361;
                    section.data(362).dtTransOffset = 529;

                    ;% GNC2026W_P.Delay1_InitialCondition_hf
                    section.data(363).logicalSrcIdx = 362;
                    section.data(363).dtTransOffset = 530;

                    ;% GNC2026W_P.Constant3_Value_os
                    section.data(364).logicalSrcIdx = 363;
                    section.data(364).dtTransOffset = 531;

                    ;% GNC2026W_P.TSamp_WtEt_a
                    section.data(365).logicalSrcIdx = 364;
                    section.data(365).dtTransOffset = 532;

                    ;% GNC2026W_P.TSamp_WtEt_g
                    section.data(366).logicalSrcIdx = 365;
                    section.data(366).dtTransOffset = 533;

                    ;% GNC2026W_P.AddNoise_Mean_j
                    section.data(367).logicalSrcIdx = 366;
                    section.data(367).dtTransOffset = 534;

                    ;% GNC2026W_P.AddNoise_StdDev_j
                    section.data(368).logicalSrcIdx = 367;
                    section.data(368).dtTransOffset = 535;

                    ;% GNC2026W_P.AddNoise_Seed_k
                    section.data(369).logicalSrcIdx = 368;
                    section.data(369).dtTransOffset = 536;

                    ;% GNC2026W_P.AccelerationtoVelocity_gainva_a
                    section.data(370).logicalSrcIdx = 369;
                    section.data(370).dtTransOffset = 537;

                    ;% GNC2026W_P.AccelerationtoVelocity_IC_e
                    section.data(371).logicalSrcIdx = 370;
                    section.data(371).dtTransOffset = 538;

                    ;% GNC2026W_P.VelocitytoPosition_gainval_dt
                    section.data(372).logicalSrcIdx = 371;
                    section.data(372).dtTransOffset = 539;

                    ;% GNC2026W_P.Delay_InitialCondition_d
                    section.data(373).logicalSrcIdx = 372;
                    section.data(373).dtTransOffset = 540;

                    ;% GNC2026W_P.Constant2_Value_kh
                    section.data(374).logicalSrcIdx = 373;
                    section.data(374).dtTransOffset = 541;

                    ;% GNC2026W_P.Delay2_InitialCondition_j
                    section.data(375).logicalSrcIdx = 374;
                    section.data(375).dtTransOffset = 542;

                    ;% GNC2026W_P.Delay1_InitialCondition_o
                    section.data(376).logicalSrcIdx = 375;
                    section.data(376).dtTransOffset = 543;

                    ;% GNC2026W_P.Constant3_Value_bf
                    section.data(377).logicalSrcIdx = 376;
                    section.data(377).dtTransOffset = 544;

                    ;% GNC2026W_P.Delay1_InitialCondition_hw
                    section.data(378).logicalSrcIdx = 377;
                    section.data(378).dtTransOffset = 545;

                    ;% GNC2026W_P.Constant3_Value_o2
                    section.data(379).logicalSrcIdx = 378;
                    section.data(379).dtTransOffset = 546;

                    ;% GNC2026W_P.Delay1_InitialCondition_o4
                    section.data(380).logicalSrcIdx = 379;
                    section.data(380).dtTransOffset = 547;

                    ;% GNC2026W_P.Constant3_Value_f4
                    section.data(381).logicalSrcIdx = 380;
                    section.data(381).dtTransOffset = 548;

                    ;% GNC2026W_P.TSamp_WtEt_cs
                    section.data(382).logicalSrcIdx = 381;
                    section.data(382).dtTransOffset = 549;

                    ;% GNC2026W_P.TSamp_WtEt_k0
                    section.data(383).logicalSrcIdx = 382;
                    section.data(383).dtTransOffset = 550;

                    ;% GNC2026W_P.Delay_InitialCondition_o2
                    section.data(384).logicalSrcIdx = 383;
                    section.data(384).dtTransOffset = 551;

                    ;% GNC2026W_P.Delay1_InitialCondition_l
                    section.data(385).logicalSrcIdx = 384;
                    section.data(385).dtTransOffset = 552;

                    ;% GNC2026W_P.Delay2_InitialCondition_jo
                    section.data(386).logicalSrcIdx = 385;
                    section.data(386).dtTransOffset = 553;

                    ;% GNC2026W_P.Merge_InitialOutput
                    section.data(387).logicalSrcIdx = 386;
                    section.data(387).dtTransOffset = 554;

                    ;% GNC2026W_P.Merge_InitialOutput_p
                    section.data(388).logicalSrcIdx = 387;
                    section.data(388).dtTransOffset = 555;

                    ;% GNC2026W_P.Merge_InitialOutput_b
                    section.data(389).logicalSrcIdx = 388;
                    section.data(389).dtTransOffset = 556;

                    ;% GNC2026W_P.UniversalTime_Y0
                    section.data(390).logicalSrcIdx = 389;
                    section.data(390).dtTransOffset = 557;

                    ;% GNC2026W_P.dytdt_Y0_c
                    section.data(391).logicalSrcIdx = 390;
                    section.data(391).dtTransOffset = 558;

                    ;% GNC2026W_P.dytdt_Y0_j
                    section.data(392).logicalSrcIdx = 391;
                    section.data(392).dtTransOffset = 559;

                    ;% GNC2026W_P.dytdt_Y0_d
                    section.data(393).logicalSrcIdx = 392;
                    section.data(393).dtTransOffset = 560;

                    ;% GNC2026W_P.ConvertBLAXfrommmtom_Gain
                    section.data(394).logicalSrcIdx = 393;
                    section.data(394).dtTransOffset = 561;

                    ;% GNC2026W_P.ConvertBLAYfrommmtom_Gain
                    section.data(395).logicalSrcIdx = 394;
                    section.data(395).dtTransOffset = 562;

                    ;% GNC2026W_P.ConvertBLACKVXfrommmtom_Gain
                    section.data(396).logicalSrcIdx = 395;
                    section.data(396).dtTransOffset = 563;

                    ;% GNC2026W_P.ConvertBLACKVYfrommmtom_Gain
                    section.data(397).logicalSrcIdx = 396;
                    section.data(397).dtTransOffset = 564;

                    ;% GNC2026W_P.Delay2_InitialCondition_e
                    section.data(398).logicalSrcIdx = 397;
                    section.data(398).dtTransOffset = 565;

                    ;% GNC2026W_P.Delay1_InitialCondition_m
                    section.data(399).logicalSrcIdx = 398;
                    section.data(399).dtTransOffset = 566;

                    ;% GNC2026W_P.Constant3_Value_eq
                    section.data(400).logicalSrcIdx = 399;
                    section.data(400).dtTransOffset = 567;

                    ;% GNC2026W_P.Delay1_InitialCondition_i
                    section.data(401).logicalSrcIdx = 400;
                    section.data(401).dtTransOffset = 568;

                    ;% GNC2026W_P.Constant3_Value_a
                    section.data(402).logicalSrcIdx = 401;
                    section.data(402).dtTransOffset = 569;

                    ;% GNC2026W_P.Delay1_InitialCondition_it
                    section.data(403).logicalSrcIdx = 402;
                    section.data(403).dtTransOffset = 570;

                    ;% GNC2026W_P.Constant3_Value_d
                    section.data(404).logicalSrcIdx = 403;
                    section.data(404).dtTransOffset = 571;

                    ;% GNC2026W_P.ConvertBLUXfrommmtom_Gain
                    section.data(405).logicalSrcIdx = 404;
                    section.data(405).dtTransOffset = 572;

                    ;% GNC2026W_P.ConvertBLUYfrommmtom_Gain
                    section.data(406).logicalSrcIdx = 405;
                    section.data(406).dtTransOffset = 573;

                    ;% GNC2026W_P.ConvertBLUEVXfrommmtom_Gain
                    section.data(407).logicalSrcIdx = 406;
                    section.data(407).dtTransOffset = 574;

                    ;% GNC2026W_P.ConvertBLUEVYfrommmtom_Gain
                    section.data(408).logicalSrcIdx = 407;
                    section.data(408).dtTransOffset = 575;

                    ;% GNC2026W_P.Delay2_InitialCondition_a
                    section.data(409).logicalSrcIdx = 408;
                    section.data(409).dtTransOffset = 576;

                    ;% GNC2026W_P.Delay1_InitialCondition_i3
                    section.data(410).logicalSrcIdx = 409;
                    section.data(410).dtTransOffset = 577;

                    ;% GNC2026W_P.Constant3_Value_oi
                    section.data(411).logicalSrcIdx = 410;
                    section.data(411).dtTransOffset = 578;

                    ;% GNC2026W_P.Delay1_InitialCondition_hb
                    section.data(412).logicalSrcIdx = 411;
                    section.data(412).dtTransOffset = 579;

                    ;% GNC2026W_P.Constant3_Value_cz
                    section.data(413).logicalSrcIdx = 412;
                    section.data(413).dtTransOffset = 580;

                    ;% GNC2026W_P.Delay1_InitialCondition_ja
                    section.data(414).logicalSrcIdx = 413;
                    section.data(414).dtTransOffset = 581;

                    ;% GNC2026W_P.Constant3_Value_ke
                    section.data(415).logicalSrcIdx = 414;
                    section.data(415).dtTransOffset = 582;

                    ;% GNC2026W_P.ConvertREDXfrommmtom_Gain
                    section.data(416).logicalSrcIdx = 415;
                    section.data(416).dtTransOffset = 583;

                    ;% GNC2026W_P.ConvertREDYfrommmtom_Gain
                    section.data(417).logicalSrcIdx = 416;
                    section.data(417).dtTransOffset = 584;

                    ;% GNC2026W_P.ConvertREDVXfrommmtom_Gain
                    section.data(418).logicalSrcIdx = 417;
                    section.data(418).dtTransOffset = 585;

                    ;% GNC2026W_P.ConvertREDVYfrommmtom_Gain
                    section.data(419).logicalSrcIdx = 418;
                    section.data(419).dtTransOffset = 586;

                    ;% GNC2026W_P.Delay2_InitialCondition_m
                    section.data(420).logicalSrcIdx = 419;
                    section.data(420).dtTransOffset = 587;

                    ;% GNC2026W_P.Delay1_InitialCondition_lm
                    section.data(421).logicalSrcIdx = 420;
                    section.data(421).dtTransOffset = 588;

                    ;% GNC2026W_P.Constant3_Value_fy
                    section.data(422).logicalSrcIdx = 421;
                    section.data(422).dtTransOffset = 589;

                    ;% GNC2026W_P.Delay1_InitialCondition_kq
                    section.data(423).logicalSrcIdx = 422;
                    section.data(423).dtTransOffset = 590;

                    ;% GNC2026W_P.Constant3_Value_dh
                    section.data(424).logicalSrcIdx = 423;
                    section.data(424).dtTransOffset = 591;

                    ;% GNC2026W_P.Delay1_InitialCondition_c
                    section.data(425).logicalSrcIdx = 424;
                    section.data(425).dtTransOffset = 592;

                    ;% GNC2026W_P.Constant3_Value_dz
                    section.data(426).logicalSrcIdx = 425;
                    section.data(426).dtTransOffset = 593;

                    ;% GNC2026W_P.Constant_Value_i
                    section.data(427).logicalSrcIdx = 426;
                    section.data(427).dtTransOffset = 594;

                    ;% GNC2026W_P.Gain_Gain_k
                    section.data(428).logicalSrcIdx = 427;
                    section.data(428).dtTransOffset = 595;

                    ;% GNC2026W_P.Constant_Value_n1
                    section.data(429).logicalSrcIdx = 428;
                    section.data(429).dtTransOffset = 596;

                    ;% GNC2026W_P.Step_Time
                    section.data(430).logicalSrcIdx = 429;
                    section.data(430).dtTransOffset = 597;

                    ;% GNC2026W_P.Step_Y0
                    section.data(431).logicalSrcIdx = 430;
                    section.data(431).dtTransOffset = 598;

                    ;% GNC2026W_P.Step_YFinal
                    section.data(432).logicalSrcIdx = 431;
                    section.data(432).dtTransOffset = 599;

                    ;% GNC2026W_P.ControlDynamixelActuatorsineith
                    section.data(433).logicalSrcIdx = 432;
                    section.data(433).dtTransOffset = 600;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_b
                    section.data(434).logicalSrcIdx = 433;
                    section.data(434).dtTransOffset = 601;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_h
                    section.data(435).logicalSrcIdx = 434;
                    section.data(435).dtTransOffset = 602;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_j
                    section.data(436).logicalSrcIdx = 435;
                    section.data(436).dtTransOffset = 603;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_m
                    section.data(437).logicalSrcIdx = 436;
                    section.data(437).dtTransOffset = 604;

                    ;% GNC2026W_P.ControlDynamixelActuatorsine_hy
                    section.data(438).logicalSrcIdx = 437;
                    section.data(438).dtTransOffset = 605;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_i
                    section.data(439).logicalSrcIdx = 438;
                    section.data(439).dtTransOffset = 606;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_g
                    section.data(440).logicalSrcIdx = 439;
                    section.data(440).dtTransOffset = 607;

                    ;% GNC2026W_P.ControlDynamixelActuatorsine_g3
                    section.data(441).logicalSrcIdx = 440;
                    section.data(441).dtTransOffset = 608;

                    ;% GNC2026W_P.ControlDynamixelActuatorsine_bf
                    section.data(442).logicalSrcIdx = 441;
                    section.data(442).dtTransOffset = 609;

                    ;% GNC2026W_P.ControlDynamixelActuatorsinei_l
                    section.data(443).logicalSrcIdx = 442;
                    section.data(443).dtTransOffset = 610;

                    ;% GNC2026W_P.Out1_Y0_f
                    section.data(444).logicalSrcIdx = 443;
                    section.data(444).dtTransOffset = 611;

                    ;% GNC2026W_P.Out1_Y0_jx
                    section.data(445).logicalSrcIdx = 444;
                    section.data(445).dtTransOffset = 612;

                    ;% GNC2026W_P.BLACKDC_Y0
                    section.data(446).logicalSrcIdx = 445;
                    section.data(446).dtTransOffset = 613;

                    ;% GNC2026W_P.Delay_InitialCondition_i
                    section.data(447).logicalSrcIdx = 446;
                    section.data(447).dtTransOffset = 614;

                    ;% GNC2026W_P.Constant2_Value_h
                    section.data(448).logicalSrcIdx = 447;
                    section.data(448).dtTransOffset = 615;

                    ;% GNC2026W_P.Out1_Y0_nw
                    section.data(449).logicalSrcIdx = 448;
                    section.data(449).dtTransOffset = 616;

                    ;% GNC2026W_P.Out1_Y0_js
                    section.data(450).logicalSrcIdx = 449;
                    section.data(450).dtTransOffset = 617;

                    ;% GNC2026W_P.BLUEDC_Y0
                    section.data(451).logicalSrcIdx = 450;
                    section.data(451).dtTransOffset = 618;

                    ;% GNC2026W_P.Delay_InitialCondition_n
                    section.data(452).logicalSrcIdx = 451;
                    section.data(452).dtTransOffset = 619;

                    ;% GNC2026W_P.Constant2_Value_fq
                    section.data(453).logicalSrcIdx = 452;
                    section.data(453).dtTransOffset = 620;

                    ;% GNC2026W_P.Out1_Y0_c
                    section.data(454).logicalSrcIdx = 453;
                    section.data(454).dtTransOffset = 621;

                    ;% GNC2026W_P.Out1_Y0_d
                    section.data(455).logicalSrcIdx = 454;
                    section.data(455).dtTransOffset = 622;

                    ;% GNC2026W_P.REDDC_Y0
                    section.data(456).logicalSrcIdx = 455;
                    section.data(456).dtTransOffset = 623;

                    ;% GNC2026W_P.Delay_InitialCondition_p
                    section.data(457).logicalSrcIdx = 456;
                    section.data(457).dtTransOffset = 624;

                    ;% GNC2026W_P.Constant2_Value_eq
                    section.data(458).logicalSrcIdx = 457;
                    section.data(458).dtTransOffset = 625;

                    ;% GNC2026W_P.Universal_Time39_InitialValue
                    section.data(459).logicalSrcIdx = 458;
                    section.data(459).dtTransOffset = 626;

                    ;% GNC2026W_P.GaussianNoise_Mean
                    section.data(460).logicalSrcIdx = 459;
                    section.data(460).dtTransOffset = 627;

                    ;% GNC2026W_P.GaussianNoise_StdDev
                    section.data(461).logicalSrcIdx = 460;
                    section.data(461).dtTransOffset = 628;

                    ;% GNC2026W_P.GaussianNoise_Seed
                    section.data(462).logicalSrcIdx = 461;
                    section.data(462).dtTransOffset = 629;

                    ;% GNC2026W_P.Merge1_InitialOutput
                    section.data(463).logicalSrcIdx = 462;
                    section.data(463).dtTransOffset = 630;

                    ;% GNC2026W_P.Merge2_InitialOutput
                    section.data(464).logicalSrcIdx = 463;
                    section.data(464).dtTransOffset = 631;

                    ;% GNC2026W_P.Merge_InitialOutput_e
                    section.data(465).logicalSrcIdx = 464;
                    section.data(465).dtTransOffset = 632;

                    ;% GNC2026W_P.SafetyNumber_Value
                    section.data(466).logicalSrcIdx = 465;
                    section.data(466).dtTransOffset = 633;

                    ;% GNC2026W_P.Gain_Gain_oy
                    section.data(467).logicalSrcIdx = 466;
                    section.data(467).dtTransOffset = 634;

                    ;% GNC2026W_P.Gain1_Gain_em
                    section.data(468).logicalSrcIdx = 467;
                    section.data(468).dtTransOffset = 635;

                    ;% GNC2026W_P.Gain2_Gain
                    section.data(469).logicalSrcIdx = 468;
                    section.data(469).dtTransOffset = 636;

                    ;% GNC2026W_P.Gain3_Gain
                    section.data(470).logicalSrcIdx = 469;
                    section.data(470).dtTransOffset = 637;

                    ;% GNC2026W_P.Gain4_Gain
                    section.data(471).logicalSrcIdx = 470;
                    section.data(471).dtTransOffset = 638;

                    ;% GNC2026W_P.Gain5_Gain
                    section.data(472).logicalSrcIdx = 471;
                    section.data(472).dtTransOffset = 639;

                    ;% GNC2026W_P.Gain6_Gain_c
                    section.data(473).logicalSrcIdx = 472;
                    section.data(473).dtTransOffset = 640;

                    ;% GNC2026W_P.Gain7_Gain_l
                    section.data(474).logicalSrcIdx = 473;
                    section.data(474).dtTransOffset = 641;

                    ;% GNC2026W_P.DataStoreMemory_InitialValue
                    section.data(475).logicalSrcIdx = 474;
                    section.data(475).dtTransOffset = 642;

                    ;% GNC2026W_P.DataStoreMemory1_InitialValue
                    section.data(476).logicalSrcIdx = 475;
                    section.data(476).dtTransOffset = 643;

                    ;% GNC2026W_P.DataStoreMemory2_InitialValue
                    section.data(477).logicalSrcIdx = 476;
                    section.data(477).dtTransOffset = 652;

                    ;% GNC2026W_P.DataStoreMemory3_InitialValue
                    section.data(478).logicalSrcIdx = 477;
                    section.data(478).dtTransOffset = 653;

                    ;% GNC2026W_P.DataStoreMemory4_InitialValue
                    section.data(479).logicalSrcIdx = 478;
                    section.data(479).dtTransOffset = 656;

                    ;% GNC2026W_P.DataStoreMemory5_InitialValue
                    section.data(480).logicalSrcIdx = 479;
                    section.data(480).dtTransOffset = 659;

                    ;% GNC2026W_P.DataStoreMemory6_InitialValue
                    section.data(481).logicalSrcIdx = 480;
                    section.data(481).dtTransOffset = 660;

                    ;% GNC2026W_P.DataStoreMemory7_InitialValue
                    section.data(482).logicalSrcIdx = 481;
                    section.data(482).dtTransOffset = 663;

                    ;% GNC2026W_P.DataStoreMemory8_InitialValue
                    section.data(483).logicalSrcIdx = 482;
                    section.data(483).dtTransOffset = 664;

                    ;% GNC2026W_P.RED_Tz1_InitialValue
                    section.data(484).logicalSrcIdx = 483;
                    section.data(484).dtTransOffset = 665;

                    ;% GNC2026W_P.RED_Tz10_InitialValue
                    section.data(485).logicalSrcIdx = 484;
                    section.data(485).dtTransOffset = 666;

                    ;% GNC2026W_P.RED_Tz15_InitialValue
                    section.data(486).logicalSrcIdx = 485;
                    section.data(486).dtTransOffset = 667;

                    ;% GNC2026W_P.RED_Tz2_InitialValue
                    section.data(487).logicalSrcIdx = 486;
                    section.data(487).dtTransOffset = 668;

                    ;% GNC2026W_P.RED_Tz20_InitialValue
                    section.data(488).logicalSrcIdx = 487;
                    section.data(488).dtTransOffset = 669;

                    ;% GNC2026W_P.RED_Tz25_InitialValue
                    section.data(489).logicalSrcIdx = 488;
                    section.data(489).dtTransOffset = 670;

                    ;% GNC2026W_P.RED_Tz37_InitialValue
                    section.data(490).logicalSrcIdx = 489;
                    section.data(490).dtTransOffset = 671;

                    ;% GNC2026W_P.RED_Tz38_InitialValue
                    section.data(491).logicalSrcIdx = 490;
                    section.data(491).dtTransOffset = 672;

                    ;% GNC2026W_P.RED_Tz6_InitialValue
                    section.data(492).logicalSrcIdx = 491;
                    section.data(492).dtTransOffset = 673;

                    ;% GNC2026W_P.RED_Tz7_InitialValue
                    section.data(493).logicalSrcIdx = 492;
                    section.data(493).dtTransOffset = 674;

                    ;% GNC2026W_P.RED_Tz8_InitialValue
                    section.data(494).logicalSrcIdx = 493;
                    section.data(494).dtTransOffset = 675;

                    ;% GNC2026W_P.RED_Tz9_InitialValue
                    section.data(495).logicalSrcIdx = 494;
                    section.data(495).dtTransOffset = 676;

                    ;% GNC2026W_P.Universal_Time_InitialValue
                    section.data(496).logicalSrcIdx = 495;
                    section.data(496).dtTransOffset = 677;

                    ;% GNC2026W_P.Universal_Time1_InitialValue
                    section.data(497).logicalSrcIdx = 496;
                    section.data(497).dtTransOffset = 678;

                    ;% GNC2026W_P.Universal_Time10_InitialValue
                    section.data(498).logicalSrcIdx = 497;
                    section.data(498).dtTransOffset = 687;

                    ;% GNC2026W_P.Universal_Time11_InitialValue
                    section.data(499).logicalSrcIdx = 498;
                    section.data(499).dtTransOffset = 696;

                    ;% GNC2026W_P.Universal_Time12_InitialValue
                    section.data(500).logicalSrcIdx = 499;
                    section.data(500).dtTransOffset = 699;

                    ;% GNC2026W_P.Universal_Time13_InitialValue
                    section.data(501).logicalSrcIdx = 500;
                    section.data(501).dtTransOffset = 708;

                    ;% GNC2026W_P.Universal_Time14_InitialValue
                    section.data(502).logicalSrcIdx = 501;
                    section.data(502).dtTransOffset = 711;

                    ;% GNC2026W_P.Universal_Time15_InitialValue
                    section.data(503).logicalSrcIdx = 502;
                    section.data(503).dtTransOffset = 719;

                    ;% GNC2026W_P.Universal_Time16_InitialValue
                    section.data(504).logicalSrcIdx = 503;
                    section.data(504).dtTransOffset = 722;

                    ;% GNC2026W_P.Universal_Time17_InitialValue
                    section.data(505).logicalSrcIdx = 504;
                    section.data(505).dtTransOffset = 730;

                    ;% GNC2026W_P.Universal_Time18_InitialValue
                    section.data(506).logicalSrcIdx = 505;
                    section.data(506).dtTransOffset = 733;

                    ;% GNC2026W_P.Universal_Time19_InitialValue
                    section.data(507).logicalSrcIdx = 506;
                    section.data(507).dtTransOffset = 736;

                    ;% GNC2026W_P.Universal_Time2_InitialValue
                    section.data(508).logicalSrcIdx = 507;
                    section.data(508).dtTransOffset = 737;

                    ;% GNC2026W_P.Universal_Time20_InitialValue
                    section.data(509).logicalSrcIdx = 508;
                    section.data(509).dtTransOffset = 746;

                    ;% GNC2026W_P.Universal_Time21_InitialValue
                    section.data(510).logicalSrcIdx = 509;
                    section.data(510).dtTransOffset = 747;

                    ;% GNC2026W_P.Universal_Time22_InitialValue
                    section.data(511).logicalSrcIdx = 510;
                    section.data(511).dtTransOffset = 750;

                    ;% GNC2026W_P.Universal_Time23_InitialValue
                    section.data(512).logicalSrcIdx = 511;
                    section.data(512).dtTransOffset = 753;

                    ;% GNC2026W_P.Universal_Time24_InitialValue
                    section.data(513).logicalSrcIdx = 512;
                    section.data(513).dtTransOffset = 759;

                    ;% GNC2026W_P.Universal_Time25_InitialValue
                    section.data(514).logicalSrcIdx = 513;
                    section.data(514).dtTransOffset = 765;

                    ;% GNC2026W_P.Universal_Time26_InitialValue
                    section.data(515).logicalSrcIdx = 514;
                    section.data(515).dtTransOffset = 768;

                    ;% GNC2026W_P.Universal_Time27_InitialValue
                    section.data(516).logicalSrcIdx = 515;
                    section.data(516).dtTransOffset = 777;

                    ;% GNC2026W_P.Universal_Time28_InitialValue
                    section.data(517).logicalSrcIdx = 516;
                    section.data(517).dtTransOffset = 780;

                    ;% GNC2026W_P.Universal_Time29_InitialValue
                    section.data(518).logicalSrcIdx = 517;
                    section.data(518).dtTransOffset = 783;

                    ;% GNC2026W_P.Universal_Time3_InitialValue
                    section.data(519).logicalSrcIdx = 518;
                    section.data(519).dtTransOffset = 786;

                    ;% GNC2026W_P.Universal_Time30_InitialValue
                    section.data(520).logicalSrcIdx = 519;
                    section.data(520).dtTransOffset = 794;

                    ;% GNC2026W_P.Universal_Time31_InitialValue
                    section.data(521).logicalSrcIdx = 520;
                    section.data(521).dtTransOffset = 797;

                    ;% GNC2026W_P.Universal_Time32_InitialValue
                    section.data(522).logicalSrcIdx = 521;
                    section.data(522).dtTransOffset = 800;

                    ;% GNC2026W_P.Universal_Time33_InitialValue
                    section.data(523).logicalSrcIdx = 522;
                    section.data(523).dtTransOffset = 803;

                    ;% GNC2026W_P.Universal_Time34_InitialValue
                    section.data(524).logicalSrcIdx = 523;
                    section.data(524).dtTransOffset = 806;

                    ;% GNC2026W_P.Universal_Time35_InitialValue
                    section.data(525).logicalSrcIdx = 524;
                    section.data(525).dtTransOffset = 809;

                    ;% GNC2026W_P.Universal_Time36_InitialValue
                    section.data(526).logicalSrcIdx = 525;
                    section.data(526).dtTransOffset = 812;

                    ;% GNC2026W_P.Universal_Time37_InitialValue
                    section.data(527).logicalSrcIdx = 526;
                    section.data(527).dtTransOffset = 815;

                    ;% GNC2026W_P.Universal_Time38_InitialValue
                    section.data(528).logicalSrcIdx = 527;
                    section.data(528).dtTransOffset = 818;

                    ;% GNC2026W_P.Universal_Time4_InitialValue
                    section.data(529).logicalSrcIdx = 528;
                    section.data(529).dtTransOffset = 819;

                    ;% GNC2026W_P.Universal_Time40_InitialValue
                    section.data(530).logicalSrcIdx = 529;
                    section.data(530).dtTransOffset = 828;

                    ;% GNC2026W_P.Universal_Time41_InitialValue
                    section.data(531).logicalSrcIdx = 530;
                    section.data(531).dtTransOffset = 829;

                    ;% GNC2026W_P.Universal_Time5_InitialValue
                    section.data(532).logicalSrcIdx = 531;
                    section.data(532).dtTransOffset = 830;

                    ;% GNC2026W_P.Universal_Time6_InitialValue
                    section.data(533).logicalSrcIdx = 532;
                    section.data(533).dtTransOffset = 833;

                    ;% GNC2026W_P.Universal_Time7_InitialValue
                    section.data(534).logicalSrcIdx = 533;
                    section.data(534).dtTransOffset = 836;

                    ;% GNC2026W_P.Universal_Time8_InitialValue
                    section.data(535).logicalSrcIdx = 534;
                    section.data(535).dtTransOffset = 842;

                    ;% GNC2026W_P.Universal_Time9_InitialValue
                    section.data(536).logicalSrcIdx = 535;
                    section.data(536).dtTransOffset = 845;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 18;
            section.data(18)  = dumData; %prealloc

                    ;% GNC2026W_P.StringConstant1_String
                    section.data(1).logicalSrcIdx = 536;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.StringConstant2_String
                    section.data(2).logicalSrcIdx = 537;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.StringConstant_String
                    section.data(3).logicalSrcIdx = 538;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.StringConstant1_String_k
                    section.data(4).logicalSrcIdx = 539;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.StringConstant2_String_p
                    section.data(5).logicalSrcIdx = 540;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.StringConstant_String_b
                    section.data(6).logicalSrcIdx = 541;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.StringConstant1_String_e
                    section.data(7).logicalSrcIdx = 542;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.StringConstant2_String_e
                    section.data(8).logicalSrcIdx = 543;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.StringConstant_String_c
                    section.data(9).logicalSrcIdx = 544;
                    section.data(9).dtTransOffset = 8;

                    ;% GNC2026W_P.StringConstant1_String_j
                    section.data(10).logicalSrcIdx = 545;
                    section.data(10).dtTransOffset = 9;

                    ;% GNC2026W_P.StringConstant2_String_b
                    section.data(11).logicalSrcIdx = 546;
                    section.data(11).dtTransOffset = 10;

                    ;% GNC2026W_P.StringConstant_String_ca
                    section.data(12).logicalSrcIdx = 547;
                    section.data(12).dtTransOffset = 11;

                    ;% GNC2026W_P.StringConstant1_String_p
                    section.data(13).logicalSrcIdx = 548;
                    section.data(13).dtTransOffset = 12;

                    ;% GNC2026W_P.StringConstant2_String_l
                    section.data(14).logicalSrcIdx = 549;
                    section.data(14).dtTransOffset = 13;

                    ;% GNC2026W_P.StringConstant_String_e
                    section.data(15).logicalSrcIdx = 550;
                    section.data(15).dtTransOffset = 14;

                    ;% GNC2026W_P.RED_Tz3_InitialValue
                    section.data(16).logicalSrcIdx = 551;
                    section.data(16).dtTransOffset = 15;

                    ;% GNC2026W_P.RED_Tz4_InitialValue
                    section.data(17).logicalSrcIdx = 552;
                    section.data(17).dtTransOffset = 16;

                    ;% GNC2026W_P.RED_Tz5_InitialValue
                    section.data(18).logicalSrcIdx = 553;
                    section.data(18).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% GNC2026W_P.UDPSend1_Port
                    section.data(1).logicalSrcIdx = 554;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.UDPSend2_Port
                    section.data(2).logicalSrcIdx = 555;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.UDPSend3_Port
                    section.data(3).logicalSrcIdx = 556;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.ReceivePhaseSpaceData_Port
                    section.data(4).logicalSrcIdx = 557;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.UDPReceiveREDClock_Port
                    section.data(5).logicalSrcIdx = 558;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.UDPReceiveBLACKClock_Port
                    section.data(6).logicalSrcIdx = 559;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.UDPReceiveBLUEClock_Port
                    section.data(7).logicalSrcIdx = 560;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.UDPReceive_Port
                    section.data(8).logicalSrcIdx = 561;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.UDPReceive_Port_g
                    section.data(9).logicalSrcIdx = 562;
                    section.data(9).dtTransOffset = 8;

                    ;% GNC2026W_P.UDPSend_Port
                    section.data(10).logicalSrcIdx = 563;
                    section.data(10).dtTransOffset = 9;

                    ;% GNC2026W_P.UDPSend_Port_b
                    section.data(11).logicalSrcIdx = 564;
                    section.data(11).dtTransOffset = 10;

                    ;% GNC2026W_P.UDPSend_Port_h
                    section.data(12).logicalSrcIdx = 565;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ManualSwitch_CurrentSetting
                    section.data(1).logicalSrcIdx = 566;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeREDBehavior_h.UDPSendClock_Port
                    section.data(1).logicalSrcIdx = 567;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeBLUEBehavior_e.UDPSendClock_Port
                    section.data(1).logicalSrcIdx = 568;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeBLACKBehavior_i.UDPSendClock_Port
                    section.data(1).logicalSrcIdx = 569;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_l1.dydt_Y0
                    section.data(1).logicalSrcIdx = 570;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_l1.Constant2_Value
                    section.data(2).logicalSrcIdx = 571;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_l1.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 572;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_kh.dydt_Y0
                    section.data(1).logicalSrcIdx = 573;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_kh.Constant2_Value
                    section.data(2).logicalSrcIdx = 574;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_kh.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 575;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_d.dydt_Y0
                    section.data(1).logicalSrcIdx = 576;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_d.Constant2_Value
                    section.data(2).logicalSrcIdx = 577;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_d.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 578;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_lw.dydt_Y0
                    section.data(1).logicalSrcIdx = 579;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_lw.Constant2_Value
                    section.data(2).logicalSrcIdx = 580;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_lw.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 581;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_g.dydt_Y0
                    section.data(1).logicalSrcIdx = 582;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_g.Constant2_Value
                    section.data(2).logicalSrcIdx = 583;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_g.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 584;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_it.dydt_Y0
                    section.data(1).logicalSrcIdx = 585;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_it.Constant2_Value
                    section.data(2).logicalSrcIdx = 586;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_it.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 587;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeREDBehavior_d.UDPSendGUI_Port
                    section.data(1).logicalSrcIdx = 588;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeBLUEBehavior_f.UDPSendGUI_Port
                    section.data(1).logicalSrcIdx = 589;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeBLACKBehavior_e.UDPSendGUI_Port
                    section.data(1).logicalSrcIdx = 590;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(16) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_h.dydt_Y0
                    section.data(1).logicalSrcIdx = 591;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_h.Constant2_Value
                    section.data(2).logicalSrcIdx = 592;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_h.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 593;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(17) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_p.dydt_Y0
                    section.data(1).logicalSrcIdx = 594;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_p.Constant2_Value
                    section.data(2).logicalSrcIdx = 595;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_p.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 596;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(18) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_kx.dydt_Y0
                    section.data(1).logicalSrcIdx = 597;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_kx.Constant2_Value
                    section.data(2).logicalSrcIdx = 598;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_kx.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 599;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(19) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_l.dydt_Y0
                    section.data(1).logicalSrcIdx = 600;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_l.Constant2_Value
                    section.data(2).logicalSrcIdx = 601;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_l.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 602;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(20) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_i.dydt_Y0
                    section.data(1).logicalSrcIdx = 603;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_i.Constant2_Value
                    section.data(2).logicalSrcIdx = 604;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_i.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 605;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(21) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_k.dydt_Y0
                    section.data(1).logicalSrcIdx = 606;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_k.Constant2_Value
                    section.data(2).logicalSrcIdx = 607;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_k.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 608;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(22) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_b.dydt_Y0
                    section.data(1).logicalSrcIdx = 609;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_b.Constant2_Value
                    section.data(2).logicalSrcIdx = 610;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_b.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 611;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(23) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.EnabledSubsystem_m.dydt_Y0
                    section.data(1).logicalSrcIdx = 612;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.EnabledSubsystem_m.Constant2_Value
                    section.data(2).logicalSrcIdx = 613;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.EnabledSubsystem_m.Delay_InitialCondition
                    section.data(3).logicalSrcIdx = 614;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(24) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeREDBehavior.Constant1_Value
                    section.data(1).logicalSrcIdx = 615;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.ChangeREDBehavior.UDPSend_Port
                    section.data(2).logicalSrcIdx = 616;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(25) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeBLUEBehavior.Constant1_Value
                    section.data(1).logicalSrcIdx = 617;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.ChangeBLUEBehavior.UDPSend_Port
                    section.data(2).logicalSrcIdx = 618;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(26) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.ChangeBLACKBehavior.Constant1_Value
                    section.data(1).logicalSrcIdx = 619;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.ChangeBLACKBehavior.UDPSend_Port
                    section.data(2).logicalSrcIdx = 620;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(27) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.CustomControlARM.Zero_Value
                    section.data(1).logicalSrcIdx = 621;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(28) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.DisableThrustersBLUE.Zero_Value
                    section.data(1).logicalSrcIdx = 622;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(29) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.DisableThrustersBLACK.Zero_Value
                    section.data(1).logicalSrcIdx = 623;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(30) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_P.DisableThrustersRED.Zero_Value
                    section.data(1).logicalSrcIdx = 624;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(31) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant1_Value
                    section.data(1).logicalSrcIdx = 625;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant2_Value
                    section.data(2).logicalSrcIdx = 626;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant3_Value
                    section.data(3).logicalSrcIdx = 627;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant4_Value
                    section.data(4).logicalSrcIdx = 628;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant5_Value
                    section.data(5).logicalSrcIdx = 629;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant6_Value
                    section.data(6).logicalSrcIdx = 630;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant7_Value
                    section.data(7).logicalSrcIdx = 631;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.Phase6CleanShutdown.Constant8_Value
                    section.data(8).logicalSrcIdx = 632;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.Phase6CleanShutdown.PuckState_Value
                    section.data(9).logicalSrcIdx = 633;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(32) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase6CleanShutdown.StringConstant_String
                    section.data(1).logicalSrcIdx = 634;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase6CleanShutdown.StringConstant1_String
                    section.data(2).logicalSrcIdx = 635;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase6CleanShutdown.StringConstant2_String
                    section.data(3).logicalSrcIdx = 636;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(33) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase5HoldHome.Constant11_Value
                    section.data(1).logicalSrcIdx = 637;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase5HoldHome.Constant12_Value
                    section.data(2).logicalSrcIdx = 638;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase5HoldHome.Constant14_Value
                    section.data(3).logicalSrcIdx = 639;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.Phase5HoldHome.Constant15_Value
                    section.data(4).logicalSrcIdx = 640;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.Phase5HoldHome.Constant18_Value
                    section.data(5).logicalSrcIdx = 641;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.Phase5HoldHome.Constant4_Value
                    section.data(6).logicalSrcIdx = 642;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.Phase5HoldHome.Constant5_Value
                    section.data(7).logicalSrcIdx = 643;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.Phase5HoldHome.Constant6_Value
                    section.data(8).logicalSrcIdx = 644;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.Phase5HoldHome.Constant8_Value
                    section.data(9).logicalSrcIdx = 645;
                    section.data(9).dtTransOffset = 8;

                    ;% GNC2026W_P.Phase5HoldHome.Constant3_Value
                    section.data(10).logicalSrcIdx = 646;
                    section.data(10).dtTransOffset = 9;

                    ;% GNC2026W_P.Phase5HoldHome.Constant1_Value
                    section.data(11).logicalSrcIdx = 647;
                    section.data(11).dtTransOffset = 10;

                    ;% GNC2026W_P.Phase5HoldHome.Constant2_Value
                    section.data(12).logicalSrcIdx = 648;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(34) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase5HoldHome.StringConstant1_String
                    section.data(1).logicalSrcIdx = 649;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase5HoldHome.StringConstant2_String
                    section.data(2).logicalSrcIdx = 650;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase5HoldHome.StringConstant_String
                    section.data(3).logicalSrcIdx = 651;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(35) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase4ReturnHome.Constant11_Value
                    section.data(1).logicalSrcIdx = 652;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant12_Value
                    section.data(2).logicalSrcIdx = 653;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant14_Value
                    section.data(3).logicalSrcIdx = 654;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant15_Value
                    section.data(4).logicalSrcIdx = 655;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant18_Value
                    section.data(5).logicalSrcIdx = 656;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant4_Value
                    section.data(6).logicalSrcIdx = 657;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant5_Value
                    section.data(7).logicalSrcIdx = 658;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant6_Value
                    section.data(8).logicalSrcIdx = 659;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant8_Value
                    section.data(9).logicalSrcIdx = 660;
                    section.data(9).dtTransOffset = 8;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant3_Value
                    section.data(10).logicalSrcIdx = 661;
                    section.data(10).dtTransOffset = 9;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant1_Value
                    section.data(11).logicalSrcIdx = 662;
                    section.data(11).dtTransOffset = 10;

                    ;% GNC2026W_P.Phase4ReturnHome.Constant2_Value
                    section.data(12).logicalSrcIdx = 663;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(36) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase4ReturnHome.StringConstant1_String
                    section.data(1).logicalSrcIdx = 664;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase4ReturnHome.StringConstant2_String
                    section.data(2).logicalSrcIdx = 665;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase4ReturnHome.StringConstant_String
                    section.data(3).logicalSrcIdx = 666;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(37) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.IfActionSubsystem5.Constant_Value
                    section.data(1).logicalSrcIdx = 667;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.IfActionSubsystem5.Constant1_Value
                    section.data(2).logicalSrcIdx = 668;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(38) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.IfActionSubsystem4.Constant_Value
                    section.data(1).logicalSrcIdx = 669;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.IfActionSubsystem4.Constant1_Value
                    section.data(2).logicalSrcIdx = 670;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(39) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.IfActionSubsystem3.Constant_Value
                    section.data(1).logicalSrcIdx = 671;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.IfActionSubsystem3.Constant1_Value
                    section.data(2).logicalSrcIdx = 672;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(40) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.IfActionSubsystem2.Constant_Value
                    section.data(1).logicalSrcIdx = 673;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.IfActionSubsystem2.Constant1_Value
                    section.data(2).logicalSrcIdx = 674;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(41) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.IfActionSubsystem1.Constant_Value
                    section.data(1).logicalSrcIdx = 675;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.IfActionSubsystem1.Constant1_Value
                    section.data(2).logicalSrcIdx = 676;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(42) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_P.IfActionSubsystem_a.Constant_Value
                    section.data(1).logicalSrcIdx = 677;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.IfActionSubsystem_a.Constant1_Value
                    section.data(2).logicalSrcIdx = 678;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(43) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase1StartFloating.Constant1_Value
                    section.data(1).logicalSrcIdx = 679;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase1StartFloating.Constant2_Value
                    section.data(2).logicalSrcIdx = 680;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase1StartFloating.Constant3_Value
                    section.data(3).logicalSrcIdx = 681;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.Phase1StartFloating.Constant4_Value
                    section.data(4).logicalSrcIdx = 682;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.Phase1StartFloating.Constant5_Value
                    section.data(5).logicalSrcIdx = 683;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.Phase1StartFloating.Constant6_Value
                    section.data(6).logicalSrcIdx = 684;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.Phase1StartFloating.Constant7_Value
                    section.data(7).logicalSrcIdx = 685;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.Phase1StartFloating.Constant8_Value
                    section.data(8).logicalSrcIdx = 686;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.Phase1StartFloating.PuckState_Value
                    section.data(9).logicalSrcIdx = 687;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(44) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase1StartFloating.StringConstant_String
                    section.data(1).logicalSrcIdx = 688;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase1StartFloating.StringConstant1_String
                    section.data(2).logicalSrcIdx = 689;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase1StartFloating.StringConstant2_String
                    section.data(3).logicalSrcIdx = 690;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(45) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase0Synchronization.Constant1_Value
                    section.data(1).logicalSrcIdx = 691;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase0Synchronization.Constant2_Value
                    section.data(2).logicalSrcIdx = 692;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase0Synchronization.Constant3_Value
                    section.data(3).logicalSrcIdx = 693;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_P.Phase0Synchronization.Constant4_Value
                    section.data(4).logicalSrcIdx = 694;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_P.Phase0Synchronization.Constant5_Value
                    section.data(5).logicalSrcIdx = 695;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_P.Phase0Synchronization.Constant6_Value
                    section.data(6).logicalSrcIdx = 696;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_P.Phase0Synchronization.Constant7_Value
                    section.data(7).logicalSrcIdx = 697;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_P.Phase0Synchronization.Constant8_Value
                    section.data(8).logicalSrcIdx = 698;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_P.Phase0Synchronization.PuckState_Value
                    section.data(9).logicalSrcIdx = 699;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(46) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_P.Phase0Synchronization.StringConstant_String
                    section.data(1).logicalSrcIdx = 700;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_P.Phase0Synchronization.StringConstant1_String
                    section.data(2).logicalSrcIdx = 701;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_P.Phase0Synchronization.StringConstant2_String
                    section.data(3).logicalSrcIdx = 702;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(47) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 19;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (GNC2026W_B)
        ;%
            section.nData     = 140;
            section.data(140)  = dumData; %prealloc

                    ;% GNC2026W_B.Merge1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.Merge2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% GNC2026W_B.Merge
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% GNC2026W_B.Time_s
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 9;

                    ;% GNC2026W_B.DataStoreRead5
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 10;

                    ;% GNC2026W_B.DataStoreRead1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 13;

                    ;% GNC2026W_B.DataStoreRead6
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% GNC2026W_B.DataStoreRead7
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 25;

                    ;% GNC2026W_B.DataStoreRead8
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 28;

                    ;% GNC2026W_B.RED_Duty_Cycle
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 31;

                    ;% GNC2026W_B.RED_Control_Law_Enabler
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 39;

                    ;% GNC2026W_B.DataStoreRead3
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 40;

                    ;% GNC2026W_B.ARM_Control_Mode
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 43;

                    ;% GNC2026W_B.DataStoreRead21
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 44;

                    ;% GNC2026W_B.DataStoreRead20
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 47;

                    ;% GNC2026W_B.DataStoreRead30
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 53;

                    ;% GNC2026W_B.DataStoreRead22
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 56;

                    ;% GNC2026W_B.DataStoreRead24
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 59;

                    ;% GNC2026W_B.DataStoreRead9
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 62;

                    ;% GNC2026W_B.DataStoreRead10
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 65;

                    ;% GNC2026W_B.DataStoreRead11
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 74;

                    ;% GNC2026W_B.DataStoreRead12
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 77;

                    ;% GNC2026W_B.BLACK_Duty_Cycle
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 80;

                    ;% GNC2026W_B.BLACK_Control_Law_Enabler
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 88;

                    ;% GNC2026W_B.DataStoreRead19
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 89;

                    ;% GNC2026W_B.DataStoreRead18
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 92;

                    ;% GNC2026W_B.DataStoreRead16
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 95;

                    ;% GNC2026W_B.DataStoreRead13
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 98;

                    ;% GNC2026W_B.DataStoreRead14
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 107;

                    ;% GNC2026W_B.DataStoreRead15
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 110;

                    ;% GNC2026W_B.BLUE_Duty_Cycle
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 113;

                    ;% GNC2026W_B.BLUE_Control_Law_Enabler
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 121;

                    ;% GNC2026W_B.DataStoreRead17
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 122;

                    ;% GNC2026W_B.Float_State
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 125;

                    ;% GNC2026W_B.Platform_Identification
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 126;

                    ;% GNC2026W_B.Simulation_Flag
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 127;

                    ;% GNC2026W_B.VIS_Measured_States
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 128;

                    ;% GNC2026W_B.VIS_Confidence
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 131;

                    ;% GNC2026W_B.DataStoreRead28
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 132;

                    ;% GNC2026W_B.DataStoreRead29
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 135;

                    ;% GNC2026W_B.DataStoreRead32
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 141;

                    ;% GNC2026W_B.Desired_Separation_m
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 144;

                    ;% GNC2026W_B.sigma3
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 145;

                    ;% GNC2026W_B.isValid
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 148;

                    ;% GNC2026W_B.filterConfidence
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 149;

                    ;% GNC2026W_B.DataStoreRead36
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 150;

                    ;% GNC2026W_B.DataStoreRead38
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 153;

                    ;% GNC2026W_B.DataStoreRead39
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 156;

                    ;% GNC2026W_B.TmpSignalConversionAtUDPSendInp
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 159;

                    ;% GNC2026W_B.H_final
                    section.data(50).logicalSrcIdx = 52;
                    section.data(50).dtTransOffset = 169;

                    ;% GNC2026W_B.duty_cycles
                    section.data(51).logicalSrcIdx = 53;
                    section.data(51).dtTransOffset = 193;

                    ;% GNC2026W_B.ThrustPer_Final_h
                    section.data(52).logicalSrcIdx = 54;
                    section.data(52).dtTransOffset = 201;

                    ;% GNC2026W_B.In1
                    section.data(53).logicalSrcIdx = 55;
                    section.data(53).dtTransOffset = 209;

                    ;% GNC2026W_B.H_final_j
                    section.data(54).logicalSrcIdx = 58;
                    section.data(54).dtTransOffset = 210;

                    ;% GNC2026W_B.duty_cycles_j
                    section.data(55).logicalSrcIdx = 59;
                    section.data(55).dtTransOffset = 234;

                    ;% GNC2026W_B.ThrustPer_Final_h5
                    section.data(56).logicalSrcIdx = 61;
                    section.data(56).dtTransOffset = 242;

                    ;% GNC2026W_B.In1_g
                    section.data(57).logicalSrcIdx = 62;
                    section.data(57).dtTransOffset = 250;

                    ;% GNC2026W_B.duty_cycles_m
                    section.data(58).logicalSrcIdx = 63;
                    section.data(58).dtTransOffset = 251;

                    ;% GNC2026W_B.ThrustPer_Final_h5j
                    section.data(59).logicalSrcIdx = 64;
                    section.data(59).dtTransOffset = 259;

                    ;% GNC2026W_B.In1_g2
                    section.data(60).logicalSrcIdx = 65;
                    section.data(60).dtTransOffset = 267;

                    ;% GNC2026W_B.DataTypeConversion
                    section.data(61).logicalSrcIdx = 66;
                    section.data(61).dtTransOffset = 268;

                    ;% GNC2026W_B.DataTypeConversion1
                    section.data(62).logicalSrcIdx = 67;
                    section.data(62).dtTransOffset = 269;

                    ;% GNC2026W_B.TmpSignalConversionAtUDPSendI_o
                    section.data(63).logicalSrcIdx = 68;
                    section.data(63).dtTransOffset = 270;

                    ;% GNC2026W_B.BeginBirth
                    section.data(64).logicalSrcIdx = 69;
                    section.data(64).dtTransOffset = 272;

                    ;% GNC2026W_B.y
                    section.data(65).logicalSrcIdx = 70;
                    section.data(65).dtTransOffset = 273;

                    ;% GNC2026W_B.TmpSignalConversionAtUDPSend_og
                    section.data(66).logicalSrcIdx = 71;
                    section.data(66).dtTransOffset = 274;

                    ;% GNC2026W_B.ManualSwitch
                    section.data(67).logicalSrcIdx = 72;
                    section.data(67).dtTransOffset = 302;

                    ;% GNC2026W_B.CastToDouble
                    section.data(68).logicalSrcIdx = 73;
                    section.data(68).dtTransOffset = 303;

                    ;% GNC2026W_B.CastToDouble1
                    section.data(69).logicalSrcIdx = 74;
                    section.data(69).dtTransOffset = 304;

                    ;% GNC2026W_B.ReceivePhaseSpaceData_o1
                    section.data(70).logicalSrcIdx = 75;
                    section.data(70).dtTransOffset = 305;

                    ;% GNC2026W_B.ConvertBLAXfrommmtom
                    section.data(71).logicalSrcIdx = 76;
                    section.data(71).dtTransOffset = 324;

                    ;% GNC2026W_B.ConvertBLUXfrommmtom
                    section.data(72).logicalSrcIdx = 85;
                    section.data(72).dtTransOffset = 325;

                    ;% GNC2026W_B.ConvertREDXfrommmtom
                    section.data(73).logicalSrcIdx = 91;
                    section.data(73).dtTransOffset = 326;

                    ;% GNC2026W_B.UDPReceiveREDClock_o1
                    section.data(74).logicalSrcIdx = 97;
                    section.data(74).dtTransOffset = 327;

                    ;% GNC2026W_B.UDPReceiveBLACKClock_o1
                    section.data(75).logicalSrcIdx = 98;
                    section.data(75).dtTransOffset = 328;

                    ;% GNC2026W_B.UDPReceiveBLUEClock_o1
                    section.data(76).logicalSrcIdx = 99;
                    section.data(76).dtTransOffset = 329;

                    ;% GNC2026W_B.dy
                    section.data(77).logicalSrcIdx = 100;
                    section.data(77).dtTransOffset = 330;

                    ;% GNC2026W_B.dy_h
                    section.data(78).logicalSrcIdx = 101;
                    section.data(78).dtTransOffset = 333;

                    ;% GNC2026W_B.y2y1
                    section.data(79).logicalSrcIdx = 103;
                    section.data(79).dtTransOffset = 336;

                    ;% GNC2026W_B.dy_c
                    section.data(80).logicalSrcIdx = 104;
                    section.data(80).dtTransOffset = 337;

                    ;% GNC2026W_B.dy_d
                    section.data(81).logicalSrcIdx = 105;
                    section.data(81).dtTransOffset = 340;

                    ;% GNC2026W_B.y2y1_o
                    section.data(82).logicalSrcIdx = 107;
                    section.data(82).dtTransOffset = 343;

                    ;% GNC2026W_B.dy_p
                    section.data(83).logicalSrcIdx = 108;
                    section.data(83).dtTransOffset = 344;

                    ;% GNC2026W_B.dy_g
                    section.data(84).logicalSrcIdx = 109;
                    section.data(84).dtTransOffset = 347;

                    ;% GNC2026W_B.y_o
                    section.data(85).logicalSrcIdx = 110;
                    section.data(85).dtTransOffset = 350;

                    ;% GNC2026W_B.u_next
                    section.data(86).logicalSrcIdx = 111;
                    section.data(86).dtTransOffset = 351;

                    ;% GNC2026W_B.y_m
                    section.data(87).logicalSrcIdx = 112;
                    section.data(87).dtTransOffset = 352;

                    ;% GNC2026W_B.r_LAR_cam
                    section.data(88).logicalSrcIdx = 113;
                    section.data(88).dtTransOffset = 355;

                    ;% GNC2026W_B.r_REL
                    section.data(89).logicalSrcIdx = 114;
                    section.data(89).dtTransOffset = 358;

                    ;% GNC2026W_B.isValue
                    section.data(90).logicalSrcIdx = 115;
                    section.data(90).dtTransOffset = 361;

                    ;% GNC2026W_B.y_mo
                    section.data(91).logicalSrcIdx = 116;
                    section.data(91).dtTransOffset = 362;

                    ;% GNC2026W_B.y2y1_ob
                    section.data(92).logicalSrcIdx = 118;
                    section.data(92).dtTransOffset = 365;

                    ;% GNC2026W_B.In1_g20
                    section.data(93).logicalSrcIdx = 119;
                    section.data(93).dtTransOffset = 366;

                    ;% GNC2026W_B.Merge_k
                    section.data(94).logicalSrcIdx = 120;
                    section.data(94).dtTransOffset = 367;

                    ;% GNC2026W_B.r_T_I
                    section.data(95).logicalSrcIdx = 125;
                    section.data(95).dtTransOffset = 373;

                    ;% GNC2026W_B.Merge_d
                    section.data(96).logicalSrcIdx = 126;
                    section.data(96).dtTransOffset = 376;

                    ;% GNC2026W_B.pose_n
                    section.data(97).logicalSrcIdx = 129;
                    section.data(97).dtTransOffset = 379;

                    ;% GNC2026W_B.newMeasurement
                    section.data(98).logicalSrcIdx = 131;
                    section.data(98).dtTransOffset = 382;

                    ;% GNC2026W_B.Merge_b
                    section.data(99).logicalSrcIdx = 132;
                    section.data(99).dtTransOffset = 383;

                    ;% GNC2026W_B.r
                    section.data(100).logicalSrcIdx = 137;
                    section.data(100).dtTransOffset = 386;

                    ;% GNC2026W_B.VelocitytoPosition_e
                    section.data(101).logicalSrcIdx = 144;
                    section.data(101).dtTransOffset = 389;

                    ;% GNC2026W_B.Atan2
                    section.data(102).logicalSrcIdx = 145;
                    section.data(102).dtTransOffset = 392;

                    ;% GNC2026W_B.x_ddot
                    section.data(103).logicalSrcIdx = 146;
                    section.data(103).dtTransOffset = 393;

                    ;% GNC2026W_B.ThrustPer_Final_h5jz
                    section.data(104).logicalSrcIdx = 147;
                    section.data(104).dtTransOffset = 396;

                    ;% GNC2026W_B.In1_g20a
                    section.data(105).logicalSrcIdx = 148;
                    section.data(105).dtTransOffset = 399;

                    ;% GNC2026W_B.y2y1_ob4
                    section.data(106).logicalSrcIdx = 150;
                    section.data(106).dtTransOffset = 400;

                    ;% GNC2026W_B.dy_f
                    section.data(107).logicalSrcIdx = 151;
                    section.data(107).dtTransOffset = 401;

                    ;% GNC2026W_B.dy_j
                    section.data(108).logicalSrcIdx = 152;
                    section.data(108).dtTransOffset = 404;

                    ;% GNC2026W_B.ThrustPer_Final_h5jza
                    section.data(109).logicalSrcIdx = 158;
                    section.data(109).dtTransOffset = 407;

                    ;% GNC2026W_B.In1_g20as
                    section.data(110).logicalSrcIdx = 159;
                    section.data(110).dtTransOffset = 413;

                    ;% GNC2026W_B.y2y1_ob4j
                    section.data(111).logicalSrcIdx = 161;
                    section.data(111).dtTransOffset = 414;

                    ;% GNC2026W_B.dy_pu
                    section.data(112).logicalSrcIdx = 163;
                    section.data(112).dtTransOffset = 415;

                    ;% GNC2026W_B.dy_m
                    section.data(113).logicalSrcIdx = 165;
                    section.data(113).dtTransOffset = 418;

                    ;% GNC2026W_B.dy_dj
                    section.data(114).logicalSrcIdx = 166;
                    section.data(114).dtTransOffset = 421;

                    ;% GNC2026W_B.ThrustPer_Final_h5jzay
                    section.data(115).logicalSrcIdx = 167;
                    section.data(115).dtTransOffset = 424;

                    ;% GNC2026W_B.In1_g20asd
                    section.data(116).logicalSrcIdx = 168;
                    section.data(116).dtTransOffset = 427;

                    ;% GNC2026W_B.y2y1_ob4jq
                    section.data(117).logicalSrcIdx = 170;
                    section.data(117).dtTransOffset = 428;

                    ;% GNC2026W_B.dy_b
                    section.data(118).logicalSrcIdx = 171;
                    section.data(118).dtTransOffset = 429;

                    ;% GNC2026W_B.dy_hq
                    section.data(119).logicalSrcIdx = 172;
                    section.data(119).dtTransOffset = 432;

                    ;% GNC2026W_B.x_ddot_b
                    section.data(120).logicalSrcIdx = 173;
                    section.data(120).dtTransOffset = 435;

                    ;% GNC2026W_B.data
                    section.data(121).logicalSrcIdx = 177;
                    section.data(121).dtTransOffset = 438;

                    ;% GNC2026W_B.isValid_b
                    section.data(122).logicalSrcIdx = 178;
                    section.data(122).dtTransOffset = 441;

                    ;% GNC2026W_B.r_LAR_cam_k
                    section.data(123).logicalSrcIdx = 179;
                    section.data(123).dtTransOffset = 442;

                    ;% GNC2026W_B.x_ddot_n
                    section.data(124).logicalSrcIdx = 181;
                    section.data(124).dtTransOffset = 445;

                    ;% GNC2026W_B.ThrustPer_Final_h5jzayd
                    section.data(125).logicalSrcIdx = 182;
                    section.data(125).dtTransOffset = 448;

                    ;% GNC2026W_B.In1_g20asdt
                    section.data(126).logicalSrcIdx = 183;
                    section.data(126).dtTransOffset = 451;

                    ;% GNC2026W_B.y2y1_ob4jq5
                    section.data(127).logicalSrcIdx = 185;
                    section.data(127).dtTransOffset = 452;

                    ;% GNC2026W_B.dy_cg
                    section.data(128).logicalSrcIdx = 186;
                    section.data(128).dtTransOffset = 453;

                    ;% GNC2026W_B.dy_pi
                    section.data(129).logicalSrcIdx = 187;
                    section.data(129).dtTransOffset = 456;

                    ;% GNC2026W_B.L
                    section.data(130).logicalSrcIdx = 188;
                    section.data(130).dtTransOffset = 459;

                    ;% GNC2026W_B.Merge3
                    section.data(131).logicalSrcIdx = 190;
                    section.data(131).dtTransOffset = 460;

                    ;% GNC2026W_B.Merge4
                    section.data(132).logicalSrcIdx = 191;
                    section.data(132).dtTransOffset = 461;

                    ;% GNC2026W_B.Merge5
                    section.data(133).logicalSrcIdx = 192;
                    section.data(133).dtTransOffset = 462;

                    ;% GNC2026W_B.lambda
                    section.data(134).logicalSrcIdx = 203;
                    section.data(134).dtTransOffset = 463;

                    ;% GNC2026W_B.lambdaFirstOrder
                    section.data(135).logicalSrcIdx = 204;
                    section.data(135).dtTransOffset = 466;

                    ;% GNC2026W_B.q_des
                    section.data(136).logicalSrcIdx = 206;
                    section.data(136).dtTransOffset = 469;

                    ;% GNC2026W_B.In1_g20asdtg
                    section.data(137).logicalSrcIdx = 208;
                    section.data(137).dtTransOffset = 478;

                    ;% GNC2026W_B.DataStoreRead
                    section.data(138).logicalSrcIdx = 209;
                    section.data(138).dtTransOffset = 481;

                    ;% GNC2026W_B.cmd
                    section.data(139).logicalSrcIdx = 210;
                    section.data(139).dtTransOffset = 482;

                    ;% GNC2026W_B.BLACK_Control_Law_Enabler_j
                    section.data(140).logicalSrcIdx = 211;
                    section.data(140).dtTransOffset = 483;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.UDPReceive_o1
                    section.data(1).logicalSrcIdx = 212;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.UDPReceive_o1_a
                    section.data(2).logicalSrcIdx = 213;
                    section.data(2).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_B.StringtoASCII
                    section.data(1).logicalSrcIdx = 220;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.StringtoASCII2
                    section.data(2).logicalSrcIdx = 221;
                    section.data(2).dtTransOffset = 31;

                    ;% GNC2026W_B.StringtoASCII1
                    section.data(3).logicalSrcIdx = 222;
                    section.data(3).dtTransOffset = 62;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.ChangeREDBehavior_h.Clock1
                    section.data(1).logicalSrcIdx = 243;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.ChangeBLUEBehavior_e.Clock1
                    section.data(1).logicalSrcIdx = 244;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.ChangeBLACKBehavior_i.Clock1
                    section.data(1).logicalSrcIdx = 245;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.Pseudoinverse1_pn.Pseudoinverse1
                    section.data(1).logicalSrcIdx = 246;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.Pseudoinverse1_p.Pseudoinverse1
                    section.data(1).logicalSrcIdx = 247;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.Pseudoinverse1.Pseudoinverse1
                    section.data(1).logicalSrcIdx = 248;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_l1.Delay
                    section.data(1).logicalSrcIdx = 249;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.EnabledSubsystem_l1.ema
                    section.data(2).logicalSrcIdx = 250;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_kh.Delay
                    section.data(1).logicalSrcIdx = 251;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.EnabledSubsystem_kh.ema
                    section.data(2).logicalSrcIdx = 252;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(11) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_d.Delay
                    section.data(1).logicalSrcIdx = 253;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.EnabledSubsystem_d.ema
                    section.data(2).logicalSrcIdx = 254;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(12) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_lw.Delay
                    section.data(1).logicalSrcIdx = 255;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.EnabledSubsystem_lw.ema
                    section.data(2).logicalSrcIdx = 256;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(13) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_g.Delay
                    section.data(1).logicalSrcIdx = 257;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.EnabledSubsystem_g.ema
                    section.data(2).logicalSrcIdx = 258;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(14) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_it.Delay
                    section.data(1).logicalSrcIdx = 259;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_B.EnabledSubsystem_it.ema
                    section.data(2).logicalSrcIdx = 260;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_p.ema
                    section.data(1).logicalSrcIdx = 262;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_kx.ema
                    section.data(1).logicalSrcIdx = 263;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_k.ema
                    section.data(1).logicalSrcIdx = 266;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_B.EnabledSubsystem_m.ema
                    section.data(1).logicalSrcIdx = 268;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(19) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 182;
        sectIdxOffset = 19;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (GNC2026W_DW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.obj
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.obj_l
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.obj_d
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.obj_dk
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.obj_f
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 90;
            section.data(90)  = dumData; %prealloc

                    ;% GNC2026W_DW.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.Delay_DSTATE_k
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.Delay_DSTATE_kz
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_DW.Delay2_DSTATE
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_DW.Delay1_DSTATE
                    section.data(5).logicalSrcIdx = 9;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_DW.Delay1_DSTATE_g
                    section.data(6).logicalSrcIdx = 10;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_DW.Delay1_DSTATE_b
                    section.data(7).logicalSrcIdx = 11;
                    section.data(7).dtTransOffset = 8;

                    ;% GNC2026W_DW.Delay_DSTATE_h
                    section.data(8).logicalSrcIdx = 12;
                    section.data(8).dtTransOffset = 11;

                    ;% GNC2026W_DW.Delay1_DSTATE_f
                    section.data(9).logicalSrcIdx = 13;
                    section.data(9).dtTransOffset = 12;

                    ;% GNC2026W_DW.Delay2_DSTATE_l
                    section.data(10).logicalSrcIdx = 14;
                    section.data(10).dtTransOffset = 13;

                    ;% GNC2026W_DW.Delay1_DSTATE_l
                    section.data(11).logicalSrcIdx = 15;
                    section.data(11).dtTransOffset = 14;

                    ;% GNC2026W_DW.Delay1_DSTATE_m
                    section.data(12).logicalSrcIdx = 16;
                    section.data(12).dtTransOffset = 15;

                    ;% GNC2026W_DW.Delay1_DSTATE_lv
                    section.data(13).logicalSrcIdx = 17;
                    section.data(13).dtTransOffset = 18;

                    ;% GNC2026W_DW.Delay2_DSTATE_l0
                    section.data(14).logicalSrcIdx = 18;
                    section.data(14).dtTransOffset = 21;

                    ;% GNC2026W_DW.Delay1_DSTATE_ld
                    section.data(15).logicalSrcIdx = 19;
                    section.data(15).dtTransOffset = 22;

                    ;% GNC2026W_DW.Delay1_DSTATE_c
                    section.data(16).logicalSrcIdx = 20;
                    section.data(16).dtTransOffset = 23;

                    ;% GNC2026W_DW.Delay1_DSTATE_cq
                    section.data(17).logicalSrcIdx = 21;
                    section.data(17).dtTransOffset = 26;

                    ;% GNC2026W_DW.Delay_DSTATE_c
                    section.data(18).logicalSrcIdx = 22;
                    section.data(18).dtTransOffset = 29;

                    ;% GNC2026W_DW.Delay1_DSTATE_g0
                    section.data(19).logicalSrcIdx = 23;
                    section.data(19).dtTransOffset = 30;

                    ;% GNC2026W_DW.Delay_DSTATE_j
                    section.data(20).logicalSrcIdx = 24;
                    section.data(20).dtTransOffset = 31;

                    ;% GNC2026W_DW.Delay1_DSTATE_d
                    section.data(21).logicalSrcIdx = 25;
                    section.data(21).dtTransOffset = 32;

                    ;% GNC2026W_DW.Delay_DSTATE_b
                    section.data(22).logicalSrcIdx = 26;
                    section.data(22).dtTransOffset = 33;

                    ;% GNC2026W_DW.Delay1_DSTATE_a
                    section.data(23).logicalSrcIdx = 27;
                    section.data(23).dtTransOffset = 34;

                    ;% GNC2026W_DW.Delay_DSTATE_o
                    section.data(24).logicalSrcIdx = 28;
                    section.data(24).dtTransOffset = 35;

                    ;% GNC2026W_DW.Delay1_DSTATE_cg
                    section.data(25).logicalSrcIdx = 29;
                    section.data(25).dtTransOffset = 36;

                    ;% GNC2026W_DW.Delay2_DSTATE_h
                    section.data(26).logicalSrcIdx = 30;
                    section.data(26).dtTransOffset = 37;

                    ;% GNC2026W_DW.AccelerationtoVelocity_DSTATE
                    section.data(27).logicalSrcIdx = 31;
                    section.data(27).dtTransOffset = 38;

                    ;% GNC2026W_DW.VelocitytoPosition_DSTATE
                    section.data(28).logicalSrcIdx = 32;
                    section.data(28).dtTransOffset = 41;

                    ;% GNC2026W_DW.Delay_DSTATE_f
                    section.data(29).logicalSrcIdx = 33;
                    section.data(29).dtTransOffset = 44;

                    ;% GNC2026W_DW.Delay2_DSTATE_i
                    section.data(30).logicalSrcIdx = 34;
                    section.data(30).dtTransOffset = 45;

                    ;% GNC2026W_DW.Delay1_DSTATE_h
                    section.data(31).logicalSrcIdx = 35;
                    section.data(31).dtTransOffset = 46;

                    ;% GNC2026W_DW.Delay1_DSTATE_p
                    section.data(32).logicalSrcIdx = 36;
                    section.data(32).dtTransOffset = 47;

                    ;% GNC2026W_DW.Delay1_DSTATE_k
                    section.data(33).logicalSrcIdx = 37;
                    section.data(33).dtTransOffset = 50;

                    ;% GNC2026W_DW.UD_DSTATE
                    section.data(34).logicalSrcIdx = 38;
                    section.data(34).dtTransOffset = 53;

                    ;% GNC2026W_DW.Delay_DSTATE_p
                    section.data(35).logicalSrcIdx = 40;
                    section.data(35).dtTransOffset = 56;

                    ;% GNC2026W_DW.Delay1_DSTATE_pv
                    section.data(36).logicalSrcIdx = 41;
                    section.data(36).dtTransOffset = 57;

                    ;% GNC2026W_DW.AccelerationtoVelocity_DSTATE_g
                    section.data(37).logicalSrcIdx = 42;
                    section.data(37).dtTransOffset = 58;

                    ;% GNC2026W_DW.VelocitytoPosition_DSTATE_f
                    section.data(38).logicalSrcIdx = 43;
                    section.data(38).dtTransOffset = 61;

                    ;% GNC2026W_DW.Delay_DSTATE_l
                    section.data(39).logicalSrcIdx = 44;
                    section.data(39).dtTransOffset = 64;

                    ;% GNC2026W_DW.Delay2_DSTATE_hf
                    section.data(40).logicalSrcIdx = 45;
                    section.data(40).dtTransOffset = 65;

                    ;% GNC2026W_DW.Delay1_DSTATE_dx
                    section.data(41).logicalSrcIdx = 46;
                    section.data(41).dtTransOffset = 66;

                    ;% GNC2026W_DW.Delay1_DSTATE_hq
                    section.data(42).logicalSrcIdx = 47;
                    section.data(42).dtTransOffset = 67;

                    ;% GNC2026W_DW.Delay1_DSTATE_di
                    section.data(43).logicalSrcIdx = 48;
                    section.data(43).dtTransOffset = 70;

                    ;% GNC2026W_DW.UD_DSTATE_f
                    section.data(44).logicalSrcIdx = 49;
                    section.data(44).dtTransOffset = 73;

                    ;% GNC2026W_DW.AccelerationtoVelocity_DSTAT_gw
                    section.data(45).logicalSrcIdx = 51;
                    section.data(45).dtTransOffset = 76;

                    ;% GNC2026W_DW.VelocitytoPosition_DSTATE_e
                    section.data(46).logicalSrcIdx = 52;
                    section.data(46).dtTransOffset = 79;

                    ;% GNC2026W_DW.Delay_DSTATE_n
                    section.data(47).logicalSrcIdx = 53;
                    section.data(47).dtTransOffset = 82;

                    ;% GNC2026W_DW.Delay2_DSTATE_hi
                    section.data(48).logicalSrcIdx = 54;
                    section.data(48).dtTransOffset = 83;

                    ;% GNC2026W_DW.Delay1_DSTATE_k3
                    section.data(49).logicalSrcIdx = 55;
                    section.data(49).dtTransOffset = 84;

                    ;% GNC2026W_DW.Delay1_DSTATE_dim
                    section.data(50).logicalSrcIdx = 56;
                    section.data(50).dtTransOffset = 85;

                    ;% GNC2026W_DW.Delay1_DSTATE_ft
                    section.data(51).logicalSrcIdx = 57;
                    section.data(51).dtTransOffset = 88;

                    ;% GNC2026W_DW.UD_DSTATE_p
                    section.data(52).logicalSrcIdx = 58;
                    section.data(52).dtTransOffset = 91;

                    ;% GNC2026W_DW.Delay_DSTATE_fb
                    section.data(53).logicalSrcIdx = 60;
                    section.data(53).dtTransOffset = 94;

                    ;% GNC2026W_DW.VelocitytoPosition_DSTATE_ff
                    section.data(54).logicalSrcIdx = 61;
                    section.data(54).dtTransOffset = 106;

                    ;% GNC2026W_DW.Delay_DSTATE_g
                    section.data(55).logicalSrcIdx = 62;
                    section.data(55).dtTransOffset = 112;

                    ;% GNC2026W_DW.Delay2_DSTATE_n
                    section.data(56).logicalSrcIdx = 63;
                    section.data(56).dtTransOffset = 113;

                    ;% GNC2026W_DW.Delay1_DSTATE_e
                    section.data(57).logicalSrcIdx = 64;
                    section.data(57).dtTransOffset = 114;

                    ;% GNC2026W_DW.Delay1_DSTATE_ff
                    section.data(58).logicalSrcIdx = 65;
                    section.data(58).dtTransOffset = 115;

                    ;% GNC2026W_DW.Delay1_DSTATE_a1
                    section.data(59).logicalSrcIdx = 66;
                    section.data(59).dtTransOffset = 118;

                    ;% GNC2026W_DW.Delay1_DSTATE_bc
                    section.data(60).logicalSrcIdx = 67;
                    section.data(60).dtTransOffset = 121;

                    ;% GNC2026W_DW.UD_DSTATE_l
                    section.data(61).logicalSrcIdx = 69;
                    section.data(61).dtTransOffset = 124;

                    ;% GNC2026W_DW.AccelerationtoVelocity_DSTATE_c
                    section.data(62).logicalSrcIdx = 71;
                    section.data(62).dtTransOffset = 127;

                    ;% GNC2026W_DW.Delay_DSTATE_bq
                    section.data(63).logicalSrcIdx = 72;
                    section.data(63).dtTransOffset = 133;

                    ;% GNC2026W_DW.UD_DSTATE_d
                    section.data(64).logicalSrcIdx = 73;
                    section.data(64).dtTransOffset = 136;

                    ;% GNC2026W_DW.UD_DSTATE_el
                    section.data(65).logicalSrcIdx = 74;
                    section.data(65).dtTransOffset = 137;

                    ;% GNC2026W_DW.UD_DSTATE_aa
                    section.data(66).logicalSrcIdx = 75;
                    section.data(66).dtTransOffset = 138;

                    ;% GNC2026W_DW.UD_DSTATE_ld
                    section.data(67).logicalSrcIdx = 76;
                    section.data(67).dtTransOffset = 139;

                    ;% GNC2026W_DW.UD_DSTATE_k
                    section.data(68).logicalSrcIdx = 77;
                    section.data(68).dtTransOffset = 140;

                    ;% GNC2026W_DW.UD_DSTATE_h
                    section.data(69).logicalSrcIdx = 78;
                    section.data(69).dtTransOffset = 141;

                    ;% GNC2026W_DW.UD_DSTATE_o
                    section.data(70).logicalSrcIdx = 79;
                    section.data(70).dtTransOffset = 142;

                    ;% GNC2026W_DW.UD_DSTATE_n
                    section.data(71).logicalSrcIdx = 80;
                    section.data(71).dtTransOffset = 143;

                    ;% GNC2026W_DW.UD_DSTATE_hu
                    section.data(72).logicalSrcIdx = 81;
                    section.data(72).dtTransOffset = 144;

                    ;% GNC2026W_DW.UD_DSTATE_j
                    section.data(73).logicalSrcIdx = 82;
                    section.data(73).dtTransOffset = 145;

                    ;% GNC2026W_DW.UD_DSTATE_c
                    section.data(74).logicalSrcIdx = 83;
                    section.data(74).dtTransOffset = 146;

                    ;% GNC2026W_DW.UD_DSTATE_dk
                    section.data(75).logicalSrcIdx = 84;
                    section.data(75).dtTransOffset = 147;

                    ;% GNC2026W_DW.UD_DSTATE_eh
                    section.data(76).logicalSrcIdx = 85;
                    section.data(76).dtTransOffset = 148;

                    ;% GNC2026W_DW.UD_DSTATE_hv
                    section.data(77).logicalSrcIdx = 86;
                    section.data(77).dtTransOffset = 149;

                    ;% GNC2026W_DW.UD_DSTATE_kv
                    section.data(78).logicalSrcIdx = 87;
                    section.data(78).dtTransOffset = 150;

                    ;% GNC2026W_DW.Delay_DSTATE_lx
                    section.data(79).logicalSrcIdx = 88;
                    section.data(79).dtTransOffset = 151;

                    ;% GNC2026W_DW.Delay1_DSTATE_ba
                    section.data(80).logicalSrcIdx = 89;
                    section.data(80).dtTransOffset = 152;

                    ;% GNC2026W_DW.Delay_DSTATE_c5
                    section.data(81).logicalSrcIdx = 90;
                    section.data(81).dtTransOffset = 153;

                    ;% GNC2026W_DW.Delay1_DSTATE_ag
                    section.data(82).logicalSrcIdx = 91;
                    section.data(82).dtTransOffset = 154;

                    ;% GNC2026W_DW.UD_DSTATE_aq
                    section.data(83).logicalSrcIdx = 92;
                    section.data(83).dtTransOffset = 155;

                    ;% GNC2026W_DW.UD_DSTATE_pr
                    section.data(84).logicalSrcIdx = 93;
                    section.data(84).dtTransOffset = 156;

                    ;% GNC2026W_DW.UD_DSTATE_prk
                    section.data(85).logicalSrcIdx = 94;
                    section.data(85).dtTransOffset = 157;

                    ;% GNC2026W_DW.UD_DSTATE_eg
                    section.data(86).logicalSrcIdx = 95;
                    section.data(86).dtTransOffset = 158;

                    ;% GNC2026W_DW.UD_DSTATE_cd
                    section.data(87).logicalSrcIdx = 96;
                    section.data(87).dtTransOffset = 159;

                    ;% GNC2026W_DW.UD_DSTATE_hd
                    section.data(88).logicalSrcIdx = 97;
                    section.data(88).dtTransOffset = 160;

                    ;% GNC2026W_DW.Delay_DSTATE_h0
                    section.data(89).logicalSrcIdx = 98;
                    section.data(89).dtTransOffset = 161;

                    ;% GNC2026W_DW.Delay1_DSTATE_lo
                    section.data(90).logicalSrcIdx = 99;
                    section.data(90).dtTransOffset = 162;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.q
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 90;
            section.data(90)  = dumData; %prealloc

                    ;% GNC2026W_DW.NextOutput
                    section.data(1).logicalSrcIdx = 102;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.UDPSend_NetworkLib
                    section.data(2).logicalSrcIdx = 103;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.L0
                    section.data(3).logicalSrcIdx = 104;
                    section.data(3).dtTransOffset = 138;

                    ;% GNC2026W_DW.RED_desired
                    section.data(4).logicalSrcIdx = 105;
                    section.data(4).dtTransOffset = 139;

                    ;% GNC2026W_DW.LOS_Angle
                    section.data(5).logicalSrcIdx = 106;
                    section.data(5).dtTransOffset = 148;

                    ;% GNC2026W_DW.lambda
                    section.data(6).logicalSrcIdx = 107;
                    section.data(6).dtTransOffset = 149;

                    ;% GNC2026W_DW.lambdaFirstOrder
                    section.data(7).logicalSrcIdx = 108;
                    section.data(7).dtTransOffset = 152;

                    ;% GNC2026W_DW.ARM_Joint_Angles_rad
                    section.data(8).logicalSrcIdx = 110;
                    section.data(8).dtTransOffset = 155;

                    ;% GNC2026W_DW.BLUE_Control_Law_Enabler
                    section.data(9).logicalSrcIdx = 113;
                    section.data(9).dtTransOffset = 158;

                    ;% GNC2026W_DW.ARM_Control_Mode
                    section.data(10).logicalSrcIdx = 115;
                    section.data(10).dtTransOffset = 159;

                    ;% GNC2026W_DW.BLUE_Path_Planner_Selection
                    section.data(11).logicalSrcIdx = 116;
                    section.data(11).dtTransOffset = 160;

                    ;% GNC2026W_DW.RED_Control_Law_Enabler
                    section.data(12).logicalSrcIdx = 117;
                    section.data(12).dtTransOffset = 161;

                    ;% GNC2026W_DW.RED_Path_Planner_Selection
                    section.data(13).logicalSrcIdx = 118;
                    section.data(13).dtTransOffset = 162;

                    ;% GNC2026W_DW.ARM_Path_Planner_Selection
                    section.data(14).logicalSrcIdx = 119;
                    section.data(14).dtTransOffset = 163;

                    ;% GNC2026W_DW.ARM_Control_Law_Enabler
                    section.data(15).logicalSrcIdx = 120;
                    section.data(15).dtTransOffset = 164;

                    ;% GNC2026W_DW.Float_State
                    section.data(16).logicalSrcIdx = 122;
                    section.data(16).dtTransOffset = 165;

                    ;% GNC2026W_DW.BLACK_Control_Law_Enabler
                    section.data(17).logicalSrcIdx = 123;
                    section.data(17).dtTransOffset = 166;

                    ;% GNC2026W_DW.BLACK_Path_Planner_Selection
                    section.data(18).logicalSrcIdx = 124;
                    section.data(18).dtTransOffset = 167;

                    ;% GNC2026W_DW.Univ_Time
                    section.data(19).logicalSrcIdx = 125;
                    section.data(19).dtTransOffset = 168;

                    ;% GNC2026W_DW.BLACK_Measured_States
                    section.data(20).logicalSrcIdx = 127;
                    section.data(20).dtTransOffset = 169;

                    ;% GNC2026W_DW.BLUE_Desired_States
                    section.data(21).logicalSrcIdx = 130;
                    section.data(21).dtTransOffset = 178;

                    ;% GNC2026W_DW.BLUE_Duty_Cycles
                    section.data(22).logicalSrcIdx = 131;
                    section.data(22).dtTransOffset = 181;

                    ;% GNC2026W_DW.BLACK_Saturated_Controls
                    section.data(23).logicalSrcIdx = 132;
                    section.data(23).dtTransOffset = 189;

                    ;% GNC2026W_DW.RED_Duty_Cycle
                    section.data(24).logicalSrcIdx = 133;
                    section.data(24).dtTransOffset = 192;

                    ;% GNC2026W_DW.WhoAmI
                    section.data(25).logicalSrcIdx = 136;
                    section.data(25).dtTransOffset = 200;

                    ;% GNC2026W_DW.isSim
                    section.data(26).logicalSrcIdx = 138;
                    section.data(26).dtTransOffset = 201;

                    ;% GNC2026W_DW.BLACK_CV_States
                    section.data(27).logicalSrcIdx = 139;
                    section.data(27).dtTransOffset = 202;

                    ;% GNC2026W_DW.VIS_Measured_States
                    section.data(28).logicalSrcIdx = 140;
                    section.data(28).dtTransOffset = 205;

                    ;% GNC2026W_DW.BLACK_Filtered_States
                    section.data(29).logicalSrcIdx = 141;
                    section.data(29).dtTransOffset = 208;

                    ;% GNC2026W_DW.ARM_Measured_States
                    section.data(30).logicalSrcIdx = 142;
                    section.data(30).dtTransOffset = 214;

                    ;% GNC2026W_DW.BLACK_Desired_States
                    section.data(31).logicalSrcIdx = 143;
                    section.data(31).dtTransOffset = 220;

                    ;% GNC2026W_DW.RED_Measured_States
                    section.data(32).logicalSrcIdx = 144;
                    section.data(32).dtTransOffset = 223;

                    ;% GNC2026W_DW.RED_Saturated_Controls
                    section.data(33).logicalSrcIdx = 146;
                    section.data(33).dtTransOffset = 232;

                    ;% GNC2026W_DW.RED_Desired_States
                    section.data(34).logicalSrcIdx = 147;
                    section.data(34).dtTransOffset = 235;

                    ;% GNC2026W_DW.BLACK_Duty_Cycles
                    section.data(35).logicalSrcIdx = 148;
                    section.data(35).dtTransOffset = 238;

                    ;% GNC2026W_DW.RED_IMU_Measurements
                    section.data(36).logicalSrcIdx = 150;
                    section.data(36).dtTransOffset = 246;

                    ;% GNC2026W_DW.BLACK_IMU_Measurements
                    section.data(37).logicalSrcIdx = 152;
                    section.data(37).dtTransOffset = 249;

                    ;% GNC2026W_DW.BLUE_IMU_Measurements
                    section.data(38).logicalSrcIdx = 153;
                    section.data(38).dtTransOffset = 252;

                    ;% GNC2026W_DW.VIS_LAR_States
                    section.data(39).logicalSrcIdx = 155;
                    section.data(39).dtTransOffset = 255;

                    ;% GNC2026W_DW.sigma3
                    section.data(40).logicalSrcIdx = 156;
                    section.data(40).dtTransOffset = 258;

                    ;% GNC2026W_DW.isValid
                    section.data(41).logicalSrcIdx = 157;
                    section.data(41).dtTransOffset = 261;

                    ;% GNC2026W_DW.BLUE_Measured_States
                    section.data(42).logicalSrcIdx = 158;
                    section.data(42).dtTransOffset = 262;

                    ;% GNC2026W_DW.filterConfidence
                    section.data(43).logicalSrcIdx = 159;
                    section.data(43).dtTransOffset = 271;

                    ;% GNC2026W_DW.ARM_Grab_Complete
                    section.data(44).logicalSrcIdx = 160;
                    section.data(44).dtTransOffset = 272;

                    ;% GNC2026W_DW.BLUE_Saturated_Controls
                    section.data(45).logicalSrcIdx = 162;
                    section.data(45).dtTransOffset = 273;

                    ;% GNC2026W_DW.ARM_Desired_States
                    section.data(46).logicalSrcIdx = 164;
                    section.data(46).dtTransOffset = 276;

                    ;% GNC2026W_DW.VIS_Confidence
                    section.data(47).logicalSrcIdx = 165;
                    section.data(47).dtTransOffset = 279;

                    ;% GNC2026W_DW.UDPSend_NetworkLib_f
                    section.data(48).logicalSrcIdx = 166;
                    section.data(48).dtTransOffset = 280;

                    ;% GNC2026W_DW.set
                    section.data(49).logicalSrcIdx = 167;
                    section.data(49).dtTransOffset = 417;

                    ;% GNC2026W_DW.UDPSend_NetworkLib_m
                    section.data(50).logicalSrcIdx = 168;
                    section.data(50).dtTransOffset = 418;

                    ;% GNC2026W_DW.UDPReceive_NetworkLib
                    section.data(51).logicalSrcIdx = 169;
                    section.data(51).dtTransOffset = 555;

                    ;% GNC2026W_DW.UDPReceive_NetworkLib_i
                    section.data(52).logicalSrcIdx = 170;
                    section.data(52).dtTransOffset = 692;

                    ;% GNC2026W_DW.ReceivePhaseSpaceData_NetworkLi
                    section.data(53).logicalSrcIdx = 171;
                    section.data(53).dtTransOffset = 829;

                    ;% GNC2026W_DW.UDPReceiveREDClock_NetworkLib
                    section.data(54).logicalSrcIdx = 172;
                    section.data(54).dtTransOffset = 966;

                    ;% GNC2026W_DW.UDPReceiveBLACKClock_NetworkLib
                    section.data(55).logicalSrcIdx = 173;
                    section.data(55).dtTransOffset = 1103;

                    ;% GNC2026W_DW.UDPReceiveBLUEClock_NetworkLib
                    section.data(56).logicalSrcIdx = 174;
                    section.data(56).dtTransOffset = 1240;

                    ;% GNC2026W_DW.k
                    section.data(57).logicalSrcIdx = 175;
                    section.data(57).dtTransOffset = 1377;

                    ;% GNC2026W_DW.y_hold
                    section.data(58).logicalSrcIdx = 176;
                    section.data(58).dtTransOffset = 1378;

                    ;% GNC2026W_DW.k_h
                    section.data(59).logicalSrcIdx = 177;
                    section.data(59).dtTransOffset = 1381;

                    ;% GNC2026W_DW.x
                    section.data(60).logicalSrcIdx = 178;
                    section.data(60).dtTransOffset = 1382;

                    ;% GNC2026W_DW.P
                    section.data(61).logicalSrcIdx = 179;
                    section.data(61).dtTransOffset = 1388;

                    ;% GNC2026W_DW.theta
                    section.data(62).logicalSrcIdx = 180;
                    section.data(62).dtTransOffset = 1424;

                    ;% GNC2026W_DW.theta_prev
                    section.data(63).logicalSrcIdx = 181;
                    section.data(63).dtTransOffset = 1425;

                    ;% GNC2026W_DW.x_b
                    section.data(64).logicalSrcIdx = 182;
                    section.data(64).dtTransOffset = 1426;

                    ;% GNC2026W_DW.P_j
                    section.data(65).logicalSrcIdx = 183;
                    section.data(65).dtTransOffset = 1431;

                    ;% GNC2026W_DW.theta_prev_j
                    section.data(66).logicalSrcIdx = 184;
                    section.data(66).dtTransOffset = 1467;

                    ;% GNC2026W_DW.theta_cont
                    section.data(67).logicalSrcIdx = 185;
                    section.data(67).dtTransOffset = 1468;

                    ;% GNC2026W_DW.k_j
                    section.data(68).logicalSrcIdx = 186;
                    section.data(68).dtTransOffset = 1469;

                    ;% GNC2026W_DW.converge
                    section.data(69).logicalSrcIdx = 187;
                    section.data(69).dtTransOffset = 1470;

                    ;% GNC2026W_DW.x_h
                    section.data(70).logicalSrcIdx = 188;
                    section.data(70).dtTransOffset = 1471;

                    ;% GNC2026W_DW.P_g
                    section.data(71).logicalSrcIdx = 189;
                    section.data(71).dtTransOffset = 1477;

                    ;% GNC2026W_DW.k_f
                    section.data(72).logicalSrcIdx = 190;
                    section.data(72).dtTransOffset = 1513;

                    ;% GNC2026W_DW.NextOutput_f
                    section.data(73).logicalSrcIdx = 191;
                    section.data(73).dtTransOffset = 1514;

                    ;% GNC2026W_DW.NextOutput_m
                    section.data(74).logicalSrcIdx = 192;
                    section.data(74).dtTransOffset = 1515;

                    ;% GNC2026W_DW.NextOutput_a
                    section.data(75).logicalSrcIdx = 193;
                    section.data(75).dtTransOffset = 1516;

                    ;% GNC2026W_DW.NextOutput_p
                    section.data(76).logicalSrcIdx = 194;
                    section.data(76).dtTransOffset = 1517;

                    ;% GNC2026W_DW.k_g
                    section.data(77).logicalSrcIdx = 195;
                    section.data(77).dtTransOffset = 1518;

                    ;% GNC2026W_DW.y_hold_i
                    section.data(78).logicalSrcIdx = 196;
                    section.data(78).dtTransOffset = 1519;

                    ;% GNC2026W_DW.k_hf
                    section.data(79).logicalSrcIdx = 197;
                    section.data(79).dtTransOffset = 1522;

                    ;% GNC2026W_DW.UDPSend3_NetworkLib
                    section.data(80).logicalSrcIdx = 198;
                    section.data(80).dtTransOffset = 1523;

                    ;% GNC2026W_DW.UDPSend2_NetworkLib
                    section.data(81).logicalSrcIdx = 199;
                    section.data(81).dtTransOffset = 1660;

                    ;% GNC2026W_DW.UDPSend1_NetworkLib
                    section.data(82).logicalSrcIdx = 200;
                    section.data(82).dtTransOffset = 1797;

                    ;% GNC2026W_DW.l1
                    section.data(83).logicalSrcIdx = 201;
                    section.data(83).dtTransOffset = 1934;

                    ;% GNC2026W_DW.l2
                    section.data(84).logicalSrcIdx = 202;
                    section.data(84).dtTransOffset = 1935;

                    ;% GNC2026W_DW.x_l
                    section.data(85).logicalSrcIdx = 203;
                    section.data(85).dtTransOffset = 1936;

                    ;% GNC2026W_DW.P_l
                    section.data(86).logicalSrcIdx = 204;
                    section.data(86).dtTransOffset = 1939;

                    ;% GNC2026W_DW.counter
                    section.data(87).logicalSrcIdx = 205;
                    section.data(87).dtTransOffset = 1948;

                    ;% GNC2026W_DW.firstfit
                    section.data(88).logicalSrcIdx = 206;
                    section.data(88).dtTransOffset = 1949;

                    ;% GNC2026W_DW.prev
                    section.data(89).logicalSrcIdx = 207;
                    section.data(89).dtTransOffset = 1950;

                    ;% GNC2026W_DW.phase
                    section.data(90).logicalSrcIdx = 208;
                    section.data(90).dtTransOffset = 1951;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.RED_Logger
                    section.data(1).logicalSrcIdx = 209;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.BLACK_Logger
                    section.data(1).logicalSrcIdx = 210;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.BLUE_Logger
                    section.data(1).logicalSrcIdx = 211;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.obj_fv
                    section.data(1).logicalSrcIdx = 212;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 29;
            section.data(29)  = dumData; %prealloc

                    ;% GNC2026W_DW.Scope_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 213;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.Scope1_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 214;
                    section.data(2).dtTransOffset = 2;

                    ;% GNC2026W_DW.Scope2_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 215;
                    section.data(3).dtTransOffset = 3;

                    ;% GNC2026W_DW.Scope4_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 216;
                    section.data(4).dtTransOffset = 4;

                    ;% GNC2026W_DW.Scope5_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 217;
                    section.data(5).dtTransOffset = 5;

                    ;% GNC2026W_DW.Scope1_PWORK_g.LoggedData
                    section.data(6).logicalSrcIdx = 218;
                    section.data(6).dtTransOffset = 6;

                    ;% GNC2026W_DW.Scope_PWORK_h.LoggedData
                    section.data(7).logicalSrcIdx = 219;
                    section.data(7).dtTransOffset = 7;

                    ;% GNC2026W_DW.Scope1_PWORK_b.LoggedData
                    section.data(8).logicalSrcIdx = 220;
                    section.data(8).dtTransOffset = 8;

                    ;% GNC2026W_DW.Scope2_PWORK_i.LoggedData
                    section.data(9).logicalSrcIdx = 221;
                    section.data(9).dtTransOffset = 9;

                    ;% GNC2026W_DW.Scope3_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 222;
                    section.data(10).dtTransOffset = 10;

                    ;% GNC2026W_DW.Scope4_PWORK_m.LoggedData
                    section.data(11).logicalSrcIdx = 223;
                    section.data(11).dtTransOffset = 11;

                    ;% GNC2026W_DW.Scope_PWORK_k.LoggedData
                    section.data(12).logicalSrcIdx = 224;
                    section.data(12).dtTransOffset = 12;

                    ;% GNC2026W_DW.Scope1_PWORK_o.LoggedData
                    section.data(13).logicalSrcIdx = 225;
                    section.data(13).dtTransOffset = 13;

                    ;% GNC2026W_DW.Scope_PWORK_j.LoggedData
                    section.data(14).logicalSrcIdx = 226;
                    section.data(14).dtTransOffset = 14;

                    ;% GNC2026W_DW.Scope_PWORK_l.LoggedData
                    section.data(15).logicalSrcIdx = 227;
                    section.data(15).dtTransOffset = 15;

                    ;% GNC2026W_DW.Scope1_PWORK_f.LoggedData
                    section.data(16).logicalSrcIdx = 228;
                    section.data(16).dtTransOffset = 16;

                    ;% GNC2026W_DW.Scope3_PWORK_e.LoggedData
                    section.data(17).logicalSrcIdx = 229;
                    section.data(17).dtTransOffset = 17;

                    ;% GNC2026W_DW.Scope_PWORK_m.LoggedData
                    section.data(18).logicalSrcIdx = 230;
                    section.data(18).dtTransOffset = 18;

                    ;% GNC2026W_DW.Scope2_PWORK_it.LoggedData
                    section.data(19).logicalSrcIdx = 231;
                    section.data(19).dtTransOffset = 19;

                    ;% GNC2026W_DW.Scope3_PWORK_p.LoggedData
                    section.data(20).logicalSrcIdx = 232;
                    section.data(20).dtTransOffset = 20;

                    ;% GNC2026W_DW.Red_fromdyn_PWORK.LoggedData
                    section.data(21).logicalSrcIdx = 233;
                    section.data(21).dtTransOffset = 21;

                    ;% GNC2026W_DW.Scope_PWORK_kw.LoggedData
                    section.data(22).logicalSrcIdx = 234;
                    section.data(22).dtTransOffset = 22;

                    ;% GNC2026W_DW.Scope_PWORK_e.LoggedData
                    section.data(23).logicalSrcIdx = 235;
                    section.data(23).dtTransOffset = 23;

                    ;% GNC2026W_DW.Scope_PWORK_b.LoggedData
                    section.data(24).logicalSrcIdx = 236;
                    section.data(24).dtTransOffset = 24;

                    ;% GNC2026W_DW.Scope1_PWORK_a.LoggedData
                    section.data(25).logicalSrcIdx = 237;
                    section.data(25).dtTransOffset = 25;

                    ;% GNC2026W_DW.Scope_PWORK_o.LoggedData
                    section.data(26).logicalSrcIdx = 238;
                    section.data(26).dtTransOffset = 26;

                    ;% GNC2026W_DW.Scope_PWORK_em.LoggedData
                    section.data(27).logicalSrcIdx = 239;
                    section.data(27).dtTransOffset = 27;

                    ;% GNC2026W_DW.Scope_PWORK_c.LoggedData
                    section.data(28).logicalSrcIdx = 240;
                    section.data(28).dtTransOffset = 28;

                    ;% GNC2026W_DW.Scope1_PWORK_h.LoggedData
                    section.data(29).logicalSrcIdx = 241;
                    section.data(29).dtTransOffset = 29;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% GNC2026W_DW.RandSeed
                    section.data(1).logicalSrcIdx = 279;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.method
                    section.data(2).logicalSrcIdx = 280;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.state
                    section.data(3).logicalSrcIdx = 281;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_DW.state_j
                    section.data(4).logicalSrcIdx = 282;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_DW.state_k
                    section.data(5).logicalSrcIdx = 283;
                    section.data(5).dtTransOffset = 5;

                    ;% GNC2026W_DW.RandSeed_a
                    section.data(6).logicalSrcIdx = 284;
                    section.data(6).dtTransOffset = 630;

                    ;% GNC2026W_DW.RandSeed_o
                    section.data(7).logicalSrcIdx = 285;
                    section.data(7).dtTransOffset = 631;

                    ;% GNC2026W_DW.RandSeed_m
                    section.data(8).logicalSrcIdx = 286;
                    section.data(8).dtTransOffset = 632;

                    ;% GNC2026W_DW.RandSeed_e
                    section.data(9).logicalSrcIdx = 287;
                    section.data(9).dtTransOffset = 633;

                    ;% GNC2026W_DW.method_b
                    section.data(10).logicalSrcIdx = 288;
                    section.data(10).dtTransOffset = 634;

                    ;% GNC2026W_DW.state_e
                    section.data(11).logicalSrcIdx = 289;
                    section.data(11).dtTransOffset = 635;

                    ;% GNC2026W_DW.state_a
                    section.data(12).logicalSrcIdx = 290;
                    section.data(12).dtTransOffset = 636;

                    ;% GNC2026W_DW.state_kg
                    section.data(13).logicalSrcIdx = 291;
                    section.data(13).dtTransOffset = 638;

                    ;% GNC2026W_DW.method_e
                    section.data(14).logicalSrcIdx = 293;
                    section.data(14).dtTransOffset = 1263;

                    ;% GNC2026W_DW.state_d
                    section.data(15).logicalSrcIdx = 294;
                    section.data(15).dtTransOffset = 1264;

                    ;% GNC2026W_DW.state_jw
                    section.data(16).logicalSrcIdx = 295;
                    section.data(16).dtTransOffset = 1889;

                    ;% GNC2026W_DW.state_b
                    section.data(17).logicalSrcIdx = 296;
                    section.data(17).dtTransOffset = 1891;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 84;
            section.data(84)  = dumData; %prealloc

                    ;% GNC2026W_DW.Ifperforminganexperimentgrabthe
                    section.data(1).logicalSrcIdx = 303;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.ThisIFblockdetermineswhetherorn
                    section.data(2).logicalSrcIdx = 306;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.ThisIFblockdetermineswhethero_b
                    section.data(3).logicalSrcIdx = 307;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_DW.ThisIFblockdetermineswhethero_c
                    section.data(4).logicalSrcIdx = 308;
                    section.data(4).dtTransOffset = 3;

                    ;% GNC2026W_DW.ChangeREDBehavior_SubsysRanBC
                    section.data(5).logicalSrcIdx = 309;
                    section.data(5).dtTransOffset = 4;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanBC
                    section.data(6).logicalSrcIdx = 310;
                    section.data(6).dtTransOffset = 5;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC
                    section.data(7).logicalSrcIdx = 311;
                    section.data(7).dtTransOffset = 6;

                    ;% GNC2026W_DW.ChangeBLUEBehavior_SubsysRanBC
                    section.data(8).logicalSrcIdx = 312;
                    section.data(8).dtTransOffset = 7;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_b
                    section.data(9).logicalSrcIdx = 313;
                    section.data(9).dtTransOffset = 8;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_c
                    section.data(10).logicalSrcIdx = 314;
                    section.data(10).dtTransOffset = 9;

                    ;% GNC2026W_DW.ChangeBLACKBehavior_SubsysRanBC
                    section.data(11).logicalSrcIdx = 315;
                    section.data(11).dtTransOffset = 10;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_m
                    section.data(12).logicalSrcIdx = 316;
                    section.data(12).dtTransOffset = 11;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_m
                    section.data(13).logicalSrcIdx = 317;
                    section.data(13).dtTransOffset = 12;

                    ;% GNC2026W_DW.SENDROBUDP_SubsysRanBC
                    section.data(14).logicalSrcIdx = 318;
                    section.data(14).dtTransOffset = 13;

                    ;% GNC2026W_DW.Subsystem_SubsysRanBC
                    section.data(15).logicalSrcIdx = 319;
                    section.data(15).dtTransOffset = 14;

                    ;% GNC2026W_DW.ChangeARMBehavior_SubsysRanBC
                    section.data(16).logicalSrcIdx = 320;
                    section.data(16).dtTransOffset = 15;

                    ;% GNC2026W_DW.SimulatedFlag_SubsysRanBC
                    section.data(17).logicalSrcIdx = 321;
                    section.data(17).dtTransOffset = 16;

                    ;% GNC2026W_DW.ROBUDP_SubsysRanBC
                    section.data(18).logicalSrcIdx = 322;
                    section.data(18).dtTransOffset = 17;

                    ;% GNC2026W_DW.CVUDP_SubsysRanBC
                    section.data(19).logicalSrcIdx = 323;
                    section.data(19).dtTransOffset = 18;

                    ;% GNC2026W_DW.ReadingisValid_SubsysRanBC
                    section.data(20).logicalSrcIdx = 324;
                    section.data(20).dtTransOffset = 19;

                    ;% GNC2026W_DW.Subsystem_SubsysRanBC_d
                    section.data(21).logicalSrcIdx = 325;
                    section.data(21).dtTransOffset = 20;

                    ;% GNC2026W_DW.InitializeUniversalTimeSimulati
                    section.data(22).logicalSrcIdx = 326;
                    section.data(22).dtTransOffset = 21;

                    ;% GNC2026W_DW.UseHardwaretoObtainStates_Subsy
                    section.data(23).logicalSrcIdx = 327;
                    section.data(23).dtTransOffset = 22;

                    ;% GNC2026W_DW.ThisIFblockdetermineswhether_ch
                    section.data(24).logicalSrcIdx = 329;
                    section.data(24).dtTransOffset = 23;

                    ;% GNC2026W_DW.ThisIFblockdetermineswhether_cs
                    section.data(25).logicalSrcIdx = 330;
                    section.data(25).dtTransOffset = 24;

                    ;% GNC2026W_DW.ThisIFblockdetermineswhethero_d
                    section.data(26).logicalSrcIdx = 331;
                    section.data(26).dtTransOffset = 25;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanBC
                    section.data(27).logicalSrcIdx = 332;
                    section.data(27).dtTransOffset = 26;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_g
                    section.data(28).logicalSrcIdx = 333;
                    section.data(28).dtTransOffset = 27;

                    ;% GNC2026W_DW.ArtificialisValidFlag_SubsysRan
                    section.data(29).logicalSrcIdx = 334;
                    section.data(29).dtTransOffset = 28;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanB_gf
                    section.data(30).logicalSrcIdx = 335;
                    section.data(30).dtTransOffset = 29;

                    ;% GNC2026W_DW.EnabledSubsystem2_SubsysRanBC
                    section.data(31).logicalSrcIdx = 336;
                    section.data(31).dtTransOffset = 30;

                    ;% GNC2026W_DW.IfActionSubsystem_SubsysRanBC
                    section.data(32).logicalSrcIdx = 337;
                    section.data(32).dtTransOffset = 31;

                    ;% GNC2026W_DW.EKF_SubsysRanBC
                    section.data(33).logicalSrcIdx = 339;
                    section.data(33).dtTransOffset = 32;

                    ;% GNC2026W_DW.MEKF_SubsysRanBC
                    section.data(34).logicalSrcIdx = 340;
                    section.data(34).dtTransOffset = 33;

                    ;% GNC2026W_DW.ArtificialVISStates_SubsysRanBC
                    section.data(35).logicalSrcIdx = 341;
                    section.data(35).dtTransOffset = 34;

                    ;% GNC2026W_DW.UKF_SubsysRanBC
                    section.data(36).logicalSrcIdx = 342;
                    section.data(36).dtTransOffset = 35;

                    ;% GNC2026W_DW.ArtificialVISStates_SubsysRan_g
                    section.data(37).logicalSrcIdx = 343;
                    section.data(37).dtTransOffset = 36;

                    ;% GNC2026W_DW.ChangeARMBehavior_SubsysRanBC_b
                    section.data(38).logicalSrcIdx = 344;
                    section.data(38).dtTransOffset = 37;

                    ;% GNC2026W_DW.SimulatePlantDynamics_SubsysRan
                    section.data(39).logicalSrcIdx = 345;
                    section.data(39).dtTransOffset = 38;

                    ;% GNC2026W_DW.REDOnly_SubsysRanBC
                    section.data(40).logicalSrcIdx = 347;
                    section.data(40).dtTransOffset = 39;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanB_mm
                    section.data(41).logicalSrcIdx = 348;
                    section.data(41).dtTransOffset = 40;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_n
                    section.data(42).logicalSrcIdx = 349;
                    section.data(42).dtTransOffset = 41;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_p
                    section.data(43).logicalSrcIdx = 350;
                    section.data(43).dtTransOffset = 42;

                    ;% GNC2026W_DW.REDARM_SubsysRanBC
                    section.data(44).logicalSrcIdx = 351;
                    section.data(44).dtTransOffset = 43;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanB_bb
                    section.data(45).logicalSrcIdx = 352;
                    section.data(45).dtTransOffset = 44;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_b
                    section.data(46).logicalSrcIdx = 353;
                    section.data(46).dtTransOffset = 45;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanB_g4
                    section.data(47).logicalSrcIdx = 354;
                    section.data(47).dtTransOffset = 46;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_l
                    section.data(48).logicalSrcIdx = 355;
                    section.data(48).dtTransOffset = 47;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_h
                    section.data(49).logicalSrcIdx = 356;
                    section.data(49).dtTransOffset = 48;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_d
                    section.data(50).logicalSrcIdx = 357;
                    section.data(50).dtTransOffset = 49;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_b
                    section.data(51).logicalSrcIdx = 358;
                    section.data(51).dtTransOffset = 50;

                    ;% GNC2026W_DW.EnabledSubsystem1_SubsysRanBC_p
                    section.data(52).logicalSrcIdx = 359;
                    section.data(52).dtTransOffset = 51;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_bo
                    section.data(53).logicalSrcIdx = 360;
                    section.data(53).dtTransOffset = 52;

                    ;% GNC2026W_DW.EnabledSubsystem3_SubsysRanBC_c
                    section.data(54).logicalSrcIdx = 361;
                    section.data(54).dtTransOffset = 53;

                    ;% GNC2026W_DW.EnablePucks_SubsysRanBC
                    section.data(55).logicalSrcIdx = 362;
                    section.data(55).dtTransOffset = 54;

                    ;% GNC2026W_DW.ChangeREDBehavior_SubsysRanBC_m
                    section.data(56).logicalSrcIdx = 363;
                    section.data(56).dtTransOffset = 55;

                    ;% GNC2026W_DW.ChangeBLUEBehavior_SubsysRanB_l
                    section.data(57).logicalSrcIdx = 364;
                    section.data(57).dtTransOffset = 56;

                    ;% GNC2026W_DW.ChangeBLACKBehavior_SubsysRan_p
                    section.data(58).logicalSrcIdx = 365;
                    section.data(58).dtTransOffset = 57;

                    ;% GNC2026W_DW.DisableControlARM_SubsysRanBC
                    section.data(59).logicalSrcIdx = 366;
                    section.data(59).dtTransOffset = 58;

                    ;% GNC2026W_DW.DefaultPDARM_SubsysRanBC
                    section.data(60).logicalSrcIdx = 367;
                    section.data(60).dtTransOffset = 59;

                    ;% GNC2026W_DW.PassthroughforExperiment_Subsys
                    section.data(61).logicalSrcIdx = 368;
                    section.data(61).dtTransOffset = 60;

                    ;% GNC2026W_DW.SimulatedPositionController_Sub
                    section.data(62).logicalSrcIdx = 369;
                    section.data(62).dtTransOffset = 61;

                    ;% GNC2026W_DW.DefaultLQRControlBLUE_SubsysRan
                    section.data(63).logicalSrcIdx = 370;
                    section.data(63).dtTransOffset = 62;

                    ;% GNC2026W_DW.DefaultPDControlBLUE_SubsysRanB
                    section.data(64).logicalSrcIdx = 371;
                    section.data(64).dtTransOffset = 63;

                    ;% GNC2026W_DW.DefaultLQRControlBLACK_SubsysRa
                    section.data(65).logicalSrcIdx = 372;
                    section.data(65).dtTransOffset = 64;

                    ;% GNC2026W_DW.DefaultPDControlBLACK_SubsysRan
                    section.data(66).logicalSrcIdx = 373;
                    section.data(66).dtTransOffset = 65;

                    ;% GNC2026W_DW.CustomControlRED_SubsysRanBC
                    section.data(67).logicalSrcIdx = 374;
                    section.data(67).dtTransOffset = 66;

                    ;% GNC2026W_DW.DefaultLQRControlRED_SubsysRanB
                    section.data(68).logicalSrcIdx = 375;
                    section.data(68).dtTransOffset = 67;

                    ;% GNC2026W_DW.DefaultPDControlRED_SubsysRanBC
                    section.data(69).logicalSrcIdx = 376;
                    section.data(69).dtTransOffset = 68;

                    ;% GNC2026W_DW.DisablePPLARM_SubsysRanBC
                    section.data(70).logicalSrcIdx = 377;
                    section.data(70).dtTransOffset = 69;

                    ;% GNC2026W_DW.CustomPPLARM_SubsysRanBC
                    section.data(71).logicalSrcIdx = 378;
                    section.data(71).dtTransOffset = 70;

                    ;% GNC2026W_DW.DisablePPLBLUE_SubsysRanBC
                    section.data(72).logicalSrcIdx = 379;
                    section.data(72).dtTransOffset = 71;

                    ;% GNC2026W_DW.CustomPPLBLUE_SubsysRanBC
                    section.data(73).logicalSrcIdx = 380;
                    section.data(73).dtTransOffset = 72;

                    ;% GNC2026W_DW.DisablePPLBLACK_SubsysRanBC
                    section.data(74).logicalSrcIdx = 381;
                    section.data(74).dtTransOffset = 73;

                    ;% GNC2026W_DW.CustomPPLBLACK_SubsysRanBC
                    section.data(75).logicalSrcIdx = 382;
                    section.data(75).dtTransOffset = 74;

                    ;% GNC2026W_DW.DisablePPLRED_SubsysRanBC
                    section.data(76).logicalSrcIdx = 383;
                    section.data(76).dtTransOffset = 75;

                    ;% GNC2026W_DW.CustomPPLRED_SubsysRanBC
                    section.data(77).logicalSrcIdx = 384;
                    section.data(77).dtTransOffset = 76;

                    ;% GNC2026W_DW.EnabledSubsystem_SubsysRanBC_o
                    section.data(78).logicalSrcIdx = 385;
                    section.data(78).dtTransOffset = 77;

                    ;% GNC2026W_DW.Phase3Experiment_SubsysRanBC
                    section.data(79).logicalSrcIdx = 386;
                    section.data(79).dtTransOffset = 78;

                    ;% GNC2026W_DW.SubPhase4_SubsysRanBC
                    section.data(80).logicalSrcIdx = 388;
                    section.data(80).dtTransOffset = 79;

                    ;% GNC2026W_DW.SubPhase3_SubsysRanBC
                    section.data(81).logicalSrcIdx = 389;
                    section.data(81).dtTransOffset = 80;

                    ;% GNC2026W_DW.SubPhase2_SubsysRanBC
                    section.data(82).logicalSrcIdx = 390;
                    section.data(82).dtTransOffset = 81;

                    ;% GNC2026W_DW.SubPhase1_SubsysRanBC
                    section.data(83).logicalSrcIdx = 391;
                    section.data(83).dtTransOffset = 82;

                    ;% GNC2026W_DW.Phase2InitialPosition_SubsysRan
                    section.data(84).logicalSrcIdx = 392;
                    section.data(84).dtTransOffset = 83;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% GNC2026W_DW.k_not_empty
                    section.data(1).logicalSrcIdx = 402;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.initial_theta
                    section.data(2).logicalSrcIdx = 423;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.k_not_empty_i
                    section.data(3).logicalSrcIdx = 449;
                    section.data(3).dtTransOffset = 2;

                    ;% GNC2026W_DW.x_not_empty_k
                    section.data(4).logicalSrcIdx = 474;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeREDBehavior_h.UDPSendClock_NetworkLib
                    section.data(1).logicalSrcIdx = 488;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeREDBehavior_h.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 489;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLUEBehavior_e.UDPSendClock_NetworkLib
                    section.data(1).logicalSrcIdx = 490;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLUEBehavior_e.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 491;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLACKBehavior_i.UDPSendClock_NetworkLib
                    section.data(1).logicalSrcIdx = 492;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLACKBehavior_i.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 493;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_e.sfEvent
                    section.data(1).logicalSrcIdx = 494;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_e.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 495;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_i.sfEvent
                    section.data(1).logicalSrcIdx = 496;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_i.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 497;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction8.sfEvent
                    section.data(1).logicalSrcIdx = 498;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(27) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction8.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 499;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(28) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction5_e.sfEvent
                    section.data(1).logicalSrcIdx = 500;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(29) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction5_e.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 501;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(30) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Pseudoinverse1_pn.obj
                    section.data(1).logicalSrcIdx = 502;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(31) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Pseudoinverse1_pn.objisempty
                    section.data(1).logicalSrcIdx = 503;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(32) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_n.sfEvent
                    section.data(1).logicalSrcIdx = 504;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(33) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_n.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 505;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(34) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_c.sfEvent
                    section.data(1).logicalSrcIdx = 506;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(35) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_c.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 507;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(36) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction5_i.sfEvent
                    section.data(1).logicalSrcIdx = 508;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(37) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction5_i.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 509;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(38) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction1_i.sfEvent
                    section.data(1).logicalSrcIdx = 510;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(39) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction1_i.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 511;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(40) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Pseudoinverse1_p.obj
                    section.data(1).logicalSrcIdx = 512;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(41) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Pseudoinverse1_p.objisempty
                    section.data(1).logicalSrcIdx = 513;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(42) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_a.sfEvent
                    section.data(1).logicalSrcIdx = 514;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(43) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix_a.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 515;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(44) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix.sfEvent
                    section.data(1).logicalSrcIdx = 516;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(45) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_CreateRotationMatrix.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 517;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(46) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction5.sfEvent
                    section.data(1).logicalSrcIdx = 518;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(47) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction5.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 519;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(48) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction1_l.sfEvent
                    section.data(1).logicalSrcIdx = 520;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(49) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction1_l.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 521;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(50) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Pseudoinverse1.obj
                    section.data(1).logicalSrcIdx = 522;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(51) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Pseudoinverse1.objisempty
                    section.data(1).logicalSrcIdx = 523;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(52) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l1.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 524;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(53) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l1.sfEvent
                    section.data(1).logicalSrcIdx = 525;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(54) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 526;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(55) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l1.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 527;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.EnabledSubsystem_l1.EnabledSubsystem_MODE
                    section.data(2).logicalSrcIdx = 528;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(56) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kh.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 529;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(57) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 530;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(58) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kh.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 531;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(59) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kh.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 532;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(60) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kh.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 533;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(61) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_kd.sfEvent
                    section.data(1).logicalSrcIdx = 534;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(62) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_kd.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 535;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(63) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_d.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 536;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(64) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_d.sfEvent
                    section.data(1).logicalSrcIdx = 537;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(65) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 538;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(66) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_d.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 539;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.EnabledSubsystem_d.EnabledSubsystem_MODE
                    section.data(2).logicalSrcIdx = 540;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(67) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_lw.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 541;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(68) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 542;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(69) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_lw.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 543;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(70) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_lw.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 544;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(71) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_lw.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 545;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(72) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_es.sfEvent
                    section.data(1).logicalSrcIdx = 546;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(73) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_es.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 547;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(74) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_g.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 548;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(75) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_g.sfEvent
                    section.data(1).logicalSrcIdx = 549;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(76) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 550;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(77) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_g.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 551;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.EnabledSubsystem_g.EnabledSubsystem_MODE
                    section.data(2).logicalSrcIdx = 552;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(78) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_it.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 553;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(79) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 554;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(80) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_it.EnabledSubsystem_MODE
                    section.data(1).logicalSrcIdx = 555;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(81) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_it.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 556;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(82) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_it.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 557;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(83) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_gq.sfEvent
                    section.data(1).logicalSrcIdx = 558;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(84) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_gq.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 559;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(85) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_j.sfEvent
                    section.data(1).logicalSrcIdx = 560;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(86) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_j.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 561;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(87) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeREDBehavior_d.UDPSendGUI_NetworkLib
                    section.data(1).logicalSrcIdx = 562;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(88) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeREDBehavior_d.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 563;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(89) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLUEBehavior_f.UDPSendGUI_NetworkLib
                    section.data(1).logicalSrcIdx = 564;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(90) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLUEBehavior_f.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 565;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(91) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLACKBehavior_e.UDPSendGUI_NetworkLib
                    section.data(1).logicalSrcIdx = 566;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(92) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLACKBehavior_e.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 567;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(93) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_nq.sfEvent
                    section.data(1).logicalSrcIdx = 568;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(94) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_nq.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 569;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(95) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_DW.ExperimentalVISStates_a.ExperimentalVISStates_SubsysRan
                    section.data(1).logicalSrcIdx = 570;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.ExperimentalVISStates_a.IfActionSubsystem1_SubsysRanBC
                    section.data(2).logicalSrcIdx = 571;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.ExperimentalVISStates_a.IfActionSubsystem_SubsysRanBC
                    section.data(3).logicalSrcIdx = 572;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(96) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_p.sfEvent
                    section.data(1).logicalSrcIdx = 573;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(97) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_p.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 574;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(98) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% GNC2026W_DW.ExperimentalVISStates.ExperimentalVISStates_SubsysRan
                    section.data(1).logicalSrcIdx = 575;
                    section.data(1).dtTransOffset = 0;

                    ;% GNC2026W_DW.ExperimentalVISStates.IfActionSubsystem1_SubsysRanBC
                    section.data(2).logicalSrcIdx = 576;
                    section.data(2).dtTransOffset = 1;

                    ;% GNC2026W_DW.ExperimentalVISStates.IfActionSubsystem_SubsysRanBC
                    section.data(3).logicalSrcIdx = 577;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(99) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_n5.sfEvent
                    section.data(1).logicalSrcIdx = 578;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(100) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_n5.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 579;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(101) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_iu.sfEvent
                    section.data(1).logicalSrcIdx = 580;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(102) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_iu.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 581;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(103) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_h.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 582;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(104) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_h.sfEvent
                    section.data(1).logicalSrcIdx = 583;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(105) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_h.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 584;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(106) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_h.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 585;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(107) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_p.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 586;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(108) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_p.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 587;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(109) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_p.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 588;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(110) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_p.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 589;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(111) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_m.sfEvent
                    section.data(1).logicalSrcIdx = 590;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(112) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_m.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 591;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(113) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kx.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 592;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(114) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kx.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 593;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(115) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kx.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 594;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(116) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_kx.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 595;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(117) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 596;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(118) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l.sfEvent
                    section.data(1).logicalSrcIdx = 597;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(119) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 598;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(120) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_l.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 599;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(121) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_g.sfEvent
                    section.data(1).logicalSrcIdx = 600;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(122) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_g.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 601;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(123) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_i.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 602;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(124) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_i.sfEvent
                    section.data(1).logicalSrcIdx = 603;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(125) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_i.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 604;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(126) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_i.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 605;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(127) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_k.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 606;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(128) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_k.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 607;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(129) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_k.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 608;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(130) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_k.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 609;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(131) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_l2.sfEvent
                    section.data(1).logicalSrcIdx = 610;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(132) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_l2.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 611;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(133) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_o.sfEvent
                    section.data(1).logicalSrcIdx = 612;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(134) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_o.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 613;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(135) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_b.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 614;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(136) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_b.sfEvent
                    section.data(1).logicalSrcIdx = 615;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(137) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_b.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 616;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(138) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_b.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 617;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(139) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_m.Delay_DSTATE
                    section.data(1).logicalSrcIdx = 618;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(140) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_m.EnabledSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 619;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(141) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_m.sf_MATLABFunction.sfEvent
                    section.data(1).logicalSrcIdx = 620;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(142) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.EnabledSubsystem_m.sf_MATLABFunction.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 621;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(143) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeREDBehavior.UDPSend_NetworkLib
                    section.data(1).logicalSrcIdx = 622;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(144) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeREDBehavior.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 623;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(145) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLUEBehavior.UDPSend_NetworkLib
                    section.data(1).logicalSrcIdx = 624;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(146) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLUEBehavior.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 625;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(147) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLACKBehavior.UDPSend_NetworkLib
                    section.data(1).logicalSrcIdx = 626;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(148) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.ChangeBLACKBehavior.ChangeBLACKBehavior_SubsysRanBC
                    section.data(1).logicalSrcIdx = 627;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(149) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.CustomControlARM.DisableThrustersRED_SubsysRanBC
                    section.data(1).logicalSrcIdx = 628;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(150) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.DisableThrustersBLUE.DisableThrustersBLACK_SubsysRan
                    section.data(1).logicalSrcIdx = 629;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(151) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_k.sfEvent
                    section.data(1).logicalSrcIdx = 630;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(152) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_k.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 631;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(153) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_cj.sfEvent
                    section.data(1).logicalSrcIdx = 632;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(154) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_cj.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 633;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(155) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.DisableThrustersBLACK.DisableThrustersBLACK_SubsysRan
                    section.data(1).logicalSrcIdx = 634;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(156) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_c.sfEvent
                    section.data(1).logicalSrcIdx = 635;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(157) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_c.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 636;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(158) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_de.sfEvent
                    section.data(1).logicalSrcIdx = 637;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(159) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_de.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 638;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(160) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.DisableThrustersRED.DisableThrustersRED_SubsysRanBC
                    section.data(1).logicalSrcIdx = 639;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(161) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_d.sfEvent
                    section.data(1).logicalSrcIdx = 640;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(162) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_d.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 641;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(163) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_i.sfEvent
                    section.data(1).logicalSrcIdx = 642;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(164) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_i.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 643;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(165) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_h.sfEvent
                    section.data(1).logicalSrcIdx = 644;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(166) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_h.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 645;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(167) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_n2.sfEvent
                    section.data(1).logicalSrcIdx = 646;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(168) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_n2.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 647;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(169) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_n.sfEvent
                    section.data(1).logicalSrcIdx = 648;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(170) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.sf_MATLABFunction_n.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 649;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(171) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Phase6CleanShutdown.Phase0Synchronization_SubsysRan
                    section.data(1).logicalSrcIdx = 650;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(172) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Phase5HoldHome.Phase4ReturnHome_SubsysRanBC
                    section.data(1).logicalSrcIdx = 651;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(173) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Phase4ReturnHome.Phase4ReturnHome_SubsysRanBC
                    section.data(1).logicalSrcIdx = 652;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(174) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 653;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(175) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 654;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(176) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 655;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(177) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 656;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(178) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 657;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(179) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.IfActionSubsystem_a.IfActionSubsystem_SubsysRanBC
                    section.data(1).logicalSrcIdx = 658;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(180) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Phase1StartFloating.Phase0Synchronization_SubsysRan
                    section.data(1).logicalSrcIdx = 659;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(181) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% GNC2026W_DW.Phase0Synchronization.Phase0Synchronization_SubsysRan
                    section.data(1).logicalSrcIdx = 660;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(182) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1976089299;
    targMap.checksum1 = 4280913788;
    targMap.checksum2 = 780036792;
    targMap.checksum3 = 3114255876;

