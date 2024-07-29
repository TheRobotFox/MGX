#include "MGX_base.h"

// #define GEN_LIST \
// A([TYPE_NAME], MODULE, MODULE_ARGS...+type ) \ AUTOMATIC MODE
// C([TYPE_NAME], FUNC) \ MANUAL MODE
// ...

#define __MGX_GEN_CAT(A,B) __MGX_GEN_CAT_(A,B)
#define __MGX_GEN_CAT_(A,B) A##B

#define __MGX_GEN_ARG_INJECT(...) __MGX_GEN_CAT(__MGX_GEN_ARG_OPEN_, MGX_ARG_FIRST(__VA_ARGS__))MGX_ARG_TAIL_OPT(__VA_ARGS__) __MGX_RPAREN
#define __MGX_GEN_ARG_OPEN_A(...) A __MGX_LPAREN __VA_ARGS__
#define __MGX_GEN_ARG_OPEN_C(...) C __MGX_LPAREN __VA_ARGS__

#define __MGX_GEN_FORWARD(M, ...) __MGX_GEN_CAT(M##_, __MGX_GEN_ARG_INJECT(MGX_ARG_LAST(__VA_ARGS__) MGX_ARG_CUT_OPT(__VA_ARGS__)))
#define __MGX_GEN_FOREACH(M, ...) __MGX_ARG_FOREACH(1, __MGX_GEN_FORWARD, M, __VA_ARGS__)


/* #define __MGX_GEN_IMPL_A(name, mod) typedef struct {__MGX_GEN_TYPE_##mod __data;} name; __MGX_GEN_IMPL_##mod */
/* #define __MGX_GEN_IMPL_C(name, FUNC) FUNC##_IMPL(name) */

// ... = Generic Description List
#define MGX_GEN_IMPL(...) __MGX_GEN_FOREACH(__MGX_GEN_IMPL, __VA_ARGS__)


#define __MGX_GEN_GET_A(name, mod, ...) , name : mod(__VA_ARGS__)
#define __MGX_GEN_GET_C(name, FUNC, ...) , name : FUNC##_GET(name, __VA_ARGS__)

// x=Input
// M=Target Function
// Gerneric Description List
#define MGX_GEN_GET(x, M, ...) _Generic(x __MGX_ARG_FOREACH(2, __MGX_GEN_FORWARD, __MGX_GEN_GET, M, __VA_ARGS__))

#define TEST(...) __VA_ARGS__

/* MGX_GEN_GET(x, pop, A(integer, LIST, int, awdaw), C(long, __HEAP, awd)) */
