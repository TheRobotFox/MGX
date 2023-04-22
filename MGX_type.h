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
	(MGX_SUB(__MGX_DEFER_MAX, MGX_ARG_FIRST(__VA_ARGS__)), __MGX_DEFER_n(MGX_DEC(MGX_ARG_FIRST(__VA_ARGS__)), __MGX_T_ARG_FIRST_INDIRECT)()(__MGX_T_FORWARD_RECURSIVE_CALL_(M, MGX_ARG_FIRST(__VA_ARGS__), ARGLIST MGX_ARG_TAIL_OPT(__VA_ARGS__))) __MGX_T_EXPAND2( MGX_ARG_TAIL_OPT ARGLIST ) __MGX_DEFER_n(MGX_DEC(MGX_ARG_FIRST(__VA_ARGS__)), MGX_ARG_TAIL_OPT)(__MGX_T_FORWARD_RECURSIVE_CALL_(M, MGX_ARG_FIRST(__VA_ARGS__), ARGLIST MGX_ARG_TAIL_OPT(__VA_ARGS__))) )

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

#define __MGX_T_DEFER_END(L, M) __MGX_DEFER66 __MGX_DEFER_max __MGX_DEFER_max __MGX_DEFER_n (MGX_MUL(MGX_DIV(L, 3),4), __MGX_EMPTY)()(__MGX_EMPTY)()(__MGX_EMPTY)()(M)
#define __MGX_T_DEFER_ENDb(L, M) __MGX_DEFER66 __MGX_DEFER_max __MGX_DEFER_max __MGX_DEFER_n (MGX_MUL(MGX_DIV(L, 3),5), __MGX_EMPTY)()(__MGX_EMPTY)()(__MGX_EMPTY)()(M)

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
