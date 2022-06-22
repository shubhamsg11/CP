#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n;
    cin>>n;
    int t[n];
    int a=0,b=0,c=0;
    for(int i=0; i<n; i++)
    {    cin>>t[i];
         if(t[i] == 1)  
            a++;
        else if(t[i] == 2)
            b++;
        else 
            c++;
    }
    int k = min(a, min(b,c));
    cout<<k<<endl;

    int p[k]={0},m[k]={0},o[k]={0};
     int x=0,y=0,z=0,i=0; 
        for(int j=0;j<n;j++)
        {   
        
            if(t[j]==1 && x<k)
            {    
                 p[i+x] = j+1;
                 x++;
                 continue;
            } 
            else if( t[j] ==2 && y<k)
            {   m[i+y] = j+1;
                y++;
                continue;
            }
            else if( t[j] == 3 && z == 0)
            {    o[i+z] = j+1 ;
                 z++;
                 continue;
            }
        }

     for(int l=0;l<k;l++)
    { 
        cout<<p[i]<<" "<<m[i]<<" "<<o[i]<<endl;
    }


    }

   
    
