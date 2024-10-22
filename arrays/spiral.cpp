#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout<<"enter rows:";
    cin>>m;

    int n;
    cout<<"enter colums";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter no:";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    //spiral
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        //left
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        //up
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc) break;

    }


}