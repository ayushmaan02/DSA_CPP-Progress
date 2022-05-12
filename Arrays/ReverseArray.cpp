#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int n)
{
    int start = 0, end = n-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}



int main()
{
       int arr[6] = {1,4,0,2,3,6};
       int arr1[5] = {2,3,4,5,7};

       reverse(arr,6);
       reverse(arr1,5);

       print(arr,6);
       print(arr1,5);


       return 0;

} 
