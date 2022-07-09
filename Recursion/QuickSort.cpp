#include<iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;

    //Count the element which is less then the pivot and place it to the desired position
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
            cnt++;
    }

    // Swap the pivot element i.e. the element which will make the partition
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left part and right part of partition
    int l = s, r = e;
    while(l < pivotIndex && r > pivotIndex)
    {
        //Agar left wala element jo h wo phele se hi humare pivot se chota h to no need to swap or change
        while (arr[l] <=  pivot)
            l++;
        //Agar right wala element jo h wo phele se hi humare pivot se badha h to no need to swap or change
        while (arr[r] > pivot)
            r--;
        //Agar jo element left and right mie wo chote and bade nahi h pivot se to swap kardo un dono ko 
        if(l < pivotIndex && r > pivotIndex)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    return pivotIndex;
}

void QuickSort(int *arr, int s, int e)
{
    //base case
    if(s >= e)
        return;

    //partition
    int p = partition(arr,s,e);

    //recursive call for quick sort
    //left part
    QuickSort(arr, s, p-1);
    QuickSort(arr, p+1, e);
}


int main()
{
    int arr[5] = {8,10, 2,4,11};
    int n = 5;

    QuickSort(arr,0,n-1);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<< endl;
    return 0;
}