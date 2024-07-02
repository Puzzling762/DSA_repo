#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pge[n];
    stack<int> st;
    pge[0] = -1;
    st.push(arr[0]);
    for (int i = 1; i<=n; i++)
    {
        // pop small elements smaller than arr[i]
        while (st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }
        //marking the ans in array
        if (st.size() == 0)
        {
            pge[i] = -1;
        }
        else
        {
            pge[i] = st.top();
        }
        //push arr[i]
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }

    return 0;
}