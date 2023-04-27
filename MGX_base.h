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
#define __MGX_DEFER2(m) m __MGX_DEFER1 __MGX_EMPTY ()()
#define __MGX_DEFER3(m) m __MGX_DEFER2 __MGX_EMPTY ()()
#define __MGX_DEFER4(m) m __MGX_DEFER3 __MGX_EMPTY ()()
#define __MGX_DEFER5(m) m __MGX_DEFER4 __MGX_EMPTY ()()
#define __MGX_DEFER6(m) m __MGX_DEFER5 __MGX_EMPTY ()()
#define __MGX_DEFER7(m) m __MGX_DEFER6 __MGX_EMPTY ()()
#define __MGX_DEFER8(m) m __MGX_DEFER7 __MGX_EMPTY ()()
#define __MGX_DEFER9(m) m __MGX_DEFER8 __MGX_EMPTY ()()
#define __MGX_DEFER10(m) m __MGX_DEFER9 __MGX_EMPTY ()()
#define __MGX_DEFER11(m) m __MGX_DEFER10 __MGX_EMPTY ()()
#define __MGX_DEFER12(m) m __MGX_DEFER11 __MGX_EMPTY ()()
#define __MGX_DEFER13(m) m __MGX_DEFER12 __MGX_EMPTY ()()
#define __MGX_DEFER14(m) m __MGX_DEFER13 __MGX_EMPTY ()()
#define __MGX_DEFER15(m) m __MGX_DEFER14 __MGX_EMPTY ()()
#define __MGX_DEFER16(m) m __MGX_DEFER15 __MGX_EMPTY ()()
#define __MGX_DEFER17(m) m __MGX_DEFER16 __MGX_EMPTY ()()
#define __MGX_DEFER18(m) m __MGX_DEFER17 __MGX_EMPTY ()()
#define __MGX_DEFER19(m) m __MGX_DEFER18 __MGX_EMPTY ()()
#define __MGX_DEFER20(m) m __MGX_DEFER19 __MGX_EMPTY ()()
#define __MGX_DEFER21(m) m __MGX_DEFER20 __MGX_EMPTY ()()
#define __MGX_DEFER22(m) m __MGX_DEFER21 __MGX_EMPTY ()()
#define __MGX_DEFER23(m) m __MGX_DEFER22 __MGX_EMPTY ()()
#define __MGX_DEFER24(m) m __MGX_DEFER23 __MGX_EMPTY ()()
#define __MGX_DEFER25(m) m __MGX_DEFER24 __MGX_EMPTY ()()
#define __MGX_DEFER26(m) m __MGX_DEFER25 __MGX_EMPTY ()()
#define __MGX_DEFER27(m) m __MGX_DEFER26 __MGX_EMPTY ()()
#define __MGX_DEFER28(m) m __MGX_DEFER27 __MGX_EMPTY ()()
#define __MGX_DEFER29(m) m __MGX_DEFER28 __MGX_EMPTY ()()
#define __MGX_DEFER30(m) m __MGX_DEFER29 __MGX_EMPTY ()()
#define __MGX_DEFER31(m) m __MGX_DEFER30 __MGX_EMPTY ()()
#define __MGX_DEFER32(m) m __MGX_DEFER31 __MGX_EMPTY ()()
#define __MGX_DEFER33(m) m __MGX_DEFER32 __MGX_EMPTY ()()
#define __MGX_DEFER34(m) m __MGX_DEFER33 __MGX_EMPTY ()()
#define __MGX_DEFER35(m) m __MGX_DEFER34 __MGX_EMPTY ()()
#define __MGX_DEFER36(m) m __MGX_DEFER35 __MGX_EMPTY ()()
#define __MGX_DEFER37(m) m __MGX_DEFER36 __MGX_EMPTY ()()
#define __MGX_DEFER38(m) m __MGX_DEFER37 __MGX_EMPTY ()()
#define __MGX_DEFER39(m) m __MGX_DEFER38 __MGX_EMPTY ()()
#define __MGX_DEFER40(m) m __MGX_DEFER39 __MGX_EMPTY ()()
#define __MGX_DEFER41(m) m __MGX_DEFER40 __MGX_EMPTY ()()
#define __MGX_DEFER42(m) m __MGX_DEFER41 __MGX_EMPTY ()()
#define __MGX_DEFER43(m) m __MGX_DEFER42 __MGX_EMPTY ()()
#define __MGX_DEFER44(m) m __MGX_DEFER43 __MGX_EMPTY ()()
#define __MGX_DEFER45(m) m __MGX_DEFER44 __MGX_EMPTY ()()
#define __MGX_DEFER46(m) m __MGX_DEFER45 __MGX_EMPTY ()()
#define __MGX_DEFER47(m) m __MGX_DEFER46 __MGX_EMPTY ()()
#define __MGX_DEFER48(m) m __MGX_DEFER47 __MGX_EMPTY ()()
#define __MGX_DEFER49(m) m __MGX_DEFER48 __MGX_EMPTY ()()
#define __MGX_DEFER50(m) m __MGX_DEFER49 __MGX_EMPTY ()()
#define __MGX_DEFER51(m) m __MGX_DEFER50 __MGX_EMPTY ()()
#define __MGX_DEFER52(m) m __MGX_DEFER51 __MGX_EMPTY ()()
#define __MGX_DEFER53(m) m __MGX_DEFER52 __MGX_EMPTY ()()
#define __MGX_DEFER54(m) m __MGX_DEFER53 __MGX_EMPTY ()()
#define __MGX_DEFER55(m) m __MGX_DEFER54 __MGX_EMPTY ()()
#define __MGX_DEFER56(m) m __MGX_DEFER55 __MGX_EMPTY ()()
#define __MGX_DEFER57(m) m __MGX_DEFER56 __MGX_EMPTY ()()
#define __MGX_DEFER58(m) m __MGX_DEFER57 __MGX_EMPTY ()()
#define __MGX_DEFER59(m) m __MGX_DEFER58 __MGX_EMPTY ()()
#define __MGX_DEFER60(m) m __MGX_DEFER59 __MGX_EMPTY ()()
#define __MGX_DEFER61(m) m __MGX_DEFER60 __MGX_EMPTY ()()
#define __MGX_DEFER62(m) m __MGX_DEFER61 __MGX_EMPTY ()()
#define __MGX_DEFER63(m) m __MGX_DEFER62 __MGX_EMPTY ()()
#define __MGX_DEFER64(m) m __MGX_DEFER63 __MGX_EMPTY ()()
#define __MGX_DEFER65(m) m __MGX_DEFER64 __MGX_EMPTY ()()
#define __MGX_DEFER66(m) m __MGX_DEFER65 __MGX_EMPTY ()()
#define __MGX_DEFER67(m) m __MGX_DEFER66 __MGX_EMPTY ()()
#define __MGX_DEFER68(m) m __MGX_DEFER67 __MGX_EMPTY ()()
#define __MGX_DEFER69(m) m __MGX_DEFER68 __MGX_EMPTY ()()
#define __MGX_DEFER70(m) m __MGX_DEFER69 __MGX_EMPTY ()()
#define __MGX_DEFER71(m) m __MGX_DEFER70 __MGX_EMPTY ()()
#define __MGX_DEFER72(m) m __MGX_DEFER71 __MGX_EMPTY ()()
#define __MGX_DEFER73(m) m __MGX_DEFER72 __MGX_EMPTY ()()
#define __MGX_DEFER74(m) m __MGX_DEFER73 __MGX_EMPTY ()()
#define __MGX_DEFER75(m) m __MGX_DEFER74 __MGX_EMPTY ()()
#define __MGX_DEFER76(m) m __MGX_DEFER75 __MGX_EMPTY ()()
#define __MGX_DEFER77(m) m __MGX_DEFER76 __MGX_EMPTY ()()
#define __MGX_DEFER78(m) m __MGX_DEFER77 __MGX_EMPTY ()()
#define __MGX_DEFER79(m) m __MGX_DEFER78 __MGX_EMPTY ()()
#define __MGX_DEFER80(m) m __MGX_DEFER79 __MGX_EMPTY ()()
#define __MGX_DEFER81(m) m __MGX_DEFER80 __MGX_EMPTY ()()
#define __MGX_DEFER82(m) m __MGX_DEFER81 __MGX_EMPTY ()()
#define __MGX_DEFER83(m) m __MGX_DEFER82 __MGX_EMPTY ()()
#define __MGX_DEFER84(m) m __MGX_DEFER83 __MGX_EMPTY ()()
#define __MGX_DEFER85(m) m __MGX_DEFER84 __MGX_EMPTY ()()
#define __MGX_DEFER86(m) m __MGX_DEFER85 __MGX_EMPTY ()()
#define __MGX_DEFER87(m) m __MGX_DEFER86 __MGX_EMPTY ()()
#define __MGX_DEFER88(m) m __MGX_DEFER87 __MGX_EMPTY ()()
#define __MGX_DEFER89(m) m __MGX_DEFER88 __MGX_EMPTY ()()
#define __MGX_DEFER90(m) m __MGX_DEFER89 __MGX_EMPTY ()()
#define __MGX_DEFER91(m) m __MGX_DEFER90 __MGX_EMPTY ()()
#define __MGX_DEFER92(m) m __MGX_DEFER91 __MGX_EMPTY ()()
#define __MGX_DEFER93(m) m __MGX_DEFER92 __MGX_EMPTY ()()
#define __MGX_DEFER94(m) m __MGX_DEFER93 __MGX_EMPTY ()()
#define __MGX_DEFER95(m) m __MGX_DEFER94 __MGX_EMPTY ()()
#define __MGX_DEFER96(m) m __MGX_DEFER95 __MGX_EMPTY ()()
#define __MGX_DEFER97(m) m __MGX_DEFER96 __MGX_EMPTY ()()
#define __MGX_DEFER98(m) m __MGX_DEFER97 __MGX_EMPTY ()()
#define __MGX_DEFER99(m) m __MGX_DEFER98 __MGX_EMPTY ()()
#define __MGX_DEFER100(m) m __MGX_DEFER99 __MGX_EMPTY ()()

