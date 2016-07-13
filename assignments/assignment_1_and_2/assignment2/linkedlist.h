//Tyler Bieker
//CS 261 Assignment 1
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
		~list();
		
		void insert(Bone aBone);
		void printEnd(); //print the tail of the list
		
		const LinkedList& operator=(const LinkedList& aList); //deep copy
};

#endif