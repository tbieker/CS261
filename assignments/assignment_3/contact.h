//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//Contact class

//

#include <string>

class Contact{
private:
    string name; //name of contact
    tag preferredContact;


public:
    Contact();
	~Contact();
	
	bool newContact(); //insert new contact into contactList	
	
	void print(); //print contact information
	
	//TODO Operator=
};
