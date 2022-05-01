#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    int lcm;
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm = i;
        }
    }
    return lcm;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cth_num;
    int step=0;
    for(int i = 1;c>0; i++)
    {
        if(i%a == 0 || i%b == 0)
        {
            c--;
            cth_num=i;

        }
    }
    if(cth_num%a==0 && cth_num%b==0)
    {
        step = lcm(a,b);
        while(cth_num>=0)
        {
            cout<<cth_num<<" ";
            cth_num-=step;
        }
    }
    else if(cth_num%a==0)
    {
        while(cth_num>=0)
        {
            cout<<cth_num<<" ";
            cth_num-=a;
        }
    }
    else if(cth_num%b==0)
    {
        while(cth_num>=0)
        {
            cout<<cth_num<<" ";
            cth_num-=b;
        }
    }
}