//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//email.cpp

using std::cout;
using std::endl;

Email::Email(){
	return;
}

Email::Email(const string dest, const string src){
	this.name = newName;
	this.domain = newDomain;
	return;
}

Email::~Email(){
	return;
}

void Email::print() const{
	cout << "To: " << destination << endl;
	cout << "From: " << source << endl;
}