#include <iostream>
using namespace std;

int main()
{
    /*
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
    */

    // Pointer in array

    int arr[10] = {2, 4, 6};
    cout << "Address of 1st memory = " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of 1st memory = " << arr[0] << endl;

    cout << "Value at 1st index = " << *arr << endl;           // Value at 1st index
    cout << "Value at 2nd index = " << *arr + 1 << endl;       // Value at 2nd index
    cout << "Value at (arr+1) index = " << *(arr + 1) << endl; // Value at (arr+1) index
    cout << "Value at *(arr) + 1 = " << *(arr) + 1 << endl;    // Value at *(arr) then we are adding 1 to that value.
    return 0;
}