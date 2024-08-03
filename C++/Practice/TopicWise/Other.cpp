// //Write in Binary
// #include<iostream>
// #include<fstream>
// using namespace std;
// class A{
//     public:
//     int j;
// };
// int main()
// {   A obj[50000];
//     int a,i,count=1,c;
//     cout<<"Write the number to be converted to binary: ";
//     cin>>a;
    
// //counting digits
// //     while(a/10>=1){
// //     a = a/10;
// //     count++;
// // cout<<count;
// //}

//    while(a>1){
//     obj[count].j = a%2;
//     a = a/2;
//    count++;
//    }

//   cout<<"1";
//    for(c=--count;c>0;c--){
//     cout<<obj[c].j;
//    }
//     return 0;
// }


// //Binary to Decimal
// #include<iostream>
// #include<fstream>
// #include<math.h>
// using namespace std;
// class A{public:
//     int b;
// };
// int main()
// {   A obj[1000];
//     int a,b,c,i,j=1,count=0,sum=0;
//     cout<<"\nEnter the binary number: ";
//     cin>>a;
    
//     //Finding number of digits
//     count=log10(a);
//     cout<<"\nNo. of digits is:"<<++count<<endl<<endl;

//     //Finding the digits:
//         for(i=1;i<=count;i++){
//            obj[i].b = a%10;
//            a=a/10;
//            }

//     for(i=count;i>0;i--,j++){
//        cout<<"Digit "<<j<<" = "<< obj[i].b<<endl;}
    
//     cout<<"\n";

//     for(j=0,i=1;j<count,i<=count;j++,i++){
//         sum += obj[i].b * pow(2,j);
        
//         cout<<sum<<endl;
//     }

//     return 0;
// }


// //Finding Factorial using Functions

// #include<iostream>
// #include<fstream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int i=1,j,a,b=1,c;

//     cout<<"Enter the number: ";
//     cin>>a;
//     cout<<"The factorial is: ";

//     for(i=2;i<=a;i++){
//         b = b * i;
//     }
//     cout<<b;
    
//     return 0;
// }


//Fibonacci series till n

// #include<iostream>
// #include<fstream>
// #include<cmath>
// using namespace std;
// class A{
//     public:
//     int j=1;
//     };

// int main()
// {   
//     A obj[5000];
//     int i=1,n;
//     cout<<"Please enter the number: ";
//     cin>>n;
//     cout<<"Fibonacci series till n is: ";

//     cout<<"0 1 ";

//     while(obj[i].j<=n){
//         obj[i+1].j = obj[i-1].j + obj[i].j;
//         cout<<obj[i].j<<" ";
//         i++;
//     }
//     return 0;
// }


