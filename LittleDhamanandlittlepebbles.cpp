 #include<iostream>
using namespace std;

int main()
{ 
    int n,k; 
    cin>>n>>k;
    int t[n];
    for(int i=0; i<n;i++)
    { 
    cin>>t[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    { 
    /* ans+=t[i]/k;                  
      if(t[i]%k!=0)
        { 
            ans++;
        } */
  if(t[i]%k==0)
  { ans+=t[i]/k;}
  else
  { ans+=(t[i]/k)+1; }  
    
    }
    if(ans%2==0)
    cout<<ans/2;
    else 
    cout<<(ans/2)+1;
    return 0;

}

 