#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Create a stack
    stack<int> s;
    // Insertion to stack
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    // Deletion in stack
    s.pop();
    s.pop();

    cout << "Top of the stack = " << s.top() << endl;

    if (s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack has elements" << endl;
    cout << "Size of the stack = " << s.size() << endl;

    return 0;
}