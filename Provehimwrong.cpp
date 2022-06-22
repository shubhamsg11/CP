#include<bits/stdc++.h>
using namespace std;
int k=pow(10,9);
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
        int l=9/(log10(3));

        if(l>k)
        cout<<"NO"<<endl;

        else
        { 
            cout<<"YES"<<endl;
            int a[n];
            a[0]=1;
            for(int i=1;i<n;i++)
            a[i]=3*a[i-1];
            
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";

            cout<<endl;
        }

         
    }
 
}
