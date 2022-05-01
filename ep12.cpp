// #include<bits/stdc++.h>
// using namespace std;
// const int n = 1e5+10;
// long long f[n];
// int main()
// {
//     f[0]=f[1]=1;
//     for(int i=2;i<=n;i++)
//     {
//         f[i]=f[i-1]*i;
//     }
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         // long long fact=1;
//         cin>>n;
//         // for(int i = 1;i<=n;i++)
//         // {
//         //     fact = fact*i;
//         // }
//         cout<<f[n]<<endl;
//     }
// }


// // 1 <= n <= 10^5
// // 1 <= q <= 10^5
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int x;
//         cin>>x;
//         int c=0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]==x)
//             c++;
//         }
//         cout<<c<<endl;
//     }
// }
// // Total time 10^10

// Preomputation 
// 1 <= n <= 10^5
// 1 <= q <= 10^5
// 1 <= a[i] <= 1e7
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int s[N];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<s[x]<<endl;
    }
}