//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//Contact list class
//Contacts sorted alphabetically
//Stored as hash table

#include "definitions.h"
#include "ctype.h"

class ContactList{
private:
	Node ** table;
	int capacity;
	int size; //size of table
	const static int DEFAULT_CAPACITY = 27; // a-z list

	void destroyTable();
	void initializeTable();
	int keyGen(const string name);

public:
	ContactList();
	ContactList(const ContactList& aList); //copy constructor
	//TODO ContactList(char fileName[100]); //load list from file
	~ContactList();

	bool insert(const Contact& newContact);
	bool remove(string rName);
	void print(); //print contacts in list

	//TODO Contact retrieve(const string name); //return Contact

	void writeOut(char fileName[100]); //write out contents of list to file
};
