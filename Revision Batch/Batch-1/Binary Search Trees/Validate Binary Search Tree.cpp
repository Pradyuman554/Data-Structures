class Solution {
public:
    bool isValidBST(TreeNode* root, TreeNode* minNode = NULL, TreeNode* maxNode = NULL) {
        if(!root)   return true;

        if(minNode && minNode->val >= root->val)    return false;
        if(maxNode && maxNode->val <= root->val)    return false;

        return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
    }
};