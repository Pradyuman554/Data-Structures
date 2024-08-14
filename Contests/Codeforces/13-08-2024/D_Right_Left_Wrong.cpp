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
        int n;  cin>>n;
        vector<int> arr(n);
        vector<char> cha(n);
        for(int i=0; i<n; i++)  cin>>arr[i];
        for(int i=0; i<n; i++)  cin>>cha[i];

        int ans=0;
        int l=0, r=n-1;
        int sum=0;
        while(l<r){
            if(cha[l]!='L'){
                l++;
                continue;
            }
            else if(cha[r]!='R'){
                r--;
                continue;
            }
            //Else we have valid
            else{
                for(int i=l; i<=r; i++) sum += arr[i];
                l++;
                r--;
                if(sum>0)   ans+=sum;
                sum=0;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}