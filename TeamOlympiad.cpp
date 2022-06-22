#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n;
    cin>>n; 
    int a=0,b=0,c=0;
    int t[n];
    for(int i=0;i<n;i++)
    {    cin>>t[i];
        if(t[i]==1)
            a++;
        else if(t[i]==2)
            b++;
        else 
            c++;
    }

    int k=min(a , min(b,c));
    pair<int , vector> p[3];
    for(int i=0;i<n;i++)
    {   if(t[i]==1)
        { 
            p[t[i]-1].first = t[i];
            p[t[i]-1].second.push_back(i+1);
        }
          else if(t[i]==2)
        { 
            p[t[i]-1].first = t[i];
            p[t[i]-1].second.push_back(i+1);
           
        }
          else 
        { 
            p[t[i]-1].first = t[i];
            p[t[i]-1].second.push_back(i+1);
        }
    }

    for(int i=0;i<k;i++)
    { 
        cout<<p[0].second[i]<<" "<<p[1].second[i]<<" "<<p[2].second[i]<<" ";
    }
    

    


}