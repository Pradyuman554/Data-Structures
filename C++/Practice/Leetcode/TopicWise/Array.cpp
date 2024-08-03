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
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> slidwind(vector<int> vec){

// }

// int main()
// {



//   return 0;
// }




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





//Find the Duplicate Number
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int dup=-1;
//         for(int i=0;i<nums.size();i++)
//         {
//             int index = abs(nums[i]);
//             if(nums[index]<0)
//             {
//                 dup=index;
//             }
//             else nums[index]*=-1;

//         }
//         return dup;
//     }
// };





//Repeat and Missing number array
// vector<int> Solution::repeatedNumber(const vector<int> &A){
//     vector<int> result;

//     sort(begin(A), end(A));

//     int repeated = -1;
//     int missing = -1;

//     for (int i = 1; i < A.size(); ++i) {
//         if (A[i] == A[i - 1]) {
//             repeated = A[i];
//         } else if (A[i] != A[i - 1] + 1) {
//             missing = A[i - 1] + 1;
//         }

//         // Break the loop early if both values are found
//         if (repeated != -1 && missing != -1) {
//             break;
//         }
//     }

//     // Handle edge case for the last element
//     if (A.back() == A.size()) {
//         missing = A.back() + 1;
//     }

//     result.push_back(repeated);
//     result.push_back(missing);

//     return result;
// }





//Count Inversions
// long long merge(vector<int> arr, int left, int mid, int right){
//     int i = left, j = mid, k = 0;
//     long long invCount = 0;
//     int temp[(right - left + 1)];

//     while ((i < mid) && (j <= right)){
//         if (arr[i] <= arr[j]){
//             temp[k] = arr[i];
//             ++k;
//             ++i;
//         }
//         else{
//             temp[k] = arr[j];
//             invCount += (mid - i);
//             ++k;
//             ++j;
//         }
//     }

//     while (i < mid){
//         temp[k] = arr[i];
//         ++k;
//         ++i;
//     }

//     while (j <= right){
//         temp[k] = arr[j];
//         ++k;
//         ++j;
//     }

//     for (i = left, k = 0; i <= right; i++, k++){
//         arr[i] = temp[k];
//     }

//     return invCount;
// }

// // Function to split two subarrays and then merge them and count inversions.
// long long mergeSort(vector<int> arr, int left, int right){
//     long long invCount = 0;

//     if (right > left){
//         int mid = (right + left) / 2;

//         /* 
//             Divide the array into two parts
//             total inversion count will be the
//             sum of 'INVCOUNT' of left part +
//             'INVCOUNT' of right part + 'INVCOUNT' of
//             their combined part.
//         */
//         invCount = mergeSort(arr, left, mid);
//         invCount += mergeSort(arr, mid + 1, right);

//         // Merge both parts and count their combined inversions.
//         invCount += merge(arr, left, mid + 1, right);
//     }
//     return invCount;
// }

// long long getInversions(vector<int> arr, int n){
//     return mergeSort(arr, 0, n - 1);
// }





//Search a 2D matrix: Mid Optimised
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         if (n == 0) {
//             return false;
//         }
//         int m = matrix[0].size();
//         int row = 0;
//         int col = m - 1;

//         while (row < n && col >= 0) {
//             if (matrix[row][col] == target) {
//                 return true;
//             } else if (matrix[row][col] > target) {
//                 col--;
//             } else {
//                 row++;
//             }
//         }

//         return false;
//     }
// };





//Search a 2D matrix: Full Binary Search
// class Solution {
// public:
    

//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int n=matrix.size();
//     int m=matrix[0].size();
//     int row=0;
//     int col=m-1;
//     if(target>matrix[n-1][m-1]) return false;

//     for(auto it=begin(matrix);it!=end(matrix);it++){
//         int l=0, r=m-1;
//         auto cell = *it;

//         while(l<=r){
//             int mid = l+(r-l)/2;
//             if(cell[mid]==target)    return true;
//             else if(cell[mid]>target)    r=mid-1;
//             else l=mid+1;
//         }
//     }

//     return false;
//     }
// };





//Majority Element
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0;
//         int element = nums[0];
//         for(int i = 0; i < nums.size(); i++){
//             if(count == 0){
//                 element = nums[i];
//             }
//             if(nums[i] == element){
//                 count++;
//             }else{
//                 count--;
//             }
//         }
//         return element;
//     }
// };





//Majority Element 2
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans;
//         map<int,int> mp;

//         for (int i = 0; i < nums.size(); i++) {
//             mp[nums[i]]++;
//         }
//         int max=nums.size()/3;
//         for(auto x:mp){
//             if(x.second>max)
//             ans.push_back(x.first);
//         }
//         return ans;
//     }
// };





//Merge Sort using Vectors
// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }

// int main()
// {
//     vector<int> a = {4, 1, 2, 3, 1};
//     int n = 5;
//     mergeSort(a, 0, a.size()-1);
//     for(auto i:a)   cout<<i;
//     return 0;
// }





//Count of Reverse Pairs, Mid Optimization
// class Solution {
// public:

// void merge(vector<int>& nums,int low,int mid,int high){
//     vector<int> merged;
//     int left=low;
//     int right= mid+1;

//     while(left<=mid && right<=high){
//         if(nums[left]<=nums[right]){   //Whoever is bigger in the divided array
//         merged.push_back(nums[left]);  //Fill the smaller element in the final array
//         left++;
//         }
//         else {
//         merged.push_back(nums[right]);
//         right++;
//         }
//     }

//     while(left<=mid){
//         merged.push_back(nums[left]);
//         left++;
//     }
//     while(right<=high){
//         merged.push_back(nums[right]);
//         right++;
//     }

//     for(int i=low;i<=high;i++)  nums[i]=merged[i-low];
// }

// int countPairs(vector<int>& nums, int low, int mid, int high){
//     int right=mid+1;
//     int count=0;
//     for(int i=low;i<=mid;i++){
//         while( right<=high && nums[i]>2LL*nums[right]) right++;
//         count+= (right-(mid + 1));
//     }
//     return count;
// }

// int mergeSort(vector<int>& nums,int low,int high){
//     int count=0;
//     if(low<high){
//         int mid = low + (high-low)/2;
//         count+=mergeSort(nums,low,mid);
//         count+=mergeSort(nums,mid+1,high);
//         count+=countPairs(nums,low,mid,high);
//         merge(nums,low,mid,high);     //Merging the divided arrays
//     }
//     return count;
// }

//     int reversePairs(vector<int>& nums) {
//         return mergeSort(nums, 0, nums.size() - 1);
//     }
// };




// //Count of inverse Pairs, Best Optimization
// class Solution {
// int rec(vector<int>&  arr, int l, int r) {
//     if(l == r)  return 0;

//     int m = l+(r-l)/2;
//     int ans = rec(arr, l, m) + rec(arr, m+1, r);

//     int i=l, j=m+1;
//     int n = 0;
//     while(i<=m){
//         while(j<=r and arr[i] > (long)2 * arr[j]){
//             n++;
//             j++;
//         }
//         ans += n;
//         i++;
//     }

//     int size = r-l+1, tmp[size];
//     merge(arr.begin()+l, arr.begin()+m+1, arr.begin()+m+1, arr.begin()+r+1, tmp);
//     copy(tmp, tmp+size, arr.begin()+l);
//     return ans;
// }
// public:

//     int reversePairs(vector<int>& nums) {
//         return rec(nums, 0, nums.size()-1);
//     }
// };




//Unique Paths: Combination Approach
// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         int N = n+m-2;
//         int r=m-1;
//         double res=1;

//         for(int i=1;i<=r;i++)   res=res*(N-r+i)/i;
//         return (int)res;
//     }
// };

//Unique Paths: Dynamic Programming
// class Solution {
// public:
//     int countPaths(int i, int j, int n, int m, vector<vector<int>>&dp){
//         if(i==(n-1) && j==(m-1))    return 1;
//         if(i>=n || j>=m)    return 0;
//         if(dp[i][j]!=-1)    return dp[i][j];
//         else return dp[i][j]=countPaths(i+1,j,n,m,dp)+countPaths(i,j+1,n,m,dp);
//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
//         int num=countPaths(0,0,m,n,dp);
        // if(m==1 && n==1)    return 1;
        // return dp[0][0];
//     }
// };





//Two Sum: Better Approach (Maps)
// class Solution{
//     public:
// vector<int> twoSum (vector<int>& nums, int target) {
//     map<int, int> mp;
//     for(int i=0;i<nums.size();i++){
//         int remainder = target-nums[i];
//         if(mp.count(remainder)) return {mp[remainder], i};
//         else mp[nums[i]]=i;
//     }
// return{};
// }
// };

//Best Approach: 2 Pointers
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int i=0, j=numbers.size()-1;
//         while(i<j){
//             int sum = numbers[i]+numbers[j];
//             if(sum==target)   return {i+1,j+1};
//             else if(sum>target) j--;
//             else i++;
//         }
//     return {};
//     }
// };



//3Sum: Brute Force using sets
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//     set<vector<int>> ans;
//     int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int a=j+1;a<n;a++){
//                         if(nums[i]+nums[j]+nums[a]==0){
//                             vector<int> st={nums[i],nums[j],nums[a]};
//                             sort(st.begin(),st.end());
//                             ans.insert(st);
//                         }
//                 }
//             }
//         }
//     vector<vector<int>> arr(ans.begin(), ans.end());
//     return arr;
//     }
// };

//3Sum: Hashmap using sets
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//     int n=nums.size();
//     set<vector<int>> st; 
//         for(int i=0;i<n;i++){
//             set<int> mp;
//             for(int j=i+1;j<n;j++){
//                 int third = - (nums[i]+nums[j]);
//                 if(mp.count(third)){
//                     vector<int> curr{nums[i],nums[j],third};
//                     sort(curr.begin(),curr.end());
//                     st.insert(curr);
//                 }
//                 mp.insert(nums[j]);
//             }
//         }
//     vector<vector<int>> arr(st.begin(),st.end());
//     return arr;
//     }
// };

//3Sum: 2 Pointers
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//     set<vector<int>> st;
//         for(int i=0;i<n-2;i++){
//             if(i>0 && nums[i]==nums[i-1])   continue;
//                 int a=i+1,b=n-1;
//                 while(a<b){
//                 int sum = nums[a]+nums[b]+nums[i];
//                     if(sum==0){
//                         vector<int> as = { nums[a],nums[b],nums[i] };
//                         sort(as.begin(),as.end());
//                         st.insert(as);
//                         a++; b--;
//                         while(a<b && nums[a]==nums[a-1])    a++;
//                         while(a<b && nums[b]==nums[b+1])    b--;
//                     }
//                     else if(sum>0)  b--;
//                     else a++;
//                 }
//         }

//     vector<vector<int>> arr(st.begin(),st.end());
//     return arr;
//     }
// };






//4Sum: 2 Pointers nested inside 2 for loops
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     vector<vector<int>> vec;
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i-1]==nums[i])   continue;
//             for(int j=i+1;j<n;j++){
//                 if (j != i + 1 && nums[j] == nums[j - 1]) continue;
//                 int k=j+1, m=n-1;
//                 while(k<m){
//                 long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[m];
//                         if(sum==target){
//                             vec.push_back({nums[i],nums[j],nums[k],nums[m]});
//                             k++;m--;
//                             while(k<m && nums[k-1]==nums[k])    k++;
//                             while(k<m && nums[m+1]==nums[m])    m--;
//                         }
//                         else if(sum>target) m--;
//                         else k++;
//                     }
//             }
//         }
//     return vec;
//     }
// };

