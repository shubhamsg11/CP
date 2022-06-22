#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int l,r,a;
        cin>>l>>r>>a;
        int maloom =0;
        if(r%a==0 ) 
        {     
           int i=r-1;
           int l=(i)/a;
           int k=(i)%a;
           cout<<k+l<<endl;
        }          
        else if(r%a!=0 && r-l>a)
        {
            for(int i=(r-a); i<r; i++)
            { 
                if(i%a==0)
                { 
                    int l=(i-1)/a;
                    int k=(i-1)%a;
                    cout<<k+l<<endl;
                    break;
                }
            }
        }

        else if(r-l<=a)
        {   

            for(int i=l+1; i <r ; i++)
            { 
            if(i%a==0)
            {
           int l=(i-1)/a;
           int k=(i-1)%a;
           cout<<k+l<<endl;
           maloom=1;
           break;
            }
           }

            if(maloom==0)
            { 
                int l=(r)/a;
           int k=(r)%a;
           cout<<k+l<<endl;
           }
           
        }
    }
}