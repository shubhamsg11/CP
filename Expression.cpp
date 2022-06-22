#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 1 || b == 1 || c == 1)
    {
        if (a == 1 && b == 1 && c == 1)
            cout << a + b + c;
        else if (a == 1 && b == 1 || b == 1 && c == 1 || a == 1 && c == 1)
        {
            if (a == 1 && b == 1)
                cout << (a + b) * c;
            if (b == 1 && c == 1)
                cout << (c + b) * a;
            if (a == 1 && c == 1)
                cout << (a + b + c);
        }
        else if (a == 1 || b == 1 || c == 1)
        {
            if (a == 1)
            {
                
                   cout << (a + b) * c;
                
            }
            if (b == 1)
            {
                if (a > c)
                {
                    cout << (c + b) * a;
                }
                else
                {
                    cout << (a + b) * c;
                }
            }
            if (c == 1)
            {
                
                 cout << (b + c) * a;
               
            }
        }
    }
    else
        cout << a * b * c;
}