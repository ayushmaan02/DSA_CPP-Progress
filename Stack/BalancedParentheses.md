# Balanced parentheses
- Check the expression if the their is opening bracket then push it to the stack
    - Else their is a closing bracket then 
        - If stack is not empty then Check for the particular opening bracket and pop that if it found
        - Else return false it's not balanced
    - Else the stack is empty and closing bracket is present return false then it's unbalanced
- Out of the loop is stack is empty then return true
- Else stack is left with element unbalanced return false


# Approach
```
    T.C. = O(N) S.C.= O(N)
bool isValidParenthesis(string expression)
{
    stack<char> s;
    for(int i = 0; i<expression.length(); i++)
    {
        char ch = expression[i];
        
        //If it's opening bracket then, push in the stack
        //If close bracket then pop the top of stack 
        
        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        //Closed brackets
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if((ch == ')' && top == '(') ||
                  (ch == '}' && top == '{') ||
                  (ch == ']' && top == '['))
                {
                     s.pop();   
                }
                else
                {
                    //No required opening bracket found for the closing one
                     return false;
                }
            }
            else
            {
                //Stack is empty and a clodsed bracket is found then its unbalanced
                return false;
            }
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}
```