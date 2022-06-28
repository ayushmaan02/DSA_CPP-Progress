// A factorial function which call itself
// If base case will not initialized then the function will never stop and 
// after sometime it will cause a segmentation fault which means stack overflow 
#include <iostream>
using namespace std;
int factorial(int n)
{
    //Base case
    if(n == 0)
        return 1;
    // Main Function 
    return n * factorial(n-1);
}



int main()
{
    int n, ans;
    cin >> n;

    ans = factorial(n);
    cout << "Factorial = " << ans << endl;
    return 0;
}