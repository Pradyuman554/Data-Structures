class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int x1 = newInterval[0], x2 = newInterval[1];
        vector<vector<int>> ans;

        bool flag = false;
        for(int i=0; i<intervals.size(); i++){
            int y1 = intervals[i][0], y2 = intervals[i][1];

            if(!flag){
                if(x2<y1){
                    flag = true;
                    ans.push_back({x1,x2});
                    ans.push_back({y1,y2});
                }
                else if(x1>y2){
                    ans.push_back({y1,y2});
                }
                else{
                    x1 = min(x1, y1);
                    x2 = max(x2, y2);
                }
            }
            else    ans.push_back({y1,y2});
        }

        if(!flag)   ans.push_back({x1, x2});
        return ans;  
    }
};
