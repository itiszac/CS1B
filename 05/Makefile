CC=g++

all: hw05

hw05: hw05f1.o hw05f2.o hw05f3.o hw05f4.o hw05f5.o hw05f6.o hw05f7.o hw05.cpp hw05.h
	$(CC) hw05.cpp -o hw05 hw05f1.o hw05f2.o hw05f3.o hw05f4.o hw05f5.o hw05f6.o hw05f7.o

hw05f1.o: hw05f1.cpp hw05f.h
	$(CC) -c hw05f1.cpp -o hw05f1.o

hw05f2.o: hw05f2.cpp hw05f.h
	$(CC) -c hw05f2.cpp -o hw05f2.o

hw05f3.o: hw05f3.cpp hw05f.h
	$(CC) -c hw05f3.cpp -o hw05f3.o

hw05f4.o: hw05f4.cpp hw05f.h
	$(CC) -c hw05f4.cpp -o hw05f4.o

hw05f5.o: hw05f4.o hw05f5.cpp hw05f.h
	$(CC) -c hw05f5.cpp -o hw05f5.o

hw05f6.o: hw05f5.o hw05f3.o hw05f6.cpp hw05f.h
	$(CC) -c hw05f6.cpp -o hw05f6.o

hw05f7.o: hw05f7.cpp hw05f.h
	$(CC) -c hw05f7.cpp -o hw05f7.o

clean:
	rm hw05 *.o

tar:
	tar cvf hw05.tar hw05.cpp hw05.h hw05f.h hw05f1.cpp hw05f2.cpp hw05f3.cpp hw05f4.cpp hw05f5.cpp hw05f6.cpp hw05f7.cpp Makefile hw05.scr