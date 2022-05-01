#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={1,2,3,4};
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
    // range based loops
    for(int value : v)
    {
        cout<<value<<" ";
    }
    // auto keyword
    vector<pair<int, int>> v_p = {{1,2},{3,4}};
    for(auto it:v_p)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    // extra
    vector<vector<int>> vv={{9,8},{7,6}};
    for(auto itt:vv)
    {
        for(auto i:itt)
        {
            cout<<i<<endl;
        }
    }
}