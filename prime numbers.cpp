#include<iostream>
using namespace std;
void main() 
{ 
    int x;
    cin>>x;
    int a[x],c[x];
    for(int i=0;i<x;i++)
    { 
        a[i]=i+2;
    }
    for(int i=0;i<x;i++)
    { 
        for(int j=2;j<a[i]; j++)
        { 
            if(a[i]%j==0)
            {a[i]=0;}
        }
    }
    cout<<"The prime numbers are :";
    for(int i=0;i<x; i++)
    { 
        if(a[i]!=0)
        { cout<< a[x] ; }
    }
}