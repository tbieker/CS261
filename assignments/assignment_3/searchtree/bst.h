//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//bst class

//class for balanced binary search tree

class BST{
private:
    TreeNode * root;
	
	int numNodes;
	
	TreeNode * balanceTree(TreeNode * root);	
	TreeNode * insertLeaf(TreeNode * root, TreeNode * newLeaf);
	TreeNode * rotateRight(TreeNode * root);
	TreeNode * rotateLeft(TreeNode * root);
	
	int getHeight(TreeNode * root);
	int getBalance(TreeNode * root);
	int compare(int x, int y);

	void deleteTree(TreeNode * root);
	void copyTree(TreeNode * newRoot, TreeNode * root);

public:
    BST();
    ~BST();

    bool insert(const message newMessage);
    bool remove(/*TODO*/);

    BST operator=(const BST& tree);
	
};
