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

Node* swap(Node* head,int k){
    Node* temp=head;
    for(int i=1;i<k;i++){
        temp=temp->next;

    }
    Node* p1=temp->next;
    Node* p2=head;

    while(p1!=NULL){
        p1=p1->next;
        p2=p2->next;
    }
    swap(temp->val,p2->val);
    return head;
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

    display(a);
    swap(a,2);
    display(a);
    
    return 0; 
}