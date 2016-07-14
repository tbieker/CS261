//Tyler Bieker
//CS 261 Assignment 2
//07/12/2016

//testprogram.cpp
//Test function of nodes and linked list

#include "node.h"
#include "bone.h"
#include "singlebone.h"
#include "doublebone.h"
#include "linkedlist.h"
#include "yard.h"

using namespace std;

int main(){
	
	cout << "Creating yard... \n";
	Yard testYard;
	cout << "Creating list... \n";
	LinkedList testList;
	cout << "Creating bone... \n";
	Bone testBone;
	
	bool testDraw;
	
	cout << "Shuffling bones...";
	testYard.shuffle();
	
	cout << "Shuffled\n" << "Drawing bones\n";
	testDraw = testYard.draw(testBone);
	bool testBool;
	while(testDraw == true){
		cout << "Inserting ";
		testBone.print();
		cout << " into list\n";
		testBool = testList.insert(testBone);
		switch(testBool){
			case true:  testBone.print();
						cout << "inserted\n";
						break;
			default:	cout << "unable to insert\n";
		}
		cout << "Drawing bone\n";
		testDraw = testYard.draw(testBone);
	}
	
	cout << "All bones added\n" << "Printing list: \n";
	
	testList.printTail();
	return 0;
}