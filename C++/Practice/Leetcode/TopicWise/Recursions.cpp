//Subset Sums: Optimal Approach using Recursions
// class Solution
// {
// public:
//     void func(vector<int>& arr, int N, int ind, vector<int>& sumSubset, int sum){
//         if(ind==N){
//             sumSubset.push_back(sum);
//             return;
//         }
//         func(arr,N,ind+1,sumSubset,sum);
//         func(arr,N,ind+1,sumSubset,sum+arr[ind]);
//     }

//     vector<int> subsetSums(vector<int> arr, int n)
//     {
//         vector<int> nums;
//         func(arr,n,0,nums,0);
//         sort(begin(nums),end(nums));
//         return nums;
//     }
// };





//Power Sets
// class Solution {
// public:

//     void fun(vector<int>& nums, int ind, set<vector<int>>& res, vector<int> ds){
//         if(ind==nums.size()){
//             sort(begin(ds), end(ds));
//             res.insert(ds);
//             return;
//         }

//         ds.push_back(nums[ind]);
//         fun(nums,ind+1,res,ds);
//         ds.pop_back();
//         fun(nums,ind+1,res,ds);
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums){
//         vector<vector<int>> ans;
//         set<vector<int>> res;
//         vector<int> ds;
//         fun(nums,0,res,ds);
//         for(auto it=begin(res);it!=end(res);it++){
//             ans.push_back(*it);
//         }
//         return ans;
//     }
// };





//Combination Sum
// class Solution {
// public:

//     void findcombination(vector<vector<int>>& ans, int target, vector<int> candidates, vector<int>& ds, int ind){
//         if(ind==candidates.size()){
//             if(target==0)   ans.push_back(ds);
//             return;    //Just backtrack after the max size is reached, irrespective of whether we hit the target or not
//         }

//         if(candidates[ind]<=target){
//             ds.push_back(candidates[ind]);
//             findcombination(ans,target-candidates[ind],candidates,ds,ind);     //In case we are considering current, although we need not increment the index
//             ds.pop_back();  //For backtracking after we are finished with our current recursion call, if we do not backtrack we wont be able to check the right side which is when we dont consider the current element
//         }
//         findcombination(ans, target, candidates, ds, ind+1);
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> ds;
//         findcombination(ans, target, candidates, ds, 0);
//         return ans;        
//     }
// };





//Combination Sum 2: Duplicacy not allowed
// class Solution {
// public:

//     void findcombinations(vector<int>& candidates, int target, int ind, vector<vector<int>>& ans, vector<int>& ds){
//             if(target==0){
//                 ans.push_back(ds);
//                 return;
//             }
        
        
//         for(int i=ind;i<candidates.size();i++){
//             if(i>ind && candidates[i]==candidates[i-1]) continue;   //Because there would be no point in checking the same element again, eg. {1,1,1,2,3}, here 1 is there 3 times so there can be duplicacy. Hence we skip the candidates, who are equal to their previous neighbour
//             if(candidates[i]>target)  break;
//             ds.push_back(candidates[i]);
//             findcombinations(candidates, target-candidates[i], i+1, ans, ds);
//             ds.pop_back();
//         }
//     }

//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(begin(candidates), end(candidates));
//         vector<int> ds;
//         vector<vector<int>> ans;
//         findcombinations(candidates, target, 0, ans, ds);
//         return ans;
//     }
// };





//Palindrome Substring
// class Solution {
// public:
//     bool isPalindrome(string s, int start, int end){
//         while(start<end){
//             if(s[start]!=s[end])    return false;
//             start++;end--;
//         }
//         return true;
//     }
    
//     void findcombinations(string s, vector<vector<string>>& ans, vector<string>& ds, int ind){
//             if(ind == s.length()) {
//                 ans.push_back(ds);
//                 return;
//             }

//             for(int i=ind; i<s.length();i++){            
//                 if(isPalindrome(s,ind,i)){
//                     string a = s.substr(ind, i-ind+1);
//                     ds.push_back(a);
//                     findcombinations(s, ans, ds, i+1);
//                     ds.pop_back();
//                 }
//             }
//     }

//     vector<vector<string>> partition(string s) {
//         vector<vector<string>> ans;
//         vector<string> ds;
//         findcombinations(s, ans, ds, 0);
//         return ans;
//     }
// };





//Permutation Sequence: Recursion
// class Solution{
//     public:
//         void permutationHelper(string& s, int index, vector<string>& res){
//             if(ind==s.size()){
//                 res.push_back(s);   //Means if we reached the end of recursion tree, that means we found our permutation, then we store it
//                 return;
//             }

//             for(int i=index; i<s.size();i++){
//                 swap(s[i],s[index]);    
//                 permutationHelper(s,index+1,res);
//                 swap(s[i],s[index]);
//             }
//         }

//         string getPermutation(int n, int k){
//             vector<string> res;
//             string s="";
            
//             for(int i=0;i<res.size();i++){
//                 s.push_back(i+'0'); //Because we are only given n and not a string
//             }
            
//             permutationHelper(s, 0, res);
//             sort(begin(res),end(res));

//             auto it = begin(res) + (k-1);   //To return the appropriate permutation
//             return *it;
//         }
// };


//Permutation Sequence: Optimal NOT RECURSION
// class Solution {
// public:
//     string getPermutation(int n, int k) {
//             string a = "";
//             vector<int> numbers;
//             int fact=1;
           
//             for(int i=1;i<n;i++){
//                fact=fact*i;
//                numbers.push_back(i);
//             }

//             numbers.push_back(n);
//             k--;

//             while(true){
//                 a += to_string(numbers[k/fact]);
//                 numbers.erase(begin(numbers) + k/fact);
//                 if(numbers.size()==0)    break;
//                 k%=fact;
//                 fact=fact/numbers.size();
//             }
//             return a;        
//     }
// };





//Permutations: Hehe
// class Solution {
// public:
//     void getPermutations(vector<int>& nums, int ind, vector<vector<int>>& res){
//         if(ind==nums.size()){
//             res.push_back(nums);
//             return;
//         }

//         for(int i=ind;i<nums.size();i++){
//             swap(nums[i],nums[ind]);
//             getPermutations(nums,ind+1,res);
//             swap(nums[i],nums[ind]);
//         }
//     }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<int> s;
//         vector<vector<int>> res;
//         getPermutations(nums, 0 ,res);
//         return res;
//     }
// };


#include <iostream>

double myPow(double x, int n) {
    if (n == 0) return 1;
    double ans = x;
    int iter = (n >= 0) ? n : (-1 * n);

    if (n >= 0) {
        for (int i = 0; i < n - 1; i++) ans *= x;
    } else {
        for (int i = 0; i <= iter; i++) ans /= x;
    }

    return ans;
}

int main() {
    double x = 2.0;
    int n = 10;
    std::cout << "Result: " << myPow(x, n) << std::endl;
    return 0;
}
