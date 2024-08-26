#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    vector<int> ans=arr;

    for(int i=n-2;i>=0;i--){
        int dis=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<=arr[i]){
                dis=j;
            }
        }


    if(dis!=-1) ans[i]-=arr[dis];
        
    }





    for(int i:ans)  cout<<i<<endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;


//     bool flag=false;

//     for(char c: s){
//         if()
//     }

//     return 0;
// }