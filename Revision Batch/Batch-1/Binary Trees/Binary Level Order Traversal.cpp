//Optimised:
class Solution {
public:
    void solve(TreeNode* root, int level, vector<vector<int>>& levels) {
        if (!root) return;
        
        if (level == levels.size()) {   //Means we got a new level
            levels.push_back(vector<int>());  // Add a new level
        }

        levels[level].push_back(root->val);  // Add the node value to the current level

        solve(root->left, level + 1, levels);  // Traverse left
        solve(root->right, level + 1, levels); // Traverse right
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levels;
        solve(root, 0, levels);
        return levels;
    }
};


//Other
class Solution {
public:
//Make a pair of node and their levels. Just input the nodes as normal (but attach their levels with them)
    void solve(TreeNode* root, vector<pair<int, int>>& ans, int level){
        if(!root)   return;

        solve(root->left, ans, level+1);
        ans.push_back(make_pair(root->val, level));
        solve(root->right, ans, level+1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<pair<int,int>> ans;
        //We dont know the max levels, so we first find max levels
        solve(root, ans, 0);

        if(ans.size()==0)   return {};
        
        int maxlevels = 0;
        for(auto it: ans){
            maxlevels = max(maxlevels, it.second);
        }

        vector<vector<int>> vec(maxlevels + 1);
        for (const auto& arr : ans) {
            vec[arr.second].push_back(arr.first);
        }

        return vec;
    }
};



//Queue Approach
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                currentLevel.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currentLevel);
        }

        return result;
    }
};
