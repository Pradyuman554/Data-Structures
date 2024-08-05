class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;

        int l = 0, r = 0, jumps = 1;
        int farthest = 0;
        int n = nums.size();

        // Loop until the right pointer reaches the end of the array
        while (r <= n - 1){
            // Traverse the current range [l, r] to find the farthest point we can reach
            for (int i = l; i <= r; i++) {
                farthest = max(i + nums[i], farthest);
                // If the farthest point is beyond or at the end of the array, return the jumps
                if (farthest >= n - 1)  return jumps;
            }
            // Move to the next range
            l = r + 1;
            r = farthest;
            jumps++;
        }

        return jumps;
    }
};