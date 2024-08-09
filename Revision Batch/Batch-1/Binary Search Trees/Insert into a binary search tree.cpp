class Solution {
public:
    void solve(TreeNode* root, int val, TreeNode* prev, bool isSmaller){        
        if(!root){
            if(isSmaller)   prev->left = new TreeNode(val); 
            else prev->right = new TreeNode(val);
            return;
        }

        prev=root;
        if(root->val > val)  solve(root->left, val, prev, true);
        else solve(root->right, val, prev, false);
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)   return new TreeNode(val);
        //Find the inorder predecessor and insert into its right or left accordingly
        solve(root, val, NULL, true);
        return root;
    }
};