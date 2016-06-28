#Author: Tyler Bieker
#Assignment: Lab 1 makefile
#Date: 06/23/2016

CC= g++ -std=c++11
FLAGS= -Wall -g -c

myhello: hello.o
	${CC} hello.o -o myhello
 
hello.o: hello.cpp
	${CC} ${FLAGS} hello.cpp

clean:
	rm *.o myhello

