//Tyler Bieker
//CS261
//Project 1 Test function
//06/24/2016

//Program to test the bone, chicken yard and player classes/functions

#include "bone.h"
#include "yard.h"
#include "player.h"
#include <iostream>

int main(){
    std::cout << "CS261 - A01 - Tyler Bieker" << std::endl;

    Yard chickenYard;
    Player playerOne;

    std::cout << "Ordered deck\n";

    chickenYard.print();
    //chickenYard.shuffle();

    std::cout << "shuffled deck\n";
    chickenYard.print();

    //std::cout << "Printing empty hand\n";
    //playerOne.printHand();

    playerOne.startingHand(chickenYard);

    std::cout << "Printing initial hand\n";
    playerOne.printHand();

    std::cout << "Bones remaining in deck\n";
    chickenYard.print();

    return 0;
}
