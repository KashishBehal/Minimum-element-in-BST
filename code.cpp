void inorder(Node* root , vector<int>&v){
    if(root==NULL){
        return ;
    }
    inorder(root->left , v);
    v.push_back(root->data);
    inorder(root->right , v);
}
int minValue(Node* root) {
    if(root==NULL){
        return -1;
    }
    vector<int>v;
    inorder(root , v);
    return v[0];
    
}
