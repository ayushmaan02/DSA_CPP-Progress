# The Celebrity Problem 
-  Put all element inside the stack in any order
- Loop till stack size > 1
    - take 2 elements A and B and pop both the elements
    - If(A knows B) -> A is not a celebrity
    - If(B knows A) -> B is not a celebrity
- Then at last jo bhi single element bacha hua h wo "Celebrity" ho sakta h
- Verify the single element left
    - Celebrity knows no body (The Row of the element = 0)
    - Everyone knows celebrity (The Column of the element = 1 except the diagonal it will be 0)
>GFG Practice

## Approach 
```
    T.C. = O(N)
 private:
    bool knows(vector<vector<int> >& M, int a, int b, int n)
    {
         if(M[a][b] == 1)
         {
             return true;
         }
         else
         {
             return false;
         }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        //Push all the elements
        for(int i = 0; i<n; i++)
        {
            s.push(i);
        }
        //Step 2 loop till size!=1
        
        while(s.size()>1)
        {
            int a,b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            if(knows(M,a,b,n))
            {
                s.push(b);
            }
            else
                s.push(a);
        }
        int candidate = s.top();    //Left over single element for celebrity
        //step3 Single element left then it may be a celebrity
        //verify it 
        
        //Checking that celebrity does'nt know anyone (Checking the row)
        int zeroCount = 0;
        for(int i=0; i<n; i++)
        {
            if(M[candidate][i] == 0)
                zeroCount++;
        }
        if(zeroCount != n)
            return -1;   //Celebrity does'nt know anybody

        
        //Everyone knows celebrity (Checking the column)
        int oneCount = 0;
        for(int i = 0; i<n; i++)
        {
            if(M[i][candidate] == 1)
                oneCount++;
        }
        if(oneCount != n-1)
            return -1;
        
        return candidate;
        
    }
```