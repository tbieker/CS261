//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//message class

class Message{
private:

protected:
    //string to hold message
    string message;

public:
    Message();
    ~Message();

    virtual void print(); //print the sender, recipient and contents of message

    void setDestination(const string sender, const string recipient); //set the toAddress and fromAddress;
    void setMessage(const string newMessage);

    //TODO Operator<();
};
