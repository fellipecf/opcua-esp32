/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef UA_CONFIG_H_
#define UA_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * open62541 Version
 * ----------------- */
#define UA_OPEN62541_VER_MAJOR 0
#define UA_OPEN62541_VER_MINOR 4
#define UA_OPEN62541_VER_PATCH 0
#define UA_OPEN62541_VER_LABEL "-dev" /* Release candidate label, etc. */
#define UA_OPEN62541_VER_COMMIT "v3.1-dev-743-g6c44fc7"

/**
 * Feature Options
 * ---------------
 * Changing the feature options has no effect on a pre-compiled library. */
#define UA_LOGLEVEL 300
#define UA_ENABLE_METHODCALLS
#define UA_ENABLE_NODEMANAGEMENT
#define UA_ENABLE_SUBSCRIPTIONS
/* #undef UA_ENABLE_MULTITHREADING */
/* #undef UA_ENABLE_PUBSUB */
/* #undef UA_ENABLE_ENCRYPTION */

/* Advanced Options */
#define UA_ENABLE_STATUSCODE_DESCRIPTIONS
#define UA_ENABLE_TYPENAMES
/* #undef UA_ENABLE_DETERMINISTIC_RNG */
/* #undef UA_ENABLE_GENERATE_NAMESPACE0 */
/* #undef UA_ENABLE_NONSTANDARD_UDP */
#define UA_ENABLE_DISCOVERY
/* #undef UA_ENABLE_DISCOVERY_MULTICAST */
#define UA_ENABLE_DISCOVERY_SEMAPHORE
/* #undef UA_ENABLE_UNIT_TEST_FAILURE_HOOKS */
/* #undef UA_ENABLE_VALGRIND_INTERACTIVE */
#define UA_VALGRIND_INTERACTIVE_INTERVAL 1000

/* Options for Debugging */
#define UA_DEBUG
/* #undef UA_DEBUG_DUMP_PKGS */

#include "ua_architecture.h"

/**
 * C99 Definitions
 * --------------- */
#include <string.h>
#include <stddef.h>

/* Include stdint.h and stdbool.h or workaround for older Visual Studios */
#if !defined(_MSC_VER) || _MSC_VER >= 1600
# include <stdint.h>
# include <stdbool.h> /* C99 Boolean */
#else
# include "ms_stdint.h"
# if !defined(__bool_true_false_are_defined)
#  define bool short
#  define true 1
#  define false 0
#  define __bool_true_false_are_defined
# endif
#endif

/**
 * Assertions
 * ----------
 * The assert macro is disabled by defining NDEBUG. It is often forgotten to
 * include -DNDEBUG in the compiler flags when using the single-file release. So
 * we make assertions dependent on the UA_DEBUG definition handled by CMake. */
#ifdef UA_DEBUG
# include <assert.h>
# define UA_assert(ignore) assert(ignore)
#else
# define UA_assert(ignore)
#endif

/* Outputs an error message at compile time if the assert fails.
 * Example usage:
 * UA_STATIC_ASSERT(sizeof(long)==7, use_another_compiler_luke)
 * See: https://stackoverflow.com/a/4815532/869402 */
#if defined(__cplusplus) && __cplusplus >= 201103L /* C++11 or above */
# define UA_STATIC_ASSERT(cond,msg) static_assert(cond, #msg)
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L /* C11 or above */
# define UA_STATIC_ASSERT(cond,msg) _Static_assert(cond, #msg)
#elif defined(__GNUC__) || defined(__clang__) || defined(_MSC_VER) /* GCC, Clang, MSC */
# define UA_CTASTR2(pre,post) pre ## post
# define UA_CTASTR(pre,post) UA_CTASTR2(pre,post)
# ifndef __COUNTER__ /* PPC GCC fix */
#  define __COUNTER__ __LINE__
# endif
# define UA_STATIC_ASSERT(cond,msg)                             \
    typedef struct {                                            \
        int UA_CTASTR(static_assertion_failed_,msg) : !!(cond); \
    } UA_CTASTR(static_assertion_failed_,__COUNTER__)
#else /* Everybody else */
# define UA_STATIC_ASSERT(cond,msg) typedef char static_assertion_##msg[(cond)?1:-1]
#endif

/**
 * Function Export
 * ---------------
 * On Win32: Define ``UA_DYNAMIC_LINKING`` and ``UA_DYNAMIC_LINKING_EXPORT`` in
 * order to export symbols for a DLL. Define ``UA_DYNAMIC_LINKING`` only to
 * import symbols from a DLL.*/
/* #undef UA_DYNAMIC_LINKING */

#if defined(_WIN32) && defined(UA_DYNAMIC_LINKING)
# ifdef UA_DYNAMIC_LINKING_EXPORT /* export dll */
#  ifdef __GNUC__
#   define UA_EXPORT __attribute__ ((dllexport))
#  else
#   define UA_EXPORT __declspec(dllexport)
#  endif
# else /* import dll */
#  ifdef __GNUC__
#   define UA_EXPORT __attribute__ ((dllimport))
#  else
#   define UA_EXPORT __declspec(dllimport)
#  endif
# endif
#else /* non win32 */
# if __GNUC__ || __clang__
#  define UA_EXPORT __attribute__ ((visibility ("default")))
# endif
#endif
#ifndef UA_EXPORT
# define UA_EXPORT /* fallback to default */
#endif

