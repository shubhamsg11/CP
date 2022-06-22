#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const ll maxx = 1000000000000000000;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll speed[n];
    for(ll i=0;i<n;i++)
    {
        cin>>speed[i];
    }
    int gcd (int a, int b) 
    {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
    }   
}