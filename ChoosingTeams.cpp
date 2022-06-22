#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,k;
    cin>>n>>k;
    vector<int> h(n,0);

    int ans=0;
    for(int i=0;i<n;i++)
    { 
       // int lelo;
       // cin>>lelo;
        cin>>h[i];
        if(h[i]+k<=5)
            ans++;
    }

    cout<<ans/3;

}