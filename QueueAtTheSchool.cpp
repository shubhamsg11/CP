#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    { 
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i+1]=='G' && s[i]=='B')   
            { 
                s[i]='G';
                s[i+1]='B';
                i+=1;
            } 
        }

    }
    cout<<s;
    
}