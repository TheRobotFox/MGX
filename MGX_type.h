#pragma once
#include "MGX_base.h"
#define __MGX_T_CAT(a, ...) __MGX_T_CAT_(a,__VA_ARGS__)
#define __MGX_T_CAT_(a, ...) a ## __VA_ARGS__
#define __MGX_T_CAT2(a,b) __MGX_T_CAT2_(a,b)
#define __MGX_T_CAT2_(a,b) a ## b
#define __MGX_T_EXPAND(...) __VA_ARGS__
#define __MGX_T_EXPAND2(...) __VA_ARGS__
#define __MGX_T_EXPAND3(...) __VA_ARGS__
#define __MGX_T_EXPAND4(...) __VA_ARGS__
#define __MGX_T_EXPAND5(...) __VA_ARGS__
#define __MGX_T_EXPAND6(...) __VA_ARGS__

#define __MGX_T_EVAL(...) __MGX_T_EVAL1(__MGX_T_EVAL1(__MGX_T_EVAL1(__VA_ARGS__)))
#define __MGX_T_EVAL1(...) __MGX_T_EVAL2(__MGX_T_EVAL2(__MGX_T_EVAL2(__VA_ARGS__)))
#define __MGX_T_EVAL2(...) __MGX_T_EVAL3(__MGX_T_EVAL3(__MGX_T_EVAL3(__VA_ARGS__)))
#define __MGX_T_EVAL3(...) __MGX_T_EVAL4(__MGX_T_EVAL4(__MGX_T_EVAL4(__VA_ARGS__)))
#define __MGX_T_EVAL4(...) __MGX_T_EVAL5(__MGX_T_EVAL5(__MGX_T_EVAL5(__VA_ARGS__)))
#define __MGX_T_EVAL5(...) __VA_ARGS__

#define __MGX_T_inv_3_5_Table_100 0
#define __MGX_T_inv_3_5_Table_97 5
#define __MGX_T_inv_3_5_Table_94 10
#define __MGX_T_inv_3_5_Table_91 15
#define __MGX_T_inv_3_5_Table_88 20
#define __MGX_T_inv_3_5_Table_85 25
#define __MGX_T_inv_3_5_Table_82 30
#define __MGX_T_inv_3_5_Table_79 35
#define __MGX_T_inv_3_5_Table_76 40
#define __MGX_T_inv_3_5_Table_73 45
#define __MGX_T_inv_3_5_Table_70 50
#define __MGX_T_inv_3_5_Table_67 55
#define __MGX_T_inv_3_5_Table_64 60
#define __MGX_T_inv_3_5_Table_61 65
#define __MGX_T_inv_3_5_Table_58 70
#define __MGX_T_inv_3_5_Table_55 75
#define __MGX_T_inv_3_5_Table_52 80
#define __MGX_T_inv_3_5_Table_49 85
#define __MGX_T_inv_3_5_Table_46 90
#define __MGX_T_inv_3_5_Table_43 95
#define __MGX_T_inv_3_5_Table_40 100
#define __MGX_T_inv_3_5_Table_37 105
#define __MGX_T_inv_3_5_Table_34 110
#define __MGX_T_inv_3_5_Table_31 115
#define __MGX_T_inv_3_5_Table_28 120
#define __MGX_T_inv_3_5_Table_25 125
#define __MGX_T_inv_3_5_Table_22 130
#define __MGX_T_inv_3_5_Table_19 135
#define __MGX_T_inv_3_5_Table_16 140
#define __MGX_T_inv_3_5_Table_13 145
#define __MGX_T_inv_3_5_Table_10 150
#define __MGX_T_inv_3_5_Table_7 155
#define __MGX_T_inv_3_5_Table_4 160
#define __MGX_T_inv_3_5_Table_1 165

#define __MGX_T_inv_3_4_Table_100 0
#define __MGX_T_inv_3_4_Table_97 4
#define __MGX_T_inv_3_4_Table_94 8
#define __MGX_T_inv_3_4_Table_91 12
#define __MGX_T_inv_3_4_Table_88 16
#define __MGX_T_inv_3_4_Table_85 20
#define __MGX_T_inv_3_4_Table_82 24
#define __MGX_T_inv_3_4_Table_79 28
#define __MGX_T_inv_3_4_Table_76 32
#define __MGX_T_inv_3_4_Table_73 36
#define __MGX_T_inv_3_4_Table_70 40
#define __MGX_T_inv_3_4_Table_67 44
#define __MGX_T_inv_3_4_Table_64 48
#define __MGX_T_inv_3_4_Table_61 52
#define __MGX_T_inv_3_4_Table_58 56
#define __MGX_T_inv_3_4_Table_55 60
#define __MGX_T_inv_3_4_Table_52 64
#define __MGX_T_inv_3_4_Table_49 68
#define __MGX_T_inv_3_4_Table_46 72
#define __MGX_T_inv_3_4_Table_43 76
#define __MGX_T_inv_3_4_Table_40 80
#define __MGX_T_inv_3_4_Table_37 84
#define __MGX_T_inv_3_4_Table_34 88
#define __MGX_T_inv_3_4_Table_31 92
#define __MGX_T_inv_3_4_Table_28 96
#define __MGX_T_inv_3_4_Table_25 100
#define __MGX_T_inv_3_4_Table_22 104
#define __MGX_T_inv_3_4_Table_19 108
#define __MGX_T_inv_3_4_Table_16 112
#define __MGX_T_inv_3_4_Table_13 116
#define __MGX_T_inv_3_4_Table_10 120
#define __MGX_T_inv_3_4_Table_7 124
#define __MGX_T_inv_3_4_Table_4 128
#define __MGX_T_inv_3_4_Table_1 132

