//Find number of Winning Players:
// class Solution {
// public:
//     int winningPlayerCount(int n, vector<vector<int>>& pick) {
//         int sum=0;
//         map<int, map<int, int> > mp;
        
//         for(int i=0; i<n; i++){
//             map<int,int> freq;
//             for(auto vec: pick){
//                 if(vec[0]== i){
//                     freq[vec[1]]++;
//                 }
//             }
//             mp[i] = freq;
//         }

//         vector<int> ans(n);

//         for(auto it: mp){
//             map<int, int> freq2 = it.second;
//             int maximum = INT_MIN;
//             for(auto it2: freq2)    maximum = max(maximum, it2.second);
//             ans[it.first] = maximum;
//         }

//         for(int i=0; i<ans.size(); i++){
//             if(ans[i]>i)    sum++;
//         }

//         return sum;
//     }
// };




//Minimum Number of Flips to make Binary Grid Palindromic 1
// class Solution {
// public:
//     int minFlips(vector<vector<int>>& grid) {
//     int n = grid.size(), m = grid[0].size(), rowFlips = 0, columnFlips = 0;

//     for (int i = 0; i < n; ++i) {
//         int rowFlipsForThisRow = 0;
//         for (int j = 0; j < m / 2; ++j) {
//             if (grid[i][j] != grid[i][m - j - 1]) {
//                 rowFlipsForThisRow++;
//             }
//         }
//         rowFlips += rowFlipsForThisRow;
//     }

//     for (int j = 0; j < m; ++j) {
//         int columnFlipsForThisColumn = 0;
//         for (int i = 0; i < n / 2; ++i) {
//             if (grid[i][j] != grid[n - i - 1][j]) {
//                 columnFlipsForThisColumn++;
//             }
//         }
//         columnFlips += columnFlipsForThisColumn;
//     }

//     return min(rowFlips, columnFlips);
//     }
// };