#include<iostream>
using namespace std;
void merg(int *arr, int s, int e)
{
    int mid  = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //Copy the values of left arr to first and right arry to second one
     int mainIndex = s;
     for(int i = 0; i < len1; i++)
        first[i] = arr[mainIndex++];
    
    mainIndex = mid +1;
    for(int i = 0; i < len2; i++)
        second[i] = arr[mainIndex++];

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
            arr[mainIndex++] = first[index1++];
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }

//Relesee the dyanamically allocated memory
    delete []first;
    delete []second;
}


void MergSort(int *arr, int s, int e)
{
    //base case
    if(s >= e)
        return;
    
    int mid  = s + (e-s)/2;
    //left part sort karlo
    MergSort(arr, s, mid);

    //right part sort kar lo
    MergSort(arr, mid +1, e);


    //merge kar do
    merg(arr, s, e);
}


int main()
{
    int arr[5] = {2,3,1,11,21};
    int n = 5;

    MergSort(arr, 0, n-1);
    for(int i = 0 ; i<n; i++)
        cout<<arr[i] <<" ";
    cout<<endl;
    return 0;
}