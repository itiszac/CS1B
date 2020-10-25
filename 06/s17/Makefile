CC=g++

all: ggdb

ggdb: s17f.o s17.cpp hw06.h
	$(CC) -g s17.cpp s17f.o -o s17dbg

s17f.o: s17f.cpp hw06.h
	$(CC) -g -c s17f.cpp -o s17f.o

clean:
	rm s17 *.o

tar:
	tar cvf 17hw06.tar s17.cpp s17f.cpp hw06.h s17.scr