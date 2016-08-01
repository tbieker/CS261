//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//message class

class Message{
private:

protected:
    //string to hold message
    string message;
	string title; //title of message for comparison

public:
    Message();
    ~Message();

    virtual void print()=0; //print the sender, recipient and contents of message
	
    void setMessage(const string newMessage);
	void setTitle(const string title);
	
	string returnTitle();

	//messages are compared by titles
    const Message& Message::operator<(const Message& aMessage)
	const Message& Message::operator>(const Message& aMessage)
};
