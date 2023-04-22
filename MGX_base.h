#pragma once
//Values
#define __MGX_LBRACK [
#define __MGX_RBRACK ]
#define __MGX_LPAREN (
#define __MGX_RPAREN )
#define __MGX_COMMA ,
#define __MGX_STAR *

#define __MGX_LBRACK_() [
#define __MGX_RBRACK_() ]
#define __MGX_LPAREN_() (
#define __MGX_RPAREN_() )
#define __MGX_STAR_() *
#define __MGX_COMMA_() ,

//Concat
#define __MGX_CAT(a, ...) __MGX_CAT_(a,__VA_ARGS__)
#define __MGX_CAT_(a, ...) a ## __VA_ARGS__

//Digest
#define __MGX_EXPAND(...) __VA_ARGS__
#define __MGX_EAT(...)

//Number

#include "MGX_number.h"

//Defer

#define __MGX_EVAL(...) __MGX_EVAL1(__MGX_EVAL1(__MGX_EVAL1(__VA_ARGS__)))
#define __MGX_EVAL1(...) __MGX_EVAL2(__MGX_EVAL2(__MGX_EVAL2(__VA_ARGS__)))
#define __MGX_EVAL2(...) __MGX_EVAL3(__MGX_EVAL3(__MGX_EVAL3(__VA_ARGS__)))
#define __MGX_EVAL3(...) __MGX_EVAL4(__MGX_EVAL4(__MGX_EVAL4(__VA_ARGS__)))
#define __MGX_EVAL4(...) __MGX_EVAL5(__MGX_EVAL5(__MGX_EVAL5(__VA_ARGS__)))
#define __MGX_EVAL5(...) __VA_ARGS__

#define __MGX_2EVAL(...) __MGX_2EVAL1(__MGX_2EVAL1(__MGX_2EVAL1(__VA_ARGS__)))
#define __MGX_2EVAL1(...) __MGX_2EVAL2(__MGX_2EVAL2(__MGX_2EVAL2(__VA_ARGS__)))
#define __MGX_2EVAL2(...) __MGX_2EVAL3(__MGX_2EVAL3(__MGX_2EVAL3(__VA_ARGS__)))
#define __MGX_2EVAL3(...) __MGX_2EVAL4(__MGX_2EVAL4(__MGX_2EVAL4(__VA_ARGS__)))
#define __MGX_2EVAL4(...) __MGX_2EVAL5(__MGX_2EVAL5(__MGX_2EVAL5(__VA_ARGS__)))
#define __MGX_2EVAL5(...) __VA_ARGS__

