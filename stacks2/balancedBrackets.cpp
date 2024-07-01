#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool balance(string s)
{
    if (s.length() % 2 != 0)
        return false;
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if(st.top()=='(' && s[i]==')'||
        (st.top()=='{' && s[i]=='}')||
        (st.top()=='[' && s[i]==']'))
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if (st.size() == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s = "([}}])";
    cout << balance(s);
    return 0;
}