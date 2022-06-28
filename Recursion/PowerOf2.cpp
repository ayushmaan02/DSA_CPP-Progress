#include <iostream>
using namespace std;
int PowerOf2(int n)
{
    // Base Case
    if (n == 0)
        return 1;
    return 2 * PowerOf2(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << "Power of 2 = " << PowerOf2(n) << endl;
}