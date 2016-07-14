//Tyler Bieker
//CS261
//Project 1 Player Implementation
//06/24/2016

#include "player.h"

Player::Player(){
    score = 0;
    head = nullptr;
    return;
}

Player::~Player(){
    destroyHand();
    return;
}

void Player::startingHand(Yard& aYard){    //draw seven cards for initial hand
    Bone newBone;
    for(int i = 0; i < 7; i++){
        aYard.draw(newBone);
        push(newBone);
    }
    return;
}

void Player::push(Bone aBone){
    Node * newNode;
	if(aBone.returnIsDouble() == true){
		newNode = new DoubleBone;
	}else{
		newNode = new SingleBone;
	}
    newNode->bone = aBone;

    if(head == nullptr){
        head = newNode;
        score = score + 1;
        return;
    }else{
        Node * curr;
        curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = newNode;
        score = score + 1;
        return;
    }
}

Bone Player::play(int position){
    /*
    Player selects the bone to play. A bone is returned
    from the function
    */

    Bone playedBone;    //bone to be played
    Node * curr;
    Node * temp;
    curr = head;

    //move pointer to Node before selected position
    for(int i = 0; i < (position - 1); i++){
        curr = curr->next;
    }
    temp = curr->next;
    curr->next = curr->next->next;

    playedBone = temp->bone;
    delete temp;
    score = score - 1;
    return playedBone;
}

void Player::destroyHand(){
    Node * curr;
    Node * temp;
    curr = head;
    while(curr != nullptr){
        temp = curr;
        curr = curr->next;
        delete temp;
    }
    return;
}

void Player::printHand(){
    if(score == 0){
        return;
    }else{
        Node * curr;
        curr = head;
        while(curr != nullptr){
            curr->print();
            curr = curr->next;
        }
    }
}

int Player::returnScore(){
    return score;
}
