#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    
    sort(p , p+n);    
    for(int i=0;i<n;i++)
    {    
        cout<<p[i].first<<" "<<p[i].second<<endl;
        if(p[0].first < p[i].first && p[0].second > p[i].second)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }

    cout<<"Poor Alex";
    return 0;

}

  