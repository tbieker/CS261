#Tyler Bieker
#Lab 2 Makefile
#07/05/2016

CC= g++ -std=c++11
FLAGS= -Wall -g -c

lab2: main.o arr.o supplied.o
	${CC} main.o arr.o supplied.o -o lab2

main.o: main.cpp
	${CC} ${FLAGS} main.cpp

arr.o: arr.cpp arr.h
	${CC} ${FLAGS} arr.h arr.cpp

clean:
	rm main.o arr.o *.gch lab2
