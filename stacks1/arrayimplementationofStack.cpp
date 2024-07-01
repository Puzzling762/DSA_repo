#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==4){
            cout<<"Stack full";
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        idx--;
    }
    int top(){
        if (idx==-1)
        {
            cout<<"stack empty";
            return -1;
        }
        
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for (int i = 0; i <=idx; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }


};
int main()
{
    Stack st;
    st.push(20);
    st.push(30);
    st.push(50);
    // cout<<st.size();
    st.display();

    return 0; 
}