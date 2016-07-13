//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//DoubleBone class inherited from Node class

class DoubleBone : public Node{
	private:
    //pointers to linked lists
	//fill top to bottom
	LinkedList * top;
	LinkedList * middle;
	LinkedList * bottom;

    bool complete; //true if three lists have been added

    bool addToEmptyList(Bone& aBone);
    bool newList(LinkedList& newList, Bone& aBone);

	public:
        //node * next;

		//insert bone into linked list. must fill all three before continuing through list
		//return false if no end matches bone to be inserted

        bool isComplete(); //true if three lists added
        bool insert(Bone aBone);
        void printAll(); //print the three lists
		void print(); //print tails of all three lists
}
