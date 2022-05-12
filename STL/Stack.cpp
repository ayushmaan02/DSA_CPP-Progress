//LIFO (Last IN First OUT) Jo sab se akhir me gaya h usko sab se phele nikalte h 

#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("Ayushmaan");
    s.push("Singh");
    s.push("Rajput");

    cout<<"TOP ELEENT = "<<s.top()<<endl;
    cout<<"Size of stack = "<<s.size()<<endl;   
}