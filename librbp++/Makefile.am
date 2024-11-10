SUBDIRS=. test

#bin_PROGRAMS=use_pool
lib_LIBRARIES=librbp++.a

#include_HEADERS=pool.h

LDADD=../librbp/librbp.a libgmp.a
AM_CPPFLAGS=-I$(srcdir)/.. -I.

#use_pool_SOURCES=use_pool.cpp pool.cpp

librbp___a_SOURCES=qidspec.cpp pool.cpp qrels.cpp rbp.cpp jlog.cpp \
		   mmath.cpp rungroups.cpp runlist.cpp run.cpp \
		   syslist.cpp \
		   dococcur.h hash.h jlog.h jpick.h judgment.h kendpenalty.h \
		   mmath.h parselist.h pool.h qidspec.h qrels.h rbo.h rbp.h \
		   rungroups.h run.h runlist.h syslist.h sysrank_topic.h \
		   sysrank_topic_hash.h wgtint.h

# XXX Doesn't compile
# sysrank_topic_hash.cpp 
