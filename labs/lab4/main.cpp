#include "clist.h"
using namespace std;

int main()
{
    node * head = NULL;
    node * copy = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    int newInteger = 10;
    addHead(head, newInteger);
    cout << "After adding " << newInteger << ": " << endl;
    myDisplay(head);

    display(head); //resulting list after your function call!
    destroy(head);

    return 0;
}
