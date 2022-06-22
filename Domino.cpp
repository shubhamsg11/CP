#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    int odd1 = 0, odd2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i].first % 2 != 0 && a[i].second % 2 == 0 || a[i].first % 2 == 0 && a[i].second % 2 != 0)
            odd1++;
        else if(a[i].first % 2 != 0 && a[i].second % 2 !=0)
            odd2++;
        
    }

    if(odd1 == 0 && odd2== 0 ) cout<<0;
    else if(odd1 ==0 && odd2 != 0 )
    { 
        if(odd2 % 2 ==0) cout<<1;
        else cout<<-1;
    }
    else if(odd1 != 0 && odd2 == 0)
    {
        if(odd1 % 2 == 0 ) cout<<1;
        else cout<<-1;
    }
    else 
    { 
        if(odd1 % 2 == 0 && odd2 % 2 != 0 || odd1 % 2 !=0 && odd2 % 2 ==0) cout<<-1;
        else if(odd1 % 2 !=0 && odd2 % 2 !=0 ) cout<<-1;
        else cout<<1;

    }


}