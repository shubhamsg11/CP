#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<m;i++)
        cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
   
    if( max(a[n-1] , 2*a[0]) >= b[0])
        cout<<-1;
    else 
        cout<< max(a[n-1] , 2*a[0]);
}