CC=g++

all: ggdb

ggdb: s22f.o s22.cpp hw06.h
	$(CC) -g s22.cpp s22f.o -o s22dbg

s22f.o: s22f.cpp hw06.h
	$(CC) -g -c s22f.cpp -o s22f.o

clean:
	rm s22 *.o

tar:
	tar cvf 22hw06.tar s22.cpp s22f.cpp hw06.h s22.scr