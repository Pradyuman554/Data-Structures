//N-Queens: Using backtracking
// class Solution {
//   public:
//     bool isSafe1(int row, int col, vector < string > board, int n) {
//       // check upper element
//       int duprow = row;
//       int dupcol = col;

//       while (row >= 0 && col >= 0) {
//         if (board[row][col] == 'Q')     return false;
//         row--;
//         col--;
//       }

//       col = dupcol;
//       row = duprow;
//       while (col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         col--;
//       }

//       col = dupcol;
//       while (row < n && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row++;
//         col--;
//       }
//       return true;
//     }

//   public:
//     void solve(int col, vector < string > & board, vector < vector < string >> & ans, int n) {
//       if (col == n) {
//         ans.push_back(board);
//         return;
//       }
//     for (int row = 0; row < n; row++) {
//         if (isSafe1(row, col, board, n)) {
//           board[row][col] = 'Q';
//           solve(col + 1, board, ans, n);
//           board[row][col] = '.';    //This line would only get implemented if the above recursion stops somewhere and returns. 
//         }
//       }
//     }

//   public:
//         vector < vector < string >> solveNQueens(int n) {
//         vector < vector < string >> ans;
//         string s(n, '.');
//         vector < string > board(n,s);
//         solve(0, board, ans, n);
//         return ans;
//     }
// };







//Sudoku Solver:
// class Solution {
// public:

//     bool isValid(vector<vector<char>>& board, int row, int col, char c){
//         for(int i=0;i<9;i++){
//             if(board[i][col]==c)    return false;   //Check a whole column
//             if(board[row][i]==c)    return false;   //Check a whole row
//             if(board[3*(row/3)+i%3][3*(col/3)+i/3]==c)  return false;   //Check the grid
//         }
//         return true;
//     }

//     bool Sudoku(vector<vector<char>>& board){
//         for(int i=0; i<board.size();i++){
//             for(int j=0;j<board[0].size();j++){
//                 if(board[i][j]=='.'){   //If the current cell is empty, start checking for numbers
//                     for(char c= '1' ;c<= '9' ;c++){
//                         if(isValid(board, i, j, c)){
//                             board[i][j]=c;

//                             if(Sudoku(board))  return true;
//                             else board[i][j]='.';   //Backtrack if wrong solution
//                         }
//                     }
//                 return false;
//                 }
//             }
//         }
//         return true;
//     }

//     void solveSudoku(vector<vector<char>>& board) {
//         Sudoku(board);
//     }
// };






//M-Coloring: Find if chromatic number is <=m
// class Solution{
// public:

//     bool isSafe(bool graph[101][101], int m, int n, int col, int NODE, int color[]){
//         for(int k=0;k<n;k++){
//             if(k!=NODE && graph[k][NODE]==1 && color[k]==col)   //Just checking if ANY ADJACENT ELEMENT to node NODE is the same color as the arguement "col"
//             return false;
//         }
//         return true;
//     }
    
//     bool Solve(bool graph[101][101], int m, int n, int color[], int NODE){
//         if(NODE==n) return true;    //If we reached all the nodes successfully
        
//         for(int i=1;i<=m;i++){
//             if(isSafe(graph, m, n, i, NODE, color)){
//                 color[NODE]=i;
//                 if(Solve(graph, m, n, color, NODE+1)) return true;
//                 color[NODE]=0;      //If unsuccessful, backtrack
//             }
//         }
//         return false;
//     }

//     bool graphColoring(bool graph[101][101], int m, int n) {
//         int color[n]={0};
//         if(Solve(graph, m, n, color, 0))    return true;
//         else return false;
//     }
// };





//Rat in a Maze
// class Solution{
//     public:
//     void Solve(vector<vector<int>>&m, int n, int i, int j, vector<string>& st, vector<vector<int>>& visited, string c){
//         if(i==n-1 && j==n-1){
//             st.push_back(c);
//             return;
//         }
        
