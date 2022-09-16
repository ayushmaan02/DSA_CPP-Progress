// Vector is a dyanamic array
// It double itself when the vector array is full,
// it copies the previous vector element to new one and discard the old vector array
// Dyanamic h yhe
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> vec(5,100); //Create a vector 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Capacity = " << v.capacity() << endl; // Capacity shows how much space that particular vector has
    cout << "Size = " << v.size() << endl;         // Size shows how many element is currently present in the array
    cout << "Element at 'v' at position 2nd = " << v.at(2) << endl;
    cout << "Front element = " << v.front() << endl;
    cout << "Back Element = " << v.back() << endl;
    cout << "BEFORE POP" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "AFTER POP" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size = " << v.size() << endl;
    v.clear();
    cout << "After clear size = " << v.size() << endl;
}