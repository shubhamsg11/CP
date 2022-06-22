#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,p,q;
    cin>>n;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++)
        cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
        cin>>b[i];
    int c[n]={0};
    
    for(int i=0;i<p;i++)
    { 
        c[a[i]-1]=1;
    }
    for(int i=0;i<q;i++)
    { 
        c[b[i]-1]=1;
    }
    bool istrue =true;
    for(int i=0;i<n;i++)
    { 
        if(c[i]==0)
        {    
            cout<<"Oh, my keyboard!";
            istrue =false;
            break;
        }  
    }
    if(istrue)
        cout<<"I become the guy.";
}