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
    vector<ll>ans(n);
    for(ll i=0;i<n;i++) cin>>v[i];
   for(ll i=n-1;i>=0;i--)
   {
     if(v[i]>0)
     {
        ll temp=v[i];
        while((i>=0) && temp)
        {
            ans[i]=1;
            temp--;
            i--;
            if(v[i]>temp)
            {
                temp=v[i];
            }
        }
     }
   }
  for(ll i=0;i<n;i++)
  {
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
