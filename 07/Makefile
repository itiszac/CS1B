CC=g++

all: hw07

hw07: poplist.o addrec.o delrec.o showrec.o showrecs.o exit.o hw07.cpp hw07.h
	$(CC) hw07.cpp -o hw07 poplist.o addrec.o delrec.o showrec.o showrecs.o exit.o

poplist.o: poplist.cpp hw07f.h
	$(CC) -c poplist.cpp -o poplist.o

addrec.o: addrec.cpp hw07f.h
	$(CC) -c addrec.cpp -o addrec.o

delrec.o: delrec.cpp hw07f.h
	$(CC) -c delrec.cpp -o delrec.o

showrec.o: showrec.cpp hw07f.h
	$(CC) -c showrec.cpp -o showrec.o

showrecs.o: showrecs.cpp hw07f.h
	$(CC) -c showrecs.cpp -o showrecs.o

exit.o: exit.cpp hw07f.h
	$(CC) -c exit.cpp -o exit.o

clean:
	rm hw07 *.o

tar:
	tar cvf hw07.tar hw07.cpp hw07.h hw07f.h poplist.cpp Makefile hw07.scr