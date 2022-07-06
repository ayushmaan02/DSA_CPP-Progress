#include<iostream>
using namespace std;

int SumOfArray(int *arr, int s)
{
    //base case
    if(s == 0)
        return 0;
    if(s == 1)
        return arr[0];
    else 
        return arr[0] + SumOfArray(arr+1,s-1);
}

int main()
{
    int arr[] = {2,4,6,8,10};
    int size = 5;
    cout<<"Sum = "<<SumOfArray(arr, size);
    return 0;
}