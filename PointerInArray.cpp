#include <iostream>
using namespace std;

int main()
{

    // POINTER IN AN ARRAY

    //Integer Array
    int arr[10] = {2, 4, 6, 8, 10};
    cout << "Address of 1st memory = " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of 1st memory = " << arr[0] << endl;

    cout << "Value at 1st index = " << *arr << endl;           // Value at 1st index
    cout << "Value at 2nd index = " << *arr + 1 << endl;       // Value at 2nd index
    cout << "Value at (arr+1) index = " << *(arr + 1) << endl; // Value at (arr+1) index
    cout << "Value at *(arr) + 1 = " << *(arr) + 1 << endl;    // Value at *(arr) then we are adding 1 to that value.

    int i = 3;
    cout << "Value of arr[3] can also be represented as i[arr] = " << i[arr] << endl;

    int a[10] = {1, 2, 3, 4, 5};
    cout << "Array address = " << &a[0] << endl; // Address of the 0th index
    cout << "Array address = " << &a << endl;    // Address of the 0th index
    cout << "Array address = " << a << endl;     // Address of the 0th index

    int *ptr = &a[0];
    cout << "" << ptr << endl;                    // Address of the array since pointer holds the address of the array
    cout << "Pointer address = " << &ptr << endl; // Address of pointer

    //ERROR WE CAN'T CHANGE SYMBOL TABLE (MAPPING OF ADDRESS TO THE GIVEN NAMED ARRAY) 
    //arr = arr+1;

    //WE CAN INCREMENT THE POINTER 
    cout<<ptr<<endl;            //The address of next array block will get loaded in the pointer  
    ptr++;
    cout<<ptr<<endl;
    return 0;
}