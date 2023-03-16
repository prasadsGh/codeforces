/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    deque<pair<ll,ll>>d;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        d.push_back({x,i+1});
    }
    sort(d.begin(),d.end());
    vector<pair<ll,ll>>vp;
     if(d[0].first==d[n-1].first)
    {
        cout<<0<<endl;
        return;
    }
    if(d[0].first==1)
    {
        cout<<-1<<endl;
        return;
    }
   ll j=n;
    while(d[0].first!=d[n-1].first)
    {
        ll temp=d[n-1].first;
        ll id=d[n-1].second;
        d.pop_back();
        ll ans=(temp/(d[0].first));
        if((temp%(d[0].first))!=0) ans++;
        d.push_back({ans,id});
        // j--;
        vp.push_back({id,d[0].second});
        sort(d.begin(),d.end());
    
    }
    // for(auto i:d) cout<<i.first<<" ";
    // cout<<endl;
    cout<<vp.size()<<endl;
    for(auto i:vp) cout<<i.first<<" "<<i.second<<endl;


}


int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
