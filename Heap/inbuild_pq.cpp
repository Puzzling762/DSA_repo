#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> hp;
    priority_queue<int,vector<int>,greater<int>> hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.push(45);
    cout<<hp.top();
    hp.pop(); 
    return 0; 
}