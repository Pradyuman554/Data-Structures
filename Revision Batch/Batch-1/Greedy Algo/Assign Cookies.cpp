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

/*
1. **455. Assign Cookies**
    1. Sort both the arrays
    2. Go in reverse in 1 array. And keep the counter for the other one (means if cookie[1] was used, then **cookie_counter--**. 
    3. Also keep conditions if cookie_counter≥0 else break
    4. **auto init = [] () {**
        1. **ios::sync_with_stdio(false);**
        2. **cin.tie(NULL)**
        3. **cout.tie(NULL)**
        4. **return true;**
        5. **};**
*/