#define __MGX_EMPTY()
#define __MGX_DEFER(m) m __MGX_EMPTY()
#define __MGX_DEFER0(m) m
#define __MGX_DEFER1 __MGX_DEFER
#define __MGX_DEFER2(m) m __MGX_DEFER(__MGX_EMPTY)()
#define __MGX_DEFER3(m) m __MGX_DEFER2(__MGX_EMPTY)()
#define __MGX_DEFER4(m) m __MGX_DEFER3(__MGX_EMPTY)()
#define __MGX_DEFER5(m) m __MGX_DEFER4(__MGX_EMPTY)()
#define __MGX_DEFER6(m) m __MGX_DEFER5(__MGX_EMPTY)()
#define __MGX_DEFER7(m) m __MGX_DEFER6(__MGX_EMPTY)()
#define __MGX_DEFER8(m) m __MGX_DEFER7(__MGX_EMPTY)()
#define __MGX_DEFER9(m) m __MGX_DEFER8(__MGX_EMPTY)()
#define __MGX_DEFER10(m) m __MGX_DEFER9(__MGX_EMPTY)()
#define __MGX_DEFER11(m) m __MGX_DEFER10(__MGX_EMPTY)()
#define __MGX_DEFER12(m) m __MGX_DEFER11(__MGX_EMPTY)()
#define __MGX_DEFER13(m) m __MGX_DEFER12(__MGX_EMPTY)()
#define __MGX_DEFER14(m) m __MGX_DEFER13(__MGX_EMPTY)()
#define __MGX_DEFER15(m) m __MGX_DEFER14(__MGX_EMPTY)()
#define __MGX_DEFER16(m) m __MGX_DEFER15(__MGX_EMPTY)()
#define __MGX_DEFER17(m) m __MGX_DEFER16(__MGX_EMPTY)()
#define __MGX_DEFER18(m) m __MGX_DEFER17(__MGX_EMPTY)()
#define __MGX_DEFER19(m) m __MGX_DEFER18(__MGX_EMPTY)()
#define __MGX_DEFER20(m) m __MGX_DEFER19(__MGX_EMPTY)()
#define __MGX_DEFER21(m) m __MGX_DEFER20(__MGX_EMPTY)()
#define __MGX_DEFER22(m) m __MGX_DEFER21(__MGX_EMPTY)()
#define __MGX_DEFER23(m) m __MGX_DEFER22(__MGX_EMPTY)()
#define __MGX_DEFER24(m) m __MGX_DEFER23(__MGX_EMPTY)()
#define __MGX_DEFER25(m) m __MGX_DEFER24(__MGX_EMPTY)()
#define __MGX_DEFER26(m) m __MGX_DEFER25(__MGX_EMPTY)()
#define __MGX_DEFER27(m) m __MGX_DEFER26(__MGX_EMPTY)()
#define __MGX_DEFER28(m) m __MGX_DEFER27(__MGX_EMPTY)()
#define __MGX_DEFER29(m) m __MGX_DEFER28(__MGX_EMPTY)()
#define __MGX_DEFER30(m) m __MGX_DEFER29(__MGX_EMPTY)()
#define __MGX_DEFER31(m) m __MGX_DEFER30(__MGX_EMPTY)()
#define __MGX_DEFER32(m) m __MGX_DEFER31(__MGX_EMPTY)()
#define __MGX_DEFER33(m) m __MGX_DEFER32(__MGX_EMPTY)()
#define __MGX_DEFER34(m) m __MGX_DEFER33(__MGX_EMPTY)()
#define __MGX_DEFER35(m) m __MGX_DEFER34(__MGX_EMPTY)()
#define __MGX_DEFER36(m) m __MGX_DEFER35(__MGX_EMPTY)()
#define __MGX_DEFER37(m) m __MGX_DEFER36(__MGX_EMPTY)()
#define __MGX_DEFER38(m) m __MGX_DEFER37(__MGX_EMPTY)()
#define __MGX_DEFER39(m) m __MGX_DEFER38(__MGX_EMPTY)()
#define __MGX_DEFER40(m) m __MGX_DEFER39(__MGX_EMPTY)()
#define __MGX_DEFER41(m) m __MGX_DEFER40(__MGX_EMPTY)()
#define __MGX_DEFER42(m) m __MGX_DEFER41(__MGX_EMPTY)()
#define __MGX_DEFER43(m) m __MGX_DEFER42(__MGX_EMPTY)()
#define __MGX_DEFER44(m) m __MGX_DEFER43(__MGX_EMPTY)()
#define __MGX_DEFER45(m) m __MGX_DEFER44(__MGX_EMPTY)()
#define __MGX_DEFER46(m) m __MGX_DEFER45(__MGX_EMPTY)()
#define __MGX_DEFER47(m) m __MGX_DEFER46(__MGX_EMPTY)()
#define __MGX_DEFER48(m) m __MGX_DEFER47(__MGX_EMPTY)()
#define __MGX_DEFER49(m) m __MGX_DEFER48(__MGX_EMPTY)()
#define __MGX_DEFER50(m) m __MGX_DEFER49(__MGX_EMPTY)()
#define __MGX_DEFER51(m) m __MGX_DEFER50(__MGX_EMPTY)()
#define __MGX_DEFER52(m) m __MGX_DEFER51(__MGX_EMPTY)()
#define __MGX_DEFER53(m) m __MGX_DEFER52(__MGX_EMPTY)()
#define __MGX_DEFER54(m) m __MGX_DEFER53(__MGX_EMPTY)()
#define __MGX_DEFER55(m) m __MGX_DEFER54(__MGX_EMPTY)()
#define __MGX_DEFER56(m) m __MGX_DEFER55(__MGX_EMPTY)()
#define __MGX_DEFER57(m) m __MGX_DEFER56(__MGX_EMPTY)()
#define __MGX_DEFER58(m) m __MGX_DEFER57(__MGX_EMPTY)()
#define __MGX_DEFER59(m) m __MGX_DEFER58(__MGX_EMPTY)()
#define __MGX_DEFER60(m) m __MGX_DEFER59(__MGX_EMPTY)()
#define __MGX_DEFER61(m) m __MGX_DEFER60(__MGX_EMPTY)()
#define __MGX_DEFER62(m) m __MGX_DEFER61(__MGX_EMPTY)()
#define __MGX_DEFER63(m) m __MGX_DEFER62(__MGX_EMPTY)()
#define __MGX_DEFER64(m) m __MGX_DEFER63(__MGX_EMPTY)()
#define __MGX_DEFER65(m) m __MGX_DEFER64(__MGX_EMPTY)()
#define __MGX_DEFER66(m) m __MGX_DEFER65(__MGX_EMPTY)()
#define __MGX_DEFER67(m) m __MGX_DEFER66(__MGX_EMPTY)()
#define __MGX_DEFER68(m) m __MGX_DEFER67(__MGX_EMPTY)()
#define __MGX_DEFER69(m) m __MGX_DEFER68(__MGX_EMPTY)()
#define __MGX_DEFER70(m) m __MGX_DEFER69(__MGX_EMPTY)()
#define __MGX_DEFER71(m) m __MGX_DEFER70(__MGX_EMPTY)()
#define __MGX_DEFER72(m) m __MGX_DEFER71(__MGX_EMPTY)()
#define __MGX_DEFER73(m) m __MGX_DEFER72(__MGX_EMPTY)()
#define __MGX_DEFER74(m) m __MGX_DEFER73(__MGX_EMPTY)()
#define __MGX_DEFER75(m) m __MGX_DEFER74(__MGX_EMPTY)()
#define __MGX_DEFER76(m) m __MGX_DEFER75(__MGX_EMPTY)()
#define __MGX_DEFER77(m) m __MGX_DEFER76(__MGX_EMPTY)()
#define __MGX_DEFER78(m) m __MGX_DEFER77(__MGX_EMPTY)()
#define __MGX_DEFER79(m) m __MGX_DEFER78(__MGX_EMPTY)()
#define __MGX_DEFER80(m) m __MGX_DEFER79(__MGX_EMPTY)()
#define __MGX_DEFER81(m) m __MGX_DEFER80(__MGX_EMPTY)()
#define __MGX_DEFER82(m) m __MGX_DEFER81(__MGX_EMPTY)()
#define __MGX_DEFER83(m) m __MGX_DEFER82(__MGX_EMPTY)()
#define __MGX_DEFER84(m) m __MGX_DEFER83(__MGX_EMPTY)()
#define __MGX_DEFER85(m) m __MGX_DEFER84(__MGX_EMPTY)()
#define __MGX_DEFER86(m) m __MGX_DEFER85(__MGX_EMPTY)()
#define __MGX_DEFER87(m) m __MGX_DEFER86(__MGX_EMPTY)()
#define __MGX_DEFER88(m) m __MGX_DEFER87(__MGX_EMPTY)()
#define __MGX_DEFER89(m) m __MGX_DEFER88(__MGX_EMPTY)()
#define __MGX_DEFER90(m) m __MGX_DEFER89(__MGX_EMPTY)()
#define __MGX_DEFER91(m) m __MGX_DEFER90(__MGX_EMPTY)()
#define __MGX_DEFER92(m) m __MGX_DEFER91(__MGX_EMPTY)()
#define __MGX_DEFER93(m) m __MGX_DEFER92(__MGX_EMPTY)()
#define __MGX_DEFER94(m) m __MGX_DEFER93(__MGX_EMPTY)()
#define __MGX_DEFER95(m) m __MGX_DEFER94(__MGX_EMPTY)()
#define __MGX_DEFER96(m) m __MGX_DEFER95(__MGX_EMPTY)()
#define __MGX_DEFER97(m) m __MGX_DEFER96(__MGX_EMPTY)()
#define __MGX_DEFER98(m) m __MGX_DEFER97(__MGX_EMPTY)()
#define __MGX_DEFER99(m) m __MGX_DEFER98(__MGX_EMPTY)()
#define __MGX_DEFER100(m) m __MGX_DEFER99(__MGX_EMPTY)()

