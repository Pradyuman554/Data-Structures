class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)   return 0;
        int ans=0;
        queue<TreeNode*> q;   q.push(root);

        while(!q.empty()){
            int size = q.size();

            for(int i=0; i<size; i++){
                TreeNode* top = q.front();   q.pop();
                if(top->left)   q.push(top->left);
                if(top->right)  q.push(top->right);
            }
            ans++;
        }

        return ans;
    }
};