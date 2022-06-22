#include<bits/stdc++.h>
using namespace std; 

double krcalculate(double a[],int n)
{ 
    double max=a[1]-a[0];
    for(int i=0;i<n-1;i++)
    { 
        if(max<a[i+1]-a[i])
            max=a[i+1]-a[i];
    }
    
    return (max/2);
}

int main()
{ 
    int n,l;
    cin>>n>>l;
    double a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    double d=krcalculate(a,n);

    if(a[0] !=0)
    { 
        if(d<a[0])
            d=a[0];
    }
    if(a[n-1] !=l)
    { 
        if(d<(l-a[n-1]))
            d=l-a[n-1];
    }
    cout<<fixed<<setprecision(9)<<d;
    return 0;
}