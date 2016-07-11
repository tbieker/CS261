//Tyler Bieker
//CS 261
//Lab 3
//07/11/2016

//list.cpp

#include "list.h"

void duplicate(node * head, node *& newHead){
    //recursively create a copy of the source list with head. newhead is the head of the
    //destination list.

    //first node
    newHead = new node;
    newHead->data = head->data;

    //create source and destination
    node * src = head->next;
    node * dest = newHead;

    newHead->next = rDuplicate(src, dest->next);
    return;
}

node * rDuplicate(node * src, node * dest){
    if(src != nullptr){
        dest = new node;
        dest->data = src->data;
        dest->next = rDuplicate(src->next, dest->next);
        return dest;
    }else{
        return nullptr;
    }
}

/*
int removeTwo(node *& head){
    int count = 0;
    node * curr;
    curr = head;

    if(curr == nullptr){    //reached end of list
         return count;
    }else{
        count = count + removeTwo(curr->next);
        return count;
    }
}
*/

int removeTwo(node *& head){
    int count = 0;
    if(head == nullptr){ //empty list
        return count;
    }
    node * curr;
    curr = head;
    head = rRemoveTwo(curr, count);
    return count;
}

node * rRemoveTwo(node * curr, int& count){
    if(curr != nullptr){
        curr->next = rRemoveTwo(curr->next, count);
        if(curr->data == 2){
            node * temp;
            temp = curr->next;
            delete curr;
            curr = temp;
            temp = nullptr;
            count = count + 1;
            return curr;
        }else{
            return curr;
        }
    }else{
        return nullptr;
    }
}
