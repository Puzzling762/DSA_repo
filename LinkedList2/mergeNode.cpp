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


int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *a1 = new Node(2);
    Node *b1 = new Node(5);
    Node *c1 = new Node(7);
    a1->next = b1;
    b1->next = c1;

    display(a);
    mergeLists(a,a1);
    display(a);
}