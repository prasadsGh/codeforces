#include <bits/stdc++.h>
using namespace std;
#define ll long long 


bool comp(pair<ll,string>&a, pair<ll,string>&b)
{
    
    if(abs(a.first-b.first)>10)
    {
      
        return a.first>b.first;
       
    }
    else  return a.second <b.second;

}
void dontquit()
{
    ll n; cin>>n;
    string s; 
    ll a,b,c,d;
    map<string,vector<ll>>mp;
    for(ll i=0;i<n;i++)
    { 
        vector<ll>v;
        cin>>s;
        cin>>a>>b>>c>>d;
        mp[s]={a,b,c,d};
    }

    vector<pair<ll,string>>vp;

      for(auto j:mp)
    {
        ll sum=0;
        for(ll i=0;i<4;i++)
        {
            // cout<<j.second[i]<<" ";
            sum+=j.second[i];
        }
        
        vp.push_back({sum,j.first});
    }

   sort(vp.begin(),vp.end(),comp);
   
     for(ll i=0;i<vp.size();i++)
    {
       cout<<vp[i].second<<" "<<vp[i].first<<" ";
       for(ll j=0;j<4;j++)
       {
        cout<<mp[vp[i].second][j]<<" ";
       }
       cout<<endl;
    }



}
int main()
{
ll t=1;
// cin>>t;
while(t--)
{
dontquit();
}
return 0;
}