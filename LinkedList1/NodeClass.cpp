#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{ // Linkded List Node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming ll

    a.next=&b;
    b.next=&c;
    c.next=&d;

    Node temp=a;
    while (temp.next!=NULL)
    {
        cout<<temp.val<<" ";
        temp =*(temp.next);
    }
    

    return 0; 
}