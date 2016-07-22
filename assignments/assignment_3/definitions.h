//Tyler Bieker
//CS261 Assignment 3
//07/19/2016

//definitions header file

//create definition for preferred contact tag
enum tag{email, phone, facebook};

//node for contact list
struct Node{
    Contact contact;
    Node * next;
};

//Node for binary search tree
struct TreeNode{
    Message message;
    TreeNode * left;
    TreeNode * right;
};
