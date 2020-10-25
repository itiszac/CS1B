CC=g++

all: ggdb

ggdb: s18f.o s18.cpp hw06.h
	$(CC) -g s18.cpp s18f.o -o s18dbg

s18f.o: s18f.cpp hw06.h
	$(CC) -g -c s18f.cpp -o s18f.o

clean:
	rm s18 *.o

tar:
	tar cvf 18hw06.tar s18.cpp s18f.cpp hw06.h s18.scr