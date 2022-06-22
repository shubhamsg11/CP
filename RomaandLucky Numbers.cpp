#include<bits/stdc++.h>
using namespace std; 
bool islucky( int a , int b )
{ 
    int dekho = 0 ; 
    while( a > 0)
    { 
        if(a%10 == 4 || a%10 == 7)
            dekho++ ; 
        a = a/10;
    }

    if(dekho > b) return false; 
    else return true;
}

int main()
{ 
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans = 0;
    for(int i=0;i<n;i++)
    { 
        if(islucky(a[i] , k))
            ans++;
        else 
            continue ;
    }

    cout<<ans;
}