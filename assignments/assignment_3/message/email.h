//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//email class

class Email : public Message{
private:
    string toName; //first part of email
    string toDomain; //second part of email. Ex. example.com
	string fromName;
	string fromDomain;

public:
    Email();
    Email(newName, newDomain);
	~Email();

    void print() const;	//print the message... to: , from: , message:

	//TODO copy constructor and copy function
	//TODO < and > functions

    //TODO Operator<();
};
