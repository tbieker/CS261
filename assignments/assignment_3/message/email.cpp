//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//email.cpp

using std::cout;
using std::endl;

Email::Email(){
	return;
}

Email::Email(const string newName, const string newDomain){
	this.name = newName;
	this.domain = newDomain;
	return;
}

Email::~Email(){
	return;
}

void Email::print() const{
	cout << "To: " << toName << '@' << toDomain << endl;
	cout << "From: " << fromName << '@ << fromDomain << endl;
}