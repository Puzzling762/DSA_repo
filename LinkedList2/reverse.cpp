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
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* Next=NULL;

    while (curr!=NULL)
    {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
    
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(3);
    Node *d = new Node(2);
    Node *e = new Node(5);
    Node *f = new Node(2);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    display(a);
    a=reverse(a);
    display(a);
}