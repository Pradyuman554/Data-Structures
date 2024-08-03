// //Best Approach:
// class BSTIterator {
// public:
//     TreeNode* root;
//     vector<int> ans;
//     int i=0;

//     void inorder(TreeNode* node, vector<int>& vec){
//         if(!node)   return;
//         inorder(node->left, vec);
//         vec.push_back(node->val);
//         inorder(node->right, vec);
//     }

//     BSTIterator(TreeNode* root) {
//         this->root = root;
//         inorder(root, ans);
//     }
    
//     int next() {
//         return ans[i++];
//     }
    
//     bool hasNext() {
//         if(i>=ans.size()) return false;
//         return true;
//     }
// };





//99. Recover Binary Search Tree
// class Solution {
// public:
//     static bool comp(TreeNode* a, TreeNode* b){
//         return a->val < b->val;
//     }

//     void inorder(TreeNode* root, vector<TreeNode*>& nodes){
//         if (!root) return;
//         inorder(root->left, nodes);
//         nodes.push_back(root);
//         inorder(root->right, nodes);
//     }

//     void recoverTree(TreeNode* root){
//         vector<TreeNode*> nodes;
//         inorder(root, nodes); // Collect nodes in in-order
        
//         TreeNode* first = nullptr;
//         TreeNode* second = nullptr;
//         TreeNode* prev = nullptr;

//         // Identify the two nodes that are out of order
//         for (int i = 0; i < nodes.size(); ++i) {
//             if (prev && nodes[i]->val < prev->val) {
//                 if (!first) first = prev;
//                 second = nodes[i];
//             }
//             prev = nodes[i];
//         }

//         // Swap the values of the two nodes
//         if (first && second) {
//             swap(first->val, second->val);
//         }
//     }
// };