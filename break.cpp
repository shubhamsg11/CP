#include<iostream>
using namespace std; 
int main()
{ 
    int i=5;
    while(i)
    { 
        cout<<"Yes I can do anything\n";
        if(i==3)
        { 
            break;
        }
        i--;
    }
    return 0; 

}