#include "MGX_base.h"

#define __MGX_S_EQ_0_0 true
#define __MGX_S_EQ_1_1 true
#define __MGX_S_EQ_2_2 true
#define __MGX_S_EQ_3_3 true
#define __MGX_S_EQ_4_4 true
#define __MGX_S_EQ_5_5 true
#define __MGX_S_EQ_6_6 true
#define __MGX_S_EQ_7_7 true
#define __MGX_S_EQ_8_8 true
#define __MGX_S_EQ_9_9 true
#define __MGX_S_EQ_10_10 true
#define __MGX_S_EQ_11_11 true
#define __MGX_S_EQ_12_12 true
#define __MGX_S_EQ_13_13 true
#define __MGX_S_EQ_14_14 true
#define __MGX_S_EQ_15_15 true
#define __MGX_S_EQ_16_16 true
#define __MGX_S_EQ_17_17 true
#define __MGX_S_EQ_18_18 true
#define __MGX_S_EQ_19_19 true
#define __MGX_S_EQ_20_20 true
#define __MGX_S_EQ_21_21 true
#define __MGX_S_EQ_22_22 true
#define __MGX_S_EQ_23_23 true
#define __MGX_S_EQ_24_24 true
#define __MGX_S_EQ_25_25 true
#define __MGX_S_EQ_26_26 true
#define __MGX_S_EQ_27_27 true
#define __MGX_S_EQ_28_28 true
#define __MGX_S_EQ_29_29 true
#define __MGX_S_EQ_30_30 true
#define __MGX_S_EQ_31_31 true
#define __MGX_S_EQ_32_32 true
#define __MGX_S_EQ_33_33 true
#define __MGX_S_EQ_34_34 true
#define __MGX_S_EQ_35_35 true
#define __MGX_S_EQ_36_36 true
#define __MGX_S_EQ_37_37 true
#define __MGX_S_EQ_38_38 true
#define __MGX_S_EQ_39_39 true
#define __MGX_S_EQ_40_40 true
#define __MGX_S_EQ_41_41 true
#define __MGX_S_EQ_42_42 true
#define __MGX_S_EQ_43_43 true
#define __MGX_S_EQ_44_44 true
#define __MGX_S_EQ_45_45 true
#define __MGX_S_EQ_46_46 true
#define __MGX_S_EQ_47_47 true
#define __MGX_S_EQ_48_48 true
#define __MGX_S_EQ_49_49 true
#define __MGX_S_EQ_50_50 true
#define __MGX_S_EQ_51_51 true
#define __MGX_S_EQ_52_52 true
#define __MGX_S_EQ_53_53 true
#define __MGX_S_EQ_54_54 true
#define __MGX_S_EQ_55_55 true
#define __MGX_S_EQ_56_56 true
#define __MGX_S_EQ_57_57 true
#define __MGX_S_EQ_58_58 true
#define __MGX_S_EQ_59_59 true
#define __MGX_S_EQ_60_60 true
#define __MGX_S_EQ_61_61 true
#define __MGX_S_EQ_62_62 true
#define __MGX_S_EQ_63_63 true
#define __MGX_S_EQ_64_64 true
#define __MGX_S_EQ_65_65 true
#define __MGX_S_EQ_66_66 true
#define __MGX_S_EQ_67_67 true
#define __MGX_S_EQ_68_68 true
#define __MGX_S_EQ_69_69 true
#define __MGX_S_EQ_70_70 true
#define __MGX_S_EQ_71_71 true
#define __MGX_S_EQ_72_72 true
#define __MGX_S_EQ_73_73 true
#define __MGX_S_EQ_74_74 true
#define __MGX_S_EQ_75_75 true
#define __MGX_S_EQ_76_76 true
#define __MGX_S_EQ_77_77 true
#define __MGX_S_EQ_78_78 true
#define __MGX_S_EQ_79_79 true
#define __MGX_S_EQ_80_80 true
#define __MGX_S_EQ_81_81 true
#define __MGX_S_EQ_82_82 true
#define __MGX_S_EQ_83_83 true
#define __MGX_S_EQ_84_84 true
#define __MGX_S_EQ_85_85 true
#define __MGX_S_EQ_86_86 true
#define __MGX_S_EQ_87_87 true
#define __MGX_S_EQ_88_88 true
#define __MGX_S_EQ_89_89 true
#define __MGX_S_EQ_90_90 true
#define __MGX_S_EQ_91_91 true
#define __MGX_S_EQ_92_92 true
#define __MGX_S_EQ_93_93 true
#define __MGX_S_EQ_94_94 true
#define __MGX_S_EQ_95_95 true
#define __MGX_S_EQ_96_96 true
#define __MGX_S_EQ_97_97 true
#define __MGX_S_EQ_98_98 true
#define __MGX_S_EQ_99_99 true
#define __MGX_S_EQ_100_100 true

