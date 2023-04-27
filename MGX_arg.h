#define __MGX_ARG_EXPAND(...) __VA_ARGS__
#define __MGX_ARG_FIRST(A, ...) A

#define __MGX_ARG_IS_PAREN(a) __MGX_CHECK(__MGX_ARG_EXPAND(__MGX_PROBE a))
#define __MGX_ARG_SANITIZE(...) MGX_IF(__MGX_ARG_IS_PAREN(MGX_ARG_FIRST(__VA_ARGS__)))(A, __VA_ARGS__)

#define __MGX_ARG_COUNT_CHECK(...) __MGX_CHECK(__MGX_CAT(__MGX_ARG_COUNT_, __MGX_ARG_SANITIZE( __MGX_CHECK_B(__VA_ARGS__, MGX_NULL))))
#define __MGX_ARG_COUNT_MGX_NULL __MGX_PROBE(~)
#define __MGX_ARG_IIF(c) __MGX_CAT(__MGX_ARG_IIF_, c)
#define __MGX_ARG_IIF_0(t, f) f
#define __MGX_ARG_IIF_1(t, f) t

#define __MGX_ARG_TAIL_(A, ...) __VA_ARGS__

#define __MGX_ARG_TAIL_OPT_SUR_(A, ...) , __VA_ARGS__,
#define __MGX_ARG_TAIL_OPT_PRE_(A, ...) __VA_ARGS__,

#define __MGX_ARG_TAIL_OPT_(A, ...) , __VA_ARGS__

#define __MGX_ARG_COUNT(...) __MGX_ARG_COUNT_(__VA_ARGS__,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)
#define __MGX_ARG_COUNT_(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100, N, ...) N

#define __MGX_ARG_NEXT(N, A, ...) MGX_DEC(N), __VA_ARGS__
#define __MGX_ARG_GET(N, ...) MGX_ARG_GET_N(N, __VA_ARGS__)

#define __MGX_ARG_SECOND(A, B, ...) B


#define __MGX_ARG_EVAL(...) __MGX_ARG_EVAL1(__MGX_ARG_EVAL1(__MGX_ARG_EVAL1(__VA_ARGS__)))
#define __MGX_ARG_EVAL1(...) __MGX_ARG_EVAL2(__MGX_ARG_EVAL2(__MGX_ARG_EVAL2(__VA_ARGS__)))
#define __MGX_ARG_EVAL2(...) __MGX_ARG_EVAL3(__MGX_ARG_EVAL3(__MGX_ARG_EVAL3(__VA_ARGS__)))
#define __MGX_ARG_EVAL3(...) __MGX_ARG_EVAL4(__MGX_ARG_EVAL4(__MGX_ARG_EVAL4(__VA_ARGS__)))
#define __MGX_ARG_EVAL4(...) __MGX_ARG_EVAL5(__MGX_ARG_EVAL5(__MGX_ARG_EVAL5(__VA_ARGS__)))
#define __MGX_ARG_EVAL5(...) __VA_ARGS__

#define __MGX_ARG_2EVAL(...) __MGX_ARG_2EVAL1(__MGX_ARG_2EVAL1(__MGX_ARG_2EVAL1(__VA_ARGS__)))
#define __MGX_ARG_2EVAL1(...) __MGX_ARG_2EVAL2(__MGX_ARG_2EVAL2(__MGX_ARG_2EVAL2(__VA_ARGS__)))
#define __MGX_ARG_2EVAL2(...) __MGX_ARG_2EVAL3(__MGX_ARG_2EVAL3(__MGX_ARG_2EVAL3(__VA_ARGS__)))
#define __MGX_ARG_2EVAL3(...) __MGX_ARG_2EVAL4(__MGX_ARG_2EVAL4(__MGX_ARG_2EVAL4(__VA_ARGS__)))
#define __MGX_ARG_2EVAL4(...) __MGX_ARG_2EVAL5(__MGX_ARG_2EVAL5(__MGX_ARG_2EVAL5(__VA_ARGS__)))
#define __MGX_ARG_2EVAL5(...) __VA_ARGS__

#define __MGX_ARG_WHILE(c, ...) __MGX_ARG_2EVAL(__MGX_WHILE(c, __VA_ARGS__))

#define __MGX_ARG_FORWARD_P(I, ...) MGX_ARG_GET_N(I, __VA_ARGS__),
#define __MGX_ARG_FORWARD(I, PARGS, M, ...) M __MGX_ARG_EVAL( __MGX_LPAREN_() __MGX_FOR2(0, PARGS, MGX_INC, __MGX_ARG_FORWARD_P, __VA_ARGS__) MGX_ARG_GET_N(I, __VA_ARGS__) __MGX_RPAREN_() )

#define __MGX_ARG_FOREACH(PARGS, M, ...) MGX_FOR(PARGS, MGX_ARG_COUNT(__VA_ARGS__), MGX_INC, __MGX_ARG_FORWARD, PARGS, M, __VA_ARGS__)

// Functions

#define MGX_ARG_FIRST(...) __MGX_ARG_FIRST(__VA_ARGS__, ~)
#define MGX_ARG_SECOND(...) __MGX_ARG_SECOND(__VA_ARGS__,,,)
#define MGX_ARG_LAST(...) MGX_ARG_GET_N(MGX_DEC(MGX_ARG_COUNT(__VA_ARGS__)), __VA_ARGS__)
#define MGX_ARG_GET_N(n, ...) MGX_ARG_SECOND(__MGX_ARG_WHILE(MGX_NUM_NOT_ZERO, __MGX_ARG_NEXT, n, __VA_ARGS__), )

#define MGX_ARG_CUT(...) __MGX_ARG_EVAL(__MGX_FOR2(0, MGX_DEC(MGX_ARG_COUNT(__VA_ARGS__)), MGX_INC, __MGX_ARG_GET, __VA_ARGS__))
#define MGX_ARG_CUT_OPT(...) MGX_WHEN(MGX_NUM_NOT_ZERO(MGX_DEC(MGX_ARG_COUNT(__VA_ARGS__))))(, MGX_ARG_CUT(__VA_ARGS__))

#define MGX_ARG_TAIL(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_)(__VA_ARGS__)
#define MGX_ARG_TAIL_OPT_SUR(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_OPT_SUR_)(__VA_ARGS__)
#define MGX_ARG_TAIL_OPT_PRE(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_OPT_PRE_)(__VA_ARGS__)
#define MGX_ARG_TAIL_OPT(...) __MGX_ARG_IIF(__MGX_ARG_COUNT_CHECK(__VA_ARGS__))(__MGX_EAT, __MGX_ARG_TAIL_OPT_)(__VA_ARGS__)
#define MGX_ARG_FOREACH(M, ...) __MGX_ARG_FOREACH(1, M, __VA_ARGS__)
#define MGX_ARG_COUNT __MGX_ARG_COUNT