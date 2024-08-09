//Codeforces Round 964 (Div. 4)
//Question 1: A+B Again?
#include<iostream>
using namespace std;
 
int main(){
    int t;  cin>>t;
    
    while(t--){
        int sum=0;
        int num;    cin>>num;
        
        sum += (num%10 + num/10);
        cout<<sum<<endl;
    }
    
    return 0;
}


//Question 2: Card Game
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int t;  cin>>t;
    
//     while(t--){
//         int n=4;
//         vector<int> arr(n);
//         for(int i=0; i<n; i++)  cin>>arr[i];
        
//         int ans=0;
        
//         if(arr[0]>arr[2])   ans++;
//         else ans--;
        
//         if(arr[0]>arr[3])   ans++;
//         else ans--;
        
//         if(arr[1]>arr[2])   ans++;
//         else ans--;
        
//         if(arr[1]>arr[3])   ans++;
//         else ans--;
        
//         cout<<max(ans, 0)<<endl;
//     }
    
    
//     return 0;
// }


// //C: Showering
// //8 minutes, and a day has m minutes
// //n tasks planned as an interval (l, r) BETWEEN WHICH HE CANNOT TAKE SHOWER (no 2 tasks overlap)
// //DOES ALEX HAS A TIME INTERVAL OF AT LEAST 8?

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main(){
//     int t;  cin>>t;
//     while(t--){
//         int n, shower, day;
//         cin>>n>>shower>>day;
        
//         vector<vector<int>> arr(n, vector<int>(2));
        
//         for(int i=0; i<n; i++){
//             cin>>arr[i][0]>>arr[i][1];
//         }
        
//         bool done = false;
        
//         int end=arr[0][1];
//         if(arr[0][0]>=shower){
//             cout<<"YES"<<endl;
//             continue;
//         }

//         for(int i=1; i<n; i++){
//             if(arr[i][0]-end>=shower){
//                 cout<<"YES"<<endl;
//                 done = true;
//                 break;
//             }
//             else{
//                 end=arr[i][1];
//             }
//         }
        
//         if(!done){
//             if(day-end>=shower) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
    
    
//     return 0;
// }



// //D: Slavic's Exam
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// bool solve(string s, string t) {
//     int m = s.size(), n = t.size();
//     int i = 0, j = 0;

//     while (i < m && j < n) {
//         if (s[i] == t[j] || s[i]=='?') {
//             j++;
//         }
//         i++;
//     }
    
//     return j == n;
// }

// string replaceQuestionMarks(string s, const string& t) {
//     int s_len = s.size(), t_len = t.size();
//     int s_index = 0, t_index = 0;
    
//     while (s_index < s_len && t_index < t_len) {
//         if (s[s_index] == '?') {
//             s[s_index] = t[t_index];
//             t_index++;
//         } else if (s[s_index] == t[t_index]) {
//             t_index++;
//         }
//         s_index++;
//     }
    
//     for (int i = 0; i < s_len; i++) {
//         if (s[i] == '?') {
//             s[i] = 'a';
//         }
//     }
    
//     return s;
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         string s, t;
//         cin >> s >> t;
        
//         if (solve(s, t)) {
//             cout << "YES\n";
//             cout << replaceQuestionMarks(s, t) << "\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
    
//     return 0;
// }
