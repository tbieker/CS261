//Tyler Bieker
//CS261
//Project 1 Chicken Yard Class
//06/24/2016

//Class that manages the deck of bones to be draw from, including shuffling

#ifndef _YARD_
#define _YARD_

#include "deck.h"
#include "bone.h"

class Yard{
private:
    Deck deck;
    void createDeck(int size);

    int deckSize = 5; //max deck size counted by number of double bones

public:
    Yard();
    ~Yard();

    void shuffle(); //shuffle bones using fisher-yates algorithm
    void deal();
    bool draw(Bone& aBone);   //return bone object when player draws
    void print();   //print bones in deck
};

#endif
