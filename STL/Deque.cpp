//Deque (Doublly Ended queue)
//Starting and ending mie insertion and deletion possible h
// Dyanamic h yhe

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);   //Entering element at last
    d.push_front(2);  //Entering element at first
    // for(int i:d)
    //     cout<<i<<" ";
    // cout<<endl;

    // d.pop_back(); // deleting the last element 
    // d.pop_front(); // deleting the first element 
    //     for(int i:d)
    //     cout<<i<<" ";
    // cout<<endl;

cout<<"Print 1st index element = "<<d.at(1)<<endl ;
cout<<"Before erasing = "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);                 // Erase the 1st element (starting from start to start+1) 
cout<<"After erasing = "<<d.size()<<endl;
}