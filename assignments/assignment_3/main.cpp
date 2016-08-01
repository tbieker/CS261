//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//main program

#include <string>
#include <iostream>
#include "contact.h"
#include "contactList.h"

using std::cout;
using std::endl;

void execute(char command, ContactList list, Contact myInfo);
void printMenu();
void getInput();
Contact getContactInfo();
string getMessage();
string getRecipient();
void saveAndQuit();

int main(){
	cout << "CS261 - Assignment 3 - Tyler Bieker" << endl << endl;
	
	char command;
	
	ContactList cList;
	Contact myInfo; //my contact information
	
	printMenu();
	command = getInput();
	while(command != q){
		execute(command, cList, myInfo);
	}
	saveAndQuit(myInfo, cList);
	
	return 0;
}

void execute(char command, ContactList list, Contact myInfo){
	
	switch(command){
		//send message
		case 's':
			Contact * recipient;
			string recipientName;
			recipientName = getRecipient();
			if(list.retrieve(recipientName, recipient)){
				string message;
				message = getMessage();
				if(recipient->sendMessage(myInfo, message);)){
					cout << "Message sent\n";
				}else{
					cout << "Unable to send message\n";
				}
			}
			break;
		
		//print contacts
		case 'p':
			list.print();
			break;
		
		//print messages sent to contact
		case 'm':
			Contact * recipient;
			string recipientName;
			recipientName = getRecipient;
			if(list.retrieve(recipientName, recipient){
				recipient->printMessages();
			}else{
				cout << "No contact found\n";
			}
			break;
		
		//add new contact
		case 'a':
			Contact newContact;
			newContact = getContactInfo();
			cList.insert(newContact);
			break;
			
		//remove contact
		case 'r':
			break;
		
		default: 
			cout << "Invalid selection\n";
			break;
	}
}

void printMenu(){
	cout << "TB messaging program" << endl;
	cout << "Select from the following options: " << endl;
	cout << "s: Send Message\n"
		 << "p: Print contacts\n"
		 << "a: Add new contact\n"
		 << "r: Remove contact\n"
		 << "q: Save and quit\n"
		 << ":";
}

char getInput(){
	char c;
	cin >> c;
	cin.ignore(100, '\n');
	return tolower(c);
}

Contact getContactInfo(){
	string name;
	char preferred;
	tag preferredContact = email;
	
	cout << "Enter contact name: ";
	cin >> name;
	cin.ignore(100, '\n');
	while(true){
		cout << "Select preferred contact(default is email)\n"
			 << "1 : Email\n"
			 << "2 : Phone\m"
			 << "3 : Facebook\n";
		cin >> preferred;
		cin.ignore(100, '\n');
		switch(preferred){
			case '1':
				//preferredContact = email;
				break;
			case '2':
				preferredContact = phone;
				break;
			case '3':
				preferredContact = facebook;
				break;
			default:
				cout << "invalid selection. set to default\n";
				break;
		}
	}
	
	Contact newContact(name, preferredContact, string contactInfo);
	return newContact;
}

string getMessage(){
	string newMessage;
	cout << "Enter message: ";
	cin >> newMessage;
	cin.ignore(100, '\n');
	return newMessage;
}

string getRecipient(){
	string recipient;
	cout << "Enter contact name: ";
	cin >> recipient;
	cin.ignore(100, '\n');
	return recipient;
}

void saveAndQuit(Contact myInfo, ContactList cList){
	myInfo.save();
	cList.save();
	return;
}

void load(Contact myInfo, ContactList cList){
	myInfo.load();
	cList.load();
	return;
}







