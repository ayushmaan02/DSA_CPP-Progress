#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int top = -1;
    int *arr;
    int size;
    Stack(int s)
    {
        this->size = s;
        arr = new int[s];
        top = -1;
    }
    // Insert in the stack
    void push(int element)
    {
        // When atleast one space is empty for insertion of the element
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack Overflow" << endl;
    }
    void pop()
    {
        // When value is present in the stack
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    void print()
    {
        int start = top;
        while (start != -1 && start <= size)
        {
            cout << arr[start] << endl;
            start--;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.print();
    // Before pop operation
    cout << "Top of the stack = " << st.peek() << endl;
    st.pop();
    st.print();
    cout << "Top after pop operation = " << st.peek() << endl;

    /*
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
    */

    return 0;
}