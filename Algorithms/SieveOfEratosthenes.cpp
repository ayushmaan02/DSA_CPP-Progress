#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter the range = ";
    cin>>n;

    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            c++;
            for(int j=2*i; j<n; j+=i)
                prime[j] = false;
        }
    }

    cout<<"Total number of prime number are = "<<c;
}