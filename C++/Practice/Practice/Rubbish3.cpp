#include<bits/stdc++.h>
using namespace std;

vector<int> fibo(int n){
    vector<int> arr;
    int first=0, second=1, fin;
    if(n==0) return arr;
    else if(n==1) {
        arr.push_back(first);
        return arr;
    }

    else{
    arr.push_back(first);
    arr.push_back(second);

    for(int i=0;i<n-2;i++){
        fin = first+second;
        arr.push_back(fin);
        first=second;
        second=fin;
    }
    return arr;
    }
}

int main()
{
    vector<int> arr = fibo(2);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}