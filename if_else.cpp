#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << "It's in small letter";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "It's in the larger letter";
    else if (ch >= '0' && ch <= '9')
        cout << "It's a number";
    else
        cout << "Its a special character";
    return 0;
}