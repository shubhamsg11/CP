#include<bits/stdc++.h>
using namespace std;
int pos(string s,char c)
{
    return (s.find(c)+1);
}



int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        string s1,s2;
        cin>>s1>>s2;
        
        int count =0;
        for(int i =0; i<s2.length()-1;i++)
        { 
            count+=abs(pos(s1, s2[i+1])-pos(s1 ,s2[i]));
        }

        cout<<count<<endl;



    }
}