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
#define __MGX_DEC___MGX_DEC_ERROR __MGX_DEC_ERROR
#define __MGX_DEC_0 __MGX_DEC_ERROR
#define __MGX_DEC_1 0
#define __MGX_DEC_2 1
#define __MGX_DEC_3 2
#define __MGX_DEC_4 3
#define __MGX_DEC_5 4
#define __MGX_DEC_6 5
#define __MGX_DEC_7 6
#define __MGX_DEC_8 7
#define __MGX_DEC_9 8
#define __MGX_DEC_10 9
#define __MGX_DEC_11 10
#define __MGX_DEC_12 11
#define __MGX_DEC_13 12
#define __MGX_DEC_14 13
#define __MGX_DEC_15 14
#define __MGX_DEC_16 15
#define __MGX_DEC_17 16
#define __MGX_DEC_18 17
#define __MGX_DEC_19 18
#define __MGX_DEC_20 19
#define __MGX_DEC_21 20
#define __MGX_DEC_22 21
#define __MGX_DEC_23 22
#define __MGX_DEC_24 23
#define __MGX_DEC_25 24
#define __MGX_DEC_26 25
#define __MGX_DEC_27 26
#define __MGX_DEC_28 27
#define __MGX_DEC_29 28
#define __MGX_DEC_30 29
#define __MGX_DEC_31 30
#define __MGX_DEC_32 31
#define __MGX_DEC_33 32
#define __MGX_DEC_34 33
#define __MGX_DEC_35 34
#define __MGX_DEC_36 35
#define __MGX_DEC_37 36
#define __MGX_DEC_38 37
#define __MGX_DEC_39 38
#define __MGX_DEC_40 39
#define __MGX_DEC_41 40
#define __MGX_DEC_42 41
#define __MGX_DEC_43 42
#define __MGX_DEC_44 43
#define __MGX_DEC_45 44
#define __MGX_DEC_46 45
#define __MGX_DEC_47 46
#define __MGX_DEC_48 47
#define __MGX_DEC_49 48
#define __MGX_DEC_50 49

#define __MGX_INC_0 1
#define __MGX_INC_1 2
#define __MGX_INC_2 3
#define __MGX_INC_3 4
#define __MGX_INC_4 5
#define __MGX_INC_5 6
#define __MGX_INC_6 7
#define __MGX_INC_7 8
#define __MGX_INC_8 9
#define __MGX_INC_9 10
#define __MGX_INC_10 11
#define __MGX_INC_11 12
#define __MGX_INC_12 13
#define __MGX_INC_13 14
#define __MGX_INC_14 15
#define __MGX_INC_15 16
#define __MGX_INC_16 17
#define __MGX_INC_17 18
#define __MGX_INC_18 19
#define __MGX_INC_19 20
#define __MGX_INC_20 21
#define __MGX_INC_21 22
#define __MGX_INC_22 23
#define __MGX_INC_23 24
#define __MGX_INC_24 25
#define __MGX_INC_25 26
#define __MGX_INC_26 27
#define __MGX_INC_27 28
#define __MGX_INC_28 29
#define __MGX_INC_29 30
#define __MGX_INC_30 31
#define __MGX_INC_31 32
#define __MGX_INC_32 33
#define __MGX_INC_33 34
#define __MGX_INC_34 35
#define __MGX_INC_35 36
#define __MGX_INC_36 37
#define __MGX_INC_37 38
#define __MGX_INC_38 39
#define __MGX_INC_39 40
#define __MGX_INC_40 41
#define __MGX_INC_41 42
#define __MGX_INC_42 43
#define __MGX_INC_43 44
#define __MGX_INC_44 45
#define __MGX_INC_45 46
#define __MGX_INC_46 47
#define __MGX_INC_47 48
#define __MGX_INC_48 49
#define __MGX_INC_49 50
#define __MGX_INC_50 __MGX_INC_ERROR
#define __MGX_INC___MGX_INC_ERROR __MGX_INC_ERROR

#define __MGX_NUM_IS_0_0 __MGX_PROBE(~)

#define __MGX_IS_ZERO(c) __MGX_CHECK(__MGX_CAT_(__MGX_IS_ZERO_, c))
#define __MGX_IS_ZERO_0 __MGX_PROBE(~)

#define __MGX_DEC(n) __MGX_CAT_(__MGX_DEC_, n)
#define __MGX_INC(n) __MGX_CAT_(__MGX_INC_, n)

#define __MGX_LESS_IIF(c) __MGX_CAT_(__MGX_LESS_IIF_, c)
#define __MGX_LESS_IIF_0(t,f) f
#define __MGX_LESS_IIF_1(t,f) t

