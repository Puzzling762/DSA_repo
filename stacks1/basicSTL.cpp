#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> st1;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.size()>0){
        cout<<st.top()<<" ";
        st1.push(st.top());
        st.pop();
    }

    
    return 0; 
}