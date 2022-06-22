#include <bits/stdc++.h>
#include<iostream>


int main()
{ 
    int x;
    std::cin>>x;

    if((x & 1) ==0 && x!=1)
    { 
        std::cout<<"------the input is a power of two------";

    }
    else
        std::cout<<"no";

}