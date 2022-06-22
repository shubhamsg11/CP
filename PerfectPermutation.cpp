#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int p[n];
        for (int i = 0; i < n; i++)
            p[i] = i+1;
        for (int i = 0; i < n-1; i++)
        {
            int temp = p[i];
            p[i] = p[i + 1];
            p[i+1] = temp ;
            i++;
        }

        for(auto i:p)
            cout<<i<<" ";
    }
    else
    {
        cout << -1;
    }
}