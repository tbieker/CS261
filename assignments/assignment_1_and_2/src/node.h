//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//node class

#ifndef _NODE_
#define _NODE_

#include "bone.h"

class Node{
	private:

	public:
		Bone bone;	//head is the connection to previous bone, tail to next bone. tail may be free
        Node * next = nullptr;

        virtual bool insert(Bone& aBone)=0;
		virtual void print()=0;
};

#endif