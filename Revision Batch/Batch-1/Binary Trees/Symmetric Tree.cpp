class Solution {
public:
    
    bool solve(TreeNode* p, TreeNode* q){
        if(!p && !q)    return true;

        if(p && q && p->val==q->val)  return solve(p->left, q->right) && solve(p->right, q->left);

        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        TreeNode *p = root->left, *q = root->right;
        if(!root)   return false;
        return solve(p,q);
    }
};