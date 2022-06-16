#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n,m,a;
    cin>>n>>m>>a;
    long long cnt1=0,cnt2=0;
  
    if(n%a==0) cnt1=(n/a);
    else cnt1=((n/a)+1);
    if(m%a==0) cnt2=(m/a);
    else cnt2=((m/a)+1);

    cout<<(cnt1*cnt2)<<endl;
return 0;
}