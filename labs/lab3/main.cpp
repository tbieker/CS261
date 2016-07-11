#include "list.h"

using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    node * newHead = nullptr;;

    duplicate(head, newHead);
    cout << "Duplicate copy of the list: \n";
    display(newHead);


    cout << "Twos removed: " << removeTwo(head) << endl;

    display(head);
    destroy(head);

    return 0;
}
