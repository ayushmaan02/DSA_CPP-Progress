// A queue whose 1st element is always greatest 

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;                               //Max_heap
    priority_queue<int,vector<int>, greater<int> > mini;    //Min heap (Minimum Priorty queue)

    // Maximum heap means allocate the largest element as 1st element  
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" " ;
        maxi.pop();
    }
    cout<<endl;

    // Minimum heap means just opposite of max_heap
    mini.push(6);
    mini.push(5);
    mini.push(7);
    mini.push(2);

    int s = mini.size();
    for(int i = 0; i<s;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}