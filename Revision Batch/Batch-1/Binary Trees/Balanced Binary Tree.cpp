class Solution {
public:
    void findHeights(TreeNode* root, int curr, int& maxi) {
        if (!root) {
            maxi = max(curr, maxi);
            return;
        }

        findHeights(root->left, curr + 1, maxi);
        findHeights(root->right, curr + 1, maxi);
    }

    bool isBalanced(TreeNode* root) {
        if (!root) return true; // An empty tree is balanced

        int leftMaxi = INT_MIN;
        int rightMaxi = INT_MIN;

        findHeights(root->left, 0, leftMaxi);
        findHeights(root->right, 0, rightMaxi);

        // Check the balance condition
        if (abs(leftMaxi - rightMaxi) > 1) return false;

        // Recursively check for left and right subtrees
        return isBalanced(root->left) && isBalanced(root->right);   //Meaning if the above condition (leftmaxi-rightmaxi) returns false on any step (in both subtrees), then return false. Otherwise its gonna reach end and return true at the last.
    }
};