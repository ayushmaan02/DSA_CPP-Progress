// Data is stored in the form of key, all key are unique, one key one value
// TC = insert , erase, count, pop, etc o(logn)
#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Ayushmaan";         // Here the 1 is key and Ayushmaan is the value
    m[2] = "Singh";             // Here the 2 is key and Singh is the value
    m[3] = "Rajput";            // Here the 3 is key and  Rajput is the value
    m.insert({5,"jod"});

    cout<<"Before erase"<<endl;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;      
    
    cout<<"Finding 5 = "<<m.count(5)<<endl;


    cout<<"After erase "<<endl;
    m.erase(5);
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
}