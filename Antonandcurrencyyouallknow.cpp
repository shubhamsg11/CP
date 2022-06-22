#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string n ; 
    cin>>n;
    int evens =0;
    for(int i=0;i<n.size();i++)
    {
        int z = n[i] -'0';
        if(z % 2 ==0)
            evens++;
    }

    if(evens ==0)
    { 
        cout<< -1 << endl;
        return 0;
    }

    string m="";
    for(int i=0;i<n.length()-1;i++)
    {   int z = n[i]-'0';
        if(z % 2 ==0)
        {   string s=n;
            char temp = s[n.length()-1];
            s[n.length()-1] = s[i];
            s[i] = temp ;

            m = max(m,s);
        }
    }
    cout<<m<<endl;
}