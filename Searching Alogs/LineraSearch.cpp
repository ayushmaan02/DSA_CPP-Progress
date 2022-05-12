#include<iostream>
using namespace std;

bool search(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    int key;
    //Weather 1 is present in thei array or not

    cout<<"Enter the key element ";
    cin>>key;

    bool found = search(arr,10,key);
    if(found)
    {
        cout<<"Key is found"<<endl;
    }
    else
    {
        cout<<"Key is not present inside the array";
    }
    return 0;
}