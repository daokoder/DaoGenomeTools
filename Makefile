CC = gcc
CXX = g++
INCLUDE = -I. -I/usr/local/dao/include -Iwrap -I../test
LIB = -L. -L/usr/lib
CFLAGS = -c -fPIC
LFLAGS =
LFLAGS2 =

OBJS = daox_GenomeTools.o wrap/dao_GenomeTools.o wrap/dao_GenomeTools2.o wrap/dao_GenomeTools3.o

GT_INC = -I../src -I../obj -I/usr/local/include/cairo
# -DWITHOUT_CAIRO
GT_LIB = -L../lib -lgenometools -lbz2 -lz -ltecla -lcairo -lfontconfig

#GT_LIB += -ldao

TARGET = libdao_GenomeTools.so

UNAME = $(shell uname)

ifeq ($(UNAME),Linux)
  CFLAGS += -DUNIX
  LFLAGS += -fPIC -shared -Wl,-soname,libdao_GenomeTools.so
endif

ifeq ($(UNAME),Darwin)
  TARGET = libdao_GenomeTools.dylib
  CFLAGS += -DUNIX -DMAC_OSX
  LFLAGS += -fPIC -dynamiclib -undefined dynamic_lookup -install_name libdao_GenomeTools.dylib
#  LFLAGS += -fPIC -dynamiclib -install_name libdao_GenomeTools.dylib
endif

CFLAGS += $(GT_INC)
LFLAGS += $(GT_LIB)

#CFLAGS += -ggdb -O0
CFLAGS += -O2

first: all

all: $(TARGET)

.SUFFIXES: .c .m

.c.o:
	$(CC) -c $(CFLAGS) $(INCLUDE) -o $@ $<

.m.o:
	$(CC) -c $(CFLAGS) $(INCLUDE) -o $@ $<

.cpp.o:
	$(CXX) -c $(CFLAGS) $(INCLUDE) -o $@ $<

$(TARGET): $(OBJS)
	$(CXX) $(LFLAGS) $(LIB) $(OBJS) -o $(TARGET)

clean:
	rm $(OBJS) $(OBJS2)


bind:
	@test -d wrap || mkdir wrap
	/Users/min/projects/dao/tools/clangdao/clangdao $(GT_INC) genometools.c -o wrap/