#define MGX_S_EQUAL(a, b) __MGX_S_EQ_##a##_##b
#define MGX_S_NOT(a) __MGX_S_NOT_##a
#define MGX_S_NOT_0 1
#define MGX_S_NOT_1 0
#define MGX_S_NOT_false true
#define MGX_S_NOT_true false

#define __MGX_S_FOR0(E, OP, M , ...) M(0, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(0, E))(__MGX_CAT(__MGX_S_FOR, OP(0))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR1(E, OP, M , ...) M(1, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(1, E))(__MGX_CAT(__MGX_S_FOR, OP(1))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR2(E, OP, M , ...) M(2, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(2, E))(__MGX_CAT(__MGX_S_FOR, OP(2))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR3(E, OP, M , ...) M(3, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(3, E))(__MGX_CAT(__MGX_S_FOR, OP(3))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR4(E, OP, M , ...) M(4, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(4, E))(__MGX_CAT(__MGX_S_FOR, OP(4))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR5(E, OP, M , ...) M(5, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(5, E))(__MGX_CAT(__MGX_S_FOR, OP(5))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR6(E, OP, M , ...) M(6, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(6, E))(__MGX_CAT(__MGX_S_FOR, OP(6))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR7(E, OP, M , ...) M(7, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(7, E))(__MGX_CAT(__MGX_S_FOR, OP(7))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR8(E, OP, M , ...) M(8, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(8, E))(__MGX_CAT(__MGX_S_FOR, OP(8))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR9(E, OP, M , ...) M(9, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(9, E))(__MGX_CAT(__MGX_S_FOR, OP(9))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR10(E, OP, M , ...) M(10, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(10, E))(__MGX_CAT(__MGX_S_FOR, OP(10))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR11(E, OP, M , ...) M(11, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(11, E))(__MGX_CAT(__MGX_S_FOR, OP(11))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR12(E, OP, M , ...) M(12, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(12, E))(__MGX_CAT(__MGX_S_FOR, OP(12))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR13(E, OP, M , ...) M(13, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(13, E))(__MGX_CAT(__MGX_S_FOR, OP(13))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR14(E, OP, M , ...) M(14, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(14, E))(__MGX_CAT(__MGX_S_FOR, OP(14))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR15(E, OP, M , ...) M(15, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(15, E))(__MGX_CAT(__MGX_S_FOR, OP(15))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR16(E, OP, M , ...) M(16, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(16, E))(__MGX_CAT(__MGX_S_FOR, OP(16))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR17(E, OP, M , ...) M(17, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(17, E))(__MGX_CAT(__MGX_S_FOR, OP(17))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR18(E, OP, M , ...) M(18, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(18, E))(__MGX_CAT(__MGX_S_FOR, OP(18))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR19(E, OP, M , ...) M(19, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(19, E))(__MGX_CAT(__MGX_S_FOR, OP(19))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR20(E, OP, M , ...) M(20, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(20, E))(__MGX_CAT(__MGX_S_FOR, OP(20))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR21(E, OP, M , ...) M(21, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(21, E))(__MGX_CAT(__MGX_S_FOR, OP(21))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR22(E, OP, M , ...) M(22, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(22, E))(__MGX_CAT(__MGX_S_FOR, OP(22))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR23(E, OP, M , ...) M(23, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(23, E))(__MGX_CAT(__MGX_S_FOR, OP(23))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR24(E, OP, M , ...) M(24, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(24, E))(__MGX_CAT(__MGX_S_FOR, OP(24))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR25(E, OP, M , ...) M(25, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(25, E))(__MGX_CAT(__MGX_S_FOR, OP(25))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR26(E, OP, M , ...) M(26, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(26, E))(__MGX_CAT(__MGX_S_FOR, OP(26))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR27(E, OP, M , ...) M(27, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(27, E))(__MGX_CAT(__MGX_S_FOR, OP(27))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR28(E, OP, M , ...) M(28, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(28, E))(__MGX_CAT(__MGX_S_FOR, OP(28))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR29(E, OP, M , ...) M(29, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(29, E))(__MGX_CAT(__MGX_S_FOR, OP(29))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR30(E, OP, M , ...) M(30, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(30, E))(__MGX_CAT(__MGX_S_FOR, OP(30))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR31(E, OP, M , ...) M(31, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(31, E))(__MGX_CAT(__MGX_S_FOR, OP(31))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR32(E, OP, M , ...) M(32, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(32, E))(__MGX_CAT(__MGX_S_FOR, OP(32))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR33(E, OP, M , ...) M(33, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(33, E))(__MGX_CAT(__MGX_S_FOR, OP(33))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR34(E, OP, M , ...) M(34, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(34, E))(__MGX_CAT(__MGX_S_FOR, OP(34))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR35(E, OP, M , ...) M(35, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(35, E))(__MGX_CAT(__MGX_S_FOR, OP(35))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR36(E, OP, M , ...) M(36, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(36, E))(__MGX_CAT(__MGX_S_FOR, OP(36))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR37(E, OP, M , ...) M(37, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(37, E))(__MGX_CAT(__MGX_S_FOR, OP(37))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR38(E, OP, M , ...) M(38, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(38, E))(__MGX_CAT(__MGX_S_FOR, OP(38))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR39(E, OP, M , ...) M(39, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(39, E))(__MGX_CAT(__MGX_S_FOR, OP(39))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR40(E, OP, M , ...) M(40, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(40, E))(__MGX_CAT(__MGX_S_FOR, OP(40))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR41(E, OP, M , ...) M(41, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(41, E))(__MGX_CAT(__MGX_S_FOR, OP(41))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR42(E, OP, M , ...) M(42, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(42, E))(__MGX_CAT(__MGX_S_FOR, OP(42))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR43(E, OP, M , ...) M(43, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(43, E))(__MGX_CAT(__MGX_S_FOR, OP(43))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR44(E, OP, M , ...) M(44, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(44, E))(__MGX_CAT(__MGX_S_FOR, OP(44))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR45(E, OP, M , ...) M(45, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(45, E))(__MGX_CAT(__MGX_S_FOR, OP(45))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR46(E, OP, M , ...) M(46, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(46, E))(__MGX_CAT(__MGX_S_FOR, OP(46))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR47(E, OP, M , ...) M(47, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(47, E))(__MGX_CAT(__MGX_S_FOR, OP(47))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR48(E, OP, M , ...) M(48, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(48, E))(__MGX_CAT(__MGX_S_FOR, OP(48))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR49(E, OP, M , ...) M(49, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(49, E))(__MGX_CAT(__MGX_S_FOR, OP(49))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR50(E, OP, M , ...) M(50, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(50, E))(__MGX_CAT(__MGX_S_FOR, OP(50))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR51(E, OP, M , ...) M(51, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(51, E))(__MGX_CAT(__MGX_S_FOR, OP(51))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR52(E, OP, M , ...) M(52, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(52, E))(__MGX_CAT(__MGX_S_FOR, OP(52))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR53(E, OP, M , ...) M(53, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(53, E))(__MGX_CAT(__MGX_S_FOR, OP(53))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR54(E, OP, M , ...) M(54, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(54, E))(__MGX_CAT(__MGX_S_FOR, OP(54))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR55(E, OP, M , ...) M(55, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(55, E))(__MGX_CAT(__MGX_S_FOR, OP(55))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR56(E, OP, M , ...) M(56, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(56, E))(__MGX_CAT(__MGX_S_FOR, OP(56))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR57(E, OP, M , ...) M(57, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(57, E))(__MGX_CAT(__MGX_S_FOR, OP(57))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR58(E, OP, M , ...) M(58, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(58, E))(__MGX_CAT(__MGX_S_FOR, OP(58))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR59(E, OP, M , ...) M(59, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(59, E))(__MGX_CAT(__MGX_S_FOR, OP(59))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR60(E, OP, M , ...) M(60, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(60, E))(__MGX_CAT(__MGX_S_FOR, OP(60))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR61(E, OP, M , ...) M(61, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(61, E))(__MGX_CAT(__MGX_S_FOR, OP(61))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR62(E, OP, M , ...) M(62, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(62, E))(__MGX_CAT(__MGX_S_FOR, OP(62))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR63(E, OP, M , ...) M(63, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(63, E))(__MGX_CAT(__MGX_S_FOR, OP(63))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR64(E, OP, M , ...) M(64, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(64, E))(__MGX_CAT(__MGX_S_FOR, OP(64))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR65(E, OP, M , ...) M(65, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(65, E))(__MGX_CAT(__MGX_S_FOR, OP(65))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR66(E, OP, M , ...) M(66, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(66, E))(__MGX_CAT(__MGX_S_FOR, OP(66))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR67(E, OP, M , ...) M(67, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(67, E))(__MGX_CAT(__MGX_S_FOR, OP(67))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR68(E, OP, M , ...) M(68, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(68, E))(__MGX_CAT(__MGX_S_FOR, OP(68))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR69(E, OP, M , ...) M(69, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(69, E))(__MGX_CAT(__MGX_S_FOR, OP(69))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR70(E, OP, M , ...) M(70, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(70, E))(__MGX_CAT(__MGX_S_FOR, OP(70))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR71(E, OP, M , ...) M(71, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(71, E))(__MGX_CAT(__MGX_S_FOR, OP(71))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR72(E, OP, M , ...) M(72, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(72, E))(__MGX_CAT(__MGX_S_FOR, OP(72))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR73(E, OP, M , ...) M(73, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(73, E))(__MGX_CAT(__MGX_S_FOR, OP(73))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR74(E, OP, M , ...) M(74, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(74, E))(__MGX_CAT(__MGX_S_FOR, OP(74))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR75(E, OP, M , ...) M(75, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(75, E))(__MGX_CAT(__MGX_S_FOR, OP(75))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR76(E, OP, M , ...) M(76, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(76, E))(__MGX_CAT(__MGX_S_FOR, OP(76))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR77(E, OP, M , ...) M(77, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(77, E))(__MGX_CAT(__MGX_S_FOR, OP(77))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR78(E, OP, M , ...) M(78, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(78, E))(__MGX_CAT(__MGX_S_FOR, OP(78))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR79(E, OP, M , ...) M(79, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(79, E))(__MGX_CAT(__MGX_S_FOR, OP(79))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR80(E, OP, M , ...) M(80, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(80, E))(__MGX_CAT(__MGX_S_FOR, OP(80))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR81(E, OP, M , ...) M(81, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(81, E))(__MGX_CAT(__MGX_S_FOR, OP(81))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR82(E, OP, M , ...) M(82, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(82, E))(__MGX_CAT(__MGX_S_FOR, OP(82))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR83(E, OP, M , ...) M(83, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(83, E))(__MGX_CAT(__MGX_S_FOR, OP(83))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR84(E, OP, M , ...) M(84, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(84, E))(__MGX_CAT(__MGX_S_FOR, OP(84))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR85(E, OP, M , ...) M(85, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(85, E))(__MGX_CAT(__MGX_S_FOR, OP(85))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR86(E, OP, M , ...) M(86, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(86, E))(__MGX_CAT(__MGX_S_FOR, OP(86))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR87(E, OP, M , ...) M(87, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(87, E))(__MGX_CAT(__MGX_S_FOR, OP(87))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR88(E, OP, M , ...) M(88, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(88, E))(__MGX_CAT(__MGX_S_FOR, OP(88))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR89(E, OP, M , ...) M(89, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(89, E))(__MGX_CAT(__MGX_S_FOR, OP(89))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR90(E, OP, M , ...) M(90, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(90, E))(__MGX_CAT(__MGX_S_FOR, OP(90))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR91(E, OP, M , ...) M(91, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(91, E))(__MGX_CAT(__MGX_S_FOR, OP(91))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR92(E, OP, M , ...) M(92, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(92, E))(__MGX_CAT(__MGX_S_FOR, OP(92))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR93(E, OP, M , ...) M(93, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(93, E))(__MGX_CAT(__MGX_S_FOR, OP(93))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR94(E, OP, M , ...) M(94, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(94, E))(__MGX_CAT(__MGX_S_FOR, OP(94))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR95(E, OP, M , ...) M(95, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(95, E))(__MGX_CAT(__MGX_S_FOR, OP(95))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR96(E, OP, M , ...) M(96, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(96, E))(__MGX_CAT(__MGX_S_FOR, OP(96))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR97(E, OP, M , ...) M(97, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(97, E))(__MGX_CAT(__MGX_S_FOR, OP(97))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR98(E, OP, M , ...) M(98, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(98, E))(__MGX_CAT(__MGX_S_FOR, OP(98))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR99(E, OP, M , ...) M(99, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(99, E))(__MGX_CAT(__MGX_S_FOR, OP(99))(E, OP, M,__VA_ARGS__))
#define __MGX_S_FOR100(E, OP, M , ...) M(100, __VA_ARGS__) MGX_WHEN_NOT(MGX_S_EQUAL(100, E))(__MGX_CAT(__MGX_S_FOR, OP(100))(E, OP, M,__VA_ARGS__))

