#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    string s;
    cin>>s; 
    string s2="hello";
    int j=0;
    for(int i=0;i<s.length();i++)
    { 
        if(s[i]==s2[j])
        {
            j++;
        }

    }
    if(j==5)
    cout<<"YES";
    else 
    cout<<"NO";
}