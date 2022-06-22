#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;

    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < m; i++)
    {
        int max = s[0][i], count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == max)
            {
                count++;
            }

            if (s[j][i] > max)
            {
                max = s[j][i];
                count = 1;
            }
        }

        if(count == 1)
            ans++ ;
    }

    cout<<ans;
}