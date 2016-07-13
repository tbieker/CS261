//Tyler Bieker
//CS 261 Assignment 1
//07/12/2016

//SingleBone class inherited from Node class

class SingleBone : public Node{
	private:
        insertNode(Bone& aBone); //create new node and set to next
	public:
		//node * next;

        bool insert(Bone aBone);
		void print(); //print free tail of bone
        void printTail();
}
