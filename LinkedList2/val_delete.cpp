#include <iostream>
#include <bits/stdc++.h>
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

Node *rem(Node *head, int v)
{
    while(head!=NULL && head->val==v){
        head=head->next;
    }
    Node *temp = head;
    while (temp!=NULL && temp->next!=NULL){
        if(temp->next->val==v){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }

    }
    
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
    Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(1);
    Node *d = new Node(1);
    Node *e = new Node(4);
    Node *f = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    display(a);
    a = rem(a, 1);
    display(a);

    return 0;
}