#include<iostream>
using namespace std;
bool BinarySearch(int *arr, int s, int e, int k)
{
    //base case
    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    //Element is found
    if(arr[mid] == k)
        return true;
    if(arr[mid] < k)
        return BinarySearch(arr,mid+1,e,k);         //Right part
    else    
        return BinarySearch(arr, s,mid-1, k);       //Left Part
}


int main()
{
    int arr[] = {2,4,6,8,10,11,13};
    int size = 7, key = 16;
    if(BinarySearch(arr,0,size-1,key))
        cout<<"FOUND!!!!";
    else
        cout<<"NOT FOUND!!!";
    return 0;
}