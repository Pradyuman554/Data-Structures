class Solution {
public:

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)   return {};
        queue<TreeNode*> q;
        vector<vector<int>> result;
        q.push(root);
        int levels=0;

        while(!q.empty()){
            levels = q.size();
            vector<int> curr;
            for(int i=0; i<levels; i++){
                TreeNode* top = q.front();  q.pop();
                curr.push_back(top->val);
                if(top->left)   q.push(top->left);
                if(top->right)  q.push(top->right);
            }
            result.push_back(curr);
        }

        for(int i=0; i<result.size(); i++){
            auto &vec = result[i];
            if(i%2!=0)  reverse(vec.begin(), vec.end());
        }

        return result;
    }
};