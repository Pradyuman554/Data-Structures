// //N - Queen Problem, No 2 queens attack each other, where n is the length and breadth of chessboard

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    //To check Row
    for(int row=0;row<n;row++){     
        if(arr[row][y] == 1)    return false;
    }

    //To check Diagonals
    int row=x, col=y;

    //Upper left Diagonal
    while(row>=0 && col>=0){
        if(arr[row][col] == 1)    return false;
        row--;
        col--;
    }

    //Upper Right diagonal
    row=x,col=0;        //REDEFINITION TO AVOID CONFUSION
    while(row>=0 && col<n){
        if(arr[row][col]==1)    {return false;}
        row--;
        col++;
    }

    return true;

}

//RECURSIVE FUNCTION:
bool Result(int** arr, int x, int n){       //We won't put int y here because we are not going to traverse through the same row (which would've required a column(y) ).
    if(x>=n)    return true;    //Base condition (if we reach n number of queens, then return true).            
    
    for(int col=0;col<n;col++){     //Here, we included only column because we traverse a whole row at once, which requires traversing through all its columns
    if(isSafe(arr,x,col,n))  {
        arr[x][col] = 1;

//Recursive call
    if(Result(arr,x+1,n))   return true;      //Recursive call to row because we traverse through a WHOLE ROW FIRST and if not return true, then we recursive call for (X+1).
    
    arr[x][col] = 0;     //And if isSafe doesn't work for X AND X+1, then we back track to a MORE PREVIOUS VALUE FROM WHICH WE CAN RESTART.
}
}
    return false;
}

// int main() {
//     int n;
//     cout << "Enter size of chessboard: ";
//     cin >> n;

//     int** arr = new int*[n];
    
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[n];
//         for (int j = 0; j < n; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     if (Result(arr, 0, n)) {
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
    
//     else {
//         cout << "No solution found." << endl;
//         return false;
//     }

//     return 0;
// }

//A different code uses a separate printing function and doesn't include value of N in it. It just adjusted value of array to array[N][N] beforehand (doesn't make any difference).




//Another code prints the board directly from Result function.
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// bool isSafe(int** arr, int x, int y, int n){
//     //To check Row
//     for(int row=0;row<n;row++){     
//         if(arr[row][y] == 1)    return false;
//     }

//     //To check Diagonals
//     int row=x, col=y;

//     //Upper left Diagonal
//     while(row>=0 && col>=0){
//         if(arr[row][col] == 1)    return false;
//         row--;
//         col--;
//     }

//     //Upper Right diagonal
//     row=x,col=y;        //REDEFINITION TO AVOID CONFUSION
//     while(row>=0 && col<n){
//         if(arr[row][col]==1)    {return false;}
//         row--;
//         col++;
//     }

//     return true;

// }

// //RECURSIVE FUNCTION:
// bool Result(int** arr, int x, int n){       //We won't put int y here because we are not going to traverse through the same row (which would've required a column(y) ).
//         if(x>=n){           //Base condition (if we reach n number of queens, then return true).
//           for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//         return true;
//     }
//     // else {
//     //     cout << "No solution found." << endl;
//     //     return false;
//     // }          
    
//     for(int col=0;col<n;col++){     //Here, we included only column because we traverse a whole row at once, which requires traversing through all its columns
//     if(isSafe(arr,x,col,n))  {
//         arr[x][col] = 1;

// //Recursive call
//     if(Result(arr,x+1,n))   {return true;}      //Recursive call to row because we traverse through a WHOLE ROW FIRST and if not return true, then we recursive call for (X+1).
    
//     arr[x][col] = 0;     //And if isSafe doesn't work for X AND X+1, then we back track to a MORE PREVIOUS VALUE FROM WHICH WE CAN RESTART.
// }
// }
//     return false;
// }

// int main() {
//     int n;
//     cout << "Enter size of chessboard: ";
//     cin >> n;

