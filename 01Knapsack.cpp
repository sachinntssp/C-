// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int W,N;
//     cout<<"Enter bag capacity"<<endl;
//     cin>>W;
//     cout<<"Enter number of item"<<endl;
//     cin>>N;
//     vector<int> p(N+1),w(N+1);
//     vector<vector<int>> table;
//     cout<<"Enter profit of "<<N<<" items"<<endl;
//     for(int i=1;i<=N;i++){
//         cin>>p[i];
//     }
//     cout<<"Enter weights of "<<N<<" items"<<endl;
//     for(int i=1;i<=N;i++){
//         cin>>w[i];
//     }
//     for(int i=1;i<=N;i++)
//     {
//         for(int j=1;j<=W;j++)
//         {
//             if(j<w[i])
//             table[i][j]=table[i-1][j];
//             else
//             table[i][j]=max((table[i-1][j]), (p[i]+table[i-1][j-w[i]]) );
//             // table[i][j] = max(table[i-1][w], (p[i] + table[i-1][j-w[i]]));
//         }
//     }
//     for(int i=0;i<=N;i++)
//     {
//         for(int j=0;j<=W;j++)
//         {
//             cout<<table[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<=N;i++){
//         for(int j:table[i]){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int W,N;
    cout<<"Enter bag capacity"<<endl;
    cin>>W;
    cout<<"Enter number of item"<<endl;
    cin>>N;
    int p[N+1]={0},w[N+1]={0};
    int table[N+1][W+1];
    cout<<"Enter profit of "<<N<<" items"<<endl;
    for(int i=1;i<=N;i++){
        cin>>p[i];
    }
    cout<<"Enter weights of "<<N<<" items"<<endl;
    for(int i=1;i<=N;i++){
        cin>>w[i];
    }
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            table[i][j]=0;
            else if(j<w[i])
            table[i][j]=table[i-1][j];
            else
            table[i][j]=max((table[i-1][j]), (p[i]+table[i-1][j-w[i]]) );
        }
    }
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=W;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
}