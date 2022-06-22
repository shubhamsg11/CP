#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    if (m*a > b)
    {
        int kitnebache = n % m;
        int kitneliye = n / m;

        cout << ((kitneliye * b) + (kitnebache * a));
    }
    else
    {
        cout << (n * a);
    }
}