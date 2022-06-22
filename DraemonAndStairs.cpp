#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
  
    int itnesteps;

    if(m>n)
        itnesteps =-1;
    else{ 
        if(n%2)
            itnesteps=n/2+1;
        else 
            itnesteps = n/2;
        
        while(itnesteps % m >0)
            itnesteps++;
    }    

    cout<<itnesteps;   
}