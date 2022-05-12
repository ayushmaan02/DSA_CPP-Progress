#include<iostream>
using namespace std;
int main()
{
    // int n,sum=0;
    // cin>>n;
    // for(int i=0;i<=n;i++)
    // {
    //     sum+=i;
    // }
    // cout<<sum;
    // return 0;

    //SUM OF ALL EVEN NUMBERS IN A GIVEN RANGE

    // int n,sum=0;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2==0)
    //     {
    //         sum+=i;
    //     }
    // }
    // cout<<"Sum of even number till the range from 1 to "<<n<<" is :- "<<sum;

    //PRIME NUMBER 

    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            cout<<"Not a prime"<<endl;
        else
            cout<<"Prime number"<<endl;
    }
}