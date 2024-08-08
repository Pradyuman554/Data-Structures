class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)   return {};
        vector<int> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        vector<int> result;

        while(!q.empty()){
            int size = q.size();
            vector<int> vec;

            for(int i=0; i<size; i++){
                TreeNode* top = q.front();  q.pop();
                vec.push_back(top->val);
                if(top->left)   q.push(top->left);
                if(top->right)  q.push(top->right);
            }
            result.push_back(vec.back());
        }

        return result;
    }
};