// Dynamic 2D jagged array
// 1. Declare an array of pointers (jagged array),
// 2. The size of this array will be the number of rows required in the Jagged array
// 3. Then for each pointer in the array allocate memory for the number of elements you want in this row.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the rows = ";
    cin >> rows;
    int *number = new int[rows]; // Dynamic Number array to store no of columns
    int **arr = new int *[rows]; // Jagged Array

    for (int i = 0; i < rows; i++)
    {
        cout << "Enter number of columns for row" << i << " - ";
        cin >> number[i];
        arr[i] = new int[number[i]]; // Adding column size for each rows;
    }

    // Jagged Array Value input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number[i]; j++)
            cin >> arr[i][j];
    }

    // Display all teh element in the Jagged Array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number[i]; j++)
            cout << arr[i][j];
        cout << endl;
    }
// Releasing the memory
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}