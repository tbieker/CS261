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
    Node * newNode;
    newNode = new SingleBone;
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
        Node * curr;
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
        Node * temp;
        temp = top->next;
        delete top;
        top = temp;
        length = length - 1;
        return true;
    }else{
        Node * curr;
        curr = top;
        for(int i = 1; i < position - 1; i++){  //move pointer to Node before position
            curr = curr->next;
        }
        aBone = curr->next->bone;
        Node * temp;    //pointer to hold Node to be deleted
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
        Node * curr;
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
        Node * curr;
        curr = aDeck.top;
        while(curr != nullptr){
            push(curr->bone);
            curr = curr->next;
        }
        return *this;
    }
}

void Deck::destroyDeck(){
    Node * curr;
    curr = top;
    while(curr != nullptr){
        curr = curr->next;
        delete top;
        top = curr;
    }
    return;
}
