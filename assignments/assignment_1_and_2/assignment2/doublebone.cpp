//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//doublebone.cpp

#include "doublebone.h"

bool DoubleBone::insert(Bone aBone){
	if(aBone.head == bone.head){
		if(top == nullptr){
			top = new LinkedList;
			top->insert(aBone);
			return true;
		}
	}else{
		aBone.swap(); //swap ends of bone and retest
		if(aBone.head == bone.head){
			
		}else{
			return false; //bone does not match
		}
	}
}

void DoubleBone::print(){
	node * curr;
	
	curr = top;
	while(curr != nullptr){
		curr->print();
		curr = curr->next;
	}
	std::endl;
	bone.print();
	
	curr = middle;
	while(curr != nullptr){
		curr->print();
		curr = curr->next;
	}
	std::endl;
	
	curr = bottom;
	while(curr != nullptr){
		curr->print();
		curr = curr->next;
	}
	std::endl;
	
	return;
}