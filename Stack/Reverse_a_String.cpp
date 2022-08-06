#include <stack>
#include <iostream>
using namespace std;
//T.C. = O(N), S.C. = O(N)
int main()
{
    string str = "Ayush";
    stack<char> s;

    //PUSH into stack
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    //POP and save the ans to the ans string
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "Reversed stack = " << ans;

    return 0;
}