class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0)  return;
        int n = nums.size();
        k%=n;
        reverse(nums.begin(), nums.begin() + (n-k) );
        reverse(nums.begin() + (n-k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};