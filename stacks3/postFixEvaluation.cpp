#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int val1, int val2, int ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else if (ch == '/')
        return val1 / val2;
}


int main()
{
    string s = "79+4*8/3-"; // infix expression
    // 2 stacks
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // s[i] is digit
        int ascii = (int)(s[i]);
        if (ascii >= 48 && ascii <= 57)
        {
            val.push(s[i] - 48);
        }
        else
        {
           int val2=val.top();
           val.pop();
           int val1=val.top();
           val.pop();
           int ans=solve(val1,val2,s[i]);
           val.push(ans);
        }
    }
    cout<<val.top();
    return 0;
}