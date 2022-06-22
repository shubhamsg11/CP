#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int a ,b; 
    cin>>a>>b;
    int ans[3]={0};

    for(int i=1;i<=6;i++)
    { 
        if(abs(a-i) < abs(b-i))
            ans[0]++;
        else if(abs(a-i) > abs(b-i)) 
            ans[2]++;
        else 
            ans[1]++;
    }

    for(int i=0;i<3;i++)
        cout<<ans[i]<<" ";
}