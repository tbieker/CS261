//Tyler Bieker
//CS261
//Project 1 Deck Implementation
//06/24/2016

#include "deck.h"

Deck::Deck(){
    top = nullptr;
    length = 0;
    return;
}

Deck::~Deck(){
    destroyDeck();
    return;
}

int Deck::getLength(){
    return length;
}

void Deck::push(Bone& newBone){
    node * newNode;
    newNode = new node;
    newNode->bone = newBone;
    newNode->next = top;
    top = newNode;
    length = length + 1;
    return;
}

bool Deck::pop(Bone& aBone){
    if(isEmpty()){
        return false;
    }else{
        node * curr;
        curr = top->next;
        aBone = top->bone;
        length = length - 1;
        delete top;
        top = curr;
        return true;
    }
}

bool Deck::pop(Bone& aBone, int position){
    if(isEmpty()){
        return false;
    }
    else if(position == 1){
        aBone = top->bone;
        node * temp;
        temp = top->next;
        delete top;
        top = temp;
        length = length - 1;
        return true;
    }else{
        node * curr;
        curr = top;
        for(int i = 1; i < position - 1; i++){  //move pointer to node before position
            curr = curr->next;
        }
        aBone = curr->next->bone;
        node * temp;    //pointer to hold node to be deleted
        temp = curr->next;
        if(curr->next != nullptr){
            curr->next = curr->next->next;
        }else{
            curr->next = nullptr;
        }
        delete temp;
        length = length - 1;
        return true;
    }
}

bool Deck::isEmpty(){
    if(length == 0){
        return true;
    }else{
        return false;
    }
}

void Deck::display(){
    if(isEmpty()){
        return;
    }else{
        node * curr;
        curr = top;
        while(curr != nullptr){
            std::cout << curr->bone << std::endl;
            curr = curr->next;
        }
        return;
    }
}

const Deck& Deck::operator=(const Deck& aDeck){
    if(this == &aDeck){
        return *this;
    }else{
        destroyDeck();
        node * curr;
        curr = aDeck.top;
        while(curr != nullptr){
            push(curr->bone);
            curr = curr->next;
        }
        return *this;
    }
}

void Deck::destroyDeck(){
    node * curr;
    curr = top;
    while(curr != nullptr){
        curr = curr->next;
        delete top;
        top = curr;
    }
    return;
}
