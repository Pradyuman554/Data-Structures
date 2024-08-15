class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int sign=1;
        long ans=0;

        while(i<s.length() && s[i]==' ')    i++;    //Empty Initial Area
        
        if(s[i]=='-'){  //If the FIRST CHARACTER AFTER EMPTY AREA is -, means the sign is -ve
                    sign=-1;
                    i++;
        }
        else if(s[i]=='+')    i++;  //Ya agar positive hai to
        
        while(i<s.length()){

            if(s[i]>='0' && s[i]<='9')  //Agar number hai to
            {
                ans=ans*10+(s[i]-'0');  //Map banane ki zarurat nahi
                 
                 //Edge cases
                if(ans>INT_MAX && sign==-1) return INT_MIN;
                else if(ans>INT_MAX && sign==1) return INT_MAX;
                
                i++;
            }
            else    return ans*sign;    //Agar number v ni hai, sign ya blank space ke baad pehle number, to smjh jayo ki bekar hai aur return kardo
        }
        return (ans*sign);
    }
};