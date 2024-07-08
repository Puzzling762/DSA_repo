#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{ // Linkded List Node
public:
    int val;
    Node *next;
    Node *prev; // new
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // new
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;
    int size;
    DLL()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev=tail; //extra
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *t = new Node(val);
        t->next = head;
        head->prev=t;
        head = t;
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid index" << endl;
        }
        else if (idx == 0)
        {
            insertAtHead(val);
        }
        else if (idx == size)
        {
            insertAtEnd(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                t->next = temp->next;
                temp->next = t;
                t->prev=temp;
                t->next->prev=t;
                size++;
            }
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int getElement(int idx)
    {
        if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
           if(idx<size/2){
             Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
           }
           else{
            Node* temp=tail;
            for(int i=1;i<=size-idx;i++){
                temp=temp->prev;
            }
           }
        }
    }
};

int main()
{
}