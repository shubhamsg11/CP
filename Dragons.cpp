#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    
        int *temp;
        *temp = *a;
        *a = *b;
        *b = *temp;
    
}

int main()
{
    int s, n;
    cin >> s >> n;
    int x[n];
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
    }
    bool nirnay = true;
    for (int k = 0; k < n; k++)
    {
        if (s > x[k])
        {
            s += y[k];
        }
        else
        {
            cout << "NO";
            nirnay = false;
            break;
        }
    }

    if (nirnay)
        cout << "YES";
    return 0;
}