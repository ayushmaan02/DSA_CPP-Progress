#include<iostream>
using namespace std;


void sayDigit(int n, string arr[])
{
    //Base Case
    if(n == 0)
        return ;
    
    //Processing 
    int digit = n % 10;
    n /= 10;

    //R.R
    sayDigit(n, arr);

    //Processing output
    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    string arr[10] = {"zero", "one", "two", "three","four",
    "five", "six", "seven", "eight", "nine"}; 
    
    cout<<"ENter the number = ";
    cin>>n;

    sayDigit(n, arr);
    return 0;
}