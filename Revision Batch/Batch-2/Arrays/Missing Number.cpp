class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int i,ans1=0,ans2=0;
    for(i=0;i<nums.size();i++){
        ans1^=nums[i];
        ans2^=i;
    }
    ans2^=i; //In case the missing element is at the last
    return ans1^ans2;
    }
};