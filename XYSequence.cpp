#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, B, x, y;
        cin >> n >> B >> x >> y;

        ll a[n];
        a[0] = 0;
        ll count = 0;
        for (ll i = 1; i <=n; i++)
        {
            if (a[i - 1] + (x) <= B)
            {
                a[i] = a[i - 1] + (x);
                count += a[i];
            }
            else
            {
                a[i] = a[i - 1] - (y);
                count += a[i];
            }
            // cout << a[i] << " ";
        }
 
        cout << count << endl;
        ;
    }
}