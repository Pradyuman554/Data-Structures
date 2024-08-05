class Solution {
public:
    static bool comp(TreeNode* a, TreeNode* b){
        return a->val < b->val;
    }

    void inorder(TreeNode* root, vector<TreeNode*>& nodes){
        if (!root) return;
        inorder(root->left, nodes);
        nodes.push_back(root);
        inorder(root->right, nodes);
    }

    void recoverTree(TreeNode* root){
        vector<TreeNode*> nodes;
        inorder(root, nodes); // Collect nodes in in-order
        
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;
        TreeNode* prev = nullptr;

        // Identify the two nodes that are out of order (THE FAULTY NODES)
        for (int i = 0; i < nodes.size(); ++i) {
            if (prev && nodes[i]->val < prev->val) {
                if (!first) first = prev;
                second = nodes[i];
            }
            prev = nodes[i];
        }

        // Swap the values of the two nodes
        if (first && second) {
            swap(first->val, second->val);
        }
    }
};