#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> st1;
    stack<int> st2;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    vector<int> v;

    // while(st.size()>0){
    //     // cout<<st.top()<<" ";
    //     st1.push(st.top());
    //     st.pop();
    // }
    // while(st1.size()>0){
    //     // cout<<st2.top()<<" ";
    //     st2.push(st1.top());
    //     st1.pop();
    // }
    // cout<<endl;
    // while(st2.size()>0){
    //     st.push(st2.top());
    //     st2.pop();
    // }
    // while (st.size()>0)
    // {
    //      cout<<st.top()<<" ";
    //      st.pop();
    // }
    while(st.size()>0){
        v.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i <v.size() ; i++)
    {
        st.push(v[i]);
    }
    while (st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    
    
    



    
    return 0; 
}