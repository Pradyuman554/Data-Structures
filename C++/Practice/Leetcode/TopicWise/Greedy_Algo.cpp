//N meetings in 1 room: Brute Force using Recursion
// class Solution
// {
//     public:
//     //Function to find the maximum number of meetings that can
//     //be performed in a meeting room.
//     int maxMeetingsUtil(vector<pair<int, int>>& meetings, int index, int lastIncluded) {
//         if (index == meetings.size()) {      //If we reach the end of the meeting vector, then there can be no more meetings included
//             return 0;
//         }
//         int exclude = maxMeetingsUtil(meetings, index + 1, lastIncluded);    //Would it be better if we just exclude the current meeting and consider the other meetings so that we can maximize our output
//                                                                                                      /\
//         if (meetings[index].second > meetings[lastIncluded].first) {                                 ||
//             int include = 1 + maxMeetingsUtil(meetings, index + 1, index);                           ||
//             return max(include, exclude);                                    //Here we are recursively checking the above thing...
//         }
//         return exclude;                                                      //If A SINGLE STAMP IS DISREGARDING (its too big) ALL THE OTHER, then just return the count of things we get AFTER WE EXCLUDE THAT TIMESTAMP
//     }
//
//     int maxMeetings(int start[], int end[], int n) {
//         vector<pair<int, int>> meetings;
//         for (int i = 0; i < n; i++) {
//             meetings.push_back(make_pair(end[i], start[i]));
//         }
//         sort(meetings.begin(), meetings.end());
//         return 1+maxMeetingsUtil(meetings, 0, 0);
//     }
// };

//N meetings in 1 room: Better Approach
// class Solution
// {
//     public:
//     //Function to find the maximum number of meetings that can
//     //be performed in a meeting room.
//     int maxMeetings(int start[], int end[], int n) {
//         vector<pair<int, int>> meetings;
//         for (int i = 0; i < n; i++) {
//             meetings.push_back(make_pair(end[i], start[i]));
//         }
//         sort(meetings.begin(), meetings.end());
    
//         vector<int> dp(n, 1);
    
//         for (int i = 1; i < n; i++) {
//             for (int j = 0; j < i; j++) {
//                 if (meetings[j].first < meetings[i].second) {
//                     dp[i] = max(dp[i], dp[j] + 1);   //Check if 1 added (because current include krenge agar purana v chlega to) to purana output would be better or the current is better (isse current element apne aap exclude ho jayega agr vo useless hoga to)
//                 }
//             }
//         }
//         return *max_element(dp.begin(), dp.end());   //Return the value of the maximum result from dp table
//     }
// };

//N meetings in a room: Greedy Approach
//     struct meeting {
//         int start;
//         int end;
//         int pos;
//     };
// class Solution {
//    public:
//       bool static comparator(struct meeting m1, meeting m2) {
//          if (m1.end < m2.end) return true;
//          else if (m1.end > m2.end) return false;
//          else if (m1.pos < m2.pos) return true;
//          return false;
//       }
//    void maxMeetings(int s[], int e[], int n) {
//       struct meeting meet[n];
//       for (int i = 0; i < n; i++) {
//          meet[i].start = s[i], meet[i].end = e[i], meet[i].pos = i + 1;
//       }

//       sort(meet, meet + n, comparator);

//       vector < int > answer;

//       int limit = meet[0].end;
//       answer.push_back(meet[0].pos);

//       for (int i = 1; i < n; i++) {
//          if (meet[i].start > limit) {
//             limit = meet[i].end;
//             answer.push_back(meet[i].pos);
//          }
//       }
//       cout<<"The order in which the meetings will be performed is "<<endl;
//       for (int i = 0; i < answer.size(); i++) {
//          cout << answer[i] << " ";
//       }
//    }
// };





//Minimum Number of Platforms: Brute Force
// class Solution{
//     public:
//     int findPlatform(int arr[], int dep[], int n)
//     {
//         int ans=1;
//         for(int i=0;i<n;i++){
//             int temp=1;
//             for(int j=0;j<n;j++){
//                 if(i!=j){
//                     if(arr[i]>=arr[j] && dep[j]>=arr[i])    temp++;
//                 }
//                 ans = max(temp,ans);
//             }
//         }
//         return ans;
//     }
// };


//Minimum Number of Platforms: Better Approach
// class Solution{
//     public:
    
