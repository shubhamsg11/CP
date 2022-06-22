#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
        if(n%7==0){
            cout<<n<<nl;
        }
        else 
        { 
        int x=n/10;
        for(int i=x*10;i<=(x*10)+9;i++)
        {
            if(i%7==0)
            { 
                cout<<i<<nl;
                break;  
            }
        }
        }

        
       
    }

    return 0;
}