//4Sum: Using hashset
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     set<vector<int>> ans;
//     map<int,int> mp;
//     int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                     set<long long> hashset;
//                     for(int k=j+1;k<n;k++){
//                         long long sum = nums[i] + nums[j];
//                         sum+=nums[k];
//                         long long fourth = target - sum;
//                         if(hashset.count(fourth)){
//                             vector<int> arr = {nums[i],nums[j],nums[k],(int)fourth};
//                             sort(arr.begin(),arr.end());
//                             ans.insert(arr);
//                         }
//                         hashset.insert(nums[k]);
//                     } 
                        
//             }
//         }

//     vector<vector<int>> vec(ans.begin(), ans.end());
//     return vec;
//     }
// };





//Longest Consecutive Sequence: Vector answer approach
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0)  return 0;
//         sort(nums.begin(),nums.end());
//         int len=1;
//         vector<int> arr;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1])  continue;
//             else if(nums[i+1]==nums[i]+1)    len++;
//             else {
//                 arr.push_back(len);
//                 len=1;
//             };
//         }
//         arr.push_back(len);
//         sort(begin(arr),end(arr));
//         if(arr.size()==0)   return 0;
//         return arr[arr.size()-1];
//     }
// };


//Longest Consecutive Sequence: Max method approach
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0)  return 0;
//         sort(nums.begin(),nums.end());
//         int len=1, len1=0;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1])  continue;
//             else if(nums[i+1]==nums[i]+1)    len++;
//             else {
//                 len1 = max(len, len1);
//                 len=1;
//             };
//         }
//         len1 = max(len, len1);
//         return len1;
//     }
// };


