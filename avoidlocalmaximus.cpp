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
        int a[n];
        
        // Inputting the array // 
        for(int i=0;i<n;i++)
        { 
            cin>>a[i];
        }
        
        int x=0;
        for(int i=1;i<n-1;i++)
        { 
            if(a[i]>a[i-1] && a[i]>a[i+1])
            { 
                a[i+1]=max(a[i+2],a[i]);
                    x++;
            }
        }
    
        cout<<endl<<x<<endl;
       // Printing the final array //
        for(int i=0;i<n;i++)
        { 
            cout<<a[i]<<" ";
        }
    
    
    
    
    } 


}