//     int** arr = new int*[n];
    
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[n];
//         for (int j = 0; j < n; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     Result(arr,0,n);

//     return 0;
// }


//Solving Soduku
//In a naive approach, the algorithm first fills the grid and then checks if the combination is valid or not. This can be highly inefficient.

// #include <iostream>
 
// using namespace std;
 
// // N is the size of the 2D matrix   N*N
// #define N 9
 
// /* A utility function to print grid */
// void print(int arr[N][N])
// {
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
// }

// // Checks whether it will be
// // legal to assign num to the
// // given row, col
// bool isSafe(int grid[N][N], int row,
//                        int col, int num)
// {
     
//     // Check if we find the same num
//     // in the similar row , we
//     // return false
//     for (int x = 0; x <= 8; x++)
//         if (grid[row][x] == num)
//             return false;
            
//     // Check if we find the same num in
//     // the similar column , we
//     // return false
//     for (int x = 0; x <= 8; x++)
//         if (grid[x][col] == num)
//             return false;
 
//     // Check if we find the same num in
//     // the particular 3*3 matrix,
//     // we return false
//     int startRow = row - row % 3,
//             startCol = col - col % 3;
   
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             if (grid[i + startRow][j + startCol] == num)    return false;
 
//     return true;
// }
 
// /* Takes a partially filled-in grid and attempts
// to assign values to all unassigned locations in
// such a way to meet the requirements for
// Sudoku solution (non-duplication across rows,
// columns, and boxes) */
// bool solveSudoku(int grid[N][N], int row, int col)
// {
//     // Check if we have reached the 8th
//     // row and 9th column (0
//     // indexed matrix) , we are
//     // returning true to avoid
//     // further backtracking
//     if (row == N && col == N)
//         return true;
 
//     // Check if column value  becomes 9 ,
//     // we move to next row and
//     //  column start from 0
//     if (col == N) {
//         row++;
//         col = 0;
//     }
   
//     // Check if the current position of
//     // the grid already contains
//     // value >0, we iterate for next column
//     if (grid[row][col] > 0)
//         return solveSudoku(grid, row, col + 1);
 
//     for (int num = 1; num <= N; num++)
//     {
         
//         // Check if it is safe to place
//         // the num (1-9)  in the
//         // given row ,col  ->we
//         // move to next column
//         if (isSafe(grid, row, col, num))
//         {
             
//            /* Assigning the num in
//               the current (row,col)
//               position of the grid
//               and assuming our assigned
//               num in the position
//               is correct     */
//             grid[row][col] = num;
           
//             //  Checking for next possibility with next
//             //  column
//             if (solveSudoku(grid, row, col + 1))
//                 return true;
//         }
       
//         // Removing the assigned num ,
//         // since our assumption
//         // was wrong , and we go for
//         // next assumption with
//         // diff num value
//         grid[row][col] = 0;
//     }
//     return false;
// }
 
// // Driver Code
// int main()
// {
//     // 0 means unassigned cells
//     int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
//                        { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
//                        { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
//                        { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
//                        { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
//                        { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
//                        { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
//                        { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
//                        { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
 
//     if (solveSudoku(grid, 0, 0))
//         print(grid);
//     else
//         cout << "no solution  exists " << endl;
 
//     return 0;
//     This is code is contributed by Pradeep Mondal P
// }


//Factorial Practice
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int fact(int n){
//     if(n==1)    return 1;
//     return n*fact(n-1);
// }

// int main()
// {   cout << fact(5);
    
//     return 0;
// }

//Print Fibonacci Series
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int fibo(int n){
//     int i=2;
//     if(i==0)    return 0;
//     if(i==1)    return 1;
//     if(i==2)    return 2;
    
//     while (i>=n){
//         i = fibo(i-1) + fibo(i-2);}
//     cout<<i<<" ";
// }

// int main()
// {   fibo(10);
    
//     return 0;
// }