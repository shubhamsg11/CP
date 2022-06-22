#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    string s; 
    cin>>s;
    string s2="WUB";

    for(int i=0;i<s.length();i++)
    { 
        if(i<=(s.length()-3) && s.compare(i,3,s2)==0)
            {
                i+=2;
                cout<<" ";
            }
        else
        cout<<s[i];    
    }
}