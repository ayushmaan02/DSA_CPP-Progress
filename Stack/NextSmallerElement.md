# Next Smaller Element.
-  We will traverse the array from left to right and we will create an ans array and a stack which initialy stores -1.
- Then we will compare the top of the stack with the current elemtnt of the array 
    - If current element is smaller then that's the answer we will store it to our ans array and we will add that number to stack
    - else we will pop the number and will also check for the smaller number 
>Code Studion

## Approach
```
    T.C. = O(N)
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i = n-1; i>=0; i--)
    {
        int curr = arr[i];
        while(s.top() >=curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
```