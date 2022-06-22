#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int m = max((a*3)/10 , a - ((a * c)/250));
    int v = max((b*3)/10 , b - ((b * d)/250));

    if(m>v)
        cout<<"Misha";
    else if(v>m)
        cout<<"Vasya";
    else 
        cout<<"Tie";
    

}