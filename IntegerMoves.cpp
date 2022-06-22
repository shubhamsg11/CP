#include<bits/stdc++.h>
using namespace std;

bool isperfecto(int a,int b)
{ 
    int k=(a*a)+(b*b);
    if(ceil(double(sqrt(k))) == floor((double(sqrt(k)))))
    return true;
    else 
    return false;
}

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { 
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0)
        cout<<"0"<<endl;

        else if(x==0 && y!=0 || x!=0 && y==0)
        cout<<"1"<<endl;
        else if(isperfecto(x,y))
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
    }
}