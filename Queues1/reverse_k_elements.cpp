#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void revk(queue<int>&q,int val){
    stack<int>st;
    for(int i=0;i<=val;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n=q.size();
    for(int i=0;i<n-val;i++){
        q.push(q.front());
        q.pop();
    }

}


void display(queue<int> &q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    //push
    //pop
    //front->top
    //size , empty
    //back

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.front()<<endl;
    // cout<<q.back();
    // cout<<q.size()<<endl;
    display(q);
    revk(q,2);
    display(q);
    // cout<<q.size()<<endl;


    return 0; 
}