#define __MGX_S_FOREACH1(M, E) M(E)
#define __MGX_S_FOREACH2(M, E, ...) M(E) __MGX_S_FOREACH1(M, __VA_ARGS__)
#define __MGX_S_FOREACH3(M, E, ...) M(E) __MGX_S_FOREACH2(M, __VA_ARGS__)
#define __MGX_S_FOREACH4(M, E, ...) M(E) __MGX_S_FOREACH3(M, __VA_ARGS__)
#define __MGX_S_FOREACH5(M, E, ...) M(E) __MGX_S_FOREACH4(M, __VA_ARGS__)
#define __MGX_S_FOREACH6(M, E, ...) M(E) __MGX_S_FOREACH5(M, __VA_ARGS__)
#define __MGX_S_FOREACH7(M, E, ...) M(E) __MGX_S_FOREACH6(M, __VA_ARGS__)
#define __MGX_S_FOREACH8(M, E, ...) M(E) __MGX_S_FOREACH7(M, __VA_ARGS__)
#define __MGX_S_FOREACH9(M, E, ...) M(E) __MGX_S_FOREACH8(M, __VA_ARGS__)
#define __MGX_S_FOREACH10(M, E, ...) M(E) __MGX_S_FOREACH9(M, __VA_ARGS__)
#define __MGX_S_FOREACH11(M, E, ...) M(E) __MGX_S_FOREACH10(M, __VA_ARGS__)
#define __MGX_S_FOREACH12(M, E, ...) M(E) __MGX_S_FOREACH11(M, __VA_ARGS__)
#define __MGX_S_FOREACH13(M, E, ...) M(E) __MGX_S_FOREACH12(M, __VA_ARGS__)
#define __MGX_S_FOREACH14(M, E, ...) M(E) __MGX_S_FOREACH13(M, __VA_ARGS__)
#define __MGX_S_FOREACH15(M, E, ...) M(E) __MGX_S_FOREACH14(M, __VA_ARGS__)
#define __MGX_S_FOREACH16(M, E, ...) M(E) __MGX_S_FOREACH15(M, __VA_ARGS__)
#define __MGX_S_FOREACH17(M, E, ...) M(E) __MGX_S_FOREACH16(M, __VA_ARGS__)
#define __MGX_S_FOREACH18(M, E, ...) M(E) __MGX_S_FOREACH17(M, __VA_ARGS__)
#define __MGX_S_FOREACH19(M, E, ...) M(E) __MGX_S_FOREACH18(M, __VA_ARGS__)
#define __MGX_S_FOREACH20(M, E, ...) M(E) __MGX_S_FOREACH19(M, __VA_ARGS__)
#define __MGX_S_FOREACH21(M, E, ...) M(E) __MGX_S_FOREACH20(M, __VA_ARGS__)
#define __MGX_S_FOREACH22(M, E, ...) M(E) __MGX_S_FOREACH21(M, __VA_ARGS__)
#define __MGX_S_FOREACH23(M, E, ...) M(E) __MGX_S_FOREACH22(M, __VA_ARGS__)
#define __MGX_S_FOREACH24(M, E, ...) M(E) __MGX_S_FOREACH23(M, __VA_ARGS__)
#define __MGX_S_FOREACH25(M, E, ...) M(E) __MGX_S_FOREACH24(M, __VA_ARGS__)
#define __MGX_S_FOREACH26(M, E, ...) M(E) __MGX_S_FOREACH25(M, __VA_ARGS__)
#define __MGX_S_FOREACH27(M, E, ...) M(E) __MGX_S_FOREACH26(M, __VA_ARGS__)
#define __MGX_S_FOREACH28(M, E, ...) M(E) __MGX_S_FOREACH27(M, __VA_ARGS__)
#define __MGX_S_FOREACH29(M, E, ...) M(E) __MGX_S_FOREACH28(M, __VA_ARGS__)
#define __MGX_S_FOREACH30(M, E, ...) M(E) __MGX_S_FOREACH29(M, __VA_ARGS__)
#define __MGX_S_FOREACH31(M, E, ...) M(E) __MGX_S_FOREACH30(M, __VA_ARGS__)
#define __MGX_S_FOREACH32(M, E, ...) M(E) __MGX_S_FOREACH31(M, __VA_ARGS__)
#define __MGX_S_FOREACH33(M, E, ...) M(E) __MGX_S_FOREACH32(M, __VA_ARGS__)
#define __MGX_S_FOREACH34(M, E, ...) M(E) __MGX_S_FOREACH33(M, __VA_ARGS__)
#define __MGX_S_FOREACH35(M, E, ...) M(E) __MGX_S_FOREACH34(M, __VA_ARGS__)
#define __MGX_S_FOREACH36(M, E, ...) M(E) __MGX_S_FOREACH35(M, __VA_ARGS__)
#define __MGX_S_FOREACH37(M, E, ...) M(E) __MGX_S_FOREACH36(M, __VA_ARGS__)
#define __MGX_S_FOREACH38(M, E, ...) M(E) __MGX_S_FOREACH37(M, __VA_ARGS__)
#define __MGX_S_FOREACH39(M, E, ...) M(E) __MGX_S_FOREACH38(M, __VA_ARGS__)
#define __MGX_S_FOREACH40(M, E, ...) M(E) __MGX_S_FOREACH39(M, __VA_ARGS__)
#define __MGX_S_FOREACH41(M, E, ...) M(E) __MGX_S_FOREACH40(M, __VA_ARGS__)
#define __MGX_S_FOREACH42(M, E, ...) M(E) __MGX_S_FOREACH41(M, __VA_ARGS__)
#define __MGX_S_FOREACH43(M, E, ...) M(E) __MGX_S_FOREACH42(M, __VA_ARGS__)
#define __MGX_S_FOREACH44(M, E, ...) M(E) __MGX_S_FOREACH43(M, __VA_ARGS__)
#define __MGX_S_FOREACH45(M, E, ...) M(E) __MGX_S_FOREACH44(M, __VA_ARGS__)
#define __MGX_S_FOREACH46(M, E, ...) M(E) __MGX_S_FOREACH45(M, __VA_ARGS__)
#define __MGX_S_FOREACH47(M, E, ...) M(E) __MGX_S_FOREACH46(M, __VA_ARGS__)
#define __MGX_S_FOREACH48(M, E, ...) M(E) __MGX_S_FOREACH47(M, __VA_ARGS__)
#define __MGX_S_FOREACH49(M, E, ...) M(E) __MGX_S_FOREACH48(M, __VA_ARGS__)
#define __MGX_S_FOREACH50(M, E, ...) M(E) __MGX_S_FOREACH49(M, __VA_ARGS__)
#define __MGX_S_FOREACH51(M, E, ...) M(E) __MGX_S_FOREACH50(M, __VA_ARGS__)
#define __MGX_S_FOREACH52(M, E, ...) M(E) __MGX_S_FOREACH51(M, __VA_ARGS__)
#define __MGX_S_FOREACH53(M, E, ...) M(E) __MGX_S_FOREACH52(M, __VA_ARGS__)
#define __MGX_S_FOREACH54(M, E, ...) M(E) __MGX_S_FOREACH53(M, __VA_ARGS__)
#define __MGX_S_FOREACH55(M, E, ...) M(E) __MGX_S_FOREACH54(M, __VA_ARGS__)
#define __MGX_S_FOREACH56(M, E, ...) M(E) __MGX_S_FOREACH55(M, __VA_ARGS__)
#define __MGX_S_FOREACH57(M, E, ...) M(E) __MGX_S_FOREACH56(M, __VA_ARGS__)
#define __MGX_S_FOREACH58(M, E, ...) M(E) __MGX_S_FOREACH57(M, __VA_ARGS__)
#define __MGX_S_FOREACH59(M, E, ...) M(E) __MGX_S_FOREACH58(M, __VA_ARGS__)
#define __MGX_S_FOREACH60(M, E, ...) M(E) __MGX_S_FOREACH59(M, __VA_ARGS__)
#define __MGX_S_FOREACH61(M, E, ...) M(E) __MGX_S_FOREACH60(M, __VA_ARGS__)
#define __MGX_S_FOREACH62(M, E, ...) M(E) __MGX_S_FOREACH61(M, __VA_ARGS__)
#define __MGX_S_FOREACH63(M, E, ...) M(E) __MGX_S_FOREACH62(M, __VA_ARGS__)
#define __MGX_S_FOREACH64(M, E, ...) M(E) __MGX_S_FOREACH63(M, __VA_ARGS__)
#define __MGX_S_FOREACH65(M, E, ...) M(E) __MGX_S_FOREACH64(M, __VA_ARGS__)
#define __MGX_S_FOREACH66(M, E, ...) M(E) __MGX_S_FOREACH65(M, __VA_ARGS__)
#define __MGX_S_FOREACH67(M, E, ...) M(E) __MGX_S_FOREACH66(M, __VA_ARGS__)
#define __MGX_S_FOREACH68(M, E, ...) M(E) __MGX_S_FOREACH67(M, __VA_ARGS__)
#define __MGX_S_FOREACH69(M, E, ...) M(E) __MGX_S_FOREACH68(M, __VA_ARGS__)
#define __MGX_S_FOREACH70(M, E, ...) M(E) __MGX_S_FOREACH69(M, __VA_ARGS__)
#define __MGX_S_FOREACH71(M, E, ...) M(E) __MGX_S_FOREACH70(M, __VA_ARGS__)
#define __MGX_S_FOREACH72(M, E, ...) M(E) __MGX_S_FOREACH71(M, __VA_ARGS__)
#define __MGX_S_FOREACH73(M, E, ...) M(E) __MGX_S_FOREACH72(M, __VA_ARGS__)
#define __MGX_S_FOREACH74(M, E, ...) M(E) __MGX_S_FOREACH73(M, __VA_ARGS__)
#define __MGX_S_FOREACH75(M, E, ...) M(E) __MGX_S_FOREACH74(M, __VA_ARGS__)
#define __MGX_S_FOREACH76(M, E, ...) M(E) __MGX_S_FOREACH75(M, __VA_ARGS__)
#define __MGX_S_FOREACH77(M, E, ...) M(E) __MGX_S_FOREACH76(M, __VA_ARGS__)
#define __MGX_S_FOREACH78(M, E, ...) M(E) __MGX_S_FOREACH77(M, __VA_ARGS__)
#define __MGX_S_FOREACH79(M, E, ...) M(E) __MGX_S_FOREACH78(M, __VA_ARGS__)
#define __MGX_S_FOREACH80(M, E, ...) M(E) __MGX_S_FOREACH79(M, __VA_ARGS__)
#define __MGX_S_FOREACH81(M, E, ...) M(E) __MGX_S_FOREACH80(M, __VA_ARGS__)
#define __MGX_S_FOREACH82(M, E, ...) M(E) __MGX_S_FOREACH81(M, __VA_ARGS__)
#define __MGX_S_FOREACH83(M, E, ...) M(E) __MGX_S_FOREACH82(M, __VA_ARGS__)
#define __MGX_S_FOREACH84(M, E, ...) M(E) __MGX_S_FOREACH83(M, __VA_ARGS__)
#define __MGX_S_FOREACH85(M, E, ...) M(E) __MGX_S_FOREACH84(M, __VA_ARGS__)
#define __MGX_S_FOREACH86(M, E, ...) M(E) __MGX_S_FOREACH85(M, __VA_ARGS__)
#define __MGX_S_FOREACH87(M, E, ...) M(E) __MGX_S_FOREACH86(M, __VA_ARGS__)
#define __MGX_S_FOREACH88(M, E, ...) M(E) __MGX_S_FOREACH87(M, __VA_ARGS__)
#define __MGX_S_FOREACH89(M, E, ...) M(E) __MGX_S_FOREACH88(M, __VA_ARGS__)
#define __MGX_S_FOREACH90(M, E, ...) M(E) __MGX_S_FOREACH89(M, __VA_ARGS__)
#define __MGX_S_FOREACH91(M, E, ...) M(E) __MGX_S_FOREACH90(M, __VA_ARGS__)
#define __MGX_S_FOREACH92(M, E, ...) M(E) __MGX_S_FOREACH91(M, __VA_ARGS__)
#define __MGX_S_FOREACH93(M, E, ...) M(E) __MGX_S_FOREACH92(M, __VA_ARGS__)
#define __MGX_S_FOREACH94(M, E, ...) M(E) __MGX_S_FOREACH93(M, __VA_ARGS__)
#define __MGX_S_FOREACH95(M, E, ...) M(E) __MGX_S_FOREACH94(M, __VA_ARGS__)
#define __MGX_S_FOREACH96(M, E, ...) M(E) __MGX_S_FOREACH95(M, __VA_ARGS__)
#define __MGX_S_FOREACH97(M, E, ...) M(E) __MGX_S_FOREACH96(M, __VA_ARGS__)
#define __MGX_S_FOREACH98(M, E, ...) M(E) __MGX_S_FOREACH97(M, __VA_ARGS__)
#define __MGX_S_FOREACH99(M, E, ...) M(E) __MGX_S_FOREACH98(M, __VA_ARGS__)
#define __MGX_S_FOREACH100(M, E, ...) M(E) __MGX_S_FOREACH99(M, __VA_ARGS__)

#define __MGX_S_EXPAND(...) __VA_ARGS__

// Functions
#define MGX_S_FOR(I,E,OP,M,...) __MGX_S_FOR##I(E,OP,M, __VA_ARGS__)
#define MGX_S_FOREACH(M, ...) __MGX_S_EXPAND(__MGX_CAT(__MGX_S_FOREACH, MGX_ARG_COUNT(__VA_ARGS__))(M, __VA_ARGS__))
