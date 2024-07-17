#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxSatisfaction(vector<int> &sa)
{
    int n = sa.size();
    vector<int> suf(n);
    vector<int> ans(n);
    sort(sa.begin(), sa.end());
    suf[n - 1] = sa[n - 1];
    int a=0;
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1]+sa[i];
    }
    int idx=-1;
    for(int i=0;i<n;i++){
        if(suf[i]>0){
            idx=i;
            break;
        }
    }
    if(idx==-1) return 0;
    int x=1;
    int maxSum=0;
    for(int i=idx;i<n;i++){
        maxSum+=sa[i]*x;
        x++;
    }
    return maxSum;
}
int main()
{
    vector<int> s{-1, -8, 0, 5, -7};
    int a1=maxSatisfaction(s);
    cout<<a1;
    return 0;
}