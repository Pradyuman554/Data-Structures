class Solution {
public:

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root)
            if(root->val > key) root->left = deleteNode(root->left, key);
            else if(root->val <key) root->right = deleteNode(root->right, key);

            else{   //Value is found
                if(!root->left && !root->right) return NULL;
                if(!root->left || !root->right){
                    return root->left?root->left : root->right;
                }

                TreeNode* temp = root->left;
                while(temp->right)  temp=temp->right;
                root->val = temp->val;
                root->left = deleteNode(root->left, temp->val);
            }
        return root;
    }
};