#define __MGX_T_FAST_MUL(Z, N) __MGX_T_inv_3_##Z##_Table_##N

#define __MGX_T_IS_COMP_restrict true
#define __MGX_T_IS_COMP_struct true
#define __MGX_T_IS_COMP_union true
#define __MGX_T_IS_COMP_enum true
#define __MGX_T_IS_COMP_const true
#define __MGX_T_IS_COMP_static true
#define __MGX_T_IS_COMP_volatile true
#define __MGX_T_IS_COMP_COMP(...) true

#define __MGX_T_IS_ARRAY_ARRAY(...) true
#define __MGX_T_IS_PTR_PTR(...) true

#define __MGX_T_IS_ARRAY(T) __MGX_T_CAT_(__MGX_T_IS_ARRAY_, T)
#define __MGX_T_IS_PTR(T) __MGX_T_CAT_(__MGX_T_IS_PTR_, T)
#define __MGX_T_IS_COMP(T) __MGX_T_CAT_(__MGX_T_IS_COMP_, T)


#define __MGX_T_IS_RIGHT(T) MGX_ARG_SECOND(__MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_R, T), )

#define __MGX_T_GET_R(T) T, 0
#define __MGX_T_GET_R_COMP(L, A, S, res) A, res
#define __MGX_T_GET_R_ARRAY(L, A, S, res) A, 1
#define __MGX_T_GET_R_PTR(L, A, res) A, res


#define __MGX_T_FORWARD_RECURSIVE(M, ...) __MGX_T_EVAL(__MGX_T_FORWARD_RECURSIVE_(M, __MGX_DEFER_MAX, __VA_ARGS__))

#define __MGX_T_FORWARD_RECURSIVE_(M, L, ...) MGX_IF(__MGX_T_IS_ARRAY(MGX_ARG_FIRST(__VA_ARGS__)))\
				   (__MGX_T_FORWARD_RECURSIVE__(ARRAY, M, L, __VA_ARGS__), MGX_IF(__MGX_T_IS_PTR(MGX_ARG_FIRST(__VA_ARGS__))) \
				   (__MGX_T_FORWARD_RECURSIVE__(PTR, M, L, __VA_ARGS__), MGX_IF(__MGX_T_IS_COMP(MGX_ARG_FIRST(__VA_ARGS__))) \
				   (__MGX_T_FORWARD_RECURSIVE__(COMP, M, L, __MGX_T_CONVERT_COMP(MGX_ARG_FIRST(__VA_ARGS__)) MGX_ARG_TAIL_OPT(__VA_ARGS__)), M(__VA_ARGS__))))

#define __MGX_T_FORWARD_RECURSIVE__(P, M, L, ...) __MGX_T_FORWARD_RECURSIVE_CALL(M##_##P, (__MGX_T_CAT(__MGX_T_EXTRACT_, MGX_ARG_FIRST(__VA_ARGS__)) ), M, L MGX_ARG_TAIL_OPT(__VA_ARGS__))

#define __MGX_T_ARG_FIRST3(...) __MGX_T_ARG_FIRST3_(__VA_ARGS__)
#define __MGX_T_ARG_FIRST3_(A, ...) A
#define __MGX_T_ARG_FIRST2(...) __MGX_T_ARG_FIRST2_(__VA_ARGS__)
#define __MGX_T_ARG_FIRST2_(A, ...) A
#define __MGX_T_ARG_FIRST(...) __MGX_T_ARG_FIRST_(__VA_ARGS__)
#define __MGX_T_ARG_FIRST_(A, ...) A
#define __MGX_T_ARG_FIRST_INDIRECT() __MGX_T_ARG_FIRST
#define __MGX_T_ARG_FIRST2_INDIRECT() __MGX_T_ARG_FIRST2

#define __MGX_T_FORWARD_RECURSIVE_INDIRECT() __MGX_T_FORWARD_RECURSIVE_

#define __MGX_T_FORWARD_RECURSIVE_CALL(FUNCTION, ARGLIST, M, ...) __MGX_DEFER_n(MGX_ARG_FIRST(__VA_ARGS__), FUNCTION)\
	(MGX_ARG_FIRST(__VA_ARGS__), __MGX_DEFER_n(MGX_DEC(MGX_ARG_FIRST(__VA_ARGS__)), __MGX_T_ARG_FIRST_INDIRECT)()(__MGX_T_FORWARD_RECURSIVE_CALL_(M, MGX_ARG_FIRST(__VA_ARGS__), ARGLIST MGX_ARG_TAIL_OPT(__VA_ARGS__))) __MGX_T_EXPAND2( MGX_ARG_TAIL_OPT ARGLIST ) __MGX_DEFER_n(MGX_DEC(MGX_ARG_FIRST(__VA_ARGS__)), MGX_ARG_TAIL_OPT)(__MGX_T_FORWARD_RECURSIVE_CALL_(M, MGX_ARG_FIRST(__VA_ARGS__), ARGLIST MGX_ARG_TAIL_OPT(__VA_ARGS__))) )

