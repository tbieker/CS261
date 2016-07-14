//Tyler Bieker
//CS 261 Assignment 2
//07/12/2016

//linked list

#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include "node.h"
#include "bone.h"
#include "doublebone.h"
#include "singlebone.h"

class LinkedList{
	private:
		Node * head;
		Node * tail;

	public:
		LinkedList();							//default constructor
		//TODO ~list();

		bool insert(Bone& aBone); //insert node at end of list. return true if insert successful
		void printTail(); //print the tail of the list
		void printList();
		
		//TODO const LinkedList& operator=(const LinkedList& aList); //deep copy
};

#endif
