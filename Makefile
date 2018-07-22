CC = gcc
CXX = g++
CXXOPTS = -Wall -O0 -fPIC
COPTS = -Wall -O0 -fPIC
FORT = gfortran
FOPTS = -Wall -O0 -fPIC
LD = gcc
LOPTS = -lstdc++


all:
	$(CXX) -c $(CXXOPTS) incont.cpp
	$(CXX) -c $(COPTS) fortran.cpp
	$(FORT) -c $(COPTS) incontm.f

c: all
	$(CC) -c $(COPTS) demo.c
	$(LD) $(LOPTS) incont.o demo.o

f: all
	$(FORT) -c $(FOPTS) demo.f
	$(FORT) $(LOPTS) incont.o incontm.o fortran.o demo.o

clean:
	rm -f *.o *.mod a.out

