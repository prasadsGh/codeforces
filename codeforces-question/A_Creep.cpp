#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int d=max(a,b)-min(a,b);
        for(int i=0;i<min(a,b);i++)
        {
            cout<<"10";
        }
        if(a>b)
        {
        for(int i=0;i<d;i++)
        {
            cout<<"0";
        }
        }
        if(b>a)
        {
            for(int i=0;i<d;i++)
            {
                cout<<"1";

            }
            
        }
        cout<<endl;


        
    }
return 0;
}