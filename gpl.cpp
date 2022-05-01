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
        int i=n-1;
        string a;
        cin>>a;
        long long int r=0;
        long long int power2 = 1;
        while(i>=0)
        {
            int d = a[i] - '0';
            r = r + d*power2;
            power2 = power2*2;
            i--;            
        }
        cout<<r<<endl;
    }
}