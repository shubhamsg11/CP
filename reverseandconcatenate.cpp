#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str)
{ 
    int k=0,l=str.length()-1;
    int check=0;
    while(k<l)
    { 
        if(str[k] != str[l])
            {check=1;
            break;}
        k++;
        l--;

    }
    if(check==0)
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
        cout<<"1"<<endl;
        else if(ispalindrome(s))
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;


    }
    return 0;
}