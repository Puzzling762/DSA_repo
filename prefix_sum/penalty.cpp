#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bestClosingTime(string s)
{
    int n = s.length();
    vector<int> pre(n + 1);
    vector<int> suf(n + 1);
    vector<int> ans(n + 1);
    pre[0] = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            pre[i+1]=pre[i]+1;
        }
        else{
            pre[i+1]=pre[i];
        }
    }
    suf[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
       if (s[i] == 'Y') {
            suf[i] = suf[i + 1] + 1;
        } else {
            suf[i] = suf[i + 1];
        }
    }
    int min_p = n;
    for (int i = 0; i <= n; i++)
    {
        ans[i] = suf[i] + pre[i];
        if(ans[i]<min_p){
            min_p=ans[i];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (ans[i] == min_p)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    string s = "YYNY";
    int a = bestClosingTime(s);
    cout << a;
    return 0;
}