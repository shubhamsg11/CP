#include<bits/stdc++.h>
using namespace std;
int x1,x2,x3,y1,y2,y3;
float m1,m2,m3;

 int f1(int x, int y)
        { 
            return (y-y1)-m1*(x-x1);
        }
 int f2(int x, int y)
        { 
            return (y-y2)-m2*(x-x2);
        }
 int f3(int x, int y)
        { 
            return (y-y3)-m3*(x-x3);
        }


int main()
{ 
    int t;
    cin>>t;

    while(t--)
    {
        

        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;

        
        m1 = (y2-y1)/(x2-x1);
        m2 = (y3-y2)/(x3-x2);
        m3 = (y1-y3)/(x1-x3);

       

        if(m1 !=0 || m2 !=0 || m3 !=0 )
        { 
            cout<<"0";
        }
        else
        { 
            if(m1 ==0)
            { 
                if(f1(x3,y3)*f1(0,0)<0)
                cout<<"0";
                else
                cout<<sqrt(pow((y2-y1),2)+pow((x2-x1),2));
            }
            if(m2 ==0)
            { 
                if(f2(x1,y1)*f1(0,0)<0)
                cout<<"0";
                else
                cout<<sqrt(pow((y3-y2),2)+pow((x3-x2),2));
            }
            if(m3 ==0)
            { 
                if(f3(x2,y2)*f1(0,0)<0)
                cout<<"0";
                else
                cout<<sqrt(pow((y1-y3),2)+pow((x1-x3),2));
            }
        }



    }
