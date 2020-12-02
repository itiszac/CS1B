CC=g++

all: hw09

hw09: largeint.o hw09.cpp hw09.h
	$(CC) hw09.cpp -o hw09 largeint.o

largeint.o: LargeIntegers.cpp LargeIntegers.h
	$(CC) -c LargeIntegers.cpp -o largeint.o

clean:
	rm hw09 *.o

tar:
	tar cvf hw09.tar hw09.cpp hw09.h LargeIntegers.h LargeIntegers.cpp Makefile hw09.scr