#define __MGX_T_FORWARD_RECURSIVE_CALL_(M, L, ...) __MGX_DEFER3(__MGX_T_FORWARD_RECURSIVE_INDIRECT)() (M, MGX_DEC(MGX_DEC(MGX_DEC(L))), __MGX_T_EXPAND2( __MGX_DEFER2(__MGX_T_ARG_FIRST2_INDIRECT)() MGX_ARG_FIRST(__VA_ARGS__) ) MGX_ARG_TAIL_OPT(__VA_ARGS__))



#define __MGX_T_EXTRACT_ARRAY(T, S) T, S
#define __MGX_T_EXTRACT_PTR(T) T
#define __MGX_T_EXTRACT_COMP(S, T) T, S


#define __MGX_T_CONVERT_COMP(T) COMP(__MGX_T_CAT_(__MGX_T_EXTRACT_COMP_, T))

#define __MGX_T_EXTRACT_COMP_restrict restrict,
#define __MGX_T_EXTRACT_COMP_struct struct,
#define __MGX_T_EXTRACT_COMP_union union,
#define __MGX_T_EXTRACT_COMP_enum enum,
#define __MGX_T_EXTRACT_COMP_const const,
#define __MGX_T_EXTRACT_COMP_static static,
#define __MGX_T_EXTRACT_COMP_volatile volatile,


#define __MGX_T_GET_NAME(T) T
#define __MGX_T_GET_NAME_COMP(L, A, S) __MGX_T_CAT(S, __MGX_T_CAT_(__, A))
#define __MGX_T_GET_NAME_ARRAY(L, A, S) __MGX_T_CAT(A, __MGX_T_CAT_(__, S))
#define __MGX_T_GET_NAME_PTR(L, A) __MGX_T_CAT(A, __ptr)

#define __MGX_T_LPST() (*

#define __MGX_T_DEFER_END(L, M) __MGX_DEFER66 __MGX_DEFER_max __MGX_DEFER_max __MGX_DEFER_n (__MGX_T_FAST_MUL(4, L), __MGX_EMPTY)()(__MGX_EMPTY)()(__MGX_EMPTY)()(M)
#define __MGX_T_DEFER_ENDb(L, M) __MGX_DEFER66 __MGX_DEFER_max __MGX_DEFER_max __MGX_DEFER_n (__MGX_T_FAST_MUL(5, L), __MGX_EMPTY)()(__MGX_EMPTY)()(__MGX_EMPTY)()(M)

#define __MGX_T_GET_VAR(T, N) T, , N , ,
#define __MGX_T_GET_VAR_COMP(L, T, S, P, N, A, ptr) S T, P, N, A, last
#define __MGX_T_GET_VAR_ARRAY(L, T, S, P, N, A, ptr) T, __MGX_T_EXPAND4(P), N, __MGX_T_EXPAND4([S]A), true

#define __MGX_T_GET_VAR_PTR(L, T, P, N, A, ptr) T, P MGX_IF(ptr)(\
												 __MGX_T_DEFER_ENDb(L, __MGX_LPAREN_)(),\
												)__MGX_T_DEFER_END(L,)*, N, MGX_IF(ptr)(\
												__MGX_T_DEFER_ENDb(L, __MGX_RPAREN_)(),\
												)A,

#define __MGX_T_GET_T(T) T
#define __MGX_T_GET_T_COMP(L, A, S) S A
#define __MGX_T_GET_T_ARRAY(L, A, S) A
#define __MGX_T_GET_T_PTR(L, A) A

#define __MGX_T_GET_I(A, I, a) I(A __MGX_T_EXPAND3 a)
#define __MGX_T_GET_I_COMP(A, S) S A
#define __MGX_T_GET_I_ARRAY(A, S) ARRAY(A, S)
#define __MGX_T_GET_I_PTR(A) PTR(A)

#define __MGX_T_POST(...) __MGX_T_POST_(__VA_ARGS__)
#define __MGX_T_POST_(T, P, N, A, ptr, raw) T P N A

#define __MGX_T_INJECT(T, I, A) __MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_I, T, I, A)

// Functions
#define MGX_T_NAME(T) __MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_NAME, T)
#define MGX_T_VAR(T, name) __MGX_T_POST(__MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_VAR, T, name), __MGX_T_IS_RIGHT(T))
#define MGX_T_VAR_PTR(T, name) MGX_T_VAR(PTR(T), name)
#define MGX_T_PTR(T) MGX_T_VAR_PTR(T,)
#define MGX_T(T) MGX_T_VAR(T,)
