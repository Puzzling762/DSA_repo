#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pge_id[n];
    stack<int> st;
    pge_id[0] =1 ;
    st.push(0);
    for (int i = 1; i<=n; i++)
    {
        // pop small elements smaller than arr[i]
        while (st.size() > 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        //marking the ans in array
        if (st.size() == 0)
        {
            pge_id[i] = -1;
        }
        else
        {
            pge_id[i] = st.top();
        }
        //push arr[i]
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        pge_id[i]=i-pge_id[i]; //span nikalre
    }
    for (int i = 0; i < n; i++)
    {
        cout << pge_id[i] << " ";
    }

    return 0;
}