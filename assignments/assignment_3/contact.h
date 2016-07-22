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
    Contact(string name, tag preferred);
	~Contact();

    bool editName(string newName);
    bool editTag(tag newTag);

    string returnName();
    tag returnPreferred();

	void print(); //print contact information

	//TODO Operator=
};