//         //downward
//         if(i+1<n && visited[i+1][j]==0 && m[i+1][j]==1){
//             visited[i][j]=1;    //Mark the CURRENT as visited, because current can only be visited if it has some future, otherwise whats the point
//             Solve(m,n,i+1,j,st,visited,c+'D');  //Go downward through i+1 and add 'D' to string
//             visited[i][j]=0;    //Backtracking
//         }
        
        
//         //left
//         if(j-1>=0 && visited[i][j-1]==0 && m[i][j-1]==1){
//             visited[i][j]=1;  
//             Solve(m,n,i,j-1,st,visited,c+'L');  //Go left through j-1 and add 'L' to string
//             visited[i][j]=0;    //Backtracking
//         }
        
        
//         //right
//         if(j+1<n && visited[i][j+1]==0 && m[i][j+1]==1){
//             visited[i][j]=1;
//             Solve(m,n,i,j+1,st,visited,c+'R');  //Go right through j+1 and add 'R' to string
//             visited[i][j]=0;    //Backtracking
//         }
        
        
//         //Up
//         if(i-1>=0 && visited[i-1][j]==0 && m[i-1][j]==1){
//             visited[i][j]=1;
//             Solve(m,n,i-1,j,st,visited,c+'U');  //Go Up through i-1 and add 'U' to string
//             visited[i][j]=0;    //Backtracking
//         }
        
//     }
    
//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         vector<string> st;
//         vector<vector<int>> visited(n, vector<int> (n,0));
//         string a="";
//         if(m[0][0]==0)  return {"-1"};
//         Solve(m, n, 0, 0, st, visited, a);
//         return st;
//     }
// };





//Word Break
// vector<string> wordBreakHelper(string &s, int idx, unordered_set<string> &dictSet, int size)
// {
//     // Base Condition
//     if (idx == size)
//     {
//         return {""};
//     }

//     vector<string> subPart, completePart;
//     string word = "";

//     /*
//         Start exploring the sentence from the index until we wouldn't find 'j' such that substring [index,j] exists in the dictionary as a word.
//     */
//     for (int j = idx; j < size; j++)
//     {

//         word.push_back(s[j]);
//         if (dictSet.count(word) == 0)
//         {
//             continue;
//         }

//         //  Get the answer for rest of sentence from 'j' to s.size().
//         subPart = wordBreakHelper(s, j + 1, dictSet, size);

//         //  Append "word" with all the answer that we got.
//         for (int i = 0; i < subPart.size(); i++)
//         {
//             if (subPart[i].size() != 0)
//             {
//                 string temp = word;
//                 temp.append(" ");
//                 temp.append(subPart[i]);
//                 subPart[i] = temp;
//             }
//             else
//             {
//                 subPart[i] = word;
//             }
//         }

//         for (int i = 0; i < subPart.size(); i++)
//         {
//             completePart.push_back(subPart[i]);
//         }
//     }
//     return completePart;
// }

// vector<string> wordBreak(string &s, vector<string> &dictionary)
// {
//     //  Set to check the whether any word exists in the dictionary or not.
//     unordered_set<string> dictSet;

//     for (int i = 0; i < dictionary.size(); i++)
//     {
//         dictSet.insert(dictionary[i]);
//     }
//     return wordBreakHelper(s, 0, dictSet, s.size());
// }




//2
// #include <iostream>
// #include <string>

// char findCharAtIndex(const std::string& S, int K) {
//     int N = S.length();
    
//     int repetitions = K / N;
    
//     int indexWithinRepetition = K % N;
    
//     return S[indexWithinRepetition];
// }

// int main() {
//     std::string S;
//     int K;

//     std::cout << "Enter the string: ";
//     std::cin >> S;
//     std::cout << "Enter the index (0-based): ";
//     std::cin >> K;

//     char result = findCharAtIndex(S, K);
//     std::cout << "The character at index " << K << " is '" << result << "'." << std::endl;

//     return 0;
// }





//3
#include <bits/stdc++.h>

using namespace std;

int minTickets(vector<int>& A, int N) {
    int maxTicketValue = 3; // Maximum ticket value allowed
    int maxTotalValue = maxTicketValue * N; // Maximum total value needed

    // dp[i] represents the minimum number of tickets needed to achieve total value 'i'
    vector<int> dp(maxTotalValue + 1, INT_MAX);

    // Base case: 0 tickets are needed to achieve total value of 0
    dp[0] = 0;

    // Loop through each ride
    for (int i = 0; i < N; ++i) {
        // Update dp array from the perspective of the current ride
        for (int j = A[i]; j <= maxTotalValue; ++j) {
            // Choose the minimum between the current number of tickets required
            // and the number of tickets required to reach (j - A[i]) + 1 ticket for the current ride
            dp[j] = min(dp[j], dp[j - A[i]] + 1);
        }
    }

    // Return the minimum number of tickets required to achieve the maximum possible value
    return dp[maxTotalValue];
}

int main() {
    int N;
    cout << "Enter the number of rides: ";
    cin >> N;

    vector<int> A(N);
    cout << "Enter the total value of tickets required for each ride: ";
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int minTicketsRequired = minTickets(A, N);
    cout << "Minimum number of tickets required: " << minTicketsRequired << endl;

    return 0;
}
