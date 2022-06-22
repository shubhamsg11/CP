#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;

    while(t--)
    { 
        char s[49];
        cin>>s;
        char c;
        cin>>c;
        int k=0;
        for(int i=0;s[i] !='\0' ; i++ )
        { 
            if(s[i]== c)
            { 
                if(i%2==0)
                {cout<<"Yes"<<endl;
                    k=1;
                    break;
                }
            }
        }

        if(k==0)
        cout<<"NO"<<endl;
    }
}