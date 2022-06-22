#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (k > n / 2)
        {
            long long int x = k - n / 2;
            cout << (2 + (x - 1) * 2);
        }

        else
        {
            cout << (1 + (k - 1) * 2);
        }
    }

    else
    {
        if (k > (n + 1) / 2)
        {
            long long int x = k - (n + 1) / 2;
            cout << (2 + (x - 1) * 2);
        }

        else
        {
            cout << (1 + (k - 1) * 2);
        }
    }
}