#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n; 
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++)
    { 
        b[a[a[i]-1]-1]=a[i];
    }

    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
}