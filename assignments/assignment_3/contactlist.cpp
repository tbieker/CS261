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

//TODO
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

ContactList::~ContactList(){
  destroyTable();
  return;
}

//Public functions
//****************************************************************

//TODO rewrite
bool ContactList::insert(const Contact& newContact){
  int key;
  char ticker[100];
  aStock.getTicker(ticker);
  key = keyGen(ticker);

  node * newNode;
  newNode = new node;
  newNode->data = aStock;

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

    std::cout << aStock << std::endl;
    std::cout << key << std::endl;

    //create new head
    if(aStock < curr->data){
      newNode->next = table[key];
      table[key] = newNode;
      return;
    }else{
      while(curr != nullptr && curr->data < aStock){
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

//TODO rewrite for ContactList
bool ContactList::remove(/*TODO*/){
  node * curr;
  node * prev;
  char aTicker[100];

  int key;
  key = keyGen(tickerSymbol);
  curr = table[key];
  prev = table[key];
  curr->data.getTicker(aTicker);
  if(aTicker == tickerSymbol){  //head of list removed
    table[key] = curr->next;
    delete curr;
    curr = nullptr;
    return true;
  }
  curr = curr->next;
  while(curr){
    curr->data.getTicker(aTicker);
    if(aTicker == tickerSymbol){
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
  node * mod;
  if(retrieve(tickerSymbol, mod->data)){
    mod->data.setValue(newNetAssetValue);
    mod->data.setDate(newDate);
    mod->data.setReturn(newDateReturn);
    return true;
  }else{
    return false;
  }
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
      out << curr->contact;
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

int ContactList::keyGen(/*TODO*/){
    int key;
    key = int(/*TODO*/) % 26;
    return key;
}
