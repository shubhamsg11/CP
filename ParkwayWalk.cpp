#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for(int i=0 ; i<n;i++)
        {    cin>>a[i];
             m-=a[i];
        }

        if(m>=0) cout<<0<<endl;
        else cout<<fabs(m)<<endl;
    }
}