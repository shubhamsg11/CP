#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,m;
    cin>>n>>m;
    char a[n][m];
    bool k = true;
    bool dekho;
    for(int i=0;i<n;i++)
    {   if(i%2) dekho = false; 
        else dekho = true;
        for(int j=0;j<m;j++)
        {
            if(dekho)
            { 
                a[i][j]='#';
            }
            else
            { 
                if(k)
                { 
                    if(j==m-1) {a[i][j]='#'; k=false;}
                    else a[i][j]='.';
                }
                else 
                { 
                    if(j==0) a[i][j]='#';
                    else a[i][j]='.';
                    if(j==m-1) k=true;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        { 
            cout<<a[i][j];
        }
        cout<<endl;
    }
}