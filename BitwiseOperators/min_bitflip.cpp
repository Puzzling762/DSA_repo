#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=23;
    int y=32;
    cout<<__builtin_popcount(x^y);
    return 0; 
}