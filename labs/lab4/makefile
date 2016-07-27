#Tyler Bieker
#Lab 3 Makefile
#07/05/2016

CC= g++ -std=c++11
FLAGS= -Wall -g -c

lab4: main.o clist.o supplied.o
	${CC} main.o clist.o supplied.o -o lab4

main.o: main.cpp
	${CC} ${FLAGS} main.cpp

clist.o: clist.cpp clist.h
	${CC} ${FLAGS} clist.h clist.cpp

clean:
	rm main.o clist.o *.gch lab4
