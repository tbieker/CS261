//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//DoubleBone class inherited from Node class

#ifndef _DOUBLEBONE_
#define _DOUBLEBONE_

#include "node.h"
#include "linkedlist.h"

class DoubleBone : public Node{
	private:
    //pointers to linked lists
	//fill top to bottom
	LinkedList * top;
	LinkedList * middle;
	LinkedList * bottom;

    bool complete; //true if three lists have been added

    bool addToEmptyList(Bone& aBone);
    bool newList(LinkedList * newList, Bone& aBone);

	public:
        //Node * next;

		//insert bone into linked list. must fill all three before continuing through list
		//return false if no end matches bone to be inserted

		DoubleBone();
		~DoubleBone();
		
        bool isComplete(); //true if three lists added
        bool insert(Bone& aBone);
        void printTail(); //print the three lists
		void print(); //print tails of all three lists
};

#endif