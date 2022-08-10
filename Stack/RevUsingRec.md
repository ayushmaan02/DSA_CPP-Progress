# Reverse stack using Recursion
`Using the method of Insert at bottom to do that`
- Store the first element of the of the stack then assume that recursion has sucessfully reversed the rest of the stack
- Then call insert at bottom function to add the top element to bottom of the stack
- Then write the Insert at bottom function function
>Code Studio

```
    T.C. = O(N^2)
void InsertAtBottom(stack<int>& s, int element)
{
    //base case
    if(s.empty())
    {
        s.push(element);
        return;
    }

    //We store the top element
    int num = s.top();
    s.pop();

    //recursive call
    InsertAtBottom(s, element);

    //wapsi mie na jo top hataya tha usko add kar do 
    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    //base case
    if(stack.empty())
        return;
    
    int num = stack.top();
    s.pop();

    //recursive call
    reverseStack(stack);

    InsertAtBottom(stack,num);
}
```