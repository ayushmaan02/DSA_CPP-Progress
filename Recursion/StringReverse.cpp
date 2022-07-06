#include<iostream>
using namespace std;
void reverse(int i, int j, string& str)
{
    //base case
    if(i>j)
        return;
    swap(str[i], str[j]);
    reverse(i+1,j-1,str);
}

int main()
{
    string str = "abcde";
    reverse(0,str.length()-1, str);
    cout<< str<<endl;
    return 0;
}