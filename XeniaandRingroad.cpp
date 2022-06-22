#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    { 
        cin>>a[i];
    }
    int at=1;
    long long int t=0;
    for(int i=0;i<m;i++)
    { 
        if(at<a[i])
        { 
            t+=a[i]-at;
            at=a[i];
            continue;
        }
        else if(at>a[i])
        { 
            t+=(n)-(at-a[i]);
            at=a[i];
            continue;
        }
    }
   cout<<t;
}