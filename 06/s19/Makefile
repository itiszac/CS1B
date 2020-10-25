CC=g++

all: ggdb

ggdb: s19f.o s19.cpp hw06.h
	$(CC) -g s19.cpp s19f.o -o s19dbg

s19f.o: s19f.cpp hw06.h
	$(CC) -g -c s19f.cpp -o s19f.o

clean:
	rm s19 *.o

tar:
	tar cvf 19hw06.tar s19.cpp s19f.cpp hw06.h s19.scr