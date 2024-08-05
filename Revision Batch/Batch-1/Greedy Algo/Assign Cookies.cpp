auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return true;
};

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0) return 0;
        
        sort(g.begin(), g.end());   sort(s.begin(), s.end());

        int cookie = s.size()-1, ans=0;
        for(int i=g.size()-1; i>=0; i--){
            if(g[i]<=s[cookie]){
                ans++;
                if(cookie-1>=0) cookie--;
                else break;
            }
        }

        return ans;
    }
};