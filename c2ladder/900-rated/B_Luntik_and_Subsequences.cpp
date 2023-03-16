/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    vector<ll>v(n);
    ll count=0;
    ll count1=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0) count++;
        if(v[i]==1) count1++;
    }
    ll ans=count1*pow(2,count);
    cout<<ans<<endl;
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
