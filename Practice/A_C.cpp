#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,cnt=0,k=0,m=0;
        cin>>a>>b>>n;
        while(a<=n)
        {
           if(a<=b)
           {
              a=a;
              b=b;
           }
           else if(a>b)
           {
                int temp=a;
                a=b;
                b=temp;

           }
           a+=b;
            cnt++;
           
            
        }
        cout<<cnt<<endl;
    }
return 0;
}