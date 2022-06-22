#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    char cake[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> cake[i][j];
    }
    int x = 0, y = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (cake[i][j] == 'S')
                break;
            if (j == c - 1)
                x++;
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (cake[j][i] == 'S')
                break;
            if (j == r - 1)
                y++;
        }
    }

    cout<<(x*c+y*r)-(x*y);

}