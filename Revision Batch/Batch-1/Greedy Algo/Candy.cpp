class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans=0, n=ratings.size();
        vector<int> candies(n,1);
        
        //Pehle agla element Badhayo
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1]) candies[i] = candies[i-1] + 1;
        }

        //Phir pichhla element badhayo
        for(int i=n-2; i>=0; i--){
            if(ratings[i+1]<ratings[i]) candies[i] = max(candies[i+1] + 1, candies[i]);
        }

        for(int i: candies) ans += i;

        return ans;
    }
};