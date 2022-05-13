#include <iostream>
using namespace std;

int main()
{
 
    int num = 6;
    cout << "Address of num = " << &num << endl;       // Address of the num variable
    int *ptr = &num;                                   // Pointer creation
    cout << "Value at the pointer = " << *ptr << endl; // Value of the pointer

    int *p = 0, i = 4;
    p = &i;

    cout << "Before increment = " << i << endl;
    (*p)++;
    cout << "After Increment = " << i << endl;

    // Copying of Pointer
    int *q = p;
    cout << "Value of P = " << *p << endl;
    cout << "Value of Q = " << *q << endl;
    

    return 0;
}