void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        if(root==NULL) return;
        if(root->key < key){
            if(pre!=nullptr) pre->key=max(root->key, pre->key);
            else pre = root;
        } else if(root->key > key){
            if(suc != nullptr) suc->key=min(root->key, suc->key);
            else suc = root;
        }
        
        findPreSuc(root->left, pre, suc, key);
        findPreSuc(root->right, pre, suc, key);
    }