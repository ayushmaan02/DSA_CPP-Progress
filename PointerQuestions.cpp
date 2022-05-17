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

    // // Q3
    // int f = 8;
    // int *p = &f;
    // cout<< (*p)++ << " ";
    // cout << f << endl;
    // // Output =  8 9

    // // Q4
    // int *p = 0;
    // int f = 8;
    // *p = f;
    // cout << *p << endl;
    // // Output =  Segmentation fault

    // // Q5
    // int f = 8, s = 11;
    // int *third = &s;
    // f = *third;
    // *third = *third + 2;
    // cout << f <<" " <<s << endl;
    // // Output = 11 13

    // // Q6
    // float f = 12.5, p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;
    // // Output = 11 13

    // // Q7
    // int arr[7] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl;
    // // Output = 31

    // // Q8
    // char ch[] = "abcde";
    // char *c = &ch[0];
    // cout << c << endl;
    // // Output = abcde

    // Q9
    char ch[] = "abcde";
    char *c = &ch[0];
    c++;
    cout << c << endl;
    // Output = bcde
    return 0;
}