#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 3;
    int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
    vector<int> ans;
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = -1;
    // queue<int> q;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] < 0)
    //         q.push(i);
    // }
    // int i = 0;
    // while (i + k < n)
    // {
    //     while (q.size() > 0 && q.front() < i)
    //     {
    //         q.pop();
    //     }
    //     if (q.size() == 0 || q.front() >= i + k)
    //     {
    //         ans.push_back(0);
    //     }
    //     else
    //         (ans.push_back(arr[q.front()]));
    //     i++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            p = i;
            break;
        }
    }
    if (p == -1)
        ans.push_back(1);
    else
    {
        ans.push_back(arr[p]);
    }
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (p >= i)
            ans.push_back(arr[p]);
        else
        {
            for (int x = i; x <= j; x++)
            {
                if (arr[x] < 0)
                {
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans.push_back(arr[p]);
            else{
                ans.push_back(1);
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}