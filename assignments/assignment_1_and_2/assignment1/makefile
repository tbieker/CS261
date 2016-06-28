# Tyler Bieker
# CS261
# Project1 Makefile
# 06/24/2016

CC = c++ -std=c++11
FLAGS = -Wall -c

testProg: testProg.o player.o yard.o deck.o bone.o
	${CC} testProg.o player.o yard.o deck.o bone.o -o testProg

testProg.o: testProg.cpp
	${CC} ${FLAGS} testProg.cpp

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
