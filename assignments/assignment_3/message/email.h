//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//email class

class Email : public Message{
private:
    string destination;
	string source;

public:
    Email();
    Email(const string dest, const string src);
	~Email();

    void print() const;	//print the message... to: , from: , message:

	//TODO copy constructor and copy function
};
