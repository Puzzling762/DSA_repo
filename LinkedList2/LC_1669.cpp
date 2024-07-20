#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{ // Linked List Node
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

Node* merge(Node* l1,Node* l2,int a,int b){
    Node* temp=l1;
    Node* prev=l1;
    for(int i=0;i<a;i++){
        prev=temp;
        temp=temp->next;
    }
    Node* temp2=l2;
    for(int i=a;i<=b;i++){
        temp=temp->next;

    }
    while (temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
    prev->next=l2;
    
    return l1;
}



void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{

    Node *a= new Node(0);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(3);
    Node *e = new Node(4);
    Node *f = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    Node *a1 = new Node(10000);
    Node *b1 = new Node(10001);
    Node *c1 = new Node(10002);
    a1->next = b1;
    b1->next = c1;

    display(a);
    a=merge(a,a1,3,4);
    display(a);
}