//Prime numbers till N
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {   
//     int num,start=2,inum,flag,count;
    
//     cout<<"Please enter value of num: ";
//     cin>>num;
    
//     cout<<"All prime numbers till "<<num<<" are: "<<endl;
    
//     while(start<=num){
//     count=2;
//     flag=1;
//     inum=start/2;
//     while(count<=inum){
//     if(start%count==0) {
//     flag=0; 
//     }
//     count++;
//     }    
//     if(flag) 
//     {
//     cout<<start<<"\n";}
//     start++;
//     }
//     return 0;

// }

//Whether continue ends the whole loop or only the block
//Break Definitely breaks the whole loop.

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
// int main()
// {
//     int i=0;
//     int a[5] = {1,2,3,4,5};
//     for(int j=0;j<5;j++){
//     if(a[j]==2){
//     break;
//     }
//     else{
//     i++;
//     }
//     cout<<"For j = "<<j<<", i = "<<i<<endl;
//     }
//     return 0;
// }

//Using erase function for vectors.

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main()
// {
//     int value;
// vector<int> nums = {1,2,3,4,5};

//     for(vector<int>::iterator i = nums.begin(); i<nums.end(); i++){
//         if(nums[i]==2){
//             nums.erase(i);
//         }
//     }

//     for(int i=0; i<nums.size();i++){
//         cout<<nums[i]<<"\t";
//     }

//     cout<<"\n";
    
    
//     return 0;
// }

//11-07-2023

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main()
// {
//     int value;
// vector<int> nums = {1,2,3,4,5};

//     vector<int>::iterator j;
//     int i;

//     j=nums.begin()+2;
//     nums.erase(j);

//     for(j=nums.begin(),i=0;j!=nums.end();j++,i++){
//         cout<<*j;
//     }
    
//     return 0;
// }



//Conclusion: Erase function is used with iterator. 

//    for(int i=0; i<sizeof(nums)/4;i++){    :: sizeof(nums)/4 because 4 is the size of 1 ELEMENT STORED in the array.

//Remove Duplicates from Sorted Array

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     int i;
//     int uc=1;

//     for(i=1;i<nums.size();i++){

//     if (nums[i] != nums[i - 1]) {
//         nums[uc] = nums[i];
//         uc += 1;
//             }
        
//         }
//         return uc;
//     }

// };

// int main()
// {
//     Solution obj;
//     int value,size;
//     vector<int> nums;

//     cout<<"Enter the size of the Vector: ";
//     cin>>size;
//     cout<<"Enter the elements of Vector: ";
   
//     for(int i=0; i<size;i++){
//         cin>>value;
//         nums.push_back(value);
//     }


//     for(int i=0; i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }

//     cout<<"\n";

//     obj.removeDuplicates(nums);
    
//     for(int i=0; i<nums.size();i++){
//         cout<<nums[i]<<"\t";
//     }

//     int k = obj.removeDuplicates(nums);

//     cout<<endl<<k;

//     return 0;
// }

//Printing only unique elements of array

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
 
// void printDistinct(int arr[], int n)

// {
//     // Pick all elements one by one
//     for (int i=0; i<n; i++)
//     {
//         // Check if the picked element is already printed
//         int j;
//         for (j=0; j<i; j++)
//            if (arr[i] == arr[j])
//                break;

//         // If not printed earlier, then print it
//         // if (i == j)
//           cout << arr[i] << " ";
//     }
// }

// // Driver program to test above function
// int main()
// {
//     int arr[] = {6,6,4,4,10,10,120,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printDistinct(arr, n);
//     return 0;
// }

/*
UNDERSTANDING LAYER 1:
6 6 10 10 4 4 	5 9 120

i 1st iteration:
	j 1st iteration:
	if ( 6=6 ) BREAK

i 2nd iteration:
	j 1st iteration
	if ( 6=6 ) BREAK

i 3rd iteration;
	j 1st iteration
	if ( 10!=6 ) ; then check if ( 3!=1 ) OUT OF 1st ITERATION
	
	j 2nd iteration
	if( 10 = 10 ); BREAK

i 4th iteration;  
	j 1st iteration
	if ( 10! = 6); then check if ( 4!=1 ) OUT

UNDERSTANDING LAYER 2:
2 iteration iliye hai kyunki taki ek element har ek se compare kr paye
i==j isliye taki taki duplicate element na print ho sirf same element print ho. For example, if we do not include it, every element will be printed whatsever.
*/

//Using recursions to print the number of occurrences of a and b for (x = a^n + b^n).

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// void powerSum(int X,int N){
//     int c = 0;
// 	int d = floor(pow(X, 1.0 / N));

//     for(int a=0;a<=d;a++){
//         for(int b=0;b<=d;b++){
//             if (X == pow(a,N) + pow(b,N) )  cout<<a<<" "<<b<<" ";
//         }
//     }

// 	// if(c==1)	return 1;
//     // return c/2;
// }

// int main()
// {   powerSum(10,2);
    
//     return 0;
// }


//Sudoku
// #include <iostream>
// #include <vector>

// using namespace std;

// const int N = 9;

// bool isSafe(vector<vector<int>>& board, int row, int col, int num) {
//     for (int i = 0; i < N; i++) {
//         if (board[row][i] == num || board[i][col] == num)
//             return false;
//     }
    
//     int startRow = row - row % 3;
//     int startCol = col - col % 3;
    
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (board[startRow + i][startCol + j] == num)
//                 return false;
//         }
//     }
    
//     return true;
// }

// bool solveSudoku(vector<vector<int>>& board) {
//     for (int row = 0; row < N; row++) {
//         for (int col = 0; col < N; col++) {
//             if (board[row][col] == 0) {
//                 for (int num = 1; num <= 9; num++) {
//                     if (isSafe(board, row, col, num)) {
//                         board[row][col] = num;
//                         if (solveSudoku(board))
//                             return true;
//                         board[row][col] = 0;
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main() {
//     vector<vector<int>> board = {
//         {5, 3, 0, 0, 7, 0, 0, 0, 0},
//         {6, 0, 0, 1, 9, 5, 0, 0, 0},
//         {0, 9, 8, 0, 0, 0, 0, 6, 0},
//         {8, 0, 0, 0, 6, 0, 0, 0, 3},
//         {4, 0, 0, 8, 0, 3, 0, 0, 1},
//         {7, 0, 0, 0, 2, 0, 0, 0, 6},
//         {0, 6, 0, 0, 0, 0, 2, 8, 0},
//         {0, 0, 0, 4, 1, 9, 0, 0, 5},
//         {0, 0, 0, 0, 8, 0, 0, 7, 9}
//     };

//     if (solveSudoku(board)) {
//         cout << "Sudoku solved:\n";
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < N; j++) {
//                 cout << board[i][j] << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         cout << "No solution exists for the given Sudoku.\n";
//     }

//     return 0;
// }


#include<iostream>
#include<fstream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the letters of the word: ";cin>>n;
	char a[n];
	cout<<"Enter the string: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int small=0,big=0;
	for(int i=0;i<n;i++){
		if(a[i]<'a')	big++;
		else	small++;	
	}
	cout<<"The word has "<<small<<" small and "<<big<<" big letters..";
	return 0;
}