#define __MGX_LESS(a,b) __MGX_EVAL(__MGX_LESS_
#define __MGX_LESS_(a,b) __MGX_LESS_IIF(__MGX_IS_ZERO


//Defer

#define __MGX_EVAL(...) __MGX_EVAL1(__MGX_EVAL1(__MGX_EVAL1(__VA_ARGS__)))
#define __MGX_EVAL1(...) __MGX_EVAL2(__MGX_EVAL2(__MGX_EVAL2(__VA_ARGS__)))
#define __MGX_EVAL2(...) __MGX_EVAL3(__MGX_EVAL3(__MGX_EVAL3(__VA_ARGS__)))
#define __MGX_EVAL3(...) __MGX_EVAL4(__MGX_EVAL4(__MGX_EVAL4(__VA_ARGS__)))
#define __MGX_EVAL4(...) __MGX_EVAL5(__MGX_EVAL5(__MGX_EVAL5(__VA_ARGS__)))
#define __MGX_EVAL5(...) __VA_ARGS__

#define __MGX_EMPTY()
#define __MGX_DEFER(m) m __MGX_EMPTY()
#define __MGX_DEFER0 __MGX_DEFER
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

#define __MGX_DEFER_n(n, m) __MGX_CAT_(__MGX_DEFER, n)(m)

#define __MGX_DEFER_MAX 50

// ARGS
#define __MGX_GET_FIRST(...) __MGX_GET_FIRST_(__VA_ARGS__, ~)
#define __MGX_GET_FIRST_(A, ...) A

#define __MGX_ARG_COUNT_CHECK(...) __MGX_CHECK(__MGX_CAT(__MGX_ARG_COUNT_, __MGX_CHECK_B(__VA_ARGS__, __MGX_NULL)))
#define __MGX_ARG_COUNT____MGX_NULL __MGX_PROBE(~)
#define __MGX_ARG_IIF(c) __MGX_CAT_(__MGX_ARG_IIF_, c)
#define __MGX_ARG_IIF_0(t, f) f
#define __MGX_ARG_IIF_1(t, f) t
#define __MGX_ARG_FIRST(...) __MGX_ARG_IIF(__MGX_ARG_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_FIRST_)(__VA_ARGS__)
#define __MGX_ARG_FIRST_OPT(...) __MGX_ARG_IIF(__MGX_ARG_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_FIRST_OPT_)(__VA_ARGS__)
#define __MGX_ARG_FIRST_(A, ...) __VA_ARGS__
#define __MGX_ARG_FIRST_OPT_(A, ...) , __VA_ARGS__

#define __MGX_ARG_COUNT(...) __MGX_ARG_COUNT_(__VA_ARGS__,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1)
#define __MGX_ARG_COUNT_(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50, N) N

#define __MGX_ARG_OPT(...) 


#define __MGX_CMP(a, b)

// Detection
#define __MGX_CHECK_B(a,b, ...) b
#define __MGX_CHECK(...) __MGX_CHECK_B(__VA_ARGS__, 0,)
#define __MGX_PROBE(x) x, 1,


//Boolean
#define __MGX_NOT(x) __MGX_CHECK(__MGX_CAT_(__MGX_NOT_, x))
#define __MGX_NOT_0 1
#define __MGX_NOT_false 1

#define __MGX_OR(a, b) __MGX_BITOR(__MGX_BOOL(a))(__MGX_BOOL(b))
#define __MGX_BITOR(a) __MGX_CAT_(__MGX_BITOR_, a)
#define __MGX_BITOR_0(b) b
#define __MGX_BITOR_1(b) 1

#define __MGX_AND(a, b) __MGX_BITAND(__MGX_BOOL(a))(__MGX_BOOL(b))
#define __MGX_BITAND(a) __MGX_CAT_(__MGX_BITAND_, a)
#define __MGX_BITAND_0(b) 0
#define __MGX_BITAND_1(b) b

#define __MGX_BOOL(x) __MGX_CHECK(__MGX_CAT_(__MGX_BOOL_, x))
#define __MGX_BOOL_true __MGX_PROBE(~)
#define __MGX_BOOL_1 __MGX_PROBE(~)


// Conditional
#define __MGX_IIF(c) __MGX_CAT(__MGX_IIF_, c)
#define __MGX_IIF_0(t, f) f
#define __MGX_IIF_1(t, f) t

#define MGX_IF(c) __MGX_IIF(__MGX_BOOL(__MGX_GET_FIRST(c, 0)))
#define MGX_WHEN(c) MGX_IF(c)(__MGX_EXPAND, __MGX_EAT)
#define MGX_WHEN_NOT(c) MGX_IF(c)(__MGX_EAT, __MGX_EXPAND)
#define MGX_FOR(I, T,
__MGX_IS_ZERO(1)
__MGX_IS_ZERO(0)
