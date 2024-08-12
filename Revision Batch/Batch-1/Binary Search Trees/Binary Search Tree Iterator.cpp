class BSTIterator {
public:
    TreeNode* root;
    vector<int> ans;
    int i=0;
    
    void inorder(TreeNode* node, vector<int>& vec){
        if(!node)   return;
        inorder(node->left, vec);
        vec.push_back(node->val);
        inorder(node->right, vec);
    }

    BSTIterator(TreeNode* root) {
        this->root = root;
        inorder(root, ans);
    }
    
    int next() {
        return ans[i++];
    }
    
    bool hasNext() {
        if(i>=ans.size()) return false;
        return true;
    }
};