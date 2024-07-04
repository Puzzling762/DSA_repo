#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string n,int r,float m){
        name=n;
        rno=r;
        marks=m;
    }

};

int main()
{
    Student s("abc",1,92);
    // s.name="abc";
    // s.rno=1;
    // s.marks=92;
    cout<<s.name;
    return 0; 
}