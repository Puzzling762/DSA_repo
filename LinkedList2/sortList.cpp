#include <iostream>
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
Node* mergeLists(Node* a,Node*a1){
    Node* c=new Node(100);
    Node* temp=c;
    while(a!=NULL && a1!=NULL){
        if(a->val<=a1->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else{
            temp->next=a1;
            a1=a1->next;
            temp=temp->next;
        }
    }
    if(a==NULL) temp->next=a1;
    else{
        temp->next=a;
    }
    return c->next;
}

Node* sortList(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* a =head;
    Node* b=slow->next;
    slow->next=NULL;
    a=sortList(a);
    b=sortList(b);
    Node* c=mergeLists(a,b);
    return c;
}

int main()
{
    Node *a = new Node(5);
    Node *b = new Node(1);
    Node *c = new Node(3);
    Node *d = new Node(6);
    Node *e = new Node(2);
    Node *f = new Node(0);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    display(a);
    a=sortList(a);
    display(a);
}