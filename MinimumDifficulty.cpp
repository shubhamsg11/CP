#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int dbf =a[1]-a[0];
    for(int i=0;i<n;i++)
    {
         if(dbf < a[i+1]-a[i])
            dbf = a[i+1]-a[i];
    }
    int b[n-2]={0};
    int min;
    for(int j=1;j<n-1;j++)
    {   
        b[j-1]=a[j+1]-a[j-1];
    }
    sort(b,b+n-2);
    
    if(b[0]>dbf)
    cout<<b[0];
    else cout<<dbf;
}