#define __MGX_DEFER_eval(m) m __MGX_DEFER60 __MGX_DEFER100 __MGX_DEFER100 __MGX_DEFER100(__MGX_EMPTY)()(__MGX_EMPTY)()(__MGX_EMPTY)()(__MGX_EMPTY)()

#define __MGX_DEFER_n(n, m) __MGX_CAT_(__MGX_DEFER, n)(m)
#define __MGX_DEFER_max(m) __MGX_DEFER_n(__MGX_DEFER_MAX, m)

#define __MGX_DEFER_MAX 100

// ARGS
#define __MGX_ARG_EXPAND(...) __VA_ARGS__
#define MGX_ARG_FIRST(...) __MGX_ARG_FIRST(__VA_ARGS__, ~)
#define __MGX_ARG_FIRST(A, ...) A

#define __MGX_ARG_IS_PAREN(a) __MGX_CHECK(__MGX_ARG_EXPAND(__MGX_PROBE a))
#define __MGX_ARG_SANITIZE(...) MGX_IF(__MGX_ARG_IS_PAREN(MGX_ARG_FIRST(__VA_ARGS__)))(A, __VA_ARGS__)

#define __MGX_ARG_COUNT_CHECK(...) __MGX_CHECK(__MGX_CAT(__MGX_ARG_COUNT_, __MGX_ARG_SANITIZE( __MGX_CHECK_B(__VA_ARGS__, MGX_NULL))))
#define __MGX_ARG_COUNT_MGX_NULL __MGX_PROBE(~)
#define __MGX_ARG_IIF(c) __MGX_CAT(__MGX_ARG_IIF_, c)
#define __MGX_ARG_IIF_0(t, f) f
#define __MGX_ARG_IIF_1(t, f) t

