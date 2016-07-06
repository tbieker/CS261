#include "arr.h"
using namespace std;

int main()
{
    node * head[SIZE] = {0,0,0,0,0};
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned

    cout << "The sum of the array: " << sum(head) << endl;
    cout << "The number of 2s remove: " << removeTwo(head) << endl;

    display(head);
    destroy(head);

    return 0;
}
