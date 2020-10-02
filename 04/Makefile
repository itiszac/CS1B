CC=g++

all: hw04

hw04: hw04f1.o hw04f2.o hw04f3.o hw04f4.o hw04f5.o hw04f6.o hw04f7.o hw04f8.o hw04f9.o hw04.cpp hw04.h
	$(CC) hw04.cpp -o hw04 hw04f1.o hw04f2.o hw04f3.o hw04f4.o hw04f5.o hw04f6.o hw04f7.o hw04f8.o hw04f9.o

hw04f1.o: hw04f1.cpp hw04f.h
	$(CC) -c hw04f1.cpp -o hw04f1.o

hw04f2.o: hw04f2.cpp hw04f.h
	$(CC) -c hw04f2.cpp -o hw04f2.o

hw04f3.o: hw04f3.cpp hw04f.h
	$(CC) -c hw04f3.cpp -o hw04f3.o

hw04f4.o: hw04f4.cpp hw04f.h
	$(CC) -c hw04f4.cpp -o hw04f4.o

hw04f5.o: hw04f5.cpp hw04f.h
	$(CC) -c hw04f5.cpp -o hw04f5.o

hw04f6.o: hw04f6.cpp hw04f.h
	$(CC) -c hw04f6.cpp -o hw04f6.o

hw04f7.o: hw04f7.cpp hw04f.h
	$(CC) -c hw04f7.cpp -o hw04f7.o

hw04f8.o: hw04f8.cpp hw04f.h
	$(CC) -c hw04f8.cpp -o hw04f8.o

hw04f9.o: hw04f9.cpp hw04f.h
	$(CC) -c hw04f9.cpp -o hw04f9.o

# hw04: inctax.o hw04.cpp hw04.h
# 	$(CC) hw04.cpp -o hw04 inctax.o

# inctax.o: inctax.cpp inctax.h
# 	$(CC) -c inctax.cpp -o inctax.o

clean:
	rm hw04 *.o

tar:
	tar cvf hw04.tar hw04.cpp hw04.h hw04f.h hw04f1.cpp hw04f2.cpp hw04f3.cpp hw04f4.cpp hw04f5.cpp hw04f6.cpp hw04f7.cpp hw04f8.cpp hw04f9.cpp Makefile hw04.scr

