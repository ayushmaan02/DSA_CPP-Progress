#include <bits/std.c++.h>
using namespace std;
int main()
{
}

// Pairs it comes under the utility header file
void pair()
{
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int pair<int, int>> p1 = {1, {1, 2}}; // Nested pair

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int,int> arr[] = {(10,11),(12,13),(14,15)};

    cout<<arr[1].second<<endl;
}

//Container 1 Vector is there in Vector.cpp file under STL folder