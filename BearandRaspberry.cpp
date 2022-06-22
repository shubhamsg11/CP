#include<bits/stdc++.h>
using namespace std; 
int max(vector <int> k, int n)
{   int x = k[0]-k[1];
    for(int i=1;i<n-1;i++)
    { 
        if(k[i]-k[i+1]>x)
        { 
            x=k[i]-k[i+1];
        }
    }

    if(x<=0)
        return 0;

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

    if(k-c<=0)
        cout<<"0";
    else 
        cout<<k-c;
}
