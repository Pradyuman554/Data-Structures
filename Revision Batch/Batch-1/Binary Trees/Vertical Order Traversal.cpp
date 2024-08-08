class Solution {
public:

    void inorder(TreeNode* root, map<pair<int,int>, vector<int>>& matrix, int row, int col){
        if(!root)   return;

        matrix[{row,col}].push_back(root->val);
        inorder(root->left, matrix, row+1, col-1);
        inorder(root->right, matrix, row+1, col+1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<pair<int,int>, vector<int>> matrix;
        inorder(root, matrix, 0, 0);
        map<int, vector<pair<int, int>>> cols;

        for(auto it: matrix){
            vector<int> vec = it.second;
            auto [row, col] = it.first;
            for(int i: vec){
                cols[col].emplace_back(row, i);
            }
        }

        vector<vector<int>> result;
        for(auto it: cols){
            auto vec = it.second;
            vector<int> inter;
            sort(vec.begin(), vec.end());
            
            for(auto pai: vec){
                inter.push_back(pai.second);
            }

            result.push_back(inter);
        }

        return result;
    }
};