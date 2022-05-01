#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string, int> m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}