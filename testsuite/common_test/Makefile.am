MAINTAINERCLEANFILES = Makefile.in

bin_PROGRAMS = test1 test2
test1_SOURCES = xstring_test1.c
#test1_LDADD		= $(top_builddir)/src/common/libcommon.la #this line equals to the line below
test1_LDADD		= -L$(top_builddir)/src/common -lcommon $(EFENCELIB)
test1_CPPFLAGS 	= -I$(top_srcdir)/src



##if here  test1_CPPFLAGS 			= -I$(top_srcdir)/src/common, then
## in xstring_test1.c, there should be #include"common.h", etc.
##if here  test1_CPPFLAGS 			= -I$(top_srcdir)/src, then
## in xstring_test1.c, there should be #include"common/common.h", etc.

##LDADD 					= $(top_builddir)/src/common/libcommon.a
##AM_CPPFLAGS 			= -I$(top_srcdir)/src

##'INCLUDES' is the old name for 'AM_CPPFLAGS' (or '*_CPPFLAGS')
##LDADD 					= ../../src/common/libcommon.a
##INCLUDES 				= -I../../../src

test2_SOURCES = mkdir_test2.c