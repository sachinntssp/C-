#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, multiset<string>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        int num;
        cin>>num;
        m[num].insert(str);
    }
    for(auto curr_it = --m.end();;curr_it--)
    {
        auto name = (*curr_it).second;
        auto mark = curr_it->first;
        for(auto i:name)
        {
            cout<<i<<" ";
            cout<<mark<<endl;
        }
        
    }
    // for(auto v:m)
    // {
    //     auto mark = v.first;
    //     auto name = v.second;
    //     // cout<<mark<<" ";
    //     for(int i=0;i<name.size();i++)
    //     {
    //         cout<<name[i]<<" "<<mark<<endl;
    //     }
    // }
}