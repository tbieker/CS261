//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//bst.cpp

BST::BST(){
	numNodes = 0;
	root = nullptr;
	return;
}

BST::~BST(){
	deleteTree(root);
	return;
}

//Public Functions

void BST::insert(const Message newMessage){
	TreeNode newLeaf;
	newLeaf = new TreeNode;
	newLeaf->message = newMessage;
	newLeaf->height = 1;
	insertLeaf(root, newLeaf);
	numNodes = numNodes + 1;
	return;
}

bool BST::remove(){
	return;
}

BST& BST::operator=(const BST& tree){
	if(this == &tree){
		return *this;
	}else{
		deleteTree(root);
		copyTree(root, tree.root);
		return *this;
	}
}

//Private Functions

TreeNode * BST::insertLeaf(TreeNode * root, TreeNode * newLeaf){
	
	//insert new leaf into tree
	if(root == nullptr){
		root = newLeaf;
		return root;
	}
	if(newLeaf->message < root->message){
		root->left = insertLeaf(root->left, newLeaf);
	}else{
		root->right = insertLeaf(root->right, newLeaf);)
	}
	
	//set height of branch
	root->height = compare(root->left->getHeight, root->right->getHeight) + 1;
	
	return balanceTree(root);
	
}

//get the height of tree from node
int TreeNode::getHeight(TreeNode * root){
	if(root == nullptr){
		return 0;
	}else{
		return (root->height);
	}
}

//check left-right balance of tree
int getBalance(TreeNode * root){
	if(root == nullptr){
		return 0;
	}else{
		return (getHeight(root->left) - getHeight(root->right));
	}
}

//compare two integers
int BST::compare(int x, int y){
	if(x > y){
		return x;
	}else{
		return y;
	}
}

TreeNode * BST::rotateRight(TreeNode * root){
	TreeNode x = root->left;
	TreeNode y = x->right;
	
	//rotate
	x->right = root;
	root->left = y;
	
	//get new tree heights
	root->height = compare(getHeight(root->left), getHeight(root->right)) + 1;
	x->height = compare(getHeight(x->left), height(x->right)) + 1;
	
	//x is now root
	return x;
}

TreeNode * BST::rotateLeft(TreeNode * root){
	//opposite of rotateRight
	TreeNode x = root->right;
	TreeNode y = x->left;
	
	//rotate
	x->left = root;
	root->right = y;
	
	//get new tree heights
	root->height = compare(getHeight(root->left), getHeight(root->right)) + 1;
	x->height = compare(getHeight(x->left), height(x->right)) + 1;
	
	//x is now root
	return x;
}

void BST::deleteTree(TreeNode * root){
	if(root == nullptr){
		return;
	}else{
		deleteTree(root->left);
		deleteTree(root->right);
		delete root;
	}
	return;
}

void BST::copyTree(TreeNode * newRoot, TreeNode * root){
	if(root != nullptr){
		newRoot = new TreeNode;
		newRoot->message = root->message;
		copyTree(newRoot->left, root->left);
		copyTree(newRoot->right, root->right);
	}else{
		//root is equal to nullptr, set new root to nullptr
		newRoot = nullptr;
	}
}

//balance the branches of tree
TreeNode * BST::balanceTree(TreeNode * root){
	int balance;
	//check left/right balance of tree
	balance = getBalance(root);
	
	if(balance ==0){ //tree is balanced
		return root;
	}else{
		//left
		if(balance > 1 && newLeaf->message < root->left->message){
			return rotateRight(root);
		}
		//right
		if(balance < -1 && newLeaf->message > root->right->message){
			return rotateLeft(root);
		}
		//left-right
		if(balance > 1 && newLeaf->message > root->left->message){
			root->left = rotateLeft(root->left);
			return rotateRight(root);
		}
		//right-left
		if(balance < -1 && newLeaf->message < root->right->message){
			root->right = rotateRight(root->right);
			return rotateLeft(root);
		}
	}
}

