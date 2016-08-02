#include "table.h"

#include <iostream>

using namespace std;

int main()
{
    node * root = NULL;
    build(root);
    display(root);

    /*  PLACE YOUR FUNCTION CALL HERE */
    node * newRoot = nullptr;
    duplicate(root, newRoot);
    cout << endl
         << "After duplicating root: " << endl
         << "**************************************************************";
    display(newRoot);
    cout << "**************************************************************";

    int target;
    cout << "Enter target to remove: ";
    cin >> target;

    remove(newRoot, target);
    cout << endl
         << "After removing: " << target << endl;
         << "**************************************************************";
         display(newRoot);
         cout << "**************************************************************";

    display(root);
    destroy(root);
    return 0;
}
