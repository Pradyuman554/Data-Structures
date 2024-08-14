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
        map<int,int> mp;
        int x;
        for(int i=0; i<n; i++){
            cin>>x;
            if(mp.empty())  mp[x]++;
            else if(mp[x-1]>0 || mp[x+1]>0) mp[x]++;
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}