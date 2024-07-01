#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    vector<int> v; //no overflow
    int idx=-1;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        if (v.size()==0)
        {
            cout<<"stack empty";
            return -1;
        }
        
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }


};
int main()
{
    Stack st;
    st.push(20);
    st.push(30);
    cout<<st.size();
    cout<<st.top();

    return 0; 
}