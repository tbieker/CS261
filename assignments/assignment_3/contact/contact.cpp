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

void Contact::print(){
    std::cout << name << std::endl;
    std::cout << preferredContact << std::endl;
    return;
}

Contact& Operator=(const Contact aContact){
    name = aContact.name;
    preferredContact = aContact.preferredContact;
    return;
}
