#define __MGX_DEC_MGX_ERROR MGX_ERROR
#define __MGX_DEC_0 MGX_ERROR
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
#define __MGX_INC_50 MGX_ERROR
#define __MGX_INC_MGX_ERROR MGX_ERROR

#define __MGX_NUM_CAT(a, b) __MGX_NUM_CAT_(a, b)
#define __MGX_NUM_CAT_(a, b) a ## b



#define __MGX_NUM_EVAL(...) __MGX_NUM_EVAL1(__MGX_NUM_EVAL1(__MGX_NUM_EVAL1(__VA_ARGS__)))
#define __MGX_NUM_EVAL1(...) __MGX_NUM_EVAL2(__MGX_NUM_EVAL2(__MGX_NUM_EVAL2(__VA_ARGS__)))
#define __MGX_NUM_EVAL2(...) __MGX_NUM_EVAL3(__MGX_NUM_EVAL3(__MGX_NUM_EVAL3(__VA_ARGS__)))
#define __MGX_NUM_EVAL3(...) __MGX_NUM_EVAL4(__MGX_NUM_EVAL4(__MGX_NUM_EVAL4(__VA_ARGS__)))
#define __MGX_NUM_EVAL4(...) __MGX_NUM_EVAL5(__MGX_NUM_EVAL5(__MGX_NUM_EVAL5(__VA_ARGS__)))
#define __MGX_NUM_EVAL5(...) __VA_ARGS__

#define __MGX_NUM_IS_0_0 __MGX_PROBE(~)
#define __MGX_NUM_IS_1_1 __MGX_PROBE(~)
#define __MGX_NUM_IS_MGX_ERROR_MGX_ERROR __MGX_PROBE(~)
#define __MGX_NUM_WHILE(c, ...) __MGX_NUM_EVAL(__MGX_WHILE(c, __VA_ARGS__))

#define __MGX_NUM_IS(a, b) __MGX_CHECK(__MGX_NUM_CAT(__MGX_NUM_CAT(__MGX_NUM_CAT(__MGX_NUM_IS_,a), _), b))

#define __MGX_NUM_SUB(a, b) MGX_DEC(a), MGX_DEC(b)
#define __MGX_NUM_ADD(a, b) MGX_DEC(a), MGX_INC(b)

#define __MGX_NUM_CMP(M, a, b) __MGX_NUM_CMP_(M, a, b)
#define __MGX_NUM_CMP_(M, a, b) M(MGX_SUB(b, a))
#define __MGX_NUM_CMP_LESS(A) MGX_AND(MGX_NUM_NOT_ZERO(A), MGX_NOT(__MGX_NUM_IS(A, MGX_ERROR)))
#define __MGX_NUM_CMP_GREATER(A) MGX_NOT(MGX_OR(MGX_NUM_IS(A, 0), MGX_NOT(__MGX_NUM_IS(A, MGX_ERROR))))

#define MGX_DEC(n) __MGX_CAT_(__MGX_DEC_, n)
#define MGX_INC(n) __MGX_CAT_(__MGX_INC_, n)
#define MGX_SUB(a, b) MGX_ARG_SECOND(__MGX_NUM_WHILE(MGX_NUM_NOT_ZERO, __MGX_NUM_SUB, b, a))
#define MGX_ADD(a, b) MGX_ARG_SECOND(__MGX_NUM_WHILE(MGX_NUM_NOT_ZERO, __MGX_NUM_ADD, b, a))

#define MGX_NUM_NOT_ZERO(...) MGX_NOT(__MGX_NUM_IS(__MGX_ARG_FIRST(__VA_ARGS__), 0))

#define MGX_NUM_EQUAL(a, b) __MGX_NUM_CMP(MGX_NOT, a, b)
#define MGX_NUM_LESS(a, b) __MGX_NUM_CMP(__MGX_NUM_CMP_LESS, a, b)
#define MGX_NUM_GREATER(a, b) __MGX_NUM_CMP(__MGX_NUM_CMP_GREATER, a, b)
