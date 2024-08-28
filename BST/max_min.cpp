#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*left;
        Node*right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
void display(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

void max(Node* root){
    int mn=root->val;
    int mx=root->val;
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
        mn=temp->val;
    }
    temp=root;
    while(temp->right){
        temp=temp->right;
        mx=temp->val;
    }
    cout<<mn<<" "<<mx;

}


int main()
{
    Node* a=new Node(4);//root
    Node* b=new Node(2);
    Node* c=new Node(5);
    Node* d=new Node(1);
    Node* e=new Node(3);
    Node* f=NULL;
    Node* g=new Node(6);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl;
    max(a);

    
    return 0; 
}