/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n,x; cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll mx=0,mn=0;
    for(ll i=0;i<n;i++)
    {
        if((v[i]%x)!=0)
        {
            mx+=((v[i]/x)+1);
        }
        else
        {
            mx+=(v[i]/x);
        }
    }
    ll temp=0;
    for(ll i=0;i<n;i++)
    {
        temp+=(v[i]%x);
        mn+=(v[i]/x);
    }
    mn+=(temp/x);
    if((temp%x)!=0) mn++;
    cout<<mn<<" "<<mx<<endl;
}           

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
