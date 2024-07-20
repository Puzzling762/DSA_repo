#include <iostream>
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

Node* duplicate(Node *head) {
    Node *slow = head;
    Node *prev = NULL;
    Node *fast = head->next;

    while (fast) {
        if (slow->val == fast->val) {
            while (fast != NULL && slow->val == fast->val) {
                fast = fast->next;
            }
            if (!prev) {
                head = fast;
            } else {
                prev->next = fast;
            }
        } else {
            prev = slow;
        }
        slow = fast;
        if (fast != NULL) {
            fast = fast->next;
        }
    }
    return head;
}

void display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *a = new Node(0);
    Node *b = new Node(1);
    Node *c = new Node(1);
    Node *d = new Node(1);
    Node *e = new Node(4);
    Node *f = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    display(a);
    a = duplicate(a);
    display(a);
}
