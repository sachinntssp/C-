#include<bits/stdc++.h>
using namespace std;
// This code will take more time
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,k,r=0;
//         cin>>n>>k;
//         long long a[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         while (k--)
//         {
//             int max=a[0],index=0;
//             for(int i=0;i<n;i++)
//             {
//                 if(max<a[i])
//                 {
//                     max=a[i];
//                     index = i;
//                 }
//             }
//             r+=max;
//             a[index]/=2;
//             /* code */
//         }
//         cout<<r<<endl;
        
//     }
// }
// This will run in 1 sec
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++)
        {
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long r=0;
        while(k--)
        {
            auto last_it = --(bags.end());
            long long candy_ct = (*last_it);
            r+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
        cout<<r<<endl;
        
    }

}