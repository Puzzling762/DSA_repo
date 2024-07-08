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

    Node* reorderList(Node* head) {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*b =reverse(slow->next);
        Node* a=head;
        slow->next=NULL;

        Node* c=new Node(100);
        Node* tempc=c;
        Node* tempa=a;
        Node* tempb=b;

        while(tempa!=NULL && tempb!=NULL){
            tempc->next=tempa;
            tempa=tempa->next;
            tempc=tempc->next;

            tempc->next=tempb;
            tempb=tempb->next;
            tempc=tempc->next;
        }
        if(tempa!=NULL){
            tempc->next=tempa;
        }
        else if(tempb!=NULL){
            tempc->next=tempb;
        }
        // tempc->next=NULL;
        return c->next;
    }

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    a=reorderList(a);
    display(a);
}