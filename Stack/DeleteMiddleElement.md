# Delete middle element form Stack
- Create a count and check if is equal to the middle of the stack i.e. count == size/2;
- If equal then delete that element
- And if the element is not equal then store it temporarly and at the end add the element after removing the middle element
>Code Studio

## Approach
```
    void solve(stack<int>&inputStack,int count, int size)
    {
        if(count==size/2)
        {
            inputStack.pop();
            return;
        }
        int num = inputStack.top();
        inputStack.pop();
        //recursive call
        solve(inputStack,count+1,size);
        inputStack.push(num);
    }
    void deleteMiddle(stack<int>&inputStack, int N){

       int count = 0;
        solve(inputStack, count, N);
    }
```