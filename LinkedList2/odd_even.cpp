#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node { 
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* odd_even(Node* head){
    Node* even=head;
    Node * even_t=even;
    Node* odd=head->next;
    Node* odd_t=odd;
    Node* temp=new Node(0);
    while(even_t->next!=NULL && odd_t->next!=NULL){
        temp->next=odd_t;
        temp=temp->next;
        temp->next=even_t;
        temp=temp->next;
    }
    return temp->next;
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
    a= odd_even(a);
    display(a);

    return 0; 
}