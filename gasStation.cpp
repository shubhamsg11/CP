int main()


int Solution::canCompleteCircuit(const vector<int> &a, const vector<int> &b) {

    for(int i=0;i<a.size();i++)
    { 
        std::cin>>a[i];
    }
    for(int i=0;i<a.size();i++)
    { 
        std::cin>>b[i];
    }
    int l=0;
    for(int i=0;i<a.size();i++)
    {  int x=0;
     for(int j=i; j<i+a.size();j++)
     { 
         x+=a[j];
         if(x>b[j])
         { 
            x-=b[j];
          if(j=i+a.size()-1)
          { k=i;
            break;
          }


         }
        else
        {continue;}
     }

    }    

    return k;




}




    
    




}
