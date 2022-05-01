#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char, int> m = {    {'(',-1},{'{',-2},{'[',-3},  {')',1},{'}',2},{']',3} };
    while(n--)
    {
        string s;
        cin>>s;
        int i=0;
        stack<char> st;
        while(s[i] !='\0')
        {
            if(m[s[i]]<0)
            {
                st.push(s[i]);
            }
            else{
                if(st.empty()==1){
                cout<<"NO";
                exit;
                }
                else if(m[st.top()]+m[s[i]]!=0){
                    cout<<"NO";
                    exit;
                }
                st.pop();
            }
            i++;
        }
        if(st.empty()==1)
        cout<<"YES";
        else
        cout<<"NO";

    }
}