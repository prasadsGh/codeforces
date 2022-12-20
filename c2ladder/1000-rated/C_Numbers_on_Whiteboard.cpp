#include <bits/stdc++.h>
using namespace std;
int divn(int n,int i)
{
    if(n%i==0) return n/i;
    else return ((n/i)+1);
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"2\n";
        int a=n,b=n-1;
        int res=divn((a+b),2);
        cout<<n<<" "<<n-1<<endl;
        for(int i=n-2;i>=1;i--)
        {
            cout<<res<<" "<<i<<endl;
            res=divn((res+i),2);  
             
        }
    }
return 0;
}