#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s,t; 
    cin>>s;
    cin>>t; 

    int i=0,j=0;

    while(j<t.length())
    { 
        if(s[i] == t[j])
            i++;
        
        j++;
    }


    cout<<i+1;
}