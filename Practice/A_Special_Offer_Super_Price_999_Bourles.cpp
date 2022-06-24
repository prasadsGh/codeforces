#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int temp=0;
    int z=1;
    temp=(n%(10));
    int temp1=0;
    while((temp+1)<=x)
    {
        
         z*=10;
         temp1=temp;
         temp=n%z;

    }
    if(temp1!=0)
    {
        cout<<n-temp1-1<<endl;
    }
    else cout<<n<<endl;
    
return 0;
}