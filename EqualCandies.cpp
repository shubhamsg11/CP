#include<bits/stdc++.h>
using namespace std; 

int min(int a[], int n)
{ 
    int m=a[0];
    for(int j=0;j<n;j++)
    { 
        if(m>a[j])
        m=a[j];
    }
    return m;
}


int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        int k=min(a,n);
        int count =0;
        for(int i=0;i<n;i++)
        { 
            count += abs(k-a[i]);
        }
        cout<<count<<endl;
    }
}