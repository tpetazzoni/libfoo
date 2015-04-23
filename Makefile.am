ACLOCAL_AMFLAGS = -I m4 --install

# library
lib_LTLIBRARIES = libfoo.la
libfoo_la_SOURCES = src/core.c
libfoo_la_LDFLAGS = -version-info 1:0:0
include_HEADERS = src/foo.h

# example program
bin_PROGRAMS = libfoo-example1
libfoo_example1_SOURCES = examples/example1.c
libfoo_example1_LDADD = libfoo.la
libfoo_example1_CPPFLAGS = -I$(top_srcdir)/src
