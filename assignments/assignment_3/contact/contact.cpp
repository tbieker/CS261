//Tyler Bieker
//CS261 Assignment 3
//07/19/2016


//contact.cpp

Contact::Contact(){
    return;
}

Contact::Contact(string newName, tag newTag){
    name = newName;
    tag = newtag;
    return;
}

Contact::~Contact(){
    return;
}

bool Contact::editName(string newName){
    name = newName;
    return;
}

bool Contact::editTag(tag newTag){
    preferredContact = newTag;
    return;
}

string Contact::returnName(){
	return name;
}

tag Contact::returnPreferred(){
	return preferredContact;
}

void Contact::print() const{
    std::cout << name << std::endl;
    std::cout << preferredContact << std::endl;
    return;
}

Contact& Contact::operator=(const Contact& aContact){
    name = aContact.name;
    preferredContact = aContact.preferredContact;
    return;
}

Contact& Contact::operator<(const Contact& aContact){
	if(this.name < aContact.name){
		return this;
	}else{
		return aContact;
	}
}

Contact& Contact::operator>(const Contact& aContact){
	return aContact < this;
}