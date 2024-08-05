auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return true;
};

class Solution {
public:
    bool solve(vector<int>& nums, int index, vector<int>& memo) {
        // Base case: If we reach the end of the list
        if (index >= nums.size()-1) return true;

        // Check memoization table
        if (memo[index] != -1)    return memo[index];

        bool isValid = false;
        // Try all possible jumps from the current position
        for (int i = 1; i <= nums[index]; i++) {
            if(solve(nums, index+i, memo)){
                isValid = true;
                break;
            }
        }

        // Store the result in memoization table and return
        return memo[index] = isValid;
    }

    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;
        vector<int> memo(nums.size(), -1);
        return solve(nums, 0, memo);
    }
};