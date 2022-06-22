#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,d;
    cin>>n>>d;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {   cin>>a[i];
        sum+=a[i];
    }

    if((sum+(n-1)*10) <= d)
    { 
        int a = (d-(sum+(n-1)*10))/5;
        cout<<((n-1)*2+a);
    }
    else 
        cout<<"-1";
}