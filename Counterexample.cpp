#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int x,y;
    cin>>x>>y;

    if(x % 2 != 0)
        x++;
    
    if(x+2>y)
        cout<<-1;
    else 
        cout<<x<<" "<<x+1<<" "<<x+2;

    // If there is a prime in between l and r then it is sure shot that there exists a pair of numbers (a,b) , (b,c) , (c,a) such that they are coprime in pairs .

    // An even and an odd number is always coprime in nature 


}