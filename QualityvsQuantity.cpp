#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;

    while(t--)
    { 
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int k=0;
        sort(a,a+n);
        int start=0,end=n-1;
        long long int b=a[start];
        long long int r=0;
        while(start<end-1)
        { 
            b+=a[start+1];
            r+=a[end];
            if(b<r)
            { 
                cout<<"Yes"<<endl;
                k=1;
                break;
            }
            start++;
            end--;   
        }

        if(k==0)
        cout<<"No"<<endl;



    }
}