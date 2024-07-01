#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bottom(stack<int> &st,int n)
{
    if (st.size() == 0)
    {
        st.push(n);
        return;
    }
    int x = st.top();
    // cout << x << " ";
    st.pop();
    bottom(st,n);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x); 
 }

 void reverse(stack<int> & st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    bottom(st,x);
 }
int main()
{
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // bottom(st);
    display(st);
    cout<<endl;

    return 0;
}