#include<iostream>
using namespace std;

int main()
{
    /*
    EQUAL NUMBER OF ROWS AND COLUMNS PATTERN
    IF N=3
            ***
            ***
            ***
    */
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
}