CC=g++

all: hw03

hw03: inctax.o hw03.cpp hw03.h
	$(CC) hw03.cpp -o hw03 inctax.o

inctax.o: inctax.cpp inctax.h
	$(CC) -c inctax.cpp -o inctax.o

clean:
	rm hw03 *.o

tar:
	tar cvf hw03.tar hw03.cpp hw03.h inctax.cpp inctax.h Makefile hw03.scr

