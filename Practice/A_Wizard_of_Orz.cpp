#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         int k=0;
        
        if(n<=10)
        {
            if(n>=3)
              {
                 cout<<"989";
                  n-=3;
            for(int i=0;i<=n-1;i++)
            {
              
                cout<<k;
                k++;
            }
            cout<<endl;
              } 
              else if(n==2) cout<<"98\n";
              else if(n==1) cout<<"9\n";

        }
        else 
        {
            int m=0;
             cout<<"989";
                  n-=3;
                  if(n>=10)
                  {
                    for(int i=0;i<=9;i++)
                    {
                 
                       cout<<m;
                       m++;
                       n--;
                     }

                  }
                  else 
                  {
                    for(int i=0;i<=n-1;i++)
                    {
                       
                      cout<<m;
                       m++;
                       
                     }
                     n=0;

                  }
            
            // m--;
            while(n)
            {
                
              
                if(m==10) m=0;
                  cout<<m;
                 n--;
                m++;
               
               
                

            }
            cout<<endl;
        }
    }
return 0;
}