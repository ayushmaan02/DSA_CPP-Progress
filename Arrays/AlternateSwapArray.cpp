#include <iostream>
using namespace std;

void alternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, arr1[6] = {1, 2, 3, 4, 5, 6};

    alternate(arr, 5);
    alternate(arr1, 6);

    print(arr, 5);
    print(arr1, 6);

    return 0;
}