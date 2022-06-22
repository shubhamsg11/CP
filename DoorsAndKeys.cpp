#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;

    while(t--)
    { 
        char s[6];
        
        for(int i=0;i<6; i++)
        { 
            cin>>s[i];
        }

        int r =0 , g=0 , b=0;
        int i=0;
        while(i<6)
        { 
            if(s[i] =='r' || s[i] =='g' || s[i] =='b')
            {   
                if(s[i] =='r')
                r++;
                if(s[i] =='g')
                g++;
                if(s[i] =='b')
                b++;
            }
            if(s[i] =='R' || s[i]=='G' || s[i]=='B')

            { 
                if(s[i] =='R')
                { 
                    if(r==0)
                    {cout<<"No"<<endl;
                    break;
                    }
                }
                if(s[i] =='G')
                { 
                    if(g==0)
                    {cout<<"No"<<endl;
                    break;
                    }
                }
                if(s[i] =='B')
                { 
                    if(b==0)
                    {cout<<"No"<<endl;
                    break;
                    }
                }
               
        }

        if(i==5)
        cout<<"Yes"<<endl;
        i++;
        }
        
}
}