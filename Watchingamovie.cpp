#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    int cm = 1;
    int min = 0;
    while (cm <= p[n - 1].second)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i].first - cm < x)
            {
                min += p[i].second - cm + 1;
                cm = p[i].second +1 ;
            }

            else
            {
                int k = (p[i].first - cm) % x;
                min += k + p[i].second - p[i].first + 1 ;
                cm = p[i].second+1;
            }
        }
    }

    cout << min;
}