#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,temp=0;
    int a,b;
    while(n--)
    {
        
        cin>>a>>b;
        sum-=a;
        sum+=b;
        temp=max(sum,temp);
    }
    cout<<temp<<endl;

return 0;
}