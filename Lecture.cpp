#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,m;
    cin>>n>>m;
    string a[m],b[m];

    for(int i=0;i<m;i++)
    {
        cin>>a[i]; cin>>b[i];

    }

    string c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        { 
            if(c[i]==a[j])
            { 
                if(a[j].length() > b[j].length())
                {
                    c[i] = b[j];
                }

            }
        }
        cout<<c[i]<<" ";
    }

    
}