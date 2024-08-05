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

int sum(Node* root){
    if(root==NULL) return 0;
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    int ans=root->val+leftsum+rightsum;
    return ans;
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int maxTree(Node* root){
    if(root==NULL) return INT_MIN;
    int lmax=maxTree(root->left);
    int rmax=maxTree(root->right);
    return max(root->val,max(lmax,rmax));
}
int prod(Node* root){
    if(root==NULL) return 1;
    return root->val*prod(root->left)*prod(root->right);
}

int minTree(Node* root){
    if(root==NULL) return INT_MAX;
    int left1=minTree(root->left);
    int right1=minTree(root->right);
    return min(root->val,min(left1,right1));
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
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
    cout<<sum(a);
    cout<<endl;
    cout<<size(a)<<endl;
    cout<<maxTree(a)<<endl;
    cout<<prod(a)<<endl;
    cout<<minTree(a)<<endl;
    cout<<levels(a)<<endl;


    
    return 0; 
}