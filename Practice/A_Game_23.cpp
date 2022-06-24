#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int k=(m/n);
    int x=2,y=3;
    int count=0;
    while(k%2==0 && k!=0)
    {
        count++;
        k/=2;
    }
    while((k%3)==0 && k!=0)
    {
        count++;
        k/=3;
    }
    if(k==0)
    {
        cout<<count<<endl;
    }
    else cout<<"-1\n";

return 0;
}