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
    root = rRemove(root, target);
    return;
}

node * rRemove(node * root, int target){
    if(root == nullptr){
        return root;
    }
    else if(root->data == target){
        if(root->left == nullptr && root->right == nullptr){
            //root is a leaf
            delete root;
            root = nullptr;
            return root;
        }
        else if(root->left == nullptr && root->right != nullptr){
            //root has right branch but null left branch
            node * temp;
            temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        else if(root->left != nullptr && root->right == nullptr){
            //root has left branch but null right branch
            node * temp;
            temp = root;
            root = root->left;
            delete temp;
            return root;
        }
        else{
            //root has two branches
            node * temp;
            temp = getNode();
            temp->right = root->right;
            temp->left = root->left;
            delete root;
            root = temp;
            return temp;
        }
    }
    else if(target < root->data){
        //target is less, search left branches
        root->left = rRemove(root->left, target);
        return root;
    }
    else if(target > root->data){
        //target is greater, search right branches
        root->right = rRemove(root->right, target);
        return root;
    }
}

node * getNode(node * root){
    if(root->left == nullptr && root->right == nullptr){
        return root;
    }else{
        return getNode(root->left);
    }
}
