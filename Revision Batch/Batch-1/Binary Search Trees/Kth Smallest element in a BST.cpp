class Solution {
public:
    void inorder(TreeNode* root, vector<TreeNode*>& vec){
        if(!root)   return;

        inorder(root->left, vec);
        vec.push_back(root);
        inorder(root->right, vec);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode*> vec;
        inorder(root, vec);

        return vec[k-1]->val;
    }
};