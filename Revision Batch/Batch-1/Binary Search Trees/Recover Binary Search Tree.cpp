class Solution {
public:
    void inorder(TreeNode* root, vector<TreeNode*>& nums){
        if(!root)   return;
        inorder(root->left, nums);
        nums.push_back(root);
        inorder(root->right, nums);
    }

    void recoverTree(TreeNode* root) {
        vector<TreeNode*> nums;
        inorder(root,nums);

        TreeNode* first=NULL, *second=NULL, *prev=NULL;

        for(int i=0; i<nums.size(); i++){
            if(prev && nums[i]->val < prev->val){
                if(!first)  first = prev;
                second = nums[i];
            }
            prev = nums[i];
        }

        if(first && second) swap(first->val, second->val);
    }
};