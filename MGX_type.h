#pragma once
#include "MGX_base.h"
#define __MGX_T_CAT(a, ...) __MGX_T_CAT_(a,__VA_ARGS__)
#define __MGX_T_CAT_(a, ...) a ## __VA_ARGS__
#define __MGX_T_CAT2(a,b) __MGX_T_CAT2_(a,b)
#define __MGX_T_CAT2_(a,b) a ## b


#define __MGX_T_IS_COMP_struct true
#define __MGX_T_IS_COMP_union true
#define __MGX_T_IS_ARRAY_ARRAY(...) true

#define __MGX_T_IS_ARRAY(T) __MGX_T_CAT_(__MGX_T_IS_ARRAY_, T)
#define __MGX_T_IS_COMP(T) __MGX_T_CAT_(__MGX_T_IS_COMP_, T)

#define __MGX_T_ARRAY_FORWARD(M, T, ...) M __MGX_LPAREN __MGX_T_CAT_(__MGX_T_EXTRACT_, T) ,  __VA_ARGS__ __MGX_RPAREN
#define __MGX_T_EXTRACT_ARRAY(T, S) T, S
#define __MGX_T_FORWARD_RECURSIVE_INDIRECT() __MGX_T_FORWARD_RECURSIVE_
#define __MGX_T_FORWARD_RECURSIVE_CALL(FUNCTION, ARG, M, L, ...) __MGX_DEFER_n(L, FUNCTION)\
											(__MGX_DEFER2(__MGX_T_FORWARD_RECURSIVE_INDIRECT)() (M, __MGX_DEC(__MGX_DEC(L)), __VA_ARGS__), ARG)

#define __MGX_T_FORWARD_RECURSIVE_ARRAY(M, L, ...) __MGX_T_FORWARD_RECURSIVE_ARRAY_ __MGX_LPAREN M, L, __MGX_T_CAT(__MGX_T_EXTRACT_, __MGX_GET_FIRST(__VA_ARGS__)) ,  __VA_ARGS__ __MGX_RPAREN
#define __MGX_T_FORWARD_RECURSIVE_ARRAY_(M, L, T, S, ...) __MGX_T_FORWARD_RECURSIVE_CALL( M ## _ARRAY, S, M, L, T __MGX_CUT_FIRST_OPT(__VA_ARGS__) )


#define __MGX_T_FORWARD_RECURSIVE_(M, L, ...) MGX_IF(__MGX_T_IS_ARRAY(__MGX_GET_FIRST(__VA_ARGS__)))\
				   (__MGX_T_FORWARD_RECURSIVE_ARRAY(M, L, __VA_ARGS__), MGX_IF(__MGX_T_IS_COMP(__MGX_GET_FIRST(__VA_ARGS__))) \
														      (M ## _COMP(M, L, __VA_ARGS__), M(M, L, __VA_ARGS__)))
#define __MGX_T_FORWARD_RECURSIVE(M, ...) __MGX_EVAL(__MGX_T_FORWARD_RECURSIVE_(M, __MGX_DEFER_MAX, __VA_ARGS__))


#define __MGX_T_GET_NAME_COMP(M, L, T) __MGX_T_COMP_EXTRACT(__MGX_T_COMP_GLUE, T)
#define __MGX_T_COMP_EXTRACT(M, T) __MGX_EXPAND(M __MGX_LPAREN __MGX_T_CAT_(__MGX_T_COMP_NAME_, T) __MGX_RPAREN)
#define __MGX_T_COMP_NAME_struct struct __MGX_COMMA
#define __MGX_T_COMP_NAME_union union __MGX_COMMA
#define __MGX_T_COMP_GLUE(s, n) s ## __ ## n

#define __MGX_T_GET_NAME_ARRAY(A, S) __MGX_T_CAT(A, __MGX_T_CAT_(__, S))
#define __MGX_T_GET_NAME(M, L, T) T


#define __MGX_T_GET_VAR(M, L, T, name) T name
#define __MGX_T_GET_VAR_COMP(M, L, T, name) T name
#define __MGX_T_GET_VAR_ARRAY(A, S) A [S]


// Functions
#define MGX_T_NAME(T) __MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_NAME, T)
#define MGX_T_VAR(T, name) __MGX_T_FORWARD_RECURSIVE(__MGX_T_GET_VAR, T, name)
#define MGX_T_VAR_PTR(T, name) MGX_T_VAR(T, __MGX_DEFER_n(__MGX_DEFER_MAX, __MGX_STAR_)()(name))
#define MGX_T_PTR(T) MGX_IF(__MGX_T_IS_ARRAY(T))(MGX_T_VAR_PTR(T, ), T*)
#define MGX_T(T) MGX_T_VAR(T,)
