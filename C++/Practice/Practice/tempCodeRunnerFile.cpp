#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    if(a<b) return false;   //False means include b
    else return true;       //True means include a
}

int main()
{
    vector<int> a{1,3,2,5,4};
    sort(a.begin(), a.end(), comp);
    for(int i: a)   cout<<i;
    
    return 0;
}