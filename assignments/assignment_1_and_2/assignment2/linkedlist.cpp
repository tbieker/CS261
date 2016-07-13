//Tyler Bieker
//CS 261 Assignment 2
//07/12/2016

//linkedlist.cpp

#include "linkedlist.h"

bool LinkedList::insert(Bone aBone){
    Node * newNode;

    if(head == nullptr){
        newNode = new SingleBone; //first node would not be double. Only one double per number in deck
        newNode->bone = aBone;
        head = newNode;
        tail = newNode;
        return true;
    }else{
        bool result; //true if insertion success
        if(tail->bone.returnIsDouble() == true){
            //if the tail is a double, tail will remain on that
            //piece. if it is single, tail will advance
            result = tail->insert(aBone);
            return result;
        }else{
            result = tail->insert(aBone);
            tail = tail->next;
            return result;
        }
    }
}

void LinkedList::printTail(){
    tail->print();
}

void LinkedList::printList(){
    node * curr;
    curr = head;
    while(curr != nullptr){
        curr->print();
        curr = curr->next;
    }
    return;
}
