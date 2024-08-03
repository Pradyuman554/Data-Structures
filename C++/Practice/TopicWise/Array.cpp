//Set Matrix Zero
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int cols = matrix[0].size();

//         bool firstRowZero = false;
//         bool firstColZero = false;

//         // Check if the first row and column need to be zeroed
//         for (int i = 0; i < rows; ++i) {
//             if (matrix[i][0] == 0) {
//                 firstColZero = true;
//                 break;
//             }
//         }

//         for (int j = 0; j < cols; ++j) {
//             if (matrix[0][j] == 0) {
//                 firstRowZero = true;
//                 break;
//             }
//         }

//         // Mark zeros on first row and column
//         for (int i = 1; i < rows; ++i) {
//             for (int j = 1; j < cols; ++j) {
//                 if (matrix[i][j] == 0) {
//                     matrix[i][0] = 0;
//                     matrix[0][j] = 0;
//                 }
//             }
//         }

//         // Set elements to zero based on marks in first row and column
//         for (int i = 1; i < rows; ++i) {
//             for (int j = 1; j < cols; ++j) {
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }

//         // Set first row and column to zero if needed
//         if (firstRowZero) {
//             for (int j = 0; j < cols; ++j) {
//                 matrix[0][j] = 0;
//             }
//         }

//         if (firstColZero) {
//             for (int i = 0; i < rows; ++i) {
//                 matrix[i][0] = 0;
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;

//     vector<vector<int>> arr{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     obj.setZeroes(arr);

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }





//Pascal's Traingle
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> arr;
//     vector<int> vec;
//         if(numRows==0)  return {};
//         else if(numRows==1)   return {{1}};
//         else{
// vec.push_back(1);
// arr.push_back(vec); //Making the first row
// vec.clear();
// //Lets make the 1D vector and add it to the 2D vector at the last, for n-1 number of times (because numRows=1, is already built)
//         for(int row=1;row<numRows;row++){
//             vec.push_back(1);
            
//             for(int i=1;i<row;i++){
//                 int a =0;
//                 a = arr[row-1][i] + arr[row-1][i-1];
//                 vec.push_back(a);
//             }

//             vec.push_back(1);
//             arr.push_back(vec);
//             vec.clear();
//         }    
//         }
//     return arr;
//     }
// };

// int main()
// {
//     Solution obj;
//     int n=5;
//     vector<vector<int>> arr = obj.generate(n);
//     for(int i=0;i<5;i++){
//         for(int j:arr[i]){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }




//Next Permutation
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//  public:
//   void nextPermutation(vector<int>& nums) {
//     const int n = nums.size();

//     // From back to front, find the first num < nums[i + 1]
//     int i;
//     for (i = n - 2; i >= 0; --i) if (nums[i] < nums[i + 1]) break;

//     // From back to front, find the first num > nums[i], swap it with nums[i]
//     if (i >= 0)
//       for (int j = n - 1; j > i; --j)
//         if (nums[j] > nums[i]) {
//           swap(nums[i], nums[j]);
//           break;
//         }

//     // Reverse nums[i + 1..n - 1]
//     reverse(nums, i + 1, n - 1);
//   }

//  private:
//   void reverse(vector<int>& nums, int l, int r) {
//     while (l < r)   swap(nums[l++], nums[r--]);
//   }
// };


// int main()
// {
//   vector<int> a{1,2,3};
//   Solution obj;
//   obj.nextPermutation(a);
//   for(int i:a)  cout<<i;
    
//     return 0;
// }




//Maximum Subarray
#include<bits/stdc++.h>
using namespace std;

vector<int> slidwind(vector<int> vec){

}

int main()
{
    
  
  
  return 0;
}




//Sliding Windows, find sum of all subarrays of a given array
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> slidwind(vector<int> vec, int size){
//     int sum = vec[0]+vec[1]+vec[2];
//     vector<int> nums;
//     nums.emplace_back(sum);

//     int i=2;
//     while(i<vec.size()-1){
//       sum += -vec[i-2] + vec[i+1] ;
//       nums.emplace_back(sum);
//       i++;
//     }
//     return nums;
// }

// int main()
// {
//   vector<int> arr{1,2,3,4,5};
//   vector<int> nums=slidwind(arr,3);
//   for(int i:nums) cout<<i<<" ";
//   return 0;
// }




//Sliding Windows, minimum index of subarray whose sum is greater than x
// #include <iostream>
// using namespace std;

// int smallestSubWithSum(int arr[], int n, int x)
// {
// 	int curr_sum = 0, min_len = n + 1;

// 	int start = 0, end = 0;
// 	while (end < n) {
		
// 		while (curr_sum <= x && end < n)
// 			curr_sum += arr[end++];

// 		while (curr_sum > x && start < n) {
// 			if (end - start < min_len)
// 				min_len = end - start;

// 			curr_sum -= arr[start++];
// 		}
// 	}
// 	return min_len;
// }

// int main()
// {
// 	int arr1[] = { 1, 4, 45, 6, 10, 19 };
// 	int x = 51;
// 	int n1 = sizeof(arr1) / sizeof(arr1[0]);
// 	int res1 = smallestSubWithSum(arr1, n1, x);
// 	(res1 == n1 + 1) ? cout << "Not possible\n"
// 					: cout << res1 << endl;
// 	return 0;
// }





//Best time to buy and sell stock
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         if (prices.empty()) {
//             return 0;
//         }

//         int maxProf = 0;
//         int minPrice = prices[0];

//         for (int i = 1; i < prices.size(); ++i) {
//             minPrice = min(minPrice, prices[i]);
//             maxProf = max(maxProf, prices[i] - minPrice);
//         }

//         return maxProf;
//     }
// };

// int main()
// {
//     vector<int> nums{1,7,6,5,4};
//     Solution obj;
//     cout<<obj.maxProfit(nums);
//     return 0;
// }





//Rotate Image
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void transpose(vector<vector<int>>& matrix){
//         for(int i=0;i<matrix.size();i++){
//             for(int j=i+1;j<matrix.size();j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//     }

//     void reverse(vector<vector<int>>& matrix){
//         int n = matrix.size();
//         for(int j=0;j<=n/2-1;j++){
//             for(int i=0;i<n;i++){
//                 swap(matrix[i][j],matrix[i][n-j-1]);
//             }
//         }
//     }

//     void rotate(vector<vector<int>>& matrix) {
//         transpose(matrix);
//         reverse(matrix);
        
//         for(vector<int> num : matrix){
//         for(int i: num) cout<<i<<" ";
//         cout<<endl;
//     }        
//     }
// };

// int main()
// {
//     Solution obj;
//     vector<vector<int>> nums {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//         };
//     obj.rotate(nums);    
//     return 0;
// }




//Merge Intervals
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
//         return nums;
//     }
// };

// int main()
// {
//     Solution obj;

//     vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
//     vector<vector<int>> sol = obj.merge(nums);
//     for(vector<int> num : nums){
//         for(int i:num)  cout<<i<<" ";
//         cout<<endl;
//     }
    
//     return 0;
// }
