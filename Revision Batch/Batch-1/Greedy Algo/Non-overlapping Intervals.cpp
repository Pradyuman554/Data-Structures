class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int end = intervals[0][1];
        int ans = 0;

        for (int i = 1; i < intervals.size(); i++) {
            int newStart = intervals[i][0], newEnd = intervals[i][1];
            if (newStart < end) {
                ans++;
                end = min(end, newEnd);
            } else {
                end = newEnd;
            }
        }
        return ans;
    }
};


/*
9. **425. Non-overlapping Intervals:** Sort, if(newStart<end) meaning overlap, **then ans++ and end = min(end, newEnd)** else end = new End (eg. if newStart==end or newStart>end because in both conditions we are not going to delete the interval)
*/