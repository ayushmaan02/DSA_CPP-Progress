#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base case
    if(size == 0 || size == 1)
        return 1;

    if(arr[0] > arr[1])
        return 0;
    else
        {
            bool checkRemaning = isSorted(arr+1, size -1);
            return checkRemaning;
        }
}

int main()
{
    int arr[] = {2,4,5,8,9};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans)
        cout<<"SORTED ARRAY!!"<<endl;
    else
        cout<<"NOT SORTED ARRAY"<<endl;
    return 0;
}