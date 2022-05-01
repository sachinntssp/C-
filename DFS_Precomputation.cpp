// Given Q queries, Q<=10^5
// In each query given v,
// print subtree sum of v & number of even numbers in subtree of v
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
int sum_subtree[N];
int evn_ct[N];
void dfs(int vertex,int par=0){
// 
    if(vertex % 2 == 0) evn_ct[vertex]++;
    sum_subtree[vertex] += vertex;
    for(int child:g[vertex]){
        // 
        if(child==par)continue;
        dfs(child,vertex);
        sum_subtree[vertex] += sum_subtree[child];
        evn_ct[vertex] += evn_ct[child];
// 
    }
// 
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<sum_subtree[i]<<" "<<evn_ct[i]<<endl;
    }
}