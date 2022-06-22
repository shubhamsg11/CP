#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n; 
    cin>>n; 
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(n>1)
    {
        for(int i=0;i<n;i++)
    { 
        int k1=accumulate(a+n-i,a+n,0);
        int k2=accumulate(a,a+n-1-i,0);

        if(k1>k2)
        { 
            cout<<i+1;
            break;
        }
    }
    }
    else if(n==1)
    cout<<"1";

}