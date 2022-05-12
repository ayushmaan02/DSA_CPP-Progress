// Set store each element for once no repetation of element are allowed 
//All element should be unique, with the help of BST element are putted no modification is allowed 
// Elements are returned in  the sorted order O(logn)

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(8); 
    s.insert(4); 
    s.insert(9); 
    s.insert(0); 
    s.insert(0); 
    s.insert(0); 
    
    for (int i:s)
        cout<<i<<" ";
    cout<<endl;
    s.erase(s.begin());
    for (int i:s)
        cout<<i<<" ";
    cout<<endl;

    cout<<"0 is persent in the set  = "<<s.count(0)<<endl;     // Nahi h 0 set mie kyuki hum log s.erase() use kare h 
    set<int> :: iterator it = s.find(8);
    for(auto itr = it;itr!=s.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
}