//     static bool comp(pair<int,char> a, pair<int,char> b){
//         if(a.first==b.first)   return a.second>b.second;    //That if the arrival time is same, then the ARRIVAL TIME IS ALWAYS GOING TO COME BEFORE THE DEPARTURE TIME, because a is the arrival time and d is the departure time
//         return a.first<b.first; //Else if the arrival time is different, then just return the smaller arrival time to sort in ascending
//     }
    
//     int findPlatform(int arr[], int dep[], int n)
//     {
//         vector<pair<int,char>> vec;
//         for(int i=0;i<n;i++){
//             vec.push_back(make_pair(arr[i],'a'));   //For storing arrival time
//             vec.push_back(make_pair(dep[i],'d'));   //For storing departure time
//         }
//         sort(begin(vec),end(vec),comp);
//         int result=1;   //Because minimum 1 platform is needed
//         int plat=0;
//         auto it = vec.begin();        
//         for(it=vec.begin(); it!=vec.end(); it++){
//             if((*it).second=='a')   plat++;     //If next is arrival time also, meaning more departures are bigger than previous arrival times(intervals are intersecting), then increase the count of plat
//             else plat--;    //Meaning if the arr and dep come together, that means the interval is disjoint
//             result = max(result,plat);
//         }
//         return result;
//     }
// };


//Minimum Number of Platforms: Optimised Approach
// class Solution{
//     public:
//     int findPlatform(int arr[], int dep[], int n)
//     {
//         sort(arr,arr+n); sort(dep,dep+n);
//         queue<int> q;
//         int ans=1;
//         for(int i=0;i<n;i++){
//             q.push(dep[i]);
//             while(q.front()<arr[i])  q.pop();  //Meaning if departure of old is greater than new arrival, meaning intervals are dijoint, then pop the queue
//             ans = max(ans,(int)q.size());
//         }
//         return ans;
//     }
// };





//Job Sequencing Problem (deadlines and all): Brute Force using Recursion
// class Solution 
// {
//     public:
//     int maxProfit=INT_MIN, count=0;   //maxProfit: To compare different recursions and to select the call with maximum profit, count: To have count of how many jobs we have considered (as there is no other way of keeping track of count in a recursion unlike a for loop where we use i)
    
//     static bool comp(Job first, Job second){
//         if(first.dead < second.dead) return true;
//         if(first.dead > second.dead) return false;
//         if(first.profit < second.profit) return false;
//         return true;
//     }
    
//     void find(Job arr[], int curr, int n, int t, int profit, int cnt){  //curr = number of jobs we have considered, cnt = used to keep track of the count of the Final (best) Combination of Jobs (which is going to the one with best profit), to store into the variable count, which needs to be returned in the answer, t = the time of the current job that we are considering, we are going to use this to check if all combinations of the same timestamp are considered and the best one is selected
//         if(curr>=n){
//             if(profit>maxProfit){
//                 maxProfit=profit;
//                 count=cnt;
//             }
//             return;
//         }        
//         if(arr[curr].dead>t)    find(arr, curr+1, n, t+1, profit + arr[curr].profit, cnt+1);    //Considering that the current job is good for max profit
//             find(arr, curr+1, n, t, profit, cnt);                         //Considering that ignoring the current job would be better for max profit
//     }

//     vector<int> JobScheduling(Job arr[], int n) 
//     {
//         sort(arr,arr+n,comp);
//         maxProfit = INT_MIN;
//         count=0;
//         find(arr, 0, n, 0, 0, 0);
//         return {count, maxProfit};
//     } 
// };


//Job Sequencing Problem: Optimised Approach, including maintaining an array for keeping track of jobs which are finished
// class Solution 
// {
//     public:
//     static bool comp(Job a, Job b){
//         return a.profit>b.profit;   //Arrange in decreasing order   
//     }
    
//     vector<int> JobScheduling(Job arr[], int n) 
//     {
//         sort(arr, arr+n, comp);
//         int maxi=arr[0].dead;
        
//         for(int i=1;i<n;i++){   //Set maxi to the MAXIMUM DEADLINE which is going to decide the size of our final array
//             maxi = max(maxi, arr[i].dead);
//         }
//         int slot[maxi+1];   //Make the answer array for storing the job number (which one is the most appropriate job for that time)

//         for(int i=0;i<=maxi;i++){
//             slot[i] = -1;
//         }
//         int countJobs=0, jobProfit=0;

