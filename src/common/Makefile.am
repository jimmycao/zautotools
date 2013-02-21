MAINTAINERCLEANFILES = Makefile.in

##bin_PROGRAMS = common
##common_SOURCES = common.h xmalloc.h xmalloc.c xstring.h xstring.c common_test.c \
				 xerrno.h xerrno.c

##lib_LIBRARIES = libcommon.a
##libcommon_a_SOURCES = common.h xmalloc.h xmalloc.c xstring.h xstring.c xerrno.h xerrno.c
##include_HEADERS = common.h xmalloc.h xstring.h xerrno.h 


lib_LTLIBRARIES = libcommon.la
libcommon_la_SOURCES =  common.h xmalloc.h xmalloc.c xstring.h xstring.c xerrno.h xerrno.c
libcommon_la_LDFLAGS = --version-info 1:0:1
#############################################
##libraries will be installed in $(libdir).
##if the lib will not install, then use: noinst_LIBRARIES =
##Public headers will be installed in $(includedir)
##Private headers are not installed, like ordinary source files.
#############################################