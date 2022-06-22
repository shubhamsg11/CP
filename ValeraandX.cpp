#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n ; 
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        { 
            cin>>a[i][j];
        }
    }

    char c = a[0][0] , t = a[0][1];
    bool ans = true ;

    if(c==t)
    { 
        cout<<"NO";
        return 0;
    }
    
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        {   if(!ans) break;
            if(i==j)
            { 
                if(a[i][j]==c)
                    continue;
                else 
                { 
                    cout<<"NO";
                    ans = false ; 
                    break ;
                }
            }
            else if( i+j == n-1 )
            { 
               if(a[i][j]==c)
                    continue;
                else 
                { 
                    cout<<"NO";
                    ans = false ; 
                    break ;
                } 
            }
            else 
            { 
                if(a[i][j]==t) continue ; 
                else 
                {   cout<<"NO";
                    ans = false ; 
                    break ;
                }
            }
        }
    }

    if(ans)
    cout<<"YES";
    }

