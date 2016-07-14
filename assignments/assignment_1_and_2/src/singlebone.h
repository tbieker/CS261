//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//SingleBone class inherited from Node class

#ifndef _SINGLEBONE_
#define _SINGLEBONE_

#include "node.h"

class SingleBone : public Node{
	private:
        void insertNode(Bone& aBone); //create new node and set to next
	public:
		//node * next;

        bool insert(Bone& aBone);
		void print(); //print free tail of bone
        void printTail();
};

#endif