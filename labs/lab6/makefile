#Tyler Bieker
#Lab 5 Makefile
#07/27/2016

CC= g++ -std=c++11
FLAGS= -Wall -g -c

lab6: main.o table.o supplied.o
	${CC} main.o table.o supplied.o -o lab6

main.o: main.cpp
	${CC} ${FLAGS} main.cpp

table.o: table.cpp table.h
	${CC} ${FLAGS} table.h table.cpp

clean:
	rm main.o dlist.o *.gch lab6
