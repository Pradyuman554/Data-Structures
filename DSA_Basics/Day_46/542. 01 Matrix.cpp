class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]>0){
                    int up = (i>0) ? (mat[i-1][j]) : INT_MAX - 1000;
                    int left = (j>0) ? (mat[i][j-1]) : INT_MAX - 1000;
                    mat[i][j] = min(up, left) + 1;
                }
            }
        }

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                if(mat[i][j]>0){
                    int down = (i<n-1) ? (mat[i+1][j]) : INT_MAX - 1000;
                    int right = (j<m-1) ? (mat[i][j+1]) : INT_MAX - 1000;
                    int mini = min(down, right)+1;
                    mat[i][j] = min(mini, mat[i][j]);
                }
            }
        }

        return mat;
    }
};