# Insert an element at its bottom in a given stack
- If the stack is empty then push the element which we need to insert
- Else stack is not empty then store the top element and remove it 
- Recursive call the function
- Then after the stack is empty add the num which we stored 
>Code Studio

## Approach
```
void solve(stack<int> s, int x)
{
    //base case
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    solve(s,x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
```