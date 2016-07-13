//Tyler Bieker
//CS 261 Assignment 2
//07/12/2016

//singlebone.cpp

#include "singlebone.h"

bool SingleBone::insert(Bone aBone){
    if(aBone.head == bone.head){
        insertNode(aBone);
        return true;
    }else{
        aBone.swap();   //swap ends and compare again
        if(aBone.head == bone.head){
            insertNode(aBone);
            return true;
        }else{
            return false; //bone to be placed does not match
        }
    }
}

void SingleBone::insertNode(Bone& aBone){
    Node * newNode;
    newNode = new SingleBone;
    newNode->bone = aBone;
    newNode->next = nullptr;
    this->next = newNode;
    return;
}

void SingleBone::print(){
	bone.print();
	return;
}

void SingleBone::printTail(){
    bone.print();
    return;
}
