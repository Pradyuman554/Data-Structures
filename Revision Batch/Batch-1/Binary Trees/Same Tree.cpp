class Solution {
public:
    int solve(TreeNode* root, int& diameter){
        if(!root)   return 0;

        int l = solve(root->left, diameter), r = solve(root->right, diameter);
        int localdiameter = l+r;

        diameter = max(diameter, localdiameter);
        return 1 + max(l,r); 
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        solve(root, diameter);
        return diameter;
    }
};