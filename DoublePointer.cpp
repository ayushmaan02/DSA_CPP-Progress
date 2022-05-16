#include <iostream>
using namespace std;

int main()
{
    // DOUBLE POINTERS

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // PRINT 5 value at i
    cout << " VALUE " << endl;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    // ADDRESS OF i
    cout << " ADDRESS OF i " << endl;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    // ADDRESS OF p
    cout << " ADDRESS OF p " << endl;
    cout << &p << endl;
    cout << p2 << endl;

    // ADDRESS OF p2
    cout << "ADDRESS OF p2" << endl;
    cout << &p2 << endl;

    // VALUE AT p
    cout << "Value at p " << endl;
    cout << p << endl;
    cout << *p2 << endl;

    // VALUE AT p2
    cout << " VALUE AT p2 " << endl;
    cout << p2 << endl;
    return 0;
}