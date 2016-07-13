//Tyler Bieker
//CS 261 Assignment 2
//07/12/2016

//linked list

#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include "node.h"
#include "bone.h"

class LinkedList{
	private:
		node * head;
		node * tail;

	public:
		list();							//default constructor
		//TODO ~list();

		bool insert(Bone aBone); //insert node at end of list. return true if insert successful
		void printEnd(); //print the tail of the list

		//TODO const LinkedList& operator=(const LinkedList& aList); //deep copy
};

#endif
