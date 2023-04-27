#pragma once
#include "MGX_static.h"
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


#define __MGX_T_IS_RIGHT(T) MGX_ARG_SECOND(__MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_R, T))

#define __MGX_T_GET_R(T) T, 0
#define __MGX_T_GET_R_COMP(T, S, res) T, res
#define __MGX_T_GET_R_ARRAY(T, S, res) T, 1
#define __MGX_T_GET_R_PTR(T, res) T, res


#define __MGX_T_FORWARD_RECURSIVE_INDIRECT() __MGX_T_FORWARD_RECURSIVE_
#define __MGX_T_FORWARD_RECURSIVE(M, ...) __MGX_T_EVAL(__MGX_T_FORWARD_RECURSIVE_(M, MGX_T_MAX_DEPTH, __VA_ARGS__))

#define __MGX_T_TYPE(T) MGX_IF(__MGX_T_IS_ARRAY(T))\
				   (ARRAY, MGX_IF(__MGX_T_IS_PTR(T)) \
				   (PTR, MGX_IF(__MGX_T_IS_COMP(T)) \
				   (COMP, true)))

#define __MGX_T_FORWARD_RECURSIVE_PREPROCESS(T) MGX_IF(__MGX_T_IS_COMP(T))(__MGX_T_CONVERT_COMP(T), T)

#define __MGX_T_FORWARD_RECURSIVE_(M, L, ...) MGX_IF(__MGX_T_TYPE(MGX_ARG_FIRST(__VA_ARGS__)))(\
														__MGX_DEFER_n(L, M)(__VA_ARGS__) __MGX_EAT,\
														__MGX_DEFER_n(L, __MGX_T_FORWARD_RECURSIVE_CALL))(__MGX_T_CAT(M##_, __MGX_T_TYPE(MGX_ARG_FIRST(__VA_ARGS__))), (MGX_ARG_TAIL_OPT(__MGX_T_CAT(__MGX_T_EXTRACT_, __MGX_T_FORWARD_RECURSIVE_PREPROCESS(MGX_ARG_FIRST(__VA_ARGS__))))),\
															__MGX_DEFER2(__MGX_T_FORWARD_RECURSIVE_INDIRECT)()(\
																M, MGX_DEC(MGX_DEC(L)), __MGX_DEFER(__MGX_ARG_FIRST)(__MGX_T_CAT(__MGX_T_EXTRACT_, __MGX_T_FORWARD_RECURSIVE_PREPROCESS(MGX_ARG_FIRST(__VA_ARGS__)))) MGX_ARG_TAIL_OPT(__VA_ARGS__)))

#define __MGX_T_FORWARD_RECURSIVE_CALL(FUNCTION, OPT, ...) __MGX_DEFER(FUNCTION)(MGX_ARG_FIRST(__VA_ARGS__) __MGX_T_EXPAND OPT MGX_ARG_TAIL_OPT(__VA_ARGS__))

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
#define __MGX_T_GET_NAME_COMP(A, S) __MGX_T_CAT(S, __MGX_T_CAT_(__, A))
#define __MGX_T_GET_NAME_ARRAY(A, S) __MGX_T_CAT(A, __MGX_T_CAT_(__, S))
#define __MGX_T_GET_NAME_PTR(A) __MGX_T_CAT(A, __ptr)

#define __MGX_T_LPST() (*

#define __MGX_T_GET_VAR(T, N) T,(EMPTY), N ,(EMPTY),
#define __MGX_T_GET_VAR_COMP(T, S, P, N, A, array) S T, P, N, A,
#define __MGX_T_GET_VAR_ARRAY(T, S, P, N, A, array) T, P, N, MGX_ARG_LIST_CONCAT((B(S)), A), true

#define __MGX_T_GET_VAR_PTR(T, P, N, A, array) T, MGX_ARG_APPEND(P, MGX_WHEN(array)(LPAREN,) STAR),\
												N, MGX_IF(array)(MGX_ARG_LIST_CONCAT((RPAREN), A), A),

#define __MGX_T_GET_T(T) T
#define __MGX_T_GET_T_COMP(A, S) S A
#define __MGX_T_GET_T_ARRAY(A, S) A
#define __MGX_T_GET_T_PTR(A) A

#define __MGX_T_GET_I(A, I, a) I(A __MGX_T_EXPAND3 a)
#define __MGX_T_GET_I_COMP(A, S) S A
#define __MGX_T_GET_I_ARRAY(A, S) ARRAY(A, S)
#define __MGX_T_GET_I_PTR(A) PTR(A)


#define __MGX_T_COMPILE_B(S) [S]
#define __MGX_T_COMPILE_EMPTY
#define __MGX_T_COMPILE_STAR *
#define __MGX_T_COMPILE_LPAREN (
#define __MGX_T_COMPILE_RPAREN )

#define __MGX_T_COMPILE(E) __MGX_T_COMPILE_##E

#define __MGX_T_POST(...) __MGX_T_POST_(__VA_ARGS__)
#define __MGX_T_POST_(T, P, N, A, ptr, raw) T MGX_S_FOREACH(__MGX_T_COMPILE, __MGX_EXPAND P) N MGX_S_FOREACH(__MGX_T_COMPILE, __MGX_EXPAND A)

#define __MGX_T_INJECT(T, I, A) __MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_I, T, I, A)

// Config
// MAX_DEPTH: Type evaluation levels
//			  higher values allow more nesting but might impact performance
//			  Must be at most __MGX_DEFER_MAX
#define MGX_T_MAX_DEPTH 50

// Functions
#define MGX_T_NAME(T) __MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_NAME, T)
#define MGX_T_VAR(T, name) __MGX_T_POST(__MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_VAR, T, name), __MGX_T_IS_RIGHT(T))
#define MGX_T_VAR_PTR(T, name) MGX_T_VAR(PTR(T), name)
#define MGX_T_PTR(T) MGX_T_VAR_PTR(T,)
#define MGX_T(T) MGX_T_VAR(T,)