#define MGX_ARG_TAIL(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_)(__VA_ARGS__)
#define __MGX_ARG_TAIL_(A, ...) __VA_ARGS__

#define MGX_ARG_TAIL_OPT_SUR(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_OPT_SUR_)(__VA_ARGS__)
#define __MGX_ARG_TAIL_OPT_SUR_(A, ...) , __VA_ARGS__,
#define MGX_ARG_TAIL_OPT_PRE(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_OPT_PRE_)(__VA_ARGS__)
#define __MGX_ARG_TAIL_OPT_PRE_(A, ...) __VA_ARGS__,

#define MGX_ARG_TAIL_OPT(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_OPT_)(__VA_ARGS__)
#define __MGX_ARG_TAIL_OPT_(A, ...) , __VA_ARGS__

#define MGX_ARG_COUNT(...) __MGX_ARG_COUNT(__VA_ARGS__,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)
#define __MGX_ARG_COUNT(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100, N, ...) N

#define __MGX_ARG_NEXT(N, A, ...) MGX_DEC(N), __VA_ARGS__

#define MGX_ARG_SECOND(...) __MGX_ARG_SECOND(__VA_ARGS__,,,)
#define __MGX_ARG_SECOND(A, B, ...) B

#define __MGX_ARG_EVAL(...) __MGX_ARG_EVAL1(__MGX_ARG_EVAL1(__MGX_ARG_EVAL1(__VA_ARGS__)))
#define __MGX_ARG_EVAL1(...) __MGX_ARG_EVAL2(__MGX_ARG_EVAL2(__MGX_ARG_EVAL2(__VA_ARGS__)))
#define __MGX_ARG_EVAL2(...) __MGX_ARG_EVAL3(__MGX_ARG_EVAL3(__MGX_ARG_EVAL3(__VA_ARGS__)))
#define __MGX_ARG_EVAL3(...) __MGX_ARG_EVAL4(__MGX_ARG_EVAL4(__MGX_ARG_EVAL4(__VA_ARGS__)))
#define __MGX_ARG_EVAL4(...) __MGX_ARG_EVAL5(__MGX_ARG_EVAL5(__MGX_ARG_EVAL5(__VA_ARGS__)))
#define __MGX_ARG_EVAL5(...) __VA_ARGS__

#define __MGX_ARG_WHILE(c, ...) __MGX_ARG_EVAL(__MGX_WHILE(c, __VA_ARGS__))

#define __MGX_ARG_FORWARD(I, M, ...) M(MGX_ARG_GET_N(I, __VA_ARGS__))

#define __MGX_FOREACH_CUT(A, B, ...) __VA_ARGS__
#define __MGX_FOREACH(HANDLER, NONARGS, ...) MGX_FOR(1, MGX_SUB(MGX_INC(MGX_ARG_COUNT(__VA_ARGS__)), NONARGS), MGX_INC, HANDLER, __VA_ARGS__)

