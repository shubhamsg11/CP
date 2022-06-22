#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    long long int n,m;
    cin>>n>>m;
    
    long long int kmax;
    kmax=((n-m)*(n-m+1))/2;

    long long int kmin;
    long long int l=n/m;
    long long int x=n%m;

    kmin=((x)*(l+1)*(l)/2)+((m-x)*(l)*(l-1)/2);
    cout<<kmin<<" "<<kmax;

}