#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int flip(int n){
    int ans=0;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    n=(n+1)/2;
    n=n<<1;
    return n-1;
}
int main()
{
    int n=23;
    cout<<flip(23);
    
    return 0; 
}