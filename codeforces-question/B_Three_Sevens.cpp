/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int t;
    cin>>t;
    map<int,pair<int,int>>mp;
    
    for(int i=0;i<t;i++)
    {
        int n; cin>>n;
        for(int j=0;j<n;j++)
        {
            int x; cin>>x;
            mp[x]={i,j};
        }
    }
    vector<pair<int,int>>vp;
    for(auto i:mp)
    {
        vp.push_back(i.second);
    }
    sort(vp.begin(),vp.end());
    int count=0;
    vector<int>hash(vp.size(),0);

    for(int i=0;i+1<vp.size();i++)
    {
        if(vp[i].first==vp[i+1].first)
        {
            hash[i]=1;
            count++;
        }
    }
    
    vector<pair<pair<int,int>,int>>vpp;
    for(auto i:mp)
    {
        vpp.push_back({i.second,i.first});
    }
   
    sort(vpp.begin(),vpp.end());
    vector<int>ans;
    for(int i=0;i<vpp.size();i++)
    {
        if(hash[i]==0)
        ans.push_back(vpp[i].second);
    }
    if(ans.size()<t)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

signed main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
