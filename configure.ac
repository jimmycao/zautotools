#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.59])
AC_INIT([zz-test],[1.0],[amao.chj@gmail.com])

AC_CONFIG_SRCDIR([src/common_test.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE(foreign 1.1 -Wall -Werror)
##############################################
# Checks for programs.
AC_PROG_CC
AM_PROG_AR
AC_PROG_LIBTOOL
LT_INIT
#if we will create lib
AC_PROG_RANLIB
############################################
# Checks for libraries.
#if found, then LIBS="-lpthread $LIBS" and #define HAVE_LIBPTHREAD 1 in config.h
#(Automake uses $LIBS for linking everything.)
AC_CHECK_LIB([pthread], [pthread_rwlock_init])

AC_CHECK_LIB([efence], [malloc], [EFENCELIB=-lefence])
AC_SUBST([EFENCELIB])
#############################################
# Checks for header files.
dnl check for ANSI C headers
AC_HEADER_STDC
dnl check for other standard c headers
AC_CHECK_HEADERS([inttypes.h sys/types.h stdint.h stdlib.h string.h strings.h unistd.h stdio.h stddef.h fcntl.h], [], 
				AC_MSG_ERROR(some system header not found, please check.))
############################################
# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
############################################
# Checks for library functions.
AC_FUNC_MALLOC
########################################
AM_PROG_CC_C_O


AC_CHECK_PROGS([TAR], [tar gtar], [:])
if test "$TAR" = :; then
	AC_MSG_ERROR([tar is needed in this package.])
fi

#COMMON_WITH_READLINE

#COMMON_VAR_SYS_ERRLIST
#COMMON_VAR_SYS_SIGLIST

TAR=$(whereis tar)
AC_SUBST([TAR])
###########################################
AM_MAINTAINER_MODE #../configure --enable-maintainer-mode
AC_SYS_LARGEFILE # ../configure --enable-largefile

AX_FUNC_MKDIR
AX_FUNC_MKDIR_ONE_ARG
########################################
AC_CONFIG_FILES([Makefile
		src/Makefile
		src/common/Makefile
		src/container/Makefile
		src/libevent2019/Makefile
		testsuite/Makefile
		testsuite/common_test/Makefile
		])
#testsuite/mpi_io/Makefile
		
AC_OUTPUT
