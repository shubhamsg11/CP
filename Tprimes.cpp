#include<bits/stdc++.h>
using namespace std; 
bool isprime(int );

bool tprime(long long n)
{ 
    double k=sqrt(n);
    
    if(floor(k) == ceil(k) && k != 1 )
    { 
        if(isprime(k))
            return true;
        else 
            return false;
    }
    else 
        return false; 

}
bool isprime(int k)
{       int ptalgao=0;
    for(int i=2;i<=sqrt(k);i++)
    { 
        if(k % i == 0)
            ptalgao++;
    }
    if(ptalgao == 0)
        return true;
    else 
        return false;
}


int main()
{ 
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
    { 
        if(tprime(a[i]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}