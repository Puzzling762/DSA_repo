#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter no:";
            cin>>a[i][j];
        }
    }
    int j=0;
    for(int i=0;i<3;i++){
        if(i%2!=0){
            for(int j=2;j>=0;j--){
                cout<<a[j][i];
            }
        }
        else{
            for(int j=0;j<3;j++){
                cout<<a[j][i];
            }
        }
        cout<<endl;
    }
    return 0; 
}