#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int d;

    if ((x1 == x2) && (y2 > y1))
    {
        d = y2 - y1;
        cout << (x1 + d) << " " << y1 << " " << (x2 + d) << " " << y2;
    }
    else if ((x1 == x2) && (y1 > y2))
    {
        d = y1 - y2;
        cout << (x1 + d) << " " << y1 << " " << (x2 + d) << " " << y2;
    }
    else if ((y1 == y2) && (x1 > x2))
    {
        d = x1 - x2;
        cout << x1 << " " << (y1 + d) << " " << (x2) << " " << (y2 + d);
    }
    else if ((y1 == y2) && (x1 < x2))
    {
        d = x2 - x1;
        cout << x1 << " " << (y1 + d) << " " << (x2) << " " << (y2 + d);
    }
    else 
    { 
        if(abs(x2 - x1) == sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/2))
            cout << (x1) << " " << (y2) << " " << (x2) << " " << (y1);
        else 
            cout<<-1;
    }


    return 0;
}