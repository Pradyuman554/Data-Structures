#include<bits/stdc++.h>
using namespace std;

list<pair<char,int>> dict;
static int sum=0;

static int const M=1000;
static int const D=500;
static int const C=100;
static int const L=50;
static int const X=10;
static int const V=5;
static int const I=1;

int value(char s){
    auto itr = begin(dict);
    for(;itr!=end(dict);itr++){
        if(itr->first==s){
            return itr->second;
        }}
}

//Not inorder value resolution
int difference(stack<int> a){
    if(a.empty())    return 0;
    sum=a.top();
    a.pop();
    return sum-difference(a);
}

void solve(string s){
    stack<int> a;
    int sumo=0;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(value(s[i]) < value(s[j])){
                a.emplace(s[i]);
            }
            else{
                sumo+=value(s[i]);
                cout<<"Intermediate: "<<sum<<" ";
            }
            cout<<endl;
        }
        cout<<"Intermediate2: "<<sum<<" ";
    }
    sumo+=difference(a);
    cout<<endl<<sumo;
}

int main()
{
    dict.emplace_back('M',1000);
    dict.emplace_back('D',500);
    dict.emplace_back('C',100);
    dict.emplace_back('L',50);
    dict.emplace_back('X',10);
    dict.emplace_back('V',5);
    dict.emplace_back('I',1);

    string s="CMIV";
    solve(s);
    return 0;
}
/*
Approaches:
1) If I comes, then later there should be no bigger than I, etc.
2) Assign them Precedence values as key value pairs
*/


