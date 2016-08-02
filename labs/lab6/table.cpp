//Tyler Bieker
//CS 261 Lab 6
//08/01/2016

//table.cpp

#include "table.h"

void duplicate(node * root, node *& newRoot){
    //recursively create a copy of the source tree with root. newRoot is the root of the
    //destination tree.

    node * src = root;
    node * dest = newRoot;
    newRoot = copy(src, dest);
    return;
}

node * copy(node * src, node * dest){
    if(src == nullptr){
        dest = nullptr;
        return dest;
    }else{
        dest = new node;
        dest->data = src->data;
        dest->left = copy(src->left, dest->left);
        dest->right = copy(src->right, dest->right);
        return dest;
    }
}

void remove(node *& root, int target){
    //recursively remove the target from the tree

    return;
}

void rRemove(node * root, int target){
    if(root->data == target){
        node * temp;
        temp = getNode(root);
        temp->left = root->left;
        temp->right = root->right;
        delete root;
        root = temp;
        return;
    }else if(root == nullptr){
        return;
    }else{
        rRemove(root->left);
        rRemove(root->right);
    }
}

node * getNode(node * root){
    if(root->left == nullptr && root->right == nullptr){
        return root;
    }else{
        return getNode(root->left);
    }
}
