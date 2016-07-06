//Tyler Bieker
//CS261 Lab 2
//07/05/2016

#include "arr.h"

int sum(node * head[]){
//compute and return the sum of the ints contained in the table
    int arraySize = SIZE;
    int total = 0;
    node * listStart;

    for(int x = 0; x < arraySize; x++){
        listStart = head[x];
        node * curr = listStart;
        while(curr != nullptr){
            total = total + curr->data;
            curr = curr->next;
        }
    }
    return total;
}

int removeTwo(node * head[]){
//remove all the 2s from the table
    int arraySize = SIZE;
    int total = 0; //total 2s removed

    node * listStart;

    for(int x = 0; x < arraySize; x++){
        listStart = head[x];
        node * curr = listStart;
        node * prev = nullptr;
        node * temp;

        while(curr != nullptr){
            if(curr->data == 2){
                if(prev == nullptr){ //head of list
                    temp = curr;
                    curr = curr->next;
                    delete temp;
                    temp = nullptr;
                    head[x] = curr; //set head of list
                    total++;
                }else{
                    temp = curr;
                    curr = curr->next;
                    prev->next = curr;
                    delete temp;
                    temp = nullptr;
                    total++;
                }
            }else{
                prev = curr;
                curr = curr->next;
            }
        }
    }
    return total;
}
