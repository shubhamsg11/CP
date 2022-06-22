#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int c = 0, bi = 0 , ba = 0 ; 

    for(int i=0;i<n;i++)
    { 
        if(i % 3 == 0)
            c+=a[i];
        else if(i % 3 == 1)
            bi+=a[i];
        else 
            ba+=a[i]; 
    }

    if(c == max(c,max(bi,ba)))
        cout<<"chest";
    else if(bi == max(c,max(bi,ba)))
        cout<<"biceps";
    else if(ba == max(bi , max(c,ba)))
        cout<<"back";
}