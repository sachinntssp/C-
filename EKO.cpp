#include<bits/stdc++.h>
using namespace std;
int n;
const int N=1e6+10;
int trees[N];
long long m;
bool iswood(int h)
{
    long long wood=0;
    for(int i=0;i<n;i++){
        if(trees[i]>=h){
            wood += trees[i]-h;
        }
        if(wood>=m)break;
    }
    return wood>=m;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>trees[i];
    }
    int l=0,h=1e9,mid;
    while(h-l>1){
        mid=(l+h)/2;
        if(iswood(mid)){
            l=mid;
        }
        else{
            h=mid-1;
        }
    }
    if(iswood(h)){
        cout<<h<<endl;
    }
    else{
        cout<<l<<endl;
    }
}