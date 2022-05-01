#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector <int> v(n),ng(n);
    stack <int> st;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(st.empty()==1 || v[st.top()] > v[i])
        {
            st.push(i);
        }
        else
        {
            while(st.empty()==0 && v[st.top()]<v[i])
            {
                ng[st.top()]=v[i];
                st.pop();              
            }
            st.push(i);
        }
    }
    while(st.empty()!=1)
    {
        ng[st.top()]=-1;
        st.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<ng[i]<<endl;
    }
    
    return 0;
}
