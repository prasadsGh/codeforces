#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main ()
{
int t;
cin>>t;
while(t--)
{
ll a,b,c,d;
cin>>a>>b>>c>>d;
ll temp1=(a*d);
ll temp2=(b*c);
ll temp3=min(temp1,temp2);
temp1=max(temp1,temp2);
temp2=temp3;
ll ans=0;
if(temp1==temp2) ans=0;
else if(temp2==0) ans=1;
else if((temp1%temp2)==0) ans=1;
else  ans=2;

cout<<ans<<endl;
}
return 0;
}

