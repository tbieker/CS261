//Author: Tyler Bieker
//CS261 Assignment 3
//Date: 07/19/2016

//contactlist.cpp

//Constructors
//****************************************************************
ContactList::ContactList(){
  capacity = DEFAULT_CAPACITY;
  initializeTable();
  return;
}

ContactList::ContactList(const ContactList& aTable){
  capacity = DEFAULT_CAPACITY;
  table = new node*[capacity];

  for(int i = 0; i < capacity; i++){
    if(aTable.table[i] == nullptr){
      table[i] = nullptr;
    }else{
      node * src;
      node * dest;

      table[i] = new node;
      table[i]->contact = aTable.table[i]->contact;

      dest = table[i];
      src = aTable.table[i]->next;
      while(src){
        dest->next = new node;
        dest->contact = src->contact;
        src = src->next;
      }
      dest->next = nullptr;
    }
  }

}

/*
//TODO rewrite for Contact list
ContactList::ContactList(char fileName[100]){
  capacity = DEFAULT_CAPACITY;
  initializeTable();

  std::ifstream inFile;

  inFile.open(fileName);

  if(!inFile){
  std::cout << "Failed to open" << std::endl;
  exit(1);
  }

  stock aStock;
  char ticker[100];
  char name[100];
  float value;
  char date[100];
  float netAssetValue;

  inFile.get(ticker, 100, ',');
  while(!inFile.eof()){
    inFile.ignore(100, ',');
    inFile.get(name, 100, ',');
    inFile.ignore(100, ',');
    inFile >> value;
    inFile.ignore(100, ',');
    inFile.get(date, 100, ',');
    inFile.ignore(100, ',');
    inFile >> netAssetValue;
    inFile.ignore(100, '\n');

    aStock.setSymbol(ticker);
    aStock.setName(name);
    aStock.setValue(value);
    aStock.setDate(date);
    aStock.setReturn(netAssetValue);

    add(aStock);

    inFile.get(ticker, 100, ',');
  }
  inFile.close();
  return;
}
*/

ContactList::~ContactList(){
  destroyTable();
  return;
}

//Public functions
//****************************************************************

bool ContactList::insert(const Contact& newContact){
  int key;
  string name;
  name = newContact.returnName();
  key = keyGen(name);

  node * newNode;
  newNode = new Node;
  newNode->contact = newContact;

  //first node of table[key]
  if(table[key] == nullptr){
    newNode->next = nullptr;
    table[key] = newNode;
    return;
  }
  else{
    node * curr;
    node * prev;
    prev = nullptr;
    curr = table[key];
    /********************************************************
    * Sort nodes alphabetically
    ********************************************************/

    //create new head
    if(newContact < curr->contact){
      newNode->next = table[key];
      table[key] = newNode;
      return;
    }else{
      while(curr != nullptr && curr->contact < newContact){
        prev = curr;
        curr = curr->next;
        }
        //reached end of list, new node to tail
        if(curr == nullptr){
            prev->next = newNode;
            newNode->next = nullptr;
            return;
        }else{
            prev->next = newNode;
            newNode->next = curr;
            return;
        }
    }
  }
}

bool ContactList::remove(string rName){
  node * curr;
  node * prev;

  string name;
  name = newContact.returnName();
  
  int key;
  key = keyGen(rName);
  curr = table[key];
  prev = table[key];
  name = curr->contact.returnName();
  if(name == rName){  //head of list removed
    table[key] = curr->next;
    delete curr;
    curr = nullptr;
    return true;
  }
  curr = curr->next;
  while(curr){
    name = curr->contact.returnName();
    if(name == rName){
      prev->next = curr->next;
      delete curr;
      curr = nullptr;
      return true;
    }else{
      curr = curr->next;
      prev = prev->next;
    }
  }
  return false;
}

void ContactList::print(){
  for(int i = 0; i < capacity; i++){
    node * curr = table[i];
    while(curr){
      curr->contact.print();
      std::cout << std::endl;
      curr = curr->next;
    }
  }
  return;
}
/*
    //function to monitor the individual chains in hash file
  for(int i = 0; i < capacity; i++){
    int size = 0;
    node * curr;
    curr = table[i];
    while(curr){
      size++;
      curr = curr->next;
    }
    if(size){
        std::cout << "Chain: " << i << std::endl << "Nodes: " << size << std::endl << std::endl;
    }
  }
  return;
}
*/

//Contact retrieve(const string name){}

void ContactList::writeOut(char * fileName){
  std::ofstream out;

  out.open(fileName);
  if(!out){
    std::cout << "Failed to write to " << fileName << std::endl;
    exit(1);
  }

  node * curr;
  for(int i = 0; i < capacity; i++){
    curr = table[i];
    while(curr){
      curr->contact.print();
      curr = curr->next;
    }
  }
  out.close();
  return;
}

//Private functions
//****************************************************************
void ContactList::initializeTable(){
  table = new node*[capacity];
  for(int i = 0; i < capacity; i++){
    table[i] = nullptr;
  }
  return;
}

void ContactList::destroyTable(){
  node * head;
  node * curr;

  for(int i = 0; i < capacity; i++){
    head = table[i];
    curr = head;
    while(curr){
      head = curr->next;
      delete curr;
      curr = nullptr;
      curr = head;
    }
  }
  delete [] table;
  return;
}

int ContactList::keyGen(const string name){
    char c = name.at(0); //collect first letter in string
	putchar(toupper(c)); //ensure uppercasecase
	int key;
    key = int(c) % 26;
    return key;
}
