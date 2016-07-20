//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//Contact class

//

#include <string>

class Contact{
private:
    string name; //name of contact

    enum tag{email, phone, facebook};
    tag preferredContact;

    contactList //TODO determine data structure for current contacts


public:
    void print(); //print contact information

};
