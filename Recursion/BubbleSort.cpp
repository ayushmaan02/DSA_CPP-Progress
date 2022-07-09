#include<iostream>
using namespace std;
void BubbleSort(int *arr, int n)
{
    //base case
    if(n == 0 || n == 1)
        return;
    
    //Solve for one case rest recursion will handle
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    //Recursive call
    BubbleSort(arr, n-1);
}



int main()
{
    int arr[] = {2,4,1,8,6};
    int size = 5;

    BubbleSort(arr,size);
    for(int i = 0; i < 5; i++)
        cout<<arr[i] <<" ";
    cout<<endl;

    return 0;
}