#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<climits>
#include<cstring>
#include<cassert>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main() {
    int t;  cin>>t;
    while(t--){
        int a;  cin>>a;
        int num=0, digits=0;
        while(a>=100){
            num=a;
            digits++;
            a/=10;
        }
        int remainder = num%10;
        if(a!=10)   cout<<"NO"<<endl;
        else if(remainder==0)    cout<<"NO"<<endl;
        else if(remainder==1 && digits<2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}