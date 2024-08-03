//Iterator difference between v.end and v.back
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> :: iterator it = v.begin();
    cout<< *(it)<<endl;
    return 0;
}