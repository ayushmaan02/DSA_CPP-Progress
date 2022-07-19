#include<iostream>
using namespace std;
int HCF(int n1, int n2)
{
    //base case
    if(n2 == 0)
        return n1;
    //recursive call
    return HCF(n2, n1%n2); 
}
int LCM(int n1, int n2)
{
    return (n1*n2) / HCF(n1,n2);
}

int main()
{
    int n1, n2;
    cout<<"Enter two number for LCM = ";
    cin>>n1>>n2;
    int result = LCM(n1,n2);
    cout<<"LCM  = "<<result;
    return 0;
}