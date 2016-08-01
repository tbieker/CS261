//Tyler Bieker
//CS261 Assignment 3
//07/19/2016


//contact.cpp

Contact::Contact(){
    emailAddress = "No email";
	phoneNumber = "No number";
	facebookName = "No facebook";
	return;
}

Contact::Contact(string newName, tag newTag, string contactInfo){
    name = newName;
    tag = newtag;
	if(tag == email){
		emailAddress = contactInfo;
	}else if(tag == phone){
		phoneNumber = contactInfo;
	}else{
		facebookName = contactInfo;
	}
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

const Contact& Contact::operator=(const Contact& aContact){
    name = aContact.name;
    preferredContact = aContact.preferredContact;
    return;
}

const Contact& Contact::operator<(const Contact& aContact){
	if(this.name.compare(aContact.name) < 0){
		return this;
	}else{
		return aContact;
	}
}

const Contact& Contact::operator>(const Contact& aContact){
	return (aContact < this);
}

std::ostream& operator<<(std::ostream& out, const Contact& aContact){
	out << this.name << '\n'
		<< this.preferredContact << '\n'
		<< this.emailAddress << '\n'
		<< this.phoneNumber << '\n'
		<< this.facebookName << '\n';
	return out;
}

bool Contact::sendMessage(Contact sender, string message){
	Message newMessage;
	
	if(preferredContact == email){
		newMessage = new Email(this.emailAddress, sender.emailAddress);
	}else if(preferredContact == text){
		newMessage = new Text(this.phoneNumber, sender.phoneNumber);
	}else if(preferredContact == facebook){
		newMessage = new Facebook(this.facebookName, sender.facebookName);
	}else{
		return false;
	}
	newMessage.setMessage(message);
	messageList.insert(newMessage);
}

void Contact::printMessages(){
	messageList.print();
	return;
}

void Contact::save(){
	saveInfo();
	saveMessages();
	return;
}

//Private Functions

void Contact::saveInfo(){
	string path;
	
	//append pathname as /name/name.contact
	path.append('/')
	path.append(this.name);
	path.append('/');
	path.append(this.name);
	path.append(".contact");
	
	
	ofstream outFile;
	outFile.open(path);
	
	outFile << this;
	
	outFile.close();
	return
}

void Contact::saveMessages(){
	//append pathname /name/messages/
	path.append('/')
	path.append(this.name);
	path.append("/messages/");
	
	messageList.save(path);
	return;
}

