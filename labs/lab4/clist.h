//clist.h
#include <iostream>
#include <cstring>
#include <cctype>


struct node
{
    int data;
    node * next;
};

/* These functions are already written and can be called to test out your code */
void build(node * & head);  //supplied
void display(node * head);  //supplied
void destroy(node * &head); //supplied
void duplicate(node * & new_copy); //provides a duplicate copy of the list

/* *****************YOUR TURN! ******************************** */
//Write your function prototype here:

void addHead(node *& head, int value);
    //add value to the head of the circular linked list

void myDisplay(node * head);
    //recursively display the circular linked list. The head data should be displayed twice,
    //once at the beginning of the listing and another time at the end of the listing, e.g. if
    //the circular linked list contains 2 4 6 8, the display should by 2 4 6 8 2. After adding -
    //10 at head, the display should be -10 2 4 6 8 -10

void displayList(node * head, node * current);
