//Tyler Bieker
//CS 261 Assignment 2
//07/12/2016

//doublebone.cpp

#include "doublebone.h"
#include <iostream>

DoubleBone::DoubleBone(){
    top = nullptr;
    middle = nullptr;
    bottom = nullptr;
    complete = false;
    return;
}

DoubleBone::~DoubleBone(){
    if(top != nullptr){
        delete top;
        top = nullptr;
        if(middle != nullptr){
            delete middle;
            middle = nullptr;
            if(bottom != nullptr){
                delete bottom;
                bottom = nullptr;
            }
        }
    }
    return;
}

bool DoubleBone::insert(Bone& aBone){
    if(isComplete() == true){
        if(top->insert(aBone) == true){
            return true;
        }else if(middle->insert(aBone) == true){
            return true;
        }else{
            //reached last list. return false if unable
            //to find correct end
            return bottom->insert(aBone);
        }
    }else{  //three lists have not been filled
        if(aBone.sideOne == bone.sideTwo){
    		return addToEmptyList(aBone);
    	}else{
    		aBone.swap(); //swap ends of bone and retest
    		if(aBone.sideOne == bone.sideTwo){
                return addToEmptyList(aBone);
    		}else{
    			return false; //bone does not match
    		}
    	}
    }
}

bool DoubleBone::addToEmptyList(Bone& aBone){
    if(top == nullptr){
        return newList(top, aBone);
    }else if(middle == nullptr){
        return newList(middle, aBone);
    }else{
        //last list that is empty. set complete to true
        //if the last list is created and filled
        bool lastList;
        lastList = newList(bottom, aBone);
        if(lastList == true){
            complete = true;
        }
        return lastList;
    }
}

bool DoubleBone::newList(LinkedList * newList, Bone& aBone){
    newList = new LinkedList;
    return newList->insert(aBone);
}

void DoubleBone::printTail(){ //print free ends(tails) of lists
    if(top != nullptr){
        top->printTail();
    }
    if(middle != nullptr){
        middle->printTail();
    }
    if(bottom != nullptr){
        bottom->printTail();
    }
    return;
}

void DoubleBone::print(){   //print all nodes
    if(top != nullptr){
        top->printList();
        std::cout << std::endl;
        bone.print();
        if(middle != nullptr){
            middle->printList();
            std::cout << std::endl;
            if(bottom != nullptr){
                bottom->printList();
                std::cout << std::endl;
            }
        }
    }
	return;
}

bool DoubleBone::isComplete(){
    return complete; //return true if three lists in node
}
