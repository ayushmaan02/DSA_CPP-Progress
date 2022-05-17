#include <iostream>
using namespace std;

int main()
{
    // // Q1
    // int f = 8, s = 18;
    // int *ptr = &s;
    // *ptr = 9;
    // cout << f <<" "<< s << endl;
    // // Output =   8 9

    // // Q2
    // int f = 6;
    // int *p = &f;
    // int *q = p;
    // (*q)++;
    // cout << f << endl;
    // // Output =  7

    // Q3
    int f = 8;
    int *p = &f;
    cout<< (*p)++ << " ";
    cout << f << endl;
    // Output =  8 9
    return 0;
}