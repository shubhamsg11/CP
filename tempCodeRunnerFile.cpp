#include<bits/stdc++.h>
using namespace std; 
int max(vector <int> k, int n)
{   int x = k[1]-k[0];
    for(int i=1;i<n-1;i++)
    { 
        if(k[i+1]-k[i]>x)
        { 
            x=k[i+1]-k[i];
        }
    }
    return x;
}

int main()
{ 
    int n,c; 
    cin>>n>>c; 

    vector <int> v;
    for(int i=0;i<n;i++)
    {   int x;
        cin>>x;
        v.push_back(x);
    }

    int k=max(v,v.size());

    cout<<k-c;
}
