#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++)
    { 
        if(s[i]=='A'||s[i]=='a'||s[i]=='O'||s[i]=='o'||s[i]=='Y'||s[i]=='y'||s[i]=='I'||s[i]=='i'||s[i]=='E'||s[i]=='e'||s[i]=='U'||s[i]=='u')
        continue;
        else
        {if(isupper(s[i]))
        cout<<"."<<(char(s[i]+32));
        else
        cout<<"."<<(s[i]);
        }
    }

}
