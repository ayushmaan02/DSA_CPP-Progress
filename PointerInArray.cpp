#include<iostream>
using namespace std;

int main()
{
    
    // Pointer in array
    int arr[10] = {2, 4, 6, 8, 10};
    cout << "Address of 1st memory = " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of 1st memory = " << arr[0] << endl;

    cout << "Value at 1st index = " << *arr << endl;           // Value at 1st index
    cout << "Value at 2nd index = " << *arr + 1 << endl;       // Value at 2nd index
    cout << "Value at (arr+1) index = " << *(arr + 1) << endl; // Value at (arr+1) index
    cout << "Value at *(arr) + 1 = " << *(arr) + 1 << endl;    // Value at *(arr) then we are adding 1 to that value.
    
    int i = 3;
    cout<<"Value of arr[3] can also be represented as i[arr] = "<<i[arr]<<endl;

    return 0;
}