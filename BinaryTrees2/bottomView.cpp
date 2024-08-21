#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* construct (int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;

    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;

        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
        
    }
    return root;
}

int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void nthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, curr + 1, level);
    nthLevel(root->right, curr + 1, level);
}

void levelOrder(Node *root)
{

    int n = levels(root);
    for (int i = 0; i <= n; i++)
    {
        // nthLevel(root,1,i);
        nthLevel(root, 1, i);
        cout<<endl;
    }
}

void HorizLevel(Node* root,int& minLevel,int& maxLevel,int level){
    if(root==NULL)return;
    minLevel=min(minLevel,level);
    maxLevel=max(maxLevel,level);
    HorizLevel(root->right,minLevel,maxLevel,level+1);
    HorizLevel(root->left,minLevel,maxLevel,level-1);
    

}

void bottomview(vector<int> & top,Node* root,int level){
    if(root==NULL) return;
    top[level]=root->val;
    bottomview(top,root->left,level-1);
    bottomview(top,root->right,level+1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root= construct(arr,n);
    int minLevel=0;
    int maxLevel=0;
    HorizLevel(root,minLevel,maxLevel,0);
    int horLevels=maxLevel-minLevel+1; // vector ka size ke liye
    vector<int> top(horLevels,INT_MIN);
    bottomview(top,root,-minLevel);// -minlevel ko 0 banane ke liye vector ka indexing ke liye
    for(int i=0;i<top.size();i++){
        if(top[i]!=INT_MIN){
        cout<<top[i]<<" ";
        }
    }
}