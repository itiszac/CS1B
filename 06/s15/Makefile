CC=g++

all: ggdb

ggdb: s15f.o s15.cpp hw06.h
	$(CC) -g s15.cpp s15f.o -o s15dbg

s15f.o: s15f.cpp hw06.h
	$(CC) -g -c s15f.cpp -o s15f.o

clean:
	rm s15 *.o

tar:
	tar cvf 15hw06.tar s15.cpp s15f.cpp hw06.h s15.scr