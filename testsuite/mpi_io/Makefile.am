MAINTAINERCLEANFILES = Makefile.in

##not successful

bin_PROGRAMS = share1
share1_SOURCES = fh_share_test.c

share1_CPPFLAGS = -I/usr/local/include 
share1_LDFLAGS = -L/usr/local/lib/openmpi -l

#share1_CFLAGS = -g -Wall -pg
##test1_LDADD		= $(top_builddir)/src/common/libcommon.a
#CC = $(MPICC)
share1_LIBS = -lmpi -lopen-rte -lopen-pal $(LIBS)
##share1_CC = mpicc


##  
