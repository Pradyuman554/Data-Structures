class Solution {
public:
    int solve(TreeNode* root, int& ans){
        if(!root)   return 0;

        int l = solve(root->left, ans);
        int r = solve(root->right, ans);

        ans = max({ans, root->val, l+root->val, r+root->val, l+r+root->val});

        return max(max(l,r)+root->val, root->val);  //Would it even be a good idea to consider the left and right subtrees for our final sum, YA FIR ROOT HI BADHIYA THA
    }

    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(root, ans);
        return ans;
    }
};




class Solution {
public:
    int solve(TreeNode* root, int& ans){
        if(!root)   return 0;

        int l = max(0, solve(root->left, ans));
        int r = max(0, solve(root->right, ans));

        ans = max(ans, l+r+root->val);

        return root->val + max(l,r);
    }

    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(root, ans);
        return ans;
    }
};