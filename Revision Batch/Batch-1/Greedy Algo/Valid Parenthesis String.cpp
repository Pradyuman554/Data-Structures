class Solution {
public:
    bool solve(string s, vector<vector<int>>& memo, int index, int opencount){
        if(index==s.length())   return opencount==0;

        if(memo[index][opencount]!=-1)  return memo[index][opencount];

        bool isValid = false;
        if(s[index] == '*'){
            isValid |= solve(s, memo, index+1, opencount+1);
            if(opencount)   isValid |= solve(s, memo, index+1, opencount-1);
            isValid |= solve(s, memo, index+1, opencount);
        }
        else{
            if(s[index] == '(') isValid |= solve(s, memo, index+1, opencount+1);
            else if(opencount)isValid |= solve(s, memo, index+1, opencount-1);
        }

        return memo[index][opencount] = isValid;
    }

    bool checkValidString(string s) {
        vector<vector<int>> memo(s.length()+1, vector<int>(s.length(), -1));
        return solve(s, memo, 0, 0);
    }
};