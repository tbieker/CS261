#Tyler Bieker
#Lab 5 Makefile
#07/27/2016

CC= g++ -std=c++11
FLAGS= -Wall -g -c

lab4: main.o dlist.o supplied.o
	${CC} main.o dlist.o supplied.o -o lab5

main.o: main.cpp
	${CC} ${FLAGS} main.cpp

dlist.o: dlist.cpp dlist.h
	${CC} ${FLAGS} dlist.h dlist.cpp

clean:
	rm main.o dlist.o *.gch lab5