#define __MGX_DEFER_n(n, m) __MGX_CAT_(__MGX_DEFER, n)(m)
#define __MGX_DEFER_max(m) __MGX_DEFER_n(__MGX_DEFER_MAX, m)

#define __MGX_DEFER_MAX 100

// ARGS
#include "MGX_arg.h"

// Detection
#define __MGX_CHECK_B(a,b, ...) b
#define __MGX_CHECK(...) __MGX_CHECK_B(__VA_ARGS__, 0,)
#define __MGX_PROBE(...) x, 1,


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
#define __MGX_FOR_INDIRECT2() __MGX_FOR2
#define __MGX_FOR2(I, E, OP, ...) MGX_WHEN(MGX_NOT(MGX_NUM_EQUAL(I, E)))(__MGX_DEFER2(MGX_ARG_FIRST(__VA_ARGS__))(I MGX_ARG_TAIL_OPT(__VA_ARGS__)) __MGX_DEFER2(__MGX_FOR_INDIRECT2)()(OP(I), E, OP, __VA_ARGS__))


// Functions
#define MGX_IF(c) __MGX_IIF(MGX_BOOL(MGX_ARG_FIRST(c, 0)))
#define MGX_WHEN(c) MGX_IF(c)(__MGX_COND_EXPAND, __MGX_EAT)
#define MGX_WHEN_NOT(c) MGX_IF(c)(__MGX_EAT, __MGX_COND_EXPAND)
#define MGX_FOR(I, E, OP, ...) __MGX_EVAL(__MGX_FOR(I, E, OP, __VA_ARGS__))
#define MGX_WHILE(c, ...) __MGX_EVAL(__MGX_WHILE(c, __VA_ARGS__))
#define MGX_WHILE2(c, ...) __MGX_2EVAL(__MGX_WHILE2(c, __VA_ARGS__))
