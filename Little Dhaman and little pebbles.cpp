#include<iostream>
using namespace std;
void main()
{ 
    
    
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans += arr[i]/k;
        if(arr[i]%k!=0) ans++;
    }
    cout<<(ans/2);
}