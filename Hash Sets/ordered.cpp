#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    for(auto i:s){
        cout<<i<<endl;
    }

    map<int,int> m;
    m[1]=30;
    m[3]=10;
    m[2]=20;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0; 
}