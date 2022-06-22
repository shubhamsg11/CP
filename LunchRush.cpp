#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,k;
    cin>>n>>k;
    int fun =0;
    pair<int , int > p[n];
    for(int i=0;i<n;i++)
    { 
        cin>>p[i].first>>p[i].second;
        if(p[i].second <= k)
        { 
            fun = p[i].first;  
        }
        else 
            fun = p[i].first - p[i].second + k;
    }

   

    for(int i=0;i<n;i++)
    { 
        if(k>=p[i].second)
        {   
            fun = max(fun , p[i].first);
            continue;
        }
        else 
        { 
            fun = max(fun , p[i].first - p[i].second + k);
        }

    }
    cout<<fun;
}