//Longest Consecutive Sequence: x=x-1
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         if(n==0)    return 0;

//         int len=1;
//         set<int> st;

//         for(int i=0;i<n;i++){
//             st.insert(nums[i]);}

//         for(auto it: st){   
//             if(!st.count(it-1)){    //If it is the starting element
//                 int count=1;        //Reset count=1
//                 int x = it;         //Current element=it
//                 while(st.count(x+1)){   //If the following elements to current are present
//                     x=x+1;
//                     count=count+1;}

//                 len=max(len,count);
//             }}
//         return len;
//     }
// };





//Longest Subarray with sum=k
// class Solution{
//     public:
//     int maxLen(vector<int>& A, int n)
//     {
//         map<long long, int> preSumMap;
//         long long sum=0;
//         int maxlen=0;
//         for(int i=0;i<A.size();i++){
//             sum+=A[i];  //Prefix
//             if(sum==n)  maxlen = max(maxlen,i+1);
//             long long rem = sum-n;    //Checking if something to match this sum is there, that if sum is this, that there should a value in the hashmap (which when subtracted current element would bear the sum=k, so eg. k=3, sum upto 6th element is 8 and sum upto 8th element is 11, then 11-8=3, so our size of subarray=8-6=2)
//             if(preSumMap.count(rem)){
//                 maxlen = max(maxlen, i-max[len]);
//             }
//             if(!preSumMap.count(sum)){               //If there are duplicate values in hashset, the answer would be errored
//                 preSumMap[sum] = i;
//             }
//         }
//     return maxlen;
//     }
// };

