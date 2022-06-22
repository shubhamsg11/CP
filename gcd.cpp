#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ 
    ll t;
    cin>>t;

    while(t--)
    { 
        ll l, r, k, count=0;
        cin >> l >> r >> k;
        count = (r-l+1) - (r/2 - (l-1)/2);

        if(l == r && l != 1)
            cout << "YES" << endl;
        else if(l == r && l == 1)    
            cout << "NO" << endl;
        else if(count <= k)
            cout << "YES" << endl;
       else 
            cout << "NO" << endl;
    }
}