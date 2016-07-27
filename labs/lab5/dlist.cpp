//Tyler Bieker
//CS261 Lab 5
//07/27/2016

//dlist.cpp

#include "dlist.h"
/*
void duplicate(node * head, node *& newHead){
//recursively create a copy of the source list with head.
//newhead is the head of the destination list.
    if(head == nullptr){
        newHead == nullptr;
        return;
    }else{

    }
}
*/

int removeTwo(node *& head){
//recursively remove all the 2s from the list
    int count;
    count = rRemove(head);
    return count;
}

int rRemove(node * head){
    if(head == nullptr){
        return 0;
    }else{
        int count;
        count = rRemove(head->next);
        if(head->data == 2){
            head->next->previous = head->previous;
            head->previous->next = head->next;
            count = count + 1;
            return count;
        }else{
            return count;
        }
    }
}

if(head->next == nullptr){
    int count;
    count = rRemove(head->next);
    if(head->data == 2){
        head->next->previous = head->previous;
        head->previous->next = head->next;
        count = count + 1;
        return count;
    }else{
        return count;
    }
}else{
    rRemove(head->next);
}


    return 0;
}else{

}
/*
node * rDuplicate(node * head, node * newHead){
    if(head == nullptr){
        return head;
    }
    node * newNode;
    newNode = new node;
    newNode->data = head->data;
    newNode->next = rDuplicate(head->next, newHead->next)
}
*/
