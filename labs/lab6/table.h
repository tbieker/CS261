//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;
    node * left;
    node * right;;
};

void build(node * & root);  //supplied
void display(node *  root); //supplied
void destroy(node * & root); //supplied

/* ************** PLACE YOUR PROTOTYPE HERE ***************** */

//COPY functions
//*********************************************
void duplicate(node * root, node *& newRoot);
    //recursively create a copy of the source tree with root. newRoot is the root of the
    //destination tree.

node * copy(node * src, node * dest);

//REMOVE functions
//*********************************************
void remove(node *& root, int target);
    //recursively remove the target from the tree

node * rRemove(node * root, int target);

node * getNode(node * root, node * prev);
