#include<bits/stdc++.h>
using namespace std; 
int min(int a[] , int n)
{ 
    int min=a[0],l;
    for(int i=0;i<n;i++)
    { 
        if(a[i]<=min)
        { 
            min=a[i];
            l=i;
        }
    }
    return l;
}
int max(int a[] , int n)
{ 
    int max=a[0],k=0;
    for(int i=0;i<n;i++)
    { 
        if(a[i]>max)
        { 
            max=a[i];
            k=i;
        }
    }
    return k;
}

int main()
{ 
    int m ;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    
    int ans=0;
    int x=min(a,m);
    int y=max(a,m);

    if(x>y)
    cout<<(y-0)+(m-1-x);
    else
    cout<<(y+m-1-x-1);
}