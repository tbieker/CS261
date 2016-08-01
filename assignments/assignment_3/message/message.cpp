//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//message.cpp

//constructors

Message::Message(){
	message = "No message";
	title = "No title";
	return;
}

Message::~Message(){
	return;
}

void setMessage(const string newMessage){
	message = newMessage;
	return;
}

void setTitle(const string title){
	this.title = title;
	return;
}

string returnTitle(){
	return title;
}

const Message& Message::operator<(const Message& aMessage){
	if(this.title.compare(aMessage.title) < 0){
		return this;
	}else{
		return aMessage;
	}
}

const Message& Message::operator>(const Message& aMessage){
	return (aMessage < this);
}