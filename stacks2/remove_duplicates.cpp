#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(stack<char>&st){
    if(st.size()==0) return;
    char x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void remove(string s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(st.empty()||s[i]!=st.top()){
            st.push(s[i]);
        }

    }
    display(st);
    
}
int main()
{
    string s = "aaabbccddaa";
    remove(s);
    return 0;
}