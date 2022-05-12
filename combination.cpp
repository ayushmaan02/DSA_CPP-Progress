#include<iostream>
using namespace std;


int factorial(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact *i;
    }
    return fact;
    
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    int result = num/denom;

    return result;
}


int main()
{
    int n,r;
    cin>>n>>r;

    int result = nCr(n,r);

    cout<<"nCr of given input is = "<<result<<endl;
}