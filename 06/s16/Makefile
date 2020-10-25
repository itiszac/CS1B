CC=g++

all: ggdb

ggdb: s16f.o s16.cpp hw06.h
	$(CC) -g s16.cpp s16f.o -o s16dbg

s16f.o: s16f.cpp hw06.h
	$(CC) -g -c s16f.cpp -o s16f.o

clean:
	rm s16 *.o

tar:
	tar cvf 16hw06.tar s16.cpp s16f.cpp hw06.h s16.scr