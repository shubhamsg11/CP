#include<bits/stdc++.h>
using namespace std;

void reverse(int x[] , int start , int end )
{ 

    while(start<end)
    { 
        int temp ;
        temp = x[start];
        x[start]=x[end];
        x[end]=temp;
        start++;
        end--;
    }

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
            b[i]=a[i];
        }

        sort(b, b+n);
        int x=0, y=0, k=0;
        for(int i=0;i<n;i++)
        { 
            if(b[i]<a[i])
            { 
                 x=b[i];
                 y=a[i];
                 k=i;
                 break;
            }
        }
        int l=0;
        for(int i=0;i<n;i++)
        { 
            if(a[i]==x)
            { 
              l=i;
              break;
            } 
        }

        reverse(a, k , l);
        
        for(int i=0;i<n;i++)
        { 
            cout<<a[i]<<" ";
        }
    }
}