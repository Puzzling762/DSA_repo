#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_power(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)/2;
}

int main()
{
    cout<<max_power(90);
    
    return 0; 
}