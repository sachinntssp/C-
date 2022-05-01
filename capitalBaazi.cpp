#include<bits/stdc++.h>
using namespace std;
void upper(string s)
{
    int i=0;
    while(i<s.size())
    {
        s[i]=char(s[i]-('a'-'A'));
        i++;
    }
    cout<<s<<endl;
}
int main()
{
   while(true)
   {
       string a;
       cin>>a;
       if(a.size()==0)
       {
           break;
       }
       upper(a);
    //    cout<<a;
   }
}