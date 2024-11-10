#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([rbp_eval], [0.2], [wew@csse.unimelb.edu.au])
AC_CONFIG_SRCDIR([librbp/qrels.h])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX
AC_PROG_RANLIB

AC_SUBST([AM_CXXFLAGS], [-std=c++11])

# Checks for libraries.
AC_CHECK_LIB([m], [pow])
AC_CHECK_LIB([ssl], [MD5_Init])

# Checks for header files.
AC_CHECK_HEADERS([unistd.h openssl/md5.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_UID_T
AC_C_CONST
AC_C_INLINE
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_STRTOD
AC_FUNC_VPRINTF
AC_CHECK_FUNCS([getcwd gethostname mkdir pow sqrt strcasecmp strchr strdup strerror strtol strtoul])

AC_CONFIG_FILES([Makefile
                 dcg_eval/Makefile
                 librbp++/Makefile
                 librbp++/test/Makefile
                 librbp/Makefile
                 rbp_eval/Makefile
                 rbp_eval/rbp_eval.1
                 rbp_util/Makefile
                 stats/Makefile
                 stats/test/Makefile])
AC_OUTPUT
