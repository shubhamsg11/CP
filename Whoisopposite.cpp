#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int n = abs(a - b) * 2 ;

        if( a > n || b > n || c > n )
            cout<<-1<<endl;
        else 
        { 
            int d = (c + n/2) % n ;
            if( d == 0)
            cout<<d+n <<endl;
            else 
            cout<<d <<endl;
        }
    }
}