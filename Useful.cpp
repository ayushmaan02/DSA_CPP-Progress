#include<iostream>
#define pi 3.14     // Mscro
using namespace std;

inline int getMax(int& a, int& b)
{
    return (a>b) ? a : b;
}

int main()
{
// Macro 
    // int r = 5;
    // double a = pi * r * r;
    // cout<< a << endl;
    
// Inline function input 
    int a = 2, b = 5;
    cout<<getMax(a,b);

    return 0;
}


