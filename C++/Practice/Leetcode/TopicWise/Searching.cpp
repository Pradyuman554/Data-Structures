//Binary Search
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int Binary(vector<int> arr, int val){
// //Finding the middle element
// int start = 0;
// int end = arr.size()-1;
    
//     while(start<=end){
//     int mid = (start + end)/2;
//     if(arr[mid]==val)   return mid+1;
    
//     else if(val>arr[mid])   {
//         start = mid+1;}

//     else    {end = mid-1;}   
//     }
//     cout<<"Not found";
//     return 0;
// }

// int main()
// {   int a,n;
//     cout<<"Enter the size: "; cin>>n;

//     vector<int> arr;
    
//     for(int i=0;i<n;i++){
//         cin>>a;
//         arr.push_back(a);
//     }

//     cout<<Binary(arr,6);
    
//     return 0;
// }