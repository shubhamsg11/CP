#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n;
    cin>>n;
    int a[]={4,7,47,74,444,447,474,477,777,774,747,744};
    int k=0;
    for(int i=0;i<12;i++)
    { 
        if(n%a[i]==0)
        { 
            cout<<"YES";
            k=1;
            break;
        }

    }
    if(k==0)
    cout<<"NO";
}