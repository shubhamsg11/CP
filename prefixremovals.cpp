#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        string str;
        int temp;
        
        cin>>str;
        for (int i=0;i<str.length();i++){
            int k=0;
            for(int j=i+1;j<str.length();j++)
            {    
                if (str[i]==str[j])
                {
                   
                    k=1;
                    break;
                }
                
                
                
            }
            temp=i;
            if(k==0)
            break;
            
        }
        cout<<str.substr(temp)<<endl;
    }
return 0;
}