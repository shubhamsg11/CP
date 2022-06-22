#include<iostream>
#include<math.h>
using namespace std; 
int main()
{ 
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    { 
        cin>>b[i];
    }
    int a[n]={0};
    for(int i=0;i<n;i++)
    { 
        a[0]+=pow(-1,i)*b[i];
        
    }
    a[0]/=2;
  
    for(int i=1;i<n;i++)
    { 
        a[i] = b[i-1]-a[i-1];
    }
     for(int i=0;i<n;i++)
     { 
        cout<<(2*a[i])<<" ";
     }
    return 0;


}