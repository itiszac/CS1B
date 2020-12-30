CC=g++

all: hw10

hw10: menu.o face.o suit.o both.o deck.o hw10.cpp hw10.h
	$(CC) hw10.cpp -o hw10 menu.o face.o suit.o both.o deck.o

menu.o: menu.cpp hw10.h
	$(CC) -c menu.cpp -o menu.o

face.o: face.cpp hw10.h
	$(CC) -c face.cpp -o face.o

suit.o: suit.cpp hw10.h
	$(CC) -c suit.cpp -o suit.o

both.o: both.cpp hw10.h
	$(CC) -c both.cpp -o both.o

deck.o: deck.cpp hw10.h
	$(CC) -c deck.cpp -o deck.o

clean:
	rm hw10 *.o

tar:
	tar cvf hw10.tar hw10.cpp hw10.h menu.cpp face.cpp suit.cpp both.cpp Makefile hw10.scr