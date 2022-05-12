#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // key is greater then the current value then go the right side
        if (key > arr[mid])
        {
            s = mid + 1;
        }

        // key is less then the current value then go the left side
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 1, 2, 5, 3};
    int key;
    cout << " Enter the element to search = ";
    cin >> key;
    int index = binarysearch(even, 6, key);
    cout << "Index of " << key << " = " << index << endl;
}