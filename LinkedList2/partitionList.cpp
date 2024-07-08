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
Node *mergeLists(Node *a, Node *a1)
{
    Node *c = new Node(100);
    Node *temp = c;
    while (a != NULL && a1 != NULL)
    {
        if (a->val <= a1->val)
        {
            temp->next = a;
            a = a->next;
            temp = temp->next;
        }
        else
        {
            temp->next = a1;
            a1 = a1->next;
            temp = temp->next;
        }
    }
    if (a == NULL)
        temp->next = a1;
    else
    {
        temp->next = a;
    }
    return c->next;
}

Node *part(Node *head, int x)
{
    Node *temp = head;
    Node *l = new Node(0);
    Node *h = new Node(0);
    Node *tl = l;
    Node *th = h;
    while (temp != NULL)
    {
        if (temp->val < x)
        {
            tl->next = temp;
            temp = temp->next;
            tl = tl->next;
        }
        else
        {
            th->next = temp;
            temp = temp->next;
            th = th->next;
        }
    }
    tl->next = h->next;
    th->next = NULL;
    return l->next;
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
    a=part(a,3);
    display(a);
}