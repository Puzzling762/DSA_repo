#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 6, 8, 5, 11, 9};
    stack<int> st;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(n, 0);
    st.push(arr[n - 1]);
    ans[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int c = 0;
        while (st.size() > 0 && st.top() < arr[i])
        {
            st.pop();
            c++;
        }
        if (st.size() != 0)
        {
            c++;
        }
        ans[i] = c;
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}