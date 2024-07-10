#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void remove_even(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
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
    remove_even(q);
    display(q);
    // cout<<q.size()<<endl;


    return 0; 
}