//Longest Subarray with sum=0
// class Solution{
//     public:
//     int maxLen(vector<int>& A, int n)
//     {
//         map<long long, int> preSumMap;
//         long long sum=0;
//         int maxlen=0;
//         for(int i=0;i<n;i++){
//             sum+=A[i];  //Prefix
//             if(sum==0)  maxlen=i+1;
//             if (preSumMap.find(sum) != preSumMap.end()) { maxlen = max(maxlen, i-preSumMap[sum]); }
//             else preSumMap[sum]=i;
//         }        
//     return maxlen;
//     }
// };




//Subarray sum equals k: Find number of subarrays whose sum=k
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int sum=0,count=0;
//         int n = nums.size();
//         map<int, int> mp;

//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//             if(sum==k)  count++;
//             int rem = sum-k;
//             if(mp.count(rem))   count+=mp[rem];
//             mp[sum]++;
//         }
//     return count;
//     }
// };




//Subarray XOR equals B: Find number of subarrays whose XOR is equal to B
// int Solution::solve(vector<int> &A, int B) {
//     int n=A.size();
//     map<int, int> mp;
//     int count=0,sum=0;
//     for(int i=0;i<n;i++){
//         sum^=A[i];
//         if(sum==B)  count++;
//         int rem = sum ^ B;
//         if(mp.count(rem))   count+=mp[rem];
//         mp[sum]++;
//     }
//     return count;
// }




//Length of longest substring with no repeating characters
// class Solution {
// public:
//         int lengthOfLongestSubstring(string s) {
//         int n = s.length();
//         vector<char> as;
//         int maxlen = 0, len=1;
//         map<int, int> mp;
//         for(int r=0, l=0;r<n;r++){
//             if(mp.count(s[r]))  l=max(mp[s[r]]+1,l);         //Skipping upto that point, where there are no repeating characters
//             mp[s[r]] = r;    //Inputting the new START value of the non repeating substring, and just telling the this element is present at this index (we need values for checking the hashmap) 
//             maxlen = max(maxlen, r-l+1);
//         }
//     return maxlen;
//     }
// };




//Trapping Rain Water
// class Solution {
// public:
//     int trap(vector<int>& h) {
//         int l=0,r=h.size()-1,lmax=INT_MIN,rmax=INT_MIN,ans=0;
//         while(l<r){
//             lmax=max(lmax,h[l]);
//             rmax=max(rmax,h[r]);
//             ans+=(rmax>lmax)?lmax-h[l++]:rmax-h[r--];
//         }
//         return ans;
//     }
// };





//Comparator
// #include<bits/stdc++.h>
// using namespace std;

// bool comp(int a, int b){
//     if(a<b) return false;   //False means include b
//     else return true;       //True means include a
// }

// int main()
// {
//     vector<int> a{1,3,2,5,4};
//     sort(a.begin(), a.end(), comp);
//     for(int i: a)   cout<<i;
    
//     return 0;
// }