#define MGX_ARG_GET_N(n, ...) MGX_ARG_SECOND(__MGX_ARG_WHILE(MGX_NUM_NOT_ZERO, __MGX_ARG_NEXT, MGX_DEC(n), __VA_ARGS__), )

// Detection
#define __MGX_CHECK_B(a,b, ...) b
#define __MGX_CHECK(...) __MGX_CHECK_B(__VA_ARGS__, 0,)
#define __MGX_PROBE(x) x, 1,


//Boolean
#define __MGX_NOT_0 __MGX_PROBE(~)
#define __MGX_NOT_false __MGX_PROBE(~)

#define __MGX_BITOR(a) __MGX_CAT_(__MGX_BITOR_, a)
#define __MGX_BITOR_0(b) b
#define __MGX_BITOR_1(b) 1
#define __MGX_BITOR_false(b) b
#define __MGX_BITOR_true(b) 1

#define __MGX_BITAND(a) __MGX_CAT_(__MGX_BITAND_, a)
#define __MGX_BITAND_0(b) 0
#define __MGX_BITAND_1(b) b
#define __MGX_BITAND_false(b) 0
#define __MGX_BITAND_true(b) b

#define __MGX_BOOL_true __MGX_PROBE(~)
#define __MGX_BOOL_1 __MGX_PROBE(~)


#define MGX_NOT(x) __MGX_CHECK(__MGX_CAT_(__MGX_NOT_, x))
#define MGX_OR(a, b) __MGX_BITOR(MGX_BOOL(a))(MGX_BOOL(b))
#define MGX_AND(a, b) __MGX_BITAND(MGX_BOOL(a))(MGX_BOOL(b))
#define MGX_BOOL(x) __MGX_CHECK(__MGX_CAT_(__MGX_BOOL_, x))

// Conditional
#define __MGX_IIF(c) __MGX_CAT(__MGX_IIF_, c)
#define __MGX_IIF_0(t, f) f
#define __MGX_IIF_1(t, f) t

#define __MGX_COND_EXPAND(...) __VA_ARGS__
#define __MGX_COND_EXPAND2(...) __VA_ARGS__


#define __MGX_WHILE_INDIRECT() __MGX_WHILE
#define __MGX_WHILE(c, M, ...) MGX_IF( c(__VA_ARGS__))(__MGX_DEFER2(__MGX_WHILE_INDIRECT)()(c, M, M(__VA_ARGS__)), __MGX_COND_EXPAND2(__VA_ARGS__))

#define __MGX_WHILE_INDIRECT2() __MGX_WHILE2
#define __MGX_WHILE2(c, M, ...) MGX_IF( c(__VA_ARGS__))(__MGX_DEFER2(__MGX_WHILE_INDIRECT2)()(c, M, M(__VA_ARGS__)), __MGX_COND_EXPAND2(__VA_ARGS__))

#define __MGX_FOR_INDIRECT() __MGX_FOR
#define __MGX_FOR(I, E, OP, ...) MGX_WHEN(MGX_NOT(MGX_NUM_EQUAL(I, E)))(__MGX_DEFER2(MGX_ARG_FIRST(__VA_ARGS__))(I MGX_ARG_TAIL_OPT(__VA_ARGS__)) __MGX_DEFER2(__MGX_FOR_INDIRECT)()(OP(I), E, OP, __VA_ARGS__))

#define MGX_IF(c) __MGX_IIF(MGX_BOOL(MGX_ARG_FIRST(c, 0)))
#define MGX_WHEN(c) MGX_IF(c)(__MGX_COND_EXPAND, __MGX_EAT)
#define MGX_WHEN_NOT(c) MGX_IF(c)(__MGX_EAT, __MGX_COND_EXPAND)
#define MGX_FOR(I, E, OP, ...) __MGX_EVAL(__MGX_FOR(I, E, OP, __VA_ARGS__))
#define MGX_WHILE(c, ...) __MGX_EVAL(__MGX_WHILE(c, __VA_ARGS__))
#define MGX_WHILE2(c, ...) __MGX_2EVAL(__MGX_WHILE2(c, __VA_ARGS__))
#define MGX_FOREACH(M, ...) __MGX_FOREACH(__MGX_ARG_FORWARD, 1, M, __VA_ARGS__)
