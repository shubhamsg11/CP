#include<bits/stdc++.h> 
using namespace std;

int max(int a[], int n)
{ 
    int max;
    max=a[0];
    for(int i=0;i<n;i++)
    { 
        if(a[i]>max)
        { 
            max=a[i];
        }
    }

    return max;
}




int main()
{ 
    int t;
    cin>>t;

    while(t--)
    { 
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        { 
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        { 
            cin>>b[i];
        }

        for(int i=0;i<n;i++)
        { 
            if(a[i]>b[i])
            { 
                swap(a[i],b[i]);
            }
        }
    
        int a1 ,b1 ;
        a1=max(a,n);
        b1=max(b,n);

        cout<<a1*b1<<endl;
    }
}