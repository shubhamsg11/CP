#include<bits/stdc++.h>
using namespace std;
int btao ( int a[] , char c)
{ 
    return a[int (c -'a')];
}
int main()
{ 
    string s;
    cin>>s;
    int n ; 
    cin>>n;

    int a[26];
    for(int i=0;i<26;i++)
        cin>>a[i];
    
    int k = 0 ; 

    for(int i=0;i<s.length();i++)
    { 
        k+=(i+1)*btao(a , s[i]);
    }

    sort(a,a+26);
    k+=a[25]*(n*s.length() + (n*(n+1)/2) );
    cout<<k;


}