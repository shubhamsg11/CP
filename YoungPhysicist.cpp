#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    
        int n;
        cin>>n;
        int a[n][3];
        int b[3]={0};
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<3;j++)
            {cin>>a[i][j];
            
            }
        }
       
        for(int j=0;j<3;j++)
        {    int x=0;
            for(int i=0;i<n;i++)
          {
            x+=a[i][j];
          }
          b[j]=x;
        }
        int ptachala=0;
        for(int k=0; k<3;k++)
        {  if(b[k] !=0)
            {cout<<"NO";
            ptachala=1;
            break;
            }
        }
        if(ptachala ==0)
        cout<<"YES"; 
        

}