//         for(int i=0;i<n;i++){
//             for(int j=arr[i].dead;j>0;j--){
//                 if(slot[i]==-1){
//                     slot[j] = i;
//                     countJobs++;
//                     jobProfit+= arr[i].profit;
//                     break;
//                 }
//             }
//         }
//         return {countJobs, jobProfit};
//     } 
// };




//Fractional Knapsack
// class Solution
// {
//     public:
    
//     static bool comp(Item a, Item b){
//         double rate1 = (double)a.value/a.weight;
//         double rate2 = (double)b.value/b.weight;
//         return rate1>rate2;     //Arrange in descending order of their rate
//     }
    
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         sort(arr,arr+n,comp);
        
//         int curWeight = 0;
//         double finalvalue = 0.0;
        
//         for(int i=0;i<n;i++){
//             if(curWeight + arr[i].weight <=W){
//                 curWeight += arr[i].weight;
//                 finalvalue += arr[i].value;
//             }
            
//             else{
//                 int remain = W - curWeight;
//                 double rate = (double)arr[i].value/arr[i].weight;
//                 finalvalue += rate*remain;
//                 break;
//             }
//         }
//         return finalvalue;
//     }   
// };





//Find the minimum number of coins; Greedy Approach
// int minCoins(int coins[], int m, int V){
//     vector<int> ans;
//     for(int i=m-1;i>=0;i--){
//         while(V>=coins[i])   //Based on the assumption that the coins array is all of standard denominations (means there can be no better solution other than coming from rear to front end (standard denomination meaning: 1 5 10 20 50, and not 1 5 6 9, where there can be better combinations from the middle too)).
//         V -= coins[i];       //Keep subtracting the value from V until get our desired result (V=0, which is going to be achieved automatically when we reach the lowest required denomination)
//         ans.push_back(coins[i]);
//     }
//     return ans.size();
// }

//Find the minimum number of coins; Recursive Approach, it is better than greedy approach because there might be the array input where checking from rear to front might not bear the best result. Eg. coins[] = {1,5,6,9} and V = 11, here 9+1+1 is the greedy solution, but optimized solution is 6+5. However recursive algo might result in time and stack overflow
// int minCoins(int coins[], int m, int V){    //m is the size of coins array, V is the sum we are aiming at
//     if(V==0)    return 0;

//     int res = INT_MAX;  //Result

//     for(int i=0;i<m;i++){   //Try every coin that has smaller value than V
//         if(coins[i]<=V){
//             int sub_res = minCoins(coins, m, V-coins[i]);   //This recursion is going to calculate for ALL SET OF POSSIBLE COMBINATIONS and is going to terminate ONLY IF V==0 (the base case), and when it terminates, that means that we have found our correct combination (not necessarily the minimum), moving forward FROM THE FIRST ELEMENT (its like sliding windows, we move forward from the 1st element and check if the result can be minimized and can be lower than the current result, and if yes then we put that value)

//             if(sub_res!=INT_MAX && sub_res+1<res)   res=sub_res+1;  //Checking if a new combination is better than the older one
//             //We check sub_res+1<res because if we do sub_res<res then there's a possibility that res=sub_res+1, and then doing res=sub_res+1 would bear sub_res=res, and then the operation would be pointless
//         }
//     }
//     return res;
// }





//N Meetings in 1 Room (again)
// lass Solution
// {
//     public:
//     struct meet{
//         int st;
//         int en;
//         int pos;
//     };
    
//     static bool comp(meet m1, meet m2){
//         if(m1.en>m2.en) return false;
//         else if(m1.en<m2.en)    return true;
//         else if(m1.st>m2.st)    return false;
//         else return true;
//     }
    
//     int maxMeetings(int start[], int end[], int n)
//     {
//         struct meet m1[n];
//         vector<int> ans;

//         for(int i=0;i<n;i++){
//             m1[i].st = start[i];
//             m1[i].en = end[i];
//             m1[i].pos= i;
//         }
        
//         sort(m1, m1+n, comp);
        
//         int limit = m1[0].en, count=1;  //count=1 because minimum 1 meeting is going to be there
        
//         for(int i=1;i<n;i++){
//             if(m1[i].st>limit){
//                 limit = m1[i].en;
//                 count++;
//             }
//         }
        
//         return count;
//     }
// };