/**
 * Inline Functions
 * ---------------- */
#ifdef _MSC_VER
# define UA_INLINE __inline
#else
# define UA_INLINE inline
#endif

/**
 * Non-aliasing pointers
 * -------------------- */
#ifdef _MSC_VER
# define UA_RESTRICT __restrict
#elif defined(__GNUC__)
# define UA_RESTRICT __restrict__
#else
# define UA_RESTRICT restrict
#endif

/**
 * Function attributes
 * ------------------- */
#if defined(__GNUC__) || defined(__clang__)
# define UA_FUNC_ATTR_MALLOC __attribute__((malloc))
# define UA_FUNC_ATTR_PURE __attribute__ ((pure))
# define UA_FUNC_ATTR_CONST __attribute__((const))
# define UA_FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# define UA_FORMAT(X,Y) __attribute__ ((format (printf, X, Y)))
#else
# define UA_FUNC_ATTR_MALLOC
# define UA_FUNC_ATTR_PURE
# define UA_FUNC_ATTR_CONST
# define UA_FUNC_ATTR_WARN_UNUSED_RESULT
# define UA_FORMAT(X,Y)
#endif

#if defined(__GNUC__) || defined(__clang__)
# define UA_DEPRECATED __attribute__((deprecated))
#elif defined(_MSC_VER)
# define UA_DEPRECATED __declspec(deprecated)
#else
# define UA_DEPRECATED
#endif

/**
 * Detect Binary Overlaying for Encoding
 * -------------------------------------
 * Integers and floating point numbers are transmitted in little-endian (IEEE 754
 * for floating point) encoding. If the target architecture uses the same
 * format, numeral datatypes can be memcpy'd (overlayed) on the binary stream.
 * This speeds up encoding.
 *
 * Integer Endianness
 * ^^^^^^^^^^^^^^^^^^
 * The definition ``UA_BINARY_OVERLAYABLE_INTEGER`` is true when the integer
 * representation of the target architecture is little-endian. */
#if defined(_WIN32)
# define UA_BINARY_OVERLAYABLE_INTEGER 1
#elif (defined(__BYTE_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && \
      (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__))
# define UA_BINARY_OVERLAYABLE_INTEGER 1
#elif defined(__linux__) /* Linux (including Android) */
# include <endian.h>
# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER 1
# endif
#elif defined(__OpenBSD__) /* OpenBSD */
# include <sys/endian.h>
# if BYTE_ORDER == LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER 1
# endif
#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) /* Other BSD */
# include <sys/endian.h>
# if _BYTE_ORDER == _LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_INTEGER 1
# endif
#elif defined(__APPLE__) /* Apple (MacOS, iOS) */
# include <libkern/OSByteOrder.h>
# if defined(__LITTLE_ENDIAN__)
#  define UA_BINARY_OVERLAYABLE_INTEGER 1
# endif
#elif defined(__QNX__) || defined(__QNXNTO__) /* QNX */
# include <gulliver.h>
# if defined(__LITTLEENDIAN__)
#  define UA_BINARY_OVERLAYABLE_INTEGER 1
# endif
#endif

#ifndef UA_BINARY_OVERLAYABLE_INTEGER
# define UA_BINARY_OVERLAYABLE_INTEGER 0
#endif

/**
 * Float Endianness
 * ^^^^^^^^^^^^^^^^
 * The definition ``UA_BINARY_OVERLAYABLE_FLOAT`` is true when the floating
 * point number representation of the target architecture is IEEE 754. Note that
 * this cannot be reliable detected with macros for the clang compiler
 * (beginning of 2017). ``UA_BINARY_OVERLAYABLE_FLOAT`` can be manually set if
 * the target is known to be little endian with floats in the IEEE 754
 * format. */

#if defined(_WIN32)
# define UA_BINARY_OVERLAYABLE_FLOAT 1
#elif defined(__FLOAT_WORD_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && \
    (__FLOAT_WORD_ORDER__ == __ORDER_LITTLE_ENDIAN__) /* Defined only in GCC */
# define UA_BINARY_OVERLAYABLE_FLOAT 1
#elif defined(__FLOAT_WORD_ORDER) && defined(__LITTLE_ENDIAN) && \
    (__FLOAT_WORD_ORDER == __LITTLE_ENDIAN) /* Defined only in GCC */
# define UA_BINARY_OVERLAYABLE_FLOAT 1
#elif defined(__linux__) /* Linux (including Android) */
# include <endian.h>
# if defined(__ANDROID__)
#  if __BYTE_ORDER == __LITTLE_ENDIAN
#   define UA_BINARY_OVERLAYABLE_INTEGER 1
#  endif
# elif __FLOAT_WORD_ORDER == __LITTLE_ENDIAN
#  define UA_BINARY_OVERLAYABLE_FLOAT 1
# endif
#endif

#ifndef UA_BINARY_OVERLAYABLE_FLOAT
# define UA_BINARY_OVERLAYABLE_FLOAT 0
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* UA_CONFIG_H_ */
