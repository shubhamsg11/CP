#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        long long int n,s;
        cin>>n>>s;
        long long int l=pow(n,2);

        cout<< s/l <<endl;
    }
}