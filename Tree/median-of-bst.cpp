void dfs(struct Node *root, vector<int>& bst){
    if(root==NULL){
        return;
    }
    dfs(root->left, bst);
    bst.push_back(root->data);
    dfs(root->right, bst);
}
float findMedian(struct Node *root)
{
    vector<int> bst;
    dfs(root, bst);
    if((bst.size())&1) return bst[bst.size()/2];
    float first = bst[(bst.size()/2)-1], second = bst[bst.size()/2];
    float ans = first+second;
    return ans/2;
}