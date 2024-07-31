#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int btd(string &binary){
    int n=binary.size();
    int res=0;
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0';
        res=res+num*(1<<(n-i-1));
    }
    return res;

}
string dtob(int num ){
    string res="";
    while(num>0){
        if(num%2==0){
            res="0"+res;
        }
        else{
            res="1"+res;
        }
        num=num/2;
    }
    return res;
}
int main()
{
    string str="001101";
    cout<<"binary to decimal"<<" "<<btd(str)<<endl;
    int num=13;
    cout<<dtob(num)<<endl;
    return 0; 
}