#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;

    while(t--)
    {   
      string s;
      cin>>s;

      if(s.length()%2 != 0)
      cout<<"NO"<<endl;
      else
      { 
        int i=0,j=(s.length()/2);
        int k=0;
        while(i<(s.length()/2))
        { 
            if(s[i] != s[j])
            {cout<<"NO"<<endl;
            k=1;
            break;
            }
            i++;
            j++;

        }
        if(k==0)
        cout<<"YES"<<endl;
      }

    }
}