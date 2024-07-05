#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{ // Linkded List Node
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
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
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *t = new Node(val);
        t->next = head;
        head = t;
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtEnd(val);

        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for (int i = 0; i < idx-1; i++)
            {
                t->next=temp->next;
                temp->next=t;
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
     int getElement(int idx){
        if(idx==0)return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for (int i = 1; i <=idx; i++)
            {
                temp=temp->next;
            }
            return temp->val;
            
        }
        
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();
    ll.insertAtHead(90);
    ll.display();
    ll.insertAtIdx(2,150);
    ll.display();
    cout<<ll.getElement(4)<<endl;
}