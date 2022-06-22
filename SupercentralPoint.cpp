#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n; 
    cin>>n;
    pair<int , int> p[n];
    for(int i=0;i<n;i++)
    { 
        cin>>p[i].first>>p[i].second;
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {   int r = 0 , l = 0 , u = 0 , b = 0 ;
        for(int j=0;j<n;j++)
        { 
            if(p[i].first<p[j].first && p[i].second == p[j].second)
                r++;
            if(p[i].first>p[j].first && p[i].second == p[j].second)
                l++;
            if(p[i].first == p[j].first && p[i].second > p[j].second)
                b++;
            if(p[i].first == p[j].first && p[i].second < p[j].second)
                u++;
        }
        if(r>=1 && l>=1 && u>=1 && b>=1)
            ans++;
    }

    cout<<ans;
}