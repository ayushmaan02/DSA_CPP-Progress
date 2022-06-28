#include <iostream>
using namespace std;
void reachtome(int src, int dest)
{
    // Base case
    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }
    // processing
    src++;
    // Recursive call
    reachtome(src, dest);
}

int main()
{
    int dest = 01;
    int src = 1;
    cout << endl;
    reachtome(src, dest);
    return 0;
}