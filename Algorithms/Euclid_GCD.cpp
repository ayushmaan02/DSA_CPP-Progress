// Iterative way to code for GCD
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    while(a!=b)
    {
        if(a>b)
            a = a-b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int a, b;
    cout<<"Enter two number for which you want to find GCD/HCF :-";
    cin>>a>>b;
    cout<<"GCD = "<<gcd(a,b);

}