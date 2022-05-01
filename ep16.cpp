// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         string str;
//         cin>>str;
//         while(q--)
//         {
//             int hash[26];
//             for(int i=0;i<26;i++)
//             {
//                 hash[i]=0;
//             }
//             int l,r;
//             cin>>l>>r;
//             l--;
//             r--;
//             for(int i=l;i<=r;i++)
//             {
//                 hash[str[i]-'a']++;
//             }
//             int c=0;
//             for(int i=0;i<26;i++)
//             {
//                 if(hash[i]%2!=0)
//                 c++;
//             }
//             if(c>1)
//             {cout<<"NO";}
//             else
//             cout<<"YES";
//         }
//     }
// }


// optimized program
const int N=1e5+10;
int hs[N][26];
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<26;j++)
            {
                hs[i][j]=0;
            }
        }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            hs[i+1][s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            for(int j=1;j<=n;j++)
            {
                hs[j][i] += hs[j-1][i];
            }
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int oddct=0;
            for(int i=0;i<26;i++)
            {
                int charct = hs[r][i] - hs[l-1][i];
                if(charct % 2 != 0)
                oddct++;
            }
            if(oddct>1)
            cout<<"NO"<<endl;
            else
            cout<<"yes"<<endl;

        }
    }
}
