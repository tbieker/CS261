//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//Contact class

//

#include <string>
#include "definitions.h"

class Contact{
private:
    string name; //name of contact
    tag preferredContact;

public:
    Contact();
    Contact(string newName, tag newTag);
	~Contact();

    bool editName(string newName);
    bool editTag(tag newTag);

    string returnName();
    tag returnPreferred();

	void print() const; //print contact information

	Contact& operator=(const Contact& aContact);
	
	Contact& operator<(const Contact& aContact);
	Contact& operator>(const Contact& aContact);
};
