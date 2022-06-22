#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    { 
        int N,K,p;
        cin>>N>>p>>K;
        int ans=0;
        int l=p%K;
        for(int i=0;i<N;i++)
        { 
            if(i%K==l)
            { 
             ans++;
             if(i==p)
             { break;}   
            }
        }
        

        if(l!=0)
        { cout<<(ans+((N-1)/K)+1)<<endl;}
        else
        { cout<<ans<<endl;}
    
    
    }

}