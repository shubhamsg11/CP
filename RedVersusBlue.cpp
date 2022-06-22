#include <bits/stdc++.h>
using namespace std;

void printNtimes(char c, int n)
{
    cout << string(n, c);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        n = r / (b + 1);
        r -= n * (b + 1);
        for (int i = 0; i < n; i++)
            cout << "R";
        for (int j = 0; j < b; j++)
        {
            if (r > 0)
            {
                cout << "R";
                r--;
            }
            cout << "B";
            for (int i = 0; i < n; i++)
                cout<<"R";
        }

        cout << endl;
    }
}
