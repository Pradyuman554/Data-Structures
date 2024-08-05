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

/*
2. **860. Lemonade Change**
    1. **five=0, tens=0**
        1. Agar 5 hai to **five++**
        2. Agar 10 hai **to agar five de sakte hai (if five>0)** then dedo and tens++ kardo, **else return false**
        3. Agar 20 hai to agar **1 ten** or **1 five** de sakte hai to do, ya agar **3 fives** de sakte hai to do **nahi to return false**
    2. **return true**

*/