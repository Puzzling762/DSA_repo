#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1,-2,3,-4,-5,6,8};
    int n=v.size();
    int i=0;int j=n-1;
    while (i<j)
    {
        /* code */
        if(v[i]<0) i++;
        else if (v[j]>0)
        {
            j--;
        }
        else if (v[i]>0 && v[j]<0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
            /* code */
        }
        
        
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    

    return 0; 
}