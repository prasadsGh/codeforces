/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{  
    ll n,m; cin>>n>>m;
    vector<pair<ll,ll>>v(n),v1(m);
       map<ll,ll>mp;
    map<ll,ll>mp1;
    map<pair<ll,ll>,ll>mp2,mp3;
    for(ll i=0;i<n;i++)
    {
        ll x,y; cin>>x>>y;
        v[i]={x,y};
        mp[y]++;
        mp2[{x,y}]++;
    }
     for(ll i=0;i<m;i++)
    {
        ll x,y; cin>>x>>y;
        v1[i]={x,y};
        mp1[y]++;
        mp3[{x,y}]++;
    }
 
    ll count=0;
    
    for(auto i:mp) 
    {
        if(mp1.find(i.first)!=mp1.end())
        {
            count+=min(i.second,mp1[i.first]);
        }
    }
    ll count1=0;
    for(auto i:mp2) 
    {
        if(mp3.find(i.first)!=mp3.end())
        {
            count1+=min(i.second,mp3[i.first]);
        }
    }
    cout<<count<<" "<<count1<<endl;

}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
