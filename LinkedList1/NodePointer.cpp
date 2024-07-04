#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{ // Linkded List Node
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void display_rec(Node* head){
    if(head ==NULL) return;
    cout<<head->val<<" ";
    display_rec(head->next);
}

void insertAtEnd(Node* head,int val ){
    Node * t=new Node(val);
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;

}

int size(Node* head){
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next=e;
    // cout<<b->val<<endl;
    display(a);
    cout<<size(a)<<endl;
    display_rec(a);
    cout<<endl;

    insertAtEnd(a,100);
    display(a);
    return 0;
}