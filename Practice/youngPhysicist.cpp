#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int n;
    cin>>n;
    int s1=0,s2=0,s3=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;

    }
    if(s1==0 and s2==0 and s3==0) cout<<"YES\n";
    else cout<<"NO\n";
return 0;
}