//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//text message class

class Text : public Message{
private:
    //strings to hold sender and recipient
    string toNumber;
    string fromNumber;

public:
	Text();
    ~Text();

	friend std::ostream& operator<<(std::ostream& out, const Text& aText);
};
