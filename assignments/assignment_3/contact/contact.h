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
	
	string emailAddress;
	string phoneNumber;
	string facebookName;
	
	BST messageList;
	
	void saveInfo();
	void saveMessages();

public:
    Contact();
    Contact(string newName, tag newTag, string contactInfo);
	~Contact();

    bool editName(string newName);
    bool editTag(tag newTag);

    string returnName();
    tag returnPreferred();

	void print() const; //print contact information

	bool sendMessage();
	void printMessages(); //print messages sent to this contact
	
	void save(); //save contact info and messages to file
	void load();
	
	const Contact& operator=(const Contact& aContact);
	const Contact& operator<(const Contact& aContact);
	const Contact& operator>(const Contact& aContact);
	
	friend std::ostream& operator<<(std::ostream& out, const Contact& aContact);
};
