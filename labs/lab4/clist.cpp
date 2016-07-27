//Tyler Bieker
//CS 261 Lab 4
//07/17/2017

//clist.cpp

#include "clist.h"

using std::cout;
using std::endl;

void addHead(node *& head, int value){
    //add value to the head of the circular linked list

    node * newNode;
    newNode = new node;
    newNode->data = value;
    newNode->next = head->next;
    head->next = newNode;
    head = newNode;
    return;
}

void myDisplay(node * head){
    node * current = head;
    displayList(head, current->next);
    cout << head->data;
    cout << endl;
    return;
}

void displayList(node * head, node * current){
    if(current == head){
        cout << current->data << " <-";
        return;
    }else{
        displayList(head, current->next);
        std::cout << current->data << " <- ";
        return;
    }
}
