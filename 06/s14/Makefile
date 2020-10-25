CC=g++

all: ggdb

ggdb: s14f.o s14.cpp hw06.h
	$(CC) -g s14.cpp s14f.o -o s14dbg

s14f.o: s14f.cpp hw06.h
	$(CC) -g -c s14f.cpp -o s14f.o

clean:
	rm s14 *.o

tar:
	tar cvf 14hw06.tar s14.cpp hw06.h s14f.cpp s14.scr