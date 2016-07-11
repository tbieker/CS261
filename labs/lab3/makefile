#Tyler Bieker
#Lab 3 Makefile
#07/05/2016

CC= g++ -std=c++11
FLAGS= -Wall -g -c

lab3: main.o list.o supplied.o
	${CC} main.o list.o supplied.o -o lab3

main.o: main.cpp
	${CC} ${FLAGS} main.cpp

list.o: list.cpp list.h
	${CC} ${FLAGS} list.h list.cpp

clean:
	rm main.o list.o *.gch lab3
