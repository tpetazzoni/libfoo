AC_INIT([libfoo], [1.0])
AM_INIT_AUTOMAKE([1.11 subdir-objects -Wall foreign])
AC_CONFIG_SRCDIR([src/core.c])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADER([config.h])
AC_PROG_CC
AM_PROG_AR

AC_ARG_ENABLE(debug-output,
	AS_HELP_STRING([--enable-debug-output], [Enable to get debug output]),
	[enable_debug_output=yes])

if test "$enable_debug_output" = "yes" ; then
   AC_DEFINE([ENABLE_DEBUG_OUTPUT], [1], [Debug output])
fi

LT_INIT
AC_OUTPUT
