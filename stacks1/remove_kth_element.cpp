#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void kth_element(stack<int> &st, int idx, int value)
{
    stack<int> st1;

    for (int i = 0; i <= idx; i++)
    {
        if (!st.empty())
        {
            st1.push(st.top());
            st.pop();

        }
    }
    st.push(value);
    while(st1.size()>0){
        st.push(st1.top());
        st1.pop();
    }

    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    kth_element(st, 3, 5);

    return 0;
}