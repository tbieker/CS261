//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//email class

class Email : public Message{
private:
    string name; //first part of email
    string domainName; //second part of email. Ex. example.com
	
public:
    Email();
    Email(newName, newDomain);

    print();	//print the message... to: , from: , message:
	
	//TODO copy constructor and copy function
	//TODO < and > functions
};
