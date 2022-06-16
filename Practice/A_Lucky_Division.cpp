#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int flag=0;
    if((n%4)==0 or (n%7)==0 or (n%47)==0 or (n%74)==0  or (n%477)==0  or (n%747)==0  or (n%774)==0  or (n%447)==0 or (n%474)==0 )
    {
        flag=1;
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}