//List is implemented with the help of doublly linked list
// Functions can be used list_name.pop_back(), list_name.erase(iterator need to give),
// list_name.begin(), list_name.end(), list_name.pop_front(), list_name.pop_back(), etc
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5,100);       //Initialising 5 element with 100 as element on each 
    for (int i:n )
        cout<<i<<" ";
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    cout<<"Size of list = "<<l.size()<<endl;
}
