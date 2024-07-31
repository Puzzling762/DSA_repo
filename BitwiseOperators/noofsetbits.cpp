#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countset(int n){
    return __builtin_popcount(n);
}

int count_2(int n){
    int c=0;
    while(n>0){
        c++;
        n=(n & n-1);
    }
    return c;
}
int main()
{
    cout<<countset(13)<<endl;
    cout<<count_2(13)<<endl;
    return 0; 
}