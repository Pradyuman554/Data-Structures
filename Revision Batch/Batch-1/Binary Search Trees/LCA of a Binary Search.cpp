// class Solution
// {
// public:
//     // Optimized function to check if both p and q exist in the subtree rooted at 'root'
//     pair<bool, bool> ifExist(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         if (!root)
//             return {false, false};

//         pair<bool, bool> left = ifExist(root->left, p, q);
//         pair<bool, bool> right = ifExist(root->right, p, q);

//         bool foundP = (root == p) || left.first || right.first;
//         bool foundQ = (root == q) || left.second || right.second;

//         return {foundP, foundQ};
//     }

//     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         if (!root)
//             return root;

//         queue<TreeNode *> pq;
//         pq.push(root);
//         TreeNode *ans = root;

//         while (!pq.empty())
//         {
//             TreeNode *top = pq.front();
//             pq.pop();

//             pair<bool, bool> existCheck = ifExist(top, p, q);
//             if (existCheck.first && existCheck.second)
//             {
//                 ans = top;
//             }

//             if (top->left)
//                 pq.push(top->left);
//             if (top->right)
//                 pq.push(top->right);
//         }

//         return ans;
//     }
// };



//---------------------------------------------------------------

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val > p->val && root->val>q->val)  return lowestCommonAncestor(root->left, p, q);
        if(root->val < p->val && root->val<q->val)  return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};  