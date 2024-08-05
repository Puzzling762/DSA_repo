int prod(Node* root){
    if(root==NULL) return 1;
    return root->val*prod(root->left)*prod(root->right);
}