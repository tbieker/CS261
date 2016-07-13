//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//DoubleBone class inherited from Node class

class DoubleBone : public Node{
	private:
    //pointers to linked lists
	//fill top to bottom
	LinkedList * top = nullptr;
	LinkedList * middle = nullptr;
	LinkedList * bottom = nullptr;	
	
	public:
		//insert bone into linked list. must fill all three before continuing through list
		//return false if no end matches bone to be inserted
		bool insert(Bone aBone); 
	
		void print(); //print tails of all three lists
}