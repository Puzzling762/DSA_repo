#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int m = queries.size();
    vector<int> pre(n);
    vector<int> ans(m);
    pre[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = nums[i] + pre[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int len = 0;
        for (int j = 0; j < n; j++)
        {
            if (pre[j] > queries[i])
                break;
            len++;
        }
        ans[i] = len;
    }
    return ans;
}
int main()
{
    vector<int> nums{4, 5, 2, 1};
    vector<int> queries{3, 10, 21};
    vector<int> a = answerQueries(nums, queries);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}