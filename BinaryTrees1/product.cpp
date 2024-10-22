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
int prod(Node* root){
    if(root==NULL) return 1;
    int l=1;
    int r=1;
    if(root->left!=NULL){
        l=root->left->val*prod(root->left);
    }
    else{
        l=1;
    }
    if(root->right!=NULL){
        r=root->right->val* prod(root->right);
    }
    else{
        r=1;
    }
    prod(root->left);
    prod(root->right);
    return l*r;
}

int main()
{
    Node* a=new Node(8);//root
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<prod(a);



    
    return 0; 
}