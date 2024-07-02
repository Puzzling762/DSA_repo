#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nsi[n];
    stack<int> st;
    nsi[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            nsi[i] = n;
        }
        else
        {
            nsi[i] = st.top();
        }
        st.push(i);
    }

    int psi[n];


    int npi[n];
    stack<int> st1;
    psi[0] = -1;
    st.push(0);
    for (int i =1; i <n; i++)
    {
        while (st1.size() > 0 && arr[st1.top()] >= arr[i])
        {
            st1.pop();
        }
        if (st1.size() == 0)
        {
            psi[i] = -1;
        }
        else
        {
            psi[i] = st.top();
        }
        st1.push(i);
    }

    int maxArea=0;
    for (int i = 0; i < n; i++)
    {
        int height=arr[i];
        int width=nsi[i]-psi[i]-1;
        int area=height*width;
        maxArea=max(maxArea,area);
    }
    

    return 0;
}