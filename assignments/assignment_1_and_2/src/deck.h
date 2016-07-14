//Tyler Bieker
//CS261
//Project1 Yard Stack class
//06/24/2016

//Class to manage the a deck of bones
//Data is stored as a stack with LIFO

#ifndef _DECK_
#define _DECK_

#include "bone.h"
#include <iostream>
#include "node.h"
#include "singlebone.h"
#include "doublebone.h"

class Deck{
private:
    Node * top;
    int length; //number of bones in deck

    void destroyDeck();

public:
    Deck();
    ~Deck();

    int getLength(); //return size of deck
    void push(Bone& newBone);
    bool pop(Bone& aBone); //pop off
    bool pop(Bone& aBone, int position); //pop off node at position
    bool isEmpty();
    void display();

    const Deck& operator=(const Deck& aDeck);
};

#endif
