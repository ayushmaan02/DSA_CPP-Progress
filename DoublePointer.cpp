#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2+ 1;         // No change because it's came through pass by value method and the changes is done only in the function

    // *p2 = *p2 + 1;         // Yes value of single pointer will change in the main after calling the function

    **p2 = **p2 + 1;        // Yes the vsalue of i will be change in the main method after function is called
}

int main()
{
    // DOUBLE POINTERS

    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /*
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
    */

    cout << "Before i  =" << i << endl;
    cout << "Before p  =" << p << endl;
    cout << "Before p2  =" << p2 << endl;
    update(p2);
    cout << "After i  =" << i << endl;
    cout << "After p  =" << p << endl;
    cout << "After p2  =" << p2 << endl;

    return 0;
}