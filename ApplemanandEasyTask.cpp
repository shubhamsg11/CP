#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                if (a[i + 1][j] == 'o' && a[i][j + 1] == 'o')
                    continue;
                else if (a[i + 1][j] != 'o' && a[i][j + 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (i == 0 && j == n - 1)
            {
                if (a[i + 1][j] == 'o' && a[i][j - 1] == 'o')
                    continue;
                else if (a[i + 1][j] != 'o' && a[i][j - 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (i == n - 1 && j == 0)
            {
                if (a[i - 1][j] == 'o' && a[i][j + 1] == 'o')
                    continue;
                else if (a[i - 1][j] != 'o' && a[i][j + 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (i == n - 1 && j == n - 1)
            {
                if (a[i][j - 1] == 'o' && a[i - 1][j] == 'o')
                    continue;
                else if (a[i][j - 1] != 'o' && a[i - 1][j] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (i == 0 && j > 0 && j < n - 1)
            {
                if (a[i][j + 1] == 'o' && a[i][j - 1] == 'o' || a[i + 1][j] == 'o' && a[i][j - 1] == 'o' || a[i][j + 1] == 'o' && a[i + 1][j] == 'o')
                    continue;
                else if (a[i + 1][j] != 'o' && a[i][j + 1] != 'o' && a[i][j - 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (i == n - 1 && j > 0 && j < n - 1)
            {
                if (a[i][j + 1] == 'o' && a[i][j - 1] == 'o' || a[i - 1][j] == 'o' && a[i][j - 1] == 'o' || a[i][j + 1] == 'o' && a[i - 1][j] == 'o')
                    continue;
                else if (a[i - 1][j] != 'o' && a[i][j + 1] != 'o' && a[i][j - 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (j == 0 && i > 0 && i < n - 1)
            {
                if (a[i + 1][j] == 'o' && a[i - 1][j] == 'o' || a[i + 1][j] == 'o' && a[i][j + 1] == 'o' || a[i][j + 1] == 'o' && a[i - 1][j] == 'o')
                    continue;
                else if (a[i + 1][j] != 'o' && a[i - 1][j] != 'o' && a[i][j + 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (j == n - 1 && i > 0 && i < n - 1)
            {
                if (a[i + 1][j] == 'o' && a[i - 1][j] == 'o' || a[i + 1][j] == 'o' && a[i][j - 1] == 'o' || a[i][j - 1] == 'o' && a[i - 1][j] == 'o')
                    continue;
                else if (a[i + 1][j] != 'o' && a[i - 1][j] != 'o' && a[i][j - 1] != 'o')
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1)
            {
                int c = 0;
                if (a[i][j - 1] == 'o')
                    c++;
                if (a[i][j + 1] == 'o')
                    c++;
                if (a[i - 1][j] == 'o')
                    c++;
                if (a[i + 1][j] == 'o')
                    c++;

                if (c % 2 == 0)
                    continue;
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if(!ans)
        {   cout<<"NO";
            break;
        }
    }
    if(ans)
    cout<<"YES";
}