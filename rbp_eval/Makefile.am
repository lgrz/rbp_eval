bin_PROGRAMS=rbp_eval
check_PROGRAMS=rbp_tester opt

dist_man_MANS=rbp_eval.1

LDADD=../librbp/librbp.a
AM_CPPFLAGS=-I$(srcdir)/../librbp

rbp_eval_SOURCES=main.c opt.c help.c trec_fmt.c desc_fmt.c \
		 opt.h desc_fmt.h help.h trec_fmt.h fmt.h

rbp_tester_SOURCES=tester.c opt.c help.c

opt_CPPFLAGS=-DOPT_MAIN $(AM_CPPFLAGS)
opt_SOURCES=opt.c help.c

EXTRA_DIST=rbp_eval.1.in \
           test/data/1.spec test/data/2.spec test/data/3.spec \
           test/data/4.spec test/data/5.spec test/data/6.spec \
           test/data/7.spec test/data/8.spec test/data/9.spec \
		   test/data/10.spec test/data/11.spec \
           test/data/basic.qrels test/data/frac.qrels test/data/mult.qrels \
           test/data/manyties.run test/data/noties-jumbled.run \
           test/data/noties.run test/data/ties-jumbled.run \
           test/data/ties.run \
		   test/data/README.txt
