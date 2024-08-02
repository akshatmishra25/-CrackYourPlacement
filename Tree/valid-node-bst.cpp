class Solution{
public:
    int count = 0;
    void helper(Node *root, int l, int h){
        if(!root) return;
        if(root && root->data<=h && root->data>=l) count++;
        helper(root->left, l, h);
        helper(root->right, l, h);
    }
    int getCount(Node *root, int l, int h)
    {
        helper(root, l, h);
        return count;
    }
};