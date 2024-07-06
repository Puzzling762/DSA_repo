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

Node* swap(Node* list1, int a, int b, Node* list2) {
    Node* temp1 = list1;
    Node* prev = nullptr;

    // Traverse to the 'a'th node
    for (int i = 0; i < a; ++i) {
        prev = temp1;
        if (temp1 == nullptr) return list1; // If 'a' is out of bounds
        temp1 = temp1->next;
    }

    // Find the node after 'b'
    Node* endB = temp1;
    for (int i = a; i <= b; ++i) {
        if (endB == nullptr) return list1; // If 'b' is out of bounds
        endB = endB->next;
    }

    // Find the end of list2
    Node* endList2 = list2;
    while (endList2->next != nullptr) {
        endList2 = endList2->next;
    }

    // Perform the swap
    if (prev != nullptr) {
        prev->next = list2; // Connect the node before 'a' to the start of list2
    } else {
        list1 = list2; // If 'a' is 0, list1 now starts with list2
    }

    endList2->next = endB; 

    return list1;
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
    d->next = e;

    Node *a1 = new Node(100000);
    Node *b1 = new Node(100001);
    Node *c1 = new Node(100002);
    a1->next = b1;
    b1->next = c1;

    display(a);
    a = swap(a, 2, 3, a1); 
    display(a);
}