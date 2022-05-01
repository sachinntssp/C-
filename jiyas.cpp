#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int pr=1;
        while(n--)
        {
            int a;
            cin>>a;
            pr=pr*a;
        }
        if(pr%10 == 2 || pr%10 == 3 || pr%10 == 5 )
        {
            cout<<"YES";
        }
        else
        cout<<"NO";
    }
}