#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxSatisfied(vector<int> &arr, vector<int> &grumpy, int k)
{
    int n=arr.size();
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    int maxLoss=prevSum;
    int maxIdx=0;
    int i=1;
    int j=k;
    while(j<n){
        int currloss=prevSum;
        if(grumpy[j]==1) currloss+=arr[j];
        if(grumpy[i-1]==1) currloss-=arr[i-1];
        if(maxLoss<currloss){
            maxLoss=currloss;
            maxIdx=i;
        }
        prevSum=currloss;
        i++;
        j++;

    }
    for(int i=maxIdx;i<maxIdx+k;i++){
        grumpy[i]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(grumpy[i]==0){
            ans+=arr[i];
        }
    }
    return ans;

}
int main()
{
    vector <int> customers{9,10,4,5};
    vector <int> grumpy{1,0,1,1};
    int min=1;
    int a =maxSatisfied(customers,grumpy,min);
    cout<<a;


    return 0;
}