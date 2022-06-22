#include<bits/stdc++.h>
using namespace std; 

int main()
{ 
    string s; 
    cin>>s;

    for(int i=0;i<s.length();i++)
    { 
        for(int j=0;j<s.length();j++)
        {   
            if(s[i]<s[j])
            {
                char temp =s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            j++;
        }
        i++;
    }
    cout<<s;
}