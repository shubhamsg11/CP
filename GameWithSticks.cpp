#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n,m;
    cin>>n>>m;

    int k=n*m;
    int a=-1,ma=1;
    while(k !=0)
    { 
        k-=n+m-1;
        a*=-1;
        ma*=-1;
        n-=1;
        m-=1;


    }
    if(a==1)
    cout<<"Akshat";
    else 
    cout<<"Malvika";

}
