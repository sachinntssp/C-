#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
bool vis[N];

void dfs(int v){
    //code1 
    if(vis[v]==1) return;
    cout<<v<<endl;
    vis[v]=true;
    for(int child:g[v]){
        cout<<"par "<<v<<" child"<<child<<endl;
        // code2
        dfs(child);
        // code3
    }
    // code4
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    // for(int i=1;i<=4;i++){
    //     for(int j=0;j<g[i].size();j++){
    //         cout<<i<<" "<<g[i][j];
    //     }
    //     cout<<endl;
    // }

}