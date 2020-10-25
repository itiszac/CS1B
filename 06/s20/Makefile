CC=g++

all: ggdb

ggdb: s20f.o s20.cpp hw06.h
	$(CC) -g s20.cpp s20f.o -o s20dbg

s20f.o: s20f.cpp hw06.h
	$(CC) -g -c s20f.cpp -o s20f.o

clean:
	rm s20 *.o

tar:
	tar cvf 20hw06.tar s20.cpp s20f.cpp hw06.h s20.scr