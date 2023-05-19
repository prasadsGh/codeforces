#include <bits/stdc++.h>
using namespace std;

int main(){
    
    
        int n,m;
        cin>>n>>m;
        int i=1,flag=0;
        while(i<=n)
        {
            if(i%2==1)
            {
                for(int i=0;i<m;i++)
                {
                    cout<<"#";
                }
                cout<<endl;
            }
            if(i%2==0)
            {
                if(flag==0)
                {
                    
                    for(int i=0;i<m-1;i++)
                    {
                        cout<<".";
                    }
                    cout<<"#";
                    cout<<endl;
                    flag=1;
                    
                }
                else if(flag==1)
                {
                      cout<<"#";
                    for(int i=0;i<m-1;i++)
                    {
                        cout<<".";
                    }
                  
                    cout<<endl;
                    flag=0;
                }

            }
            i++;
        }
    
return 0;
}