//Tyler Bieker
//CS 261
//Project 1 Player Class
//06/24/2016

//Class to manage the players hand and score

#ifndef _PLAYER_
#define _PLAYER_

#include "bone.h"
#include "yard.h"
#include "node.h"
#include "singlebone.h"
#include "doublebone.h"

class Player{
private:
    Node * head;

    int score; //score is the number of bones in hand

    void destroyHand();

public:
    Player();
    ~Player();

    Bone play(int position); //play bone from players hand
    void push(Bone aBone);   //add bone to hand
    void printHand();
    void startingHand(Yard& aYard);    //draw seven cards for starting hand

    int returnScore();

};

#endif
