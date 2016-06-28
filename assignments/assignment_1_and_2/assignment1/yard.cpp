//Tyler Bieker
//CS261
//Project 1 Chicken Yard Implementation
//06/24/2016

#include "yard.h"

Yard::Yard(){
    //deckSize = 9;
    createDeck(deckSize);
    return;
}

Yard::~Yard(){
    return;
}

void Yard::createDeck(int size){
    Bone newBone;
    for(int i = 1; i < (size + 1); i++){
        for(int j = i; j < (size + 1); j++){
            newBone.setSides(i, j);
            deck.push(newBone);
        }
    }
    return;
}

void Yard::shuffle(){
    Deck shuffled;
    srand(time(NULL));
    int position; //position in deck
    int length; //length of the deck
    while(deck.getLength() != 0){
        length = deck.getLength();
        position = (rand() % length) + 1;  //select random position in deck
        Bone newBone;
        deck.pop(newBone, position);
        shuffled.push(newBone);    //push popped bone into new deck
    }
    deck = shuffled;    //copy shuffled deck into deck
    return;
}

void Yard::deal(){
    return;
}

bool Yard::draw(Bone& aBone){
    return deck.pop(aBone);
}

void Yard::print(){
    deck.display();
    return;
}
