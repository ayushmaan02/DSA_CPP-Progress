#include <iostream>
#include <vector>
using namespace std;

//Sieve of Eratosthenes Algorithm for finding prime number for 10^5 length 
void sieve(vector<int> &prime)
{
    vector<bool> v(1000000, true);
    v[0] = v[1] = false;

    for (long int i = 2; i < 1000000; i++)
    {
        if (v[i])
        {
            for (long int j = 2 * i; j < 1000000; j += i)
                v[j] = false;
        }
    }

    for (long int i = 0; i < 1000000; i++)
    {
        if (v[i])
        {
            prime.push_back(i);
        }
    }
}

// Segmented Sieve Algorithm for finding the prime number for grater than 10^6 length till 10^12 
void segmented_sieve(vector<int> p, int l, int r)
{
    long int size = (r - l) + 1;
    vector<int> ans(size);

    for (long int i = 0; i < size; i++)
    {
        ans[i] = 1;
    }

    for (int i = 0; p[i] * p[i] <= r; i++)
    {
        long int base = (l / p[i]) * p[i];
        if (base < l)
            base += p[i];
        for (long int j = base; j <= r; j += p[i]) // Remove non-prime values
        {
            ans[j - l] = 0;
        }

        if (base == p[i])
        {
            ans[base - l] = 1; // Making a prime value to again prime whne it gets converted to non-prime
        }
    }

    long count = 0;
    for (int i = 0; i < size; i++)
    {
        if (ans[i] == 1 && i + l != 0)
            count++;
    }
    cout << count << endl;
}

int main()
{
    long int l, r;
    vector<int> prime;
    sieve(prime);
    cin >> l >> r;
    segmented_sieve(prime, l, r);

    // if l =10 and r = 50 then then answer will be 11
    // 11 13 17 19 23 29 31 37 41 43 47
}