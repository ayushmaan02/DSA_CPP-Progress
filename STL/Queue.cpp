//FIFO(First IN First OUT)

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Ayushmaan");
    q.push("Singh");
    q.push("Rajput");

    cout<<"Front element = "<<q.front()<<endl;
    q.pop();
    cout<<"Frist element aftre pop = "<<q.front()<<endl;
}