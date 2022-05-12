#include <iostream>
using namespace std;
int main()
{
    /*
    2 IF N=3
            111
            222
            333
    3 IF N=3
            123
            123
            123
    */
    // int n;
    // cin >> n;
    //    for(int i=1;i<=n;i++)
    //    {
    //        for(int j=1;j<=n;j++)
    //        {
    //            cout<<i;
    //        }
    //        cout<<endl;
    //    }
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}