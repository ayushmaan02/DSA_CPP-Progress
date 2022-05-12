#include <iostream>
using namespace std;
int main()
{
        /*
        4 IF N=3
                123
                456
                789
        5 IF N=4[TRIANGLE PATTERN]
                *
                **
                ***
                ****
        6 IF N=4 [NUMBER TRINGLE]
                1
                22
                333
                4444
        7 IF N=4 [NUMBER COUNTING IN TRIANGULAR PATTERN]
                1
                23
                456
                78910

        8 IF N=4
                1
                23
                345
                4567

        9 IF N=4
                1
                21
                321
                4321
        10 IF N=4
                AAA
                BBB
                CCC
        11 IF N=4
                ABCD
                ABCD
                ABCD
                ABCD
        12 IF N=4
                ABCD
                EFGH
                IJKL
                MNOP
        13 IF N=3      [i+j-1]
                ABC     123
                BCD     234
                CDE     345
        14 IF N=3
                A
                BB
                CCC
         */
        // PATTERN 4
        // int n, count = 1;
        // cin >> n;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << count<<" ";
        //         count++;
        //     }
        //     cout<<endl;
        // }

        // TRIANGLE PATTERN
        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=i;j++)
        //     {
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }

        // NUMBER TRIANGLE

        // int n;
        // cin>>n;
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=i;j++)
        //     {
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }

        // NUMBER COUNTING IN TRIANGULAR PATTERN

        // int n, count = 1;
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= i; j++)
        //         {
        //                 cout << count << " ";
        //                 count++;
        //         }
        //         cout << endl;
        // }

        // PATTERN 8
        //  int n;
        //  cin >> n;
        //  for (int i = 1; i <= n; i++)
        //  {
        //          int val=i;
        //          for (int j = 1; j <= i; j++)
        //          {
        //                  cout<<val<<" ";
        //                  val++;
        //          }
        //          cout<<endl;
        //  }

        // PATTERN 9
        // int n;
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= i; j++)
        //         {
        //                 cout<<i-j+1<<" ";
        //         }
        //         cout<<endl;
        // }

        // PATTERN 10
        // int n;
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= n; j++)
        //         {
        //                 char ch = 'A' + i - 1;
        //                 cout << ch << " ";
        //         }
        //         cout << endl;
        // }

        // PATTERN 11
        // int n;
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= n; j++)
        //         {
        //                 char ch = 'A' + j - 1;
        //                 cout << ch << " ";
        //         }
        //         cout << endl;
        // }

        // PATTERN 12
        // int n;
        // char c = 'A';
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= n; j++)
        //         {
        //                 cout << c << " ";
        //                 c++;
        //         }
        //         cout << endl;
        // }

        // PATTERN 13
        // int n;
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //         for (int j = 1; j <= n; j++)
        //         {
        //                 char c = 'A' + i + j - 2;
        //                 cout << c << " ";
        //         }
        //         cout << endl;
        // }

        // PATTERN 14
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= i; j++)
                {
                        char ch = 'A' + i - 1;
                        cout << ch << " ";
                }
                cout << endl;
        }
        return 0;
}
