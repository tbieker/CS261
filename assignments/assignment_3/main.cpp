//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//main program

using std::cout;
using std::endl;

void printMenu();
void getInput();

int main(){
	cout << "CS261 - Assignment 3 - Tyler Bieker" << endl << endl;
	
	char command;
	
	printMenu();
	command = getInput();
	while(command != q){
		execute(command);
	}
	
	
	return 0;
}

void execute(char command){
	
	switch(command){
		//send message
		case 's':
		
		//print contacts
		case 'p':
		
		//add new contact
		case 'a':
		
		//remove contact
		case 'r':
		
		//load contacts from file
		case 'l':
		
	}
}

void printMenu(){
	cout << "TB messaging program" << endl;
	cout << "Select from the following options: " << endl;
	cout << "s: Send Message\n"
		 << "p: Print contacts\n"
		 << "a: Add new contact\n"
		 << "r: Remove contact\n"
		 << "l: Load contacts from file\n"
		 << "q: Save and quit\n"
		 << ":";
}

char getInput(){
	char c;
	cin >> c;
	cin.ignore(100, '\n');
	return tolower(c);
}