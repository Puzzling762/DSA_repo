#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
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
    string s = "(2+6)*4/8-3"; // infix expression
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
            // operator hai
            if (op.size() == 0)
                op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);

            else if (s[i]==')')
            {
                while(op.top()!='('){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }
            

            else if (priority(op.top()) < priority(s[i]))
            {
                op.push(s[i]);
            }
            else
            {
                // priority of string wala is less than op ka operator ka priority
                // value1 op value 2
                while (op.size() > 0 && priority(s[i]) <= priority(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();

        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top();
    return 0;
}