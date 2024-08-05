auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return true;
};

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0, tens=0;

        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5) five++;
            else if(bills[i]==10){
                tens++;
                if(five>0)  five--;
                else return false;
            }
            else{
                if(tens>0 && five>0){
                    tens--; five--;
                }
                else if(five>2) five -= 3;
                else return false;
            }
        }

        return true;
    }
};