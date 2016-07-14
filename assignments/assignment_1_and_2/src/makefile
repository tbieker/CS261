# Tyler Bieker
# CS261
# Project1 Makefile
# 06/24/2016

CC = c++ -std=c++11
FLAGS = -Wall -c

testProg: assign_2_testprog.o player.o yard.o deck.o bone.o singlebone.o doublebone.o linkedlist.o
	${CC} assign_2_testprog.o player.o yard.o deck.o bone.o singlebone.o doublebone.o linkedlist.o -o testProg

assign_2_testprog.o: assign_2_testprog.cpp
	${CC} ${FLAGS} assign_2_testprog.cpp
	
singlebone.o: singlebone.h singlebone.cpp
	${CC} ${FLAGS} singlebone.h singlebone.cpp
	
doublebone.o: doublebone.h doublebone.cpp
	${CC} ${FLAGS} doublebone.h doublebone.cpp

linkedlist.o: linkedlist.h linkedlist.cpp
	${CC} ${FLAGS} linkedlist.h linkedlist.cpp
	
player.o: player.h player.cpp
	${CC} ${FLAGS} player.h player.cpp

yard.o: yard.h yard.cpp
	${CC} ${FLAGS} yard.h yard.cpp

deck.o: deck.h deck.cpp
	${CC} ${FLAGS} deck.h deck.cpp

bone.o: bone.h bone.cpp
	${CC} ${FLAGS} bone.h bone.cpp

.PHONY: clean
clean:
	rm *.o *.gch testProg
